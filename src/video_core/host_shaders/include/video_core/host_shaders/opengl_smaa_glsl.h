// SPDX-FileCopyrightText: 2020 yuzu Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include <string_view>

namespace HostShaders {

constexpr std::string_view OPENGL_SMAA_GLSL = {
R"(// SPDX-FileCopyrightText: 2013 Jorge Jimenez (jorge@iryoku.com)
)" R"(// SPDX-FileCopyrightText: 2013 Jose I. Echevarria (joseignacioechevarria@gmail.com)
)" R"(// SPDX-FileCopyrightText: 2013 Belen Masia (bmasia@unizar.es)
)" R"(// SPDX-FileCopyrightText: 2013 Fernando Navarro (fernandn@microsoft.com)
)" R"(// SPDX-FileCopyrightText: 2013 Diego Gutierrez (diegog@unizar.es)
)" R"(// SPDX-License-Identifier: MIT
)" R"(
)" R"(/**
)" R"( *                  _______  ___  ___       ___           ___
)" R"( *                 /       ||   \/   |     /   \         /   ; *                |   (---- |  \  /  |    /  ^  \       /  ^  ; *                 \   \    |  |\/|  |   /  /_\  \     /  /_\  ; *              ----)   |   |  |  |  |  /  _____  \   /  _____  ; *             |_______/    |__|  |__| /__/     \__\ /__/     \__; *
)" R"( *                               E N H A N C E D
)" R"( *       S U B P I X E L   M O R P H O L O G I C A L   A N T I A L I A S I N G
)" R"( *
)" R"( *                         http://www.iryoku.com/smaa/
)" R"( *
)" R"( * Hi, welcome aboard!
)" R"( *
)" R"( * Here you'll find instructions to get the shader up and running as fast as
)" R"( * possible.
)" R"( *
)" R"( * IMPORTANTE NOTICE: when updating, remember to update both this file and the
)" R"( * precomputed textures! They may change from version to version.
)" R"( *
)" R"( * The shader has three passes, chained together as follows:
)" R"( *
)" R"( *                           |input|------------------+
)" R"( *                              v                     |
)" R"( *                    [ SMAA*EdgeDetection ]          |
)" R"( *                              v                     |
)" R"( *                          |edgesTex|                |
)" R"( *                              v                     |
)" R"( *              [ SMAABlendingWeightCalculation ]     |
)" R"( *                              v                     |
)" R"( *                          |blendTex|                |
)" R"( *                              v                     |
)" R"( *                [ SMAANeighborhoodBlending ] <------+
)" R"( *                              v
)" R"( *                           |output|
)" R"( *
)" R"( * Note that each [pass] has its own vertex and pixel shader. Remember to use
)" R"( * oversized triangles instead of quads to avoid overshading along the
)" R"( * diagonal.
)" R"( *
)" R"( * You've three edge detection methods to choose from: luma, color or depth.
)" R"( * They represent different quality/performance and anti-aliasing/sharpness
)" R"( * tradeoffs, so our recommendation is for you to choose the one that best
)" R"( * suits your particular scenario:
)" R"( *
)" R"( * - Depth edge detection is usually the fastest but it may miss some edges.
)" R"( *
)" R"( * - Luma edge detection is usually more expensive than depth edge detection,
)" R"( *   but catches visible edges that depth edge detection can miss.
)" R"( *
)" R"( * - Color edge detection is usually the most expensive one but catches
)" R"( *   chroma-only edges.
)" R"( *
)" R"( * For quickstarters: just use luma edge detection.
)" R"( *
)" R"( * The general advice is to not rush the integration process and ensure each
)" R"( * step is done correctly (don't try to integrate SMAA T2x with predicated edge
)" R"( * detection from the start!). Ok then, let's go!
)" R"( *
)" R"( *  1. The first step is to create two RGBA temporal render targets for holding
)" R"( *     |edgesTex| and |blendTex|.
)" R"( *
)" R"( *     In DX10 or DX11, you can use a RG render target for the edges texture.
)" R"( *     In the case of NVIDIA GPUs, using RG render targets seems to actually be
)" R"( *     slower.
)" R"( *
)" R"( *     On the Xbox 360, you can use the same render target for resolving both
)" R"( *     |edgesTex| and |blendTex|, as they aren't needed simultaneously.
)" R"( *
)" R"( *  2. Both temporal render targets |edgesTex| and |blendTex| must be cleared
)" R"( *     each frame. Do not forget to clear the alpha channel!
)" R"( *
)" R"( *  3. The next step is loading the two supporting precalculated textures,
)" R"( *     'areaTex' and 'searchTex'. You'll find them in the 'Textures' folder as
)" R"( *     C++ headers, and also as regular DDS files. They'll be needed for the
)" R"( *     'SMAABlendingWeightCalculation' pass.
)" R"( *
)" R"( *     If you use the C++ headers, be sure to load them in the format specified
)" R"( *     inside of them.
)" R"( *
)" R"( *     You can also compress 'areaTex' and 'searchTex' using BC5 and BC4
)" R"( *     respectively, if you have that option in your content processor pipeline.
)" R"( *     When compressing then, you get a non-perceptible quality decrease, and a
)" R"( *     marginal performance increase.
)" R"( *
)" R"( *  4. All samplers must be set to linear filtering and clamp.
)" R"( *
)" R"( *     After you get the technique working, remember that 64-bit inputs have
)" R"( *     half-rate linear filtering on GCN.
)" R"( *
)" R"( *     If SMAA is applied to 64-bit color buffers, switching to point filtering
)" R"( *     when accessing them will increase the performance. Search for
)" R"( *     'SMAASamplePoint' to see which textures may benefit from point
)" R"( *     filtering, and where (which is basically the color input in the edge
)" R"( *     detection and resolve passes).
)" R"( *
)" R"( *  5. All texture reads and buffer writes must be non-sRGB, with the exception
)" R"( *     of the input read and the output write in
)" R"( *     'SMAANeighborhoodBlending' (and only in this pass!). If sRGB reads in
)" R"( *     this last pass are not possible, the technique will work anyway, but
)" R"( *     will perform antialiasing in gamma space.
)" R"( *
)" R"( *     IMPORTANT: for best results the input read for the color/luma edge
)" R"( *     detection should *NOT* be sRGB.
)" R"( *
)" R"( *  6. Before including SMAA.h you'll have to setup the render target metrics,
)" R"( *     the target and any optional configuration defines. Optionally you can
)" R"( *     use a preset.
)" R"( *
)" R"( *     You have the following targets available:
)" R"( *         SMAA_HLSL_3
)" R"( *         SMAA_HLSL_4
)" R"( *         SMAA_HLSL_4_1
)" R"( *         SMAA_GLSL_3 *
)" R"( *         SMAA_GLSL_4 *
)" R"( *
)" R"( *         * (See SMAA_INCLUDE_VS and SMAA_INCLUDE_PS below).
)" R"( *
)" R"( *     And four presets:
)" R"( *         SMAA_PRESET_LOW          (%60 of the quality)
)" R"( *         SMAA_PRESET_MEDIUM       (%80 of the quality)
)" R"( *         SMAA_PRESET_HIGH         (%95 of the quality)
)" R"( *         SMAA_PRESET_ULTRA        (%99 of the quality)
)" R"( *
)" R"( *     For example:
)" R"( *         #define SMAA_RT_METRICS float4(1.0 / 1280.0, 1.0 / 720.0, 1280.0, 720.0)
)" R"( *         #define SMAA_HLSL_4
)" R"( *         #define SMAA_PRESET_HIGH
)" R"( *         #include "SMAA.h"
)" R"( *
)" R"( *     Note that SMAA_RT_METRICS doesn't need to be a macro, it can be a
)" R"( *     uniform variable. The code is designed to minimize the impact of not
)" R"( *     using a constant value, but it is still better to hardcode it.
)" R"( *
)" R"( *     Depending on how you encoded 'areaTex' and 'searchTex', you may have to
)" R"( *     add (and customize) the following defines before including SMAA.h:
)" R"( *          #define SMAA_AREATEX_SELECT(sample) sample.rg
)" R"( *          #define SMAA_SEARCHTEX_SELECT(sample) sample.r
)" R"( *
)" R"( *     If your engine is already using porting macros, you can define
)" R"( *     SMAA_CUSTOM_SL, and define the porting functions by yourself.
)" R"( *
)" R"( *  7. Then, you'll have to setup the passes as indicated in the scheme above.
)" R"( *     You can take a look into SMAA.fx, to see how we did it for our demo.
)" R"( *     Checkout the function wrappers, you may want to copy-paste them!
)" R"( *
)" R"( *  8. It's recommended to validate the produced |edgesTex| and |blendTex|.
)" R"( *     You can use a screenshot from your engine to compare the |edgesTex|
)" R"( *     and |blendTex| produced inside of the engine with the results obtained
)" R"( *     with the reference demo.
)" R"( *
)" R"( *  9. After you get the last pass to work, it's time to optimize. You'll have
)" R"( *     to initialize a stencil buffer in the first pass (discard is already in
)" R"( *     the code), then mask execution by using it the second pass. The last
)" R"( *     pass should be executed in all pixels.
)" R"( *
)" R"( *
)" R"( * After this point you can choose to enable predicated thresholding,
)" R"( * temporal supersampling and motion blur integration:
)" R"( *
)" R"( * a) If you want to use predicated thresholding, take a look into
)" R"( *    SMAA_PREDICATION; you'll need to pass an extra texture in the edge
)" R"( *    detection pass.
)" R"( *
)" R"( * b) If you want to enable temporal supersampling (SMAA T2x):
)" R"( *
)" R"( * 1. The first step is to render using subpixel jitters. I won't go into
)" R"( *    detail, but it's as simple as moving each vertex position in the
)" R"( *    vertex shader, you can check how we do it in our DX10 demo.
)" R"( *
)" R"( * 2. Then, you must setup the temporal resolve. You may want to take a look
)" R"( *    into SMAAResolve for resolving 2x modes. After you get it working, you'll
)" R"( *    probably see ghosting everywhere. But fear not, you can enable the
)" R"( *    CryENGINE temporal reprojection by setting the SMAA_REPROJECTION macro.
)" R"( *    Check out SMAA_DECODE_VELOCITY if your velocity buffer is encoded.
)" R"( *
)" R"( * 3. The next step is to apply SMAA to each subpixel jittered frame, just as
)" R"( *    done for 1x.
)" R"( *
)" R"( * 4. At this point you should already have something usable, but for best
)" R"( *    results the proper area textures must be set depending on current jitter.
)" R"( *    For this, the parameter 'subsampleIndices' of
)" R"( *    'SMAABlendingWeightCalculationPS' must be set as follows, for our T2x
)" R"( *    mode:
)" R"( *
)" R"( *    @SUBSAMPLE_INDICES
)" R"( *
)" R"( *    | S# |  Camera Jitter   |  subsampleIndices    |
)" R"( *    +----+------------------+---------------------+
)" R"( *    |  0 |  ( 0.25, -0.25)  |  float4(1, 1, 1, 0)  |
)" R"( *    |  1 |  (-0.25,  0.25)  |  float4(2, 2, 2, 0)  |
)" R"( *
)" R"( *    These jitter positions assume a bottom-to-top y axis. S# stands for the
)" R"( *    sample number.
)" R"( *
)" R"( * More information about temporal supersampling here:
)" R"( *    http://iryoku.com/aacourse/downloads/13-Anti-Aliasing-Methods-in-CryENGINE-3.pdf
)" R"( *
)" R"( * c) If you want to enable spatial multisampling (SMAA S2x):
)" R"( *
)" R"( * 1. The scene must be rendered using MSAA 2x. The MSAA 2x buffer must be
)" R"( *    created with:
)" R"( *      - DX10:     see below (*)
)" R"( *      - DX10.1:   D3D10_STANDARD_MULTISAMPLE_PATTERN or
)" R"( *      - DX11:     D3D11_STANDARD_MULTISAMPLE_PATTERN
)" R"( *
)" R"( *    This allows to ensure that the subsample order matches the table in
)" R"( *    @SUBSAMPLE_INDICES.
)" R"( *
)" R"( *    (*) In the case of DX10, we refer the reader to:
)" R"( *      - SMAA::detectMSAAOrder and
)" R"( *      - SMAA::msaaReorder
)" R"( *
)" R"( *    These functions allow to match the standard multisample patterns by
)" R"( *    detecting the subsample order for a specific GPU, and reordering
)" R"( *    them appropriately.
)" R"( *
)" R"( * 2. A shader must be run to output each subsample into a separate buffer
)" R"( *    (DX10 is required). You can use SMAASeparate for this purpose, or just do
)" R"( *    it in an existing pass (for example, in the tone mapping pass, which has
)" R"( *    the advantage of feeding tone mapped subsamples to SMAA, which will yield
)" R"( *    better results).
)" R"( *
)" R"( * 3. The full SMAA 1x pipeline must be run for each separated buffer, storing
)" R"( *    the results in the final buffer. The second run should alpha blend with
)" R"( *    the existing final buffer using a blending factor of 0.5.
)" R"( *    'subsampleIndices' must be adjusted as in the SMAA T2x case (see point
)" R"( *    b).
)" R"( *
)" R"( * d) If you want to enable temporal supersampling on top of SMAA S2x
)" R"( *    (which actually is SMAA 4x):
)" R"( *
)" R"( * 1. SMAA 4x consists on temporally jittering SMAA S2x, so the first step is
)" R"( *    to calculate SMAA S2x for current frame. In this case, 'subsampleIndices'
)" R"( *    must be set as follows:
)" R"( *
)" R"( *    | F# | S# |   Camera Jitter    |    Net Jitter     |   subsampleIndices   |
)" R"( *    +----+----+--------------------+-------------------+----------------------+
)" R"( *    |  0 |  0 |  ( 0.125,  0.125)  |  ( 0.375, -0.125) |  float4(5, 3, 1, 3)  |
)" R"( *    |  0 |  1 |  ( 0.125,  0.125)  |  (-0.125,  0.375) |  float4(4, 6, 2, 3)  |
)" R"( *    +----+----+--------------------+-------------------+----------------------+
)" R"( *    |  1 |  2 |  (-0.125, -0.125)  |  ( 0.125, -0.375) |  float4(3, 5, 1, 4)  |
)" R"( *    |  1 |  3 |  (-0.125, -0.125)  |  (-0.375,  0.125) |  float4(6, 4, 2, 4)  |
)" R"( *
)" R"( *    These jitter positions assume a bottom-to-top y axis. F# stands for the
)" R"( *    frame number. S# stands for the sample number.
)" R"( *
)" R"( * 2. After calculating SMAA S2x for current frame (with the new subsample
)" R"( *    indices), previous frame must be reprojected as in SMAA T2x mode (see
)" R"( *    point b).
)" R"( *
)" R"( * e) If motion blur is used, you may want to do the edge detection pass
)" R"( *    together with motion blur. This has two advantages:
)" R"( *
)" R"( * 1. Pixels under heavy motion can be omitted from the edge detection process.
)" R"( *    For these pixels we can just store "no edge", as motion blur will take
)" R"( *    care of them.
)" R"( * 2. The center pixel tap is reused.
)" R"( *
)" R"( * Note that in this case depth testing should be used instead of stenciling,
)" R"( * as we have to write all the pixels in the motion blur pass.
)" R"( *
)" R"( * That's it!
)" R"( */
)" R"(
)" R"(//-----------------------------------------------------------------------------
)" R"(// SMAA Presets
)" R"(
)" R"(/**
)" R"( * Note that if you use one of these presets, the following configuration
)" R"( * macros will be ignored if set in the "Configurable Defines" section.
)" R"( */
)" R"(
)" R"(#if defined(SMAA_PRESET_LOW)
)" R"(#define SMAA_THRESHOLD 0.15
)" R"(#define SMAA_MAX_SEARCH_STEPS 4
)" R"(#define SMAA_DISABLE_DIAG_DETECTION
)" R"(#define SMAA_DISABLE_CORNER_DETECTION
)" R"(#elif defined(SMAA_PRESET_MEDIUM)
)" R"(#define SMAA_THRESHOLD 0.1
)" R"(#define SMAA_MAX_SEARCH_STEPS 8
)" R"(#define SMAA_DISABLE_DIAG_DETECTION
)" R"(#define SMAA_DISABLE_CORNER_DETECTION
)" R"(#elif defined(SMAA_PRESET_HIGH)
)" R"(#define SMAA_THRESHOLD 0.1
)" R"(#define SMAA_MAX_SEARCH_STEPS 16
)" R"(#define SMAA_MAX_SEARCH_STEPS_DIAG 8
)" R"(#define SMAA_CORNER_ROUNDING 25
)" R"(#elif defined(SMAA_PRESET_ULTRA)
)" R"(#define SMAA_THRESHOLD 0.05
)" R"(#define SMAA_MAX_SEARCH_STEPS 32
)" R"(#define SMAA_MAX_SEARCH_STEPS_DIAG 16
)" R"(#define SMAA_CORNER_ROUNDING 25
)" R"(#endif
)" R"(
)" R"(//-----------------------------------------------------------------------------
)" R"(// Configurable Defines
)" R"(
)" R"(/**
)" R"( * SMAA_THRESHOLD specifies the threshold or sensitivity to edges.
)" R"( * Lowering this value you will be able to detect more edges at the expense of
)" R"( * performance.
)" R"( *
)" R"( * Range: [0, 0.5]
)" R"( *   0.1 is a reasonable value, and allows to catch most visible edges.
)" R"( *   0.05 is a rather overkill value, that allows to catch 'em all.
)" R"( *
)" R"( *   If temporal supersampling is used, 0.2 could be a reasonable value, as low
)" R"( *   contrast edges are properly filtered by just 2x.
)" R"( */
)" R"(#ifndef SMAA_THRESHOLD
)" R"(#define SMAA_THRESHOLD 0.1
)" R"(#endif
)" R"(
)" R"(/**
)" R"( * SMAA_DEPTH_THRESHOLD specifies the threshold for depth edge detection.
)" R"( *
)" R"( * Range: depends on the depth range of the scene.
)" R"( */
)" R"(#ifndef SMAA_DEPTH_THRESHOLD
)" R"(#define SMAA_DEPTH_THRESHOLD (0.1 * SMAA_THRESHOLD)
)" R"(#endif
)" R"(
)" R"(/**
)" R"( * SMAA_MAX_SEARCH_STEPS specifies the maximum steps performed in the
)" R"( * horizontal/vertical pattern searches, at each side of the pixel.
)" R"( *
)" R"( * In number of pixels, it's actually the double. So the maximum line length
)" R"( * perfectly handled by, for example 16, is 64 (by perfectly, we meant that
)" R"( * longer lines won't look as good, but still antialiased).
)" R"( *
)" R"( * Range: [0, 112]
)" R"( */
)" R"(#ifndef SMAA_MAX_SEARCH_STEPS
)" R"(#define SMAA_MAX_SEARCH_STEPS 16
)" R"(#endif
)" R"(
)" R"(/**
)" R"( * SMAA_MAX_SEARCH_STEPS_DIAG specifies the maximum steps performed in the
)" R"( * diagonal pattern searches, at each side of the pixel. In this case we jump
)" R"( * one pixel at time, instead of two.
)" R"( *
)" R"( * Range: [0, 20]
)" R"( *
)" R"( * On high-end machines it is cheap (between a 0.8x and 0.9x slower for 16
)" R"( * steps), but it can have a significant impact on older machines.
)" R"( *
)" R"( * Define SMAA_DISABLE_DIAG_DETECTION to disable diagonal processing.
)" R"( */
)" R"(#ifndef SMAA_MAX_SEARCH_STEPS_DIAG
)" R"(#define SMAA_MAX_SEARCH_STEPS_DIAG 8
)" R"(#endif
)" R"(
)" R"(/**
)" R"( * SMAA_CORNER_ROUNDING specifies how much sharp corners will be rounded.
)" R"( *
)" R"( * Range: [0, 100]
)" R"( *
)" R"( * Define SMAA_DISABLE_CORNER_DETECTION to disable corner processing.
)" R"( */
)" R"(#ifndef SMAA_CORNER_ROUNDING
)" R"(#define SMAA_CORNER_ROUNDING 25
)" R"(#endif
)" R"(
)" R"(/**
)" R"( * If there is an neighbor edge that has SMAA_LOCAL_CONTRAST_FACTOR times
)" R"( * bigger contrast than current edge, current edge will be discarded.
)" R"( *
)" R"( * This allows to eliminate spurious crossing edges, and is based on the fact
)" R"( * that, if there is too much contrast in a direction, that will hide
)" R"( * perceptually contrast in the other neighbors.
)" R"( */
)" R"(#ifndef SMAA_LOCAL_CONTRAST_ADAPTATION_FACTOR
)" R"(#define SMAA_LOCAL_CONTRAST_ADAPTATION_FACTOR 2.0
)" R"(#endif
)" R"(
)" R"(/**
)" R"( * Predicated thresholding allows to better preserve texture details and to
)" R"( * improve performance, by decreasing the number of detected edges using an
)" R"( * additional buffer like the light accumulation buffer, object ids or even the
)" R"( * depth buffer (the depth buffer usage may be limited to indoor or short range
)" R"( * scenes).
)" R"( *
)" R"( * It locally decreases the luma or color threshold if an edge is found in an
)" R"( * additional buffer (so the global threshold can be higher).
)" R"( *
)" R"( * This method was developed by Playstation EDGE MLAA team, and used in
)" R"( * Killzone 3, by using the light accumulation buffer. More information here:
)" R"( *     http://iryoku.com/aacourse/downloads/06-MLAA-on-PS3.pptx
)" R"( */
)" R"(#ifndef SMAA_PREDICATION
)" R"(#define SMAA_PREDICATION 0
)" R"(#endif
)" R"(
)" R"(/**
)" R"( * Threshold to be used in the additional predication buffer.
)" R"( *
)" R"( * Range: depends on the input, so you'll have to find the magic number that
)" R"( * works for you.
)" R"( */
)" R"(#ifndef SMAA_PREDICATION_THRESHOLD
)" R"(#define SMAA_PREDICATION_THRESHOLD 0.01
)" R"(#endif
)" R"(
)" R"(/**
)" R"( * How much to scale the global threshold used for luma or color edge
)" R"( * detection when using predication.
)" R"( *
)" R"( * Range: [1, 5]
)" R"( */
)" R"(#ifndef SMAA_PREDICATION_SCALE
)" R"(#define SMAA_PREDICATION_SCALE 2.0
)" R"(#endif
)" R"(
)" R"(/**
)" R"( * How much to locally decrease the threshold.
)" R"( *
)" R"( * Range: [0, 1]
)" R"( */
)" R"(#ifndef SMAA_PREDICATION_STRENGTH
)" R"(#define SMAA_PREDICATION_STRENGTH 0.4
)" R"(#endif
)" R"(
)" R"(/**
)" R"( * Temporal reprojection allows to remove ghosting artifacts when using
)" R"( * temporal supersampling. We use the CryEngine 3 method which also introduces
)" R"( * velocity weighting. This feature is of extreme importance for totally
)" R"( * removing ghosting. More information here:
)" R"( *    http://iryoku.com/aacourse/downloads/13-Anti-Aliasing-Methods-in-CryENGINE-3.pdf
)" R"( *
)" R"( * Note that you'll need to setup a velocity buffer for enabling reprojection.
)" R"( * For static geometry, saving the previous depth buffer is a viable
)" R"( * alternative.
)" R"( */
)" R"(#ifndef SMAA_REPROJECTION
)" R"(#define SMAA_REPROJECTION 0
)" R"(#endif
)" R"(
)" R"(/**
)" R"( * SMAA_REPROJECTION_WEIGHT_SCALE controls the velocity weighting. It allows to
)" R"( * remove ghosting trails behind the moving object, which are not removed by
)" R"( * just using reprojection. Using low values will exhibit ghosting, while using
)" R"( * high values will disable temporal supersampling under motion.
)" R"( *
)" R"( * Behind the scenes, velocity weighting removes temporal supersampling when
)" R"( * the velocity of the subsamples differs (meaning they are different objects).
)" R"( *
)" R"( * Range: [0, 80]
)" R"( */
)" R"(#ifndef SMAA_REPROJECTION_WEIGHT_SCALE
)" R"(#define SMAA_REPROJECTION_WEIGHT_SCALE 30.0
)" R"(#endif
)" R"(
)" R"(/**
)" R"( * On some compilers, discard cannot be used in vertex shaders. Thus, they need
)" R"( * to be compiled separately.
)" R"( */
)" R"(#ifndef SMAA_INCLUDE_VS
)" R"(#define SMAA_INCLUDE_VS 1
)" R"(#endif
)" R"(#ifndef SMAA_INCLUDE_PS
)" R"(#define SMAA_INCLUDE_PS 1
)" R"(#endif
)" R"(
)" R"(//-----------------------------------------------------------------------------
)" R"(// Texture Access Defines
)" R"(
)" R"(#ifndef SMAA_AREATEX_SELECT
)" R"(#if defined(SMAA_HLSL_3)
)" R"(#define SMAA_AREATEX_SELECT(sample) sample.ra
)" R"(#else
)" R"(#define SMAA_AREATEX_SELECT(sample) sample.rg
)" R"(#endif
)" R"(#endif
)" R"(
)" R"(#ifndef SMAA_SEARCHTEX_SELECT
)" R"(#define SMAA_SEARCHTEX_SELECT(sample) sample.r
)" R"(#endif
)" R"(
)" R"(#ifndef SMAA_DECODE_VELOCITY
)" R"(#define SMAA_DECODE_VELOCITY(sample) sample.rg
)" R"(#endif
)" R"(
)" R"(//-----------------------------------------------------------------------------
)" R"(// Non-Configurable Defines
)" R"(
)" R"(#define SMAA_AREATEX_MAX_DISTANCE 16
)" R"(#define SMAA_AREATEX_MAX_DISTANCE_DIAG 20
)" R"(#define SMAA_AREATEX_PIXEL_SIZE (1.0 / float2(160.0, 560.0))
)" R"(#define SMAA_AREATEX_SUBTEX_SIZE (1.0 / 7.0)
)" R"(#define SMAA_SEARCHTEX_SIZE float2(66.0, 33.0)
)" R"(#define SMAA_SEARCHTEX_PACKED_SIZE float2(64.0, 16.0)
)" R"(#define SMAA_CORNER_ROUNDING_NORM (float(SMAA_CORNER_ROUNDING) / 100.0)
)" R"(
)" R"(//-----------------------------------------------------------------------------
)" R"(// Porting Functions
)" R"(
)" R"(#if defined(SMAA_HLSL_3)
)" R"(#define SMAATexture2D(tex) sampler2D tex
)" R"(#define SMAATexturePass2D(tex) tex
)" R"(#define SMAASampleLevelZero(tex, coord) tex2Dlod(tex, float4(coord, 0.0, 0.0))
)" R"(#define SMAASampleLevelZeroPoint(tex, coord) tex2Dlod(tex, float4(coord, 0.0, 0.0))
)" R"(#define SMAASampleLevelZeroOffset(tex, coord, offset) tex2Dlod(tex, float4(coord + offset * SMAA_RT_METRICS.xy, 0.0, 0.0))
)" R"(#define SMAASample(tex, coord) tex2D(tex, coord)
)" R"(#define SMAASamplePoint(tex, coord) tex2D(tex, coord)
)" R"(#define SMAASampleOffset(tex, coord, offset) tex2D(tex, coord + offset * SMAA_RT_METRICS.xy)
)" R"(#define SMAA_FLATTEN [flatten]
)" R"(#define SMAA_BRANCH [branch]
)" R"(#endif
)" R"(#if defined(SMAA_HLSL_4) || defined(SMAA_HLSL_4_1)
)" R"(SamplerState LinearSampler { Filter = MIN_MAG_LINEAR_MIP_POINT; AddressU = Clamp; AddressV = Clamp; };
)" R"(SamplerState PointSampler { Filter = MIN_MAG_MIP_POINT; AddressU = Clamp; AddressV = Clamp; };
)" R"(#define SMAATexture2D(tex) Texture2D tex
)" R"(#define SMAATexturePass2D(tex) tex
)" R"(#define SMAASampleLevelZero(tex, coord) tex.SampleLevel(LinearSampler, coord, 0)
)" R"(#define SMAASampleLevelZeroPoint(tex, coord) tex.SampleLevel(PointSampler, coord, 0)
)" R"(#define SMAASampleLevelZeroOffset(tex, coord, offset) tex.SampleLevel(LinearSampler, coord, 0, offset)
)" R"(#define SMAASample(tex, coord) tex.Sample(LinearSampler, coord)
)" R"(#define SMAASamplePoint(tex, coord) tex.Sample(PointSampler, coord)
)" R"(#define SMAASampleOffset(tex, coord, offset) tex.Sample(LinearSampler, coord, offset)
)" R"(#define SMAA_FLATTEN [flatten]
)" R"(#define SMAA_BRANCH [branch]
)" R"(#define SMAATexture2DMS2(tex) Texture2DMS<float4, 2> tex
)" R"(#define SMAALoad(tex, pos, sample) tex.Load(pos, sample)
)" R"(#if defined(SMAA_HLSL_4_1)
)" R"(#define SMAAGather(tex, coord) tex.Gather(LinearSampler, coord, 0)
)" R"(#endif
)" R"(#endif
)" R"(#if defined(SMAA_GLSL_3) || defined(SMAA_GLSL_4)
)" R"(#define SMAATexture2D(tex) sampler2D tex
)" R"(#define SMAATexturePass2D(tex) tex
)" R"(#define SMAASampleLevelZero(tex, coord) textureLod(tex, coord, 0.0)
)" R"(#define SMAASampleLevelZeroPoint(tex, coord) textureLod(tex, coord, 0.0)
)" R"(#define SMAASampleLevelZeroOffset(tex, coord, offset) textureLodOffset(tex, coord, 0.0, offset)
)" R"(#define SMAASample(tex, coord) texture(tex, coord)
)" R"(#define SMAASamplePoint(tex, coord) texture(tex, coord)
)" R"(#define SMAASampleOffset(tex, coord, offset) texture(tex, coord, offset)
)" R"(#define SMAA_FLATTEN
)" R"(#define SMAA_BRANCH
)" R"(#define lerp(a, b, t) mix(a, b, t)
)" R"(#define saturate(a) clamp(a, 0.0, 1.0)
)" R"(#if defined(SMAA_GLSL_4)
)" R"(#define mad(a, b, c) fma(a, b, c)
)" R"(#define SMAAGather(tex, coord) textureGather(tex, coord)
)" R"(#else
)" R"(#define mad(a, b, c) (a * b + c)
)" R"(#endif
)" R"(#define float2 vec2
)" R"(#define float3 vec3
)" R"(#define float4 vec4
)" R"(#define int2 ivec2
)" R"(#define int3 ivec3
)" R"(#define int4 ivec4
)" R"(#define bool2 bvec2
)" R"(#define bool3 bvec3
)" R"(#define bool4 bvec4
)" R"(#endif
)" R"(
)" R"(#if !defined(SMAA_HLSL_3) && !defined(SMAA_HLSL_4) && !defined(SMAA_HLSL_4_1) && !defined(SMAA_GLSL_3) && !defined(SMAA_GLSL_4) && !defined(SMAA_CUSTOM_SL)
)" R"(#error you must define the shading language: SMAA_HLSL_*, SMAA_GLSL_* or SMAA_CUSTOM_SL
)" R"(#endif
)" R"(
)" R"(//-----------------------------------------------------------------------------
)" R"(// Misc functions
)" R"(
)" R"(/**
)" R"( * Gathers current pixel, and the top-left neighbors.
)" R"( */
)" R"(float3 SMAAGatherNeighbours(float2 texcoord,
)" R"(                            float4 offset[3],
)" R"(                            SMAATexture2D(tex)) {
)" R"(    #ifdef SMAAGather
)" R"(    return SMAAGather(tex, texcoord + SMAA_RT_METRICS.xy * float2(-0.5, -0.5)).grb;
)" R"(    #else
)" R"(    float P = SMAASamplePoint(tex, texcoord).r;
)" R"(    float Pleft = SMAASamplePoint(tex, offset[0].xy).r;
)" R"(    float Ptop  = SMAASamplePoint(tex, offset[0].zw).r;
)" R"(    return float3(P, Pleft, Ptop);
)" R"(    #endif
)" R"(}
)" R"(
)" R"(/**
)" R"( * Adjusts the threshold by means of predication.
)" R"( */
)" R"(float2 SMAACalculatePredicatedThreshold(float2 texcoord,
)" R"(                                        float4 offset[3],
)" R"(                                        SMAATexture2D(predicationTex)) {
)" R"(    float3 neighbours = SMAAGatherNeighbours(texcoord, offset, SMAATexturePass2D(predicationTex));
)" R"(    float2 delta = abs(neighbours.xx - neighbours.yz);
)" R"(    float2 edges = step(SMAA_PREDICATION_THRESHOLD, delta);
)" R"(    return SMAA_PREDICATION_SCALE * SMAA_THRESHOLD * (1.0 - SMAA_PREDICATION_STRENGTH * edges);
)" R"(}
)" R"(
)" R"(/**
)" R"( * Conditional move:
)" R"( */
)" R"(void SMAAMovc(bool2 cond, inout float2 variable, float2 value) {
)" R"(    SMAA_FLATTEN if (cond.x) variable.x = value.x;
)" R"(    SMAA_FLATTEN if (cond.y) variable.y = value.y;
)" R"(}
)" R"(
)" R"(void SMAAMovc(bool4 cond, inout float4 variable, float4 value) {
)" R"(    SMAAMovc(cond.xy, variable.xy, value.xy);
)" R"(    SMAAMovc(cond.zw, variable.zw, value.zw);
)" R"(}
)" R"(
)" R"(
)" R"(#if SMAA_INCLUDE_VS
)" R"(//-----------------------------------------------------------------------------
)" R"(// Vertex Shaders
)" R"(
)" R"(/**
)" R"( * Edge Detection Vertex Shader
)" R"( */
)" R"(void SMAAEdgeDetectionVS(float2 texcoord,
)" R"(                         out float4 offset[3]) {
)" R"(    offset[0] = mad(SMAA_RT_METRICS.xyxy, float4(-1.0, 0.0, 0.0, -1.0), texcoord.xyxy);
)" R"(    offset[1] = mad(SMAA_RT_METRICS.xyxy, float4( 1.0, 0.0, 0.0,  1.0), texcoord.xyxy);
)" R"(    offset[2] = mad(SMAA_RT_METRICS.xyxy, float4(-2.0, 0.0, 0.0, -2.0), texcoord.xyxy);
)" R"(}
)" R"(
)" R"(/**
)" R"( * Blend Weight Calculation Vertex Shader
)" R"( */
)" R"(void SMAABlendingWeightCalculationVS(float2 texcoord,
)" R"(                                     out float2 pixcoord,
)" R"(                                     out float4 offset[3]) {
)" R"(    pixcoord = texcoord * SMAA_RT_METRICS.zw;
)" R"(
)" R"(    // We will use these offsets for the searches later on (see @PSEUDO_GATHER4):
)" R"(    offset[0] = mad(SMAA_RT_METRICS.xyxy, float4(-0.25, -0.125,  1.25, -0.125), texcoord.xyxy);
)" R"(    offset[1] = mad(SMAA_RT_METRICS.xyxy, float4(-0.125, -0.25, -0.125,  1.25), texcoord.xyxy);
)" R"(
)" R"(    // And these for the searches, they indicate the ends of the loops:
)" R"(    offset[2] = mad(SMAA_RT_METRICS.xxyy,
)" R"(                    float4(-2.0, 2.0, -2.0, 2.0) * float(SMAA_MAX_SEARCH_STEPS),
)" R"(                    float4(offset[0].xz, offset[1].yw));
)" R"(}
)" R"(
)" R"(/**
)" R"( * Neighborhood Blending Vertex Shader
)" R"( */
)" R"(void SMAANeighborhoodBlendingVS(float2 texcoord,
)" R"(                                out float4 offset) {
)" R"(    offset = mad(SMAA_RT_METRICS.xyxy, float4( 1.0, 0.0, 0.0,  1.0), texcoord.xyxy);
)" R"(}
)" R"(#endif // SMAA_INCLUDE_VS
)" R"(
)" R"(#if SMAA_INCLUDE_PS
)" R"(//-----------------------------------------------------------------------------
)" R"(// Edge Detection Pixel Shaders (First Pass)
)" R"(
)" R"(/**
)" R"( * Luma Edge Detection
)" R"( *
)" R"( * IMPORTANT NOTICE: luma edge detection requires gamma-corrected colors, and
)" R"( * thus 'colorTex' should be a non-sRGB texture.
)" R"( */
)" R"(float2 SMAALumaEdgeDetectionPS(float2 texcoord,
)" R"(                               float4 offset[3],
)" R"(                               SMAATexture2D(colorTex)
)" R"(                               #if SMAA_PREDICATION
)" R"(                               , SMAATexture2D(predicationTex)
)" R"(                               #endif
)" R"(                               ) {
)" R"(    // Calculate the threshold:
)" R"(    #if SMAA_PREDICATION
)" R"(    float2 threshold = SMAACalculatePredicatedThreshold(texcoord, offset, SMAATexturePass2D(predicationTex));
)" R"(    #else
)" R"(    float2 threshold = float2(SMAA_THRESHOLD, SMAA_THRESHOLD);
)" R"(    #endif
)" R"(
)" R"(    // Calculate lumas:
)" R"(    float3 weights = float3(0.2126, 0.7152, 0.0722);
)" R"(    float L = dot(SMAASamplePoint(colorTex, texcoord).rgb, weights);
)" R"(
)" R"(    float Lleft = dot(SMAASamplePoint(colorTex, offset[0].xy).rgb, weights);
)" R"(    float Ltop  = dot(SMAASamplePoint(colorTex, offset[0].zw).rgb, weights);
)" R"(
)" R"(    // We do the usual threshold:
)" R"(    float4 delta;
)" R"(    delta.xy = abs(L - float2(Lleft, Ltop));
)" R"(    float2 edges = step(threshold, delta.xy);
)" R"(
)" R"(    // Then discard if there is no edge:
)" R"(    if (dot(edges, float2(1.0, 1.0)) == 0.0)
)" R"(        discard;
)" R"(
)" R"(    // Calculate right and bottom deltas:
)" R"(    float Lright = dot(SMAASamplePoint(colorTex, offset[1].xy).rgb, weights);
)" R"(    float Lbottom  = dot(SMAASamplePoint(colorTex, offset[1].zw).rgb, weights);
)" R"(    delta.zw = abs(L - float2(Lright, Lbottom));
)" R"(
)" R"(    // Calculate the maximum delta in the direct neighborhood:
)" R"(    float2 maxDelta = max(delta.xy, delta.zw);
)" R"(
)" R"(    // Calculate left-left and top-top deltas:
)" R"(    float Lleftleft = dot(SMAASamplePoint(colorTex, offset[2].xy).rgb, weights);
)" R"(    float Ltoptop = dot(SMAASamplePoint(colorTex, offset[2].zw).rgb, weights);
)" R"(    delta.zw = abs(float2(Lleft, Ltop) - float2(Lleftleft, Ltoptop));
)" R"(
)" R"(    // Calculate the final maximum delta:
)" R"(    maxDelta = max(maxDelta.xy, delta.zw);
)" R"(    float finalDelta = max(maxDelta.x, maxDelta.y);
)" R"(
)" R"(    // Local contrast adaptation:
)" R"(    edges.xy *= step(finalDelta, SMAA_LOCAL_CONTRAST_ADAPTATION_FACTOR * delta.xy);
)" R"(
)" R"(    return edges;
)" R"(}
)" R"(
)" R"(/**
)" R"( * Color Edge Detection
)" R"( *
)" R"( * IMPORTANT NOTICE: color edge detection requires gamma-corrected colors, and
)" R"( * thus 'colorTex' should be a non-sRGB texture.
)" R"( */
)" R"(float2 SMAAColorEdgeDetectionPS(float2 texcoord,
)" R"(                                float4 offset[3],
)" R"(                                SMAATexture2D(colorTex)
)" R"(                                #if SMAA_PREDICATION
)" R"(                                , SMAATexture2D(predicationTex)
)" R"(                                #endif
)" R"(                                ) {
)" R"(    // Calculate the threshold:
)" R"(    #if SMAA_PREDICATION
)" R"(    float2 threshold = SMAACalculatePredicatedThreshold(texcoord, offset, predicationTex);
)" R"(    #else
)" R"(    float2 threshold = float2(SMAA_THRESHOLD, SMAA_THRESHOLD);
)" R"(    #endif
)" R"(
)" R"(    // Calculate color deltas:
)" R"(    float4 delta;
)" R"(    float3 C = SMAASamplePoint(colorTex, texcoord).rgb;
)" R"(
)" R"(    float3 Cleft = SMAASamplePoint(colorTex, offset[0].xy).rgb;
)" R"(    float3 t = abs(C - Cleft);
)" R"(    delta.x = max(max(t.r, t.g), t.b);
)" R"(
)" R"(    float3 Ctop  = SMAASamplePoint(colorTex, offset[0].zw).rgb;
)" R"(    t = abs(C - Ctop);
)" R"(    delta.y = max(max(t.r, t.g), t.b);
)" R"(
)" R"(    // We do the usual threshold:
)" R"(    float2 edges = step(threshold, delta.xy);
)" R"(
)" R"(    // Then discard if there is no edge:
)" R"(    if (dot(edges, float2(1.0, 1.0)) == 0.0)
)" R"(        discard;
)" R"(
)" R"(    // Calculate right and bottom deltas:
)" R"(    float3 Cright = SMAASamplePoint(colorTex, offset[1].xy).rgb;
)" R"(    t = abs(C - Cright);
)" R"(    delta.z = max(max(t.r, t.g), t.b);
)" R"(
)" R"(    float3 Cbottom  = SMAASamplePoint(colorTex, offset[1].zw).rgb;
)" R"(    t = abs(C - Cbottom);
)" R"(    delta.w = max(max(t.r, t.g), t.b);
)" R"(
)" R"(    // Calculate the maximum delta in the direct neighborhood:
)" R"(    float2 maxDelta = max(delta.xy, delta.zw);
)" R"(
)" R"(    // Calculate left-left and top-top deltas:
)" R"(    float3 Cleftleft  = SMAASamplePoint(colorTex, offset[2].xy).rgb;
)" R"(    t = abs(C - Cleftleft);
)" R"(    delta.z = max(max(t.r, t.g), t.b);
)" R"(
)" R"(    float3 Ctoptop = SMAASamplePoint(colorTex, offset[2].zw).rgb;
)" R"(    t = abs(C - Ctoptop);
)" R"(    delta.w = max(max(t.r, t.g), t.b);
)" R"(
)" R"(    // Calculate the final maximum delta:
)" R"(    maxDelta = max(maxDelta.xy, delta.zw);
)" R"(    float finalDelta = max(maxDelta.x, maxDelta.y);
)" R"(
)" R"(    // Local contrast adaptation:
)" R"(    edges.xy *= step(finalDelta, SMAA_LOCAL_CONTRAST_ADAPTATION_FACTOR * delta.xy);
)" R"(
)" R"(    return edges;
)" R"(}
)" R"(
)" R"(/**
)" R"( * Depth Edge Detection
)" R"( */
)" R"(float2 SMAADepthEdgeDetectionPS(float2 texcoord,
)" R"(                                float4 offset[3],
)" R"(                                SMAATexture2D(depthTex)) {
)" R"(    float3 neighbours = SMAAGatherNeighbours(texcoord, offset, SMAATexturePass2D(depthTex));
)" R"(    float2 delta = abs(neighbours.xx - float2(neighbours.y, neighbours.z));
)" R"(    float2 edges = step(SMAA_DEPTH_THRESHOLD, delta);
)" R"(
)" R"(    if (dot(edges, float2(1.0, 1.0)) == 0.0)
)" R"(        discard;
)" R"(
)" R"(    return edges;
)" R"(}
)" R"(
)" R"(//-----------------------------------------------------------------------------
)" R"(// Diagonal Search Functions
)" R"(
)" R"(#if !defined(SMAA_DISABLE_DIAG_DETECTION)
)" R"(
)" R"(/**
)" R"( * Allows to decode two binary values from a bilinear-filtered access.
)" R"( */
)" R"(float2 SMAADecodeDiagBilinearAccess(float2 e) {
)" R"(    // Bilinear access for fetching 'e' have a 0.25 offset, and we are
)" R"(    // interested in the R and G edges:
)" R"(    //
)" R"(    // +---G---+-------+
)" R"(    // |   x o R   x   |
)" R"(    // +-------+-------+
)" R"(    //
)" R"(    // Then, if one of these edge is enabled:
)" R"(    //   Red:   (0.75 * X + 0.25 * 1) => 0.25 or 1.0
)" R"(    //   Green: (0.75 * 1 + 0.25 * X) => 0.75 or 1.0
)" R"(    //
)" R"(    // This function will unpack the values (mad + mul + round):
)" R"(    // wolframalpha.com: round(x * abs(5 * x - 5 * 0.75)) plot 0 to 1
)" R"(    e.r = e.r * abs(5.0 * e.r - 5.0 * 0.75);
)" R"(    return round(e);
)" R"(}
)" R"(
)" R"(float4 SMAADecodeDiagBilinearAccess(float4 e) {
)" R"(    e.rb = e.rb * abs(5.0 * e.rb - 5.0 * 0.75);
)" R"(    return round(e);
)" R"(}
)" R"(
)" R"(/**
)" R"( * These functions allows to perform diagonal pattern searches.
)" R"( */
)" R"(float2 SMAASearchDiag1(SMAATexture2D(edgesTex), float2 texcoord, float2 dir, out float2 e) {
)" R"(    float4 coord = float4(texcoord, -1.0, 1.0);
)" R"(    float3 t = float3(SMAA_RT_METRICS.xy, 1.0);
)" R"(    while (coord.z < float(SMAA_MAX_SEARCH_STEPS_DIAG - 1) &&
)" R"(           coord.w > 0.9) {
)" R"(        coord.xyz = mad(t, float3(dir, 1.0), coord.xyz);
)" R"(        e = SMAASampleLevelZero(edgesTex, coord.xy).rg;
)" R"(        coord.w = dot(e, float2(0.5, 0.5));
)" R"(    }
)" R"(    return coord.zw;
)" R"(}
)" R"(
)" R"(float2 SMAASearchDiag2(SMAATexture2D(edgesTex), float2 texcoord, float2 dir, out float2 e) {
)" R"(    float4 coord = float4(texcoord, -1.0, 1.0);
)" R"(    coord.x += 0.25 * SMAA_RT_METRICS.x; // See @SearchDiag2Optimization
)" R"(    float3 t = float3(SMAA_RT_METRICS.xy, 1.0);
)" R"(    while (coord.z < float(SMAA_MAX_SEARCH_STEPS_DIAG - 1) &&
)" R"(           coord.w > 0.9) {
)" R"(        coord.xyz = mad(t, float3(dir, 1.0), coord.xyz);
)" R"(
)" R"(        // @SearchDiag2Optimization
)" R"(        // Fetch both edges at once using bilinear filtering:
)" R"(        e = SMAASampleLevelZero(edgesTex, coord.xy).rg;
)" R"(        e = SMAADecodeDiagBilinearAccess(e);
)" R"(
)" R"(        // Non-optimized version:
)" R"(        // e.g = SMAASampleLevelZero(edgesTex, coord.xy).g;
)" R"(        // e.r = SMAASampleLevelZeroOffset(edgesTex, coord.xy, int2(1, 0)).r;
)" R"(
)" R"(        coord.w = dot(e, float2(0.5, 0.5));
)" R"(    }
)" R"(    return coord.zw;
)" R"(}
)" R"(
)" R"(/**
)" R"( * Similar to SMAAArea, this calculates the area corresponding to a certain
)" R"( * diagonal distance and crossing edges 'e'.
)" R"( */
)" R"(float2 SMAAAreaDiag(SMAATexture2D(areaTex), float2 dist, float2 e, float offset) {
)" R"(    float2 texcoord = mad(float2(SMAA_AREATEX_MAX_DISTANCE_DIAG, SMAA_AREATEX_MAX_DISTANCE_DIAG), e, dist);
)" R"(
)" R"(    // We do a scale and bias for mapping to texel space:
)" R"(    texcoord = mad(SMAA_AREATEX_PIXEL_SIZE, texcoord, 0.5 * SMAA_AREATEX_PIXEL_SIZE);
)" R"(
)" R"(    // Diagonal areas are on the second half of the texture:
)" R"(    texcoord.x += 0.5;
)" R"(
)" R"(    // Move to proper place, according to the subpixel offset:
)" R"(    texcoord.y += SMAA_AREATEX_SUBTEX_SIZE * offset;
)" R"(
)" R"(    // Do it!
)" R"(    return SMAA_AREATEX_SELECT(SMAASampleLevelZero(areaTex, texcoord));
)" R"(}
)" R"(
)" R"(/**
)" R"( * This searches for diagonal patterns and returns the corresponding weights.
)" R"( */
)" R"(float2 SMAACalculateDiagWeights(SMAATexture2D(edgesTex), SMAATexture2D(areaTex), float2 texcoord, float2 e, float4 subsampleIndices) {
)" R"(    float2 weights = float2(0.0, 0.0);
)" R"(
)" R"(    // Search for the line ends:
)" R"(    float4 d;
)" R"(    float2 end;
)" R"(    if (e.r > 0.0) {
)" R"(        d.xz = SMAASearchDiag1(SMAATexturePass2D(edgesTex), texcoord, float2(-1.0,  1.0), end);
)" R"(        d.x += float(end.y > 0.9);
)" R"(    } else
)" R"(        d.xz = float2(0.0, 0.0);
)" R"(    d.yw = SMAASearchDiag1(SMAATexturePass2D(edgesTex), texcoord, float2(1.0, -1.0), end);
)" R"(
)" R"(    SMAA_BRANCH
)" R"(    if (d.x + d.y > 2.0) { // d.x + d.y + 1 > 3
)" R"(        // Fetch the crossing edges:
)" R"(        float4 coords = mad(float4(-d.x + 0.25, d.x, d.y, -d.y - 0.25), SMAA_RT_METRICS.xyxy, texcoord.xyxy);
)" R"(        float4 c;
)" R"(        c.xy = SMAASampleLevelZeroOffset(edgesTex, coords.xy, int2(-1,  0)).rg;
)" R"(        c.zw = SMAASampleLevelZeroOffset(edgesTex, coords.zw, int2( 1,  0)).rg;
)" R"(        c.yxwz = SMAADecodeDiagBilinearAccess(c.xyzw);
)" R"(
)" R"(        // Non-optimized version:
)" R"(        // float4 coords = mad(float4(-d.x, d.x, d.y, -d.y), SMAA_RT_METRICS.xyxy, texcoord.xyxy);
)" R"(        // float4 c;
)" R"(        // c.x = SMAASampleLevelZeroOffset(edgesTex, coords.xy, int2(-1,  0)).g;
)" R"(        // c.y = SMAASampleLevelZeroOffset(edgesTex, coords.xy, int2( 0,  0)).r;
)" R"(        // c.z = SMAASampleLevelZeroOffset(edgesTex, coords.zw, int2( 1,  0)).g;
)" R"(        // c.w = SMAASampleLevelZeroOffset(edgesTex, coords.zw, int2( 1, -1)).r;
)" R"(
)" R"(        // Merge crossing edges at each side into a single value:
)" R"(        float2 cc = mad(float2(2.0, 2.0), c.xz, c.yw);
)" R"(
)" R"(        // Remove the crossing edge if we didn't found the end of the line:
)" R"(        SMAAMovc(bool2(step(0.9, d.zw)), cc, float2(0.0, 0.0));
)" R"(
)" R"(        // Fetch the areas for this line:
)" R"(        weights += SMAAAreaDiag(SMAATexturePass2D(areaTex), d.xy, cc, subsampleIndices.z);
)" R"(    }
)" R"(
)" R"(    // Search for the line ends:
)" R"(    d.xz = SMAASearchDiag2(SMAATexturePass2D(edgesTex), texcoord, float2(-1.0, -1.0), end);
)" R"(    if (SMAASampleLevelZeroOffset(edgesTex, texcoord, int2(1, 0)).r > 0.0) {
)" R"(        d.yw = SMAASearchDiag2(SMAATexturePass2D(edgesTex), texcoord, float2(1.0, 1.0), end);
)" R"(        d.y += float(end.y > 0.9);
)" R"(    } else
)" R"(        d.yw = float2(0.0, 0.0);
)" R"(
)" R"(    SMAA_BRANCH
)" R"(    if (d.x + d.y > 2.0) { // d.x + d.y + 1 > 3
)" R"(        // Fetch the crossing edges:
)" R"(        float4 coords = mad(float4(-d.x, -d.x, d.y, d.y), SMAA_RT_METRICS.xyxy, texcoord.xyxy);
)" R"(        float4 c;
)" R"(        c.x  = SMAASampleLevelZeroOffset(edgesTex, coords.xy, int2(-1,  0)).g;
)" R"(        c.y  = SMAASampleLevelZeroOffset(edgesTex, coords.xy, int2( 0, -1)).r;
)" R"(        c.zw = SMAASampleLevelZeroOffset(edgesTex, coords.zw, int2( 1,  0)).gr;
)" R"(        float2 cc = mad(float2(2.0, 2.0), c.xz, c.yw);
)" R"(
)" R"(        // Remove the crossing edge if we didn't found the end of the line:
)" R"(        SMAAMovc(bool2(step(0.9, d.zw)), cc, float2(0.0, 0.0));
)" R"(
)" R"(        // Fetch the areas for this line:
)" R"(        weights += SMAAAreaDiag(SMAATexturePass2D(areaTex), d.xy, cc, subsampleIndices.w).gr;
)" R"(    }
)" R"(
)" R"(    return weights;
)" R"(}
)" R"(#endif
)" R"(
)" R"(//-----------------------------------------------------------------------------
)" R"(// Horizontal/Vertical Search Functions
)" R"(
)" R"(/**
)" R"( * This allows to determine how much length should we add in the last step
)" R"( * of the searches. It takes the bilinearly interpolated edge (see
)" R"( * @PSEUDO_GATHER4), and adds 0, 1 or 2, depending on which edges and
)" R"( * crossing edges are active.
)" R"( */
)" R"(float SMAASearchLength(SMAATexture2D(searchTex), float2 e, float offset) {
)" R"(    // The texture is flipped vertically, with left and right cases taking half
)" R"(    // of the space horizontally:
)" R"(    float2 scale = SMAA_SEARCHTEX_SIZE * float2(0.5, -1.0);
)" R"(    float2 bias = SMAA_SEARCHTEX_SIZE * float2(offset, 1.0);
)" R"(
)" R"(    // Scale and bias to access texel centers:
)" R"(    scale += float2(-1.0,  1.0);
)" R"(    bias  += float2( 0.5, -0.5);
)" R"(
)" R"(    // Convert from pixel coordinates to texcoords:
)" R"(    // (We use SMAA_SEARCHTEX_PACKED_SIZE because the texture is cropped)
)" R"(    scale *= 1.0 / SMAA_SEARCHTEX_PACKED_SIZE;
)" R"(    bias *= 1.0 / SMAA_SEARCHTEX_PACKED_SIZE;
)" R"(
)" R"(    // Lookup the search texture:
)" R"(    return SMAA_SEARCHTEX_SELECT(SMAASampleLevelZero(searchTex, mad(scale, e, bias)));
)" R"(}
)" R"(
)" R"(/**
)" R"( * Horizontal/vertical search functions for the 2nd pass.
)" R"( */
)" R"(float SMAASearchXLeft(SMAATexture2D(edgesTex), SMAATexture2D(searchTex), float2 texcoord, float end) {
)" R"(    /**
)" R"(     * @PSEUDO_GATHER4
)" R"(     * This texcoord has been offset by (-0.25, -0.125) in the vertex shader to
)" R"(     * sample between edge, thus fetching four edges in a row.
)" R"(     * Sampling with different offsets in each direction allows to disambiguate
)" R"(     * which edges are active from the four fetched ones.
)" R"(     */
)" R"(    float2 e = float2(0.0, 1.0);
)" R"(    while (texcoord.x > end &&
)" R"(           e.g > 0.8281 && // Is there some edge not activated?
)" R"(           e.r == 0.0) { // Or is there a crossing edge that breaks the line?
)" R"(        e = SMAASampleLevelZero(edgesTex, texcoord).rg;
)" R"(        texcoord = mad(-float2(2.0, 0.0), SMAA_RT_METRICS.xy, texcoord);
)" R"(    }
)" R"(
)" R"(    float offset = mad(-(255.0 / 127.0), SMAASearchLength(SMAATexturePass2D(searchTex), e, 0.0), 3.25);
)" R"(    return mad(SMAA_RT_METRICS.x, offset, texcoord.x);
)" R"(
)" R"(    // Non-optimized version:
)" R"(    // We correct the previous (-0.25, -0.125) offset we applied:
)" R"(    // texcoord.x += 0.25 * SMAA_RT_METRICS.x;
)" R"(
)" R"(    // The searches are bias by 1, so adjust the coords accordingly:
)" R"(    // texcoord.x += SMAA_RT_METRICS.x;
)" R"(
)" R"(    // Disambiguate the length added by the last step:
)" R"(    // texcoord.x += 2.0 * SMAA_RT_METRICS.x; // Undo last step
)" R"(    // texcoord.x -= SMAA_RT_METRICS.x * (255.0 / 127.0) * SMAASearchLength(SMAATexturePass2D(searchTex), e, 0.0);
)" R"(    // return mad(SMAA_RT_METRICS.x, offset, texcoord.x);
)" R"(}
)" R"(
)" R"(float SMAASearchXRight(SMAATexture2D(edgesTex), SMAATexture2D(searchTex), float2 texcoord, float end) {
)" R"(    float2 e = float2(0.0, 1.0);
)" R"(    while (texcoord.x < end &&
)" R"(           e.g > 0.8281 && // Is there some edge not activated?
)" R"(           e.r == 0.0) { // Or is there a crossing edge that breaks the line?
)" R"(        e = SMAASampleLevelZero(edgesTex, texcoord).rg;
)" R"(        texcoord = mad(float2(2.0, 0.0), SMAA_RT_METRICS.xy, texcoord);
)" R"(    }
)" R"(    float offset = mad(-(255.0 / 127.0), SMAASearchLength(SMAATexturePass2D(searchTex), e, 0.5), 3.25);
)" R"(    return mad(-SMAA_RT_METRICS.x, offset, texcoord.x);
)" R"(}
)" R"(
)" R"(float SMAASearchYUp(SMAATexture2D(edgesTex), SMAATexture2D(searchTex), float2 texcoord, float end) {
)" R"(    float2 e = float2(1.0, 0.0);
)" R"(    while (texcoord.y > end &&
)" R"(           e.r > 0.8281 && // Is there some edge not activated?
)" R"(           e.g == 0.0) { // Or is there a crossing edge that breaks the line?
)" R"(        e = SMAASampleLevelZero(edgesTex, texcoord).rg;
)" R"(        texcoord = mad(-float2(0.0, 2.0), SMAA_RT_METRICS.xy, texcoord);
)" R"(    }
)" R"(    float offset = mad(-(255.0 / 127.0), SMAASearchLength(SMAATexturePass2D(searchTex), e.gr, 0.0), 3.25);
)" R"(    return mad(SMAA_RT_METRICS.y, offset, texcoord.y);
)" R"(}
)" R"(
)" R"(float SMAASearchYDown(SMAATexture2D(edgesTex), SMAATexture2D(searchTex), float2 texcoord, float end) {
)" R"(    float2 e = float2(1.0, 0.0);
)" R"(    while (texcoord.y < end &&
)" R"(           e.r > 0.8281 && // Is there some edge not activated?
)" R"(           e.g == 0.0) { // Or is there a crossing edge that breaks the line?
)" R"(        e = SMAASampleLevelZero(edgesTex, texcoord).rg;
)" R"(        texcoord = mad(float2(0.0, 2.0), SMAA_RT_METRICS.xy, texcoord);
)" R"(    }
)" R"(    float offset = mad(-(255.0 / 127.0), SMAASearchLength(SMAATexturePass2D(searchTex), e.gr, 0.5), 3.25);
)" R"(    return mad(-SMAA_RT_METRICS.y, offset, texcoord.y);
)" R"(}
)" R"(
)" R"(/**
)" R"( * Ok, we have the distance and both crossing edges. So, what are the areas
)" R"( * at each side of current edge?
)" R"( */
)" R"(float2 SMAAArea(SMAATexture2D(areaTex), float2 dist, float e1, float e2, float offset) {
)" R"(    // Rounding prevents precision errors of bilinear filtering:
)" R"(    float2 texcoord = mad(float2(SMAA_AREATEX_MAX_DISTANCE, SMAA_AREATEX_MAX_DISTANCE), round(4.0 * float2(e1, e2)), dist);
)" R"(
)" R"(    // We do a scale and bias for mapping to texel space:
)" R"(    texcoord = mad(SMAA_AREATEX_PIXEL_SIZE, texcoord, 0.5 * SMAA_AREATEX_PIXEL_SIZE);
)" R"(
)" R"(    // Move to proper place, according to the subpixel offset:
)" R"(    texcoord.y = mad(SMAA_AREATEX_SUBTEX_SIZE, offset, texcoord.y);
)" R"(
)" R"(    // Do it!
)" R"(    return SMAA_AREATEX_SELECT(SMAASampleLevelZero(areaTex, texcoord));
)" R"(}
)" R"(
)" R"(//-----------------------------------------------------------------------------
)" R"(// Corner Detection Functions
)" R"(
)" R"(void SMAADetectHorizontalCornerPattern(SMAATexture2D(edgesTex), inout float2 weights, float4 texcoord, float2 d) {
)" R"(    #if !defined(SMAA_DISABLE_CORNER_DETECTION)
)" R"(    float2 leftRight = step(d.xy, d.yx);
)" R"(    float2 rounding = (1.0 - SMAA_CORNER_ROUNDING_NORM) * leftRight;
)" R"(
)" R"(    rounding /= leftRight.x + leftRight.y; // Reduce blending for pixels in the center of a line.
)" R"(
)" R"(    float2 factor = float2(1.0, 1.0);
)" R"(    factor.x -= rounding.x * SMAASampleLevelZeroOffset(edgesTex, texcoord.xy, int2(0,  1)).r;
)" R"(    factor.x -= rounding.y * SMAASampleLevelZeroOffset(edgesTex, texcoord.zw, int2(1,  1)).r;
)" R"(    factor.y -= rounding.x * SMAASampleLevelZeroOffset(edgesTex, texcoord.xy, int2(0, -2)).r;
)" R"(    factor.y -= rounding.y * SMAASampleLevelZeroOffset(edgesTex, texcoord.zw, int2(1, -2)).r;
)" R"(
)" R"(    weights *= saturate(factor);
)" R"(    #endif
)" R"(}
)" R"(
)" R"(void SMAADetectVerticalCornerPattern(SMAATexture2D(edgesTex), inout float2 weights, float4 texcoord, float2 d) {
)" R"(    #if !defined(SMAA_DISABLE_CORNER_DETECTION)
)" R"(    float2 leftRight = step(d.xy, d.yx);
)" R"(    float2 rounding = (1.0 - SMAA_CORNER_ROUNDING_NORM) * leftRight;
)" R"(
)" R"(    rounding /= leftRight.x + leftRight.y;
)" R"(
)" R"(    float2 factor = float2(1.0, 1.0);
)" R"(    factor.x -= rounding.x * SMAASampleLevelZeroOffset(edgesTex, texcoord.xy, int2( 1, 0)).g;
)" R"(    factor.x -= rounding.y * SMAASampleLevelZeroOffset(edgesTex, texcoord.zw, int2( 1, 1)).g;
)" R"(    factor.y -= rounding.x * SMAASampleLevelZeroOffset(edgesTex, texcoord.xy, int2(-2, 0)).g;
)" R"(    factor.y -= rounding.y * SMAASampleLevelZeroOffset(edgesTex, texcoord.zw, int2(-2, 1)).g;
)" R"(
)" R"(    weights *= saturate(factor);
)" R"(    #endif
)" R"(}
)" R"(
)" R"(//-----------------------------------------------------------------------------
)" R"(// Blending Weight Calculation Pixel Shader (Second Pass)
)" R"(
)" R"(float4 SMAABlendingWeightCalculationPS(float2 texcoord,
)" R"(                                       float2 pixcoord,
)" R"(                                       float4 offset[3],
)" R"(                                       SMAATexture2D(edgesTex),
)" R"(                                       SMAATexture2D(areaTex),
)" R"(                                       SMAATexture2D(searchTex),
)" R"(                                       float4 subsampleIndices) { // Just pass zero for SMAA 1x, see @SUBSAMPLE_INDICES.
)" R"(    float4 weights = float4(0.0, 0.0, 0.0, 0.0);
)" R"(
)" R"(    float2 e = SMAASample(edgesTex, texcoord).rg;
)" R"(
)" R"(    SMAA_BRANCH
)" R"(    if (e.g > 0.0) { // Edge at north
)" R"(        #if !defined(SMAA_DISABLE_DIAG_DETECTION)
)" R"(        // Diagonals have both north and west edges, so searching for them in
)" R"(        // one of the boundaries is enough.
)" R"(        weights.rg = SMAACalculateDiagWeights(SMAATexturePass2D(edgesTex), SMAATexturePass2D(areaTex), texcoord, e, subsampleIndices);
)" R"(
)" R"(        // We give priority to diagonals, so if we find a diagonal we skip
)" R"(        // horizontal/vertical processing.
)" R"(        SMAA_BRANCH
)" R"(        if (weights.r == -weights.g) { // weights.r + weights.g == 0.0
)" R"(        #endif
)" R"(
)" R"(        float2 d;
)" R"(
)" R"(        // Find the distance to the left:
)" R"(        float3 coords;
)" R"(        coords.x = SMAASearchXLeft(SMAATexturePass2D(edgesTex), SMAATexturePass2D(searchTex), offset[0].xy, offset[2].x);
)" R"(        coords.y = offset[1].y; // offset[1].y = texcoord.y - 0.25 * SMAA_RT_METRICS.y (@CROSSING_OFFSET)
)" R"(        d.x = coords.x;
)" R"(
)" R"(        // Now fetch the left crossing edges, two at a time using bilinear
)" R"(        // filtering. Sampling at -0.25 (see @CROSSING_OFFSET) enables to
)" R"(        // discern what value each edge has:
)" R"(        float e1 = SMAASampleLevelZero(edgesTex, coords.xy).r;
)" R"(
)" R"(        // Find the distance to the right:
)" R"(        coords.z = SMAASearchXRight(SMAATexturePass2D(edgesTex), SMAATexturePass2D(searchTex), offset[0].zw, offset[2].y);
)" R"(        d.y = coords.z;
)" R"(
)" R"(        // We want the distances to be in pixel units (doing this here allow to
)" R"(        // better interleave arithmetic and memory accesses):
)" R"(        d = abs(round(mad(SMAA_RT_METRICS.zz, d, -pixcoord.xx)));
)" R"(
)" R"(        // SMAAArea below needs a sqrt, as the areas texture is compressed
)" R"(        // quadratically:
)" R"(        float2 sqrt_d = sqrt(d);
)" R"(
)" R"(        // Fetch the right crossing edges:
)" R"(        float e2 = SMAASampleLevelZeroOffset(edgesTex, coords.zy, int2(1, 0)).r;
)" R"(
)" R"(        // Ok, we know how this pattern looks like, now it is time for getting
)" R"(        // the actual area:
)" R"(        weights.rg = SMAAArea(SMAATexturePass2D(areaTex), sqrt_d, e1, e2, subsampleIndices.y);
)" R"(
)" R"(        // Fix corners:
)" R"(        coords.y = texcoord.y;
)" R"(        SMAADetectHorizontalCornerPattern(SMAATexturePass2D(edgesTex), weights.rg, coords.xyzy, d);
)" R"(
)" R"(        #if !defined(SMAA_DISABLE_DIAG_DETECTION)
)" R"(        } else
)" R"(            e.r = 0.0; // Skip vertical processing.
)" R"(        #endif
)" R"(    }
)" R"(
)" R"(    SMAA_BRANCH
)" R"(    if (e.r > 0.0) { // Edge at west
)" R"(        float2 d;
)" R"(
)" R"(        // Find the distance to the top:
)" R"(        float3 coords;
)" R"(        coords.y = SMAASearchYUp(SMAATexturePass2D(edgesTex), SMAATexturePass2D(searchTex), offset[1].xy, offset[2].z);
)" R"(        coords.x = offset[0].x; // offset[1].x = texcoord.x - 0.25 * SMAA_RT_METRICS.x;
)" R"(        d.x = coords.y;
)" R"(
)" R"(        // Fetch the top crossing edges:
)" R"(        float e1 = SMAASampleLevelZero(edgesTex, coords.xy).g;
)" R"(
)" R"(        // Find the distance to the bottom:
)" R"(        coords.z = SMAASearchYDown(SMAATexturePass2D(edgesTex), SMAATexturePass2D(searchTex), offset[1].zw, offset[2].w);
)" R"(        d.y = coords.z;
)" R"(
)" R"(        // We want the distances to be in pixel units:
)" R"(        d = abs(round(mad(SMAA_RT_METRICS.ww, d, -pixcoord.yy)));
)" R"(
)" R"(        // SMAAArea below needs a sqrt, as the areas texture is compressed
)" R"(        // quadratically:
)" R"(        float2 sqrt_d = sqrt(d);
)" R"(
)" R"(        // Fetch the bottom crossing edges:
)" R"(        float e2 = SMAASampleLevelZeroOffset(edgesTex, coords.xz, int2(0, 1)).g;
)" R"(
)" R"(        // Get the area for this direction:
)" R"(        weights.ba = SMAAArea(SMAATexturePass2D(areaTex), sqrt_d, e1, e2, subsampleIndices.x);
)" R"(
)" R"(        // Fix corners:
)" R"(        coords.x = texcoord.x;
)" R"(        SMAADetectVerticalCornerPattern(SMAATexturePass2D(edgesTex), weights.ba, coords.xyxz, d);
)" R"(    }
)" R"(
)" R"(    return weights;
)" R"(}
)" R"(
)" R"(//-----------------------------------------------------------------------------
)" R"(// Neighborhood Blending Pixel Shader (Third Pass)
)" R"(
)" R"(float4 SMAANeighborhoodBlendingPS(float2 texcoord,
)" R"(                                  float4 offset,
)" R"(                                  SMAATexture2D(colorTex),
)" R"(                                  SMAATexture2D(blendTex)
)" R"(                                  #if SMAA_REPROJECTION
)" R"(                                  , SMAATexture2D(velocityTex)
)" R"(                                  #endif
)" R"(                                  ) {
)" R"(    // Fetch the blending weights for current pixel:
)" R"(    float4 a;
)" R"(    a.x = SMAASample(blendTex, offset.xy).a; // Right
)" R"(    a.y = SMAASample(blendTex, offset.zw).g; // Top
)" R"(    a.wz = SMAASample(blendTex, texcoord).xz; // Bottom / Left
)" R"(
)" R"(    // Is there any blending weight with a value greater than 0.0?
)" R"(    SMAA_BRANCH
)" R"(    if (dot(a, float4(1.0, 1.0, 1.0, 1.0)) < 1e-5) {
)" R"(        float4 color = SMAASampleLevelZero(colorTex, texcoord);
)" R"(
)" R"(        #if SMAA_REPROJECTION
)" R"(        float2 velocity = SMAA_DECODE_VELOCITY(SMAASampleLevelZero(velocityTex, texcoord));
)" R"(
)" R"(        // Pack velocity into the alpha channel:
)" R"(        color.a = sqrt(5.0 * length(velocity));
)" R"(        #endif
)" R"(
)" R"(        return color;
)" R"(    } else {
)" R"(        bool h = max(a.x, a.z) > max(a.y, a.w); // max(horizontal) > max(vertical)
)" R"(
)" R"(        // Calculate the blending offsets:
)" R"(        float4 blendingOffset = float4(0.0, a.y, 0.0, a.w);
)" R"(        float2 blendingWeight = a.yw;
)" R"(        SMAAMovc(bool4(h, h, h, h), blendingOffset, float4(a.x, 0.0, a.z, 0.0));
)" R"(        SMAAMovc(bool2(h, h), blendingWeight, a.xz);
)" R"(        blendingWeight /= dot(blendingWeight, float2(1.0, 1.0));
)" R"(
)" R"(        // Calculate the texture coordinates:
)" R"(        float4 blendingCoord = mad(blendingOffset, float4(SMAA_RT_METRICS.xy, -SMAA_RT_METRICS.xy), texcoord.xyxy);
)" R"(
)" R"(        // We exploit bilinear filtering to mix current pixel with the chosen
)" R"(        // neighbor:
)" R"(        float4 color = blendingWeight.x * SMAASampleLevelZero(colorTex, blendingCoord.xy);
)" R"(        color += blendingWeight.y * SMAASampleLevelZero(colorTex, blendingCoord.zw);
)" R"(
)" R"(        #if SMAA_REPROJECTION
)" R"(        // Antialias velocity for proper reprojection in a later stage:
)" R"(        float2 velocity = blendingWeight.x * SMAA_DECODE_VELOCITY(SMAASampleLevelZero(velocityTex, blendingCoord.xy));
)" R"(        velocity += blendingWeight.y * SMAA_DECODE_VELOCITY(SMAASampleLevelZero(velocityTex, blendingCoord.zw));
)" R"(
)" R"(        // Pack velocity into the alpha channel:
)" R"(        color.a = sqrt(5.0 * length(velocity));
)" R"(        #endif
)" R"(
)" R"(        return color;
)" R"(    }
)" R"(}
)" R"(
)" R"(//-----------------------------------------------------------------------------
)" R"(// Temporal Resolve Pixel Shader (Optional Pass)
)" R"(
)" R"(float4 SMAAResolvePS(float2 texcoord,
)" R"(                     SMAATexture2D(currentColorTex),
)" R"(                     SMAATexture2D(previousColorTex)
)" R"(                     #if SMAA_REPROJECTION
)" R"(                     , SMAATexture2D(velocityTex)
)" R"(                     #endif
)" R"(                     ) {
)" R"(    #if SMAA_REPROJECTION
)" R"(    // Velocity is assumed to be calculated for motion blur, so we need to
)" R"(    // inverse it for reprojection:
)" R"(    float2 velocity = -SMAA_DECODE_VELOCITY(SMAASamplePoint(velocityTex, texcoord).rg);
)" R"(
)" R"(    // Fetch current pixel:
)" R"(    float4 current = SMAASamplePoint(currentColorTex, texcoord);
)" R"(
)" R"(    // Reproject current coordinates and fetch previous pixel:
)" R"(    float4 previous = SMAASamplePoint(previousColorTex, texcoord + velocity);
)" R"(
)" R"(    // Attenuate the previous pixel if the velocity is different:
)" R"(    float delta = abs(current.a * current.a - previous.a * previous.a) / 5.0;
)" R"(    float weight = 0.5 * saturate(1.0 - sqrt(delta) * SMAA_REPROJECTION_WEIGHT_SCALE);
)" R"(
)" R"(    // Blend the pixels according to the calculated weight:
)" R"(    return lerp(current, previous, weight);
)" R"(    #else
)" R"(    // Just blend the pixels:
)" R"(    float4 current = SMAASamplePoint(currentColorTex, texcoord);
)" R"(    float4 previous = SMAASamplePoint(previousColorTex, texcoord);
)" R"(    return lerp(current, previous, 0.5);
)" R"(    #endif
)" R"(}
)" R"(
)" R"(//-----------------------------------------------------------------------------
)" R"(// Separate Multisamples Pixel Shader (Optional Pass)
)" R"(
)" R"(#ifdef SMAALoad
)" R"(void SMAASeparatePS(float4 position,
)" R"(                    float2 texcoord,
)" R"(                    out float4 target0,
)" R"(                    out float4 target1,
)" R"(                    SMAATexture2DMS2(colorTexMS)) {
)" R"(    int2 pos = int2(position.xy);
)" R"(    target0 = SMAALoad(colorTexMS, pos, 0);
)" R"(    target1 = SMAALoad(colorTexMS, pos, 1);
)" R"(}
)" R"(#endif
)" R"(
)" R"(//-----------------------------------------------------------------------------
)" R"(#endif // SMAA_INCLUDE_PS
)" R"(
)" 
};

} // namespace HostShaders

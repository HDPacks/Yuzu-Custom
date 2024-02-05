// SPDX-FileCopyrightText: 2020 yuzu Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include <string_view>

namespace HostShaders {

constexpr std::string_view OPENGL_PRESENT_SCALEFORCE_FRAG = {
R"(// SPDX-FileCopyrightText: 2020 BreadFish64
)" R"(// SPDX-License-Identifier: MIT
)" R"(
)" R"(// Adapted from https://github.com/BreadFish64/ScaleFish/tree/master/scaleforce
)" R"(
)" R"(//! #version 460
)" R"(
)" R"(#extension GL_ARB_separate_shader_objects : enable
)" R"(
)" R"(#ifdef YUZU_USE_FP16
)" R"(
)" R"(#extension GL_AMD_gpu_shader_half_float : enable
)" R"(#extension GL_NV_gpu_shader5 : enable
)" R"(
)" R"(#define lfloat float16_t
)" R"(#define lvec2 f16vec2
)" R"(#define lvec3 f16vec3
)" R"(#define lvec4 f16vec4
)" R"(
)" R"(#else
)" R"(
)" R"(#define lfloat float
)" R"(#define lvec2 vec2
)" R"(#define lvec3 vec3
)" R"(#define lvec4 vec4
)" R"(
)" R"(#endif
)" R"(
)" R"(layout (location = 0) in vec2 tex_coord;
)" R"(
)" R"(layout (location = 0) out vec4 frag_color;
)" R"(
)" R"(layout (binding = 0) uniform sampler2D input_texture;
)" R"(
)" R"(const bool ignore_alpha = true;
)" R"(
)" R"(lfloat ColorDist1(lvec4 a, lvec4 b) {
)" R"(    // https://en.wikipedia.org/wiki/YCbCr#ITU-R_BT.2020_conversion
)" R"(    const lvec3 K = lvec3(0.2627, 0.6780, 0.0593);
)" R"(    const lfloat scaleB = lfloat(0.5) / (lfloat(1.0) - K.b);
)" R"(    const lfloat scaleR = lfloat(0.5) / (lfloat(1.0) - K.r);
)" R"(    lvec4 diff = a - b;
)" R"(    lfloat Y = dot(diff.rgb, K);
)" R"(    lfloat Cb = scaleB * (diff.b - Y);
)" R"(    lfloat Cr = scaleR * (diff.r - Y);
)" R"(    lvec3 YCbCr = lvec3(Y, Cb, Cr);
)" R"(    lfloat d = length(YCbCr);
)" R"(    if (ignore_alpha) {
)" R"(        return d;
)" R"(    }
)" R"(    return sqrt(a.a * b.a * d * d + diff.a * diff.a);
)" R"(}
)" R"(
)" R"(lvec4 ColorDist(lvec4 ref, lvec4 A, lvec4 B, lvec4 C, lvec4 D) {
)" R"(    return lvec4(
)" R"(            ColorDist1(ref, A),
)" R"(            ColorDist1(ref, B),
)" R"(            ColorDist1(ref, C),
)" R"(            ColorDist1(ref, D)
)" R"(        );
)" R"(}
)" R"(
)" R"(vec4 Scaleforce(sampler2D tex, vec2 tex_coord) {
)" R"(    lvec4 bl = lvec4(textureOffset(tex, tex_coord, ivec2(-1, -1)));
)" R"(    lvec4 bc = lvec4(textureOffset(tex, tex_coord, ivec2(0, -1)));
)" R"(    lvec4 br = lvec4(textureOffset(tex, tex_coord, ivec2(1, -1)));
)" R"(    lvec4 cl = lvec4(textureOffset(tex, tex_coord, ivec2(-1, 0)));
)" R"(    lvec4 cc = lvec4(texture(tex, tex_coord));
)" R"(    lvec4 cr = lvec4(textureOffset(tex, tex_coord, ivec2(1, 0)));
)" R"(    lvec4 tl = lvec4(textureOffset(tex, tex_coord, ivec2(-1, 1)));
)" R"(    lvec4 tc = lvec4(textureOffset(tex, tex_coord, ivec2(0, 1)));
)" R"(    lvec4 tr = lvec4(textureOffset(tex, tex_coord, ivec2(1, 1)));
)" R"(
)" R"(    lvec4 offset_tl = ColorDist(cc, tl, tc, tr, cr);
)" R"(    lvec4 offset_br = ColorDist(cc, br, bc, bl, cl);
)" R"(
)" R"(    // Calculate how different cc is from the texels around it
)" R"(    const lfloat plus_weight = lfloat(1.5);
)" R"(    const lfloat cross_weight = lfloat(1.5);
)" R"(    lfloat total_dist = dot(offset_tl + offset_br, lvec4(cross_weight, plus_weight, cross_weight, plus_weight));
)" R"(
)" R"(    if (total_dist == lfloat(0.0)) {
)" R"(        return cc;
)" R"(    } else {
)" R"(        // Add together all the distances with direction taken into account
)" R"(        lvec4 tmp = offset_tl - offset_br;
)" R"(        lvec2 total_offset = tmp.wy * plus_weight + (tmp.zz + lvec2(-tmp.x, tmp.x)) * cross_weight;
)" R"(
)" R"(        // When the image has thin points, they tend to split apart.
)" R"(        // This is because the texels all around are different and total_offset reaches into clear areas.
)" R"(        // This works pretty well to keep the offset in bounds for these cases.
)" R"(        lfloat clamp_val = length(total_offset) / total_dist;
)" R"(        vec2 final_offset = vec2(clamp(total_offset, -clamp_val, clamp_val)) / textureSize(tex, 0);
)" R"(
)" R"(        return texture(tex, tex_coord - final_offset);
)" R"(    }
)" R"(}
)" R"(
)" R"(void main() {
)" R"(    frag_color = Scaleforce(input_texture, tex_coord);
)" R"(}
)" R"(
)" 
};

} // namespace HostShaders

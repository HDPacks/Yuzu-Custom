// SPDX-FileCopyrightText: 2020 yuzu Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include <string_view>

namespace HostShaders {

constexpr std::string_view FXAA_FRAG = {
R"(// SPDX-FileCopyrightText: Copyright 2021 yuzu Emulator Project
)" R"(// SPDX-License-Identifier: GPL-2.0-or-later
)" R"(
)" R"(// Source code is adapted from
)" R"(// https://www.geeks3d.com/20110405/fxaa-fast-approximate-anti-aliasing-demo-glsl-opengl-test-radeon-geforce/3/
)" R"(
)" R"(#version 460
)" R"(
)" R"(#ifdef VULKAN
)" R"(
)" R"(#define BINDING_COLOR_TEXTURE 1
)" R"(
)" R"(#else // ^^^ Vulkan ^^^ // vvv OpenGL vvv
)" R"(
)" R"(#define BINDING_COLOR_TEXTURE 0
)" R"(
)" R"(#endif
)" R"(
)" R"(layout (location = 0) in vec4 posPos;
)" R"(
)" R"(layout (location = 0) out vec4 frag_color;
)" R"(
)" R"(layout (binding = BINDING_COLOR_TEXTURE) uniform sampler2D input_texture;
)" R"(
)" R"(const float FXAA_SPAN_MAX = 8.0;
)" R"(const float FXAA_REDUCE_MUL = 1.0 / 8.0;
)" R"(const float FXAA_REDUCE_MIN = 1.0 / 128.0;
)" R"(
)" R"(#define FxaaTexLod0(t, p) textureLod(t, p, 0.0)
)" R"(#define FxaaTexOff(t, p, o) textureLodOffset(t, p, 0.0, o)
)" R"(
)" R"(vec3 FxaaPixelShader(vec4 posPos, sampler2D tex) {
)" R"(
)" R"(    vec3 rgbNW = FxaaTexLod0(tex, posPos.zw).xyz;
)" R"(    vec3 rgbNE = FxaaTexOff(tex, posPos.zw, ivec2(1,0)).xyz;
)" R"(    vec3 rgbSW = FxaaTexOff(tex, posPos.zw, ivec2(0,1)).xyz;
)" R"(    vec3 rgbSE = FxaaTexOff(tex, posPos.zw, ivec2(1,1)).xyz;
)" R"(    vec3 rgbM  = FxaaTexLod0(tex, posPos.xy).xyz;
)" R"(/*---------------------------------------------------------*/
)" R"(    vec3 luma = vec3(0.299, 0.587, 0.114);
)" R"(    float lumaNW = dot(rgbNW, luma);
)" R"(    float lumaNE = dot(rgbNE, luma);
)" R"(    float lumaSW = dot(rgbSW, luma);
)" R"(    float lumaSE = dot(rgbSE, luma);
)" R"(    float lumaM  = dot(rgbM,  luma);
)" R"(/*---------------------------------------------------------*/
)" R"(    float lumaMin = min(lumaM, min(min(lumaNW, lumaNE), min(lumaSW, lumaSE)));
)" R"(    float lumaMax = max(lumaM, max(max(lumaNW, lumaNE), max(lumaSW, lumaSE)));
)" R"(/*---------------------------------------------------------*/
)" R"(    vec2 dir;
)" R"(    dir.x = -((lumaNW + lumaNE) - (lumaSW + lumaSE));
)" R"(    dir.y =  ((lumaNW + lumaSW) - (lumaNE + lumaSE));
)" R"(/*---------------------------------------------------------*/
)" R"(    float dirReduce = max(
)" R"(        (lumaNW + lumaNE + lumaSW + lumaSE) * (0.25 * FXAA_REDUCE_MUL),
)" R"(        FXAA_REDUCE_MIN);
)" R"(    float rcpDirMin = 1.0/(min(abs(dir.x), abs(dir.y)) + dirReduce);
)" R"(    dir = min(vec2( FXAA_SPAN_MAX,  FXAA_SPAN_MAX),
)" R"(          max(vec2(-FXAA_SPAN_MAX, -FXAA_SPAN_MAX),
)" R"(          dir * rcpDirMin)) / textureSize(tex, 0);
)" R"(/*--------------------------------------------------------*/
)" R"(    vec3 rgbA = (1.0 / 2.0) * (
)" R"(        FxaaTexLod0(tex, posPos.xy + dir * (1.0 / 3.0 - 0.5)).xyz +
)" R"(        FxaaTexLod0(tex, posPos.xy + dir * (2.0 / 3.0 - 0.5)).xyz);
)" R"(    vec3 rgbB = rgbA * (1.0 / 2.0) + (1.0 / 4.0) * (
)" R"(        FxaaTexLod0(tex, posPos.xy + dir * (0.0 / 3.0 - 0.5)).xyz +
)" R"(        FxaaTexLod0(tex, posPos.xy + dir * (3.0 / 3.0 - 0.5)).xyz);
)" R"(    float lumaB = dot(rgbB, luma);
)" R"(    if((lumaB < lumaMin) || (lumaB > lumaMax)) return rgbA;
)" R"(    return rgbB;
)" R"(}
)" R"(
)" R"(void main() {
)" R"(  frag_color = vec4(FxaaPixelShader(posPos, input_texture), 1.0);
)" R"(}
)" R"(
)" 
};

} // namespace HostShaders

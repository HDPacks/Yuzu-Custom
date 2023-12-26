// SPDX-FileCopyrightText: 2020 yuzu Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include <string_view>

namespace HostShaders {

constexpr std::string_view PRESENT_GAUSSIAN_FRAG = {
R"(// SPDX-FileCopyrightText: Copyright 2021 yuzu Emulator Project
)" R"(// SPDX-License-Identifier: GPL-2.0-or-later
)" R"(
)" R"(// Code adapted from the following sources:
)" R"(// - https://learnopengl.com/Advanced-Lighting/Bloom
)" R"(// - https://www.rastergrid.com/blog/2010/09/efficient-gaussian-blur-with-linear-sampling/
)" R"(
)" R"(#version 460 core
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
)" R"(layout(location = 0) in vec2 frag_tex_coord;
)" R"(
)" R"(layout(location = 0) out vec4 color;
)" R"(
)" R"(layout(binding = BINDING_COLOR_TEXTURE) uniform sampler2D color_texture;
)" R"(
)" R"(const float offset[3] = float[](0.0, 1.3846153846, 3.2307692308);
)" R"(const float weight[3] = float[](0.2270270270, 0.3162162162, 0.0702702703);
)" R"(
)" R"(vec4 blurVertical(sampler2D textureSampler, vec2 coord, vec2 norm) {
)" R"(    vec4 result = vec4(0.0f);
)" R"(    for (int i = 1; i < 3; i++) {
)" R"(        result += texture(textureSampler, vec2(coord) + (vec2(0.0, offset[i]) * norm)) * weight[i];
)" R"(        result += texture(textureSampler, vec2(coord) - (vec2(0.0, offset[i]) * norm)) * weight[i];
)" R"(    }
)" R"(    return result;
)" R"(}
)" R"(
)" R"(vec4 blurHorizontal(sampler2D textureSampler, vec2 coord, vec2 norm) {
)" R"(    vec4 result = vec4(0.0f);
)" R"(    for (int i = 1; i < 3; i++) {
)" R"(        result += texture(textureSampler, vec2(coord) + (vec2(offset[i], 0.0) * norm)) * weight[i];
)" R"(        result += texture(textureSampler, vec2(coord) - (vec2(offset[i], 0.0) * norm)) * weight[i];
)" R"(    }
)" R"(    return result;
)" R"(}
)" R"(
)" R"(vec4 blurDiagonal(sampler2D textureSampler, vec2 coord, vec2 norm) {
)" R"(    vec4 result = vec4(0.0f);
)" R"(    for (int i = 1; i < 3; i++) {
)" R"(        result +=
)" R"(            texture(textureSampler, vec2(coord) + (vec2(offset[i], offset[i]) * norm)) * weight[i];
)" R"(        result +=
)" R"(            texture(textureSampler, vec2(coord) - (vec2(offset[i], offset[i]) * norm)) * weight[i];
)" R"(    }
)" R"(    return result;
)" R"(}
)" R"(
)" R"(void main() {
)" R"(    vec3 base = texture(color_texture, vec2(frag_tex_coord)).rgb * weight[0];
)" R"(    vec2 tex_offset = 1.0f / textureSize(color_texture, 0);
)" R"(
)" R"(    // TODO(Blinkhawk): This code can be optimized through shader group instructions.
)" R"(    vec3 horizontal = blurHorizontal(color_texture, frag_tex_coord, tex_offset).rgb;
)" R"(    vec3 vertical = blurVertical(color_texture, frag_tex_coord, tex_offset).rgb;
)" R"(    vec3 diagonalA = blurDiagonal(color_texture, frag_tex_coord, tex_offset).rgb;
)" R"(    vec3 diagonalB = blurDiagonal(color_texture, frag_tex_coord, tex_offset * vec2(1.0, -1.0)).rgb;
)" R"(    vec3 combination = mix(mix(horizontal, vertical, 0.5f), mix(diagonalA, diagonalB, 0.5f), 0.5f);
)" R"(    color = vec4(combination + base, 1.0f);
)" R"(}
)" R"(
)" 
};

} // namespace HostShaders

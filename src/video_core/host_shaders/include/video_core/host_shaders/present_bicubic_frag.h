// SPDX-FileCopyrightText: 2020 yuzu Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include <string_view>

namespace HostShaders {

constexpr std::string_view PRESENT_BICUBIC_FRAG = {
R"(// SPDX-FileCopyrightText: Copyright 2021 yuzu Emulator Project
)" R"(// SPDX-License-Identifier: GPL-2.0-or-later
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
)" R"(
)" R"(layout (location = 0) in vec2 frag_tex_coord;
)" R"(
)" R"(layout (location = 0) out vec4 color;
)" R"(
)" R"(layout (binding = BINDING_COLOR_TEXTURE) uniform sampler2D color_texture;
)" R"(
)" R"(vec4 cubic(float v) {
)" R"(    vec4 n = vec4(1.0, 2.0, 3.0, 4.0) - v;
)" R"(    vec4 s = n * n * n;
)" R"(    float x = s.x;
)" R"(    float y = s.y - 4.0 * s.x;
)" R"(    float z = s.z - 4.0 * s.y + 6.0 * s.x;
)" R"(    float w = 6.0 - x - y - z;
)" R"(    return vec4(x, y, z, w) * (1.0 / 6.0);
)" R"(}
)" R"(
)" R"(vec4 textureBicubic( sampler2D textureSampler, vec2 texCoords ) {
)" R"(
)" R"(    vec2 texSize = textureSize(textureSampler, 0);
)" R"(    vec2 invTexSize = 1.0 / texSize;
)" R"(
)" R"(    texCoords = texCoords * texSize - 0.5;
)" R"(
)" R"(    vec2 fxy = fract(texCoords);
)" R"(    texCoords -= fxy;
)" R"(
)" R"(    vec4 xcubic = cubic(fxy.x);
)" R"(    vec4 ycubic = cubic(fxy.y);
)" R"(
)" R"(    vec4 c = texCoords.xxyy + vec2(-0.5, +1.5).xyxy;
)" R"(
)" R"(    vec4 s = vec4(xcubic.xz + xcubic.yw, ycubic.xz + ycubic.yw);
)" R"(    vec4 offset = c + vec4(xcubic.yw, ycubic.yw) / s;
)" R"(
)" R"(    offset *= invTexSize.xxyy;
)" R"(
)" R"(    vec4 sample0 = texture(textureSampler, offset.xz);
)" R"(    vec4 sample1 = texture(textureSampler, offset.yz);
)" R"(    vec4 sample2 = texture(textureSampler, offset.xw);
)" R"(    vec4 sample3 = texture(textureSampler, offset.yw);
)" R"(
)" R"(    float sx = s.x / (s.x + s.y);
)" R"(    float sy = s.z / (s.z + s.w);
)" R"(
)" R"(    return mix(mix(sample3, sample2, sx), mix(sample1, sample0, sx), sy);
)" R"(}
)" R"(
)" R"(void main() {
)" R"(    color = vec4(textureBicubic(color_texture, frag_tex_coord).rgb, 1.0f);
)" R"(}
)" R"(
)" 
};

} // namespace HostShaders

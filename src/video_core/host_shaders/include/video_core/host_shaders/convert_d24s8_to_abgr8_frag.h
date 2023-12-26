// SPDX-FileCopyrightText: 2020 yuzu Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include <string_view>

namespace HostShaders {

constexpr std::string_view CONVERT_D24S8_TO_ABGR8_FRAG = {
R"(// SPDX-FileCopyrightText: Copyright 2021 yuzu Emulator Project
)" R"(// SPDX-License-Identifier: GPL-2.0-or-later
)" R"(
)" R"(#version 450
)" R"(
)" R"(precision mediump int;
)" R"(precision highp float;
)" R"(
)" R"(layout(binding = 0) uniform sampler2D depth_tex;
)" R"(layout(binding = 1) uniform usampler2D stencil_tex;
)" R"(
)" R"(layout(location = 0) out vec4 color;
)" R"(
)" R"(void main() {
)" R"(    ivec2 coord = ivec2(gl_FragCoord.xy);
)" R"(    highp uint depth_val =
)" R"(        uint(textureLod(depth_tex, coord, 0).r * (exp2(32.0) - 1.0));
)" R"(    lowp uint stencil_val = textureLod(stencil_tex, coord, 0).r;
)" R"(    highp uvec4 components =
)" R"(        uvec4(stencil_val, (uvec3(depth_val) >> uvec3(24u, 16u, 8u)) & 0x000000FFu);
)" R"(    color.abgr = vec4(components) / (exp2(8.0) - 1.0);
)" R"(}
)" R"(
)" 
};

} // namespace HostShaders

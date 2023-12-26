// SPDX-FileCopyrightText: 2020 yuzu Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include <string_view>

namespace HostShaders {

constexpr std::string_view CONVERT_ABGR8_TO_D24S8_FRAG = {
R"(// SPDX-FileCopyrightText: Copyright 2021 yuzu Emulator Project
)" R"(// SPDX-License-Identifier: GPL-2.0-or-later
)" R"(
)" R"(#version 450
)" R"(#extension GL_ARB_shader_stencil_export : require
)" R"(
)" R"(layout(binding = 0) uniform sampler2D color_texture;
)" R"(
)" R"(void main() {
)" R"(    ivec2 coord = ivec2(gl_FragCoord.xy);
)" R"(    uvec4 color = uvec4(texelFetch(color_texture, coord, 0).abgr * (exp2(8) - 1.0f));
)" R"(    uvec4 bytes = color << uvec4(24, 16, 8, 0);
)" R"(    uint depth_stencil_unorm = bytes.x | bytes.y | bytes.z | bytes.w;
)" R"(
)" R"(    gl_FragDepth = float(depth_stencil_unorm & 0x00FFFFFFu) / (exp2(24.0) - 1.0f);
)" R"(    gl_FragStencilRefARB = int(depth_stencil_unorm >> 24);
)" R"(}
)" R"(
)" 
};

} // namespace HostShaders

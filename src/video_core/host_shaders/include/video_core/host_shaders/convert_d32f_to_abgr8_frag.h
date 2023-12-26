// SPDX-FileCopyrightText: 2020 yuzu Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include <string_view>

namespace HostShaders {

constexpr std::string_view CONVERT_D32F_TO_ABGR8_FRAG = {
R"(// SPDX-FileCopyrightText: Copyright 2021 yuzu Emulator Project
)" R"(// SPDX-License-Identifier: GPL-2.0-or-later
)" R"(
)" R"(#version 450
)" R"(
)" R"(layout(binding = 0) uniform sampler2D depth_tex;
)" R"(
)" R"(layout(location = 0) out vec4 color;
)" R"(
)" R"(void main() {
)" R"(    ivec2 coord = ivec2(gl_FragCoord.xy);
)" R"(    float depth = texelFetch(depth_tex, coord, 0).r;
)" R"(    color = vec4(depth, depth, depth, 1.0);
)" R"(}
)" R"(
)" 
};

} // namespace HostShaders

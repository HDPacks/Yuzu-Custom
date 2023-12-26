// SPDX-FileCopyrightText: 2020 yuzu Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include <string_view>

namespace HostShaders {

constexpr std::string_view CONVERT_FLOAT_TO_DEPTH_FRAG = {
R"(// SPDX-FileCopyrightText: Copyright 2020 yuzu Emulator Project
)" R"(// SPDX-License-Identifier: GPL-2.0-or-later
)" R"(
)" R"(#version 450
)" R"(
)" R"(layout(binding = 0) uniform sampler2D color_texture;
)" R"(
)" R"(void main() {
)" R"(    ivec2 coord = ivec2(gl_FragCoord.xy);
)" R"(    float color = texelFetch(color_texture, coord, 0).r;
)" R"(    gl_FragDepth = color;
)" R"(}
)" R"(
)" 
};

} // namespace HostShaders

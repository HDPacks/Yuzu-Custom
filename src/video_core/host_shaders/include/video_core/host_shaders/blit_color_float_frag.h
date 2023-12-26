// SPDX-FileCopyrightText: 2020 yuzu Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include <string_view>

namespace HostShaders {

constexpr std::string_view BLIT_COLOR_FLOAT_FRAG = {
R"(// SPDX-FileCopyrightText: Copyright 2020 yuzu Emulator Project
)" R"(// SPDX-License-Identifier: GPL-2.0-or-later
)" R"(
)" R"(#version 450
)" R"(
)" R"(layout(binding = 0) uniform sampler2D tex;
)" R"(
)" R"(layout(location = 0) in vec2 texcoord;
)" R"(layout(location = 0) out vec4 color;
)" R"(
)" R"(void main() {
)" R"(    color = textureLod(tex, texcoord, 0);
)" R"(}
)" R"(
)" 
};

} // namespace HostShaders

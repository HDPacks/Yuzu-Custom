// SPDX-FileCopyrightText: 2020 yuzu Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include <string_view>

namespace HostShaders {

constexpr std::string_view OPENGL_PRESENT_FRAG = {
R"(// SPDX-FileCopyrightText: Copyright 2020 yuzu Emulator Project
)" R"(// SPDX-License-Identifier: GPL-2.0-or-later
)" R"(
)" R"(#version 430 core
)" R"(
)" R"(layout (location = 0) in vec2 frag_tex_coord;
)" R"(layout (location = 0) out vec4 color;
)" R"(
)" R"(layout (binding = 0) uniform sampler2D color_texture;
)" R"(
)" R"(void main() {
)" R"(    color = vec4(texture(color_texture, frag_tex_coord).rgb, 1.0f);
)" R"(}
)" R"(
)" 
};

} // namespace HostShaders

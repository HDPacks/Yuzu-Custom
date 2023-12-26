// SPDX-FileCopyrightText: 2020 yuzu Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include <string_view>

namespace HostShaders {

constexpr std::string_view FULL_SCREEN_TRIANGLE_VERT = {
R"(// SPDX-FileCopyrightText: Copyright 2020 yuzu Emulator Project
)" R"(// SPDX-License-Identifier: GPL-2.0-or-later
)" R"(
)" R"(#version 450
)" R"(
)" R"(#ifdef VULKAN
)" R"(#define VERTEX_ID gl_VertexIndex
)" R"(#define BEGIN_PUSH_CONSTANTS layout(push_constant) uniform PushConstants {
)" R"(#define END_PUSH_CONSTANTS };
)" R"(#define UNIFORM(n)
)" R"(#define FLIPY 1
)" R"(#else // ^^^ Vulkan ^^^ // vvv OpenGL vvv
)" R"(#define VERTEX_ID gl_VertexID
)" R"(#define BEGIN_PUSH_CONSTANTS
)" R"(#define END_PUSH_CONSTANTS
)" R"(#define FLIPY -1
)" R"(#define UNIFORM(n) layout (location = n) uniform
)" R"(out gl_PerVertex {
)" R"(    vec4 gl_Position;
)" R"(};
)" R"(#endif
)" R"(
)" R"(BEGIN_PUSH_CONSTANTS
)" R"(UNIFORM(0) vec2 tex_scale;
)" R"(UNIFORM(1) vec2 tex_offset;
)" R"(END_PUSH_CONSTANTS
)" R"(
)" R"(layout(location = 0) out vec2 texcoord;
)" R"(
)" R"(void main() {
)" R"(    float x = float((VERTEX_ID & 1) << 2);
)" R"(    float y = float((VERTEX_ID & 2) << 1);
)" R"(    gl_Position = vec4(x - 1.0, FLIPY * (y - 1.0), 0.0, 1.0);
)" R"(    texcoord = fma(vec2(x, y) / 2.0, tex_scale, tex_offset);
)" R"(}
)" R"(
)" 
};

} // namespace HostShaders

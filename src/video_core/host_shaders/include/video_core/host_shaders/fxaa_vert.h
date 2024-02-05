// SPDX-FileCopyrightText: 2020 yuzu Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include <string_view>

namespace HostShaders {

constexpr std::string_view FXAA_VERT = {
R"(// SPDX-FileCopyrightText: Copyright 2021 yuzu Emulator Project
)" R"(// SPDX-License-Identifier: GPL-2.0-or-later
)" R"(
)" R"(#version 460
)" R"(
)" R"(out gl_PerVertex {
)" R"(    vec4 gl_Position;
)" R"(};
)" R"(
)" R"(const vec2 vertices[3] =
)" R"(    vec2[3](vec2(-1,-1), vec2(3,-1), vec2(-1, 3));
)" R"(
)" R"(layout (location = 0) out vec4 posPos;
)" R"(
)" R"(#ifdef VULKAN
)" R"(
)" R"(#define BINDING_COLOR_TEXTURE 0
)" R"(#define VERTEX_ID gl_VertexIndex
)" R"(
)" R"(#else // ^^^ Vulkan ^^^ // vvv OpenGL vvv
)" R"(
)" R"(#define BINDING_COLOR_TEXTURE 0
)" R"(#define VERTEX_ID gl_VertexID
)" R"(
)" R"(#endif
)" R"(
)" R"(layout (binding = BINDING_COLOR_TEXTURE) uniform sampler2D input_texture;
)" R"(
)" R"(const float FXAA_SUBPIX_SHIFT = 0;
)" R"(
)" R"(void main() {
)" R"(  vec2 vertex = vertices[VERTEX_ID];
)" R"(  gl_Position = vec4(vertex, 0.0, 1.0);
)" R"(  vec2 vert_tex_coord = (vertex + 1.0) / 2.0;
)" R"(  posPos.xy = vert_tex_coord;
)" R"(  posPos.zw = vert_tex_coord - (0.5 + FXAA_SUBPIX_SHIFT) / textureSize(input_texture, 0);
)" R"(}
)" R"(
)" 
};

} // namespace HostShaders

// SPDX-FileCopyrightText: 2020 yuzu Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include <string_view>

namespace HostShaders {

constexpr std::string_view SMAA_NEIGHBORHOOD_BLENDING_VERT = {
R"(// SPDX-FileCopyrightText: Copyright 2022 yuzu Emulator Project
)" R"(// SPDX-License-Identifier: GPL-2.0-or-later
)" R"(
)" R"(#version 460
)" R"(
)" R"(#extension GL_GOOGLE_include_directive : enable
)" R"(
)" R"(#ifdef VULKAN
)" R"(#define VERTEX_ID gl_VertexIndex
)" R"(#else // ^^^ Vulkan ^^^ // vvv OpenGL vvv
)" R"(#define VERTEX_ID gl_VertexID
)" R"(#endif
)" R"(
)" R"(out gl_PerVertex {
)" R"(    vec4 gl_Position;
)" R"(};
)" R"(
)" R"(const vec2 vertices[3] =
)" R"(    vec2[3](vec2(-1,-1), vec2(3,-1), vec2(-1, 3));
)" R"(
)" R"(layout (binding = 0) uniform sampler2D input_tex;
)" R"(layout (binding = 1) uniform sampler2D blend_tex;
)" R"(
)" R"(layout (location = 0) out vec2 tex_coord;
)" R"(layout (location = 1) out vec4 offset;
)" R"(
)" R"(vec4 metrics = vec4(1.0 / textureSize(input_tex, 0), textureSize(input_tex, 0));
)" R"(#define SMAA_RT_METRICS metrics
)" R"(#define SMAA_GLSL_4
)" R"(#define SMAA_PRESET_ULTRA
)" R"(#define SMAA_INCLUDE_VS 1
)" R"(#define SMAA_INCLUDE_PS 0
)" R"(
)" R"(#include "opengl_smaa.glsl"
)" R"(
)" R"(void main() {
)" R"(    vec2 vertex = vertices[VERTEX_ID];
)" R"(    gl_Position = vec4(vertex, 0.0, 1.0);
)" R"(    tex_coord = (vertex + 1.0) / 2.0;
)" R"(    SMAANeighborhoodBlendingVS(tex_coord, offset);
)" R"(}
)" R"(
)" 
};

} // namespace HostShaders

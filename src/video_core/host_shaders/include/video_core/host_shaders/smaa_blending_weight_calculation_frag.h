// SPDX-FileCopyrightText: 2020 yuzu Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include <string_view>

namespace HostShaders {

constexpr std::string_view SMAA_BLENDING_WEIGHT_CALCULATION_FRAG = {
R"(// SPDX-FileCopyrightText: Copyright 2022 yuzu Emulator Project
)" R"(// SPDX-License-Identifier: GPL-2.0-or-later
)" R"(
)" R"(#version 460
)" R"(
)" R"(#extension GL_GOOGLE_include_directive : enable
)" R"(
)" R"(layout (binding = 0) uniform sampler2D edges_tex;
)" R"(layout (binding = 1) uniform sampler2D area_tex;
)" R"(layout (binding = 2) uniform sampler2D search_tex;
)" R"(
)" R"(layout (location = 0) in vec2 tex_coord;
)" R"(layout (location = 1) in vec2 pix_coord;
)" R"(layout (location = 2) in vec4 offset[3];
)" R"(
)" R"(layout (location = 0) out vec4 frag_color;
)" R"(
)" R"(vec4 metrics = vec4(1.0 / textureSize(edges_tex, 0), textureSize(edges_tex, 0));
)" R"(#define SMAA_RT_METRICS metrics
)" R"(#define SMAA_GLSL_4
)" R"(#define SMAA_PRESET_ULTRA
)" R"(#define SMAA_INCLUDE_VS 0
)" R"(#define SMAA_INCLUDE_PS 1
)" R"(
)" R"(#include "opengl_smaa.glsl"
)" R"(
)" R"(void main() {
)" R"(    frag_color = SMAABlendingWeightCalculationPS(tex_coord,
)" R"(                                       pix_coord,
)" R"(                                       offset,
)" R"(                                       edges_tex,
)" R"(                                       area_tex,
)" R"(                                       search_tex,
)" R"(                                       vec4(0)
)" R"(                                       );
)" R"(}
)" R"(
)" 
};

} // namespace HostShaders

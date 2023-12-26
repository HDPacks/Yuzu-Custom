// SPDX-FileCopyrightText: 2020 yuzu Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include <string_view>

namespace HostShaders {

constexpr std::string_view OPENGL_PRESENT_VERT = {
R"(// SPDX-FileCopyrightText: Copyright 2020 yuzu Emulator Project
)" R"(// SPDX-License-Identifier: GPL-2.0-or-later
)" R"(
)" R"(#version 430 core
)" R"(
)" R"(out gl_PerVertex {
)" R"(    vec4 gl_Position;
)" R"(};
)" R"(
)" R"(layout (location = 0) in vec2 vert_position;
)" R"(layout (location = 1) in vec2 vert_tex_coord;
)" R"(layout (location = 0) out vec2 frag_tex_coord;
)" R"(
)" R"(// This is a truncated 3x3 matrix for 2D transformations:
)" R"(// The upper-left 2x2 submatrix performs scaling/rotation/mirroring.
)" R"(// The third column performs translation.
)" R"(// The third row could be used for projection, which we don't need in 2D. It hence is assumed to
)" R"(// implicitly be [0, 0, 1]
)" R"(layout (location = 0) uniform mat3x2 modelview_matrix;
)" R"(
)" R"(void main() {
)" R"(    // Multiply input position by the rotscale part of the matrix and then manually translate by
)" R"(    // the last column. This is equivalent to using a full 3x3 matrix and expanding the vector
)" R"(    // to `vec3(vert_position.xy, 1.0)`
)" R"(    gl_Position = vec4(mat2(modelview_matrix) * vert_position + modelview_matrix[2], 0.0, 1.0);
)" R"(    frag_tex_coord = vert_tex_coord;
)" R"(}
)" R"(
)" 
};

} // namespace HostShaders

// SPDX-FileCopyrightText: 2020 yuzu Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include <string_view>

namespace HostShaders {

constexpr std::string_view OPENGL_FIDELITYFX_FSR_FRAG = {
R"(// SPDX-FileCopyrightText: Copyright 2023 yuzu Emulator Project
)" R"(// SPDX-License-Identifier: GPL-2.0-or-later
)" R"(
)" R"(//!#version 460 core
)" R"(#extension GL_ARB_separate_shader_objects : enable
)" R"(#extension GL_ARB_shading_language_420pack : enable
)" R"(
)" R"(#extension GL_AMD_gpu_shader_half_float : enable
)" R"(#extension GL_NV_gpu_shader5 : enable
)" R"(
)" R"(// FidelityFX Super Resolution Sample
)" R"(//
)" R"(// Copyright (c) 2021 Advanced Micro Devices, Inc. All rights reserved.
)" R"(// Permission is hereby granted, free of charge, to any person obtaining a copy
)" R"(// of this software and associated documentation files(the "Software"), to deal
)" R"(// in the Software without restriction, including without limitation the rights
)" R"(// to use, copy, modify, merge, publish, distribute, sublicense, and / or sell
)" R"(// copies of the Software, and to permit persons to whom the Software is
)" R"(// furnished to do so, subject to the following conditions :
)" R"(// The above copyright notice and this permission notice shall be included in
)" R"(// all copies or substantial portions of the Software.
)" R"(// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
)" R"(// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
)" R"(// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.IN NO EVENT SHALL THE
)" R"(// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
)" R"(// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
)" R"(// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
)" R"(// THE SOFTWARE.
)" R"(
)" R"(layout (location = 0) uniform uvec4 constants[4];
)" R"(
)" R"(#define A_GPU 1
)" R"(#define A_GLSL 1
)" R"(
)" R"(#ifdef YUZU_USE_FP16
)" R"(    #define A_HALF
)" R"(#endif
)" R"(#include "ffx_a.h"
)" R"(
)" R"(#ifndef YUZU_USE_FP16
)" R"(    layout (binding=0) uniform sampler2D InputTexture;
)" R"(    #if USE_EASU
)" R"(        #define FSR_EASU_F 1
)" R"(        AF4 FsrEasuRF(AF2 p) { AF4 res = textureGather(InputTexture, p, 0); return res; }
)" R"(        AF4 FsrEasuGF(AF2 p) { AF4 res = textureGather(InputTexture, p, 1); return res; }
)" R"(        AF4 FsrEasuBF(AF2 p) { AF4 res = textureGather(InputTexture, p, 2); return res; }
)" R"(    #endif
)" R"(    #if USE_RCAS
)" R"(        #define FSR_RCAS_F
)" R"(        AF4 FsrRcasLoadF(ASU2 p) { return texelFetch(InputTexture, ASU2(p), 0); }
)" R"(        void FsrRcasInputF(inout AF1 r, inout AF1 g, inout AF1 b) {}
)" R"(    #endif
)" R"(#else
)" R"(    layout (binding=0) uniform sampler2D InputTexture;
)" R"(    #if USE_EASU
)" R"(        #define FSR_EASU_H 1
)" R"(        AH4 FsrEasuRH(AF2 p) { AH4 res = AH4(textureGather(InputTexture, p, 0)); return res; }
)" R"(        AH4 FsrEasuGH(AF2 p) { AH4 res = AH4(textureGather(InputTexture, p, 1)); return res; }
)" R"(        AH4 FsrEasuBH(AF2 p) { AH4 res = AH4(textureGather(InputTexture, p, 2)); return res; }
)" R"(    #endif
)" R"(    #if USE_RCAS
)" R"(        #define FSR_RCAS_H
)" R"(        AH4 FsrRcasLoadH(ASW2 p) { return AH4(texelFetch(InputTexture, ASU2(p), 0)); }
)" R"(        void FsrRcasInputH(inout AH1 r,inout AH1 g,inout AH1 b){}
)" R"(    #endif
)" R"(#endif
)" R"(
)" R"(#include "ffx_fsr1.h"
)" R"(
)" R"(#if USE_RCAS
)" R"(    layout(location = 0) in vec2 frag_texcoord;
)" R"(#endif
)" R"(layout (location = 0) out vec4 frag_color;
)" R"(
)" R"(void CurrFilter(AU2 pos)
)" R"({
)" R"(#if USE_EASU
)" R"(    #ifndef YUZU_USE_FP16
)" R"(        AF3 c;
)" R"(        FsrEasuF(c, pos, constants[0], constants[1], constants[2], constants[3]);
)" R"(        frag_color = AF4(c, 1.0);
)" R"(    #else
)" R"(        AH3 c;
)" R"(        FsrEasuH(c, pos, constants[0], constants[1], constants[2], constants[3]);
)" R"(        frag_color = AH4(c, 1.0);
)" R"(    #endif
)" R"(#endif
)" R"(#if USE_RCAS
)" R"(    #ifndef YUZU_USE_FP16
)" R"(        AF3 c;
)" R"(        FsrRcasF(c.r, c.g, c.b, pos, constants[0]);
)" R"(        frag_color = AF4(c, 1.0);
)" R"(    #else
)" R"(        AH3 c;
)" R"(        FsrRcasH(c.r, c.g, c.b, pos, constants[0]);
)" R"(        frag_color = AH4(c, 1.0);
)" R"(    #endif
)" R"(#endif
)" R"(}
)" R"(
)" R"(void main()
)" R"({
)" R"(#if USE_RCAS
)" R"(    CurrFilter(AU2(frag_texcoord * vec2(textureSize(InputTexture, 0))));
)" R"(#else
)" R"(    CurrFilter(AU2(gl_FragCoord.xy));
)" R"(#endif
)" R"(}
)" R"(
)" 
};

} // namespace HostShaders

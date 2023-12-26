// SPDX-FileCopyrightText: 2020 yuzu Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include <string_view>

namespace HostShaders {

constexpr std::string_view FFX_FSR1_H = {
R"(//_____________________________________________________________/\_______________________________________________________________
)" R"(//==============================================================================================================================
)" R"(//
)" R"(//
)" R"(//                    AMD FidelityFX SUPER RESOLUTION [FSR 1] ::: SPATIAL SCALING & EXTRAS - v1.20210629
)" R"(//
)" R"(//
)" R"(//------------------------------------------------------------------------------------------------------------------------------
)" R"(////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
)" R"(////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
)" R"(//------------------------------------------------------------------------------------------------------------------------------
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
)" R"(//------------------------------------------------------------------------------------------------------------------------------
)" R"(////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
)" R"(////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
)" R"(//------------------------------------------------------------------------------------------------------------------------------
)" R"(// ABOUT
)" R"(// =====
)" R"(// FSR is a collection of algorithms relating to generating a higher resolution image.
)" R"(// This specific header focuses on single-image non-temporal image scaling, and related tools.
)" R"(// 
)" R"(// The core functions are EASU and RCAS:
)" R"(//  [EASU] Edge Adaptive Spatial Upsampling ....... 1x to 4x area range spatial scaling, clamped adaptive elliptical filter.
)" R"(//  [RCAS] Robust Contrast Adaptive Sharpening .... A non-scaling variation on CAS.
)" R"(// RCAS needs to be applied after EASU as a separate pass.
)" R"(// 
)" R"(// Optional utility functions are:
)" R"(//  [LFGA] Linear Film Grain Applicator ........... Tool to apply film grain after scaling.
)" R"(//  [SRTM] Simple Reversible Tone-Mapper .......... Linear HDR {0 to FP16_MAX} to {0 to 1} and back.
)" R"(//  [TEPD] Temporal Energy Preserving Dither ...... Temporally energy preserving dithered {0 to 1} linear to gamma 2.0 conversion.
)" R"(// See each individual sub-section for inline documentation.
)" R"(//------------------------------------------------------------------------------------------------------------------------------
)" R"(////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
)" R"(////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
)" R"(//------------------------------------------------------------------------------------------------------------------------------
)" R"(// FUNCTION PERMUTATIONS
)" R"(// =====================
)" R"(// *F() ..... Single item computation with 32-bit.
)" R"(// *H() ..... Single item computation with 16-bit, with packing (aka two 16-bit ops in parallel) when possible.
)" R"(// *Hx2() ... Processing two items in parallel with 16-bit, easier packing.
)" R"(//            Not all interfaces in this file have a *Hx2() form.
)" R"(//==============================================================================================================================
)" R"(////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
)" R"(////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
)" R"(////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
)" R"(////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
)" R"(//_____________________________________________________________/\_______________________________________________________________
)" R"(//==============================================================================================================================
)" R"(//
)" R"(//                                        FSR - [EASU] EDGE ADAPTIVE SPATIAL UPSAMPLING
)" R"(//
)" R"(//------------------------------------------------------------------------------------------------------------------------------
)" R"(// EASU provides a high quality spatial-only scaling at relatively low cost.
)" R"(// Meaning EASU is appropiate for laptops and other low-end GPUs.
)" R"(// Quality from 1x to 4x area scaling is good.
)" R"(//------------------------------------------------------------------------------------------------------------------------------
)" R"(// The scalar uses a modified fast approximation to the standard lanczos(size=2) kernel.
)" R"(// EASU runs in a single pass, so it applies a directionally and anisotropically adaptive radial lanczos.
)" R"(// This is also kept as simple as possible to have minimum runtime.
)" R"(//------------------------------------------------------------------------------------------------------------------------------
)" R"(// The lanzcos filter has negative lobes, so by itself it will introduce ringing.
)" R"(// To remove all ringing, the algorithm uses the nearest 2x2 input texels as a neighborhood,
)" R"(// and limits output to the minimum and maximum of that neighborhood.
)" R"(//------------------------------------------------------------------------------------------------------------------------------
)" R"(// Input image requirements:
)" R"(// 
)" R"(// Color needs to be encoded as 3 channel[red, green, blue](e.g.XYZ not supported)
)" R"(// Each channel needs to be in the range[0, 1]
)" R"(// Any color primaries are supported
)" R"(// Display / tonemapping curve needs to be as if presenting to sRGB display or similar(e.g.Gamma 2.0)
)" R"(// There should be no banding in the input
)" R"(// There should be no high amplitude noise in the input
)" R"(// There should be no noise in the input that is not at input pixel granularity
)" R"(// For performance purposes, use 32bpp formats
)" R"(//------------------------------------------------------------------------------------------------------------------------------
)" R"(// Best to apply EASU at the end of the frame after tonemapping 
)" R"(// but before film grain or composite of the UI.
)" R"(//------------------------------------------------------------------------------------------------------------------------------
)" R"(// Example of including this header for D3D HLSL :
)" R"(// 
)" R"(//  #define A_GPU 1
)" R"(//  #define A_HLSL 1
)" R"(//  #define A_HALF 1
)" R"(//  #include "ffx_a.h"
)" R"(//  #define FSR_EASU_H 1
)" R"(//  #define FSR_RCAS_H 1
)" R"(//  //declare input callbacks
)" R"(//  #include "ffx_fsr1.h"
)" R"(// 
)" R"(// Example of including this header for Vulkan GLSL :
)" R"(// 
)" R"(//  #define A_GPU 1
)" R"(//  #define A_GLSL 1
)" R"(//  #define A_HALF 1
)" R"(//  #include "ffx_a.h"
)" R"(//  #define FSR_EASU_H 1
)" R"(//  #define FSR_RCAS_H 1
)" R"(//  //declare input callbacks
)" R"(//  #include "ffx_fsr1.h"
)" R"(// 
)" R"(// Example of including this header for Vulkan HLSL :
)" R"(// 
)" R"(//  #define A_GPU 1
)" R"(//  #define A_HLSL 1
)" R"(//  #define A_HLSL_6_2 1
)" R"(//  #define A_NO_16_BIT_CAST 1
)" R"(//  #define A_HALF 1
)" R"(//  #include "ffx_a.h"
)" R"(//  #define FSR_EASU_H 1
)" R"(//  #define FSR_RCAS_H 1
)" R"(//  //declare input callbacks
)" R"(//  #include "ffx_fsr1.h"
)" R"(// 
)" R"(//  Example of declaring the required input callbacks for GLSL :
)" R"(//  The callbacks need to gather4 for each color channel using the specified texture coordinate 'p'.
)" R"(//  EASU uses gather4 to reduce position computation logic and for free Arrays of Structures to Structures of Arrays conversion.
)" R"(// 
)" R"(//  AH4 FsrEasuRH(AF2 p){return AH4(textureGather(sampler2D(tex,sam),p,0));}
)" R"(//  AH4 FsrEasuGH(AF2 p){return AH4(textureGather(sampler2D(tex,sam),p,1));}
)" R"(//  AH4 FsrEasuBH(AF2 p){return AH4(textureGather(sampler2D(tex,sam),p,2));}
)" R"(//  ...
)" R"(//  The FsrEasuCon function needs to be called from the CPU or GPU to set up constants.
)" R"(//  The difference in viewport and input image size is there to support Dynamic Resolution Scaling.
)" R"(//  To use FsrEasuCon() on the CPU, define A_CPU before including ffx_a and ffx_fsr1.
)" R"(//  Including a GPU example here, the 'con0' through 'con3' values would be stored out to a constant buffer.
)" R"(//  AU4 con0,con1,con2,con3;
)" R"(//  FsrEasuCon(con0,con1,con2,con3,
)" R"(//    1920.0,1080.0,  // Viewport size (top left aligned) in the input image which is to be scaled.
)" R"(//    3840.0,2160.0,  // The size of the input image.
)" R"(//    2560.0,1440.0); // The output resolution.
)" R"(//==============================================================================================================================
)" R"(////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
)" R"(////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
)" R"(//_____________________________________________________________/\_______________________________________________________________
)" R"(//==============================================================================================================================
)" R"(//                                                      CONSTANT SETUP
)" R"(//==============================================================================================================================
)" R"(// Call to setup required constant values (works on CPU or GPU).
)" R"(A_STATIC void FsrEasuCon(
)" R"(outAU4 con0,
)" R"(outAU4 con1,
)" R"(outAU4 con2,
)" R"(outAU4 con3,
)" R"(// This the rendered image resolution being upscaled
)" R"(AF1 inputViewportInPixelsX,
)" R"(AF1 inputViewportInPixelsY,
)" R"(// This is the resolution of the resource containing the input image (useful for dynamic resolution)
)" R"(AF1 inputSizeInPixelsX,
)" R"(AF1 inputSizeInPixelsY,
)" R"(// This is the display resolution which the input image gets upscaled to
)" R"(AF1 outputSizeInPixelsX,
)" R"(AF1 outputSizeInPixelsY){
)" R"( // Output integer position to a pixel position in viewport.
)" R"( con0[0]=AU1_AF1(inputViewportInPixelsX*ARcpF1(outputSizeInPixelsX));
)" R"( con0[1]=AU1_AF1(inputViewportInPixelsY*ARcpF1(outputSizeInPixelsY));
)" R"( con0[2]=AU1_AF1(AF1_(0.5)*inputViewportInPixelsX*ARcpF1(outputSizeInPixelsX)-AF1_(0.5));
)" R"( con0[3]=AU1_AF1(AF1_(0.5)*inputViewportInPixelsY*ARcpF1(outputSizeInPixelsY)-AF1_(0.5));
)" R"( // Viewport pixel position to normalized image space.
)" R"( // This is used to get upper-left of 'F' tap.
)" R"( con1[0]=AU1_AF1(ARcpF1(inputSizeInPixelsX));
)" R"( con1[1]=AU1_AF1(ARcpF1(inputSizeInPixelsY));
)" R"( // Centers of gather4, first offset from upper-left of 'F'.
)" R"( //      +---+---+
)" R"( //      |   |   |
)" R"( //      +--(0)--+
)" R"( //      | b | c |
)" R"( //  +---F---+---+---+
)" R"( //  | e | f | g | h |
)" R"( //  +--(1)--+--(2)--+
)" R"( //  | i | j | k | l |
)" R"( //  +---+---+---+---+
)" R"( //      | n | o |
)" R"( //      +--(3)--+
)" R"( //      |   |   |
)" R"( //      +---+---+
)" R"( con1[2]=AU1_AF1(AF1_( 1.0)*ARcpF1(inputSizeInPixelsX));
)" R"( con1[3]=AU1_AF1(AF1_(-1.0)*ARcpF1(inputSizeInPixelsY));
)" R"( // These are from (0) instead of 'F'.
)" R"( con2[0]=AU1_AF1(AF1_(-1.0)*ARcpF1(inputSizeInPixelsX));
)" R"( con2[1]=AU1_AF1(AF1_( 2.0)*ARcpF1(inputSizeInPixelsY));
)" R"( con2[2]=AU1_AF1(AF1_( 1.0)*ARcpF1(inputSizeInPixelsX));
)" R"( con2[3]=AU1_AF1(AF1_( 2.0)*ARcpF1(inputSizeInPixelsY));
)" R"( con3[0]=AU1_AF1(AF1_( 0.0)*ARcpF1(inputSizeInPixelsX));
)" R"( con3[1]=AU1_AF1(AF1_( 4.0)*ARcpF1(inputSizeInPixelsY));
)" R"( con3[2]=con3[3]=0;}
)" R"(
)" R"(//If the an offset into the input image resource
)" R"(A_STATIC void FsrEasuConOffset(
)" R"(    outAU4 con0,
)" R"(    outAU4 con1,
)" R"(    outAU4 con2,
)" R"(    outAU4 con3,
)" R"(    // This the rendered image resolution being upscaled
)" R"(    AF1 inputViewportInPixelsX,
)" R"(    AF1 inputViewportInPixelsY,
)" R"(    // This is the resolution of the resource containing the input image (useful for dynamic resolution)
)" R"(    AF1 inputSizeInPixelsX,
)" R"(    AF1 inputSizeInPixelsY,
)" R"(    // This is the display resolution which the input image gets upscaled to
)" R"(    AF1 outputSizeInPixelsX,
)" R"(    AF1 outputSizeInPixelsY,
)" R"(    // This is the input image offset into the resource containing it (useful for dynamic resolution)
)" R"(    AF1 inputOffsetInPixelsX,
)" R"(    AF1 inputOffsetInPixelsY) {
)" R"(    FsrEasuCon(con0, con1, con2, con3, inputViewportInPixelsX, inputViewportInPixelsY, inputSizeInPixelsX, inputSizeInPixelsY, outputSizeInPixelsX, outputSizeInPixelsY);
)" R"(    con0[2] = AU1_AF1(AF1_(0.5) * inputViewportInPixelsX * ARcpF1(outputSizeInPixelsX) - AF1_(0.5) + inputOffsetInPixelsX);
)" R"(    con0[3] = AU1_AF1(AF1_(0.5) * inputViewportInPixelsY * ARcpF1(outputSizeInPixelsY) - AF1_(0.5) + inputOffsetInPixelsY);
)" R"(}
)" R"(////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
)" R"(////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
)" R"(//_____________________________________________________________/\_______________________________________________________________
)" R"(//==============================================================================================================================
)" R"(//                                                   NON-PACKED 32-BIT VERSION
)" R"(//==============================================================================================================================
)" R"(#if defined(A_GPU)&&defined(FSR_EASU_F)
)" R"( // Input callback prototypes, need to be implemented by calling shader
)" R"( AF4 FsrEasuRF(AF2 p);
)" R"( AF4 FsrEasuGF(AF2 p);
)" R"( AF4 FsrEasuBF(AF2 p);
)" R"(//------------------------------------------------------------------------------------------------------------------------------
)" R"( // Filtering for a given tap for the scalar.
)" R"( void FsrEasuTapF(
)" R"( inout AF3 aC, // Accumulated color, with negative lobe.
)" R"( inout AF1 aW, // Accumulated weight.
)" R"( AF2 off, // Pixel offset from resolve position to tap.
)" R"( AF2 dir, // Gradient direction.
)" R"( AF2 len, // Length.
)" R"( AF1 lob, // Negative lobe strength.
)" R"( AF1 clp, // Clipping point.
)" R"( AF3 c){ // Tap color.
)" R"(  // Rotate offset by direction.
)" R"(  AF2 v;
)" R"(  v.x=(off.x*( dir.x))+(off.y*dir.y);
)" R"(  v.y=(off.x*(-dir.y))+(off.y*dir.x);
)" R"(  // Anisotropy.
)" R"(  v*=len;
)" R"(  // Compute distance^2.
)" R"(  AF1 d2=v.x*v.x+v.y*v.y;
)" R"(  // Limit to the window as at corner, 2 taps can easily be outside.
)" R"(  d2=min(d2,clp);
)" R"(  // Approximation of lancos2 without sin() or rcp(), or sqrt() to get x.
)" R"(  //  (25/16 * (2/5 * x^2 - 1)^2 - (25/16 - 1)) * (1/4 * x^2 - 1)^2
)" R"(  //  |_______________________________________|   |_______________|
)" R"(  //                   base                             window
)" R"(  // The general form of the 'base' is,
)" R"(  //  (a*(b*x^2-1)^2-(a-1))
)" R"(  // Where 'a=1/(2*b-b^2)' and 'b' moves around the negative lobe.
)" R"(  AF1 wB=AF1_(2.0/5.0)*d2+AF1_(-1.0);
)" R"(  AF1 wA=lob*d2+AF1_(-1.0);
)" R"(  wB*=wB;
)" R"(  wA*=wA;
)" R"(  wB=AF1_(25.0/16.0)*wB+AF1_(-(25.0/16.0-1.0));
)" R"(  AF1 w=wB*wA;
)" R"(  // Do weighted average.
)" R"(  aC+=c*w;aW+=w;}
)" R"(//------------------------------------------------------------------------------------------------------------------------------
)" R"( // Accumulate direction and length.
)" R"( void FsrEasuSetF(
)" R"( inout AF2 dir,
)" R"( inout AF1 len,
)" R"( AF2 pp,
)" R"( AP1 biS,AP1 biT,AP1 biU,AP1 biV,
)" R"( AF1 lA,AF1 lB,AF1 lC,AF1 lD,AF1 lE){
)" R"(  // Compute bilinear weight, branches factor out as predicates are compiler time immediates.
)" R"(  //  s t
)" R"(  //  u v
)" R"(  AF1 w = AF1_(0.0);
)" R"(  if(biS)w=(AF1_(1.0)-pp.x)*(AF1_(1.0)-pp.y);
)" R"(  if(biT)w=           pp.x *(AF1_(1.0)-pp.y);
)" R"(  if(biU)w=(AF1_(1.0)-pp.x)*           pp.y ;
)" R"(  if(biV)w=           pp.x *           pp.y ;
)" R"(  // Direction is the '+' diff.
)" R"(  //    a
)" R"(  //  b c d
)" R"(  //    e
)" R"(  // Then takes magnitude from abs average of both sides of 'c'.
)" R"(  // Length converts gradient reversal to 0, smoothly to non-reversal at 1, shaped, then adding horz and vert terms.
)" R"(  AF1 dc=lD-lC;
)" R"(  AF1 cb=lC-lB;
)" R"(  AF1 lenX=max(abs(dc),abs(cb));
)" R"(  lenX=APrxLoRcpF1(lenX);
)" R"(  AF1 dirX=lD-lB;
)" R"(  dir.x+=dirX*w;
)" R"(  lenX=ASatF1(abs(dirX)*lenX);
)" R"(  lenX*=lenX;
)" R"(  len+=lenX*w;
)" R"(  // Repeat for the y axis.
)" R"(  AF1 ec=lE-lC;
)" R"(  AF1 ca=lC-lA;
)" R"(  AF1 lenY=max(abs(ec),abs(ca));
)" R"(  lenY=APrxLoRcpF1(lenY);
)" R"(  AF1 dirY=lE-lA;
)" R"(  dir.y+=dirY*w;
)" R"(  lenY=ASatF1(abs(dirY)*lenY);
)" R"(  lenY*=lenY;
)" R"(  len+=lenY*w;}
)" R"(//------------------------------------------------------------------------------------------------------------------------------
)" R"( void FsrEasuF(
)" R"( out AF3 pix,
)" R"( AU2 ip, // Integer pixel position in output.
)" R"( AU4 con0, // Constants generated by FsrEasuCon().
)" R"( AU4 con1,
)" R"( AU4 con2,
)" R"( AU4 con3){
)" R"(//------------------------------------------------------------------------------------------------------------------------------
)" R"(  // Get position of 'f'.
)" R"(  AF2 pp=AF2(ip)*AF2_AU2(con0.xy)+AF2_AU2(con0.zw);
)" R"(  AF2 fp=floor(pp);
)" R"(  pp-=fp;
)" R"(//------------------------------------------------------------------------------------------------------------------------------
)" R"(  // 12-tap kernel.
)" R"(  //    b c
)" R"(  //  e f g h
)" R"(  //  i j k l
)" R"(  //    n o
)" R"(  // Gather 4 ordering.
)" R"(  //  a b
)" R"(  //  r g
)" R"(  // For packed FP16, need either {rg} or {ab} so using the following setup for gather in all versions,
)" R"(  //    a b    <- unused (z)
)" R"(  //    r g
)" R"(  //  a b a b
)" R"(  //  r g r g
)" R"(  //    a b
)" R"(  //    r g    <- unused (z)
)" R"(  // Allowing dead-code removal to remove the 'z's.
)" R"(  AF2 p0=fp*AF2_AU2(con1.xy)+AF2_AU2(con1.zw);
)" R"(  // These are from p0 to avoid pulling two constants on pre-Navi hardware.
)" R"(  AF2 p1=p0+AF2_AU2(con2.xy);
)" R"(  AF2 p2=p0+AF2_AU2(con2.zw);
)" R"(  AF2 p3=p0+AF2_AU2(con3.xy);
)" R"(  AF4 bczzR=FsrEasuRF(p0);
)" R"(  AF4 bczzG=FsrEasuGF(p0);
)" R"(  AF4 bczzB=FsrEasuBF(p0);
)" R"(  AF4 ijfeR=FsrEasuRF(p1);
)" R"(  AF4 ijfeG=FsrEasuGF(p1);
)" R"(  AF4 ijfeB=FsrEasuBF(p1);
)" R"(  AF4 klhgR=FsrEasuRF(p2);
)" R"(  AF4 klhgG=FsrEasuGF(p2);
)" R"(  AF4 klhgB=FsrEasuBF(p2);
)" R"(  AF4 zzonR=FsrEasuRF(p3);
)" R"(  AF4 zzonG=FsrEasuGF(p3);
)" R"(  AF4 zzonB=FsrEasuBF(p3);
)" R"(//------------------------------------------------------------------------------------------------------------------------------
)" R"(  // Simplest multi-channel approximate luma possible (luma times 2, in 2 FMA/MAD).
)" R"(  AF4 bczzL=bczzB*AF4_(0.5)+(bczzR*AF4_(0.5)+bczzG);
)" R"(  AF4 ijfeL=ijfeB*AF4_(0.5)+(ijfeR*AF4_(0.5)+ijfeG);
)" R"(  AF4 klhgL=klhgB*AF4_(0.5)+(klhgR*AF4_(0.5)+klhgG);
)" R"(  AF4 zzonL=zzonB*AF4_(0.5)+(zzonR*AF4_(0.5)+zzonG);
)" R"(  // Rename.
)" R"(  AF1 bL=bczzL.x;
)" R"(  AF1 cL=bczzL.y;
)" R"(  AF1 iL=ijfeL.x;
)" R"(  AF1 jL=ijfeL.y;
)" R"(  AF1 fL=ijfeL.z;
)" R"(  AF1 eL=ijfeL.w;
)" R"(  AF1 kL=klhgL.x;
)" R"(  AF1 lL=klhgL.y;
)" R"(  AF1 hL=klhgL.z;
)" R"(  AF1 gL=klhgL.w;
)" R"(  AF1 oL=zzonL.z;
)" R"(  AF1 nL=zzonL.w;
)" R"(  // Accumulate for bilinear interpolation.
)" R"(  AF2 dir=AF2_(0.0);
)" R"(  AF1 len=AF1_(0.0);
)" R"(  FsrEasuSetF(dir,len,pp,true, false,false,false,bL,eL,fL,gL,jL);
)" R"(  FsrEasuSetF(dir,len,pp,false,true ,false,false,cL,fL,gL,hL,kL);
)" R"(  FsrEasuSetF(dir,len,pp,false,false,true ,false,fL,iL,jL,kL,nL);
)" R"(  FsrEasuSetF(dir,len,pp,false,false,false,true ,gL,jL,kL,lL,oL);
)" R"(//------------------------------------------------------------------------------------------------------------------------------
)" R"(  // Normalize with approximation, and cleanup close to zero.
)" R"(  AF2 dir2=dir*dir;
)" R"(  AF1 dirR=dir2.x+dir2.y;
)" R"(  AP1 zro=dirR<AF1_(1.0/32768.0);
)" R"(  dirR=APrxLoRsqF1(dirR);
)" R"(  dirR=zro?AF1_(1.0):dirR;
)" R"(  dir.x=zro?AF1_(1.0):dir.x;
)" R"(  dir*=AF2_(dirR);
)" R"(  // Transform from {0 to 2} to {0 to 1} range, and shape with square.
)" R"(  len=len*AF1_(0.5);
)" R"(  len*=len;
)" R"(  // Stretch kernel {1.0 vert|horz, to sqrt(2.0) on diagonal}.
)" R"(  AF1 stretch=(dir.x*dir.x+dir.y*dir.y)*APrxLoRcpF1(max(abs(dir.x),abs(dir.y)));
)" R"(  // Anisotropic length after rotation,
)" R"(  //  x := 1.0 lerp to 'stretch' on edges
)" R"(  //  y := 1.0 lerp to 2x on edges
)" R"(  AF2 len2=AF2(AF1_(1.0)+(stretch-AF1_(1.0))*len,AF1_(1.0)+AF1_(-0.5)*len);
)" R"(  // Based on the amount of 'edge',
)" R"(  // the window shifts from +/-{sqrt(2.0) to slightly beyond 2.0}.
)" R"(  AF1 lob=AF1_(0.5)+AF1_((1.0/4.0-0.04)-0.5)*len;
)" R"(  // Set distance^2 clipping point to the end of the adjustable window.
)" R"(  AF1 clp=APrxLoRcpF1(lob);
)" R"(//------------------------------------------------------------------------------------------------------------------------------
)" R"(  // Accumulation mixed with min/max of 4 nearest.
)" R"(  //    b c
)" R"(  //  e f g h
)" R"(  //  i j k l
)" R"(  //    n o
)" R"(  AF3 min4=min(AMin3F3(AF3(ijfeR.z,ijfeG.z,ijfeB.z),AF3(klhgR.w,klhgG.w,klhgB.w),AF3(ijfeR.y,ijfeG.y,ijfeB.y)),
)" R"(               AF3(klhgR.x,klhgG.x,klhgB.x));
)" R"(  AF3 max4=max(AMax3F3(AF3(ijfeR.z,ijfeG.z,ijfeB.z),AF3(klhgR.w,klhgG.w,klhgB.w),AF3(ijfeR.y,ijfeG.y,ijfeB.y)),
)" R"(               AF3(klhgR.x,klhgG.x,klhgB.x));
)" R"(  // Accumulation.
)" R"(  AF3 aC=AF3_(0.0);
)" R"(  AF1 aW=AF1_(0.0);
)" R"(  FsrEasuTapF(aC,aW,AF2( 0.0,-1.0)-pp,dir,len2,lob,clp,AF3(bczzR.x,bczzG.x,bczzB.x)); // b
)" R"(  FsrEasuTapF(aC,aW,AF2( 1.0,-1.0)-pp,dir,len2,lob,clp,AF3(bczzR.y,bczzG.y,bczzB.y)); // c
)" R"(  FsrEasuTapF(aC,aW,AF2(-1.0, 1.0)-pp,dir,len2,lob,clp,AF3(ijfeR.x,ijfeG.x,ijfeB.x)); // i
)" R"(  FsrEasuTapF(aC,aW,AF2( 0.0, 1.0)-pp,dir,len2,lob,clp,AF3(ijfeR.y,ijfeG.y,ijfeB.y)); // j
)" R"(  FsrEasuTapF(aC,aW,AF2( 0.0, 0.0)-pp,dir,len2,lob,clp,AF3(ijfeR.z,ijfeG.z,ijfeB.z)); // f
)" R"(  FsrEasuTapF(aC,aW,AF2(-1.0, 0.0)-pp,dir,len2,lob,clp,AF3(ijfeR.w,ijfeG.w,ijfeB.w)); // e
)" R"(  FsrEasuTapF(aC,aW,AF2( 1.0, 1.0)-pp,dir,len2,lob,clp,AF3(klhgR.x,klhgG.x,klhgB.x)); // k
)" R"(  FsrEasuTapF(aC,aW,AF2( 2.0, 1.0)-pp,dir,len2,lob,clp,AF3(klhgR.y,klhgG.y,klhgB.y)); // l
)" R"(  FsrEasuTapF(aC,aW,AF2( 2.0, 0.0)-pp,dir,len2,lob,clp,AF3(klhgR.z,klhgG.z,klhgB.z)); // h
)" R"(  FsrEasuTapF(aC,aW,AF2( 1.0, 0.0)-pp,dir,len2,lob,clp,AF3(klhgR.w,klhgG.w,klhgB.w)); // g
)" R"(  FsrEasuTapF(aC,aW,AF2( 1.0, 2.0)-pp,dir,len2,lob,clp,AF3(zzonR.z,zzonG.z,zzonB.z)); // o
)" R"(  FsrEasuTapF(aC,aW,AF2( 0.0, 2.0)-pp,dir,len2,lob,clp,AF3(zzonR.w,zzonG.w,zzonB.w)); // n
)" R"(//------------------------------------------------------------------------------------------------------------------------------
)" R"(  // Normalize and dering.
)" R"(  pix=min(max4,max(min4,aC*AF3_(ARcpF1(aW))));}
)" R"(#endif
)" R"(////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
)" R"(////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
)" R"(//_____________________________________________________________/\_______________________________________________________________
)" R"(//==============================================================================================================================
)" R"(//                                                    PACKED 16-BIT VERSION
)" R"(//==============================================================================================================================
)" R"(#if defined(A_GPU)&&defined(A_HALF)&&defined(FSR_EASU_H)
)" R"(// Input callback prototypes, need to be implemented by calling shader
)" R"( AH4 FsrEasuRH(AF2 p);
)" R"( AH4 FsrEasuGH(AF2 p);
)" R"( AH4 FsrEasuBH(AF2 p);
)" R"(//------------------------------------------------------------------------------------------------------------------------------
)" R"( // This runs 2 taps in parallel.
)" R"( void FsrEasuTapH(
)" R"( inout AH2 aCR,inout AH2 aCG,inout AH2 aCB,
)" R"( inout AH2 aW,
)" R"( AH2 offX,AH2 offY,
)" R"( AH2 dir,
)" R"( AH2 len,
)" R"( AH1 lob,
)" R"( AH1 clp,
)" R"( AH2 cR,AH2 cG,AH2 cB){
)" R"(  AH2 vX,vY;
)" R"(  vX=offX*  dir.xx +offY*dir.yy;
)" R"(  vY=offX*(-dir.yy)+offY*dir.xx;
)" R"(  vX*=len.x;vY*=len.y;
)" R"(  AH2 d2=vX*vX+vY*vY;
)" R"(  d2=min(d2,AH2_(clp));
)" R"(  AH2 wB=AH2_(2.0/5.0)*d2+AH2_(-1.0);
)" R"(  AH2 wA=AH2_(lob)*d2+AH2_(-1.0);
)" R"(  wB*=wB;
)" R"(  wA*=wA;
)" R"(  wB=AH2_(25.0/16.0)*wB+AH2_(-(25.0/16.0-1.0));
)" R"(  AH2 w=wB*wA;
)" R"(  aCR+=cR*w;aCG+=cG*w;aCB+=cB*w;aW+=w;}
)" R"(//------------------------------------------------------------------------------------------------------------------------------
)" R"( // This runs 2 taps in parallel.
)" R"( void FsrEasuSetH(
)" R"( inout AH2 dirPX,inout AH2 dirPY,
)" R"( inout AH2 lenP,
)" R"( AH2 pp,
)" R"( AP1 biST,AP1 biUV,
)" R"( AH2 lA,AH2 lB,AH2 lC,AH2 lD,AH2 lE){
)" R"(  AH2 w = AH2_(0.0);
)" R"(  if(biST)w=(AH2(1.0,0.0)+AH2(-pp.x,pp.x))*AH2_(AH1_(1.0)-pp.y);
)" R"(  if(biUV)w=(AH2(1.0,0.0)+AH2(-pp.x,pp.x))*AH2_(          pp.y);
)" R"(  // ABS is not free in the packed FP16 path.
)" R"(  AH2 dc=lD-lC;
)" R"(  AH2 cb=lC-lB;
)" R"(  AH2 lenX=max(abs(dc),abs(cb));
)" R"(  lenX=ARcpH2(lenX);
)" R"(  AH2 dirX=lD-lB;
)" R"(  dirPX+=dirX*w;
)" R"(  lenX=ASatH2(abs(dirX)*lenX);
)" R"(  lenX*=lenX;
)" R"(  lenP+=lenX*w;
)" R"(  AH2 ec=lE-lC;
)" R"(  AH2 ca=lC-lA;
)" R"(  AH2 lenY=max(abs(ec),abs(ca));
)" R"(  lenY=ARcpH2(lenY);
)" R"(  AH2 dirY=lE-lA;
)" R"(  dirPY+=dirY*w;
)" R"(  lenY=ASatH2(abs(dirY)*lenY);
)" R"(  lenY*=lenY;
)" R"(  lenP+=lenY*w;}
)" R"(//------------------------------------------------------------------------------------------------------------------------------
)" R"( void FsrEasuH(
)" R"( out AH3 pix,
)" R"( AU2 ip,
)" R"( AU4 con0,
)" R"( AU4 con1,
)" R"( AU4 con2,
)" R"( AU4 con3){
)" R"(//------------------------------------------------------------------------------------------------------------------------------
)" R"(  AF2 pp=AF2(ip)*AF2_AU2(con0.xy)+AF2_AU2(con0.zw);
)" R"(  AF2 fp=floor(pp);
)" R"(  pp-=fp;
)" R"(  AH2 ppp=AH2(pp);
)" R"(//------------------------------------------------------------------------------------------------------------------------------
)" R"(  AF2 p0=fp*AF2_AU2(con1.xy)+AF2_AU2(con1.zw);
)" R"(  AF2 p1=p0+AF2_AU2(con2.xy);
)" R"(  AF2 p2=p0+AF2_AU2(con2.zw);
)" R"(  AF2 p3=p0+AF2_AU2(con3.xy);
)" R"(  AH4 bczzR=FsrEasuRH(p0);
)" R"(  AH4 bczzG=FsrEasuGH(p0);
)" R"(  AH4 bczzB=FsrEasuBH(p0);
)" R"(  AH4 ijfeR=FsrEasuRH(p1);
)" R"(  AH4 ijfeG=FsrEasuGH(p1);
)" R"(  AH4 ijfeB=FsrEasuBH(p1);
)" R"(  AH4 klhgR=FsrEasuRH(p2);
)" R"(  AH4 klhgG=FsrEasuGH(p2);
)" R"(  AH4 klhgB=FsrEasuBH(p2);
)" R"(  AH4 zzonR=FsrEasuRH(p3);
)" R"(  AH4 zzonG=FsrEasuGH(p3);
)" R"(  AH4 zzonB=FsrEasuBH(p3);
)" R"(//------------------------------------------------------------------------------------------------------------------------------
)" R"(  AH4 bczzL=bczzB*AH4_(0.5)+(bczzR*AH4_(0.5)+bczzG);
)" R"(  AH4 ijfeL=ijfeB*AH4_(0.5)+(ijfeR*AH4_(0.5)+ijfeG);
)" R"(  AH4 klhgL=klhgB*AH4_(0.5)+(klhgR*AH4_(0.5)+klhgG);
)" R"(  AH4 zzonL=zzonB*AH4_(0.5)+(zzonR*AH4_(0.5)+zzonG);
)" R"(  AH1 bL=bczzL.x;
)" R"(  AH1 cL=bczzL.y;
)" R"(  AH1 iL=ijfeL.x;
)" R"(  AH1 jL=ijfeL.y;
)" R"(  AH1 fL=ijfeL.z;
)" R"(  AH1 eL=ijfeL.w;
)" R"(  AH1 kL=klhgL.x;
)" R"(  AH1 lL=klhgL.y;
)" R"(  AH1 hL=klhgL.z;
)" R"(  AH1 gL=klhgL.w;
)" R"(  AH1 oL=zzonL.z;
)" R"(  AH1 nL=zzonL.w;
)" R"(  // This part is different, accumulating 2 taps in parallel.
)" R"(  AH2 dirPX=AH2_(0.0);
)" R"(  AH2 dirPY=AH2_(0.0);
)" R"(  AH2 lenP=AH2_(0.0);
)" R"(  FsrEasuSetH(dirPX,dirPY,lenP,ppp,true, false,AH2(bL,cL),AH2(eL,fL),AH2(fL,gL),AH2(gL,hL),AH2(jL,kL));
)" R"(  FsrEasuSetH(dirPX,dirPY,lenP,ppp,false,true ,AH2(fL,gL),AH2(iL,jL),AH2(jL,kL),AH2(kL,lL),AH2(nL,oL));
)" R"(  AH2 dir=AH2(dirPX.r+dirPX.g,dirPY.r+dirPY.g);
)" R"(  AH1 len=lenP.r+lenP.g;
)" R"(//------------------------------------------------------------------------------------------------------------------------------
)" R"(  AH2 dir2=dir*dir;
)" R"(  AH1 dirR=dir2.x+dir2.y;
)" R"(  AP1 zro=dirR<AH1_(1.0/32768.0);
)" R"(  dirR=APrxLoRsqH1(dirR);
)" R"(  dirR=zro?AH1_(1.0):dirR;
)" R"(  dir.x=zro?AH1_(1.0):dir.x;
)" R"(  dir*=AH2_(dirR);
)" R"(  len=len*AH1_(0.5);
)" R"(  len*=len;
)" R"(  AH1 stretch=(dir.x*dir.x+dir.y*dir.y)*APrxLoRcpH1(max(abs(dir.x),abs(dir.y)));
)" R"(  AH2 len2=AH2(AH1_(1.0)+(stretch-AH1_(1.0))*len,AH1_(1.0)+AH1_(-0.5)*len);
)" R"(  AH1 lob=AH1_(0.5)+AH1_((1.0/4.0-0.04)-0.5)*len;
)" R"(  AH1 clp=APrxLoRcpH1(lob);
)" R"(//------------------------------------------------------------------------------------------------------------------------------
)" R"(  // FP16 is different, using packed trick to do min and max in same operation.
)" R"(  AH2 bothR=max(max(AH2(-ijfeR.z,ijfeR.z),AH2(-klhgR.w,klhgR.w)),max(AH2(-ijfeR.y,ijfeR.y),AH2(-klhgR.x,klhgR.x)));
)" R"(  AH2 bothG=max(max(AH2(-ijfeG.z,ijfeG.z),AH2(-klhgG.w,klhgG.w)),max(AH2(-ijfeG.y,ijfeG.y),AH2(-klhgG.x,klhgG.x)));
)" R"(  AH2 bothB=max(max(AH2(-ijfeB.z,ijfeB.z),AH2(-klhgB.w,klhgB.w)),max(AH2(-ijfeB.y,ijfeB.y),AH2(-klhgB.x,klhgB.x)));
)" R"(  // This part is different for FP16, working pairs of taps at a time.
)" R"(  AH2 pR=AH2_(0.0);
)" R"(  AH2 pG=AH2_(0.0);
)" R"(  AH2 pB=AH2_(0.0);
)" R"(  AH2 pW=AH2_(0.0);
)" R"(  FsrEasuTapH(pR,pG,pB,pW,AH2( 0.0, 1.0)-ppp.xx,AH2(-1.0,-1.0)-ppp.yy,dir,len2,lob,clp,bczzR.xy,bczzG.xy,bczzB.xy);
)" R"(  FsrEasuTapH(pR,pG,pB,pW,AH2(-1.0, 0.0)-ppp.xx,AH2( 1.0, 1.0)-ppp.yy,dir,len2,lob,clp,ijfeR.xy,ijfeG.xy,ijfeB.xy);
)" R"(  FsrEasuTapH(pR,pG,pB,pW,AH2( 0.0,-1.0)-ppp.xx,AH2( 0.0, 0.0)-ppp.yy,dir,len2,lob,clp,ijfeR.zw,ijfeG.zw,ijfeB.zw);
)" R"(  FsrEasuTapH(pR,pG,pB,pW,AH2( 1.0, 2.0)-ppp.xx,AH2( 1.0, 1.0)-ppp.yy,dir,len2,lob,clp,klhgR.xy,klhgG.xy,klhgB.xy);
)" R"(  FsrEasuTapH(pR,pG,pB,pW,AH2( 2.0, 1.0)-ppp.xx,AH2( 0.0, 0.0)-ppp.yy,dir,len2,lob,clp,klhgR.zw,klhgG.zw,klhgB.zw);
)" R"(  FsrEasuTapH(pR,pG,pB,pW,AH2( 1.0, 0.0)-ppp.xx,AH2( 2.0, 2.0)-ppp.yy,dir,len2,lob,clp,zzonR.zw,zzonG.zw,zzonB.zw);
)" R"(  AH3 aC=AH3(pR.x+pR.y,pG.x+pG.y,pB.x+pB.y);
)" R"(  AH1 aW=pW.x+pW.y;
)" R"(//------------------------------------------------------------------------------------------------------------------------------
)" R"(  // Slightly different for FP16 version due to combined min and max.
)" R"(  pix=min(AH3(bothR.y,bothG.y,bothB.y),max(-AH3(bothR.x,bothG.x,bothB.x),aC*AH3_(ARcpH1(aW))));}
)" R"(#endif
)" R"(////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
)" R"(////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
)" R"(////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
)" R"(////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
)" R"(//_____________________________________________________________/\_______________________________________________________________
)" R"(//==============================================================================================================================
)" R"(//
)" R"(//                                      FSR - [RCAS] ROBUST CONTRAST ADAPTIVE SHARPENING
)" R"(//
)" R"(//------------------------------------------------------------------------------------------------------------------------------
)" R"(// CAS uses a simplified mechanism to convert local contrast into a variable amount of sharpness.
)" R"(// RCAS uses a more exact mechanism, solving for the maximum local sharpness possible before clipping.
)" R"(// RCAS also has a built in process to limit sharpening of what it detects as possible noise.
)" R"(// RCAS sharper does not support scaling, as it should be applied after EASU scaling.
)" R"(// Pass EASU output straight into RCAS, no color conversions necessary.
)" R"(//------------------------------------------------------------------------------------------------------------------------------
)" R"(// RCAS is based on the following logic.
)" R"(// RCAS uses a 5 tap filter in a cross pattern (same as CAS),
)" R"(//    w                n
)" R"(//  w 1 w  for taps  w m e 
)" R"(//    w                s
)" R"(// Where 'w' is the negative lobe weight.
)" R"(//  output = (w*(n+e+w+s)+m)/(4*w+1)
)" R"(// RCAS solves for 'w' by seeing where the signal might clip out of the {0 to 1} input range,
)" R"(//  0 == (w*(n+e+w+s)+m)/(4*w+1) -> w = -m/(n+e+w+s)
)" R"(//  1 == (w*(n+e+w+s)+m)/(4*w+1) -> w = (1-m)/(n+e+w+s-4*1)
)" R"(// Then chooses the 'w' which results in no clipping, limits 'w', and multiplies by the 'sharp' amount.
)" R"(// This solution above has issues with MSAA input as the steps along the gradient cause edge detection issues.
)" R"(// So RCAS uses 4x the maximum and 4x the minimum (depending on equation)in place of the individual taps.
)" R"(// As well as switching from 'm' to either the minimum or maximum (depending on side), to help in energy conservation.
)" R"(// This stabilizes RCAS.
)" R"(// RCAS does a simple highpass which is normalized against the local contrast then shaped,
)" R"(//       0.25
)" R"(//  0.25  -1  0.25
)" R"(//       0.25
)" R"(// This is used as a noise detection filter, to reduce the effect of RCAS on grain, and focus on real edges.
)" R"(//
)" R"(//  GLSL example for the required callbacks :
)" R"(// 
)" R"(//  AH4 FsrRcasLoadH(ASW2 p){return AH4(imageLoad(imgSrc,ASU2(p)));}
)" R"(//  void FsrRcasInputH(inout AH1 r,inout AH1 g,inout AH1 b)
)" R"(//  {
)" R"(//    //do any simple input color conversions here or leave empty if none needed
)" R"(//  }
)" R"(//  
)" R"(//  FsrRcasCon need to be called from the CPU or GPU to set up constants.
)" R"(//  Including a GPU example here, the 'con' value would be stored out to a constant buffer.
)" R"(// 
)" R"(//  AU4 con;
)" R"(//  FsrRcasCon(con,
)" R"(//   0.0); // The scale is {0.0 := maximum sharpness, to N>0, where N is the number of stops (halving) of the reduction of sharpness}.
)" R"(// ---------------
)" R"(// RCAS sharpening supports a CAS-like pass-through alpha via,
)" R"(//  #define FSR_RCAS_PASSTHROUGH_ALPHA 1
)" R"(// RCAS also supports a define to enable a more expensive path to avoid some sharpening of noise.
)" R"(// Would suggest it is better to apply film grain after RCAS sharpening (and after scaling) instead of using this define,
)" R"(//  #define FSR_RCAS_DENOISE 1
)" R"(//==============================================================================================================================
)" R"(// This is set at the limit of providing unnatural results for sharpening.
)" R"(#define FSR_RCAS_LIMIT (0.25-(1.0/16.0))
)" R"(////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
)" R"(////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
)" R"(//_____________________________________________________________/\_______________________________________________________________
)" R"(//==============================================================================================================================
)" R"(//                                                      CONSTANT SETUP
)" R"(//==============================================================================================================================
)" R"(// Call to setup required constant values (works on CPU or GPU).
)" R"(A_STATIC void FsrRcasCon(
)" R"(outAU4 con,
)" R"(// The scale is {0.0 := maximum, to N>0, where N is the number of stops (halving) of the reduction of sharpness}.
)" R"(AF1 sharpness){
)" R"( // Transform from stops to linear value.
)" R"( sharpness=AExp2F1(-sharpness);
)" R"( varAF2(hSharp)=initAF2(sharpness,sharpness);
)" R"( con[0]=AU1_AF1(sharpness);
)" R"( con[1]=AU1_AH2_AF2(hSharp);
)" R"( con[2]=0;
)" R"( con[3]=0;}
)" R"(////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
)" R"(////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
)" R"(//_____________________________________________________________/\_______________________________________________________________
)" R"(//==============================================================================================================================
)" R"(//                                                   NON-PACKED 32-BIT VERSION
)" R"(//==============================================================================================================================
)" R"(#if defined(A_GPU)&&defined(FSR_RCAS_F)
)" R"( // Input callback prototypes that need to be implemented by calling shader
)" R"( AF4 FsrRcasLoadF(ASU2 p);
)" R"( void FsrRcasInputF(inout AF1 r,inout AF1 g,inout AF1 b);
)" R"(//------------------------------------------------------------------------------------------------------------------------------
)" R"( void FsrRcasF(
)" R"( out AF1 pixR, // Output values, non-vector so port between RcasFilter() and RcasFilterH() is easy.
)" R"( out AF1 pixG,
)" R"( out AF1 pixB,
)" R"( #ifdef FSR_RCAS_PASSTHROUGH_ALPHA
)" R"(  out AF1 pixA,
)" R"( #endif
)" R"( AU2 ip, // Integer pixel position in output.
)" R"( AU4 con){ // Constant generated by RcasSetup().
)" R"(  // Algorithm uses minimal 3x3 pixel neighborhood.
)" R"(  //    b 
)" R"(  //  d e f
)" R"(  //    h
)" R"(  ASU2 sp=ASU2(ip);
)" R"(  AF3 b=FsrRcasLoadF(sp+ASU2( 0,-1)).rgb;
)" R"(  AF3 d=FsrRcasLoadF(sp+ASU2(-1, 0)).rgb;
)" R"(  #ifdef FSR_RCAS_PASSTHROUGH_ALPHA
)" R"(   AF4 ee=FsrRcasLoadF(sp);
)" R"(   AF3 e=ee.rgb;pixA=ee.a;
)" R"(  #else
)" R"(   AF3 e=FsrRcasLoadF(sp).rgb;
)" R"(  #endif
)" R"(  AF3 f=FsrRcasLoadF(sp+ASU2( 1, 0)).rgb;
)" R"(  AF3 h=FsrRcasLoadF(sp+ASU2( 0, 1)).rgb;
)" R"(  // Rename (32-bit) or regroup (16-bit).
)" R"(  AF1 bR=b.r;
)" R"(  AF1 bG=b.g;
)" R"(  AF1 bB=b.b;
)" R"(  AF1 dR=d.r;
)" R"(  AF1 dG=d.g;
)" R"(  AF1 dB=d.b;
)" R"(  AF1 eR=e.r;
)" R"(  AF1 eG=e.g;
)" R"(  AF1 eB=e.b;
)" R"(  AF1 fR=f.r;
)" R"(  AF1 fG=f.g;
)" R"(  AF1 fB=f.b;
)" R"(  AF1 hR=h.r;
)" R"(  AF1 hG=h.g;
)" R"(  AF1 hB=h.b;
)" R"(  // Run optional input transform.
)" R"(  FsrRcasInputF(bR,bG,bB);
)" R"(  FsrRcasInputF(dR,dG,dB);
)" R"(  FsrRcasInputF(eR,eG,eB);
)" R"(  FsrRcasInputF(fR,fG,fB);
)" R"(  FsrRcasInputF(hR,hG,hB);
)" R"(  // Luma times 2.
)" R"(  AF1 bL=bB*AF1_(0.5)+(bR*AF1_(0.5)+bG);
)" R"(  AF1 dL=dB*AF1_(0.5)+(dR*AF1_(0.5)+dG);
)" R"(  AF1 eL=eB*AF1_(0.5)+(eR*AF1_(0.5)+eG);
)" R"(  AF1 fL=fB*AF1_(0.5)+(fR*AF1_(0.5)+fG);
)" R"(  AF1 hL=hB*AF1_(0.5)+(hR*AF1_(0.5)+hG);
)" R"(  // Noise detection.
)" R"(  AF1 nz=AF1_(0.25)*bL+AF1_(0.25)*dL+AF1_(0.25)*fL+AF1_(0.25)*hL-eL;
)" R"(  nz=ASatF1(abs(nz)*APrxMedRcpF1(AMax3F1(AMax3F1(bL,dL,eL),fL,hL)-AMin3F1(AMin3F1(bL,dL,eL),fL,hL)));
)" R"(  nz=AF1_(-0.5)*nz+AF1_(1.0);
)" R"(  // Min and max of ring.
)" R"(  AF1 mn4R=min(AMin3F1(bR,dR,fR),hR);
)" R"(  AF1 mn4G=min(AMin3F1(bG,dG,fG),hG);
)" R"(  AF1 mn4B=min(AMin3F1(bB,dB,fB),hB);
)" R"(  AF1 mx4R=max(AMax3F1(bR,dR,fR),hR);
)" R"(  AF1 mx4G=max(AMax3F1(bG,dG,fG),hG);
)" R"(  AF1 mx4B=max(AMax3F1(bB,dB,fB),hB);
)" R"(  // Immediate constants for peak range.
)" R"(  AF2 peakC=AF2(1.0,-1.0*4.0);
)" R"(  // Limiters, these need to be high precision RCPs.
)" R"(  AF1 hitMinR=min(mn4R,eR)*ARcpF1(AF1_(4.0)*mx4R);
)" R"(  AF1 hitMinG=min(mn4G,eG)*ARcpF1(AF1_(4.0)*mx4G);
)" R"(  AF1 hitMinB=min(mn4B,eB)*ARcpF1(AF1_(4.0)*mx4B);
)" R"(  AF1 hitMaxR=(peakC.x-max(mx4R,eR))*ARcpF1(AF1_(4.0)*mn4R+peakC.y);
)" R"(  AF1 hitMaxG=(peakC.x-max(mx4G,eG))*ARcpF1(AF1_(4.0)*mn4G+peakC.y);
)" R"(  AF1 hitMaxB=(peakC.x-max(mx4B,eB))*ARcpF1(AF1_(4.0)*mn4B+peakC.y);
)" R"(  AF1 lobeR=max(-hitMinR,hitMaxR);
)" R"(  AF1 lobeG=max(-hitMinG,hitMaxG);
)" R"(  AF1 lobeB=max(-hitMinB,hitMaxB);
)" R"(  AF1 lobe=max(AF1_(-FSR_RCAS_LIMIT),min(AMax3F1(lobeR,lobeG,lobeB),AF1_(0.0)))*AF1_AU1(con.x);
)" R"(  // Apply noise removal.
)" R"(  #ifdef FSR_RCAS_DENOISE
)" R"(   lobe*=nz;
)" R"(  #endif
)" R"(  // Resolve, which needs the medium precision rcp approximation to avoid visible tonality changes.
)" R"(  AF1 rcpL=APrxMedRcpF1(AF1_(4.0)*lobe+AF1_(1.0));
)" R"(  pixR=(lobe*bR+lobe*dR+lobe*hR+lobe*fR+eR)*rcpL;
)" R"(  pixG=(lobe*bG+lobe*dG+lobe*hG+lobe*fG+eG)*rcpL;
)" R"(  pixB=(lobe*bB+lobe*dB+lobe*hB+lobe*fB+eB)*rcpL;
)" R"(  return;} 
)" R"(#endif
)" R"(////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
)" R"(////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
)" R"(//_____________________________________________________________/\_______________________________________________________________
)" R"(//==============================================================================================================================
)" R"(//                                                  NON-PACKED 16-BIT VERSION
)" R"(//==============================================================================================================================
)" R"(#if defined(A_GPU)&&defined(A_HALF)&&defined(FSR_RCAS_H)
)" R"( // Input callback prototypes that need to be implemented by calling shader
)" R"( AH4 FsrRcasLoadH(ASW2 p);
)" R"( void FsrRcasInputH(inout AH1 r,inout AH1 g,inout AH1 b);
)" R"(//------------------------------------------------------------------------------------------------------------------------------
)" R"( void FsrRcasH(
)" R"( out AH1 pixR, // Output values, non-vector so port between RcasFilter() and RcasFilterH() is easy.
)" R"( out AH1 pixG,
)" R"( out AH1 pixB,
)" R"( #ifdef FSR_RCAS_PASSTHROUGH_ALPHA
)" R"(  out AH1 pixA,
)" R"( #endif
)" R"( AU2 ip, // Integer pixel position in output.
)" R"( AU4 con){ // Constant generated by RcasSetup().
)" R"(  // Sharpening algorithm uses minimal 3x3 pixel neighborhood.
)" R"(  //    b 
)" R"(  //  d e f
)" R"(  //    h
)" R"(  ASW2 sp=ASW2(ip);
)" R"(  AH3 b=FsrRcasLoadH(sp+ASW2( 0,-1)).rgb;
)" R"(  AH3 d=FsrRcasLoadH(sp+ASW2(-1, 0)).rgb;
)" R"(  #ifdef FSR_RCAS_PASSTHROUGH_ALPHA
)" R"(   AH4 ee=FsrRcasLoadH(sp);
)" R"(   AH3 e=ee.rgb;pixA=ee.a;
)" R"(  #else
)" R"(   AH3 e=FsrRcasLoadH(sp).rgb;
)" R"(  #endif
)" R"(  AH3 f=FsrRcasLoadH(sp+ASW2( 1, 0)).rgb;
)" R"(  AH3 h=FsrRcasLoadH(sp+ASW2( 0, 1)).rgb;
)" R"(  // Rename (32-bit) or regroup (16-bit).
)" R"(  AH1 bR=b.r;
)" R"(  AH1 bG=b.g;
)" R"(  AH1 bB=b.b;
)" R"(  AH1 dR=d.r;
)" R"(  AH1 dG=d.g;
)" R"(  AH1 dB=d.b;
)" R"(  AH1 eR=e.r;
)" R"(  AH1 eG=e.g;
)" R"(  AH1 eB=e.b;
)" R"(  AH1 fR=f.r;
)" R"(  AH1 fG=f.g;
)" R"(  AH1 fB=f.b;
)" R"(  AH1 hR=h.r;
)" R"(  AH1 hG=h.g;
)" R"(  AH1 hB=h.b;
)" R"(  // Run optional input transform.
)" R"(  FsrRcasInputH(bR,bG,bB);
)" R"(  FsrRcasInputH(dR,dG,dB);
)" R"(  FsrRcasInputH(eR,eG,eB);
)" R"(  FsrRcasInputH(fR,fG,fB);
)" R"(  FsrRcasInputH(hR,hG,hB);
)" R"(  // Luma times 2.
)" R"(  AH1 bL=bB*AH1_(0.5)+(bR*AH1_(0.5)+bG);
)" R"(  AH1 dL=dB*AH1_(0.5)+(dR*AH1_(0.5)+dG);
)" R"(  AH1 eL=eB*AH1_(0.5)+(eR*AH1_(0.5)+eG);
)" R"(  AH1 fL=fB*AH1_(0.5)+(fR*AH1_(0.5)+fG);
)" R"(  AH1 hL=hB*AH1_(0.5)+(hR*AH1_(0.5)+hG);
)" R"(  // Noise detection.
)" R"(  AH1 nz=AH1_(0.25)*bL+AH1_(0.25)*dL+AH1_(0.25)*fL+AH1_(0.25)*hL-eL;
)" R"(  nz=ASatH1(abs(nz)*APrxMedRcpH1(AMax3H1(AMax3H1(bL,dL,eL),fL,hL)-AMin3H1(AMin3H1(bL,dL,eL),fL,hL)));
)" R"(  nz=AH1_(-0.5)*nz+AH1_(1.0);
)" R"(  // Min and max of ring.
)" R"(  AH1 mn4R=min(AMin3H1(bR,dR,fR),hR);
)" R"(  AH1 mn4G=min(AMin3H1(bG,dG,fG),hG);
)" R"(  AH1 mn4B=min(AMin3H1(bB,dB,fB),hB);
)" R"(  AH1 mx4R=max(AMax3H1(bR,dR,fR),hR);
)" R"(  AH1 mx4G=max(AMax3H1(bG,dG,fG),hG);
)" R"(  AH1 mx4B=max(AMax3H1(bB,dB,fB),hB);
)" R"(  // Immediate constants for peak range.
)" R"(  AH2 peakC=AH2(1.0,-1.0*4.0);
)" R"(  // Limiters, these need to be high precision RCPs.
)" R"(  AH1 hitMinR=min(mn4R,eR)*ARcpH1(AH1_(4.0)*mx4R);
)" R"(  AH1 hitMinG=min(mn4G,eG)*ARcpH1(AH1_(4.0)*mx4G);
)" R"(  AH1 hitMinB=min(mn4B,eB)*ARcpH1(AH1_(4.0)*mx4B);
)" R"(  AH1 hitMaxR=(peakC.x-max(mx4R,eR))*ARcpH1(AH1_(4.0)*mn4R+peakC.y);
)" R"(  AH1 hitMaxG=(peakC.x-max(mx4G,eG))*ARcpH1(AH1_(4.0)*mn4G+peakC.y);
)" R"(  AH1 hitMaxB=(peakC.x-max(mx4B,eB))*ARcpH1(AH1_(4.0)*mn4B+peakC.y);
)" R"(  AH1 lobeR=max(-hitMinR,hitMaxR);
)" R"(  AH1 lobeG=max(-hitMinG,hitMaxG);
)" R"(  AH1 lobeB=max(-hitMinB,hitMaxB);
)" R"(  AH1 lobe=max(AH1_(-FSR_RCAS_LIMIT),min(AMax3H1(lobeR,lobeG,lobeB),AH1_(0.0)))*AH2_AU1(con.y).x;
)" R"(  // Apply noise removal.
)" R"(  #ifdef FSR_RCAS_DENOISE
)" R"(   lobe*=nz;
)" R"(  #endif
)" R"(  // Resolve, which needs the medium precision rcp approximation to avoid visible tonality changes.
)" R"(  AH1 rcpL=APrxMedRcpH1(AH1_(4.0)*lobe+AH1_(1.0));
)" R"(  pixR=(lobe*bR+lobe*dR+lobe*hR+lobe*fR+eR)*rcpL;
)" R"(  pixG=(lobe*bG+lobe*dG+lobe*hG+lobe*fG+eG)*rcpL;
)" R"(  pixB=(lobe*bB+lobe*dB+lobe*hB+lobe*fB+eB)*rcpL;}
)" R"(#endif
)" R"(////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
)" R"(////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
)" R"(//_____________________________________________________________/\_______________________________________________________________
)" R"(//==============================================================================================================================
)" R"(//                                                     PACKED 16-BIT VERSION
)" R"(//==============================================================================================================================
)" R"(#if defined(A_GPU)&&defined(A_HALF)&&defined(FSR_RCAS_HX2)
)" R"( // Input callback prototypes that need to be implemented by the calling shader
)" R"( AH4 FsrRcasLoadHx2(ASW2 p);
)" R"( void FsrRcasInputHx2(inout AH2 r,inout AH2 g,inout AH2 b);
)" R"(//------------------------------------------------------------------------------------------------------------------------------
)" R"( // Can be used to convert from packed Structures of Arrays to Arrays of Structures for store.
)" R"( void FsrRcasDepackHx2(out AH4 pix0,out AH4 pix1,AH2 pixR,AH2 pixG,AH2 pixB){
)" R"(  #ifdef A_HLSL
)" R"(   // Invoke a slower path for DX only, since it won't allow uninitialized values.
)" R"(   pix0.a=pix1.a=0.0;
)" R"(  #endif
)" R"(  pix0.rgb=AH3(pixR.x,pixG.x,pixB.x);
)" R"(  pix1.rgb=AH3(pixR.y,pixG.y,pixB.y);}
)" R"(//------------------------------------------------------------------------------------------------------------------------------
)" R"( void FsrRcasHx2(
)" R"( // Output values are for 2 8x8 tiles in a 16x8 region.
)" R"( //  pix<R,G,B>.x =  left 8x8 tile
)" R"( //  pix<R,G,B>.y = right 8x8 tile
)" R"( // This enables later processing to easily be packed as well.
)" R"( out AH2 pixR,
)" R"( out AH2 pixG,
)" R"( out AH2 pixB,
)" R"( #ifdef FSR_RCAS_PASSTHROUGH_ALPHA
)" R"(  out AH2 pixA,
)" R"( #endif
)" R"( AU2 ip, // Integer pixel position in output.
)" R"( AU4 con){ // Constant generated by RcasSetup().
)" R"(  // No scaling algorithm uses minimal 3x3 pixel neighborhood.
)" R"(  ASW2 sp0=ASW2(ip);
)" R"(  AH3 b0=FsrRcasLoadHx2(sp0+ASW2( 0,-1)).rgb;
)" R"(  AH3 d0=FsrRcasLoadHx2(sp0+ASW2(-1, 0)).rgb;
)" R"(  #ifdef FSR_RCAS_PASSTHROUGH_ALPHA
)" R"(   AH4 ee0=FsrRcasLoadHx2(sp0);
)" R"(   AH3 e0=ee0.rgb;pixA.r=ee0.a;
)" R"(  #else
)" R"(   AH3 e0=FsrRcasLoadHx2(sp0).rgb;
)" R"(  #endif
)" R"(  AH3 f0=FsrRcasLoadHx2(sp0+ASW2( 1, 0)).rgb;
)" R"(  AH3 h0=FsrRcasLoadHx2(sp0+ASW2( 0, 1)).rgb;
)" R"(  ASW2 sp1=sp0+ASW2(8,0);
)" R"(  AH3 b1=FsrRcasLoadHx2(sp1+ASW2( 0,-1)).rgb;
)" R"(  AH3 d1=FsrRcasLoadHx2(sp1+ASW2(-1, 0)).rgb;
)" R"(  #ifdef FSR_RCAS_PASSTHROUGH_ALPHA
)" R"(   AH4 ee1=FsrRcasLoadHx2(sp1);
)" R"(   AH3 e1=ee1.rgb;pixA.g=ee1.a;
)" R"(  #else
)" R"(   AH3 e1=FsrRcasLoadHx2(sp1).rgb;
)" R"(  #endif
)" R"(  AH3 f1=FsrRcasLoadHx2(sp1+ASW2( 1, 0)).rgb;
)" R"(  AH3 h1=FsrRcasLoadHx2(sp1+ASW2( 0, 1)).rgb;
)" R"(  // Arrays of Structures to Structures of Arrays conversion.
)" R"(  AH2 bR=AH2(b0.r,b1.r);
)" R"(  AH2 bG=AH2(b0.g,b1.g);
)" R"(  AH2 bB=AH2(b0.b,b1.b);
)" R"(  AH2 dR=AH2(d0.r,d1.r);
)" R"(  AH2 dG=AH2(d0.g,d1.g);
)" R"(  AH2 dB=AH2(d0.b,d1.b);
)" R"(  AH2 eR=AH2(e0.r,e1.r);
)" R"(  AH2 eG=AH2(e0.g,e1.g);
)" R"(  AH2 eB=AH2(e0.b,e1.b);
)" R"(  AH2 fR=AH2(f0.r,f1.r);
)" R"(  AH2 fG=AH2(f0.g,f1.g);
)" R"(  AH2 fB=AH2(f0.b,f1.b);
)" R"(  AH2 hR=AH2(h0.r,h1.r);
)" R"(  AH2 hG=AH2(h0.g,h1.g);
)" R"(  AH2 hB=AH2(h0.b,h1.b);
)" R"(  // Run optional input transform.
)" R"(  FsrRcasInputHx2(bR,bG,bB);
)" R"(  FsrRcasInputHx2(dR,dG,dB);
)" R"(  FsrRcasInputHx2(eR,eG,eB);
)" R"(  FsrRcasInputHx2(fR,fG,fB);
)" R"(  FsrRcasInputHx2(hR,hG,hB);
)" R"(  // Luma times 2.
)" R"(  AH2 bL=bB*AH2_(0.5)+(bR*AH2_(0.5)+bG);
)" R"(  AH2 dL=dB*AH2_(0.5)+(dR*AH2_(0.5)+dG);
)" R"(  AH2 eL=eB*AH2_(0.5)+(eR*AH2_(0.5)+eG);
)" R"(  AH2 fL=fB*AH2_(0.5)+(fR*AH2_(0.5)+fG);
)" R"(  AH2 hL=hB*AH2_(0.5)+(hR*AH2_(0.5)+hG);
)" R"(  // Noise detection.
)" R"(  AH2 nz=AH2_(0.25)*bL+AH2_(0.25)*dL+AH2_(0.25)*fL+AH2_(0.25)*hL-eL;
)" R"(  nz=ASatH2(abs(nz)*APrxMedRcpH2(AMax3H2(AMax3H2(bL,dL,eL),fL,hL)-AMin3H2(AMin3H2(bL,dL,eL),fL,hL)));
)" R"(  nz=AH2_(-0.5)*nz+AH2_(1.0);
)" R"(  // Min and max of ring.
)" R"(  AH2 mn4R=min(AMin3H2(bR,dR,fR),hR);
)" R"(  AH2 mn4G=min(AMin3H2(bG,dG,fG),hG);
)" R"(  AH2 mn4B=min(AMin3H2(bB,dB,fB),hB);
)" R"(  AH2 mx4R=max(AMax3H2(bR,dR,fR),hR);
)" R"(  AH2 mx4G=max(AMax3H2(bG,dG,fG),hG);
)" R"(  AH2 mx4B=max(AMax3H2(bB,dB,fB),hB);
)" R"(  // Immediate constants for peak range.
)" R"(  AH2 peakC=AH2(1.0,-1.0*4.0);
)" R"(  // Limiters, these need to be high precision RCPs.
)" R"(  AH2 hitMinR=min(mn4R,eR)*ARcpH2(AH2_(4.0)*mx4R);
)" R"(  AH2 hitMinG=min(mn4G,eG)*ARcpH2(AH2_(4.0)*mx4G);
)" R"(  AH2 hitMinB=min(mn4B,eB)*ARcpH2(AH2_(4.0)*mx4B);
)" R"(  AH2 hitMaxR=(peakC.x-max(mx4R,eR))*ARcpH2(AH2_(4.0)*mn4R+peakC.y);
)" R"(  AH2 hitMaxG=(peakC.x-max(mx4G,eG))*ARcpH2(AH2_(4.0)*mn4G+peakC.y);
)" R"(  AH2 hitMaxB=(peakC.x-max(mx4B,eB))*ARcpH2(AH2_(4.0)*mn4B+peakC.y);
)" R"(  AH2 lobeR=max(-hitMinR,hitMaxR);
)" R"(  AH2 lobeG=max(-hitMinG,hitMaxG);
)" R"(  AH2 lobeB=max(-hitMinB,hitMaxB);
)" R"(  AH2 lobe=max(AH2_(-FSR_RCAS_LIMIT),min(AMax3H2(lobeR,lobeG,lobeB),AH2_(0.0)))*AH2_(AH2_AU1(con.y).x);
)" R"(  // Apply noise removal.
)" R"(  #ifdef FSR_RCAS_DENOISE
)" R"(   lobe*=nz;
)" R"(  #endif
)" R"(  // Resolve, which needs the medium precision rcp approximation to avoid visible tonality changes.
)" R"(  AH2 rcpL=APrxMedRcpH2(AH2_(4.0)*lobe+AH2_(1.0));
)" R"(  pixR=(lobe*bR+lobe*dR+lobe*hR+lobe*fR+eR)*rcpL;
)" R"(  pixG=(lobe*bG+lobe*dG+lobe*hG+lobe*fG+eG)*rcpL;
)" R"(  pixB=(lobe*bB+lobe*dB+lobe*hB+lobe*fB+eB)*rcpL;}
)" R"(#endif
)" R"(////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
)" R"(////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
)" R"(////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
)" R"(////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
)" R"(//_____________________________________________________________/\_______________________________________________________________
)" R"(//==============================================================================================================================
)" R"(//
)" R"(//                                          FSR - [LFGA] LINEAR FILM GRAIN APPLICATOR
)" R"(//
)" R"(//------------------------------------------------------------------------------------------------------------------------------
)" R"(// Adding output-resolution film grain after scaling is a good way to mask both rendering and scaling artifacts.
)" R"(// Suggest using tiled blue noise as film grain input, with peak noise frequency set for a specific look and feel.
)" R"(// The 'Lfga*()' functions provide a convenient way to introduce grain.
)" R"(// These functions limit grain based on distance to signal limits.
)" R"(// This is done so that the grain is temporally energy preserving, and thus won't modify image tonality.
)" R"(// Grain application should be done in a linear colorspace.
)" R"(// The grain should be temporally changing, but have a temporal sum per pixel that adds to zero (non-biased).
)" R"(//------------------------------------------------------------------------------------------------------------------------------
)" R"(// Usage,
)" R"(//   FsrLfga*(
)" R"(//    color, // In/out linear colorspace color {0 to 1} ranged.
)" R"(//    grain, // Per pixel grain texture value {-0.5 to 0.5} ranged, input is 3-channel to support colored grain.
)" R"(//    amount); // Amount of grain (0 to 1} ranged.
)" R"(//------------------------------------------------------------------------------------------------------------------------------
)" R"(// Example if grain texture is monochrome: 'FsrLfgaF(color,AF3_(grain),amount)'
)" R"(//==============================================================================================================================
)" R"(#if defined(A_GPU)
)" R"( // Maximum grain is the minimum distance to the signal limit.
)" R"( void FsrLfgaF(inout AF3 c,AF3 t,AF1 a){c+=(t*AF3_(a))*min(AF3_(1.0)-c,c);}
)" R"(#endif
)" R"(//==============================================================================================================================
)" R"(#if defined(A_GPU)&&defined(A_HALF)
)" R"( // Half precision version (slower).
)" R"( void FsrLfgaH(inout AH3 c,AH3 t,AH1 a){c+=(t*AH3_(a))*min(AH3_(1.0)-c,c);}
)" R"(//------------------------------------------------------------------------------------------------------------------------------
)" R"( // Packed half precision version (faster).
)" R"( void FsrLfgaHx2(inout AH2 cR,inout AH2 cG,inout AH2 cB,AH2 tR,AH2 tG,AH2 tB,AH1 a){
)" R"(  cR+=(tR*AH2_(a))*min(AH2_(1.0)-cR,cR);cG+=(tG*AH2_(a))*min(AH2_(1.0)-cG,cG);cB+=(tB*AH2_(a))*min(AH2_(1.0)-cB,cB);}
)" R"(#endif
)" R"(////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
)" R"(////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
)" R"(////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
)" R"(////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
)" R"(//_____________________________________________________________/\_______________________________________________________________
)" R"(//==============================================================================================================================
)" R"(//
)" R"(//                                          FSR - [SRTM] SIMPLE REVERSIBLE TONE-MAPPER
)" R"(//
)" R"(//------------------------------------------------------------------------------------------------------------------------------
)" R"(// This provides a way to take linear HDR color {0 to FP16_MAX} and convert it into a temporary {0 to 1} ranged post-tonemapped linear.
)" R"(// The tonemapper preserves RGB ratio, which helps maintain HDR color bleed during filtering.
)" R"(//------------------------------------------------------------------------------------------------------------------------------
)" R"(// Reversible tonemapper usage,
)" R"(//  FsrSrtm*(color); // {0 to FP16_MAX} converted to {0 to 1}.
)" R"(//  FsrSrtmInv*(color); // {0 to 1} converted into {0 to 32768, output peak safe for FP16}.
)" R"(//==============================================================================================================================
)" R"(#if defined(A_GPU)
)" R"( void FsrSrtmF(inout AF3 c){c*=AF3_(ARcpF1(AMax3F1(c.r,c.g,c.b)+AF1_(1.0)));}
)" R"( // The extra max solves the c=1.0 case (which is a /0).
)" R"( void FsrSrtmInvF(inout AF3 c){c*=AF3_(ARcpF1(max(AF1_(1.0/32768.0),AF1_(1.0)-AMax3F1(c.r,c.g,c.b))));}
)" R"(#endif
)" R"(//==============================================================================================================================
)" R"(#if defined(A_GPU)&&defined(A_HALF)
)" R"( void FsrSrtmH(inout AH3 c){c*=AH3_(ARcpH1(AMax3H1(c.r,c.g,c.b)+AH1_(1.0)));}
)" R"( void FsrSrtmInvH(inout AH3 c){c*=AH3_(ARcpH1(max(AH1_(1.0/32768.0),AH1_(1.0)-AMax3H1(c.r,c.g,c.b))));}
)" R"(//------------------------------------------------------------------------------------------------------------------------------
)" R"( void FsrSrtmHx2(inout AH2 cR,inout AH2 cG,inout AH2 cB){
)" R"(  AH2 rcp=ARcpH2(AMax3H2(cR,cG,cB)+AH2_(1.0));cR*=rcp;cG*=rcp;cB*=rcp;}
)" R"( void FsrSrtmInvHx2(inout AH2 cR,inout AH2 cG,inout AH2 cB){
)" R"(  AH2 rcp=ARcpH2(max(AH2_(1.0/32768.0),AH2_(1.0)-AMax3H2(cR,cG,cB)));cR*=rcp;cG*=rcp;cB*=rcp;}
)" R"(#endif
)" R"(////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
)" R"(////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
)" R"(////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
)" R"(////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
)" R"(//_____________________________________________________________/\_______________________________________________________________
)" R"(//==============================================================================================================================
)" R"(//
)" R"(//                                       FSR - [TEPD] TEMPORAL ENERGY PRESERVING DITHER
)" R"(//
)" R"(//------------------------------------------------------------------------------------------------------------------------------
)" R"(// Temporally energy preserving dithered {0 to 1} linear to gamma 2.0 conversion.
)" R"(// Gamma 2.0 is used so that the conversion back to linear is just to square the color.
)" R"(// The conversion comes in 8-bit and 10-bit modes, designed for output to 8-bit UNORM or 10:10:10:2 respectively.
)" R"(// Given good non-biased temporal blue noise as dither input,
)" R"(// the output dither will temporally conserve energy.
)" R"(// This is done by choosing the linear nearest step point instead of perceptual nearest.
)" R"(// See code below for details.
)" R"(//------------------------------------------------------------------------------------------------------------------------------
)" R"(// DX SPEC RULES FOR FLOAT->UNORM 8-BIT CONVERSION
)" R"(// ===============================================
)" R"(// - Output is 'uint(floor(saturate(n)*255.0+0.5))'.
)" R"(// - Thus rounding is to nearest.
)" R"(// - NaN gets converted to zero.
)" R"(// - INF is clamped to {0.0 to 1.0}.
)" R"(//==============================================================================================================================
)" R"(#if defined(A_GPU)
)" R"( // Hand tuned integer position to dither value, with more values than simple checkerboard.
)" R"( // Only 32-bit has enough precision for this compddation.
)" R"( // Output is {0 to <1}.
)" R"( AF1 FsrTepdDitF(AU2 p,AU1 f){
)" R"(  AF1 x=AF1_(p.x+f);
)" R"(  AF1 y=AF1_(p.y);
)" R"(  // The 1.61803 golden ratio.
)" R"(  AF1 a=AF1_((1.0+sqrt(5.0))/2.0);
)" R"(  // Number designed to provide a good visual pattern.
)" R"(  AF1 b=AF1_(1.0/3.69);
)" R"(  x=x*a+(y*b);
)" R"(  return AFractF1(x);}
)" R"(//------------------------------------------------------------------------------------------------------------------------------
)" R"( // This version is 8-bit gamma 2.0.
)" R"( // The 'c' input is {0 to 1}.
)" R"( // Output is {0 to 1} ready for image store.
)" R"( void FsrTepdC8F(inout AF3 c,AF1 dit){
)" R"(  AF3 n=sqrt(c);
)" R"(  n=floor(n*AF3_(255.0))*AF3_(1.0/255.0);
)" R"(  AF3 a=n*n;
)" R"(  AF3 b=n+AF3_(1.0/255.0);b=b*b;
)" R"(  // Ratio of 'a' to 'b' required to produce 'c'.
)" R"(  // APrxLoRcpF1() won't work here (at least for very high dynamic ranges).
)" R"(  // APrxMedRcpF1() is an IADD,FMA,MUL.
)" R"(  AF3 r=(c-b)*APrxMedRcpF3(a-b);
)" R"(  // Use the ratio as a cutoff to choose 'a' or 'b'.
)" R"(  // AGtZeroF1() is a MUL.
)" R"(  c=ASatF3(n+AGtZeroF3(AF3_(dit)-r)*AF3_(1.0/255.0));}
)" R"(//------------------------------------------------------------------------------------------------------------------------------
)" R"( // This version is 10-bit gamma 2.0.
)" R"( // The 'c' input is {0 to 1}.
)" R"( // Output is {0 to 1} ready for image store.
)" R"( void FsrTepdC10F(inout AF3 c,AF1 dit){
)" R"(  AF3 n=sqrt(c);
)" R"(  n=floor(n*AF3_(1023.0))*AF3_(1.0/1023.0);
)" R"(  AF3 a=n*n;
)" R"(  AF3 b=n+AF3_(1.0/1023.0);b=b*b;
)" R"(  AF3 r=(c-b)*APrxMedRcpF3(a-b);
)" R"(  c=ASatF3(n+AGtZeroF3(AF3_(dit)-r)*AF3_(1.0/1023.0));}
)" R"(#endif
)" R"(//==============================================================================================================================
)" R"(#if defined(A_GPU)&&defined(A_HALF)
)" R"( AH1 FsrTepdDitH(AU2 p,AU1 f){
)" R"(  AF1 x=AF1_(p.x+f);
)" R"(  AF1 y=AF1_(p.y);
)" R"(  AF1 a=AF1_((1.0+sqrt(5.0))/2.0);
)" R"(  AF1 b=AF1_(1.0/3.69);
)" R"(  x=x*a+(y*b);
)" R"(  return AH1(AFractF1(x));}
)" R"(//------------------------------------------------------------------------------------------------------------------------------
)" R"( void FsrTepdC8H(inout AH3 c,AH1 dit){
)" R"(  AH3 n=sqrt(c);
)" R"(  n=floor(n*AH3_(255.0))*AH3_(1.0/255.0);
)" R"(  AH3 a=n*n;
)" R"(  AH3 b=n+AH3_(1.0/255.0);b=b*b;
)" R"(  AH3 r=(c-b)*APrxMedRcpH3(a-b);
)" R"(  c=ASatH3(n+AGtZeroH3(AH3_(dit)-r)*AH3_(1.0/255.0));}
)" R"(//------------------------------------------------------------------------------------------------------------------------------
)" R"( void FsrTepdC10H(inout AH3 c,AH1 dit){
)" R"(  AH3 n=sqrt(c);
)" R"(  n=floor(n*AH3_(1023.0))*AH3_(1.0/1023.0);
)" R"(  AH3 a=n*n;
)" R"(  AH3 b=n+AH3_(1.0/1023.0);b=b*b;
)" R"(  AH3 r=(c-b)*APrxMedRcpH3(a-b);
)" R"(  c=ASatH3(n+AGtZeroH3(AH3_(dit)-r)*AH3_(1.0/1023.0));}
)" R"(//==============================================================================================================================
)" R"( // This computes dither for positions 'p' and 'p+{8,0}'.
)" R"( AH2 FsrTepdDitHx2(AU2 p,AU1 f){
)" R"(  AF2 x;
)" R"(  x.x=AF1_(p.x+f);
)" R"(  x.y=x.x+AF1_(8.0);
)" R"(  AF1 y=AF1_(p.y);
)" R"(  AF1 a=AF1_((1.0+sqrt(5.0))/2.0);
)" R"(  AF1 b=AF1_(1.0/3.69);
)" R"(  x=x*AF2_(a)+AF2_(y*b);
)" R"(  return AH2(AFractF2(x));}
)" R"(//------------------------------------------------------------------------------------------------------------------------------
)" R"( void FsrTepdC8Hx2(inout AH2 cR,inout AH2 cG,inout AH2 cB,AH2 dit){
)" R"(  AH2 nR=sqrt(cR);
)" R"(  AH2 nG=sqrt(cG);
)" R"(  AH2 nB=sqrt(cB);
)" R"(  nR=floor(nR*AH2_(255.0))*AH2_(1.0/255.0);
)" R"(  nG=floor(nG*AH2_(255.0))*AH2_(1.0/255.0);
)" R"(  nB=floor(nB*AH2_(255.0))*AH2_(1.0/255.0);
)" R"(  AH2 aR=nR*nR;
)" R"(  AH2 aG=nG*nG;
)" R"(  AH2 aB=nB*nB;
)" R"(  AH2 bR=nR+AH2_(1.0/255.0);bR=bR*bR;
)" R"(  AH2 bG=nG+AH2_(1.0/255.0);bG=bG*bG;
)" R"(  AH2 bB=nB+AH2_(1.0/255.0);bB=bB*bB;
)" R"(  AH2 rR=(cR-bR)*APrxMedRcpH2(aR-bR);
)" R"(  AH2 rG=(cG-bG)*APrxMedRcpH2(aG-bG);
)" R"(  AH2 rB=(cB-bB)*APrxMedRcpH2(aB-bB);
)" R"(  cR=ASatH2(nR+AGtZeroH2(dit-rR)*AH2_(1.0/255.0));
)" R"(  cG=ASatH2(nG+AGtZeroH2(dit-rG)*AH2_(1.0/255.0));
)" R"(  cB=ASatH2(nB+AGtZeroH2(dit-rB)*AH2_(1.0/255.0));}
)" R"(//------------------------------------------------------------------------------------------------------------------------------
)" R"( void FsrTepdC10Hx2(inout AH2 cR,inout AH2 cG,inout AH2 cB,AH2 dit){
)" R"(  AH2 nR=sqrt(cR);
)" R"(  AH2 nG=sqrt(cG);
)" R"(  AH2 nB=sqrt(cB);
)" R"(  nR=floor(nR*AH2_(1023.0))*AH2_(1.0/1023.0);
)" R"(  nG=floor(nG*AH2_(1023.0))*AH2_(1.0/1023.0);
)" R"(  nB=floor(nB*AH2_(1023.0))*AH2_(1.0/1023.0);
)" R"(  AH2 aR=nR*nR;
)" R"(  AH2 aG=nG*nG;
)" R"(  AH2 aB=nB*nB;
)" R"(  AH2 bR=nR+AH2_(1.0/1023.0);bR=bR*bR;
)" R"(  AH2 bG=nG+AH2_(1.0/1023.0);bG=bG*bG;
)" R"(  AH2 bB=nB+AH2_(1.0/1023.0);bB=bB*bB;
)" R"(  AH2 rR=(cR-bR)*APrxMedRcpH2(aR-bR);
)" R"(  AH2 rG=(cG-bG)*APrxMedRcpH2(aG-bG);
)" R"(  AH2 rB=(cB-bB)*APrxMedRcpH2(aB-bB);
)" R"(  cR=ASatH2(nR+AGtZeroH2(dit-rR)*AH2_(1.0/1023.0));
)" R"(  cG=ASatH2(nG+AGtZeroH2(dit-rG)*AH2_(1.0/1023.0));
)" R"(  cB=ASatH2(nB+AGtZeroH2(dit-rB)*AH2_(1.0/1023.0));}
)" R"(#endif
)" R"(
)" 
};

} // namespace HostShaders

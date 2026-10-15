/**
 * decamp dumper generated SDK
 * Package: /Script/PixelCapture
 */
#pragma once
#include "Basic.h"

// /Script/PixelCapture.PixelCaptureMediaCapture
// Kind: Class; super: MediaCapture
class UPixelCaptureMediaCapture
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FMulticastInlineDelegate OnStateChanged; // 0x0028 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x28]; // 0x0038
    void* MediaOutput; // 0x0060 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPixelCaptureMediaCapture, OnStateChanged) == 40, "Offset mismatch for UPixelCaptureMediaCapture::OnStateChanged");
static_assert(offsetof(UPixelCaptureMediaCapture, MediaOutput) == 96, "Offset mismatch for UPixelCaptureMediaCapture::MediaOutput");

// /Script/PixelCapture.PixelCaptureMediaOuput
// Kind: Class; super: MediaOutput
class UPixelCaptureMediaOuput
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::int32_t NumberOfTextureBuffers; // 0x0028 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UPixelCaptureMediaOuput, NumberOfTextureBuffers) == 40, "Offset mismatch for UPixelCaptureMediaOuput::NumberOfTextureBuffers");

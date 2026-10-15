/**
 * decamp dumper generated SDK
 * Package: /Script/ImageWriteQueue
 */
#pragma once
#include "Basic.h"

// /Script/ImageWriteQueue.ImageWriteOptions
// Kind: ScriptStruct; super: none
struct FImageWriteOptions
{
public:
    std::uint8_t Format; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::uint8_t OnComplete[0xC]; // 0x0004 (Size: 0xC, Type: DelegateProperty)
    std::int32_t CompressionQuality; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::uint8_t bOverwriteFile; // 0x0014 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAsync; // 0x0015 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FImageWriteOptions, Format) == 0, "Offset mismatch for FImageWriteOptions::Format");
static_assert(offsetof(FImageWriteOptions, OnComplete) == 4, "Offset mismatch for FImageWriteOptions::OnComplete");
static_assert(offsetof(FImageWriteOptions, CompressionQuality) == 16, "Offset mismatch for FImageWriteOptions::CompressionQuality");
static_assert(offsetof(FImageWriteOptions, bOverwriteFile) == 20, "Offset mismatch for FImageWriteOptions::bOverwriteFile");
static_assert(offsetof(FImageWriteOptions, bAsync) == 21, "Offset mismatch for FImageWriteOptions::bAsync");

// /Script/ImageWriteQueue.ImageWriteBlueprintLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UImageWriteBlueprintLibrary
{
public:
    std::uint8_t Opaque[1];
};

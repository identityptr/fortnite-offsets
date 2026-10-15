/**
 * decamp dumper generated SDK
 * Package: /Script/SlateBaseRenderer
 */
#pragma once
#include "Basic.h"

// /Script/SlateBaseRenderer.SlatePostBufferProcessorSet
// Kind: ScriptStruct; super: none
struct FSlatePostBufferProcessorSet
{
public:
    TMap<void*, void*> Processors; // 0x0000 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FSlatePostBufferProcessorSet, Processors) == 0, "Offset mismatch for FSlatePostBufferProcessorSet::Processors");

// /Script/SlateBaseRenderer.SlateFXBaseSubsystem
// Kind: Class; super: EngineSubsystem
class USlateFXBaseSubsystem
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TMap<void*, void*> SlatePostBufferProcessors; // 0x0030 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(USlateFXBaseSubsystem, SlatePostBufferProcessors) == 48, "Offset mismatch for USlateFXBaseSubsystem::SlatePostBufferProcessors");

// /Script/SlateBaseRenderer.SlateFontInfoBlueprintLibrary
// Kind: Class; super: Object
class USlateFontInfoBlueprintLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SlateBaseRenderer.SlatePostBufferBlur
// Kind: Class; super: SlatePostBufferProcessor
class USlatePostBufferBlur
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    float GaussianBlurStrength; // 0x0038 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(USlatePostBufferBlur, GaussianBlurStrength) == 56, "Offset mismatch for USlatePostBufferBlur::GaussianBlurStrength");

// /Script/SlateBaseRenderer.SlatePostBufferProcessor
// Kind: Class; super: Object
class USlatePostBufferProcessor
{
public:
    std::uint8_t Opaque[1];
};

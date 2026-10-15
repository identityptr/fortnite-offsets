/**
 * decamp dumper generated SDK
 * Package: /Script/SlateRHIRenderer
 */
#pragma once
#include "Basic.h"

// /Script/SlateRHIRenderer.SlatePostSettings
// Kind: ScriptStruct; super: none
struct FSlatePostSettings
{
public:
    std::uint8_t bEnabled; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Resolution; // 0x0001 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x6]; // 0x0002
    void* PostProcessorClass; // 0x0008 (Size: 0x8, Type: ClassProperty)
    FString PathToSlatePostRT; // 0x0010 (Size: 0x10, Type: StrProperty)
    void* CachedSlatePostRT; // 0x0020 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FSlatePostSettings, bEnabled) == 0, "Offset mismatch for FSlatePostSettings::bEnabled");
static_assert(offsetof(FSlatePostSettings, Resolution) == 1, "Offset mismatch for FSlatePostSettings::Resolution");
static_assert(offsetof(FSlatePostSettings, PostProcessorClass) == 8, "Offset mismatch for FSlatePostSettings::PostProcessorClass");
static_assert(offsetof(FSlatePostSettings, PathToSlatePostRT) == 16, "Offset mismatch for FSlatePostSettings::PathToSlatePostRT");
static_assert(offsetof(FSlatePostSettings, CachedSlatePostRT) == 32, "Offset mismatch for FSlatePostSettings::CachedSlatePostRT");

// /Script/SlateRHIRenderer.SlateFXSubsystem
// Kind: Class; super: SlateFXBaseSubsystem
class USlateFXSubsystem
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TMap<void*, void*> SlatePostBufferProcessors; // 0x0030 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(USlateFXSubsystem, SlatePostBufferProcessors) == 48, "Offset mismatch for USlateFXSubsystem::SlatePostBufferProcessors");

// /Script/SlateRHIRenderer.SlateFontBlueprintLibrary
// Kind: Class; super: Object
class USlateFontBlueprintLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SlateRHIRenderer.SlateRHIRendererSettings
// Kind: Class; super: DeveloperSettings
class USlateRHIRendererSettings
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TMap<void*, void*> SlatePostSettings; // 0x0030 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(USlateRHIRendererSettings, SlatePostSettings) == 48, "Offset mismatch for USlateRHIRendererSettings::SlatePostSettings");

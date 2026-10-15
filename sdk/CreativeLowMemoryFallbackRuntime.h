/**
 * decamp dumper generated SDK
 * Package: /Script/CreativeLowMemoryFallbackRuntime
 */
#pragma once
#include "Basic.h"

// /Script/CreativeLowMemoryFallbackRuntime.CreativeLowMemoryFallbackFreeMemoryThresholds
// Kind: ScriptStruct; super: none
struct FCreativeLowMemoryFallbackFreeMemoryThresholds
{
public:
    float FallbackMB; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float WarningMB; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float RecoveryMB; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FCreativeLowMemoryFallbackFreeMemoryThresholds, FallbackMB) == 0, "Offset mismatch for FCreativeLowMemoryFallbackFreeMemoryThresholds::FallbackMB");
static_assert(offsetof(FCreativeLowMemoryFallbackFreeMemoryThresholds, WarningMB) == 4, "Offset mismatch for FCreativeLowMemoryFallbackFreeMemoryThresholds::WarningMB");
static_assert(offsetof(FCreativeLowMemoryFallbackFreeMemoryThresholds, RecoveryMB) == 8, "Offset mismatch for FCreativeLowMemoryFallbackFreeMemoryThresholds::RecoveryMB");

// /Script/CreativeLowMemoryFallbackRuntime.CreativeLowMemoryFallbackUserFacingText
// Kind: ScriptStruct; super: none
struct FCreativeLowMemoryFallbackUserFacingText
{
public:
    std::uint8_t ExitToMainMenuReasonText[0x10]; // 0x0000 (Size: 0x10, Type: TextProperty)
    std::uint8_t WarningToastTitle[0x10]; // 0x0010 (Size: 0x10, Type: TextProperty)
    FText WarningToastDescription; // 0x0020 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(FCreativeLowMemoryFallbackUserFacingText, ExitToMainMenuReasonText) == 0, "Offset mismatch for FCreativeLowMemoryFallbackUserFacingText::ExitToMainMenuReasonText");
static_assert(offsetof(FCreativeLowMemoryFallbackUserFacingText, WarningToastTitle) == 16, "Offset mismatch for FCreativeLowMemoryFallbackUserFacingText::WarningToastTitle");
static_assert(offsetof(FCreativeLowMemoryFallbackUserFacingText, WarningToastDescription) == 32, "Offset mismatch for FCreativeLowMemoryFallbackUserFacingText::WarningToastDescription");

// /Script/CreativeLowMemoryFallbackRuntime.CreativeLowMemoryFallbackSettings
// Kind: Class; super: DeveloperSettings
class UCreativeLowMemoryFallbackSettings
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t WarningToastIcon[0x20]; // 0x0030 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t DefaultText[0x30]; // 0x0050 (Size: 0x30, Type: StructProperty)
    TMap<void*, void*> PlaylistOverrideThresholds; // 0x0080 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> PlaylistOverrideText; // 0x0090 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UCreativeLowMemoryFallbackSettings, WarningToastIcon) == 48, "Offset mismatch for UCreativeLowMemoryFallbackSettings::WarningToastIcon");
static_assert(offsetof(UCreativeLowMemoryFallbackSettings, DefaultText) == 80, "Offset mismatch for UCreativeLowMemoryFallbackSettings::DefaultText");
static_assert(offsetof(UCreativeLowMemoryFallbackSettings, PlaylistOverrideThresholds) == 128, "Offset mismatch for UCreativeLowMemoryFallbackSettings::PlaylistOverrideThresholds");
static_assert(offsetof(UCreativeLowMemoryFallbackSettings, PlaylistOverrideText) == 144, "Offset mismatch for UCreativeLowMemoryFallbackSettings::PlaylistOverrideText");

// /Script/CreativeLowMemoryFallbackRuntime.CreativeLowMemoryFallbackWorldSubsystem
// Kind: Class; super: WorldSubsystem
class UCreativeLowMemoryFallbackWorldSubsystem
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t CurrentThresholds[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UCreativeLowMemoryFallbackWorldSubsystem, CurrentThresholds) == 56, "Offset mismatch for UCreativeLowMemoryFallbackWorldSubsystem::CurrentThresholds");

/**
 * decamp dumper generated SDK
 * Package: /Script/FortDelMarSettings
 */
#pragma once
#include "Basic.h"

// /Script/FortDelMarSettings.FortDelMarClientSettingRecordPartition
// Kind: Class; super: FortClientSettingRecordPartition
class UFortDelMarClientSettingRecordPartition
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortDelMarSettings.FortDelMarInputContextRedirectMap
// Kind: Class; super: DataAsset
class UFortDelMarInputContextRedirectMap
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TMap<void*, void*> RedirectMap; // 0x0028 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UFortDelMarInputContextRedirectMap, RedirectMap) == 40, "Offset mismatch for UFortDelMarInputContextRedirectMap::RedirectMap");

// /Script/FortDelMarSettings.FortDelMarInputModifierAlwaysOne
// Kind: Class; super: InputModifier
class UFortDelMarInputModifierAlwaysOne
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortDelMarSettings.FortDelMarInputModifierClamp
// Kind: Class; super: InputModifier
class UFortDelMarInputModifierClamp
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Minimum[0x18]; // 0x0028 (Size: 0x18, Type: StructProperty)
    std::uint8_t Maximum[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortDelMarInputModifierClamp, Minimum) == 40, "Offset mismatch for UFortDelMarInputModifierClamp::Minimum");
static_assert(offsetof(UFortDelMarInputModifierClamp, Maximum) == 64, "Offset mismatch for UFortDelMarInputModifierClamp::Maximum");

// /Script/FortDelMarSettings.FortDelMarInputModifierPitchInversion
// Kind: Class; super: InputModifier
class UFortDelMarInputModifierPitchInversion
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortDelMarSettings.FortDelMarInputModifierScalarBySign
// Kind: Class; super: InputModifier
class UFortDelMarInputModifierScalarBySign
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t PositiveScalar[0x18]; // 0x0028 (Size: 0x18, Type: StructProperty)
    std::uint8_t NegativeScalar[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortDelMarInputModifierScalarBySign, PositiveScalar) == 40, "Offset mismatch for UFortDelMarInputModifierScalarBySign::PositiveScalar");
static_assert(offsetof(UFortDelMarInputModifierScalarBySign, NegativeScalar) == 64, "Offset mismatch for UFortDelMarInputModifierScalarBySign::NegativeScalar");

// /Script/FortDelMarSettings.FortDelMarInputModifierZeroOut
// Kind: Class; super: InputModifier
class UFortDelMarInputModifierZeroOut
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortDelMarSettings.FortDelMarSettingsGlobals
// Kind: Class; super: Object
class UFortDelMarSettingsGlobals
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t DefaultTouchControlsLayout[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortDelMarSettingsGlobals, DefaultTouchControlsLayout) == 40, "Offset mismatch for UFortDelMarSettingsGlobals::DefaultTouchControlsLayout");

// /Script/FortDelMarSettings.GameFeatureAction_FortDelMarAddInputContextMappingPlatformOverrides
// Kind: Class; super: GameFeatureAction_AddInputContextMapping
class UGameFeatureAction_FortDelMarAddInputContextMappingPlatformOverrides
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    TSoftObjectPtr<void> DigitalRedirectMap; // 0x0070 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UGameFeatureAction_FortDelMarAddInputContextMappingPlatformOverrides, DigitalRedirectMap) == 112, "Offset mismatch for UGameFeatureAction_FortDelMarAddInputContextMappingPlatformOverrides::DigitalRedirectMap");

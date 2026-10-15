/**
 * decamp dumper generated SDK
 * Package: /Script/DelMarSettings
 */
#pragma once
#include "Basic.h"

// /Script/DelMarSettings.DelMarClientSettingRecordPartition
// Kind: Class; super: FortClientSettingRecordPartition
class UDelMarClientSettingRecordPartition
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DelMarSettings.DelMarInputContextRedirectMap
// Kind: Class; super: DataAsset
class UDelMarInputContextRedirectMap
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TMap<void*, void*> RedirectMap; // 0x0028 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UDelMarInputContextRedirectMap, RedirectMap) == 40, "Offset mismatch for UDelMarInputContextRedirectMap::RedirectMap");

// /Script/DelMarSettings.DelMarInputModifierAlwaysOne
// Kind: Class; super: InputModifier
class UDelMarInputModifierAlwaysOne
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DelMarSettings.DelMarInputModifierClamp
// Kind: Class; super: InputModifier
class UDelMarInputModifierClamp
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Minimum[0x18]; // 0x0028 (Size: 0x18, Type: StructProperty)
    std::uint8_t Maximum[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UDelMarInputModifierClamp, Minimum) == 40, "Offset mismatch for UDelMarInputModifierClamp::Minimum");
static_assert(offsetof(UDelMarInputModifierClamp, Maximum) == 64, "Offset mismatch for UDelMarInputModifierClamp::Maximum");

// /Script/DelMarSettings.DelMarInputModifierPitchInversion
// Kind: Class; super: InputModifier
class UDelMarInputModifierPitchInversion
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DelMarSettings.DelMarInputModifierScalarBySign
// Kind: Class; super: InputModifier
class UDelMarInputModifierScalarBySign
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t PositiveScalar[0x18]; // 0x0028 (Size: 0x18, Type: StructProperty)
    std::uint8_t NegativeScalar[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UDelMarInputModifierScalarBySign, PositiveScalar) == 40, "Offset mismatch for UDelMarInputModifierScalarBySign::PositiveScalar");
static_assert(offsetof(UDelMarInputModifierScalarBySign, NegativeScalar) == 64, "Offset mismatch for UDelMarInputModifierScalarBySign::NegativeScalar");

// /Script/DelMarSettings.DelMarInputModifierZeroOut
// Kind: Class; super: InputModifier
class UDelMarInputModifierZeroOut
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DelMarSettings.DelMarSettingsGlobals
// Kind: Class; super: Object
class UDelMarSettingsGlobals
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t DefaultTouchControlsLayout[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UDelMarSettingsGlobals, DefaultTouchControlsLayout) == 40, "Offset mismatch for UDelMarSettingsGlobals::DefaultTouchControlsLayout");

// /Script/DelMarSettings.GameFeatureAction_AddInputContextMappingPlatformOverrides
// Kind: Class; super: GameFeatureAction_AddInputContextMapping
class UGameFeatureAction_AddInputContextMappingPlatformOverrides
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    TSoftObjectPtr<void> DigitalRedirectMap; // 0x0070 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UGameFeatureAction_AddInputContextMappingPlatformOverrides, DigitalRedirectMap) == 112, "Offset mismatch for UGameFeatureAction_AddInputContextMappingPlatformOverrides::DigitalRedirectMap");

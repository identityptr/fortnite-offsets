/**
 * decamp dumper generated SDK
 * Package: /Script/StreamlineRHI
 */
#pragma once
#include "Basic.h"

// /Script/StreamlineRHI.StreamlineOverrideSettings
// Kind: Class; super: Object
class UStreamlineOverrideSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t EnableDLSSFGInPlayInEditorViewportsOverride; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t LoadDebugOverlayOverride; // 0x0029 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UStreamlineOverrideSettings, EnableDLSSFGInPlayInEditorViewportsOverride) == 40, "Offset mismatch for UStreamlineOverrideSettings::EnableDLSSFGInPlayInEditorViewportsOverride");
static_assert(offsetof(UStreamlineOverrideSettings, LoadDebugOverlayOverride) == 41, "Offset mismatch for UStreamlineOverrideSettings::LoadDebugOverlayOverride");

// /Script/StreamlineRHI.StreamlineSettings
// Kind: Class; super: Object
class UStreamlineSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bEnableStreamlineD3D12; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableStreamlineD3D11; // 0x0029 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableDLSSFGInPlayInEditorViewports; // 0x002A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bLoadDebugOverlay; // 0x002B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowOTAUpdate; // 0x002C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x002D
    std::int32_t NVIDIANGXApplicationId; // 0x0030 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UStreamlineSettings, bEnableStreamlineD3D12) == 40, "Offset mismatch for UStreamlineSettings::bEnableStreamlineD3D12");
static_assert(offsetof(UStreamlineSettings, bEnableStreamlineD3D11) == 41, "Offset mismatch for UStreamlineSettings::bEnableStreamlineD3D11");
static_assert(offsetof(UStreamlineSettings, bEnableDLSSFGInPlayInEditorViewports) == 42, "Offset mismatch for UStreamlineSettings::bEnableDLSSFGInPlayInEditorViewports");
static_assert(offsetof(UStreamlineSettings, bLoadDebugOverlay) == 43, "Offset mismatch for UStreamlineSettings::bLoadDebugOverlay");
static_assert(offsetof(UStreamlineSettings, bAllowOTAUpdate) == 44, "Offset mismatch for UStreamlineSettings::bAllowOTAUpdate");
static_assert(offsetof(UStreamlineSettings, NVIDIANGXApplicationId) == 48, "Offset mismatch for UStreamlineSettings::NVIDIANGXApplicationId");

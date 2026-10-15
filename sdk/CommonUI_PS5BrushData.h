/**
 * decamp dumper generated SDK
 * Package: /FortUILibrary/Input/CommonUI_PS5BrushData
 */
#pragma once
#include "Basic.h"

// /FortUILibrary/Input/CommonUI_PS5BrushData.CommonUI_PS5BrushData_C
// Kind: BlueprintGeneratedClass; super: FortInputControllerData
class UCommonUI_PS5BrushData_C
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t InputType; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0029
    std::uint8_t GamepadName[0x4]; // 0x002C (Size: 0x4, Type: NameProperty)
    std::uint8_t GamepadDisplayName[0x10]; // 0x0030 (Size: 0x10, Type: TextProperty)
    std::uint8_t GamepadCategory[0x10]; // 0x0040 (Size: 0x10, Type: TextProperty)
    std::uint8_t GamepadPlatformName[0x10]; // 0x0050 (Size: 0x10, Type: TextProperty)
    TArray<void*> GamepadHardwareIdMapping; // 0x0060 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ControllerTexture[0x20]; // 0x0070 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t ControllerButtonMaskTexture[0x20]; // 0x0090 (Size: 0x20, Type: SoftObjectProperty)
    TArray<void*> InputBrushDataMap; // 0x00B0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> InputBrushKeySets; // 0x00C0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UCommonUI_PS5BrushData_C, InputType) == 40, "Offset mismatch for UCommonUI_PS5BrushData_C::InputType");
static_assert(offsetof(UCommonUI_PS5BrushData_C, GamepadName) == 44, "Offset mismatch for UCommonUI_PS5BrushData_C::GamepadName");
static_assert(offsetof(UCommonUI_PS5BrushData_C, GamepadDisplayName) == 48, "Offset mismatch for UCommonUI_PS5BrushData_C::GamepadDisplayName");
static_assert(offsetof(UCommonUI_PS5BrushData_C, GamepadCategory) == 64, "Offset mismatch for UCommonUI_PS5BrushData_C::GamepadCategory");
static_assert(offsetof(UCommonUI_PS5BrushData_C, GamepadPlatformName) == 80, "Offset mismatch for UCommonUI_PS5BrushData_C::GamepadPlatformName");
static_assert(offsetof(UCommonUI_PS5BrushData_C, GamepadHardwareIdMapping) == 96, "Offset mismatch for UCommonUI_PS5BrushData_C::GamepadHardwareIdMapping");
static_assert(offsetof(UCommonUI_PS5BrushData_C, ControllerTexture) == 112, "Offset mismatch for UCommonUI_PS5BrushData_C::ControllerTexture");
static_assert(offsetof(UCommonUI_PS5BrushData_C, ControllerButtonMaskTexture) == 144, "Offset mismatch for UCommonUI_PS5BrushData_C::ControllerButtonMaskTexture");
static_assert(offsetof(UCommonUI_PS5BrushData_C, InputBrushDataMap) == 176, "Offset mismatch for UCommonUI_PS5BrushData_C::InputBrushDataMap");
static_assert(offsetof(UCommonUI_PS5BrushData_C, InputBrushKeySets) == 192, "Offset mismatch for UCommonUI_PS5BrushData_C::InputBrushKeySets");

/**
 * decamp dumper generated SDK
 * Package: /Game/Input/EnhancedInput/FortPlayerController/B_ControllerComp_CoreInput
 */
#pragma once
#include "Basic.h"

// /Game/Input/EnhancedInput/FortPlayerController/B_ControllerComp_CoreInput.B_ControllerComp_CoreInput_C
// Kind: BlueprintGeneratedClass; super: FortControllerComponent_CoreInput
class UB_ControllerComp_CoreInput_C
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    std::uint8_t IMC_RangedWeapon[0x48]; // 0x00C8 (Size: 0x48, Type: StructProperty)
    std::uint8_t IA_WeaponPrimary[0x28]; // 0x0110 (Size: 0x28, Type: StructProperty)
    std::uint8_t IA_WeaponSecondary[0x28]; // 0x0138 (Size: 0x28, Type: StructProperty)
    std::uint8_t IA_Reload[0x28]; // 0x0160 (Size: 0x28, Type: StructProperty)
    std::uint8_t IMC_Traversal[0x48]; // 0x0188 (Size: 0x48, Type: StructProperty)
    std::uint8_t IA_Move[0x28]; // 0x01D0 (Size: 0x28, Type: StructProperty)
    std::uint8_t IA_Crouch[0x28]; // 0x01F8 (Size: 0x28, Type: StructProperty)
    std::uint8_t IA_CrouchOrRepairImmediately[0x28]; // 0x0220 (Size: 0x28, Type: StructProperty)
    std::uint8_t IA_Sprint[0x28]; // 0x0248 (Size: 0x28, Type: StructProperty)
    std::uint8_t IA_Jump[0x28]; // 0x0270 (Size: 0x28, Type: StructProperty)
    std::uint8_t IA_AutoRun[0x28]; // 0x0298 (Size: 0x28, Type: StructProperty)
    std::uint8_t IMC_Interact[0x48]; // 0x02C0 (Size: 0x48, Type: StructProperty)
    std::uint8_t IA_Interact[0x28]; // 0x0308 (Size: 0x28, Type: StructProperty)
    std::uint8_t IMC_Hotbar[0x48]; // 0x0330 (Size: 0x48, Type: StructProperty)
    TArray<void*> IA_HotbarSlots; // 0x0378 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t IA_NextHotbarSlot[0x28]; // 0x0388 (Size: 0x28, Type: StructProperty)
    std::uint8_t IA_PreviousHotbarSlot[0x28]; // 0x03B0 (Size: 0x28, Type: StructProperty)
    std::uint8_t bEnableHotbarEnhancedInputs; // 0x03D8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x03D9
    FMulticastInlineDelegate OnCoreInputAssetsReadyForUse; // 0x03E0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UB_ControllerComp_CoreInput_C, IMC_RangedWeapon) == 200, "Offset mismatch for UB_ControllerComp_CoreInput_C::IMC_RangedWeapon");
static_assert(offsetof(UB_ControllerComp_CoreInput_C, IA_WeaponPrimary) == 272, "Offset mismatch for UB_ControllerComp_CoreInput_C::IA_WeaponPrimary");
static_assert(offsetof(UB_ControllerComp_CoreInput_C, IA_WeaponSecondary) == 312, "Offset mismatch for UB_ControllerComp_CoreInput_C::IA_WeaponSecondary");
static_assert(offsetof(UB_ControllerComp_CoreInput_C, IA_Reload) == 352, "Offset mismatch for UB_ControllerComp_CoreInput_C::IA_Reload");
static_assert(offsetof(UB_ControllerComp_CoreInput_C, IMC_Traversal) == 392, "Offset mismatch for UB_ControllerComp_CoreInput_C::IMC_Traversal");
static_assert(offsetof(UB_ControllerComp_CoreInput_C, IA_Move) == 464, "Offset mismatch for UB_ControllerComp_CoreInput_C::IA_Move");
static_assert(offsetof(UB_ControllerComp_CoreInput_C, IA_Crouch) == 504, "Offset mismatch for UB_ControllerComp_CoreInput_C::IA_Crouch");
static_assert(offsetof(UB_ControllerComp_CoreInput_C, IA_CrouchOrRepairImmediately) == 544, "Offset mismatch for UB_ControllerComp_CoreInput_C::IA_CrouchOrRepairImmediately");
static_assert(offsetof(UB_ControllerComp_CoreInput_C, IA_Sprint) == 584, "Offset mismatch for UB_ControllerComp_CoreInput_C::IA_Sprint");
static_assert(offsetof(UB_ControllerComp_CoreInput_C, IA_Jump) == 624, "Offset mismatch for UB_ControllerComp_CoreInput_C::IA_Jump");
static_assert(offsetof(UB_ControllerComp_CoreInput_C, IA_AutoRun) == 664, "Offset mismatch for UB_ControllerComp_CoreInput_C::IA_AutoRun");
static_assert(offsetof(UB_ControllerComp_CoreInput_C, IMC_Interact) == 704, "Offset mismatch for UB_ControllerComp_CoreInput_C::IMC_Interact");
static_assert(offsetof(UB_ControllerComp_CoreInput_C, IA_Interact) == 776, "Offset mismatch for UB_ControllerComp_CoreInput_C::IA_Interact");
static_assert(offsetof(UB_ControllerComp_CoreInput_C, IMC_Hotbar) == 816, "Offset mismatch for UB_ControllerComp_CoreInput_C::IMC_Hotbar");
static_assert(offsetof(UB_ControllerComp_CoreInput_C, IA_HotbarSlots) == 888, "Offset mismatch for UB_ControllerComp_CoreInput_C::IA_HotbarSlots");
static_assert(offsetof(UB_ControllerComp_CoreInput_C, IA_NextHotbarSlot) == 904, "Offset mismatch for UB_ControllerComp_CoreInput_C::IA_NextHotbarSlot");
static_assert(offsetof(UB_ControllerComp_CoreInput_C, IA_PreviousHotbarSlot) == 944, "Offset mismatch for UB_ControllerComp_CoreInput_C::IA_PreviousHotbarSlot");
static_assert(offsetof(UB_ControllerComp_CoreInput_C, bEnableHotbarEnhancedInputs) == 984, "Offset mismatch for UB_ControllerComp_CoreInput_C::bEnableHotbarEnhancedInputs");
static_assert(offsetof(UB_ControllerComp_CoreInput_C, OnCoreInputAssetsReadyForUse) == 992, "Offset mismatch for UB_ControllerComp_CoreInput_C::OnCoreInputAssetsReadyForUse");

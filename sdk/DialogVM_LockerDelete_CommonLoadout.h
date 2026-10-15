/**
 * decamp dumper generated SDK
 * Package: /MyLoadout/Assets/Data/DialogVM_LockerDelete_CommonLoadout
 */
#pragma once
#include "Basic.h"

// /MyLoadout/Assets/Data/DialogVM_LockerDelete_CommonLoadout.DialogVM_LockerDelete_CommonLoadout_C
// Kind: BlueprintGeneratedClass; super: UIKitDialogViewModel
class UDialogVM_LockerDelete_CommonLoadout_C
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t DialogTitle[0x10]; // 0x0078 (Size: 0x10, Type: TextProperty)
    void* DialogTitleImage; // 0x0088 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t DialogInfoText[0x10]; // 0x0090 (Size: 0x10, Type: TextProperty)
    std::uint8_t DialogFooterText[0x10]; // 0x00A0 (Size: 0x10, Type: TextProperty)
    void* DialogImage; // 0x00B0 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Buttons; // 0x00B8 (Size: 0x10, Type: ArrayProperty)
    float DisplayTime; // 0x00C8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00CC
    void* ShowSound; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bDeactivationRequested; // 0x00D8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UDialogVM_LockerDelete_CommonLoadout_C, DialogTitle) == 120, "Offset mismatch for UDialogVM_LockerDelete_CommonLoadout_C::DialogTitle");
static_assert(offsetof(UDialogVM_LockerDelete_CommonLoadout_C, DialogTitleImage) == 136, "Offset mismatch for UDialogVM_LockerDelete_CommonLoadout_C::DialogTitleImage");
static_assert(offsetof(UDialogVM_LockerDelete_CommonLoadout_C, DialogInfoText) == 144, "Offset mismatch for UDialogVM_LockerDelete_CommonLoadout_C::DialogInfoText");
static_assert(offsetof(UDialogVM_LockerDelete_CommonLoadout_C, DialogFooterText) == 160, "Offset mismatch for UDialogVM_LockerDelete_CommonLoadout_C::DialogFooterText");
static_assert(offsetof(UDialogVM_LockerDelete_CommonLoadout_C, DialogImage) == 176, "Offset mismatch for UDialogVM_LockerDelete_CommonLoadout_C::DialogImage");
static_assert(offsetof(UDialogVM_LockerDelete_CommonLoadout_C, Buttons) == 184, "Offset mismatch for UDialogVM_LockerDelete_CommonLoadout_C::Buttons");
static_assert(offsetof(UDialogVM_LockerDelete_CommonLoadout_C, DisplayTime) == 200, "Offset mismatch for UDialogVM_LockerDelete_CommonLoadout_C::DisplayTime");
static_assert(offsetof(UDialogVM_LockerDelete_CommonLoadout_C, ShowSound) == 208, "Offset mismatch for UDialogVM_LockerDelete_CommonLoadout_C::ShowSound");
static_assert(offsetof(UDialogVM_LockerDelete_CommonLoadout_C, bDeactivationRequested) == 216, "Offset mismatch for UDialogVM_LockerDelete_CommonLoadout_C::bDeactivationRequested");

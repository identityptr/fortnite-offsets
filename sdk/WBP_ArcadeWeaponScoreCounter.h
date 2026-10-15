/**
 * decamp dumper generated SDK
 * Package: /ArcadeWeaponGameplay/UI/Widgets/WBP_ArcadeWeaponScoreCounter
 */
#pragma once
#include "Basic.h"

// /ArcadeWeaponGameplay/UI/Widgets/WBP_ArcadeWeaponScoreCounter.WBP_ArcadeWeaponScoreCounter_C
// Kind: WidgetBlueprintGeneratedClass; super: UserWidget
class UWBP_ArcadeWeaponScoreCounter_C
{
public:
    std::uint8_t Pad_0000[0x308]; // 0x0000
    std::uint8_t UberGraphFrame[0x38]; // 0x0308 (Size: 0x38, Type: StructProperty)
    void* DigitsContainer; // 0x0340 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Elements; // 0x0348 (Size: 0x10, Type: ArrayProperty)
    std::int32_t DigitsToRepresent; // 0x0358 (Size: 0x4, Type: IntProperty)
    std::uint8_t AutoManageDigitsCount; // 0x035C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UWBP_ArcadeWeaponScoreCounter_C, UberGraphFrame) == 776, "Offset mismatch for UWBP_ArcadeWeaponScoreCounter_C::UberGraphFrame");
static_assert(offsetof(UWBP_ArcadeWeaponScoreCounter_C, DigitsContainer) == 832, "Offset mismatch for UWBP_ArcadeWeaponScoreCounter_C::DigitsContainer");
static_assert(offsetof(UWBP_ArcadeWeaponScoreCounter_C, Elements) == 840, "Offset mismatch for UWBP_ArcadeWeaponScoreCounter_C::Elements");
static_assert(offsetof(UWBP_ArcadeWeaponScoreCounter_C, DigitsToRepresent) == 856, "Offset mismatch for UWBP_ArcadeWeaponScoreCounter_C::DigitsToRepresent");
static_assert(offsetof(UWBP_ArcadeWeaponScoreCounter_C, AutoManageDigitsCount) == 860, "Offset mismatch for UWBP_ArcadeWeaponScoreCounter_C::AutoManageDigitsCount");

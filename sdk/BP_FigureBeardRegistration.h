/**
 * decamp dumper generated SDK
 * Package: /FigureCharacter/Rig/Data/BeardRegistration/BP_FigureBeardRegistration
 */
#pragma once
#include "Basic.h"

// /FigureCharacter/Rig/Data/BeardRegistration/BP_FigureBeardRegistration.BP_FigureBeardRegistration_C
// Kind: BlueprintGeneratedClass; super: PrimaryDataAsset
class UBP_FigureBeardRegistration_C
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> BeardPoses; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> BeardBeanPoses; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> BeardBean; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Beard; // 0x0058 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UBP_FigureBeardRegistration_C, BeardPoses) == 40, "Offset mismatch for UBP_FigureBeardRegistration_C::BeardPoses");
static_assert(offsetof(UBP_FigureBeardRegistration_C, BeardBeanPoses) == 56, "Offset mismatch for UBP_FigureBeardRegistration_C::BeardBeanPoses");
static_assert(offsetof(UBP_FigureBeardRegistration_C, BeardBean) == 72, "Offset mismatch for UBP_FigureBeardRegistration_C::BeardBean");
static_assert(offsetof(UBP_FigureBeardRegistration_C, Beard) == 88, "Offset mismatch for UBP_FigureBeardRegistration_C::Beard");

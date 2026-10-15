/**
 * decamp dumper generated SDK
 * Package: /SparksCosmetics/BP_SparksCosmeticComponent
 */
#pragma once
#include "Basic.h"

// /SparksCosmetics/BP_SparksCosmeticComponent.BP_SparksCosmeticComponent_C
// Kind: BlueprintGeneratedClass; super: SparksCosmeticComponent
class UBP_SparksCosmeticComponent_C
{
public:
    std::uint8_t Pad_0000[0x2D8]; // 0x0000
    std::uint8_t UberGraphFrame[0x10]; // 0x02D8 (Size: 0x10, Type: StructProperty)
    void* DebugWidget; // 0x02E8 (Size: 0x8, Type: ObjectProperty)
    TSoftClassPtr<void> DebugWidgetSoftClass; // 0x02F0 (Size: 0x28, Type: SoftClassProperty)
};

static_assert(offsetof(UBP_SparksCosmeticComponent_C, UberGraphFrame) == 728, "Offset mismatch for UBP_SparksCosmeticComponent_C::UberGraphFrame");
static_assert(offsetof(UBP_SparksCosmeticComponent_C, DebugWidget) == 744, "Offset mismatch for UBP_SparksCosmeticComponent_C::DebugWidget");
static_assert(offsetof(UBP_SparksCosmeticComponent_C, DebugWidgetSoftClass) == 752, "Offset mismatch for UBP_SparksCosmeticComponent_C::DebugWidgetSoftClass");

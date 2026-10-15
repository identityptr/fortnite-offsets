/**
 * decamp dumper generated SDK
 * Package: /PlayerAugments/AugmentSystem/BP_AugmentTableManager_Parent
 */
#pragma once
#include "Basic.h"

// /PlayerAugments/AugmentSystem/BP_AugmentTableManager_Parent.BP_AugmentTableManager_Parent_C
// Kind: BlueprintGeneratedClass; super: FortGamestateComponent_AugmentTableManager
class UBP_AugmentTableManager_Parent_C
{
public:
    std::uint8_t Pad_0000[0xF0]; // 0x0000
    std::uint8_t DataRegistryType_BaseWeights[0x4]; // 0x00F0 (Size: 0x4, Type: StructProperty)
    std::uint8_t DataRegistryType_WeightModifiers[0x4]; // 0x00F4 (Size: 0x4, Type: StructProperty)
    std::uint8_t Enabled[0x1]; // 0x00F8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UBP_AugmentTableManager_Parent_C, DataRegistryType_BaseWeights) == 240, "Offset mismatch for UBP_AugmentTableManager_Parent_C::DataRegistryType_BaseWeights");
static_assert(offsetof(UBP_AugmentTableManager_Parent_C, DataRegistryType_WeightModifiers) == 244, "Offset mismatch for UBP_AugmentTableManager_Parent_C::DataRegistryType_WeightModifiers");
static_assert(offsetof(UBP_AugmentTableManager_Parent_C, Enabled) == 248, "Offset mismatch for UBP_AugmentTableManager_Parent_C::Enabled");

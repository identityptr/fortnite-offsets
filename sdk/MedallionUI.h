/**
 * decamp dumper generated SDK
 * Package: /Script/MedallionUI
 */
#pragma once
#include "Basic.h"

// /Script/MedallionUI.AthenaInventoryGroupMedallion
// Kind: Class; super: AthenaInventoryGroupBase
class UAthenaInventoryGroupMedallion
{
public:
    std::uint8_t Pad_0000[0x3B0]; // 0x0000
    std::uint8_t MedallionGameplayTag[0x4]; // 0x03B0 (Size: 0x4, Type: StructProperty)
    std::uint8_t ExclusionTag[0x1]; // 0x03B4 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UAthenaInventoryGroupMedallion, MedallionGameplayTag) == 944, "Offset mismatch for UAthenaInventoryGroupMedallion::MedallionGameplayTag");
static_assert(offsetof(UAthenaInventoryGroupMedallion, ExclusionTag) == 948, "Offset mismatch for UAthenaInventoryGroupMedallion::ExclusionTag");

// /Script/MedallionUI.AthenaInventoryGroupMinorMedallion
// Kind: Class; super: AthenaInventoryGroupMedallion
class UAthenaInventoryGroupMinorMedallion
{
public:
    std::uint8_t Pad_0000[0x3B0]; // 0x0000
    std::uint8_t MedallionGameplayTag[0x4]; // 0x03B0 (Size: 0x4, Type: StructProperty)
    std::uint8_t ExclusionTag[0x1]; // 0x03B4 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UAthenaInventoryGroupMinorMedallion, MedallionGameplayTag) == 944, "Offset mismatch for UAthenaInventoryGroupMinorMedallion::MedallionGameplayTag");
static_assert(offsetof(UAthenaInventoryGroupMinorMedallion, ExclusionTag) == 948, "Offset mismatch for UAthenaInventoryGroupMinorMedallion::ExclusionTag");

// /Script/MedallionUI.MedallionsInfoWidget
// Kind: Class; super: FortHUDElementWidget
class UMedallionsInfoWidget
{
public:
    std::uint8_t Pad_0000[0x378]; // 0x0000
    std::uint8_t MedallionTag[0x1]; // 0x0378 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMedallionsInfoWidget, MedallionTag) == 888, "Offset mismatch for UMedallionsInfoWidget::MedallionTag");

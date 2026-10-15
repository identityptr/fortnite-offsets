/**
 * decamp dumper generated SDK
 * Package: /Script/SharedWeaponAnimsRuntime
 */
#pragma once
#include "Basic.h"

// /Script/SharedWeaponAnimsRuntime.ChapWormChooserData
// Kind: Class; super: FortItemChooserData
class UChapWormChooserData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bIsOverpower; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0029
    std::uint8_t OPTagName[0x1]; // 0x002C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UChapWormChooserData, bIsOverpower) == 40, "Offset mismatch for UChapWormChooserData::bIsOverpower");
static_assert(offsetof(UChapWormChooserData, OPTagName) == 44, "Offset mismatch for UChapWormChooserData::OPTagName");

// /Script/SharedWeaponAnimsRuntime.DualWieldableChooserData
// Kind: Class; super: FortItemChooserData
class UDualWieldableChooserData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bPlaySecondaryTargeting; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPlayPrimaryTargeting; // 0x0029 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsRelaxedLevel1; // 0x002A (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UDualWieldableChooserData, bPlaySecondaryTargeting) == 40, "Offset mismatch for UDualWieldableChooserData::bPlaySecondaryTargeting");
static_assert(offsetof(UDualWieldableChooserData, bPlayPrimaryTargeting) == 41, "Offset mismatch for UDualWieldableChooserData::bPlayPrimaryTargeting");
static_assert(offsetof(UDualWieldableChooserData, bIsRelaxedLevel1) == 42, "Offset mismatch for UDualWieldableChooserData::bIsRelaxedLevel1");

// /Script/SharedWeaponAnimsRuntime.FlexLegendChooserData
// Kind: Class; super: FortItemChooserData
class UFlexLegendChooserData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bIsTargetingCustom; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPlayUpperBodyTargetingCustom; // 0x0029 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFlexLegendChooserData, bIsTargetingCustom) == 40, "Offset mismatch for UFlexLegendChooserData::bIsTargetingCustom");
static_assert(offsetof(UFlexLegendChooserData, bPlayUpperBodyTargetingCustom) == 41, "Offset mismatch for UFlexLegendChooserData::bPlayUpperBodyTargetingCustom");

// /Script/SharedWeaponAnimsRuntime.RATTPistolChooserData
// Kind: Class; super: FortItemChooserData
class URATTPistolChooserData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bPlayUpperBodyTargetingCustom; // 0x0028 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(URATTPistolChooserData, bPlayUpperBodyTargetingCustom) == 40, "Offset mismatch for URATTPistolChooserData::bPlayUpperBodyTargetingCustom");

// /Script/SharedWeaponAnimsRuntime.VividRazorLayerAnimInstance
// Kind: Class; super: FortPlayerAnimInstanceProxy
class UVividRazorLayerAnimInstance
{
public:
    std::uint8_t Pad_0000[0x1170]; // 0x0000
    float FiringPoseDuration; // 0x1170 (Size: 0x4, Type: FloatProperty)
    float FirePoseRefreshDuration; // 0x1174 (Size: 0x4, Type: FloatProperty)
    std::uint8_t DualWieldableReloadBothHandsMontage[0x20]; // 0x1178 (Size: 0x20, Type: SoftObjectProperty)
    float ReloadPlayRate; // 0x1198 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsPrimaryReloadStart; // 0x119C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsSecondaryReloadStart; // 0x119D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsReloadSingle; // 0x119E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsReloadBoth; // 0x119F (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsReloadBothSingle; // 0x11A0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsEarlySecondaryReloadBlendOut; // 0x11A1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsEarlyPrimaryReloadBlendOut; // 0x11A2 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsPrimaryReloadOnly; // 0x11A3 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsSecondaryReloadOnly; // 0x11A4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPlayPrimaryTargeting; // 0x11A5 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPlaySecondaryTargeting; // 0x11A6 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsPrimaryReload; // 0x11A7 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsSecondaryReload; // 0x11A8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UVividRazorLayerAnimInstance, FiringPoseDuration) == 4464, "Offset mismatch for UVividRazorLayerAnimInstance::FiringPoseDuration");
static_assert(offsetof(UVividRazorLayerAnimInstance, FirePoseRefreshDuration) == 4468, "Offset mismatch for UVividRazorLayerAnimInstance::FirePoseRefreshDuration");
static_assert(offsetof(UVividRazorLayerAnimInstance, DualWieldableReloadBothHandsMontage) == 4472, "Offset mismatch for UVividRazorLayerAnimInstance::DualWieldableReloadBothHandsMontage");
static_assert(offsetof(UVividRazorLayerAnimInstance, ReloadPlayRate) == 4504, "Offset mismatch for UVividRazorLayerAnimInstance::ReloadPlayRate");
static_assert(offsetof(UVividRazorLayerAnimInstance, bIsPrimaryReloadStart) == 4508, "Offset mismatch for UVividRazorLayerAnimInstance::bIsPrimaryReloadStart");
static_assert(offsetof(UVividRazorLayerAnimInstance, bIsSecondaryReloadStart) == 4509, "Offset mismatch for UVividRazorLayerAnimInstance::bIsSecondaryReloadStart");
static_assert(offsetof(UVividRazorLayerAnimInstance, bIsReloadSingle) == 4510, "Offset mismatch for UVividRazorLayerAnimInstance::bIsReloadSingle");
static_assert(offsetof(UVividRazorLayerAnimInstance, bIsReloadBoth) == 4511, "Offset mismatch for UVividRazorLayerAnimInstance::bIsReloadBoth");
static_assert(offsetof(UVividRazorLayerAnimInstance, bIsReloadBothSingle) == 4512, "Offset mismatch for UVividRazorLayerAnimInstance::bIsReloadBothSingle");
static_assert(offsetof(UVividRazorLayerAnimInstance, bIsEarlySecondaryReloadBlendOut) == 4513, "Offset mismatch for UVividRazorLayerAnimInstance::bIsEarlySecondaryReloadBlendOut");
static_assert(offsetof(UVividRazorLayerAnimInstance, bIsEarlyPrimaryReloadBlendOut) == 4514, "Offset mismatch for UVividRazorLayerAnimInstance::bIsEarlyPrimaryReloadBlendOut");
static_assert(offsetof(UVividRazorLayerAnimInstance, bIsPrimaryReloadOnly) == 4515, "Offset mismatch for UVividRazorLayerAnimInstance::bIsPrimaryReloadOnly");
static_assert(offsetof(UVividRazorLayerAnimInstance, bIsSecondaryReloadOnly) == 4516, "Offset mismatch for UVividRazorLayerAnimInstance::bIsSecondaryReloadOnly");
static_assert(offsetof(UVividRazorLayerAnimInstance, bPlayPrimaryTargeting) == 4517, "Offset mismatch for UVividRazorLayerAnimInstance::bPlayPrimaryTargeting");
static_assert(offsetof(UVividRazorLayerAnimInstance, bPlaySecondaryTargeting) == 4518, "Offset mismatch for UVividRazorLayerAnimInstance::bPlaySecondaryTargeting");
static_assert(offsetof(UVividRazorLayerAnimInstance, bIsPrimaryReload) == 4519, "Offset mismatch for UVividRazorLayerAnimInstance::bIsPrimaryReload");
static_assert(offsetof(UVividRazorLayerAnimInstance, bIsSecondaryReload) == 4520, "Offset mismatch for UVividRazorLayerAnimInstance::bIsSecondaryReload");

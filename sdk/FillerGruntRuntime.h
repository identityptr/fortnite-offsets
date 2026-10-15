/**
 * decamp dumper generated SDK
 * Package: /Script/FillerGruntRuntime
 */
#pragma once
#include "Basic.h"

// /Script/FillerGruntRuntime.FillerGruntPistolLayerAnimInstance
// Kind: Class; super: FortPlayerAnimInstanceProxy
class UFillerGruntPistolLayerAnimInstance
{
public:
    std::uint8_t Pad_0000[0x1170]; // 0x0000
    std::uint8_t PlayerAnimAssetsOverride[0x10]; // 0x1170 (Size: 0x10, Type: StructProperty)
    std::uint8_t bInFriendshipBubble; // 0x1180 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFillerGruntPistolLayerAnimInstance, PlayerAnimAssetsOverride) == 4464, "Offset mismatch for UFillerGruntPistolLayerAnimInstance::PlayerAnimAssetsOverride");
static_assert(offsetof(UFillerGruntPistolLayerAnimInstance, bInFriendshipBubble) == 4480, "Offset mismatch for UFillerGruntPistolLayerAnimInstance::bInFriendshipBubble");

// /Script/FillerGruntRuntime.FortGameplayAbility_MagThrowTargetingHandler
// Kind: Class; super: FortGameplayAbility
class UFortGameplayAbility_MagThrowTargetingHandler
{
public:
    std::uint8_t Pad_0000[0xB20]; // 0x0000
    std::uint8_t TargetSelectionApplicationTag[0x4]; // 0x0B20 (Size: 0x4, Type: StructProperty)
    std::uint8_t ValidTargetTag[0x4]; // 0x0B24 (Size: 0x4, Type: StructProperty)
    std::uint8_t SpawnRightOffset[0x30]; // 0x0B28 (Size: 0x30, Type: StructProperty)
    std::uint8_t TargetingRange[0x30]; // 0x0B58 (Size: 0x30, Type: StructProperty)
    std::uint8_t TargetingConePitch[0x30]; // 0x0B88 (Size: 0x30, Type: StructProperty)
    std::uint8_t TargetingConeYaw[0x30]; // 0x0BB8 (Size: 0x30, Type: StructProperty)
    std::uint8_t SpawnCrouchedOffset[0x30]; // 0x0BE8 (Size: 0x30, Type: StructProperty)
    std::uint8_t SpawnStandingOffset[0x30]; // 0x0C18 (Size: 0x30, Type: StructProperty)
    std::uint8_t SpawnVehicleOffset[0x30]; // 0x0C48 (Size: 0x30, Type: StructProperty)
    std::uint8_t LOSCheck_Vehicle_High[0x30]; // 0x0C78 (Size: 0x30, Type: StructProperty)
    std::uint8_t LOSCheck_Vehicle_Low[0x30]; // 0x0CA8 (Size: 0x30, Type: StructProperty)
    std::uint8_t LOSCheck_Standing_High[0x30]; // 0x0CD8 (Size: 0x30, Type: StructProperty)
    std::uint8_t LOSCheck_Standing_Low[0x30]; // 0x0D08 (Size: 0x30, Type: StructProperty)
    std::uint8_t LOSCheck_Crouching_High[0x30]; // 0x0D38 (Size: 0x30, Type: StructProperty)
    std::uint8_t LOSCheck_Crouching_Low[0x30]; // 0x0D68 (Size: 0x30, Type: StructProperty)
    std::uint8_t LOSCheck_DBNO_High[0x30]; // 0x0D98 (Size: 0x30, Type: StructProperty)
    std::uint8_t LOSCheck_DBNO_Low[0x30]; // 0x0DC8 (Size: 0x30, Type: StructProperty)
    std::uint8_t SweepChannel; // 0x0DF8 (Size: 0x1, Type: ByteProperty)
    std::uint8_t TraceChannel; // 0x0DF9 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x6]; // 0x0DFA
    std::uint8_t TargetFilter[0x1]; // 0x0E00 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortGameplayAbility_MagThrowTargetingHandler, TargetSelectionApplicationTag) == 2848, "Offset mismatch for UFortGameplayAbility_MagThrowTargetingHandler::TargetSelectionApplicationTag");
static_assert(offsetof(UFortGameplayAbility_MagThrowTargetingHandler, ValidTargetTag) == 2852, "Offset mismatch for UFortGameplayAbility_MagThrowTargetingHandler::ValidTargetTag");
static_assert(offsetof(UFortGameplayAbility_MagThrowTargetingHandler, SpawnRightOffset) == 2856, "Offset mismatch for UFortGameplayAbility_MagThrowTargetingHandler::SpawnRightOffset");
static_assert(offsetof(UFortGameplayAbility_MagThrowTargetingHandler, TargetingRange) == 2904, "Offset mismatch for UFortGameplayAbility_MagThrowTargetingHandler::TargetingRange");
static_assert(offsetof(UFortGameplayAbility_MagThrowTargetingHandler, TargetingConePitch) == 2952, "Offset mismatch for UFortGameplayAbility_MagThrowTargetingHandler::TargetingConePitch");
static_assert(offsetof(UFortGameplayAbility_MagThrowTargetingHandler, TargetingConeYaw) == 3000, "Offset mismatch for UFortGameplayAbility_MagThrowTargetingHandler::TargetingConeYaw");
static_assert(offsetof(UFortGameplayAbility_MagThrowTargetingHandler, SpawnCrouchedOffset) == 3048, "Offset mismatch for UFortGameplayAbility_MagThrowTargetingHandler::SpawnCrouchedOffset");
static_assert(offsetof(UFortGameplayAbility_MagThrowTargetingHandler, SpawnStandingOffset) == 3096, "Offset mismatch for UFortGameplayAbility_MagThrowTargetingHandler::SpawnStandingOffset");
static_assert(offsetof(UFortGameplayAbility_MagThrowTargetingHandler, SpawnVehicleOffset) == 3144, "Offset mismatch for UFortGameplayAbility_MagThrowTargetingHandler::SpawnVehicleOffset");
static_assert(offsetof(UFortGameplayAbility_MagThrowTargetingHandler, LOSCheck_Vehicle_High) == 3192, "Offset mismatch for UFortGameplayAbility_MagThrowTargetingHandler::LOSCheck_Vehicle_High");
static_assert(offsetof(UFortGameplayAbility_MagThrowTargetingHandler, LOSCheck_Vehicle_Low) == 3240, "Offset mismatch for UFortGameplayAbility_MagThrowTargetingHandler::LOSCheck_Vehicle_Low");
static_assert(offsetof(UFortGameplayAbility_MagThrowTargetingHandler, LOSCheck_Standing_High) == 3288, "Offset mismatch for UFortGameplayAbility_MagThrowTargetingHandler::LOSCheck_Standing_High");
static_assert(offsetof(UFortGameplayAbility_MagThrowTargetingHandler, LOSCheck_Standing_Low) == 3336, "Offset mismatch for UFortGameplayAbility_MagThrowTargetingHandler::LOSCheck_Standing_Low");
static_assert(offsetof(UFortGameplayAbility_MagThrowTargetingHandler, LOSCheck_Crouching_High) == 3384, "Offset mismatch for UFortGameplayAbility_MagThrowTargetingHandler::LOSCheck_Crouching_High");
static_assert(offsetof(UFortGameplayAbility_MagThrowTargetingHandler, LOSCheck_Crouching_Low) == 3432, "Offset mismatch for UFortGameplayAbility_MagThrowTargetingHandler::LOSCheck_Crouching_Low");
static_assert(offsetof(UFortGameplayAbility_MagThrowTargetingHandler, LOSCheck_DBNO_High) == 3480, "Offset mismatch for UFortGameplayAbility_MagThrowTargetingHandler::LOSCheck_DBNO_High");
static_assert(offsetof(UFortGameplayAbility_MagThrowTargetingHandler, LOSCheck_DBNO_Low) == 3528, "Offset mismatch for UFortGameplayAbility_MagThrowTargetingHandler::LOSCheck_DBNO_Low");
static_assert(offsetof(UFortGameplayAbility_MagThrowTargetingHandler, SweepChannel) == 3576, "Offset mismatch for UFortGameplayAbility_MagThrowTargetingHandler::SweepChannel");
static_assert(offsetof(UFortGameplayAbility_MagThrowTargetingHandler, TraceChannel) == 3577, "Offset mismatch for UFortGameplayAbility_MagThrowTargetingHandler::TraceChannel");
static_assert(offsetof(UFortGameplayAbility_MagThrowTargetingHandler, TargetFilter) == 3584, "Offset mismatch for UFortGameplayAbility_MagThrowTargetingHandler::TargetFilter");

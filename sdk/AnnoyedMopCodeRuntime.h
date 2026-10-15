/**
 * decamp dumper generated SDK
 * Package: /Script/AnnoyedMopCodeRuntime
 */
#pragma once
#include "Basic.h"

// /Script/AnnoyedMopCodeRuntime.AnnoyedMopPlayerAnimInstance
// Kind: Class; super: FortPlayerAnimInstanceProxy
class UAnnoyedMopPlayerAnimInstance
{
public:
    std::uint8_t Pad_0000[0x1170]; // 0x0000
    std::uint8_t bIsActionInput; // 0x1170 (Size: 0x1, Type: BoolProperty)
    // 0x1170 BoolProperty bIsCombo04 (shared storage)
    // 0x1170 BoolProperty bIsInAirAttack (shared storage)
    // 0x1170 BoolProperty bIsInAirAttackLanding (shared storage)
    // 0x1170 BoolProperty bIsJumpAOELand (shared storage)
    // 0x1170 BoolProperty bIsJumpAOEStart (shared storage)
    std::uint8_t Pad_0001[0x3]; // 0x1171
    float Combo04AOAlpha; // 0x1174 (Size: 0x4, Type: FloatProperty)
    std::uint8_t CurveName_UserCurve01[0x4]; // 0x1178 (Size: 0x4, Type: NameProperty)
    std::uint8_t CurveName_UserCurve02[0x4]; // 0x117C (Size: 0x4, Type: NameProperty)
    FString MontageName_AnnoyedMop_InAirAttack_M; // 0x1180 (Size: 0x10, Type: StrProperty)
    FString MontageName_Combo_04; // 0x1190 (Size: 0x10, Type: StrProperty)
    std::uint8_t Granted_Athena_Power_ActivePower_IsActive_Tag[0x4]; // 0x11A0 (Size: 0x4, Type: StructProperty)
    std::uint8_t MovementMode_Falling_Tag[0x1]; // 0x11A4 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UAnnoyedMopPlayerAnimInstance, bIsActionInput) == 4464, "Offset mismatch for UAnnoyedMopPlayerAnimInstance::bIsActionInput");
static_assert(offsetof(UAnnoyedMopPlayerAnimInstance, Combo04AOAlpha) == 4468, "Offset mismatch for UAnnoyedMopPlayerAnimInstance::Combo04AOAlpha");
static_assert(offsetof(UAnnoyedMopPlayerAnimInstance, CurveName_UserCurve01) == 4472, "Offset mismatch for UAnnoyedMopPlayerAnimInstance::CurveName_UserCurve01");
static_assert(offsetof(UAnnoyedMopPlayerAnimInstance, CurveName_UserCurve02) == 4476, "Offset mismatch for UAnnoyedMopPlayerAnimInstance::CurveName_UserCurve02");
static_assert(offsetof(UAnnoyedMopPlayerAnimInstance, MontageName_AnnoyedMop_InAirAttack_M) == 4480, "Offset mismatch for UAnnoyedMopPlayerAnimInstance::MontageName_AnnoyedMop_InAirAttack_M");
static_assert(offsetof(UAnnoyedMopPlayerAnimInstance, MontageName_Combo_04) == 4496, "Offset mismatch for UAnnoyedMopPlayerAnimInstance::MontageName_Combo_04");
static_assert(offsetof(UAnnoyedMopPlayerAnimInstance, Granted_Athena_Power_ActivePower_IsActive_Tag) == 4512, "Offset mismatch for UAnnoyedMopPlayerAnimInstance::Granted_Athena_Power_ActivePower_IsActive_Tag");
static_assert(offsetof(UAnnoyedMopPlayerAnimInstance, MovementMode_Falling_Tag) == 4516, "Offset mismatch for UAnnoyedMopPlayerAnimInstance::MovementMode_Falling_Tag");

// /Script/AnnoyedMopCodeRuntime.AnnoyedMopProjectileComponent
// Kind: Class; super: FortProjectileSegmentedCollisionComponent
class UAnnoyedMopProjectileComponent
{
public:
    std::uint8_t Pad_0000[0x1A0]; // 0x0000
    float CurrentScale; // 0x01A0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x01A4
    TArray<void*> UnscaledCollisionSegmentData; // 0x01A8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UAnnoyedMopProjectileComponent, CurrentScale) == 416, "Offset mismatch for UAnnoyedMopProjectileComponent::CurrentScale");
static_assert(offsetof(UAnnoyedMopProjectileComponent, UnscaledCollisionSegmentData) == 424, "Offset mismatch for UAnnoyedMopProjectileComponent::UnscaledCollisionSegmentData");

// /Script/AnnoyedMopCodeRuntime.FortProjectileAnnoyedMop
// Kind: Class; super: FortProjectileBase
class UFortProjectileAnnoyedMop
{
public:
    std::uint8_t Pad_0000[0xAD8]; // 0x0000
    float CurrentScale; // 0x0AD8 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortProjectileAnnoyedMop, CurrentScale) == 2776, "Offset mismatch for UFortProjectileAnnoyedMop::CurrentScale");

// /Script/AnnoyedMopCodeRuntime.FortProjectileCollisionSegment
// Kind: Class; super: CapsuleComponent
class UFortProjectileCollisionSegment
{
public:
    std::uint8_t Pad_0000[0x590]; // 0x0000
    float CapsuleHalfHeight; // 0x0590 (Size: 0x4, Type: FloatProperty)
    float CapsuleRadius; // 0x0594 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortProjectileCollisionSegment, CapsuleHalfHeight) == 1424, "Offset mismatch for UFortProjectileCollisionSegment::CapsuleHalfHeight");
static_assert(offsetof(UFortProjectileCollisionSegment, CapsuleRadius) == 1428, "Offset mismatch for UFortProjectileCollisionSegment::CapsuleRadius");

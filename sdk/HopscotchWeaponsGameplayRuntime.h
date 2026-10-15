/**
 * decamp dumper generated SDK
 * Package: /Script/HopscotchWeaponsGameplayRuntime
 */
#pragma once
#include "Basic.h"

// /Script/HopscotchWeaponsGameplayRuntime.FortGameplayAbility_AppleSunSmall_Passive
// Kind: Class; super: FortGameplayAbility
class UFortGameplayAbility_AppleSunSmall_Passive
{
public:
    std::uint8_t Pad_0000[0xB20]; // 0x0000
    TWeakObjectPtr<void> PlayerPawn; // 0x0B20 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> CharacterMovementComponent; // 0x0B28 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t UpdateIntervalRow[0x28]; // 0x0B30 (Size: 0x28, Type: StructProperty)
    void* CanCrashpadGameplayEffectClass; // 0x0B58 (Size: 0x8, Type: ClassProperty)
    std::uint8_t CanCrashpadGameplayTags[0x20]; // 0x0B60 (Size: 0x20, Type: StructProperty)
    std::uint8_t GliderRedeployTags[0x20]; // 0x0B80 (Size: 0x20, Type: StructProperty)
    float UpdateInterval; // 0x0BA0 (Size: 0x4, Type: FloatProperty)
    float MaxFallVelocity; // 0x0BA4 (Size: 0x4, Type: FloatProperty)
    float CloseToGroundThreshold; // 0x0BA8 (Size: 0x4, Type: FloatProperty)
    float GroundTraceMaxDistance; // 0x0BAC (Size: 0x4, Type: FloatProperty)
    float MaxVelocityJumpPromt; // 0x0BB0 (Size: 0x4, Type: FloatProperty)
    float DefaultMinVelocityJumpPromt; // 0x0BB4 (Size: 0x4, Type: FloatProperty)
    float SwimmingMinVelocityJumpPromt; // 0x0BB8 (Size: 0x4, Type: FloatProperty)
    float CurrentMinVelocityJumpPrompt; // 0x0BBC (Size: 0x4, Type: FloatProperty)
    float DefaultMinTimeSinceGroundedForJumpPrompt; // 0x0BC0 (Size: 0x4, Type: FloatProperty)
    float SwimmingMinTimeSinceGroundedForJumpPrompt; // 0x0BC4 (Size: 0x4, Type: FloatProperty)
    float CurrentMinTimeSinceGroundedForJumpPrompt; // 0x0BC8 (Size: 0x4, Type: FloatProperty)
    float TraceDistanceToGround; // 0x0BCC (Size: 0x4, Type: FloatProperty)
    float TimeSinceGrounded; // 0x0BD0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bCanCrashpadByJumping; // 0x0BD4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPreviousCanCrashpad; // 0x0BD5 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsCloseToGround; // 0x0BD6 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsClambering; // 0x0BD7 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bBlockedTag; // 0x0BD8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bGliderTag; // 0x0BD9 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortGameplayAbility_AppleSunSmall_Passive, PlayerPawn) == 2848, "Offset mismatch for UFortGameplayAbility_AppleSunSmall_Passive::PlayerPawn");
static_assert(offsetof(UFortGameplayAbility_AppleSunSmall_Passive, CharacterMovementComponent) == 2856, "Offset mismatch for UFortGameplayAbility_AppleSunSmall_Passive::CharacterMovementComponent");
static_assert(offsetof(UFortGameplayAbility_AppleSunSmall_Passive, UpdateIntervalRow) == 2864, "Offset mismatch for UFortGameplayAbility_AppleSunSmall_Passive::UpdateIntervalRow");
static_assert(offsetof(UFortGameplayAbility_AppleSunSmall_Passive, CanCrashpadGameplayEffectClass) == 2904, "Offset mismatch for UFortGameplayAbility_AppleSunSmall_Passive::CanCrashpadGameplayEffectClass");
static_assert(offsetof(UFortGameplayAbility_AppleSunSmall_Passive, CanCrashpadGameplayTags) == 2912, "Offset mismatch for UFortGameplayAbility_AppleSunSmall_Passive::CanCrashpadGameplayTags");
static_assert(offsetof(UFortGameplayAbility_AppleSunSmall_Passive, GliderRedeployTags) == 2944, "Offset mismatch for UFortGameplayAbility_AppleSunSmall_Passive::GliderRedeployTags");
static_assert(offsetof(UFortGameplayAbility_AppleSunSmall_Passive, UpdateInterval) == 2976, "Offset mismatch for UFortGameplayAbility_AppleSunSmall_Passive::UpdateInterval");
static_assert(offsetof(UFortGameplayAbility_AppleSunSmall_Passive, MaxFallVelocity) == 2980, "Offset mismatch for UFortGameplayAbility_AppleSunSmall_Passive::MaxFallVelocity");
static_assert(offsetof(UFortGameplayAbility_AppleSunSmall_Passive, CloseToGroundThreshold) == 2984, "Offset mismatch for UFortGameplayAbility_AppleSunSmall_Passive::CloseToGroundThreshold");
static_assert(offsetof(UFortGameplayAbility_AppleSunSmall_Passive, GroundTraceMaxDistance) == 2988, "Offset mismatch for UFortGameplayAbility_AppleSunSmall_Passive::GroundTraceMaxDistance");
static_assert(offsetof(UFortGameplayAbility_AppleSunSmall_Passive, MaxVelocityJumpPromt) == 2992, "Offset mismatch for UFortGameplayAbility_AppleSunSmall_Passive::MaxVelocityJumpPromt");
static_assert(offsetof(UFortGameplayAbility_AppleSunSmall_Passive, DefaultMinVelocityJumpPromt) == 2996, "Offset mismatch for UFortGameplayAbility_AppleSunSmall_Passive::DefaultMinVelocityJumpPromt");
static_assert(offsetof(UFortGameplayAbility_AppleSunSmall_Passive, SwimmingMinVelocityJumpPromt) == 3000, "Offset mismatch for UFortGameplayAbility_AppleSunSmall_Passive::SwimmingMinVelocityJumpPromt");
static_assert(offsetof(UFortGameplayAbility_AppleSunSmall_Passive, CurrentMinVelocityJumpPrompt) == 3004, "Offset mismatch for UFortGameplayAbility_AppleSunSmall_Passive::CurrentMinVelocityJumpPrompt");
static_assert(offsetof(UFortGameplayAbility_AppleSunSmall_Passive, DefaultMinTimeSinceGroundedForJumpPrompt) == 3008, "Offset mismatch for UFortGameplayAbility_AppleSunSmall_Passive::DefaultMinTimeSinceGroundedForJumpPrompt");
static_assert(offsetof(UFortGameplayAbility_AppleSunSmall_Passive, SwimmingMinTimeSinceGroundedForJumpPrompt) == 3012, "Offset mismatch for UFortGameplayAbility_AppleSunSmall_Passive::SwimmingMinTimeSinceGroundedForJumpPrompt");
static_assert(offsetof(UFortGameplayAbility_AppleSunSmall_Passive, CurrentMinTimeSinceGroundedForJumpPrompt) == 3016, "Offset mismatch for UFortGameplayAbility_AppleSunSmall_Passive::CurrentMinTimeSinceGroundedForJumpPrompt");
static_assert(offsetof(UFortGameplayAbility_AppleSunSmall_Passive, TraceDistanceToGround) == 3020, "Offset mismatch for UFortGameplayAbility_AppleSunSmall_Passive::TraceDistanceToGround");
static_assert(offsetof(UFortGameplayAbility_AppleSunSmall_Passive, TimeSinceGrounded) == 3024, "Offset mismatch for UFortGameplayAbility_AppleSunSmall_Passive::TimeSinceGrounded");
static_assert(offsetof(UFortGameplayAbility_AppleSunSmall_Passive, bCanCrashpadByJumping) == 3028, "Offset mismatch for UFortGameplayAbility_AppleSunSmall_Passive::bCanCrashpadByJumping");
static_assert(offsetof(UFortGameplayAbility_AppleSunSmall_Passive, bPreviousCanCrashpad) == 3029, "Offset mismatch for UFortGameplayAbility_AppleSunSmall_Passive::bPreviousCanCrashpad");
static_assert(offsetof(UFortGameplayAbility_AppleSunSmall_Passive, bIsCloseToGround) == 3030, "Offset mismatch for UFortGameplayAbility_AppleSunSmall_Passive::bIsCloseToGround");
static_assert(offsetof(UFortGameplayAbility_AppleSunSmall_Passive, bIsClambering) == 3031, "Offset mismatch for UFortGameplayAbility_AppleSunSmall_Passive::bIsClambering");
static_assert(offsetof(UFortGameplayAbility_AppleSunSmall_Passive, bBlockedTag) == 3032, "Offset mismatch for UFortGameplayAbility_AppleSunSmall_Passive::bBlockedTag");
static_assert(offsetof(UFortGameplayAbility_AppleSunSmall_Passive, bGliderTag) == 3033, "Offset mismatch for UFortGameplayAbility_AppleSunSmall_Passive::bGliderTag");

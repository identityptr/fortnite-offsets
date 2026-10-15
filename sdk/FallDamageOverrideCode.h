/**
 * decamp dumper generated SDK
 * Package: /Script/FallDamageOverrideCode
 */
#pragma once
#include "Basic.h"

// /Script/FallDamageOverrideCode.FortControllerComponent_FallDamageOverride
// Kind: Class; super: FortControllerComponent_DamageLanding
class UFortControllerComponent_FallDamageOverride
{
public:
    std::uint8_t Pad_0000[0x1C8]; // 0x0000
    std::uint8_t FallDamageOverrideEnabled[0x28]; // 0x01C8 (Size: 0x28, Type: StructProperty)
    std::uint8_t EventPushFallDamageLandingTag[0x8]; // 0x01F0 (Size: 0x8, Type: StructProperty)
    void* GEOverrideGlobalFallDamageNoDeath; // 0x01F8 (Size: 0x8, Type: ClassProperty)
    std::uint8_t HF_ApplyGlobalDamageGENoDeath[0x1]; // 0x0200 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortControllerComponent_FallDamageOverride, FallDamageOverrideEnabled) == 456, "Offset mismatch for UFortControllerComponent_FallDamageOverride::FallDamageOverrideEnabled");
static_assert(offsetof(UFortControllerComponent_FallDamageOverride, EventPushFallDamageLandingTag) == 496, "Offset mismatch for UFortControllerComponent_FallDamageOverride::EventPushFallDamageLandingTag");
static_assert(offsetof(UFortControllerComponent_FallDamageOverride, GEOverrideGlobalFallDamageNoDeath) == 504, "Offset mismatch for UFortControllerComponent_FallDamageOverride::GEOverrideGlobalFallDamageNoDeath");
static_assert(offsetof(UFortControllerComponent_FallDamageOverride, HF_ApplyGlobalDamageGENoDeath) == 512, "Offset mismatch for UFortControllerComponent_FallDamageOverride::HF_ApplyGlobalDamageGENoDeath");

// /Script/FallDamageOverrideCode.FortMovementMode_ExtFallDamageOverride
// Kind: Class; super: FortMovementMode_ExtDamageLanding
class UFortMovementMode_ExtFallDamageOverride
{
public:
    std::uint8_t Pad_0000[0x498]; // 0x0000
    std::uint8_t SendEventsPreActivationTags[0x1]; // 0x0498 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortMovementMode_ExtFallDamageOverride, SendEventsPreActivationTags) == 1176, "Offset mismatch for UFortMovementMode_ExtFallDamageOverride::SendEventsPreActivationTags");

// /Script/FallDamageOverrideCode.FortMovementMode_FallDamageOverrideRuntimeData
// Kind: Class; super: FortMovementMode_DamageLandingRuntimeData
class UFortMovementMode_FallDamageOverrideRuntimeData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t LogicID[0x4]; // 0x0028 (Size: 0x4, Type: StructProperty)
    std::uint8_t RuntimeID; // 0x002C (Size: 0x1, Type: ByteProperty)
    std::uint8_t bForceManualActivation; // 0x002D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bForceManualEnd; // 0x002E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bForceManualActivationNetworked; // 0x002F (Size: 0x1, Type: BoolProperty)
    std::uint8_t bForceManualEndNetworked; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t EndReasonFlags; // 0x0031 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UFortMovementMode_FallDamageOverrideRuntimeData, LogicID) == 40, "Offset mismatch for UFortMovementMode_FallDamageOverrideRuntimeData::LogicID");
static_assert(offsetof(UFortMovementMode_FallDamageOverrideRuntimeData, RuntimeID) == 44, "Offset mismatch for UFortMovementMode_FallDamageOverrideRuntimeData::RuntimeID");
static_assert(offsetof(UFortMovementMode_FallDamageOverrideRuntimeData, bForceManualActivation) == 45, "Offset mismatch for UFortMovementMode_FallDamageOverrideRuntimeData::bForceManualActivation");
static_assert(offsetof(UFortMovementMode_FallDamageOverrideRuntimeData, bForceManualEnd) == 46, "Offset mismatch for UFortMovementMode_FallDamageOverrideRuntimeData::bForceManualEnd");
static_assert(offsetof(UFortMovementMode_FallDamageOverrideRuntimeData, bForceManualActivationNetworked) == 47, "Offset mismatch for UFortMovementMode_FallDamageOverrideRuntimeData::bForceManualActivationNetworked");
static_assert(offsetof(UFortMovementMode_FallDamageOverrideRuntimeData, bForceManualEndNetworked) == 48, "Offset mismatch for UFortMovementMode_FallDamageOverrideRuntimeData::bForceManualEndNetworked");
static_assert(offsetof(UFortMovementMode_FallDamageOverrideRuntimeData, EndReasonFlags) == 49, "Offset mismatch for UFortMovementMode_FallDamageOverrideRuntimeData::EndReasonFlags");

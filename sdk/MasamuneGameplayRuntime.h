/**
 * decamp dumper generated SDK
 * Package: /Script/MasamuneGameplayRuntime
 */
#pragma once
#include "Basic.h"

// /Script/MasamuneGameplayRuntime.FirePetalMasamuneLayerAnimInstance
// Kind: Class; super: FortPlayerAnimInstanceProxy
class UFirePetalMasamuneLayerAnimInstance
{
public:
    std::uint8_t Pad_0000[0x1170]; // 0x0000
    std::uint8_t bIsHovering; // 0x1170 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCharging; // 0x1171 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x1172
    float MeleeTwist; // 0x1174 (Size: 0x4, Type: FloatProperty)
    double MeleeTwistAlpha; // 0x1178 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bPlayAirMontage; // 0x1180 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x1181
    float ReturnValueYPitch; // 0x1184 (Size: 0x4, Type: FloatProperty)
    float PitchAlpha; // 0x1188 (Size: 0x4, Type: FloatProperty)
    float BothHandFK; // 0x118C (Size: 0x4, Type: FloatProperty)
    std::uint8_t HoverMMEActiveTagName[0x4]; // 0x1190 (Size: 0x4, Type: StructProperty)
    std::uint8_t ChargingTagName[0x4]; // 0x1194 (Size: 0x4, Type: StructProperty)
    std::uint8_t PlayAirMontageTags[0x20]; // 0x1198 (Size: 0x20, Type: StructProperty)
    std::uint8_t PlayUpperBodyTags[0x1]; // 0x11B8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFirePetalMasamuneLayerAnimInstance, bIsHovering) == 4464, "Offset mismatch for UFirePetalMasamuneLayerAnimInstance::bIsHovering");
static_assert(offsetof(UFirePetalMasamuneLayerAnimInstance, bCharging) == 4465, "Offset mismatch for UFirePetalMasamuneLayerAnimInstance::bCharging");
static_assert(offsetof(UFirePetalMasamuneLayerAnimInstance, MeleeTwist) == 4468, "Offset mismatch for UFirePetalMasamuneLayerAnimInstance::MeleeTwist");
static_assert(offsetof(UFirePetalMasamuneLayerAnimInstance, MeleeTwistAlpha) == 4472, "Offset mismatch for UFirePetalMasamuneLayerAnimInstance::MeleeTwistAlpha");
static_assert(offsetof(UFirePetalMasamuneLayerAnimInstance, bPlayAirMontage) == 4480, "Offset mismatch for UFirePetalMasamuneLayerAnimInstance::bPlayAirMontage");
static_assert(offsetof(UFirePetalMasamuneLayerAnimInstance, ReturnValueYPitch) == 4484, "Offset mismatch for UFirePetalMasamuneLayerAnimInstance::ReturnValueYPitch");
static_assert(offsetof(UFirePetalMasamuneLayerAnimInstance, PitchAlpha) == 4488, "Offset mismatch for UFirePetalMasamuneLayerAnimInstance::PitchAlpha");
static_assert(offsetof(UFirePetalMasamuneLayerAnimInstance, BothHandFK) == 4492, "Offset mismatch for UFirePetalMasamuneLayerAnimInstance::BothHandFK");
static_assert(offsetof(UFirePetalMasamuneLayerAnimInstance, HoverMMEActiveTagName) == 4496, "Offset mismatch for UFirePetalMasamuneLayerAnimInstance::HoverMMEActiveTagName");
static_assert(offsetof(UFirePetalMasamuneLayerAnimInstance, ChargingTagName) == 4500, "Offset mismatch for UFirePetalMasamuneLayerAnimInstance::ChargingTagName");
static_assert(offsetof(UFirePetalMasamuneLayerAnimInstance, PlayAirMontageTags) == 4504, "Offset mismatch for UFirePetalMasamuneLayerAnimInstance::PlayAirMontageTags");
static_assert(offsetof(UFirePetalMasamuneLayerAnimInstance, PlayUpperBodyTags) == 4536, "Offset mismatch for UFirePetalMasamuneLayerAnimInstance::PlayUpperBodyTags");

// /Script/MasamuneGameplayRuntime.FortMovementMode_ExtMasamuneSlowFall
// Kind: Class; super: FortMovementMode_BaseExtLogic
class UFortMovementMode_ExtMasamuneSlowFall
{
public:
    std::uint8_t Pad_0000[0x1B8]; // 0x0000
    std::uint8_t SlowFallGravityZ[0x1]; // 0x01B8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortMovementMode_ExtMasamuneSlowFall, SlowFallGravityZ) == 440, "Offset mismatch for UFortMovementMode_ExtMasamuneSlowFall::SlowFallGravityZ");

// /Script/MasamuneGameplayRuntime.FortMovementMode_ExtMasamuneSlowFallRuntimeData
// Kind: Class; super: FortMovementMode_BaseExtRuntimeData
class UFortMovementMode_ExtMasamuneSlowFallRuntimeData
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

static_assert(offsetof(UFortMovementMode_ExtMasamuneSlowFallRuntimeData, LogicID) == 40, "Offset mismatch for UFortMovementMode_ExtMasamuneSlowFallRuntimeData::LogicID");
static_assert(offsetof(UFortMovementMode_ExtMasamuneSlowFallRuntimeData, RuntimeID) == 44, "Offset mismatch for UFortMovementMode_ExtMasamuneSlowFallRuntimeData::RuntimeID");
static_assert(offsetof(UFortMovementMode_ExtMasamuneSlowFallRuntimeData, bForceManualActivation) == 45, "Offset mismatch for UFortMovementMode_ExtMasamuneSlowFallRuntimeData::bForceManualActivation");
static_assert(offsetof(UFortMovementMode_ExtMasamuneSlowFallRuntimeData, bForceManualEnd) == 46, "Offset mismatch for UFortMovementMode_ExtMasamuneSlowFallRuntimeData::bForceManualEnd");
static_assert(offsetof(UFortMovementMode_ExtMasamuneSlowFallRuntimeData, bForceManualActivationNetworked) == 47, "Offset mismatch for UFortMovementMode_ExtMasamuneSlowFallRuntimeData::bForceManualActivationNetworked");
static_assert(offsetof(UFortMovementMode_ExtMasamuneSlowFallRuntimeData, bForceManualEndNetworked) == 48, "Offset mismatch for UFortMovementMode_ExtMasamuneSlowFallRuntimeData::bForceManualEndNetworked");
static_assert(offsetof(UFortMovementMode_ExtMasamuneSlowFallRuntimeData, EndReasonFlags) == 49, "Offset mismatch for UFortMovementMode_ExtMasamuneSlowFallRuntimeData::EndReasonFlags");

// /Script/MasamuneGameplayRuntime.TyphoonBladeCCPAnimInstance
// Kind: Class; super: CustomCharacterPartAnimInstance
class UTyphoonBladeCCPAnimInstance
{
public:
    std::uint8_t Pad_0000[0x630]; // 0x0000
    std::uint8_t ClothRotator_01[0x18]; // 0x0630 (Size: 0x18, Type: StructProperty)
    std::uint8_t ClothRotator_02[0x18]; // 0x0648 (Size: 0x18, Type: StructProperty)
    std::uint8_t ClothRotator_03[0x1]; // 0x0660 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UTyphoonBladeCCPAnimInstance, ClothRotator_01) == 1584, "Offset mismatch for UTyphoonBladeCCPAnimInstance::ClothRotator_01");
static_assert(offsetof(UTyphoonBladeCCPAnimInstance, ClothRotator_02) == 1608, "Offset mismatch for UTyphoonBladeCCPAnimInstance::ClothRotator_02");
static_assert(offsetof(UTyphoonBladeCCPAnimInstance, ClothRotator_03) == 1632, "Offset mismatch for UTyphoonBladeCCPAnimInstance::ClothRotator_03");

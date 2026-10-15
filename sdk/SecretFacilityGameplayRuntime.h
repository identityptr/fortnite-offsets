/**
 * decamp dumper generated SDK
 * Package: /Script/SecretFacilityGameplayRuntime
 */
#pragma once
#include "Basic.h"

// /Script/SecretFacilityGameplayRuntime.SecretFacilityVortexOverrideParams
// Kind: ScriptStruct; super: none
struct FSecretFacilityVortexOverrideParams
{
public:
    std::uint8_t bOverrideParachuteParams; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    std::uint8_t VortexParachuteControlParamsOverride[0x140]; // 0x0008 (Size: 0x140, Type: StructProperty)
    std::uint8_t bOverridePassiveSkyDivingParams; // 0x0148 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0149
    std::uint8_t VortexSkydivingControlParamsPassive[0x140]; // 0x0150 (Size: 0x140, Type: StructProperty)
    std::uint8_t bOverrideActiveSkyDivingParams; // 0x0290 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0291
    std::uint8_t VortexSkydivingControlParamsActive[0x140]; // 0x0298 (Size: 0x140, Type: StructProperty)
    std::uint8_t bOverrideActiveSkyDivingUpwardParams; // 0x03D8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x7]; // 0x03D9
    std::uint8_t VortexSkydivingControlParamsActiveUpward[0x1]; // 0x03E0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSecretFacilityVortexOverrideParams, bOverrideParachuteParams) == 0, "Offset mismatch for FSecretFacilityVortexOverrideParams::bOverrideParachuteParams");
static_assert(offsetof(FSecretFacilityVortexOverrideParams, VortexParachuteControlParamsOverride) == 8, "Offset mismatch for FSecretFacilityVortexOverrideParams::VortexParachuteControlParamsOverride");
static_assert(offsetof(FSecretFacilityVortexOverrideParams, bOverridePassiveSkyDivingParams) == 328, "Offset mismatch for FSecretFacilityVortexOverrideParams::bOverridePassiveSkyDivingParams");
static_assert(offsetof(FSecretFacilityVortexOverrideParams, VortexSkydivingControlParamsPassive) == 336, "Offset mismatch for FSecretFacilityVortexOverrideParams::VortexSkydivingControlParamsPassive");
static_assert(offsetof(FSecretFacilityVortexOverrideParams, bOverrideActiveSkyDivingParams) == 656, "Offset mismatch for FSecretFacilityVortexOverrideParams::bOverrideActiveSkyDivingParams");
static_assert(offsetof(FSecretFacilityVortexOverrideParams, VortexSkydivingControlParamsActive) == 664, "Offset mismatch for FSecretFacilityVortexOverrideParams::VortexSkydivingControlParamsActive");
static_assert(offsetof(FSecretFacilityVortexOverrideParams, bOverrideActiveSkyDivingUpwardParams) == 984, "Offset mismatch for FSecretFacilityVortexOverrideParams::bOverrideActiveSkyDivingUpwardParams");
static_assert(offsetof(FSecretFacilityVortexOverrideParams, VortexSkydivingControlParamsActiveUpward) == 992, "Offset mismatch for FSecretFacilityVortexOverrideParams::VortexSkydivingControlParamsActiveUpward");

// /Script/SecretFacilityGameplayRuntime.FortGameplayAbility_SecretFacility_InVortex
// Kind: Class; super: FortGameplayAbility
class UFortGameplayAbility_SecretFacility_InVortex
{
public:
    std::uint8_t Pad_0000[0xB20]; // 0x0000
    std::uint8_t VortexOverrideParams[0x1]; // 0x0B20 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortGameplayAbility_SecretFacility_InVortex, VortexOverrideParams) == 2848, "Offset mismatch for UFortGameplayAbility_SecretFacility_InVortex::VortexOverrideParams");

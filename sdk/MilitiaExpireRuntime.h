/**
 * decamp dumper generated SDK
 * Package: /Script/MilitiaExpireRuntime
 */
#pragma once
#include "Basic.h"

// /Script/MilitiaExpireRuntime.FortAthenaMutator_MilitiaExpire
// Kind: Class; super: FortAthenaMutator_GameModeBase
class UFortAthenaMutator_MilitiaExpire
{
public:
    std::uint8_t Pad_0000[0x400]; // 0x0000
    std::uint8_t HF_ShouldBotUseDBNO[0x28]; // 0x0400 (Size: 0x28, Type: StructProperty)
    std::uint8_t AnyReviverTags[0x1]; // 0x0428 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortAthenaMutator_MilitiaExpire, HF_ShouldBotUseDBNO) == 1024, "Offset mismatch for UFortAthenaMutator_MilitiaExpire::HF_ShouldBotUseDBNO");
static_assert(offsetof(UFortAthenaMutator_MilitiaExpire, AnyReviverTags) == 1064, "Offset mismatch for UFortAthenaMutator_MilitiaExpire::AnyReviverTags");

// /Script/MilitiaExpireRuntime.MilitiaExpireAnalyticsLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UMilitiaExpireAnalyticsLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MilitiaExpireRuntime.ReviveKitConsumableAnimInstance
// Kind: Class; super: FortAnimInstance
class UReviveKitConsumableAnimInstance
{
public:
    std::uint8_t Pad_0000[0x450]; // 0x0000
    std::uint8_t bShouldPlaySwimSlot; // 0x0450 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsActivating; // 0x0451 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UReviveKitConsumableAnimInstance, bShouldPlaySwimSlot) == 1104, "Offset mismatch for UReviveKitConsumableAnimInstance::bShouldPlaySwimSlot");
static_assert(offsetof(UReviveKitConsumableAnimInstance, bIsActivating) == 1105, "Offset mismatch for UReviveKitConsumableAnimInstance::bIsActivating");

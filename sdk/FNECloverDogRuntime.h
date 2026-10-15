/**
 * decamp dumper generated SDK
 * Package: /Script/FNECloverDogRuntime
 */
#pragma once
#include "Basic.h"

// /Script/FNECloverDogRuntime.FortCloverDogVehicle
// Kind: Class; super: FortAthenaSKVehicle
class UFortCloverDogVehicle
{
public:
    std::uint8_t Pad_0000[0x2020]; // 0x0000
    void* CacheLoopingFX; // 0x2020 (Size: 0x8, Type: ObjectProperty)
    void* FortJackalVehicleConfigs; // 0x2028 (Size: 0x8, Type: ObjectProperty)
    void* CacheAudioMovement; // 0x2030 (Size: 0x8, Type: ObjectProperty)
    void* CacheAudioWind; // 0x2038 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x4]; // 0x2040
    float PendingJumpCharge; // 0x2044 (Size: 0x4, Type: FloatProperty)
    std::uint8_t SecondaryWeaponMuzzleSocket[0x4]; // 0x2048 (Size: 0x4, Type: NameProperty)
    std::uint8_t bShouldCorrectYaw; // 0x204C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x23]; // 0x204D
    std::uint8_t bLockBodyRotationWhenUsingSecondary; // 0x2070 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSecondaryWeaponModeToggle; // 0x2071 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x6]; // 0x2072
    void* InputActionMove; // 0x2078 (Size: 0x8, Type: ObjectProperty)
    void* InputActionWeaponSwitch; // 0x2080 (Size: 0x8, Type: ObjectProperty)
    void* InputActionShoot; // 0x2088 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortCloverDogVehicle, CacheLoopingFX) == 8224, "Offset mismatch for UFortCloverDogVehicle::CacheLoopingFX");
static_assert(offsetof(UFortCloverDogVehicle, FortJackalVehicleConfigs) == 8232, "Offset mismatch for UFortCloverDogVehicle::FortJackalVehicleConfigs");
static_assert(offsetof(UFortCloverDogVehicle, CacheAudioMovement) == 8240, "Offset mismatch for UFortCloverDogVehicle::CacheAudioMovement");
static_assert(offsetof(UFortCloverDogVehicle, CacheAudioWind) == 8248, "Offset mismatch for UFortCloverDogVehicle::CacheAudioWind");
static_assert(offsetof(UFortCloverDogVehicle, PendingJumpCharge) == 8260, "Offset mismatch for UFortCloverDogVehicle::PendingJumpCharge");
static_assert(offsetof(UFortCloverDogVehicle, SecondaryWeaponMuzzleSocket) == 8264, "Offset mismatch for UFortCloverDogVehicle::SecondaryWeaponMuzzleSocket");
static_assert(offsetof(UFortCloverDogVehicle, bShouldCorrectYaw) == 8268, "Offset mismatch for UFortCloverDogVehicle::bShouldCorrectYaw");
static_assert(offsetof(UFortCloverDogVehicle, bLockBodyRotationWhenUsingSecondary) == 8304, "Offset mismatch for UFortCloverDogVehicle::bLockBodyRotationWhenUsingSecondary");
static_assert(offsetof(UFortCloverDogVehicle, bSecondaryWeaponModeToggle) == 8305, "Offset mismatch for UFortCloverDogVehicle::bSecondaryWeaponModeToggle");
static_assert(offsetof(UFortCloverDogVehicle, InputActionMove) == 8312, "Offset mismatch for UFortCloverDogVehicle::InputActionMove");
static_assert(offsetof(UFortCloverDogVehicle, InputActionWeaponSwitch) == 8320, "Offset mismatch for UFortCloverDogVehicle::InputActionWeaponSwitch");
static_assert(offsetof(UFortCloverDogVehicle, InputActionShoot) == 8328, "Offset mismatch for UFortCloverDogVehicle::InputActionShoot");

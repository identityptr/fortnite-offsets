/**
 * decamp dumper generated SDK
 * Package: /Script/MoonFlaxWarBusRuntime
 */
#pragma once
#include "Basic.h"

// /Script/MoonFlaxWarBusRuntime.MoonFlaxWarBusTurretState
// Kind: ScriptStruct; super: none
struct FMoonFlaxWarBusTurretState
{
public:
    std::uint8_t TurretSocketName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::int32_t TurretSeatIndex; // 0x0004 (Size: 0x4, Type: IntProperty)
    TWeakObjectPtr<void> TurretAudioComponent; // 0x0008 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t TurretUpdateTimerHandle[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::uint8_t LastTurretRotation[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t LastTurretDeltaRotation[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMoonFlaxWarBusTurretState, TurretSocketName) == 0, "Offset mismatch for FMoonFlaxWarBusTurretState::TurretSocketName");
static_assert(offsetof(FMoonFlaxWarBusTurretState, TurretSeatIndex) == 4, "Offset mismatch for FMoonFlaxWarBusTurretState::TurretSeatIndex");
static_assert(offsetof(FMoonFlaxWarBusTurretState, TurretAudioComponent) == 8, "Offset mismatch for FMoonFlaxWarBusTurretState::TurretAudioComponent");
static_assert(offsetof(FMoonFlaxWarBusTurretState, TurretUpdateTimerHandle) == 16, "Offset mismatch for FMoonFlaxWarBusTurretState::TurretUpdateTimerHandle");
static_assert(offsetof(FMoonFlaxWarBusTurretState, LastTurretRotation) == 24, "Offset mismatch for FMoonFlaxWarBusTurretState::LastTurretRotation");
static_assert(offsetof(FMoonFlaxWarBusTurretState, LastTurretDeltaRotation) == 48, "Offset mismatch for FMoonFlaxWarBusTurretState::LastTurretDeltaRotation");

// /Script/MoonFlaxWarBusRuntime.MoonFlaxWarBusTurretAudioManager
// Kind: Class; super: Object
class UMoonFlaxWarBusTurretAudioManager
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* VehicleOwner; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    float WeaponsMovementMinThreshold; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float WeaponsMovementMaxThreshold; // 0x0034 (Size: 0x4, Type: FloatProperty)
    std::uint8_t FrontTurretState[0x40]; // 0x0038 (Size: 0x40, Type: StructProperty)
    std::uint8_t BackTurretState[0x1]; // 0x0078 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMoonFlaxWarBusTurretAudioManager, VehicleOwner) == 40, "Offset mismatch for UMoonFlaxWarBusTurretAudioManager::VehicleOwner");
static_assert(offsetof(UMoonFlaxWarBusTurretAudioManager, WeaponsMovementMinThreshold) == 48, "Offset mismatch for UMoonFlaxWarBusTurretAudioManager::WeaponsMovementMinThreshold");
static_assert(offsetof(UMoonFlaxWarBusTurretAudioManager, WeaponsMovementMaxThreshold) == 52, "Offset mismatch for UMoonFlaxWarBusTurretAudioManager::WeaponsMovementMaxThreshold");
static_assert(offsetof(UMoonFlaxWarBusTurretAudioManager, FrontTurretState) == 56, "Offset mismatch for UMoonFlaxWarBusTurretAudioManager::FrontTurretState");
static_assert(offsetof(UMoonFlaxWarBusTurretAudioManager, BackTurretState) == 120, "Offset mismatch for UMoonFlaxWarBusTurretAudioManager::BackTurretState");

/**
 * decamp dumper generated SDK
 * Package: /Script/VehicleModsRuntime
 */
#pragma once
#include "Basic.h"

// /Script/VehicleModsRuntime.FortVehicleModWeaponMachineGun
// Kind: Class; super: FortWeaponRangedForVehicleMod
class UFortVehicleModWeaponMachineGun
{
public:
    std::uint8_t Pad_0000[0x2AC0]; // 0x0000
    void* ModInstance; // 0x2AC0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t DamageStartBehavior; // 0x2AC8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bFilterTargetsInSameVehicle; // 0x2AC9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x2ACA
    std::uint8_t SeatWithRoofTag[0x1]; // 0x2ACC (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortVehicleModWeaponMachineGun, ModInstance) == 10944, "Offset mismatch for UFortVehicleModWeaponMachineGun::ModInstance");
static_assert(offsetof(UFortVehicleModWeaponMachineGun, DamageStartBehavior) == 10952, "Offset mismatch for UFortVehicleModWeaponMachineGun::DamageStartBehavior");
static_assert(offsetof(UFortVehicleModWeaponMachineGun, bFilterTargetsInSameVehicle) == 10953, "Offset mismatch for UFortVehicleModWeaponMachineGun::bFilterTargetsInSameVehicle");
static_assert(offsetof(UFortVehicleModWeaponMachineGun, SeatWithRoofTag) == 10956, "Offset mismatch for UFortVehicleModWeaponMachineGun::SeatWithRoofTag");

// /Script/VehicleModsRuntime.FortVehicleModWeaponMortar
// Kind: Class; super: FortWeaponRangedForVehicleMod
class UFortVehicleModWeaponMortar
{
public:
    std::uint8_t Pad_0000[0x2AC0]; // 0x0000
    void* ModInstance; // 0x2AC0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t DamageStartBehavior; // 0x2AC8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bFilterTargetsInSameVehicle; // 0x2AC9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x2ACA
    std::uint8_t SeatWithRoofTag[0x1]; // 0x2ACC (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortVehicleModWeaponMortar, ModInstance) == 10944, "Offset mismatch for UFortVehicleModWeaponMortar::ModInstance");
static_assert(offsetof(UFortVehicleModWeaponMortar, DamageStartBehavior) == 10952, "Offset mismatch for UFortVehicleModWeaponMortar::DamageStartBehavior");
static_assert(offsetof(UFortVehicleModWeaponMortar, bFilterTargetsInSameVehicle) == 10953, "Offset mismatch for UFortVehicleModWeaponMortar::bFilterTargetsInSameVehicle");
static_assert(offsetof(UFortVehicleModWeaponMortar, SeatWithRoofTag) == 10956, "Offset mismatch for UFortVehicleModWeaponMortar::SeatWithRoofTag");

// /Script/VehicleModsRuntime.SlinkyVehicleModComponent
// Kind: Class; super: FortVehicleModComponent
class USlinkyVehicleModComponent
{
public:
    std::uint8_t Pad_0000[0x1A8]; // 0x0000
    std::uint8_t SlinkyUI[0x20]; // 0x01A8 (Size: 0x20, Type: StructProperty)
    FName ChargeJumpInputAction; // 0x01C8 (Size: 0x8, Type: NameProperty)
    FText ChargeJumpLabelAppend; // 0x01D0 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(USlinkyVehicleModComponent, SlinkyUI) == 424, "Offset mismatch for USlinkyVehicleModComponent::SlinkyUI");
static_assert(offsetof(USlinkyVehicleModComponent, ChargeJumpInputAction) == 456, "Offset mismatch for USlinkyVehicleModComponent::ChargeJumpInputAction");
static_assert(offsetof(USlinkyVehicleModComponent, ChargeJumpLabelAppend) == 464, "Offset mismatch for USlinkyVehicleModComponent::ChargeJumpLabelAppend");

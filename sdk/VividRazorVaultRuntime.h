/**
 * decamp dumper generated SDK
 * Package: /Script/VividRazorVaultRuntime
 */
#pragma once
#include "Basic.h"

// /Script/VividRazorVaultRuntime.VaultWeakPointConfig
// Kind: ScriptStruct; super: none
struct FVaultWeakPointConfig
{
public:
    std::uint8_t ShapeName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t SocketName[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    void* HitNS; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t LocalLocation[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    std::uint8_t bIsExposed; // 0x0028 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FVaultWeakPointConfig, ShapeName) == 0, "Offset mismatch for FVaultWeakPointConfig::ShapeName");
static_assert(offsetof(FVaultWeakPointConfig, SocketName) == 4, "Offset mismatch for FVaultWeakPointConfig::SocketName");
static_assert(offsetof(FVaultWeakPointConfig, HitNS) == 8, "Offset mismatch for FVaultWeakPointConfig::HitNS");
static_assert(offsetof(FVaultWeakPointConfig, LocalLocation) == 16, "Offset mismatch for FVaultWeakPointConfig::LocalLocation");
static_assert(offsetof(FVaultWeakPointConfig, bIsExposed) == 40, "Offset mismatch for FVaultWeakPointConfig::bIsExposed");

// /Script/VividRazorVaultRuntime.VaultWeakPointDamageInfo
// Kind: ScriptStruct; super: none
struct FVaultWeakPointDamageInfo
{
public:
    TArray<void*> Damages; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    void* DamageCauser; // 0x0010 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FVaultWeakPointDamageInfo, Damages) == 0, "Offset mismatch for FVaultWeakPointDamageInfo::Damages");
static_assert(offsetof(FVaultWeakPointDamageInfo, DamageCauser) == 16, "Offset mismatch for FVaultWeakPointDamageInfo::DamageCauser");

// /Script/VividRazorVaultRuntime.VaultWeakPointRuntime
// Kind: ScriptStruct; super: none
struct FVaultWeakPointRuntime
{
public:
    std::uint8_t ShapeName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    float Health; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::int32_t Generation; // 0x0008 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FVaultWeakPointRuntime, ShapeName) == 0, "Offset mismatch for FVaultWeakPointRuntime::ShapeName");
static_assert(offsetof(FVaultWeakPointRuntime, Health) == 4, "Offset mismatch for FVaultWeakPointRuntime::Health");
static_assert(offsetof(FVaultWeakPointRuntime, Generation) == 8, "Offset mismatch for FVaultWeakPointRuntime::Generation");

// /Script/VividRazorVaultRuntime.VividRazorVaultDoor
// Kind: Class; super: BuildingGameplayActor
class UVividRazorVaultDoor
{
public:
    std::uint8_t Pad_0000[0x920]; // 0x0000
    void* RootMesh; // 0x0920 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bDoorOpened; // 0x0928 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0929
    void* WeakPointHitNS; // 0x0930 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t WeakPointDeathCue[0x8]; // 0x0938 (Size: 0x8, Type: StructProperty)
    TArray<void*> WeakPointConfigs; // 0x0940 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t WeakPointMaxHealth[0x28]; // 0x0950 (Size: 0x28, Type: StructProperty)
    std::uint8_t WeakPointFuzzyDamageRange[0x28]; // 0x0978 (Size: 0x28, Type: StructProperty)
    std::uint8_t MantisWeaponDamageGameplayTag[0x8]; // 0x09A0 (Size: 0x8, Type: StructProperty)
    std::uint8_t WeakPointFuzzyDamageMantisWeaponRange[0x28]; // 0x09A8 (Size: 0x28, Type: StructProperty)
    float WeakPointFuzzyDamageMantisViewDirectionCheckDistance; // 0x09D0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t DoorBoneName[0x4]; // 0x09D4 (Size: 0x4, Type: NameProperty)
    FName DoorShapeName; // 0x09D8 (Size: 0x8, Type: NameProperty)
    TArray<void*> WeakPoints; // 0x09E0 (Size: 0x10, Type: ArrayProperty)
    std::int32_t Generation; // 0x09F0 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UVividRazorVaultDoor, RootMesh) == 2336, "Offset mismatch for UVividRazorVaultDoor::RootMesh");
static_assert(offsetof(UVividRazorVaultDoor, bDoorOpened) == 2344, "Offset mismatch for UVividRazorVaultDoor::bDoorOpened");
static_assert(offsetof(UVividRazorVaultDoor, WeakPointHitNS) == 2352, "Offset mismatch for UVividRazorVaultDoor::WeakPointHitNS");
static_assert(offsetof(UVividRazorVaultDoor, WeakPointDeathCue) == 2360, "Offset mismatch for UVividRazorVaultDoor::WeakPointDeathCue");
static_assert(offsetof(UVividRazorVaultDoor, WeakPointConfigs) == 2368, "Offset mismatch for UVividRazorVaultDoor::WeakPointConfigs");
static_assert(offsetof(UVividRazorVaultDoor, WeakPointMaxHealth) == 2384, "Offset mismatch for UVividRazorVaultDoor::WeakPointMaxHealth");
static_assert(offsetof(UVividRazorVaultDoor, WeakPointFuzzyDamageRange) == 2424, "Offset mismatch for UVividRazorVaultDoor::WeakPointFuzzyDamageRange");
static_assert(offsetof(UVividRazorVaultDoor, MantisWeaponDamageGameplayTag) == 2464, "Offset mismatch for UVividRazorVaultDoor::MantisWeaponDamageGameplayTag");
static_assert(offsetof(UVividRazorVaultDoor, WeakPointFuzzyDamageMantisWeaponRange) == 2472, "Offset mismatch for UVividRazorVaultDoor::WeakPointFuzzyDamageMantisWeaponRange");
static_assert(offsetof(UVividRazorVaultDoor, WeakPointFuzzyDamageMantisViewDirectionCheckDistance) == 2512, "Offset mismatch for UVividRazorVaultDoor::WeakPointFuzzyDamageMantisViewDirectionCheckDistance");
static_assert(offsetof(UVividRazorVaultDoor, DoorBoneName) == 2516, "Offset mismatch for UVividRazorVaultDoor::DoorBoneName");
static_assert(offsetof(UVividRazorVaultDoor, DoorShapeName) == 2520, "Offset mismatch for UVividRazorVaultDoor::DoorShapeName");
static_assert(offsetof(UVividRazorVaultDoor, WeakPoints) == 2528, "Offset mismatch for UVividRazorVaultDoor::WeakPoints");
static_assert(offsetof(UVividRazorVaultDoor, Generation) == 2544, "Offset mismatch for UVividRazorVaultDoor::Generation");

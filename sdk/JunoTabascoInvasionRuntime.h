/**
 * decamp dumper generated SDK
 * Package: /Script/JunoTabascoInvasionRuntime
 */
#pragma once
#include "Basic.h"

// /Script/JunoTabascoInvasionRuntime.JunoEvent_EndedInvasion
// Kind: ScriptStruct; super: none
struct FJunoEvent_EndedInvasion
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoTabascoInvasionRuntime.JunoEvent_StartedInvasion
// Kind: ScriptStruct; super: none
struct FJunoEvent_StartedInvasion
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoTabascoInvasionRuntime.JunoInvasionPersistenceFeatureData_InGameClass_PersistentInfo
// Kind: ScriptStruct; super: none
struct FJunoInvasionPersistenceFeatureData_InGameClass_PersistentInfo
{
public:
    std::uint8_t InvasionSaveData[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoInvasionPersistenceFeatureData_InGameClass_PersistentInfo, InvasionSaveData) == 0, "Offset mismatch for FJunoInvasionPersistenceFeatureData_InGameClass_PersistentInfo::InvasionSaveData");

// /Script/JunoTabascoInvasionRuntime.JunoInvasionSaveData
// Kind: ScriptStruct; super: none
struct FJunoInvasionSaveData
{
public:
    std::int32_t EscalationLevel; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t EscalationLevelPoints; // 0x0004 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FJunoInvasionSaveData, EscalationLevel) == 0, "Offset mismatch for FJunoInvasionSaveData::EscalationLevel");
static_assert(offsetof(FJunoInvasionSaveData, EscalationLevelPoints) == 4, "Offset mismatch for FJunoInvasionSaveData::EscalationLevelPoints");

// /Script/JunoTabascoInvasionRuntime.JunoInvasionPersistenceFeatureData
// Kind: Class; super: JunoBasePFWPersistenceFeatureData
class UJunoInvasionPersistenceFeatureData
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    std::uint8_t InvasionSaveData[0x1]; // 0x0058 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoInvasionPersistenceFeatureData, InvasionSaveData) == 88, "Offset mismatch for UJunoInvasionPersistenceFeatureData::InvasionSaveData");

// /Script/JunoTabascoInvasionRuntime.JunoInvasionPersistenceFeatureData_Container
// Kind: Class; super: JunoBasePFWPersistenceFeatureDataContainer
class UJunoInvasionPersistenceFeatureData_Container
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t GameplayTagContainer[0x20]; // 0x0028 (Size: 0x20, Type: StructProperty)
    std::uint8_t RestoreVersionInfo[0x10]; // 0x0048 (Size: 0x10, Type: StructProperty)
    std::uint8_t SupportedVersionsTable[0x20]; // 0x0058 (Size: 0x20, Type: StructProperty)
    std::uint64_t RestoreAttemptCount; // 0x0078 (Size: 0x8, Type: UInt64Property)
    std::uint64_t SaveAttemptCount; // 0x0080 (Size: 0x8, Type: UInt64Property)
    std::uint64_t DeleteAttemptCount; // 0x0088 (Size: 0x8, Type: UInt64Property)
    void* ServiceData; // 0x0090 (Size: 0x8, Type: ObjectProperty)
    void* BackendRequestsQueue; // 0x0098 (Size: 0x8, Type: ObjectProperty)
    FName PersistentClassName; // 0x00A0 (Size: 0x8, Type: NameProperty)
    std::uint8_t PersistentName[0x30]; // 0x00A8 (Size: 0x30, Type: StructProperty)
    FString Description; // 0x00D8 (Size: 0x10, Type: StrProperty)
    void* MakeReadyForPersistenceProcess; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bMakeReadyForPersistenceProcessFailedOnLastAttempt; // 0x00F0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00F1
    void* DeinitProcess; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoInvasionPersistenceFeatureData_Container, GameplayTagContainer) == 40, "Offset mismatch for UJunoInvasionPersistenceFeatureData_Container::GameplayTagContainer");
static_assert(offsetof(UJunoInvasionPersistenceFeatureData_Container, RestoreVersionInfo) == 72, "Offset mismatch for UJunoInvasionPersistenceFeatureData_Container::RestoreVersionInfo");
static_assert(offsetof(UJunoInvasionPersistenceFeatureData_Container, SupportedVersionsTable) == 88, "Offset mismatch for UJunoInvasionPersistenceFeatureData_Container::SupportedVersionsTable");
static_assert(offsetof(UJunoInvasionPersistenceFeatureData_Container, RestoreAttemptCount) == 120, "Offset mismatch for UJunoInvasionPersistenceFeatureData_Container::RestoreAttemptCount");
static_assert(offsetof(UJunoInvasionPersistenceFeatureData_Container, SaveAttemptCount) == 128, "Offset mismatch for UJunoInvasionPersistenceFeatureData_Container::SaveAttemptCount");
static_assert(offsetof(UJunoInvasionPersistenceFeatureData_Container, DeleteAttemptCount) == 136, "Offset mismatch for UJunoInvasionPersistenceFeatureData_Container::DeleteAttemptCount");
static_assert(offsetof(UJunoInvasionPersistenceFeatureData_Container, ServiceData) == 144, "Offset mismatch for UJunoInvasionPersistenceFeatureData_Container::ServiceData");
static_assert(offsetof(UJunoInvasionPersistenceFeatureData_Container, BackendRequestsQueue) == 152, "Offset mismatch for UJunoInvasionPersistenceFeatureData_Container::BackendRequestsQueue");
static_assert(offsetof(UJunoInvasionPersistenceFeatureData_Container, PersistentClassName) == 160, "Offset mismatch for UJunoInvasionPersistenceFeatureData_Container::PersistentClassName");
static_assert(offsetof(UJunoInvasionPersistenceFeatureData_Container, PersistentName) == 168, "Offset mismatch for UJunoInvasionPersistenceFeatureData_Container::PersistentName");
static_assert(offsetof(UJunoInvasionPersistenceFeatureData_Container, Description) == 216, "Offset mismatch for UJunoInvasionPersistenceFeatureData_Container::Description");
static_assert(offsetof(UJunoInvasionPersistenceFeatureData_Container, MakeReadyForPersistenceProcess) == 232, "Offset mismatch for UJunoInvasionPersistenceFeatureData_Container::MakeReadyForPersistenceProcess");
static_assert(offsetof(UJunoInvasionPersistenceFeatureData_Container, bMakeReadyForPersistenceProcessFailedOnLastAttempt) == 240, "Offset mismatch for UJunoInvasionPersistenceFeatureData_Container::bMakeReadyForPersistenceProcessFailedOnLastAttempt");
static_assert(offsetof(UJunoInvasionPersistenceFeatureData_Container, DeinitProcess) == 248, "Offset mismatch for UJunoInvasionPersistenceFeatureData_Container::DeinitProcess");

// /Script/JunoTabascoInvasionRuntime.JunoInvasionPersistenceFeatureModule
// Kind: Class; super: PersistenceFrameworkModule
class UJunoInvasionPersistenceFeatureModule
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t GameplayTagContainer[0x20]; // 0x0028 (Size: 0x20, Type: StructProperty)
    TMap<void*, void*> Containers; // 0x0048 (Size: 0x10, Type: MapProperty)
    void* ServiceData; // 0x0058 (Size: 0x8, Type: ObjectProperty)
    FString PersistentName; // 0x0060 (Size: 0x10, Type: StrProperty)
    void* MakeReadyForPersistenceProcess; // 0x0070 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bMakeReadyForPersistenceProcessFailedOnLastAttempt; // 0x0078 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0079
    void* DeinitProcess; // 0x0080 (Size: 0x8, Type: ObjectProperty)
    FString Description; // 0x0088 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UJunoInvasionPersistenceFeatureModule, GameplayTagContainer) == 40, "Offset mismatch for UJunoInvasionPersistenceFeatureModule::GameplayTagContainer");
static_assert(offsetof(UJunoInvasionPersistenceFeatureModule, Containers) == 72, "Offset mismatch for UJunoInvasionPersistenceFeatureModule::Containers");
static_assert(offsetof(UJunoInvasionPersistenceFeatureModule, ServiceData) == 88, "Offset mismatch for UJunoInvasionPersistenceFeatureModule::ServiceData");
static_assert(offsetof(UJunoInvasionPersistenceFeatureModule, PersistentName) == 96, "Offset mismatch for UJunoInvasionPersistenceFeatureModule::PersistentName");
static_assert(offsetof(UJunoInvasionPersistenceFeatureModule, MakeReadyForPersistenceProcess) == 112, "Offset mismatch for UJunoInvasionPersistenceFeatureModule::MakeReadyForPersistenceProcess");
static_assert(offsetof(UJunoInvasionPersistenceFeatureModule, bMakeReadyForPersistenceProcessFailedOnLastAttempt) == 120, "Offset mismatch for UJunoInvasionPersistenceFeatureModule::bMakeReadyForPersistenceProcessFailedOnLastAttempt");
static_assert(offsetof(UJunoInvasionPersistenceFeatureModule, DeinitProcess) == 128, "Offset mismatch for UJunoInvasionPersistenceFeatureModule::DeinitProcess");
static_assert(offsetof(UJunoInvasionPersistenceFeatureModule, Description) == 136, "Offset mismatch for UJunoInvasionPersistenceFeatureModule::Description");

// /Script/JunoTabascoInvasionRuntime.JunoTabascoInvasionManagerComponent
// Kind: Class; super: PlayspaceComponent
class UJunoTabascoInvasionManagerComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TArray<void*> EscalationLevelsBucket; // 0x00C0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t LevelingInterval[0x28]; // 0x00D0 (Size: 0x28, Type: StructProperty)
    std::uint8_t PointsPerLevelingInterval[0x28]; // 0x00F8 (Size: 0x28, Type: StructProperty)
    std::uint8_t bInvasionStarted; // 0x0120 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0121
    std::int32_t CurrentEscalationLevel; // 0x0124 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x10]; // 0x0128
    TWeakObjectPtr<void> InvasionPersistenceFeatureData; // 0x0138 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UJunoTabascoInvasionManagerComponent, EscalationLevelsBucket) == 192, "Offset mismatch for UJunoTabascoInvasionManagerComponent::EscalationLevelsBucket");
static_assert(offsetof(UJunoTabascoInvasionManagerComponent, LevelingInterval) == 208, "Offset mismatch for UJunoTabascoInvasionManagerComponent::LevelingInterval");
static_assert(offsetof(UJunoTabascoInvasionManagerComponent, PointsPerLevelingInterval) == 248, "Offset mismatch for UJunoTabascoInvasionManagerComponent::PointsPerLevelingInterval");
static_assert(offsetof(UJunoTabascoInvasionManagerComponent, bInvasionStarted) == 288, "Offset mismatch for UJunoTabascoInvasionManagerComponent::bInvasionStarted");
static_assert(offsetof(UJunoTabascoInvasionManagerComponent, CurrentEscalationLevel) == 292, "Offset mismatch for UJunoTabascoInvasionManagerComponent::CurrentEscalationLevel");
static_assert(offsetof(UJunoTabascoInvasionManagerComponent, InvasionPersistenceFeatureData) == 312, "Offset mismatch for UJunoTabascoInvasionManagerComponent::InvasionPersistenceFeatureData");

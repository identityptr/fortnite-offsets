/**
 * decamp dumper generated SDK
 * Package: /Script/JunoWorldManagement
 */
#pragma once
#include "Basic.h"

// /Script/JunoWorldManagement.JunoWorldGameMetadata
// Kind: ScriptStruct; super: none
struct FJunoWorldGameMetadata
{
public:
    std::int32_t PersistenceVersion; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t AdventureSeed; // 0x0004 (Size: 0x4, Type: IntProperty)
    FString Title; // 0x0008 (Size: 0x10, Type: StrProperty)
    FString CustomName; // 0x0018 (Size: 0x10, Type: StrProperty)
    std::uint8_t CustomNameChangeAllowedAt[0x8]; // 0x0028 (Size: 0x8, Type: StructProperty)
    TArray<void*> GameplayProperties; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> TaintedGameplayProperties; // 0x0040 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJunoWorldGameMetadata, PersistenceVersion) == 0, "Offset mismatch for FJunoWorldGameMetadata::PersistenceVersion");
static_assert(offsetof(FJunoWorldGameMetadata, AdventureSeed) == 4, "Offset mismatch for FJunoWorldGameMetadata::AdventureSeed");
static_assert(offsetof(FJunoWorldGameMetadata, Title) == 8, "Offset mismatch for FJunoWorldGameMetadata::Title");
static_assert(offsetof(FJunoWorldGameMetadata, CustomName) == 24, "Offset mismatch for FJunoWorldGameMetadata::CustomName");
static_assert(offsetof(FJunoWorldGameMetadata, CustomNameChangeAllowedAt) == 40, "Offset mismatch for FJunoWorldGameMetadata::CustomNameChangeAllowedAt");
static_assert(offsetof(FJunoWorldGameMetadata, GameplayProperties) == 48, "Offset mismatch for FJunoWorldGameMetadata::GameplayProperties");
static_assert(offsetof(FJunoWorldGameMetadata, TaintedGameplayProperties) == 64, "Offset mismatch for FJunoWorldGameMetadata::TaintedGameplayProperties");

// /Script/JunoWorldManagement.JunoWorldGameplayProperty
// Kind: ScriptStruct; super: none
struct FJunoWorldGameplayProperty
{
public:
    FString ID; // 0x0000 (Size: 0x10, Type: StrProperty)
    FName Value; // 0x0010 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FJunoWorldGameplayProperty, ID) == 0, "Offset mismatch for FJunoWorldGameplayProperty::ID");
static_assert(offsetof(FJunoWorldGameplayProperty, Value) == 16, "Offset mismatch for FJunoWorldGameplayProperty::Value");

// /Script/JunoWorldManagement.JunoWorldMetadata
// Kind: ScriptStruct; super: none
struct FJunoWorldMetadata
{
public:
    FString ID; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t Game[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoWorldMetadata, ID) == 0, "Offset mismatch for FJunoWorldMetadata::ID");
static_assert(offsetof(FJunoWorldMetadata, Game) == 16, "Offset mismatch for FJunoWorldMetadata::Game");

// /Script/JunoWorldManagement.JunoWorldQuery
// Kind: ScriptStruct; super: none
struct FJunoWorldQuery
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t MetaData[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoWorldQuery, MetaData) == 8, "Offset mismatch for FJunoWorldQuery::MetaData");

// /Script/JunoWorldManagement.JunoWorldQueryResult
// Kind: ScriptStruct; super: none
struct FJunoWorldQueryResult
{
public:
    void* UserWorldView; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FJunoWorldQueryResult, UserWorldView) == 0, "Offset mismatch for FJunoWorldQueryResult::UserWorldView");

// /Script/JunoWorldManagement.JunoWorldSettingOptionRow
// Kind: ScriptStruct; super: none
struct FJunoWorldSettingOptionRow
{
public:
    FName ID; // 0x0000 (Size: 0x8, Type: NameProperty)
    std::uint8_t Name[0x10]; // 0x0008 (Size: 0x10, Type: TextProperty)
    std::uint8_t Description[0x10]; // 0x0018 (Size: 0x10, Type: TextProperty)
    std::uint8_t OptionTag[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoWorldSettingOptionRow, ID) == 0, "Offset mismatch for FJunoWorldSettingOptionRow::ID");
static_assert(offsetof(FJunoWorldSettingOptionRow, Name) == 8, "Offset mismatch for FJunoWorldSettingOptionRow::Name");
static_assert(offsetof(FJunoWorldSettingOptionRow, Description) == 24, "Offset mismatch for FJunoWorldSettingOptionRow::Description");
static_assert(offsetof(FJunoWorldSettingOptionRow, OptionTag) == 40, "Offset mismatch for FJunoWorldSettingOptionRow::OptionTag");

// /Script/JunoWorldManagement.JunoWorldSettingRow
// Kind: ScriptStruct; super: TableRowBase
struct FJunoWorldSettingRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t SettingName[0x10]; // 0x0008 (Size: 0x10, Type: TextProperty)
    std::uint8_t SettingTag[0x4]; // 0x0018 (Size: 0x4, Type: StructProperty)
    std::uint8_t Category; // 0x001C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x001D
    TArray<void*> CanDefaultBeChangedPerMode; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CanChangePostCreation; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> DefaultOptionPerMode; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t DefaultWhenMissing[0x8]; // 0x0050 (Size: 0x8, Type: StructProperty)
    TArray<void*> Options; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bCanBeLocked; // 0x0068 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bBlockQuestProgressIfChanged; // 0x0069 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FJunoWorldSettingRow, SettingName) == 8, "Offset mismatch for FJunoWorldSettingRow::SettingName");
static_assert(offsetof(FJunoWorldSettingRow, SettingTag) == 24, "Offset mismatch for FJunoWorldSettingRow::SettingTag");
static_assert(offsetof(FJunoWorldSettingRow, Category) == 28, "Offset mismatch for FJunoWorldSettingRow::Category");
static_assert(offsetof(FJunoWorldSettingRow, CanDefaultBeChangedPerMode) == 32, "Offset mismatch for FJunoWorldSettingRow::CanDefaultBeChangedPerMode");
static_assert(offsetof(FJunoWorldSettingRow, CanChangePostCreation) == 48, "Offset mismatch for FJunoWorldSettingRow::CanChangePostCreation");
static_assert(offsetof(FJunoWorldSettingRow, DefaultOptionPerMode) == 64, "Offset mismatch for FJunoWorldSettingRow::DefaultOptionPerMode");
static_assert(offsetof(FJunoWorldSettingRow, DefaultWhenMissing) == 80, "Offset mismatch for FJunoWorldSettingRow::DefaultWhenMissing");
static_assert(offsetof(FJunoWorldSettingRow, Options) == 88, "Offset mismatch for FJunoWorldSettingRow::Options");
static_assert(offsetof(FJunoWorldSettingRow, bCanBeLocked) == 104, "Offset mismatch for FJunoWorldSettingRow::bCanBeLocked");
static_assert(offsetof(FJunoWorldSettingRow, bBlockQuestProgressIfChanged) == 105, "Offset mismatch for FJunoWorldSettingRow::bBlockQuestProgressIfChanged");

// /Script/JunoWorldManagement.WorldCheckpointResult
// Kind: ScriptStruct; super: none
struct FWorldCheckpointResult
{
public:
    std::uint8_t bRestoreInProgress; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bMarkedAsPreserved; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x6]; // 0x0002
    FString Version; // 0x0008 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FWorldCheckpointResult, bRestoreInProgress) == 0, "Offset mismatch for FWorldCheckpointResult::bRestoreInProgress");
static_assert(offsetof(FWorldCheckpointResult, bMarkedAsPreserved) == 1, "Offset mismatch for FWorldCheckpointResult::bMarkedAsPreserved");
static_assert(offsetof(FWorldCheckpointResult, Version) == 8, "Offset mismatch for FWorldCheckpointResult::Version");

// /Script/JunoWorldManagement.JunoPersistenceFeatureWorldMetadataCorrespondentInterface
// Kind: Class; super: Interface
class UJunoPersistenceFeatureWorldMetadataCorrespondentInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoWorldManagement.JunoUserWorldView
// Kind: Class; super: JunoWorld
class UJunoUserWorldView
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoWorldManagement.JunoWorld
// Kind: Class; super: Object
class UJunoWorld
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoWorldManagement.JunoWorldManagementHandler
// Kind: Class; super: Object
class UJunoWorldManagementHandler
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoWorldManagement.JunoWorldManagementHandler_WorldArbitrationService
// Kind: Class; super: JunoWorldManagementHandler
class UJunoWorldManagementHandler_WorldArbitrationService
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TMap<void*, void*> WorldViewMap; // 0x0028 (Size: 0x10, Type: MapProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0038
    std::uint32_t GetAllAccessibleWorldsCacheTime; // 0x0048 (Size: 0x4, Type: UInt32Property)
    std::uint32_t GetAllAccessibleWorldsErrorCacheTime; // 0x004C (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(UJunoWorldManagementHandler_WorldArbitrationService, WorldViewMap) == 40, "Offset mismatch for UJunoWorldManagementHandler_WorldArbitrationService::WorldViewMap");
static_assert(offsetof(UJunoWorldManagementHandler_WorldArbitrationService, GetAllAccessibleWorldsCacheTime) == 72, "Offset mismatch for UJunoWorldManagementHandler_WorldArbitrationService::GetAllAccessibleWorldsCacheTime");
static_assert(offsetof(UJunoWorldManagementHandler_WorldArbitrationService, GetAllAccessibleWorldsErrorCacheTime) == 76, "Offset mismatch for UJunoWorldManagementHandler_WorldArbitrationService::GetAllAccessibleWorldsErrorCacheTime");

// /Script/JunoWorldManagement.JunoWorldManagerSubsystem
// Kind: Class; super: WorldSubsystem
class UJunoWorldManagerSubsystem
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t bEnableWorldManager; // 0x0038 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableWorldManagerInPIE; // 0x0039 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x003A
    std::int32_t WorldPersistenceCompatibilityVersion; // 0x003C (Size: 0x4, Type: IntProperty)
    FString DeviceProfileSuffix; // 0x0040 (Size: 0x10, Type: StrProperty)
    std::uint8_t Pad_0002[0x28]; // 0x0050
    void* WorldManagementHandler; // 0x0078 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoWorldManagerSubsystem, bEnableWorldManager) == 56, "Offset mismatch for UJunoWorldManagerSubsystem::bEnableWorldManager");
static_assert(offsetof(UJunoWorldManagerSubsystem, bEnableWorldManagerInPIE) == 57, "Offset mismatch for UJunoWorldManagerSubsystem::bEnableWorldManagerInPIE");
static_assert(offsetof(UJunoWorldManagerSubsystem, WorldPersistenceCompatibilityVersion) == 60, "Offset mismatch for UJunoWorldManagerSubsystem::WorldPersistenceCompatibilityVersion");
static_assert(offsetof(UJunoWorldManagerSubsystem, DeviceProfileSuffix) == 64, "Offset mismatch for UJunoWorldManagerSubsystem::DeviceProfileSuffix");
static_assert(offsetof(UJunoWorldManagerSubsystem, WorldManagementHandler) == 120, "Offset mismatch for UJunoWorldManagerSubsystem::WorldManagementHandler");

// /Script/JunoWorldManagement.JunoWorldManagerSubsystemData
// Kind: Class; super: PrimaryDataAsset
class UJunoWorldManagerSubsystemData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> AvailableWorldManagementHandlerClasses; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    void* DefaultWorldManagementHandlerClass; // 0x0038 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UJunoWorldManagerSubsystemData, AvailableWorldManagementHandlerClasses) == 40, "Offset mismatch for UJunoWorldManagerSubsystemData::AvailableWorldManagementHandlerClasses");
static_assert(offsetof(UJunoWorldManagerSubsystemData, DefaultWorldManagementHandlerClass) == 56, "Offset mismatch for UJunoWorldManagerSubsystemData::DefaultWorldManagementHandlerClass");

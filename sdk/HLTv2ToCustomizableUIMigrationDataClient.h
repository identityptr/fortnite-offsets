/**
 * decamp dumper generated SDK
 * Package: /Script/HLTv2ToCustomizableUIMigrationDataClient
 */
#pragma once
#include "Basic.h"

// /Script/HLTv2ToCustomizableUIMigrationDataClient.AvailableInstances
// Kind: ScriptStruct; super: none
struct FAvailableInstances
{
public:
    TSet<void*> AvailableInstances; // 0x0000 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(FAvailableInstances, AvailableInstances) == 0, "Offset mismatch for FAvailableInstances::AvailableInstances");

// /Script/HLTv2ToCustomizableUIMigrationDataClient.HLTAvailableWidgetId
// Kind: ScriptStruct; super: none
struct FHLTAvailableWidgetId
{
public:
    std::uint8_t WidgetClassId[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t HUDContextTag[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FHLTAvailableWidgetId, WidgetClassId) == 0, "Offset mismatch for FHLTAvailableWidgetId::WidgetClassId");
static_assert(offsetof(FHLTAvailableWidgetId, HUDContextTag) == 8, "Offset mismatch for FHLTAvailableWidgetId::HUDContextTag");

// /Script/HLTv2ToCustomizableUIMigrationDataClient.HLTPresetWidgetId
// Kind: ScriptStruct; super: none
struct FHLTPresetWidgetId
{
public:
    std::uint8_t AvailableWidgetId[0xC]; // 0x0000 (Size: 0xC, Type: StructProperty)
    std::uint8_t SchemaId[0x1]; // 0x000C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FHLTPresetWidgetId, AvailableWidgetId) == 0, "Offset mismatch for FHLTPresetWidgetId::AvailableWidgetId");
static_assert(offsetof(FHLTPresetWidgetId, SchemaId) == 12, "Offset mismatch for FHLTPresetWidgetId::SchemaId");

// /Script/HLTv2ToCustomizableUIMigrationDataClient.HLTWidgetClassId
// Kind: ScriptStruct; super: none
struct FHLTWidgetClassId
{
public:
    std::uint8_t WidgetTag[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::uint8_t BehaviorTag[0x1]; // 0x0004 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FHLTWidgetClassId, WidgetTag) == 0, "Offset mismatch for FHLTWidgetClassId::WidgetTag");
static_assert(offsetof(FHLTWidgetClassId, BehaviorTag) == 4, "Offset mismatch for FHLTWidgetClassId::BehaviorTag");

// /Script/HLTv2ToCustomizableUIMigrationDataClient.MigratedCustomLayoutConsumerWidgetEntry
// Kind: ScriptStruct; super: none
struct FMigratedCustomLayoutConsumerWidgetEntry
{
public:
    std::uint8_t LayoutData[0x40]; // 0x0000 (Size: 0x40, Type: StructProperty)
    float DefaultSize; // 0x0040 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0044
    TSoftClassPtr<void> ParentClass; // 0x0048 (Size: 0x28, Type: SoftClassProperty)
};

static_assert(offsetof(FMigratedCustomLayoutConsumerWidgetEntry, LayoutData) == 0, "Offset mismatch for FMigratedCustomLayoutConsumerWidgetEntry::LayoutData");
static_assert(offsetof(FMigratedCustomLayoutConsumerWidgetEntry, DefaultSize) == 64, "Offset mismatch for FMigratedCustomLayoutConsumerWidgetEntry::DefaultSize");
static_assert(offsetof(FMigratedCustomLayoutConsumerWidgetEntry, ParentClass) == 72, "Offset mismatch for FMigratedCustomLayoutConsumerWidgetEntry::ParentClass");

// /Script/HLTv2ToCustomizableUIMigrationDataClient.MigratedDynamicUIScenes
// Kind: ScriptStruct; super: none
struct FMigratedDynamicUIScenes
{
public:
    TSet<void*> DynamicUIScenes; // 0x0000 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(FMigratedDynamicUIScenes, DynamicUIScenes) == 0, "Offset mismatch for FMigratedDynamicUIScenes::DynamicUIScenes");

// /Script/HLTv2ToCustomizableUIMigrationDataClient.MigratedSharedScene
// Kind: ScriptStruct; super: none
struct FMigratedSharedScene
{
public:
    void* Scene; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ContextQuery[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMigratedSharedScene, Scene) == 0, "Offset mismatch for FMigratedSharedScene::Scene");
static_assert(offsetof(FMigratedSharedScene, ContextQuery) == 8, "Offset mismatch for FMigratedSharedScene::ContextQuery");

// /Script/HLTv2ToCustomizableUIMigrationDataClient.MigratedWidgetPair
// Kind: ScriptStruct; super: none
struct FMigratedWidgetPair
{
public:
    void* RuntimeWidget; // 0x0000 (Size: 0x8, Type: ClassProperty)
    std::uint8_t ProxyWidget[0x1]; // 0x0008 (Size: 0x1, Type: OptionalProperty)
};

static_assert(offsetof(FMigratedWidgetPair, RuntimeWidget) == 0, "Offset mismatch for FMigratedWidgetPair::RuntimeWidget");
static_assert(offsetof(FMigratedWidgetPair, ProxyWidget) == 8, "Offset mismatch for FMigratedWidgetPair::ProxyWidget");

// /Script/HLTv2ToCustomizableUIMigrationDataClient.HLTv2MigrationDatabase
// Kind: Class; super: DataAsset
class UHLTv2MigrationDatabase
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TMap<void*, void*> HLTPresetWidgetToCustomizableWidget; // 0x0028 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> HLTAvailableWidgetToCustomizableWidget; // 0x0038 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> CustomizableWidgetToHLTAvailableWidget; // 0x0048 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> AvailableAdditionalInstancesForPresetWidget; // 0x0058 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> AvailableAdditionalInstancesForAvailableWidget; // 0x0068 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> HLTWidgetClassToCustomizableWidgetClasses; // 0x0078 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> MigratedCustomLayoutConsumers; // 0x0088 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> MigratedDynamicUIScenes; // 0x0098 (Size: 0x10, Type: MapProperty)
    TArray<void*> MigratedSharedScenes; // 0x00A8 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> CustomizableWidgetToHLTPresetWidget; // 0x00B8 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UHLTv2MigrationDatabase, HLTPresetWidgetToCustomizableWidget) == 40, "Offset mismatch for UHLTv2MigrationDatabase::HLTPresetWidgetToCustomizableWidget");
static_assert(offsetof(UHLTv2MigrationDatabase, HLTAvailableWidgetToCustomizableWidget) == 56, "Offset mismatch for UHLTv2MigrationDatabase::HLTAvailableWidgetToCustomizableWidget");
static_assert(offsetof(UHLTv2MigrationDatabase, CustomizableWidgetToHLTAvailableWidget) == 72, "Offset mismatch for UHLTv2MigrationDatabase::CustomizableWidgetToHLTAvailableWidget");
static_assert(offsetof(UHLTv2MigrationDatabase, AvailableAdditionalInstancesForPresetWidget) == 88, "Offset mismatch for UHLTv2MigrationDatabase::AvailableAdditionalInstancesForPresetWidget");
static_assert(offsetof(UHLTv2MigrationDatabase, AvailableAdditionalInstancesForAvailableWidget) == 104, "Offset mismatch for UHLTv2MigrationDatabase::AvailableAdditionalInstancesForAvailableWidget");
static_assert(offsetof(UHLTv2MigrationDatabase, HLTWidgetClassToCustomizableWidgetClasses) == 120, "Offset mismatch for UHLTv2MigrationDatabase::HLTWidgetClassToCustomizableWidgetClasses");
static_assert(offsetof(UHLTv2MigrationDatabase, MigratedCustomLayoutConsumers) == 136, "Offset mismatch for UHLTv2MigrationDatabase::MigratedCustomLayoutConsumers");
static_assert(offsetof(UHLTv2MigrationDatabase, MigratedDynamicUIScenes) == 152, "Offset mismatch for UHLTv2MigrationDatabase::MigratedDynamicUIScenes");
static_assert(offsetof(UHLTv2MigrationDatabase, MigratedSharedScenes) == 168, "Offset mismatch for UHLTv2MigrationDatabase::MigratedSharedScenes");
static_assert(offsetof(UHLTv2MigrationDatabase, CustomizableWidgetToHLTPresetWidget) == 184, "Offset mismatch for UHLTv2MigrationDatabase::CustomizableWidgetToHLTPresetWidget");

// /Script/HLTv2ToCustomizableUIMigrationDataClient.HLTv2ToCustomizableUIMigrationDatabaseBuilder
// Kind: Class; super: WorldSubsystem
class UHLTv2ToCustomizableUIMigrationDatabaseBuilder
{
public:
    std::uint8_t Opaque[1];
};

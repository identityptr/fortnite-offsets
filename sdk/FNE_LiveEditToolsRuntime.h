/**
 * decamp dumper generated SDK
 * Package: /Script/FNE_LiveEditToolsRuntime
 */
#pragma once
#include "Basic.h"

// /Script/FNE_LiveEditToolsRuntime.CreativeSelectedEntityInfo
// Kind: ScriptStruct; super: CreativeSelectedObjectInfo
struct FCreativeSelectedEntityInfo
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    TSoftObjectPtr<void> EntitySoftPath; // 0x00A8 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FCreativeSelectedEntityInfo, EntitySoftPath) == 168, "Offset mismatch for FCreativeSelectedEntityInfo::EntitySoftPath");

// /Script/FNE_LiveEditToolsRuntime.EntityInstanceRecord
// Kind: ScriptStruct; super: none
struct FEntityInstanceRecord
{
public:
    std::uint64_t RecordID; // 0x0000 (Size: 0x8, Type: UInt64Property)
    std::uint64_t TemplateRecordID; // 0x0008 (Size: 0x8, Type: UInt64Property)
    FName EntityID; // 0x0010 (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0000[0x8]; // 0x0018
    std::uint8_t Transform[0x60]; // 0x0020 (Size: 0x60, Type: StructProperty)
    TWeakObjectPtr<void> EntityPtr; // 0x0080 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FEntityInstanceRecord, RecordID) == 0, "Offset mismatch for FEntityInstanceRecord::RecordID");
static_assert(offsetof(FEntityInstanceRecord, TemplateRecordID) == 8, "Offset mismatch for FEntityInstanceRecord::TemplateRecordID");
static_assert(offsetof(FEntityInstanceRecord, EntityID) == 16, "Offset mismatch for FEntityInstanceRecord::EntityID");
static_assert(offsetof(FEntityInstanceRecord, Transform) == 32, "Offset mismatch for FEntityInstanceRecord::Transform");
static_assert(offsetof(FEntityInstanceRecord, EntityPtr) == 128, "Offset mismatch for FEntityInstanceRecord::EntityPtr");

// /Script/FNE_LiveEditToolsRuntime.EntityTemplateRecord
// Kind: ScriptStruct; super: none
struct FEntityTemplateRecord
{
public:
    std::uint64_t TemplateRecordID; // 0x0000 (Size: 0x8, Type: UInt64Property)
    void* EntityObject; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::int16_t LevelRecordSaveVersion; // 0x0010 (Size: 0x2, Type: Int16Property)
};

static_assert(offsetof(FEntityTemplateRecord, TemplateRecordID) == 0, "Offset mismatch for FEntityTemplateRecord::TemplateRecordID");
static_assert(offsetof(FEntityTemplateRecord, EntityObject) == 8, "Offset mismatch for FEntityTemplateRecord::EntityObject");
static_assert(offsetof(FEntityTemplateRecord, LevelRecordSaveVersion) == 16, "Offset mismatch for FEntityTemplateRecord::LevelRecordSaveVersion");

// /Script/FNE_LiveEditToolsRuntime.OriginalAndSpawnedEntityPair
// Kind: ScriptStruct; super: none
struct FOriginalAndSpawnedEntityPair
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TSoftObjectPtr<void> SpawnedEntitySoftPath; // 0x0008 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FOriginalAndSpawnedEntityPair, SpawnedEntitySoftPath) == 8, "Offset mismatch for FOriginalAndSpawnedEntityPair::SpawnedEntitySoftPath");

// /Script/FNE_LiveEditToolsRuntime.CreativeMoveToolPreviewEntity
// Kind: Class; super: CreativeMoveToolBlueprintPreview
class UCreativeMoveToolPreviewEntity
{
public:
    std::uint8_t Pad_0000[0x910]; // 0x0000
    void* PreviewObject; // 0x0910 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UCreativeMoveToolPreviewEntity, PreviewObject) == 2320, "Offset mismatch for UCreativeMoveToolPreviewEntity::PreviewObject");

// /Script/FNE_LiveEditToolsRuntime.DeleteEntities
// Kind: Class; super: DeleteObjects
class UDeleteEntities
{
public:
    std::uint8_t Pad_0000[0x148]; // 0x0000
    float DelayForDeleteTime; // 0x0148 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UDeleteEntities, DelayForDeleteTime) == 328, "Offset mismatch for UDeleteEntities::DelayForDeleteTime");

// /Script/FNE_LiveEditToolsRuntime.LSRThumbnailGeneratorEntities
// Kind: Class; super: LevelSaveRecordThumbnailGenerator
class ULSRThumbnailGeneratorEntities
{
public:
    std::uint8_t Pad_0000[0x170]; // 0x0000
    TArray<void*> SpawnedEntities; // 0x0170 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(ULSRThumbnailGeneratorEntities, SpawnedEntities) == 368, "Offset mismatch for ULSRThumbnailGeneratorEntities::SpawnedEntities");

// /Script/FNE_LiveEditToolsRuntime.LevelRecordSpawnerEntities
// Kind: Class; super: LevelRecordSpawner
class ULevelRecordSpawnerEntities
{
public:
    std::uint8_t Pad_0000[0x3B0]; // 0x0000
    TArray<void*> SpawnedEntities; // 0x03B0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(ULevelRecordSpawnerEntities, SpawnedEntities) == 944, "Offset mismatch for ULevelRecordSpawnerEntities::SpawnedEntities");

// /Script/FNE_LiveEditToolsRuntime.LevelSaveRecordEntities
// Kind: Class; super: LevelSaveRecord
class ULevelSaveRecordEntities
{
public:
    std::uint8_t Pad_0000[0x3D0]; // 0x0000
    std::uint64_t LastEntityRecordID; // 0x03D0 (Size: 0x8, Type: UInt64Property)
    TMap<void*, void*> EntityTemplateRecords; // 0x03D8 (Size: 0x10, Type: MapProperty)
    TArray<void*> EntityInstanceRecords; // 0x03E8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(ULevelSaveRecordEntities, LastEntityRecordID) == 976, "Offset mismatch for ULevelSaveRecordEntities::LastEntityRecordID");
static_assert(offsetof(ULevelSaveRecordEntities, EntityTemplateRecords) == 984, "Offset mismatch for ULevelSaveRecordEntities::EntityTemplateRecords");
static_assert(offsetof(ULevelSaveRecordEntities, EntityInstanceRecords) == 1000, "Offset mismatch for ULevelSaveRecordEntities::EntityInstanceRecords");

// /Script/FNE_LiveEditToolsRuntime.MoveEntitiesFreely
// Kind: Class; super: MoveObjectsFreely
class UMoveEntitiesFreely
{
public:
    std::uint8_t Pad_0000[0x148]; // 0x0000
    void* OwningEntityInteractionMode; // 0x0148 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMoveEntitiesFreely, OwningEntityInteractionMode) == 328, "Offset mismatch for UMoveEntitiesFreely::OwningEntityInteractionMode");

// /Script/FNE_LiveEditToolsRuntime.PhoneToolEntityInteractionMode
// Kind: Class; super: ObjectInteractionMode
class UPhoneToolEntityInteractionMode
{
public:
    std::uint8_t Pad_0000[0x410]; // 0x0000
    std::uint8_t DelayForMultiSelectHighlightTH[0x8]; // 0x0410 (Size: 0x8, Type: StructProperty)
    void* MoveEntitiesFreelyInteractionBehavior; // 0x0418 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0420
    TArray<void*> NewlyPlacedEntities; // 0x0430 (Size: 0x10, Type: ArrayProperty)
    void* ActiveBoundBehaviorReplicateToRemoteClients; // 0x0440 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> PlacementModeEntitiesReplicateToRemoteClients; // 0x0448 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPhoneToolEntityInteractionMode, DelayForMultiSelectHighlightTH) == 1040, "Offset mismatch for UPhoneToolEntityInteractionMode::DelayForMultiSelectHighlightTH");
static_assert(offsetof(UPhoneToolEntityInteractionMode, MoveEntitiesFreelyInteractionBehavior) == 1048, "Offset mismatch for UPhoneToolEntityInteractionMode::MoveEntitiesFreelyInteractionBehavior");
static_assert(offsetof(UPhoneToolEntityInteractionMode, NewlyPlacedEntities) == 1072, "Offset mismatch for UPhoneToolEntityInteractionMode::NewlyPlacedEntities");
static_assert(offsetof(UPhoneToolEntityInteractionMode, ActiveBoundBehaviorReplicateToRemoteClients) == 1088, "Offset mismatch for UPhoneToolEntityInteractionMode::ActiveBoundBehaviorReplicateToRemoteClients");
static_assert(offsetof(UPhoneToolEntityInteractionMode, PlacementModeEntitiesReplicateToRemoteClients) == 1096, "Offset mismatch for UPhoneToolEntityInteractionMode::PlacementModeEntitiesReplicateToRemoteClients");

// /Script/FNE_LiveEditToolsRuntime.UEFNEntityInteractionTargetDetection
// Kind: Class; super: InteractionTargetDetection
class UUEFNEntityInteractionTargetDetection
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TWeakObjectPtr<void> CachedObjectInteractionMode; // 0x0028 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UUEFNEntityInteractionTargetDetection, CachedObjectInteractionMode) == 40, "Offset mismatch for UUEFNEntityInteractionTargetDetection::CachedObjectInteractionMode");

// /Script/FNE_LiveEditToolsRuntime.UEFNEntityInteractionTargetEvaluator
// Kind: Class; super: InteractionTargetEvaluator
class UUEFNEntityInteractionTargetEvaluator
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TWeakObjectPtr<void> CachedObjectInteractionMode; // 0x0028 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UUEFNEntityInteractionTargetEvaluator, CachedObjectInteractionMode) == 40, "Offset mismatch for UUEFNEntityInteractionTargetEvaluator::CachedObjectInteractionMode");

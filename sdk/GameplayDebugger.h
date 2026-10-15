/**
 * decamp dumper generated SDK
 * Package: /Script/GameplayDebugger
 */
#pragma once
#include "Basic.h"

// /Script/GameplayDebugger.GameplayDebuggerCategoryConfig
// Kind: ScriptStruct; super: none
struct FGameplayDebuggerCategoryConfig
{
public:
    FString CategoryName; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::int32_t SlotIdx; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::uint8_t ActiveInGame; // 0x0014 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ActiveInSimulate; // 0x0015 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Hidden; // 0x0016 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x1]; // 0x0017
    std::uint8_t bOverrideSlotIdx; // 0x0018 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0019
    TArray<void*> InputHandlers; // 0x0020 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FGameplayDebuggerCategoryConfig, CategoryName) == 0, "Offset mismatch for FGameplayDebuggerCategoryConfig::CategoryName");
static_assert(offsetof(FGameplayDebuggerCategoryConfig, SlotIdx) == 16, "Offset mismatch for FGameplayDebuggerCategoryConfig::SlotIdx");
static_assert(offsetof(FGameplayDebuggerCategoryConfig, ActiveInGame) == 20, "Offset mismatch for FGameplayDebuggerCategoryConfig::ActiveInGame");
static_assert(offsetof(FGameplayDebuggerCategoryConfig, ActiveInSimulate) == 21, "Offset mismatch for FGameplayDebuggerCategoryConfig::ActiveInSimulate");
static_assert(offsetof(FGameplayDebuggerCategoryConfig, Hidden) == 22, "Offset mismatch for FGameplayDebuggerCategoryConfig::Hidden");
static_assert(offsetof(FGameplayDebuggerCategoryConfig, bOverrideSlotIdx) == 24, "Offset mismatch for FGameplayDebuggerCategoryConfig::bOverrideSlotIdx");
static_assert(offsetof(FGameplayDebuggerCategoryConfig, InputHandlers) == 32, "Offset mismatch for FGameplayDebuggerCategoryConfig::InputHandlers");

// /Script/GameplayDebugger.GameplayDebuggerCategoryData
// Kind: ScriptStruct; super: none
struct FGameplayDebuggerCategoryData
{
public:
    FName CategoryName; // 0x0000 (Size: 0x8, Type: NameProperty)
    TArray<void*> TextLines; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Shapes; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> DataPacks; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bIsEnabled; // 0x0038 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FGameplayDebuggerCategoryData, CategoryName) == 0, "Offset mismatch for FGameplayDebuggerCategoryData::CategoryName");
static_assert(offsetof(FGameplayDebuggerCategoryData, TextLines) == 8, "Offset mismatch for FGameplayDebuggerCategoryData::TextLines");
static_assert(offsetof(FGameplayDebuggerCategoryData, Shapes) == 24, "Offset mismatch for FGameplayDebuggerCategoryData::Shapes");
static_assert(offsetof(FGameplayDebuggerCategoryData, DataPacks) == 40, "Offset mismatch for FGameplayDebuggerCategoryData::DataPacks");
static_assert(offsetof(FGameplayDebuggerCategoryData, bIsEnabled) == 56, "Offset mismatch for FGameplayDebuggerCategoryData::bIsEnabled");

// /Script/GameplayDebugger.GameplayDebuggerDataPackHeader
// Kind: ScriptStruct; super: none
struct FGameplayDebuggerDataPackHeader
{
public:
    std::int16_t DataVersion; // 0x0000 (Size: 0x2, Type: Int16Property)
    std::int16_t SyncCounter; // 0x0002 (Size: 0x2, Type: Int16Property)
    std::int32_t DataSize; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t DataOffset; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsCompressed; // 0x000C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FGameplayDebuggerDataPackHeader, DataVersion) == 0, "Offset mismatch for FGameplayDebuggerDataPackHeader::DataVersion");
static_assert(offsetof(FGameplayDebuggerDataPackHeader, SyncCounter) == 2, "Offset mismatch for FGameplayDebuggerDataPackHeader::SyncCounter");
static_assert(offsetof(FGameplayDebuggerDataPackHeader, DataSize) == 4, "Offset mismatch for FGameplayDebuggerDataPackHeader::DataSize");
static_assert(offsetof(FGameplayDebuggerDataPackHeader, DataOffset) == 8, "Offset mismatch for FGameplayDebuggerDataPackHeader::DataOffset");
static_assert(offsetof(FGameplayDebuggerDataPackHeader, bIsCompressed) == 12, "Offset mismatch for FGameplayDebuggerDataPackHeader::bIsCompressed");

// /Script/GameplayDebugger.GameplayDebuggerDataPackRPCParams
// Kind: ScriptStruct; super: none
struct FGameplayDebuggerDataPackRPCParams
{
public:
    std::uint8_t CategoryName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::int32_t DataPackIdx; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::uint8_t Header[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    TArray<void*> Data; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FGameplayDebuggerDataPackRPCParams, CategoryName) == 0, "Offset mismatch for FGameplayDebuggerDataPackRPCParams::CategoryName");
static_assert(offsetof(FGameplayDebuggerDataPackRPCParams, DataPackIdx) == 4, "Offset mismatch for FGameplayDebuggerDataPackRPCParams::DataPackIdx");
static_assert(offsetof(FGameplayDebuggerDataPackRPCParams, Header) == 8, "Offset mismatch for FGameplayDebuggerDataPackRPCParams::Header");
static_assert(offsetof(FGameplayDebuggerDataPackRPCParams, Data) == 24, "Offset mismatch for FGameplayDebuggerDataPackRPCParams::Data");

// /Script/GameplayDebugger.GameplayDebuggerDebugActor
// Kind: ScriptStruct; super: none
struct FGameplayDebuggerDebugActor
{
public:
    TWeakObjectPtr<void> Actor; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t ActorName[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::int16_t SyncCounter; // 0x000C (Size: 0x2, Type: Int16Property)
};

static_assert(offsetof(FGameplayDebuggerDebugActor, Actor) == 0, "Offset mismatch for FGameplayDebuggerDebugActor::Actor");
static_assert(offsetof(FGameplayDebuggerDebugActor, ActorName) == 8, "Offset mismatch for FGameplayDebuggerDebugActor::ActorName");
static_assert(offsetof(FGameplayDebuggerDebugActor, SyncCounter) == 12, "Offset mismatch for FGameplayDebuggerDebugActor::SyncCounter");

// /Script/GameplayDebugger.GameplayDebuggerExtensionConfig
// Kind: ScriptStruct; super: none
struct FGameplayDebuggerExtensionConfig
{
public:
    FString ExtensionName; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t UseExtension; // 0x0010 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0011
    TArray<void*> InputHandlers; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FGameplayDebuggerExtensionConfig, ExtensionName) == 0, "Offset mismatch for FGameplayDebuggerExtensionConfig::ExtensionName");
static_assert(offsetof(FGameplayDebuggerExtensionConfig, UseExtension) == 16, "Offset mismatch for FGameplayDebuggerExtensionConfig::UseExtension");
static_assert(offsetof(FGameplayDebuggerExtensionConfig, InputHandlers) == 24, "Offset mismatch for FGameplayDebuggerExtensionConfig::InputHandlers");

// /Script/GameplayDebugger.GameplayDebuggerInputConfig
// Kind: ScriptStruct; super: none
struct FGameplayDebuggerInputConfig
{
public:
    FString ConfigName; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t Key[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    std::uint8_t bModAlt; // 0x0028 (Size: 0x1, Type: BoolProperty)
    // 0x0028 BoolProperty bModCmd (shared storage)
    // 0x0028 BoolProperty bModCtrl (shared storage)
    // 0x0028 BoolProperty bModShift (shared storage)
};

static_assert(offsetof(FGameplayDebuggerInputConfig, ConfigName) == 0, "Offset mismatch for FGameplayDebuggerInputConfig::ConfigName");
static_assert(offsetof(FGameplayDebuggerInputConfig, Key) == 16, "Offset mismatch for FGameplayDebuggerInputConfig::Key");
static_assert(offsetof(FGameplayDebuggerInputConfig, bModAlt) == 40, "Offset mismatch for FGameplayDebuggerInputConfig::bModAlt");

// /Script/GameplayDebugger.GameplayDebuggerNetPack
// Kind: ScriptStruct; super: none
struct FGameplayDebuggerNetPack
{
public:
    void* Owner; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> SavedData; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FGameplayDebuggerNetPack, Owner) == 0, "Offset mismatch for FGameplayDebuggerNetPack::Owner");
static_assert(offsetof(FGameplayDebuggerNetPack, SavedData) == 8, "Offset mismatch for FGameplayDebuggerNetPack::SavedData");

// /Script/GameplayDebugger.GameplayDebuggerPlayerData
// Kind: ScriptStruct; super: none
struct FGameplayDebuggerPlayerData
{
public:
    void* Controller; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* InputComponent; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    void* Replicator; // 0x0010 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FGameplayDebuggerPlayerData, Controller) == 0, "Offset mismatch for FGameplayDebuggerPlayerData::Controller");
static_assert(offsetof(FGameplayDebuggerPlayerData, InputComponent) == 8, "Offset mismatch for FGameplayDebuggerPlayerData::InputComponent");
static_assert(offsetof(FGameplayDebuggerPlayerData, Replicator) == 16, "Offset mismatch for FGameplayDebuggerPlayerData::Replicator");

// /Script/GameplayDebugger.GameplayDebuggerShape
// Kind: ScriptStruct; super: none
struct FGameplayDebuggerShape
{
public:
    TArray<void*> ShapeData; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    FString Description; // 0x0010 (Size: 0x10, Type: StrProperty)
    std::uint8_t Color[0x4]; // 0x0020 (Size: 0x4, Type: StructProperty)
    std::uint8_t Type; // 0x0024 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FGameplayDebuggerShape, ShapeData) == 0, "Offset mismatch for FGameplayDebuggerShape::ShapeData");
static_assert(offsetof(FGameplayDebuggerShape, Description) == 16, "Offset mismatch for FGameplayDebuggerShape::Description");
static_assert(offsetof(FGameplayDebuggerShape, Color) == 32, "Offset mismatch for FGameplayDebuggerShape::Color");
static_assert(offsetof(FGameplayDebuggerShape, Type) == 36, "Offset mismatch for FGameplayDebuggerShape::Type");

// /Script/GameplayDebugger.GameplayDebuggerVisLogSync
// Kind: ScriptStruct; super: none
struct FGameplayDebuggerVisLogSync
{
public:
    FString DeviceIDs; // 0x0000 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FGameplayDebuggerVisLogSync, DeviceIDs) == 0, "Offset mismatch for FGameplayDebuggerVisLogSync::DeviceIDs");

// /Script/GameplayDebugger.GameplayDebuggerCategoryReplicator
// Kind: Class; super: Actor
class UGameplayDebuggerCategoryReplicator
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    void* OwnerPC; // 0x0270 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bIsEnabled; // 0x0278 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0279
    std::uint8_t ReplicatedData[0x18]; // 0x0280 (Size: 0x18, Type: StructProperty)
    std::uint8_t DebugActor[0x10]; // 0x0298 (Size: 0x10, Type: StructProperty)
    std::uint8_t VisLogSync[0x10]; // 0x02A8 (Size: 0x10, Type: StructProperty)
    void* RenderingComp; // 0x02B8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UGameplayDebuggerCategoryReplicator, OwnerPC) == 624, "Offset mismatch for UGameplayDebuggerCategoryReplicator::OwnerPC");
static_assert(offsetof(UGameplayDebuggerCategoryReplicator, bIsEnabled) == 632, "Offset mismatch for UGameplayDebuggerCategoryReplicator::bIsEnabled");
static_assert(offsetof(UGameplayDebuggerCategoryReplicator, ReplicatedData) == 640, "Offset mismatch for UGameplayDebuggerCategoryReplicator::ReplicatedData");
static_assert(offsetof(UGameplayDebuggerCategoryReplicator, DebugActor) == 664, "Offset mismatch for UGameplayDebuggerCategoryReplicator::DebugActor");
static_assert(offsetof(UGameplayDebuggerCategoryReplicator, VisLogSync) == 680, "Offset mismatch for UGameplayDebuggerCategoryReplicator::VisLogSync");
static_assert(offsetof(UGameplayDebuggerCategoryReplicator, RenderingComp) == 696, "Offset mismatch for UGameplayDebuggerCategoryReplicator::RenderingComp");

// /Script/GameplayDebugger.GameplayDebuggerConfig
// Kind: Class; super: Object
class UGameplayDebuggerConfig
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t ActivationKey[0x18]; // 0x0028 (Size: 0x18, Type: StructProperty)
    std::uint8_t CategoryRowNextKey[0x18]; // 0x0040 (Size: 0x18, Type: StructProperty)
    std::uint8_t CategoryRowPrevKey[0x18]; // 0x0058 (Size: 0x18, Type: StructProperty)
    std::uint8_t CategorySlot0[0x18]; // 0x0070 (Size: 0x18, Type: StructProperty)
    std::uint8_t CategorySlot1[0x18]; // 0x0088 (Size: 0x18, Type: StructProperty)
    std::uint8_t CategorySlot2[0x18]; // 0x00A0 (Size: 0x18, Type: StructProperty)
    std::uint8_t CategorySlot3[0x18]; // 0x00B8 (Size: 0x18, Type: StructProperty)
    std::uint8_t CategorySlot4[0x18]; // 0x00D0 (Size: 0x18, Type: StructProperty)
    std::uint8_t CategorySlot5[0x18]; // 0x00E8 (Size: 0x18, Type: StructProperty)
    std::uint8_t CategorySlot6[0x18]; // 0x0100 (Size: 0x18, Type: StructProperty)
    std::uint8_t CategorySlot7[0x18]; // 0x0118 (Size: 0x18, Type: StructProperty)
    std::uint8_t CategorySlot8[0x18]; // 0x0130 (Size: 0x18, Type: StructProperty)
    std::uint8_t CategorySlot9[0x18]; // 0x0148 (Size: 0x18, Type: StructProperty)
    float DebugCanvasPaddingLeft; // 0x0160 (Size: 0x4, Type: FloatProperty)
    float DebugCanvasPaddingRight; // 0x0164 (Size: 0x4, Type: FloatProperty)
    float DebugCanvasPaddingTop; // 0x0168 (Size: 0x4, Type: FloatProperty)
    float DebugCanvasPaddingBottom; // 0x016C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bDebugCanvasEnableTextShadow; // 0x0170 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0171
    TArray<void*> Categories; // 0x0178 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Extensions; // 0x0188 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UGameplayDebuggerConfig, ActivationKey) == 40, "Offset mismatch for UGameplayDebuggerConfig::ActivationKey");
static_assert(offsetof(UGameplayDebuggerConfig, CategoryRowNextKey) == 64, "Offset mismatch for UGameplayDebuggerConfig::CategoryRowNextKey");
static_assert(offsetof(UGameplayDebuggerConfig, CategoryRowPrevKey) == 88, "Offset mismatch for UGameplayDebuggerConfig::CategoryRowPrevKey");
static_assert(offsetof(UGameplayDebuggerConfig, CategorySlot0) == 112, "Offset mismatch for UGameplayDebuggerConfig::CategorySlot0");
static_assert(offsetof(UGameplayDebuggerConfig, CategorySlot1) == 136, "Offset mismatch for UGameplayDebuggerConfig::CategorySlot1");
static_assert(offsetof(UGameplayDebuggerConfig, CategorySlot2) == 160, "Offset mismatch for UGameplayDebuggerConfig::CategorySlot2");
static_assert(offsetof(UGameplayDebuggerConfig, CategorySlot3) == 184, "Offset mismatch for UGameplayDebuggerConfig::CategorySlot3");
static_assert(offsetof(UGameplayDebuggerConfig, CategorySlot4) == 208, "Offset mismatch for UGameplayDebuggerConfig::CategorySlot4");
static_assert(offsetof(UGameplayDebuggerConfig, CategorySlot5) == 232, "Offset mismatch for UGameplayDebuggerConfig::CategorySlot5");
static_assert(offsetof(UGameplayDebuggerConfig, CategorySlot6) == 256, "Offset mismatch for UGameplayDebuggerConfig::CategorySlot6");
static_assert(offsetof(UGameplayDebuggerConfig, CategorySlot7) == 280, "Offset mismatch for UGameplayDebuggerConfig::CategorySlot7");
static_assert(offsetof(UGameplayDebuggerConfig, CategorySlot8) == 304, "Offset mismatch for UGameplayDebuggerConfig::CategorySlot8");
static_assert(offsetof(UGameplayDebuggerConfig, CategorySlot9) == 328, "Offset mismatch for UGameplayDebuggerConfig::CategorySlot9");
static_assert(offsetof(UGameplayDebuggerConfig, DebugCanvasPaddingLeft) == 352, "Offset mismatch for UGameplayDebuggerConfig::DebugCanvasPaddingLeft");
static_assert(offsetof(UGameplayDebuggerConfig, DebugCanvasPaddingRight) == 356, "Offset mismatch for UGameplayDebuggerConfig::DebugCanvasPaddingRight");
static_assert(offsetof(UGameplayDebuggerConfig, DebugCanvasPaddingTop) == 360, "Offset mismatch for UGameplayDebuggerConfig::DebugCanvasPaddingTop");
static_assert(offsetof(UGameplayDebuggerConfig, DebugCanvasPaddingBottom) == 364, "Offset mismatch for UGameplayDebuggerConfig::DebugCanvasPaddingBottom");
static_assert(offsetof(UGameplayDebuggerConfig, bDebugCanvasEnableTextShadow) == 368, "Offset mismatch for UGameplayDebuggerConfig::bDebugCanvasEnableTextShadow");
static_assert(offsetof(UGameplayDebuggerConfig, Categories) == 376, "Offset mismatch for UGameplayDebuggerConfig::Categories");
static_assert(offsetof(UGameplayDebuggerConfig, Extensions) == 392, "Offset mismatch for UGameplayDebuggerConfig::Extensions");

// /Script/GameplayDebugger.GameplayDebuggerLocalController
// Kind: Class; super: Object
class UGameplayDebuggerLocalController
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* CachedReplicator; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    void* CachedPlayerManager; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    void* DebugActorCandidate; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    void* HUDFont; // 0x0040 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UGameplayDebuggerLocalController, CachedReplicator) == 40, "Offset mismatch for UGameplayDebuggerLocalController::CachedReplicator");
static_assert(offsetof(UGameplayDebuggerLocalController, CachedPlayerManager) == 48, "Offset mismatch for UGameplayDebuggerLocalController::CachedPlayerManager");
static_assert(offsetof(UGameplayDebuggerLocalController, DebugActorCandidate) == 56, "Offset mismatch for UGameplayDebuggerLocalController::DebugActorCandidate");
static_assert(offsetof(UGameplayDebuggerLocalController, HUDFont) == 64, "Offset mismatch for UGameplayDebuggerLocalController::HUDFont");

// /Script/GameplayDebugger.GameplayDebuggerPlayerManager
// Kind: Class; super: Actor
class UGameplayDebuggerPlayerManager
{
public:
    std::uint8_t Pad_0000[0x278]; // 0x0000
    TArray<void*> PlayerData; // 0x0278 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PendingRegistrations; // 0x0288 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UGameplayDebuggerPlayerManager, PlayerData) == 632, "Offset mismatch for UGameplayDebuggerPlayerManager::PlayerData");
static_assert(offsetof(UGameplayDebuggerPlayerManager, PendingRegistrations) == 648, "Offset mismatch for UGameplayDebuggerPlayerManager::PendingRegistrations");

// /Script/GameplayDebugger.GameplayDebuggerRenderingComponent
// Kind: Class; super: DebugDrawComponent
class UGameplayDebuggerRenderingComponent
{
public:
    std::uint8_t Pad_0000[0x278]; // 0x0000
    float MinDrawDistance; // 0x0278 (Size: 0x4, Type: FloatProperty)
    float LDMaxDrawDistance; // 0x027C (Size: 0x4, Type: FloatProperty)
    float CachedMaxDrawDistance; // 0x0280 (Size: 0x4, Type: FloatProperty)
    std::uint8_t DepthPriorityGroup; // 0x0284 (Size: 0x1, Type: ByteProperty)
    std::uint8_t ViewOwnerDepthPriorityGroup; // 0x0285 (Size: 0x1, Type: ByteProperty)
    std::uint8_t IndirectLightingCacheQuality; // 0x0286 (Size: 0x1, Type: ByteProperty)
    std::uint8_t LightmapType; // 0x0287 (Size: 0x1, Type: EnumProperty)
    std::uint8_t HLODBatchingPolicy; // 0x0288 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ShadowCacheInvalidationBehavior; // 0x0289 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bAlwaysCreatePhysicsState; // 0x028A (Size: 0x1, Type: BoolProperty)
    // 0x028A BoolProperty bEnableAutoLODGeneration (shared storage)
    // 0x028A BoolProperty bGenerateOverlapEvents (shared storage)
    // 0x028A BoolProperty bIsActorTextureStreamingBuiltData (shared storage)
    // 0x028A BoolProperty bIsValidTextureStreamingBuiltData (shared storage)
    // 0x028A BoolProperty bMultiBodyOverlap (shared storage)
    // 0x028A BoolProperty bNeverDistanceCull (shared storage)
    std::uint8_t bAllowCullDistanceVolume; // 0x028B (Size: 0x1, Type: BoolProperty)
    // 0x028B BoolProperty bReturnMaterialOnMove (shared storage)
    // 0x028B BoolProperty bTraceComplexOnMove (shared storage)
    // 0x028B BoolProperty bUseViewOwnerDepthPriorityGroup (shared storage)
    // 0x028B BoolProperty bVisibleInRayTracing (shared storage)
    // 0x028B BoolProperty bVisibleInRealTimeSkyCaptures (shared storage)
    // 0x028B BoolProperty bVisibleInReflectionCaptures (shared storage)
    // 0x028B BoolProperty bVisibleInReflections (shared storage)
    std::uint8_t bHoldout; // 0x028C (Size: 0x1, Type: BoolProperty)
    // 0x028C BoolProperty bOnlyOwnerSee (shared storage)
    // 0x028C BoolProperty bOwnerNoSee (shared storage)
    // 0x028C BoolProperty bReceivesDecals (shared storage)
    // 0x028C BoolProperty bRenderInDepthPass (shared storage)
    // 0x028C BoolProperty bRenderInMainPass (shared storage)
    // 0x028C BoolProperty bTreatAsBackgroundForOcclusion (shared storage)
    // 0x028C BoolProperty bUseAsOccluder (shared storage)
    std::uint8_t CastShadow; // 0x028D (Size: 0x1, Type: BoolProperty)
    // 0x028D BoolProperty bAffectDynamicIndirectLighting (shared storage)
    // 0x028D BoolProperty bAffectIndirectLightingWhileHidden (shared storage)
    // 0x028D BoolProperty bEmissiveLightSource (shared storage)
    // 0x028D BoolProperty bForceMipStreaming (shared storage)
    // 0x028D BoolProperty bHasPerInstanceHitProxies (shared storage)
    // 0x028D BoolProperty bSelectable (shared storage)
    // 0x028D BoolProperty bWantsEditorEffects (shared storage)
    std::uint8_t bAffectDistanceFieldLighting; // 0x028E (Size: 0x1, Type: BoolProperty)
    // 0x028E BoolProperty bCastContactShadow (shared storage)
    // 0x028E BoolProperty bCastDynamicShadow (shared storage)
    // 0x028E BoolProperty bCastFarShadow (shared storage)
    // 0x028E BoolProperty bCastInsetShadow (shared storage)
    // 0x028E BoolProperty bCastStaticShadow (shared storage)
    // 0x028E BoolProperty bCastVolumetricTranslucentShadow (shared storage)
    // 0x028E BoolProperty bSelfShadowOnly (shared storage)
    std::uint8_t bCastCinematicShadow; // 0x028F (Size: 0x1, Type: BoolProperty)
    // 0x028F BoolProperty bCastHiddenShadow (shared storage)
    // 0x028F BoolProperty bCastShadowAsTwoSided (shared storage)
    // 0x028F BoolProperty bExcludeFromLightAttachmentGroup (shared storage)
    // 0x028F BoolProperty bLightAsIfStatic (shared storage)
    // 0x028F BoolProperty bLightAttachmentsAsGroup (shared storage)
    // 0x028F BoolProperty bReceiveMobileCSMShadows (shared storage)
    // 0x028F BoolProperty bSingleSampleShadowFromStationaryLights (shared storage)
    std::uint8_t AlwaysLoadOnClient; // 0x0290 (Size: 0x1, Type: BoolProperty)
    // 0x0290 BoolProperty AlwaysLoadOnServer (shared storage)
    // 0x0290 BoolProperty bApplyImpulseOnDamage (shared storage)
    // 0x0290 BoolProperty bFillCollisionUnderneathForNavmesh (shared storage)
    // 0x0290 BoolProperty bIgnoreRadialForce (shared storage)
    // 0x0290 BoolProperty bIgnoreRadialImpulse (shared storage)
    // 0x0290 BoolProperty bRasterizeAsFilledConvexVolume (shared storage)
    // 0x0290 BoolProperty bReplicatePhysicsToAutonomousProxy (shared storage)
    std::uint8_t bHiddenInSceneCapture; // 0x0291 (Size: 0x1, Type: BoolProperty)
    // 0x0291 BoolProperty bIsBeingMovedByEditor (shared storage)
    // 0x0291 BoolProperty bLumenHeightfield (shared storage)
    // 0x0291 BoolProperty bRayTracingFarField (shared storage)
    // 0x0291 BoolProperty bRenderCustomDepth (shared storage)
    // 0x0291 BoolProperty bUseEditorCompositing (shared storage)
    // 0x0291 BoolProperty bVisibleInSceneCaptureOnly (shared storage)
    std::uint8_t FirstPersonPrimitiveType; // 0x0292 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bHasNoStreamableTextures; // 0x0293 (Size: 0x1, Type: BoolProperty)
    // 0x0293 BoolProperty bStaticWhenNotMoveable (shared storage)
    std::uint8_t bHasCustomNavigableGeometry; // 0x0294 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x1]; // 0x0295
    std::uint8_t CanCharacterStepUpOn; // 0x0296 (Size: 0x1, Type: ByteProperty)
    std::uint8_t LightingChannels[0x1]; // 0x0297 (Size: 0x1, Type: StructProperty)
    std::uint8_t RayTracingGroupCullingPriority; // 0x0298 (Size: 0x1, Type: EnumProperty)
    std::uint8_t CustomDepthStencilWriteMask; // 0x0299 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ExcludeFromHLODLevels; // 0x029A (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0002[0x1]; // 0x029B
    std::int32_t RayTracingGroupId; // 0x029C (Size: 0x4, Type: IntProperty)
    std::int32_t VisibilityId; // 0x02A0 (Size: 0x4, Type: IntProperty)
    std::int32_t CustomDepthStencilValue; // 0x02A4 (Size: 0x4, Type: IntProperty)
    std::uint8_t CustomPrimitiveData[0x10]; // 0x02A8 (Size: 0x10, Type: StructProperty)
    std::uint8_t CustomPrimitiveDataInternal[0x50]; // 0x02B8 (Size: 0x50, Type: StructProperty)
    std::int32_t TranslucencySortPriority; // 0x0308 (Size: 0x4, Type: IntProperty)
    float TranslucencySortDistanceOffset; // 0x030C (Size: 0x4, Type: FloatProperty)
    TArray<void*> RuntimeVirtualTextures; // 0x0310 (Size: 0x10, Type: ArrayProperty)
    std::int8_t VirtualTextureLodBias; // 0x0320 (Size: 0x1, Type: Int8Property)
    std::int8_t VirtualTextureCullMips; // 0x0321 (Size: 0x1, Type: Int8Property)
    std::int8_t VirtualTextureMinCoverage; // 0x0322 (Size: 0x1, Type: Int8Property)
    std::uint8_t VirtualTextureRenderPassType; // 0x0323 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x24]; // 0x0324
    float BoundsScale; // 0x0348 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0004[0x4]; // 0x034C
    TArray<void*> MoveIgnoreActors; // 0x0350 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> MoveIgnoreComponents; // 0x0360 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0005[0x10]; // 0x0370
    std::uint8_t BodyInstance[0x1A8]; // 0x0380 (Size: 0x1A8, Type: StructProperty)
    std::uint8_t OnComponentHit[0x1]; // 0x0528 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnComponentBeginOverlap[0x1]; // 0x0529 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnComponentEndOverlap[0x1]; // 0x052A (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnComponentWake[0x1]; // 0x052B (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnComponentSleep[0x2]; // 0x052C (Size: 0x2, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnComponentPhysicsStateChanged[0x1]; // 0x052E (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnBeginCursorOver[0x1]; // 0x052F (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnEndCursorOver[0x1]; // 0x0530 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnClicked[0x1]; // 0x0531 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnReleased[0x1]; // 0x0532 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchBegin[0x1]; // 0x0533 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchEnd[0x1]; // 0x0534 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchEnter[0x1]; // 0x0535 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchLeave[0x1]; // 0x0536 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnTouchBegan[0x1]; // 0x0537 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnTouchEnded[0x1]; // 0x0538 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnTouchEntered[0x1]; // 0x0539 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    FMulticastSparseDelegate OnTouchExited; // 0x053A (Size: 0x10, Type: MulticastSparseDelegateProperty)
    std::uint8_t Pad_0006[0xE]; // 0x054A
    void* LODParentPrimitive; // 0x0558 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UGameplayDebuggerRenderingComponent, MinDrawDistance) == 632, "Offset mismatch for UGameplayDebuggerRenderingComponent::MinDrawDistance");
static_assert(offsetof(UGameplayDebuggerRenderingComponent, LDMaxDrawDistance) == 636, "Offset mismatch for UGameplayDebuggerRenderingComponent::LDMaxDrawDistance");
static_assert(offsetof(UGameplayDebuggerRenderingComponent, CachedMaxDrawDistance) == 640, "Offset mismatch for UGameplayDebuggerRenderingComponent::CachedMaxDrawDistance");
static_assert(offsetof(UGameplayDebuggerRenderingComponent, DepthPriorityGroup) == 644, "Offset mismatch for UGameplayDebuggerRenderingComponent::DepthPriorityGroup");
static_assert(offsetof(UGameplayDebuggerRenderingComponent, ViewOwnerDepthPriorityGroup) == 645, "Offset mismatch for UGameplayDebuggerRenderingComponent::ViewOwnerDepthPriorityGroup");
static_assert(offsetof(UGameplayDebuggerRenderingComponent, IndirectLightingCacheQuality) == 646, "Offset mismatch for UGameplayDebuggerRenderingComponent::IndirectLightingCacheQuality");
static_assert(offsetof(UGameplayDebuggerRenderingComponent, LightmapType) == 647, "Offset mismatch for UGameplayDebuggerRenderingComponent::LightmapType");
static_assert(offsetof(UGameplayDebuggerRenderingComponent, HLODBatchingPolicy) == 648, "Offset mismatch for UGameplayDebuggerRenderingComponent::HLODBatchingPolicy");
static_assert(offsetof(UGameplayDebuggerRenderingComponent, ShadowCacheInvalidationBehavior) == 649, "Offset mismatch for UGameplayDebuggerRenderingComponent::ShadowCacheInvalidationBehavior");
static_assert(offsetof(UGameplayDebuggerRenderingComponent, bAlwaysCreatePhysicsState) == 650, "Offset mismatch for UGameplayDebuggerRenderingComponent::bAlwaysCreatePhysicsState");
static_assert(offsetof(UGameplayDebuggerRenderingComponent, bAllowCullDistanceVolume) == 651, "Offset mismatch for UGameplayDebuggerRenderingComponent::bAllowCullDistanceVolume");
static_assert(offsetof(UGameplayDebuggerRenderingComponent, bHoldout) == 652, "Offset mismatch for UGameplayDebuggerRenderingComponent::bHoldout");
static_assert(offsetof(UGameplayDebuggerRenderingComponent, CastShadow) == 653, "Offset mismatch for UGameplayDebuggerRenderingComponent::CastShadow");
static_assert(offsetof(UGameplayDebuggerRenderingComponent, bAffectDistanceFieldLighting) == 654, "Offset mismatch for UGameplayDebuggerRenderingComponent::bAffectDistanceFieldLighting");
static_assert(offsetof(UGameplayDebuggerRenderingComponent, bCastCinematicShadow) == 655, "Offset mismatch for UGameplayDebuggerRenderingComponent::bCastCinematicShadow");
static_assert(offsetof(UGameplayDebuggerRenderingComponent, AlwaysLoadOnClient) == 656, "Offset mismatch for UGameplayDebuggerRenderingComponent::AlwaysLoadOnClient");
static_assert(offsetof(UGameplayDebuggerRenderingComponent, bHiddenInSceneCapture) == 657, "Offset mismatch for UGameplayDebuggerRenderingComponent::bHiddenInSceneCapture");
static_assert(offsetof(UGameplayDebuggerRenderingComponent, FirstPersonPrimitiveType) == 658, "Offset mismatch for UGameplayDebuggerRenderingComponent::FirstPersonPrimitiveType");
static_assert(offsetof(UGameplayDebuggerRenderingComponent, bHasNoStreamableTextures) == 659, "Offset mismatch for UGameplayDebuggerRenderingComponent::bHasNoStreamableTextures");
static_assert(offsetof(UGameplayDebuggerRenderingComponent, bHasCustomNavigableGeometry) == 660, "Offset mismatch for UGameplayDebuggerRenderingComponent::bHasCustomNavigableGeometry");
static_assert(offsetof(UGameplayDebuggerRenderingComponent, CanCharacterStepUpOn) == 662, "Offset mismatch for UGameplayDebuggerRenderingComponent::CanCharacterStepUpOn");
static_assert(offsetof(UGameplayDebuggerRenderingComponent, LightingChannels) == 663, "Offset mismatch for UGameplayDebuggerRenderingComponent::LightingChannels");
static_assert(offsetof(UGameplayDebuggerRenderingComponent, RayTracingGroupCullingPriority) == 664, "Offset mismatch for UGameplayDebuggerRenderingComponent::RayTracingGroupCullingPriority");
static_assert(offsetof(UGameplayDebuggerRenderingComponent, CustomDepthStencilWriteMask) == 665, "Offset mismatch for UGameplayDebuggerRenderingComponent::CustomDepthStencilWriteMask");
static_assert(offsetof(UGameplayDebuggerRenderingComponent, ExcludeFromHLODLevels) == 666, "Offset mismatch for UGameplayDebuggerRenderingComponent::ExcludeFromHLODLevels");
static_assert(offsetof(UGameplayDebuggerRenderingComponent, RayTracingGroupId) == 668, "Offset mismatch for UGameplayDebuggerRenderingComponent::RayTracingGroupId");
static_assert(offsetof(UGameplayDebuggerRenderingComponent, VisibilityId) == 672, "Offset mismatch for UGameplayDebuggerRenderingComponent::VisibilityId");
static_assert(offsetof(UGameplayDebuggerRenderingComponent, CustomDepthStencilValue) == 676, "Offset mismatch for UGameplayDebuggerRenderingComponent::CustomDepthStencilValue");
static_assert(offsetof(UGameplayDebuggerRenderingComponent, CustomPrimitiveData) == 680, "Offset mismatch for UGameplayDebuggerRenderingComponent::CustomPrimitiveData");
static_assert(offsetof(UGameplayDebuggerRenderingComponent, CustomPrimitiveDataInternal) == 696, "Offset mismatch for UGameplayDebuggerRenderingComponent::CustomPrimitiveDataInternal");
static_assert(offsetof(UGameplayDebuggerRenderingComponent, TranslucencySortPriority) == 776, "Offset mismatch for UGameplayDebuggerRenderingComponent::TranslucencySortPriority");
static_assert(offsetof(UGameplayDebuggerRenderingComponent, TranslucencySortDistanceOffset) == 780, "Offset mismatch for UGameplayDebuggerRenderingComponent::TranslucencySortDistanceOffset");
static_assert(offsetof(UGameplayDebuggerRenderingComponent, RuntimeVirtualTextures) == 784, "Offset mismatch for UGameplayDebuggerRenderingComponent::RuntimeVirtualTextures");
static_assert(offsetof(UGameplayDebuggerRenderingComponent, VirtualTextureLodBias) == 800, "Offset mismatch for UGameplayDebuggerRenderingComponent::VirtualTextureLodBias");
static_assert(offsetof(UGameplayDebuggerRenderingComponent, VirtualTextureCullMips) == 801, "Offset mismatch for UGameplayDebuggerRenderingComponent::VirtualTextureCullMips");
static_assert(offsetof(UGameplayDebuggerRenderingComponent, VirtualTextureMinCoverage) == 802, "Offset mismatch for UGameplayDebuggerRenderingComponent::VirtualTextureMinCoverage");
static_assert(offsetof(UGameplayDebuggerRenderingComponent, VirtualTextureRenderPassType) == 803, "Offset mismatch for UGameplayDebuggerRenderingComponent::VirtualTextureRenderPassType");
static_assert(offsetof(UGameplayDebuggerRenderingComponent, BoundsScale) == 840, "Offset mismatch for UGameplayDebuggerRenderingComponent::BoundsScale");
static_assert(offsetof(UGameplayDebuggerRenderingComponent, MoveIgnoreActors) == 848, "Offset mismatch for UGameplayDebuggerRenderingComponent::MoveIgnoreActors");
static_assert(offsetof(UGameplayDebuggerRenderingComponent, MoveIgnoreComponents) == 864, "Offset mismatch for UGameplayDebuggerRenderingComponent::MoveIgnoreComponents");
static_assert(offsetof(UGameplayDebuggerRenderingComponent, BodyInstance) == 896, "Offset mismatch for UGameplayDebuggerRenderingComponent::BodyInstance");
static_assert(offsetof(UGameplayDebuggerRenderingComponent, OnComponentHit) == 1320, "Offset mismatch for UGameplayDebuggerRenderingComponent::OnComponentHit");
static_assert(offsetof(UGameplayDebuggerRenderingComponent, OnComponentBeginOverlap) == 1321, "Offset mismatch for UGameplayDebuggerRenderingComponent::OnComponentBeginOverlap");
static_assert(offsetof(UGameplayDebuggerRenderingComponent, OnComponentEndOverlap) == 1322, "Offset mismatch for UGameplayDebuggerRenderingComponent::OnComponentEndOverlap");
static_assert(offsetof(UGameplayDebuggerRenderingComponent, OnComponentWake) == 1323, "Offset mismatch for UGameplayDebuggerRenderingComponent::OnComponentWake");
static_assert(offsetof(UGameplayDebuggerRenderingComponent, OnComponentSleep) == 1324, "Offset mismatch for UGameplayDebuggerRenderingComponent::OnComponentSleep");
static_assert(offsetof(UGameplayDebuggerRenderingComponent, OnComponentPhysicsStateChanged) == 1326, "Offset mismatch for UGameplayDebuggerRenderingComponent::OnComponentPhysicsStateChanged");
static_assert(offsetof(UGameplayDebuggerRenderingComponent, OnBeginCursorOver) == 1327, "Offset mismatch for UGameplayDebuggerRenderingComponent::OnBeginCursorOver");
static_assert(offsetof(UGameplayDebuggerRenderingComponent, OnEndCursorOver) == 1328, "Offset mismatch for UGameplayDebuggerRenderingComponent::OnEndCursorOver");
static_assert(offsetof(UGameplayDebuggerRenderingComponent, OnClicked) == 1329, "Offset mismatch for UGameplayDebuggerRenderingComponent::OnClicked");
static_assert(offsetof(UGameplayDebuggerRenderingComponent, OnReleased) == 1330, "Offset mismatch for UGameplayDebuggerRenderingComponent::OnReleased");
static_assert(offsetof(UGameplayDebuggerRenderingComponent, OnInputTouchBegin) == 1331, "Offset mismatch for UGameplayDebuggerRenderingComponent::OnInputTouchBegin");
static_assert(offsetof(UGameplayDebuggerRenderingComponent, OnInputTouchEnd) == 1332, "Offset mismatch for UGameplayDebuggerRenderingComponent::OnInputTouchEnd");
static_assert(offsetof(UGameplayDebuggerRenderingComponent, OnInputTouchEnter) == 1333, "Offset mismatch for UGameplayDebuggerRenderingComponent::OnInputTouchEnter");
static_assert(offsetof(UGameplayDebuggerRenderingComponent, OnInputTouchLeave) == 1334, "Offset mismatch for UGameplayDebuggerRenderingComponent::OnInputTouchLeave");
static_assert(offsetof(UGameplayDebuggerRenderingComponent, OnTouchBegan) == 1335, "Offset mismatch for UGameplayDebuggerRenderingComponent::OnTouchBegan");
static_assert(offsetof(UGameplayDebuggerRenderingComponent, OnTouchEnded) == 1336, "Offset mismatch for UGameplayDebuggerRenderingComponent::OnTouchEnded");
static_assert(offsetof(UGameplayDebuggerRenderingComponent, OnTouchEntered) == 1337, "Offset mismatch for UGameplayDebuggerRenderingComponent::OnTouchEntered");
static_assert(offsetof(UGameplayDebuggerRenderingComponent, OnTouchExited) == 1338, "Offset mismatch for UGameplayDebuggerRenderingComponent::OnTouchExited");
static_assert(offsetof(UGameplayDebuggerRenderingComponent, LODParentPrimitive) == 1368, "Offset mismatch for UGameplayDebuggerRenderingComponent::LODParentPrimitive");

// /Script/GameplayDebugger.GameplayDebuggerUserSettings
// Kind: Class; super: DeveloperSettings
class UGameplayDebuggerUserSettings
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t bEnableGameplayDebuggerInEditor; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0031
    float MaxViewDistance; // 0x0034 (Size: 0x4, Type: FloatProperty)
    float MaxViewAngle; // 0x0038 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x003C
    std::uint8_t EnabledCategories[0x10]; // 0x0040 (Size: 0x10, Type: SetProperty)
    std::int32_t FontSize; // 0x0050 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UGameplayDebuggerUserSettings, bEnableGameplayDebuggerInEditor) == 48, "Offset mismatch for UGameplayDebuggerUserSettings::bEnableGameplayDebuggerInEditor");
static_assert(offsetof(UGameplayDebuggerUserSettings, MaxViewDistance) == 52, "Offset mismatch for UGameplayDebuggerUserSettings::MaxViewDistance");
static_assert(offsetof(UGameplayDebuggerUserSettings, MaxViewAngle) == 56, "Offset mismatch for UGameplayDebuggerUserSettings::MaxViewAngle");
static_assert(offsetof(UGameplayDebuggerUserSettings, EnabledCategories) == 64, "Offset mismatch for UGameplayDebuggerUserSettings::EnabledCategories");
static_assert(offsetof(UGameplayDebuggerUserSettings, FontSize) == 80, "Offset mismatch for UGameplayDebuggerUserSettings::FontSize");

/**
 * decamp dumper generated SDK
 * Package: /Script/SpritesRuntime
 */
#pragma once
#include "Basic.h"

// /Script/SpritesRuntime.BackpackData
// Kind: ScriptStruct; super: none
struct FBackpackData
{
public:
    std::uint8_t WeaponGuid[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    void* BackpackClass; // 0x0010 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(FBackpackData, WeaponGuid) == 0, "Offset mismatch for FBackpackData::WeaponGuid");
static_assert(offsetof(FBackpackData, BackpackClass) == 16, "Offset mismatch for FBackpackData::BackpackClass");

// /Script/SpritesRuntime.SpriteDiscoverableDataRow
// Kind: ScriptStruct; super: TableRowBase
struct FSpriteDiscoverableDataRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    float Priority; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FSpriteDiscoverableDataRow, Priority) == 8, "Offset mismatch for FSpriteDiscoverableDataRow::Priority");

// /Script/SpritesRuntime.FortQueryGenerator_SpriteDiscoverables
// Kind: Class; super: EnvQueryGenerator
class UFortQueryGenerator_SpriteDiscoverables
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    FString OptionName; // 0x0030 (Size: 0x10, Type: StrProperty)
    void* ItemType; // 0x0040 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bAutoSortTests; // 0x0048 (Size: 0x1, Type: BoolProperty)
    // 0x0048 BoolProperty bCanRunAsync (shared storage)
    std::uint8_t Pad_0001[0x3]; // 0x0049
    std::uint8_t EnvQueryResultNormalizationOption; // 0x004C (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UFortQueryGenerator_SpriteDiscoverables, OptionName) == 48, "Offset mismatch for UFortQueryGenerator_SpriteDiscoverables::OptionName");
static_assert(offsetof(UFortQueryGenerator_SpriteDiscoverables, ItemType) == 64, "Offset mismatch for UFortQueryGenerator_SpriteDiscoverables::ItemType");
static_assert(offsetof(UFortQueryGenerator_SpriteDiscoverables, bAutoSortTests) == 72, "Offset mismatch for UFortQueryGenerator_SpriteDiscoverables::bAutoSortTests");
static_assert(offsetof(UFortQueryGenerator_SpriteDiscoverables, EnvQueryResultNormalizationOption) == 76, "Offset mismatch for UFortQueryGenerator_SpriteDiscoverables::EnvQueryResultNormalizationOption");

// /Script/SpritesRuntime.FortQueryTest_SpriteDiscoverableCanBeDiscovered
// Kind: Class; super: EnvQueryTest
class UFortQueryTest_SpriteDiscoverableCanBeDiscovered
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::int32_t TestOrder; // 0x0030 (Size: 0x4, Type: IntProperty)
    std::uint8_t TestPurpose; // 0x0034 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0035
    FString TestComment; // 0x0038 (Size: 0x10, Type: StrProperty)
    std::uint8_t MultipleContextFilterOp; // 0x0048 (Size: 0x1, Type: ByteProperty)
    std::uint8_t MultipleContextScoreOp; // 0x0049 (Size: 0x1, Type: ByteProperty)
    std::uint8_t FilterType; // 0x004A (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0002[0x5]; // 0x004B
    std::uint8_t BoolValue[0x38]; // 0x0050 (Size: 0x38, Type: StructProperty)
    std::uint8_t FloatValueMin[0x38]; // 0x0088 (Size: 0x38, Type: StructProperty)
    std::uint8_t FloatValueMax[0x39]; // 0x00C0 (Size: 0x39, Type: StructProperty)
    std::uint8_t ScoringEquation; // 0x00F9 (Size: 0x1, Type: ByteProperty)
    std::uint8_t ClampMinType; // 0x00FA (Size: 0x1, Type: ByteProperty)
    std::uint8_t ClampMaxType; // 0x00FB (Size: 0x1, Type: ByteProperty)
    std::uint8_t NormalizationType; // 0x00FC (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x3]; // 0x00FD
    std::uint8_t ScoreClampMin[0x38]; // 0x0100 (Size: 0x38, Type: StructProperty)
    std::uint8_t ScoreClampMax[0x38]; // 0x0138 (Size: 0x38, Type: StructProperty)
    std::uint8_t ScoringFactor[0x38]; // 0x0170 (Size: 0x38, Type: StructProperty)
    std::uint8_t ReferenceValue[0x38]; // 0x01A8 (Size: 0x38, Type: StructProperty)
    std::uint8_t bDefineReferenceValue; // 0x01E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0xF]; // 0x01E1
    std::uint8_t bWorkOnFloatValues; // 0x01F0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortQueryTest_SpriteDiscoverableCanBeDiscovered, TestOrder) == 48, "Offset mismatch for UFortQueryTest_SpriteDiscoverableCanBeDiscovered::TestOrder");
static_assert(offsetof(UFortQueryTest_SpriteDiscoverableCanBeDiscovered, TestPurpose) == 52, "Offset mismatch for UFortQueryTest_SpriteDiscoverableCanBeDiscovered::TestPurpose");
static_assert(offsetof(UFortQueryTest_SpriteDiscoverableCanBeDiscovered, TestComment) == 56, "Offset mismatch for UFortQueryTest_SpriteDiscoverableCanBeDiscovered::TestComment");
static_assert(offsetof(UFortQueryTest_SpriteDiscoverableCanBeDiscovered, MultipleContextFilterOp) == 72, "Offset mismatch for UFortQueryTest_SpriteDiscoverableCanBeDiscovered::MultipleContextFilterOp");
static_assert(offsetof(UFortQueryTest_SpriteDiscoverableCanBeDiscovered, MultipleContextScoreOp) == 73, "Offset mismatch for UFortQueryTest_SpriteDiscoverableCanBeDiscovered::MultipleContextScoreOp");
static_assert(offsetof(UFortQueryTest_SpriteDiscoverableCanBeDiscovered, FilterType) == 74, "Offset mismatch for UFortQueryTest_SpriteDiscoverableCanBeDiscovered::FilterType");
static_assert(offsetof(UFortQueryTest_SpriteDiscoverableCanBeDiscovered, BoolValue) == 80, "Offset mismatch for UFortQueryTest_SpriteDiscoverableCanBeDiscovered::BoolValue");
static_assert(offsetof(UFortQueryTest_SpriteDiscoverableCanBeDiscovered, FloatValueMin) == 136, "Offset mismatch for UFortQueryTest_SpriteDiscoverableCanBeDiscovered::FloatValueMin");
static_assert(offsetof(UFortQueryTest_SpriteDiscoverableCanBeDiscovered, FloatValueMax) == 192, "Offset mismatch for UFortQueryTest_SpriteDiscoverableCanBeDiscovered::FloatValueMax");
static_assert(offsetof(UFortQueryTest_SpriteDiscoverableCanBeDiscovered, ScoringEquation) == 249, "Offset mismatch for UFortQueryTest_SpriteDiscoverableCanBeDiscovered::ScoringEquation");
static_assert(offsetof(UFortQueryTest_SpriteDiscoverableCanBeDiscovered, ClampMinType) == 250, "Offset mismatch for UFortQueryTest_SpriteDiscoverableCanBeDiscovered::ClampMinType");
static_assert(offsetof(UFortQueryTest_SpriteDiscoverableCanBeDiscovered, ClampMaxType) == 251, "Offset mismatch for UFortQueryTest_SpriteDiscoverableCanBeDiscovered::ClampMaxType");
static_assert(offsetof(UFortQueryTest_SpriteDiscoverableCanBeDiscovered, NormalizationType) == 252, "Offset mismatch for UFortQueryTest_SpriteDiscoverableCanBeDiscovered::NormalizationType");
static_assert(offsetof(UFortQueryTest_SpriteDiscoverableCanBeDiscovered, ScoreClampMin) == 256, "Offset mismatch for UFortQueryTest_SpriteDiscoverableCanBeDiscovered::ScoreClampMin");
static_assert(offsetof(UFortQueryTest_SpriteDiscoverableCanBeDiscovered, ScoreClampMax) == 312, "Offset mismatch for UFortQueryTest_SpriteDiscoverableCanBeDiscovered::ScoreClampMax");
static_assert(offsetof(UFortQueryTest_SpriteDiscoverableCanBeDiscovered, ScoringFactor) == 368, "Offset mismatch for UFortQueryTest_SpriteDiscoverableCanBeDiscovered::ScoringFactor");
static_assert(offsetof(UFortQueryTest_SpriteDiscoverableCanBeDiscovered, ReferenceValue) == 424, "Offset mismatch for UFortQueryTest_SpriteDiscoverableCanBeDiscovered::ReferenceValue");
static_assert(offsetof(UFortQueryTest_SpriteDiscoverableCanBeDiscovered, bDefineReferenceValue) == 480, "Offset mismatch for UFortQueryTest_SpriteDiscoverableCanBeDiscovered::bDefineReferenceValue");
static_assert(offsetof(UFortQueryTest_SpriteDiscoverableCanBeDiscovered, bWorkOnFloatValues) == 496, "Offset mismatch for UFortQueryTest_SpriteDiscoverableCanBeDiscovered::bWorkOnFloatValues");

// /Script/SpritesRuntime.FortQueryTest_SpriteDiscoverablePriority
// Kind: Class; super: EnvQueryTest
class UFortQueryTest_SpriteDiscoverablePriority
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::int32_t TestOrder; // 0x0030 (Size: 0x4, Type: IntProperty)
    std::uint8_t TestPurpose; // 0x0034 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0035
    FString TestComment; // 0x0038 (Size: 0x10, Type: StrProperty)
    std::uint8_t MultipleContextFilterOp; // 0x0048 (Size: 0x1, Type: ByteProperty)
    std::uint8_t MultipleContextScoreOp; // 0x0049 (Size: 0x1, Type: ByteProperty)
    std::uint8_t FilterType; // 0x004A (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0002[0x5]; // 0x004B
    std::uint8_t BoolValue[0x38]; // 0x0050 (Size: 0x38, Type: StructProperty)
    std::uint8_t FloatValueMin[0x38]; // 0x0088 (Size: 0x38, Type: StructProperty)
    std::uint8_t FloatValueMax[0x39]; // 0x00C0 (Size: 0x39, Type: StructProperty)
    std::uint8_t ScoringEquation; // 0x00F9 (Size: 0x1, Type: ByteProperty)
    std::uint8_t ClampMinType; // 0x00FA (Size: 0x1, Type: ByteProperty)
    std::uint8_t ClampMaxType; // 0x00FB (Size: 0x1, Type: ByteProperty)
    std::uint8_t NormalizationType; // 0x00FC (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x3]; // 0x00FD
    std::uint8_t ScoreClampMin[0x38]; // 0x0100 (Size: 0x38, Type: StructProperty)
    std::uint8_t ScoreClampMax[0x38]; // 0x0138 (Size: 0x38, Type: StructProperty)
    std::uint8_t ScoringFactor[0x38]; // 0x0170 (Size: 0x38, Type: StructProperty)
    std::uint8_t ReferenceValue[0x38]; // 0x01A8 (Size: 0x38, Type: StructProperty)
    std::uint8_t bDefineReferenceValue; // 0x01E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0xF]; // 0x01E1
    std::uint8_t bWorkOnFloatValues; // 0x01F0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortQueryTest_SpriteDiscoverablePriority, TestOrder) == 48, "Offset mismatch for UFortQueryTest_SpriteDiscoverablePriority::TestOrder");
static_assert(offsetof(UFortQueryTest_SpriteDiscoverablePriority, TestPurpose) == 52, "Offset mismatch for UFortQueryTest_SpriteDiscoverablePriority::TestPurpose");
static_assert(offsetof(UFortQueryTest_SpriteDiscoverablePriority, TestComment) == 56, "Offset mismatch for UFortQueryTest_SpriteDiscoverablePriority::TestComment");
static_assert(offsetof(UFortQueryTest_SpriteDiscoverablePriority, MultipleContextFilterOp) == 72, "Offset mismatch for UFortQueryTest_SpriteDiscoverablePriority::MultipleContextFilterOp");
static_assert(offsetof(UFortQueryTest_SpriteDiscoverablePriority, MultipleContextScoreOp) == 73, "Offset mismatch for UFortQueryTest_SpriteDiscoverablePriority::MultipleContextScoreOp");
static_assert(offsetof(UFortQueryTest_SpriteDiscoverablePriority, FilterType) == 74, "Offset mismatch for UFortQueryTest_SpriteDiscoverablePriority::FilterType");
static_assert(offsetof(UFortQueryTest_SpriteDiscoverablePriority, BoolValue) == 80, "Offset mismatch for UFortQueryTest_SpriteDiscoverablePriority::BoolValue");
static_assert(offsetof(UFortQueryTest_SpriteDiscoverablePriority, FloatValueMin) == 136, "Offset mismatch for UFortQueryTest_SpriteDiscoverablePriority::FloatValueMin");
static_assert(offsetof(UFortQueryTest_SpriteDiscoverablePriority, FloatValueMax) == 192, "Offset mismatch for UFortQueryTest_SpriteDiscoverablePriority::FloatValueMax");
static_assert(offsetof(UFortQueryTest_SpriteDiscoverablePriority, ScoringEquation) == 249, "Offset mismatch for UFortQueryTest_SpriteDiscoverablePriority::ScoringEquation");
static_assert(offsetof(UFortQueryTest_SpriteDiscoverablePriority, ClampMinType) == 250, "Offset mismatch for UFortQueryTest_SpriteDiscoverablePriority::ClampMinType");
static_assert(offsetof(UFortQueryTest_SpriteDiscoverablePriority, ClampMaxType) == 251, "Offset mismatch for UFortQueryTest_SpriteDiscoverablePriority::ClampMaxType");
static_assert(offsetof(UFortQueryTest_SpriteDiscoverablePriority, NormalizationType) == 252, "Offset mismatch for UFortQueryTest_SpriteDiscoverablePriority::NormalizationType");
static_assert(offsetof(UFortQueryTest_SpriteDiscoverablePriority, ScoreClampMin) == 256, "Offset mismatch for UFortQueryTest_SpriteDiscoverablePriority::ScoreClampMin");
static_assert(offsetof(UFortQueryTest_SpriteDiscoverablePriority, ScoreClampMax) == 312, "Offset mismatch for UFortQueryTest_SpriteDiscoverablePriority::ScoreClampMax");
static_assert(offsetof(UFortQueryTest_SpriteDiscoverablePriority, ScoringFactor) == 368, "Offset mismatch for UFortQueryTest_SpriteDiscoverablePriority::ScoringFactor");
static_assert(offsetof(UFortQueryTest_SpriteDiscoverablePriority, ReferenceValue) == 424, "Offset mismatch for UFortQueryTest_SpriteDiscoverablePriority::ReferenceValue");
static_assert(offsetof(UFortQueryTest_SpriteDiscoverablePriority, bDefineReferenceValue) == 480, "Offset mismatch for UFortQueryTest_SpriteDiscoverablePriority::bDefineReferenceValue");
static_assert(offsetof(UFortQueryTest_SpriteDiscoverablePriority, bWorkOnFloatValues) == 496, "Offset mismatch for UFortQueryTest_SpriteDiscoverablePriority::bWorkOnFloatValues");

// /Script/SpritesRuntime.GameplayAbility_SpriteBackpack
// Kind: Class; super: FortGameplayAbility
class UGameplayAbility_SpriteBackpack
{
public:
    std::uint8_t Pad_0000[0xB20]; // 0x0000
    std::uint8_t EquippedTag[0x1]; // 0x0B20 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UGameplayAbility_SpriteBackpack, EquippedTag) == 2848, "Offset mismatch for UGameplayAbility_SpriteBackpack::EquippedTag");

// /Script/SpritesRuntime.SpriteBackpackActor
// Kind: Class; super: Actor
class USpriteBackpackActor
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t PrimaryActorTick[0x30]; // 0x0028 (Size: 0x30, Type: StructProperty)
    std::uint8_t bAlwaysRelevant; // 0x0058 (Size: 0x1, Type: BoolProperty)
    // 0x0058 BoolProperty bCallPreReplication (shared storage)
    // 0x0058 BoolProperty bCallPreReplicationForReplay (shared storage)
    // 0x0058 BoolProperty bHidden (shared storage)
    // 0x0058 BoolProperty bNetTemporary (shared storage)
    // 0x0058 BoolProperty bOnlyRelevantToOwner (shared storage)
    // 0x0058 BoolProperty bReplicateMovement (shared storage)
    std::uint8_t bExchangedRoles; // 0x0059 (Size: 0x1, Type: BoolProperty)
    // 0x0059 BoolProperty bForceNetAddressable (shared storage)
    // 0x0059 BoolProperty bNetLoadOnClient (shared storage)
    // 0x0059 BoolProperty bNetUseOwnerRelevancy (shared storage)
    // 0x0059 BoolProperty bRelevantForLevelBounds (shared storage)
    // 0x0059 BoolProperty bRelevantForNetworkReplays (shared storage)
    // 0x0059 BoolProperty bReplayRewindable (shared storage)
    // 0x0059 BoolProperty bTearOff (shared storage)
    std::uint8_t bAllowTickBeforeBeginPlay; // 0x005A (Size: 0x1, Type: BoolProperty)
    // 0x005A BoolProperty bAutoDestroyWhenFinished (shared storage)
    // 0x005A BoolProperty bBlockInput (shared storage)
    // 0x005A BoolProperty bCanBeDamaged (shared storage)
    // 0x005A BoolProperty bCollideWhenPlacing (shared storage)
    // 0x005A BoolProperty bFindCameraComponentWhenViewTarget (shared storage)
    // 0x005A BoolProperty bGenerateOverlapEventsDuringLevelStreaming (shared storage)
    // 0x005A BoolProperty bIgnoresOriginShifting (shared storage)
    std::uint8_t bAllowReceiveTickEventOnDedicatedServer; // 0x005B (Size: 0x1, Type: BoolProperty)
    // 0x005B BoolProperty bCanBeInCluster (shared storage)
    // 0x005B BoolProperty bEnableAutoLODGeneration (shared storage)
    // 0x005B BoolProperty bIsEditorOnlyActor (shared storage)
    // 0x005B BoolProperty bReplicateUsingRegisteredSubObjectList (shared storage)
    // 0x005B BoolProperty bReplicates (shared storage)
    std::uint8_t Pad_0001[0x1]; // 0x005C
    std::uint8_t bActorEnableCollision; // 0x005D (Size: 0x1, Type: BoolProperty)
    // 0x005D BoolProperty bActorIsBeingDestroyed (shared storage)
    // 0x005D BoolProperty bAsyncPhysicsTickEnabled (shared storage)
    std::uint8_t UpdateOverlapsMethodDuringLevelStreaming; // 0x005E (Size: 0x1, Type: EnumProperty)
    std::uint8_t DefaultUpdateOverlapsMethodDuringLevelStreaming; // 0x005F (Size: 0x1, Type: EnumProperty)
    std::uint8_t RemoteRole; // 0x0060 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0061
    float InitialLifeSpan; // 0x0064 (Size: 0x4, Type: FloatProperty)
    float CustomTimeDilation; // 0x0068 (Size: 0x4, Type: FloatProperty)
    std::int32_t RayTracingGroupId; // 0x006C (Size: 0x4, Type: IntProperty)
    std::uint8_t AttachmentReplication[0x60]; // 0x0070 (Size: 0x60, Type: StructProperty)
    std::uint8_t ReplicatedMovement[0x88]; // 0x00D0 (Size: 0x88, Type: StructProperty)
    void* Owner; // 0x0158 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t NetDriverName[0x4]; // 0x0160 (Size: 0x4, Type: NameProperty)
    std::uint8_t Role; // 0x0164 (Size: 0x1, Type: ByteProperty)
    std::uint8_t NetDormancy; // 0x0165 (Size: 0x1, Type: ByteProperty)
    std::uint8_t SpawnCollisionHandlingMethod; // 0x0166 (Size: 0x1, Type: EnumProperty)
    std::uint8_t AutoReceiveInput; // 0x0167 (Size: 0x1, Type: ByteProperty)
    std::int32_t InputPriority; // 0x0168 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0003[0x4]; // 0x016C
    void* InputComponent; // 0x0170 (Size: 0x8, Type: ObjectProperty)
    std::int32_t NetTag; // 0x0178 (Size: 0x4, Type: IntProperty)
    float NetCullDistanceSquared; // 0x017C (Size: 0x4, Type: FloatProperty)
    float NetUpdateFrequency; // 0x0180 (Size: 0x4, Type: FloatProperty)
    float MinNetUpdateFrequency; // 0x0184 (Size: 0x4, Type: FloatProperty)
    float NetPriority; // 0x0188 (Size: 0x4, Type: FloatProperty)
    std::uint8_t PhysicsReplicationMode; // 0x018C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0004[0xB]; // 0x018D
    void* Instigator; // 0x0198 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Children; // 0x01A0 (Size: 0x10, Type: ArrayProperty)
    void* RootComponent; // 0x01B0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0005[0x8]; // 0x01B8
    void* HLODLayer; // 0x01C0 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Layers; // 0x01C8 (Size: 0x10, Type: ArrayProperty)
    TWeakObjectPtr<void> ParentComponent; // 0x01D8 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0006[0x10]; // 0x01E0
    TArray<void*> Tags; // 0x01F0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t OnTakeAnyDamage[0x1]; // 0x0200 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnTakePointDamage[0x1]; // 0x0201 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnTakeRadialDamage[0x1]; // 0x0202 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnActorBeginOverlap[0x1]; // 0x0203 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnActorEndOverlap[0x1]; // 0x0204 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnBeginCursorOver[0x1]; // 0x0205 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnEndCursorOver[0x1]; // 0x0206 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnClicked[0x1]; // 0x0207 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnReleased[0x1]; // 0x0208 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchBegin[0x1]; // 0x0209 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchEnd[0x1]; // 0x020A (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchEnter[0x1]; // 0x020B (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchLeave[0x1]; // 0x020C (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnActorHit[0x1]; // 0x020D (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnDestroyed[0x1]; // 0x020E (Size: 0x1, Type: MulticastSparseDelegateProperty)
    FMulticastSparseDelegate OnEndPlay; // 0x020F (Size: 0x10, Type: MulticastSparseDelegateProperty)
    std::uint8_t Pad_0007[0x31]; // 0x021F
    TArray<void*> InstanceComponents; // 0x0250 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> BlueprintCreatedComponents; // 0x0260 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USpriteBackpackActor, PrimaryActorTick) == 40, "Offset mismatch for USpriteBackpackActor::PrimaryActorTick");
static_assert(offsetof(USpriteBackpackActor, bAlwaysRelevant) == 88, "Offset mismatch for USpriteBackpackActor::bAlwaysRelevant");
static_assert(offsetof(USpriteBackpackActor, bExchangedRoles) == 89, "Offset mismatch for USpriteBackpackActor::bExchangedRoles");
static_assert(offsetof(USpriteBackpackActor, bAllowTickBeforeBeginPlay) == 90, "Offset mismatch for USpriteBackpackActor::bAllowTickBeforeBeginPlay");
static_assert(offsetof(USpriteBackpackActor, bAllowReceiveTickEventOnDedicatedServer) == 91, "Offset mismatch for USpriteBackpackActor::bAllowReceiveTickEventOnDedicatedServer");
static_assert(offsetof(USpriteBackpackActor, bActorEnableCollision) == 93, "Offset mismatch for USpriteBackpackActor::bActorEnableCollision");
static_assert(offsetof(USpriteBackpackActor, UpdateOverlapsMethodDuringLevelStreaming) == 94, "Offset mismatch for USpriteBackpackActor::UpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(USpriteBackpackActor, DefaultUpdateOverlapsMethodDuringLevelStreaming) == 95, "Offset mismatch for USpriteBackpackActor::DefaultUpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(USpriteBackpackActor, RemoteRole) == 96, "Offset mismatch for USpriteBackpackActor::RemoteRole");
static_assert(offsetof(USpriteBackpackActor, InitialLifeSpan) == 100, "Offset mismatch for USpriteBackpackActor::InitialLifeSpan");
static_assert(offsetof(USpriteBackpackActor, CustomTimeDilation) == 104, "Offset mismatch for USpriteBackpackActor::CustomTimeDilation");
static_assert(offsetof(USpriteBackpackActor, RayTracingGroupId) == 108, "Offset mismatch for USpriteBackpackActor::RayTracingGroupId");
static_assert(offsetof(USpriteBackpackActor, AttachmentReplication) == 112, "Offset mismatch for USpriteBackpackActor::AttachmentReplication");
static_assert(offsetof(USpriteBackpackActor, ReplicatedMovement) == 208, "Offset mismatch for USpriteBackpackActor::ReplicatedMovement");
static_assert(offsetof(USpriteBackpackActor, Owner) == 344, "Offset mismatch for USpriteBackpackActor::Owner");
static_assert(offsetof(USpriteBackpackActor, NetDriverName) == 352, "Offset mismatch for USpriteBackpackActor::NetDriverName");
static_assert(offsetof(USpriteBackpackActor, Role) == 356, "Offset mismatch for USpriteBackpackActor::Role");
static_assert(offsetof(USpriteBackpackActor, NetDormancy) == 357, "Offset mismatch for USpriteBackpackActor::NetDormancy");
static_assert(offsetof(USpriteBackpackActor, SpawnCollisionHandlingMethod) == 358, "Offset mismatch for USpriteBackpackActor::SpawnCollisionHandlingMethod");
static_assert(offsetof(USpriteBackpackActor, AutoReceiveInput) == 359, "Offset mismatch for USpriteBackpackActor::AutoReceiveInput");
static_assert(offsetof(USpriteBackpackActor, InputPriority) == 360, "Offset mismatch for USpriteBackpackActor::InputPriority");
static_assert(offsetof(USpriteBackpackActor, InputComponent) == 368, "Offset mismatch for USpriteBackpackActor::InputComponent");
static_assert(offsetof(USpriteBackpackActor, NetTag) == 376, "Offset mismatch for USpriteBackpackActor::NetTag");
static_assert(offsetof(USpriteBackpackActor, NetCullDistanceSquared) == 380, "Offset mismatch for USpriteBackpackActor::NetCullDistanceSquared");
static_assert(offsetof(USpriteBackpackActor, NetUpdateFrequency) == 384, "Offset mismatch for USpriteBackpackActor::NetUpdateFrequency");
static_assert(offsetof(USpriteBackpackActor, MinNetUpdateFrequency) == 388, "Offset mismatch for USpriteBackpackActor::MinNetUpdateFrequency");
static_assert(offsetof(USpriteBackpackActor, NetPriority) == 392, "Offset mismatch for USpriteBackpackActor::NetPriority");
static_assert(offsetof(USpriteBackpackActor, PhysicsReplicationMode) == 396, "Offset mismatch for USpriteBackpackActor::PhysicsReplicationMode");
static_assert(offsetof(USpriteBackpackActor, Instigator) == 408, "Offset mismatch for USpriteBackpackActor::Instigator");
static_assert(offsetof(USpriteBackpackActor, Children) == 416, "Offset mismatch for USpriteBackpackActor::Children");
static_assert(offsetof(USpriteBackpackActor, RootComponent) == 432, "Offset mismatch for USpriteBackpackActor::RootComponent");
static_assert(offsetof(USpriteBackpackActor, HLODLayer) == 448, "Offset mismatch for USpriteBackpackActor::HLODLayer");
static_assert(offsetof(USpriteBackpackActor, Layers) == 456, "Offset mismatch for USpriteBackpackActor::Layers");
static_assert(offsetof(USpriteBackpackActor, ParentComponent) == 472, "Offset mismatch for USpriteBackpackActor::ParentComponent");
static_assert(offsetof(USpriteBackpackActor, Tags) == 496, "Offset mismatch for USpriteBackpackActor::Tags");
static_assert(offsetof(USpriteBackpackActor, OnTakeAnyDamage) == 512, "Offset mismatch for USpriteBackpackActor::OnTakeAnyDamage");
static_assert(offsetof(USpriteBackpackActor, OnTakePointDamage) == 513, "Offset mismatch for USpriteBackpackActor::OnTakePointDamage");
static_assert(offsetof(USpriteBackpackActor, OnTakeRadialDamage) == 514, "Offset mismatch for USpriteBackpackActor::OnTakeRadialDamage");
static_assert(offsetof(USpriteBackpackActor, OnActorBeginOverlap) == 515, "Offset mismatch for USpriteBackpackActor::OnActorBeginOverlap");
static_assert(offsetof(USpriteBackpackActor, OnActorEndOverlap) == 516, "Offset mismatch for USpriteBackpackActor::OnActorEndOverlap");
static_assert(offsetof(USpriteBackpackActor, OnBeginCursorOver) == 517, "Offset mismatch for USpriteBackpackActor::OnBeginCursorOver");
static_assert(offsetof(USpriteBackpackActor, OnEndCursorOver) == 518, "Offset mismatch for USpriteBackpackActor::OnEndCursorOver");
static_assert(offsetof(USpriteBackpackActor, OnClicked) == 519, "Offset mismatch for USpriteBackpackActor::OnClicked");
static_assert(offsetof(USpriteBackpackActor, OnReleased) == 520, "Offset mismatch for USpriteBackpackActor::OnReleased");
static_assert(offsetof(USpriteBackpackActor, OnInputTouchBegin) == 521, "Offset mismatch for USpriteBackpackActor::OnInputTouchBegin");
static_assert(offsetof(USpriteBackpackActor, OnInputTouchEnd) == 522, "Offset mismatch for USpriteBackpackActor::OnInputTouchEnd");
static_assert(offsetof(USpriteBackpackActor, OnInputTouchEnter) == 523, "Offset mismatch for USpriteBackpackActor::OnInputTouchEnter");
static_assert(offsetof(USpriteBackpackActor, OnInputTouchLeave) == 524, "Offset mismatch for USpriteBackpackActor::OnInputTouchLeave");
static_assert(offsetof(USpriteBackpackActor, OnActorHit) == 525, "Offset mismatch for USpriteBackpackActor::OnActorHit");
static_assert(offsetof(USpriteBackpackActor, OnDestroyed) == 526, "Offset mismatch for USpriteBackpackActor::OnDestroyed");
static_assert(offsetof(USpriteBackpackActor, OnEndPlay) == 527, "Offset mismatch for USpriteBackpackActor::OnEndPlay");
static_assert(offsetof(USpriteBackpackActor, InstanceComponents) == 592, "Offset mismatch for USpriteBackpackActor::InstanceComponents");
static_assert(offsetof(USpriteBackpackActor, BlueprintCreatedComponents) == 608, "Offset mismatch for USpriteBackpackActor::BlueprintCreatedComponents");

// /Script/SpritesRuntime.SpriteBackpackController
// Kind: Class; super: ActorComponent
class USpriteBackpackController
{
public:
    std::uint8_t Pad_0000[0xD8]; // 0x0000
    std::uint8_t bServerHiddenState; // 0x00D8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00D9
    std::uint8_t ReplicatedBackpackData[0x1]; // 0x00E0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USpriteBackpackController, bServerHiddenState) == 216, "Offset mismatch for USpriteBackpackController::bServerHiddenState");
static_assert(offsetof(USpriteBackpackController, ReplicatedBackpackData) == 224, "Offset mismatch for USpriteBackpackController::ReplicatedBackpackData");

// /Script/SpritesRuntime.SpriteConsumeableLayerAnimInstance
// Kind: Class; super: FortPlayerAnimInstanceProxy
class USpriteConsumeableLayerAnimInstance
{
public:
    std::uint8_t Pad_0000[0x1170]; // 0x0000
    std::uint8_t bInThrowMontage; // 0x1170 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPlayingEquip; // 0x1171 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEquipTransition; // 0x1172 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bExitEquipTransition; // 0x1173 (Size: 0x1, Type: BoolProperty)
    float BlendWeights; // 0x1174 (Size: 0x4, Type: FloatProperty)
    void* SpriteEquipMontage; // 0x1178 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t RaiseSpriteTagName[0x4]; // 0x1180 (Size: 0x4, Type: StructProperty)
    std::uint8_t IsTargetingTagName[0x1]; // 0x1184 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USpriteConsumeableLayerAnimInstance, bInThrowMontage) == 4464, "Offset mismatch for USpriteConsumeableLayerAnimInstance::bInThrowMontage");
static_assert(offsetof(USpriteConsumeableLayerAnimInstance, bPlayingEquip) == 4465, "Offset mismatch for USpriteConsumeableLayerAnimInstance::bPlayingEquip");
static_assert(offsetof(USpriteConsumeableLayerAnimInstance, bEquipTransition) == 4466, "Offset mismatch for USpriteConsumeableLayerAnimInstance::bEquipTransition");
static_assert(offsetof(USpriteConsumeableLayerAnimInstance, bExitEquipTransition) == 4467, "Offset mismatch for USpriteConsumeableLayerAnimInstance::bExitEquipTransition");
static_assert(offsetof(USpriteConsumeableLayerAnimInstance, BlendWeights) == 4468, "Offset mismatch for USpriteConsumeableLayerAnimInstance::BlendWeights");
static_assert(offsetof(USpriteConsumeableLayerAnimInstance, SpriteEquipMontage) == 4472, "Offset mismatch for USpriteConsumeableLayerAnimInstance::SpriteEquipMontage");
static_assert(offsetof(USpriteConsumeableLayerAnimInstance, RaiseSpriteTagName) == 4480, "Offset mismatch for USpriteConsumeableLayerAnimInstance::RaiseSpriteTagName");
static_assert(offsetof(USpriteConsumeableLayerAnimInstance, IsTargetingTagName) == 4484, "Offset mismatch for USpriteConsumeableLayerAnimInstance::IsTargetingTagName");

// /Script/SpritesRuntime.SpriteCreatureAnimInstance
// Kind: Class; super: AnimInstance
class USpriteCreatureAnimInstance
{
public:
    std::uint8_t Pad_0000[0x260]; // 0x0000
    std::uint8_t bIsFleeing; // 0x0260 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsBackpack_Idle; // 0x0261 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsEquipped_Idle; // 0x0262 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsCooldown; // 0x0263 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsPawnSkydiving; // 0x0264 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsMoving; // 0x0265 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDisableSprings; // 0x0266 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x0267
    double WalkPlayrate; // 0x0268 (Size: 0x8, Type: DoubleProperty)
    double RunPlayrate; // 0x0270 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bEnterRun; // 0x0278 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnterWalk; // 0x0279 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnterIdle; // 0x027A (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(USpriteCreatureAnimInstance, bIsFleeing) == 608, "Offset mismatch for USpriteCreatureAnimInstance::bIsFleeing");
static_assert(offsetof(USpriteCreatureAnimInstance, bIsBackpack_Idle) == 609, "Offset mismatch for USpriteCreatureAnimInstance::bIsBackpack_Idle");
static_assert(offsetof(USpriteCreatureAnimInstance, bIsEquipped_Idle) == 610, "Offset mismatch for USpriteCreatureAnimInstance::bIsEquipped_Idle");
static_assert(offsetof(USpriteCreatureAnimInstance, bIsCooldown) == 611, "Offset mismatch for USpriteCreatureAnimInstance::bIsCooldown");
static_assert(offsetof(USpriteCreatureAnimInstance, bIsPawnSkydiving) == 612, "Offset mismatch for USpriteCreatureAnimInstance::bIsPawnSkydiving");
static_assert(offsetof(USpriteCreatureAnimInstance, bIsMoving) == 613, "Offset mismatch for USpriteCreatureAnimInstance::bIsMoving");
static_assert(offsetof(USpriteCreatureAnimInstance, bDisableSprings) == 614, "Offset mismatch for USpriteCreatureAnimInstance::bDisableSprings");
static_assert(offsetof(USpriteCreatureAnimInstance, WalkPlayrate) == 616, "Offset mismatch for USpriteCreatureAnimInstance::WalkPlayrate");
static_assert(offsetof(USpriteCreatureAnimInstance, RunPlayrate) == 624, "Offset mismatch for USpriteCreatureAnimInstance::RunPlayrate");
static_assert(offsetof(USpriteCreatureAnimInstance, bEnterRun) == 632, "Offset mismatch for USpriteCreatureAnimInstance::bEnterRun");
static_assert(offsetof(USpriteCreatureAnimInstance, bEnterWalk) == 633, "Offset mismatch for USpriteCreatureAnimInstance::bEnterWalk");
static_assert(offsetof(USpriteCreatureAnimInstance, bEnterIdle) == 634, "Offset mismatch for USpriteCreatureAnimInstance::bEnterIdle");

// /Script/SpritesRuntime.SpriteDiscoverableInterface
// Kind: Class; super: Interface
class USpriteDiscoverableInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SpritesRuntime.SpriteDiscoverableManager
// Kind: Class; super: GameStateComponent
class USpriteDiscoverableManager
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t PrimaryComponentTick[0x30]; // 0x0038 (Size: 0x30, Type: StructProperty)
    TArray<void*> ComponentTags; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AssetUserData; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0088
    std::int32_t UCSSerializationIndex; // 0x0090 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0094
    std::uint8_t bNetAddressable; // 0x0098 (Size: 0x1, Type: BoolProperty)
    // 0x0098 BoolProperty bReplicateUsingRegisteredSubObjectList (shared storage)
    // 0x0098 BoolProperty bReplicates (shared storage)
    std::uint8_t Pad_0003[0x1]; // 0x0099
    std::uint8_t bAutoActivate; // 0x009A (Size: 0x1, Type: BoolProperty)
    // 0x009A BoolProperty bCanEverAffectNavigation (shared storage)
    // 0x009A BoolProperty bEditableWhenInherited (shared storage)
    // 0x009A BoolProperty bIsActive (shared storage)
    std::uint8_t bIsEditorOnly; // 0x009B (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x1D]; // 0x009C
    std::uint8_t CreationMethod; // 0x00B9 (Size: 0x1, Type: EnumProperty)
    std::uint8_t OnComponentActivated[0x1]; // 0x00BA (Size: 0x1, Type: MulticastSparseDelegateProperty)
    FMulticastSparseDelegate OnComponentDeactivated; // 0x00BB (Size: 0x10, Type: MulticastSparseDelegateProperty)
};

static_assert(offsetof(USpriteDiscoverableManager, PrimaryComponentTick) == 56, "Offset mismatch for USpriteDiscoverableManager::PrimaryComponentTick");
static_assert(offsetof(USpriteDiscoverableManager, ComponentTags) == 104, "Offset mismatch for USpriteDiscoverableManager::ComponentTags");
static_assert(offsetof(USpriteDiscoverableManager, AssetUserData) == 120, "Offset mismatch for USpriteDiscoverableManager::AssetUserData");
static_assert(offsetof(USpriteDiscoverableManager, UCSSerializationIndex) == 144, "Offset mismatch for USpriteDiscoverableManager::UCSSerializationIndex");
static_assert(offsetof(USpriteDiscoverableManager, bNetAddressable) == 152, "Offset mismatch for USpriteDiscoverableManager::bNetAddressable");
static_assert(offsetof(USpriteDiscoverableManager, bAutoActivate) == 154, "Offset mismatch for USpriteDiscoverableManager::bAutoActivate");
static_assert(offsetof(USpriteDiscoverableManager, bIsEditorOnly) == 155, "Offset mismatch for USpriteDiscoverableManager::bIsEditorOnly");
static_assert(offsetof(USpriteDiscoverableManager, CreationMethod) == 185, "Offset mismatch for USpriteDiscoverableManager::CreationMethod");
static_assert(offsetof(USpriteDiscoverableManager, OnComponentActivated) == 186, "Offset mismatch for USpriteDiscoverableManager::OnComponentActivated");
static_assert(offsetof(USpriteDiscoverableManager, OnComponentDeactivated) == 187, "Offset mismatch for USpriteDiscoverableManager::OnComponentDeactivated");

// /Script/SpritesRuntime.SpriteNavigationHelperComponent
// Kind: Class; super: ControllerComponent
class USpriteNavigationHelperComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnNearestDiscoverableChangedEvent; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnNearestDiscoverableFoundEvent; // 0x00D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* DiscoveryEQS; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t SpriteEquippedTag[0x8]; // 0x00E8 (Size: 0x8, Type: StructProperty)
    std::uint8_t DiscoveryFrequency[0x28]; // 0x00F0 (Size: 0x28, Type: StructProperty)
    TWeakObjectPtr<void> ClosestDiscoverable; // 0x0118 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(USpriteNavigationHelperComponent, OnNearestDiscoverableChangedEvent) == 192, "Offset mismatch for USpriteNavigationHelperComponent::OnNearestDiscoverableChangedEvent");
static_assert(offsetof(USpriteNavigationHelperComponent, OnNearestDiscoverableFoundEvent) == 208, "Offset mismatch for USpriteNavigationHelperComponent::OnNearestDiscoverableFoundEvent");
static_assert(offsetof(USpriteNavigationHelperComponent, DiscoveryEQS) == 224, "Offset mismatch for USpriteNavigationHelperComponent::DiscoveryEQS");
static_assert(offsetof(USpriteNavigationHelperComponent, SpriteEquippedTag) == 232, "Offset mismatch for USpriteNavigationHelperComponent::SpriteEquippedTag");
static_assert(offsetof(USpriteNavigationHelperComponent, DiscoveryFrequency) == 240, "Offset mismatch for USpriteNavigationHelperComponent::DiscoveryFrequency");
static_assert(offsetof(USpriteNavigationHelperComponent, ClosestDiscoverable) == 280, "Offset mismatch for USpriteNavigationHelperComponent::ClosestDiscoverable");

// /Script/SpritesRuntime.SpritesUtilityLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class USpritesUtilityLibrary
{
public:
    std::uint8_t Opaque[1];
};

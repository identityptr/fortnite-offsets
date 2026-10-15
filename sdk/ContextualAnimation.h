/**
 * decamp dumper generated SDK
 * Package: /Script/ContextualAnimation
 */
#pragma once
#include "Basic.h"

// /Script/ContextualAnimation.ContextualAnimAlignmentTrackContainer
// Kind: ScriptStruct; super: none
struct FContextualAnimAlignmentTrackContainer
{
public:
    std::uint8_t Tracks[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    float SampleInterval; // 0x0020 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FContextualAnimAlignmentTrackContainer, Tracks) == 0, "Offset mismatch for FContextualAnimAlignmentTrackContainer::Tracks");
static_assert(offsetof(FContextualAnimAlignmentTrackContainer, SampleInterval) == 32, "Offset mismatch for FContextualAnimAlignmentTrackContainer::SampleInterval");

// /Script/ContextualAnimation.ContextualAnimAttachmentParams
// Kind: ScriptStruct; super: none
struct FContextualAnimAttachmentParams
{
public:
    std::uint8_t Role[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    FName SocketName; // 0x0004 (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0000[0x4]; // 0x000C
    std::uint8_t RelativeTransform[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FContextualAnimAttachmentParams, Role) == 0, "Offset mismatch for FContextualAnimAttachmentParams::Role");
static_assert(offsetof(FContextualAnimAttachmentParams, SocketName) == 4, "Offset mismatch for FContextualAnimAttachmentParams::SocketName");
static_assert(offsetof(FContextualAnimAttachmentParams, RelativeTransform) == 16, "Offset mismatch for FContextualAnimAttachmentParams::RelativeTransform");

// /Script/ContextualAnimation.ContextualAnimCollisionBehaviorParams
// Kind: ScriptStruct; super: none
struct FContextualAnimCollisionBehaviorParams
{
public:
    std::uint8_t CollisionBehavior; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    TArray<void*> CollisionChannelsToIgnoreParams; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CollisionProfileParams; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FContextualAnimCollisionBehaviorParams, CollisionBehavior) == 0, "Offset mismatch for FContextualAnimCollisionBehaviorParams::CollisionBehavior");
static_assert(offsetof(FContextualAnimCollisionBehaviorParams, CollisionChannelsToIgnoreParams) == 8, "Offset mismatch for FContextualAnimCollisionBehaviorParams::CollisionChannelsToIgnoreParams");
static_assert(offsetof(FContextualAnimCollisionBehaviorParams, CollisionProfileParams) == 24, "Offset mismatch for FContextualAnimCollisionBehaviorParams::CollisionProfileParams");

// /Script/ContextualAnimation.ContextualAnimCollisionProfileParam
// Kind: ScriptStruct; super: none
struct FContextualAnimCollisionProfileParam
{
public:
    std::uint8_t Role[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t Profile[0x1]; // 0x0004 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FContextualAnimCollisionProfileParam, Role) == 0, "Offset mismatch for FContextualAnimCollisionProfileParam::Role");
static_assert(offsetof(FContextualAnimCollisionProfileParam, Profile) == 4, "Offset mismatch for FContextualAnimCollisionProfileParam::Profile");

// /Script/ContextualAnimation.ContextualAnimIKTarget
// Kind: ScriptStruct; super: none
struct FContextualAnimIKTarget
{
public:
    std::uint8_t GoalName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t BoneName[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    float Alpha; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x000C
    std::uint8_t Transform[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FContextualAnimIKTarget, GoalName) == 0, "Offset mismatch for FContextualAnimIKTarget::GoalName");
static_assert(offsetof(FContextualAnimIKTarget, BoneName) == 4, "Offset mismatch for FContextualAnimIKTarget::BoneName");
static_assert(offsetof(FContextualAnimIKTarget, Alpha) == 8, "Offset mismatch for FContextualAnimIKTarget::Alpha");
static_assert(offsetof(FContextualAnimIKTarget, Transform) == 16, "Offset mismatch for FContextualAnimIKTarget::Transform");

// /Script/ContextualAnimation.ContextualAnimIKTargetDefContainer
// Kind: ScriptStruct; super: none
struct FContextualAnimIKTargetDefContainer
{
public:
    FName Role; // 0x0000 (Size: 0x8, Type: NameProperty)
    TArray<void*> IKTargetDefs; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FContextualAnimIKTargetDefContainer, Role) == 0, "Offset mismatch for FContextualAnimIKTargetDefContainer::Role");
static_assert(offsetof(FContextualAnimIKTargetDefContainer, IKTargetDefs) == 8, "Offset mismatch for FContextualAnimIKTargetDefContainer::IKTargetDefs");

// /Script/ContextualAnimation.ContextualAnimIKTargetDefinition
// Kind: ScriptStruct; super: none
struct FContextualAnimIKTargetDefinition
{
public:
    std::uint8_t GoalName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t BoneName[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    std::uint8_t Provider; // 0x0008 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0009
    std::uint8_t TargetRoleName[0x4]; // 0x000C (Size: 0x4, Type: NameProperty)
    FName TargetBoneName; // 0x0010 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FContextualAnimIKTargetDefinition, GoalName) == 0, "Offset mismatch for FContextualAnimIKTargetDefinition::GoalName");
static_assert(offsetof(FContextualAnimIKTargetDefinition, BoneName) == 4, "Offset mismatch for FContextualAnimIKTargetDefinition::BoneName");
static_assert(offsetof(FContextualAnimIKTargetDefinition, Provider) == 8, "Offset mismatch for FContextualAnimIKTargetDefinition::Provider");
static_assert(offsetof(FContextualAnimIKTargetDefinition, TargetRoleName) == 12, "Offset mismatch for FContextualAnimIKTargetDefinition::TargetRoleName");
static_assert(offsetof(FContextualAnimIKTargetDefinition, TargetBoneName) == 16, "Offset mismatch for FContextualAnimIKTargetDefinition::TargetBoneName");

// /Script/ContextualAnimation.ContextualAnimIKTargetParams
// Kind: ScriptStruct; super: none
struct FContextualAnimIKTargetParams
{
public:
    TArray<void*> IKTargetDefsForEachRole; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t AlphaProvider; // 0x0010 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FContextualAnimIKTargetParams, IKTargetDefsForEachRole) == 0, "Offset mismatch for FContextualAnimIKTargetParams::IKTargetDefsForEachRole");
static_assert(offsetof(FContextualAnimIKTargetParams, AlphaProvider) == 16, "Offset mismatch for FContextualAnimIKTargetParams::AlphaProvider");

// /Script/ContextualAnimation.ContextualAnimIgnoreChannelsParam
// Kind: ScriptStruct; super: none
struct FContextualAnimIgnoreChannelsParam
{
public:
    FName Role; // 0x0000 (Size: 0x8, Type: NameProperty)
    TArray<void*> Channels; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FContextualAnimIgnoreChannelsParam, Role) == 0, "Offset mismatch for FContextualAnimIgnoreChannelsParam::Role");
static_assert(offsetof(FContextualAnimIgnoreChannelsParam, Channels) == 8, "Offset mismatch for FContextualAnimIgnoreChannelsParam::Channels");

// /Script/ContextualAnimation.ContextualAnimPoint
// Kind: ScriptStruct; super: none
struct FContextualAnimPoint
{
public:
    FName Role; // 0x0000 (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0000[0x8]; // 0x0008
    std::uint8_t Transform[0x60]; // 0x0010 (Size: 0x60, Type: StructProperty)
    float Speed; // 0x0070 (Size: 0x4, Type: FloatProperty)
    std::int32_t SectionIdx; // 0x0074 (Size: 0x4, Type: IntProperty)
    std::int32_t AnimSetIdx; // 0x0078 (Size: 0x4, Type: IntProperty)
    std::int32_t AnimTrackIdx; // 0x007C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FContextualAnimPoint, Role) == 0, "Offset mismatch for FContextualAnimPoint::Role");
static_assert(offsetof(FContextualAnimPoint, Transform) == 16, "Offset mismatch for FContextualAnimPoint::Transform");
static_assert(offsetof(FContextualAnimPoint, Speed) == 112, "Offset mismatch for FContextualAnimPoint::Speed");
static_assert(offsetof(FContextualAnimPoint, SectionIdx) == 116, "Offset mismatch for FContextualAnimPoint::SectionIdx");
static_assert(offsetof(FContextualAnimPoint, AnimSetIdx) == 120, "Offset mismatch for FContextualAnimPoint::AnimSetIdx");
static_assert(offsetof(FContextualAnimPoint, AnimTrackIdx) == 124, "Offset mismatch for FContextualAnimPoint::AnimTrackIdx");

// /Script/ContextualAnimation.ContextualAnimQueryParams
// Kind: ScriptStruct; super: none
struct FContextualAnimQueryParams
{
public:
    TWeakObjectPtr<void> Querier; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0000[0x8]; // 0x0008
    std::uint8_t QueryTransform[0x60]; // 0x0010 (Size: 0x60, Type: StructProperty)
    std::uint8_t bComplexQuery; // 0x0070 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFindAnimStartTime; // 0x0071 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FContextualAnimQueryParams, Querier) == 0, "Offset mismatch for FContextualAnimQueryParams::Querier");
static_assert(offsetof(FContextualAnimQueryParams, QueryTransform) == 16, "Offset mismatch for FContextualAnimQueryParams::QueryTransform");
static_assert(offsetof(FContextualAnimQueryParams, bComplexQuery) == 112, "Offset mismatch for FContextualAnimQueryParams::bComplexQuery");
static_assert(offsetof(FContextualAnimQueryParams, bFindAnimStartTime) == 113, "Offset mismatch for FContextualAnimQueryParams::bFindAnimStartTime");

// /Script/ContextualAnimation.ContextualAnimQueryResult
// Kind: ScriptStruct; super: none
struct FContextualAnimQueryResult
{
public:
    TWeakObjectPtr<void> Animation; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0000[0x8]; // 0x0008
    std::uint8_t EntryTransform[0x60]; // 0x0010 (Size: 0x60, Type: StructProperty)
    std::uint8_t SyncTransform[0x60]; // 0x0070 (Size: 0x60, Type: StructProperty)
    float AnimStartTime; // 0x00D0 (Size: 0x4, Type: FloatProperty)
    std::int32_t AnimSetIdx; // 0x00D4 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FContextualAnimQueryResult, Animation) == 0, "Offset mismatch for FContextualAnimQueryResult::Animation");
static_assert(offsetof(FContextualAnimQueryResult, EntryTransform) == 16, "Offset mismatch for FContextualAnimQueryResult::EntryTransform");
static_assert(offsetof(FContextualAnimQueryResult, SyncTransform) == 112, "Offset mismatch for FContextualAnimQueryResult::SyncTransform");
static_assert(offsetof(FContextualAnimQueryResult, AnimStartTime) == 208, "Offset mismatch for FContextualAnimQueryResult::AnimStartTime");
static_assert(offsetof(FContextualAnimQueryResult, AnimSetIdx) == 212, "Offset mismatch for FContextualAnimQueryResult::AnimSetIdx");

// /Script/ContextualAnimation.ContextualAnimRepBindingsData
// Kind: ScriptStruct; super: ContextualAnimRepData
struct FContextualAnimRepBindingsData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Bindings[0x38]; // 0x0008 (Size: 0x38, Type: StructProperty)
    TArray<void*> WarpPoints; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ExternalWarpTargets; // 0x0050 (Size: 0x10, Type: ArrayProperty)
    float StartTime; // 0x0060 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FContextualAnimRepBindingsData, Bindings) == 8, "Offset mismatch for FContextualAnimRepBindingsData::Bindings");
static_assert(offsetof(FContextualAnimRepBindingsData, WarpPoints) == 64, "Offset mismatch for FContextualAnimRepBindingsData::WarpPoints");
static_assert(offsetof(FContextualAnimRepBindingsData, ExternalWarpTargets) == 80, "Offset mismatch for FContextualAnimRepBindingsData::ExternalWarpTargets");
static_assert(offsetof(FContextualAnimRepBindingsData, StartTime) == 96, "Offset mismatch for FContextualAnimRepBindingsData::StartTime");

// /Script/ContextualAnimation.ContextualAnimRepData
// Kind: ScriptStruct; super: none
struct FContextualAnimRepData
{
public:
    std::uint8_t RepCounter; // 0x0000 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FContextualAnimRepData, RepCounter) == 0, "Offset mismatch for FContextualAnimRepData::RepCounter");

// /Script/ContextualAnimation.ContextualAnimRepLateJoinData
// Kind: ScriptStruct; super: ContextualAnimRepData
struct FContextualAnimRepLateJoinData
{
public:
    std::uint8_t Pad_0000[0x4]; // 0x0000
    TWeakObjectPtr<void> Actor; // 0x0004 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Role[0x4]; // 0x000C (Size: 0x4, Type: NameProperty)
    TArray<void*> WarpPoints; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ExternalWarpTargets; // 0x0020 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FContextualAnimRepLateJoinData, Actor) == 4, "Offset mismatch for FContextualAnimRepLateJoinData::Actor");
static_assert(offsetof(FContextualAnimRepLateJoinData, Role) == 12, "Offset mismatch for FContextualAnimRepLateJoinData::Role");
static_assert(offsetof(FContextualAnimRepLateJoinData, WarpPoints) == 16, "Offset mismatch for FContextualAnimRepLateJoinData::WarpPoints");
static_assert(offsetof(FContextualAnimRepLateJoinData, ExternalWarpTargets) == 32, "Offset mismatch for FContextualAnimRepLateJoinData::ExternalWarpTargets");

// /Script/ContextualAnimation.ContextualAnimRepTransitionData
// Kind: ScriptStruct; super: ContextualAnimRepData
struct FContextualAnimRepTransitionData
{
public:
    std::uint8_t Pad_0000[0x1]; // 0x0000
    std::uint8_t ID; // 0x0001 (Size: 0x1, Type: ByteProperty)
    std::uint8_t SectionIdx; // 0x0002 (Size: 0x1, Type: ByteProperty)
    std::uint8_t AnimSetIdx; // 0x0003 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bStopEveryone; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPredictedByOwner; // 0x0005 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0006
    TArray<void*> WarpPoints; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ExternalWarpTargets; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FContextualAnimRepTransitionData, ID) == 1, "Offset mismatch for FContextualAnimRepTransitionData::ID");
static_assert(offsetof(FContextualAnimRepTransitionData, SectionIdx) == 2, "Offset mismatch for FContextualAnimRepTransitionData::SectionIdx");
static_assert(offsetof(FContextualAnimRepTransitionData, AnimSetIdx) == 3, "Offset mismatch for FContextualAnimRepTransitionData::AnimSetIdx");
static_assert(offsetof(FContextualAnimRepTransitionData, bStopEveryone) == 4, "Offset mismatch for FContextualAnimRepTransitionData::bStopEveryone");
static_assert(offsetof(FContextualAnimRepTransitionData, bPredictedByOwner) == 5, "Offset mismatch for FContextualAnimRepTransitionData::bPredictedByOwner");
static_assert(offsetof(FContextualAnimRepTransitionData, WarpPoints) == 8, "Offset mismatch for FContextualAnimRepTransitionData::WarpPoints");
static_assert(offsetof(FContextualAnimRepTransitionData, ExternalWarpTargets) == 24, "Offset mismatch for FContextualAnimRepTransitionData::ExternalWarpTargets");

// /Script/ContextualAnimation.ContextualAnimRoleDefinition
// Kind: ScriptStruct; super: none
struct FContextualAnimRoleDefinition
{
public:
    std::uint8_t Name[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t bIsCharacter; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    float PreviewCapsuleHalfHeight; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float PreviewCapsuleRadius; // 0x000C (Size: 0x4, Type: FloatProperty)
    std::uint8_t MeshToComponent[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FContextualAnimRoleDefinition, Name) == 0, "Offset mismatch for FContextualAnimRoleDefinition::Name");
static_assert(offsetof(FContextualAnimRoleDefinition, bIsCharacter) == 4, "Offset mismatch for FContextualAnimRoleDefinition::bIsCharacter");
static_assert(offsetof(FContextualAnimRoleDefinition, PreviewCapsuleHalfHeight) == 8, "Offset mismatch for FContextualAnimRoleDefinition::PreviewCapsuleHalfHeight");
static_assert(offsetof(FContextualAnimRoleDefinition, PreviewCapsuleRadius) == 12, "Offset mismatch for FContextualAnimRoleDefinition::PreviewCapsuleRadius");
static_assert(offsetof(FContextualAnimRoleDefinition, MeshToComponent) == 16, "Offset mismatch for FContextualAnimRoleDefinition::MeshToComponent");

// /Script/ContextualAnimation.ContextualAnimSceneBinding
// Kind: ScriptStruct; super: none
struct FContextualAnimSceneBinding
{
public:
    std::uint8_t Context[0xE0]; // 0x0000 (Size: 0xE0, Type: StructProperty)
    std::int8_t SectionIdx; // 0x00E0 (Size: 0x1, Type: Int8Property)
    std::int8_t AnimSetIdx; // 0x00E1 (Size: 0x1, Type: Int8Property)
    std::int8_t AnimTrackIdx; // 0x00E2 (Size: 0x1, Type: Int8Property)
    std::uint8_t Pad_0000[0x5]; // 0x00E3
    void* Animation; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t AlignmentData[0x28]; // 0x00F0 (Size: 0x28, Type: StructProperty)
    std::uint8_t IKTargetData[0x28]; // 0x0118 (Size: 0x28, Type: StructProperty)
    std::uint8_t MeshToScene[0x1]; // 0x0140 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FContextualAnimSceneBinding, Context) == 0, "Offset mismatch for FContextualAnimSceneBinding::Context");
static_assert(offsetof(FContextualAnimSceneBinding, SectionIdx) == 224, "Offset mismatch for FContextualAnimSceneBinding::SectionIdx");
static_assert(offsetof(FContextualAnimSceneBinding, AnimSetIdx) == 225, "Offset mismatch for FContextualAnimSceneBinding::AnimSetIdx");
static_assert(offsetof(FContextualAnimSceneBinding, AnimTrackIdx) == 226, "Offset mismatch for FContextualAnimSceneBinding::AnimTrackIdx");
static_assert(offsetof(FContextualAnimSceneBinding, Animation) == 232, "Offset mismatch for FContextualAnimSceneBinding::Animation");
static_assert(offsetof(FContextualAnimSceneBinding, AlignmentData) == 240, "Offset mismatch for FContextualAnimSceneBinding::AlignmentData");
static_assert(offsetof(FContextualAnimSceneBinding, IKTargetData) == 280, "Offset mismatch for FContextualAnimSceneBinding::IKTargetData");
static_assert(offsetof(FContextualAnimSceneBinding, MeshToScene) == 320, "Offset mismatch for FContextualAnimSceneBinding::MeshToScene");

// /Script/ContextualAnimation.ContextualAnimSceneBindingContext
// Kind: ScriptStruct; super: none
struct FContextualAnimSceneBindingContext
{
public:
    TWeakObjectPtr<void> Actor; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> CachedSceneActorComp; // 0x0008 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> CachedAnimInstance; // 0x0010 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> CachedSkeletalMesh; // 0x0018 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> CachedMovementComp; // 0x0020 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> CachedMotionWarpingComp; // 0x0028 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FContextualAnimSceneBindingContext, Actor) == 0, "Offset mismatch for FContextualAnimSceneBindingContext::Actor");
static_assert(offsetof(FContextualAnimSceneBindingContext, CachedSceneActorComp) == 8, "Offset mismatch for FContextualAnimSceneBindingContext::CachedSceneActorComp");
static_assert(offsetof(FContextualAnimSceneBindingContext, CachedAnimInstance) == 16, "Offset mismatch for FContextualAnimSceneBindingContext::CachedAnimInstance");
static_assert(offsetof(FContextualAnimSceneBindingContext, CachedSkeletalMesh) == 24, "Offset mismatch for FContextualAnimSceneBindingContext::CachedSkeletalMesh");
static_assert(offsetof(FContextualAnimSceneBindingContext, CachedMovementComp) == 32, "Offset mismatch for FContextualAnimSceneBindingContext::CachedMovementComp");
static_assert(offsetof(FContextualAnimSceneBindingContext, CachedMotionWarpingComp) == 40, "Offset mismatch for FContextualAnimSceneBindingContext::CachedMotionWarpingComp");

// /Script/ContextualAnimation.ContextualAnimSceneBindings
// Kind: ScriptStruct; super: none
struct FContextualAnimSceneBindings
{
public:
    std::uint8_t ID; // 0x0000 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    void* SceneAsset; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::int8_t SectionIdx; // 0x0010 (Size: 0x1, Type: Int8Property)
    std::int8_t AnimSetIdx; // 0x0011 (Size: 0x1, Type: Int8Property)
    std::uint8_t Pad_0001[0x6]; // 0x0012
    TArray<void*> Data; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    TScriptInterface<void> OverrideProviderInterface; // 0x0028 (Size: 0x10, Type: InterfaceProperty)
};

static_assert(offsetof(FContextualAnimSceneBindings, ID) == 0, "Offset mismatch for FContextualAnimSceneBindings::ID");
static_assert(offsetof(FContextualAnimSceneBindings, SceneAsset) == 8, "Offset mismatch for FContextualAnimSceneBindings::SceneAsset");
static_assert(offsetof(FContextualAnimSceneBindings, SectionIdx) == 16, "Offset mismatch for FContextualAnimSceneBindings::SectionIdx");
static_assert(offsetof(FContextualAnimSceneBindings, AnimSetIdx) == 17, "Offset mismatch for FContextualAnimSceneBindings::AnimSetIdx");
static_assert(offsetof(FContextualAnimSceneBindings, Data) == 24, "Offset mismatch for FContextualAnimSceneBindings::Data");
static_assert(offsetof(FContextualAnimSceneBindings, OverrideProviderInterface) == 40, "Offset mismatch for FContextualAnimSceneBindings::OverrideProviderInterface");

// /Script/ContextualAnimation.ContextualAnimSceneSection
// Kind: ScriptStruct; super: none
struct FContextualAnimSceneSection
{
public:
    FName Name; // 0x0000 (Size: 0x8, Type: NameProperty)
    TArray<void*> AnimSets; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> WarpPointDefinitions; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bSyncAnimations; // 0x0028 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FContextualAnimSceneSection, Name) == 0, "Offset mismatch for FContextualAnimSceneSection::Name");
static_assert(offsetof(FContextualAnimSceneSection, AnimSets) == 8, "Offset mismatch for FContextualAnimSceneSection::AnimSets");
static_assert(offsetof(FContextualAnimSceneSection, WarpPointDefinitions) == 24, "Offset mismatch for FContextualAnimSceneSection::WarpPointDefinitions");
static_assert(offsetof(FContextualAnimSceneSection, bSyncAnimations) == 40, "Offset mismatch for FContextualAnimSceneSection::bSyncAnimations");

// /Script/ContextualAnimation.ContextualAnimSet
// Kind: ScriptStruct; super: none
struct FContextualAnimSet
{
public:
    TArray<void*> Tracks; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> WarpPoints; // 0x0010 (Size: 0x10, Type: MapProperty)
    std::uint8_t Name[0x4]; // 0x0020 (Size: 0x4, Type: NameProperty)
    float RandomWeight; // 0x0024 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FContextualAnimSet, Tracks) == 0, "Offset mismatch for FContextualAnimSet::Tracks");
static_assert(offsetof(FContextualAnimSet, WarpPoints) == 16, "Offset mismatch for FContextualAnimSet::WarpPoints");
static_assert(offsetof(FContextualAnimSet, Name) == 32, "Offset mismatch for FContextualAnimSet::Name");
static_assert(offsetof(FContextualAnimSet, RandomWeight) == 36, "Offset mismatch for FContextualAnimSet::RandomWeight");

// /Script/ContextualAnimation.ContextualAnimStartSceneParams
// Kind: ScriptStruct; super: none
struct FContextualAnimStartSceneParams
{
public:
    TMap<void*, void*> RoleToActorMap; // 0x0000 (Size: 0x10, Type: MapProperty)
    std::int32_t SectionIdx; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::int32_t AnimSetIdx; // 0x0014 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FContextualAnimStartSceneParams, RoleToActorMap) == 0, "Offset mismatch for FContextualAnimStartSceneParams::RoleToActorMap");
static_assert(offsetof(FContextualAnimStartSceneParams, SectionIdx) == 16, "Offset mismatch for FContextualAnimStartSceneParams::SectionIdx");
static_assert(offsetof(FContextualAnimStartSceneParams, AnimSetIdx) == 20, "Offset mismatch for FContextualAnimStartSceneParams::AnimSetIdx");

// /Script/ContextualAnimation.ContextualAnimTrack
// Kind: ScriptStruct; super: none
struct FContextualAnimTrack
{
public:
    void* Animation; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    float AnimMaxStartTime; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bChangeMovementMode; // 0x000C (Size: 0x1, Type: BoolProperty)
    std::uint8_t MovementMode; // 0x000D (Size: 0x1, Type: ByteProperty)
    std::uint8_t CustomMovementMode; // 0x000E (Size: 0x1, Type: ByteProperty)
    std::uint8_t bControlCharacterRotation; // 0x000F (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOptional; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0011
    std::uint8_t AlignmentData[0x28]; // 0x0018 (Size: 0x28, Type: StructProperty)
    std::uint8_t IKTargetData[0x28]; // 0x0040 (Size: 0x28, Type: StructProperty)
    TArray<void*> SelectionCriteria; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0078
    std::uint8_t MeshToScene[0x60]; // 0x0080 (Size: 0x60, Type: StructProperty)
    std::uint8_t Role[0x4]; // 0x00E0 (Size: 0x4, Type: NameProperty)
    std::int32_t SectionIdx; // 0x00E4 (Size: 0x4, Type: IntProperty)
    std::int32_t AnimSetIdx; // 0x00E8 (Size: 0x4, Type: IntProperty)
    std::int32_t AnimTrackIdx; // 0x00EC (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FContextualAnimTrack, Animation) == 0, "Offset mismatch for FContextualAnimTrack::Animation");
static_assert(offsetof(FContextualAnimTrack, AnimMaxStartTime) == 8, "Offset mismatch for FContextualAnimTrack::AnimMaxStartTime");
static_assert(offsetof(FContextualAnimTrack, bChangeMovementMode) == 12, "Offset mismatch for FContextualAnimTrack::bChangeMovementMode");
static_assert(offsetof(FContextualAnimTrack, MovementMode) == 13, "Offset mismatch for FContextualAnimTrack::MovementMode");
static_assert(offsetof(FContextualAnimTrack, CustomMovementMode) == 14, "Offset mismatch for FContextualAnimTrack::CustomMovementMode");
static_assert(offsetof(FContextualAnimTrack, bControlCharacterRotation) == 15, "Offset mismatch for FContextualAnimTrack::bControlCharacterRotation");
static_assert(offsetof(FContextualAnimTrack, bOptional) == 16, "Offset mismatch for FContextualAnimTrack::bOptional");
static_assert(offsetof(FContextualAnimTrack, AlignmentData) == 24, "Offset mismatch for FContextualAnimTrack::AlignmentData");
static_assert(offsetof(FContextualAnimTrack, IKTargetData) == 64, "Offset mismatch for FContextualAnimTrack::IKTargetData");
static_assert(offsetof(FContextualAnimTrack, SelectionCriteria) == 104, "Offset mismatch for FContextualAnimTrack::SelectionCriteria");
static_assert(offsetof(FContextualAnimTrack, MeshToScene) == 128, "Offset mismatch for FContextualAnimTrack::MeshToScene");
static_assert(offsetof(FContextualAnimTrack, Role) == 224, "Offset mismatch for FContextualAnimTrack::Role");
static_assert(offsetof(FContextualAnimTrack, SectionIdx) == 228, "Offset mismatch for FContextualAnimTrack::SectionIdx");
static_assert(offsetof(FContextualAnimTrack, AnimSetIdx) == 232, "Offset mismatch for FContextualAnimTrack::AnimSetIdx");
static_assert(offsetof(FContextualAnimTrack, AnimTrackIdx) == 236, "Offset mismatch for FContextualAnimTrack::AnimTrackIdx");

// /Script/ContextualAnimation.ContextualAnimWarpPoint
// Kind: ScriptStruct; super: none
struct FContextualAnimWarpPoint
{
public:
    FName Name; // 0x0000 (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0000[0x8]; // 0x0008
    std::uint8_t Transform[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FContextualAnimWarpPoint, Name) == 0, "Offset mismatch for FContextualAnimWarpPoint::Name");
static_assert(offsetof(FContextualAnimWarpPoint, Transform) == 16, "Offset mismatch for FContextualAnimWarpPoint::Transform");

// /Script/ContextualAnimation.ContextualAnimWarpPointCustomParams
// Kind: ScriptStruct; super: none
struct FContextualAnimWarpPointCustomParams
{
public:
    std::uint8_t origin[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t bAlongClosestDistance; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    std::uint8_t OtherRole[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    float Weight; // 0x000C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FContextualAnimWarpPointCustomParams, origin) == 0, "Offset mismatch for FContextualAnimWarpPointCustomParams::origin");
static_assert(offsetof(FContextualAnimWarpPointCustomParams, bAlongClosestDistance) == 4, "Offset mismatch for FContextualAnimWarpPointCustomParams::bAlongClosestDistance");
static_assert(offsetof(FContextualAnimWarpPointCustomParams, OtherRole) == 8, "Offset mismatch for FContextualAnimWarpPointCustomParams::OtherRole");
static_assert(offsetof(FContextualAnimWarpPointCustomParams, Weight) == 12, "Offset mismatch for FContextualAnimWarpPointCustomParams::Weight");

// /Script/ContextualAnimation.ContextualAnimWarpPointDefinition
// Kind: ScriptStruct; super: none
struct FContextualAnimWarpPointDefinition
{
public:
    std::uint8_t WarpTargetName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t Mode; // 0x0004 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    std::uint8_t SocketName[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::uint8_t Params[0x1]; // 0x000C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FContextualAnimWarpPointDefinition, WarpTargetName) == 0, "Offset mismatch for FContextualAnimWarpPointDefinition::WarpTargetName");
static_assert(offsetof(FContextualAnimWarpPointDefinition, Mode) == 4, "Offset mismatch for FContextualAnimWarpPointDefinition::Mode");
static_assert(offsetof(FContextualAnimWarpPointDefinition, SocketName) == 8, "Offset mismatch for FContextualAnimWarpPointDefinition::SocketName");
static_assert(offsetof(FContextualAnimWarpPointDefinition, Params) == 12, "Offset mismatch for FContextualAnimWarpPointDefinition::Params");

// /Script/ContextualAnimation.ContextualAnimWarpTarget
// Kind: ScriptStruct; super: none
struct FContextualAnimWarpTarget
{
public:
    std::uint8_t Role[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t TargetName[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    std::uint8_t TargetLocation[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t TargetRotation[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FContextualAnimWarpTarget, Role) == 0, "Offset mismatch for FContextualAnimWarpTarget::Role");
static_assert(offsetof(FContextualAnimWarpTarget, TargetName) == 4, "Offset mismatch for FContextualAnimWarpTarget::TargetName");
static_assert(offsetof(FContextualAnimWarpTarget, TargetLocation) == 8, "Offset mismatch for FContextualAnimWarpTarget::TargetLocation");
static_assert(offsetof(FContextualAnimWarpTarget, TargetRotation) == 32, "Offset mismatch for FContextualAnimWarpTarget::TargetRotation");

// /Script/ContextualAnimation.ContextualAnimationOverrideData
// Kind: ScriptStruct; super: none
struct FContextualAnimationOverrideData
{
public:
    void* AnimSequence; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0000[0x8]; // 0x0008
    std::uint8_t MeshToScene[0x60]; // 0x0010 (Size: 0x60, Type: StructProperty)
    std::uint8_t AlignmentData[0x28]; // 0x0070 (Size: 0x28, Type: StructProperty)
    std::uint8_t IKTargetData[0x1]; // 0x0098 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FContextualAnimationOverrideData, AnimSequence) == 0, "Offset mismatch for FContextualAnimationOverrideData::AnimSequence");
static_assert(offsetof(FContextualAnimationOverrideData, MeshToScene) == 16, "Offset mismatch for FContextualAnimationOverrideData::MeshToScene");
static_assert(offsetof(FContextualAnimationOverrideData, AlignmentData) == 112, "Offset mismatch for FContextualAnimationOverrideData::AlignmentData");
static_assert(offsetof(FContextualAnimationOverrideData, IKTargetData) == 152, "Offset mismatch for FContextualAnimationOverrideData::IKTargetData");

// /Script/ContextualAnimation.AnimNotifyState_EarlyOutContextualAnimWindow
// Kind: Class; super: AnimNotifyState
class UAnimNotifyState_EarlyOutContextualAnimWindow
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t bStopEveryone; // 0x0030 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UAnimNotifyState_EarlyOutContextualAnimWindow, bStopEveryone) == 48, "Offset mismatch for UAnimNotifyState_EarlyOutContextualAnimWindow::bStopEveryone");

// /Script/ContextualAnimation.AnimNotifyState_IKWindow
// Kind: Class; super: AnimNotifyState
class UAnimNotifyState_IKWindow
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    FName GoalName; // 0x0030 (Size: 0x8, Type: NameProperty)
    std::uint8_t BlendIn[0x30]; // 0x0038 (Size: 0x30, Type: StructProperty)
    std::uint8_t BlendOut[0x30]; // 0x0068 (Size: 0x30, Type: StructProperty)
    std::uint8_t bEnable; // 0x0098 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UAnimNotifyState_IKWindow, GoalName) == 48, "Offset mismatch for UAnimNotifyState_IKWindow::GoalName");
static_assert(offsetof(UAnimNotifyState_IKWindow, BlendIn) == 56, "Offset mismatch for UAnimNotifyState_IKWindow::BlendIn");
static_assert(offsetof(UAnimNotifyState_IKWindow, BlendOut) == 104, "Offset mismatch for UAnimNotifyState_IKWindow::BlendOut");
static_assert(offsetof(UAnimNotifyState_IKWindow, bEnable) == 152, "Offset mismatch for UAnimNotifyState_IKWindow::bEnable");

// /Script/ContextualAnimation.ContextualAnimActorInterface
// Kind: Class; super: Interface
class UContextualAnimActorInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ContextualAnimation.ContextualAnimOverrideInterface
// Kind: Class; super: Interface
class UContextualAnimOverrideInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ContextualAnimation.ContextualAnimRolesAsset
// Kind: Class; super: DataAsset
class UContextualAnimRolesAsset
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> Roles; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UContextualAnimRolesAsset, Roles) == 40, "Offset mismatch for UContextualAnimRolesAsset::Roles");

// /Script/ContextualAnimation.ContextualAnimSceneActorComponent
// Kind: Class; super: ActorComponent
class UContextualAnimSceneActorComponent
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    FMulticastInlineDelegate OnJoinedSceneDelegate; // 0x00C8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnLeftSceneDelegate; // 0x00D8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPlayMontageNotifyBeginDelegate; // 0x00E8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMontageBlendingOutDelegate; // 0x00F8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMontageReachedEndDelegate; // 0x0108 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* SceneAsset; // 0x0118 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t AlignmentOffset[0x60]; // 0x0120 (Size: 0x60, Type: StructProperty)
    TWeakObjectPtr<void> OwnerAnimInstance; // 0x0180 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t RepBindings[0x68]; // 0x0188 (Size: 0x68, Type: StructProperty)
    std::uint8_t RepLateJoinData[0x30]; // 0x01F0 (Size: 0x30, Type: StructProperty)
    std::uint8_t RepTransitionData[0x28]; // 0x0220 (Size: 0x28, Type: StructProperty)
    std::uint8_t RepTransitionSingleActorData[0x28]; // 0x0248 (Size: 0x28, Type: StructProperty)
    std::uint8_t Bindings[0x38]; // 0x0270 (Size: 0x38, Type: StructProperty)
    TArray<void*> IKTargets; // 0x02A8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> WarpTargetNamesCache; // 0x02B8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UContextualAnimSceneActorComponent, OnJoinedSceneDelegate) == 200, "Offset mismatch for UContextualAnimSceneActorComponent::OnJoinedSceneDelegate");
static_assert(offsetof(UContextualAnimSceneActorComponent, OnLeftSceneDelegate) == 216, "Offset mismatch for UContextualAnimSceneActorComponent::OnLeftSceneDelegate");
static_assert(offsetof(UContextualAnimSceneActorComponent, OnPlayMontageNotifyBeginDelegate) == 232, "Offset mismatch for UContextualAnimSceneActorComponent::OnPlayMontageNotifyBeginDelegate");
static_assert(offsetof(UContextualAnimSceneActorComponent, OnMontageBlendingOutDelegate) == 248, "Offset mismatch for UContextualAnimSceneActorComponent::OnMontageBlendingOutDelegate");
static_assert(offsetof(UContextualAnimSceneActorComponent, OnMontageReachedEndDelegate) == 264, "Offset mismatch for UContextualAnimSceneActorComponent::OnMontageReachedEndDelegate");
static_assert(offsetof(UContextualAnimSceneActorComponent, SceneAsset) == 280, "Offset mismatch for UContextualAnimSceneActorComponent::SceneAsset");
static_assert(offsetof(UContextualAnimSceneActorComponent, AlignmentOffset) == 288, "Offset mismatch for UContextualAnimSceneActorComponent::AlignmentOffset");
static_assert(offsetof(UContextualAnimSceneActorComponent, OwnerAnimInstance) == 384, "Offset mismatch for UContextualAnimSceneActorComponent::OwnerAnimInstance");
static_assert(offsetof(UContextualAnimSceneActorComponent, RepBindings) == 392, "Offset mismatch for UContextualAnimSceneActorComponent::RepBindings");
static_assert(offsetof(UContextualAnimSceneActorComponent, RepLateJoinData) == 496, "Offset mismatch for UContextualAnimSceneActorComponent::RepLateJoinData");
static_assert(offsetof(UContextualAnimSceneActorComponent, RepTransitionData) == 544, "Offset mismatch for UContextualAnimSceneActorComponent::RepTransitionData");
static_assert(offsetof(UContextualAnimSceneActorComponent, RepTransitionSingleActorData) == 584, "Offset mismatch for UContextualAnimSceneActorComponent::RepTransitionSingleActorData");
static_assert(offsetof(UContextualAnimSceneActorComponent, Bindings) == 624, "Offset mismatch for UContextualAnimSceneActorComponent::Bindings");
static_assert(offsetof(UContextualAnimSceneActorComponent, IKTargets) == 680, "Offset mismatch for UContextualAnimSceneActorComponent::IKTargets");
static_assert(offsetof(UContextualAnimSceneActorComponent, WarpTargetNamesCache) == 696, "Offset mismatch for UContextualAnimSceneActorComponent::WarpTargetNamesCache");

// /Script/ContextualAnimation.ContextualAnimSceneAsset
// Kind: Class; super: DataAsset
class UContextualAnimSceneAsset
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* RolesAsset; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t PrimaryRole[0x4]; // 0x0030 (Size: 0x4, Type: NameProperty)
    std::uint8_t Tag[0x4]; // 0x0034 (Size: 0x4, Type: StructProperty)
    TArray<void*> Sections; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    float Radius; // 0x0048 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x004C
    TArray<void*> CollisionBehaviors; // 0x0050 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AttachmentParams; // 0x0060 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t IKTargetParams[0x18]; // 0x0070 (Size: 0x18, Type: StructProperty)
    std::uint8_t bFindIdealAnimStartTime; // 0x0088 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0089
    float FindIdealStartTimeMargin; // 0x008C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIgnoreClientMovementErrorChecksAndCorrection; // 0x0090 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDisableMovementReplicationForSimulatedProxy; // 0x0091 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPrecomputeAlignmentTracks; // 0x0092 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x1]; // 0x0093
    std::int32_t SampleRate; // 0x0094 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UContextualAnimSceneAsset, RolesAsset) == 40, "Offset mismatch for UContextualAnimSceneAsset::RolesAsset");
static_assert(offsetof(UContextualAnimSceneAsset, PrimaryRole) == 48, "Offset mismatch for UContextualAnimSceneAsset::PrimaryRole");
static_assert(offsetof(UContextualAnimSceneAsset, Tag) == 52, "Offset mismatch for UContextualAnimSceneAsset::Tag");
static_assert(offsetof(UContextualAnimSceneAsset, Sections) == 56, "Offset mismatch for UContextualAnimSceneAsset::Sections");
static_assert(offsetof(UContextualAnimSceneAsset, Radius) == 72, "Offset mismatch for UContextualAnimSceneAsset::Radius");
static_assert(offsetof(UContextualAnimSceneAsset, CollisionBehaviors) == 80, "Offset mismatch for UContextualAnimSceneAsset::CollisionBehaviors");
static_assert(offsetof(UContextualAnimSceneAsset, AttachmentParams) == 96, "Offset mismatch for UContextualAnimSceneAsset::AttachmentParams");
static_assert(offsetof(UContextualAnimSceneAsset, IKTargetParams) == 112, "Offset mismatch for UContextualAnimSceneAsset::IKTargetParams");
static_assert(offsetof(UContextualAnimSceneAsset, bFindIdealAnimStartTime) == 136, "Offset mismatch for UContextualAnimSceneAsset::bFindIdealAnimStartTime");
static_assert(offsetof(UContextualAnimSceneAsset, FindIdealStartTimeMargin) == 140, "Offset mismatch for UContextualAnimSceneAsset::FindIdealStartTimeMargin");
static_assert(offsetof(UContextualAnimSceneAsset, bIgnoreClientMovementErrorChecksAndCorrection) == 144, "Offset mismatch for UContextualAnimSceneAsset::bIgnoreClientMovementErrorChecksAndCorrection");
static_assert(offsetof(UContextualAnimSceneAsset, bDisableMovementReplicationForSimulatedProxy) == 145, "Offset mismatch for UContextualAnimSceneAsset::bDisableMovementReplicationForSimulatedProxy");
static_assert(offsetof(UContextualAnimSceneAsset, bPrecomputeAlignmentTracks) == 146, "Offset mismatch for UContextualAnimSceneAsset::bPrecomputeAlignmentTracks");
static_assert(offsetof(UContextualAnimSceneAsset, SampleRate) == 148, "Offset mismatch for UContextualAnimSceneAsset::SampleRate");

// /Script/ContextualAnimation.ContextualAnimSelectionCriterion
// Kind: Class; super: Object
class UContextualAnimSelectionCriterion
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Type; // 0x0028 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UContextualAnimSelectionCriterion, Type) == 40, "Offset mismatch for UContextualAnimSelectionCriterion::Type");

// /Script/ContextualAnimation.ContextualAnimSelectionCriterion_Blueprint
// Kind: Class; super: ContextualAnimSelectionCriterion
class UContextualAnimSelectionCriterion_Blueprint
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Type; // 0x0028 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UContextualAnimSelectionCriterion_Blueprint, Type) == 40, "Offset mismatch for UContextualAnimSelectionCriterion_Blueprint::Type");

// /Script/ContextualAnimation.ContextualAnimSelectionCriterion_Cone
// Kind: Class; super: ContextualAnimSelectionCriterion
class UContextualAnimSelectionCriterion_Cone
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t Mode; // 0x0030 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0031
    float Distance; // 0x0034 (Size: 0x4, Type: FloatProperty)
    float HalfAngle; // 0x0038 (Size: 0x4, Type: FloatProperty)
    float Offset; // 0x003C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UContextualAnimSelectionCriterion_Cone, Mode) == 48, "Offset mismatch for UContextualAnimSelectionCriterion_Cone::Mode");
static_assert(offsetof(UContextualAnimSelectionCriterion_Cone, Distance) == 52, "Offset mismatch for UContextualAnimSelectionCriterion_Cone::Distance");
static_assert(offsetof(UContextualAnimSelectionCriterion_Cone, HalfAngle) == 56, "Offset mismatch for UContextualAnimSelectionCriterion_Cone::HalfAngle");
static_assert(offsetof(UContextualAnimSelectionCriterion_Cone, Offset) == 60, "Offset mismatch for UContextualAnimSelectionCriterion_Cone::Offset");

// /Script/ContextualAnimation.ContextualAnimSelectionCriterion_Distance
// Kind: Class; super: ContextualAnimSelectionCriterion
class UContextualAnimSelectionCriterion_Distance
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t Mode; // 0x0030 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0031
    float MinDistance; // 0x0034 (Size: 0x4, Type: FloatProperty)
    float MaxDistance; // 0x0038 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UContextualAnimSelectionCriterion_Distance, Mode) == 48, "Offset mismatch for UContextualAnimSelectionCriterion_Distance::Mode");
static_assert(offsetof(UContextualAnimSelectionCriterion_Distance, MinDistance) == 52, "Offset mismatch for UContextualAnimSelectionCriterion_Distance::MinDistance");
static_assert(offsetof(UContextualAnimSelectionCriterion_Distance, MaxDistance) == 56, "Offset mismatch for UContextualAnimSelectionCriterion_Distance::MaxDistance");

// /Script/ContextualAnimation.ContextualAnimSelectionCriterion_TriggerArea
// Kind: Class; super: ContextualAnimSelectionCriterion
class UContextualAnimSelectionCriterion_TriggerArea
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TArray<void*> PolygonPoints; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    float Height; // 0x0040 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UContextualAnimSelectionCriterion_TriggerArea, PolygonPoints) == 48, "Offset mismatch for UContextualAnimSelectionCriterion_TriggerArea::PolygonPoints");
static_assert(offsetof(UContextualAnimSelectionCriterion_TriggerArea, Height) == 64, "Offset mismatch for UContextualAnimSelectionCriterion_TriggerArea::Height");

// /Script/ContextualAnimation.ContextualAnimUtilities
// Kind: Class; super: BlueprintFunctionLibrary
class UContextualAnimUtilities
{
public:
    std::uint8_t Opaque[1];
};

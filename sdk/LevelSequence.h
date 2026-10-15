/**
 * decamp dumper generated SDK
 * Package: /Script/LevelSequence
 */
#pragma once
#include "Basic.h"

// /Script/LevelSequence.BoundActorProxy
// Kind: ScriptStruct; super: none
struct FBoundActorProxy
{
public:
    std::uint8_t Opaque[1];
};


// /Script/LevelSequence.LegacyLazyObjectPtrFragment
// Kind: ScriptStruct; super: none
struct FLegacyLazyObjectPtrFragment
{
public:
    std::uint8_t LazyObjectId[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FLegacyLazyObjectPtrFragment, LazyObjectId) == 0, "Offset mismatch for FLegacyLazyObjectPtrFragment::LazyObjectId");

// /Script/LevelSequence.LevelSequenceAnimSequenceLinkItem
// Kind: ScriptStruct; super: none
struct FLevelSequenceAnimSequenceLinkItem
{
public:
    std::uint8_t SkelTrackGuid[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t PathToAnimSequence[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    std::uint8_t bAutoBake; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bExportTransforms; // 0x0029 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bExportMorphTargets; // 0x002A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bExportAttributeCurves; // 0x002B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bExportMaterialCurves; // 0x002C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSkipCurvesWithZeroValue; // 0x002D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSetRetargetSourceAsset; // 0x002E (Size: 0x1, Type: BoolProperty)
    std::uint8_t Interpolation; // 0x002F (Size: 0x1, Type: EnumProperty)
    std::uint8_t CurveInterpolation; // 0x0030 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bRecordInWorldSpace; // 0x0031 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEvaluateAllSkeletalMeshComponents; // 0x0032 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x5]; // 0x0033
    TArray<void*> IncludeAnimationNames; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ExcludeAnimationNames; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bRemoveExcludedCurves; // 0x0058 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0059
    std::uint8_t WarmUpFrames[0x4]; // 0x005C (Size: 0x4, Type: StructProperty)
    std::uint8_t DelayBeforeStart[0x4]; // 0x0060 (Size: 0x4, Type: StructProperty)
    std::uint8_t bUseCustomTimeRange; // 0x0064 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0065
    std::uint8_t CustomStartFrame[0x4]; // 0x0068 (Size: 0x4, Type: StructProperty)
    std::uint8_t CustomEndFrame[0x4]; // 0x006C (Size: 0x4, Type: StructProperty)
    std::uint8_t CustomDisplayRate[0x8]; // 0x0070 (Size: 0x8, Type: StructProperty)
    std::uint8_t bUseCustomFrameRate; // 0x0078 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0079
    std::uint8_t CustomFrameRate[0x1]; // 0x007C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FLevelSequenceAnimSequenceLinkItem, SkelTrackGuid) == 0, "Offset mismatch for FLevelSequenceAnimSequenceLinkItem::SkelTrackGuid");
static_assert(offsetof(FLevelSequenceAnimSequenceLinkItem, PathToAnimSequence) == 16, "Offset mismatch for FLevelSequenceAnimSequenceLinkItem::PathToAnimSequence");
static_assert(offsetof(FLevelSequenceAnimSequenceLinkItem, bAutoBake) == 40, "Offset mismatch for FLevelSequenceAnimSequenceLinkItem::bAutoBake");
static_assert(offsetof(FLevelSequenceAnimSequenceLinkItem, bExportTransforms) == 41, "Offset mismatch for FLevelSequenceAnimSequenceLinkItem::bExportTransforms");
static_assert(offsetof(FLevelSequenceAnimSequenceLinkItem, bExportMorphTargets) == 42, "Offset mismatch for FLevelSequenceAnimSequenceLinkItem::bExportMorphTargets");
static_assert(offsetof(FLevelSequenceAnimSequenceLinkItem, bExportAttributeCurves) == 43, "Offset mismatch for FLevelSequenceAnimSequenceLinkItem::bExportAttributeCurves");
static_assert(offsetof(FLevelSequenceAnimSequenceLinkItem, bExportMaterialCurves) == 44, "Offset mismatch for FLevelSequenceAnimSequenceLinkItem::bExportMaterialCurves");
static_assert(offsetof(FLevelSequenceAnimSequenceLinkItem, bSkipCurvesWithZeroValue) == 45, "Offset mismatch for FLevelSequenceAnimSequenceLinkItem::bSkipCurvesWithZeroValue");
static_assert(offsetof(FLevelSequenceAnimSequenceLinkItem, bSetRetargetSourceAsset) == 46, "Offset mismatch for FLevelSequenceAnimSequenceLinkItem::bSetRetargetSourceAsset");
static_assert(offsetof(FLevelSequenceAnimSequenceLinkItem, Interpolation) == 47, "Offset mismatch for FLevelSequenceAnimSequenceLinkItem::Interpolation");
static_assert(offsetof(FLevelSequenceAnimSequenceLinkItem, CurveInterpolation) == 48, "Offset mismatch for FLevelSequenceAnimSequenceLinkItem::CurveInterpolation");
static_assert(offsetof(FLevelSequenceAnimSequenceLinkItem, bRecordInWorldSpace) == 49, "Offset mismatch for FLevelSequenceAnimSequenceLinkItem::bRecordInWorldSpace");
static_assert(offsetof(FLevelSequenceAnimSequenceLinkItem, bEvaluateAllSkeletalMeshComponents) == 50, "Offset mismatch for FLevelSequenceAnimSequenceLinkItem::bEvaluateAllSkeletalMeshComponents");
static_assert(offsetof(FLevelSequenceAnimSequenceLinkItem, IncludeAnimationNames) == 56, "Offset mismatch for FLevelSequenceAnimSequenceLinkItem::IncludeAnimationNames");
static_assert(offsetof(FLevelSequenceAnimSequenceLinkItem, ExcludeAnimationNames) == 72, "Offset mismatch for FLevelSequenceAnimSequenceLinkItem::ExcludeAnimationNames");
static_assert(offsetof(FLevelSequenceAnimSequenceLinkItem, bRemoveExcludedCurves) == 88, "Offset mismatch for FLevelSequenceAnimSequenceLinkItem::bRemoveExcludedCurves");
static_assert(offsetof(FLevelSequenceAnimSequenceLinkItem, WarmUpFrames) == 92, "Offset mismatch for FLevelSequenceAnimSequenceLinkItem::WarmUpFrames");
static_assert(offsetof(FLevelSequenceAnimSequenceLinkItem, DelayBeforeStart) == 96, "Offset mismatch for FLevelSequenceAnimSequenceLinkItem::DelayBeforeStart");
static_assert(offsetof(FLevelSequenceAnimSequenceLinkItem, bUseCustomTimeRange) == 100, "Offset mismatch for FLevelSequenceAnimSequenceLinkItem::bUseCustomTimeRange");
static_assert(offsetof(FLevelSequenceAnimSequenceLinkItem, CustomStartFrame) == 104, "Offset mismatch for FLevelSequenceAnimSequenceLinkItem::CustomStartFrame");
static_assert(offsetof(FLevelSequenceAnimSequenceLinkItem, CustomEndFrame) == 108, "Offset mismatch for FLevelSequenceAnimSequenceLinkItem::CustomEndFrame");
static_assert(offsetof(FLevelSequenceAnimSequenceLinkItem, CustomDisplayRate) == 112, "Offset mismatch for FLevelSequenceAnimSequenceLinkItem::CustomDisplayRate");
static_assert(offsetof(FLevelSequenceAnimSequenceLinkItem, bUseCustomFrameRate) == 120, "Offset mismatch for FLevelSequenceAnimSequenceLinkItem::bUseCustomFrameRate");
static_assert(offsetof(FLevelSequenceAnimSequenceLinkItem, CustomFrameRate) == 124, "Offset mismatch for FLevelSequenceAnimSequenceLinkItem::CustomFrameRate");

// /Script/LevelSequence.LevelSequenceBindingReference
// Kind: ScriptStruct; super: none
struct FLevelSequenceBindingReference
{
public:
    FString PackageName; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t ExternalObjectPath[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    FString ObjectPath; // 0x0028 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FLevelSequenceBindingReference, PackageName) == 0, "Offset mismatch for FLevelSequenceBindingReference::PackageName");
static_assert(offsetof(FLevelSequenceBindingReference, ExternalObjectPath) == 16, "Offset mismatch for FLevelSequenceBindingReference::ExternalObjectPath");
static_assert(offsetof(FLevelSequenceBindingReference, ObjectPath) == 40, "Offset mismatch for FLevelSequenceBindingReference::ObjectPath");

// /Script/LevelSequence.LevelSequenceBindingReferenceArray
// Kind: ScriptStruct; super: none
struct FLevelSequenceBindingReferenceArray
{
public:
    TArray<void*> References; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FLevelSequenceBindingReferenceArray, References) == 0, "Offset mismatch for FLevelSequenceBindingReferenceArray::References");

// /Script/LevelSequence.LevelSequenceBindingReferences
// Kind: ScriptStruct; super: none
struct FLevelSequenceBindingReferences
{
public:
    TMap<void*, void*> BindingIdToReferences; // 0x0000 (Size: 0x10, Type: MapProperty)
    std::uint8_t AnimSequenceInstances[0x10]; // 0x0010 (Size: 0x10, Type: SetProperty)
    TSet<void*> PostProcessInstances; // 0x0020 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(FLevelSequenceBindingReferences, BindingIdToReferences) == 0, "Offset mismatch for FLevelSequenceBindingReferences::BindingIdToReferences");
static_assert(offsetof(FLevelSequenceBindingReferences, AnimSequenceInstances) == 16, "Offset mismatch for FLevelSequenceBindingReferences::AnimSequenceInstances");
static_assert(offsetof(FLevelSequenceBindingReferences, PostProcessInstances) == 32, "Offset mismatch for FLevelSequenceBindingReferences::PostProcessInstances");

// /Script/LevelSequence.LevelSequenceCameraSettings
// Kind: ScriptStruct; super: none
struct FLevelSequenceCameraSettings
{
public:
    std::uint8_t bOverrideAspectRatioAxisConstraint; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t AspectRatioAxisConstraint; // 0x0001 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FLevelSequenceCameraSettings, bOverrideAspectRatioAxisConstraint) == 0, "Offset mismatch for FLevelSequenceCameraSettings::bOverrideAspectRatioAxisConstraint");
static_assert(offsetof(FLevelSequenceCameraSettings, AspectRatioAxisConstraint) == 1, "Offset mismatch for FLevelSequenceCameraSettings::AspectRatioAxisConstraint");

// /Script/LevelSequence.LevelSequenceLegacyObjectReference
// Kind: ScriptStruct; super: none
struct FLevelSequenceLegacyObjectReference
{
public:
    std::uint8_t Opaque[1];
};


// /Script/LevelSequence.LevelSequenceObjectReferenceMap
// Kind: ScriptStruct; super: none
struct FLevelSequenceObjectReferenceMap
{
public:
    std::uint8_t Opaque[1];
};


// /Script/LevelSequence.LevelSequencePlayerSnapshot
// Kind: ScriptStruct; super: none
struct FLevelSequencePlayerSnapshot
{
public:
    FString RootName; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t RootTime[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t SourceTime[0x10]; // 0x0020 (Size: 0x10, Type: StructProperty)
    FString CurrentShotName; // 0x0030 (Size: 0x10, Type: StrProperty)
    std::uint8_t CurrentShotLocalTime[0x10]; // 0x0040 (Size: 0x10, Type: StructProperty)
    std::uint8_t CurrentShotSourceTime[0x10]; // 0x0050 (Size: 0x10, Type: StructProperty)
    FString SourceTimecode; // 0x0060 (Size: 0x10, Type: StrProperty)
    std::uint8_t CameraComponent[0x20]; // 0x0070 (Size: 0x20, Type: SoftObjectProperty)
    void* ActiveShot; // 0x0090 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ShotID[0x1]; // 0x0098 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FLevelSequencePlayerSnapshot, RootName) == 0, "Offset mismatch for FLevelSequencePlayerSnapshot::RootName");
static_assert(offsetof(FLevelSequencePlayerSnapshot, RootTime) == 16, "Offset mismatch for FLevelSequencePlayerSnapshot::RootTime");
static_assert(offsetof(FLevelSequencePlayerSnapshot, SourceTime) == 32, "Offset mismatch for FLevelSequencePlayerSnapshot::SourceTime");
static_assert(offsetof(FLevelSequencePlayerSnapshot, CurrentShotName) == 48, "Offset mismatch for FLevelSequencePlayerSnapshot::CurrentShotName");
static_assert(offsetof(FLevelSequencePlayerSnapshot, CurrentShotLocalTime) == 64, "Offset mismatch for FLevelSequencePlayerSnapshot::CurrentShotLocalTime");
static_assert(offsetof(FLevelSequencePlayerSnapshot, CurrentShotSourceTime) == 80, "Offset mismatch for FLevelSequencePlayerSnapshot::CurrentShotSourceTime");
static_assert(offsetof(FLevelSequencePlayerSnapshot, SourceTimecode) == 96, "Offset mismatch for FLevelSequencePlayerSnapshot::SourceTimecode");
static_assert(offsetof(FLevelSequencePlayerSnapshot, CameraComponent) == 112, "Offset mismatch for FLevelSequencePlayerSnapshot::CameraComponent");
static_assert(offsetof(FLevelSequencePlayerSnapshot, ActiveShot) == 144, "Offset mismatch for FLevelSequencePlayerSnapshot::ActiveShot");
static_assert(offsetof(FLevelSequencePlayerSnapshot, ShotID) == 152, "Offset mismatch for FLevelSequencePlayerSnapshot::ShotID");

// /Script/LevelSequence.UpgradedLevelSequenceBindingReferences
// Kind: ScriptStruct; super: MovieSceneBindingReferences
struct FUpgradedLevelSequenceBindingReferences
{
public:
    TArray<void*> SortedReferences; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FUpgradedLevelSequenceBindingReferences, SortedReferences) == 0, "Offset mismatch for FUpgradedLevelSequenceBindingReferences::SortedReferences");

// /Script/LevelSequence.AnimSequenceLevelSequenceLink
// Kind: Class; super: AssetUserData
class UAnimSequenceLevelSequenceLink
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t SkelTrackGuid[0x10]; // 0x0028 (Size: 0x10, Type: StructProperty)
    std::uint8_t PathToLevelSequence[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UAnimSequenceLevelSequenceLink, SkelTrackGuid) == 40, "Offset mismatch for UAnimSequenceLevelSequenceLink::SkelTrackGuid");
static_assert(offsetof(UAnimSequenceLevelSequenceLink, PathToLevelSequence) == 56, "Offset mismatch for UAnimSequenceLevelSequenceLink::PathToLevelSequence");

// /Script/LevelSequence.DefaultLevelSequenceInstanceData
// Kind: Class; super: Object
class UDefaultLevelSequenceInstanceData
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    void* TransformOriginActor; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0038
    std::uint8_t TransformOrigin[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UDefaultLevelSequenceInstanceData, TransformOriginActor) == 48, "Offset mismatch for UDefaultLevelSequenceInstanceData::TransformOriginActor");
static_assert(offsetof(UDefaultLevelSequenceInstanceData, TransformOrigin) == 64, "Offset mismatch for UDefaultLevelSequenceInstanceData::TransformOrigin");

// /Script/LevelSequence.LegacyLevelSequenceDirectorBlueprint
// Kind: Class; super: Blueprint
class ULegacyLevelSequenceDirectorBlueprint
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    void* ParentClass; // 0x0058 (Size: 0x8, Type: ClassProperty)
    std::uint8_t BlueprintType; // 0x0060 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bHasBeenRegenerated; // 0x0061 (Size: 0x1, Type: BoolProperty)
    // 0x0061 BoolProperty bIsRegeneratingOnLoad (shared storage)
    // 0x0061 BoolProperty bRecompileOnLoad (shared storage)
    std::uint8_t Pad_0001[0x2]; // 0x0062
    std::int32_t BlueprintSystemVersion; // 0x0064 (Size: 0x4, Type: IntProperty)
    void* SimpleConstructionScript; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ComponentTemplates; // 0x0070 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Timelines; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ComponentClassOverrides; // 0x0090 (Size: 0x10, Type: ArrayProperty)
    void* InheritableComponentHandler; // 0x00A0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(ULegacyLevelSequenceDirectorBlueprint, ParentClass) == 88, "Offset mismatch for ULegacyLevelSequenceDirectorBlueprint::ParentClass");
static_assert(offsetof(ULegacyLevelSequenceDirectorBlueprint, BlueprintType) == 96, "Offset mismatch for ULegacyLevelSequenceDirectorBlueprint::BlueprintType");
static_assert(offsetof(ULegacyLevelSequenceDirectorBlueprint, bHasBeenRegenerated) == 97, "Offset mismatch for ULegacyLevelSequenceDirectorBlueprint::bHasBeenRegenerated");
static_assert(offsetof(ULegacyLevelSequenceDirectorBlueprint, BlueprintSystemVersion) == 100, "Offset mismatch for ULegacyLevelSequenceDirectorBlueprint::BlueprintSystemVersion");
static_assert(offsetof(ULegacyLevelSequenceDirectorBlueprint, SimpleConstructionScript) == 104, "Offset mismatch for ULegacyLevelSequenceDirectorBlueprint::SimpleConstructionScript");
static_assert(offsetof(ULegacyLevelSequenceDirectorBlueprint, ComponentTemplates) == 112, "Offset mismatch for ULegacyLevelSequenceDirectorBlueprint::ComponentTemplates");
static_assert(offsetof(ULegacyLevelSequenceDirectorBlueprint, Timelines) == 128, "Offset mismatch for ULegacyLevelSequenceDirectorBlueprint::Timelines");
static_assert(offsetof(ULegacyLevelSequenceDirectorBlueprint, ComponentClassOverrides) == 144, "Offset mismatch for ULegacyLevelSequenceDirectorBlueprint::ComponentClassOverrides");
static_assert(offsetof(ULegacyLevelSequenceDirectorBlueprint, InheritableComponentHandler) == 160, "Offset mismatch for ULegacyLevelSequenceDirectorBlueprint::InheritableComponentHandler");

// /Script/LevelSequence.LevelSequence
// Kind: Class; super: MovieSceneSequence
class ULevelSequence
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    void* MovieScene; // 0x0070 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t BindingReferences[0x10]; // 0x0078 (Size: 0x10, Type: StructProperty)
    void* DirectorClass; // 0x0088 (Size: 0x8, Type: ClassProperty)
    TArray<void*> AssetUserData; // 0x0090 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(ULevelSequence, MovieScene) == 112, "Offset mismatch for ULevelSequence::MovieScene");
static_assert(offsetof(ULevelSequence, BindingReferences) == 120, "Offset mismatch for ULevelSequence::BindingReferences");
static_assert(offsetof(ULevelSequence, DirectorClass) == 136, "Offset mismatch for ULevelSequence::DirectorClass");
static_assert(offsetof(ULevelSequence, AssetUserData) == 144, "Offset mismatch for ULevelSequence::AssetUserData");

// /Script/LevelSequence.LevelSequenceActor
// Kind: Class; super: Actor
class ULevelSequenceActor
{
public:
    std::uint8_t Pad_0000[0x288]; // 0x0000
    std::uint8_t PlaybackSettings[0x28]; // 0x0288 (Size: 0x28, Type: StructProperty)
    void* SequencePlayer; // 0x02B0 (Size: 0x8, Type: ObjectProperty)
    void* LevelSequenceAsset; // 0x02B8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t CameraSettings[0x8]; // 0x02C0 (Size: 0x8, Type: StructProperty)
    void* BurnInOptions; // 0x02C8 (Size: 0x8, Type: ObjectProperty)
    void* BindingOverrides; // 0x02D0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bAutoPlay; // 0x02D8 (Size: 0x1, Type: BoolProperty)
    // 0x02D8 BoolProperty bOverrideInstanceData (shared storage)
    // 0x02D8 BoolProperty bReplicatePlayback (shared storage)
    std::uint8_t Pad_0001[0x7]; // 0x02D9
    void* DefaultInstanceData; // 0x02E0 (Size: 0x8, Type: ObjectProperty)
    void* BurnInInstance; // 0x02E8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bShowBurnin; // 0x02F0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x02F1
    std::uint8_t WorldPartitionResolveData[0x1]; // 0x02F4 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(ULevelSequenceActor, PlaybackSettings) == 648, "Offset mismatch for ULevelSequenceActor::PlaybackSettings");
static_assert(offsetof(ULevelSequenceActor, SequencePlayer) == 688, "Offset mismatch for ULevelSequenceActor::SequencePlayer");
static_assert(offsetof(ULevelSequenceActor, LevelSequenceAsset) == 696, "Offset mismatch for ULevelSequenceActor::LevelSequenceAsset");
static_assert(offsetof(ULevelSequenceActor, CameraSettings) == 704, "Offset mismatch for ULevelSequenceActor::CameraSettings");
static_assert(offsetof(ULevelSequenceActor, BurnInOptions) == 712, "Offset mismatch for ULevelSequenceActor::BurnInOptions");
static_assert(offsetof(ULevelSequenceActor, BindingOverrides) == 720, "Offset mismatch for ULevelSequenceActor::BindingOverrides");
static_assert(offsetof(ULevelSequenceActor, bAutoPlay) == 728, "Offset mismatch for ULevelSequenceActor::bAutoPlay");
static_assert(offsetof(ULevelSequenceActor, DefaultInstanceData) == 736, "Offset mismatch for ULevelSequenceActor::DefaultInstanceData");
static_assert(offsetof(ULevelSequenceActor, BurnInInstance) == 744, "Offset mismatch for ULevelSequenceActor::BurnInInstance");
static_assert(offsetof(ULevelSequenceActor, bShowBurnin) == 752, "Offset mismatch for ULevelSequenceActor::bShowBurnin");
static_assert(offsetof(ULevelSequenceActor, WorldPartitionResolveData) == 756, "Offset mismatch for ULevelSequenceActor::WorldPartitionResolveData");

// /Script/LevelSequence.LevelSequenceAnimSequenceLink
// Kind: Class; super: AssetUserData
class ULevelSequenceAnimSequenceLink
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> AnimSequenceLinks; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(ULevelSequenceAnimSequenceLink, AnimSequenceLinks) == 40, "Offset mismatch for ULevelSequenceAnimSequenceLink::AnimSequenceLinks");

// /Script/LevelSequence.LevelSequenceBurnIn
// Kind: Class; super: UserWidget
class ULevelSequenceBurnIn
{
public:
    std::uint8_t Pad_0000[0x308]; // 0x0000
    std::uint8_t FrameInformation[0xA0]; // 0x0308 (Size: 0xA0, Type: StructProperty)
    void* LevelSequenceActor; // 0x03A8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(ULevelSequenceBurnIn, FrameInformation) == 776, "Offset mismatch for ULevelSequenceBurnIn::FrameInformation");
static_assert(offsetof(ULevelSequenceBurnIn, LevelSequenceActor) == 936, "Offset mismatch for ULevelSequenceBurnIn::LevelSequenceActor");

// /Script/LevelSequence.LevelSequenceBurnInInitSettings
// Kind: Class; super: Object
class ULevelSequenceBurnInInitSettings
{
public:
    std::uint8_t Opaque[1];
};


// /Script/LevelSequence.LevelSequenceBurnInOptions
// Kind: Class; super: Object
class ULevelSequenceBurnInOptions
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bUseBurnIn; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0029
    std::uint8_t BurnInClass[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    void* Settings; // 0x0048 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(ULevelSequenceBurnInOptions, bUseBurnIn) == 40, "Offset mismatch for ULevelSequenceBurnInOptions::bUseBurnIn");
static_assert(offsetof(ULevelSequenceBurnInOptions, BurnInClass) == 48, "Offset mismatch for ULevelSequenceBurnInOptions::BurnInClass");
static_assert(offsetof(ULevelSequenceBurnInOptions, Settings) == 72, "Offset mismatch for ULevelSequenceBurnInOptions::Settings");

// /Script/LevelSequence.LevelSequenceDirector
// Kind: Class; super: Object
class ULevelSequenceDirector
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::int32_t SubSequenceID; // 0x0028 (Size: 0x4, Type: IntProperty)
    TWeakObjectPtr<void> WeakLinker; // 0x002C (Size: 0x8, Type: WeakObjectProperty)
    std::uint16_t InstanceID; // 0x0034 (Size: 0x2, Type: UInt16Property)
    std::uint16_t InstanceSerial; // 0x0036 (Size: 0x2, Type: UInt16Property)
    void* player; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    std::int32_t MovieScenePlayerIndex; // 0x0040 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(ULevelSequenceDirector, SubSequenceID) == 40, "Offset mismatch for ULevelSequenceDirector::SubSequenceID");
static_assert(offsetof(ULevelSequenceDirector, WeakLinker) == 44, "Offset mismatch for ULevelSequenceDirector::WeakLinker");
static_assert(offsetof(ULevelSequenceDirector, InstanceID) == 52, "Offset mismatch for ULevelSequenceDirector::InstanceID");
static_assert(offsetof(ULevelSequenceDirector, InstanceSerial) == 54, "Offset mismatch for ULevelSequenceDirector::InstanceSerial");
static_assert(offsetof(ULevelSequenceDirector, player) == 56, "Offset mismatch for ULevelSequenceDirector::player");
static_assert(offsetof(ULevelSequenceDirector, MovieScenePlayerIndex) == 64, "Offset mismatch for ULevelSequenceDirector::MovieScenePlayerIndex");

// /Script/LevelSequence.LevelSequenceMediaController
// Kind: Class; super: Actor
class ULevelSequenceMediaController
{
public:
    std::uint8_t Pad_0000[0x278]; // 0x0000
    void* Sequence; // 0x0278 (Size: 0x8, Type: ObjectProperty)
    void* MediaComponent; // 0x0280 (Size: 0x8, Type: ObjectProperty)
    float ServerStartTimeSeconds; // 0x0288 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(ULevelSequenceMediaController, Sequence) == 632, "Offset mismatch for ULevelSequenceMediaController::Sequence");
static_assert(offsetof(ULevelSequenceMediaController, MediaComponent) == 640, "Offset mismatch for ULevelSequenceMediaController::MediaComponent");
static_assert(offsetof(ULevelSequenceMediaController, ServerStartTimeSeconds) == 648, "Offset mismatch for ULevelSequenceMediaController::ServerStartTimeSeconds");

// /Script/LevelSequence.LevelSequencePlayer
// Kind: Class; super: MovieSceneSequencePlayer
class ULevelSequencePlayer
{
public:
    std::uint8_t Pad_0000[0x360]; // 0x0000
    FMulticastInlineDelegate OnCameraCut; // 0x0360 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(ULevelSequencePlayer, OnCameraCut) == 864, "Offset mismatch for ULevelSequencePlayer::OnCameraCut");

// /Script/LevelSequence.LevelSequenceProjectSettings
// Kind: Class; super: DeveloperSettings
class ULevelSequenceProjectSettings
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t bDefaultLockEngineToDisplayRate; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0031
    FString DefaultDisplayRate; // 0x0038 (Size: 0x10, Type: StrProperty)
    FString DefaultTickResolution; // 0x0048 (Size: 0x10, Type: StrProperty)
    std::uint8_t DefaultClockSource; // 0x0058 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(ULevelSequenceProjectSettings, bDefaultLockEngineToDisplayRate) == 48, "Offset mismatch for ULevelSequenceProjectSettings::bDefaultLockEngineToDisplayRate");
static_assert(offsetof(ULevelSequenceProjectSettings, DefaultDisplayRate) == 56, "Offset mismatch for ULevelSequenceProjectSettings::DefaultDisplayRate");
static_assert(offsetof(ULevelSequenceProjectSettings, DefaultTickResolution) == 72, "Offset mismatch for ULevelSequenceProjectSettings::DefaultTickResolution");
static_assert(offsetof(ULevelSequenceProjectSettings, DefaultClockSource) == 88, "Offset mismatch for ULevelSequenceProjectSettings::DefaultClockSource");

// /Script/LevelSequence.LevelSequenceShotMetaDataLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class ULevelSequenceShotMetaDataLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/LevelSequence.ReplicatedLevelSequenceActor
// Kind: Class; super: LevelSequenceActor
class UReplicatedLevelSequenceActor
{
public:
    std::uint8_t Pad_0000[0x288]; // 0x0000
    std::uint8_t PlaybackSettings[0x28]; // 0x0288 (Size: 0x28, Type: StructProperty)
    void* SequencePlayer; // 0x02B0 (Size: 0x8, Type: ObjectProperty)
    void* LevelSequenceAsset; // 0x02B8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t CameraSettings[0x8]; // 0x02C0 (Size: 0x8, Type: StructProperty)
    void* BurnInOptions; // 0x02C8 (Size: 0x8, Type: ObjectProperty)
    void* BindingOverrides; // 0x02D0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bAutoPlay; // 0x02D8 (Size: 0x1, Type: BoolProperty)
    // 0x02D8 BoolProperty bOverrideInstanceData (shared storage)
    // 0x02D8 BoolProperty bReplicatePlayback (shared storage)
    std::uint8_t Pad_0001[0x7]; // 0x02D9
    void* DefaultInstanceData; // 0x02E0 (Size: 0x8, Type: ObjectProperty)
    void* BurnInInstance; // 0x02E8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bShowBurnin; // 0x02F0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x02F1
    std::uint8_t WorldPartitionResolveData[0x1]; // 0x02F4 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UReplicatedLevelSequenceActor, PlaybackSettings) == 648, "Offset mismatch for UReplicatedLevelSequenceActor::PlaybackSettings");
static_assert(offsetof(UReplicatedLevelSequenceActor, SequencePlayer) == 688, "Offset mismatch for UReplicatedLevelSequenceActor::SequencePlayer");
static_assert(offsetof(UReplicatedLevelSequenceActor, LevelSequenceAsset) == 696, "Offset mismatch for UReplicatedLevelSequenceActor::LevelSequenceAsset");
static_assert(offsetof(UReplicatedLevelSequenceActor, CameraSettings) == 704, "Offset mismatch for UReplicatedLevelSequenceActor::CameraSettings");
static_assert(offsetof(UReplicatedLevelSequenceActor, BurnInOptions) == 712, "Offset mismatch for UReplicatedLevelSequenceActor::BurnInOptions");
static_assert(offsetof(UReplicatedLevelSequenceActor, BindingOverrides) == 720, "Offset mismatch for UReplicatedLevelSequenceActor::BindingOverrides");
static_assert(offsetof(UReplicatedLevelSequenceActor, bAutoPlay) == 728, "Offset mismatch for UReplicatedLevelSequenceActor::bAutoPlay");
static_assert(offsetof(UReplicatedLevelSequenceActor, DefaultInstanceData) == 736, "Offset mismatch for UReplicatedLevelSequenceActor::DefaultInstanceData");
static_assert(offsetof(UReplicatedLevelSequenceActor, BurnInInstance) == 744, "Offset mismatch for UReplicatedLevelSequenceActor::BurnInInstance");
static_assert(offsetof(UReplicatedLevelSequenceActor, bShowBurnin) == 752, "Offset mismatch for UReplicatedLevelSequenceActor::bShowBurnin");
static_assert(offsetof(UReplicatedLevelSequenceActor, WorldPartitionResolveData) == 756, "Offset mismatch for UReplicatedLevelSequenceActor::WorldPartitionResolveData");

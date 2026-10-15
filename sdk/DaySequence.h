/**
 * decamp dumper generated SDK
 * Package: /Script/DaySequence
 */
#pragma once
#include "Basic.h"

// /Script/DaySequence.DaySequenceBindingReference
// Kind: ScriptStruct; super: none
struct FDaySequenceBindingReference
{
public:
    std::uint8_t ExternalObjectPath[0x20]; // 0x0000 (Size: 0x20, Type: SoftObjectProperty)
    FString ObjectPath; // 0x0020 (Size: 0x10, Type: StrProperty)
    std::uint8_t Specialization; // 0x0030 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FDaySequenceBindingReference, ExternalObjectPath) == 0, "Offset mismatch for FDaySequenceBindingReference::ExternalObjectPath");
static_assert(offsetof(FDaySequenceBindingReference, ObjectPath) == 32, "Offset mismatch for FDaySequenceBindingReference::ObjectPath");
static_assert(offsetof(FDaySequenceBindingReference, Specialization) == 48, "Offset mismatch for FDaySequenceBindingReference::Specialization");

// /Script/DaySequence.DaySequenceBindingReferenceArray
// Kind: ScriptStruct; super: none
struct FDaySequenceBindingReferenceArray
{
public:
    TArray<void*> References; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FDaySequenceBindingReferenceArray, References) == 0, "Offset mismatch for FDaySequenceBindingReferenceArray::References");

// /Script/DaySequence.DaySequenceBindingReferences
// Kind: ScriptStruct; super: none
struct FDaySequenceBindingReferences
{
public:
    TMap<void*, void*> BindingIdToReferences; // 0x0000 (Size: 0x10, Type: MapProperty)
    std::uint8_t AnimSequenceInstances[0x10]; // 0x0010 (Size: 0x10, Type: SetProperty)
    TMap<void*, void*> SpecializedReferenceToGuid; // 0x0020 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> GuidToSpecializedReference; // 0x0030 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FDaySequenceBindingReferences, BindingIdToReferences) == 0, "Offset mismatch for FDaySequenceBindingReferences::BindingIdToReferences");
static_assert(offsetof(FDaySequenceBindingReferences, AnimSequenceInstances) == 16, "Offset mismatch for FDaySequenceBindingReferences::AnimSequenceInstances");
static_assert(offsetof(FDaySequenceBindingReferences, SpecializedReferenceToGuid) == 32, "Offset mismatch for FDaySequenceBindingReferences::SpecializedReferenceToGuid");
static_assert(offsetof(FDaySequenceBindingReferences, GuidToSpecializedReference) == 48, "Offset mismatch for FDaySequenceBindingReferences::GuidToSpecializedReference");

// /Script/DaySequence.DaySequenceCollectionEntry
// Kind: ScriptStruct; super: none
struct FDaySequenceCollectionEntry
{
public:
    void* Sequence; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::int32_t BiasOffset; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x000C
    std::uint8_t Conditions[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t bEnableHierarchicalBlending; // 0x0020 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FDaySequenceCollectionEntry, Sequence) == 0, "Offset mismatch for FDaySequenceCollectionEntry::Sequence");
static_assert(offsetof(FDaySequenceCollectionEntry, BiasOffset) == 8, "Offset mismatch for FDaySequenceCollectionEntry::BiasOffset");
static_assert(offsetof(FDaySequenceCollectionEntry, Conditions) == 16, "Offset mismatch for FDaySequenceCollectionEntry::Conditions");
static_assert(offsetof(FDaySequenceCollectionEntry, bEnableHierarchicalBlending) == 32, "Offset mismatch for FDaySequenceCollectionEntry::bEnableHierarchicalBlending");

// /Script/DaySequence.DaySequenceConditionSet
// Kind: ScriptStruct; super: none
struct FDaySequenceConditionSet
{
public:
    TMap<void*, void*> Conditions; // 0x0000 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FDaySequenceConditionSet, Conditions) == 0, "Offset mismatch for FDaySequenceConditionSet::Conditions");

// /Script/DaySequence.DaySequencePlaybackParams
// Kind: ScriptStruct; super: none
struct FDaySequencePlaybackParams
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DaySequence.DaySequenceTime
// Kind: ScriptStruct; super: none
struct FDaySequenceTime
{
public:
    std::int32_t Hours; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t Minutes; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t Seconds; // 0x0008 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FDaySequenceTime, Hours) == 0, "Offset mismatch for FDaySequenceTime::Hours");
static_assert(offsetof(FDaySequenceTime, Minutes) == 4, "Offset mismatch for FDaySequenceTime::Minutes");
static_assert(offsetof(FDaySequenceTime, Seconds) == 8, "Offset mismatch for FDaySequenceTime::Seconds");

// /Script/DaySequence.ProceduralDaySequence
// Kind: ScriptStruct; super: none
struct FProceduralDaySequence
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Conditions[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FProceduralDaySequence, Conditions) == 8, "Offset mismatch for FProceduralDaySequence::Conditions");

// /Script/DaySequence.SineSequence
// Kind: ScriptStruct; super: ProceduralDaySequence
struct FSineSequence
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t PropertyName[0x4]; // 0x0020 (Size: 0x4, Type: NameProperty)
    std::uint8_t ComponentName[0x4]; // 0x0024 (Size: 0x4, Type: NameProperty)
    std::uint32_t KeyCount; // 0x0028 (Size: 0x4, Type: UInt32Property)
    float Amplitude; // 0x002C (Size: 0x4, Type: FloatProperty)
    float Frequency; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float PhaseShift; // 0x0034 (Size: 0x4, Type: FloatProperty)
    float VerticalShift; // 0x0038 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FSineSequence, PropertyName) == 32, "Offset mismatch for FSineSequence::PropertyName");
static_assert(offsetof(FSineSequence, ComponentName) == 36, "Offset mismatch for FSineSequence::ComponentName");
static_assert(offsetof(FSineSequence, KeyCount) == 40, "Offset mismatch for FSineSequence::KeyCount");
static_assert(offsetof(FSineSequence, Amplitude) == 44, "Offset mismatch for FSineSequence::Amplitude");
static_assert(offsetof(FSineSequence, Frequency) == 48, "Offset mismatch for FSineSequence::Frequency");
static_assert(offsetof(FSineSequence, PhaseShift) == 52, "Offset mismatch for FSineSequence::PhaseShift");
static_assert(offsetof(FSineSequence, VerticalShift) == 56, "Offset mismatch for FSineSequence::VerticalShift");

// /Script/DaySequence.SunAngleSequence
// Kind: ScriptStruct; super: ProceduralDaySequence
struct FSunAngleSequence
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    FName SunComponentName; // 0x0020 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FSunAngleSequence, SunComponentName) == 32, "Offset mismatch for FSunAngleSequence::SunComponentName");

// /Script/DaySequence.SunPositionSequence
// Kind: ScriptStruct; super: ProceduralDaySequence
struct FSunPositionSequence
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t SunComponentName[0x4]; // 0x0020 (Size: 0x4, Type: NameProperty)
    std::uint32_t KeyCount; // 0x0024 (Size: 0x4, Type: UInt32Property)
    std::uint8_t time[0x8]; // 0x0028 (Size: 0x8, Type: StructProperty)
    double Timezone; // 0x0030 (Size: 0x8, Type: DoubleProperty)
    double Latitude; // 0x0038 (Size: 0x8, Type: DoubleProperty)
    double Longitude; // 0x0040 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bIsDaylightSavings; // 0x0048 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FSunPositionSequence, SunComponentName) == 32, "Offset mismatch for FSunPositionSequence::SunComponentName");
static_assert(offsetof(FSunPositionSequence, KeyCount) == 36, "Offset mismatch for FSunPositionSequence::KeyCount");
static_assert(offsetof(FSunPositionSequence, time) == 40, "Offset mismatch for FSunPositionSequence::time");
static_assert(offsetof(FSunPositionSequence, Timezone) == 48, "Offset mismatch for FSunPositionSequence::Timezone");
static_assert(offsetof(FSunPositionSequence, Latitude) == 56, "Offset mismatch for FSunPositionSequence::Latitude");
static_assert(offsetof(FSunPositionSequence, Longitude) == 64, "Offset mismatch for FSunPositionSequence::Longitude");
static_assert(offsetof(FSunPositionSequence, bIsDaylightSavings) == 72, "Offset mismatch for FSunPositionSequence::bIsDaylightSavings");

// /Script/DaySequence.BaseDaySequenceActor
// Kind: Class; super: DaySequenceActor
class UBaseDaySequenceActor
{
public:
    std::uint8_t Pad_0000[0x3C0]; // 0x0000
    void* SunRootComponent; // 0x03C0 (Size: 0x8, Type: ObjectProperty)
    void* SunComponent; // 0x03C8 (Size: 0x8, Type: ObjectProperty)
    void* SkyAtmosphereComponent; // 0x03D0 (Size: 0x8, Type: ObjectProperty)
    void* SkyLightComponent; // 0x03D8 (Size: 0x8, Type: ObjectProperty)
    void* ExponentialHeightFogComponent; // 0x03E0 (Size: 0x8, Type: ObjectProperty)
    void* VolumetricCloudComponent; // 0x03E8 (Size: 0x8, Type: ObjectProperty)
    void* SkySphereComponent; // 0x03F0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UBaseDaySequenceActor, SunRootComponent) == 960, "Offset mismatch for UBaseDaySequenceActor::SunRootComponent");
static_assert(offsetof(UBaseDaySequenceActor, SunComponent) == 968, "Offset mismatch for UBaseDaySequenceActor::SunComponent");
static_assert(offsetof(UBaseDaySequenceActor, SkyAtmosphereComponent) == 976, "Offset mismatch for UBaseDaySequenceActor::SkyAtmosphereComponent");
static_assert(offsetof(UBaseDaySequenceActor, SkyLightComponent) == 984, "Offset mismatch for UBaseDaySequenceActor::SkyLightComponent");
static_assert(offsetof(UBaseDaySequenceActor, ExponentialHeightFogComponent) == 992, "Offset mismatch for UBaseDaySequenceActor::ExponentialHeightFogComponent");
static_assert(offsetof(UBaseDaySequenceActor, VolumetricCloudComponent) == 1000, "Offset mismatch for UBaseDaySequenceActor::VolumetricCloudComponent");
static_assert(offsetof(UBaseDaySequenceActor, SkySphereComponent) == 1008, "Offset mismatch for UBaseDaySequenceActor::SkySphereComponent");

// /Script/DaySequence.DaySequence
// Kind: Class; super: MovieSceneSequence
class UDaySequence
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    void* MovieScene; // 0x0070 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t BindingReferences[0x40]; // 0x0078 (Size: 0x40, Type: StructProperty)
    void* DirectorClass; // 0x00B8 (Size: 0x8, Type: ClassProperty)
    TArray<void*> AssetUserData; // 0x00C0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UDaySequence, MovieScene) == 112, "Offset mismatch for UDaySequence::MovieScene");
static_assert(offsetof(UDaySequence, BindingReferences) == 120, "Offset mismatch for UDaySequence::BindingReferences");
static_assert(offsetof(UDaySequence, DirectorClass) == 184, "Offset mismatch for UDaySequence::DirectorClass");
static_assert(offsetof(UDaySequence, AssetUserData) == 192, "Offset mismatch for UDaySequence::AssetUserData");

// /Script/DaySequence.DaySequenceActor
// Kind: Class; super: Info
class UDaySequenceActor
{
public:
    std::uint8_t Pad_0000[0x280]; // 0x0000
    void* DayInterpCurve; // 0x0280 (Size: 0x8, Type: ObjectProperty)
    void* DaySequenceCollection; // 0x0288 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> DaySequenceCollections; // 0x0290 (Size: 0x10, Type: ArrayProperty)
    std::int32_t Bias; // 0x02A0 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x02A4
    void* BindingOverrides; // 0x02A8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bReplicatePlayback; // 0x02B0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x02B1
    void* SequencePlayer; // 0x02B8 (Size: 0x8, Type: ObjectProperty)
    void* RootSequence; // 0x02C0 (Size: 0x8, Type: ObjectProperty)
    float SequenceUpdateInterval; // 0x02C8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bRunDayCycle; // 0x02CC (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseInterpCurve; // 0x02CD (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x2]; // 0x02CE
    std::uint8_t DayLength[0xC]; // 0x02D0 (Size: 0xC, Type: StructProperty)
    std::uint8_t TimePerCycle[0xC]; // 0x02DC (Size: 0xC, Type: StructProperty)
    std::uint8_t InitialTimeOfDay[0x20]; // 0x02E8 (Size: 0x20, Type: StructProperty)
    void* CameraModifierManager; // 0x0308 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0004[0xA0]; // 0x0310
    TMap<void*, void*> TrackConditionMap; // 0x03B0 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UDaySequenceActor, DayInterpCurve) == 640, "Offset mismatch for UDaySequenceActor::DayInterpCurve");
static_assert(offsetof(UDaySequenceActor, DaySequenceCollection) == 648, "Offset mismatch for UDaySequenceActor::DaySequenceCollection");
static_assert(offsetof(UDaySequenceActor, DaySequenceCollections) == 656, "Offset mismatch for UDaySequenceActor::DaySequenceCollections");
static_assert(offsetof(UDaySequenceActor, Bias) == 672, "Offset mismatch for UDaySequenceActor::Bias");
static_assert(offsetof(UDaySequenceActor, BindingOverrides) == 680, "Offset mismatch for UDaySequenceActor::BindingOverrides");
static_assert(offsetof(UDaySequenceActor, bReplicatePlayback) == 688, "Offset mismatch for UDaySequenceActor::bReplicatePlayback");
static_assert(offsetof(UDaySequenceActor, SequencePlayer) == 696, "Offset mismatch for UDaySequenceActor::SequencePlayer");
static_assert(offsetof(UDaySequenceActor, RootSequence) == 704, "Offset mismatch for UDaySequenceActor::RootSequence");
static_assert(offsetof(UDaySequenceActor, SequenceUpdateInterval) == 712, "Offset mismatch for UDaySequenceActor::SequenceUpdateInterval");
static_assert(offsetof(UDaySequenceActor, bRunDayCycle) == 716, "Offset mismatch for UDaySequenceActor::bRunDayCycle");
static_assert(offsetof(UDaySequenceActor, bUseInterpCurve) == 717, "Offset mismatch for UDaySequenceActor::bUseInterpCurve");
static_assert(offsetof(UDaySequenceActor, DayLength) == 720, "Offset mismatch for UDaySequenceActor::DayLength");
static_assert(offsetof(UDaySequenceActor, TimePerCycle) == 732, "Offset mismatch for UDaySequenceActor::TimePerCycle");
static_assert(offsetof(UDaySequenceActor, InitialTimeOfDay) == 744, "Offset mismatch for UDaySequenceActor::InitialTimeOfDay");
static_assert(offsetof(UDaySequenceActor, CameraModifierManager) == 776, "Offset mismatch for UDaySequenceActor::CameraModifierManager");
static_assert(offsetof(UDaySequenceActor, TrackConditionMap) == 944, "Offset mismatch for UDaySequenceActor::TrackConditionMap");

// /Script/DaySequence.DaySequenceCameraModifier
// Kind: Class; super: CameraModifier
class UDaySequenceCameraModifier
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    std::uint8_t Settings[0x1]; // 0x0050 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UDaySequenceCameraModifier, Settings) == 80, "Offset mismatch for UDaySequenceCameraModifier::Settings");

// /Script/DaySequence.DaySequenceCameraModifierManager
// Kind: Class; super: Object
class UDaySequenceCameraModifierManager
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DaySequence.DaySequenceCheatManagerExtension
// Kind: Class; super: CheatManagerExtension
class UDaySequenceCheatManagerExtension
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DaySequence.DaySequenceCollectionAsset
// Kind: Class; super: DataAsset
class UDaySequenceCollectionAsset
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> DaySequences; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ProceduralDaySequences; // 0x0038 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UDaySequenceCollectionAsset, DaySequences) == 40, "Offset mismatch for UDaySequenceCollectionAsset::DaySequences");
static_assert(offsetof(UDaySequenceCollectionAsset, ProceduralDaySequences) == 56, "Offset mismatch for UDaySequenceCollectionAsset::ProceduralDaySequences");

// /Script/DaySequence.DaySequenceConditionTag
// Kind: Class; super: Object
class UDaySequenceConditionTag
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FString ConditionName; // 0x0028 (Size: 0x10, Type: StrProperty)
    std::uint8_t InitializationPhase; // 0x0038 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UDaySequenceConditionTag, ConditionName) == 40, "Offset mismatch for UDaySequenceConditionTag::ConditionName");
static_assert(offsetof(UDaySequenceConditionTag, InitializationPhase) == 56, "Offset mismatch for UDaySequenceConditionTag::InitializationPhase");

// /Script/DaySequence.DaySequenceDirector
// Kind: Class; super: Object
class UDaySequenceDirector
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* player; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    std::int32_t SubSequenceID; // 0x0030 (Size: 0x4, Type: IntProperty)
    std::int32_t MovieScenePlayerIndex; // 0x0034 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UDaySequenceDirector, player) == 40, "Offset mismatch for UDaySequenceDirector::player");
static_assert(offsetof(UDaySequenceDirector, SubSequenceID) == 48, "Offset mismatch for UDaySequenceDirector::SubSequenceID");
static_assert(offsetof(UDaySequenceDirector, MovieScenePlayerIndex) == 52, "Offset mismatch for UDaySequenceDirector::MovieScenePlayerIndex");

// /Script/DaySequence.DaySequenceModifierComponent
// Kind: Class; super: SceneComponent
class UDaySequenceModifierComponent
{
public:
    std::uint8_t Pad_0000[0x240]; // 0x0000
    void* TargetActor; // 0x0240 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0248
    TArray<void*> VolumeShapeComponents; // 0x0258 (Size: 0x10, Type: ArrayProperty)
    TWeakObjectPtr<void> WeakBlendTarget; // 0x0268 (Size: 0x8, Type: WeakObjectProperty)
    void* UserDaySequence; // 0x0270 (Size: 0x8, Type: ObjectProperty)
    void* TransientSequence; // 0x0278 (Size: 0x8, Type: ObjectProperty)
    void* DaySequenceCollection; // 0x0280 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> DaySequenceCollections; // 0x0288 (Size: 0x10, Type: ArrayProperty)
    void* EasingFunction; // 0x0298 (Size: 0x8, Type: ObjectProperty)
    std::int32_t Bias; // 0x02A0 (Size: 0x4, Type: IntProperty)
    float DayNightCycleTime; // 0x02A4 (Size: 0x4, Type: FloatProperty)
    float BlendAmount; // 0x02A8 (Size: 0x4, Type: FloatProperty)
    float BlendTime; // 0x02AC (Size: 0x4, Type: FloatProperty)
    float UserBlendWeight; // 0x02B0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t DayNightCycle; // 0x02B4 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Mode; // 0x02B5 (Size: 0x1, Type: EnumProperty)
    std::uint8_t BlendPolicy; // 0x02B6 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x1]; // 0x02B7
    FMulticastInlineDelegate OnPostReinitializeSubSequences; // 0x02B8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPostEnableModifier; // 0x02C8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t bForceSmoothBlending; // 0x02D8 (Size: 0x1, Type: BoolProperty)
    // 0x02D8 BoolProperty bIgnoreBias (shared storage)
    // 0x02D8 BoolProperty bIsComponentEnabled (shared storage)
    // 0x02D8 BoolProperty bIsEnabled (shared storage)
    // 0x02D8 BoolProperty bPreview (shared storage)
    // 0x02D8 BoolProperty bSmoothBlending (shared storage)
    // 0x02D8 BoolProperty bUseCollection (shared storage)
};

static_assert(offsetof(UDaySequenceModifierComponent, TargetActor) == 576, "Offset mismatch for UDaySequenceModifierComponent::TargetActor");
static_assert(offsetof(UDaySequenceModifierComponent, VolumeShapeComponents) == 600, "Offset mismatch for UDaySequenceModifierComponent::VolumeShapeComponents");
static_assert(offsetof(UDaySequenceModifierComponent, WeakBlendTarget) == 616, "Offset mismatch for UDaySequenceModifierComponent::WeakBlendTarget");
static_assert(offsetof(UDaySequenceModifierComponent, UserDaySequence) == 624, "Offset mismatch for UDaySequenceModifierComponent::UserDaySequence");
static_assert(offsetof(UDaySequenceModifierComponent, TransientSequence) == 632, "Offset mismatch for UDaySequenceModifierComponent::TransientSequence");
static_assert(offsetof(UDaySequenceModifierComponent, DaySequenceCollection) == 640, "Offset mismatch for UDaySequenceModifierComponent::DaySequenceCollection");
static_assert(offsetof(UDaySequenceModifierComponent, DaySequenceCollections) == 648, "Offset mismatch for UDaySequenceModifierComponent::DaySequenceCollections");
static_assert(offsetof(UDaySequenceModifierComponent, EasingFunction) == 664, "Offset mismatch for UDaySequenceModifierComponent::EasingFunction");
static_assert(offsetof(UDaySequenceModifierComponent, Bias) == 672, "Offset mismatch for UDaySequenceModifierComponent::Bias");
static_assert(offsetof(UDaySequenceModifierComponent, DayNightCycleTime) == 676, "Offset mismatch for UDaySequenceModifierComponent::DayNightCycleTime");
static_assert(offsetof(UDaySequenceModifierComponent, BlendAmount) == 680, "Offset mismatch for UDaySequenceModifierComponent::BlendAmount");
static_assert(offsetof(UDaySequenceModifierComponent, BlendTime) == 684, "Offset mismatch for UDaySequenceModifierComponent::BlendTime");
static_assert(offsetof(UDaySequenceModifierComponent, UserBlendWeight) == 688, "Offset mismatch for UDaySequenceModifierComponent::UserBlendWeight");
static_assert(offsetof(UDaySequenceModifierComponent, DayNightCycle) == 692, "Offset mismatch for UDaySequenceModifierComponent::DayNightCycle");
static_assert(offsetof(UDaySequenceModifierComponent, Mode) == 693, "Offset mismatch for UDaySequenceModifierComponent::Mode");
static_assert(offsetof(UDaySequenceModifierComponent, BlendPolicy) == 694, "Offset mismatch for UDaySequenceModifierComponent::BlendPolicy");
static_assert(offsetof(UDaySequenceModifierComponent, OnPostReinitializeSubSequences) == 696, "Offset mismatch for UDaySequenceModifierComponent::OnPostReinitializeSubSequences");
static_assert(offsetof(UDaySequenceModifierComponent, OnPostEnableModifier) == 712, "Offset mismatch for UDaySequenceModifierComponent::OnPostEnableModifier");
static_assert(offsetof(UDaySequenceModifierComponent, bForceSmoothBlending) == 728, "Offset mismatch for UDaySequenceModifierComponent::bForceSmoothBlending");

// /Script/DaySequence.DaySequenceModifierEasingFunction
// Kind: Class; super: Object
class UDaySequenceModifierEasingFunction
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DaySequence.DaySequenceModifierVolume
// Kind: Class; super: Actor
class UDaySequenceModifierVolume
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    void* DaySequenceModifier; // 0x0270 (Size: 0x8, Type: ObjectProperty)
    void* DefaultBox; // 0x0278 (Size: 0x8, Type: ObjectProperty)
    void* DaySequenceActor; // 0x0280 (Size: 0x8, Type: ObjectProperty)
    void* CachedPlayerController; // 0x0288 (Size: 0x8, Type: ObjectProperty)
    void* CachedPlayer; // 0x0290 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0298
    std::uint8_t bEnableSplitscreenSupport; // 0x02A0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x02A1
    TMap<void*, void*> AdditionalPlayers; // 0x02A8 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UDaySequenceModifierVolume, DaySequenceModifier) == 624, "Offset mismatch for UDaySequenceModifierVolume::DaySequenceModifier");
static_assert(offsetof(UDaySequenceModifierVolume, DefaultBox) == 632, "Offset mismatch for UDaySequenceModifierVolume::DefaultBox");
static_assert(offsetof(UDaySequenceModifierVolume, DaySequenceActor) == 640, "Offset mismatch for UDaySequenceModifierVolume::DaySequenceActor");
static_assert(offsetof(UDaySequenceModifierVolume, CachedPlayerController) == 648, "Offset mismatch for UDaySequenceModifierVolume::CachedPlayerController");
static_assert(offsetof(UDaySequenceModifierVolume, CachedPlayer) == 656, "Offset mismatch for UDaySequenceModifierVolume::CachedPlayer");
static_assert(offsetof(UDaySequenceModifierVolume, bEnableSplitscreenSupport) == 672, "Offset mismatch for UDaySequenceModifierVolume::bEnableSplitscreenSupport");
static_assert(offsetof(UDaySequenceModifierVolume, AdditionalPlayers) == 680, "Offset mismatch for UDaySequenceModifierVolume::AdditionalPlayers");

// /Script/DaySequence.DaySequencePlayer
// Kind: Class; super: Object
class UDaySequencePlayer
{
public:
    std::uint8_t Pad_0000[0xD8]; // 0x0000
    TScriptInterface<void> Observer; // 0x00D8 (Size: 0x10, Type: InterfaceProperty)
    FMulticastInlineDelegate OnPlay; // 0x00E8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPlayReverse; // 0x00F8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnStop; // 0x0108 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPause; // 0x0118 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnFinished; // 0x0128 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0138
    std::uint8_t Status; // 0x0148 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0149
    void* Sequence; // 0x0150 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t StartTime[0x4]; // 0x0158 (Size: 0x4, Type: StructProperty)
    std::int32_t DurationFrames; // 0x015C (Size: 0x4, Type: IntProperty)
    float DurationSubFrames; // 0x0160 (Size: 0x4, Type: FloatProperty)
    std::int32_t CurrentNumLoops; // 0x0164 (Size: 0x4, Type: IntProperty)
    std::int32_t SerialNumber; // 0x0168 (Size: 0x4, Type: IntProperty)
    std::uint8_t PlaybackSettings[0x2C]; // 0x016C (Size: 0x2C, Type: StructProperty)
    std::uint8_t RootTemplateInstance[0xA4]; // 0x0198 (Size: 0xA4, Type: StructProperty)
    std::uint8_t NetSyncProps[0x14]; // 0x023C (Size: 0x14, Type: StructProperty)
    TScriptInterface<void> PlaybackClient; // 0x0250 (Size: 0x10, Type: InterfaceProperty)
    std::uint8_t Pad_0003[0xA0]; // 0x0260
    void* Linker; // 0x0300 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDaySequencePlayer, Observer) == 216, "Offset mismatch for UDaySequencePlayer::Observer");
static_assert(offsetof(UDaySequencePlayer, OnPlay) == 232, "Offset mismatch for UDaySequencePlayer::OnPlay");
static_assert(offsetof(UDaySequencePlayer, OnPlayReverse) == 248, "Offset mismatch for UDaySequencePlayer::OnPlayReverse");
static_assert(offsetof(UDaySequencePlayer, OnStop) == 264, "Offset mismatch for UDaySequencePlayer::OnStop");
static_assert(offsetof(UDaySequencePlayer, OnPause) == 280, "Offset mismatch for UDaySequencePlayer::OnPause");
static_assert(offsetof(UDaySequencePlayer, OnFinished) == 296, "Offset mismatch for UDaySequencePlayer::OnFinished");
static_assert(offsetof(UDaySequencePlayer, Status) == 328, "Offset mismatch for UDaySequencePlayer::Status");
static_assert(offsetof(UDaySequencePlayer, Sequence) == 336, "Offset mismatch for UDaySequencePlayer::Sequence");
static_assert(offsetof(UDaySequencePlayer, StartTime) == 344, "Offset mismatch for UDaySequencePlayer::StartTime");
static_assert(offsetof(UDaySequencePlayer, DurationFrames) == 348, "Offset mismatch for UDaySequencePlayer::DurationFrames");
static_assert(offsetof(UDaySequencePlayer, DurationSubFrames) == 352, "Offset mismatch for UDaySequencePlayer::DurationSubFrames");
static_assert(offsetof(UDaySequencePlayer, CurrentNumLoops) == 356, "Offset mismatch for UDaySequencePlayer::CurrentNumLoops");
static_assert(offsetof(UDaySequencePlayer, SerialNumber) == 360, "Offset mismatch for UDaySequencePlayer::SerialNumber");
static_assert(offsetof(UDaySequencePlayer, PlaybackSettings) == 364, "Offset mismatch for UDaySequencePlayer::PlaybackSettings");
static_assert(offsetof(UDaySequencePlayer, RootTemplateInstance) == 408, "Offset mismatch for UDaySequencePlayer::RootTemplateInstance");
static_assert(offsetof(UDaySequencePlayer, NetSyncProps) == 572, "Offset mismatch for UDaySequencePlayer::NetSyncProps");
static_assert(offsetof(UDaySequencePlayer, PlaybackClient) == 592, "Offset mismatch for UDaySequencePlayer::PlaybackClient");
static_assert(offsetof(UDaySequencePlayer, Linker) == 768, "Offset mismatch for UDaySequencePlayer::Linker");

// /Script/DaySequence.DaySequenceProjectSettings
// Kind: Class; super: DeveloperSettings
class UDaySequenceProjectSettings
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t bDefaultLockEngineToDisplayRate; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0031
    FString DefaultDisplayRate; // 0x0038 (Size: 0x10, Type: StrProperty)
    FString DefaultTickResolution; // 0x0048 (Size: 0x10, Type: StrProperty)
    std::uint8_t DefaultClockSource; // 0x0058 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UDaySequenceProjectSettings, bDefaultLockEngineToDisplayRate) == 48, "Offset mismatch for UDaySequenceProjectSettings::bDefaultLockEngineToDisplayRate");
static_assert(offsetof(UDaySequenceProjectSettings, DefaultDisplayRate) == 56, "Offset mismatch for UDaySequenceProjectSettings::DefaultDisplayRate");
static_assert(offsetof(UDaySequenceProjectSettings, DefaultTickResolution) == 72, "Offset mismatch for UDaySequenceProjectSettings::DefaultTickResolution");
static_assert(offsetof(UDaySequenceProjectSettings, DefaultClockSource) == 88, "Offset mismatch for UDaySequenceProjectSettings::DefaultClockSource");

// /Script/DaySequence.DaySequenceStaticTimeContributor
// Kind: Class; super: Object
class UDaySequenceStaticTimeContributor
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    float BlendWeight; // 0x0028 (Size: 0x4, Type: FloatProperty)
    float StaticTime; // 0x002C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bWantsStaticTime; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0031
    void* TargetActor; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDaySequenceStaticTimeContributor, BlendWeight) == 40, "Offset mismatch for UDaySequenceStaticTimeContributor::BlendWeight");
static_assert(offsetof(UDaySequenceStaticTimeContributor, StaticTime) == 44, "Offset mismatch for UDaySequenceStaticTimeContributor::StaticTime");
static_assert(offsetof(UDaySequenceStaticTimeContributor, bWantsStaticTime) == 48, "Offset mismatch for UDaySequenceStaticTimeContributor::bWantsStaticTime");
static_assert(offsetof(UDaySequenceStaticTimeContributor, TargetActor) == 56, "Offset mismatch for UDaySequenceStaticTimeContributor::TargetActor");

// /Script/DaySequence.DaySequenceSubsystem
// Kind: Class; super: WorldSubsystem
class UDaySequenceSubsystem
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    FMulticastInlineDelegate OnDaySequenceActorSet; // 0x0038 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UDaySequenceSubsystem, OnDaySequenceActorSet) == 56, "Offset mismatch for UDaySequenceSubsystem::OnDaySequenceActorSet");

// /Script/DaySequence.DaySequenceTrack
// Kind: Class; super: MovieSceneSubTrack
class UDaySequenceTrack
{
public:
    std::uint8_t Pad_0000[0xF8]; // 0x0000
    TArray<void*> Sections; // 0x00F8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UDaySequenceTrack, Sections) == 248, "Offset mismatch for UDaySequenceTrack::Sections");

// /Script/DaySequence.ProceduralDaySequenceBuilder
// Kind: Class; super: Object
class UProceduralDaySequenceBuilder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DaySequence.SunMoonDaySequenceActor
// Kind: Class; super: BaseDaySequenceActor
class USunMoonDaySequenceActor
{
public:
    std::uint8_t Pad_0000[0x3F8]; // 0x0000
    void* MoonComponent; // 0x03F8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USunMoonDaySequenceActor, MoonComponent) == 1016, "Offset mismatch for USunMoonDaySequenceActor::MoonComponent");

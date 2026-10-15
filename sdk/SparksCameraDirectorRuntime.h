/**
 * decamp dumper generated SDK
 * Package: /Script/SparksCameraDirectorRuntime
 */
#pragma once
#include "Basic.h"

// /Script/SparksCameraDirectorRuntime.SparksCameraDirectorEntryRuntimeData
// Kind: ScriptStruct; super: none
struct FSparksCameraDirectorEntryRuntimeData
{
public:
    std::uint8_t Entry[0xA8]; // 0x0000 (Size: 0xA8, Type: StructProperty)
    std::uint8_t GeneratorName[0x4]; // 0x00A8 (Size: 0x4, Type: NameProperty)
    std::uint8_t SectionName[0x4]; // 0x00AC (Size: 0x4, Type: NameProperty)
    void* Config; // 0x00B0 (Size: 0x8, Type: ObjectProperty)
    float NowAtStart; // 0x00B8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Source; // 0x00BC (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x00BD
    float MSOffset; // 0x00C0 (Size: 0x4, Type: FloatProperty)
    float LengthSeconds; // 0x00C4 (Size: 0x4, Type: FloatProperty)
    float PlayTime; // 0x00C8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsDynamic; // 0x00CC (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPreferLocalPlayer; // 0x00CD (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x00CE
    void* ForceTarget; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
    void* TargetActor; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
    void* TargetLookAtActor; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    void* TargetAttachMesh; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
    void* TargetLookAtMesh; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Result; // 0x00F8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x7]; // 0x00F9
    TArray<void*> LogSteps; // 0x0100 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSparksCameraDirectorEntryRuntimeData, Entry) == 0, "Offset mismatch for FSparksCameraDirectorEntryRuntimeData::Entry");
static_assert(offsetof(FSparksCameraDirectorEntryRuntimeData, GeneratorName) == 168, "Offset mismatch for FSparksCameraDirectorEntryRuntimeData::GeneratorName");
static_assert(offsetof(FSparksCameraDirectorEntryRuntimeData, SectionName) == 172, "Offset mismatch for FSparksCameraDirectorEntryRuntimeData::SectionName");
static_assert(offsetof(FSparksCameraDirectorEntryRuntimeData, Config) == 176, "Offset mismatch for FSparksCameraDirectorEntryRuntimeData::Config");
static_assert(offsetof(FSparksCameraDirectorEntryRuntimeData, NowAtStart) == 184, "Offset mismatch for FSparksCameraDirectorEntryRuntimeData::NowAtStart");
static_assert(offsetof(FSparksCameraDirectorEntryRuntimeData, Source) == 188, "Offset mismatch for FSparksCameraDirectorEntryRuntimeData::Source");
static_assert(offsetof(FSparksCameraDirectorEntryRuntimeData, MSOffset) == 192, "Offset mismatch for FSparksCameraDirectorEntryRuntimeData::MSOffset");
static_assert(offsetof(FSparksCameraDirectorEntryRuntimeData, LengthSeconds) == 196, "Offset mismatch for FSparksCameraDirectorEntryRuntimeData::LengthSeconds");
static_assert(offsetof(FSparksCameraDirectorEntryRuntimeData, PlayTime) == 200, "Offset mismatch for FSparksCameraDirectorEntryRuntimeData::PlayTime");
static_assert(offsetof(FSparksCameraDirectorEntryRuntimeData, bIsDynamic) == 204, "Offset mismatch for FSparksCameraDirectorEntryRuntimeData::bIsDynamic");
static_assert(offsetof(FSparksCameraDirectorEntryRuntimeData, bPreferLocalPlayer) == 205, "Offset mismatch for FSparksCameraDirectorEntryRuntimeData::bPreferLocalPlayer");
static_assert(offsetof(FSparksCameraDirectorEntryRuntimeData, ForceTarget) == 208, "Offset mismatch for FSparksCameraDirectorEntryRuntimeData::ForceTarget");
static_assert(offsetof(FSparksCameraDirectorEntryRuntimeData, TargetActor) == 216, "Offset mismatch for FSparksCameraDirectorEntryRuntimeData::TargetActor");
static_assert(offsetof(FSparksCameraDirectorEntryRuntimeData, TargetLookAtActor) == 224, "Offset mismatch for FSparksCameraDirectorEntryRuntimeData::TargetLookAtActor");
static_assert(offsetof(FSparksCameraDirectorEntryRuntimeData, TargetAttachMesh) == 232, "Offset mismatch for FSparksCameraDirectorEntryRuntimeData::TargetAttachMesh");
static_assert(offsetof(FSparksCameraDirectorEntryRuntimeData, TargetLookAtMesh) == 240, "Offset mismatch for FSparksCameraDirectorEntryRuntimeData::TargetLookAtMesh");
static_assert(offsetof(FSparksCameraDirectorEntryRuntimeData, Result) == 248, "Offset mismatch for FSparksCameraDirectorEntryRuntimeData::Result");
static_assert(offsetof(FSparksCameraDirectorEntryRuntimeData, LogSteps) == 256, "Offset mismatch for FSparksCameraDirectorEntryRuntimeData::LogSteps");

// /Script/SparksCameraDirectorRuntime.SparksCameraDirectorSequence
// Kind: ScriptStruct; super: none
struct FSparksCameraDirectorSequence
{
public:
    FString SectionName; // 0x0000 (Size: 0x10, Type: StrProperty)
    float StartTimeMS; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float LengthMS; // 0x0014 (Size: 0x4, Type: FloatProperty)
    TArray<void*> Entries; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSparksCameraDirectorSequence, SectionName) == 0, "Offset mismatch for FSparksCameraDirectorSequence::SectionName");
static_assert(offsetof(FSparksCameraDirectorSequence, StartTimeMS) == 16, "Offset mismatch for FSparksCameraDirectorSequence::StartTimeMS");
static_assert(offsetof(FSparksCameraDirectorSequence, LengthMS) == 20, "Offset mismatch for FSparksCameraDirectorSequence::LengthMS");
static_assert(offsetof(FSparksCameraDirectorSequence, Entries) == 24, "Offset mismatch for FSparksCameraDirectorSequence::Entries");

// /Script/SparksCameraDirectorRuntime.SparksCameraDirectorSequenceEntry
// Kind: ScriptStruct; super: none
struct FSparksCameraDirectorSequenceEntry
{
public:
    std::uint8_t GeneratorName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t SectionName[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    std::uint8_t bChooseLocalShot; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPreferLocalPlayer; // 0x0009 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x2]; // 0x000A
    TWeakObjectPtr<void> PreferredTarget; // 0x000C (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> PreferredLookAtTarget; // 0x0014 (Size: 0x8, Type: WeakObjectProperty)
    float StartTimeMS; // 0x001C (Size: 0x4, Type: FloatProperty)
    float LengthMS; // 0x0020 (Size: 0x4, Type: FloatProperty)
    float ActualLengthMS; // 0x0024 (Size: 0x4, Type: FloatProperty)
    TWeakObjectPtr<void> TargetActor; // 0x0028 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Shot[0x48]; // 0x0030 (Size: 0x48, Type: StructProperty)
    std::uint8_t bIsDynamicEntry; // 0x0078 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0079
    std::uint8_t OnDynamicShotPrePlay[0xC]; // 0x007C (Size: 0xC, Type: DelegateProperty)
    std::uint8_t OnDynamicShotFinished[0xC]; // 0x0088 (Size: 0xC, Type: DelegateProperty)
    std::uint8_t OnDynamicShotPostPlay[0xC]; // 0x0094 (Size: 0xC, Type: DelegateProperty)
    TWeakObjectPtr<void> GeneratedTargetActor; // 0x00A0 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FSparksCameraDirectorSequenceEntry, GeneratorName) == 0, "Offset mismatch for FSparksCameraDirectorSequenceEntry::GeneratorName");
static_assert(offsetof(FSparksCameraDirectorSequenceEntry, SectionName) == 4, "Offset mismatch for FSparksCameraDirectorSequenceEntry::SectionName");
static_assert(offsetof(FSparksCameraDirectorSequenceEntry, bChooseLocalShot) == 8, "Offset mismatch for FSparksCameraDirectorSequenceEntry::bChooseLocalShot");
static_assert(offsetof(FSparksCameraDirectorSequenceEntry, bPreferLocalPlayer) == 9, "Offset mismatch for FSparksCameraDirectorSequenceEntry::bPreferLocalPlayer");
static_assert(offsetof(FSparksCameraDirectorSequenceEntry, PreferredTarget) == 12, "Offset mismatch for FSparksCameraDirectorSequenceEntry::PreferredTarget");
static_assert(offsetof(FSparksCameraDirectorSequenceEntry, PreferredLookAtTarget) == 20, "Offset mismatch for FSparksCameraDirectorSequenceEntry::PreferredLookAtTarget");
static_assert(offsetof(FSparksCameraDirectorSequenceEntry, StartTimeMS) == 28, "Offset mismatch for FSparksCameraDirectorSequenceEntry::StartTimeMS");
static_assert(offsetof(FSparksCameraDirectorSequenceEntry, LengthMS) == 32, "Offset mismatch for FSparksCameraDirectorSequenceEntry::LengthMS");
static_assert(offsetof(FSparksCameraDirectorSequenceEntry, ActualLengthMS) == 36, "Offset mismatch for FSparksCameraDirectorSequenceEntry::ActualLengthMS");
static_assert(offsetof(FSparksCameraDirectorSequenceEntry, TargetActor) == 40, "Offset mismatch for FSparksCameraDirectorSequenceEntry::TargetActor");
static_assert(offsetof(FSparksCameraDirectorSequenceEntry, Shot) == 48, "Offset mismatch for FSparksCameraDirectorSequenceEntry::Shot");
static_assert(offsetof(FSparksCameraDirectorSequenceEntry, bIsDynamicEntry) == 120, "Offset mismatch for FSparksCameraDirectorSequenceEntry::bIsDynamicEntry");
static_assert(offsetof(FSparksCameraDirectorSequenceEntry, OnDynamicShotPrePlay) == 124, "Offset mismatch for FSparksCameraDirectorSequenceEntry::OnDynamicShotPrePlay");
static_assert(offsetof(FSparksCameraDirectorSequenceEntry, OnDynamicShotFinished) == 136, "Offset mismatch for FSparksCameraDirectorSequenceEntry::OnDynamicShotFinished");
static_assert(offsetof(FSparksCameraDirectorSequenceEntry, OnDynamicShotPostPlay) == 148, "Offset mismatch for FSparksCameraDirectorSequenceEntry::OnDynamicShotPostPlay");
static_assert(offsetof(FSparksCameraDirectorSequenceEntry, GeneratedTargetActor) == 160, "Offset mismatch for FSparksCameraDirectorSequenceEntry::GeneratedTargetActor");

// /Script/SparksCameraDirectorRuntime.SparksCameraFilter
// Kind: ScriptStruct; super: none
struct FSparksCameraFilter
{
public:
    std::uint8_t Required[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    std::uint8_t Preferred[0x20]; // 0x0020 (Size: 0x20, Type: StructProperty)
    std::uint8_t Excluded[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSparksCameraFilter, Required) == 0, "Offset mismatch for FSparksCameraFilter::Required");
static_assert(offsetof(FSparksCameraFilter, Preferred) == 32, "Offset mismatch for FSparksCameraFilter::Preferred");
static_assert(offsetof(FSparksCameraFilter, Excluded) == 64, "Offset mismatch for FSparksCameraFilter::Excluded");

// /Script/SparksCameraDirectorRuntime.SparksCameraPoolWrapper
// Kind: ScriptStruct; super: none
struct FSparksCameraPoolWrapper
{
public:
    void* ShotSelectionRule; // 0x0000 (Size: 0x8, Type: ClassProperty)
    void* Pool; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FSparksCameraPoolWrapper, ShotSelectionRule) == 0, "Offset mismatch for FSparksCameraPoolWrapper::ShotSelectionRule");
static_assert(offsetof(FSparksCameraPoolWrapper, Pool) == 8, "Offset mismatch for FSparksCameraPoolWrapper::Pool");

// /Script/SparksCameraDirectorRuntime.SparksCameraSectionWrapper
// Kind: ScriptStruct; super: none
struct FSparksCameraSectionWrapper
{
public:
    std::uint8_t Name[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::int32_t Priority; // 0x0004 (Size: 0x4, Type: IntProperty)
    float MaxGeneratedShotTimeSeconds; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x000C
    void* PoolSelectionRule; // 0x0010 (Size: 0x8, Type: ClassProperty)
    std::uint8_t IntroPool[0x10]; // 0x0018 (Size: 0x10, Type: StructProperty)
    TArray<void*> Pools; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ExitPool[0x10]; // 0x0038 (Size: 0x10, Type: StructProperty)
    std::uint8_t SectionFilter[0x1]; // 0x0048 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSparksCameraSectionWrapper, Name) == 0, "Offset mismatch for FSparksCameraSectionWrapper::Name");
static_assert(offsetof(FSparksCameraSectionWrapper, Priority) == 4, "Offset mismatch for FSparksCameraSectionWrapper::Priority");
static_assert(offsetof(FSparksCameraSectionWrapper, MaxGeneratedShotTimeSeconds) == 8, "Offset mismatch for FSparksCameraSectionWrapper::MaxGeneratedShotTimeSeconds");
static_assert(offsetof(FSparksCameraSectionWrapper, PoolSelectionRule) == 16, "Offset mismatch for FSparksCameraSectionWrapper::PoolSelectionRule");
static_assert(offsetof(FSparksCameraSectionWrapper, IntroPool) == 24, "Offset mismatch for FSparksCameraSectionWrapper::IntroPool");
static_assert(offsetof(FSparksCameraSectionWrapper, Pools) == 40, "Offset mismatch for FSparksCameraSectionWrapper::Pools");
static_assert(offsetof(FSparksCameraSectionWrapper, ExitPool) == 56, "Offset mismatch for FSparksCameraSectionWrapper::ExitPool");
static_assert(offsetof(FSparksCameraSectionWrapper, SectionFilter) == 72, "Offset mismatch for FSparksCameraSectionWrapper::SectionFilter");

// /Script/SparksCameraDirectorRuntime.SparksCameraShot
// Kind: ScriptStruct; super: none
struct FSparksCameraShot
{
public:
    void* Sequence; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t MoveToSocketName[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::uint8_t bAttachToActor; // 0x000C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseSocketRotationOnAttach; // 0x000D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCutOnMusicalBoundary; // 0x000E (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x1]; // 0x000F
    float AttachInterpSpeed; // 0x0010 (Size: 0x4, Type: FloatProperty)
    std::uint8_t LookAtSocketName[0x4]; // 0x0014 (Size: 0x4, Type: NameProperty)
    float LookAtInterpSpeed; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float MinTimeSeconds; // 0x001C (Size: 0x4, Type: FloatProperty)
    float MaxTimeSeconds; // 0x0020 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0024
    std::uint8_t Tags[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSparksCameraShot, Sequence) == 0, "Offset mismatch for FSparksCameraShot::Sequence");
static_assert(offsetof(FSparksCameraShot, MoveToSocketName) == 8, "Offset mismatch for FSparksCameraShot::MoveToSocketName");
static_assert(offsetof(FSparksCameraShot, bAttachToActor) == 12, "Offset mismatch for FSparksCameraShot::bAttachToActor");
static_assert(offsetof(FSparksCameraShot, bUseSocketRotationOnAttach) == 13, "Offset mismatch for FSparksCameraShot::bUseSocketRotationOnAttach");
static_assert(offsetof(FSparksCameraShot, bCutOnMusicalBoundary) == 14, "Offset mismatch for FSparksCameraShot::bCutOnMusicalBoundary");
static_assert(offsetof(FSparksCameraShot, AttachInterpSpeed) == 16, "Offset mismatch for FSparksCameraShot::AttachInterpSpeed");
static_assert(offsetof(FSparksCameraShot, LookAtSocketName) == 20, "Offset mismatch for FSparksCameraShot::LookAtSocketName");
static_assert(offsetof(FSparksCameraShot, LookAtInterpSpeed) == 24, "Offset mismatch for FSparksCameraShot::LookAtInterpSpeed");
static_assert(offsetof(FSparksCameraShot, MinTimeSeconds) == 28, "Offset mismatch for FSparksCameraShot::MinTimeSeconds");
static_assert(offsetof(FSparksCameraShot, MaxTimeSeconds) == 32, "Offset mismatch for FSparksCameraShot::MaxTimeSeconds");
static_assert(offsetof(FSparksCameraShot, Tags) == 40, "Offset mismatch for FSparksCameraShot::Tags");

// /Script/SparksCameraDirectorRuntime.SparksCameraShotUses
// Kind: ScriptStruct; super: none
struct FSparksCameraShotUses
{
public:
    TArray<void*> Timestamps; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSparksCameraShotUses, Timestamps) == 0, "Offset mismatch for FSparksCameraShotUses::Timestamps");

// /Script/SparksCameraDirectorRuntime.SparksCommonCameraDebugLogEvent
// Kind: ScriptStruct; super: none
struct FSparksCommonCameraDebugLogEvent
{
public:
    FString Data; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t Type; // 0x0010 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FSparksCommonCameraDebugLogEvent, Data) == 0, "Offset mismatch for FSparksCommonCameraDebugLogEvent::Data");
static_assert(offsetof(FSparksCommonCameraDebugLogEvent, Type) == 16, "Offset mismatch for FSparksCommonCameraDebugLogEvent::Type");

// /Script/SparksCameraDirectorRuntime.SparksCommonCameraDebugLogProgressEvent
// Kind: ScriptStruct; super: none
struct FSparksCommonCameraDebugLogProgressEvent
{
public:
    float Value; // 0x0000 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FSparksCommonCameraDebugLogProgressEvent, Value) == 0, "Offset mismatch for FSparksCommonCameraDebugLogProgressEvent::Value");

// /Script/SparksCameraDirectorRuntime.SparksCommonCameraPerformanceMapEvent
// Kind: ScriptStruct; super: none
struct FSparksCommonCameraPerformanceMapEvent
{
public:
    void* Map; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FSparksCommonCameraPerformanceMapEvent, Map) == 0, "Offset mismatch for FSparksCommonCameraPerformanceMapEvent::Map");

// /Script/SparksCameraDirectorRuntime.SparksCommonCameraShotPlayedEvent
// Kind: ScriptStruct; super: none
struct FSparksCommonCameraShotPlayedEvent
{
public:
    std::uint8_t Shot[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSparksCommonCameraShotPlayedEvent, Shot) == 0, "Offset mismatch for FSparksCommonCameraShotPlayedEvent::Shot");

// /Script/SparksCameraDirectorRuntime.SparksCommonDynamicCameraDirectorEvent
// Kind: ScriptStruct; super: none
struct FSparksCommonDynamicCameraDirectorEvent
{
public:
    std::uint8_t bWaitForTransition; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bForceTransition; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0002
    float LengthSeconds; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bPreferLocalPlayer; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0009
    TWeakObjectPtr<void> PreferredTarget; // 0x000C (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> PreferredLookAtTarget; // 0x0014 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t bOverwriteActiveDynamicEvent; // 0x001C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x001D
    std::uint8_t Tags[0x20]; // 0x0020 (Size: 0x20, Type: StructProperty)
    std::uint8_t OnShotPrePlay[0xC]; // 0x0040 (Size: 0xC, Type: DelegateProperty)
    std::uint8_t OnShotFinished[0xC]; // 0x004C (Size: 0xC, Type: DelegateProperty)
    FScriptDelegate OnShotPostPlay; // 0x0058 (Size: 0x10, Type: DelegateProperty)
};

static_assert(offsetof(FSparksCommonDynamicCameraDirectorEvent, bWaitForTransition) == 0, "Offset mismatch for FSparksCommonDynamicCameraDirectorEvent::bWaitForTransition");
static_assert(offsetof(FSparksCommonDynamicCameraDirectorEvent, bForceTransition) == 1, "Offset mismatch for FSparksCommonDynamicCameraDirectorEvent::bForceTransition");
static_assert(offsetof(FSparksCommonDynamicCameraDirectorEvent, LengthSeconds) == 4, "Offset mismatch for FSparksCommonDynamicCameraDirectorEvent::LengthSeconds");
static_assert(offsetof(FSparksCommonDynamicCameraDirectorEvent, bPreferLocalPlayer) == 8, "Offset mismatch for FSparksCommonDynamicCameraDirectorEvent::bPreferLocalPlayer");
static_assert(offsetof(FSparksCommonDynamicCameraDirectorEvent, PreferredTarget) == 12, "Offset mismatch for FSparksCommonDynamicCameraDirectorEvent::PreferredTarget");
static_assert(offsetof(FSparksCommonDynamicCameraDirectorEvent, PreferredLookAtTarget) == 20, "Offset mismatch for FSparksCommonDynamicCameraDirectorEvent::PreferredLookAtTarget");
static_assert(offsetof(FSparksCommonDynamicCameraDirectorEvent, bOverwriteActiveDynamicEvent) == 28, "Offset mismatch for FSparksCommonDynamicCameraDirectorEvent::bOverwriteActiveDynamicEvent");
static_assert(offsetof(FSparksCommonDynamicCameraDirectorEvent, Tags) == 32, "Offset mismatch for FSparksCommonDynamicCameraDirectorEvent::Tags");
static_assert(offsetof(FSparksCommonDynamicCameraDirectorEvent, OnShotPrePlay) == 64, "Offset mismatch for FSparksCommonDynamicCameraDirectorEvent::OnShotPrePlay");
static_assert(offsetof(FSparksCommonDynamicCameraDirectorEvent, OnShotFinished) == 76, "Offset mismatch for FSparksCommonDynamicCameraDirectorEvent::OnShotFinished");
static_assert(offsetof(FSparksCommonDynamicCameraDirectorEvent, OnShotPostPlay) == 88, "Offset mismatch for FSparksCommonDynamicCameraDirectorEvent::OnShotPostPlay");

// /Script/SparksCameraDirectorRuntime.SparksCommonForceIntermissionCameraDirectorEvent
// Kind: ScriptStruct; super: none
struct FSparksCommonForceIntermissionCameraDirectorEvent
{
public:
    std::uint8_t Tags[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSparksCommonForceIntermissionCameraDirectorEvent, Tags) == 0, "Offset mismatch for FSparksCommonForceIntermissionCameraDirectorEvent::Tags");

// /Script/SparksCameraDirectorRuntime.SparksCommonIntermissionCameraDirectorEvent
// Kind: ScriptStruct; super: none
struct FSparksCommonIntermissionCameraDirectorEvent
{
public:
    std::uint8_t Tags[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSparksCommonIntermissionCameraDirectorEvent, Tags) == 0, "Offset mismatch for FSparksCommonIntermissionCameraDirectorEvent::Tags");

// /Script/SparksCameraDirectorRuntime.SparksCommonResetCameraDirectorEvent
// Kind: ScriptStruct; super: none
struct FSparksCommonResetCameraDirectorEvent
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SparksCameraDirectorRuntime.SparksCommonStartCameraDirectorEvent
// Kind: ScriptStruct; super: none
struct FSparksCommonStartCameraDirectorEvent
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SparksCameraDirectorRuntime.SparksCommonStopCameraDirectorEvent
// Kind: ScriptStruct; super: none
struct FSparksCommonStopCameraDirectorEvent
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SparksCameraDirectorRuntime.SparksPerformanceMapSection
// Kind: ScriptStruct; super: none
struct FSparksPerformanceMapSection
{
public:
    float StartMs; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float LengthMS; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t PrimaryTag[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    std::uint8_t Tags[0x20]; // 0x0010 (Size: 0x20, Type: StructProperty)
    std::uint8_t ShotsFilter[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSparksPerformanceMapSection, StartMs) == 0, "Offset mismatch for FSparksPerformanceMapSection::StartMs");
static_assert(offsetof(FSparksPerformanceMapSection, LengthMS) == 4, "Offset mismatch for FSparksPerformanceMapSection::LengthMS");
static_assert(offsetof(FSparksPerformanceMapSection, PrimaryTag) == 8, "Offset mismatch for FSparksPerformanceMapSection::PrimaryTag");
static_assert(offsetof(FSparksPerformanceMapSection, Tags) == 16, "Offset mismatch for FSparksPerformanceMapSection::Tags");
static_assert(offsetof(FSparksPerformanceMapSection, ShotsFilter) == 48, "Offset mismatch for FSparksPerformanceMapSection::ShotsFilter");

// /Script/SparksCameraDirectorRuntime.SparksCameraDebugWidget
// Kind: Class; super: UserWidget
class USparksCameraDebugWidget
{
public:
    std::uint8_t Pad_0000[0x1A0]; // 0x0000
    std::uint8_t ColorAndOpacity[0x10]; // 0x01A0 (Size: 0x10, Type: StructProperty)
    std::uint8_t ColorAndOpacityDelegate[0xC]; // 0x01B0 (Size: 0xC, Type: DelegateProperty)
    std::uint8_t ForegroundColor[0x14]; // 0x01BC (Size: 0x14, Type: StructProperty)
    FScriptDelegate ForegroundColorDelegate; // 0x01D0 (Size: 0x10, Type: DelegateProperty)
    FMulticastInlineDelegate OnVisibilityChanged; // 0x01E0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x30]; // 0x01F0
    std::uint8_t Padding[0x10]; // 0x0220 (Size: 0x10, Type: StructProperty)
    std::int32_t Priority; // 0x0230 (Size: 0x4, Type: IntProperty)
    std::uint8_t bAutomaticallyRegisterInputOnConstruction; // 0x0234 (Size: 0x1, Type: BoolProperty)
    // 0x0234 BoolProperty bIsFocusable (shared storage)
    // 0x0234 BoolProperty bStopAction (shared storage)
    std::uint8_t Pad_0002[0x3]; // 0x0235
    TArray<void*> QueuedWidgetAnimationTransitions; // 0x0238 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ActiveSequencePlayers; // 0x0248 (Size: 0x10, Type: ArrayProperty)
    void* AnimationTickManager; // 0x0258 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> StoppedSequencePlayers; // 0x0260 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0003[0x18]; // 0x0270
    TArray<void*> NamedSlotBindings; // 0x0288 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Extensions; // 0x0298 (Size: 0x10, Type: ArrayProperty)
    void* WidgetTree; // 0x02A8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bHasScriptImplementedPaint; // 0x02B0 (Size: 0x1, Type: BoolProperty)
    // 0x02B0 BoolProperty bHasScriptImplementedTick (shared storage)
    std::uint8_t Pad_0004[0x17]; // 0x02B1
    std::uint8_t TickFrequency; // 0x02C8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0005[0x3]; // 0x02C9
    std::uint8_t DesiredFocusWidget[0xC]; // 0x02CC (Size: 0xC, Type: StructProperty)
    void* InputComponent; // 0x02D8 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> AnimationCallbacks; // 0x02E0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USparksCameraDebugWidget, ColorAndOpacity) == 416, "Offset mismatch for USparksCameraDebugWidget::ColorAndOpacity");
static_assert(offsetof(USparksCameraDebugWidget, ColorAndOpacityDelegate) == 432, "Offset mismatch for USparksCameraDebugWidget::ColorAndOpacityDelegate");
static_assert(offsetof(USparksCameraDebugWidget, ForegroundColor) == 444, "Offset mismatch for USparksCameraDebugWidget::ForegroundColor");
static_assert(offsetof(USparksCameraDebugWidget, ForegroundColorDelegate) == 464, "Offset mismatch for USparksCameraDebugWidget::ForegroundColorDelegate");
static_assert(offsetof(USparksCameraDebugWidget, OnVisibilityChanged) == 480, "Offset mismatch for USparksCameraDebugWidget::OnVisibilityChanged");
static_assert(offsetof(USparksCameraDebugWidget, Padding) == 544, "Offset mismatch for USparksCameraDebugWidget::Padding");
static_assert(offsetof(USparksCameraDebugWidget, Priority) == 560, "Offset mismatch for USparksCameraDebugWidget::Priority");
static_assert(offsetof(USparksCameraDebugWidget, bAutomaticallyRegisterInputOnConstruction) == 564, "Offset mismatch for USparksCameraDebugWidget::bAutomaticallyRegisterInputOnConstruction");
static_assert(offsetof(USparksCameraDebugWidget, QueuedWidgetAnimationTransitions) == 568, "Offset mismatch for USparksCameraDebugWidget::QueuedWidgetAnimationTransitions");
static_assert(offsetof(USparksCameraDebugWidget, ActiveSequencePlayers) == 584, "Offset mismatch for USparksCameraDebugWidget::ActiveSequencePlayers");
static_assert(offsetof(USparksCameraDebugWidget, AnimationTickManager) == 600, "Offset mismatch for USparksCameraDebugWidget::AnimationTickManager");
static_assert(offsetof(USparksCameraDebugWidget, StoppedSequencePlayers) == 608, "Offset mismatch for USparksCameraDebugWidget::StoppedSequencePlayers");
static_assert(offsetof(USparksCameraDebugWidget, NamedSlotBindings) == 648, "Offset mismatch for USparksCameraDebugWidget::NamedSlotBindings");
static_assert(offsetof(USparksCameraDebugWidget, Extensions) == 664, "Offset mismatch for USparksCameraDebugWidget::Extensions");
static_assert(offsetof(USparksCameraDebugWidget, WidgetTree) == 680, "Offset mismatch for USparksCameraDebugWidget::WidgetTree");
static_assert(offsetof(USparksCameraDebugWidget, bHasScriptImplementedPaint) == 688, "Offset mismatch for USparksCameraDebugWidget::bHasScriptImplementedPaint");
static_assert(offsetof(USparksCameraDebugWidget, TickFrequency) == 712, "Offset mismatch for USparksCameraDebugWidget::TickFrequency");
static_assert(offsetof(USparksCameraDebugWidget, DesiredFocusWidget) == 716, "Offset mismatch for USparksCameraDebugWidget::DesiredFocusWidget");
static_assert(offsetof(USparksCameraDebugWidget, InputComponent) == 728, "Offset mismatch for USparksCameraDebugWidget::InputComponent");
static_assert(offsetof(USparksCameraDebugWidget, AnimationCallbacks) == 736, "Offset mismatch for USparksCameraDebugWidget::AnimationCallbacks");

// /Script/SparksCameraDirectorRuntime.SparksCameraDirectorComponent
// Kind: Class; super: ActorComponent
class USparksCameraDirectorComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    void* MainConfig; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
    void* QAConfig; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
    void* PerfConfig; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> CustomConfig; // 0x00D8 (Size: 0x10, Type: ArrayProperty)
    float MinShotTimeSeconds; // 0x00E8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00EC
    TArray<void*> Sequences; // 0x00F0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0002[0x18]; // 0x0100
    void* Config; // 0x0118 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0003[0x8]; // 0x0120
    void* PerformanceMap; // 0x0128 (Size: 0x8, Type: ObjectProperty)
    void* DebugWidget; // 0x0130 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t IntermissionTags[0x20]; // 0x0138 (Size: 0x20, Type: StructProperty)
    void* SequenceActor; // 0x0158 (Size: 0x8, Type: ObjectProperty)
    void* SequencePlayer; // 0x0160 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bCamerasAreActive; // 0x0168 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCamerasAreLocked; // 0x0169 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x2]; // 0x016A
    TWeakObjectPtr<void> DataProvider; // 0x016C (Size: 0x8, Type: WeakObjectProperty)
    std::int32_t DebugTargetIndex; // 0x0174 (Size: 0x4, Type: IntProperty)
    std::int32_t CurrentSequenceIndex; // 0x0178 (Size: 0x4, Type: IntProperty)
    std::int32_t CurrentSequenceEntryIndex; // 0x017C (Size: 0x4, Type: IntProperty)
    std::uint8_t bHasActiveDynamicEvent; // 0x0180 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x7]; // 0x0181
    std::uint8_t DynamicEvent[0x78]; // 0x0188 (Size: 0x78, Type: StructProperty)
    std::uint8_t CurrentPlayingEntry[0xA8]; // 0x0200 (Size: 0xA8, Type: StructProperty)
    std::uint8_t CurrentlyPlaying; // 0x02A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x7]; // 0x02A9
    std::uint8_t IntermissionSequence[0x28]; // 0x02B0 (Size: 0x28, Type: StructProperty)
    std::int32_t CurrentIntermissionSequenceEntryIndex; // 0x02D8 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0007[0x4]; // 0x02DC
    std::uint8_t LastKnownIntermissionTags[0x20]; // 0x02E0 (Size: 0x20, Type: StructProperty)
    std::uint8_t bForceCameraViewTargetEnabled; // 0x0300 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0008[0x3]; // 0x0301
    std::int32_t EvalStartIndex; // 0x0304 (Size: 0x4, Type: IntProperty)
    std::int32_t EvalEndIndex; // 0x0308 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(USparksCameraDirectorComponent, MainConfig) == 192, "Offset mismatch for USparksCameraDirectorComponent::MainConfig");
static_assert(offsetof(USparksCameraDirectorComponent, QAConfig) == 200, "Offset mismatch for USparksCameraDirectorComponent::QAConfig");
static_assert(offsetof(USparksCameraDirectorComponent, PerfConfig) == 208, "Offset mismatch for USparksCameraDirectorComponent::PerfConfig");
static_assert(offsetof(USparksCameraDirectorComponent, CustomConfig) == 216, "Offset mismatch for USparksCameraDirectorComponent::CustomConfig");
static_assert(offsetof(USparksCameraDirectorComponent, MinShotTimeSeconds) == 232, "Offset mismatch for USparksCameraDirectorComponent::MinShotTimeSeconds");
static_assert(offsetof(USparksCameraDirectorComponent, Sequences) == 240, "Offset mismatch for USparksCameraDirectorComponent::Sequences");
static_assert(offsetof(USparksCameraDirectorComponent, Config) == 280, "Offset mismatch for USparksCameraDirectorComponent::Config");
static_assert(offsetof(USparksCameraDirectorComponent, PerformanceMap) == 296, "Offset mismatch for USparksCameraDirectorComponent::PerformanceMap");
static_assert(offsetof(USparksCameraDirectorComponent, DebugWidget) == 304, "Offset mismatch for USparksCameraDirectorComponent::DebugWidget");
static_assert(offsetof(USparksCameraDirectorComponent, IntermissionTags) == 312, "Offset mismatch for USparksCameraDirectorComponent::IntermissionTags");
static_assert(offsetof(USparksCameraDirectorComponent, SequenceActor) == 344, "Offset mismatch for USparksCameraDirectorComponent::SequenceActor");
static_assert(offsetof(USparksCameraDirectorComponent, SequencePlayer) == 352, "Offset mismatch for USparksCameraDirectorComponent::SequencePlayer");
static_assert(offsetof(USparksCameraDirectorComponent, bCamerasAreActive) == 360, "Offset mismatch for USparksCameraDirectorComponent::bCamerasAreActive");
static_assert(offsetof(USparksCameraDirectorComponent, bCamerasAreLocked) == 361, "Offset mismatch for USparksCameraDirectorComponent::bCamerasAreLocked");
static_assert(offsetof(USparksCameraDirectorComponent, DataProvider) == 364, "Offset mismatch for USparksCameraDirectorComponent::DataProvider");
static_assert(offsetof(USparksCameraDirectorComponent, DebugTargetIndex) == 372, "Offset mismatch for USparksCameraDirectorComponent::DebugTargetIndex");
static_assert(offsetof(USparksCameraDirectorComponent, CurrentSequenceIndex) == 376, "Offset mismatch for USparksCameraDirectorComponent::CurrentSequenceIndex");
static_assert(offsetof(USparksCameraDirectorComponent, CurrentSequenceEntryIndex) == 380, "Offset mismatch for USparksCameraDirectorComponent::CurrentSequenceEntryIndex");
static_assert(offsetof(USparksCameraDirectorComponent, bHasActiveDynamicEvent) == 384, "Offset mismatch for USparksCameraDirectorComponent::bHasActiveDynamicEvent");
static_assert(offsetof(USparksCameraDirectorComponent, DynamicEvent) == 392, "Offset mismatch for USparksCameraDirectorComponent::DynamicEvent");
static_assert(offsetof(USparksCameraDirectorComponent, CurrentPlayingEntry) == 512, "Offset mismatch for USparksCameraDirectorComponent::CurrentPlayingEntry");
static_assert(offsetof(USparksCameraDirectorComponent, CurrentlyPlaying) == 680, "Offset mismatch for USparksCameraDirectorComponent::CurrentlyPlaying");
static_assert(offsetof(USparksCameraDirectorComponent, IntermissionSequence) == 688, "Offset mismatch for USparksCameraDirectorComponent::IntermissionSequence");
static_assert(offsetof(USparksCameraDirectorComponent, CurrentIntermissionSequenceEntryIndex) == 728, "Offset mismatch for USparksCameraDirectorComponent::CurrentIntermissionSequenceEntryIndex");
static_assert(offsetof(USparksCameraDirectorComponent, LastKnownIntermissionTags) == 736, "Offset mismatch for USparksCameraDirectorComponent::LastKnownIntermissionTags");
static_assert(offsetof(USparksCameraDirectorComponent, bForceCameraViewTargetEnabled) == 768, "Offset mismatch for USparksCameraDirectorComponent::bForceCameraViewTargetEnabled");
static_assert(offsetof(USparksCameraDirectorComponent, EvalStartIndex) == 772, "Offset mismatch for USparksCameraDirectorComponent::EvalStartIndex");
static_assert(offsetof(USparksCameraDirectorComponent, EvalEndIndex) == 776, "Offset mismatch for USparksCameraDirectorComponent::EvalEndIndex");

// /Script/SparksCameraDirectorRuntime.SparksCameraDirectorConfig
// Kind: Class; super: DataAsset
class USparksCameraDirectorConfig
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    float MaxIntermissionShotTimeSeconds; // 0x0028 (Size: 0x4, Type: FloatProperty)
    float MaxGeneratedShotTimeSeconds; // 0x002C (Size: 0x4, Type: FloatProperty)
    float MinTimeBetweenSameShotSeconds; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float MaxRetriesToFindShot; // 0x0034 (Size: 0x4, Type: FloatProperty)
    std::uint8_t DefaultSequenceGenerator[0xA8]; // 0x0038 (Size: 0xA8, Type: StructProperty)
    void* RuntimeDefaultSequenceGenerator; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> SequenceGenerators; // 0x00E8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> RuntimeSequenceGenerators; // 0x00F8 (Size: 0x10, Type: ArrayProperty)
    TWeakObjectPtr<void> DataProvider; // 0x0108 (Size: 0x8, Type: WeakObjectProperty)
    void* DebugWidgetClass; // 0x0110 (Size: 0x8, Type: ClassProperty)
    std::uint8_t ShotsAttemptedThisPass[0x10]; // 0x0118 (Size: 0x10, Type: SetProperty)
    std::int32_t ShotPassCounter; // 0x0128 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x012C
    TMap<void*, void*> ShotTimestamps; // 0x0130 (Size: 0x10, Type: MapProperty)
    std::uint8_t bInitialized; // 0x0140 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(USparksCameraDirectorConfig, MaxIntermissionShotTimeSeconds) == 40, "Offset mismatch for USparksCameraDirectorConfig::MaxIntermissionShotTimeSeconds");
static_assert(offsetof(USparksCameraDirectorConfig, MaxGeneratedShotTimeSeconds) == 44, "Offset mismatch for USparksCameraDirectorConfig::MaxGeneratedShotTimeSeconds");
static_assert(offsetof(USparksCameraDirectorConfig, MinTimeBetweenSameShotSeconds) == 48, "Offset mismatch for USparksCameraDirectorConfig::MinTimeBetweenSameShotSeconds");
static_assert(offsetof(USparksCameraDirectorConfig, MaxRetriesToFindShot) == 52, "Offset mismatch for USparksCameraDirectorConfig::MaxRetriesToFindShot");
static_assert(offsetof(USparksCameraDirectorConfig, DefaultSequenceGenerator) == 56, "Offset mismatch for USparksCameraDirectorConfig::DefaultSequenceGenerator");
static_assert(offsetof(USparksCameraDirectorConfig, RuntimeDefaultSequenceGenerator) == 224, "Offset mismatch for USparksCameraDirectorConfig::RuntimeDefaultSequenceGenerator");
static_assert(offsetof(USparksCameraDirectorConfig, SequenceGenerators) == 232, "Offset mismatch for USparksCameraDirectorConfig::SequenceGenerators");
static_assert(offsetof(USparksCameraDirectorConfig, RuntimeSequenceGenerators) == 248, "Offset mismatch for USparksCameraDirectorConfig::RuntimeSequenceGenerators");
static_assert(offsetof(USparksCameraDirectorConfig, DataProvider) == 264, "Offset mismatch for USparksCameraDirectorConfig::DataProvider");
static_assert(offsetof(USparksCameraDirectorConfig, DebugWidgetClass) == 272, "Offset mismatch for USparksCameraDirectorConfig::DebugWidgetClass");
static_assert(offsetof(USparksCameraDirectorConfig, ShotsAttemptedThisPass) == 280, "Offset mismatch for USparksCameraDirectorConfig::ShotsAttemptedThisPass");
static_assert(offsetof(USparksCameraDirectorConfig, ShotPassCounter) == 296, "Offset mismatch for USparksCameraDirectorConfig::ShotPassCounter");
static_assert(offsetof(USparksCameraDirectorConfig, ShotTimestamps) == 304, "Offset mismatch for USparksCameraDirectorConfig::ShotTimestamps");
static_assert(offsetof(USparksCameraDirectorConfig, bInitialized) == 320, "Offset mismatch for USparksCameraDirectorConfig::bInitialized");

// /Script/SparksCameraDirectorRuntime.SparksCameraDirectorSequenceGenerator
// Kind: Class; super: Object
class USparksCameraDirectorSequenceGenerator
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bIsInitialized; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0029
    std::uint8_t SectionData[0xA8]; // 0x0030 (Size: 0xA8, Type: StructProperty)
    void* SelectionRule; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
    void* CameraConfig; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USparksCameraDirectorSequenceGenerator, bIsInitialized) == 40, "Offset mismatch for USparksCameraDirectorSequenceGenerator::bIsInitialized");
static_assert(offsetof(USparksCameraDirectorSequenceGenerator, SectionData) == 48, "Offset mismatch for USparksCameraDirectorSequenceGenerator::SectionData");
static_assert(offsetof(USparksCameraDirectorSequenceGenerator, SelectionRule) == 216, "Offset mismatch for USparksCameraDirectorSequenceGenerator::SelectionRule");
static_assert(offsetof(USparksCameraDirectorSequenceGenerator, CameraConfig) == 224, "Offset mismatch for USparksCameraDirectorSequenceGenerator::CameraConfig");

// /Script/SparksCameraDirectorRuntime.SparksCameraPluginDataProvider
// Kind: Class; super: PlayspaceComponent
class USparksCameraPluginDataProvider
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TArray<void*> StageMarks; // 0x00C0 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> PlayerAirtime; // 0x00D0 (Size: 0x10, Type: MapProperty)
    TArray<void*> StaticShots; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bAutomaticallyRegisterStageMarks; // 0x00F0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00F1
    std::uint8_t RuntimeFilter[0x60]; // 0x00F8 (Size: 0x60, Type: StructProperty)
    std::uint8_t bLMPIsActive; // 0x0158 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseRuntimeFilter; // 0x0159 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x6]; // 0x015A
    std::uint8_t RuntimeLMPFilter[0x60]; // 0x0160 (Size: 0x60, Type: StructProperty)
    std::uint8_t RuntimeNoLMPFilter[0x1]; // 0x01C0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USparksCameraPluginDataProvider, StageMarks) == 192, "Offset mismatch for USparksCameraPluginDataProvider::StageMarks");
static_assert(offsetof(USparksCameraPluginDataProvider, PlayerAirtime) == 208, "Offset mismatch for USparksCameraPluginDataProvider::PlayerAirtime");
static_assert(offsetof(USparksCameraPluginDataProvider, StaticShots) == 224, "Offset mismatch for USparksCameraPluginDataProvider::StaticShots");
static_assert(offsetof(USparksCameraPluginDataProvider, bAutomaticallyRegisterStageMarks) == 240, "Offset mismatch for USparksCameraPluginDataProvider::bAutomaticallyRegisterStageMarks");
static_assert(offsetof(USparksCameraPluginDataProvider, RuntimeFilter) == 248, "Offset mismatch for USparksCameraPluginDataProvider::RuntimeFilter");
static_assert(offsetof(USparksCameraPluginDataProvider, bLMPIsActive) == 344, "Offset mismatch for USparksCameraPluginDataProvider::bLMPIsActive");
static_assert(offsetof(USparksCameraPluginDataProvider, bUseRuntimeFilter) == 345, "Offset mismatch for USparksCameraPluginDataProvider::bUseRuntimeFilter");
static_assert(offsetof(USparksCameraPluginDataProvider, RuntimeLMPFilter) == 352, "Offset mismatch for USparksCameraPluginDataProvider::RuntimeLMPFilter");
static_assert(offsetof(USparksCameraPluginDataProvider, RuntimeNoLMPFilter) == 448, "Offset mismatch for USparksCameraPluginDataProvider::RuntimeNoLMPFilter");

// /Script/SparksCameraDirectorRuntime.SparksCameraPoolSelectRuleBase
// Kind: Class; super: Object
class USparksCameraPoolSelectRuleBase
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bIsInitialized; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0029
    std::uint8_t Wrapper[0xA8]; // 0x0030 (Size: 0xA8, Type: StructProperty)
    TArray<void*> PoolIndexes; // 0x00D8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PoolRules; // 0x00E8 (Size: 0x10, Type: ArrayProperty)
    void* IntroPoolRule; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
    void* ExitPoolRule; // 0x0100 (Size: 0x8, Type: ObjectProperty)
    std::int32_t Index; // 0x0108 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(USparksCameraPoolSelectRuleBase, bIsInitialized) == 40, "Offset mismatch for USparksCameraPoolSelectRuleBase::bIsInitialized");
static_assert(offsetof(USparksCameraPoolSelectRuleBase, Wrapper) == 48, "Offset mismatch for USparksCameraPoolSelectRuleBase::Wrapper");
static_assert(offsetof(USparksCameraPoolSelectRuleBase, PoolIndexes) == 216, "Offset mismatch for USparksCameraPoolSelectRuleBase::PoolIndexes");
static_assert(offsetof(USparksCameraPoolSelectRuleBase, PoolRules) == 232, "Offset mismatch for USparksCameraPoolSelectRuleBase::PoolRules");
static_assert(offsetof(USparksCameraPoolSelectRuleBase, IntroPoolRule) == 248, "Offset mismatch for USparksCameraPoolSelectRuleBase::IntroPoolRule");
static_assert(offsetof(USparksCameraPoolSelectRuleBase, ExitPoolRule) == 256, "Offset mismatch for USparksCameraPoolSelectRuleBase::ExitPoolRule");
static_assert(offsetof(USparksCameraPoolSelectRuleBase, Index) == 264, "Offset mismatch for USparksCameraPoolSelectRuleBase::Index");

// /Script/SparksCameraDirectorRuntime.SparksCameraShotPool
// Kind: Class; super: DataAsset
class USparksCameraShotPool
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> Shots; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bIgnoreShotTags; // 0x0038 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0039
    std::uint8_t PoolTags[0x20]; // 0x0040 (Size: 0x20, Type: StructProperty)
    std::uint8_t PoolFilter[0x1]; // 0x0060 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USparksCameraShotPool, Shots) == 40, "Offset mismatch for USparksCameraShotPool::Shots");
static_assert(offsetof(USparksCameraShotPool, bIgnoreShotTags) == 56, "Offset mismatch for USparksCameraShotPool::bIgnoreShotTags");
static_assert(offsetof(USparksCameraShotPool, PoolTags) == 64, "Offset mismatch for USparksCameraShotPool::PoolTags");
static_assert(offsetof(USparksCameraShotPool, PoolFilter) == 96, "Offset mismatch for USparksCameraShotPool::PoolFilter");

// /Script/SparksCameraDirectorRuntime.SparksCameraShotSelectRuleBase
// Kind: Class; super: Object
class USparksCameraShotSelectRuleBase
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bIsInitialized; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0029
    void* Pool; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ShotIndexes; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    std::int32_t Index; // 0x0048 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(USparksCameraShotSelectRuleBase, bIsInitialized) == 40, "Offset mismatch for USparksCameraShotSelectRuleBase::bIsInitialized");
static_assert(offsetof(USparksCameraShotSelectRuleBase, Pool) == 48, "Offset mismatch for USparksCameraShotSelectRuleBase::Pool");
static_assert(offsetof(USparksCameraShotSelectRuleBase, ShotIndexes) == 56, "Offset mismatch for USparksCameraShotSelectRuleBase::ShotIndexes");
static_assert(offsetof(USparksCameraShotSelectRuleBase, Index) == 72, "Offset mismatch for USparksCameraShotSelectRuleBase::Index");

// /Script/SparksCameraDirectorRuntime.SparksCameraStageMark
// Kind: Class; super: Actor
class USparksCameraStageMark
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    std::uint8_t CameraTags[0x1]; // 0x0270 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USparksCameraStageMark, CameraTags) == 624, "Offset mismatch for USparksCameraStageMark::CameraTags");

// /Script/SparksCameraDirectorRuntime.SparksCamera_BPFL
// Kind: Class; super: BlueprintFunctionLibrary
class USparksCamera_BPFL
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SparksCameraDirectorRuntime.SparksCinematicCamera
// Kind: Class; super: FortCinematicCamera
class USparksCinematicCamera
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    void* SpectatorPC; // 0x0080 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USparksCinematicCamera, SpectatorPC) == 128, "Offset mismatch for USparksCinematicCamera::SpectatorPC");

// /Script/SparksCameraDirectorRuntime.SparksDefaultLevelSequenceInstanceData
// Kind: Class; super: DefaultLevelSequenceInstanceData
class USparksDefaultLevelSequenceInstanceData
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    void* MeshToAttachTo; // 0x00A0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USparksDefaultLevelSequenceInstanceData, MeshToAttachTo) == 160, "Offset mismatch for USparksDefaultLevelSequenceInstanceData::MeshToAttachTo");

// /Script/SparksCameraDirectorRuntime.SparksLevelSequenceActor
// Kind: Class; super: LevelSequenceActor
class USparksLevelSequenceActor
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

static_assert(offsetof(USparksLevelSequenceActor, PlaybackSettings) == 648, "Offset mismatch for USparksLevelSequenceActor::PlaybackSettings");
static_assert(offsetof(USparksLevelSequenceActor, SequencePlayer) == 688, "Offset mismatch for USparksLevelSequenceActor::SequencePlayer");
static_assert(offsetof(USparksLevelSequenceActor, LevelSequenceAsset) == 696, "Offset mismatch for USparksLevelSequenceActor::LevelSequenceAsset");
static_assert(offsetof(USparksLevelSequenceActor, CameraSettings) == 704, "Offset mismatch for USparksLevelSequenceActor::CameraSettings");
static_assert(offsetof(USparksLevelSequenceActor, BurnInOptions) == 712, "Offset mismatch for USparksLevelSequenceActor::BurnInOptions");
static_assert(offsetof(USparksLevelSequenceActor, BindingOverrides) == 720, "Offset mismatch for USparksLevelSequenceActor::BindingOverrides");
static_assert(offsetof(USparksLevelSequenceActor, bAutoPlay) == 728, "Offset mismatch for USparksLevelSequenceActor::bAutoPlay");
static_assert(offsetof(USparksLevelSequenceActor, DefaultInstanceData) == 736, "Offset mismatch for USparksLevelSequenceActor::DefaultInstanceData");
static_assert(offsetof(USparksLevelSequenceActor, BurnInInstance) == 744, "Offset mismatch for USparksLevelSequenceActor::BurnInInstance");
static_assert(offsetof(USparksLevelSequenceActor, bShowBurnin) == 752, "Offset mismatch for USparksLevelSequenceActor::bShowBurnin");
static_assert(offsetof(USparksLevelSequenceActor, WorldPartitionResolveData) == 756, "Offset mismatch for USparksLevelSequenceActor::WorldPartitionResolveData");

// /Script/SparksCameraDirectorRuntime.SparksLevelSequencePlayer
// Kind: Class; super: LevelSequencePlayer
class USparksLevelSequencePlayer
{
public:
    std::uint8_t Pad_0000[0x460]; // 0x0000
    void* SpawnedCamera; // 0x0460 (Size: 0x8, Type: ObjectProperty)
    void* TargetMesh; // 0x0468 (Size: 0x8, Type: ObjectProperty)
    void* SpawnedLookAtTarget; // 0x0470 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USparksLevelSequencePlayer, SpawnedCamera) == 1120, "Offset mismatch for USparksLevelSequencePlayer::SpawnedCamera");
static_assert(offsetof(USparksLevelSequencePlayer, TargetMesh) == 1128, "Offset mismatch for USparksLevelSequencePlayer::TargetMesh");
static_assert(offsetof(USparksLevelSequencePlayer, SpawnedLookAtTarget) == 1136, "Offset mismatch for USparksLevelSequencePlayer::SpawnedLookAtTarget");

// /Script/SparksCameraDirectorRuntime.SparksPerformanceMap
// Kind: Class; super: Object
class USparksPerformanceMap
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> Timeline; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    float PerformanceLength; // 0x0038 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(USparksPerformanceMap, Timeline) == 40, "Offset mismatch for USparksPerformanceMap::Timeline");
static_assert(offsetof(USparksPerformanceMap, PerformanceLength) == 56, "Offset mismatch for USparksPerformanceMap::PerformanceLength");

// /Script/SparksCameraDirectorRuntime.SparksPoolSelectRuleRandomized
// Kind: Class; super: SparksCameraPoolSelectRuleBase
class USparksPoolSelectRuleRandomized
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bIsInitialized; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0029
    std::uint8_t Wrapper[0xA8]; // 0x0030 (Size: 0xA8, Type: StructProperty)
    TArray<void*> PoolIndexes; // 0x00D8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PoolRules; // 0x00E8 (Size: 0x10, Type: ArrayProperty)
    void* IntroPoolRule; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
    void* ExitPoolRule; // 0x0100 (Size: 0x8, Type: ObjectProperty)
    std::int32_t Index; // 0x0108 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(USparksPoolSelectRuleRandomized, bIsInitialized) == 40, "Offset mismatch for USparksPoolSelectRuleRandomized::bIsInitialized");
static_assert(offsetof(USparksPoolSelectRuleRandomized, Wrapper) == 48, "Offset mismatch for USparksPoolSelectRuleRandomized::Wrapper");
static_assert(offsetof(USparksPoolSelectRuleRandomized, PoolIndexes) == 216, "Offset mismatch for USparksPoolSelectRuleRandomized::PoolIndexes");
static_assert(offsetof(USparksPoolSelectRuleRandomized, PoolRules) == 232, "Offset mismatch for USparksPoolSelectRuleRandomized::PoolRules");
static_assert(offsetof(USparksPoolSelectRuleRandomized, IntroPoolRule) == 248, "Offset mismatch for USparksPoolSelectRuleRandomized::IntroPoolRule");
static_assert(offsetof(USparksPoolSelectRuleRandomized, ExitPoolRule) == 256, "Offset mismatch for USparksPoolSelectRuleRandomized::ExitPoolRule");
static_assert(offsetof(USparksPoolSelectRuleRandomized, Index) == 264, "Offset mismatch for USparksPoolSelectRuleRandomized::Index");

// /Script/SparksCameraDirectorRuntime.SparksPoolSelectRuleScored
// Kind: Class; super: SparksCameraPoolSelectRuleBase
class USparksPoolSelectRuleScored
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bIsInitialized; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0029
    std::uint8_t Wrapper[0xA8]; // 0x0030 (Size: 0xA8, Type: StructProperty)
    TArray<void*> PoolIndexes; // 0x00D8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PoolRules; // 0x00E8 (Size: 0x10, Type: ArrayProperty)
    void* IntroPoolRule; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
    void* ExitPoolRule; // 0x0100 (Size: 0x8, Type: ObjectProperty)
    std::int32_t Index; // 0x0108 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(USparksPoolSelectRuleScored, bIsInitialized) == 40, "Offset mismatch for USparksPoolSelectRuleScored::bIsInitialized");
static_assert(offsetof(USparksPoolSelectRuleScored, Wrapper) == 48, "Offset mismatch for USparksPoolSelectRuleScored::Wrapper");
static_assert(offsetof(USparksPoolSelectRuleScored, PoolIndexes) == 216, "Offset mismatch for USparksPoolSelectRuleScored::PoolIndexes");
static_assert(offsetof(USparksPoolSelectRuleScored, PoolRules) == 232, "Offset mismatch for USparksPoolSelectRuleScored::PoolRules");
static_assert(offsetof(USparksPoolSelectRuleScored, IntroPoolRule) == 248, "Offset mismatch for USparksPoolSelectRuleScored::IntroPoolRule");
static_assert(offsetof(USparksPoolSelectRuleScored, ExitPoolRule) == 256, "Offset mismatch for USparksPoolSelectRuleScored::ExitPoolRule");
static_assert(offsetof(USparksPoolSelectRuleScored, Index) == 264, "Offset mismatch for USparksPoolSelectRuleScored::Index");

// /Script/SparksCameraDirectorRuntime.SparksPoolSelectRuleSequential
// Kind: Class; super: SparksCameraPoolSelectRuleBase
class USparksPoolSelectRuleSequential
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bIsInitialized; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0029
    std::uint8_t Wrapper[0xA8]; // 0x0030 (Size: 0xA8, Type: StructProperty)
    TArray<void*> PoolIndexes; // 0x00D8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PoolRules; // 0x00E8 (Size: 0x10, Type: ArrayProperty)
    void* IntroPoolRule; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
    void* ExitPoolRule; // 0x0100 (Size: 0x8, Type: ObjectProperty)
    std::int32_t Index; // 0x0108 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(USparksPoolSelectRuleSequential, bIsInitialized) == 40, "Offset mismatch for USparksPoolSelectRuleSequential::bIsInitialized");
static_assert(offsetof(USparksPoolSelectRuleSequential, Wrapper) == 48, "Offset mismatch for USparksPoolSelectRuleSequential::Wrapper");
static_assert(offsetof(USparksPoolSelectRuleSequential, PoolIndexes) == 216, "Offset mismatch for USparksPoolSelectRuleSequential::PoolIndexes");
static_assert(offsetof(USparksPoolSelectRuleSequential, PoolRules) == 232, "Offset mismatch for USparksPoolSelectRuleSequential::PoolRules");
static_assert(offsetof(USparksPoolSelectRuleSequential, IntroPoolRule) == 248, "Offset mismatch for USparksPoolSelectRuleSequential::IntroPoolRule");
static_assert(offsetof(USparksPoolSelectRuleSequential, ExitPoolRule) == 256, "Offset mismatch for USparksPoolSelectRuleSequential::ExitPoolRule");
static_assert(offsetof(USparksPoolSelectRuleSequential, Index) == 264, "Offset mismatch for USparksPoolSelectRuleSequential::Index");

// /Script/SparksCameraDirectorRuntime.SparksShotSelectRuleRandomized
// Kind: Class; super: SparksCameraShotSelectRuleBase
class USparksShotSelectRuleRandomized
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bIsInitialized; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0029
    void* Pool; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ShotIndexes; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    std::int32_t Index; // 0x0048 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(USparksShotSelectRuleRandomized, bIsInitialized) == 40, "Offset mismatch for USparksShotSelectRuleRandomized::bIsInitialized");
static_assert(offsetof(USparksShotSelectRuleRandomized, Pool) == 48, "Offset mismatch for USparksShotSelectRuleRandomized::Pool");
static_assert(offsetof(USparksShotSelectRuleRandomized, ShotIndexes) == 56, "Offset mismatch for USparksShotSelectRuleRandomized::ShotIndexes");
static_assert(offsetof(USparksShotSelectRuleRandomized, Index) == 72, "Offset mismatch for USparksShotSelectRuleRandomized::Index");

// /Script/SparksCameraDirectorRuntime.SparksShotSelectRuleScored
// Kind: Class; super: SparksCameraShotSelectRuleBase
class USparksShotSelectRuleScored
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bIsInitialized; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0029
    void* Pool; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ShotIndexes; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    std::int32_t Index; // 0x0048 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(USparksShotSelectRuleScored, bIsInitialized) == 40, "Offset mismatch for USparksShotSelectRuleScored::bIsInitialized");
static_assert(offsetof(USparksShotSelectRuleScored, Pool) == 48, "Offset mismatch for USparksShotSelectRuleScored::Pool");
static_assert(offsetof(USparksShotSelectRuleScored, ShotIndexes) == 56, "Offset mismatch for USparksShotSelectRuleScored::ShotIndexes");
static_assert(offsetof(USparksShotSelectRuleScored, Index) == 72, "Offset mismatch for USparksShotSelectRuleScored::Index");

// /Script/SparksCameraDirectorRuntime.SparksShotSelectRuleSequential
// Kind: Class; super: SparksCameraShotSelectRuleBase
class USparksShotSelectRuleSequential
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bIsInitialized; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0029
    void* Pool; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ShotIndexes; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    std::int32_t Index; // 0x0048 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(USparksShotSelectRuleSequential, bIsInitialized) == 40, "Offset mismatch for USparksShotSelectRuleSequential::bIsInitialized");
static_assert(offsetof(USparksShotSelectRuleSequential, Pool) == 48, "Offset mismatch for USparksShotSelectRuleSequential::Pool");
static_assert(offsetof(USparksShotSelectRuleSequential, ShotIndexes) == 56, "Offset mismatch for USparksShotSelectRuleSequential::ShotIndexes");
static_assert(offsetof(USparksShotSelectRuleSequential, Index) == 72, "Offset mismatch for USparksShotSelectRuleSequential::Index");

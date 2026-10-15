/**
 * decamp dumper generated SDK
 * Package: /Script/MovieSceneTracks
 */
#pragma once
#include "Basic.h"

// /Script/MovieSceneTracks.BaseParameterNameAndValue
// Kind: ScriptStruct; super: none
struct FBaseParameterNameAndValue
{
public:
    FName ParameterName; // 0x0000 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FBaseParameterNameAndValue, ParameterName) == 0, "Offset mismatch for FBaseParameterNameAndValue::ParameterName");

// /Script/MovieSceneTracks.BoolParameterNameAndCurve
// Kind: ScriptStruct; super: BaseParameterNameAndValue
struct FBoolParameterNameAndCurve
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t ParameterCurve[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FBoolParameterNameAndCurve, ParameterCurve) == 8, "Offset mismatch for FBoolParameterNameAndCurve::ParameterCurve");

// /Script/MovieSceneTracks.ColorMaterialParameterInfoAndCurves
// Kind: ScriptStruct; super: none
struct FColorMaterialParameterInfoAndCurves
{
public:
    std::uint8_t ParameterInfo[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t RedCurve[0xD0]; // 0x0010 (Size: 0xD0, Type: StructProperty)
    std::uint8_t GreenCurve[0xD0]; // 0x00E0 (Size: 0xD0, Type: StructProperty)
    std::uint8_t BlueCurve[0xD0]; // 0x01B0 (Size: 0xD0, Type: StructProperty)
    std::uint8_t AlphaCurve[0x1]; // 0x0280 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FColorMaterialParameterInfoAndCurves, ParameterInfo) == 0, "Offset mismatch for FColorMaterialParameterInfoAndCurves::ParameterInfo");
static_assert(offsetof(FColorMaterialParameterInfoAndCurves, RedCurve) == 16, "Offset mismatch for FColorMaterialParameterInfoAndCurves::RedCurve");
static_assert(offsetof(FColorMaterialParameterInfoAndCurves, GreenCurve) == 224, "Offset mismatch for FColorMaterialParameterInfoAndCurves::GreenCurve");
static_assert(offsetof(FColorMaterialParameterInfoAndCurves, BlueCurve) == 432, "Offset mismatch for FColorMaterialParameterInfoAndCurves::BlueCurve");
static_assert(offsetof(FColorMaterialParameterInfoAndCurves, AlphaCurve) == 640, "Offset mismatch for FColorMaterialParameterInfoAndCurves::AlphaCurve");

// /Script/MovieSceneTracks.ColorParameterNameAndCurves
// Kind: ScriptStruct; super: BaseParameterNameAndValue
struct FColorParameterNameAndCurves
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t RedCurve[0xD0]; // 0x0008 (Size: 0xD0, Type: StructProperty)
    std::uint8_t GreenCurve[0xD0]; // 0x00D8 (Size: 0xD0, Type: StructProperty)
    std::uint8_t BlueCurve[0xD0]; // 0x01A8 (Size: 0xD0, Type: StructProperty)
    std::uint8_t AlphaCurve[0x1]; // 0x0278 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FColorParameterNameAndCurves, RedCurve) == 8, "Offset mismatch for FColorParameterNameAndCurves::RedCurve");
static_assert(offsetof(FColorParameterNameAndCurves, GreenCurve) == 216, "Offset mismatch for FColorParameterNameAndCurves::GreenCurve");
static_assert(offsetof(FColorParameterNameAndCurves, BlueCurve) == 424, "Offset mismatch for FColorParameterNameAndCurves::BlueCurve");
static_assert(offsetof(FColorParameterNameAndCurves, AlphaCurve) == 632, "Offset mismatch for FColorParameterNameAndCurves::AlphaCurve");

// /Script/MovieSceneTracks.ComponentMaterialInfo
// Kind: ScriptStruct; super: none
struct FComponentMaterialInfo
{
public:
    std::uint8_t MaterialSlotName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::int32_t MaterialSlotIndex; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::uint8_t MaterialType; // 0x0008 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FComponentMaterialInfo, MaterialSlotName) == 0, "Offset mismatch for FComponentMaterialInfo::MaterialSlotName");
static_assert(offsetof(FComponentMaterialInfo, MaterialSlotIndex) == 4, "Offset mismatch for FComponentMaterialInfo::MaterialSlotIndex");
static_assert(offsetof(FComponentMaterialInfo, MaterialType) == 8, "Offset mismatch for FComponentMaterialInfo::MaterialType");

// /Script/MovieSceneTracks.ConstraintComponentData
// Kind: ScriptStruct; super: none
struct FConstraintComponentData
{
public:
    std::uint8_t ConstraintId[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FConstraintComponentData, ConstraintId) == 0, "Offset mismatch for FConstraintComponentData::ConstraintId");

// /Script/MovieSceneTracks.EventPayload
// Kind: ScriptStruct; super: none
struct FEventPayload
{
public:
    FName EventName; // 0x0000 (Size: 0x8, Type: NameProperty)
    std::uint8_t Parameters[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FEventPayload, EventName) == 0, "Offset mismatch for FEventPayload::EventName");
static_assert(offsetof(FEventPayload, Parameters) == 8, "Offset mismatch for FEventPayload::Parameters");

// /Script/MovieSceneTracks.LevelVisibilityComponentData
// Kind: ScriptStruct; super: none
struct FLevelVisibilityComponentData
{
public:
    void* Section; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FLevelVisibilityComponentData, Section) == 0, "Offset mismatch for FLevelVisibilityComponentData::Section");

// /Script/MovieSceneTracks.MovieScene3DLocationKeyStruct
// Kind: ScriptStruct; super: MovieSceneKeyStruct
struct FMovieScene3DLocationKeyStruct
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Location[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t time[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMovieScene3DLocationKeyStruct, Location) == 8, "Offset mismatch for FMovieScene3DLocationKeyStruct::Location");
static_assert(offsetof(FMovieScene3DLocationKeyStruct, time) == 32, "Offset mismatch for FMovieScene3DLocationKeyStruct::time");

// /Script/MovieSceneTracks.MovieScene3DPathSectionTemplate
// Kind: ScriptStruct; super: MovieSceneEvalTemplate
struct FMovieScene3DPathSectionTemplate
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t PathBindingID[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    std::uint8_t TimingCurve[0xD0]; // 0x0038 (Size: 0xD0, Type: StructProperty)
    std::uint8_t FrontAxisEnum; // 0x0108 (Size: 0x1, Type: EnumProperty)
    std::uint8_t UpAxisEnum; // 0x0109 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x2]; // 0x010A
    std::uint8_t bFollow; // 0x010C (Size: 0x1, Type: BoolProperty)
    // 0x010C BoolProperty bForceUpright (shared storage)
    // 0x010C BoolProperty bReverse (shared storage)
};

static_assert(offsetof(FMovieScene3DPathSectionTemplate, PathBindingID) == 32, "Offset mismatch for FMovieScene3DPathSectionTemplate::PathBindingID");
static_assert(offsetof(FMovieScene3DPathSectionTemplate, TimingCurve) == 56, "Offset mismatch for FMovieScene3DPathSectionTemplate::TimingCurve");
static_assert(offsetof(FMovieScene3DPathSectionTemplate, FrontAxisEnum) == 264, "Offset mismatch for FMovieScene3DPathSectionTemplate::FrontAxisEnum");
static_assert(offsetof(FMovieScene3DPathSectionTemplate, UpAxisEnum) == 265, "Offset mismatch for FMovieScene3DPathSectionTemplate::UpAxisEnum");
static_assert(offsetof(FMovieScene3DPathSectionTemplate, bFollow) == 268, "Offset mismatch for FMovieScene3DPathSectionTemplate::bFollow");

// /Script/MovieSceneTracks.MovieScene3DRotationKeyStruct
// Kind: ScriptStruct; super: MovieSceneKeyStruct
struct FMovieScene3DRotationKeyStruct
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Rotation[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t time[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMovieScene3DRotationKeyStruct, Rotation) == 8, "Offset mismatch for FMovieScene3DRotationKeyStruct::Rotation");
static_assert(offsetof(FMovieScene3DRotationKeyStruct, time) == 32, "Offset mismatch for FMovieScene3DRotationKeyStruct::time");

// /Script/MovieSceneTracks.MovieScene3DScaleKeyStruct
// Kind: ScriptStruct; super: MovieSceneKeyStruct
struct FMovieScene3DScaleKeyStruct
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Scale[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t time[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMovieScene3DScaleKeyStruct, Scale) == 8, "Offset mismatch for FMovieScene3DScaleKeyStruct::Scale");
static_assert(offsetof(FMovieScene3DScaleKeyStruct, time) == 32, "Offset mismatch for FMovieScene3DScaleKeyStruct::time");

// /Script/MovieSceneTracks.MovieScene3DTransformKeyStruct
// Kind: ScriptStruct; super: MovieSceneKeyStruct
struct FMovieScene3DTransformKeyStruct
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Location[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t Rotation[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    std::uint8_t Scale[0x18]; // 0x0038 (Size: 0x18, Type: StructProperty)
    std::uint8_t time[0x1]; // 0x0050 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMovieScene3DTransformKeyStruct, Location) == 8, "Offset mismatch for FMovieScene3DTransformKeyStruct::Location");
static_assert(offsetof(FMovieScene3DTransformKeyStruct, Rotation) == 32, "Offset mismatch for FMovieScene3DTransformKeyStruct::Rotation");
static_assert(offsetof(FMovieScene3DTransformKeyStruct, Scale) == 56, "Offset mismatch for FMovieScene3DTransformKeyStruct::Scale");
static_assert(offsetof(FMovieScene3DTransformKeyStruct, time) == 80, "Offset mismatch for FMovieScene3DTransformKeyStruct::time");

// /Script/MovieSceneTracks.MovieSceneActorReferenceChannel
// Kind: ScriptStruct; super: MovieSceneChannel
struct FMovieSceneActorReferenceChannel
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    TArray<void*> KeyTimes; // 0x0050 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t DefaultValue[0x20]; // 0x0060 (Size: 0x20, Type: StructProperty)
    TArray<void*> KeyValues; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t KeyHandles[0x1]; // 0x0090 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMovieSceneActorReferenceChannel, KeyTimes) == 80, "Offset mismatch for FMovieSceneActorReferenceChannel::KeyTimes");
static_assert(offsetof(FMovieSceneActorReferenceChannel, DefaultValue) == 96, "Offset mismatch for FMovieSceneActorReferenceChannel::DefaultValue");
static_assert(offsetof(FMovieSceneActorReferenceChannel, KeyValues) == 128, "Offset mismatch for FMovieSceneActorReferenceChannel::KeyValues");
static_assert(offsetof(FMovieSceneActorReferenceChannel, KeyHandles) == 144, "Offset mismatch for FMovieSceneActorReferenceChannel::KeyHandles");

// /Script/MovieSceneTracks.MovieSceneActorReferenceKey
// Kind: ScriptStruct; super: none
struct FMovieSceneActorReferenceKey
{
public:
    std::uint8_t Object[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t ComponentName[0x4]; // 0x0018 (Size: 0x4, Type: NameProperty)
    FName SocketName; // 0x001C (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FMovieSceneActorReferenceKey, Object) == 0, "Offset mismatch for FMovieSceneActorReferenceKey::Object");
static_assert(offsetof(FMovieSceneActorReferenceKey, ComponentName) == 24, "Offset mismatch for FMovieSceneActorReferenceKey::ComponentName");
static_assert(offsetof(FMovieSceneActorReferenceKey, SocketName) == 28, "Offset mismatch for FMovieSceneActorReferenceKey::SocketName");

// /Script/MovieSceneTracks.MovieSceneAudioComponentData
// Kind: ScriptStruct; super: none
struct FMovieSceneAudioComponentData
{
public:
    void* Section; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FMovieSceneAudioComponentData, Section) == 0, "Offset mismatch for FMovieSceneAudioComponentData::Section");

// /Script/MovieSceneTracks.MovieSceneAudioInputData
// Kind: ScriptStruct; super: none
struct FMovieSceneAudioInputData
{
public:
    FName FloatInputs; // 0x0000 (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0000[0x1C]; // 0x0008
    std::uint8_t StringInput[0x4]; // 0x0024 (Size: 0x4, Type: NameProperty)
    std::uint8_t BoolInput[0x4]; // 0x0028 (Size: 0x4, Type: NameProperty)
    FName IntInput; // 0x002C (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FMovieSceneAudioInputData, FloatInputs) == 0, "Offset mismatch for FMovieSceneAudioInputData::FloatInputs");
static_assert(offsetof(FMovieSceneAudioInputData, StringInput) == 36, "Offset mismatch for FMovieSceneAudioInputData::StringInput");
static_assert(offsetof(FMovieSceneAudioInputData, BoolInput) == 40, "Offset mismatch for FMovieSceneAudioInputData::BoolInput");
static_assert(offsetof(FMovieSceneAudioInputData, IntInput) == 44, "Offset mismatch for FMovieSceneAudioInputData::IntInput");

// /Script/MovieSceneTracks.MovieSceneBaseCacheParams
// Kind: ScriptStruct; super: none
struct FMovieSceneBaseCacheParams
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t FirstLoopStartFrameOffset[0x4]; // 0x0008 (Size: 0x4, Type: StructProperty)
    std::uint8_t StartFrameOffset[0x4]; // 0x000C (Size: 0x4, Type: StructProperty)
    std::uint8_t EndFrameOffset[0x4]; // 0x0010 (Size: 0x4, Type: StructProperty)
    float PlayRate; // 0x0014 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bReverse; // 0x0018 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FMovieSceneBaseCacheParams, FirstLoopStartFrameOffset) == 8, "Offset mismatch for FMovieSceneBaseCacheParams::FirstLoopStartFrameOffset");
static_assert(offsetof(FMovieSceneBaseCacheParams, StartFrameOffset) == 12, "Offset mismatch for FMovieSceneBaseCacheParams::StartFrameOffset");
static_assert(offsetof(FMovieSceneBaseCacheParams, EndFrameOffset) == 16, "Offset mismatch for FMovieSceneBaseCacheParams::EndFrameOffset");
static_assert(offsetof(FMovieSceneBaseCacheParams, PlayRate) == 20, "Offset mismatch for FMovieSceneBaseCacheParams::PlayRate");
static_assert(offsetof(FMovieSceneBaseCacheParams, bReverse) == 24, "Offset mismatch for FMovieSceneBaseCacheParams::bReverse");

// /Script/MovieSceneTracks.MovieSceneBaseCacheSectionTemplateParameters
// Kind: ScriptStruct; super: none
struct FMovieSceneBaseCacheSectionTemplateParameters
{
public:
    std::uint8_t SectionStartTime[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::uint8_t SectionEndTime[0x1]; // 0x0004 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMovieSceneBaseCacheSectionTemplateParameters, SectionStartTime) == 0, "Offset mismatch for FMovieSceneBaseCacheSectionTemplateParameters::SectionStartTime");
static_assert(offsetof(FMovieSceneBaseCacheSectionTemplateParameters, SectionEndTime) == 4, "Offset mismatch for FMovieSceneBaseCacheSectionTemplateParameters::SectionEndTime");

// /Script/MovieSceneTracks.MovieSceneBoolPropertySectionTemplate
// Kind: ScriptStruct; super: MovieScenePropertySectionTemplate
struct FMovieSceneBoolPropertySectionTemplate
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t BoolCurve[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMovieSceneBoolPropertySectionTemplate, BoolCurve) == 56, "Offset mismatch for FMovieSceneBoolPropertySectionTemplate::BoolCurve");

// /Script/MovieSceneTracks.MovieSceneCVarOverrides
// Kind: ScriptStruct; super: none
struct FMovieSceneCVarOverrides
{
public:
    TMap<void*, void*> ValuesByCVar; // 0x0000 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FMovieSceneCVarOverrides, ValuesByCVar) == 0, "Offset mismatch for FMovieSceneCVarOverrides::ValuesByCVar");

// /Script/MovieSceneTracks.MovieSceneCameraShakeComponentData
// Kind: ScriptStruct; super: none
struct FMovieSceneCameraShakeComponentData
{
public:
    std::uint8_t SectionData[0x28]; // 0x0000 (Size: 0x28, Type: StructProperty)
    std::uint8_t SectionStartTime[0x4]; // 0x0028 (Size: 0x4, Type: StructProperty)
    std::uint8_t SectionEndTime[0x4]; // 0x002C (Size: 0x4, Type: StructProperty)
    std::uint8_t SectionSignature[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMovieSceneCameraShakeComponentData, SectionData) == 0, "Offset mismatch for FMovieSceneCameraShakeComponentData::SectionData");
static_assert(offsetof(FMovieSceneCameraShakeComponentData, SectionStartTime) == 40, "Offset mismatch for FMovieSceneCameraShakeComponentData::SectionStartTime");
static_assert(offsetof(FMovieSceneCameraShakeComponentData, SectionEndTime) == 44, "Offset mismatch for FMovieSceneCameraShakeComponentData::SectionEndTime");
static_assert(offsetof(FMovieSceneCameraShakeComponentData, SectionSignature) == 48, "Offset mismatch for FMovieSceneCameraShakeComponentData::SectionSignature");

// /Script/MovieSceneTracks.MovieSceneCameraShakeInstanceData
// Kind: ScriptStruct; super: none
struct FMovieSceneCameraShakeInstanceData
{
public:
    void* ShakeInstance; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t SectionSignature[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t bManagedByPreviewer; // 0x0018 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FMovieSceneCameraShakeInstanceData, ShakeInstance) == 0, "Offset mismatch for FMovieSceneCameraShakeInstanceData::ShakeInstance");
static_assert(offsetof(FMovieSceneCameraShakeInstanceData, SectionSignature) == 8, "Offset mismatch for FMovieSceneCameraShakeInstanceData::SectionSignature");
static_assert(offsetof(FMovieSceneCameraShakeInstanceData, bManagedByPreviewer) == 24, "Offset mismatch for FMovieSceneCameraShakeInstanceData::bManagedByPreviewer");

// /Script/MovieSceneTracks.MovieSceneCameraShakeSectionData
// Kind: ScriptStruct; super: none
struct FMovieSceneCameraShakeSectionData
{
public:
    void* ShakeClass; // 0x0000 (Size: 0x8, Type: ClassProperty)
    float PlayScale; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Playspace; // 0x000C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x000D
    std::uint8_t UserDefinedPlaySpace[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMovieSceneCameraShakeSectionData, ShakeClass) == 0, "Offset mismatch for FMovieSceneCameraShakeSectionData::ShakeClass");
static_assert(offsetof(FMovieSceneCameraShakeSectionData, PlayScale) == 8, "Offset mismatch for FMovieSceneCameraShakeSectionData::PlayScale");
static_assert(offsetof(FMovieSceneCameraShakeSectionData, Playspace) == 12, "Offset mismatch for FMovieSceneCameraShakeSectionData::Playspace");
static_assert(offsetof(FMovieSceneCameraShakeSectionData, UserDefinedPlaySpace) == 16, "Offset mismatch for FMovieSceneCameraShakeSectionData::UserDefinedPlaySpace");

// /Script/MovieSceneTracks.MovieSceneCameraShakeSourceTrigger
// Kind: ScriptStruct; super: none
struct FMovieSceneCameraShakeSourceTrigger
{
public:
    void* ShakeClass; // 0x0000 (Size: 0x8, Type: ClassProperty)
    float PlayScale; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Playspace; // 0x000C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x000D
    std::uint8_t UserDefinedPlaySpace[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMovieSceneCameraShakeSourceTrigger, ShakeClass) == 0, "Offset mismatch for FMovieSceneCameraShakeSourceTrigger::ShakeClass");
static_assert(offsetof(FMovieSceneCameraShakeSourceTrigger, PlayScale) == 8, "Offset mismatch for FMovieSceneCameraShakeSourceTrigger::PlayScale");
static_assert(offsetof(FMovieSceneCameraShakeSourceTrigger, Playspace) == 12, "Offset mismatch for FMovieSceneCameraShakeSourceTrigger::Playspace");
static_assert(offsetof(FMovieSceneCameraShakeSourceTrigger, UserDefinedPlaySpace) == 16, "Offset mismatch for FMovieSceneCameraShakeSourceTrigger::UserDefinedPlaySpace");

// /Script/MovieSceneTracks.MovieSceneCameraShakeSourceTriggerChannel
// Kind: ScriptStruct; super: MovieSceneChannel
struct FMovieSceneCameraShakeSourceTriggerChannel
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    TArray<void*> KeyTimes; // 0x0050 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> KeyValues; // 0x0060 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t KeyHandles[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMovieSceneCameraShakeSourceTriggerChannel, KeyTimes) == 80, "Offset mismatch for FMovieSceneCameraShakeSourceTriggerChannel::KeyTimes");
static_assert(offsetof(FMovieSceneCameraShakeSourceTriggerChannel, KeyValues) == 96, "Offset mismatch for FMovieSceneCameraShakeSourceTriggerChannel::KeyValues");
static_assert(offsetof(FMovieSceneCameraShakeSourceTriggerChannel, KeyHandles) == 112, "Offset mismatch for FMovieSceneCameraShakeSourceTriggerChannel::KeyHandles");

// /Script/MovieSceneTracks.MovieSceneColorKeyStruct
// Kind: ScriptStruct; super: MovieSceneKeyStruct
struct FMovieSceneColorKeyStruct
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Color[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t time[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMovieSceneColorKeyStruct, Color) == 8, "Offset mismatch for FMovieSceneColorKeyStruct::Color");
static_assert(offsetof(FMovieSceneColorKeyStruct, time) == 24, "Offset mismatch for FMovieSceneColorKeyStruct::time");

// /Script/MovieSceneTracks.MovieSceneConsoleVariableCollection
// Kind: ScriptStruct; super: none
struct FMovieSceneConsoleVariableCollection
{
public:
    TScriptInterface<void> Interface; // 0x0000 (Size: 0x10, Type: InterfaceProperty)
    std::uint8_t bOnlyIncludeChecked; // 0x0010 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FMovieSceneConsoleVariableCollection, Interface) == 0, "Offset mismatch for FMovieSceneConsoleVariableCollection::Interface");
static_assert(offsetof(FMovieSceneConsoleVariableCollection, bOnlyIncludeChecked) == 16, "Offset mismatch for FMovieSceneConsoleVariableCollection::bOnlyIncludeChecked");

// /Script/MovieSceneTracks.MovieSceneDataLayerComponentData
// Kind: ScriptStruct; super: none
struct FMovieSceneDataLayerComponentData
{
public:
    void* Section; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FMovieSceneDataLayerComponentData, Section) == 0, "Offset mismatch for FMovieSceneDataLayerComponentData::Section");

// /Script/MovieSceneTracks.MovieSceneDirectorBlueprintConditionData
// Kind: ScriptStruct; super: none
struct FMovieSceneDirectorBlueprintConditionData
{
public:
    void* Function; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ConditionContextProperty[0x1]; // 0x0008 (Size: 0x1, Type: FieldPathProperty)
};

static_assert(offsetof(FMovieSceneDirectorBlueprintConditionData, Function) == 0, "Offset mismatch for FMovieSceneDirectorBlueprintConditionData::Function");
static_assert(offsetof(FMovieSceneDirectorBlueprintConditionData, ConditionContextProperty) == 8, "Offset mismatch for FMovieSceneDirectorBlueprintConditionData::ConditionContextProperty");

// /Script/MovieSceneTracks.MovieSceneDirectorBlueprintConditionPayloadVariable
// Kind: ScriptStruct; super: none
struct FMovieSceneDirectorBlueprintConditionPayloadVariable
{
public:
    std::uint8_t ObjectValue[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    FString Value; // 0x0018 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FMovieSceneDirectorBlueprintConditionPayloadVariable, ObjectValue) == 0, "Offset mismatch for FMovieSceneDirectorBlueprintConditionPayloadVariable::ObjectValue");
static_assert(offsetof(FMovieSceneDirectorBlueprintConditionPayloadVariable, Value) == 24, "Offset mismatch for FMovieSceneDirectorBlueprintConditionPayloadVariable::Value");

// /Script/MovieSceneTracks.MovieSceneDoublePerlinNoiseChannel
// Kind: ScriptStruct; super: MovieSceneChannel
struct FMovieSceneDoublePerlinNoiseChannel
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    std::uint8_t PerlinNoiseParams[0x1]; // 0x0050 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMovieSceneDoublePerlinNoiseChannel, PerlinNoiseParams) == 80, "Offset mismatch for FMovieSceneDoublePerlinNoiseChannel::PerlinNoiseParams");

// /Script/MovieSceneTracks.MovieSceneDoubleVectorKeyStructBase
// Kind: ScriptStruct; super: MovieSceneKeyStruct
struct FMovieSceneDoubleVectorKeyStructBase
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t time[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMovieSceneDoubleVectorKeyStructBase, time) == 8, "Offset mismatch for FMovieSceneDoubleVectorKeyStructBase::time");

// /Script/MovieSceneTracks.MovieSceneEvent
// Kind: ScriptStruct; super: none
struct FMovieSceneEvent
{
public:
    std::uint8_t Ptrs[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMovieSceneEvent, Ptrs) == 0, "Offset mismatch for FMovieSceneEvent::Ptrs");

// /Script/MovieSceneTracks.MovieSceneEventChannel
// Kind: ScriptStruct; super: MovieSceneChannel
struct FMovieSceneEventChannel
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    TArray<void*> KeyTimes; // 0x0050 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> KeyValues; // 0x0060 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t KeyHandles[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMovieSceneEventChannel, KeyTimes) == 80, "Offset mismatch for FMovieSceneEventChannel::KeyTimes");
static_assert(offsetof(FMovieSceneEventChannel, KeyValues) == 96, "Offset mismatch for FMovieSceneEventChannel::KeyValues");
static_assert(offsetof(FMovieSceneEventChannel, KeyHandles) == 112, "Offset mismatch for FMovieSceneEventChannel::KeyHandles");

// /Script/MovieSceneTracks.MovieSceneEventParameters
// Kind: ScriptStruct; super: none
struct FMovieSceneEventParameters
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MovieSceneTracks.MovieSceneEventPayloadVariable
// Kind: ScriptStruct; super: none
struct FMovieSceneEventPayloadVariable
{
public:
    std::uint8_t ObjectValue[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    FString Value; // 0x0018 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FMovieSceneEventPayloadVariable, ObjectValue) == 0, "Offset mismatch for FMovieSceneEventPayloadVariable::ObjectValue");
static_assert(offsetof(FMovieSceneEventPayloadVariable, Value) == 24, "Offset mismatch for FMovieSceneEventPayloadVariable::Value");

// /Script/MovieSceneTracks.MovieSceneEventPtrs
// Kind: ScriptStruct; super: none
struct FMovieSceneEventPtrs
{
public:
    void* Function; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t BoundObjectProperty[0x1]; // 0x0008 (Size: 0x1, Type: FieldPathProperty)
};

static_assert(offsetof(FMovieSceneEventPtrs, Function) == 0, "Offset mismatch for FMovieSceneEventPtrs::Function");
static_assert(offsetof(FMovieSceneEventPtrs, BoundObjectProperty) == 8, "Offset mismatch for FMovieSceneEventPtrs::BoundObjectProperty");

// /Script/MovieSceneTracks.MovieSceneEventSectionData
// Kind: ScriptStruct; super: MovieSceneChannel
struct FMovieSceneEventSectionData
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    TArray<void*> Times; // 0x0050 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> KeyValues; // 0x0060 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t KeyHandles[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMovieSceneEventSectionData, Times) == 80, "Offset mismatch for FMovieSceneEventSectionData::Times");
static_assert(offsetof(FMovieSceneEventSectionData, KeyValues) == 96, "Offset mismatch for FMovieSceneEventSectionData::KeyValues");
static_assert(offsetof(FMovieSceneEventSectionData, KeyHandles) == 112, "Offset mismatch for FMovieSceneEventSectionData::KeyHandles");

// /Script/MovieSceneTracks.MovieSceneEventSectionTemplate
// Kind: ScriptStruct; super: MovieSceneEvalTemplate
struct FMovieSceneEventSectionTemplate
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t EventData[0xB8]; // 0x0020 (Size: 0xB8, Type: StructProperty)
    std::uint8_t bFireEventsWhenBackwards; // 0x00D8 (Size: 0x1, Type: BoolProperty)
    // 0x00D8 BoolProperty bFireEventsWhenForwards (shared storage)
};

static_assert(offsetof(FMovieSceneEventSectionTemplate, EventData) == 32, "Offset mismatch for FMovieSceneEventSectionTemplate::EventData");
static_assert(offsetof(FMovieSceneEventSectionTemplate, bFireEventsWhenBackwards) == 216, "Offset mismatch for FMovieSceneEventSectionTemplate::bFireEventsWhenBackwards");

// /Script/MovieSceneTracks.MovieSceneEventTriggerData
// Kind: ScriptStruct; super: none
struct FMovieSceneEventTriggerData
{
public:
    std::uint8_t Ptrs[0x28]; // 0x0000 (Size: 0x28, Type: StructProperty)
    std::uint8_t ObjectBindingID[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMovieSceneEventTriggerData, Ptrs) == 0, "Offset mismatch for FMovieSceneEventTriggerData::Ptrs");
static_assert(offsetof(FMovieSceneEventTriggerData, ObjectBindingID) == 40, "Offset mismatch for FMovieSceneEventTriggerData::ObjectBindingID");

// /Script/MovieSceneTracks.MovieSceneFloatPerlinNoiseChannel
// Kind: ScriptStruct; super: MovieSceneChannel
struct FMovieSceneFloatPerlinNoiseChannel
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    std::uint8_t PerlinNoiseParams[0x1]; // 0x0050 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMovieSceneFloatPerlinNoiseChannel, PerlinNoiseParams) == 80, "Offset mismatch for FMovieSceneFloatPerlinNoiseChannel::PerlinNoiseParams");

// /Script/MovieSceneTracks.MovieSceneFloatVectorKeyStructBase
// Kind: ScriptStruct; super: MovieSceneKeyStruct
struct FMovieSceneFloatVectorKeyStructBase
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t time[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMovieSceneFloatVectorKeyStructBase, time) == 8, "Offset mismatch for FMovieSceneFloatVectorKeyStructBase::time");

// /Script/MovieSceneTracks.MovieSceneMixedAnimationTarget
// Kind: ScriptStruct; super: none
struct FMovieSceneMixedAnimationTarget
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MovieSceneTracks.MovieSceneParameterSectionTemplate
// Kind: ScriptStruct; super: MovieSceneEvalTemplate
struct FMovieSceneParameterSectionTemplate
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    TArray<void*> Scalars; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Bools; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Vector2Ds; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Vectors; // 0x0050 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Colors; // 0x0060 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Transforms; // 0x0070 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FMovieSceneParameterSectionTemplate, Scalars) == 32, "Offset mismatch for FMovieSceneParameterSectionTemplate::Scalars");
static_assert(offsetof(FMovieSceneParameterSectionTemplate, Bools) == 48, "Offset mismatch for FMovieSceneParameterSectionTemplate::Bools");
static_assert(offsetof(FMovieSceneParameterSectionTemplate, Vector2Ds) == 64, "Offset mismatch for FMovieSceneParameterSectionTemplate::Vector2Ds");
static_assert(offsetof(FMovieSceneParameterSectionTemplate, Vectors) == 80, "Offset mismatch for FMovieSceneParameterSectionTemplate::Vectors");
static_assert(offsetof(FMovieSceneParameterSectionTemplate, Colors) == 96, "Offset mismatch for FMovieSceneParameterSectionTemplate::Colors");
static_assert(offsetof(FMovieSceneParameterSectionTemplate, Transforms) == 112, "Offset mismatch for FMovieSceneParameterSectionTemplate::Transforms");

// /Script/MovieSceneTracks.MovieSceneParticleChannel
// Kind: ScriptStruct; super: MovieSceneByteChannel
struct FMovieSceneParticleChannel
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    std::uint8_t PreInfinityExtrap; // 0x0050 (Size: 0x1, Type: ByteProperty)
    std::uint8_t PostInfinityExtrap; // 0x0051 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x6]; // 0x0052
    TArray<void*> Times; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t DefaultValue; // 0x0068 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bHasDefaultValue; // 0x0069 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x6]; // 0x006A
    TArray<void*> Values; // 0x0070 (Size: 0x10, Type: ArrayProperty)
    void* Enum; // 0x0080 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t KeyHandles[0x1]; // 0x0088 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMovieSceneParticleChannel, PreInfinityExtrap) == 80, "Offset mismatch for FMovieSceneParticleChannel::PreInfinityExtrap");
static_assert(offsetof(FMovieSceneParticleChannel, PostInfinityExtrap) == 81, "Offset mismatch for FMovieSceneParticleChannel::PostInfinityExtrap");
static_assert(offsetof(FMovieSceneParticleChannel, Times) == 88, "Offset mismatch for FMovieSceneParticleChannel::Times");
static_assert(offsetof(FMovieSceneParticleChannel, DefaultValue) == 104, "Offset mismatch for FMovieSceneParticleChannel::DefaultValue");
static_assert(offsetof(FMovieSceneParticleChannel, bHasDefaultValue) == 105, "Offset mismatch for FMovieSceneParticleChannel::bHasDefaultValue");
static_assert(offsetof(FMovieSceneParticleChannel, Values) == 112, "Offset mismatch for FMovieSceneParticleChannel::Values");
static_assert(offsetof(FMovieSceneParticleChannel, Enum) == 128, "Offset mismatch for FMovieSceneParticleChannel::Enum");
static_assert(offsetof(FMovieSceneParticleChannel, KeyHandles) == 136, "Offset mismatch for FMovieSceneParticleChannel::KeyHandles");

// /Script/MovieSceneTracks.MovieSceneParticleParameterSectionTemplate
// Kind: ScriptStruct; super: MovieSceneParameterSectionTemplate
struct FMovieSceneParticleParameterSectionTemplate
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    TArray<void*> Scalars; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Bools; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Vector2Ds; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Vectors; // 0x0050 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Colors; // 0x0060 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Transforms; // 0x0070 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FMovieSceneParticleParameterSectionTemplate, Scalars) == 32, "Offset mismatch for FMovieSceneParticleParameterSectionTemplate::Scalars");
static_assert(offsetof(FMovieSceneParticleParameterSectionTemplate, Bools) == 48, "Offset mismatch for FMovieSceneParticleParameterSectionTemplate::Bools");
static_assert(offsetof(FMovieSceneParticleParameterSectionTemplate, Vector2Ds) == 64, "Offset mismatch for FMovieSceneParticleParameterSectionTemplate::Vector2Ds");
static_assert(offsetof(FMovieSceneParticleParameterSectionTemplate, Vectors) == 80, "Offset mismatch for FMovieSceneParticleParameterSectionTemplate::Vectors");
static_assert(offsetof(FMovieSceneParticleParameterSectionTemplate, Colors) == 96, "Offset mismatch for FMovieSceneParticleParameterSectionTemplate::Colors");
static_assert(offsetof(FMovieSceneParticleParameterSectionTemplate, Transforms) == 112, "Offset mismatch for FMovieSceneParticleParameterSectionTemplate::Transforms");

// /Script/MovieSceneTracks.MovieSceneParticleSectionTemplate
// Kind: ScriptStruct; super: MovieSceneEvalTemplate
struct FMovieSceneParticleSectionTemplate
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t ParticleKeys[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMovieSceneParticleSectionTemplate, ParticleKeys) == 32, "Offset mismatch for FMovieSceneParticleSectionTemplate::ParticleKeys");

// /Script/MovieSceneTracks.MovieScenePreAnimatedMaterialParameters
// Kind: ScriptStruct; super: none
struct FMovieScenePreAnimatedMaterialParameters
{
public:
    void* PreviousMaterial; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    TSoftObjectPtr<void> SoftPreviousMaterial; // 0x0008 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FMovieScenePreAnimatedMaterialParameters, PreviousMaterial) == 0, "Offset mismatch for FMovieScenePreAnimatedMaterialParameters::PreviousMaterial");
static_assert(offsetof(FMovieScenePreAnimatedMaterialParameters, SoftPreviousMaterial) == 8, "Offset mismatch for FMovieScenePreAnimatedMaterialParameters::SoftPreviousMaterial");

// /Script/MovieSceneTracks.MovieSceneSkeletalAnimRootMotionTrackParams
// Kind: ScriptStruct; super: none
struct FMovieSceneSkeletalAnimRootMotionTrackParams
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MovieSceneTracks.MovieSceneSkeletalAnimationComponentData
// Kind: ScriptStruct; super: none
struct FMovieSceneSkeletalAnimationComponentData
{
public:
    void* Section; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FMovieSceneSkeletalAnimationComponentData, Section) == 0, "Offset mismatch for FMovieSceneSkeletalAnimationComponentData::Section");

// /Script/MovieSceneTracks.MovieSceneSkeletalAnimationParams
// Kind: ScriptStruct; super: none
struct FMovieSceneSkeletalAnimationParams
{
public:
    void* Animation; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t FirstLoopStartFrameOffset[0x4]; // 0x0008 (Size: 0x4, Type: StructProperty)
    std::uint8_t StartFrameOffset[0x4]; // 0x000C (Size: 0x4, Type: StructProperty)
    std::uint8_t EndFrameOffset[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::uint8_t PlayRate[0x8]; // 0x0018 (Size: 0x8, Type: StructProperty)
    std::uint8_t bReverse; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0021
    std::uint8_t SlotName[0x4]; // 0x0024 (Size: 0x4, Type: NameProperty)
    void* MirrorDataTable; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Weight[0xD0]; // 0x0030 (Size: 0xD0, Type: StructProperty)
    std::uint8_t bSkipAnimNotifiers; // 0x0100 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bForceCustomMode; // 0x0101 (Size: 0x1, Type: BoolProperty)
    std::uint8_t SwapRootBone; // 0x0102 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bLinearPlaybackWhenScaled; // 0x0103 (Size: 0x1, Type: BoolProperty)
    float StartOffset; // 0x0104 (Size: 0x4, Type: FloatProperty)
    float EndOffset; // 0x0108 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FMovieSceneSkeletalAnimationParams, Animation) == 0, "Offset mismatch for FMovieSceneSkeletalAnimationParams::Animation");
static_assert(offsetof(FMovieSceneSkeletalAnimationParams, FirstLoopStartFrameOffset) == 8, "Offset mismatch for FMovieSceneSkeletalAnimationParams::FirstLoopStartFrameOffset");
static_assert(offsetof(FMovieSceneSkeletalAnimationParams, StartFrameOffset) == 12, "Offset mismatch for FMovieSceneSkeletalAnimationParams::StartFrameOffset");
static_assert(offsetof(FMovieSceneSkeletalAnimationParams, EndFrameOffset) == 16, "Offset mismatch for FMovieSceneSkeletalAnimationParams::EndFrameOffset");
static_assert(offsetof(FMovieSceneSkeletalAnimationParams, PlayRate) == 24, "Offset mismatch for FMovieSceneSkeletalAnimationParams::PlayRate");
static_assert(offsetof(FMovieSceneSkeletalAnimationParams, bReverse) == 32, "Offset mismatch for FMovieSceneSkeletalAnimationParams::bReverse");
static_assert(offsetof(FMovieSceneSkeletalAnimationParams, SlotName) == 36, "Offset mismatch for FMovieSceneSkeletalAnimationParams::SlotName");
static_assert(offsetof(FMovieSceneSkeletalAnimationParams, MirrorDataTable) == 40, "Offset mismatch for FMovieSceneSkeletalAnimationParams::MirrorDataTable");
static_assert(offsetof(FMovieSceneSkeletalAnimationParams, Weight) == 48, "Offset mismatch for FMovieSceneSkeletalAnimationParams::Weight");
static_assert(offsetof(FMovieSceneSkeletalAnimationParams, bSkipAnimNotifiers) == 256, "Offset mismatch for FMovieSceneSkeletalAnimationParams::bSkipAnimNotifiers");
static_assert(offsetof(FMovieSceneSkeletalAnimationParams, bForceCustomMode) == 257, "Offset mismatch for FMovieSceneSkeletalAnimationParams::bForceCustomMode");
static_assert(offsetof(FMovieSceneSkeletalAnimationParams, SwapRootBone) == 258, "Offset mismatch for FMovieSceneSkeletalAnimationParams::SwapRootBone");
static_assert(offsetof(FMovieSceneSkeletalAnimationParams, bLinearPlaybackWhenScaled) == 259, "Offset mismatch for FMovieSceneSkeletalAnimationParams::bLinearPlaybackWhenScaled");
static_assert(offsetof(FMovieSceneSkeletalAnimationParams, StartOffset) == 260, "Offset mismatch for FMovieSceneSkeletalAnimationParams::StartOffset");
static_assert(offsetof(FMovieSceneSkeletalAnimationParams, EndOffset) == 264, "Offset mismatch for FMovieSceneSkeletalAnimationParams::EndOffset");

// /Script/MovieSceneTracks.MovieSceneStringChannel
// Kind: ScriptStruct; super: MovieSceneChannel
struct FMovieSceneStringChannel
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    TArray<void*> Times; // 0x0050 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Values; // 0x0060 (Size: 0x10, Type: ArrayProperty)
    FString DefaultValue; // 0x0070 (Size: 0x10, Type: StrProperty)
    std::uint8_t bHasDefaultValue; // 0x0080 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0081
    std::uint8_t KeyHandles[0x1]; // 0x0088 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMovieSceneStringChannel, Times) == 80, "Offset mismatch for FMovieSceneStringChannel::Times");
static_assert(offsetof(FMovieSceneStringChannel, Values) == 96, "Offset mismatch for FMovieSceneStringChannel::Values");
static_assert(offsetof(FMovieSceneStringChannel, DefaultValue) == 112, "Offset mismatch for FMovieSceneStringChannel::DefaultValue");
static_assert(offsetof(FMovieSceneStringChannel, bHasDefaultValue) == 128, "Offset mismatch for FMovieSceneStringChannel::bHasDefaultValue");
static_assert(offsetof(FMovieSceneStringChannel, KeyHandles) == 136, "Offset mismatch for FMovieSceneStringChannel::KeyHandles");

// /Script/MovieSceneTracks.MovieSceneTextChannel
// Kind: ScriptStruct; super: MovieSceneChannel
struct FMovieSceneTextChannel
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    TArray<void*> Times; // 0x0050 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Values; // 0x0060 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t DefaultValue[0x10]; // 0x0070 (Size: 0x10, Type: TextProperty)
    std::uint8_t bHasDefaultValue; // 0x0080 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0081
    std::uint8_t KeyHandles[0x1]; // 0x0088 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMovieSceneTextChannel, Times) == 80, "Offset mismatch for FMovieSceneTextChannel::Times");
static_assert(offsetof(FMovieSceneTextChannel, Values) == 96, "Offset mismatch for FMovieSceneTextChannel::Values");
static_assert(offsetof(FMovieSceneTextChannel, DefaultValue) == 112, "Offset mismatch for FMovieSceneTextChannel::DefaultValue");
static_assert(offsetof(FMovieSceneTextChannel, bHasDefaultValue) == 128, "Offset mismatch for FMovieSceneTextChannel::bHasDefaultValue");
static_assert(offsetof(FMovieSceneTextChannel, KeyHandles) == 136, "Offset mismatch for FMovieSceneTextChannel::KeyHandles");

// /Script/MovieSceneTracks.MovieSceneTransformMask
// Kind: ScriptStruct; super: none
struct FMovieSceneTransformMask
{
public:
    std::uint32_t Mask; // 0x0000 (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(FMovieSceneTransformMask, Mask) == 0, "Offset mismatch for FMovieSceneTransformMask::Mask");

// /Script/MovieSceneTracks.MovieSceneVector2DKeyStruct
// Kind: ScriptStruct; super: MovieSceneDoubleVectorKeyStructBase
struct FMovieSceneVector2DKeyStruct
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Vector[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMovieSceneVector2DKeyStruct, Vector) == 40, "Offset mismatch for FMovieSceneVector2DKeyStruct::Vector");

// /Script/MovieSceneTracks.MovieSceneVector2fKeyStruct
// Kind: ScriptStruct; super: MovieSceneFloatVectorKeyStructBase
struct FMovieSceneVector2fKeyStruct
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Vector[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMovieSceneVector2fKeyStruct, Vector) == 40, "Offset mismatch for FMovieSceneVector2fKeyStruct::Vector");

// /Script/MovieSceneTracks.MovieSceneVector3dKeyStruct
// Kind: ScriptStruct; super: MovieSceneDoubleVectorKeyStructBase
struct FMovieSceneVector3dKeyStruct
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Vector[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMovieSceneVector3dKeyStruct, Vector) == 40, "Offset mismatch for FMovieSceneVector3dKeyStruct::Vector");

// /Script/MovieSceneTracks.MovieSceneVector3fKeyStruct
// Kind: ScriptStruct; super: MovieSceneFloatVectorKeyStructBase
struct FMovieSceneVector3fKeyStruct
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Vector[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMovieSceneVector3fKeyStruct, Vector) == 40, "Offset mismatch for FMovieSceneVector3fKeyStruct::Vector");

// /Script/MovieSceneTracks.MovieSceneVector4dKeyStruct
// Kind: ScriptStruct; super: MovieSceneDoubleVectorKeyStructBase
struct FMovieSceneVector4dKeyStruct
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t Vector[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMovieSceneVector4dKeyStruct, Vector) == 48, "Offset mismatch for FMovieSceneVector4dKeyStruct::Vector");

// /Script/MovieSceneTracks.MovieSceneVector4fKeyStruct
// Kind: ScriptStruct; super: MovieSceneFloatVectorKeyStructBase
struct FMovieSceneVector4fKeyStruct
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t Vector[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMovieSceneVector4fKeyStruct, Vector) == 48, "Offset mismatch for FMovieSceneVector4fKeyStruct::Vector");

// /Script/MovieSceneTracks.PerlinNoiseParams
// Kind: ScriptStruct; super: none
struct FPerlinNoiseParams
{
public:
    float Frequency; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    double Amplitude; // 0x0008 (Size: 0x8, Type: DoubleProperty)
    float Offset; // 0x0010 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FPerlinNoiseParams, Frequency) == 0, "Offset mismatch for FPerlinNoiseParams::Frequency");
static_assert(offsetof(FPerlinNoiseParams, Amplitude) == 8, "Offset mismatch for FPerlinNoiseParams::Amplitude");
static_assert(offsetof(FPerlinNoiseParams, Offset) == 16, "Offset mismatch for FPerlinNoiseParams::Offset");

// /Script/MovieSceneTracks.ScalarMaterialParameterInfoAndCurve
// Kind: ScriptStruct; super: none
struct FScalarMaterialParameterInfoAndCurve
{
public:
    std::uint8_t ParameterInfo[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t ParameterCurve[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FScalarMaterialParameterInfoAndCurve, ParameterInfo) == 0, "Offset mismatch for FScalarMaterialParameterInfoAndCurve::ParameterInfo");
static_assert(offsetof(FScalarMaterialParameterInfoAndCurve, ParameterCurve) == 16, "Offset mismatch for FScalarMaterialParameterInfoAndCurve::ParameterCurve");

// /Script/MovieSceneTracks.ScalarParameterNameAndCurve
// Kind: ScriptStruct; super: BaseParameterNameAndValue
struct FScalarParameterNameAndCurve
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t ParameterCurve[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FScalarParameterNameAndCurve, ParameterCurve) == 8, "Offset mismatch for FScalarParameterNameAndCurve::ParameterCurve");

// /Script/MovieSceneTracks.TransformParameterNameAndCurves
// Kind: ScriptStruct; super: BaseParameterNameAndValue
struct FTransformParameterNameAndCurves
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Translation[0x270]; // 0x0008 (Size: 0x270, Type: StructProperty)
    std::uint8_t Rotation[0x270]; // 0x0278 (Size: 0x270, Type: StructProperty)
    std::uint8_t Scale[0x1]; // 0x04E8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FTransformParameterNameAndCurves, Translation) == 8, "Offset mismatch for FTransformParameterNameAndCurves::Translation");
static_assert(offsetof(FTransformParameterNameAndCurves, Rotation) == 632, "Offset mismatch for FTransformParameterNameAndCurves::Rotation");
static_assert(offsetof(FTransformParameterNameAndCurves, Scale) == 1256, "Offset mismatch for FTransformParameterNameAndCurves::Scale");

// /Script/MovieSceneTracks.Vector2DParameterNameAndCurves
// Kind: ScriptStruct; super: BaseParameterNameAndValue
struct FVector2DParameterNameAndCurves
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t XCurve[0xD0]; // 0x0008 (Size: 0xD0, Type: StructProperty)
    std::uint8_t YCurve[0x1]; // 0x00D8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVector2DParameterNameAndCurves, XCurve) == 8, "Offset mismatch for FVector2DParameterNameAndCurves::XCurve");
static_assert(offsetof(FVector2DParameterNameAndCurves, YCurve) == 216, "Offset mismatch for FVector2DParameterNameAndCurves::YCurve");

// /Script/MovieSceneTracks.VectorParameterNameAndCurves
// Kind: ScriptStruct; super: BaseParameterNameAndValue
struct FVectorParameterNameAndCurves
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t XCurve[0xD0]; // 0x0008 (Size: 0xD0, Type: StructProperty)
    std::uint8_t YCurve[0xD0]; // 0x00D8 (Size: 0xD0, Type: StructProperty)
    std::uint8_t ZCurve[0x1]; // 0x01A8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVectorParameterNameAndCurves, XCurve) == 8, "Offset mismatch for FVectorParameterNameAndCurves::XCurve");
static_assert(offsetof(FVectorParameterNameAndCurves, YCurve) == 216, "Offset mismatch for FVectorParameterNameAndCurves::YCurve");
static_assert(offsetof(FVectorParameterNameAndCurves, ZCurve) == 424, "Offset mismatch for FVectorParameterNameAndCurves::ZCurve");

// /Script/MovieSceneTracks.ActorReferenceChannelEvaluatorSystem
// Kind: Class; super: MovieSceneEntitySystem
class UActorReferenceChannelEvaluatorSystem
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Linker; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UActorReferenceChannelEvaluatorSystem, Linker) == 40, "Offset mismatch for UActorReferenceChannelEvaluatorSystem::Linker");

// /Script/MovieSceneTracks.BoolChannelEvaluatorSystem
// Kind: Class; super: MovieSceneEntitySystem
class UBoolChannelEvaluatorSystem
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Linker; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UBoolChannelEvaluatorSystem, Linker) == 40, "Offset mismatch for UBoolChannelEvaluatorSystem::Linker");

// /Script/MovieSceneTracks.ByteChannelEvaluatorSystem
// Kind: Class; super: MovieSceneEntitySystem
class UByteChannelEvaluatorSystem
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Linker; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UByteChannelEvaluatorSystem, Linker) == 40, "Offset mismatch for UByteChannelEvaluatorSystem::Linker");

// /Script/MovieSceneTracks.DoubleChannelEvaluatorSystem
// Kind: Class; super: MovieSceneEntitySystem
class UDoubleChannelEvaluatorSystem
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Linker; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDoubleChannelEvaluatorSystem, Linker) == 40, "Offset mismatch for UDoubleChannelEvaluatorSystem::Linker");

// /Script/MovieSceneTracks.DoublePerlinNoiseChannelEvaluatorSystem
// Kind: Class; super: MovieSceneEntitySystem
class UDoublePerlinNoiseChannelEvaluatorSystem
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Linker; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDoublePerlinNoiseChannelEvaluatorSystem, Linker) == 40, "Offset mismatch for UDoublePerlinNoiseChannelEvaluatorSystem::Linker");

// /Script/MovieSceneTracks.FloatChannelEvaluatorSystem
// Kind: Class; super: MovieSceneEntitySystem
class UFloatChannelEvaluatorSystem
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Linker; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFloatChannelEvaluatorSystem, Linker) == 40, "Offset mismatch for UFloatChannelEvaluatorSystem::Linker");

// /Script/MovieSceneTracks.FloatPerlinNoiseChannelEvaluatorSystem
// Kind: Class; super: MovieSceneEntitySystem
class UFloatPerlinNoiseChannelEvaluatorSystem
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Linker; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFloatPerlinNoiseChannelEvaluatorSystem, Linker) == 40, "Offset mismatch for UFloatPerlinNoiseChannelEvaluatorSystem::Linker");

// /Script/MovieSceneTracks.IntegerChannelEvaluatorSystem
// Kind: Class; super: MovieSceneEntitySystem
class UIntegerChannelEvaluatorSystem
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Linker; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UIntegerChannelEvaluatorSystem, Linker) == 40, "Offset mismatch for UIntegerChannelEvaluatorSystem::Linker");

// /Script/MovieSceneTracks.MovieScene3DAttachSection
// Kind: Class; super: MovieScene3DConstraintSection
class UMovieScene3DAttachSection
{
public:
    std::uint8_t Pad_0000[0x170]; // 0x0000
    std::uint8_t AttachSocketName[0x4]; // 0x0170 (Size: 0x4, Type: NameProperty)
    std::uint8_t AttachComponentName[0x4]; // 0x0174 (Size: 0x4, Type: NameProperty)
    std::uint8_t AttachmentLocationRule; // 0x0178 (Size: 0x1, Type: EnumProperty)
    std::uint8_t AttachmentRotationRule; // 0x0179 (Size: 0x1, Type: EnumProperty)
    std::uint8_t AttachmentScaleRule; // 0x017A (Size: 0x1, Type: EnumProperty)
    std::uint8_t DetachmentLocationRule; // 0x017B (Size: 0x1, Type: EnumProperty)
    std::uint8_t DetachmentRotationRule; // 0x017C (Size: 0x1, Type: EnumProperty)
    std::uint8_t DetachmentScaleRule; // 0x017D (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UMovieScene3DAttachSection, AttachSocketName) == 368, "Offset mismatch for UMovieScene3DAttachSection::AttachSocketName");
static_assert(offsetof(UMovieScene3DAttachSection, AttachComponentName) == 372, "Offset mismatch for UMovieScene3DAttachSection::AttachComponentName");
static_assert(offsetof(UMovieScene3DAttachSection, AttachmentLocationRule) == 376, "Offset mismatch for UMovieScene3DAttachSection::AttachmentLocationRule");
static_assert(offsetof(UMovieScene3DAttachSection, AttachmentRotationRule) == 377, "Offset mismatch for UMovieScene3DAttachSection::AttachmentRotationRule");
static_assert(offsetof(UMovieScene3DAttachSection, AttachmentScaleRule) == 378, "Offset mismatch for UMovieScene3DAttachSection::AttachmentScaleRule");
static_assert(offsetof(UMovieScene3DAttachSection, DetachmentLocationRule) == 379, "Offset mismatch for UMovieScene3DAttachSection::DetachmentLocationRule");
static_assert(offsetof(UMovieScene3DAttachSection, DetachmentRotationRule) == 380, "Offset mismatch for UMovieScene3DAttachSection::DetachmentRotationRule");
static_assert(offsetof(UMovieScene3DAttachSection, DetachmentScaleRule) == 381, "Offset mismatch for UMovieScene3DAttachSection::DetachmentScaleRule");

// /Script/MovieSceneTracks.MovieScene3DAttachTrack
// Kind: Class; super: MovieScene3DConstraintTrack
class UMovieScene3DAttachTrack
{
public:
    std::uint8_t Pad_0000[0xF8]; // 0x0000
    TArray<void*> ConstraintSections; // 0x00F8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMovieScene3DAttachTrack, ConstraintSections) == 248, "Offset mismatch for UMovieScene3DAttachTrack::ConstraintSections");

// /Script/MovieSceneTracks.MovieScene3DConstraintSection
// Kind: Class; super: MovieSceneSection
class UMovieScene3DConstraintSection
{
public:
    std::uint8_t Pad_0000[0x140]; // 0x0000
    std::uint8_t ConstraintId[0x10]; // 0x0140 (Size: 0x10, Type: StructProperty)
    std::uint8_t ConstraintBindingID[0x1]; // 0x0150 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMovieScene3DConstraintSection, ConstraintId) == 320, "Offset mismatch for UMovieScene3DConstraintSection::ConstraintId");
static_assert(offsetof(UMovieScene3DConstraintSection, ConstraintBindingID) == 336, "Offset mismatch for UMovieScene3DConstraintSection::ConstraintBindingID");

// /Script/MovieSceneTracks.MovieScene3DConstraintTrack
// Kind: Class; super: MovieSceneTrack
class UMovieScene3DConstraintTrack
{
public:
    std::uint8_t Pad_0000[0xF8]; // 0x0000
    TArray<void*> ConstraintSections; // 0x00F8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMovieScene3DConstraintTrack, ConstraintSections) == 248, "Offset mismatch for UMovieScene3DConstraintTrack::ConstraintSections");

// /Script/MovieSceneTracks.MovieScene3DPathSection
// Kind: Class; super: MovieScene3DConstraintSection
class UMovieScene3DPathSection
{
public:
    std::uint8_t Pad_0000[0x168]; // 0x0000
    std::uint8_t TimingCurve[0xD0]; // 0x0168 (Size: 0xD0, Type: StructProperty)
    std::uint8_t FrontAxisEnum; // 0x0238 (Size: 0x1, Type: EnumProperty)
    std::uint8_t UpAxisEnum; // 0x0239 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x2]; // 0x023A
    std::uint8_t bFollow; // 0x023C (Size: 0x1, Type: BoolProperty)
    // 0x023C BoolProperty bForceUpright (shared storage)
    // 0x023C BoolProperty bReverse (shared storage)
};

static_assert(offsetof(UMovieScene3DPathSection, TimingCurve) == 360, "Offset mismatch for UMovieScene3DPathSection::TimingCurve");
static_assert(offsetof(UMovieScene3DPathSection, FrontAxisEnum) == 568, "Offset mismatch for UMovieScene3DPathSection::FrontAxisEnum");
static_assert(offsetof(UMovieScene3DPathSection, UpAxisEnum) == 569, "Offset mismatch for UMovieScene3DPathSection::UpAxisEnum");
static_assert(offsetof(UMovieScene3DPathSection, bFollow) == 572, "Offset mismatch for UMovieScene3DPathSection::bFollow");

// /Script/MovieSceneTracks.MovieScene3DPathTrack
// Kind: Class; super: MovieScene3DConstraintTrack
class UMovieScene3DPathTrack
{
public:
    std::uint8_t Pad_0000[0xF8]; // 0x0000
    TArray<void*> ConstraintSections; // 0x00F8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMovieScene3DPathTrack, ConstraintSections) == 248, "Offset mismatch for UMovieScene3DPathTrack::ConstraintSections");

// /Script/MovieSceneTracks.MovieScene3DTransformPropertySystem
// Kind: Class; super: MovieScenePropertySystem
class UMovieScene3DTransformPropertySystem
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    void* InstantiatorSystem; // 0x0048 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMovieScene3DTransformPropertySystem, InstantiatorSystem) == 72, "Offset mismatch for UMovieScene3DTransformPropertySystem::InstantiatorSystem");

// /Script/MovieSceneTracks.MovieScene3DTransformSection
// Kind: Class; super: MovieSceneSection
class UMovieScene3DTransformSection
{
public:
    std::uint8_t Pad_0000[0x180]; // 0x0000
    std::uint8_t TransformMask[0x8]; // 0x0180 (Size: 0x8, Type: StructProperty)
    std::uint8_t Translation[0x288]; // 0x0188 (Size: 0x288, Type: StructProperty)
    std::uint8_t Rotation[0x288]; // 0x0410 (Size: 0x288, Type: StructProperty)
    std::uint8_t Scale[0x288]; // 0x0698 (Size: 0x288, Type: StructProperty)
    std::uint8_t ManualWeight[0xD0]; // 0x0920 (Size: 0xD0, Type: StructProperty)
    void* OverrideRegistry; // 0x09F0 (Size: 0x8, Type: ObjectProperty)
    void* Constraints; // 0x09F8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bUseQuaternionInterpolation; // 0x0A00 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMovieScene3DTransformSection, TransformMask) == 384, "Offset mismatch for UMovieScene3DTransformSection::TransformMask");
static_assert(offsetof(UMovieScene3DTransformSection, Translation) == 392, "Offset mismatch for UMovieScene3DTransformSection::Translation");
static_assert(offsetof(UMovieScene3DTransformSection, Rotation) == 1040, "Offset mismatch for UMovieScene3DTransformSection::Rotation");
static_assert(offsetof(UMovieScene3DTransformSection, Scale) == 1688, "Offset mismatch for UMovieScene3DTransformSection::Scale");
static_assert(offsetof(UMovieScene3DTransformSection, ManualWeight) == 2336, "Offset mismatch for UMovieScene3DTransformSection::ManualWeight");
static_assert(offsetof(UMovieScene3DTransformSection, OverrideRegistry) == 2544, "Offset mismatch for UMovieScene3DTransformSection::OverrideRegistry");
static_assert(offsetof(UMovieScene3DTransformSection, Constraints) == 2552, "Offset mismatch for UMovieScene3DTransformSection::Constraints");
static_assert(offsetof(UMovieScene3DTransformSection, bUseQuaternionInterpolation) == 2560, "Offset mismatch for UMovieScene3DTransformSection::bUseQuaternionInterpolation");

// /Script/MovieSceneTracks.MovieScene3DTransformSectionConstraints
// Kind: Class; super: Object
class UMovieScene3DTransformSectionConstraints
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> ConstraintsChannels; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMovieScene3DTransformSectionConstraints, ConstraintsChannels) == 40, "Offset mismatch for UMovieScene3DTransformSectionConstraints::ConstraintsChannels");

// /Script/MovieSceneTracks.MovieScene3DTransformTrack
// Kind: Class; super: MovieScenePropertyTrack
class UMovieScene3DTransformTrack
{
public:
    std::uint8_t Pad_0000[0x128]; // 0x0000
    void* BlenderSystemClass; // 0x0128 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UMovieScene3DTransformTrack, BlenderSystemClass) == 296, "Offset mismatch for UMovieScene3DTransformTrack::BlenderSystemClass");

// /Script/MovieSceneTracks.MovieSceneActorReferencePropertySystem
// Kind: Class; super: MovieScenePropertySystem
class UMovieSceneActorReferencePropertySystem
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    void* InstantiatorSystem; // 0x0048 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMovieSceneActorReferencePropertySystem, InstantiatorSystem) == 72, "Offset mismatch for UMovieSceneActorReferencePropertySystem::InstantiatorSystem");

// /Script/MovieSceneTracks.MovieSceneActorReferenceSection
// Kind: Class; super: MovieSceneSection
class UMovieSceneActorReferenceSection
{
public:
    std::uint8_t Pad_0000[0x148]; // 0x0000
    std::uint8_t ActorReferenceData[0xD8]; // 0x0148 (Size: 0xD8, Type: StructProperty)
    std::uint8_t ActorGuidIndexCurve[0x40]; // 0x0220 (Size: 0x40, Type: StructProperty)
    TArray<void*> ActorGuidStrings; // 0x0260 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMovieSceneActorReferenceSection, ActorReferenceData) == 328, "Offset mismatch for UMovieSceneActorReferenceSection::ActorReferenceData");
static_assert(offsetof(UMovieSceneActorReferenceSection, ActorGuidIndexCurve) == 544, "Offset mismatch for UMovieSceneActorReferenceSection::ActorGuidIndexCurve");
static_assert(offsetof(UMovieSceneActorReferenceSection, ActorGuidStrings) == 608, "Offset mismatch for UMovieSceneActorReferenceSection::ActorGuidStrings");

// /Script/MovieSceneTracks.MovieSceneActorReferenceTrack
// Kind: Class; super: MovieScenePropertyTrack
class UMovieSceneActorReferenceTrack
{
public:
    std::uint8_t Pad_0000[0xF8]; // 0x0000
    void* SectionToKey; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t PropertyBinding[0x10]; // 0x0100 (Size: 0x10, Type: StructProperty)
    TArray<void*> Sections; // 0x0110 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMovieSceneActorReferenceTrack, SectionToKey) == 248, "Offset mismatch for UMovieSceneActorReferenceTrack::SectionToKey");
static_assert(offsetof(UMovieSceneActorReferenceTrack, PropertyBinding) == 256, "Offset mismatch for UMovieSceneActorReferenceTrack::PropertyBinding");
static_assert(offsetof(UMovieSceneActorReferenceTrack, Sections) == 272, "Offset mismatch for UMovieSceneActorReferenceTrack::Sections");

// /Script/MovieSceneTracks.MovieSceneAnimationMixerItemInterface
// Kind: Class; super: Interface
class UMovieSceneAnimationMixerItemInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MovieSceneTracks.MovieSceneAsyncAction_SequencePrediction
// Kind: Class; super: BlueprintAsyncActionBase
class UMovieSceneAsyncAction_SequencePrediction
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    FMulticastInlineDelegate Result; // 0x0030 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate Failure; // 0x0040 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0050
    void* SequencePlayer; // 0x0060 (Size: 0x8, Type: ObjectProperty)
    void* SceneComponent; // 0x0068 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMovieSceneAsyncAction_SequencePrediction, Result) == 48, "Offset mismatch for UMovieSceneAsyncAction_SequencePrediction::Result");
static_assert(offsetof(UMovieSceneAsyncAction_SequencePrediction, Failure) == 64, "Offset mismatch for UMovieSceneAsyncAction_SequencePrediction::Failure");
static_assert(offsetof(UMovieSceneAsyncAction_SequencePrediction, SequencePlayer) == 96, "Offset mismatch for UMovieSceneAsyncAction_SequencePrediction::SequencePlayer");
static_assert(offsetof(UMovieSceneAsyncAction_SequencePrediction, SceneComponent) == 104, "Offset mismatch for UMovieSceneAsyncAction_SequencePrediction::SceneComponent");

// /Script/MovieSceneTracks.MovieSceneAudioSection
// Kind: Class; super: MovieSceneSection
class UMovieSceneAudioSection
{
public:
    std::uint8_t Pad_0000[0x150]; // 0x0000
    std::uint8_t CachedCompletionMode; // 0x0150 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0151
    void* Sound; // 0x0158 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t StartFrameOffset[0x4]; // 0x0160 (Size: 0x4, Type: StructProperty)
    float StartOffset; // 0x0164 (Size: 0x4, Type: FloatProperty)
    float AudioStartTime; // 0x0168 (Size: 0x4, Type: FloatProperty)
    float AudioDilationFactor; // 0x016C (Size: 0x4, Type: FloatProperty)
    float AudioVolume; // 0x0170 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0174
    std::uint8_t SoundVolume[0xD0]; // 0x0178 (Size: 0xD0, Type: StructProperty)
    std::uint8_t PitchMultiplier[0xD0]; // 0x0248 (Size: 0xD0, Type: StructProperty)
    TMap<void*, void*> Inputs_Float; // 0x0318 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> Inputs_String; // 0x0328 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> Inputs_Bool; // 0x0338 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> Inputs_Int; // 0x0348 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> Inputs_Trigger; // 0x0358 (Size: 0x10, Type: MapProperty)
    std::uint8_t AttachActorData[0xD8]; // 0x0368 (Size: 0xD8, Type: StructProperty)
    std::uint8_t bLooping; // 0x0440 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRepeating; // 0x0441 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPlayUntilFinished; // 0x0442 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSuppressSubtitles; // 0x0443 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOverrideAttenuation; // 0x0444 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0445
    void* AttenuationSettings; // 0x0448 (Size: 0x8, Type: ObjectProperty)
    FScriptDelegate OnQueueSubtitles; // 0x0450 (Size: 0x10, Type: DelegateProperty)
    FMulticastInlineDelegate OnAudioFinished; // 0x0460 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnAudioPlaybackPercent; // 0x0470 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UMovieSceneAudioSection, CachedCompletionMode) == 336, "Offset mismatch for UMovieSceneAudioSection::CachedCompletionMode");
static_assert(offsetof(UMovieSceneAudioSection, Sound) == 344, "Offset mismatch for UMovieSceneAudioSection::Sound");
static_assert(offsetof(UMovieSceneAudioSection, StartFrameOffset) == 352, "Offset mismatch for UMovieSceneAudioSection::StartFrameOffset");
static_assert(offsetof(UMovieSceneAudioSection, StartOffset) == 356, "Offset mismatch for UMovieSceneAudioSection::StartOffset");
static_assert(offsetof(UMovieSceneAudioSection, AudioStartTime) == 360, "Offset mismatch for UMovieSceneAudioSection::AudioStartTime");
static_assert(offsetof(UMovieSceneAudioSection, AudioDilationFactor) == 364, "Offset mismatch for UMovieSceneAudioSection::AudioDilationFactor");
static_assert(offsetof(UMovieSceneAudioSection, AudioVolume) == 368, "Offset mismatch for UMovieSceneAudioSection::AudioVolume");
static_assert(offsetof(UMovieSceneAudioSection, SoundVolume) == 376, "Offset mismatch for UMovieSceneAudioSection::SoundVolume");
static_assert(offsetof(UMovieSceneAudioSection, PitchMultiplier) == 584, "Offset mismatch for UMovieSceneAudioSection::PitchMultiplier");
static_assert(offsetof(UMovieSceneAudioSection, Inputs_Float) == 792, "Offset mismatch for UMovieSceneAudioSection::Inputs_Float");
static_assert(offsetof(UMovieSceneAudioSection, Inputs_String) == 808, "Offset mismatch for UMovieSceneAudioSection::Inputs_String");
static_assert(offsetof(UMovieSceneAudioSection, Inputs_Bool) == 824, "Offset mismatch for UMovieSceneAudioSection::Inputs_Bool");
static_assert(offsetof(UMovieSceneAudioSection, Inputs_Int) == 840, "Offset mismatch for UMovieSceneAudioSection::Inputs_Int");
static_assert(offsetof(UMovieSceneAudioSection, Inputs_Trigger) == 856, "Offset mismatch for UMovieSceneAudioSection::Inputs_Trigger");
static_assert(offsetof(UMovieSceneAudioSection, AttachActorData) == 872, "Offset mismatch for UMovieSceneAudioSection::AttachActorData");
static_assert(offsetof(UMovieSceneAudioSection, bLooping) == 1088, "Offset mismatch for UMovieSceneAudioSection::bLooping");
static_assert(offsetof(UMovieSceneAudioSection, bRepeating) == 1089, "Offset mismatch for UMovieSceneAudioSection::bRepeating");
static_assert(offsetof(UMovieSceneAudioSection, bPlayUntilFinished) == 1090, "Offset mismatch for UMovieSceneAudioSection::bPlayUntilFinished");
static_assert(offsetof(UMovieSceneAudioSection, bSuppressSubtitles) == 1091, "Offset mismatch for UMovieSceneAudioSection::bSuppressSubtitles");
static_assert(offsetof(UMovieSceneAudioSection, bOverrideAttenuation) == 1092, "Offset mismatch for UMovieSceneAudioSection::bOverrideAttenuation");
static_assert(offsetof(UMovieSceneAudioSection, AttenuationSettings) == 1096, "Offset mismatch for UMovieSceneAudioSection::AttenuationSettings");
static_assert(offsetof(UMovieSceneAudioSection, OnQueueSubtitles) == 1104, "Offset mismatch for UMovieSceneAudioSection::OnQueueSubtitles");
static_assert(offsetof(UMovieSceneAudioSection, OnAudioFinished) == 1120, "Offset mismatch for UMovieSceneAudioSection::OnAudioFinished");
static_assert(offsetof(UMovieSceneAudioSection, OnAudioPlaybackPercent) == 1136, "Offset mismatch for UMovieSceneAudioSection::OnAudioPlaybackPercent");

// /Script/MovieSceneTracks.MovieSceneAudioSystem
// Kind: Class; super: MovieSceneEntitySystem
class UMovieSceneAudioSystem
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Linker; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMovieSceneAudioSystem, Linker) == 40, "Offset mismatch for UMovieSceneAudioSystem::Linker");

// /Script/MovieSceneTracks.MovieSceneAudioTrack
// Kind: Class; super: MovieSceneNameableTrack
class UMovieSceneAudioTrack
{
public:
    std::uint8_t Pad_0000[0xF8]; // 0x0000
    TArray<void*> AudioSections; // 0x00F8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMovieSceneAudioTrack, AudioSections) == 248, "Offset mismatch for UMovieSceneAudioTrack::AudioSections");

// /Script/MovieSceneTracks.MovieSceneBaseCacheSection
// Kind: Class; super: MovieSceneSection
class UMovieSceneBaseCacheSection
{
public:
    std::uint8_t Pad_0000[0x88]; // 0x0000
    std::uint8_t EvalOptions[0x8]; // 0x0088 (Size: 0x8, Type: StructProperty)
    std::uint8_t Easing[0x38]; // 0x0090 (Size: 0x38, Type: StructProperty)
    std::uint8_t SectionRange[0x10]; // 0x00C8 (Size: 0x10, Type: StructProperty)
    std::uint8_t TimecodeSource[0x18]; // 0x00D8 (Size: 0x18, Type: StructProperty)
    std::uint8_t ConditionContainer[0x8]; // 0x00F0 (Size: 0x8, Type: StructProperty)
    std::uint8_t PreRollFrames[0x4]; // 0x00F8 (Size: 0x4, Type: StructProperty)
    std::uint8_t PostRollFrames[0x4]; // 0x00FC (Size: 0x4, Type: StructProperty)
    std::int32_t RowIndex; // 0x0100 (Size: 0x4, Type: IntProperty)
    std::int32_t OverlapPriority; // 0x0104 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsActive; // 0x0108 (Size: 0x1, Type: BoolProperty)
    // 0x0108 BoolProperty bIsLocked (shared storage)
    std::uint8_t Pad_0001[0x3]; // 0x0109
    float StartTime; // 0x010C (Size: 0x4, Type: FloatProperty)
    float EndTime; // 0x0110 (Size: 0x4, Type: FloatProperty)
    float PreRollTime; // 0x0114 (Size: 0x4, Type: FloatProperty)
    float PostRollTime; // 0x0118 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsInfinite; // 0x011C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x011D
    std::uint8_t bSupportsInfiniteRange; // 0x0120 (Size: 0x1, Type: BoolProperty)
    std::uint8_t BlendType[0x1]; // 0x0121 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMovieSceneBaseCacheSection, EvalOptions) == 136, "Offset mismatch for UMovieSceneBaseCacheSection::EvalOptions");
static_assert(offsetof(UMovieSceneBaseCacheSection, Easing) == 144, "Offset mismatch for UMovieSceneBaseCacheSection::Easing");
static_assert(offsetof(UMovieSceneBaseCacheSection, SectionRange) == 200, "Offset mismatch for UMovieSceneBaseCacheSection::SectionRange");
static_assert(offsetof(UMovieSceneBaseCacheSection, TimecodeSource) == 216, "Offset mismatch for UMovieSceneBaseCacheSection::TimecodeSource");
static_assert(offsetof(UMovieSceneBaseCacheSection, ConditionContainer) == 240, "Offset mismatch for UMovieSceneBaseCacheSection::ConditionContainer");
static_assert(offsetof(UMovieSceneBaseCacheSection, PreRollFrames) == 248, "Offset mismatch for UMovieSceneBaseCacheSection::PreRollFrames");
static_assert(offsetof(UMovieSceneBaseCacheSection, PostRollFrames) == 252, "Offset mismatch for UMovieSceneBaseCacheSection::PostRollFrames");
static_assert(offsetof(UMovieSceneBaseCacheSection, RowIndex) == 256, "Offset mismatch for UMovieSceneBaseCacheSection::RowIndex");
static_assert(offsetof(UMovieSceneBaseCacheSection, OverlapPriority) == 260, "Offset mismatch for UMovieSceneBaseCacheSection::OverlapPriority");
static_assert(offsetof(UMovieSceneBaseCacheSection, bIsActive) == 264, "Offset mismatch for UMovieSceneBaseCacheSection::bIsActive");
static_assert(offsetof(UMovieSceneBaseCacheSection, StartTime) == 268, "Offset mismatch for UMovieSceneBaseCacheSection::StartTime");
static_assert(offsetof(UMovieSceneBaseCacheSection, EndTime) == 272, "Offset mismatch for UMovieSceneBaseCacheSection::EndTime");
static_assert(offsetof(UMovieSceneBaseCacheSection, PreRollTime) == 276, "Offset mismatch for UMovieSceneBaseCacheSection::PreRollTime");
static_assert(offsetof(UMovieSceneBaseCacheSection, PostRollTime) == 280, "Offset mismatch for UMovieSceneBaseCacheSection::PostRollTime");
static_assert(offsetof(UMovieSceneBaseCacheSection, bIsInfinite) == 284, "Offset mismatch for UMovieSceneBaseCacheSection::bIsInfinite");
static_assert(offsetof(UMovieSceneBaseCacheSection, bSupportsInfiniteRange) == 288, "Offset mismatch for UMovieSceneBaseCacheSection::bSupportsInfiniteRange");
static_assert(offsetof(UMovieSceneBaseCacheSection, BlendType) == 289, "Offset mismatch for UMovieSceneBaseCacheSection::BlendType");

// /Script/MovieSceneTracks.MovieSceneBaseValueEvaluatorSystem
// Kind: Class; super: MovieSceneEntitySystem
class UMovieSceneBaseValueEvaluatorSystem
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Linker; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMovieSceneBaseValueEvaluatorSystem, Linker) == 40, "Offset mismatch for UMovieSceneBaseValueEvaluatorSystem::Linker");

// /Script/MovieSceneTracks.MovieSceneBoolPropertySystem
// Kind: Class; super: MovieScenePropertySystem
class UMovieSceneBoolPropertySystem
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    void* InstantiatorSystem; // 0x0048 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMovieSceneBoolPropertySystem, InstantiatorSystem) == 72, "Offset mismatch for UMovieSceneBoolPropertySystem::InstantiatorSystem");

// /Script/MovieSceneTracks.MovieSceneBoolTrack
// Kind: Class; super: MovieScenePropertyTrack
class UMovieSceneBoolTrack
{
public:
    std::uint8_t Pad_0000[0xF8]; // 0x0000
    void* SectionToKey; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t PropertyBinding[0x10]; // 0x0100 (Size: 0x10, Type: StructProperty)
    TArray<void*> Sections; // 0x0110 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMovieSceneBoolTrack, SectionToKey) == 248, "Offset mismatch for UMovieSceneBoolTrack::SectionToKey");
static_assert(offsetof(UMovieSceneBoolTrack, PropertyBinding) == 256, "Offset mismatch for UMovieSceneBoolTrack::PropertyBinding");
static_assert(offsetof(UMovieSceneBoolTrack, Sections) == 272, "Offset mismatch for UMovieSceneBoolTrack::Sections");

// /Script/MovieSceneTracks.MovieSceneBytePropertySystem
// Kind: Class; super: MovieScenePropertySystem
class UMovieSceneBytePropertySystem
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    void* InstantiatorSystem; // 0x0048 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMovieSceneBytePropertySystem, InstantiatorSystem) == 72, "Offset mismatch for UMovieSceneBytePropertySystem::InstantiatorSystem");

// /Script/MovieSceneTracks.MovieSceneByteSection
// Kind: Class; super: MovieSceneSection
class UMovieSceneByteSection
{
public:
    std::uint8_t Pad_0000[0x148]; // 0x0000
    std::uint8_t ByteCurve[0x1]; // 0x0148 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMovieSceneByteSection, ByteCurve) == 328, "Offset mismatch for UMovieSceneByteSection::ByteCurve");

// /Script/MovieSceneTracks.MovieSceneByteTrack
// Kind: Class; super: MovieScenePropertyTrack
class UMovieSceneByteTrack
{
public:
    std::uint8_t Pad_0000[0x120]; // 0x0000
    void* Enum; // 0x0120 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMovieSceneByteTrack, Enum) == 288, "Offset mismatch for UMovieSceneByteTrack::Enum");

// /Script/MovieSceneTracks.MovieSceneCVarSection
// Kind: Class; super: MovieSceneSection
class UMovieSceneCVarSection
{
public:
    std::uint8_t Pad_0000[0x148]; // 0x0000
    TArray<void*> ConsoleVariableCollections; // 0x0148 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ConsoleVariables[0x1]; // 0x0158 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMovieSceneCVarSection, ConsoleVariableCollections) == 328, "Offset mismatch for UMovieSceneCVarSection::ConsoleVariableCollections");
static_assert(offsetof(UMovieSceneCVarSection, ConsoleVariables) == 344, "Offset mismatch for UMovieSceneCVarSection::ConsoleVariables");

// /Script/MovieSceneTracks.MovieSceneCVarTrack
// Kind: Class; super: MovieSceneNameableTrack
class UMovieSceneCVarTrack
{
public:
    std::uint8_t Pad_0000[0xF8]; // 0x0000
    TArray<void*> Sections; // 0x00F8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMovieSceneCVarTrack, Sections) == 248, "Offset mismatch for UMovieSceneCVarTrack::Sections");

// /Script/MovieSceneTracks.MovieSceneCVarTrackInstance
// Kind: Class; super: MovieSceneTrackInstance
class UMovieSceneCVarTrackInstance
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TWeakObjectPtr<void> WeakAnimatedObject; // 0x0028 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t bIsRootTrackInstance; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0031
    void* PrivateLinker; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Inputs; // 0x0040 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMovieSceneCVarTrackInstance, WeakAnimatedObject) == 40, "Offset mismatch for UMovieSceneCVarTrackInstance::WeakAnimatedObject");
static_assert(offsetof(UMovieSceneCVarTrackInstance, bIsRootTrackInstance) == 48, "Offset mismatch for UMovieSceneCVarTrackInstance::bIsRootTrackInstance");
static_assert(offsetof(UMovieSceneCVarTrackInstance, PrivateLinker) == 56, "Offset mismatch for UMovieSceneCVarTrackInstance::PrivateLinker");
static_assert(offsetof(UMovieSceneCVarTrackInstance, Inputs) == 64, "Offset mismatch for UMovieSceneCVarTrackInstance::Inputs");

// /Script/MovieSceneTracks.MovieSceneCameraCutSection
// Kind: Class; super: MovieSceneSection
class UMovieSceneCameraCutSection
{
public:
    std::uint8_t Pad_0000[0x148]; // 0x0000
    std::uint8_t bLockPreviousCamera; // 0x0148 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0149
    std::uint8_t CameraGuid[0x10]; // 0x014C (Size: 0x10, Type: StructProperty)
    std::uint8_t CameraBindingID[0x24]; // 0x015C (Size: 0x24, Type: StructProperty)
    std::uint8_t InitialCameraCutTransform[0x60]; // 0x0180 (Size: 0x60, Type: StructProperty)
    std::uint8_t bHasInitialCameraCutTransform; // 0x01E0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMovieSceneCameraCutSection, bLockPreviousCamera) == 328, "Offset mismatch for UMovieSceneCameraCutSection::bLockPreviousCamera");
static_assert(offsetof(UMovieSceneCameraCutSection, CameraGuid) == 332, "Offset mismatch for UMovieSceneCameraCutSection::CameraGuid");
static_assert(offsetof(UMovieSceneCameraCutSection, CameraBindingID) == 348, "Offset mismatch for UMovieSceneCameraCutSection::CameraBindingID");
static_assert(offsetof(UMovieSceneCameraCutSection, InitialCameraCutTransform) == 384, "Offset mismatch for UMovieSceneCameraCutSection::InitialCameraCutTransform");
static_assert(offsetof(UMovieSceneCameraCutSection, bHasInitialCameraCutTransform) == 480, "Offset mismatch for UMovieSceneCameraCutSection::bHasInitialCameraCutTransform");

// /Script/MovieSceneTracks.MovieSceneCameraCutTrack
// Kind: Class; super: MovieSceneNameableTrack
class UMovieSceneCameraCutTrack
{
public:
    std::uint8_t Pad_0000[0xF8]; // 0x0000
    std::uint8_t bCanBlend; // 0x00F8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00F9
    TArray<void*> Sections; // 0x0100 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bAutoArrangeSections; // 0x0110 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMovieSceneCameraCutTrack, bCanBlend) == 248, "Offset mismatch for UMovieSceneCameraCutTrack::bCanBlend");
static_assert(offsetof(UMovieSceneCameraCutTrack, Sections) == 256, "Offset mismatch for UMovieSceneCameraCutTrack::Sections");
static_assert(offsetof(UMovieSceneCameraCutTrack, bAutoArrangeSections) == 272, "Offset mismatch for UMovieSceneCameraCutTrack::bAutoArrangeSections");

// /Script/MovieSceneTracks.MovieSceneCameraCutTrackInstance
// Kind: Class; super: MovieSceneTrackInstance
class UMovieSceneCameraCutTrackInstance
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TWeakObjectPtr<void> WeakAnimatedObject; // 0x0028 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t bIsRootTrackInstance; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0031
    void* PrivateLinker; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Inputs; // 0x0040 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMovieSceneCameraCutTrackInstance, WeakAnimatedObject) == 40, "Offset mismatch for UMovieSceneCameraCutTrackInstance::WeakAnimatedObject");
static_assert(offsetof(UMovieSceneCameraCutTrackInstance, bIsRootTrackInstance) == 48, "Offset mismatch for UMovieSceneCameraCutTrackInstance::bIsRootTrackInstance");
static_assert(offsetof(UMovieSceneCameraCutTrackInstance, PrivateLinker) == 56, "Offset mismatch for UMovieSceneCameraCutTrackInstance::PrivateLinker");
static_assert(offsetof(UMovieSceneCameraCutTrackInstance, Inputs) == 64, "Offset mismatch for UMovieSceneCameraCutTrackInstance::Inputs");

// /Script/MovieSceneTracks.MovieSceneCameraShakeEvaluatorSystem
// Kind: Class; super: MovieSceneEntitySystem
class UMovieSceneCameraShakeEvaluatorSystem
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Linker; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMovieSceneCameraShakeEvaluatorSystem, Linker) == 40, "Offset mismatch for UMovieSceneCameraShakeEvaluatorSystem::Linker");

// /Script/MovieSceneTracks.MovieSceneCameraShakeInstantiatorSystem
// Kind: Class; super: MovieSceneEntitySystem
class UMovieSceneCameraShakeInstantiatorSystem
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Linker; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMovieSceneCameraShakeInstantiatorSystem, Linker) == 40, "Offset mismatch for UMovieSceneCameraShakeInstantiatorSystem::Linker");

// /Script/MovieSceneTracks.MovieSceneCameraShakeSection
// Kind: Class; super: MovieSceneSection
class UMovieSceneCameraShakeSection
{
public:
    std::uint8_t Pad_0000[0x148]; // 0x0000
    std::uint8_t ShakeData[0x28]; // 0x0148 (Size: 0x28, Type: StructProperty)
    void* ShakeClass; // 0x0170 (Size: 0x8, Type: ClassProperty)
    float PlayScale; // 0x0178 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Playspace; // 0x017C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x017D
    std::uint8_t UserDefinedPlaySpace[0x1]; // 0x0180 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMovieSceneCameraShakeSection, ShakeData) == 328, "Offset mismatch for UMovieSceneCameraShakeSection::ShakeData");
static_assert(offsetof(UMovieSceneCameraShakeSection, ShakeClass) == 368, "Offset mismatch for UMovieSceneCameraShakeSection::ShakeClass");
static_assert(offsetof(UMovieSceneCameraShakeSection, PlayScale) == 376, "Offset mismatch for UMovieSceneCameraShakeSection::PlayScale");
static_assert(offsetof(UMovieSceneCameraShakeSection, Playspace) == 380, "Offset mismatch for UMovieSceneCameraShakeSection::Playspace");
static_assert(offsetof(UMovieSceneCameraShakeSection, UserDefinedPlaySpace) == 384, "Offset mismatch for UMovieSceneCameraShakeSection::UserDefinedPlaySpace");

// /Script/MovieSceneTracks.MovieSceneCameraShakeSourceShakeSection
// Kind: Class; super: MovieSceneSection
class UMovieSceneCameraShakeSourceShakeSection
{
public:
    std::uint8_t Pad_0000[0x148]; // 0x0000
    std::uint8_t ShakeData[0x1]; // 0x0148 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMovieSceneCameraShakeSourceShakeSection, ShakeData) == 328, "Offset mismatch for UMovieSceneCameraShakeSourceShakeSection::ShakeData");

// /Script/MovieSceneTracks.MovieSceneCameraShakeSourceShakeTrack
// Kind: Class; super: MovieSceneNameableTrack
class UMovieSceneCameraShakeSourceShakeTrack
{
public:
    std::uint8_t Pad_0000[0xF8]; // 0x0000
    TArray<void*> CameraShakeSections; // 0x00F8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMovieSceneCameraShakeSourceShakeTrack, CameraShakeSections) == 248, "Offset mismatch for UMovieSceneCameraShakeSourceShakeTrack::CameraShakeSections");

// /Script/MovieSceneTracks.MovieSceneCameraShakeSourceTriggerSection
// Kind: Class; super: MovieSceneSection
class UMovieSceneCameraShakeSourceTriggerSection
{
public:
    std::uint8_t Pad_0000[0x148]; // 0x0000
    std::uint8_t Channel[0x1]; // 0x0148 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMovieSceneCameraShakeSourceTriggerSection, Channel) == 328, "Offset mismatch for UMovieSceneCameraShakeSourceTriggerSection::Channel");

// /Script/MovieSceneTracks.MovieSceneCameraShakeSourceTriggerTrack
// Kind: Class; super: MovieSceneTrack
class UMovieSceneCameraShakeSourceTriggerTrack
{
public:
    std::uint8_t Pad_0000[0xF8]; // 0x0000
    TArray<void*> Sections; // 0x00F8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMovieSceneCameraShakeSourceTriggerTrack, Sections) == 248, "Offset mismatch for UMovieSceneCameraShakeSourceTriggerTrack::Sections");

// /Script/MovieSceneTracks.MovieSceneCameraShakeTrack
// Kind: Class; super: MovieSceneNameableTrack
class UMovieSceneCameraShakeTrack
{
public:
    std::uint8_t Pad_0000[0xF8]; // 0x0000
    TArray<void*> CameraShakeSections; // 0x00F8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMovieSceneCameraShakeTrack, CameraShakeSections) == 248, "Offset mismatch for UMovieSceneCameraShakeTrack::CameraShakeSections");

// /Script/MovieSceneTracks.MovieSceneCinematicShotSection
// Kind: Class; super: MovieSceneSubSection
class UMovieSceneCinematicShotSection
{
public:
    std::uint8_t Pad_0000[0x6A8]; // 0x0000
    FString ShotDisplayName; // 0x06A8 (Size: 0x10, Type: StrProperty)
    FText DisplayName; // 0x06B8 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(UMovieSceneCinematicShotSection, ShotDisplayName) == 1704, "Offset mismatch for UMovieSceneCinematicShotSection::ShotDisplayName");
static_assert(offsetof(UMovieSceneCinematicShotSection, DisplayName) == 1720, "Offset mismatch for UMovieSceneCinematicShotSection::DisplayName");

// /Script/MovieSceneTracks.MovieSceneCinematicShotTrack
// Kind: Class; super: MovieSceneSubTrack
class UMovieSceneCinematicShotTrack
{
public:
    std::uint8_t Pad_0000[0xF8]; // 0x0000
    TArray<void*> Sections; // 0x00F8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMovieSceneCinematicShotTrack, Sections) == 248, "Offset mismatch for UMovieSceneCinematicShotTrack::Sections");

// /Script/MovieSceneTracks.MovieSceneColorPropertySystem
// Kind: Class; super: MovieScenePropertySystem
class UMovieSceneColorPropertySystem
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    void* InstantiatorSystem; // 0x0048 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMovieSceneColorPropertySystem, InstantiatorSystem) == 72, "Offset mismatch for UMovieSceneColorPropertySystem::InstantiatorSystem");

// /Script/MovieSceneTracks.MovieSceneColorSection
// Kind: Class; super: MovieSceneSection
class UMovieSceneColorSection
{
public:
    std::uint8_t Pad_0000[0x148]; // 0x0000
    std::uint8_t RedCurve[0xD0]; // 0x0148 (Size: 0xD0, Type: StructProperty)
    std::uint8_t GreenCurve[0xD0]; // 0x0218 (Size: 0xD0, Type: StructProperty)
    std::uint8_t BlueCurve[0xD0]; // 0x02E8 (Size: 0xD0, Type: StructProperty)
    std::uint8_t AlphaCurve[0x1]; // 0x03B8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMovieSceneColorSection, RedCurve) == 328, "Offset mismatch for UMovieSceneColorSection::RedCurve");
static_assert(offsetof(UMovieSceneColorSection, GreenCurve) == 536, "Offset mismatch for UMovieSceneColorSection::GreenCurve");
static_assert(offsetof(UMovieSceneColorSection, BlueCurve) == 744, "Offset mismatch for UMovieSceneColorSection::BlueCurve");
static_assert(offsetof(UMovieSceneColorSection, AlphaCurve) == 952, "Offset mismatch for UMovieSceneColorSection::AlphaCurve");

// /Script/MovieSceneTracks.MovieSceneColorTrack
// Kind: Class; super: MovieScenePropertyTrack
class UMovieSceneColorTrack
{
public:
    std::uint8_t Pad_0000[0x120]; // 0x0000
    std::uint8_t bIsSlateColor; // 0x0120 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMovieSceneColorTrack, bIsSlateColor) == 288, "Offset mismatch for UMovieSceneColorTrack::bIsSlateColor");

// /Script/MovieSceneTracks.MovieSceneCommonAnimationTrack
// Kind: Class; super: MovieSceneNameableTrack
class UMovieSceneCommonAnimationTrack
{
public:
    std::uint8_t Pad_0000[0xF8]; // 0x0000
    TArray<void*> AnimationSections; // 0x00F8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0108
    std::uint8_t RootMotionParams[0x80]; // 0x0110 (Size: 0x80, Type: StructProperty)
    std::uint8_t bBlendFirstChildOfRoot; // 0x0190 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMovieSceneCommonAnimationTrack, AnimationSections) == 248, "Offset mismatch for UMovieSceneCommonAnimationTrack::AnimationSections");
static_assert(offsetof(UMovieSceneCommonAnimationTrack, RootMotionParams) == 272, "Offset mismatch for UMovieSceneCommonAnimationTrack::RootMotionParams");
static_assert(offsetof(UMovieSceneCommonAnimationTrack, bBlendFirstChildOfRoot) == 400, "Offset mismatch for UMovieSceneCommonAnimationTrack::bBlendFirstChildOfRoot");

// /Script/MovieSceneTracks.MovieSceneComponentAttachmentInvalidatorSystem
// Kind: Class; super: MovieSceneEntityInstantiatorSystem
class UMovieSceneComponentAttachmentInvalidatorSystem
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Linker; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMovieSceneComponentAttachmentInvalidatorSystem, Linker) == 40, "Offset mismatch for UMovieSceneComponentAttachmentInvalidatorSystem::Linker");

// /Script/MovieSceneTracks.MovieSceneComponentAttachmentSystem
// Kind: Class; super: MovieSceneEntityInstantiatorSystem
class UMovieSceneComponentAttachmentSystem
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Linker; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMovieSceneComponentAttachmentSystem, Linker) == 40, "Offset mismatch for UMovieSceneComponentAttachmentSystem::Linker");

// /Script/MovieSceneTracks.MovieSceneComponentMaterialParameterSection
// Kind: Class; super: MovieSceneSection
class UMovieSceneComponentMaterialParameterSection
{
public:
    std::uint8_t Pad_0000[0x148]; // 0x0000
    TArray<void*> ScalarParameterInfosAndCurves; // 0x0148 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ColorParameterInfosAndCurves; // 0x0158 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMovieSceneComponentMaterialParameterSection, ScalarParameterInfosAndCurves) == 328, "Offset mismatch for UMovieSceneComponentMaterialParameterSection::ScalarParameterInfosAndCurves");
static_assert(offsetof(UMovieSceneComponentMaterialParameterSection, ColorParameterInfosAndCurves) == 344, "Offset mismatch for UMovieSceneComponentMaterialParameterSection::ColorParameterInfosAndCurves");

// /Script/MovieSceneTracks.MovieSceneComponentMaterialSystem
// Kind: Class; super: MovieSceneEntitySystem
class UMovieSceneComponentMaterialSystem
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Linker; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMovieSceneComponentMaterialSystem, Linker) == 40, "Offset mismatch for UMovieSceneComponentMaterialSystem::Linker");

// /Script/MovieSceneTracks.MovieSceneComponentMaterialTrack
// Kind: Class; super: MovieSceneMaterialTrack
class UMovieSceneComponentMaterialTrack
{
public:
    std::uint8_t Pad_0000[0x120]; // 0x0000
    std::uint8_t MaterialInfo[0x1]; // 0x0120 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMovieSceneComponentMaterialTrack, MaterialInfo) == 288, "Offset mismatch for UMovieSceneComponentMaterialTrack::MaterialInfo");

// /Script/MovieSceneTracks.MovieSceneComponentMobilitySystem
// Kind: Class; super: MovieSceneEntityInstantiatorSystem
class UMovieSceneComponentMobilitySystem
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Linker; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMovieSceneComponentMobilitySystem, Linker) == 40, "Offset mismatch for UMovieSceneComponentMobilitySystem::Linker");

// /Script/MovieSceneTracks.MovieSceneComponentTransformSystem
// Kind: Class; super: MovieScenePropertySystem
class UMovieSceneComponentTransformSystem
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    void* InstantiatorSystem; // 0x0048 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMovieSceneComponentTransformSystem, InstantiatorSystem) == 72, "Offset mismatch for UMovieSceneComponentTransformSystem::InstantiatorSystem");

// /Script/MovieSceneTracks.MovieSceneConsoleVariableTrackInterface
// Kind: Class; super: Interface
class UMovieSceneConsoleVariableTrackInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MovieSceneTracks.MovieSceneConstrainedSection
// Kind: Class; super: Interface
class UMovieSceneConstrainedSection
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MovieSceneTracks.MovieSceneConstraintSystem
// Kind: Class; super: MovieSceneEntitySystem
class UMovieSceneConstraintSystem
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Linker; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMovieSceneConstraintSystem, Linker) == 40, "Offset mismatch for UMovieSceneConstraintSystem::Linker");

// /Script/MovieSceneTracks.MovieSceneCustomPrimitiveDataSection
// Kind: Class; super: MovieSceneParameterSection
class UMovieSceneCustomPrimitiveDataSection
{
public:
    std::uint8_t Pad_0000[0x148]; // 0x0000
    TArray<void*> BoolParameterNamesAndCurves; // 0x0148 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ScalarParameterNamesAndCurves; // 0x0158 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Vector2DParameterNamesAndCurves; // 0x0168 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> VectorParameterNamesAndCurves; // 0x0178 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ColorParameterNamesAndCurves; // 0x0188 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> TransformParameterNamesAndCurves; // 0x0198 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMovieSceneCustomPrimitiveDataSection, BoolParameterNamesAndCurves) == 328, "Offset mismatch for UMovieSceneCustomPrimitiveDataSection::BoolParameterNamesAndCurves");
static_assert(offsetof(UMovieSceneCustomPrimitiveDataSection, ScalarParameterNamesAndCurves) == 344, "Offset mismatch for UMovieSceneCustomPrimitiveDataSection::ScalarParameterNamesAndCurves");
static_assert(offsetof(UMovieSceneCustomPrimitiveDataSection, Vector2DParameterNamesAndCurves) == 360, "Offset mismatch for UMovieSceneCustomPrimitiveDataSection::Vector2DParameterNamesAndCurves");
static_assert(offsetof(UMovieSceneCustomPrimitiveDataSection, VectorParameterNamesAndCurves) == 376, "Offset mismatch for UMovieSceneCustomPrimitiveDataSection::VectorParameterNamesAndCurves");
static_assert(offsetof(UMovieSceneCustomPrimitiveDataSection, ColorParameterNamesAndCurves) == 392, "Offset mismatch for UMovieSceneCustomPrimitiveDataSection::ColorParameterNamesAndCurves");
static_assert(offsetof(UMovieSceneCustomPrimitiveDataSection, TransformParameterNamesAndCurves) == 408, "Offset mismatch for UMovieSceneCustomPrimitiveDataSection::TransformParameterNamesAndCurves");

// /Script/MovieSceneTracks.MovieSceneCustomPrimitiveDataSystem
// Kind: Class; super: MovieSceneEntitySystem
class UMovieSceneCustomPrimitiveDataSystem
{
public:
    std::uint8_t Pad_0000[0x110]; // 0x0000
    void* DoubleBlenderSystem; // 0x0110 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMovieSceneCustomPrimitiveDataSystem, DoubleBlenderSystem) == 272, "Offset mismatch for UMovieSceneCustomPrimitiveDataSystem::DoubleBlenderSystem");

// /Script/MovieSceneTracks.MovieSceneCustomPrimitiveDataTrack
// Kind: Class; super: MovieSceneNameableTrack
class UMovieSceneCustomPrimitiveDataTrack
{
public:
    std::uint8_t Pad_0000[0x108]; // 0x0000
    TArray<void*> Sections; // 0x0108 (Size: 0x10, Type: ArrayProperty)
    void* SectionToKey; // 0x0118 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMovieSceneCustomPrimitiveDataTrack, Sections) == 264, "Offset mismatch for UMovieSceneCustomPrimitiveDataTrack::Sections");
static_assert(offsetof(UMovieSceneCustomPrimitiveDataTrack, SectionToKey) == 280, "Offset mismatch for UMovieSceneCustomPrimitiveDataTrack::SectionToKey");

// /Script/MovieSceneTracks.MovieSceneDataLayerSection
// Kind: Class; super: MovieSceneSection
class UMovieSceneDataLayerSection
{
public:
    std::uint8_t Pad_0000[0x148]; // 0x0000
    TArray<void*> DataLayerAssets; // 0x0148 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t DesiredState; // 0x0158 (Size: 0x1, Type: EnumProperty)
    std::uint8_t PrerollState; // 0x0159 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bFlushOnActivated; // 0x015A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFlushOnUnload; // 0x015B (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMovieSceneDataLayerSection, DataLayerAssets) == 328, "Offset mismatch for UMovieSceneDataLayerSection::DataLayerAssets");
static_assert(offsetof(UMovieSceneDataLayerSection, DesiredState) == 344, "Offset mismatch for UMovieSceneDataLayerSection::DesiredState");
static_assert(offsetof(UMovieSceneDataLayerSection, PrerollState) == 345, "Offset mismatch for UMovieSceneDataLayerSection::PrerollState");
static_assert(offsetof(UMovieSceneDataLayerSection, bFlushOnActivated) == 346, "Offset mismatch for UMovieSceneDataLayerSection::bFlushOnActivated");
static_assert(offsetof(UMovieSceneDataLayerSection, bFlushOnUnload) == 347, "Offset mismatch for UMovieSceneDataLayerSection::bFlushOnUnload");

// /Script/MovieSceneTracks.MovieSceneDataLayerSystem
// Kind: Class; super: MovieSceneEntitySystem
class UMovieSceneDataLayerSystem
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Linker; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMovieSceneDataLayerSystem, Linker) == 40, "Offset mismatch for UMovieSceneDataLayerSystem::Linker");

// /Script/MovieSceneTracks.MovieSceneDataLayerTrack
// Kind: Class; super: MovieSceneNameableTrack
class UMovieSceneDataLayerTrack
{
public:
    std::uint8_t Pad_0000[0xF8]; // 0x0000
    TArray<void*> Sections; // 0x00F8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMovieSceneDataLayerTrack, Sections) == 248, "Offset mismatch for UMovieSceneDataLayerTrack::Sections");

// /Script/MovieSceneTracks.MovieSceneDecomposerTestObject
// Kind: Class; super: Object
class UMovieSceneDecomposerTestObject
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    float FloatProperty; // 0x0028 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UMovieSceneDecomposerTestObject, FloatProperty) == 40, "Offset mismatch for UMovieSceneDecomposerTestObject::FloatProperty");

// /Script/MovieSceneTracks.MovieSceneDeferredComponentMovementSystem
// Kind: Class; super: MovieSceneEntitySystem
class UMovieSceneDeferredComponentMovementSystem
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Linker; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMovieSceneDeferredComponentMovementSystem, Linker) == 40, "Offset mismatch for UMovieSceneDeferredComponentMovementSystem::Linker");

// /Script/MovieSceneTracks.MovieSceneDirectorBlueprintCondition
// Kind: Class; super: MovieSceneCondition
class UMovieSceneDirectorBlueprintCondition
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    std::uint8_t DirectorBlueprintConditionData[0x28]; // 0x0060 (Size: 0x28, Type: StructProperty)
    std::uint8_t Scope; // 0x0088 (Size: 0x1, Type: EnumProperty)
    std::uint8_t CheckFrequency; // 0x0089 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UMovieSceneDirectorBlueprintCondition, DirectorBlueprintConditionData) == 96, "Offset mismatch for UMovieSceneDirectorBlueprintCondition::DirectorBlueprintConditionData");
static_assert(offsetof(UMovieSceneDirectorBlueprintCondition, Scope) == 136, "Offset mismatch for UMovieSceneDirectorBlueprintCondition::Scope");
static_assert(offsetof(UMovieSceneDirectorBlueprintCondition, CheckFrequency) == 137, "Offset mismatch for UMovieSceneDirectorBlueprintCondition::CheckFrequency");

// /Script/MovieSceneTracks.MovieSceneDoublePerlinNoiseChannelContainer
// Kind: Class; super: MovieSceneChannelOverrideContainer
class UMovieSceneDoublePerlinNoiseChannelContainer
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    std::uint8_t PerlinNoiseChannel[0x1]; // 0x0058 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMovieSceneDoublePerlinNoiseChannelContainer, PerlinNoiseChannel) == 88, "Offset mismatch for UMovieSceneDoublePerlinNoiseChannelContainer::PerlinNoiseChannel");

// /Script/MovieSceneTracks.MovieSceneDoublePropertySystem
// Kind: Class; super: MovieScenePropertySystem
class UMovieSceneDoublePropertySystem
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    void* InstantiatorSystem; // 0x0048 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMovieSceneDoublePropertySystem, InstantiatorSystem) == 72, "Offset mismatch for UMovieSceneDoublePropertySystem::InstantiatorSystem");

// /Script/MovieSceneTracks.MovieSceneDoubleSection
// Kind: Class; super: MovieSceneSection
class UMovieSceneDoubleSection
{
public:
    std::uint8_t Pad_0000[0x148]; // 0x0000
    std::uint8_t DoubleCurve[0x1]; // 0x0148 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMovieSceneDoubleSection, DoubleCurve) == 328, "Offset mismatch for UMovieSceneDoubleSection::DoubleCurve");

// /Script/MovieSceneTracks.MovieSceneDoubleTrack
// Kind: Class; super: MovieScenePropertyTrack
class UMovieSceneDoubleTrack
{
public:
    std::uint8_t Pad_0000[0xF8]; // 0x0000
    void* SectionToKey; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t PropertyBinding[0x10]; // 0x0100 (Size: 0x10, Type: StructProperty)
    TArray<void*> Sections; // 0x0110 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMovieSceneDoubleTrack, SectionToKey) == 248, "Offset mismatch for UMovieSceneDoubleTrack::SectionToKey");
static_assert(offsetof(UMovieSceneDoubleTrack, PropertyBinding) == 256, "Offset mismatch for UMovieSceneDoubleTrack::PropertyBinding");
static_assert(offsetof(UMovieSceneDoubleTrack, Sections) == 272, "Offset mismatch for UMovieSceneDoubleTrack::Sections");

// /Script/MovieSceneTracks.MovieSceneDoubleVectorPropertySystem
// Kind: Class; super: MovieScenePropertySystem
class UMovieSceneDoubleVectorPropertySystem
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    void* InstantiatorSystem; // 0x0048 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMovieSceneDoubleVectorPropertySystem, InstantiatorSystem) == 72, "Offset mismatch for UMovieSceneDoubleVectorPropertySystem::InstantiatorSystem");

// /Script/MovieSceneTracks.MovieSceneDoubleVectorSection
// Kind: Class; super: MovieSceneSection
class UMovieSceneDoubleVectorSection
{
public:
    std::uint8_t Pad_0000[0x148]; // 0x0000
    std::uint8_t Curves[0x360]; // 0x0148 (Size: 0x360, Type: StructProperty)
    std::int32_t ChannelsUsed; // 0x04A8 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UMovieSceneDoubleVectorSection, Curves) == 328, "Offset mismatch for UMovieSceneDoubleVectorSection::Curves");
static_assert(offsetof(UMovieSceneDoubleVectorSection, ChannelsUsed) == 1192, "Offset mismatch for UMovieSceneDoubleVectorSection::ChannelsUsed");

// /Script/MovieSceneTracks.MovieSceneDoubleVectorTrack
// Kind: Class; super: MovieScenePropertyTrack
class UMovieSceneDoubleVectorTrack
{
public:
    std::uint8_t Pad_0000[0x120]; // 0x0000
    std::int32_t NumChannelsUsed; // 0x0120 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UMovieSceneDoubleVectorTrack, NumChannelsUsed) == 288, "Offset mismatch for UMovieSceneDoubleVectorTrack::NumChannelsUsed");

// /Script/MovieSceneTracks.MovieSceneEnumPropertySystem
// Kind: Class; super: MovieScenePropertySystem
class UMovieSceneEnumPropertySystem
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    void* InstantiatorSystem; // 0x0048 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMovieSceneEnumPropertySystem, InstantiatorSystem) == 72, "Offset mismatch for UMovieSceneEnumPropertySystem::InstantiatorSystem");

// /Script/MovieSceneTracks.MovieSceneEnumSection
// Kind: Class; super: MovieSceneSection
class UMovieSceneEnumSection
{
public:
    std::uint8_t Pad_0000[0x148]; // 0x0000
    std::uint8_t EnumCurve[0x1]; // 0x0148 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMovieSceneEnumSection, EnumCurve) == 328, "Offset mismatch for UMovieSceneEnumSection::EnumCurve");

// /Script/MovieSceneTracks.MovieSceneEnumTrack
// Kind: Class; super: MovieScenePropertyTrack
class UMovieSceneEnumTrack
{
public:
    std::uint8_t Pad_0000[0x120]; // 0x0000
    void* Enum; // 0x0120 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMovieSceneEnumTrack, Enum) == 288, "Offset mismatch for UMovieSceneEnumTrack::Enum");

// /Script/MovieSceneTracks.MovieSceneEulerTransformPropertySystem
// Kind: Class; super: MovieScenePropertySystem
class UMovieSceneEulerTransformPropertySystem
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    void* InstantiatorSystem; // 0x0048 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMovieSceneEulerTransformPropertySystem, InstantiatorSystem) == 72, "Offset mismatch for UMovieSceneEulerTransformPropertySystem::InstantiatorSystem");

// /Script/MovieSceneTracks.MovieSceneEulerTransformTrack
// Kind: Class; super: MovieScenePropertyTrack
class UMovieSceneEulerTransformTrack
{
public:
    std::uint8_t Pad_0000[0xF8]; // 0x0000
    void* SectionToKey; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t PropertyBinding[0x10]; // 0x0100 (Size: 0x10, Type: StructProperty)
    TArray<void*> Sections; // 0x0110 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMovieSceneEulerTransformTrack, SectionToKey) == 248, "Offset mismatch for UMovieSceneEulerTransformTrack::SectionToKey");
static_assert(offsetof(UMovieSceneEulerTransformTrack, PropertyBinding) == 256, "Offset mismatch for UMovieSceneEulerTransformTrack::PropertyBinding");
static_assert(offsetof(UMovieSceneEulerTransformTrack, Sections) == 272, "Offset mismatch for UMovieSceneEulerTransformTrack::Sections");

// /Script/MovieSceneTracks.MovieSceneEventRepeaterSection
// Kind: Class; super: MovieSceneEventSectionBase
class UMovieSceneEventRepeaterSection
{
public:
    std::uint8_t Pad_0000[0x148]; // 0x0000
    std::uint8_t Event[0x1]; // 0x0148 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMovieSceneEventRepeaterSection, Event) == 328, "Offset mismatch for UMovieSceneEventRepeaterSection::Event");

// /Script/MovieSceneTracks.MovieSceneEventSection
// Kind: Class; super: MovieSceneSection
class UMovieSceneEventSection
{
public:
    std::uint8_t Pad_0000[0x140]; // 0x0000
    std::uint8_t Events[0x38]; // 0x0140 (Size: 0x38, Type: StructProperty)
    std::uint8_t EventData[0x1]; // 0x0178 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMovieSceneEventSection, Events) == 320, "Offset mismatch for UMovieSceneEventSection::Events");
static_assert(offsetof(UMovieSceneEventSection, EventData) == 376, "Offset mismatch for UMovieSceneEventSection::EventData");

// /Script/MovieSceneTracks.MovieSceneEventSectionBase
// Kind: Class; super: MovieSceneSection
class UMovieSceneEventSectionBase
{
public:
    std::uint8_t Pad_0000[0x88]; // 0x0000
    std::uint8_t EvalOptions[0x8]; // 0x0088 (Size: 0x8, Type: StructProperty)
    std::uint8_t Easing[0x38]; // 0x0090 (Size: 0x38, Type: StructProperty)
    std::uint8_t SectionRange[0x10]; // 0x00C8 (Size: 0x10, Type: StructProperty)
    std::uint8_t TimecodeSource[0x18]; // 0x00D8 (Size: 0x18, Type: StructProperty)
    std::uint8_t ConditionContainer[0x8]; // 0x00F0 (Size: 0x8, Type: StructProperty)
    std::uint8_t PreRollFrames[0x4]; // 0x00F8 (Size: 0x4, Type: StructProperty)
    std::uint8_t PostRollFrames[0x4]; // 0x00FC (Size: 0x4, Type: StructProperty)
    std::int32_t RowIndex; // 0x0100 (Size: 0x4, Type: IntProperty)
    std::int32_t OverlapPriority; // 0x0104 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsActive; // 0x0108 (Size: 0x1, Type: BoolProperty)
    // 0x0108 BoolProperty bIsLocked (shared storage)
    std::uint8_t Pad_0001[0x3]; // 0x0109
    float StartTime; // 0x010C (Size: 0x4, Type: FloatProperty)
    float EndTime; // 0x0110 (Size: 0x4, Type: FloatProperty)
    float PreRollTime; // 0x0114 (Size: 0x4, Type: FloatProperty)
    float PostRollTime; // 0x0118 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsInfinite; // 0x011C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x011D
    std::uint8_t bSupportsInfiniteRange; // 0x0120 (Size: 0x1, Type: BoolProperty)
    std::uint8_t BlendType[0x1]; // 0x0121 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMovieSceneEventSectionBase, EvalOptions) == 136, "Offset mismatch for UMovieSceneEventSectionBase::EvalOptions");
static_assert(offsetof(UMovieSceneEventSectionBase, Easing) == 144, "Offset mismatch for UMovieSceneEventSectionBase::Easing");
static_assert(offsetof(UMovieSceneEventSectionBase, SectionRange) == 200, "Offset mismatch for UMovieSceneEventSectionBase::SectionRange");
static_assert(offsetof(UMovieSceneEventSectionBase, TimecodeSource) == 216, "Offset mismatch for UMovieSceneEventSectionBase::TimecodeSource");
static_assert(offsetof(UMovieSceneEventSectionBase, ConditionContainer) == 240, "Offset mismatch for UMovieSceneEventSectionBase::ConditionContainer");
static_assert(offsetof(UMovieSceneEventSectionBase, PreRollFrames) == 248, "Offset mismatch for UMovieSceneEventSectionBase::PreRollFrames");
static_assert(offsetof(UMovieSceneEventSectionBase, PostRollFrames) == 252, "Offset mismatch for UMovieSceneEventSectionBase::PostRollFrames");
static_assert(offsetof(UMovieSceneEventSectionBase, RowIndex) == 256, "Offset mismatch for UMovieSceneEventSectionBase::RowIndex");
static_assert(offsetof(UMovieSceneEventSectionBase, OverlapPriority) == 260, "Offset mismatch for UMovieSceneEventSectionBase::OverlapPriority");
static_assert(offsetof(UMovieSceneEventSectionBase, bIsActive) == 264, "Offset mismatch for UMovieSceneEventSectionBase::bIsActive");
static_assert(offsetof(UMovieSceneEventSectionBase, StartTime) == 268, "Offset mismatch for UMovieSceneEventSectionBase::StartTime");
static_assert(offsetof(UMovieSceneEventSectionBase, EndTime) == 272, "Offset mismatch for UMovieSceneEventSectionBase::EndTime");
static_assert(offsetof(UMovieSceneEventSectionBase, PreRollTime) == 276, "Offset mismatch for UMovieSceneEventSectionBase::PreRollTime");
static_assert(offsetof(UMovieSceneEventSectionBase, PostRollTime) == 280, "Offset mismatch for UMovieSceneEventSectionBase::PostRollTime");
static_assert(offsetof(UMovieSceneEventSectionBase, bIsInfinite) == 284, "Offset mismatch for UMovieSceneEventSectionBase::bIsInfinite");
static_assert(offsetof(UMovieSceneEventSectionBase, bSupportsInfiniteRange) == 288, "Offset mismatch for UMovieSceneEventSectionBase::bSupportsInfiniteRange");
static_assert(offsetof(UMovieSceneEventSectionBase, BlendType) == 289, "Offset mismatch for UMovieSceneEventSectionBase::BlendType");

// /Script/MovieSceneTracks.MovieSceneEventSystem
// Kind: Class; super: MovieSceneEntitySystem
class UMovieSceneEventSystem
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Linker; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMovieSceneEventSystem, Linker) == 40, "Offset mismatch for UMovieSceneEventSystem::Linker");

// /Script/MovieSceneTracks.MovieSceneEventTrack
// Kind: Class; super: MovieSceneNameableTrack
class UMovieSceneEventTrack
{
public:
    std::uint8_t Pad_0000[0x108]; // 0x0000
    std::uint8_t bFireEventsWhenBackwards; // 0x0108 (Size: 0x1, Type: BoolProperty)
    // 0x0108 BoolProperty bFireEventsWhenForwards (shared storage)
    std::uint8_t Pad_0001[0x3]; // 0x0109
    std::uint8_t EventPosition; // 0x010C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x010D
    TArray<void*> Sections; // 0x0110 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMovieSceneEventTrack, bFireEventsWhenBackwards) == 264, "Offset mismatch for UMovieSceneEventTrack::bFireEventsWhenBackwards");
static_assert(offsetof(UMovieSceneEventTrack, EventPosition) == 268, "Offset mismatch for UMovieSceneEventTrack::EventPosition");
static_assert(offsetof(UMovieSceneEventTrack, Sections) == 272, "Offset mismatch for UMovieSceneEventTrack::Sections");

// /Script/MovieSceneTracks.MovieSceneEventTriggerSection
// Kind: Class; super: MovieSceneEventSectionBase
class UMovieSceneEventTriggerSection
{
public:
    std::uint8_t Pad_0000[0x148]; // 0x0000
    std::uint8_t EventChannel[0x1]; // 0x0148 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMovieSceneEventTriggerSection, EventChannel) == 328, "Offset mismatch for UMovieSceneEventTriggerSection::EventChannel");

// /Script/MovieSceneTracks.MovieSceneFadeSection
// Kind: Class; super: MovieSceneSection
class UMovieSceneFadeSection
{
public:
    std::uint8_t Pad_0000[0x148]; // 0x0000
    std::uint8_t FloatCurve[0xD0]; // 0x0148 (Size: 0xD0, Type: StructProperty)
    std::uint8_t FadeColor[0x10]; // 0x0218 (Size: 0x10, Type: StructProperty)
    std::uint8_t bFadeAudio; // 0x0228 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMovieSceneFadeSection, FloatCurve) == 328, "Offset mismatch for UMovieSceneFadeSection::FloatCurve");
static_assert(offsetof(UMovieSceneFadeSection, FadeColor) == 536, "Offset mismatch for UMovieSceneFadeSection::FadeColor");
static_assert(offsetof(UMovieSceneFadeSection, bFadeAudio) == 552, "Offset mismatch for UMovieSceneFadeSection::bFadeAudio");

// /Script/MovieSceneTracks.MovieSceneFadeSystem
// Kind: Class; super: MovieSceneEntitySystem
class UMovieSceneFadeSystem
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Linker; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMovieSceneFadeSystem, Linker) == 40, "Offset mismatch for UMovieSceneFadeSystem::Linker");

// /Script/MovieSceneTracks.MovieSceneFadeTrack
// Kind: Class; super: MovieSceneFloatTrack
class UMovieSceneFadeTrack
{
public:
    std::uint8_t Pad_0000[0xF8]; // 0x0000
    void* SectionToKey; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t PropertyBinding[0x10]; // 0x0100 (Size: 0x10, Type: StructProperty)
    TArray<void*> Sections; // 0x0110 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMovieSceneFadeTrack, SectionToKey) == 248, "Offset mismatch for UMovieSceneFadeTrack::SectionToKey");
static_assert(offsetof(UMovieSceneFadeTrack, PropertyBinding) == 256, "Offset mismatch for UMovieSceneFadeTrack::PropertyBinding");
static_assert(offsetof(UMovieSceneFadeTrack, Sections) == 272, "Offset mismatch for UMovieSceneFadeTrack::Sections");

// /Script/MovieSceneTracks.MovieSceneFadeTrackTestLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UMovieSceneFadeTrackTestLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MovieSceneTracks.MovieSceneFloatPerlinNoiseChannelContainer
// Kind: Class; super: MovieSceneChannelOverrideContainer
class UMovieSceneFloatPerlinNoiseChannelContainer
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    std::uint8_t PerlinNoiseChannel[0x1]; // 0x0058 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMovieSceneFloatPerlinNoiseChannelContainer, PerlinNoiseChannel) == 88, "Offset mismatch for UMovieSceneFloatPerlinNoiseChannelContainer::PerlinNoiseChannel");

// /Script/MovieSceneTracks.MovieSceneFloatPropertySystem
// Kind: Class; super: MovieScenePropertySystem
class UMovieSceneFloatPropertySystem
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    void* InstantiatorSystem; // 0x0048 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMovieSceneFloatPropertySystem, InstantiatorSystem) == 72, "Offset mismatch for UMovieSceneFloatPropertySystem::InstantiatorSystem");

// /Script/MovieSceneTracks.MovieSceneFloatSection
// Kind: Class; super: MovieSceneSection
class UMovieSceneFloatSection
{
public:
    std::uint8_t Pad_0000[0x150]; // 0x0000
    std::uint8_t FloatCurve[0xD0]; // 0x0150 (Size: 0xD0, Type: StructProperty)
    void* OverrideRegistry; // 0x0220 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMovieSceneFloatSection, FloatCurve) == 336, "Offset mismatch for UMovieSceneFloatSection::FloatCurve");
static_assert(offsetof(UMovieSceneFloatSection, OverrideRegistry) == 544, "Offset mismatch for UMovieSceneFloatSection::OverrideRegistry");

// /Script/MovieSceneTracks.MovieSceneFloatTrack
// Kind: Class; super: MovieScenePropertyTrack
class UMovieSceneFloatTrack
{
public:
    std::uint8_t Pad_0000[0xF8]; // 0x0000
    void* SectionToKey; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t PropertyBinding[0x10]; // 0x0100 (Size: 0x10, Type: StructProperty)
    TArray<void*> Sections; // 0x0110 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMovieSceneFloatTrack, SectionToKey) == 248, "Offset mismatch for UMovieSceneFloatTrack::SectionToKey");
static_assert(offsetof(UMovieSceneFloatTrack, PropertyBinding) == 256, "Offset mismatch for UMovieSceneFloatTrack::PropertyBinding");
static_assert(offsetof(UMovieSceneFloatTrack, Sections) == 272, "Offset mismatch for UMovieSceneFloatTrack::Sections");

// /Script/MovieSceneTracks.MovieSceneFloatVectorPropertySystem
// Kind: Class; super: MovieScenePropertySystem
class UMovieSceneFloatVectorPropertySystem
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    void* InstantiatorSystem; // 0x0048 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMovieSceneFloatVectorPropertySystem, InstantiatorSystem) == 72, "Offset mismatch for UMovieSceneFloatVectorPropertySystem::InstantiatorSystem");

// /Script/MovieSceneTracks.MovieSceneFloatVectorSection
// Kind: Class; super: MovieSceneSection
class UMovieSceneFloatVectorSection
{
public:
    std::uint8_t Pad_0000[0x148]; // 0x0000
    std::uint8_t Curves[0x340]; // 0x0148 (Size: 0x340, Type: StructProperty)
    std::int32_t ChannelsUsed; // 0x0488 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UMovieSceneFloatVectorSection, Curves) == 328, "Offset mismatch for UMovieSceneFloatVectorSection::Curves");
static_assert(offsetof(UMovieSceneFloatVectorSection, ChannelsUsed) == 1160, "Offset mismatch for UMovieSceneFloatVectorSection::ChannelsUsed");

// /Script/MovieSceneTracks.MovieSceneFloatVectorTrack
// Kind: Class; super: MovieScenePropertyTrack
class UMovieSceneFloatVectorTrack
{
public:
    std::uint8_t Pad_0000[0x120]; // 0x0000
    std::int32_t NumChannelsUsed; // 0x0120 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UMovieSceneFloatVectorTrack, NumChannelsUsed) == 288, "Offset mismatch for UMovieSceneFloatVectorTrack::NumChannelsUsed");

// /Script/MovieSceneTracks.MovieSceneHierarchicalBiasSystem
// Kind: Class; super: MovieSceneEntityInstantiatorSystem
class UMovieSceneHierarchicalBiasSystem
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    void* GroupingSystem; // 0x0040 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMovieSceneHierarchicalBiasSystem, GroupingSystem) == 64, "Offset mismatch for UMovieSceneHierarchicalBiasSystem::GroupingSystem");

// /Script/MovieSceneTracks.MovieSceneHierarchicalEasingFinalizationSystem
// Kind: Class; super: MovieSceneEntityInstantiatorSystem
class UMovieSceneHierarchicalEasingFinalizationSystem
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Linker; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMovieSceneHierarchicalEasingFinalizationSystem, Linker) == 40, "Offset mismatch for UMovieSceneHierarchicalEasingFinalizationSystem::Linker");

// /Script/MovieSceneTracks.MovieSceneHierarchicalEasingInstantiatorSystem
// Kind: Class; super: MovieSceneEntityInstantiatorSystem
class UMovieSceneHierarchicalEasingInstantiatorSystem
{
public:
    std::uint8_t Pad_0000[0x88]; // 0x0000
    void* EvaluatorSystem; // 0x0088 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMovieSceneHierarchicalEasingInstantiatorSystem, EvaluatorSystem) == 136, "Offset mismatch for UMovieSceneHierarchicalEasingInstantiatorSystem::EvaluatorSystem");

// /Script/MovieSceneTracks.MovieSceneIntegerPropertySystem
// Kind: Class; super: MovieScenePropertySystem
class UMovieSceneIntegerPropertySystem
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    void* InstantiatorSystem; // 0x0048 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMovieSceneIntegerPropertySystem, InstantiatorSystem) == 72, "Offset mismatch for UMovieSceneIntegerPropertySystem::InstantiatorSystem");

// /Script/MovieSceneTracks.MovieSceneIntegerSection
// Kind: Class; super: MovieSceneSection
class UMovieSceneIntegerSection
{
public:
    std::uint8_t Pad_0000[0x148]; // 0x0000
    std::uint8_t IntegerCurve[0x1]; // 0x0148 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMovieSceneIntegerSection, IntegerCurve) == 328, "Offset mismatch for UMovieSceneIntegerSection::IntegerCurve");

// /Script/MovieSceneTracks.MovieSceneIntegerTrack
// Kind: Class; super: MovieScenePropertyTrack
class UMovieSceneIntegerTrack
{
public:
    std::uint8_t Pad_0000[0xF8]; // 0x0000
    void* SectionToKey; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t PropertyBinding[0x10]; // 0x0100 (Size: 0x10, Type: StructProperty)
    TArray<void*> Sections; // 0x0110 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMovieSceneIntegerTrack, SectionToKey) == 248, "Offset mismatch for UMovieSceneIntegerTrack::SectionToKey");
static_assert(offsetof(UMovieSceneIntegerTrack, PropertyBinding) == 256, "Offset mismatch for UMovieSceneIntegerTrack::PropertyBinding");
static_assert(offsetof(UMovieSceneIntegerTrack, Sections) == 272, "Offset mismatch for UMovieSceneIntegerTrack::Sections");

// /Script/MovieSceneTracks.MovieSceneInterrogatedPropertyInstantiatorSystem
// Kind: Class; super: MovieSceneEntityInstantiatorSystem
class UMovieSceneInterrogatedPropertyInstantiatorSystem
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Linker; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMovieSceneInterrogatedPropertyInstantiatorSystem, Linker) == 40, "Offset mismatch for UMovieSceneInterrogatedPropertyInstantiatorSystem::Linker");

// /Script/MovieSceneTracks.MovieSceneLevelVisibilitySection
// Kind: Class; super: MovieSceneSection
class UMovieSceneLevelVisibilitySection
{
public:
    std::uint8_t Pad_0000[0x148]; // 0x0000
    std::uint8_t Visibility; // 0x0148 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0149
    TArray<void*> LevelNames; // 0x0150 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMovieSceneLevelVisibilitySection, Visibility) == 328, "Offset mismatch for UMovieSceneLevelVisibilitySection::Visibility");
static_assert(offsetof(UMovieSceneLevelVisibilitySection, LevelNames) == 336, "Offset mismatch for UMovieSceneLevelVisibilitySection::LevelNames");

// /Script/MovieSceneTracks.MovieSceneLevelVisibilitySystem
// Kind: Class; super: MovieSceneEntitySystem
class UMovieSceneLevelVisibilitySystem
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Linker; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMovieSceneLevelVisibilitySystem, Linker) == 40, "Offset mismatch for UMovieSceneLevelVisibilitySystem::Linker");

// /Script/MovieSceneTracks.MovieSceneLevelVisibilityTrack
// Kind: Class; super: MovieSceneNameableTrack
class UMovieSceneLevelVisibilityTrack
{
public:
    std::uint8_t Pad_0000[0xF8]; // 0x0000
    TArray<void*> Sections; // 0x00F8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMovieSceneLevelVisibilityTrack, Sections) == 248, "Offset mismatch for UMovieSceneLevelVisibilityTrack::Sections");

// /Script/MovieSceneTracks.MovieSceneMaterialParameterCollectionSystem
// Kind: Class; super: MovieSceneEntitySystem
class UMovieSceneMaterialParameterCollectionSystem
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Linker; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMovieSceneMaterialParameterCollectionSystem, Linker) == 40, "Offset mismatch for UMovieSceneMaterialParameterCollectionSystem::Linker");

// /Script/MovieSceneTracks.MovieSceneMaterialParameterCollectionTrack
// Kind: Class; super: MovieSceneMaterialTrack
class UMovieSceneMaterialParameterCollectionTrack
{
public:
    std::uint8_t Pad_0000[0x120]; // 0x0000
    void* MPC; // 0x0120 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMovieSceneMaterialParameterCollectionTrack, MPC) == 288, "Offset mismatch for UMovieSceneMaterialParameterCollectionTrack::MPC");

// /Script/MovieSceneTracks.MovieSceneMaterialParameterEvaluationSystem
// Kind: Class; super: MovieSceneEntitySystem
class UMovieSceneMaterialParameterEvaluationSystem
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Linker; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMovieSceneMaterialParameterEvaluationSystem, Linker) == 40, "Offset mismatch for UMovieSceneMaterialParameterEvaluationSystem::Linker");

// /Script/MovieSceneTracks.MovieSceneMaterialParameterInstantiatorSystem
// Kind: Class; super: MovieSceneEntityInstantiatorSystem
class UMovieSceneMaterialParameterInstantiatorSystem
{
public:
    std::uint8_t Pad_0000[0x1D0]; // 0x0000
    void* DoubleBlenderSystem; // 0x01D0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMovieSceneMaterialParameterInstantiatorSystem, DoubleBlenderSystem) == 464, "Offset mismatch for UMovieSceneMaterialParameterInstantiatorSystem::DoubleBlenderSystem");

// /Script/MovieSceneTracks.MovieSceneMaterialTrack
// Kind: Class; super: MovieSceneNameableTrack
class UMovieSceneMaterialTrack
{
public:
    std::uint8_t Pad_0000[0xF8]; // 0x0000
    TArray<void*> Sections; // 0x00F8 (Size: 0x10, Type: ArrayProperty)
    void* SectionToKey; // 0x0108 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMovieSceneMaterialTrack, Sections) == 248, "Offset mismatch for UMovieSceneMaterialTrack::Sections");
static_assert(offsetof(UMovieSceneMaterialTrack, SectionToKey) == 264, "Offset mismatch for UMovieSceneMaterialTrack::SectionToKey");

// /Script/MovieSceneTracks.MovieSceneMotionVectorSimulationSystem
// Kind: Class; super: MovieSceneEntitySystem
class UMovieSceneMotionVectorSimulationSystem
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Linker; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMovieSceneMotionVectorSimulationSystem, Linker) == 40, "Offset mismatch for UMovieSceneMotionVectorSimulationSystem::Linker");

// /Script/MovieSceneTracks.MovieSceneObjectPropertySection
// Kind: Class; super: MovieSceneSection
class UMovieSceneObjectPropertySection
{
public:
    std::uint8_t Pad_0000[0x148]; // 0x0000
    std::uint8_t ObjectChannel[0x1]; // 0x0148 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMovieSceneObjectPropertySection, ObjectChannel) == 328, "Offset mismatch for UMovieSceneObjectPropertySection::ObjectChannel");

// /Script/MovieSceneTracks.MovieSceneObjectPropertySystem
// Kind: Class; super: MovieScenePropertySystem
class UMovieSceneObjectPropertySystem
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    void* InstantiatorSystem; // 0x0048 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMovieSceneObjectPropertySystem, InstantiatorSystem) == 72, "Offset mismatch for UMovieSceneObjectPropertySystem::InstantiatorSystem");

// /Script/MovieSceneTracks.MovieSceneObjectPropertyTrack
// Kind: Class; super: MovieScenePropertyTrack
class UMovieSceneObjectPropertyTrack
{
public:
    std::uint8_t Pad_0000[0x120]; // 0x0000
    void* PropertyClass; // 0x0120 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UMovieSceneObjectPropertyTrack, PropertyClass) == 288, "Offset mismatch for UMovieSceneObjectPropertyTrack::PropertyClass");

// /Script/MovieSceneTracks.MovieSceneParameterSection
// Kind: Class; super: MovieSceneSection
class UMovieSceneParameterSection
{
public:
    std::uint8_t Pad_0000[0x148]; // 0x0000
    TArray<void*> BoolParameterNamesAndCurves; // 0x0148 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ScalarParameterNamesAndCurves; // 0x0158 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Vector2DParameterNamesAndCurves; // 0x0168 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> VectorParameterNamesAndCurves; // 0x0178 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ColorParameterNamesAndCurves; // 0x0188 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> TransformParameterNamesAndCurves; // 0x0198 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMovieSceneParameterSection, BoolParameterNamesAndCurves) == 328, "Offset mismatch for UMovieSceneParameterSection::BoolParameterNamesAndCurves");
static_assert(offsetof(UMovieSceneParameterSection, ScalarParameterNamesAndCurves) == 344, "Offset mismatch for UMovieSceneParameterSection::ScalarParameterNamesAndCurves");
static_assert(offsetof(UMovieSceneParameterSection, Vector2DParameterNamesAndCurves) == 360, "Offset mismatch for UMovieSceneParameterSection::Vector2DParameterNamesAndCurves");
static_assert(offsetof(UMovieSceneParameterSection, VectorParameterNamesAndCurves) == 376, "Offset mismatch for UMovieSceneParameterSection::VectorParameterNamesAndCurves");
static_assert(offsetof(UMovieSceneParameterSection, ColorParameterNamesAndCurves) == 392, "Offset mismatch for UMovieSceneParameterSection::ColorParameterNamesAndCurves");
static_assert(offsetof(UMovieSceneParameterSection, TransformParameterNamesAndCurves) == 408, "Offset mismatch for UMovieSceneParameterSection::TransformParameterNamesAndCurves");

// /Script/MovieSceneTracks.MovieSceneParameterSectionExtender
// Kind: Class; super: Interface
class UMovieSceneParameterSectionExtender
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MovieSceneTracks.MovieScenePartialEvaluationTestObject
// Kind: Class; super: Object
class UMovieScenePartialEvaluationTestObject
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    float FloatProperty; // 0x0028 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x002C
    std::uint8_t VectorProperty[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMovieScenePartialEvaluationTestObject, FloatProperty) == 40, "Offset mismatch for UMovieScenePartialEvaluationTestObject::FloatProperty");
static_assert(offsetof(UMovieScenePartialEvaluationTestObject, VectorProperty) == 48, "Offset mismatch for UMovieScenePartialEvaluationTestObject::VectorProperty");

// /Script/MovieSceneTracks.MovieSceneParticleParameterTrack
// Kind: Class; super: MovieSceneNameableTrack
class UMovieSceneParticleParameterTrack
{
public:
    std::uint8_t Pad_0000[0x100]; // 0x0000
    TArray<void*> Sections; // 0x0100 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMovieSceneParticleParameterTrack, Sections) == 256, "Offset mismatch for UMovieSceneParticleParameterTrack::Sections");

// /Script/MovieSceneTracks.MovieSceneParticleSection
// Kind: Class; super: MovieSceneSection
class UMovieSceneParticleSection
{
public:
    std::uint8_t Pad_0000[0x140]; // 0x0000
    std::uint8_t ParticleKeys[0x1]; // 0x0140 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMovieSceneParticleSection, ParticleKeys) == 320, "Offset mismatch for UMovieSceneParticleSection::ParticleKeys");

// /Script/MovieSceneTracks.MovieSceneParticleTrack
// Kind: Class; super: MovieSceneNameableTrack
class UMovieSceneParticleTrack
{
public:
    std::uint8_t Pad_0000[0x100]; // 0x0000
    TArray<void*> ParticleSections; // 0x0100 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMovieSceneParticleTrack, ParticleSections) == 256, "Offset mismatch for UMovieSceneParticleTrack::ParticleSections");

// /Script/MovieSceneTracks.MovieScenePiecewiseBoolBlenderSystem
// Kind: Class; super: MovieSceneBlenderSystem
class UMovieScenePiecewiseBoolBlenderSystem
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Linker; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMovieScenePiecewiseBoolBlenderSystem, Linker) == 40, "Offset mismatch for UMovieScenePiecewiseBoolBlenderSystem::Linker");

// /Script/MovieSceneTracks.MovieScenePiecewiseByteBlenderSystem
// Kind: Class; super: MovieSceneBlenderSystem
class UMovieScenePiecewiseByteBlenderSystem
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Linker; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMovieScenePiecewiseByteBlenderSystem, Linker) == 40, "Offset mismatch for UMovieScenePiecewiseByteBlenderSystem::Linker");

// /Script/MovieSceneTracks.MovieScenePiecewiseDoubleBlenderSystem
// Kind: Class; super: MovieSceneBlenderSystem
class UMovieScenePiecewiseDoubleBlenderSystem
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Linker; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMovieScenePiecewiseDoubleBlenderSystem, Linker) == 40, "Offset mismatch for UMovieScenePiecewiseDoubleBlenderSystem::Linker");

// /Script/MovieSceneTracks.MovieScenePiecewiseEnumBlenderSystem
// Kind: Class; super: MovieSceneBlenderSystem
class UMovieScenePiecewiseEnumBlenderSystem
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Linker; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMovieScenePiecewiseEnumBlenderSystem, Linker) == 40, "Offset mismatch for UMovieScenePiecewiseEnumBlenderSystem::Linker");

// /Script/MovieSceneTracks.MovieScenePiecewiseIntegerBlenderSystem
// Kind: Class; super: MovieSceneBlenderSystem
class UMovieScenePiecewiseIntegerBlenderSystem
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Linker; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMovieScenePiecewiseIntegerBlenderSystem, Linker) == 40, "Offset mismatch for UMovieScenePiecewiseIntegerBlenderSystem::Linker");

// /Script/MovieSceneTracks.MovieScenePlatformCondition
// Kind: Class; super: MovieSceneCondition
class UMovieScenePlatformCondition
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    TArray<void*> ValidPlatforms; // 0x0060 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMovieScenePlatformCondition, ValidPlatforms) == 96, "Offset mismatch for UMovieScenePlatformCondition::ValidPlatforms");

// /Script/MovieSceneTracks.MovieScenePostEvalEventSystem
// Kind: Class; super: MovieSceneEventSystem
class UMovieScenePostEvalEventSystem
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Linker; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMovieScenePostEvalEventSystem, Linker) == 40, "Offset mismatch for UMovieScenePostEvalEventSystem::Linker");

// /Script/MovieSceneTracks.MovieScenePostSpawnEventSystem
// Kind: Class; super: MovieSceneEventSystem
class UMovieScenePostSpawnEventSystem
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Linker; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMovieScenePostSpawnEventSystem, Linker) == 40, "Offset mismatch for UMovieScenePostSpawnEventSystem::Linker");

// /Script/MovieSceneTracks.MovieScenePreSpawnEventSystem
// Kind: Class; super: MovieSceneEventSystem
class UMovieScenePreSpawnEventSystem
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Linker; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMovieScenePreSpawnEventSystem, Linker) == 40, "Offset mismatch for UMovieScenePreSpawnEventSystem::Linker");

// /Script/MovieSceneTracks.MovieScenePredictionSystem
// Kind: Class; super: MovieSceneEntitySystem
class UMovieScenePredictionSystem
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    TArray<void*> PendingPredictions; // 0x0090 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ProcessingPredictions; // 0x00A0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMovieScenePredictionSystem, PendingPredictions) == 144, "Offset mismatch for UMovieScenePredictionSystem::PendingPredictions");
static_assert(offsetof(UMovieScenePredictionSystem, ProcessingPredictions) == 160, "Offset mismatch for UMovieScenePredictionSystem::ProcessingPredictions");

// /Script/MovieSceneTracks.MovieScenePrimitiveMaterialSection
// Kind: Class; super: MovieSceneSection
class UMovieScenePrimitiveMaterialSection
{
public:
    std::uint8_t Pad_0000[0x148]; // 0x0000
    std::uint8_t MaterialChannel[0x1]; // 0x0148 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMovieScenePrimitiveMaterialSection, MaterialChannel) == 328, "Offset mismatch for UMovieScenePrimitiveMaterialSection::MaterialChannel");

// /Script/MovieSceneTracks.MovieScenePrimitiveMaterialTrack
// Kind: Class; super: MovieScenePropertyTrack
class UMovieScenePrimitiveMaterialTrack
{
public:
    std::uint8_t Pad_0000[0x120]; // 0x0000
    std::uint8_t MaterialInfo[0x1]; // 0x0120 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMovieScenePrimitiveMaterialTrack, MaterialInfo) == 288, "Offset mismatch for UMovieScenePrimitiveMaterialTrack::MaterialInfo");

// /Script/MovieSceneTracks.MovieScenePropertyInstantiatorSystem
// Kind: Class; super: MovieSceneEntityInstantiatorSystem
class UMovieScenePropertyInstantiatorSystem
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Linker; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMovieScenePropertyInstantiatorSystem, Linker) == 40, "Offset mismatch for UMovieScenePropertyInstantiatorSystem::Linker");

// /Script/MovieSceneTracks.MovieScenePropertyNotificationSystem
// Kind: Class; super: MovieSceneEntitySystem
class UMovieScenePropertyNotificationSystem
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Linker; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMovieScenePropertyNotificationSystem, Linker) == 40, "Offset mismatch for UMovieScenePropertyNotificationSystem::Linker");

// /Script/MovieSceneTracks.MovieScenePropertySystem
// Kind: Class; super: MovieSceneEntitySystem
class UMovieScenePropertySystem
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    void* InstantiatorSystem; // 0x0048 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMovieScenePropertySystem, InstantiatorSystem) == 72, "Offset mismatch for UMovieScenePropertySystem::InstantiatorSystem");

// /Script/MovieSceneTracks.MovieScenePropertyTrack
// Kind: Class; super: MovieSceneNameableTrack
class UMovieScenePropertyTrack
{
public:
    std::uint8_t Pad_0000[0xF8]; // 0x0000
    void* SectionToKey; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t PropertyBinding[0x10]; // 0x0100 (Size: 0x10, Type: StructProperty)
    TArray<void*> Sections; // 0x0110 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMovieScenePropertyTrack, SectionToKey) == 248, "Offset mismatch for UMovieScenePropertyTrack::SectionToKey");
static_assert(offsetof(UMovieScenePropertyTrack, PropertyBinding) == 256, "Offset mismatch for UMovieScenePropertyTrack::PropertyBinding");
static_assert(offsetof(UMovieScenePropertyTrack, Sections) == 272, "Offset mismatch for UMovieScenePropertyTrack::Sections");

// /Script/MovieSceneTracks.MovieSceneQuaternionBlenderSystem
// Kind: Class; super: MovieSceneBlenderSystem
class UMovieSceneQuaternionBlenderSystem
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Linker; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMovieSceneQuaternionBlenderSystem, Linker) == 40, "Offset mismatch for UMovieSceneQuaternionBlenderSystem::Linker");

// /Script/MovieSceneTracks.MovieSceneQuaternionInterpolationRotationSystem
// Kind: Class; super: MovieSceneEntitySystem
class UMovieSceneQuaternionInterpolationRotationSystem
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Linker; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMovieSceneQuaternionInterpolationRotationSystem, Linker) == 40, "Offset mismatch for UMovieSceneQuaternionInterpolationRotationSystem::Linker");

// /Script/MovieSceneTracks.MovieSceneReplaceableActorBinding
// Kind: Class; super: MovieSceneReplaceableBindingBase
class UMovieSceneReplaceableActorBinding
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MovieSceneTracks.MovieSceneReplaceableActorBinding_BPBase
// Kind: Class; super: MovieSceneReplaceableBindingBase
class UMovieSceneReplaceableActorBinding_BPBase
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::int32_t CustomBindingPriority; // 0x0028 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x002C
    void* PreviewSpawnableType; // 0x0030 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UMovieSceneReplaceableActorBinding_BPBase, CustomBindingPriority) == 40, "Offset mismatch for UMovieSceneReplaceableActorBinding_BPBase::CustomBindingPriority");
static_assert(offsetof(UMovieSceneReplaceableActorBinding_BPBase, PreviewSpawnableType) == 48, "Offset mismatch for UMovieSceneReplaceableActorBinding_BPBase::PreviewSpawnableType");

// /Script/MovieSceneTracks.MovieSceneReplaceableDirectorBlueprintBinding
// Kind: Class; super: MovieSceneReplaceableBindingBase
class UMovieSceneReplaceableDirectorBlueprintBinding
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t DynamicBinding[0x28]; // 0x0028 (Size: 0x28, Type: StructProperty)
    void* PreviewSpawnableType; // 0x0050 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UMovieSceneReplaceableDirectorBlueprintBinding, DynamicBinding) == 40, "Offset mismatch for UMovieSceneReplaceableDirectorBlueprintBinding::DynamicBinding");
static_assert(offsetof(UMovieSceneReplaceableDirectorBlueprintBinding, PreviewSpawnableType) == 80, "Offset mismatch for UMovieSceneReplaceableDirectorBlueprintBinding::PreviewSpawnableType");

// /Script/MovieSceneTracks.MovieSceneRotatorPropertySystem
// Kind: Class; super: MovieScenePropertySystem
class UMovieSceneRotatorPropertySystem
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    void* InstantiatorSystem; // 0x0048 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMovieSceneRotatorPropertySystem, InstantiatorSystem) == 72, "Offset mismatch for UMovieSceneRotatorPropertySystem::InstantiatorSystem");

// /Script/MovieSceneTracks.MovieSceneRotatorSection
// Kind: Class; super: MovieSceneSection
class UMovieSceneRotatorSection
{
public:
    std::uint8_t Pad_0000[0x148]; // 0x0000
    std::uint8_t Rotation[0x1]; // 0x0148 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMovieSceneRotatorSection, Rotation) == 328, "Offset mismatch for UMovieSceneRotatorSection::Rotation");

// /Script/MovieSceneTracks.MovieSceneRotatorTrack
// Kind: Class; super: MovieScenePropertyTrack
class UMovieSceneRotatorTrack
{
public:
    std::uint8_t Pad_0000[0xF8]; // 0x0000
    void* SectionToKey; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t PropertyBinding[0x10]; // 0x0100 (Size: 0x10, Type: StructProperty)
    TArray<void*> Sections; // 0x0110 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMovieSceneRotatorTrack, SectionToKey) == 248, "Offset mismatch for UMovieSceneRotatorTrack::SectionToKey");
static_assert(offsetof(UMovieSceneRotatorTrack, PropertyBinding) == 256, "Offset mismatch for UMovieSceneRotatorTrack::PropertyBinding");
static_assert(offsetof(UMovieSceneRotatorTrack, Sections) == 272, "Offset mismatch for UMovieSceneRotatorTrack::Sections");

// /Script/MovieSceneTracks.MovieSceneScalabilityCondition
// Kind: Class; super: MovieSceneCondition
class UMovieSceneScalabilityCondition
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    std::uint8_t Group; // 0x0060 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Operator; // 0x0061 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Level; // 0x0062 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UMovieSceneScalabilityCondition, Group) == 96, "Offset mismatch for UMovieSceneScalabilityCondition::Group");
static_assert(offsetof(UMovieSceneScalabilityCondition, Operator) == 97, "Offset mismatch for UMovieSceneScalabilityCondition::Operator");
static_assert(offsetof(UMovieSceneScalabilityCondition, Level) == 98, "Offset mismatch for UMovieSceneScalabilityCondition::Level");

// /Script/MovieSceneTracks.MovieSceneSectionsToKey
// Kind: Class; super: Interface
class UMovieSceneSectionsToKey
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MovieSceneTracks.MovieSceneSkeletalAnimationSection
// Kind: Class; super: MovieSceneSection
class UMovieSceneSkeletalAnimationSection
{
public:
    std::uint8_t Pad_0000[0x148]; // 0x0000
    std::uint8_t Params[0x110]; // 0x0148 (Size: 0x110, Type: StructProperty)
    void* AnimSequence; // 0x0258 (Size: 0x8, Type: ObjectProperty)
    void* Animation; // 0x0260 (Size: 0x8, Type: ObjectProperty)
    float StartOffset; // 0x0268 (Size: 0x4, Type: FloatProperty)
    float EndOffset; // 0x026C (Size: 0x4, Type: FloatProperty)
    float PlayRate; // 0x0270 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bReverse; // 0x0274 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0275
    FName SlotName; // 0x0278 (Size: 0x8, Type: NameProperty)
    std::uint8_t StartLocationOffset[0x18]; // 0x0280 (Size: 0x18, Type: StructProperty)
    std::uint8_t StartRotationOffset[0x18]; // 0x0298 (Size: 0x18, Type: StructProperty)
    FName MatchedBoneName; // 0x02B0 (Size: 0x8, Type: NameProperty)
    std::uint8_t MatchedLocationOffset[0x18]; // 0x02B8 (Size: 0x18, Type: StructProperty)
    std::uint8_t MatchedRotationOffset[0x18]; // 0x02D0 (Size: 0x18, Type: StructProperty)
    std::uint8_t bDebugForceTickPose; // 0x02E8 (Size: 0x1, Type: BoolProperty)
    // 0x02E8 BoolProperty bMatchIncludeZHeight (shared storage)
    // 0x02E8 BoolProperty bMatchRotationPitch (shared storage)
    // 0x02E8 BoolProperty bMatchRotationRoll (shared storage)
    // 0x02E8 BoolProperty bMatchRotationYaw (shared storage)
    // 0x02E8 BoolProperty bMatchTranslation (shared storage)
    // 0x02E8 BoolProperty bMatchWithPrevious (shared storage)
};

static_assert(offsetof(UMovieSceneSkeletalAnimationSection, Params) == 328, "Offset mismatch for UMovieSceneSkeletalAnimationSection::Params");
static_assert(offsetof(UMovieSceneSkeletalAnimationSection, AnimSequence) == 600, "Offset mismatch for UMovieSceneSkeletalAnimationSection::AnimSequence");
static_assert(offsetof(UMovieSceneSkeletalAnimationSection, Animation) == 608, "Offset mismatch for UMovieSceneSkeletalAnimationSection::Animation");
static_assert(offsetof(UMovieSceneSkeletalAnimationSection, StartOffset) == 616, "Offset mismatch for UMovieSceneSkeletalAnimationSection::StartOffset");
static_assert(offsetof(UMovieSceneSkeletalAnimationSection, EndOffset) == 620, "Offset mismatch for UMovieSceneSkeletalAnimationSection::EndOffset");
static_assert(offsetof(UMovieSceneSkeletalAnimationSection, PlayRate) == 624, "Offset mismatch for UMovieSceneSkeletalAnimationSection::PlayRate");
static_assert(offsetof(UMovieSceneSkeletalAnimationSection, bReverse) == 628, "Offset mismatch for UMovieSceneSkeletalAnimationSection::bReverse");
static_assert(offsetof(UMovieSceneSkeletalAnimationSection, SlotName) == 632, "Offset mismatch for UMovieSceneSkeletalAnimationSection::SlotName");
static_assert(offsetof(UMovieSceneSkeletalAnimationSection, StartLocationOffset) == 640, "Offset mismatch for UMovieSceneSkeletalAnimationSection::StartLocationOffset");
static_assert(offsetof(UMovieSceneSkeletalAnimationSection, StartRotationOffset) == 664, "Offset mismatch for UMovieSceneSkeletalAnimationSection::StartRotationOffset");
static_assert(offsetof(UMovieSceneSkeletalAnimationSection, MatchedBoneName) == 688, "Offset mismatch for UMovieSceneSkeletalAnimationSection::MatchedBoneName");
static_assert(offsetof(UMovieSceneSkeletalAnimationSection, MatchedLocationOffset) == 696, "Offset mismatch for UMovieSceneSkeletalAnimationSection::MatchedLocationOffset");
static_assert(offsetof(UMovieSceneSkeletalAnimationSection, MatchedRotationOffset) == 720, "Offset mismatch for UMovieSceneSkeletalAnimationSection::MatchedRotationOffset");
static_assert(offsetof(UMovieSceneSkeletalAnimationSection, bDebugForceTickPose) == 744, "Offset mismatch for UMovieSceneSkeletalAnimationSection::bDebugForceTickPose");

// /Script/MovieSceneTracks.MovieSceneSkeletalAnimationSystem
// Kind: Class; super: MovieSceneEntitySystem
class UMovieSceneSkeletalAnimationSystem
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Linker; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMovieSceneSkeletalAnimationSystem, Linker) == 40, "Offset mismatch for UMovieSceneSkeletalAnimationSystem::Linker");

// /Script/MovieSceneTracks.MovieSceneSkeletalAnimationTrack
// Kind: Class; super: MovieSceneCommonAnimationTrack
class UMovieSceneSkeletalAnimationTrack
{
public:
    std::uint8_t Pad_0000[0x1A0]; // 0x0000
    std::uint8_t bUseLegacySectionIndexBlend; // 0x01A0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t SwapRootBone; // 0x01A1 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UMovieSceneSkeletalAnimationTrack, bUseLegacySectionIndexBlend) == 416, "Offset mismatch for UMovieSceneSkeletalAnimationTrack::bUseLegacySectionIndexBlend");
static_assert(offsetof(UMovieSceneSkeletalAnimationTrack, SwapRootBone) == 417, "Offset mismatch for UMovieSceneSkeletalAnimationTrack::SwapRootBone");

// /Script/MovieSceneTracks.MovieSceneSlomoSection
// Kind: Class; super: MovieSceneSection
class UMovieSceneSlomoSection
{
public:
    std::uint8_t Pad_0000[0x148]; // 0x0000
    std::uint8_t FloatCurve[0x1]; // 0x0148 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMovieSceneSlomoSection, FloatCurve) == 328, "Offset mismatch for UMovieSceneSlomoSection::FloatCurve");

// /Script/MovieSceneTracks.MovieSceneSlomoSystem
// Kind: Class; super: MovieSceneEntitySystem
class UMovieSceneSlomoSystem
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Linker; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMovieSceneSlomoSystem, Linker) == 40, "Offset mismatch for UMovieSceneSlomoSystem::Linker");

// /Script/MovieSceneTracks.MovieSceneSlomoTrack
// Kind: Class; super: MovieSceneFloatTrack
class UMovieSceneSlomoTrack
{
public:
    std::uint8_t Pad_0000[0xF8]; // 0x0000
    void* SectionToKey; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t PropertyBinding[0x10]; // 0x0100 (Size: 0x10, Type: StructProperty)
    TArray<void*> Sections; // 0x0110 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMovieSceneSlomoTrack, SectionToKey) == 248, "Offset mismatch for UMovieSceneSlomoTrack::SectionToKey");
static_assert(offsetof(UMovieSceneSlomoTrack, PropertyBinding) == 256, "Offset mismatch for UMovieSceneSlomoTrack::PropertyBinding");
static_assert(offsetof(UMovieSceneSlomoTrack, Sections) == 272, "Offset mismatch for UMovieSceneSlomoTrack::Sections");

// /Script/MovieSceneTracks.MovieSceneSpawnableActorBinding
// Kind: Class; super: MovieSceneSpawnableActorBindingBase
class UMovieSceneSpawnableActorBinding
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* ActorTemplate; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMovieSceneSpawnableActorBinding, ActorTemplate) == 56, "Offset mismatch for UMovieSceneSpawnableActorBinding::ActorTemplate");

// /Script/MovieSceneTracks.MovieSceneSpawnableActorBindingBase
// Kind: Class; super: MovieSceneSpawnableBindingBase
class UMovieSceneSpawnableActorBindingBase
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t bNetAddressableName; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0031
    FName LevelName; // 0x0034 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UMovieSceneSpawnableActorBindingBase, bNetAddressableName) == 48, "Offset mismatch for UMovieSceneSpawnableActorBindingBase::bNetAddressableName");
static_assert(offsetof(UMovieSceneSpawnableActorBindingBase, LevelName) == 52, "Offset mismatch for UMovieSceneSpawnableActorBindingBase::LevelName");

// /Script/MovieSceneTracks.MovieSceneSpawnableDirectorBlueprintBinding
// Kind: Class; super: MovieSceneSpawnableBindingBase
class UMovieSceneSpawnableDirectorBlueprintBinding
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t DynamicBinding[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMovieSceneSpawnableDirectorBlueprintBinding, DynamicBinding) == 48, "Offset mismatch for UMovieSceneSpawnableDirectorBlueprintBinding::DynamicBinding");

// /Script/MovieSceneTracks.MovieSceneStringPropertySystem
// Kind: Class; super: MovieScenePropertySystem
class UMovieSceneStringPropertySystem
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    void* InstantiatorSystem; // 0x0048 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMovieSceneStringPropertySystem, InstantiatorSystem) == 72, "Offset mismatch for UMovieSceneStringPropertySystem::InstantiatorSystem");

// /Script/MovieSceneTracks.MovieSceneStringSection
// Kind: Class; super: MovieSceneSection
class UMovieSceneStringSection
{
public:
    std::uint8_t Pad_0000[0x148]; // 0x0000
    std::uint8_t StringCurve[0x1]; // 0x0148 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMovieSceneStringSection, StringCurve) == 328, "Offset mismatch for UMovieSceneStringSection::StringCurve");

// /Script/MovieSceneTracks.MovieSceneStringTrack
// Kind: Class; super: MovieScenePropertyTrack
class UMovieSceneStringTrack
{
public:
    std::uint8_t Pad_0000[0xF8]; // 0x0000
    void* SectionToKey; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t PropertyBinding[0x10]; // 0x0100 (Size: 0x10, Type: StructProperty)
    TArray<void*> Sections; // 0x0110 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMovieSceneStringTrack, SectionToKey) == 248, "Offset mismatch for UMovieSceneStringTrack::SectionToKey");
static_assert(offsetof(UMovieSceneStringTrack, PropertyBinding) == 256, "Offset mismatch for UMovieSceneStringTrack::PropertyBinding");
static_assert(offsetof(UMovieSceneStringTrack, Sections) == 272, "Offset mismatch for UMovieSceneStringTrack::Sections");

// /Script/MovieSceneTracks.MovieSceneTestSequence
// Kind: Class; super: MovieSceneSequence
class UMovieSceneTestSequence
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    void* MovieScene; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> BoundObjects; // 0x0070 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> BindingGuids; // 0x0080 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMovieSceneTestSequence, MovieScene) == 104, "Offset mismatch for UMovieSceneTestSequence::MovieScene");
static_assert(offsetof(UMovieSceneTestSequence, BoundObjects) == 112, "Offset mismatch for UMovieSceneTestSequence::BoundObjects");
static_assert(offsetof(UMovieSceneTestSequence, BindingGuids) == 128, "Offset mismatch for UMovieSceneTestSequence::BindingGuids");

// /Script/MovieSceneTracks.MovieSceneTextPropertySystem
// Kind: Class; super: MovieScenePropertySystem
class UMovieSceneTextPropertySystem
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    void* InstantiatorSystem; // 0x0048 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMovieSceneTextPropertySystem, InstantiatorSystem) == 72, "Offset mismatch for UMovieSceneTextPropertySystem::InstantiatorSystem");

// /Script/MovieSceneTracks.MovieSceneTextSection
// Kind: Class; super: MovieSceneSection
class UMovieSceneTextSection
{
public:
    std::uint8_t Pad_0000[0x148]; // 0x0000
    std::uint8_t TextChannel[0x1]; // 0x0148 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMovieSceneTextSection, TextChannel) == 328, "Offset mismatch for UMovieSceneTextSection::TextChannel");

// /Script/MovieSceneTracks.MovieSceneTextTrack
// Kind: Class; super: MovieScenePropertyTrack
class UMovieSceneTextTrack
{
public:
    std::uint8_t Pad_0000[0xF8]; // 0x0000
    void* SectionToKey; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t PropertyBinding[0x10]; // 0x0100 (Size: 0x10, Type: StructProperty)
    TArray<void*> Sections; // 0x0110 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMovieSceneTextTrack, SectionToKey) == 248, "Offset mismatch for UMovieSceneTextTrack::SectionToKey");
static_assert(offsetof(UMovieSceneTextTrack, PropertyBinding) == 256, "Offset mismatch for UMovieSceneTextTrack::PropertyBinding");
static_assert(offsetof(UMovieSceneTextTrack, Sections) == 272, "Offset mismatch for UMovieSceneTextTrack::Sections");

// /Script/MovieSceneTracks.MovieSceneTracksSettings
// Kind: Class; super: Object
class UMovieSceneTracksSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bPreviewCameraCutsInSimulate; // 0x0028 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMovieSceneTracksSettings, bPreviewCameraCutsInSimulate) == 40, "Offset mismatch for UMovieSceneTracksSettings::bPreviewCameraCutsInSimulate");

// /Script/MovieSceneTracks.MovieSceneTransformOrigin
// Kind: Class; super: Interface
class UMovieSceneTransformOrigin
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MovieSceneTracks.MovieSceneTransformOriginInstantiatorSystem
// Kind: Class; super: MovieSceneEntitySystem
class UMovieSceneTransformOriginInstantiatorSystem
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Linker; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMovieSceneTransformOriginInstantiatorSystem, Linker) == 40, "Offset mismatch for UMovieSceneTransformOriginInstantiatorSystem::Linker");

// /Script/MovieSceneTracks.MovieSceneTransformOriginSystem
// Kind: Class; super: MovieSceneEntitySystem
class UMovieSceneTransformOriginSystem
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Linker; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMovieSceneTransformOriginSystem, Linker) == 40, "Offset mismatch for UMovieSceneTransformOriginSystem::Linker");

// /Script/MovieSceneTracks.MovieSceneTransformTrack
// Kind: Class; super: MovieScenePropertyTrack
class UMovieSceneTransformTrack
{
public:
    std::uint8_t Pad_0000[0xF8]; // 0x0000
    void* SectionToKey; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t PropertyBinding[0x10]; // 0x0100 (Size: 0x10, Type: StructProperty)
    TArray<void*> Sections; // 0x0110 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMovieSceneTransformTrack, SectionToKey) == 248, "Offset mismatch for UMovieSceneTransformTrack::SectionToKey");
static_assert(offsetof(UMovieSceneTransformTrack, PropertyBinding) == 256, "Offset mismatch for UMovieSceneTransformTrack::PropertyBinding");
static_assert(offsetof(UMovieSceneTransformTrack, Sections) == 272, "Offset mismatch for UMovieSceneTransformTrack::Sections");

// /Script/MovieSceneTracks.MovieSceneVisibilitySection
// Kind: Class; super: MovieSceneBoolSection
class UMovieSceneVisibilitySection
{
public:
    std::uint8_t Pad_0000[0x140]; // 0x0000
    std::uint8_t DefaultValue; // 0x0140 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0141
    std::uint8_t BoolCurve[0x1]; // 0x0148 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMovieSceneVisibilitySection, DefaultValue) == 320, "Offset mismatch for UMovieSceneVisibilitySection::DefaultValue");
static_assert(offsetof(UMovieSceneVisibilitySection, BoolCurve) == 328, "Offset mismatch for UMovieSceneVisibilitySection::BoolCurve");

// /Script/MovieSceneTracks.MovieSceneVisibilitySystem
// Kind: Class; super: MovieSceneEntityInstantiatorSystem
class UMovieSceneVisibilitySystem
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Linker; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMovieSceneVisibilitySystem, Linker) == 40, "Offset mismatch for UMovieSceneVisibilitySystem::Linker");

// /Script/MovieSceneTracks.MovieSceneVisibilityTrack
// Kind: Class; super: MovieScenePropertyTrack
class UMovieSceneVisibilityTrack
{
public:
    std::uint8_t Pad_0000[0xF8]; // 0x0000
    void* SectionToKey; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t PropertyBinding[0x10]; // 0x0100 (Size: 0x10, Type: StructProperty)
    TArray<void*> Sections; // 0x0110 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMovieSceneVisibilityTrack, SectionToKey) == 248, "Offset mismatch for UMovieSceneVisibilityTrack::SectionToKey");
static_assert(offsetof(UMovieSceneVisibilityTrack, PropertyBinding) == 256, "Offset mismatch for UMovieSceneVisibilityTrack::PropertyBinding");
static_assert(offsetof(UMovieSceneVisibilityTrack, Sections) == 272, "Offset mismatch for UMovieSceneVisibilityTrack::Sections");

// /Script/MovieSceneTracks.ObjectPathChannelEvaluatorSystem
// Kind: Class; super: MovieSceneEntitySystem
class UObjectPathChannelEvaluatorSystem
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Linker; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UObjectPathChannelEvaluatorSystem, Linker) == 40, "Offset mismatch for UObjectPathChannelEvaluatorSystem::Linker");

// /Script/MovieSceneTracks.StringChannelEvaluatorSystem
// Kind: Class; super: MovieSceneEntitySystem
class UStringChannelEvaluatorSystem
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Linker; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UStringChannelEvaluatorSystem, Linker) == 40, "Offset mismatch for UStringChannelEvaluatorSystem::Linker");

// /Script/MovieSceneTracks.TestLifecycleAttachTrack
// Kind: Class; super: MovieScene3DAttachTrack
class UTestLifecycleAttachTrack
{
public:
    std::uint8_t Pad_0000[0xF8]; // 0x0000
    TArray<void*> ConstraintSections; // 0x00F8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UTestLifecycleAttachTrack, ConstraintSections) == 248, "Offset mismatch for UTestLifecycleAttachTrack::ConstraintSections");

// /Script/MovieSceneTracks.TestLifecycleComponentMaterialTrack
// Kind: Class; super: MovieSceneComponentMaterialTrack
class UTestLifecycleComponentMaterialTrack
{
public:
    std::uint8_t Pad_0000[0x120]; // 0x0000
    std::uint8_t MaterialInfo[0x1]; // 0x0120 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UTestLifecycleComponentMaterialTrack, MaterialInfo) == 288, "Offset mismatch for UTestLifecycleComponentMaterialTrack::MaterialInfo");

// /Script/MovieSceneTracks.TestLifecycleCustomPrimitiveDataTrack
// Kind: Class; super: MovieSceneCustomPrimitiveDataTrack
class UTestLifecycleCustomPrimitiveDataTrack
{
public:
    std::uint8_t Pad_0000[0x108]; // 0x0000
    TArray<void*> Sections; // 0x0108 (Size: 0x10, Type: ArrayProperty)
    void* SectionToKey; // 0x0118 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UTestLifecycleCustomPrimitiveDataTrack, Sections) == 264, "Offset mismatch for UTestLifecycleCustomPrimitiveDataTrack::Sections");
static_assert(offsetof(UTestLifecycleCustomPrimitiveDataTrack, SectionToKey) == 280, "Offset mismatch for UTestLifecycleCustomPrimitiveDataTrack::SectionToKey");

// /Script/MovieSceneTracks.TestLifecycleParticleParameterTrack
// Kind: Class; super: MovieSceneParticleParameterTrack
class UTestLifecycleParticleParameterTrack
{
public:
    std::uint8_t Pad_0000[0x100]; // 0x0000
    TArray<void*> Sections; // 0x0100 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UTestLifecycleParticleParameterTrack, Sections) == 256, "Offset mismatch for UTestLifecycleParticleParameterTrack::Sections");

// /Script/MovieSceneTracks.TestLifecycleParticleTrack
// Kind: Class; super: MovieSceneParticleTrack
class UTestLifecycleParticleTrack
{
public:
    std::uint8_t Pad_0000[0x100]; // 0x0000
    TArray<void*> ParticleSections; // 0x0100 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UTestLifecycleParticleTrack, ParticleSections) == 256, "Offset mismatch for UTestLifecycleParticleTrack::ParticleSections");

// /Script/MovieSceneTracks.TestLifecyclePathTrack
// Kind: Class; super: MovieScene3DPathTrack
class UTestLifecyclePathTrack
{
public:
    std::uint8_t Pad_0000[0xF8]; // 0x0000
    TArray<void*> ConstraintSections; // 0x00F8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UTestLifecyclePathTrack, ConstraintSections) == 248, "Offset mismatch for UTestLifecyclePathTrack::ConstraintSections");

// /Script/MovieSceneTracks.TestLifecycleSubTrack
// Kind: Class; super: MovieSceneSubTrack
class UTestLifecycleSubTrack
{
public:
    std::uint8_t Pad_0000[0xF8]; // 0x0000
    TArray<void*> Sections; // 0x00F8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UTestLifecycleSubTrack, Sections) == 248, "Offset mismatch for UTestLifecycleSubTrack::Sections");

// /Script/MovieSceneTracks.TestTrackLifetimeDecoration
// Kind: Class; super: Object
class UTestTrackLifetimeDecoration
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MovieSceneTracks.TextChannelEvaluatorSystem
// Kind: Class; super: MovieSceneEntitySystem
class UTextChannelEvaluatorSystem
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Linker; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UTextChannelEvaluatorSystem, Linker) == 40, "Offset mismatch for UTextChannelEvaluatorSystem::Linker");

// /Script/MovieSceneTracks.WeightAndEasingEvaluatorSystem
// Kind: Class; super: MovieSceneEntitySystem
class UWeightAndEasingEvaluatorSystem
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Linker; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UWeightAndEasingEvaluatorSystem, Linker) == 40, "Offset mismatch for UWeightAndEasingEvaluatorSystem::Linker");

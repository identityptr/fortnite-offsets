/**
 * decamp dumper generated SDK
 * Package: /Script/SpeechAnimationStreaming
 */
#pragma once
#include "Basic.h"

// /Script/SpeechAnimationStreaming.LiveLinkSpeechAnimationFrameData
// Kind: ScriptStruct; super: LiveLinkAnimationFrameData
struct FLiveLinkSpeechAnimationFrameData
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::int32_t SamplesCount; // 0x0070 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0074
    TArray<void*> AudioSamples; // 0x0078 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FLiveLinkSpeechAnimationFrameData, SamplesCount) == 112, "Offset mismatch for FLiveLinkSpeechAnimationFrameData::SamplesCount");
static_assert(offsetof(FLiveLinkSpeechAnimationFrameData, AudioSamples) == 120, "Offset mismatch for FLiveLinkSpeechAnimationFrameData::AudioSamples");

// /Script/SpeechAnimationStreaming.LiveLinkSpeechAnimationStaticData
// Kind: ScriptStruct; super: LiveLinkSkeletonStaticData
struct FLiveLinkSpeechAnimationStaticData
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::int32_t SampleRate; // 0x0030 (Size: 0x4, Type: IntProperty)
    std::int32_t NumChannels; // 0x0034 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FLiveLinkSpeechAnimationStaticData, SampleRate) == 48, "Offset mismatch for FLiveLinkSpeechAnimationStaticData::SampleRate");
static_assert(offsetof(FLiveLinkSpeechAnimationStaticData, NumChannels) == 52, "Offset mismatch for FLiveLinkSpeechAnimationStaticData::NumChannels");

// /Script/SpeechAnimationStreaming.SpeechAnimationAudioStreamerSettings
// Kind: ScriptStruct; super: none
struct FSpeechAnimationAudioStreamerSettings
{
public:
    std::uint8_t AudioSource; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    std::uint8_t SoundWave[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t WavFilePath[0x10]; // 0x0020 (Size: 0x10, Type: StructProperty)
    std::uint8_t bRecordAudio; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0031
    std::uint8_t RecordedAudioPath[0x10]; // 0x0038 (Size: 0x10, Type: StructProperty)
    FString RecordedAudioAssetName; // 0x0048 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FSpeechAnimationAudioStreamerSettings, AudioSource) == 0, "Offset mismatch for FSpeechAnimationAudioStreamerSettings::AudioSource");
static_assert(offsetof(FSpeechAnimationAudioStreamerSettings, SoundWave) == 8, "Offset mismatch for FSpeechAnimationAudioStreamerSettings::SoundWave");
static_assert(offsetof(FSpeechAnimationAudioStreamerSettings, WavFilePath) == 32, "Offset mismatch for FSpeechAnimationAudioStreamerSettings::WavFilePath");
static_assert(offsetof(FSpeechAnimationAudioStreamerSettings, bRecordAudio) == 48, "Offset mismatch for FSpeechAnimationAudioStreamerSettings::bRecordAudio");
static_assert(offsetof(FSpeechAnimationAudioStreamerSettings, RecordedAudioPath) == 56, "Offset mismatch for FSpeechAnimationAudioStreamerSettings::RecordedAudioPath");
static_assert(offsetof(FSpeechAnimationAudioStreamerSettings, RecordedAudioAssetName) == 72, "Offset mismatch for FSpeechAnimationAudioStreamerSettings::RecordedAudioAssetName");

// /Script/SpeechAnimationStreaming.SpeechAnimationNNESolverSettings
// Kind: ScriptStruct; super: none
struct FSpeechAnimationNNESolverSettings
{
public:
    FString EditorRuntimeName; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString RuntimeRuntimeName; // 0x0010 (Size: 0x10, Type: StrProperty)
    float DataBufferNumSeconds; // 0x0020 (Size: 0x4, Type: FloatProperty)
    float ExpectedSampleRate; // 0x0024 (Size: 0x4, Type: FloatProperty)
    TArray<void*> CachedBufferTensorSize; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> OutputShape; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    std::uint32_t CachedBufferSize; // 0x0048 (Size: 0x4, Type: UInt32Property)
    std::uint8_t Pad_0000[0x4]; // 0x004C
    TArray<void*> CurveNames; // 0x0050 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CurveNames2d; // 0x0060 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSpeechAnimationNNESolverSettings, EditorRuntimeName) == 0, "Offset mismatch for FSpeechAnimationNNESolverSettings::EditorRuntimeName");
static_assert(offsetof(FSpeechAnimationNNESolverSettings, RuntimeRuntimeName) == 16, "Offset mismatch for FSpeechAnimationNNESolverSettings::RuntimeRuntimeName");
static_assert(offsetof(FSpeechAnimationNNESolverSettings, DataBufferNumSeconds) == 32, "Offset mismatch for FSpeechAnimationNNESolverSettings::DataBufferNumSeconds");
static_assert(offsetof(FSpeechAnimationNNESolverSettings, ExpectedSampleRate) == 36, "Offset mismatch for FSpeechAnimationNNESolverSettings::ExpectedSampleRate");
static_assert(offsetof(FSpeechAnimationNNESolverSettings, CachedBufferTensorSize) == 40, "Offset mismatch for FSpeechAnimationNNESolverSettings::CachedBufferTensorSize");
static_assert(offsetof(FSpeechAnimationNNESolverSettings, OutputShape) == 56, "Offset mismatch for FSpeechAnimationNNESolverSettings::OutputShape");
static_assert(offsetof(FSpeechAnimationNNESolverSettings, CachedBufferSize) == 72, "Offset mismatch for FSpeechAnimationNNESolverSettings::CachedBufferSize");
static_assert(offsetof(FSpeechAnimationNNESolverSettings, CurveNames) == 80, "Offset mismatch for FSpeechAnimationNNESolverSettings::CurveNames");
static_assert(offsetof(FSpeechAnimationNNESolverSettings, CurveNames2d) == 96, "Offset mismatch for FSpeechAnimationNNESolverSettings::CurveNames2d");

// /Script/SpeechAnimationStreaming.SpeechAnimationNNETensor
// Kind: ScriptStruct; super: none
struct FSpeechAnimationNNETensor
{
public:
    TArray<void*> Shape; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Data; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSpeechAnimationNNETensor, Shape) == 0, "Offset mismatch for FSpeechAnimationNNETensor::Shape");
static_assert(offsetof(FSpeechAnimationNNETensor, Data) == 16, "Offset mismatch for FSpeechAnimationNNETensor::Data");

// /Script/SpeechAnimationStreaming.SpeechAnimationSequencerRecorderSettings
// Kind: ScriptStruct; super: none
struct FSpeechAnimationSequencerRecorderSettings
{
public:
    std::uint8_t bRecordToSequencer; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    TWeakObjectPtr<void> RecordToExistingSection; // 0x0004 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t bOpenNewSequence; // 0x000C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x000D
    std::uint8_t NewSequenceRate[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::uint8_t NewSequenceMesh[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    void* NewSequenceControlRigClass; // 0x0030 (Size: 0x8, Type: ClassProperty)
    std::uint8_t NewSequencePath[0x10]; // 0x0038 (Size: 0x10, Type: StructProperty)
    FString NewSequenceAssetName; // 0x0048 (Size: 0x10, Type: StrProperty)
    TArray<void*> RigMapperDefinitions; // 0x0058 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSpeechAnimationSequencerRecorderSettings, bRecordToSequencer) == 0, "Offset mismatch for FSpeechAnimationSequencerRecorderSettings::bRecordToSequencer");
static_assert(offsetof(FSpeechAnimationSequencerRecorderSettings, RecordToExistingSection) == 4, "Offset mismatch for FSpeechAnimationSequencerRecorderSettings::RecordToExistingSection");
static_assert(offsetof(FSpeechAnimationSequencerRecorderSettings, bOpenNewSequence) == 12, "Offset mismatch for FSpeechAnimationSequencerRecorderSettings::bOpenNewSequence");
static_assert(offsetof(FSpeechAnimationSequencerRecorderSettings, NewSequenceRate) == 16, "Offset mismatch for FSpeechAnimationSequencerRecorderSettings::NewSequenceRate");
static_assert(offsetof(FSpeechAnimationSequencerRecorderSettings, NewSequenceMesh) == 24, "Offset mismatch for FSpeechAnimationSequencerRecorderSettings::NewSequenceMesh");
static_assert(offsetof(FSpeechAnimationSequencerRecorderSettings, NewSequenceControlRigClass) == 48, "Offset mismatch for FSpeechAnimationSequencerRecorderSettings::NewSequenceControlRigClass");
static_assert(offsetof(FSpeechAnimationSequencerRecorderSettings, NewSequencePath) == 56, "Offset mismatch for FSpeechAnimationSequencerRecorderSettings::NewSequencePath");
static_assert(offsetof(FSpeechAnimationSequencerRecorderSettings, NewSequenceAssetName) == 72, "Offset mismatch for FSpeechAnimationSequencerRecorderSettings::NewSequenceAssetName");
static_assert(offsetof(FSpeechAnimationSequencerRecorderSettings, RigMapperDefinitions) == 88, "Offset mismatch for FSpeechAnimationSequencerRecorderSettings::RigMapperDefinitions");

// /Script/SpeechAnimationStreaming.SpeechAnimationSolverSettings
// Kind: ScriptStruct; super: none
struct FSpeechAnimationSolverSettings
{
public:
    std::uint8_t bUseMockSolver; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    std::uint8_t Model[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::int32_t MaxFramesQueueSize; // 0x0020 (Size: 0x4, Type: IntProperty)
    std::uint8_t bCreateLiveLinkProvider; // 0x0024 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0025
    std::uint8_t LiveLinkProviderName[0x4]; // 0x0028 (Size: 0x4, Type: NameProperty)
    FName LiveLinkProviderSubjectName; // 0x002C (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FSpeechAnimationSolverSettings, bUseMockSolver) == 0, "Offset mismatch for FSpeechAnimationSolverSettings::bUseMockSolver");
static_assert(offsetof(FSpeechAnimationSolverSettings, Model) == 8, "Offset mismatch for FSpeechAnimationSolverSettings::Model");
static_assert(offsetof(FSpeechAnimationSolverSettings, MaxFramesQueueSize) == 32, "Offset mismatch for FSpeechAnimationSolverSettings::MaxFramesQueueSize");
static_assert(offsetof(FSpeechAnimationSolverSettings, bCreateLiveLinkProvider) == 36, "Offset mismatch for FSpeechAnimationSolverSettings::bCreateLiveLinkProvider");
static_assert(offsetof(FSpeechAnimationSolverSettings, LiveLinkProviderName) == 40, "Offset mismatch for FSpeechAnimationSolverSettings::LiveLinkProviderName");
static_assert(offsetof(FSpeechAnimationSolverSettings, LiveLinkProviderSubjectName) == 44, "Offset mismatch for FSpeechAnimationSolverSettings::LiveLinkProviderSubjectName");

// /Script/SpeechAnimationStreaming.SpeechAnimationStreamingPipelineSettings
// Kind: ScriptStruct; super: none
struct FSpeechAnimationStreamingPipelineSettings
{
public:
    std::uint8_t SolverSettings[0x30]; // 0x0000 (Size: 0x30, Type: StructProperty)
    std::uint8_t AudioSettings[0x58]; // 0x0030 (Size: 0x58, Type: StructProperty)
    std::uint8_t RecorderSettings[0x1]; // 0x0088 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSpeechAnimationStreamingPipelineSettings, SolverSettings) == 0, "Offset mismatch for FSpeechAnimationStreamingPipelineSettings::SolverSettings");
static_assert(offsetof(FSpeechAnimationStreamingPipelineSettings, AudioSettings) == 48, "Offset mismatch for FSpeechAnimationStreamingPipelineSettings::AudioSettings");
static_assert(offsetof(FSpeechAnimationStreamingPipelineSettings, RecorderSettings) == 136, "Offset mismatch for FSpeechAnimationStreamingPipelineSettings::RecorderSettings");

// /Script/SpeechAnimationStreaming.LiveLinkSpeechAnimationRole
// Kind: Class; super: LiveLinkAnimationRole
class ULiveLinkSpeechAnimationRole
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SpeechAnimationStreaming.SpeechAnimationAudioCaptureSource
// Kind: Class; super: Object
class USpeechAnimationAudioCaptureSource
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    FString RecordPackageName; // 0x0060 (Size: 0x10, Type: StrProperty)
    FString RecordAssetName; // 0x0070 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(USpeechAnimationAudioCaptureSource, RecordPackageName) == 96, "Offset mismatch for USpeechAnimationAudioCaptureSource::RecordPackageName");
static_assert(offsetof(USpeechAnimationAudioCaptureSource, RecordAssetName) == 112, "Offset mismatch for USpeechAnimationAudioCaptureSource::RecordAssetName");

// /Script/SpeechAnimationStreaming.SpeechAnimationAudioComponent
// Kind: Class; super: SynthComponent
class USpeechAnimationAudioComponent
{
public:
    std::uint8_t Pad_0000[0x620]; // 0x0000
    std::uint8_t LiveLinkSubject[0x1]; // 0x0620 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USpeechAnimationAudioComponent, LiveLinkSubject) == 1568, "Offset mismatch for USpeechAnimationAudioComponent::LiveLinkSubject");

// /Script/SpeechAnimationStreaming.SpeechAnimationAudioSource
// Kind: Class; super: Interface
class USpeechAnimationAudioSource
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SpeechAnimationStreaming.SpeechAnimationNNEModel
// Kind: Class; super: Object
class USpeechAnimationNNEModel
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SpeechAnimationStreaming.SpeechAnimationSequenceRecorder
// Kind: Class; super: Object
class USpeechAnimationSequenceRecorder
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FMulticastInlineDelegate OnRecorderStopped; // 0x0028 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0038
    TWeakObjectPtr<void> ControlRigSection; // 0x003C (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0044
    TScriptInterface<void> AudioSource; // 0x0048 (Size: 0x10, Type: InterfaceProperty)
    void* SolverHandle; // 0x0058 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USpeechAnimationSequenceRecorder, OnRecorderStopped) == 40, "Offset mismatch for USpeechAnimationSequenceRecorder::OnRecorderStopped");
static_assert(offsetof(USpeechAnimationSequenceRecorder, ControlRigSection) == 60, "Offset mismatch for USpeechAnimationSequenceRecorder::ControlRigSection");
static_assert(offsetof(USpeechAnimationSequenceRecorder, AudioSource) == 72, "Offset mismatch for USpeechAnimationSequenceRecorder::AudioSource");
static_assert(offsetof(USpeechAnimationSequenceRecorder, SolverHandle) == 88, "Offset mismatch for USpeechAnimationSequenceRecorder::SolverHandle");

// /Script/SpeechAnimationStreaming.SpeechAnimationSolverHandle
// Kind: Class; super: Object
class USpeechAnimationSolverHandle
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    FMulticastInlineDelegate OnSolverStopped; // 0x0030 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnFrameSolved; // 0x0040 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::int32_t SolvedFramesToCache; // 0x0050 (Size: 0x4, Type: IntProperty)
    float SolverStopTimeout; // 0x0054 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x38]; // 0x0058
    TArray<void*> CachedFrameData; // 0x0090 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t NNESolverSettings[0x1]; // 0x00A0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USpeechAnimationSolverHandle, OnSolverStopped) == 48, "Offset mismatch for USpeechAnimationSolverHandle::OnSolverStopped");
static_assert(offsetof(USpeechAnimationSolverHandle, OnFrameSolved) == 64, "Offset mismatch for USpeechAnimationSolverHandle::OnFrameSolved");
static_assert(offsetof(USpeechAnimationSolverHandle, SolvedFramesToCache) == 80, "Offset mismatch for USpeechAnimationSolverHandle::SolvedFramesToCache");
static_assert(offsetof(USpeechAnimationSolverHandle, SolverStopTimeout) == 84, "Offset mismatch for USpeechAnimationSolverHandle::SolverStopTimeout");
static_assert(offsetof(USpeechAnimationSolverHandle, CachedFrameData) == 144, "Offset mismatch for USpeechAnimationSolverHandle::CachedFrameData");
static_assert(offsetof(USpeechAnimationSolverHandle, NNESolverSettings) == 160, "Offset mismatch for USpeechAnimationSolverHandle::NNESolverSettings");

// /Script/SpeechAnimationStreaming.SpeechAnimationSoundWaveSource
// Kind: Class; super: SpeechAnimationWaveAudioSourceBase
class USpeechAnimationSoundWaveSource
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    void* SoundWave; // 0x0050 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USpeechAnimationSoundWaveSource, SoundWave) == 80, "Offset mismatch for USpeechAnimationSoundWaveSource::SoundWave");

// /Script/SpeechAnimationStreaming.SpeechAnimationStreamingPipelineSettingsObject
// Kind: Class; super: Object
class USpeechAnimationStreamingPipelineSettingsObject
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Settings[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USpeechAnimationStreamingPipelineSettingsObject, Settings) == 40, "Offset mismatch for USpeechAnimationStreamingPipelineSettingsObject::Settings");

// /Script/SpeechAnimationStreaming.SpeechAnimationStreamingSubsystem
// Kind: Class; super: EngineSubsystem
class USpeechAnimationStreamingSubsystem
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TArray<void*> SolverHandles; // 0x0030 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USpeechAnimationStreamingSubsystem, SolverHandles) == 48, "Offset mismatch for USpeechAnimationStreamingSubsystem::SolverHandles");

// /Script/SpeechAnimationStreaming.SpeechAnimationWavFileSource
// Kind: Class; super: SpeechAnimationWaveAudioSourceBase
class USpeechAnimationWavFileSource
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    void* SoundWave; // 0x0050 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USpeechAnimationWavFileSource, SoundWave) == 80, "Offset mismatch for USpeechAnimationWavFileSource::SoundWave");

// /Script/SpeechAnimationStreaming.SpeechAnimationWaveAudioSourceBase
// Kind: Class; super: Object
class USpeechAnimationWaveAudioSourceBase
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    void* SoundWave; // 0x0050 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USpeechAnimationWaveAudioSourceBase, SoundWave) == 80, "Offset mismatch for USpeechAnimationWaveAudioSourceBase::SoundWave");

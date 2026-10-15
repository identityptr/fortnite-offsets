/**
 * decamp dumper generated SDK
 * Package: /Script/SpeechAnimationSolver
 */
#pragma once
#include "Basic.h"

// /Script/SpeechAnimationSolver.SpeechAnimationAudioFrame
// Kind: ScriptStruct; super: none
struct FSpeechAnimationAudioFrame
{
public:
    TArray<void*> AudioSamples; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::int32_t SamplesCount; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::int32_t SampleRate; // 0x0014 (Size: 0x4, Type: IntProperty)
    std::int32_t NumChannels; // 0x0018 (Size: 0x4, Type: IntProperty)
    std::uint8_t bContiguous; // 0x001C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Mood; // 0x001D (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x2]; // 0x001E
    float MoodIntensity; // 0x0020 (Size: 0x4, Type: FloatProperty)
    std::int32_t Lookahead; // 0x0024 (Size: 0x4, Type: IntProperty)
    double ArrivalTime; // 0x0028 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t FrameId[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSpeechAnimationAudioFrame, AudioSamples) == 0, "Offset mismatch for FSpeechAnimationAudioFrame::AudioSamples");
static_assert(offsetof(FSpeechAnimationAudioFrame, SamplesCount) == 16, "Offset mismatch for FSpeechAnimationAudioFrame::SamplesCount");
static_assert(offsetof(FSpeechAnimationAudioFrame, SampleRate) == 20, "Offset mismatch for FSpeechAnimationAudioFrame::SampleRate");
static_assert(offsetof(FSpeechAnimationAudioFrame, NumChannels) == 24, "Offset mismatch for FSpeechAnimationAudioFrame::NumChannels");
static_assert(offsetof(FSpeechAnimationAudioFrame, bContiguous) == 28, "Offset mismatch for FSpeechAnimationAudioFrame::bContiguous");
static_assert(offsetof(FSpeechAnimationAudioFrame, Mood) == 29, "Offset mismatch for FSpeechAnimationAudioFrame::Mood");
static_assert(offsetof(FSpeechAnimationAudioFrame, MoodIntensity) == 32, "Offset mismatch for FSpeechAnimationAudioFrame::MoodIntensity");
static_assert(offsetof(FSpeechAnimationAudioFrame, Lookahead) == 36, "Offset mismatch for FSpeechAnimationAudioFrame::Lookahead");
static_assert(offsetof(FSpeechAnimationAudioFrame, ArrivalTime) == 40, "Offset mismatch for FSpeechAnimationAudioFrame::ArrivalTime");
static_assert(offsetof(FSpeechAnimationAudioFrame, FrameId) == 48, "Offset mismatch for FSpeechAnimationAudioFrame::FrameId");

// /Script/SpeechAnimationSolver.SpeechAnimationFrameData
// Kind: ScriptStruct; super: none
struct FSpeechAnimationFrameData
{
public:
    TArray<void*> CurveNames; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CurveValues; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t AudioFrame[0x40]; // 0x0020 (Size: 0x40, Type: StructProperty)
    double SolvedTime; // 0x0060 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FSpeechAnimationFrameData, CurveNames) == 0, "Offset mismatch for FSpeechAnimationFrameData::CurveNames");
static_assert(offsetof(FSpeechAnimationFrameData, CurveValues) == 16, "Offset mismatch for FSpeechAnimationFrameData::CurveValues");
static_assert(offsetof(FSpeechAnimationFrameData, AudioFrame) == 32, "Offset mismatch for FSpeechAnimationFrameData::AudioFrame");
static_assert(offsetof(FSpeechAnimationFrameData, SolvedTime) == 96, "Offset mismatch for FSpeechAnimationFrameData::SolvedTime");

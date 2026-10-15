/**
 * decamp dumper generated SDK
 * Package: /Script/TimeManagement
 */
#pragma once
#include "Basic.h"

// /Script/TimeManagement.TimedDataChannelSampleTime
// Kind: ScriptStruct; super: none
struct FTimedDataChannelSampleTime
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TimeManagement.TimedDataInputEvaluationData
// Kind: ScriptStruct; super: none
struct FTimedDataInputEvaluationData
{
public:
    float DistanceToNewestSampleSeconds; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float DistanceToOldestSampleSeconds; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FTimedDataInputEvaluationData, DistanceToNewestSampleSeconds) == 0, "Offset mismatch for FTimedDataInputEvaluationData::DistanceToNewestSampleSeconds");
static_assert(offsetof(FTimedDataInputEvaluationData, DistanceToOldestSampleSeconds) == 4, "Offset mismatch for FTimedDataInputEvaluationData::DistanceToOldestSampleSeconds");

// /Script/TimeManagement.CatchupFixedRateCustomTimeStep
// Kind: Class; super: FixedFrameRateCustomTimeStep
class UCatchupFixedRateCustomTimeStep
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t FrameRate[0x8]; // 0x0030 (Size: 0x8, Type: StructProperty)
    double MaxCatchupSeconds; // 0x0038 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(UCatchupFixedRateCustomTimeStep, FrameRate) == 48, "Offset mismatch for UCatchupFixedRateCustomTimeStep::FrameRate");
static_assert(offsetof(UCatchupFixedRateCustomTimeStep, MaxCatchupSeconds) == 56, "Offset mismatch for UCatchupFixedRateCustomTimeStep::MaxCatchupSeconds");

// /Script/TimeManagement.ClockedTimeStep
// Kind: Class; super: Interface
class UClockedTimeStep
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TimeManagement.FixedFrameRateCustomTimeStep
// Kind: Class; super: EngineCustomTimeStep
class UFixedFrameRateCustomTimeStep
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TimeManagement.GenlockedCustomTimeStep
// Kind: Class; super: FixedFrameRateCustomTimeStep
class UGenlockedCustomTimeStep
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bAutoDetectFormat; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bWaitForBothFields; // 0x0029 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UGenlockedCustomTimeStep, bAutoDetectFormat) == 40, "Offset mismatch for UGenlockedCustomTimeStep::bAutoDetectFormat");
static_assert(offsetof(UGenlockedCustomTimeStep, bWaitForBothFields) == 41, "Offset mismatch for UGenlockedCustomTimeStep::bWaitForBothFields");

// /Script/TimeManagement.GenlockedFixedRateCustomTimeStep
// Kind: Class; super: GenlockedCustomTimeStep
class UGenlockedFixedRateCustomTimeStep
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t FrameRate[0x8]; // 0x0030 (Size: 0x8, Type: StructProperty)
    std::uint8_t bShouldBlock; // 0x0038 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bForceSingleFrameDeltaTime; // 0x0039 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UGenlockedFixedRateCustomTimeStep, FrameRate) == 48, "Offset mismatch for UGenlockedFixedRateCustomTimeStep::FrameRate");
static_assert(offsetof(UGenlockedFixedRateCustomTimeStep, bShouldBlock) == 56, "Offset mismatch for UGenlockedFixedRateCustomTimeStep::bShouldBlock");
static_assert(offsetof(UGenlockedFixedRateCustomTimeStep, bForceSingleFrameDeltaTime) == 57, "Offset mismatch for UGenlockedFixedRateCustomTimeStep::bForceSingleFrameDeltaTime");

// /Script/TimeManagement.GenlockedTimecodeProvider
// Kind: Class; super: TimecodeProvider
class UGenlockedTimecodeProvider
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t bUseGenlockToCount; // 0x0030 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UGenlockedTimecodeProvider, bUseGenlockToCount) == 48, "Offset mismatch for UGenlockedTimecodeProvider::bUseGenlockToCount");

// /Script/TimeManagement.MockTimecodeProvider
// Kind: Class; super: TimecodeProvider
class UMockTimecodeProvider
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    float FrameDelay; // 0x0028 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UMockTimecodeProvider, FrameDelay) == 40, "Offset mismatch for UMockTimecodeProvider::FrameDelay");

// /Script/TimeManagement.MusicalTimeFunctionLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UMusicalTimeFunctionLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TimeManagement.TimeManagementBlueprintLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UTimeManagementBlueprintLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TimeManagement.TimeSynchronizationSource
// Kind: Class; super: Object
class UTimeSynchronizationSource
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bUseForSynchronization; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0029
    std::int32_t FrameOffset; // 0x002C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UTimeSynchronizationSource, bUseForSynchronization) == 40, "Offset mismatch for UTimeSynchronizationSource::bUseForSynchronization");
static_assert(offsetof(UTimeSynchronizationSource, FrameOffset) == 44, "Offset mismatch for UTimeSynchronizationSource::FrameOffset");

// /Script/TimeManagement.TimecodeCustomTimeStep
// Kind: Class; super: FixedFrameRateCustomTimeStep
class UTimecodeCustomTimeStep
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bErrorIfFrameAreNotConsecutive; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bErrorIfTimecodeProviderChanged; // 0x0029 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x002A
    float MaxDeltaTime; // 0x002C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIgnoreSubframes; // 0x0030 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UTimecodeCustomTimeStep, bErrorIfFrameAreNotConsecutive) == 40, "Offset mismatch for UTimecodeCustomTimeStep::bErrorIfFrameAreNotConsecutive");
static_assert(offsetof(UTimecodeCustomTimeStep, bErrorIfTimecodeProviderChanged) == 41, "Offset mismatch for UTimecodeCustomTimeStep::bErrorIfTimecodeProviderChanged");
static_assert(offsetof(UTimecodeCustomTimeStep, MaxDeltaTime) == 44, "Offset mismatch for UTimecodeCustomTimeStep::MaxDeltaTime");
static_assert(offsetof(UTimecodeCustomTimeStep, bIgnoreSubframes) == 48, "Offset mismatch for UTimecodeCustomTimeStep::bIgnoreSubframes");

// /Script/TimeManagement.TimecodeRegressionProvider
// Kind: Class; super: TimecodeProvider
class UTimecodeRegressionProvider
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::int32_t NumSampledFrames; // 0x0030 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0034
    void* OwningEngine; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    void* TimecodeImpl; // 0x0040 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UTimecodeRegressionProvider, NumSampledFrames) == 48, "Offset mismatch for UTimecodeRegressionProvider::NumSampledFrames");
static_assert(offsetof(UTimecodeRegressionProvider, OwningEngine) == 56, "Offset mismatch for UTimecodeRegressionProvider::OwningEngine");
static_assert(offsetof(UTimecodeRegressionProvider, TimecodeImpl) == 64, "Offset mismatch for UTimecodeRegressionProvider::TimecodeImpl");

/**
 * decamp dumper generated SDK
 * Package: /Script/EyeTracker
 */
#pragma once
#include "Basic.h"

// /Script/EyeTracker.EyeTrackerGazeData
// Kind: ScriptStruct; super: none
struct FEyeTrackerGazeData
{
public:
    std::uint8_t GazeOrigin[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t GazeDirection[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t FixationPoint[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    float ConfidenceValue; // 0x0048 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsLeftEyeBlink; // 0x004C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsRightEyeBlink; // 0x004D (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x2]; // 0x004E
    float LeftPupilDiameter; // 0x0050 (Size: 0x4, Type: FloatProperty)
    float RightPupilDiameter; // 0x0054 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FEyeTrackerGazeData, GazeOrigin) == 0, "Offset mismatch for FEyeTrackerGazeData::GazeOrigin");
static_assert(offsetof(FEyeTrackerGazeData, GazeDirection) == 24, "Offset mismatch for FEyeTrackerGazeData::GazeDirection");
static_assert(offsetof(FEyeTrackerGazeData, FixationPoint) == 48, "Offset mismatch for FEyeTrackerGazeData::FixationPoint");
static_assert(offsetof(FEyeTrackerGazeData, ConfidenceValue) == 72, "Offset mismatch for FEyeTrackerGazeData::ConfidenceValue");
static_assert(offsetof(FEyeTrackerGazeData, bIsLeftEyeBlink) == 76, "Offset mismatch for FEyeTrackerGazeData::bIsLeftEyeBlink");
static_assert(offsetof(FEyeTrackerGazeData, bIsRightEyeBlink) == 77, "Offset mismatch for FEyeTrackerGazeData::bIsRightEyeBlink");
static_assert(offsetof(FEyeTrackerGazeData, LeftPupilDiameter) == 80, "Offset mismatch for FEyeTrackerGazeData::LeftPupilDiameter");
static_assert(offsetof(FEyeTrackerGazeData, RightPupilDiameter) == 84, "Offset mismatch for FEyeTrackerGazeData::RightPupilDiameter");

// /Script/EyeTracker.EyeTrackerStereoGazeData
// Kind: ScriptStruct; super: none
struct FEyeTrackerStereoGazeData
{
public:
    std::uint8_t LeftEyeOrigin[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t LeftEyeDirection[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t RightEyeOrigin[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    std::uint8_t RightEyeDirection[0x18]; // 0x0048 (Size: 0x18, Type: StructProperty)
    std::uint8_t FixationPoint[0x18]; // 0x0060 (Size: 0x18, Type: StructProperty)
    float ConfidenceValue; // 0x0078 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FEyeTrackerStereoGazeData, LeftEyeOrigin) == 0, "Offset mismatch for FEyeTrackerStereoGazeData::LeftEyeOrigin");
static_assert(offsetof(FEyeTrackerStereoGazeData, LeftEyeDirection) == 24, "Offset mismatch for FEyeTrackerStereoGazeData::LeftEyeDirection");
static_assert(offsetof(FEyeTrackerStereoGazeData, RightEyeOrigin) == 48, "Offset mismatch for FEyeTrackerStereoGazeData::RightEyeOrigin");
static_assert(offsetof(FEyeTrackerStereoGazeData, RightEyeDirection) == 72, "Offset mismatch for FEyeTrackerStereoGazeData::RightEyeDirection");
static_assert(offsetof(FEyeTrackerStereoGazeData, FixationPoint) == 96, "Offset mismatch for FEyeTrackerStereoGazeData::FixationPoint");
static_assert(offsetof(FEyeTrackerStereoGazeData, ConfidenceValue) == 120, "Offset mismatch for FEyeTrackerStereoGazeData::ConfidenceValue");

// /Script/EyeTracker.EyeTrackerFunctionLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UEyeTrackerFunctionLibrary
{
public:
    std::uint8_t Opaque[1];
};

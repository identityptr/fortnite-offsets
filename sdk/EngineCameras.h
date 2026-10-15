/**
 * decamp dumper generated SDK
 * Package: /Script/EngineCameras
 */
#pragma once
#include "Basic.h"

// /Script/EngineCameras.ActiveCameraAnimationInfo
// Kind: ScriptStruct; super: none
struct FActiveCameraAnimationInfo
{
public:
    void* Sequence; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Params[0x48]; // 0x0008 (Size: 0x48, Type: StructProperty)
    std::uint8_t Handle[0x8]; // 0x0050 (Size: 0x8, Type: StructProperty)
    void* player; // 0x0058 (Size: 0x8, Type: ObjectProperty)
    void* CameraStandIn; // 0x0060 (Size: 0x8, Type: ObjectProperty)
    float EaseInCurrentTime; // 0x0068 (Size: 0x4, Type: FloatProperty)
    float EaseOutCurrentTime; // 0x006C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsEasingIn; // 0x0070 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsEasingOut; // 0x0071 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FActiveCameraAnimationInfo, Sequence) == 0, "Offset mismatch for FActiveCameraAnimationInfo::Sequence");
static_assert(offsetof(FActiveCameraAnimationInfo, Params) == 8, "Offset mismatch for FActiveCameraAnimationInfo::Params");
static_assert(offsetof(FActiveCameraAnimationInfo, Handle) == 80, "Offset mismatch for FActiveCameraAnimationInfo::Handle");
static_assert(offsetof(FActiveCameraAnimationInfo, player) == 88, "Offset mismatch for FActiveCameraAnimationInfo::player");
static_assert(offsetof(FActiveCameraAnimationInfo, CameraStandIn) == 96, "Offset mismatch for FActiveCameraAnimationInfo::CameraStandIn");
static_assert(offsetof(FActiveCameraAnimationInfo, EaseInCurrentTime) == 104, "Offset mismatch for FActiveCameraAnimationInfo::EaseInCurrentTime");
static_assert(offsetof(FActiveCameraAnimationInfo, EaseOutCurrentTime) == 108, "Offset mismatch for FActiveCameraAnimationInfo::EaseOutCurrentTime");
static_assert(offsetof(FActiveCameraAnimationInfo, bIsEasingIn) == 112, "Offset mismatch for FActiveCameraAnimationInfo::bIsEasingIn");
static_assert(offsetof(FActiveCameraAnimationInfo, bIsEasingOut) == 113, "Offset mismatch for FActiveCameraAnimationInfo::bIsEasingOut");

// /Script/EngineCameras.CameraAnimationHandle
// Kind: ScriptStruct; super: none
struct FCameraAnimationHandle
{
public:
    std::uint8_t Opaque[1];
};


// /Script/EngineCameras.CameraAnimationParams
// Kind: ScriptStruct; super: none
struct FCameraAnimationParams
{
public:
    float PlayRate; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float Scale; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t EaseInType; // 0x0008 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0009
    float EaseInDuration; // 0x000C (Size: 0x4, Type: FloatProperty)
    std::uint8_t EaseOutType; // 0x0010 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0011
    float EaseOutDuration; // 0x0014 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bLoop; // 0x0018 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0019
    std::int32_t StartOffset; // 0x001C (Size: 0x4, Type: IntProperty)
    std::uint8_t bRandomStartTime; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0021
    float DurationOverride; // 0x0024 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Playspace; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0004[0x7]; // 0x0029
    std::uint8_t UserPlaySpaceRot[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCameraAnimationParams, PlayRate) == 0, "Offset mismatch for FCameraAnimationParams::PlayRate");
static_assert(offsetof(FCameraAnimationParams, Scale) == 4, "Offset mismatch for FCameraAnimationParams::Scale");
static_assert(offsetof(FCameraAnimationParams, EaseInType) == 8, "Offset mismatch for FCameraAnimationParams::EaseInType");
static_assert(offsetof(FCameraAnimationParams, EaseInDuration) == 12, "Offset mismatch for FCameraAnimationParams::EaseInDuration");
static_assert(offsetof(FCameraAnimationParams, EaseOutType) == 16, "Offset mismatch for FCameraAnimationParams::EaseOutType");
static_assert(offsetof(FCameraAnimationParams, EaseOutDuration) == 20, "Offset mismatch for FCameraAnimationParams::EaseOutDuration");
static_assert(offsetof(FCameraAnimationParams, bLoop) == 24, "Offset mismatch for FCameraAnimationParams::bLoop");
static_assert(offsetof(FCameraAnimationParams, StartOffset) == 28, "Offset mismatch for FCameraAnimationParams::StartOffset");
static_assert(offsetof(FCameraAnimationParams, bRandomStartTime) == 32, "Offset mismatch for FCameraAnimationParams::bRandomStartTime");
static_assert(offsetof(FCameraAnimationParams, DurationOverride) == 36, "Offset mismatch for FCameraAnimationParams::DurationOverride");
static_assert(offsetof(FCameraAnimationParams, Playspace) == 40, "Offset mismatch for FCameraAnimationParams::Playspace");
static_assert(offsetof(FCameraAnimationParams, UserPlaySpaceRot) == 48, "Offset mismatch for FCameraAnimationParams::UserPlaySpaceRot");

// /Script/EngineCameras.FOscillator
// Kind: ScriptStruct; super: none
struct FFOscillator
{
public:
    float Amplitude; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float Frequency; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t InitialOffset; // 0x0008 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Waveform; // 0x0009 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FFOscillator, Amplitude) == 0, "Offset mismatch for FFOscillator::Amplitude");
static_assert(offsetof(FFOscillator, Frequency) == 4, "Offset mismatch for FFOscillator::Frequency");
static_assert(offsetof(FFOscillator, InitialOffset) == 8, "Offset mismatch for FFOscillator::InitialOffset");
static_assert(offsetof(FFOscillator, Waveform) == 9, "Offset mismatch for FFOscillator::Waveform");

// /Script/EngineCameras.PerlinNoiseShaker
// Kind: ScriptStruct; super: none
struct FPerlinNoiseShaker
{
public:
    float Amplitude; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float Frequency; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FPerlinNoiseShaker, Amplitude) == 0, "Offset mismatch for FPerlinNoiseShaker::Amplitude");
static_assert(offsetof(FPerlinNoiseShaker, Frequency) == 4, "Offset mismatch for FPerlinNoiseShaker::Frequency");

// /Script/EngineCameras.ROscillator
// Kind: ScriptStruct; super: none
struct FROscillator
{
public:
    std::uint8_t Pitch[0xC]; // 0x0000 (Size: 0xC, Type: StructProperty)
    std::uint8_t Yaw[0xC]; // 0x000C (Size: 0xC, Type: StructProperty)
    std::uint8_t Roll[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FROscillator, Pitch) == 0, "Offset mismatch for FROscillator::Pitch");
static_assert(offsetof(FROscillator, Yaw) == 12, "Offset mismatch for FROscillator::Yaw");
static_assert(offsetof(FROscillator, Roll) == 24, "Offset mismatch for FROscillator::Roll");

// /Script/EngineCameras.VOscillator
// Kind: ScriptStruct; super: none
struct FVOscillator
{
public:
    std::uint8_t X[0xC]; // 0x0000 (Size: 0xC, Type: StructProperty)
    std::uint8_t Y[0xC]; // 0x000C (Size: 0xC, Type: StructProperty)
    std::uint8_t Z[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVOscillator, X) == 0, "Offset mismatch for FVOscillator::X");
static_assert(offsetof(FVOscillator, Y) == 12, "Offset mismatch for FVOscillator::Y");
static_assert(offsetof(FVOscillator, Z) == 24, "Offset mismatch for FVOscillator::Z");

// /Script/EngineCameras.WaveOscillator
// Kind: ScriptStruct; super: none
struct FWaveOscillator
{
public:
    float Amplitude; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float Frequency; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t InitialOffsetType; // 0x0008 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FWaveOscillator, Amplitude) == 0, "Offset mismatch for FWaveOscillator::Amplitude");
static_assert(offsetof(FWaveOscillator, Frequency) == 4, "Offset mismatch for FWaveOscillator::Frequency");
static_assert(offsetof(FWaveOscillator, InitialOffsetType) == 8, "Offset mismatch for FWaveOscillator::InitialOffsetType");

// /Script/EngineCameras.CameraAnimationCameraModifier
// Kind: Class; super: CameraModifier
class UCameraAnimationCameraModifier
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    TArray<void*> ActiveAnimations; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    std::uint16_t NextInstanceSerialNumber; // 0x0058 (Size: 0x2, Type: UInt16Property)
};

static_assert(offsetof(UCameraAnimationCameraModifier, ActiveAnimations) == 72, "Offset mismatch for UCameraAnimationCameraModifier::ActiveAnimations");
static_assert(offsetof(UCameraAnimationCameraModifier, NextInstanceSerialNumber) == 88, "Offset mismatch for UCameraAnimationCameraModifier::NextInstanceSerialNumber");

// /Script/EngineCameras.CompositeCameraShakePattern
// Kind: Class; super: CameraShakePattern
class UCompositeCameraShakePattern
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> ChildPatterns; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UCompositeCameraShakePattern, ChildPatterns) == 40, "Offset mismatch for UCompositeCameraShakePattern::ChildPatterns");

// /Script/EngineCameras.ConstantCameraShakePattern
// Kind: Class; super: SimpleCameraShakePattern
class UConstantCameraShakePattern
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    std::uint8_t LocationOffset[0x18]; // 0x0058 (Size: 0x18, Type: StructProperty)
    std::uint8_t RotationOffset[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UConstantCameraShakePattern, LocationOffset) == 88, "Offset mismatch for UConstantCameraShakePattern::LocationOffset");
static_assert(offsetof(UConstantCameraShakePattern, RotationOffset) == 112, "Offset mismatch for UConstantCameraShakePattern::RotationOffset");

// /Script/EngineCameras.DefaultCameraShakeBase
// Kind: Class; super: CameraShakeBase
class UDefaultCameraShakeBase
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bSingleInstance; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0029
    float ShakeScale; // 0x002C (Size: 0x4, Type: FloatProperty)
    void* RootShakePattern; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    void* CameraManager; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDefaultCameraShakeBase, bSingleInstance) == 40, "Offset mismatch for UDefaultCameraShakeBase::bSingleInstance");
static_assert(offsetof(UDefaultCameraShakeBase, ShakeScale) == 44, "Offset mismatch for UDefaultCameraShakeBase::ShakeScale");
static_assert(offsetof(UDefaultCameraShakeBase, RootShakePattern) == 48, "Offset mismatch for UDefaultCameraShakeBase::RootShakePattern");
static_assert(offsetof(UDefaultCameraShakeBase, CameraManager) == 56, "Offset mismatch for UDefaultCameraShakeBase::CameraManager");

// /Script/EngineCameras.EngineCameraAnimationFunctionLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UEngineCameraAnimationFunctionLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/EngineCameras.EngineCamerasSubsystem
// Kind: Class; super: WorldSubsystem
class UEngineCamerasSubsystem
{
public:
    std::uint8_t Opaque[1];
};


// /Script/EngineCameras.LegacyCameraShake
// Kind: Class; super: CameraShakeBase
class ULegacyCameraShake
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    float OscillationDuration; // 0x00E0 (Size: 0x4, Type: FloatProperty)
    float OscillationBlendInTime; // 0x00E4 (Size: 0x4, Type: FloatProperty)
    float OscillationBlendOutTime; // 0x00E8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t RotOscillation[0x24]; // 0x00EC (Size: 0x24, Type: StructProperty)
    std::uint8_t LocOscillation[0x24]; // 0x0110 (Size: 0x24, Type: StructProperty)
    std::uint8_t FOVOscillation[0xC]; // 0x0134 (Size: 0xC, Type: StructProperty)
    float AnimPlayRate; // 0x0140 (Size: 0x4, Type: FloatProperty)
    float AnimScale; // 0x0144 (Size: 0x4, Type: FloatProperty)
    float AnimBlendInTime; // 0x0148 (Size: 0x4, Type: FloatProperty)
    float AnimBlendOutTime; // 0x014C (Size: 0x4, Type: FloatProperty)
    float RandomAnimSegmentDuration; // 0x0150 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0154
    void* AnimSequence; // 0x0158 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bRandomAnimSegment; // 0x0160 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0161
    float OscillatorTimeRemaining; // 0x0164 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0003[0x78]; // 0x0168
    void* SequenceShakePattern; // 0x01E0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(ULegacyCameraShake, OscillationDuration) == 224, "Offset mismatch for ULegacyCameraShake::OscillationDuration");
static_assert(offsetof(ULegacyCameraShake, OscillationBlendInTime) == 228, "Offset mismatch for ULegacyCameraShake::OscillationBlendInTime");
static_assert(offsetof(ULegacyCameraShake, OscillationBlendOutTime) == 232, "Offset mismatch for ULegacyCameraShake::OscillationBlendOutTime");
static_assert(offsetof(ULegacyCameraShake, RotOscillation) == 236, "Offset mismatch for ULegacyCameraShake::RotOscillation");
static_assert(offsetof(ULegacyCameraShake, LocOscillation) == 272, "Offset mismatch for ULegacyCameraShake::LocOscillation");
static_assert(offsetof(ULegacyCameraShake, FOVOscillation) == 308, "Offset mismatch for ULegacyCameraShake::FOVOscillation");
static_assert(offsetof(ULegacyCameraShake, AnimPlayRate) == 320, "Offset mismatch for ULegacyCameraShake::AnimPlayRate");
static_assert(offsetof(ULegacyCameraShake, AnimScale) == 324, "Offset mismatch for ULegacyCameraShake::AnimScale");
static_assert(offsetof(ULegacyCameraShake, AnimBlendInTime) == 328, "Offset mismatch for ULegacyCameraShake::AnimBlendInTime");
static_assert(offsetof(ULegacyCameraShake, AnimBlendOutTime) == 332, "Offset mismatch for ULegacyCameraShake::AnimBlendOutTime");
static_assert(offsetof(ULegacyCameraShake, RandomAnimSegmentDuration) == 336, "Offset mismatch for ULegacyCameraShake::RandomAnimSegmentDuration");
static_assert(offsetof(ULegacyCameraShake, AnimSequence) == 344, "Offset mismatch for ULegacyCameraShake::AnimSequence");
static_assert(offsetof(ULegacyCameraShake, bRandomAnimSegment) == 352, "Offset mismatch for ULegacyCameraShake::bRandomAnimSegment");
static_assert(offsetof(ULegacyCameraShake, OscillatorTimeRemaining) == 356, "Offset mismatch for ULegacyCameraShake::OscillatorTimeRemaining");
static_assert(offsetof(ULegacyCameraShake, SequenceShakePattern) == 480, "Offset mismatch for ULegacyCameraShake::SequenceShakePattern");

// /Script/EngineCameras.LegacyCameraShakeFunctionLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class ULegacyCameraShakeFunctionLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/EngineCameras.LegacyCameraShakePattern
// Kind: Class; super: CameraShakePattern
class ULegacyCameraShakePattern
{
public:
    std::uint8_t Opaque[1];
};


// /Script/EngineCameras.PerlinNoiseCameraShakePattern
// Kind: Class; super: SimpleCameraShakePattern
class UPerlinNoiseCameraShakePattern
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    float LocationAmplitudeMultiplier; // 0x0058 (Size: 0x4, Type: FloatProperty)
    float LocationFrequencyMultiplier; // 0x005C (Size: 0x4, Type: FloatProperty)
    std::uint8_t X[0x8]; // 0x0060 (Size: 0x8, Type: StructProperty)
    std::uint8_t Y[0x8]; // 0x0068 (Size: 0x8, Type: StructProperty)
    std::uint8_t Z[0x8]; // 0x0070 (Size: 0x8, Type: StructProperty)
    float RotationAmplitudeMultiplier; // 0x0078 (Size: 0x4, Type: FloatProperty)
    float RotationFrequencyMultiplier; // 0x007C (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pitch[0x8]; // 0x0080 (Size: 0x8, Type: StructProperty)
    std::uint8_t Yaw[0x8]; // 0x0088 (Size: 0x8, Type: StructProperty)
    std::uint8_t Roll[0x8]; // 0x0090 (Size: 0x8, Type: StructProperty)
    std::uint8_t FOV[0x1]; // 0x0098 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPerlinNoiseCameraShakePattern, LocationAmplitudeMultiplier) == 88, "Offset mismatch for UPerlinNoiseCameraShakePattern::LocationAmplitudeMultiplier");
static_assert(offsetof(UPerlinNoiseCameraShakePattern, LocationFrequencyMultiplier) == 92, "Offset mismatch for UPerlinNoiseCameraShakePattern::LocationFrequencyMultiplier");
static_assert(offsetof(UPerlinNoiseCameraShakePattern, X) == 96, "Offset mismatch for UPerlinNoiseCameraShakePattern::X");
static_assert(offsetof(UPerlinNoiseCameraShakePattern, Y) == 104, "Offset mismatch for UPerlinNoiseCameraShakePattern::Y");
static_assert(offsetof(UPerlinNoiseCameraShakePattern, Z) == 112, "Offset mismatch for UPerlinNoiseCameraShakePattern::Z");
static_assert(offsetof(UPerlinNoiseCameraShakePattern, RotationAmplitudeMultiplier) == 120, "Offset mismatch for UPerlinNoiseCameraShakePattern::RotationAmplitudeMultiplier");
static_assert(offsetof(UPerlinNoiseCameraShakePattern, RotationFrequencyMultiplier) == 124, "Offset mismatch for UPerlinNoiseCameraShakePattern::RotationFrequencyMultiplier");
static_assert(offsetof(UPerlinNoiseCameraShakePattern, Pitch) == 128, "Offset mismatch for UPerlinNoiseCameraShakePattern::Pitch");
static_assert(offsetof(UPerlinNoiseCameraShakePattern, Yaw) == 136, "Offset mismatch for UPerlinNoiseCameraShakePattern::Yaw");
static_assert(offsetof(UPerlinNoiseCameraShakePattern, Roll) == 144, "Offset mismatch for UPerlinNoiseCameraShakePattern::Roll");
static_assert(offsetof(UPerlinNoiseCameraShakePattern, FOV) == 152, "Offset mismatch for UPerlinNoiseCameraShakePattern::FOV");

// /Script/EngineCameras.SimpleCameraShakePattern
// Kind: Class; super: CameraShakePattern
class USimpleCameraShakePattern
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    float duration; // 0x0028 (Size: 0x4, Type: FloatProperty)
    float BlendInTime; // 0x002C (Size: 0x4, Type: FloatProperty)
    float BlendOutTime; // 0x0030 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(USimpleCameraShakePattern, duration) == 40, "Offset mismatch for USimpleCameraShakePattern::duration");
static_assert(offsetof(USimpleCameraShakePattern, BlendInTime) == 44, "Offset mismatch for USimpleCameraShakePattern::BlendInTime");
static_assert(offsetof(USimpleCameraShakePattern, BlendOutTime) == 48, "Offset mismatch for USimpleCameraShakePattern::BlendOutTime");

// /Script/EngineCameras.TestCameraShake
// Kind: Class; super: CameraShakeBase
class UTestCameraShake
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bSingleInstance; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0029
    float ShakeScale; // 0x002C (Size: 0x4, Type: FloatProperty)
    void* RootShakePattern; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    void* CameraManager; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UTestCameraShake, bSingleInstance) == 40, "Offset mismatch for UTestCameraShake::bSingleInstance");
static_assert(offsetof(UTestCameraShake, ShakeScale) == 44, "Offset mismatch for UTestCameraShake::ShakeScale");
static_assert(offsetof(UTestCameraShake, RootShakePattern) == 48, "Offset mismatch for UTestCameraShake::RootShakePattern");
static_assert(offsetof(UTestCameraShake, CameraManager) == 56, "Offset mismatch for UTestCameraShake::CameraManager");

// /Script/EngineCameras.WaveOscillatorCameraShakePattern
// Kind: Class; super: SimpleCameraShakePattern
class UWaveOscillatorCameraShakePattern
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    float LocationAmplitudeMultiplier; // 0x0058 (Size: 0x4, Type: FloatProperty)
    float LocationFrequencyMultiplier; // 0x005C (Size: 0x4, Type: FloatProperty)
    std::uint8_t X[0xC]; // 0x0060 (Size: 0xC, Type: StructProperty)
    std::uint8_t Y[0xC]; // 0x006C (Size: 0xC, Type: StructProperty)
    std::uint8_t Z[0xC]; // 0x0078 (Size: 0xC, Type: StructProperty)
    float RotationAmplitudeMultiplier; // 0x0084 (Size: 0x4, Type: FloatProperty)
    float RotationFrequencyMultiplier; // 0x0088 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pitch[0xC]; // 0x008C (Size: 0xC, Type: StructProperty)
    std::uint8_t Yaw[0xC]; // 0x0098 (Size: 0xC, Type: StructProperty)
    std::uint8_t Roll[0xC]; // 0x00A4 (Size: 0xC, Type: StructProperty)
    std::uint8_t FOV[0x1]; // 0x00B0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UWaveOscillatorCameraShakePattern, LocationAmplitudeMultiplier) == 88, "Offset mismatch for UWaveOscillatorCameraShakePattern::LocationAmplitudeMultiplier");
static_assert(offsetof(UWaveOscillatorCameraShakePattern, LocationFrequencyMultiplier) == 92, "Offset mismatch for UWaveOscillatorCameraShakePattern::LocationFrequencyMultiplier");
static_assert(offsetof(UWaveOscillatorCameraShakePattern, X) == 96, "Offset mismatch for UWaveOscillatorCameraShakePattern::X");
static_assert(offsetof(UWaveOscillatorCameraShakePattern, Y) == 108, "Offset mismatch for UWaveOscillatorCameraShakePattern::Y");
static_assert(offsetof(UWaveOscillatorCameraShakePattern, Z) == 120, "Offset mismatch for UWaveOscillatorCameraShakePattern::Z");
static_assert(offsetof(UWaveOscillatorCameraShakePattern, RotationAmplitudeMultiplier) == 132, "Offset mismatch for UWaveOscillatorCameraShakePattern::RotationAmplitudeMultiplier");
static_assert(offsetof(UWaveOscillatorCameraShakePattern, RotationFrequencyMultiplier) == 136, "Offset mismatch for UWaveOscillatorCameraShakePattern::RotationFrequencyMultiplier");
static_assert(offsetof(UWaveOscillatorCameraShakePattern, Pitch) == 140, "Offset mismatch for UWaveOscillatorCameraShakePattern::Pitch");
static_assert(offsetof(UWaveOscillatorCameraShakePattern, Yaw) == 152, "Offset mismatch for UWaveOscillatorCameraShakePattern::Yaw");
static_assert(offsetof(UWaveOscillatorCameraShakePattern, Roll) == 164, "Offset mismatch for UWaveOscillatorCameraShakePattern::Roll");
static_assert(offsetof(UWaveOscillatorCameraShakePattern, FOV) == 176, "Offset mismatch for UWaveOscillatorCameraShakePattern::FOV");

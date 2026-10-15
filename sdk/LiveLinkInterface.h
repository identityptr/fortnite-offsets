/**
 * decamp dumper generated SDK
 * Package: /Script/LiveLinkInterface
 */
#pragma once
#include "Basic.h"

// /Script/LiveLinkInterface.CachedSubjectFrame
// Kind: ScriptStruct; super: none
struct FCachedSubjectFrame
{
public:
    std::uint8_t Opaque[1];
};


// /Script/LiveLinkInterface.LiveLinkAnimationFrameData
// Kind: ScriptStruct; super: LiveLinkBaseFrameData
struct FLiveLinkAnimationFrameData
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    TArray<void*> Transforms; // 0x0060 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FLiveLinkAnimationFrameData, Transforms) == 96, "Offset mismatch for FLiveLinkAnimationFrameData::Transforms");

// /Script/LiveLinkInterface.LiveLinkBaseBlueprintData
// Kind: ScriptStruct; super: none
struct FLiveLinkBaseBlueprintData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/LiveLinkInterface.LiveLinkBaseFrameData
// Kind: ScriptStruct; super: none
struct FLiveLinkBaseFrameData
{
public:
    std::uint8_t WorldTime[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t MetaData[0x20]; // 0x0010 (Size: 0x20, Type: StructProperty)
    TArray<void*> PropertyValues; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0000[0x18]; // 0x0040
    std::int32_t FrameId; // 0x0058 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FLiveLinkBaseFrameData, WorldTime) == 0, "Offset mismatch for FLiveLinkBaseFrameData::WorldTime");
static_assert(offsetof(FLiveLinkBaseFrameData, MetaData) == 16, "Offset mismatch for FLiveLinkBaseFrameData::MetaData");
static_assert(offsetof(FLiveLinkBaseFrameData, PropertyValues) == 48, "Offset mismatch for FLiveLinkBaseFrameData::PropertyValues");
static_assert(offsetof(FLiveLinkBaseFrameData, FrameId) == 88, "Offset mismatch for FLiveLinkBaseFrameData::FrameId");

// /Script/LiveLinkInterface.LiveLinkBaseStaticData
// Kind: ScriptStruct; super: none
struct FLiveLinkBaseStaticData
{
public:
    TArray<void*> PropertyNames; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FLiveLinkBaseStaticData, PropertyNames) == 0, "Offset mismatch for FLiveLinkBaseStaticData::PropertyNames");

// /Script/LiveLinkInterface.LiveLinkBasicBlueprintData
// Kind: ScriptStruct; super: LiveLinkBaseBlueprintData
struct FLiveLinkBasicBlueprintData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t StaticData[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t FrameData[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FLiveLinkBasicBlueprintData, StaticData) == 8, "Offset mismatch for FLiveLinkBasicBlueprintData::StaticData");
static_assert(offsetof(FLiveLinkBasicBlueprintData, FrameData) == 24, "Offset mismatch for FLiveLinkBasicBlueprintData::FrameData");

// /Script/LiveLinkInterface.LiveLinkCameraBlueprintData
// Kind: ScriptStruct; super: LiveLinkBaseBlueprintData
struct FLiveLinkCameraBlueprintData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t StaticData[0x28]; // 0x0008 (Size: 0x28, Type: StructProperty)
    std::uint8_t FrameData[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FLiveLinkCameraBlueprintData, StaticData) == 8, "Offset mismatch for FLiveLinkCameraBlueprintData::StaticData");
static_assert(offsetof(FLiveLinkCameraBlueprintData, FrameData) == 48, "Offset mismatch for FLiveLinkCameraBlueprintData::FrameData");

// /Script/LiveLinkInterface.LiveLinkCameraFrameData
// Kind: ScriptStruct; super: LiveLinkTransformFrameData
struct FLiveLinkCameraFrameData
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    float FieldOfView; // 0x00C0 (Size: 0x4, Type: FloatProperty)
    float AspectRatio; // 0x00C4 (Size: 0x4, Type: FloatProperty)
    float FocalLength; // 0x00C8 (Size: 0x4, Type: FloatProperty)
    float Aperture; // 0x00CC (Size: 0x4, Type: FloatProperty)
    float FocusDistance; // 0x00D0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ProjectionMode; // 0x00D4 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00D5
    float FilmBackWidth; // 0x00D8 (Size: 0x4, Type: FloatProperty)
    float FilmBackHeight; // 0x00DC (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FLiveLinkCameraFrameData, FieldOfView) == 192, "Offset mismatch for FLiveLinkCameraFrameData::FieldOfView");
static_assert(offsetof(FLiveLinkCameraFrameData, AspectRatio) == 196, "Offset mismatch for FLiveLinkCameraFrameData::AspectRatio");
static_assert(offsetof(FLiveLinkCameraFrameData, FocalLength) == 200, "Offset mismatch for FLiveLinkCameraFrameData::FocalLength");
static_assert(offsetof(FLiveLinkCameraFrameData, Aperture) == 204, "Offset mismatch for FLiveLinkCameraFrameData::Aperture");
static_assert(offsetof(FLiveLinkCameraFrameData, FocusDistance) == 208, "Offset mismatch for FLiveLinkCameraFrameData::FocusDistance");
static_assert(offsetof(FLiveLinkCameraFrameData, ProjectionMode) == 212, "Offset mismatch for FLiveLinkCameraFrameData::ProjectionMode");
static_assert(offsetof(FLiveLinkCameraFrameData, FilmBackWidth) == 216, "Offset mismatch for FLiveLinkCameraFrameData::FilmBackWidth");
static_assert(offsetof(FLiveLinkCameraFrameData, FilmBackHeight) == 220, "Offset mismatch for FLiveLinkCameraFrameData::FilmBackHeight");

// /Script/LiveLinkInterface.LiveLinkCameraStaticData
// Kind: ScriptStruct; super: LiveLinkTransformStaticData
struct FLiveLinkCameraStaticData
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    std::uint8_t bIsFieldOfViewSupported; // 0x0018 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsAspectRatioSupported; // 0x0019 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsFocalLengthSupported; // 0x001A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsProjectionModeSupported; // 0x001B (Size: 0x1, Type: BoolProperty)
    float FilmBackWidth; // 0x001C (Size: 0x4, Type: FloatProperty)
    float FilmBackHeight; // 0x0020 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsApertureSupported; // 0x0024 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsFocusDistanceSupported; // 0x0025 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsDepthOfFieldSupported; // 0x0026 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsDynamicFilmbackSupported; // 0x0027 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FLiveLinkCameraStaticData, bIsFieldOfViewSupported) == 24, "Offset mismatch for FLiveLinkCameraStaticData::bIsFieldOfViewSupported");
static_assert(offsetof(FLiveLinkCameraStaticData, bIsAspectRatioSupported) == 25, "Offset mismatch for FLiveLinkCameraStaticData::bIsAspectRatioSupported");
static_assert(offsetof(FLiveLinkCameraStaticData, bIsFocalLengthSupported) == 26, "Offset mismatch for FLiveLinkCameraStaticData::bIsFocalLengthSupported");
static_assert(offsetof(FLiveLinkCameraStaticData, bIsProjectionModeSupported) == 27, "Offset mismatch for FLiveLinkCameraStaticData::bIsProjectionModeSupported");
static_assert(offsetof(FLiveLinkCameraStaticData, FilmBackWidth) == 28, "Offset mismatch for FLiveLinkCameraStaticData::FilmBackWidth");
static_assert(offsetof(FLiveLinkCameraStaticData, FilmBackHeight) == 32, "Offset mismatch for FLiveLinkCameraStaticData::FilmBackHeight");
static_assert(offsetof(FLiveLinkCameraStaticData, bIsApertureSupported) == 36, "Offset mismatch for FLiveLinkCameraStaticData::bIsApertureSupported");
static_assert(offsetof(FLiveLinkCameraStaticData, bIsFocusDistanceSupported) == 37, "Offset mismatch for FLiveLinkCameraStaticData::bIsFocusDistanceSupported");
static_assert(offsetof(FLiveLinkCameraStaticData, bIsDepthOfFieldSupported) == 38, "Offset mismatch for FLiveLinkCameraStaticData::bIsDepthOfFieldSupported");
static_assert(offsetof(FLiveLinkCameraStaticData, bIsDynamicFilmbackSupported) == 39, "Offset mismatch for FLiveLinkCameraStaticData::bIsDynamicFilmbackSupported");

// /Script/LiveLinkInterface.LiveLinkCharacterFrameData
// Kind: ScriptStruct; super: LiveLinkAnimationFrameData
struct FLiveLinkCharacterFrameData
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t Transform[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FLiveLinkCharacterFrameData, Transform) == 112, "Offset mismatch for FLiveLinkCharacterFrameData::Transform");

// /Script/LiveLinkInterface.LiveLinkCharacterStaticData
// Kind: ScriptStruct; super: LiveLinkSkeletonStaticData
struct FLiveLinkCharacterStaticData
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t bIsLocationSupported; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsRotationSupported; // 0x0031 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsScaleSupported; // 0x0032 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FLiveLinkCharacterStaticData, bIsLocationSupported) == 48, "Offset mismatch for FLiveLinkCharacterStaticData::bIsLocationSupported");
static_assert(offsetof(FLiveLinkCharacterStaticData, bIsRotationSupported) == 49, "Offset mismatch for FLiveLinkCharacterStaticData::bIsRotationSupported");
static_assert(offsetof(FLiveLinkCharacterStaticData, bIsScaleSupported) == 50, "Offset mismatch for FLiveLinkCharacterStaticData::bIsScaleSupported");

// /Script/LiveLinkInterface.LiveLinkCurveConversionSettings
// Kind: ScriptStruct; super: none
struct FLiveLinkCurveConversionSettings
{
public:
    TMap<void*, void*> CurveConversionAssetMap; // 0x0000 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FLiveLinkCurveConversionSettings, CurveConversionAssetMap) == 0, "Offset mismatch for FLiveLinkCurveConversionSettings::CurveConversionAssetMap");

// /Script/LiveLinkInterface.LiveLinkCurveElement
// Kind: ScriptStruct; super: none
struct FLiveLinkCurveElement
{
public:
    std::uint8_t CurveName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    float CurveValue; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FLiveLinkCurveElement, CurveName) == 0, "Offset mismatch for FLiveLinkCurveElement::CurveName");
static_assert(offsetof(FLiveLinkCurveElement, CurveValue) == 4, "Offset mismatch for FLiveLinkCurveElement::CurveValue");

// /Script/LiveLinkInterface.LiveLinkFloatAnimationFrameData
// Kind: ScriptStruct; super: LiveLinkBaseFrameData
struct FLiveLinkFloatAnimationFrameData
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    TArray<void*> Transforms; // 0x0060 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FLiveLinkFloatAnimationFrameData, Transforms) == 96, "Offset mismatch for FLiveLinkFloatAnimationFrameData::Transforms");

// /Script/LiveLinkInterface.LiveLinkFrameData
// Kind: ScriptStruct; super: none
struct FLiveLinkFrameData
{
public:
    TArray<void*> Transforms; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CurveElements; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t WorldTime[0x10]; // 0x0020 (Size: 0x10, Type: StructProperty)
    std::uint8_t MetaData[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FLiveLinkFrameData, Transforms) == 0, "Offset mismatch for FLiveLinkFrameData::Transforms");
static_assert(offsetof(FLiveLinkFrameData, CurveElements) == 16, "Offset mismatch for FLiveLinkFrameData::CurveElements");
static_assert(offsetof(FLiveLinkFrameData, WorldTime) == 32, "Offset mismatch for FLiveLinkFrameData::WorldTime");
static_assert(offsetof(FLiveLinkFrameData, MetaData) == 48, "Offset mismatch for FLiveLinkFrameData::MetaData");

// /Script/LiveLinkInterface.LiveLinkFrameRate
// Kind: ScriptStruct; super: FrameRate
struct FLiveLinkFrameRate
{
public:
    std::int32_t Numerator; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t Denominator; // 0x0004 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FLiveLinkFrameRate, Numerator) == 0, "Offset mismatch for FLiveLinkFrameRate::Numerator");
static_assert(offsetof(FLiveLinkFrameRate, Denominator) == 4, "Offset mismatch for FLiveLinkFrameRate::Denominator");

// /Script/LiveLinkInterface.LiveLinkGamepadInputDeviceBlueprintData
// Kind: ScriptStruct; super: LiveLinkBaseBlueprintData
struct FLiveLinkGamepadInputDeviceBlueprintData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t StaticData[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t FrameData[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FLiveLinkGamepadInputDeviceBlueprintData, StaticData) == 8, "Offset mismatch for FLiveLinkGamepadInputDeviceBlueprintData::StaticData");
static_assert(offsetof(FLiveLinkGamepadInputDeviceBlueprintData, FrameData) == 24, "Offset mismatch for FLiveLinkGamepadInputDeviceBlueprintData::FrameData");

// /Script/LiveLinkInterface.LiveLinkGamepadInputDeviceFrameData
// Kind: ScriptStruct; super: LiveLinkBaseFrameData
struct FLiveLinkGamepadInputDeviceFrameData
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    float LeftAnalogX; // 0x0060 (Size: 0x4, Type: FloatProperty)
    float LeftAnalogY; // 0x0064 (Size: 0x4, Type: FloatProperty)
    float RightAnalogX; // 0x0068 (Size: 0x4, Type: FloatProperty)
    float RightAnalogY; // 0x006C (Size: 0x4, Type: FloatProperty)
    float LeftTriggerAnalog; // 0x0070 (Size: 0x4, Type: FloatProperty)
    float RightTriggerAnalog; // 0x0074 (Size: 0x4, Type: FloatProperty)
    float LeftThumb; // 0x0078 (Size: 0x4, Type: FloatProperty)
    float RightThumb; // 0x007C (Size: 0x4, Type: FloatProperty)
    float SpecialLeft; // 0x0080 (Size: 0x4, Type: FloatProperty)
    float SpecialLeft_X; // 0x0084 (Size: 0x4, Type: FloatProperty)
    float SpecialLeft_Y; // 0x0088 (Size: 0x4, Type: FloatProperty)
    float SpecialRight; // 0x008C (Size: 0x4, Type: FloatProperty)
    float FaceButtonBottom; // 0x0090 (Size: 0x4, Type: FloatProperty)
    float FaceButtonRight; // 0x0094 (Size: 0x4, Type: FloatProperty)
    float FaceButtonLeft; // 0x0098 (Size: 0x4, Type: FloatProperty)
    float FaceButtonTop; // 0x009C (Size: 0x4, Type: FloatProperty)
    float LeftShoulder; // 0x00A0 (Size: 0x4, Type: FloatProperty)
    float RightShoulder; // 0x00A4 (Size: 0x4, Type: FloatProperty)
    float LeftTriggerThreshold; // 0x00A8 (Size: 0x4, Type: FloatProperty)
    float RightTriggerThreshold; // 0x00AC (Size: 0x4, Type: FloatProperty)
    float DPadUp; // 0x00B0 (Size: 0x4, Type: FloatProperty)
    float DPadDown; // 0x00B4 (Size: 0x4, Type: FloatProperty)
    float DPadRight; // 0x00B8 (Size: 0x4, Type: FloatProperty)
    float DPadLeft; // 0x00BC (Size: 0x4, Type: FloatProperty)
    float LeftStickUp; // 0x00C0 (Size: 0x4, Type: FloatProperty)
    float LeftStickDown; // 0x00C4 (Size: 0x4, Type: FloatProperty)
    float LeftStickRight; // 0x00C8 (Size: 0x4, Type: FloatProperty)
    float LeftStickLeft; // 0x00CC (Size: 0x4, Type: FloatProperty)
    float RightStickUp; // 0x00D0 (Size: 0x4, Type: FloatProperty)
    float RightStickDown; // 0x00D4 (Size: 0x4, Type: FloatProperty)
    float RightStickRight; // 0x00D8 (Size: 0x4, Type: FloatProperty)
    float RightStickLeft; // 0x00DC (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FLiveLinkGamepadInputDeviceFrameData, LeftAnalogX) == 96, "Offset mismatch for FLiveLinkGamepadInputDeviceFrameData::LeftAnalogX");
static_assert(offsetof(FLiveLinkGamepadInputDeviceFrameData, LeftAnalogY) == 100, "Offset mismatch for FLiveLinkGamepadInputDeviceFrameData::LeftAnalogY");
static_assert(offsetof(FLiveLinkGamepadInputDeviceFrameData, RightAnalogX) == 104, "Offset mismatch for FLiveLinkGamepadInputDeviceFrameData::RightAnalogX");
static_assert(offsetof(FLiveLinkGamepadInputDeviceFrameData, RightAnalogY) == 108, "Offset mismatch for FLiveLinkGamepadInputDeviceFrameData::RightAnalogY");
static_assert(offsetof(FLiveLinkGamepadInputDeviceFrameData, LeftTriggerAnalog) == 112, "Offset mismatch for FLiveLinkGamepadInputDeviceFrameData::LeftTriggerAnalog");
static_assert(offsetof(FLiveLinkGamepadInputDeviceFrameData, RightTriggerAnalog) == 116, "Offset mismatch for FLiveLinkGamepadInputDeviceFrameData::RightTriggerAnalog");
static_assert(offsetof(FLiveLinkGamepadInputDeviceFrameData, LeftThumb) == 120, "Offset mismatch for FLiveLinkGamepadInputDeviceFrameData::LeftThumb");
static_assert(offsetof(FLiveLinkGamepadInputDeviceFrameData, RightThumb) == 124, "Offset mismatch for FLiveLinkGamepadInputDeviceFrameData::RightThumb");
static_assert(offsetof(FLiveLinkGamepadInputDeviceFrameData, SpecialLeft) == 128, "Offset mismatch for FLiveLinkGamepadInputDeviceFrameData::SpecialLeft");
static_assert(offsetof(FLiveLinkGamepadInputDeviceFrameData, SpecialLeft_X) == 132, "Offset mismatch for FLiveLinkGamepadInputDeviceFrameData::SpecialLeft_X");
static_assert(offsetof(FLiveLinkGamepadInputDeviceFrameData, SpecialLeft_Y) == 136, "Offset mismatch for FLiveLinkGamepadInputDeviceFrameData::SpecialLeft_Y");
static_assert(offsetof(FLiveLinkGamepadInputDeviceFrameData, SpecialRight) == 140, "Offset mismatch for FLiveLinkGamepadInputDeviceFrameData::SpecialRight");
static_assert(offsetof(FLiveLinkGamepadInputDeviceFrameData, FaceButtonBottom) == 144, "Offset mismatch for FLiveLinkGamepadInputDeviceFrameData::FaceButtonBottom");
static_assert(offsetof(FLiveLinkGamepadInputDeviceFrameData, FaceButtonRight) == 148, "Offset mismatch for FLiveLinkGamepadInputDeviceFrameData::FaceButtonRight");
static_assert(offsetof(FLiveLinkGamepadInputDeviceFrameData, FaceButtonLeft) == 152, "Offset mismatch for FLiveLinkGamepadInputDeviceFrameData::FaceButtonLeft");
static_assert(offsetof(FLiveLinkGamepadInputDeviceFrameData, FaceButtonTop) == 156, "Offset mismatch for FLiveLinkGamepadInputDeviceFrameData::FaceButtonTop");
static_assert(offsetof(FLiveLinkGamepadInputDeviceFrameData, LeftShoulder) == 160, "Offset mismatch for FLiveLinkGamepadInputDeviceFrameData::LeftShoulder");
static_assert(offsetof(FLiveLinkGamepadInputDeviceFrameData, RightShoulder) == 164, "Offset mismatch for FLiveLinkGamepadInputDeviceFrameData::RightShoulder");
static_assert(offsetof(FLiveLinkGamepadInputDeviceFrameData, LeftTriggerThreshold) == 168, "Offset mismatch for FLiveLinkGamepadInputDeviceFrameData::LeftTriggerThreshold");
static_assert(offsetof(FLiveLinkGamepadInputDeviceFrameData, RightTriggerThreshold) == 172, "Offset mismatch for FLiveLinkGamepadInputDeviceFrameData::RightTriggerThreshold");
static_assert(offsetof(FLiveLinkGamepadInputDeviceFrameData, DPadUp) == 176, "Offset mismatch for FLiveLinkGamepadInputDeviceFrameData::DPadUp");
static_assert(offsetof(FLiveLinkGamepadInputDeviceFrameData, DPadDown) == 180, "Offset mismatch for FLiveLinkGamepadInputDeviceFrameData::DPadDown");
static_assert(offsetof(FLiveLinkGamepadInputDeviceFrameData, DPadRight) == 184, "Offset mismatch for FLiveLinkGamepadInputDeviceFrameData::DPadRight");
static_assert(offsetof(FLiveLinkGamepadInputDeviceFrameData, DPadLeft) == 188, "Offset mismatch for FLiveLinkGamepadInputDeviceFrameData::DPadLeft");
static_assert(offsetof(FLiveLinkGamepadInputDeviceFrameData, LeftStickUp) == 192, "Offset mismatch for FLiveLinkGamepadInputDeviceFrameData::LeftStickUp");
static_assert(offsetof(FLiveLinkGamepadInputDeviceFrameData, LeftStickDown) == 196, "Offset mismatch for FLiveLinkGamepadInputDeviceFrameData::LeftStickDown");
static_assert(offsetof(FLiveLinkGamepadInputDeviceFrameData, LeftStickRight) == 200, "Offset mismatch for FLiveLinkGamepadInputDeviceFrameData::LeftStickRight");
static_assert(offsetof(FLiveLinkGamepadInputDeviceFrameData, LeftStickLeft) == 204, "Offset mismatch for FLiveLinkGamepadInputDeviceFrameData::LeftStickLeft");
static_assert(offsetof(FLiveLinkGamepadInputDeviceFrameData, RightStickUp) == 208, "Offset mismatch for FLiveLinkGamepadInputDeviceFrameData::RightStickUp");
static_assert(offsetof(FLiveLinkGamepadInputDeviceFrameData, RightStickDown) == 212, "Offset mismatch for FLiveLinkGamepadInputDeviceFrameData::RightStickDown");
static_assert(offsetof(FLiveLinkGamepadInputDeviceFrameData, RightStickRight) == 216, "Offset mismatch for FLiveLinkGamepadInputDeviceFrameData::RightStickRight");
static_assert(offsetof(FLiveLinkGamepadInputDeviceFrameData, RightStickLeft) == 220, "Offset mismatch for FLiveLinkGamepadInputDeviceFrameData::RightStickLeft");

// /Script/LiveLinkInterface.LiveLinkGamepadInputDeviceStaticData
// Kind: ScriptStruct; super: LiveLinkBaseStaticData
struct FLiveLinkGamepadInputDeviceStaticData
{
public:
    TArray<void*> PropertyNames; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FLiveLinkGamepadInputDeviceStaticData, PropertyNames) == 0, "Offset mismatch for FLiveLinkGamepadInputDeviceStaticData::PropertyNames");

// /Script/LiveLinkInterface.LiveLinkInterpolationSettings
// Kind: ScriptStruct; super: none
struct FLiveLinkInterpolationSettings
{
public:
    std::uint8_t bUseInterpolation; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float InterpolationOffset; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FLiveLinkInterpolationSettings, bUseInterpolation) == 0, "Offset mismatch for FLiveLinkInterpolationSettings::bUseInterpolation");
static_assert(offsetof(FLiveLinkInterpolationSettings, InterpolationOffset) == 4, "Offset mismatch for FLiveLinkInterpolationSettings::InterpolationOffset");

// /Script/LiveLinkInterface.LiveLinkLightBlueprintData
// Kind: ScriptStruct; super: LiveLinkBaseBlueprintData
struct FLiveLinkLightBlueprintData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t StaticData[0x28]; // 0x0008 (Size: 0x28, Type: StructProperty)
    std::uint8_t FrameData[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FLiveLinkLightBlueprintData, StaticData) == 8, "Offset mismatch for FLiveLinkLightBlueprintData::StaticData");
static_assert(offsetof(FLiveLinkLightBlueprintData, FrameData) == 48, "Offset mismatch for FLiveLinkLightBlueprintData::FrameData");

// /Script/LiveLinkInterface.LiveLinkLightFrameData
// Kind: ScriptStruct; super: LiveLinkTransformFrameData
struct FLiveLinkLightFrameData
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    float Temperature; // 0x00C0 (Size: 0x4, Type: FloatProperty)
    float Intensity; // 0x00C4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t LightColor[0x4]; // 0x00C8 (Size: 0x4, Type: StructProperty)
    float InnerConeAngle; // 0x00CC (Size: 0x4, Type: FloatProperty)
    float OuterConeAngle; // 0x00D0 (Size: 0x4, Type: FloatProperty)
    float AttenuationRadius; // 0x00D4 (Size: 0x4, Type: FloatProperty)
    float SourceRadius; // 0x00D8 (Size: 0x4, Type: FloatProperty)
    float SoftSourceRadius; // 0x00DC (Size: 0x4, Type: FloatProperty)
    float SourceLength; // 0x00E0 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FLiveLinkLightFrameData, Temperature) == 192, "Offset mismatch for FLiveLinkLightFrameData::Temperature");
static_assert(offsetof(FLiveLinkLightFrameData, Intensity) == 196, "Offset mismatch for FLiveLinkLightFrameData::Intensity");
static_assert(offsetof(FLiveLinkLightFrameData, LightColor) == 200, "Offset mismatch for FLiveLinkLightFrameData::LightColor");
static_assert(offsetof(FLiveLinkLightFrameData, InnerConeAngle) == 204, "Offset mismatch for FLiveLinkLightFrameData::InnerConeAngle");
static_assert(offsetof(FLiveLinkLightFrameData, OuterConeAngle) == 208, "Offset mismatch for FLiveLinkLightFrameData::OuterConeAngle");
static_assert(offsetof(FLiveLinkLightFrameData, AttenuationRadius) == 212, "Offset mismatch for FLiveLinkLightFrameData::AttenuationRadius");
static_assert(offsetof(FLiveLinkLightFrameData, SourceRadius) == 216, "Offset mismatch for FLiveLinkLightFrameData::SourceRadius");
static_assert(offsetof(FLiveLinkLightFrameData, SoftSourceRadius) == 220, "Offset mismatch for FLiveLinkLightFrameData::SoftSourceRadius");
static_assert(offsetof(FLiveLinkLightFrameData, SourceLength) == 224, "Offset mismatch for FLiveLinkLightFrameData::SourceLength");

// /Script/LiveLinkInterface.LiveLinkLightStaticData
// Kind: ScriptStruct; super: LiveLinkTransformStaticData
struct FLiveLinkLightStaticData
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    std::uint8_t bIsTemperatureSupported; // 0x0018 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsIntensitySupported; // 0x0019 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsLightColorSupported; // 0x001A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsInnerConeAngleSupported; // 0x001B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsOuterConeAngleSupported; // 0x001C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsAttenuationRadiusSupported; // 0x001D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsSourceLenghtSupported; // 0x001E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsSourceRadiusSupported; // 0x001F (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsSoftSourceRadiusSupported; // 0x0020 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FLiveLinkLightStaticData, bIsTemperatureSupported) == 24, "Offset mismatch for FLiveLinkLightStaticData::bIsTemperatureSupported");
static_assert(offsetof(FLiveLinkLightStaticData, bIsIntensitySupported) == 25, "Offset mismatch for FLiveLinkLightStaticData::bIsIntensitySupported");
static_assert(offsetof(FLiveLinkLightStaticData, bIsLightColorSupported) == 26, "Offset mismatch for FLiveLinkLightStaticData::bIsLightColorSupported");
static_assert(offsetof(FLiveLinkLightStaticData, bIsInnerConeAngleSupported) == 27, "Offset mismatch for FLiveLinkLightStaticData::bIsInnerConeAngleSupported");
static_assert(offsetof(FLiveLinkLightStaticData, bIsOuterConeAngleSupported) == 28, "Offset mismatch for FLiveLinkLightStaticData::bIsOuterConeAngleSupported");
static_assert(offsetof(FLiveLinkLightStaticData, bIsAttenuationRadiusSupported) == 29, "Offset mismatch for FLiveLinkLightStaticData::bIsAttenuationRadiusSupported");
static_assert(offsetof(FLiveLinkLightStaticData, bIsSourceLenghtSupported) == 30, "Offset mismatch for FLiveLinkLightStaticData::bIsSourceLenghtSupported");
static_assert(offsetof(FLiveLinkLightStaticData, bIsSourceRadiusSupported) == 31, "Offset mismatch for FLiveLinkLightStaticData::bIsSourceRadiusSupported");
static_assert(offsetof(FLiveLinkLightStaticData, bIsSoftSourceRadiusSupported) == 32, "Offset mismatch for FLiveLinkLightStaticData::bIsSoftSourceRadiusSupported");

// /Script/LiveLinkInterface.LiveLinkLocatorBlueprintData
// Kind: ScriptStruct; super: LiveLinkBaseBlueprintData
struct FLiveLinkLocatorBlueprintData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t StaticData[0x28]; // 0x0008 (Size: 0x28, Type: StructProperty)
    std::uint8_t FrameData[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FLiveLinkLocatorBlueprintData, StaticData) == 8, "Offset mismatch for FLiveLinkLocatorBlueprintData::StaticData");
static_assert(offsetof(FLiveLinkLocatorBlueprintData, FrameData) == 48, "Offset mismatch for FLiveLinkLocatorBlueprintData::FrameData");

// /Script/LiveLinkInterface.LiveLinkLocatorFrameData
// Kind: ScriptStruct; super: LiveLinkBaseFrameData
struct FLiveLinkLocatorFrameData
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    TArray<void*> Locators; // 0x0060 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FLiveLinkLocatorFrameData, Locators) == 96, "Offset mismatch for FLiveLinkLocatorFrameData::Locators");

// /Script/LiveLinkInterface.LiveLinkLocatorStaticData
// Kind: ScriptStruct; super: LiveLinkBaseStaticData
struct FLiveLinkLocatorStaticData
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    TArray<void*> LocatorNames; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bUnlabelledData; // 0x0020 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FLiveLinkLocatorStaticData, LocatorNames) == 16, "Offset mismatch for FLiveLinkLocatorStaticData::LocatorNames");
static_assert(offsetof(FLiveLinkLocatorStaticData, bUnlabelledData) == 32, "Offset mismatch for FLiveLinkLocatorStaticData::bUnlabelledData");

// /Script/LiveLinkInterface.LiveLinkMetaData
// Kind: ScriptStruct; super: none
struct FLiveLinkMetaData
{
public:
    TMap<void*, void*> StringMetadata; // 0x0000 (Size: 0x10, Type: MapProperty)
    std::uint8_t SceneTime[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FLiveLinkMetaData, StringMetadata) == 0, "Offset mismatch for FLiveLinkMetaData::StringMetadata");
static_assert(offsetof(FLiveLinkMetaData, SceneTime) == 16, "Offset mismatch for FLiveLinkMetaData::SceneTime");

// /Script/LiveLinkInterface.LiveLinkRefSkeleton
// Kind: ScriptStruct; super: none
struct FLiveLinkRefSkeleton
{
public:
    TArray<void*> BoneNames; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> BoneParents; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FLiveLinkRefSkeleton, BoneNames) == 0, "Offset mismatch for FLiveLinkRefSkeleton::BoneNames");
static_assert(offsetof(FLiveLinkRefSkeleton, BoneParents) == 16, "Offset mismatch for FLiveLinkRefSkeleton::BoneParents");

// /Script/LiveLinkInterface.LiveLinkSkeletonStaticData
// Kind: ScriptStruct; super: LiveLinkBaseStaticData
struct FLiveLinkSkeletonStaticData
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    TArray<void*> BoneNames; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> BoneParents; // 0x0020 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FLiveLinkSkeletonStaticData, BoneNames) == 16, "Offset mismatch for FLiveLinkSkeletonStaticData::BoneNames");
static_assert(offsetof(FLiveLinkSkeletonStaticData, BoneParents) == 32, "Offset mismatch for FLiveLinkSkeletonStaticData::BoneParents");

// /Script/LiveLinkInterface.LiveLinkSourceBufferManagementSettings
// Kind: ScriptStruct; super: none
struct FLiveLinkSourceBufferManagementSettings
{
public:
    std::uint8_t bValidEngineTimeEnabled; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float ValidEngineTime; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float EngineTimeOffset; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x000C
    double EngineTimeClockOffset; // 0x0010 (Size: 0x8, Type: DoubleProperty)
    double SmoothEngineTimeOffset; // 0x0018 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bGenerateSubFrame; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0021
    std::uint8_t DetectedFrameRate[0x8]; // 0x0024 (Size: 0x8, Type: StructProperty)
    std::uint8_t bUseTimecodeSmoothLatest; // 0x002C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x002D
    std::uint8_t SourceTimecodeFrameRate[0x8]; // 0x0030 (Size: 0x8, Type: StructProperty)
    std::uint8_t bValidTimecodeFrameEnabled; // 0x0038 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x0039
    std::int32_t ValidTimecodeFrame; // 0x003C (Size: 0x4, Type: IntProperty)
    float TimecodeFrameOffset; // 0x0040 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0005[0x4]; // 0x0044
    double TimecodeClockOffset; // 0x0048 (Size: 0x8, Type: DoubleProperty)
    std::int32_t LatestOffset; // 0x0050 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxNumberOfFrameToBuffered; // 0x0054 (Size: 0x4, Type: IntProperty)
    std::uint8_t bKeepAtLeastOneFrame; // 0x0058 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FLiveLinkSourceBufferManagementSettings, bValidEngineTimeEnabled) == 0, "Offset mismatch for FLiveLinkSourceBufferManagementSettings::bValidEngineTimeEnabled");
static_assert(offsetof(FLiveLinkSourceBufferManagementSettings, ValidEngineTime) == 4, "Offset mismatch for FLiveLinkSourceBufferManagementSettings::ValidEngineTime");
static_assert(offsetof(FLiveLinkSourceBufferManagementSettings, EngineTimeOffset) == 8, "Offset mismatch for FLiveLinkSourceBufferManagementSettings::EngineTimeOffset");
static_assert(offsetof(FLiveLinkSourceBufferManagementSettings, EngineTimeClockOffset) == 16, "Offset mismatch for FLiveLinkSourceBufferManagementSettings::EngineTimeClockOffset");
static_assert(offsetof(FLiveLinkSourceBufferManagementSettings, SmoothEngineTimeOffset) == 24, "Offset mismatch for FLiveLinkSourceBufferManagementSettings::SmoothEngineTimeOffset");
static_assert(offsetof(FLiveLinkSourceBufferManagementSettings, bGenerateSubFrame) == 32, "Offset mismatch for FLiveLinkSourceBufferManagementSettings::bGenerateSubFrame");
static_assert(offsetof(FLiveLinkSourceBufferManagementSettings, DetectedFrameRate) == 36, "Offset mismatch for FLiveLinkSourceBufferManagementSettings::DetectedFrameRate");
static_assert(offsetof(FLiveLinkSourceBufferManagementSettings, bUseTimecodeSmoothLatest) == 44, "Offset mismatch for FLiveLinkSourceBufferManagementSettings::bUseTimecodeSmoothLatest");
static_assert(offsetof(FLiveLinkSourceBufferManagementSettings, SourceTimecodeFrameRate) == 48, "Offset mismatch for FLiveLinkSourceBufferManagementSettings::SourceTimecodeFrameRate");
static_assert(offsetof(FLiveLinkSourceBufferManagementSettings, bValidTimecodeFrameEnabled) == 56, "Offset mismatch for FLiveLinkSourceBufferManagementSettings::bValidTimecodeFrameEnabled");
static_assert(offsetof(FLiveLinkSourceBufferManagementSettings, ValidTimecodeFrame) == 60, "Offset mismatch for FLiveLinkSourceBufferManagementSettings::ValidTimecodeFrame");
static_assert(offsetof(FLiveLinkSourceBufferManagementSettings, TimecodeFrameOffset) == 64, "Offset mismatch for FLiveLinkSourceBufferManagementSettings::TimecodeFrameOffset");
static_assert(offsetof(FLiveLinkSourceBufferManagementSettings, TimecodeClockOffset) == 72, "Offset mismatch for FLiveLinkSourceBufferManagementSettings::TimecodeClockOffset");
static_assert(offsetof(FLiveLinkSourceBufferManagementSettings, LatestOffset) == 80, "Offset mismatch for FLiveLinkSourceBufferManagementSettings::LatestOffset");
static_assert(offsetof(FLiveLinkSourceBufferManagementSettings, MaxNumberOfFrameToBuffered) == 84, "Offset mismatch for FLiveLinkSourceBufferManagementSettings::MaxNumberOfFrameToBuffered");
static_assert(offsetof(FLiveLinkSourceBufferManagementSettings, bKeepAtLeastOneFrame) == 88, "Offset mismatch for FLiveLinkSourceBufferManagementSettings::bKeepAtLeastOneFrame");

// /Script/LiveLinkInterface.LiveLinkSourceDebugInfo
// Kind: ScriptStruct; super: none
struct FLiveLinkSourceDebugInfo
{
public:
    std::uint8_t SubjectName[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::int32_t SnapshotIndex; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t NumberOfBufferAtSnapshot; // 0x0008 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FLiveLinkSourceDebugInfo, SubjectName) == 0, "Offset mismatch for FLiveLinkSourceDebugInfo::SubjectName");
static_assert(offsetof(FLiveLinkSourceDebugInfo, SnapshotIndex) == 4, "Offset mismatch for FLiveLinkSourceDebugInfo::SnapshotIndex");
static_assert(offsetof(FLiveLinkSourceDebugInfo, NumberOfBufferAtSnapshot) == 8, "Offset mismatch for FLiveLinkSourceDebugInfo::NumberOfBufferAtSnapshot");

// /Script/LiveLinkInterface.LiveLinkSourceHandle
// Kind: ScriptStruct; super: none
struct FLiveLinkSourceHandle
{
public:
    std::uint8_t Opaque[1];
};


// /Script/LiveLinkInterface.LiveLinkSourcePreset
// Kind: ScriptStruct; super: none
struct FLiveLinkSourcePreset
{
public:
    std::uint8_t Guid[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    void* Settings; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    FText SourceType; // 0x0018 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(FLiveLinkSourcePreset, Guid) == 0, "Offset mismatch for FLiveLinkSourcePreset::Guid");
static_assert(offsetof(FLiveLinkSourcePreset, Settings) == 16, "Offset mismatch for FLiveLinkSourcePreset::Settings");
static_assert(offsetof(FLiveLinkSourcePreset, SourceType) == 24, "Offset mismatch for FLiveLinkSourcePreset::SourceType");

// /Script/LiveLinkInterface.LiveLinkSubjectKey
// Kind: ScriptStruct; super: none
struct FLiveLinkSubjectKey
{
public:
    std::uint8_t Source[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t SubjectName[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FLiveLinkSubjectKey, Source) == 0, "Offset mismatch for FLiveLinkSubjectKey::Source");
static_assert(offsetof(FLiveLinkSubjectKey, SubjectName) == 16, "Offset mismatch for FLiveLinkSubjectKey::SubjectName");

// /Script/LiveLinkInterface.LiveLinkSubjectName
// Kind: ScriptStruct; super: none
struct FLiveLinkSubjectName
{
public:
    FName Name; // 0x0000 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FLiveLinkSubjectName, Name) == 0, "Offset mismatch for FLiveLinkSubjectName::Name");

// /Script/LiveLinkInterface.LiveLinkSubjectPreset
// Kind: ScriptStruct; super: none
struct FLiveLinkSubjectPreset
{
public:
    std::uint8_t Key[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    void* Role; // 0x0018 (Size: 0x8, Type: ClassProperty)
    void* Settings; // 0x0020 (Size: 0x8, Type: ObjectProperty)
    void* VirtualSubject; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bEnabled; // 0x0030 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FLiveLinkSubjectPreset, Key) == 0, "Offset mismatch for FLiveLinkSubjectPreset::Key");
static_assert(offsetof(FLiveLinkSubjectPreset, Role) == 24, "Offset mismatch for FLiveLinkSubjectPreset::Role");
static_assert(offsetof(FLiveLinkSubjectPreset, Settings) == 32, "Offset mismatch for FLiveLinkSubjectPreset::Settings");
static_assert(offsetof(FLiveLinkSubjectPreset, VirtualSubject) == 40, "Offset mismatch for FLiveLinkSubjectPreset::VirtualSubject");
static_assert(offsetof(FLiveLinkSubjectPreset, bEnabled) == 48, "Offset mismatch for FLiveLinkSubjectPreset::bEnabled");

// /Script/LiveLinkInterface.LiveLinkSubjectRepresentation
// Kind: ScriptStruct; super: none
struct FLiveLinkSubjectRepresentation
{
public:
    std::uint8_t Subject[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    void* Role; // 0x0008 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(FLiveLinkSubjectRepresentation, Subject) == 0, "Offset mismatch for FLiveLinkSubjectRepresentation::Subject");
static_assert(offsetof(FLiveLinkSubjectRepresentation, Role) == 8, "Offset mismatch for FLiveLinkSubjectRepresentation::Role");

// /Script/LiveLinkInterface.LiveLinkTime
// Kind: ScriptStruct; super: none
struct FLiveLinkTime
{
public:
    double WorldTime; // 0x0000 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t SceneTime[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FLiveLinkTime, WorldTime) == 0, "Offset mismatch for FLiveLinkTime::WorldTime");
static_assert(offsetof(FLiveLinkTime, SceneTime) == 8, "Offset mismatch for FLiveLinkTime::SceneTime");

// /Script/LiveLinkInterface.LiveLinkTimeCode
// Kind: ScriptStruct; super: LiveLinkTimeCode_Base_DEPRECATED
struct FLiveLinkTimeCode
{
public:
    std::int32_t Seconds; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t Frames; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::uint8_t FrameRate[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FLiveLinkTimeCode, Seconds) == 0, "Offset mismatch for FLiveLinkTimeCode::Seconds");
static_assert(offsetof(FLiveLinkTimeCode, Frames) == 4, "Offset mismatch for FLiveLinkTimeCode::Frames");
static_assert(offsetof(FLiveLinkTimeCode, FrameRate) == 8, "Offset mismatch for FLiveLinkTimeCode::FrameRate");

// /Script/LiveLinkInterface.LiveLinkTimeCode_Base_DEPRECATED
// Kind: ScriptStruct; super: none
struct FLiveLinkTimeCode_Base_DEPRECATED
{
public:
    std::int32_t Seconds; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t Frames; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::uint8_t FrameRate[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FLiveLinkTimeCode_Base_DEPRECATED, Seconds) == 0, "Offset mismatch for FLiveLinkTimeCode_Base_DEPRECATED::Seconds");
static_assert(offsetof(FLiveLinkTimeCode_Base_DEPRECATED, Frames) == 4, "Offset mismatch for FLiveLinkTimeCode_Base_DEPRECATED::Frames");
static_assert(offsetof(FLiveLinkTimeCode_Base_DEPRECATED, FrameRate) == 8, "Offset mismatch for FLiveLinkTimeCode_Base_DEPRECATED::FrameRate");

// /Script/LiveLinkInterface.LiveLinkTimeSynchronizationSettings
// Kind: ScriptStruct; super: none
struct FLiveLinkTimeSynchronizationSettings
{
public:
    std::uint8_t FrameRate[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t FrameOffset[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FLiveLinkTimeSynchronizationSettings, FrameRate) == 0, "Offset mismatch for FLiveLinkTimeSynchronizationSettings::FrameRate");
static_assert(offsetof(FLiveLinkTimeSynchronizationSettings, FrameOffset) == 8, "Offset mismatch for FLiveLinkTimeSynchronizationSettings::FrameOffset");

// /Script/LiveLinkInterface.LiveLinkTransform
// Kind: ScriptStruct; super: none
struct FLiveLinkTransform
{
public:
    std::uint8_t Opaque[1];
};


// /Script/LiveLinkInterface.LiveLinkTransformBlueprintData
// Kind: ScriptStruct; super: LiveLinkBaseBlueprintData
struct FLiveLinkTransformBlueprintData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t StaticData[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t FrameData[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FLiveLinkTransformBlueprintData, StaticData) == 8, "Offset mismatch for FLiveLinkTransformBlueprintData::StaticData");
static_assert(offsetof(FLiveLinkTransformBlueprintData, FrameData) == 32, "Offset mismatch for FLiveLinkTransformBlueprintData::FrameData");

// /Script/LiveLinkInterface.LiveLinkTransformFrameData
// Kind: ScriptStruct; super: LiveLinkBaseFrameData
struct FLiveLinkTransformFrameData
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    std::uint8_t Transform[0x1]; // 0x0060 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FLiveLinkTransformFrameData, Transform) == 96, "Offset mismatch for FLiveLinkTransformFrameData::Transform");

// /Script/LiveLinkInterface.LiveLinkTransformStaticData
// Kind: ScriptStruct; super: LiveLinkBaseStaticData
struct FLiveLinkTransformStaticData
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t bIsLocationSupported; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsRotationSupported; // 0x0011 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsScaleSupported; // 0x0012 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FLiveLinkTransformStaticData, bIsLocationSupported) == 16, "Offset mismatch for FLiveLinkTransformStaticData::bIsLocationSupported");
static_assert(offsetof(FLiveLinkTransformStaticData, bIsRotationSupported) == 17, "Offset mismatch for FLiveLinkTransformStaticData::bIsRotationSupported");
static_assert(offsetof(FLiveLinkTransformStaticData, bIsScaleSupported) == 18, "Offset mismatch for FLiveLinkTransformStaticData::bIsScaleSupported");

// /Script/LiveLinkInterface.LiveLinkWorldTime
// Kind: ScriptStruct; super: none
struct FLiveLinkWorldTime
{
public:
    double time; // 0x0000 (Size: 0x8, Type: DoubleProperty)
    double Offset; // 0x0008 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FLiveLinkWorldTime, time) == 0, "Offset mismatch for FLiveLinkWorldTime::time");
static_assert(offsetof(FLiveLinkWorldTime, Offset) == 8, "Offset mismatch for FLiveLinkWorldTime::Offset");

// /Script/LiveLinkInterface.SubjectFrameHandle
// Kind: ScriptStruct; super: LiveLinkBaseBlueprintData
struct FSubjectFrameHandle
{
public:
    std::uint8_t Opaque[1];
};


// /Script/LiveLinkInterface.SubjectMetadata
// Kind: ScriptStruct; super: none
struct FSubjectMetadata
{
public:
    TMap<void*, void*> StringMetadata; // 0x0000 (Size: 0x10, Type: MapProperty)
    std::uint8_t SceneTimecode[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    std::uint8_t SceneFramerate[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSubjectMetadata, StringMetadata) == 0, "Offset mismatch for FSubjectMetadata::StringMetadata");
static_assert(offsetof(FSubjectMetadata, SceneTimecode) == 16, "Offset mismatch for FSubjectMetadata::SceneTimecode");
static_assert(offsetof(FSubjectMetadata, SceneFramerate) == 40, "Offset mismatch for FSubjectMetadata::SceneFramerate");

// /Script/LiveLinkInterface.LiveLinkAnimationRole
// Kind: Class; super: LiveLinkBasicRole
class ULiveLinkAnimationRole
{
public:
    std::uint8_t Opaque[1];
};


// /Script/LiveLinkInterface.LiveLinkBasicRole
// Kind: Class; super: LiveLinkRole
class ULiveLinkBasicRole
{
public:
    std::uint8_t Opaque[1];
};


// /Script/LiveLinkInterface.LiveLinkCameraRole
// Kind: Class; super: LiveLinkTransformRole
class ULiveLinkCameraRole
{
public:
    std::uint8_t Opaque[1];
};


// /Script/LiveLinkInterface.LiveLinkCharacterRole
// Kind: Class; super: LiveLinkAnimationRole
class ULiveLinkCharacterRole
{
public:
    std::uint8_t Opaque[1];
};


// /Script/LiveLinkInterface.LiveLinkController
// Kind: Class; super: Object
class ULiveLinkController
{
public:
    std::uint8_t Opaque[1];
};


// /Script/LiveLinkInterface.LiveLinkCurveRemapSettings
// Kind: Class; super: LiveLinkSourceSettings
class ULiveLinkCurveRemapSettings
{
public:
    std::uint8_t Pad_0000[0xB8]; // 0x0000
    std::uint8_t CurveConversionSettings[0x1]; // 0x00B8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(ULiveLinkCurveRemapSettings, CurveConversionSettings) == 184, "Offset mismatch for ULiveLinkCurveRemapSettings::CurveConversionSettings");

// /Script/LiveLinkInterface.LiveLinkDefaultSourceSettings
// Kind: Class; super: Object
class ULiveLinkDefaultSourceSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::int32_t DefaultSourceFrameBufferSize; // 0x0028 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(ULiveLinkDefaultSourceSettings, DefaultSourceFrameBufferSize) == 40, "Offset mismatch for ULiveLinkDefaultSourceSettings::DefaultSourceFrameBufferSize");

// /Script/LiveLinkInterface.LiveLinkDefaultSubjectSettings
// Kind: Class; super: Object
class ULiveLinkDefaultSubjectSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bRebroadcastSubjectsByDefault; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowEditingRebroadcastProperty; // 0x0029 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(ULiveLinkDefaultSubjectSettings, bRebroadcastSubjectsByDefault) == 40, "Offset mismatch for ULiveLinkDefaultSubjectSettings::bRebroadcastSubjectsByDefault");
static_assert(offsetof(ULiveLinkDefaultSubjectSettings, bAllowEditingRebroadcastProperty) == 41, "Offset mismatch for ULiveLinkDefaultSubjectSettings::bAllowEditingRebroadcastProperty");

// /Script/LiveLinkInterface.LiveLinkFrameInterpolationProcessor
// Kind: Class; super: Object
class ULiveLinkFrameInterpolationProcessor
{
public:
    std::uint8_t Opaque[1];
};


// /Script/LiveLinkInterface.LiveLinkFramePreProcessor
// Kind: Class; super: Object
class ULiveLinkFramePreProcessor
{
public:
    std::uint8_t Opaque[1];
};


// /Script/LiveLinkInterface.LiveLinkFrameTranslator
// Kind: Class; super: Object
class ULiveLinkFrameTranslator
{
public:
    std::uint8_t Opaque[1];
};


// /Script/LiveLinkInterface.LiveLinkHubSessionExtraData
// Kind: Class; super: Object
class ULiveLinkHubSessionExtraData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/LiveLinkInterface.LiveLinkInputDeviceRole
// Kind: Class; super: LiveLinkBasicRole
class ULiveLinkInputDeviceRole
{
public:
    std::uint8_t Opaque[1];
};


// /Script/LiveLinkInterface.LiveLinkLightRole
// Kind: Class; super: LiveLinkTransformRole
class ULiveLinkLightRole
{
public:
    std::uint8_t Opaque[1];
};


// /Script/LiveLinkInterface.LiveLinkLocatorRole
// Kind: Class; super: LiveLinkBasicRole
class ULiveLinkLocatorRole
{
public:
    std::uint8_t Opaque[1];
};


// /Script/LiveLinkInterface.LiveLinkRole
// Kind: Class; super: Object
class ULiveLinkRole
{
public:
    std::uint8_t Opaque[1];
};


// /Script/LiveLinkInterface.LiveLinkSourceFactory
// Kind: Class; super: Object
class ULiveLinkSourceFactory
{
public:
    std::uint8_t Opaque[1];
};


// /Script/LiveLinkInterface.LiveLinkSourceSettings
// Kind: Class; super: Object
class ULiveLinkSourceSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Mode; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0029
    std::uint8_t BufferSettings[0x60]; // 0x0030 (Size: 0x60, Type: StructProperty)
    std::uint8_t bTransmitEvaluatedData; // 0x0090 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0091
    FString ConnectionString; // 0x0098 (Size: 0x10, Type: StrProperty)
    void* Factory; // 0x00A8 (Size: 0x8, Type: ClassProperty)
    std::uint8_t ParentSubject[0x1]; // 0x00B0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(ULiveLinkSourceSettings, Mode) == 40, "Offset mismatch for ULiveLinkSourceSettings::Mode");
static_assert(offsetof(ULiveLinkSourceSettings, BufferSettings) == 48, "Offset mismatch for ULiveLinkSourceSettings::BufferSettings");
static_assert(offsetof(ULiveLinkSourceSettings, bTransmitEvaluatedData) == 144, "Offset mismatch for ULiveLinkSourceSettings::bTransmitEvaluatedData");
static_assert(offsetof(ULiveLinkSourceSettings, ConnectionString) == 152, "Offset mismatch for ULiveLinkSourceSettings::ConnectionString");
static_assert(offsetof(ULiveLinkSourceSettings, Factory) == 168, "Offset mismatch for ULiveLinkSourceSettings::Factory");
static_assert(offsetof(ULiveLinkSourceSettings, ParentSubject) == 176, "Offset mismatch for ULiveLinkSourceSettings::ParentSubject");

// /Script/LiveLinkInterface.LiveLinkSubjectRemapper
// Kind: Class; super: Object
class ULiveLinkSubjectRemapper
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TMap<void*, void*> BoneNameMap; // 0x0028 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(ULiveLinkSubjectRemapper, BoneNameMap) == 40, "Offset mismatch for ULiveLinkSubjectRemapper::BoneNameMap");

// /Script/LiveLinkInterface.LiveLinkSubjectSettings
// Kind: Class; super: Object
class ULiveLinkSubjectSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> PreProcessors; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    void* InterpolationProcessor; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Translators; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    void* Remapper; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    void* Role; // 0x0058 (Size: 0x8, Type: ClassProperty)
    std::uint8_t FrameRate[0x8]; // 0x0060 (Size: 0x8, Type: StructProperty)
    std::uint8_t bRebroadcastSubject; // 0x0068 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0069
    std::uint8_t OriginalSourceName[0x4]; // 0x006C (Size: 0x4, Type: NameProperty)
    std::uint8_t Key[0x20]; // 0x0070 (Size: 0x20, Type: StructProperty)
    std::uint8_t bAllowModifyingRebroadcast; // 0x0090 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(ULiveLinkSubjectSettings, PreProcessors) == 40, "Offset mismatch for ULiveLinkSubjectSettings::PreProcessors");
static_assert(offsetof(ULiveLinkSubjectSettings, InterpolationProcessor) == 56, "Offset mismatch for ULiveLinkSubjectSettings::InterpolationProcessor");
static_assert(offsetof(ULiveLinkSubjectSettings, Translators) == 64, "Offset mismatch for ULiveLinkSubjectSettings::Translators");
static_assert(offsetof(ULiveLinkSubjectSettings, Remapper) == 80, "Offset mismatch for ULiveLinkSubjectSettings::Remapper");
static_assert(offsetof(ULiveLinkSubjectSettings, Role) == 88, "Offset mismatch for ULiveLinkSubjectSettings::Role");
static_assert(offsetof(ULiveLinkSubjectSettings, FrameRate) == 96, "Offset mismatch for ULiveLinkSubjectSettings::FrameRate");
static_assert(offsetof(ULiveLinkSubjectSettings, bRebroadcastSubject) == 104, "Offset mismatch for ULiveLinkSubjectSettings::bRebroadcastSubject");
static_assert(offsetof(ULiveLinkSubjectSettings, OriginalSourceName) == 108, "Offset mismatch for ULiveLinkSubjectSettings::OriginalSourceName");
static_assert(offsetof(ULiveLinkSubjectSettings, Key) == 112, "Offset mismatch for ULiveLinkSubjectSettings::Key");
static_assert(offsetof(ULiveLinkSubjectSettings, bAllowModifyingRebroadcast) == 144, "Offset mismatch for ULiveLinkSubjectSettings::bAllowModifyingRebroadcast");

// /Script/LiveLinkInterface.LiveLinkTransformRole
// Kind: Class; super: LiveLinkBasicRole
class ULiveLinkTransformRole
{
public:
    std::uint8_t Opaque[1];
};


// /Script/LiveLinkInterface.LiveLinkVirtualSubject
// Kind: Class; super: Object
class ULiveLinkVirtualSubject
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t SyncSubject[0x8]; // 0x0030 (Size: 0x8, Type: StructProperty)
    void* Role; // 0x0038 (Size: 0x8, Type: ClassProperty)
    TArray<void*> Subjects; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> FrameTranslators; // 0x0050 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bRebroadcastSubject; // 0x0060 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(ULiveLinkVirtualSubject, SyncSubject) == 48, "Offset mismatch for ULiveLinkVirtualSubject::SyncSubject");
static_assert(offsetof(ULiveLinkVirtualSubject, Role) == 56, "Offset mismatch for ULiveLinkVirtualSubject::Role");
static_assert(offsetof(ULiveLinkVirtualSubject, Subjects) == 64, "Offset mismatch for ULiveLinkVirtualSubject::Subjects");
static_assert(offsetof(ULiveLinkVirtualSubject, FrameTranslators) == 80, "Offset mismatch for ULiveLinkVirtualSubject::FrameTranslators");
static_assert(offsetof(ULiveLinkVirtualSubject, bRebroadcastSubject) == 96, "Offset mismatch for ULiveLinkVirtualSubject::bRebroadcastSubject");

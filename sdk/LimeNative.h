/**
 * decamp dumper generated SDK
 * Package: /Script/LimeNative
 */
#pragma once
#include "Basic.h"

// /Script/LimeNative.LimeAnalyticsContext
// Kind: ScriptStruct; super: none
struct FLimeAnalyticsContext
{
public:
    FString AnalyticsKeyString; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString AnalyticsValueString; // 0x0010 (Size: 0x10, Type: StrProperty)
    std::uint8_t ActorClass[0x20]; // 0x0020 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t ComponentClass[0x20]; // 0x0040 (Size: 0x20, Type: SoftClassProperty)
    TArray<void*> VariableNames; // 0x0060 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t UefnAnalyticsEvents; // 0x0070 (Size: 0x1, Type: ByteProperty)
    std::uint8_t GameplayAnalyticsEvents; // 0x0071 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FLimeAnalyticsContext, AnalyticsKeyString) == 0, "Offset mismatch for FLimeAnalyticsContext::AnalyticsKeyString");
static_assert(offsetof(FLimeAnalyticsContext, AnalyticsValueString) == 16, "Offset mismatch for FLimeAnalyticsContext::AnalyticsValueString");
static_assert(offsetof(FLimeAnalyticsContext, ActorClass) == 32, "Offset mismatch for FLimeAnalyticsContext::ActorClass");
static_assert(offsetof(FLimeAnalyticsContext, ComponentClass) == 64, "Offset mismatch for FLimeAnalyticsContext::ComponentClass");
static_assert(offsetof(FLimeAnalyticsContext, VariableNames) == 96, "Offset mismatch for FLimeAnalyticsContext::VariableNames");
static_assert(offsetof(FLimeAnalyticsContext, UefnAnalyticsEvents) == 112, "Offset mismatch for FLimeAnalyticsContext::UefnAnalyticsEvents");
static_assert(offsetof(FLimeAnalyticsContext, GameplayAnalyticsEvents) == 113, "Offset mismatch for FLimeAnalyticsContext::GameplayAnalyticsEvents");

// /Script/LimeNative.LimeEmotionalStateData
// Kind: ScriptStruct; super: none
struct FLimeEmotionalStateData
{
public:
    std::uint8_t EmotionalState; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float EmotionPercent; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float EmotionSetRate; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::int8_t ForceRepCounter; // 0x000C (Size: 0x1, Type: Int8Property)
};

static_assert(offsetof(FLimeEmotionalStateData, EmotionalState) == 0, "Offset mismatch for FLimeEmotionalStateData::EmotionalState");
static_assert(offsetof(FLimeEmotionalStateData, EmotionPercent) == 4, "Offset mismatch for FLimeEmotionalStateData::EmotionPercent");
static_assert(offsetof(FLimeEmotionalStateData, EmotionSetRate) == 8, "Offset mismatch for FLimeEmotionalStateData::EmotionSetRate");
static_assert(offsetof(FLimeEmotionalStateData, ForceRepCounter) == 12, "Offset mismatch for FLimeEmotionalStateData::ForceRepCounter");

// /Script/LimeNative.LimeEvent_PawnEmotion
// Kind: ScriptStruct; super: none
struct FLimeEvent_PawnEmotion
{
public:
    void* Pawn; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t CurrentEmotionalState; // 0x0008 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0009
    float EmotionPercent; // 0x000C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FLimeEvent_PawnEmotion, Pawn) == 0, "Offset mismatch for FLimeEvent_PawnEmotion::Pawn");
static_assert(offsetof(FLimeEvent_PawnEmotion, CurrentEmotionalState) == 8, "Offset mismatch for FLimeEvent_PawnEmotion::CurrentEmotionalState");
static_assert(offsetof(FLimeEvent_PawnEmotion, EmotionPercent) == 12, "Offset mismatch for FLimeEvent_PawnEmotion::EmotionPercent");

// /Script/LimeNative.LimeMoodStateData
// Kind: ScriptStruct; super: none
struct FLimeMoodStateData
{
public:
    std::uint8_t MoodTag[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FLimeMoodStateData, MoodTag) == 0, "Offset mismatch for FLimeMoodStateData::MoodTag");

// /Script/LimeNative.LimePawnComponentOverride
// Kind: ScriptStruct; super: none
struct FLimePawnComponentOverride
{
public:
    FName ObjClass; // 0x0000 (Size: 0x8, Type: NameProperty)
    TArray<void*> Properties; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FLimePawnComponentOverride, ObjClass) == 0, "Offset mismatch for FLimePawnComponentOverride::ObjClass");
static_assert(offsetof(FLimePawnComponentOverride, Properties) == 8, "Offset mismatch for FLimePawnComponentOverride::Properties");

// /Script/LimeNative.LimePawnComponentOverrideProperty
// Kind: ScriptStruct; super: none
struct FLimePawnComponentOverrideProperty
{
public:
    FName Name; // 0x0000 (Size: 0x8, Type: NameProperty)
    void* Montage; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FLimePawnComponentOverrideProperty, Name) == 0, "Offset mismatch for FLimePawnComponentOverrideProperty::Name");
static_assert(offsetof(FLimePawnComponentOverrideProperty, Montage) == 8, "Offset mismatch for FLimePawnComponentOverrideProperty::Montage");

// /Script/LimeNative.LimePawnEmotionalStateMappingFromAwesomeLevel
// Kind: ScriptStruct; super: none
struct FLimePawnEmotionalStateMappingFromAwesomeLevel
{
public:
    std::uint8_t EmotionalState; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::int32_t NumericalTestValue; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::uint8_t NumericalTestMode; // 0x0008 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FLimePawnEmotionalStateMappingFromAwesomeLevel, EmotionalState) == 0, "Offset mismatch for FLimePawnEmotionalStateMappingFromAwesomeLevel::EmotionalState");
static_assert(offsetof(FLimePawnEmotionalStateMappingFromAwesomeLevel, NumericalTestValue) == 4, "Offset mismatch for FLimePawnEmotionalStateMappingFromAwesomeLevel::NumericalTestValue");
static_assert(offsetof(FLimePawnEmotionalStateMappingFromAwesomeLevel, NumericalTestMode) == 8, "Offset mismatch for FLimePawnEmotionalStateMappingFromAwesomeLevel::NumericalTestMode");

// /Script/LimeNative.DebugObserveLimePlugin
// Kind: Class; super: Object
class UDebugObserveLimePlugin
{
public:
    std::uint8_t Opaque[1];
};


// /Script/LimeNative.GameFeatureAction_LimeDebug
// Kind: Class; super: GameFeatureAction
class UGameFeatureAction_LimeDebug
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> ForcePawnActions; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UGameFeatureAction_LimeDebug, ForcePawnActions) == 40, "Offset mismatch for UGameFeatureAction_LimeDebug::ForcePawnActions");

// /Script/LimeNative.LimeAnalytics
// Kind: Class; super: Object
class ULimeAnalytics
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> AnalyticsContexts; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(ULimeAnalytics, AnalyticsContexts) == 40, "Offset mismatch for ULimeAnalytics::AnalyticsContexts");

// /Script/LimeNative.LimeArmedPlayerAnimInstance
// Kind: Class; super: JunoPlayerAnimInstance
class ULimeArmedPlayerAnimInstance
{
public:
    std::uint8_t Pad_0000[0x9A0]; // 0x0000
    std::uint8_t bPlayerAimDownSights; // 0x09A0 (Size: 0x1, Type: BoolProperty)
    // 0x09A0 BoolProperty bPlayerFiredCooldownActive (shared storage)
};

static_assert(offsetof(ULimeArmedPlayerAnimInstance, bPlayerAimDownSights) == 2464, "Offset mismatch for ULimeArmedPlayerAnimInstance::bPlayerAimDownSights");

// /Script/LimeNative.LimeBaseLayerAnimInstance
// Kind: Class; super: FortBaseAnimInstance
class ULimeBaseLayerAnimInstance
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    TWeakObjectPtr<void> MainAnimInstanceWeakPtr; // 0x0330 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(ULimeBaseLayerAnimInstance, MainAnimInstanceWeakPtr) == 816, "Offset mismatch for ULimeBaseLayerAnimInstance::MainAnimInstanceWeakPtr");

// /Script/LimeNative.LimeCameraMode_OrbitCam
// Kind: Class; super: FortCameraMode_ThirdPerson
class ULimeCameraMode_OrbitCam
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    float FOV; // 0x0078 (Size: 0x4, Type: FloatProperty)
    float CameraSpaceForwardDistance; // 0x007C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bClampCameraPitch; // 0x0080 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bClampCameraYaw; // 0x0081 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bReorientYawClampToPawnFacing; // 0x0082 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bReorientPitchClampToPawnFacing; // 0x0083 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUpdateCameraYawClampOnActivate; // 0x0084 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUpdateCameraPitchClampOnActivate; // 0x0085 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0086
    float CameraPitchMin; // 0x0088 (Size: 0x4, Type: FloatProperty)
    float CameraPitchMax; // 0x008C (Size: 0x4, Type: FloatProperty)
    float CameraYawMin; // 0x0090 (Size: 0x4, Type: FloatProperty)
    float CameraYawMax; // 0x0094 (Size: 0x4, Type: FloatProperty)
    std::uint8_t CameraOrigin; // 0x0098 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0099
    std::uint8_t CameraOriginSocketName[0x4]; // 0x009C (Size: 0x4, Type: NameProperty)
    std::uint8_t CameraOriginInterpSpeed[0x18]; // 0x00A0 (Size: 0x18, Type: StructProperty)
    float StepUpCameraOriginInterpVerticalSpeed; // 0x00B8 (Size: 0x4, Type: FloatProperty)
    float GravityChangeAngleThresholdDegrees; // 0x00BC (Size: 0x4, Type: FloatProperty)
    std::uint8_t CameraLocationErrorConstraintBox[0x38]; // 0x00C0 (Size: 0x38, Type: StructProperty)
    std::uint8_t ViewTargetSpaceViewOffset[0x38]; // 0x00F8 (Size: 0x38, Type: StructProperty)
    std::uint8_t ViewTargetSpaceViewOffset_Crouch[0x38]; // 0x0130 (Size: 0x38, Type: StructProperty)
    std::uint8_t ViewTargetSpaceViewOffsetInterpSpeed[0x18]; // 0x0168 (Size: 0x18, Type: StructProperty)
    std::uint8_t ViewTargetSpaceViewOffsetInterpSpeed_Crouch[0x18]; // 0x0180 (Size: 0x18, Type: StructProperty)
    std::uint8_t CameraSpaceViewOffset[0x38]; // 0x0198 (Size: 0x38, Type: StructProperty)
    float ViewTargetAlignmentFlipInterpDuration; // 0x01D0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bScaleViewOffsetByViewTargetScale; // 0x01D4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseLocationAsReferenceFrameTransform; // 0x01D5 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSupportsShoulderSwap; // 0x01D6 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x1]; // 0x01D7
    std::uint8_t bControlsWeaponTransform; // 0x01D8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x7]; // 0x01D9
    std::uint8_t AimedObjectConfig[0x58]; // 0x01E0 (Size: 0x58, Type: StructProperty)
    std::uint8_t bShouldHideWeaponReticle; // 0x0238 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldHideOpticsReticle; // 0x0239 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x6]; // 0x023A
    void* FirstPersonState; // 0x0240 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bCompensateForMovingPlatformOnCameraOriginInterpolation; // 0x0248 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSkipUpdateIfPawnNull; // 0x0249 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x6E]; // 0x024A
    TArray<void*> FirstPersonUpdateFunctions; // 0x02B8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t LastCameraOrigin[0x18]; // 0x02C8 (Size: 0x18, Type: StructProperty)
    std::uint8_t LastCameraOriginUnaltered[0x18]; // 0x02E0 (Size: 0x18, Type: StructProperty)
    std::uint8_t CameraOriginLocalOffset[0x18]; // 0x02F8 (Size: 0x18, Type: StructProperty)
    float PenetrationBlendInTime; // 0x0310 (Size: 0x4, Type: FloatProperty)
    float PenetrationBlendOutTime; // 0x0314 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bPreventPenetration; // 0x0318 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDoPredictiveAvoidance; // 0x0319 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0007[0x2]; // 0x031A
    float CollisionPushOutDistance; // 0x031C (Size: 0x4, Type: FloatProperty)
    float HidePawnPenetrationPercent; // 0x0320 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bHidePawnWhileNotFullyWeighted; // 0x0324 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIgnoreFrontFacingPenetration; // 0x0325 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0008[0x6A]; // 0x0326
    FName LastAttachSocketName; // 0x0390 (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0009[0x8]; // 0x0398
    std::uint8_t LastBasePOV[0x910]; // 0x03A0 (Size: 0x910, Type: StructProperty)
    std::uint8_t DeltaBasePOV[0x910]; // 0x0CB0 (Size: 0x910, Type: StructProperty)
    float BlendAlpha; // 0x15C0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_000A[0x1C]; // 0x15C4
    TArray<void*> PenetrationAvoidanceFeelers; // 0x15E0 (Size: 0x10, Type: ArrayProperty)
    float SafeLocToAimLineBlockedPct; // 0x15F0 (Size: 0x4, Type: FloatProperty)
    float AimLineToDesiredPosBlockedPct; // 0x15F4 (Size: 0x4, Type: FloatProperty)
    float LastDrawDebugTime; // 0x15F8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_000B[0x4]; // 0x15FC
    std::uint8_t LastViewTargetSpaceViewOffset[0x18]; // 0x1600 (Size: 0x18, Type: StructProperty)
    std::uint8_t LastViewTargetAlignmentUp[0x18]; // 0x1618 (Size: 0x18, Type: StructProperty)
    float ViewTargetAlignmentFlipInterpTime; // 0x1630 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_000C[0x4]; // 0x1634
    std::uint8_t LastCameraPivot[0x18]; // 0x1638 (Size: 0x18, Type: StructProperty)
    std::uint8_t CachedLookAtLocation[0x20]; // 0x1650 (Size: 0x20, Type: OptionalProperty)
    float CachedPitchLimitMin; // 0x1670 (Size: 0x4, Type: FloatProperty)
    float CachedPitchLimitMax; // 0x1674 (Size: 0x4, Type: FloatProperty)
    float CachedYawLimitMin; // 0x1678 (Size: 0x4, Type: FloatProperty)
    float CachedYawLimitMax; // 0x167C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bLastViewTargetValidGroupEmoteLookTarget; // 0x1680 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000D[0x7]; // 0x1681
    void* IgnoreActorForCameraPenetration; // 0x1688 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> DebugActorsHitDuringCameraPenetration; // 0x1690 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bWasInVehicle; // 0x16A0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000E[0x7]; // 0x16A1
    void* PreviousIgnoreActorForCameraPenetration; // 0x16A8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t PreviousVT[0x9B0]; // 0x16B0 (Size: 0x9B0, Type: StructProperty)
    std::uint8_t bIsActive; // 0x2060 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bLockCameraWhileInactive; // 0x2061 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(ULimeCameraMode_OrbitCam, FOV) == 120, "Offset mismatch for ULimeCameraMode_OrbitCam::FOV");
static_assert(offsetof(ULimeCameraMode_OrbitCam, CameraSpaceForwardDistance) == 124, "Offset mismatch for ULimeCameraMode_OrbitCam::CameraSpaceForwardDistance");
static_assert(offsetof(ULimeCameraMode_OrbitCam, bClampCameraPitch) == 128, "Offset mismatch for ULimeCameraMode_OrbitCam::bClampCameraPitch");
static_assert(offsetof(ULimeCameraMode_OrbitCam, bClampCameraYaw) == 129, "Offset mismatch for ULimeCameraMode_OrbitCam::bClampCameraYaw");
static_assert(offsetof(ULimeCameraMode_OrbitCam, bReorientYawClampToPawnFacing) == 130, "Offset mismatch for ULimeCameraMode_OrbitCam::bReorientYawClampToPawnFacing");
static_assert(offsetof(ULimeCameraMode_OrbitCam, bReorientPitchClampToPawnFacing) == 131, "Offset mismatch for ULimeCameraMode_OrbitCam::bReorientPitchClampToPawnFacing");
static_assert(offsetof(ULimeCameraMode_OrbitCam, bUpdateCameraYawClampOnActivate) == 132, "Offset mismatch for ULimeCameraMode_OrbitCam::bUpdateCameraYawClampOnActivate");
static_assert(offsetof(ULimeCameraMode_OrbitCam, bUpdateCameraPitchClampOnActivate) == 133, "Offset mismatch for ULimeCameraMode_OrbitCam::bUpdateCameraPitchClampOnActivate");
static_assert(offsetof(ULimeCameraMode_OrbitCam, CameraPitchMin) == 136, "Offset mismatch for ULimeCameraMode_OrbitCam::CameraPitchMin");
static_assert(offsetof(ULimeCameraMode_OrbitCam, CameraPitchMax) == 140, "Offset mismatch for ULimeCameraMode_OrbitCam::CameraPitchMax");
static_assert(offsetof(ULimeCameraMode_OrbitCam, CameraYawMin) == 144, "Offset mismatch for ULimeCameraMode_OrbitCam::CameraYawMin");
static_assert(offsetof(ULimeCameraMode_OrbitCam, CameraYawMax) == 148, "Offset mismatch for ULimeCameraMode_OrbitCam::CameraYawMax");
static_assert(offsetof(ULimeCameraMode_OrbitCam, CameraOrigin) == 152, "Offset mismatch for ULimeCameraMode_OrbitCam::CameraOrigin");
static_assert(offsetof(ULimeCameraMode_OrbitCam, CameraOriginSocketName) == 156, "Offset mismatch for ULimeCameraMode_OrbitCam::CameraOriginSocketName");
static_assert(offsetof(ULimeCameraMode_OrbitCam, CameraOriginInterpSpeed) == 160, "Offset mismatch for ULimeCameraMode_OrbitCam::CameraOriginInterpSpeed");
static_assert(offsetof(ULimeCameraMode_OrbitCam, StepUpCameraOriginInterpVerticalSpeed) == 184, "Offset mismatch for ULimeCameraMode_OrbitCam::StepUpCameraOriginInterpVerticalSpeed");
static_assert(offsetof(ULimeCameraMode_OrbitCam, GravityChangeAngleThresholdDegrees) == 188, "Offset mismatch for ULimeCameraMode_OrbitCam::GravityChangeAngleThresholdDegrees");
static_assert(offsetof(ULimeCameraMode_OrbitCam, CameraLocationErrorConstraintBox) == 192, "Offset mismatch for ULimeCameraMode_OrbitCam::CameraLocationErrorConstraintBox");
static_assert(offsetof(ULimeCameraMode_OrbitCam, ViewTargetSpaceViewOffset) == 248, "Offset mismatch for ULimeCameraMode_OrbitCam::ViewTargetSpaceViewOffset");
static_assert(offsetof(ULimeCameraMode_OrbitCam, ViewTargetSpaceViewOffset_Crouch) == 304, "Offset mismatch for ULimeCameraMode_OrbitCam::ViewTargetSpaceViewOffset_Crouch");
static_assert(offsetof(ULimeCameraMode_OrbitCam, ViewTargetSpaceViewOffsetInterpSpeed) == 360, "Offset mismatch for ULimeCameraMode_OrbitCam::ViewTargetSpaceViewOffsetInterpSpeed");
static_assert(offsetof(ULimeCameraMode_OrbitCam, ViewTargetSpaceViewOffsetInterpSpeed_Crouch) == 384, "Offset mismatch for ULimeCameraMode_OrbitCam::ViewTargetSpaceViewOffsetInterpSpeed_Crouch");
static_assert(offsetof(ULimeCameraMode_OrbitCam, CameraSpaceViewOffset) == 408, "Offset mismatch for ULimeCameraMode_OrbitCam::CameraSpaceViewOffset");
static_assert(offsetof(ULimeCameraMode_OrbitCam, ViewTargetAlignmentFlipInterpDuration) == 464, "Offset mismatch for ULimeCameraMode_OrbitCam::ViewTargetAlignmentFlipInterpDuration");
static_assert(offsetof(ULimeCameraMode_OrbitCam, bScaleViewOffsetByViewTargetScale) == 468, "Offset mismatch for ULimeCameraMode_OrbitCam::bScaleViewOffsetByViewTargetScale");
static_assert(offsetof(ULimeCameraMode_OrbitCam, bUseLocationAsReferenceFrameTransform) == 469, "Offset mismatch for ULimeCameraMode_OrbitCam::bUseLocationAsReferenceFrameTransform");
static_assert(offsetof(ULimeCameraMode_OrbitCam, bSupportsShoulderSwap) == 470, "Offset mismatch for ULimeCameraMode_OrbitCam::bSupportsShoulderSwap");
static_assert(offsetof(ULimeCameraMode_OrbitCam, bControlsWeaponTransform) == 472, "Offset mismatch for ULimeCameraMode_OrbitCam::bControlsWeaponTransform");
static_assert(offsetof(ULimeCameraMode_OrbitCam, AimedObjectConfig) == 480, "Offset mismatch for ULimeCameraMode_OrbitCam::AimedObjectConfig");
static_assert(offsetof(ULimeCameraMode_OrbitCam, bShouldHideWeaponReticle) == 568, "Offset mismatch for ULimeCameraMode_OrbitCam::bShouldHideWeaponReticle");
static_assert(offsetof(ULimeCameraMode_OrbitCam, bShouldHideOpticsReticle) == 569, "Offset mismatch for ULimeCameraMode_OrbitCam::bShouldHideOpticsReticle");
static_assert(offsetof(ULimeCameraMode_OrbitCam, FirstPersonState) == 576, "Offset mismatch for ULimeCameraMode_OrbitCam::FirstPersonState");
static_assert(offsetof(ULimeCameraMode_OrbitCam, bCompensateForMovingPlatformOnCameraOriginInterpolation) == 584, "Offset mismatch for ULimeCameraMode_OrbitCam::bCompensateForMovingPlatformOnCameraOriginInterpolation");
static_assert(offsetof(ULimeCameraMode_OrbitCam, bSkipUpdateIfPawnNull) == 585, "Offset mismatch for ULimeCameraMode_OrbitCam::bSkipUpdateIfPawnNull");
static_assert(offsetof(ULimeCameraMode_OrbitCam, FirstPersonUpdateFunctions) == 696, "Offset mismatch for ULimeCameraMode_OrbitCam::FirstPersonUpdateFunctions");
static_assert(offsetof(ULimeCameraMode_OrbitCam, LastCameraOrigin) == 712, "Offset mismatch for ULimeCameraMode_OrbitCam::LastCameraOrigin");
static_assert(offsetof(ULimeCameraMode_OrbitCam, LastCameraOriginUnaltered) == 736, "Offset mismatch for ULimeCameraMode_OrbitCam::LastCameraOriginUnaltered");
static_assert(offsetof(ULimeCameraMode_OrbitCam, CameraOriginLocalOffset) == 760, "Offset mismatch for ULimeCameraMode_OrbitCam::CameraOriginLocalOffset");
static_assert(offsetof(ULimeCameraMode_OrbitCam, PenetrationBlendInTime) == 784, "Offset mismatch for ULimeCameraMode_OrbitCam::PenetrationBlendInTime");
static_assert(offsetof(ULimeCameraMode_OrbitCam, PenetrationBlendOutTime) == 788, "Offset mismatch for ULimeCameraMode_OrbitCam::PenetrationBlendOutTime");
static_assert(offsetof(ULimeCameraMode_OrbitCam, bPreventPenetration) == 792, "Offset mismatch for ULimeCameraMode_OrbitCam::bPreventPenetration");
static_assert(offsetof(ULimeCameraMode_OrbitCam, bDoPredictiveAvoidance) == 793, "Offset mismatch for ULimeCameraMode_OrbitCam::bDoPredictiveAvoidance");
static_assert(offsetof(ULimeCameraMode_OrbitCam, CollisionPushOutDistance) == 796, "Offset mismatch for ULimeCameraMode_OrbitCam::CollisionPushOutDistance");
static_assert(offsetof(ULimeCameraMode_OrbitCam, HidePawnPenetrationPercent) == 800, "Offset mismatch for ULimeCameraMode_OrbitCam::HidePawnPenetrationPercent");
static_assert(offsetof(ULimeCameraMode_OrbitCam, bHidePawnWhileNotFullyWeighted) == 804, "Offset mismatch for ULimeCameraMode_OrbitCam::bHidePawnWhileNotFullyWeighted");
static_assert(offsetof(ULimeCameraMode_OrbitCam, bIgnoreFrontFacingPenetration) == 805, "Offset mismatch for ULimeCameraMode_OrbitCam::bIgnoreFrontFacingPenetration");
static_assert(offsetof(ULimeCameraMode_OrbitCam, LastAttachSocketName) == 912, "Offset mismatch for ULimeCameraMode_OrbitCam::LastAttachSocketName");
static_assert(offsetof(ULimeCameraMode_OrbitCam, LastBasePOV) == 928, "Offset mismatch for ULimeCameraMode_OrbitCam::LastBasePOV");
static_assert(offsetof(ULimeCameraMode_OrbitCam, DeltaBasePOV) == 3248, "Offset mismatch for ULimeCameraMode_OrbitCam::DeltaBasePOV");
static_assert(offsetof(ULimeCameraMode_OrbitCam, BlendAlpha) == 5568, "Offset mismatch for ULimeCameraMode_OrbitCam::BlendAlpha");
static_assert(offsetof(ULimeCameraMode_OrbitCam, PenetrationAvoidanceFeelers) == 5600, "Offset mismatch for ULimeCameraMode_OrbitCam::PenetrationAvoidanceFeelers");
static_assert(offsetof(ULimeCameraMode_OrbitCam, SafeLocToAimLineBlockedPct) == 5616, "Offset mismatch for ULimeCameraMode_OrbitCam::SafeLocToAimLineBlockedPct");
static_assert(offsetof(ULimeCameraMode_OrbitCam, AimLineToDesiredPosBlockedPct) == 5620, "Offset mismatch for ULimeCameraMode_OrbitCam::AimLineToDesiredPosBlockedPct");
static_assert(offsetof(ULimeCameraMode_OrbitCam, LastDrawDebugTime) == 5624, "Offset mismatch for ULimeCameraMode_OrbitCam::LastDrawDebugTime");
static_assert(offsetof(ULimeCameraMode_OrbitCam, LastViewTargetSpaceViewOffset) == 5632, "Offset mismatch for ULimeCameraMode_OrbitCam::LastViewTargetSpaceViewOffset");
static_assert(offsetof(ULimeCameraMode_OrbitCam, LastViewTargetAlignmentUp) == 5656, "Offset mismatch for ULimeCameraMode_OrbitCam::LastViewTargetAlignmentUp");
static_assert(offsetof(ULimeCameraMode_OrbitCam, ViewTargetAlignmentFlipInterpTime) == 5680, "Offset mismatch for ULimeCameraMode_OrbitCam::ViewTargetAlignmentFlipInterpTime");
static_assert(offsetof(ULimeCameraMode_OrbitCam, LastCameraPivot) == 5688, "Offset mismatch for ULimeCameraMode_OrbitCam::LastCameraPivot");
static_assert(offsetof(ULimeCameraMode_OrbitCam, CachedLookAtLocation) == 5712, "Offset mismatch for ULimeCameraMode_OrbitCam::CachedLookAtLocation");
static_assert(offsetof(ULimeCameraMode_OrbitCam, CachedPitchLimitMin) == 5744, "Offset mismatch for ULimeCameraMode_OrbitCam::CachedPitchLimitMin");
static_assert(offsetof(ULimeCameraMode_OrbitCam, CachedPitchLimitMax) == 5748, "Offset mismatch for ULimeCameraMode_OrbitCam::CachedPitchLimitMax");
static_assert(offsetof(ULimeCameraMode_OrbitCam, CachedYawLimitMin) == 5752, "Offset mismatch for ULimeCameraMode_OrbitCam::CachedYawLimitMin");
static_assert(offsetof(ULimeCameraMode_OrbitCam, CachedYawLimitMax) == 5756, "Offset mismatch for ULimeCameraMode_OrbitCam::CachedYawLimitMax");
static_assert(offsetof(ULimeCameraMode_OrbitCam, bLastViewTargetValidGroupEmoteLookTarget) == 5760, "Offset mismatch for ULimeCameraMode_OrbitCam::bLastViewTargetValidGroupEmoteLookTarget");
static_assert(offsetof(ULimeCameraMode_OrbitCam, IgnoreActorForCameraPenetration) == 5768, "Offset mismatch for ULimeCameraMode_OrbitCam::IgnoreActorForCameraPenetration");
static_assert(offsetof(ULimeCameraMode_OrbitCam, DebugActorsHitDuringCameraPenetration) == 5776, "Offset mismatch for ULimeCameraMode_OrbitCam::DebugActorsHitDuringCameraPenetration");
static_assert(offsetof(ULimeCameraMode_OrbitCam, bWasInVehicle) == 5792, "Offset mismatch for ULimeCameraMode_OrbitCam::bWasInVehicle");
static_assert(offsetof(ULimeCameraMode_OrbitCam, PreviousIgnoreActorForCameraPenetration) == 5800, "Offset mismatch for ULimeCameraMode_OrbitCam::PreviousIgnoreActorForCameraPenetration");
static_assert(offsetof(ULimeCameraMode_OrbitCam, PreviousVT) == 5808, "Offset mismatch for ULimeCameraMode_OrbitCam::PreviousVT");
static_assert(offsetof(ULimeCameraMode_OrbitCam, bIsActive) == 8288, "Offset mismatch for ULimeCameraMode_OrbitCam::bIsActive");
static_assert(offsetof(ULimeCameraMode_OrbitCam, bLockCameraWhileInactive) == 8289, "Offset mismatch for ULimeCameraMode_OrbitCam::bLockCameraWhileInactive");

// /Script/LimeNative.LimeDBNOAnimInstance
// Kind: Class; super: LimeBaseLayerAnimInstance
class ULimeDBNOAnimInstance
{
public:
    std::uint8_t Pad_0000[0x340]; // 0x0000
    std::uint8_t AnimBodyType; // 0x0340 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0341
    float LeanAngle; // 0x0344 (Size: 0x4, Type: FloatProperty)
    float SpeedAdjustedPlayRate; // 0x0348 (Size: 0x4, Type: FloatProperty)
    float LeanAdditiveAlpha; // 0x034C (Size: 0x4, Type: FloatProperty)
    float Speed2D; // 0x0350 (Size: 0x4, Type: FloatProperty)
    float MovementBlendSpaceSpeed2D; // 0x0354 (Size: 0x4, Type: FloatProperty)
    float MaxMovementBlendSpaceSpeed; // 0x0358 (Size: 0x4, Type: FloatProperty)
    float LocalVelocityYawAngle; // 0x035C (Size: 0x4, Type: FloatProperty)
    float DBNOTurnPlayRate; // 0x0360 (Size: 0x4, Type: FloatProperty)
    float YawDeltaCurrentTick; // 0x0364 (Size: 0x4, Type: FloatProperty)
    float YawDeltaLastTick; // 0x0368 (Size: 0x4, Type: FloatProperty)
    float YawDeltaSmoothed; // 0x036C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsLargeBodyType; // 0x0370 (Size: 0x1, Type: BoolProperty)
    // 0x0370 BoolProperty bIsOnGround (shared storage)
    // 0x0370 BoolProperty bTransition_FullBody_DBNOMove (shared storage)
    // 0x0370 BoolProperty bTransition_FullBody_DBNOTurn (shared storage)
};

static_assert(offsetof(ULimeDBNOAnimInstance, AnimBodyType) == 832, "Offset mismatch for ULimeDBNOAnimInstance::AnimBodyType");
static_assert(offsetof(ULimeDBNOAnimInstance, LeanAngle) == 836, "Offset mismatch for ULimeDBNOAnimInstance::LeanAngle");
static_assert(offsetof(ULimeDBNOAnimInstance, SpeedAdjustedPlayRate) == 840, "Offset mismatch for ULimeDBNOAnimInstance::SpeedAdjustedPlayRate");
static_assert(offsetof(ULimeDBNOAnimInstance, LeanAdditiveAlpha) == 844, "Offset mismatch for ULimeDBNOAnimInstance::LeanAdditiveAlpha");
static_assert(offsetof(ULimeDBNOAnimInstance, Speed2D) == 848, "Offset mismatch for ULimeDBNOAnimInstance::Speed2D");
static_assert(offsetof(ULimeDBNOAnimInstance, MovementBlendSpaceSpeed2D) == 852, "Offset mismatch for ULimeDBNOAnimInstance::MovementBlendSpaceSpeed2D");
static_assert(offsetof(ULimeDBNOAnimInstance, MaxMovementBlendSpaceSpeed) == 856, "Offset mismatch for ULimeDBNOAnimInstance::MaxMovementBlendSpaceSpeed");
static_assert(offsetof(ULimeDBNOAnimInstance, LocalVelocityYawAngle) == 860, "Offset mismatch for ULimeDBNOAnimInstance::LocalVelocityYawAngle");
static_assert(offsetof(ULimeDBNOAnimInstance, DBNOTurnPlayRate) == 864, "Offset mismatch for ULimeDBNOAnimInstance::DBNOTurnPlayRate");
static_assert(offsetof(ULimeDBNOAnimInstance, YawDeltaCurrentTick) == 868, "Offset mismatch for ULimeDBNOAnimInstance::YawDeltaCurrentTick");
static_assert(offsetof(ULimeDBNOAnimInstance, YawDeltaLastTick) == 872, "Offset mismatch for ULimeDBNOAnimInstance::YawDeltaLastTick");
static_assert(offsetof(ULimeDBNOAnimInstance, YawDeltaSmoothed) == 876, "Offset mismatch for ULimeDBNOAnimInstance::YawDeltaSmoothed");
static_assert(offsetof(ULimeDBNOAnimInstance, bIsLargeBodyType) == 880, "Offset mismatch for ULimeDBNOAnimInstance::bIsLargeBodyType");

// /Script/LimeNative.LimeGameFeatureAction_AddLimeAnalytics
// Kind: Class; super: GameFeatureAction
class ULimeGameFeatureAction_AddLimeAnalytics
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t LimeAnalyticsClass[0x20]; // 0x0028 (Size: 0x20, Type: SoftClassProperty)
    void* LimeAnalyticsInstance; // 0x0048 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(ULimeGameFeatureAction_AddLimeAnalytics, LimeAnalyticsClass) == 40, "Offset mismatch for ULimeGameFeatureAction_AddLimeAnalytics::LimeAnalyticsClass");
static_assert(offsetof(ULimeGameFeatureAction_AddLimeAnalytics, LimeAnalyticsInstance) == 72, "Offset mismatch for ULimeGameFeatureAction_AddLimeAnalytics::LimeAnalyticsInstance");

// /Script/LimeNative.LimeGlobals
// Kind: Class; super: Object
class ULimeGlobals
{
public:
    std::uint8_t Opaque[1];
};


// /Script/LimeNative.LimeOverrideManager
// Kind: Class; super: Object
class ULimeOverrideManager
{
public:
    std::uint8_t Opaque[1];
};


// /Script/LimeNative.LimePawnComponent
// Kind: Class; super: FortPawnComponent
class ULimePawnComponent
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t PrimaryComponentTick[0x30]; // 0x0038 (Size: 0x30, Type: StructProperty)
    TArray<void*> ComponentTags; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AssetUserData; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0088
    std::int32_t UCSSerializationIndex; // 0x0090 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0094
    std::uint8_t bNetAddressable; // 0x0098 (Size: 0x1, Type: BoolProperty)
    // 0x0098 BoolProperty bReplicateUsingRegisteredSubObjectList (shared storage)
    // 0x0098 BoolProperty bReplicates (shared storage)
    std::uint8_t Pad_0003[0x1]; // 0x0099
    std::uint8_t bAutoActivate; // 0x009A (Size: 0x1, Type: BoolProperty)
    // 0x009A BoolProperty bCanEverAffectNavigation (shared storage)
    // 0x009A BoolProperty bEditableWhenInherited (shared storage)
    // 0x009A BoolProperty bIsActive (shared storage)
    std::uint8_t bIsEditorOnly; // 0x009B (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x1D]; // 0x009C
    std::uint8_t CreationMethod; // 0x00B9 (Size: 0x1, Type: EnumProperty)
    std::uint8_t OnComponentActivated[0x1]; // 0x00BA (Size: 0x1, Type: MulticastSparseDelegateProperty)
    FMulticastSparseDelegate OnComponentDeactivated; // 0x00BB (Size: 0x10, Type: MulticastSparseDelegateProperty)
};

static_assert(offsetof(ULimePawnComponent, PrimaryComponentTick) == 56, "Offset mismatch for ULimePawnComponent::PrimaryComponentTick");
static_assert(offsetof(ULimePawnComponent, ComponentTags) == 104, "Offset mismatch for ULimePawnComponent::ComponentTags");
static_assert(offsetof(ULimePawnComponent, AssetUserData) == 120, "Offset mismatch for ULimePawnComponent::AssetUserData");
static_assert(offsetof(ULimePawnComponent, UCSSerializationIndex) == 144, "Offset mismatch for ULimePawnComponent::UCSSerializationIndex");
static_assert(offsetof(ULimePawnComponent, bNetAddressable) == 152, "Offset mismatch for ULimePawnComponent::bNetAddressable");
static_assert(offsetof(ULimePawnComponent, bAutoActivate) == 154, "Offset mismatch for ULimePawnComponent::bAutoActivate");
static_assert(offsetof(ULimePawnComponent, bIsEditorOnly) == 155, "Offset mismatch for ULimePawnComponent::bIsEditorOnly");
static_assert(offsetof(ULimePawnComponent, CreationMethod) == 185, "Offset mismatch for ULimePawnComponent::CreationMethod");
static_assert(offsetof(ULimePawnComponent, OnComponentActivated) == 186, "Offset mismatch for ULimePawnComponent::OnComponentActivated");
static_assert(offsetof(ULimePawnComponent, OnComponentDeactivated) == 187, "Offset mismatch for ULimePawnComponent::OnComponentDeactivated");

// /Script/LimeNative.LimePawnComponentMood
// Kind: Class; super: FortPawnComponent
class ULimePawnComponentMood
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    FMulticastInlineDelegate OnLimeMoodChangedDelegate; // 0x00C8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x18]; // 0x00D8
    std::uint8_t CurrentMoodState[0x1]; // 0x00F0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(ULimePawnComponentMood, OnLimeMoodChangedDelegate) == 200, "Offset mismatch for ULimePawnComponentMood::OnLimeMoodChangedDelegate");
static_assert(offsetof(ULimePawnComponentMood, CurrentMoodState) == 240, "Offset mismatch for ULimePawnComponentMood::CurrentMoodState");

// /Script/LimeNative.LimePawnComponentOverrides
// Kind: Class; super: FortPawnComponent
class ULimePawnComponentOverrides
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    TArray<void*> ObjectOverrides; // 0x00C8 (Size: 0x10, Type: ArrayProperty)
    void* ClamberingMME; // 0x00D8 (Size: 0x8, Type: ClassProperty)
    TMap<void*, void*> VehicleAnimLayerOverlayClass; // 0x00E0 (Size: 0x10, Type: MapProperty)
    void* DBNOAnimLayerClass; // 0x00F0 (Size: 0x8, Type: ClassProperty)
    void* DBNOCarriedAnimLayerClass; // 0x00F8 (Size: 0x8, Type: ClassProperty)
    void* SkydiveAnimLayerClass; // 0x0100 (Size: 0x8, Type: ClassProperty)
    void* CurrentAnimLayerClass; // 0x0108 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(ULimePawnComponentOverrides, ObjectOverrides) == 200, "Offset mismatch for ULimePawnComponentOverrides::ObjectOverrides");
static_assert(offsetof(ULimePawnComponentOverrides, ClamberingMME) == 216, "Offset mismatch for ULimePawnComponentOverrides::ClamberingMME");
static_assert(offsetof(ULimePawnComponentOverrides, VehicleAnimLayerOverlayClass) == 224, "Offset mismatch for ULimePawnComponentOverrides::VehicleAnimLayerOverlayClass");
static_assert(offsetof(ULimePawnComponentOverrides, DBNOAnimLayerClass) == 240, "Offset mismatch for ULimePawnComponentOverrides::DBNOAnimLayerClass");
static_assert(offsetof(ULimePawnComponentOverrides, DBNOCarriedAnimLayerClass) == 248, "Offset mismatch for ULimePawnComponentOverrides::DBNOCarriedAnimLayerClass");
static_assert(offsetof(ULimePawnComponentOverrides, SkydiveAnimLayerClass) == 256, "Offset mismatch for ULimePawnComponentOverrides::SkydiveAnimLayerClass");
static_assert(offsetof(ULimePawnComponentOverrides, CurrentAnimLayerClass) == 264, "Offset mismatch for ULimePawnComponentOverrides::CurrentAnimLayerClass");

// /Script/LimeNative.LimePawnComponent_EmotionalState
// Kind: Class; super: FortPawnComponent
class ULimePawnComponent_EmotionalState
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    FMulticastInlineDelegate OnLimeCurrentEmotionalStateChangedDelegate; // 0x00C8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnLimeCurrentEmotionalStateStartedChange; // 0x00D8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnLimeCurrentEmotionChangeFinished; // 0x00E8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnCheatEmotionIndexChanged; // 0x00F8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t CurrentEmotionalState; // 0x0108 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0109
    std::uint8_t TargetEmotionalState[0x10]; // 0x010C (Size: 0x10, Type: StructProperty)
    std::uint8_t CheatEmotionIndex; // 0x011C (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0002[0x3]; // 0x011D
    TArray<void*> LimePawnEmotionalStateMappingFromAwesomeLevel; // 0x0120 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0003[0x8]; // 0x0130
    float ResetToDefaultEmotionRate; // 0x0138 (Size: 0x4, Type: FloatProperty)
    float TimeToStayAtEmotionInSeconds; // 0x013C (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0004[0x8]; // 0x0140
    std::uint8_t DefaultEmotionHandle[0x1]; // 0x0148 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(ULimePawnComponent_EmotionalState, OnLimeCurrentEmotionalStateChangedDelegate) == 200, "Offset mismatch for ULimePawnComponent_EmotionalState::OnLimeCurrentEmotionalStateChangedDelegate");
static_assert(offsetof(ULimePawnComponent_EmotionalState, OnLimeCurrentEmotionalStateStartedChange) == 216, "Offset mismatch for ULimePawnComponent_EmotionalState::OnLimeCurrentEmotionalStateStartedChange");
static_assert(offsetof(ULimePawnComponent_EmotionalState, OnLimeCurrentEmotionChangeFinished) == 232, "Offset mismatch for ULimePawnComponent_EmotionalState::OnLimeCurrentEmotionChangeFinished");
static_assert(offsetof(ULimePawnComponent_EmotionalState, OnCheatEmotionIndexChanged) == 248, "Offset mismatch for ULimePawnComponent_EmotionalState::OnCheatEmotionIndexChanged");
static_assert(offsetof(ULimePawnComponent_EmotionalState, CurrentEmotionalState) == 264, "Offset mismatch for ULimePawnComponent_EmotionalState::CurrentEmotionalState");
static_assert(offsetof(ULimePawnComponent_EmotionalState, TargetEmotionalState) == 268, "Offset mismatch for ULimePawnComponent_EmotionalState::TargetEmotionalState");
static_assert(offsetof(ULimePawnComponent_EmotionalState, CheatEmotionIndex) == 284, "Offset mismatch for ULimePawnComponent_EmotionalState::CheatEmotionIndex");
static_assert(offsetof(ULimePawnComponent_EmotionalState, LimePawnEmotionalStateMappingFromAwesomeLevel) == 288, "Offset mismatch for ULimePawnComponent_EmotionalState::LimePawnEmotionalStateMappingFromAwesomeLevel");
static_assert(offsetof(ULimePawnComponent_EmotionalState, ResetToDefaultEmotionRate) == 312, "Offset mismatch for ULimePawnComponent_EmotionalState::ResetToDefaultEmotionRate");
static_assert(offsetof(ULimePawnComponent_EmotionalState, TimeToStayAtEmotionInSeconds) == 316, "Offset mismatch for ULimePawnComponent_EmotionalState::TimeToStayAtEmotionInSeconds");
static_assert(offsetof(ULimePawnComponent_EmotionalState, DefaultEmotionHandle) == 328, "Offset mismatch for ULimePawnComponent_EmotionalState::DefaultEmotionHandle");

// /Script/LimeNative.LimePlayerAnimInstance
// Kind: Class; super: JunoPlayerAnimInstance
class ULimePlayerAnimInstance
{
public:
    std::uint8_t Pad_0000[0x498]; // 0x0000
    float PlayerLookAngleFromPawnMax; // 0x0498 (Size: 0x4, Type: FloatProperty)
    float PlayerLookAngleFromRootMax; // 0x049C (Size: 0x4, Type: FloatProperty)
    float PlayerFaceVisibleAngle; // 0x04A0 (Size: 0x4, Type: FloatProperty)
    float PlayerRunningAccelerationThreshold; // 0x04A4 (Size: 0x4, Type: FloatProperty)
    float PlayerWalkingAccelerationThreshold; // 0x04A8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x04AC
    void* PlayerStrafeCurve; // 0x04B0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t DBNOCarrierAttachSocket[0x4]; // 0x04B8 (Size: 0x4, Type: NameProperty)
    std::uint8_t Locomotion_Parameters[0xC]; // 0x04BC (Size: 0xC, Type: StructProperty)
    void* FortPlayerPawn; // 0x04C8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bIsAccelerating2D; // 0x04D0 (Size: 0x1, Type: BoolProperty)
    // 0x04D0 BoolProperty bIsMovingAndInMotionEmote (shared storage)
    // 0x04D0 BoolProperty bIsPlayingEmote (shared storage)
    // 0x04D0 BoolProperty bIsSurfaceSwimming (shared storage)
    std::uint8_t Pad_0002[0x3]; // 0x04D1
    float StaticToTraversalBlendTime; // 0x04D4 (Size: 0x4, Type: FloatProperty)
    float TraversalToStaticBlendTime; // 0x04D8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsSlopeSliding; // 0x04DC (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsInVehicle; // 0x04DD (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x2]; // 0x04DE
    std::uint8_t LocalAcceleration[0x18]; // 0x04E0 (Size: 0x18, Type: StructProperty)
    float LocalAccelYawAngle; // 0x04F8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0004[0x4]; // 0x04FC
    std::uint8_t LocalVelocity[0x18]; // 0x0500 (Size: 0x18, Type: StructProperty)
    float LocalVelocityRight; // 0x0518 (Size: 0x4, Type: FloatProperty)
    float LocalVelocityYawAngle; // 0x051C (Size: 0x4, Type: FloatProperty)
    float MaxSpeed; // 0x0520 (Size: 0x4, Type: FloatProperty)
    float MaxSwimSpeed; // 0x0524 (Size: 0x4, Type: FloatProperty)
    float VelocityZ; // 0x0528 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0005[0x4]; // 0x052C
    std::uint8_t WorldAcceleration[0x18]; // 0x0530 (Size: 0x18, Type: StructProperty)
    std::uint8_t WorldVelocity[0x18]; // 0x0548 (Size: 0x18, Type: StructProperty)
    std::uint8_t ActorRotationLastTick[0x18]; // 0x0560 (Size: 0x18, Type: StructProperty)
    float YawDeltaCurrentTick; // 0x0578 (Size: 0x4, Type: FloatProperty)
    float YawDeltaLastTick; // 0x057C (Size: 0x4, Type: FloatProperty)
    float YawDeltaSmoothed; // 0x0580 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsParachuteOpen; // 0x0584 (Size: 0x1, Type: BoolProperty)
    // 0x0584 BoolProperty bIsSkydiving (shared storage)
    // 0x0584 BoolProperty bIsTacticalSprint (shared storage)
    std::uint8_t Pad_0006[0x3]; // 0x0585
    float AimPitch; // 0x0588 (Size: 0x4, Type: FloatProperty)
    float FreeFallAimPitch; // 0x058C (Size: 0x4, Type: FloatProperty)
    float SkydiveAimPitch; // 0x0590 (Size: 0x4, Type: FloatProperty)
    float SkydiveAimYaw; // 0x0594 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bGliderIsOpen; // 0x0598 (Size: 0x1, Type: BoolProperty)
    // 0x0598 BoolProperty bGliderUseFastDeploy (shared storage)
    // 0x0598 BoolProperty bGliderWasOpen (shared storage)
    // 0x0598 BoolProperty bMinifigDisableHeadConstraints (shared storage)
    // 0x0598 BoolProperty bPlayerProp1Aim (shared storage)
    // 0x0598 BoolProperty bPlayerProp2Aim (shared storage)
    // 0x0598 BoolProperty bPlayerProp2ShieldActive (shared storage)
    // 0x0598 BoolProperty bPlayerRotationUnlocked (shared storage)
    std::uint8_t bPlayerIsCold; // 0x0599 (Size: 0x1, Type: BoolProperty)
    // 0x0599 BoolProperty bPlayerIsDBNOCarried (shared storage)
    // 0x0599 BoolProperty bPlayerIsDBNOCarrying (shared storage)
    // 0x0599 BoolProperty bPlayerIsHot (shared storage)
    // 0x0599 BoolProperty bPlayerIsMildCold (shared storage)
    // 0x0599 BoolProperty bPlayerIsMildHot (shared storage)
    // 0x0599 BoolProperty bPlayerIsVeryCold (shared storage)
    // 0x0599 BoolProperty bPlayerIsVeryHot (shared storage)
    std::uint8_t bPlayerIsFastDiving; // 0x059A (Size: 0x1, Type: BoolProperty)
    // 0x059A BoolProperty bPlayerIsFishing (shared storage)
    // 0x059A BoolProperty bPlayerIsFlying (shared storage)
    // 0x059A BoolProperty bPlayerIsFocusing (shared storage)
    // 0x059A BoolProperty bPlayerIsHumanControlled (shared storage)
    // 0x059A BoolProperty bPlayerIsRiding (shared storage)
    // 0x059A BoolProperty bPlayerIsSneaking (shared storage)
    // 0x059A BoolProperty bPlayerWasFishing (shared storage)
    std::uint8_t bPlayerIsFacingController; // 0x059B (Size: 0x1, Type: BoolProperty)
    // 0x059B BoolProperty bPlayerIsMovingBackwards (shared storage)
    // 0x059B BoolProperty bPlayerIsProp1AimTargetValid (shared storage)
    // 0x059B BoolProperty bPlayerIsPushing (shared storage)
    // 0x059B BoolProperty bPlayerIsRunning (shared storage)
    // 0x059B BoolProperty bPlayerIsZiplining (shared storage)
    // 0x059B BoolProperty bPlayerRotationLocked (shared storage)
    // 0x059B BoolProperty bPlayerWasPushing (shared storage)
    std::uint8_t bPlayerFaceIsVisible; // 0x059C (Size: 0x1, Type: BoolProperty)
    // 0x059C BoolProperty bPlayerIsSprinting (shared storage)
    // 0x059C BoolProperty bPlayerIsWalking (shared storage)
    // 0x059C BoolProperty bPlayerIsWaterJumping (shared storage)
    // 0x059C BoolProperty bPlayerProp1MontageActive (shared storage)
    // 0x059C BoolProperty bPlayerShouldMove (shared storage)
    // 0x059C BoolProperty bPlayerShouldTurnInPlace (shared storage)
    // 0x059C BoolProperty bPlayerUpperBodyIsSwinging (shared storage)
    std::uint8_t bPlayerHeadShouldFollowCamera; // 0x059D (Size: 0x1, Type: BoolProperty)
    // 0x059D BoolProperty bPlayerProp2MontageActive (shared storage)
    std::uint8_t Pad_0007[0x2]; // 0x059E
    std::uint8_t DBNOCarrierAttachLocation[0x18]; // 0x05A0 (Size: 0x18, Type: StructProperty)
    std::uint8_t DBNOCarrierAttachRotation[0x18]; // 0x05B8 (Size: 0x18, Type: StructProperty)
    std::uint8_t PlayerMovementStyle; // 0x05D0 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0008[0x3]; // 0x05D1
    float PlayerAccelerationAmount; // 0x05D4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t PlayerLookAtRotation[0x18]; // 0x05D8 (Size: 0x18, Type: StructProperty)
    std::uint8_t PlayerRotationTarget[0x18]; // 0x05F0 (Size: 0x18, Type: StructProperty)
    std::uint8_t PlayerPreviousRotationTarget[0x18]; // 0x0608 (Size: 0x18, Type: StructProperty)
    float PlayerRotationTargetRate; // 0x0620 (Size: 0x4, Type: FloatProperty)
    float PlayerVelocityYawRate; // 0x0624 (Size: 0x4, Type: FloatProperty)
    float PlayerUseProceduralFaceAnim; // 0x0628 (Size: 0x4, Type: FloatProperty)
    std::uint8_t LayeringMask[0xA0]; // 0x062C (Size: 0xA0, Type: StructProperty)
    std::uint8_t bLayering_V3_Enable; // 0x06CC (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0009[0x3]; // 0x06CD
    float ABPDeltaTime; // 0x06D0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bPlayerIsDoubleJumping; // 0x06D4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000A[0x3]; // 0x06D5
    std::uint8_t SecondaryMotionLODBlend[0x48]; // 0x06D8 (Size: 0x48, Type: StructProperty)
    std::int32_t SecondaryMotionLODThreshold; // 0x0720 (Size: 0x4, Type: IntProperty)
    float SecondaryMotionLODBlendTime; // 0x0724 (Size: 0x4, Type: FloatProperty)
    TArray<void*> MontageSlotGroupsToStop; // 0x0728 (Size: 0x10, Type: ArrayProperty)
    float GliderPitch; // 0x0738 (Size: 0x4, Type: FloatProperty)
    float GliderRoll; // 0x073C (Size: 0x4, Type: FloatProperty)
    void* PlayerMainHandItem; // 0x0740 (Size: 0x8, Type: ObjectProperty)
    void* PlayerOffHandItem; // 0x0748 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t PlayerAimOffset[0x10]; // 0x0750 (Size: 0x10, Type: StructProperty)
    std::uint8_t PlayerAimOffsetTemp[0x18]; // 0x0760 (Size: 0x18, Type: StructProperty)
    std::uint8_t PlayerProp1AimOffset[0x10]; // 0x0778 (Size: 0x10, Type: StructProperty)
    std::uint8_t PlayerProp1AimTargetLocation[0x18]; // 0x0788 (Size: 0x18, Type: StructProperty)
    std::uint8_t PlayerSlopeMatchingRotationOffset[0x18]; // 0x07A0 (Size: 0x18, Type: StructProperty)
    float PlayerSlopeMatchingWeight; // 0x07B8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_000B[0x4]; // 0x07BC
    std::uint8_t PlayerPreviousRootRotation[0x18]; // 0x07C0 (Size: 0x18, Type: StructProperty)
    std::uint8_t PlayerRotationMode; // 0x07D8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_000C[0x7]; // 0x07D9
    std::uint8_t SmoothedRotationTarget[0x18]; // 0x07E0 (Size: 0x18, Type: StructProperty)
    std::uint8_t SuperSmoothedRotationTarget[0x18]; // 0x07F8 (Size: 0x18, Type: StructProperty)
    std::uint8_t PlayerStartingRotation[0x18]; // 0x0810 (Size: 0x18, Type: StructProperty)
    float PlayerStartingAngle; // 0x0828 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bPlayerEmotionHasChanged; // 0x082C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000D[0x3]; // 0x082D
    std::uint8_t JunoRandomizeMontageSectionInput[0x18]; // 0x0830 (Size: 0x18, Type: StructProperty)
    std::uint8_t bForcePlayerToFacePawnRotation; // 0x0848 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000E[0x3]; // 0x0849
    TWeakObjectPtr<void> MinifigAnimationComponent; // 0x084C (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> OffhandComponent; // 0x0854 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> LookAtComponent; // 0x085C (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> MovementComponent; // 0x0864 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t bFacingV2_EnableNewStrafing; // 0x086C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFacingV2_ForceFacingToCamera; // 0x086D (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000F[0x2]; // 0x086E
    TArray<void*> FacingV2_StrafeHipsRotationOffset; // 0x0870 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> FacingV2_StrafeHipsRotationOffsetDefault; // 0x0880 (Size: 0x10, Type: ArrayProperty)
    float FacingV2_StrafingHipsAngle_Native; // 0x0890 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0010[0x5]; // 0x0894
    std::uint8_t bFacingV2_IsOn; // 0x0899 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFacingV2_IsSteering; // 0x089A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFacingV2_WasSteering; // 0x089B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFacingV2_IsHolding; // 0x089C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0011[0x3]; // 0x089D
    std::uint8_t FacingV2_SteeringTarget[0x20]; // 0x08A0 (Size: 0x20, Type: StructProperty)
    std::uint8_t CameraLocation[0x18]; // 0x08C0 (Size: 0x18, Type: StructProperty)
    std::uint8_t CameraDirection[0x50]; // 0x08D8 (Size: 0x50, Type: StructProperty)
    std::int32_t ABP_LOD_Level; // 0x0928 (Size: 0x4, Type: IntProperty)
    std::uint8_t ABP_LOD_Level_IsOneOrLess; // 0x092C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0012[0x3]; // 0x092D
    std::uint8_t JackalVehicleInput[0x1]; // 0x0930 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(ULimePlayerAnimInstance, PlayerLookAngleFromPawnMax) == 1176, "Offset mismatch for ULimePlayerAnimInstance::PlayerLookAngleFromPawnMax");
static_assert(offsetof(ULimePlayerAnimInstance, PlayerLookAngleFromRootMax) == 1180, "Offset mismatch for ULimePlayerAnimInstance::PlayerLookAngleFromRootMax");
static_assert(offsetof(ULimePlayerAnimInstance, PlayerFaceVisibleAngle) == 1184, "Offset mismatch for ULimePlayerAnimInstance::PlayerFaceVisibleAngle");
static_assert(offsetof(ULimePlayerAnimInstance, PlayerRunningAccelerationThreshold) == 1188, "Offset mismatch for ULimePlayerAnimInstance::PlayerRunningAccelerationThreshold");
static_assert(offsetof(ULimePlayerAnimInstance, PlayerWalkingAccelerationThreshold) == 1192, "Offset mismatch for ULimePlayerAnimInstance::PlayerWalkingAccelerationThreshold");
static_assert(offsetof(ULimePlayerAnimInstance, PlayerStrafeCurve) == 1200, "Offset mismatch for ULimePlayerAnimInstance::PlayerStrafeCurve");
static_assert(offsetof(ULimePlayerAnimInstance, DBNOCarrierAttachSocket) == 1208, "Offset mismatch for ULimePlayerAnimInstance::DBNOCarrierAttachSocket");
static_assert(offsetof(ULimePlayerAnimInstance, Locomotion_Parameters) == 1212, "Offset mismatch for ULimePlayerAnimInstance::Locomotion_Parameters");
static_assert(offsetof(ULimePlayerAnimInstance, FortPlayerPawn) == 1224, "Offset mismatch for ULimePlayerAnimInstance::FortPlayerPawn");
static_assert(offsetof(ULimePlayerAnimInstance, bIsAccelerating2D) == 1232, "Offset mismatch for ULimePlayerAnimInstance::bIsAccelerating2D");
static_assert(offsetof(ULimePlayerAnimInstance, StaticToTraversalBlendTime) == 1236, "Offset mismatch for ULimePlayerAnimInstance::StaticToTraversalBlendTime");
static_assert(offsetof(ULimePlayerAnimInstance, TraversalToStaticBlendTime) == 1240, "Offset mismatch for ULimePlayerAnimInstance::TraversalToStaticBlendTime");
static_assert(offsetof(ULimePlayerAnimInstance, bIsSlopeSliding) == 1244, "Offset mismatch for ULimePlayerAnimInstance::bIsSlopeSliding");
static_assert(offsetof(ULimePlayerAnimInstance, bIsInVehicle) == 1245, "Offset mismatch for ULimePlayerAnimInstance::bIsInVehicle");
static_assert(offsetof(ULimePlayerAnimInstance, LocalAcceleration) == 1248, "Offset mismatch for ULimePlayerAnimInstance::LocalAcceleration");
static_assert(offsetof(ULimePlayerAnimInstance, LocalAccelYawAngle) == 1272, "Offset mismatch for ULimePlayerAnimInstance::LocalAccelYawAngle");
static_assert(offsetof(ULimePlayerAnimInstance, LocalVelocity) == 1280, "Offset mismatch for ULimePlayerAnimInstance::LocalVelocity");
static_assert(offsetof(ULimePlayerAnimInstance, LocalVelocityRight) == 1304, "Offset mismatch for ULimePlayerAnimInstance::LocalVelocityRight");
static_assert(offsetof(ULimePlayerAnimInstance, LocalVelocityYawAngle) == 1308, "Offset mismatch for ULimePlayerAnimInstance::LocalVelocityYawAngle");
static_assert(offsetof(ULimePlayerAnimInstance, MaxSpeed) == 1312, "Offset mismatch for ULimePlayerAnimInstance::MaxSpeed");
static_assert(offsetof(ULimePlayerAnimInstance, MaxSwimSpeed) == 1316, "Offset mismatch for ULimePlayerAnimInstance::MaxSwimSpeed");
static_assert(offsetof(ULimePlayerAnimInstance, VelocityZ) == 1320, "Offset mismatch for ULimePlayerAnimInstance::VelocityZ");
static_assert(offsetof(ULimePlayerAnimInstance, WorldAcceleration) == 1328, "Offset mismatch for ULimePlayerAnimInstance::WorldAcceleration");
static_assert(offsetof(ULimePlayerAnimInstance, WorldVelocity) == 1352, "Offset mismatch for ULimePlayerAnimInstance::WorldVelocity");
static_assert(offsetof(ULimePlayerAnimInstance, ActorRotationLastTick) == 1376, "Offset mismatch for ULimePlayerAnimInstance::ActorRotationLastTick");
static_assert(offsetof(ULimePlayerAnimInstance, YawDeltaCurrentTick) == 1400, "Offset mismatch for ULimePlayerAnimInstance::YawDeltaCurrentTick");
static_assert(offsetof(ULimePlayerAnimInstance, YawDeltaLastTick) == 1404, "Offset mismatch for ULimePlayerAnimInstance::YawDeltaLastTick");
static_assert(offsetof(ULimePlayerAnimInstance, YawDeltaSmoothed) == 1408, "Offset mismatch for ULimePlayerAnimInstance::YawDeltaSmoothed");
static_assert(offsetof(ULimePlayerAnimInstance, bIsParachuteOpen) == 1412, "Offset mismatch for ULimePlayerAnimInstance::bIsParachuteOpen");
static_assert(offsetof(ULimePlayerAnimInstance, AimPitch) == 1416, "Offset mismatch for ULimePlayerAnimInstance::AimPitch");
static_assert(offsetof(ULimePlayerAnimInstance, FreeFallAimPitch) == 1420, "Offset mismatch for ULimePlayerAnimInstance::FreeFallAimPitch");
static_assert(offsetof(ULimePlayerAnimInstance, SkydiveAimPitch) == 1424, "Offset mismatch for ULimePlayerAnimInstance::SkydiveAimPitch");
static_assert(offsetof(ULimePlayerAnimInstance, SkydiveAimYaw) == 1428, "Offset mismatch for ULimePlayerAnimInstance::SkydiveAimYaw");
static_assert(offsetof(ULimePlayerAnimInstance, bGliderIsOpen) == 1432, "Offset mismatch for ULimePlayerAnimInstance::bGliderIsOpen");
static_assert(offsetof(ULimePlayerAnimInstance, bPlayerIsCold) == 1433, "Offset mismatch for ULimePlayerAnimInstance::bPlayerIsCold");
static_assert(offsetof(ULimePlayerAnimInstance, bPlayerIsFastDiving) == 1434, "Offset mismatch for ULimePlayerAnimInstance::bPlayerIsFastDiving");
static_assert(offsetof(ULimePlayerAnimInstance, bPlayerIsFacingController) == 1435, "Offset mismatch for ULimePlayerAnimInstance::bPlayerIsFacingController");
static_assert(offsetof(ULimePlayerAnimInstance, bPlayerFaceIsVisible) == 1436, "Offset mismatch for ULimePlayerAnimInstance::bPlayerFaceIsVisible");
static_assert(offsetof(ULimePlayerAnimInstance, bPlayerHeadShouldFollowCamera) == 1437, "Offset mismatch for ULimePlayerAnimInstance::bPlayerHeadShouldFollowCamera");
static_assert(offsetof(ULimePlayerAnimInstance, DBNOCarrierAttachLocation) == 1440, "Offset mismatch for ULimePlayerAnimInstance::DBNOCarrierAttachLocation");
static_assert(offsetof(ULimePlayerAnimInstance, DBNOCarrierAttachRotation) == 1464, "Offset mismatch for ULimePlayerAnimInstance::DBNOCarrierAttachRotation");
static_assert(offsetof(ULimePlayerAnimInstance, PlayerMovementStyle) == 1488, "Offset mismatch for ULimePlayerAnimInstance::PlayerMovementStyle");
static_assert(offsetof(ULimePlayerAnimInstance, PlayerAccelerationAmount) == 1492, "Offset mismatch for ULimePlayerAnimInstance::PlayerAccelerationAmount");
static_assert(offsetof(ULimePlayerAnimInstance, PlayerLookAtRotation) == 1496, "Offset mismatch for ULimePlayerAnimInstance::PlayerLookAtRotation");
static_assert(offsetof(ULimePlayerAnimInstance, PlayerRotationTarget) == 1520, "Offset mismatch for ULimePlayerAnimInstance::PlayerRotationTarget");
static_assert(offsetof(ULimePlayerAnimInstance, PlayerPreviousRotationTarget) == 1544, "Offset mismatch for ULimePlayerAnimInstance::PlayerPreviousRotationTarget");
static_assert(offsetof(ULimePlayerAnimInstance, PlayerRotationTargetRate) == 1568, "Offset mismatch for ULimePlayerAnimInstance::PlayerRotationTargetRate");
static_assert(offsetof(ULimePlayerAnimInstance, PlayerVelocityYawRate) == 1572, "Offset mismatch for ULimePlayerAnimInstance::PlayerVelocityYawRate");
static_assert(offsetof(ULimePlayerAnimInstance, PlayerUseProceduralFaceAnim) == 1576, "Offset mismatch for ULimePlayerAnimInstance::PlayerUseProceduralFaceAnim");
static_assert(offsetof(ULimePlayerAnimInstance, LayeringMask) == 1580, "Offset mismatch for ULimePlayerAnimInstance::LayeringMask");
static_assert(offsetof(ULimePlayerAnimInstance, bLayering_V3_Enable) == 1740, "Offset mismatch for ULimePlayerAnimInstance::bLayering_V3_Enable");
static_assert(offsetof(ULimePlayerAnimInstance, ABPDeltaTime) == 1744, "Offset mismatch for ULimePlayerAnimInstance::ABPDeltaTime");
static_assert(offsetof(ULimePlayerAnimInstance, bPlayerIsDoubleJumping) == 1748, "Offset mismatch for ULimePlayerAnimInstance::bPlayerIsDoubleJumping");
static_assert(offsetof(ULimePlayerAnimInstance, SecondaryMotionLODBlend) == 1752, "Offset mismatch for ULimePlayerAnimInstance::SecondaryMotionLODBlend");
static_assert(offsetof(ULimePlayerAnimInstance, SecondaryMotionLODThreshold) == 1824, "Offset mismatch for ULimePlayerAnimInstance::SecondaryMotionLODThreshold");
static_assert(offsetof(ULimePlayerAnimInstance, SecondaryMotionLODBlendTime) == 1828, "Offset mismatch for ULimePlayerAnimInstance::SecondaryMotionLODBlendTime");
static_assert(offsetof(ULimePlayerAnimInstance, MontageSlotGroupsToStop) == 1832, "Offset mismatch for ULimePlayerAnimInstance::MontageSlotGroupsToStop");
static_assert(offsetof(ULimePlayerAnimInstance, GliderPitch) == 1848, "Offset mismatch for ULimePlayerAnimInstance::GliderPitch");
static_assert(offsetof(ULimePlayerAnimInstance, GliderRoll) == 1852, "Offset mismatch for ULimePlayerAnimInstance::GliderRoll");
static_assert(offsetof(ULimePlayerAnimInstance, PlayerMainHandItem) == 1856, "Offset mismatch for ULimePlayerAnimInstance::PlayerMainHandItem");
static_assert(offsetof(ULimePlayerAnimInstance, PlayerOffHandItem) == 1864, "Offset mismatch for ULimePlayerAnimInstance::PlayerOffHandItem");
static_assert(offsetof(ULimePlayerAnimInstance, PlayerAimOffset) == 1872, "Offset mismatch for ULimePlayerAnimInstance::PlayerAimOffset");
static_assert(offsetof(ULimePlayerAnimInstance, PlayerAimOffsetTemp) == 1888, "Offset mismatch for ULimePlayerAnimInstance::PlayerAimOffsetTemp");
static_assert(offsetof(ULimePlayerAnimInstance, PlayerProp1AimOffset) == 1912, "Offset mismatch for ULimePlayerAnimInstance::PlayerProp1AimOffset");
static_assert(offsetof(ULimePlayerAnimInstance, PlayerProp1AimTargetLocation) == 1928, "Offset mismatch for ULimePlayerAnimInstance::PlayerProp1AimTargetLocation");
static_assert(offsetof(ULimePlayerAnimInstance, PlayerSlopeMatchingRotationOffset) == 1952, "Offset mismatch for ULimePlayerAnimInstance::PlayerSlopeMatchingRotationOffset");
static_assert(offsetof(ULimePlayerAnimInstance, PlayerSlopeMatchingWeight) == 1976, "Offset mismatch for ULimePlayerAnimInstance::PlayerSlopeMatchingWeight");
static_assert(offsetof(ULimePlayerAnimInstance, PlayerPreviousRootRotation) == 1984, "Offset mismatch for ULimePlayerAnimInstance::PlayerPreviousRootRotation");
static_assert(offsetof(ULimePlayerAnimInstance, PlayerRotationMode) == 2008, "Offset mismatch for ULimePlayerAnimInstance::PlayerRotationMode");
static_assert(offsetof(ULimePlayerAnimInstance, SmoothedRotationTarget) == 2016, "Offset mismatch for ULimePlayerAnimInstance::SmoothedRotationTarget");
static_assert(offsetof(ULimePlayerAnimInstance, SuperSmoothedRotationTarget) == 2040, "Offset mismatch for ULimePlayerAnimInstance::SuperSmoothedRotationTarget");
static_assert(offsetof(ULimePlayerAnimInstance, PlayerStartingRotation) == 2064, "Offset mismatch for ULimePlayerAnimInstance::PlayerStartingRotation");
static_assert(offsetof(ULimePlayerAnimInstance, PlayerStartingAngle) == 2088, "Offset mismatch for ULimePlayerAnimInstance::PlayerStartingAngle");
static_assert(offsetof(ULimePlayerAnimInstance, bPlayerEmotionHasChanged) == 2092, "Offset mismatch for ULimePlayerAnimInstance::bPlayerEmotionHasChanged");
static_assert(offsetof(ULimePlayerAnimInstance, JunoRandomizeMontageSectionInput) == 2096, "Offset mismatch for ULimePlayerAnimInstance::JunoRandomizeMontageSectionInput");
static_assert(offsetof(ULimePlayerAnimInstance, bForcePlayerToFacePawnRotation) == 2120, "Offset mismatch for ULimePlayerAnimInstance::bForcePlayerToFacePawnRotation");
static_assert(offsetof(ULimePlayerAnimInstance, MinifigAnimationComponent) == 2124, "Offset mismatch for ULimePlayerAnimInstance::MinifigAnimationComponent");
static_assert(offsetof(ULimePlayerAnimInstance, OffhandComponent) == 2132, "Offset mismatch for ULimePlayerAnimInstance::OffhandComponent");
static_assert(offsetof(ULimePlayerAnimInstance, LookAtComponent) == 2140, "Offset mismatch for ULimePlayerAnimInstance::LookAtComponent");
static_assert(offsetof(ULimePlayerAnimInstance, MovementComponent) == 2148, "Offset mismatch for ULimePlayerAnimInstance::MovementComponent");
static_assert(offsetof(ULimePlayerAnimInstance, bFacingV2_EnableNewStrafing) == 2156, "Offset mismatch for ULimePlayerAnimInstance::bFacingV2_EnableNewStrafing");
static_assert(offsetof(ULimePlayerAnimInstance, bFacingV2_ForceFacingToCamera) == 2157, "Offset mismatch for ULimePlayerAnimInstance::bFacingV2_ForceFacingToCamera");
static_assert(offsetof(ULimePlayerAnimInstance, FacingV2_StrafeHipsRotationOffset) == 2160, "Offset mismatch for ULimePlayerAnimInstance::FacingV2_StrafeHipsRotationOffset");
static_assert(offsetof(ULimePlayerAnimInstance, FacingV2_StrafeHipsRotationOffsetDefault) == 2176, "Offset mismatch for ULimePlayerAnimInstance::FacingV2_StrafeHipsRotationOffsetDefault");
static_assert(offsetof(ULimePlayerAnimInstance, FacingV2_StrafingHipsAngle_Native) == 2192, "Offset mismatch for ULimePlayerAnimInstance::FacingV2_StrafingHipsAngle_Native");
static_assert(offsetof(ULimePlayerAnimInstance, bFacingV2_IsOn) == 2201, "Offset mismatch for ULimePlayerAnimInstance::bFacingV2_IsOn");
static_assert(offsetof(ULimePlayerAnimInstance, bFacingV2_IsSteering) == 2202, "Offset mismatch for ULimePlayerAnimInstance::bFacingV2_IsSteering");
static_assert(offsetof(ULimePlayerAnimInstance, bFacingV2_WasSteering) == 2203, "Offset mismatch for ULimePlayerAnimInstance::bFacingV2_WasSteering");
static_assert(offsetof(ULimePlayerAnimInstance, bFacingV2_IsHolding) == 2204, "Offset mismatch for ULimePlayerAnimInstance::bFacingV2_IsHolding");
static_assert(offsetof(ULimePlayerAnimInstance, FacingV2_SteeringTarget) == 2208, "Offset mismatch for ULimePlayerAnimInstance::FacingV2_SteeringTarget");
static_assert(offsetof(ULimePlayerAnimInstance, CameraLocation) == 2240, "Offset mismatch for ULimePlayerAnimInstance::CameraLocation");
static_assert(offsetof(ULimePlayerAnimInstance, CameraDirection) == 2264, "Offset mismatch for ULimePlayerAnimInstance::CameraDirection");
static_assert(offsetof(ULimePlayerAnimInstance, ABP_LOD_Level) == 2344, "Offset mismatch for ULimePlayerAnimInstance::ABP_LOD_Level");
static_assert(offsetof(ULimePlayerAnimInstance, ABP_LOD_Level_IsOneOrLess) == 2348, "Offset mismatch for ULimePlayerAnimInstance::ABP_LOD_Level_IsOneOrLess");
static_assert(offsetof(ULimePlayerAnimInstance, JackalVehicleInput) == 2352, "Offset mismatch for ULimePlayerAnimInstance::JackalVehicleInput");

// /Script/LimeNative.LimeSkydivingAnimInstance
// Kind: Class; super: LimeBaseLayerAnimInstance
class ULimeSkydivingAnimInstance
{
public:
    std::uint8_t Pad_0000[0x340]; // 0x0000
    std::uint8_t Skydiving[0x90]; // 0x0340 (Size: 0x90, Type: StructProperty)
    float FreeFall_AimPitch; // 0x03D0 (Size: 0x4, Type: FloatProperty)
    float AimPitch; // 0x03D4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsAccelerating2D; // 0x03D8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(ULimeSkydivingAnimInstance, Skydiving) == 832, "Offset mismatch for ULimeSkydivingAnimInstance::Skydiving");
static_assert(offsetof(ULimeSkydivingAnimInstance, FreeFall_AimPitch) == 976, "Offset mismatch for ULimeSkydivingAnimInstance::FreeFall_AimPitch");
static_assert(offsetof(ULimeSkydivingAnimInstance, AimPitch) == 980, "Offset mismatch for ULimeSkydivingAnimInstance::AimPitch");
static_assert(offsetof(ULimeSkydivingAnimInstance, bIsAccelerating2D) == 984, "Offset mismatch for ULimeSkydivingAnimInstance::bIsAccelerating2D");

/**
 * decamp dumper generated SDK
 * Package: /Script/CosmeticCompanionsRuntime
 */
#pragma once
#include "Basic.h"

// /Script/CosmeticCompanionsRuntime.AnticSequenceInfo
// Kind: ScriptStruct; super: none
struct FAnticSequenceInfo
{
public:
    void* AnticSequenceToPlay; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bAnticSequenceReady; // 0x0008 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FAnticSequenceInfo, AnticSequenceToPlay) == 0, "Offset mismatch for FAnticSequenceInfo::AnticSequenceToPlay");
static_assert(offsetof(FAnticSequenceInfo, bAnticSequenceReady) == 8, "Offset mismatch for FAnticSequenceInfo::bAnticSequenceReady");

// /Script/CosmeticCompanionsRuntime.AsyncSequenceChooser
// Kind: ScriptStruct; super: FortAsyncAnimationChooser
struct FAsyncSequenceChooser
{
public:
    void* ChooserTable; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bIsLoading; // 0x0008 (Size: 0x1, Type: BoolProperty)
    // 0x0008 BoolProperty bIsMontage (shared storage)
    // 0x0008 BoolProperty bIsReady (shared storage)
    std::uint8_t Pad_0000[0x7]; // 0x0009
    void* AnimSequence; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    void* AnimMontage; // 0x0018 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FAsyncSequenceChooser, ChooserTable) == 0, "Offset mismatch for FAsyncSequenceChooser::ChooserTable");
static_assert(offsetof(FAsyncSequenceChooser, bIsLoading) == 8, "Offset mismatch for FAsyncSequenceChooser::bIsLoading");
static_assert(offsetof(FAsyncSequenceChooser, AnimSequence) == 16, "Offset mismatch for FAsyncSequenceChooser::AnimSequence");
static_assert(offsetof(FAsyncSequenceChooser, AnimMontage) == 24, "Offset mismatch for FAsyncSequenceChooser::AnimMontage");

// /Script/CosmeticCompanionsRuntime.BipedAnimationSettings
// Kind: ScriptStruct; super: CompanionAnimationSettings
struct FBipedAnimationSettings
{
public:
    std::uint8_t bOnlyAffectSkeletonRootBone; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float MaxStepHeight; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float MaxSkeletonRootBoneRotationAngle; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float LookAtPitchClamp; // 0x000C (Size: 0x4, Type: FloatProperty)
    float LookAtYawClamp; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float LookAtYawReset; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float FrontPreviewActorYaw; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float FrontPreviewActorPitch; // 0x001C (Size: 0x4, Type: FloatProperty)
    float LocomotionScaleMultiplierWeight; // 0x0020 (Size: 0x4, Type: FloatProperty)
    float LocomotionPlayRateMultiplier; // 0x0024 (Size: 0x4, Type: FloatProperty)
    float RunToSprintThreshold; // 0x0028 (Size: 0x4, Type: FloatProperty)
    float SprintToRunThreshold; // 0x002C (Size: 0x4, Type: FloatProperty)
    float TrotToRunThreshold; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float RunToTrotThreshold; // 0x0034 (Size: 0x4, Type: FloatProperty)
    float WalkToTrotThreshold; // 0x0038 (Size: 0x4, Type: FloatProperty)
    float TrotToWalkThreshold; // 0x003C (Size: 0x4, Type: FloatProperty)
    std::uint8_t InteractionBone[0x4]; // 0x0040 (Size: 0x4, Type: NameProperty)
    std::uint8_t InteractionReferenceBone[0x4]; // 0x0044 (Size: 0x4, Type: NameProperty)
    float InteractionPelvisAdjust; // 0x0048 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bOpenJawWithVO; // 0x004C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FBipedAnimationSettings, bOnlyAffectSkeletonRootBone) == 0, "Offset mismatch for FBipedAnimationSettings::bOnlyAffectSkeletonRootBone");
static_assert(offsetof(FBipedAnimationSettings, MaxStepHeight) == 4, "Offset mismatch for FBipedAnimationSettings::MaxStepHeight");
static_assert(offsetof(FBipedAnimationSettings, MaxSkeletonRootBoneRotationAngle) == 8, "Offset mismatch for FBipedAnimationSettings::MaxSkeletonRootBoneRotationAngle");
static_assert(offsetof(FBipedAnimationSettings, LookAtPitchClamp) == 12, "Offset mismatch for FBipedAnimationSettings::LookAtPitchClamp");
static_assert(offsetof(FBipedAnimationSettings, LookAtYawClamp) == 16, "Offset mismatch for FBipedAnimationSettings::LookAtYawClamp");
static_assert(offsetof(FBipedAnimationSettings, LookAtYawReset) == 20, "Offset mismatch for FBipedAnimationSettings::LookAtYawReset");
static_assert(offsetof(FBipedAnimationSettings, FrontPreviewActorYaw) == 24, "Offset mismatch for FBipedAnimationSettings::FrontPreviewActorYaw");
static_assert(offsetof(FBipedAnimationSettings, FrontPreviewActorPitch) == 28, "Offset mismatch for FBipedAnimationSettings::FrontPreviewActorPitch");
static_assert(offsetof(FBipedAnimationSettings, LocomotionScaleMultiplierWeight) == 32, "Offset mismatch for FBipedAnimationSettings::LocomotionScaleMultiplierWeight");
static_assert(offsetof(FBipedAnimationSettings, LocomotionPlayRateMultiplier) == 36, "Offset mismatch for FBipedAnimationSettings::LocomotionPlayRateMultiplier");
static_assert(offsetof(FBipedAnimationSettings, RunToSprintThreshold) == 40, "Offset mismatch for FBipedAnimationSettings::RunToSprintThreshold");
static_assert(offsetof(FBipedAnimationSettings, SprintToRunThreshold) == 44, "Offset mismatch for FBipedAnimationSettings::SprintToRunThreshold");
static_assert(offsetof(FBipedAnimationSettings, TrotToRunThreshold) == 48, "Offset mismatch for FBipedAnimationSettings::TrotToRunThreshold");
static_assert(offsetof(FBipedAnimationSettings, RunToTrotThreshold) == 52, "Offset mismatch for FBipedAnimationSettings::RunToTrotThreshold");
static_assert(offsetof(FBipedAnimationSettings, WalkToTrotThreshold) == 56, "Offset mismatch for FBipedAnimationSettings::WalkToTrotThreshold");
static_assert(offsetof(FBipedAnimationSettings, TrotToWalkThreshold) == 60, "Offset mismatch for FBipedAnimationSettings::TrotToWalkThreshold");
static_assert(offsetof(FBipedAnimationSettings, InteractionBone) == 64, "Offset mismatch for FBipedAnimationSettings::InteractionBone");
static_assert(offsetof(FBipedAnimationSettings, InteractionReferenceBone) == 68, "Offset mismatch for FBipedAnimationSettings::InteractionReferenceBone");
static_assert(offsetof(FBipedAnimationSettings, InteractionPelvisAdjust) == 72, "Offset mismatch for FBipedAnimationSettings::InteractionPelvisAdjust");
static_assert(offsetof(FBipedAnimationSettings, bOpenJawWithVO) == 76, "Offset mismatch for FBipedAnimationSettings::bOpenJawWithVO");

// /Script/CosmeticCompanionsRuntime.CompanionAnimationSettings
// Kind: ScriptStruct; super: none
struct FCompanionAnimationSettings
{
public:
    std::uint8_t bOnlyAffectSkeletonRootBone; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float MaxStepHeight; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float MaxSkeletonRootBoneRotationAngle; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float LookAtPitchClamp; // 0x000C (Size: 0x4, Type: FloatProperty)
    float LookAtYawClamp; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float LookAtYawReset; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float FrontPreviewActorYaw; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float FrontPreviewActorPitch; // 0x001C (Size: 0x4, Type: FloatProperty)
    float LocomotionScaleMultiplierWeight; // 0x0020 (Size: 0x4, Type: FloatProperty)
    float LocomotionPlayRateMultiplier; // 0x0024 (Size: 0x4, Type: FloatProperty)
    float RunToSprintThreshold; // 0x0028 (Size: 0x4, Type: FloatProperty)
    float SprintToRunThreshold; // 0x002C (Size: 0x4, Type: FloatProperty)
    float TrotToRunThreshold; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float RunToTrotThreshold; // 0x0034 (Size: 0x4, Type: FloatProperty)
    float WalkToTrotThreshold; // 0x0038 (Size: 0x4, Type: FloatProperty)
    float TrotToWalkThreshold; // 0x003C (Size: 0x4, Type: FloatProperty)
    std::uint8_t InteractionBone[0x4]; // 0x0040 (Size: 0x4, Type: NameProperty)
    std::uint8_t InteractionReferenceBone[0x4]; // 0x0044 (Size: 0x4, Type: NameProperty)
    float InteractionPelvisAdjust; // 0x0048 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bOpenJawWithVO; // 0x004C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FCompanionAnimationSettings, bOnlyAffectSkeletonRootBone) == 0, "Offset mismatch for FCompanionAnimationSettings::bOnlyAffectSkeletonRootBone");
static_assert(offsetof(FCompanionAnimationSettings, MaxStepHeight) == 4, "Offset mismatch for FCompanionAnimationSettings::MaxStepHeight");
static_assert(offsetof(FCompanionAnimationSettings, MaxSkeletonRootBoneRotationAngle) == 8, "Offset mismatch for FCompanionAnimationSettings::MaxSkeletonRootBoneRotationAngle");
static_assert(offsetof(FCompanionAnimationSettings, LookAtPitchClamp) == 12, "Offset mismatch for FCompanionAnimationSettings::LookAtPitchClamp");
static_assert(offsetof(FCompanionAnimationSettings, LookAtYawClamp) == 16, "Offset mismatch for FCompanionAnimationSettings::LookAtYawClamp");
static_assert(offsetof(FCompanionAnimationSettings, LookAtYawReset) == 20, "Offset mismatch for FCompanionAnimationSettings::LookAtYawReset");
static_assert(offsetof(FCompanionAnimationSettings, FrontPreviewActorYaw) == 24, "Offset mismatch for FCompanionAnimationSettings::FrontPreviewActorYaw");
static_assert(offsetof(FCompanionAnimationSettings, FrontPreviewActorPitch) == 28, "Offset mismatch for FCompanionAnimationSettings::FrontPreviewActorPitch");
static_assert(offsetof(FCompanionAnimationSettings, LocomotionScaleMultiplierWeight) == 32, "Offset mismatch for FCompanionAnimationSettings::LocomotionScaleMultiplierWeight");
static_assert(offsetof(FCompanionAnimationSettings, LocomotionPlayRateMultiplier) == 36, "Offset mismatch for FCompanionAnimationSettings::LocomotionPlayRateMultiplier");
static_assert(offsetof(FCompanionAnimationSettings, RunToSprintThreshold) == 40, "Offset mismatch for FCompanionAnimationSettings::RunToSprintThreshold");
static_assert(offsetof(FCompanionAnimationSettings, SprintToRunThreshold) == 44, "Offset mismatch for FCompanionAnimationSettings::SprintToRunThreshold");
static_assert(offsetof(FCompanionAnimationSettings, TrotToRunThreshold) == 48, "Offset mismatch for FCompanionAnimationSettings::TrotToRunThreshold");
static_assert(offsetof(FCompanionAnimationSettings, RunToTrotThreshold) == 52, "Offset mismatch for FCompanionAnimationSettings::RunToTrotThreshold");
static_assert(offsetof(FCompanionAnimationSettings, WalkToTrotThreshold) == 56, "Offset mismatch for FCompanionAnimationSettings::WalkToTrotThreshold");
static_assert(offsetof(FCompanionAnimationSettings, TrotToWalkThreshold) == 60, "Offset mismatch for FCompanionAnimationSettings::TrotToWalkThreshold");
static_assert(offsetof(FCompanionAnimationSettings, InteractionBone) == 64, "Offset mismatch for FCompanionAnimationSettings::InteractionBone");
static_assert(offsetof(FCompanionAnimationSettings, InteractionReferenceBone) == 68, "Offset mismatch for FCompanionAnimationSettings::InteractionReferenceBone");
static_assert(offsetof(FCompanionAnimationSettings, InteractionPelvisAdjust) == 72, "Offset mismatch for FCompanionAnimationSettings::InteractionPelvisAdjust");
static_assert(offsetof(FCompanionAnimationSettings, bOpenJawWithVO) == 76, "Offset mismatch for FCompanionAnimationSettings::bOpenJawWithVO");

// /Script/CosmeticCompanionsRuntime.CompanionPoseCurveThresholds
// Kind: ScriptStruct; super: none
struct FCompanionPoseCurveThresholds
{
public:
    std::uint8_t BrowInDn[0xC]; // 0x0000 (Size: 0xC, Type: StructProperty)
    std::uint8_t BrowOtDn[0xC]; // 0x000C (Size: 0xC, Type: StructProperty)
    std::uint8_t BrowSqueezeIn[0xC]; // 0x0018 (Size: 0xC, Type: StructProperty)
    std::uint8_t BrowInUp[0xC]; // 0x0024 (Size: 0xC, Type: StructProperty)
    std::uint8_t BrowOtUp[0xC]; // 0x0030 (Size: 0xC, Type: StructProperty)
    std::uint8_t BrowEmote01[0xC]; // 0x003C (Size: 0xC, Type: StructProperty)
    std::uint8_t Blink[0xC]; // 0x0048 (Size: 0xC, Type: StructProperty)
    std::uint8_t UpperLidDown[0xC]; // 0x0054 (Size: 0xC, Type: StructProperty)
    std::uint8_t LowerLidUp[0xC]; // 0x0060 (Size: 0xC, Type: StructProperty)
    std::uint8_t Smile[0xC]; // 0x006C (Size: 0xC, Type: StructProperty)
    std::uint8_t EyeEmote01[0xC]; // 0x0078 (Size: 0xC, Type: StructProperty)
    std::uint8_t Frown[0xC]; // 0x0084 (Size: 0xC, Type: StructProperty)
    std::uint8_t JawOpen[0xC]; // 0x0090 (Size: 0xC, Type: StructProperty)
    std::uint8_t JawUp[0xC]; // 0x009C (Size: 0xC, Type: StructProperty)
    std::uint8_t ReverseJaw[0xC]; // 0x00A8 (Size: 0xC, Type: StructProperty)
    std::uint8_t LowerLipDown[0xC]; // 0x00B4 (Size: 0xC, Type: StructProperty)
    std::uint8_t UpperLipRaiser[0xC]; // 0x00C0 (Size: 0xC, Type: StructProperty)
    std::uint8_t MouthEmote01[0xC]; // 0x00CC (Size: 0xC, Type: StructProperty)
    std::uint8_t MouthEmoteEe[0xC]; // 0x00D8 (Size: 0xC, Type: StructProperty)
    std::uint8_t MouthEmoteOo[0x1]; // 0x00E4 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCompanionPoseCurveThresholds, BrowInDn) == 0, "Offset mismatch for FCompanionPoseCurveThresholds::BrowInDn");
static_assert(offsetof(FCompanionPoseCurveThresholds, BrowOtDn) == 12, "Offset mismatch for FCompanionPoseCurveThresholds::BrowOtDn");
static_assert(offsetof(FCompanionPoseCurveThresholds, BrowSqueezeIn) == 24, "Offset mismatch for FCompanionPoseCurveThresholds::BrowSqueezeIn");
static_assert(offsetof(FCompanionPoseCurveThresholds, BrowInUp) == 36, "Offset mismatch for FCompanionPoseCurveThresholds::BrowInUp");
static_assert(offsetof(FCompanionPoseCurveThresholds, BrowOtUp) == 48, "Offset mismatch for FCompanionPoseCurveThresholds::BrowOtUp");
static_assert(offsetof(FCompanionPoseCurveThresholds, BrowEmote01) == 60, "Offset mismatch for FCompanionPoseCurveThresholds::BrowEmote01");
static_assert(offsetof(FCompanionPoseCurveThresholds, Blink) == 72, "Offset mismatch for FCompanionPoseCurveThresholds::Blink");
static_assert(offsetof(FCompanionPoseCurveThresholds, UpperLidDown) == 84, "Offset mismatch for FCompanionPoseCurveThresholds::UpperLidDown");
static_assert(offsetof(FCompanionPoseCurveThresholds, LowerLidUp) == 96, "Offset mismatch for FCompanionPoseCurveThresholds::LowerLidUp");
static_assert(offsetof(FCompanionPoseCurveThresholds, Smile) == 108, "Offset mismatch for FCompanionPoseCurveThresholds::Smile");
static_assert(offsetof(FCompanionPoseCurveThresholds, EyeEmote01) == 120, "Offset mismatch for FCompanionPoseCurveThresholds::EyeEmote01");
static_assert(offsetof(FCompanionPoseCurveThresholds, Frown) == 132, "Offset mismatch for FCompanionPoseCurveThresholds::Frown");
static_assert(offsetof(FCompanionPoseCurveThresholds, JawOpen) == 144, "Offset mismatch for FCompanionPoseCurveThresholds::JawOpen");
static_assert(offsetof(FCompanionPoseCurveThresholds, JawUp) == 156, "Offset mismatch for FCompanionPoseCurveThresholds::JawUp");
static_assert(offsetof(FCompanionPoseCurveThresholds, ReverseJaw) == 168, "Offset mismatch for FCompanionPoseCurveThresholds::ReverseJaw");
static_assert(offsetof(FCompanionPoseCurveThresholds, LowerLipDown) == 180, "Offset mismatch for FCompanionPoseCurveThresholds::LowerLipDown");
static_assert(offsetof(FCompanionPoseCurveThresholds, UpperLipRaiser) == 192, "Offset mismatch for FCompanionPoseCurveThresholds::UpperLipRaiser");
static_assert(offsetof(FCompanionPoseCurveThresholds, MouthEmote01) == 204, "Offset mismatch for FCompanionPoseCurveThresholds::MouthEmote01");
static_assert(offsetof(FCompanionPoseCurveThresholds, MouthEmoteEe) == 216, "Offset mismatch for FCompanionPoseCurveThresholds::MouthEmoteEe");
static_assert(offsetof(FCompanionPoseCurveThresholds, MouthEmoteOo) == 228, "Offset mismatch for FCompanionPoseCurveThresholds::MouthEmoteOo");

// /Script/CosmeticCompanionsRuntime.CompanionRandomNumberTimer
// Kind: ScriptStruct; super: none
struct FCompanionRandomNumberTimer
{
public:
    std::uint8_t bTimerEnabled; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float TimeMin; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float TimeMax; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float ValueMin; // 0x000C (Size: 0x4, Type: FloatProperty)
    float ValueMax; // 0x0010 (Size: 0x4, Type: FloatProperty)
    std::int32_t ValueInt; // 0x0014 (Size: 0x4, Type: IntProperty)
    float ValueFloat; // 0x0018 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bJustChanged; // 0x001C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FCompanionRandomNumberTimer, bTimerEnabled) == 0, "Offset mismatch for FCompanionRandomNumberTimer::bTimerEnabled");
static_assert(offsetof(FCompanionRandomNumberTimer, TimeMin) == 4, "Offset mismatch for FCompanionRandomNumberTimer::TimeMin");
static_assert(offsetof(FCompanionRandomNumberTimer, TimeMax) == 8, "Offset mismatch for FCompanionRandomNumberTimer::TimeMax");
static_assert(offsetof(FCompanionRandomNumberTimer, ValueMin) == 12, "Offset mismatch for FCompanionRandomNumberTimer::ValueMin");
static_assert(offsetof(FCompanionRandomNumberTimer, ValueMax) == 16, "Offset mismatch for FCompanionRandomNumberTimer::ValueMax");
static_assert(offsetof(FCompanionRandomNumberTimer, ValueInt) == 20, "Offset mismatch for FCompanionRandomNumberTimer::ValueInt");
static_assert(offsetof(FCompanionRandomNumberTimer, ValueFloat) == 24, "Offset mismatch for FCompanionRandomNumberTimer::ValueFloat");
static_assert(offsetof(FCompanionRandomNumberTimer, bJustChanged) == 28, "Offset mismatch for FCompanionRandomNumberTimer::bJustChanged");

// /Script/CosmeticCompanionsRuntime.CompanionReactFXAttachmentParameters
// Kind: ScriptStruct; super: none
struct FCompanionReactFXAttachmentParameters
{
public:
    std::uint8_t bShouldOverrideAttachment; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::uint8_t AttachSocketName[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    std::uint8_t AttachOffset[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t AttachRotation[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    std::uint8_t bUseAbsoluteScale; // 0x0038 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0039
    std::uint8_t AttachScale[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCompanionReactFXAttachmentParameters, bShouldOverrideAttachment) == 0, "Offset mismatch for FCompanionReactFXAttachmentParameters::bShouldOverrideAttachment");
static_assert(offsetof(FCompanionReactFXAttachmentParameters, AttachSocketName) == 4, "Offset mismatch for FCompanionReactFXAttachmentParameters::AttachSocketName");
static_assert(offsetof(FCompanionReactFXAttachmentParameters, AttachOffset) == 8, "Offset mismatch for FCompanionReactFXAttachmentParameters::AttachOffset");
static_assert(offsetof(FCompanionReactFXAttachmentParameters, AttachRotation) == 32, "Offset mismatch for FCompanionReactFXAttachmentParameters::AttachRotation");
static_assert(offsetof(FCompanionReactFXAttachmentParameters, bUseAbsoluteScale) == 56, "Offset mismatch for FCompanionReactFXAttachmentParameters::bUseAbsoluteScale");
static_assert(offsetof(FCompanionReactFXAttachmentParameters, AttachScale) == 64, "Offset mismatch for FCompanionReactFXAttachmentParameters::AttachScale");

// /Script/CosmeticCompanionsRuntime.CompanionsFlowCommonData
// Kind: ScriptStruct; super: none
struct FCompanionsFlowCommonData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CosmeticCompanionsRuntime.CosmeticSkeletalMeshComponentSnapshot
// Kind: ScriptStruct; super: none
struct FCosmeticSkeletalMeshComponentSnapshot
{
public:
    void* CharacterPart; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* SkeletalMesh; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t AnimationMode; // 0x0010 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0011
    std::uint8_t AnimationData[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCosmeticSkeletalMeshComponentSnapshot, CharacterPart) == 0, "Offset mismatch for FCosmeticSkeletalMeshComponentSnapshot::CharacterPart");
static_assert(offsetof(FCosmeticSkeletalMeshComponentSnapshot, SkeletalMesh) == 8, "Offset mismatch for FCosmeticSkeletalMeshComponentSnapshot::SkeletalMesh");
static_assert(offsetof(FCosmeticSkeletalMeshComponentSnapshot, AnimationMode) == 16, "Offset mismatch for FCosmeticSkeletalMeshComponentSnapshot::AnimationMode");
static_assert(offsetof(FCosmeticSkeletalMeshComponentSnapshot, AnimationData) == 24, "Offset mismatch for FCosmeticSkeletalMeshComponentSnapshot::AnimationData");

// /Script/CosmeticCompanionsRuntime.DragonAnimationSettings
// Kind: ScriptStruct; super: QuadrupedAnimationSettings
struct FDragonAnimationSettings
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    float MaxBreathingAlpha; // 0x0050 (Size: 0x4, Type: FloatProperty)
    float SitBreathingAlpha; // 0x0054 (Size: 0x4, Type: FloatProperty)
    float BreathingPlayrateMultiplier; // 0x0058 (Size: 0x4, Type: FloatProperty)
    float AllowTurnAngleThreshold; // 0x005C (Size: 0x4, Type: FloatProperty)
    float RootSlopeCompensationAlpha; // 0x0060 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDragonAnimationSettings, MaxBreathingAlpha) == 80, "Offset mismatch for FDragonAnimationSettings::MaxBreathingAlpha");
static_assert(offsetof(FDragonAnimationSettings, SitBreathingAlpha) == 84, "Offset mismatch for FDragonAnimationSettings::SitBreathingAlpha");
static_assert(offsetof(FDragonAnimationSettings, BreathingPlayrateMultiplier) == 88, "Offset mismatch for FDragonAnimationSettings::BreathingPlayrateMultiplier");
static_assert(offsetof(FDragonAnimationSettings, AllowTurnAngleThreshold) == 92, "Offset mismatch for FDragonAnimationSettings::AllowTurnAngleThreshold");
static_assert(offsetof(FDragonAnimationSettings, RootSlopeCompensationAlpha) == 96, "Offset mismatch for FDragonAnimationSettings::RootSlopeCompensationAlpha");

// /Script/CosmeticCompanionsRuntime.FacePoseCurveThreshold
// Kind: ScriptStruct; super: none
struct FFacePoseCurveThreshold
{
public:
    std::uint8_t CurveName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    float Threshold; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFacePoseCurveThreshold, CurveName) == 0, "Offset mismatch for FFacePoseCurveThreshold::CurveName");
static_assert(offsetof(FFacePoseCurveThreshold, Threshold) == 4, "Offset mismatch for FFacePoseCurveThreshold::Threshold");

// /Script/CosmeticCompanionsRuntime.FloaterAnimationSettings
// Kind: ScriptStruct; super: CompanionAnimationSettings
struct FFloaterAnimationSettings
{
public:
    std::uint8_t bOnlyAffectSkeletonRootBone; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float MaxStepHeight; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float MaxSkeletonRootBoneRotationAngle; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float LookAtPitchClamp; // 0x000C (Size: 0x4, Type: FloatProperty)
    float LookAtYawClamp; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float LookAtYawReset; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float FrontPreviewActorYaw; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float FrontPreviewActorPitch; // 0x001C (Size: 0x4, Type: FloatProperty)
    float LocomotionScaleMultiplierWeight; // 0x0020 (Size: 0x4, Type: FloatProperty)
    float LocomotionPlayRateMultiplier; // 0x0024 (Size: 0x4, Type: FloatProperty)
    float RunToSprintThreshold; // 0x0028 (Size: 0x4, Type: FloatProperty)
    float SprintToRunThreshold; // 0x002C (Size: 0x4, Type: FloatProperty)
    float TrotToRunThreshold; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float RunToTrotThreshold; // 0x0034 (Size: 0x4, Type: FloatProperty)
    float WalkToTrotThreshold; // 0x0038 (Size: 0x4, Type: FloatProperty)
    float TrotToWalkThreshold; // 0x003C (Size: 0x4, Type: FloatProperty)
    std::uint8_t InteractionBone[0x4]; // 0x0040 (Size: 0x4, Type: NameProperty)
    std::uint8_t InteractionReferenceBone[0x4]; // 0x0044 (Size: 0x4, Type: NameProperty)
    float InteractionPelvisAdjust; // 0x0048 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bOpenJawWithVO; // 0x004C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFloaterAnimationSettings, bOnlyAffectSkeletonRootBone) == 0, "Offset mismatch for FFloaterAnimationSettings::bOnlyAffectSkeletonRootBone");
static_assert(offsetof(FFloaterAnimationSettings, MaxStepHeight) == 4, "Offset mismatch for FFloaterAnimationSettings::MaxStepHeight");
static_assert(offsetof(FFloaterAnimationSettings, MaxSkeletonRootBoneRotationAngle) == 8, "Offset mismatch for FFloaterAnimationSettings::MaxSkeletonRootBoneRotationAngle");
static_assert(offsetof(FFloaterAnimationSettings, LookAtPitchClamp) == 12, "Offset mismatch for FFloaterAnimationSettings::LookAtPitchClamp");
static_assert(offsetof(FFloaterAnimationSettings, LookAtYawClamp) == 16, "Offset mismatch for FFloaterAnimationSettings::LookAtYawClamp");
static_assert(offsetof(FFloaterAnimationSettings, LookAtYawReset) == 20, "Offset mismatch for FFloaterAnimationSettings::LookAtYawReset");
static_assert(offsetof(FFloaterAnimationSettings, FrontPreviewActorYaw) == 24, "Offset mismatch for FFloaterAnimationSettings::FrontPreviewActorYaw");
static_assert(offsetof(FFloaterAnimationSettings, FrontPreviewActorPitch) == 28, "Offset mismatch for FFloaterAnimationSettings::FrontPreviewActorPitch");
static_assert(offsetof(FFloaterAnimationSettings, LocomotionScaleMultiplierWeight) == 32, "Offset mismatch for FFloaterAnimationSettings::LocomotionScaleMultiplierWeight");
static_assert(offsetof(FFloaterAnimationSettings, LocomotionPlayRateMultiplier) == 36, "Offset mismatch for FFloaterAnimationSettings::LocomotionPlayRateMultiplier");
static_assert(offsetof(FFloaterAnimationSettings, RunToSprintThreshold) == 40, "Offset mismatch for FFloaterAnimationSettings::RunToSprintThreshold");
static_assert(offsetof(FFloaterAnimationSettings, SprintToRunThreshold) == 44, "Offset mismatch for FFloaterAnimationSettings::SprintToRunThreshold");
static_assert(offsetof(FFloaterAnimationSettings, TrotToRunThreshold) == 48, "Offset mismatch for FFloaterAnimationSettings::TrotToRunThreshold");
static_assert(offsetof(FFloaterAnimationSettings, RunToTrotThreshold) == 52, "Offset mismatch for FFloaterAnimationSettings::RunToTrotThreshold");
static_assert(offsetof(FFloaterAnimationSettings, WalkToTrotThreshold) == 56, "Offset mismatch for FFloaterAnimationSettings::WalkToTrotThreshold");
static_assert(offsetof(FFloaterAnimationSettings, TrotToWalkThreshold) == 60, "Offset mismatch for FFloaterAnimationSettings::TrotToWalkThreshold");
static_assert(offsetof(FFloaterAnimationSettings, InteractionBone) == 64, "Offset mismatch for FFloaterAnimationSettings::InteractionBone");
static_assert(offsetof(FFloaterAnimationSettings, InteractionReferenceBone) == 68, "Offset mismatch for FFloaterAnimationSettings::InteractionReferenceBone");
static_assert(offsetof(FFloaterAnimationSettings, InteractionPelvisAdjust) == 72, "Offset mismatch for FFloaterAnimationSettings::InteractionPelvisAdjust");
static_assert(offsetof(FFloaterAnimationSettings, bOpenJawWithVO) == 76, "Offset mismatch for FFloaterAnimationSettings::bOpenJawWithVO");

// /Script/CosmeticCompanionsRuntime.FlowgraphCompanionsCustomizationParameters
// Kind: ScriptStruct; super: none
struct FFlowgraphCompanionsCustomizationParameters
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* ItemDef; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FFlowgraphCompanionsCustomizationParameters, ItemDef) == 8, "Offset mismatch for FFlowgraphCompanionsCustomizationParameters::ItemDef");

// /Script/CosmeticCompanionsRuntime.FortCompanionEffect
// Kind: ScriptStruct; super: none
struct FFortCompanionEffect
{
public:
    std::uint8_t EffectNiagara[0x20]; // 0x0000 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t CharacterPartType; // 0x0020 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FFortCompanionEffect, EffectNiagara) == 0, "Offset mismatch for FFortCompanionEffect::EffectNiagara");
static_assert(offsetof(FFortCompanionEffect, CharacterPartType) == 32, "Offset mismatch for FFortCompanionEffect::CharacterPartType");

// /Script/CosmeticCompanionsRuntime.FortItemComponentData_CompanionEffect
// Kind: ScriptStruct; super: FortItemComponentData
struct FFortItemComponentData_CompanionEffect
{
public:
    TArray<void*> CompanionEffects; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFortItemComponentData_CompanionEffect, CompanionEffects) == 0, "Offset mismatch for FFortItemComponentData_CompanionEffect::CompanionEffects");

// /Script/CosmeticCompanionsRuntime.FortObjectiveFilter_EarnCompanionXP
// Kind: ScriptStruct; super: ObjectiveFilter
struct FFortObjectiveFilter_EarnCompanionXP
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    std::uint8_t EarnSubject[0x48]; // 0x00A0 (Size: 0x48, Type: StructProperty)
    std::uint8_t EarnSource[0x48]; // 0x00E8 (Size: 0x48, Type: StructProperty)
    std::uint8_t IncrementType; // 0x0130 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FFortObjectiveFilter_EarnCompanionXP, EarnSubject) == 160, "Offset mismatch for FFortObjectiveFilter_EarnCompanionXP::EarnSubject");
static_assert(offsetof(FFortObjectiveFilter_EarnCompanionXP, EarnSource) == 232, "Offset mismatch for FFortObjectiveFilter_EarnCompanionXP::EarnSource");
static_assert(offsetof(FFortObjectiveFilter_EarnCompanionXP, IncrementType) == 304, "Offset mismatch for FFortObjectiveFilter_EarnCompanionXP::IncrementType");

// /Script/CosmeticCompanionsRuntime.FortPlayerCompanionQuadrupedBaseStruct
// Kind: ScriptStruct; super: none
struct FFortPlayerCompanionQuadrupedBaseStruct
{
public:
    void* LocomotionStart; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* LocomotionStop_Slow; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    void* LocomotionStop_Fast; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    void* IdlePose; // 0x0018 (Size: 0x8, Type: ObjectProperty)
    void* IdleAngry_Loop; // 0x0020 (Size: 0x8, Type: ObjectProperty)
    void* BodyTurn_BS; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    void* Breathing_Loop; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    void* Locomotion_Sprint; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    void* Locomotion_Run; // 0x0040 (Size: 0x8, Type: ObjectProperty)
    void* Locomotion_Trot; // 0x0048 (Size: 0x8, Type: ObjectProperty)
    void* Locomotion_Walk; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    void* Tail_Wag_BS; // 0x0058 (Size: 0x8, Type: ObjectProperty)
    void* TailWag_Sit; // 0x0060 (Size: 0x8, Type: ObjectProperty)
    void* Tail_Wag_Angry; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    void* BodyPose_Worried; // 0x0070 (Size: 0x8, Type: ObjectProperty)
    void* BodyPose_Combat; // 0x0078 (Size: 0x8, Type: ObjectProperty)
    void* SittingToStand; // 0x0080 (Size: 0x8, Type: ObjectProperty)
    void* Sitting; // 0x0088 (Size: 0x8, Type: ObjectProperty)
    void* StandToSitting; // 0x0090 (Size: 0x8, Type: ObjectProperty)
    void* AngryIdle_Intro; // 0x0098 (Size: 0x8, Type: ObjectProperty)
    void* AngryIdle_Exit; // 0x00A0 (Size: 0x8, Type: ObjectProperty)
    void* IdleAntic; // 0x00A8 (Size: 0x8, Type: ObjectProperty)
    void* AimOffset; // 0x00B0 (Size: 0x8, Type: ObjectProperty)
    void* Chonky_Sit_ADD; // 0x00B8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FFortPlayerCompanionQuadrupedBaseStruct, LocomotionStart) == 0, "Offset mismatch for FFortPlayerCompanionQuadrupedBaseStruct::LocomotionStart");
static_assert(offsetof(FFortPlayerCompanionQuadrupedBaseStruct, LocomotionStop_Slow) == 8, "Offset mismatch for FFortPlayerCompanionQuadrupedBaseStruct::LocomotionStop_Slow");
static_assert(offsetof(FFortPlayerCompanionQuadrupedBaseStruct, LocomotionStop_Fast) == 16, "Offset mismatch for FFortPlayerCompanionQuadrupedBaseStruct::LocomotionStop_Fast");
static_assert(offsetof(FFortPlayerCompanionQuadrupedBaseStruct, IdlePose) == 24, "Offset mismatch for FFortPlayerCompanionQuadrupedBaseStruct::IdlePose");
static_assert(offsetof(FFortPlayerCompanionQuadrupedBaseStruct, IdleAngry_Loop) == 32, "Offset mismatch for FFortPlayerCompanionQuadrupedBaseStruct::IdleAngry_Loop");
static_assert(offsetof(FFortPlayerCompanionQuadrupedBaseStruct, BodyTurn_BS) == 40, "Offset mismatch for FFortPlayerCompanionQuadrupedBaseStruct::BodyTurn_BS");
static_assert(offsetof(FFortPlayerCompanionQuadrupedBaseStruct, Breathing_Loop) == 48, "Offset mismatch for FFortPlayerCompanionQuadrupedBaseStruct::Breathing_Loop");
static_assert(offsetof(FFortPlayerCompanionQuadrupedBaseStruct, Locomotion_Sprint) == 56, "Offset mismatch for FFortPlayerCompanionQuadrupedBaseStruct::Locomotion_Sprint");
static_assert(offsetof(FFortPlayerCompanionQuadrupedBaseStruct, Locomotion_Run) == 64, "Offset mismatch for FFortPlayerCompanionQuadrupedBaseStruct::Locomotion_Run");
static_assert(offsetof(FFortPlayerCompanionQuadrupedBaseStruct, Locomotion_Trot) == 72, "Offset mismatch for FFortPlayerCompanionQuadrupedBaseStruct::Locomotion_Trot");
static_assert(offsetof(FFortPlayerCompanionQuadrupedBaseStruct, Locomotion_Walk) == 80, "Offset mismatch for FFortPlayerCompanionQuadrupedBaseStruct::Locomotion_Walk");
static_assert(offsetof(FFortPlayerCompanionQuadrupedBaseStruct, Tail_Wag_BS) == 88, "Offset mismatch for FFortPlayerCompanionQuadrupedBaseStruct::Tail_Wag_BS");
static_assert(offsetof(FFortPlayerCompanionQuadrupedBaseStruct, TailWag_Sit) == 96, "Offset mismatch for FFortPlayerCompanionQuadrupedBaseStruct::TailWag_Sit");
static_assert(offsetof(FFortPlayerCompanionQuadrupedBaseStruct, Tail_Wag_Angry) == 104, "Offset mismatch for FFortPlayerCompanionQuadrupedBaseStruct::Tail_Wag_Angry");
static_assert(offsetof(FFortPlayerCompanionQuadrupedBaseStruct, BodyPose_Worried) == 112, "Offset mismatch for FFortPlayerCompanionQuadrupedBaseStruct::BodyPose_Worried");
static_assert(offsetof(FFortPlayerCompanionQuadrupedBaseStruct, BodyPose_Combat) == 120, "Offset mismatch for FFortPlayerCompanionQuadrupedBaseStruct::BodyPose_Combat");
static_assert(offsetof(FFortPlayerCompanionQuadrupedBaseStruct, SittingToStand) == 128, "Offset mismatch for FFortPlayerCompanionQuadrupedBaseStruct::SittingToStand");
static_assert(offsetof(FFortPlayerCompanionQuadrupedBaseStruct, Sitting) == 136, "Offset mismatch for FFortPlayerCompanionQuadrupedBaseStruct::Sitting");
static_assert(offsetof(FFortPlayerCompanionQuadrupedBaseStruct, StandToSitting) == 144, "Offset mismatch for FFortPlayerCompanionQuadrupedBaseStruct::StandToSitting");
static_assert(offsetof(FFortPlayerCompanionQuadrupedBaseStruct, AngryIdle_Intro) == 152, "Offset mismatch for FFortPlayerCompanionQuadrupedBaseStruct::AngryIdle_Intro");
static_assert(offsetof(FFortPlayerCompanionQuadrupedBaseStruct, AngryIdle_Exit) == 160, "Offset mismatch for FFortPlayerCompanionQuadrupedBaseStruct::AngryIdle_Exit");
static_assert(offsetof(FFortPlayerCompanionQuadrupedBaseStruct, IdleAntic) == 168, "Offset mismatch for FFortPlayerCompanionQuadrupedBaseStruct::IdleAntic");
static_assert(offsetof(FFortPlayerCompanionQuadrupedBaseStruct, AimOffset) == 176, "Offset mismatch for FFortPlayerCompanionQuadrupedBaseStruct::AimOffset");
static_assert(offsetof(FFortPlayerCompanionQuadrupedBaseStruct, Chonky_Sit_ADD) == 184, "Offset mismatch for FFortPlayerCompanionQuadrupedBaseStruct::Chonky_Sit_ADD");

// /Script/CosmeticCompanionsRuntime.FortPlayerCompanionReactionChooserInput
// Kind: ScriptStruct; super: none
struct FFortPlayerCompanionReactionChooserInput
{
public:
    std::uint8_t ReactionTagContainer[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortPlayerCompanionReactionChooserInput, ReactionTagContainer) == 0, "Offset mismatch for FFortPlayerCompanionReactionChooserInput::ReactionTagContainer");

// /Script/CosmeticCompanionsRuntime.FortVerbMessage_EarnCompanionXP
// Kind: ScriptStruct; super: VerbMessage
struct FFortVerbMessage_EarnCompanionXP
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t EarnSubject[0x38]; // 0x0078 (Size: 0x38, Type: StructProperty)
    std::uint8_t EarnSource[0x20]; // 0x00B0 (Size: 0x20, Type: StructProperty)
    std::int32_t EarnAmount; // 0x00D0 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FFortVerbMessage_EarnCompanionXP, EarnSubject) == 120, "Offset mismatch for FFortVerbMessage_EarnCompanionXP::EarnSubject");
static_assert(offsetof(FFortVerbMessage_EarnCompanionXP, EarnSource) == 176, "Offset mismatch for FFortVerbMessage_EarnCompanionXP::EarnSource");
static_assert(offsetof(FFortVerbMessage_EarnCompanionXP, EarnAmount) == 208, "Offset mismatch for FFortVerbMessage_EarnCompanionXP::EarnAmount");

// /Script/CosmeticCompanionsRuntime.PlayerCompanionDefaultFootstepFX
// Kind: ScriptStruct; super: none
struct FPlayerCompanionDefaultFootstepFX
{
public:
    std::uint8_t CompanionDefaultRunFootstepFX[0x20]; // 0x0000 (Size: 0x20, Type: SoftObjectProperty)
    TSoftObjectPtr<void> CompanionDefaultWalkFootstepFX; // 0x0020 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FPlayerCompanionDefaultFootstepFX, CompanionDefaultRunFootstepFX) == 0, "Offset mismatch for FPlayerCompanionDefaultFootstepFX::CompanionDefaultRunFootstepFX");
static_assert(offsetof(FPlayerCompanionDefaultFootstepFX, CompanionDefaultWalkFootstepFX) == 32, "Offset mismatch for FPlayerCompanionDefaultFootstepFX::CompanionDefaultWalkFootstepFX");

// /Script/CosmeticCompanionsRuntime.PlayerCompanionFootstepData
// Kind: ScriptStruct; super: none
struct FPlayerCompanionFootstepData
{
public:
    std::uint8_t RunFootstepFXOverride[0x20]; // 0x0000 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t WalkFootstepFXOverride[0x20]; // 0x0020 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t FootstepFXSocket[0x4]; // 0x0040 (Size: 0x4, Type: NameProperty)
    std::int32_t FootstepType; // 0x0044 (Size: 0x4, Type: IntProperty)
    std::uint8_t bNoFootstepFX; // 0x0048 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPlayerCompanionFootstepData, RunFootstepFXOverride) == 0, "Offset mismatch for FPlayerCompanionFootstepData::RunFootstepFXOverride");
static_assert(offsetof(FPlayerCompanionFootstepData, WalkFootstepFXOverride) == 32, "Offset mismatch for FPlayerCompanionFootstepData::WalkFootstepFXOverride");
static_assert(offsetof(FPlayerCompanionFootstepData, FootstepFXSocket) == 64, "Offset mismatch for FPlayerCompanionFootstepData::FootstepFXSocket");
static_assert(offsetof(FPlayerCompanionFootstepData, FootstepType) == 68, "Offset mismatch for FPlayerCompanionFootstepData::FootstepType");
static_assert(offsetof(FPlayerCompanionFootstepData, bNoFootstepFX) == 72, "Offset mismatch for FPlayerCompanionFootstepData::bNoFootstepFX");

// /Script/CosmeticCompanionsRuntime.QuadrupedAnimationSettings
// Kind: ScriptStruct; super: CompanionAnimationSettings
struct FQuadrupedAnimationSettings
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    float MaxBreathingAlpha; // 0x0050 (Size: 0x4, Type: FloatProperty)
    float SitBreathingAlpha; // 0x0054 (Size: 0x4, Type: FloatProperty)
    float BreathingPlayrateMultiplier; // 0x0058 (Size: 0x4, Type: FloatProperty)
    float AllowTurnAngleThreshold; // 0x005C (Size: 0x4, Type: FloatProperty)
    float RootSlopeCompensationAlpha; // 0x0060 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FQuadrupedAnimationSettings, MaxBreathingAlpha) == 80, "Offset mismatch for FQuadrupedAnimationSettings::MaxBreathingAlpha");
static_assert(offsetof(FQuadrupedAnimationSettings, SitBreathingAlpha) == 84, "Offset mismatch for FQuadrupedAnimationSettings::SitBreathingAlpha");
static_assert(offsetof(FQuadrupedAnimationSettings, BreathingPlayrateMultiplier) == 88, "Offset mismatch for FQuadrupedAnimationSettings::BreathingPlayrateMultiplier");
static_assert(offsetof(FQuadrupedAnimationSettings, AllowTurnAngleThreshold) == 92, "Offset mismatch for FQuadrupedAnimationSettings::AllowTurnAngleThreshold");
static_assert(offsetof(FQuadrupedAnimationSettings, RootSlopeCompensationAlpha) == 96, "Offset mismatch for FQuadrupedAnimationSettings::RootSlopeCompensationAlpha");

// /Script/CosmeticCompanionsRuntime.QuestViewExtensionData_Companion
// Kind: ScriptStruct; super: QuestViewExtension
struct FQuestViewExtensionData_Companion
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t OwnedTags[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FQuestViewExtensionData_Companion, OwnedTags) == 16, "Offset mismatch for FQuestViewExtensionData_Companion::OwnedTags");

// /Script/CosmeticCompanionsRuntime.RaptorAnimationSettings
// Kind: ScriptStruct; super: CompanionAnimationSettings
struct FRaptorAnimationSettings
{
public:
    std::uint8_t bOnlyAffectSkeletonRootBone; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float MaxStepHeight; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float MaxSkeletonRootBoneRotationAngle; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float LookAtPitchClamp; // 0x000C (Size: 0x4, Type: FloatProperty)
    float LookAtYawClamp; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float LookAtYawReset; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float FrontPreviewActorYaw; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float FrontPreviewActorPitch; // 0x001C (Size: 0x4, Type: FloatProperty)
    float LocomotionScaleMultiplierWeight; // 0x0020 (Size: 0x4, Type: FloatProperty)
    float LocomotionPlayRateMultiplier; // 0x0024 (Size: 0x4, Type: FloatProperty)
    float RunToSprintThreshold; // 0x0028 (Size: 0x4, Type: FloatProperty)
    float SprintToRunThreshold; // 0x002C (Size: 0x4, Type: FloatProperty)
    float TrotToRunThreshold; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float RunToTrotThreshold; // 0x0034 (Size: 0x4, Type: FloatProperty)
    float WalkToTrotThreshold; // 0x0038 (Size: 0x4, Type: FloatProperty)
    float TrotToWalkThreshold; // 0x003C (Size: 0x4, Type: FloatProperty)
    std::uint8_t InteractionBone[0x4]; // 0x0040 (Size: 0x4, Type: NameProperty)
    std::uint8_t InteractionReferenceBone[0x4]; // 0x0044 (Size: 0x4, Type: NameProperty)
    float InteractionPelvisAdjust; // 0x0048 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bOpenJawWithVO; // 0x004C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRaptorAnimationSettings, bOnlyAffectSkeletonRootBone) == 0, "Offset mismatch for FRaptorAnimationSettings::bOnlyAffectSkeletonRootBone");
static_assert(offsetof(FRaptorAnimationSettings, MaxStepHeight) == 4, "Offset mismatch for FRaptorAnimationSettings::MaxStepHeight");
static_assert(offsetof(FRaptorAnimationSettings, MaxSkeletonRootBoneRotationAngle) == 8, "Offset mismatch for FRaptorAnimationSettings::MaxSkeletonRootBoneRotationAngle");
static_assert(offsetof(FRaptorAnimationSettings, LookAtPitchClamp) == 12, "Offset mismatch for FRaptorAnimationSettings::LookAtPitchClamp");
static_assert(offsetof(FRaptorAnimationSettings, LookAtYawClamp) == 16, "Offset mismatch for FRaptorAnimationSettings::LookAtYawClamp");
static_assert(offsetof(FRaptorAnimationSettings, LookAtYawReset) == 20, "Offset mismatch for FRaptorAnimationSettings::LookAtYawReset");
static_assert(offsetof(FRaptorAnimationSettings, FrontPreviewActorYaw) == 24, "Offset mismatch for FRaptorAnimationSettings::FrontPreviewActorYaw");
static_assert(offsetof(FRaptorAnimationSettings, FrontPreviewActorPitch) == 28, "Offset mismatch for FRaptorAnimationSettings::FrontPreviewActorPitch");
static_assert(offsetof(FRaptorAnimationSettings, LocomotionScaleMultiplierWeight) == 32, "Offset mismatch for FRaptorAnimationSettings::LocomotionScaleMultiplierWeight");
static_assert(offsetof(FRaptorAnimationSettings, LocomotionPlayRateMultiplier) == 36, "Offset mismatch for FRaptorAnimationSettings::LocomotionPlayRateMultiplier");
static_assert(offsetof(FRaptorAnimationSettings, RunToSprintThreshold) == 40, "Offset mismatch for FRaptorAnimationSettings::RunToSprintThreshold");
static_assert(offsetof(FRaptorAnimationSettings, SprintToRunThreshold) == 44, "Offset mismatch for FRaptorAnimationSettings::SprintToRunThreshold");
static_assert(offsetof(FRaptorAnimationSettings, TrotToRunThreshold) == 48, "Offset mismatch for FRaptorAnimationSettings::TrotToRunThreshold");
static_assert(offsetof(FRaptorAnimationSettings, RunToTrotThreshold) == 52, "Offset mismatch for FRaptorAnimationSettings::RunToTrotThreshold");
static_assert(offsetof(FRaptorAnimationSettings, WalkToTrotThreshold) == 56, "Offset mismatch for FRaptorAnimationSettings::WalkToTrotThreshold");
static_assert(offsetof(FRaptorAnimationSettings, TrotToWalkThreshold) == 60, "Offset mismatch for FRaptorAnimationSettings::TrotToWalkThreshold");
static_assert(offsetof(FRaptorAnimationSettings, InteractionBone) == 64, "Offset mismatch for FRaptorAnimationSettings::InteractionBone");
static_assert(offsetof(FRaptorAnimationSettings, InteractionReferenceBone) == 68, "Offset mismatch for FRaptorAnimationSettings::InteractionReferenceBone");
static_assert(offsetof(FRaptorAnimationSettings, InteractionPelvisAdjust) == 72, "Offset mismatch for FRaptorAnimationSettings::InteractionPelvisAdjust");
static_assert(offsetof(FRaptorAnimationSettings, bOpenJawWithVO) == 76, "Offset mismatch for FRaptorAnimationSettings::bOpenJawWithVO");

// /Script/CosmeticCompanionsRuntime.ABPDoveSlideFlagCCPAnimInstance
// Kind: Class; super: CustomCharacterPartAnimInstance
class UABPDoveSlideFlagCCPAnimInstance
{
public:
    std::uint8_t Pad_0000[0x630]; // 0x0000
    std::uint8_t bDisablePhysics; // 0x0630 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UABPDoveSlideFlagCCPAnimInstance, bDisablePhysics) == 1584, "Offset mismatch for UABPDoveSlideFlagCCPAnimInstance::bDisablePhysics");

// /Script/CosmeticCompanionsRuntime.BurrBabyQuadrupedAnimInstance
// Kind: Class; super: AnimInstance
class UBurrBabyQuadrupedAnimInstance
{
public:
    std::uint8_t Pad_0000[0x260]; // 0x0000
    std::uint8_t bCustomEmoteRetarget; // 0x0260 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UBurrBabyQuadrupedAnimInstance, bCustomEmoteRetarget) == 608, "Offset mismatch for UBurrBabyQuadrupedAnimInstance::bCustomEmoteRetarget");

// /Script/CosmeticCompanionsRuntime.CompanionAnimExtension
// Kind: Class; super: Object
class UCompanionAnimExtension
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CosmeticCompanionsRuntime.CompanionAnimationSettingsDataAsset
// Kind: Class; super: DataAsset
class UCompanionAnimationSettingsDataAsset
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t AnimationSettings[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UCompanionAnimationSettingsDataAsset, AnimationSettings) == 40, "Offset mismatch for UCompanionAnimationSettingsDataAsset::AnimationSettings");

// /Script/CosmeticCompanionsRuntime.CompanionBodyAnimInstance
// Kind: Class; super: FortBaseAnimInstance
class UCompanionBodyAnimInstance
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    std::uint8_t bUseReverseRetarget; // 0x0330 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0331
    std::uint8_t ReverseRetargetCurveName[0x4]; // 0x0334 (Size: 0x4, Type: NameProperty)
    std::uint8_t bEnableMaterialUpdate; // 0x0338 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0339
    std::uint8_t PoseCurveThresholds[0xF0]; // 0x033C (Size: 0xF0, Type: StructProperty)
    FName HasPoseChangedParameterName; // 0x042C (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UCompanionBodyAnimInstance, bUseReverseRetarget) == 816, "Offset mismatch for UCompanionBodyAnimInstance::bUseReverseRetarget");
static_assert(offsetof(UCompanionBodyAnimInstance, ReverseRetargetCurveName) == 820, "Offset mismatch for UCompanionBodyAnimInstance::ReverseRetargetCurveName");
static_assert(offsetof(UCompanionBodyAnimInstance, bEnableMaterialUpdate) == 824, "Offset mismatch for UCompanionBodyAnimInstance::bEnableMaterialUpdate");
static_assert(offsetof(UCompanionBodyAnimInstance, PoseCurveThresholds) == 828, "Offset mismatch for UCompanionBodyAnimInstance::PoseCurveThresholds");
static_assert(offsetof(UCompanionBodyAnimInstance, HasPoseChangedParameterName) == 1068, "Offset mismatch for UCompanionBodyAnimInstance::HasPoseChangedParameterName");

// /Script/CosmeticCompanionsRuntime.CompanionDragonAnimInstance
// Kind: Class; super: CompanionQuadrupedBaseAnimInstance
class UCompanionDragonAnimInstance
{
public:
    std::uint8_t Pad_0000[0x770]; // 0x0000
    std::uint8_t bFlyStateActive; // 0x0770 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsFlying; // 0x0771 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UCompanionDragonAnimInstance, bFlyStateActive) == 1904, "Offset mismatch for UCompanionDragonAnimInstance::bFlyStateActive");
static_assert(offsetof(UCompanionDragonAnimInstance, bIsFlying) == 1905, "Offset mismatch for UCompanionDragonAnimInstance::bIsFlying");

// /Script/CosmeticCompanionsRuntime.CompanionMovementComponent
// Kind: Class; super: ActorComponent
class UCompanionMovementComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t WalkingTag[0x4]; // 0x00C0 (Size: 0x4, Type: StructProperty)
    std::uint8_t RunningTag[0x4]; // 0x00C4 (Size: 0x4, Type: StructProperty)
    std::uint8_t StationaryTag[0x8]; // 0x00C8 (Size: 0x8, Type: StructProperty)
    void* SoundLibComp; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UCompanionMovementComponent, WalkingTag) == 192, "Offset mismatch for UCompanionMovementComponent::WalkingTag");
static_assert(offsetof(UCompanionMovementComponent, RunningTag) == 196, "Offset mismatch for UCompanionMovementComponent::RunningTag");
static_assert(offsetof(UCompanionMovementComponent, StationaryTag) == 200, "Offset mismatch for UCompanionMovementComponent::StationaryTag");
static_assert(offsetof(UCompanionMovementComponent, SoundLibComp) == 208, "Offset mismatch for UCompanionMovementComponent::SoundLibComp");

// /Script/CosmeticCompanionsRuntime.CompanionMovementInterface
// Kind: Class; super: Interface
class UCompanionMovementInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CosmeticCompanionsRuntime.CompanionPostProcessAnimInstance
// Kind: Class; super: FortAdditivePoseVariantAnimInstance
class UCompanionPostProcessAnimInstance
{
public:
    std::uint8_t Pad_0000[0x340]; // 0x0000
    std::uint8_t CosmeticPoseChooser[0x20]; // 0x0340 (Size: 0x20, Type: StructProperty)
    std::uint8_t CosmeticPoseChannel[0x4]; // 0x0360 (Size: 0x4, Type: StructProperty)
    std::uint8_t bDisableCosmeticPose; // 0x0364 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0365
    float CosmeticPoseAlpha; // 0x0368 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x036C
    std::uint8_t CosmeticPoseTags[0x20]; // 0x0370 (Size: 0x20, Type: StructProperty)
    std::uint8_t bAnimDynamicsEnabled; // 0x0390 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0391
    float DynamicsAlpha; // 0x0394 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bRigidBodyEnabled; // 0x0398 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bClothEnabled; // 0x0399 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsPreviewActor; // 0x039A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsGameActor; // 0x039B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseReverseRetarget; // 0x039C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UCompanionPostProcessAnimInstance, CosmeticPoseChooser) == 832, "Offset mismatch for UCompanionPostProcessAnimInstance::CosmeticPoseChooser");
static_assert(offsetof(UCompanionPostProcessAnimInstance, CosmeticPoseChannel) == 864, "Offset mismatch for UCompanionPostProcessAnimInstance::CosmeticPoseChannel");
static_assert(offsetof(UCompanionPostProcessAnimInstance, bDisableCosmeticPose) == 868, "Offset mismatch for UCompanionPostProcessAnimInstance::bDisableCosmeticPose");
static_assert(offsetof(UCompanionPostProcessAnimInstance, CosmeticPoseAlpha) == 872, "Offset mismatch for UCompanionPostProcessAnimInstance::CosmeticPoseAlpha");
static_assert(offsetof(UCompanionPostProcessAnimInstance, CosmeticPoseTags) == 880, "Offset mismatch for UCompanionPostProcessAnimInstance::CosmeticPoseTags");
static_assert(offsetof(UCompanionPostProcessAnimInstance, bAnimDynamicsEnabled) == 912, "Offset mismatch for UCompanionPostProcessAnimInstance::bAnimDynamicsEnabled");
static_assert(offsetof(UCompanionPostProcessAnimInstance, DynamicsAlpha) == 916, "Offset mismatch for UCompanionPostProcessAnimInstance::DynamicsAlpha");
static_assert(offsetof(UCompanionPostProcessAnimInstance, bRigidBodyEnabled) == 920, "Offset mismatch for UCompanionPostProcessAnimInstance::bRigidBodyEnabled");
static_assert(offsetof(UCompanionPostProcessAnimInstance, bClothEnabled) == 921, "Offset mismatch for UCompanionPostProcessAnimInstance::bClothEnabled");
static_assert(offsetof(UCompanionPostProcessAnimInstance, bIsPreviewActor) == 922, "Offset mismatch for UCompanionPostProcessAnimInstance::bIsPreviewActor");
static_assert(offsetof(UCompanionPostProcessAnimInstance, bIsGameActor) == 923, "Offset mismatch for UCompanionPostProcessAnimInstance::bIsGameActor");
static_assert(offsetof(UCompanionPostProcessAnimInstance, bUseReverseRetarget) == 924, "Offset mismatch for UCompanionPostProcessAnimInstance::bUseReverseRetarget");

// /Script/CosmeticCompanionsRuntime.CompanionQuadrupedBaseAnimInstance
// Kind: Class; super: FortPlayerCompanionAnimInstance
class UCompanionQuadrupedBaseAnimInstance
{
public:
    std::uint8_t Pad_0000[0x640]; // 0x0000
    float AllowTurnAngleThreshold; // 0x0640 (Size: 0x4, Type: FloatProperty)
    float MaxBreathingAlpha; // 0x0644 (Size: 0x4, Type: FloatProperty)
    float SitBreathingAlpha; // 0x0648 (Size: 0x4, Type: FloatProperty)
    float BreathingPlayrateMultiplier; // 0x064C (Size: 0x4, Type: FloatProperty)
    float SlopeWarpingAlpha; // 0x0650 (Size: 0x4, Type: FloatProperty)
    float RootSlopeCompensationAlpha; // 0x0654 (Size: 0x4, Type: FloatProperty)
    float AimOffsetAlpha; // 0x0658 (Size: 0x4, Type: FloatProperty)
    float IkAlpha; // 0x065C (Size: 0x4, Type: FloatProperty)
    float TailWagAlpha; // 0x0660 (Size: 0x4, Type: FloatProperty)
    float BreathingPlayRate; // 0x0664 (Size: 0x4, Type: FloatProperty)
    float LookAtPitchActual; // 0x0668 (Size: 0x4, Type: FloatProperty)
    float TailWagSpeed; // 0x066C (Size: 0x4, Type: FloatProperty)
    double IdleAnticAlpha; // 0x0670 (Size: 0x8, Type: DoubleProperty)
    double IdleAnticAlphaTarget; // 0x0678 (Size: 0x8, Type: DoubleProperty)
    double WorriedAddPoseAlpha; // 0x0680 (Size: 0x8, Type: DoubleProperty)
    double LookAtYawAdjusted; // 0x0688 (Size: 0x8, Type: DoubleProperty)
    double BreathingAlpha; // 0x0690 (Size: 0x8, Type: DoubleProperty)
    double SprintPlayRate; // 0x0698 (Size: 0x8, Type: DoubleProperty)
    double RunPlayrate; // 0x06A0 (Size: 0x8, Type: DoubleProperty)
    double TrotPlayRate; // 0x06A8 (Size: 0x8, Type: DoubleProperty)
    double WalkPlayrate; // 0x06B0 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bIsReactionHappyPlaying; // 0x06B8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsReactionHappyCurve; // 0x06B9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsMontagePlaying; // 0x06BA (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsSpecialIdleExit; // 0x06BB (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsEarlyExitLocoStop; // 0x06BC (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsStandToSit; // 0x06BD (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsSitToStand; // 0x06BE (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsSpecialIdleEnter; // 0x06BF (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsAllowAnticToPlay; // 0x06C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsAllowTurn; // 0x06C1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsCombatStop; // 0x06C2 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsLocomotionStop; // 0x06C3 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsStopToLocomotion; // 0x06C4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x06C5
    float OldGoalRotation; // 0x06C8 (Size: 0x4, Type: FloatProperty)
    float UpdatedGoalRotation; // 0x06CC (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsSitting; // 0x06D0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsSpecialIdlePlaying; // 0x06D1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsAllowedToSit; // 0x06D2 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsPlayingAntic; // 0x06D3 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsCanPlayAntic; // 0x06D4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTriggerSpawnedAntic; // 0x06D5 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsInSitTransition; // 0x06D6 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsLocoStart; // 0x06D7 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsLocomotionCoolDown; // 0x06D8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsLocomotionCoolDownReady; // 0x06D9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsBoredCoolDown; // 0x06DA (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsBoredCoolDownReady; // 0x06DB (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsDelayedMoodCombat; // 0x06DC (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPlayCombatBodyAdditive; // 0x06DD (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseRootSlopeOrientation; // 0x06DE (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableLocomotionFacePose; // 0x06DF (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsWalkCurveActive; // 0x06E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTriggerStartTurn; // 0x06E1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bExitLocomotion; // 0x06E2 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDisableMoodAndTailAdditives; // 0x06E3 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x4]; // 0x06E4
    std::uint8_t CosmeticPose[0x20]; // 0x06E8 (Size: 0x20, Type: StructProperty)
    std::uint8_t AdditivePoseTagName[0x4]; // 0x0708 (Size: 0x4, Type: StructProperty)
    std::uint8_t ChonkyChannelTagName[0x4]; // 0x070C (Size: 0x4, Type: StructProperty)
    std::uint8_t ChonkyVariantTagName[0x4]; // 0x0710 (Size: 0x4, Type: StructProperty)
    float SitWeight; // 0x0714 (Size: 0x4, Type: FloatProperty)
    float ChonkyAdditiveWeight; // 0x0718 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsChonky; // 0x071C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasChonkyAdditivePose; // 0x071D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTailAdditive; // 0x071E (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x1]; // 0x071F
    float TailAdditiveAlpha; // 0x0720 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UCompanionQuadrupedBaseAnimInstance, AllowTurnAngleThreshold) == 1600, "Offset mismatch for UCompanionQuadrupedBaseAnimInstance::AllowTurnAngleThreshold");
static_assert(offsetof(UCompanionQuadrupedBaseAnimInstance, MaxBreathingAlpha) == 1604, "Offset mismatch for UCompanionQuadrupedBaseAnimInstance::MaxBreathingAlpha");
static_assert(offsetof(UCompanionQuadrupedBaseAnimInstance, SitBreathingAlpha) == 1608, "Offset mismatch for UCompanionQuadrupedBaseAnimInstance::SitBreathingAlpha");
static_assert(offsetof(UCompanionQuadrupedBaseAnimInstance, BreathingPlayrateMultiplier) == 1612, "Offset mismatch for UCompanionQuadrupedBaseAnimInstance::BreathingPlayrateMultiplier");
static_assert(offsetof(UCompanionQuadrupedBaseAnimInstance, SlopeWarpingAlpha) == 1616, "Offset mismatch for UCompanionQuadrupedBaseAnimInstance::SlopeWarpingAlpha");
static_assert(offsetof(UCompanionQuadrupedBaseAnimInstance, RootSlopeCompensationAlpha) == 1620, "Offset mismatch for UCompanionQuadrupedBaseAnimInstance::RootSlopeCompensationAlpha");
static_assert(offsetof(UCompanionQuadrupedBaseAnimInstance, AimOffsetAlpha) == 1624, "Offset mismatch for UCompanionQuadrupedBaseAnimInstance::AimOffsetAlpha");
static_assert(offsetof(UCompanionQuadrupedBaseAnimInstance, IkAlpha) == 1628, "Offset mismatch for UCompanionQuadrupedBaseAnimInstance::IkAlpha");
static_assert(offsetof(UCompanionQuadrupedBaseAnimInstance, TailWagAlpha) == 1632, "Offset mismatch for UCompanionQuadrupedBaseAnimInstance::TailWagAlpha");
static_assert(offsetof(UCompanionQuadrupedBaseAnimInstance, BreathingPlayRate) == 1636, "Offset mismatch for UCompanionQuadrupedBaseAnimInstance::BreathingPlayRate");
static_assert(offsetof(UCompanionQuadrupedBaseAnimInstance, LookAtPitchActual) == 1640, "Offset mismatch for UCompanionQuadrupedBaseAnimInstance::LookAtPitchActual");
static_assert(offsetof(UCompanionQuadrupedBaseAnimInstance, TailWagSpeed) == 1644, "Offset mismatch for UCompanionQuadrupedBaseAnimInstance::TailWagSpeed");
static_assert(offsetof(UCompanionQuadrupedBaseAnimInstance, IdleAnticAlpha) == 1648, "Offset mismatch for UCompanionQuadrupedBaseAnimInstance::IdleAnticAlpha");
static_assert(offsetof(UCompanionQuadrupedBaseAnimInstance, IdleAnticAlphaTarget) == 1656, "Offset mismatch for UCompanionQuadrupedBaseAnimInstance::IdleAnticAlphaTarget");
static_assert(offsetof(UCompanionQuadrupedBaseAnimInstance, WorriedAddPoseAlpha) == 1664, "Offset mismatch for UCompanionQuadrupedBaseAnimInstance::WorriedAddPoseAlpha");
static_assert(offsetof(UCompanionQuadrupedBaseAnimInstance, LookAtYawAdjusted) == 1672, "Offset mismatch for UCompanionQuadrupedBaseAnimInstance::LookAtYawAdjusted");
static_assert(offsetof(UCompanionQuadrupedBaseAnimInstance, BreathingAlpha) == 1680, "Offset mismatch for UCompanionQuadrupedBaseAnimInstance::BreathingAlpha");
static_assert(offsetof(UCompanionQuadrupedBaseAnimInstance, SprintPlayRate) == 1688, "Offset mismatch for UCompanionQuadrupedBaseAnimInstance::SprintPlayRate");
static_assert(offsetof(UCompanionQuadrupedBaseAnimInstance, RunPlayrate) == 1696, "Offset mismatch for UCompanionQuadrupedBaseAnimInstance::RunPlayrate");
static_assert(offsetof(UCompanionQuadrupedBaseAnimInstance, TrotPlayRate) == 1704, "Offset mismatch for UCompanionQuadrupedBaseAnimInstance::TrotPlayRate");
static_assert(offsetof(UCompanionQuadrupedBaseAnimInstance, WalkPlayrate) == 1712, "Offset mismatch for UCompanionQuadrupedBaseAnimInstance::WalkPlayrate");
static_assert(offsetof(UCompanionQuadrupedBaseAnimInstance, bIsReactionHappyPlaying) == 1720, "Offset mismatch for UCompanionQuadrupedBaseAnimInstance::bIsReactionHappyPlaying");
static_assert(offsetof(UCompanionQuadrupedBaseAnimInstance, bIsReactionHappyCurve) == 1721, "Offset mismatch for UCompanionQuadrupedBaseAnimInstance::bIsReactionHappyCurve");
static_assert(offsetof(UCompanionQuadrupedBaseAnimInstance, bIsMontagePlaying) == 1722, "Offset mismatch for UCompanionQuadrupedBaseAnimInstance::bIsMontagePlaying");
static_assert(offsetof(UCompanionQuadrupedBaseAnimInstance, bIsSpecialIdleExit) == 1723, "Offset mismatch for UCompanionQuadrupedBaseAnimInstance::bIsSpecialIdleExit");
static_assert(offsetof(UCompanionQuadrupedBaseAnimInstance, bIsEarlyExitLocoStop) == 1724, "Offset mismatch for UCompanionQuadrupedBaseAnimInstance::bIsEarlyExitLocoStop");
static_assert(offsetof(UCompanionQuadrupedBaseAnimInstance, bIsStandToSit) == 1725, "Offset mismatch for UCompanionQuadrupedBaseAnimInstance::bIsStandToSit");
static_assert(offsetof(UCompanionQuadrupedBaseAnimInstance, bIsSitToStand) == 1726, "Offset mismatch for UCompanionQuadrupedBaseAnimInstance::bIsSitToStand");
static_assert(offsetof(UCompanionQuadrupedBaseAnimInstance, bIsSpecialIdleEnter) == 1727, "Offset mismatch for UCompanionQuadrupedBaseAnimInstance::bIsSpecialIdleEnter");
static_assert(offsetof(UCompanionQuadrupedBaseAnimInstance, bIsAllowAnticToPlay) == 1728, "Offset mismatch for UCompanionQuadrupedBaseAnimInstance::bIsAllowAnticToPlay");
static_assert(offsetof(UCompanionQuadrupedBaseAnimInstance, bIsAllowTurn) == 1729, "Offset mismatch for UCompanionQuadrupedBaseAnimInstance::bIsAllowTurn");
static_assert(offsetof(UCompanionQuadrupedBaseAnimInstance, bIsCombatStop) == 1730, "Offset mismatch for UCompanionQuadrupedBaseAnimInstance::bIsCombatStop");
static_assert(offsetof(UCompanionQuadrupedBaseAnimInstance, bIsLocomotionStop) == 1731, "Offset mismatch for UCompanionQuadrupedBaseAnimInstance::bIsLocomotionStop");
static_assert(offsetof(UCompanionQuadrupedBaseAnimInstance, bIsStopToLocomotion) == 1732, "Offset mismatch for UCompanionQuadrupedBaseAnimInstance::bIsStopToLocomotion");
static_assert(offsetof(UCompanionQuadrupedBaseAnimInstance, OldGoalRotation) == 1736, "Offset mismatch for UCompanionQuadrupedBaseAnimInstance::OldGoalRotation");
static_assert(offsetof(UCompanionQuadrupedBaseAnimInstance, UpdatedGoalRotation) == 1740, "Offset mismatch for UCompanionQuadrupedBaseAnimInstance::UpdatedGoalRotation");
static_assert(offsetof(UCompanionQuadrupedBaseAnimInstance, bIsSitting) == 1744, "Offset mismatch for UCompanionQuadrupedBaseAnimInstance::bIsSitting");
static_assert(offsetof(UCompanionQuadrupedBaseAnimInstance, bIsSpecialIdlePlaying) == 1745, "Offset mismatch for UCompanionQuadrupedBaseAnimInstance::bIsSpecialIdlePlaying");
static_assert(offsetof(UCompanionQuadrupedBaseAnimInstance, bIsAllowedToSit) == 1746, "Offset mismatch for UCompanionQuadrupedBaseAnimInstance::bIsAllowedToSit");
static_assert(offsetof(UCompanionQuadrupedBaseAnimInstance, bIsPlayingAntic) == 1747, "Offset mismatch for UCompanionQuadrupedBaseAnimInstance::bIsPlayingAntic");
static_assert(offsetof(UCompanionQuadrupedBaseAnimInstance, bIsCanPlayAntic) == 1748, "Offset mismatch for UCompanionQuadrupedBaseAnimInstance::bIsCanPlayAntic");
static_assert(offsetof(UCompanionQuadrupedBaseAnimInstance, bTriggerSpawnedAntic) == 1749, "Offset mismatch for UCompanionQuadrupedBaseAnimInstance::bTriggerSpawnedAntic");
static_assert(offsetof(UCompanionQuadrupedBaseAnimInstance, bIsInSitTransition) == 1750, "Offset mismatch for UCompanionQuadrupedBaseAnimInstance::bIsInSitTransition");
static_assert(offsetof(UCompanionQuadrupedBaseAnimInstance, bIsLocoStart) == 1751, "Offset mismatch for UCompanionQuadrupedBaseAnimInstance::bIsLocoStart");
static_assert(offsetof(UCompanionQuadrupedBaseAnimInstance, bIsLocomotionCoolDown) == 1752, "Offset mismatch for UCompanionQuadrupedBaseAnimInstance::bIsLocomotionCoolDown");
static_assert(offsetof(UCompanionQuadrupedBaseAnimInstance, bIsLocomotionCoolDownReady) == 1753, "Offset mismatch for UCompanionQuadrupedBaseAnimInstance::bIsLocomotionCoolDownReady");
static_assert(offsetof(UCompanionQuadrupedBaseAnimInstance, bIsBoredCoolDown) == 1754, "Offset mismatch for UCompanionQuadrupedBaseAnimInstance::bIsBoredCoolDown");
static_assert(offsetof(UCompanionQuadrupedBaseAnimInstance, bIsBoredCoolDownReady) == 1755, "Offset mismatch for UCompanionQuadrupedBaseAnimInstance::bIsBoredCoolDownReady");
static_assert(offsetof(UCompanionQuadrupedBaseAnimInstance, bIsDelayedMoodCombat) == 1756, "Offset mismatch for UCompanionQuadrupedBaseAnimInstance::bIsDelayedMoodCombat");
static_assert(offsetof(UCompanionQuadrupedBaseAnimInstance, bPlayCombatBodyAdditive) == 1757, "Offset mismatch for UCompanionQuadrupedBaseAnimInstance::bPlayCombatBodyAdditive");
static_assert(offsetof(UCompanionQuadrupedBaseAnimInstance, bUseRootSlopeOrientation) == 1758, "Offset mismatch for UCompanionQuadrupedBaseAnimInstance::bUseRootSlopeOrientation");
static_assert(offsetof(UCompanionQuadrupedBaseAnimInstance, bEnableLocomotionFacePose) == 1759, "Offset mismatch for UCompanionQuadrupedBaseAnimInstance::bEnableLocomotionFacePose");
static_assert(offsetof(UCompanionQuadrupedBaseAnimInstance, bIsWalkCurveActive) == 1760, "Offset mismatch for UCompanionQuadrupedBaseAnimInstance::bIsWalkCurveActive");
static_assert(offsetof(UCompanionQuadrupedBaseAnimInstance, bTriggerStartTurn) == 1761, "Offset mismatch for UCompanionQuadrupedBaseAnimInstance::bTriggerStartTurn");
static_assert(offsetof(UCompanionQuadrupedBaseAnimInstance, bExitLocomotion) == 1762, "Offset mismatch for UCompanionQuadrupedBaseAnimInstance::bExitLocomotion");
static_assert(offsetof(UCompanionQuadrupedBaseAnimInstance, bDisableMoodAndTailAdditives) == 1763, "Offset mismatch for UCompanionQuadrupedBaseAnimInstance::bDisableMoodAndTailAdditives");
static_assert(offsetof(UCompanionQuadrupedBaseAnimInstance, CosmeticPose) == 1768, "Offset mismatch for UCompanionQuadrupedBaseAnimInstance::CosmeticPose");
static_assert(offsetof(UCompanionQuadrupedBaseAnimInstance, AdditivePoseTagName) == 1800, "Offset mismatch for UCompanionQuadrupedBaseAnimInstance::AdditivePoseTagName");
static_assert(offsetof(UCompanionQuadrupedBaseAnimInstance, ChonkyChannelTagName) == 1804, "Offset mismatch for UCompanionQuadrupedBaseAnimInstance::ChonkyChannelTagName");
static_assert(offsetof(UCompanionQuadrupedBaseAnimInstance, ChonkyVariantTagName) == 1808, "Offset mismatch for UCompanionQuadrupedBaseAnimInstance::ChonkyVariantTagName");
static_assert(offsetof(UCompanionQuadrupedBaseAnimInstance, SitWeight) == 1812, "Offset mismatch for UCompanionQuadrupedBaseAnimInstance::SitWeight");
static_assert(offsetof(UCompanionQuadrupedBaseAnimInstance, ChonkyAdditiveWeight) == 1816, "Offset mismatch for UCompanionQuadrupedBaseAnimInstance::ChonkyAdditiveWeight");
static_assert(offsetof(UCompanionQuadrupedBaseAnimInstance, bIsChonky) == 1820, "Offset mismatch for UCompanionQuadrupedBaseAnimInstance::bIsChonky");
static_assert(offsetof(UCompanionQuadrupedBaseAnimInstance, bHasChonkyAdditivePose) == 1821, "Offset mismatch for UCompanionQuadrupedBaseAnimInstance::bHasChonkyAdditivePose");
static_assert(offsetof(UCompanionQuadrupedBaseAnimInstance, bHasTailAdditive) == 1822, "Offset mismatch for UCompanionQuadrupedBaseAnimInstance::bHasTailAdditive");
static_assert(offsetof(UCompanionQuadrupedBaseAnimInstance, TailAdditiveAlpha) == 1824, "Offset mismatch for UCompanionQuadrupedBaseAnimInstance::TailAdditiveAlpha");

// /Script/CosmeticCompanionsRuntime.CompanionQuadrupedPostProcessAnimInstance
// Kind: Class; super: CompanionPostProcessAnimInstance
class UCompanionQuadrupedPostProcessAnimInstance
{
public:
    std::uint8_t Pad_0000[0x3A0]; // 0x0000
    float ChonkyAdditiveWeight; // 0x03A0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bHasChonkyAdditivePose; // 0x03A4 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UCompanionQuadrupedPostProcessAnimInstance, ChonkyAdditiveWeight) == 928, "Offset mismatch for UCompanionQuadrupedPostProcessAnimInstance::ChonkyAdditiveWeight");
static_assert(offsetof(UCompanionQuadrupedPostProcessAnimInstance, bHasChonkyAdditivePose) == 932, "Offset mismatch for UCompanionQuadrupedPostProcessAnimInstance::bHasChonkyAdditivePose");

// /Script/CosmeticCompanionsRuntime.CompanionQuadrupedUAFAnimInstance
// Kind: Class; super: CompanionQuadrupedBaseAnimInstance
class UCompanionQuadrupedUAFAnimInstance
{
public:
    std::uint8_t Pad_0000[0x770]; // 0x0000
    double UAFAuxiliaryTimer3Value; // 0x0770 (Size: 0x8, Type: DoubleProperty)
    double UAFCompanionDirection; // 0x0778 (Size: 0x8, Type: DoubleProperty)
    double UAFCompanionSpeed2D; // 0x0780 (Size: 0x8, Type: DoubleProperty)
    std::int32_t UAFLocomotionMovementType; // 0x0788 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x078C
    double UAFLocomotionScaleMultiplier; // 0x0790 (Size: 0x8, Type: DoubleProperty)
    void* UAFAnticSequenceToPlay; // 0x0798 (Size: 0x8, Type: ObjectProperty)
    double UAFTailWagSpeed; // 0x07A0 (Size: 0x8, Type: DoubleProperty)
    double UAFIdleAnticAlpha; // 0x07A8 (Size: 0x8, Type: DoubleProperty)
    double UAFTailWagAlpha; // 0x07B0 (Size: 0x8, Type: DoubleProperty)
    double UAFLookAtPitchActual; // 0x07B8 (Size: 0x8, Type: DoubleProperty)
    double UAFAimOffsetAlpha; // 0x07C0 (Size: 0x8, Type: DoubleProperty)
    double UAFUpdatedGoalRotation; // 0x07C8 (Size: 0x8, Type: DoubleProperty)
    double UAFLookAtPitch; // 0x07D0 (Size: 0x8, Type: DoubleProperty)
    double UAFLookAtYaw; // 0x07D8 (Size: 0x8, Type: DoubleProperty)
    double SitWeightCurveValue; // 0x07E0 (Size: 0x8, Type: DoubleProperty)
    double IdleCurveValue; // 0x07E8 (Size: 0x8, Type: DoubleProperty)
    double DisableCompanionIKCurveValue; // 0x07F0 (Size: 0x8, Type: DoubleProperty)
    double ReactionHappyCurveValue; // 0x07F8 (Size: 0x8, Type: DoubleProperty)
    double ReactionHappy01CurveValue; // 0x0800 (Size: 0x8, Type: DoubleProperty)
    double UseRootSlopeOrientationCurveValue; // 0x0808 (Size: 0x8, Type: DoubleProperty)
    double WalkCurveValue; // 0x0810 (Size: 0x8, Type: DoubleProperty)
    double DisableAimOffsetCurveValue; // 0x0818 (Size: 0x8, Type: DoubleProperty)
    double DisableSlopeWarpingCurveValue; // 0x0820 (Size: 0x8, Type: DoubleProperty)
    double EmoteACurveValue; // 0x0828 (Size: 0x8, Type: DoubleProperty)
    double EmoteBCurveValue; // 0x0830 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(UCompanionQuadrupedUAFAnimInstance, UAFAuxiliaryTimer3Value) == 1904, "Offset mismatch for UCompanionQuadrupedUAFAnimInstance::UAFAuxiliaryTimer3Value");
static_assert(offsetof(UCompanionQuadrupedUAFAnimInstance, UAFCompanionDirection) == 1912, "Offset mismatch for UCompanionQuadrupedUAFAnimInstance::UAFCompanionDirection");
static_assert(offsetof(UCompanionQuadrupedUAFAnimInstance, UAFCompanionSpeed2D) == 1920, "Offset mismatch for UCompanionQuadrupedUAFAnimInstance::UAFCompanionSpeed2D");
static_assert(offsetof(UCompanionQuadrupedUAFAnimInstance, UAFLocomotionMovementType) == 1928, "Offset mismatch for UCompanionQuadrupedUAFAnimInstance::UAFLocomotionMovementType");
static_assert(offsetof(UCompanionQuadrupedUAFAnimInstance, UAFLocomotionScaleMultiplier) == 1936, "Offset mismatch for UCompanionQuadrupedUAFAnimInstance::UAFLocomotionScaleMultiplier");
static_assert(offsetof(UCompanionQuadrupedUAFAnimInstance, UAFAnticSequenceToPlay) == 1944, "Offset mismatch for UCompanionQuadrupedUAFAnimInstance::UAFAnticSequenceToPlay");
static_assert(offsetof(UCompanionQuadrupedUAFAnimInstance, UAFTailWagSpeed) == 1952, "Offset mismatch for UCompanionQuadrupedUAFAnimInstance::UAFTailWagSpeed");
static_assert(offsetof(UCompanionQuadrupedUAFAnimInstance, UAFIdleAnticAlpha) == 1960, "Offset mismatch for UCompanionQuadrupedUAFAnimInstance::UAFIdleAnticAlpha");
static_assert(offsetof(UCompanionQuadrupedUAFAnimInstance, UAFTailWagAlpha) == 1968, "Offset mismatch for UCompanionQuadrupedUAFAnimInstance::UAFTailWagAlpha");
static_assert(offsetof(UCompanionQuadrupedUAFAnimInstance, UAFLookAtPitchActual) == 1976, "Offset mismatch for UCompanionQuadrupedUAFAnimInstance::UAFLookAtPitchActual");
static_assert(offsetof(UCompanionQuadrupedUAFAnimInstance, UAFAimOffsetAlpha) == 1984, "Offset mismatch for UCompanionQuadrupedUAFAnimInstance::UAFAimOffsetAlpha");
static_assert(offsetof(UCompanionQuadrupedUAFAnimInstance, UAFUpdatedGoalRotation) == 1992, "Offset mismatch for UCompanionQuadrupedUAFAnimInstance::UAFUpdatedGoalRotation");
static_assert(offsetof(UCompanionQuadrupedUAFAnimInstance, UAFLookAtPitch) == 2000, "Offset mismatch for UCompanionQuadrupedUAFAnimInstance::UAFLookAtPitch");
static_assert(offsetof(UCompanionQuadrupedUAFAnimInstance, UAFLookAtYaw) == 2008, "Offset mismatch for UCompanionQuadrupedUAFAnimInstance::UAFLookAtYaw");
static_assert(offsetof(UCompanionQuadrupedUAFAnimInstance, SitWeightCurveValue) == 2016, "Offset mismatch for UCompanionQuadrupedUAFAnimInstance::SitWeightCurveValue");
static_assert(offsetof(UCompanionQuadrupedUAFAnimInstance, IdleCurveValue) == 2024, "Offset mismatch for UCompanionQuadrupedUAFAnimInstance::IdleCurveValue");
static_assert(offsetof(UCompanionQuadrupedUAFAnimInstance, DisableCompanionIKCurveValue) == 2032, "Offset mismatch for UCompanionQuadrupedUAFAnimInstance::DisableCompanionIKCurveValue");
static_assert(offsetof(UCompanionQuadrupedUAFAnimInstance, ReactionHappyCurveValue) == 2040, "Offset mismatch for UCompanionQuadrupedUAFAnimInstance::ReactionHappyCurveValue");
static_assert(offsetof(UCompanionQuadrupedUAFAnimInstance, ReactionHappy01CurveValue) == 2048, "Offset mismatch for UCompanionQuadrupedUAFAnimInstance::ReactionHappy01CurveValue");
static_assert(offsetof(UCompanionQuadrupedUAFAnimInstance, UseRootSlopeOrientationCurveValue) == 2056, "Offset mismatch for UCompanionQuadrupedUAFAnimInstance::UseRootSlopeOrientationCurveValue");
static_assert(offsetof(UCompanionQuadrupedUAFAnimInstance, WalkCurveValue) == 2064, "Offset mismatch for UCompanionQuadrupedUAFAnimInstance::WalkCurveValue");
static_assert(offsetof(UCompanionQuadrupedUAFAnimInstance, DisableAimOffsetCurveValue) == 2072, "Offset mismatch for UCompanionQuadrupedUAFAnimInstance::DisableAimOffsetCurveValue");
static_assert(offsetof(UCompanionQuadrupedUAFAnimInstance, DisableSlopeWarpingCurveValue) == 2080, "Offset mismatch for UCompanionQuadrupedUAFAnimInstance::DisableSlopeWarpingCurveValue");
static_assert(offsetof(UCompanionQuadrupedUAFAnimInstance, EmoteACurveValue) == 2088, "Offset mismatch for UCompanionQuadrupedUAFAnimInstance::EmoteACurveValue");
static_assert(offsetof(UCompanionQuadrupedUAFAnimInstance, EmoteBCurveValue) == 2096, "Offset mismatch for UCompanionQuadrupedUAFAnimInstance::EmoteBCurveValue");

// /Script/CosmeticCompanionsRuntime.CompanionQuestAssetManifest
// Kind: Class; super: DataAsset
class UCompanionQuestAssetManifest
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> QuestAssets; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UCompanionQuestAssetManifest, QuestAssets) == 40, "Offset mismatch for UCompanionQuestAssetManifest::QuestAssets");

// /Script/CosmeticCompanionsRuntime.CompanionSlopeWarpingComponent
// Kind: Class; super: FortSlopeWarpingComponent
class UCompanionSlopeWarpingComponent
{
public:
    std::uint8_t Pad_0000[0x218]; // 0x0000
    float CollisionFrequency; // 0x0218 (Size: 0x4, Type: FloatProperty)
    float StationarySpeedTolerance; // 0x021C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UCompanionSlopeWarpingComponent, CollisionFrequency) == 536, "Offset mismatch for UCompanionSlopeWarpingComponent::CollisionFrequency");
static_assert(offsetof(UCompanionSlopeWarpingComponent, StationarySpeedTolerance) == 540, "Offset mismatch for UCompanionSlopeWarpingComponent::StationarySpeedTolerance");

// /Script/CosmeticCompanionsRuntime.CompanionSoundLibraryAnimContext
// Kind: Class; super: SoundLibraryAnimContext
class UCompanionSoundLibraryAnimContext
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    std::uint8_t AnimSettings[0x38]; // 0x0060 (Size: 0x38, Type: StructProperty)
    std::uint8_t DefaultOffset[0x18]; // 0x0098 (Size: 0x18, Type: StructProperty)
    TWeakObjectPtr<void> Animation; // 0x00B0 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> MeshComponent; // 0x00B8 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t bSupportsNotifyEnd; // 0x00C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00C1
    float AnimRate; // 0x00C4 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UCompanionSoundLibraryAnimContext, AnimSettings) == 96, "Offset mismatch for UCompanionSoundLibraryAnimContext::AnimSettings");
static_assert(offsetof(UCompanionSoundLibraryAnimContext, DefaultOffset) == 152, "Offset mismatch for UCompanionSoundLibraryAnimContext::DefaultOffset");
static_assert(offsetof(UCompanionSoundLibraryAnimContext, Animation) == 176, "Offset mismatch for UCompanionSoundLibraryAnimContext::Animation");
static_assert(offsetof(UCompanionSoundLibraryAnimContext, MeshComponent) == 184, "Offset mismatch for UCompanionSoundLibraryAnimContext::MeshComponent");
static_assert(offsetof(UCompanionSoundLibraryAnimContext, bSupportsNotifyEnd) == 192, "Offset mismatch for UCompanionSoundLibraryAnimContext::bSupportsNotifyEnd");
static_assert(offsetof(UCompanionSoundLibraryAnimContext, AnimRate) == 196, "Offset mismatch for UCompanionSoundLibraryAnimContext::AnimRate");

// /Script/CosmeticCompanionsRuntime.CompanionVoLipSyncComponent
// Kind: Class; super: ActorComponent
class UCompanionVoLipSyncComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    void* ActiveVoComponent; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
    void* ActiveAnimInstance; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
    void* CompanionMesh; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
    void* SoundLibComp; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x18]; // 0x00E0
    FMulticastInlineDelegate StartWatchingCompanionVO; // 0x00F8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate StopWatchingCompanionVO; // 0x0108 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UCompanionVoLipSyncComponent, ActiveVoComponent) == 192, "Offset mismatch for UCompanionVoLipSyncComponent::ActiveVoComponent");
static_assert(offsetof(UCompanionVoLipSyncComponent, ActiveAnimInstance) == 200, "Offset mismatch for UCompanionVoLipSyncComponent::ActiveAnimInstance");
static_assert(offsetof(UCompanionVoLipSyncComponent, CompanionMesh) == 208, "Offset mismatch for UCompanionVoLipSyncComponent::CompanionMesh");
static_assert(offsetof(UCompanionVoLipSyncComponent, SoundLibComp) == 216, "Offset mismatch for UCompanionVoLipSyncComponent::SoundLibComp");
static_assert(offsetof(UCompanionVoLipSyncComponent, StartWatchingCompanionVO) == 248, "Offset mismatch for UCompanionVoLipSyncComponent::StartWatchingCompanionVO");
static_assert(offsetof(UCompanionVoLipSyncComponent, StopWatchingCompanionVO) == 264, "Offset mismatch for UCompanionVoLipSyncComponent::StopWatchingCompanionVO");

// /Script/CosmeticCompanionsRuntime.CompanionsDynamicProviderAssetBase
// Kind: Class; super: DynamicProviderAssetBase
class UCompanionsDynamicProviderAssetBase
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t CosmeticCompanionItemDefinition[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UCompanionsDynamicProviderAssetBase, CosmeticCompanionItemDefinition) == 40, "Offset mismatch for UCompanionsDynamicProviderAssetBase::CosmeticCompanionItemDefinition");

// /Script/CosmeticCompanionsRuntime.CompanionsDynamicProviderRuntimeBase
// Kind: Class; super: DynamicRuntimeProviderBase
class UCompanionsDynamicProviderRuntimeBase
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    TWeakObjectPtr<void> CosmeticCompanionInstance; // 0x0050 (Size: 0x8, Type: WeakObjectProperty)
    std::int32_t InstanceCount; // 0x0058 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsClassEquipped; // 0x005C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UCompanionsDynamicProviderRuntimeBase, CosmeticCompanionInstance) == 80, "Offset mismatch for UCompanionsDynamicProviderRuntimeBase::CosmeticCompanionInstance");
static_assert(offsetof(UCompanionsDynamicProviderRuntimeBase, InstanceCount) == 88, "Offset mismatch for UCompanionsDynamicProviderRuntimeBase::InstanceCount");
static_assert(offsetof(UCompanionsDynamicProviderRuntimeBase, bIsClassEquipped) == 92, "Offset mismatch for UCompanionsDynamicProviderRuntimeBase::bIsClassEquipped");

// /Script/CosmeticCompanionsRuntime.CompanionsQuestCategoryDynamicProviderAsset
// Kind: Class; super: CompanionsDynamicProviderAssetBase
class UCompanionsQuestCategoryDynamicProviderAsset
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    void* SharedCategoryData; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UCompanionsQuestCategoryDynamicProviderAsset, SharedCategoryData) == 48, "Offset mismatch for UCompanionsQuestCategoryDynamicProviderAsset::SharedCategoryData");

// /Script/CosmeticCompanionsRuntime.CompanionsQuestCategoryDynamicRuntimeProvider
// Kind: Class; super: CompanionsDynamicProviderRuntimeBase
class UCompanionsQuestCategoryDynamicRuntimeProvider
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    TWeakObjectPtr<void> CosmeticCompanionInstance; // 0x0050 (Size: 0x8, Type: WeakObjectProperty)
    std::int32_t InstanceCount; // 0x0058 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsClassEquipped; // 0x005C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UCompanionsQuestCategoryDynamicRuntimeProvider, CosmeticCompanionInstance) == 80, "Offset mismatch for UCompanionsQuestCategoryDynamicRuntimeProvider::CosmeticCompanionInstance");
static_assert(offsetof(UCompanionsQuestCategoryDynamicRuntimeProvider, InstanceCount) == 88, "Offset mismatch for UCompanionsQuestCategoryDynamicRuntimeProvider::InstanceCount");
static_assert(offsetof(UCompanionsQuestCategoryDynamicRuntimeProvider, bIsClassEquipped) == 92, "Offset mismatch for UCompanionsQuestCategoryDynamicRuntimeProvider::bIsClassEquipped");

// /Script/CosmeticCompanionsRuntime.CompanionsQuestCategorySharedData
// Kind: Class; super: DataAsset
class UCompanionsQuestCategorySharedData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t NamedCompanionTextFormat[0x10]; // 0x0028 (Size: 0x10, Type: TextProperty)
    std::uint8_t LongNamedCompanionTextFormat[0x10]; // 0x0038 (Size: 0x10, Type: TextProperty)
    std::uint8_t NamedCompanionPluralTextFormat[0x10]; // 0x0048 (Size: 0x10, Type: TextProperty)
    std::uint8_t LongNamedCompanionPluralTextFormat[0x10]; // 0x0058 (Size: 0x10, Type: TextProperty)
    std::int32_t EquippedSortOrder; // 0x0068 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UCompanionsQuestCategorySharedData, NamedCompanionTextFormat) == 40, "Offset mismatch for UCompanionsQuestCategorySharedData::NamedCompanionTextFormat");
static_assert(offsetof(UCompanionsQuestCategorySharedData, LongNamedCompanionTextFormat) == 56, "Offset mismatch for UCompanionsQuestCategorySharedData::LongNamedCompanionTextFormat");
static_assert(offsetof(UCompanionsQuestCategorySharedData, NamedCompanionPluralTextFormat) == 72, "Offset mismatch for UCompanionsQuestCategorySharedData::NamedCompanionPluralTextFormat");
static_assert(offsetof(UCompanionsQuestCategorySharedData, LongNamedCompanionPluralTextFormat) == 88, "Offset mismatch for UCompanionsQuestCategorySharedData::LongNamedCompanionPluralTextFormat");
static_assert(offsetof(UCompanionsQuestCategorySharedData, EquippedSortOrder) == 104, "Offset mismatch for UCompanionsQuestCategorySharedData::EquippedSortOrder");

// /Script/CosmeticCompanionsRuntime.CompanionsQuestHeaderDynamicProviderAsset
// Kind: Class; super: CompanionsDynamicProviderAssetBase
class UCompanionsQuestHeaderDynamicProviderAsset
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    void* SharedHeaderData; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UCompanionsQuestHeaderDynamicProviderAsset, SharedHeaderData) == 48, "Offset mismatch for UCompanionsQuestHeaderDynamicProviderAsset::SharedHeaderData");

// /Script/CosmeticCompanionsRuntime.CompanionsQuestHeaderDynamicRuntimeProvider
// Kind: Class; super: CompanionsDynamicProviderRuntimeBase
class UCompanionsQuestHeaderDynamicRuntimeProvider
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    TWeakObjectPtr<void> CosmeticCompanionInstance; // 0x0050 (Size: 0x8, Type: WeakObjectProperty)
    std::int32_t InstanceCount; // 0x0058 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsClassEquipped; // 0x005C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UCompanionsQuestHeaderDynamicRuntimeProvider, CosmeticCompanionInstance) == 80, "Offset mismatch for UCompanionsQuestHeaderDynamicRuntimeProvider::CosmeticCompanionInstance");
static_assert(offsetof(UCompanionsQuestHeaderDynamicRuntimeProvider, InstanceCount) == 88, "Offset mismatch for UCompanionsQuestHeaderDynamicRuntimeProvider::InstanceCount");
static_assert(offsetof(UCompanionsQuestHeaderDynamicRuntimeProvider, bIsClassEquipped) == 92, "Offset mismatch for UCompanionsQuestHeaderDynamicRuntimeProvider::bIsClassEquipped");

// /Script/CosmeticCompanionsRuntime.CompanionsQuestHeaderSharedData
// Kind: Class; super: DataAsset
class UCompanionsQuestHeaderSharedData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t NamedCompanionTextFormat[0x10]; // 0x0028 (Size: 0x10, Type: TextProperty)
    FText NamedCompanionPluralTextFormat; // 0x0038 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(UCompanionsQuestHeaderSharedData, NamedCompanionTextFormat) == 40, "Offset mismatch for UCompanionsQuestHeaderSharedData::NamedCompanionTextFormat");
static_assert(offsetof(UCompanionsQuestHeaderSharedData, NamedCompanionPluralTextFormat) == 56, "Offset mismatch for UCompanionsQuestHeaderSharedData::NamedCompanionPluralTextFormat");

// /Script/CosmeticCompanionsRuntime.CosmeticCompanionItem
// Kind: Class; super: AthenaCosmeticAccountItem
class UCosmeticCompanionItem
{
public:
    std::uint8_t Pad_0000[0x150]; // 0x0000
    std::uint8_t locked_in; // 0x0150 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UCosmeticCompanionItem, locked_in) == 336, "Offset mismatch for UCosmeticCompanionItem::locked_in");

// /Script/CosmeticCompanionsRuntime.CosmeticCompanionItemDefaultNames
// Kind: Class; super: FortGameFeatureActionMultipleAsset
class UCosmeticCompanionItemDefaultNames
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TArray<void*> DefaultNames; // 0x0030 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UCosmeticCompanionItemDefaultNames, DefaultNames) == 48, "Offset mismatch for UCosmeticCompanionItemDefaultNames::DefaultNames");

// /Script/CosmeticCompanionsRuntime.CosmeticCompanionItemDefinition
// Kind: Class; super: AthenaCharacterPartItemDefinition
class UCosmeticCompanionItemDefinition
{
public:
    std::uint8_t Pad_0000[0x408]; // 0x0000
    std::uint8_t MainSkeletalMesh[0x20]; // 0x0408 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t MainAnimClass[0x20]; // 0x0428 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t MainUAFSystem[0x20]; // 0x0448 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t ReactionChooserProxy[0x20]; // 0x0468 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t InteractionSceneAsset[0x20]; // 0x0488 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t AnimDataAsset[0x20]; // 0x04A8 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t AnimTableAsset[0x20]; // 0x04C8 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t AnimationSettingsOverride[0x20]; // 0x04E8 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t DefaultReactFXOverride[0x20]; // 0x0508 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t ReactFXAttachmentParameters[0x58]; // 0x0528 (Size: 0x58, Type: StructProperty)
    std::uint8_t PreviewReactFXAttachmentParameters[0x58]; // 0x0580 (Size: 0x58, Type: StructProperty)
    std::uint8_t PlayerCompanionFootstepData[0x50]; // 0x05D8 (Size: 0x50, Type: StructProperty)
    std::uint8_t InteractionText[0x10]; // 0x0628 (Size: 0x10, Type: TextProperty)
    std::uint8_t LobbyInteractionText[0x10]; // 0x0638 (Size: 0x10, Type: TextProperty)
    std::uint8_t SpawnReactionTag[0x4]; // 0x0648 (Size: 0x4, Type: StructProperty)
    std::uint8_t bUseMutableCustomizableObject; // 0x064C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x064D
    void* ItemDefaultNames; // 0x0650 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t AdditionalPedestalOffset[0x18]; // 0x0658 (Size: 0x18, Type: StructProperty)
    std::uint8_t CompanionTypeTag[0x8]; // 0x0670 (Size: 0x8, Type: StructProperty)
    std::uint8_t CameraFramingBounds[0x20]; // 0x0678 (Size: 0x20, Type: StructProperty)
    TArray<void*> ProgressionRewards; // 0x0698 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bEnableNPCCompanionUsage; // 0x06A8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UCosmeticCompanionItemDefinition, MainSkeletalMesh) == 1032, "Offset mismatch for UCosmeticCompanionItemDefinition::MainSkeletalMesh");
static_assert(offsetof(UCosmeticCompanionItemDefinition, MainAnimClass) == 1064, "Offset mismatch for UCosmeticCompanionItemDefinition::MainAnimClass");
static_assert(offsetof(UCosmeticCompanionItemDefinition, MainUAFSystem) == 1096, "Offset mismatch for UCosmeticCompanionItemDefinition::MainUAFSystem");
static_assert(offsetof(UCosmeticCompanionItemDefinition, ReactionChooserProxy) == 1128, "Offset mismatch for UCosmeticCompanionItemDefinition::ReactionChooserProxy");
static_assert(offsetof(UCosmeticCompanionItemDefinition, InteractionSceneAsset) == 1160, "Offset mismatch for UCosmeticCompanionItemDefinition::InteractionSceneAsset");
static_assert(offsetof(UCosmeticCompanionItemDefinition, AnimDataAsset) == 1192, "Offset mismatch for UCosmeticCompanionItemDefinition::AnimDataAsset");
static_assert(offsetof(UCosmeticCompanionItemDefinition, AnimTableAsset) == 1224, "Offset mismatch for UCosmeticCompanionItemDefinition::AnimTableAsset");
static_assert(offsetof(UCosmeticCompanionItemDefinition, AnimationSettingsOverride) == 1256, "Offset mismatch for UCosmeticCompanionItemDefinition::AnimationSettingsOverride");
static_assert(offsetof(UCosmeticCompanionItemDefinition, DefaultReactFXOverride) == 1288, "Offset mismatch for UCosmeticCompanionItemDefinition::DefaultReactFXOverride");
static_assert(offsetof(UCosmeticCompanionItemDefinition, ReactFXAttachmentParameters) == 1320, "Offset mismatch for UCosmeticCompanionItemDefinition::ReactFXAttachmentParameters");
static_assert(offsetof(UCosmeticCompanionItemDefinition, PreviewReactFXAttachmentParameters) == 1408, "Offset mismatch for UCosmeticCompanionItemDefinition::PreviewReactFXAttachmentParameters");
static_assert(offsetof(UCosmeticCompanionItemDefinition, PlayerCompanionFootstepData) == 1496, "Offset mismatch for UCosmeticCompanionItemDefinition::PlayerCompanionFootstepData");
static_assert(offsetof(UCosmeticCompanionItemDefinition, InteractionText) == 1576, "Offset mismatch for UCosmeticCompanionItemDefinition::InteractionText");
static_assert(offsetof(UCosmeticCompanionItemDefinition, LobbyInteractionText) == 1592, "Offset mismatch for UCosmeticCompanionItemDefinition::LobbyInteractionText");
static_assert(offsetof(UCosmeticCompanionItemDefinition, SpawnReactionTag) == 1608, "Offset mismatch for UCosmeticCompanionItemDefinition::SpawnReactionTag");
static_assert(offsetof(UCosmeticCompanionItemDefinition, bUseMutableCustomizableObject) == 1612, "Offset mismatch for UCosmeticCompanionItemDefinition::bUseMutableCustomizableObject");
static_assert(offsetof(UCosmeticCompanionItemDefinition, ItemDefaultNames) == 1616, "Offset mismatch for UCosmeticCompanionItemDefinition::ItemDefaultNames");
static_assert(offsetof(UCosmeticCompanionItemDefinition, AdditionalPedestalOffset) == 1624, "Offset mismatch for UCosmeticCompanionItemDefinition::AdditionalPedestalOffset");
static_assert(offsetof(UCosmeticCompanionItemDefinition, CompanionTypeTag) == 1648, "Offset mismatch for UCosmeticCompanionItemDefinition::CompanionTypeTag");
static_assert(offsetof(UCosmeticCompanionItemDefinition, CameraFramingBounds) == 1656, "Offset mismatch for UCosmeticCompanionItemDefinition::CameraFramingBounds");
static_assert(offsetof(UCosmeticCompanionItemDefinition, ProgressionRewards) == 1688, "Offset mismatch for UCosmeticCompanionItemDefinition::ProgressionRewards");
static_assert(offsetof(UCosmeticCompanionItemDefinition, bEnableNPCCompanionUsage) == 1704, "Offset mismatch for UCosmeticCompanionItemDefinition::bEnableNPCCompanionUsage");

// /Script/CosmeticCompanionsRuntime.CosmeticCompanionReactFXItem
// Kind: Class; super: AthenaCosmeticAccountItem
class UCosmeticCompanionReactFXItem
{
public:
    std::uint8_t Pad_0000[0x108]; // 0x0000
    TArray<void*> VariantChannels; // 0x0108 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ActiveVariantOverrides; // 0x0118 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Variants; // 0x0128 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0138
    void* Hero; // 0x0148 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UCosmeticCompanionReactFXItem, VariantChannels) == 264, "Offset mismatch for UCosmeticCompanionReactFXItem::VariantChannels");
static_assert(offsetof(UCosmeticCompanionReactFXItem, ActiveVariantOverrides) == 280, "Offset mismatch for UCosmeticCompanionReactFXItem::ActiveVariantOverrides");
static_assert(offsetof(UCosmeticCompanionReactFXItem, Variants) == 296, "Offset mismatch for UCosmeticCompanionReactFXItem::Variants");
static_assert(offsetof(UCosmeticCompanionReactFXItem, Hero) == 328, "Offset mismatch for UCosmeticCompanionReactFXItem::Hero");

// /Script/CosmeticCompanionsRuntime.CosmeticCompanionReactFXItemDefinition
// Kind: Class; super: AthenaCosmeticItemDefinition
class UCosmeticCompanionReactFXItemDefinition
{
public:
    std::uint8_t Pad_0000[0x400]; // 0x0000
    TSoftObjectPtr<void> ReactFX; // 0x0400 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UCosmeticCompanionReactFXItemDefinition, ReactFX) == 1024, "Offset mismatch for UCosmeticCompanionReactFXItemDefinition::ReactFX");

// /Script/CosmeticCompanionsRuntime.CosmeticCompanionSubsystem
// Kind: Class; super: GameInstanceSubsystem
class UCosmeticCompanionSubsystem
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    void* ReactionSystemDiscriminator; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    TMap<void*, void*> AdditionalReactionTableMap; // 0x0038 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UCosmeticCompanionSubsystem, ReactionSystemDiscriminator) == 48, "Offset mismatch for UCosmeticCompanionSubsystem::ReactionSystemDiscriminator");
static_assert(offsetof(UCosmeticCompanionSubsystem, AdditionalReactionTableMap) == 56, "Offset mismatch for UCosmeticCompanionSubsystem::AdditionalReactionTableMap");

// /Script/CosmeticCompanionsRuntime.CosmeticCompanionsGlobals
// Kind: Class; super: Object
class UCosmeticCompanionsGlobals
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CosmeticCompanionsRuntime.CosmeticCompanionsSettings
// Kind: Class; super: DeveloperSettings
class UCosmeticCompanionsSettings
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t DefaultFootstepVFX[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UCosmeticCompanionsSettings, DefaultFootstepVFX) == 48, "Offset mismatch for UCosmeticCompanionsSettings::DefaultFootstepVFX");

// /Script/CosmeticCompanionsRuntime.CosmeticDownloadCandidateComponentCompanion
// Kind: Class; super: CosmeticDownloadCandidateComponent
class UCosmeticDownloadCandidateComponentCompanion
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

static_assert(offsetof(UCosmeticDownloadCandidateComponentCompanion, PrimaryComponentTick) == 56, "Offset mismatch for UCosmeticDownloadCandidateComponentCompanion::PrimaryComponentTick");
static_assert(offsetof(UCosmeticDownloadCandidateComponentCompanion, ComponentTags) == 104, "Offset mismatch for UCosmeticDownloadCandidateComponentCompanion::ComponentTags");
static_assert(offsetof(UCosmeticDownloadCandidateComponentCompanion, AssetUserData) == 120, "Offset mismatch for UCosmeticDownloadCandidateComponentCompanion::AssetUserData");
static_assert(offsetof(UCosmeticDownloadCandidateComponentCompanion, UCSSerializationIndex) == 144, "Offset mismatch for UCosmeticDownloadCandidateComponentCompanion::UCSSerializationIndex");
static_assert(offsetof(UCosmeticDownloadCandidateComponentCompanion, bNetAddressable) == 152, "Offset mismatch for UCosmeticDownloadCandidateComponentCompanion::bNetAddressable");
static_assert(offsetof(UCosmeticDownloadCandidateComponentCompanion, bAutoActivate) == 154, "Offset mismatch for UCosmeticDownloadCandidateComponentCompanion::bAutoActivate");
static_assert(offsetof(UCosmeticDownloadCandidateComponentCompanion, bIsEditorOnly) == 155, "Offset mismatch for UCosmeticDownloadCandidateComponentCompanion::bIsEditorOnly");
static_assert(offsetof(UCosmeticDownloadCandidateComponentCompanion, CreationMethod) == 185, "Offset mismatch for UCosmeticDownloadCandidateComponentCompanion::CreationMethod");
static_assert(offsetof(UCosmeticDownloadCandidateComponentCompanion, OnComponentActivated) == 186, "Offset mismatch for UCosmeticDownloadCandidateComponentCompanion::OnComponentActivated");
static_assert(offsetof(UCosmeticDownloadCandidateComponentCompanion, OnComponentDeactivated) == 187, "Offset mismatch for UCosmeticDownloadCandidateComponentCompanion::OnComponentDeactivated");

// /Script/CosmeticCompanionsRuntime.CosmeticItemStep_CompanionsLoadAssets
// Kind: Class; super: FortCosmeticStep
class UCosmeticItemStep_CompanionsLoadAssets
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    std::uint8_t FlowgraphKey[0x1]; // 0x0058 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UCosmeticItemStep_CompanionsLoadAssets, FlowgraphKey) == 88, "Offset mismatch for UCosmeticItemStep_CompanionsLoadAssets::FlowgraphKey");

// /Script/CosmeticCompanionsRuntime.CosmeticItemStep_CompanionsPostLoad
// Kind: Class; super: FortCosmeticStep
class UCosmeticItemStep_CompanionsPostLoad
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    std::uint8_t FlowgraphKey[0x1]; // 0x0058 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UCosmeticItemStep_CompanionsPostLoad, FlowgraphKey) == 88, "Offset mismatch for UCosmeticItemStep_CompanionsPostLoad::FlowgraphKey");

// /Script/CosmeticCompanionsRuntime.CosmeticItemStep_CompanionsRunCustomizableObject
// Kind: Class; super: FortCosmeticStep
class UCosmeticItemStep_CompanionsRunCustomizableObject
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    std::uint8_t FlowgraphKey[0x1]; // 0x0058 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UCosmeticItemStep_CompanionsRunCustomizableObject, FlowgraphKey) == 88, "Offset mismatch for UCosmeticItemStep_CompanionsRunCustomizableObject::FlowgraphKey");

// /Script/CosmeticCompanionsRuntime.CrescentNailAnimInstance
// Kind: Class; super: FortPlayerCompanionAnimInstance
class UCrescentNailAnimInstance
{
public:
    std::uint8_t Pad_0000[0x640]; // 0x0000
    float StartStopPosition; // 0x0640 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0644
    double AnticAlpha; // 0x0648 (Size: 0x8, Type: DoubleProperty)
    double LookAtYawAdjusted; // 0x0650 (Size: 0x8, Type: DoubleProperty)
    double LookAtPitchAdjusted; // 0x0658 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bIsReactionHappyPlaying; // 0x0660 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsEmoteDanceLoop; // 0x0661 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsHappyReaction_01; // 0x0662 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsWalkStopFootR; // 0x0663 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsWalkStopFootL; // 0x0664 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsRunStopFootR; // 0x0665 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsSitting; // 0x0666 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsSpecialIdleFinish; // 0x0667 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnterEmoteLoops; // 0x0668 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPlayCombatBodyAdditive; // 0x0669 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UCrescentNailAnimInstance, StartStopPosition) == 1600, "Offset mismatch for UCrescentNailAnimInstance::StartStopPosition");
static_assert(offsetof(UCrescentNailAnimInstance, AnticAlpha) == 1608, "Offset mismatch for UCrescentNailAnimInstance::AnticAlpha");
static_assert(offsetof(UCrescentNailAnimInstance, LookAtYawAdjusted) == 1616, "Offset mismatch for UCrescentNailAnimInstance::LookAtYawAdjusted");
static_assert(offsetof(UCrescentNailAnimInstance, LookAtPitchAdjusted) == 1624, "Offset mismatch for UCrescentNailAnimInstance::LookAtPitchAdjusted");
static_assert(offsetof(UCrescentNailAnimInstance, bIsReactionHappyPlaying) == 1632, "Offset mismatch for UCrescentNailAnimInstance::bIsReactionHappyPlaying");
static_assert(offsetof(UCrescentNailAnimInstance, bIsEmoteDanceLoop) == 1633, "Offset mismatch for UCrescentNailAnimInstance::bIsEmoteDanceLoop");
static_assert(offsetof(UCrescentNailAnimInstance, bIsHappyReaction_01) == 1634, "Offset mismatch for UCrescentNailAnimInstance::bIsHappyReaction_01");
static_assert(offsetof(UCrescentNailAnimInstance, bIsWalkStopFootR) == 1635, "Offset mismatch for UCrescentNailAnimInstance::bIsWalkStopFootR");
static_assert(offsetof(UCrescentNailAnimInstance, bIsWalkStopFootL) == 1636, "Offset mismatch for UCrescentNailAnimInstance::bIsWalkStopFootL");
static_assert(offsetof(UCrescentNailAnimInstance, bIsRunStopFootR) == 1637, "Offset mismatch for UCrescentNailAnimInstance::bIsRunStopFootR");
static_assert(offsetof(UCrescentNailAnimInstance, bIsSitting) == 1638, "Offset mismatch for UCrescentNailAnimInstance::bIsSitting");
static_assert(offsetof(UCrescentNailAnimInstance, bIsSpecialIdleFinish) == 1639, "Offset mismatch for UCrescentNailAnimInstance::bIsSpecialIdleFinish");
static_assert(offsetof(UCrescentNailAnimInstance, bEnterEmoteLoops) == 1640, "Offset mismatch for UCrescentNailAnimInstance::bEnterEmoteLoops");
static_assert(offsetof(UCrescentNailAnimInstance, bPlayCombatBodyAdditive) == 1641, "Offset mismatch for UCrescentNailAnimInstance::bPlayCombatBodyAdditive");

// /Script/CosmeticCompanionsRuntime.DoveSlideQuadrupedAnimInstance
// Kind: Class; super: AnimInstance
class UDoveSlideQuadrupedAnimInstance
{
public:
    std::uint8_t Pad_0000[0x260]; // 0x0000
    std::uint8_t bUseReverseRetarget; // 0x0260 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UDoveSlideQuadrupedAnimInstance, bUseReverseRetarget) == 608, "Offset mismatch for UDoveSlideQuadrupedAnimInstance::bUseReverseRetarget");

// /Script/CosmeticCompanionsRuntime.DustyWingOtherAnimInstance
// Kind: Class; super: AnimInstance
class UDustyWingOtherAnimInstance
{
public:
    std::uint8_t Pad_0000[0x260]; // 0x0000
    std::uint8_t bCustomEmote; // 0x0260 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UDustyWingOtherAnimInstance, bCustomEmote) == 608, "Offset mismatch for UDustyWingOtherAnimInstance::bCustomEmote");

// /Script/CosmeticCompanionsRuntime.FinFlakeAnimInstance
// Kind: Class; super: FortPlayerCompanionAnimInstance
class UFinFlakeAnimInstance
{
public:
    std::uint8_t Pad_0000[0x640]; // 0x0000
    double LookAtPitchAdjusted; // 0x0640 (Size: 0x8, Type: DoubleProperty)
    double LookAtYawAdjusted; // 0x0648 (Size: 0x8, Type: DoubleProperty)
    double CompanionAcceleration; // 0x0650 (Size: 0x8, Type: DoubleProperty)
    double CompanionAccelerationDelta; // 0x0658 (Size: 0x8, Type: DoubleProperty)
    float QuickStopThreshold; // 0x0660 (Size: 0x4, Type: FloatProperty)
    float TurboPlayerSpeedThreshold; // 0x0664 (Size: 0x4, Type: FloatProperty)
    float TurboPlayerSpeedDeltaThreshold; // 0x0668 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bTriggerTurbo; // 0x066C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsHappyReactionActive; // 0x066D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsEmoteActive; // 0x066E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanPlayPoseOffset; // 0x066F (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTriggerPoseOffset; // 0x0670 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTriggerStop; // 0x0671 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTriggerStopToStart; // 0x0672 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAnticFlag; // 0x0673 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTriggerAntic; // 0x0674 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bQuickStop; // 0x0675 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0676
    double FaceAdditiveAlpha; // 0x0678 (Size: 0x8, Type: DoubleProperty)
    double AimOffsetAlpha; // 0x0680 (Size: 0x8, Type: DoubleProperty)
    double PlayRate; // 0x0688 (Size: 0x8, Type: DoubleProperty)
    double MovementAdditivesAlpha; // 0x0690 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bCanAnticsPlay; // 0x0698 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableChildAdditive; // 0x0699 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x069A
    float ChildAdditiveAlpha; // 0x069C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFinFlakeAnimInstance, LookAtPitchAdjusted) == 1600, "Offset mismatch for UFinFlakeAnimInstance::LookAtPitchAdjusted");
static_assert(offsetof(UFinFlakeAnimInstance, LookAtYawAdjusted) == 1608, "Offset mismatch for UFinFlakeAnimInstance::LookAtYawAdjusted");
static_assert(offsetof(UFinFlakeAnimInstance, CompanionAcceleration) == 1616, "Offset mismatch for UFinFlakeAnimInstance::CompanionAcceleration");
static_assert(offsetof(UFinFlakeAnimInstance, CompanionAccelerationDelta) == 1624, "Offset mismatch for UFinFlakeAnimInstance::CompanionAccelerationDelta");
static_assert(offsetof(UFinFlakeAnimInstance, QuickStopThreshold) == 1632, "Offset mismatch for UFinFlakeAnimInstance::QuickStopThreshold");
static_assert(offsetof(UFinFlakeAnimInstance, TurboPlayerSpeedThreshold) == 1636, "Offset mismatch for UFinFlakeAnimInstance::TurboPlayerSpeedThreshold");
static_assert(offsetof(UFinFlakeAnimInstance, TurboPlayerSpeedDeltaThreshold) == 1640, "Offset mismatch for UFinFlakeAnimInstance::TurboPlayerSpeedDeltaThreshold");
static_assert(offsetof(UFinFlakeAnimInstance, bTriggerTurbo) == 1644, "Offset mismatch for UFinFlakeAnimInstance::bTriggerTurbo");
static_assert(offsetof(UFinFlakeAnimInstance, bIsHappyReactionActive) == 1645, "Offset mismatch for UFinFlakeAnimInstance::bIsHappyReactionActive");
static_assert(offsetof(UFinFlakeAnimInstance, bIsEmoteActive) == 1646, "Offset mismatch for UFinFlakeAnimInstance::bIsEmoteActive");
static_assert(offsetof(UFinFlakeAnimInstance, bCanPlayPoseOffset) == 1647, "Offset mismatch for UFinFlakeAnimInstance::bCanPlayPoseOffset");
static_assert(offsetof(UFinFlakeAnimInstance, bTriggerPoseOffset) == 1648, "Offset mismatch for UFinFlakeAnimInstance::bTriggerPoseOffset");
static_assert(offsetof(UFinFlakeAnimInstance, bTriggerStop) == 1649, "Offset mismatch for UFinFlakeAnimInstance::bTriggerStop");
static_assert(offsetof(UFinFlakeAnimInstance, bTriggerStopToStart) == 1650, "Offset mismatch for UFinFlakeAnimInstance::bTriggerStopToStart");
static_assert(offsetof(UFinFlakeAnimInstance, bAnticFlag) == 1651, "Offset mismatch for UFinFlakeAnimInstance::bAnticFlag");
static_assert(offsetof(UFinFlakeAnimInstance, bTriggerAntic) == 1652, "Offset mismatch for UFinFlakeAnimInstance::bTriggerAntic");
static_assert(offsetof(UFinFlakeAnimInstance, bQuickStop) == 1653, "Offset mismatch for UFinFlakeAnimInstance::bQuickStop");
static_assert(offsetof(UFinFlakeAnimInstance, FaceAdditiveAlpha) == 1656, "Offset mismatch for UFinFlakeAnimInstance::FaceAdditiveAlpha");
static_assert(offsetof(UFinFlakeAnimInstance, AimOffsetAlpha) == 1664, "Offset mismatch for UFinFlakeAnimInstance::AimOffsetAlpha");
static_assert(offsetof(UFinFlakeAnimInstance, PlayRate) == 1672, "Offset mismatch for UFinFlakeAnimInstance::PlayRate");
static_assert(offsetof(UFinFlakeAnimInstance, MovementAdditivesAlpha) == 1680, "Offset mismatch for UFinFlakeAnimInstance::MovementAdditivesAlpha");
static_assert(offsetof(UFinFlakeAnimInstance, bCanAnticsPlay) == 1688, "Offset mismatch for UFinFlakeAnimInstance::bCanAnticsPlay");
static_assert(offsetof(UFinFlakeAnimInstance, bEnableChildAdditive) == 1689, "Offset mismatch for UFinFlakeAnimInstance::bEnableChildAdditive");
static_assert(offsetof(UFinFlakeAnimInstance, ChildAdditiveAlpha) == 1692, "Offset mismatch for UFinFlakeAnimInstance::ChildAdditiveAlpha");

// /Script/CosmeticCompanionsRuntime.FortAnimNotifyState_CompanionRandomizeNextSection
// Kind: Class; super: FortAnimNotifyState_RandomizeNextSection
class UFortAnimNotifyState_CompanionRandomizeNextSection
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    std::uint8_t bIsLoopingEmote; // 0x0048 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortAnimNotifyState_CompanionRandomizeNextSection, bIsLoopingEmote) == 72, "Offset mismatch for UFortAnimNotifyState_CompanionRandomizeNextSection::bIsLoopingEmote");

// /Script/CosmeticCompanionsRuntime.FortAnimNotify_PlayCompanionReactFX
// Kind: Class; super: AnimNotify_PlayNiagaraEffect
class UFortAnimNotify_PlayCompanionReactFX
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* Template; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t LocationOffset[0x18]; // 0x0040 (Size: 0x18, Type: StructProperty)
    std::uint8_t RotationOffset[0x18]; // 0x0058 (Size: 0x18, Type: StructProperty)
    std::uint8_t Scale[0x18]; // 0x0070 (Size: 0x18, Type: StructProperty)
    std::uint8_t bAbsoluteScale; // 0x0088 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x37]; // 0x0089
    std::uint8_t Attached; // 0x00C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x00C1
    FName SocketName; // 0x00C4 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UFortAnimNotify_PlayCompanionReactFX, Template) == 56, "Offset mismatch for UFortAnimNotify_PlayCompanionReactFX::Template");
static_assert(offsetof(UFortAnimNotify_PlayCompanionReactFX, LocationOffset) == 64, "Offset mismatch for UFortAnimNotify_PlayCompanionReactFX::LocationOffset");
static_assert(offsetof(UFortAnimNotify_PlayCompanionReactFX, RotationOffset) == 88, "Offset mismatch for UFortAnimNotify_PlayCompanionReactFX::RotationOffset");
static_assert(offsetof(UFortAnimNotify_PlayCompanionReactFX, Scale) == 112, "Offset mismatch for UFortAnimNotify_PlayCompanionReactFX::Scale");
static_assert(offsetof(UFortAnimNotify_PlayCompanionReactFX, bAbsoluteScale) == 136, "Offset mismatch for UFortAnimNotify_PlayCompanionReactFX::bAbsoluteScale");
static_assert(offsetof(UFortAnimNotify_PlayCompanionReactFX, Attached) == 192, "Offset mismatch for UFortAnimNotify_PlayCompanionReactFX::Attached");
static_assert(offsetof(UFortAnimNotify_PlayCompanionReactFX, SocketName) == 196, "Offset mismatch for UFortAnimNotify_PlayCompanionReactFX::SocketName");

// /Script/CosmeticCompanionsRuntime.FortCompanionMannequin
// Kind: Class; super: SkeletalMeshActor
class UFortCompanionMannequin
{
public:
    std::uint8_t Pad_0000[0x2E0]; // 0x0000
    TArray<void*> CosmeticMeshComponents; // 0x02E0 (Size: 0x10, Type: ArrayProperty)
    FMulticastInlineDelegate OnMannequinCustomizationFinished; // 0x02F0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* CosmeticComponent; // 0x0300 (Size: 0x8, Type: ObjectProperty)
    void* CompanionItemDefinition; // 0x0308 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> OverrideVariants; // 0x0310 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bEnableAnimations; // 0x0320 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0321
    TArray<void*> SkeletalMeshComponentsSnapshot; // 0x0328 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bMarkForceCosmeticInitialization; // 0x0338 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasInitialized; // 0x0339 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortCompanionMannequin, CosmeticMeshComponents) == 736, "Offset mismatch for UFortCompanionMannequin::CosmeticMeshComponents");
static_assert(offsetof(UFortCompanionMannequin, OnMannequinCustomizationFinished) == 752, "Offset mismatch for UFortCompanionMannequin::OnMannequinCustomizationFinished");
static_assert(offsetof(UFortCompanionMannequin, CosmeticComponent) == 768, "Offset mismatch for UFortCompanionMannequin::CosmeticComponent");
static_assert(offsetof(UFortCompanionMannequin, CompanionItemDefinition) == 776, "Offset mismatch for UFortCompanionMannequin::CompanionItemDefinition");
static_assert(offsetof(UFortCompanionMannequin, OverrideVariants) == 784, "Offset mismatch for UFortCompanionMannequin::OverrideVariants");
static_assert(offsetof(UFortCompanionMannequin, bEnableAnimations) == 800, "Offset mismatch for UFortCompanionMannequin::bEnableAnimations");
static_assert(offsetof(UFortCompanionMannequin, SkeletalMeshComponentsSnapshot) == 808, "Offset mismatch for UFortCompanionMannequin::SkeletalMeshComponentsSnapshot");
static_assert(offsetof(UFortCompanionMannequin, bMarkForceCosmeticInitialization) == 824, "Offset mismatch for UFortCompanionMannequin::bMarkForceCosmeticInitialization");
static_assert(offsetof(UFortCompanionMannequin, bHasInitialized) == 825, "Offset mismatch for UFortCompanionMannequin::bHasInitialized");

// /Script/CosmeticCompanionsRuntime.FortObjectiveProcessor_EarnCompanionXP
// Kind: Class; super: FortObjectiveProcessor
class UFortObjectiveProcessor_EarnCompanionXP
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* OwningProcessorSubsystem; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortObjectiveProcessor_EarnCompanionXP, OwningProcessorSubsystem) == 56, "Offset mismatch for UFortObjectiveProcessor_EarnCompanionXP::OwningProcessorSubsystem");

// /Script/CosmeticCompanionsRuntime.FortPlayerCompanionAnimInstance
// Kind: Class; super: FortBaseAnimInstance
class UFortPlayerCompanionAnimInstance
{
public:
    std::uint8_t Pad_0000[0x338]; // 0x0000
    void* AnimExtension; // 0x0338 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t IdleBreaksTimer[0x24]; // 0x0340 (Size: 0x24, Type: StructProperty)
    std::uint8_t AnticsTimer[0x24]; // 0x0364 (Size: 0x24, Type: StructProperty)
    std::uint8_t AuxiliaryTimer1[0x24]; // 0x0388 (Size: 0x24, Type: StructProperty)
    std::uint8_t AuxiliaryTimer2[0x24]; // 0x03AC (Size: 0x24, Type: StructProperty)
    std::uint8_t AuxiliaryTimer3[0x24]; // 0x03D0 (Size: 0x24, Type: StructProperty)
    std::uint8_t AuxiliaryTimer4[0x24]; // 0x03F4 (Size: 0x24, Type: StructProperty)
    std::uint8_t RandomizeMontageSectionInput[0x18]; // 0x0418 (Size: 0x18, Type: StructProperty)
    float IdleBreakTimeMin; // 0x0430 (Size: 0x4, Type: FloatProperty)
    float IdleBreakTimeMax; // 0x0434 (Size: 0x4, Type: FloatProperty)
    std::int32_t IdleBreakCount; // 0x0438 (Size: 0x4, Type: IntProperty)
    float AnticsPreviewActorInverseTimeScale; // 0x043C (Size: 0x4, Type: FloatProperty)
    float LookAtPitchClamp; // 0x0440 (Size: 0x4, Type: FloatProperty)
    float LookAtYawClamp; // 0x0444 (Size: 0x4, Type: FloatProperty)
    float LookAtYawReset; // 0x0448 (Size: 0x4, Type: FloatProperty)
    float FrontPreviewActorYaw; // 0x044C (Size: 0x4, Type: FloatProperty)
    float FrontPreviewActorPitch; // 0x0450 (Size: 0x4, Type: FloatProperty)
    std::int32_t LowFidelityLODThreshold; // 0x0454 (Size: 0x4, Type: IntProperty)
    std::uint8_t InteractionBone[0x4]; // 0x0458 (Size: 0x4, Type: NameProperty)
    std::uint8_t InteractionReferenceBone[0x4]; // 0x045C (Size: 0x4, Type: NameProperty)
    float InteractionPelvisAdjust; // 0x0460 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0464
    void* CompanionLeader; // 0x0468 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t CompanionLocation[0x18]; // 0x0470 (Size: 0x18, Type: StructProperty)
    std::uint8_t CompanionRotation[0x18]; // 0x0488 (Size: 0x18, Type: StructProperty)
    float CompanionSpeed2D; // 0x04A0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x04A4
    std::uint8_t CompanionVelocity[0x18]; // 0x04A8 (Size: 0x18, Type: StructProperty)
    std::uint8_t GoalLocation[0x18]; // 0x04C0 (Size: 0x18, Type: StructProperty)
    std::uint8_t GoalRotation[0x18]; // 0x04D8 (Size: 0x18, Type: StructProperty)
    std::uint8_t PlayerLocation[0x18]; // 0x04F0 (Size: 0x18, Type: StructProperty)
    float PlayerSpeed2D; // 0x0508 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0003[0x4]; // 0x050C
    std::uint8_t PlayerVelocity[0x18]; // 0x0510 (Size: 0x18, Type: StructProperty)
    float LookAtPitch; // 0x0528 (Size: 0x4, Type: FloatProperty)
    float LookAtYaw; // 0x052C (Size: 0x4, Type: FloatProperty)
    std::uint8_t Mood; // 0x0530 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bTriggerIdleBreak; // 0x0531 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x2]; // 0x0532
    std::int32_t TriggerIdleBreakNumber; // 0x0534 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsPlayingEmote; // 0x0538 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsPreviewActor; // 0x0539 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x2]; // 0x053A
    std::int32_t PreviewActorIndex; // 0x053C (Size: 0x4, Type: IntProperty)
    std::uint8_t bUseLowFidelity; // 0x0540 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bJustSpawned; // 0x0541 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x6]; // 0x0542
    void* AnimTable; // 0x0548 (Size: 0x8, Type: ObjectProperty)
    void* OnSpawnedProxy; // 0x0550 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t OnSpawnedChooser[0x20]; // 0x0558 (Size: 0x20, Type: StructProperty)
    void* AnticsSelectionProxy; // 0x0578 (Size: 0x8, Type: ObjectProperty)
    void* AnticsSelectionChooser; // 0x0580 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t AnticSequenceInfo[0x10]; // 0x0588 (Size: 0x10, Type: StructProperty)
    float CompanionDirection; // 0x0598 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsMoving; // 0x059C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0007[0x3]; // 0x059D
    float MovingThreshold; // 0x05A0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsCompanionStopping; // 0x05A4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsMoodWorried; // 0x05A5 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsMoodCombat; // 0x05A6 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsMoodBored; // 0x05A7 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsMoodDefault; // 0x05A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsEmoteCurveA; // 0x05A9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsEmoteCurveB; // 0x05AA (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOnlyAffectSkeletonRootBone; // 0x05AB (Size: 0x1, Type: BoolProperty)
    float MaxStepHeight; // 0x05AC (Size: 0x4, Type: FloatProperty)
    float MaxSkeletonRootBoneRotationAngle; // 0x05B0 (Size: 0x4, Type: FloatProperty)
    float AudioEnvelopeValue; // 0x05B4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsVOActive; // 0x05B8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOpenJawWithVO; // 0x05B9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0008[0x2]; // 0x05BA
    float JawOpenValue; // 0x05BC (Size: 0x4, Type: FloatProperty)
    std::uint8_t CurrentLocomotionMovementType; // 0x05C0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0009[0x3]; // 0x05C1
    float RunToSprintThreshold; // 0x05C4 (Size: 0x4, Type: FloatProperty)
    float SprintToRunThreshold; // 0x05C8 (Size: 0x4, Type: FloatProperty)
    float TrotToRunThreshold; // 0x05CC (Size: 0x4, Type: FloatProperty)
    float RunToTrotThreshold; // 0x05D0 (Size: 0x4, Type: FloatProperty)
    float WalkToTrotThreshold; // 0x05D4 (Size: 0x4, Type: FloatProperty)
    float TrotToWalkThreshold; // 0x05D8 (Size: 0x4, Type: FloatProperty)
    float LocomotionPlayRate; // 0x05DC (Size: 0x4, Type: FloatProperty)
    float LocomotionScaleMultiplierWeight; // 0x05E0 (Size: 0x4, Type: FloatProperty)
    float LocomotionPlayRateMultiplier; // 0x05E4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t SlopeMatchingRotationOffset[0x18]; // 0x05E8 (Size: 0x18, Type: StructProperty)
    float SlopeMatchingWeight; // 0x0600 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_000A[0x2C]; // 0x0604
    void* SlopeWarpingComponent; // 0x0630 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortPlayerCompanionAnimInstance, AnimExtension) == 824, "Offset mismatch for UFortPlayerCompanionAnimInstance::AnimExtension");
static_assert(offsetof(UFortPlayerCompanionAnimInstance, IdleBreaksTimer) == 832, "Offset mismatch for UFortPlayerCompanionAnimInstance::IdleBreaksTimer");
static_assert(offsetof(UFortPlayerCompanionAnimInstance, AnticsTimer) == 868, "Offset mismatch for UFortPlayerCompanionAnimInstance::AnticsTimer");
static_assert(offsetof(UFortPlayerCompanionAnimInstance, AuxiliaryTimer1) == 904, "Offset mismatch for UFortPlayerCompanionAnimInstance::AuxiliaryTimer1");
static_assert(offsetof(UFortPlayerCompanionAnimInstance, AuxiliaryTimer2) == 940, "Offset mismatch for UFortPlayerCompanionAnimInstance::AuxiliaryTimer2");
static_assert(offsetof(UFortPlayerCompanionAnimInstance, AuxiliaryTimer3) == 976, "Offset mismatch for UFortPlayerCompanionAnimInstance::AuxiliaryTimer3");
static_assert(offsetof(UFortPlayerCompanionAnimInstance, AuxiliaryTimer4) == 1012, "Offset mismatch for UFortPlayerCompanionAnimInstance::AuxiliaryTimer4");
static_assert(offsetof(UFortPlayerCompanionAnimInstance, RandomizeMontageSectionInput) == 1048, "Offset mismatch for UFortPlayerCompanionAnimInstance::RandomizeMontageSectionInput");
static_assert(offsetof(UFortPlayerCompanionAnimInstance, IdleBreakTimeMin) == 1072, "Offset mismatch for UFortPlayerCompanionAnimInstance::IdleBreakTimeMin");
static_assert(offsetof(UFortPlayerCompanionAnimInstance, IdleBreakTimeMax) == 1076, "Offset mismatch for UFortPlayerCompanionAnimInstance::IdleBreakTimeMax");
static_assert(offsetof(UFortPlayerCompanionAnimInstance, IdleBreakCount) == 1080, "Offset mismatch for UFortPlayerCompanionAnimInstance::IdleBreakCount");
static_assert(offsetof(UFortPlayerCompanionAnimInstance, AnticsPreviewActorInverseTimeScale) == 1084, "Offset mismatch for UFortPlayerCompanionAnimInstance::AnticsPreviewActorInverseTimeScale");
static_assert(offsetof(UFortPlayerCompanionAnimInstance, LookAtPitchClamp) == 1088, "Offset mismatch for UFortPlayerCompanionAnimInstance::LookAtPitchClamp");
static_assert(offsetof(UFortPlayerCompanionAnimInstance, LookAtYawClamp) == 1092, "Offset mismatch for UFortPlayerCompanionAnimInstance::LookAtYawClamp");
static_assert(offsetof(UFortPlayerCompanionAnimInstance, LookAtYawReset) == 1096, "Offset mismatch for UFortPlayerCompanionAnimInstance::LookAtYawReset");
static_assert(offsetof(UFortPlayerCompanionAnimInstance, FrontPreviewActorYaw) == 1100, "Offset mismatch for UFortPlayerCompanionAnimInstance::FrontPreviewActorYaw");
static_assert(offsetof(UFortPlayerCompanionAnimInstance, FrontPreviewActorPitch) == 1104, "Offset mismatch for UFortPlayerCompanionAnimInstance::FrontPreviewActorPitch");
static_assert(offsetof(UFortPlayerCompanionAnimInstance, LowFidelityLODThreshold) == 1108, "Offset mismatch for UFortPlayerCompanionAnimInstance::LowFidelityLODThreshold");
static_assert(offsetof(UFortPlayerCompanionAnimInstance, InteractionBone) == 1112, "Offset mismatch for UFortPlayerCompanionAnimInstance::InteractionBone");
static_assert(offsetof(UFortPlayerCompanionAnimInstance, InteractionReferenceBone) == 1116, "Offset mismatch for UFortPlayerCompanionAnimInstance::InteractionReferenceBone");
static_assert(offsetof(UFortPlayerCompanionAnimInstance, InteractionPelvisAdjust) == 1120, "Offset mismatch for UFortPlayerCompanionAnimInstance::InteractionPelvisAdjust");
static_assert(offsetof(UFortPlayerCompanionAnimInstance, CompanionLeader) == 1128, "Offset mismatch for UFortPlayerCompanionAnimInstance::CompanionLeader");
static_assert(offsetof(UFortPlayerCompanionAnimInstance, CompanionLocation) == 1136, "Offset mismatch for UFortPlayerCompanionAnimInstance::CompanionLocation");
static_assert(offsetof(UFortPlayerCompanionAnimInstance, CompanionRotation) == 1160, "Offset mismatch for UFortPlayerCompanionAnimInstance::CompanionRotation");
static_assert(offsetof(UFortPlayerCompanionAnimInstance, CompanionSpeed2D) == 1184, "Offset mismatch for UFortPlayerCompanionAnimInstance::CompanionSpeed2D");
static_assert(offsetof(UFortPlayerCompanionAnimInstance, CompanionVelocity) == 1192, "Offset mismatch for UFortPlayerCompanionAnimInstance::CompanionVelocity");
static_assert(offsetof(UFortPlayerCompanionAnimInstance, GoalLocation) == 1216, "Offset mismatch for UFortPlayerCompanionAnimInstance::GoalLocation");
static_assert(offsetof(UFortPlayerCompanionAnimInstance, GoalRotation) == 1240, "Offset mismatch for UFortPlayerCompanionAnimInstance::GoalRotation");
static_assert(offsetof(UFortPlayerCompanionAnimInstance, PlayerLocation) == 1264, "Offset mismatch for UFortPlayerCompanionAnimInstance::PlayerLocation");
static_assert(offsetof(UFortPlayerCompanionAnimInstance, PlayerSpeed2D) == 1288, "Offset mismatch for UFortPlayerCompanionAnimInstance::PlayerSpeed2D");
static_assert(offsetof(UFortPlayerCompanionAnimInstance, PlayerVelocity) == 1296, "Offset mismatch for UFortPlayerCompanionAnimInstance::PlayerVelocity");
static_assert(offsetof(UFortPlayerCompanionAnimInstance, LookAtPitch) == 1320, "Offset mismatch for UFortPlayerCompanionAnimInstance::LookAtPitch");
static_assert(offsetof(UFortPlayerCompanionAnimInstance, LookAtYaw) == 1324, "Offset mismatch for UFortPlayerCompanionAnimInstance::LookAtYaw");
static_assert(offsetof(UFortPlayerCompanionAnimInstance, Mood) == 1328, "Offset mismatch for UFortPlayerCompanionAnimInstance::Mood");
static_assert(offsetof(UFortPlayerCompanionAnimInstance, bTriggerIdleBreak) == 1329, "Offset mismatch for UFortPlayerCompanionAnimInstance::bTriggerIdleBreak");
static_assert(offsetof(UFortPlayerCompanionAnimInstance, TriggerIdleBreakNumber) == 1332, "Offset mismatch for UFortPlayerCompanionAnimInstance::TriggerIdleBreakNumber");
static_assert(offsetof(UFortPlayerCompanionAnimInstance, bIsPlayingEmote) == 1336, "Offset mismatch for UFortPlayerCompanionAnimInstance::bIsPlayingEmote");
static_assert(offsetof(UFortPlayerCompanionAnimInstance, bIsPreviewActor) == 1337, "Offset mismatch for UFortPlayerCompanionAnimInstance::bIsPreviewActor");
static_assert(offsetof(UFortPlayerCompanionAnimInstance, PreviewActorIndex) == 1340, "Offset mismatch for UFortPlayerCompanionAnimInstance::PreviewActorIndex");
static_assert(offsetof(UFortPlayerCompanionAnimInstance, bUseLowFidelity) == 1344, "Offset mismatch for UFortPlayerCompanionAnimInstance::bUseLowFidelity");
static_assert(offsetof(UFortPlayerCompanionAnimInstance, bJustSpawned) == 1345, "Offset mismatch for UFortPlayerCompanionAnimInstance::bJustSpawned");
static_assert(offsetof(UFortPlayerCompanionAnimInstance, AnimTable) == 1352, "Offset mismatch for UFortPlayerCompanionAnimInstance::AnimTable");
static_assert(offsetof(UFortPlayerCompanionAnimInstance, OnSpawnedProxy) == 1360, "Offset mismatch for UFortPlayerCompanionAnimInstance::OnSpawnedProxy");
static_assert(offsetof(UFortPlayerCompanionAnimInstance, OnSpawnedChooser) == 1368, "Offset mismatch for UFortPlayerCompanionAnimInstance::OnSpawnedChooser");
static_assert(offsetof(UFortPlayerCompanionAnimInstance, AnticsSelectionProxy) == 1400, "Offset mismatch for UFortPlayerCompanionAnimInstance::AnticsSelectionProxy");
static_assert(offsetof(UFortPlayerCompanionAnimInstance, AnticsSelectionChooser) == 1408, "Offset mismatch for UFortPlayerCompanionAnimInstance::AnticsSelectionChooser");
static_assert(offsetof(UFortPlayerCompanionAnimInstance, AnticSequenceInfo) == 1416, "Offset mismatch for UFortPlayerCompanionAnimInstance::AnticSequenceInfo");
static_assert(offsetof(UFortPlayerCompanionAnimInstance, CompanionDirection) == 1432, "Offset mismatch for UFortPlayerCompanionAnimInstance::CompanionDirection");
static_assert(offsetof(UFortPlayerCompanionAnimInstance, bIsMoving) == 1436, "Offset mismatch for UFortPlayerCompanionAnimInstance::bIsMoving");
static_assert(offsetof(UFortPlayerCompanionAnimInstance, MovingThreshold) == 1440, "Offset mismatch for UFortPlayerCompanionAnimInstance::MovingThreshold");
static_assert(offsetof(UFortPlayerCompanionAnimInstance, bIsCompanionStopping) == 1444, "Offset mismatch for UFortPlayerCompanionAnimInstance::bIsCompanionStopping");
static_assert(offsetof(UFortPlayerCompanionAnimInstance, bIsMoodWorried) == 1445, "Offset mismatch for UFortPlayerCompanionAnimInstance::bIsMoodWorried");
static_assert(offsetof(UFortPlayerCompanionAnimInstance, bIsMoodCombat) == 1446, "Offset mismatch for UFortPlayerCompanionAnimInstance::bIsMoodCombat");
static_assert(offsetof(UFortPlayerCompanionAnimInstance, bIsMoodBored) == 1447, "Offset mismatch for UFortPlayerCompanionAnimInstance::bIsMoodBored");
static_assert(offsetof(UFortPlayerCompanionAnimInstance, bIsMoodDefault) == 1448, "Offset mismatch for UFortPlayerCompanionAnimInstance::bIsMoodDefault");
static_assert(offsetof(UFortPlayerCompanionAnimInstance, bIsEmoteCurveA) == 1449, "Offset mismatch for UFortPlayerCompanionAnimInstance::bIsEmoteCurveA");
static_assert(offsetof(UFortPlayerCompanionAnimInstance, bIsEmoteCurveB) == 1450, "Offset mismatch for UFortPlayerCompanionAnimInstance::bIsEmoteCurveB");
static_assert(offsetof(UFortPlayerCompanionAnimInstance, bOnlyAffectSkeletonRootBone) == 1451, "Offset mismatch for UFortPlayerCompanionAnimInstance::bOnlyAffectSkeletonRootBone");
static_assert(offsetof(UFortPlayerCompanionAnimInstance, MaxStepHeight) == 1452, "Offset mismatch for UFortPlayerCompanionAnimInstance::MaxStepHeight");
static_assert(offsetof(UFortPlayerCompanionAnimInstance, MaxSkeletonRootBoneRotationAngle) == 1456, "Offset mismatch for UFortPlayerCompanionAnimInstance::MaxSkeletonRootBoneRotationAngle");
static_assert(offsetof(UFortPlayerCompanionAnimInstance, AudioEnvelopeValue) == 1460, "Offset mismatch for UFortPlayerCompanionAnimInstance::AudioEnvelopeValue");
static_assert(offsetof(UFortPlayerCompanionAnimInstance, bIsVOActive) == 1464, "Offset mismatch for UFortPlayerCompanionAnimInstance::bIsVOActive");
static_assert(offsetof(UFortPlayerCompanionAnimInstance, bOpenJawWithVO) == 1465, "Offset mismatch for UFortPlayerCompanionAnimInstance::bOpenJawWithVO");
static_assert(offsetof(UFortPlayerCompanionAnimInstance, JawOpenValue) == 1468, "Offset mismatch for UFortPlayerCompanionAnimInstance::JawOpenValue");
static_assert(offsetof(UFortPlayerCompanionAnimInstance, CurrentLocomotionMovementType) == 1472, "Offset mismatch for UFortPlayerCompanionAnimInstance::CurrentLocomotionMovementType");
static_assert(offsetof(UFortPlayerCompanionAnimInstance, RunToSprintThreshold) == 1476, "Offset mismatch for UFortPlayerCompanionAnimInstance::RunToSprintThreshold");
static_assert(offsetof(UFortPlayerCompanionAnimInstance, SprintToRunThreshold) == 1480, "Offset mismatch for UFortPlayerCompanionAnimInstance::SprintToRunThreshold");
static_assert(offsetof(UFortPlayerCompanionAnimInstance, TrotToRunThreshold) == 1484, "Offset mismatch for UFortPlayerCompanionAnimInstance::TrotToRunThreshold");
static_assert(offsetof(UFortPlayerCompanionAnimInstance, RunToTrotThreshold) == 1488, "Offset mismatch for UFortPlayerCompanionAnimInstance::RunToTrotThreshold");
static_assert(offsetof(UFortPlayerCompanionAnimInstance, WalkToTrotThreshold) == 1492, "Offset mismatch for UFortPlayerCompanionAnimInstance::WalkToTrotThreshold");
static_assert(offsetof(UFortPlayerCompanionAnimInstance, TrotToWalkThreshold) == 1496, "Offset mismatch for UFortPlayerCompanionAnimInstance::TrotToWalkThreshold");
static_assert(offsetof(UFortPlayerCompanionAnimInstance, LocomotionPlayRate) == 1500, "Offset mismatch for UFortPlayerCompanionAnimInstance::LocomotionPlayRate");
static_assert(offsetof(UFortPlayerCompanionAnimInstance, LocomotionScaleMultiplierWeight) == 1504, "Offset mismatch for UFortPlayerCompanionAnimInstance::LocomotionScaleMultiplierWeight");
static_assert(offsetof(UFortPlayerCompanionAnimInstance, LocomotionPlayRateMultiplier) == 1508, "Offset mismatch for UFortPlayerCompanionAnimInstance::LocomotionPlayRateMultiplier");
static_assert(offsetof(UFortPlayerCompanionAnimInstance, SlopeMatchingRotationOffset) == 1512, "Offset mismatch for UFortPlayerCompanionAnimInstance::SlopeMatchingRotationOffset");
static_assert(offsetof(UFortPlayerCompanionAnimInstance, SlopeMatchingWeight) == 1536, "Offset mismatch for UFortPlayerCompanionAnimInstance::SlopeMatchingWeight");
static_assert(offsetof(UFortPlayerCompanionAnimInstance, SlopeWarpingComponent) == 1584, "Offset mismatch for UFortPlayerCompanionAnimInstance::SlopeWarpingComponent");

// /Script/CosmeticCompanionsRuntime.FortPlayerCompanionAnimInterface
// Kind: Class; super: Interface
class UFortPlayerCompanionAnimInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CosmeticCompanionsRuntime.FortPlayerCompanionCosmeticComponent
// Kind: Class; super: ActorComponent
class UFortPlayerCompanionCosmeticComponent
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t bFootstepFXDisabled; // 0x00E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x4F]; // 0x00E1
    void* CompanionActor; // 0x0130 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> PlayerPawn; // 0x0138 (Size: 0x8, Type: WeakObjectProperty)
    void* CompanionMainItemDef; // 0x0140 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> CharacterPartMeshComponents; // 0x0148 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CompanionEmotes; // 0x0158 (Size: 0x10, Type: ArrayProperty)
    void* ReactionChooserProxy; // 0x0168 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x28]; // 0x0170
    void* AdditionalReactionChooserTable; // 0x0198 (Size: 0x8, Type: ObjectProperty)
    void* InteractionSceneAsset; // 0x01A0 (Size: 0x8, Type: ObjectProperty)
    void* AnimDataAsset; // 0x01A8 (Size: 0x8, Type: ObjectProperty)
    void* AnimTableAsset; // 0x01B0 (Size: 0x8, Type: ObjectProperty)
    void* AnimationSettingsOverride; // 0x01B8 (Size: 0x8, Type: ObjectProperty)
    void* ReactFX; // 0x01C0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ReactFXAttachmentParameters[0x58]; // 0x01C8 (Size: 0x58, Type: StructProperty)
    TArray<void*> CharacterParts; // 0x0220 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> DesiredCosmeticParts; // 0x0230 (Size: 0x10, Type: ArrayProperty)
    FMulticastInlineDelegate OnCosmeticsInitialized; // 0x0240 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FString CompanionName; // 0x0250 (Size: 0x10, Type: StrProperty)
    std::uint8_t OverrideMaterial[0x68]; // 0x0260 (Size: 0x68, Type: StructProperty)
    TMap<void*, void*> MaterialOverrideStateMap; // 0x02C8 (Size: 0x10, Type: MapProperty)
    TArray<void*> VFXComponents; // 0x02D8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SampleItemDefs; // 0x02E8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SoftCompanionEmotes; // 0x02F8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PartModifiers; // 0x0308 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AddedComponents; // 0x0318 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t CachedCosmeticLoadout[0x50]; // 0x0328 (Size: 0x50, Type: OptionalProperty)
    TWeakObjectPtr<void> CachedCompanionSubsystem; // 0x0378 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UFortPlayerCompanionCosmeticComponent, bFootstepFXDisabled) == 224, "Offset mismatch for UFortPlayerCompanionCosmeticComponent::bFootstepFXDisabled");
static_assert(offsetof(UFortPlayerCompanionCosmeticComponent, CompanionActor) == 304, "Offset mismatch for UFortPlayerCompanionCosmeticComponent::CompanionActor");
static_assert(offsetof(UFortPlayerCompanionCosmeticComponent, PlayerPawn) == 312, "Offset mismatch for UFortPlayerCompanionCosmeticComponent::PlayerPawn");
static_assert(offsetof(UFortPlayerCompanionCosmeticComponent, CompanionMainItemDef) == 320, "Offset mismatch for UFortPlayerCompanionCosmeticComponent::CompanionMainItemDef");
static_assert(offsetof(UFortPlayerCompanionCosmeticComponent, CharacterPartMeshComponents) == 328, "Offset mismatch for UFortPlayerCompanionCosmeticComponent::CharacterPartMeshComponents");
static_assert(offsetof(UFortPlayerCompanionCosmeticComponent, CompanionEmotes) == 344, "Offset mismatch for UFortPlayerCompanionCosmeticComponent::CompanionEmotes");
static_assert(offsetof(UFortPlayerCompanionCosmeticComponent, ReactionChooserProxy) == 360, "Offset mismatch for UFortPlayerCompanionCosmeticComponent::ReactionChooserProxy");
static_assert(offsetof(UFortPlayerCompanionCosmeticComponent, AdditionalReactionChooserTable) == 408, "Offset mismatch for UFortPlayerCompanionCosmeticComponent::AdditionalReactionChooserTable");
static_assert(offsetof(UFortPlayerCompanionCosmeticComponent, InteractionSceneAsset) == 416, "Offset mismatch for UFortPlayerCompanionCosmeticComponent::InteractionSceneAsset");
static_assert(offsetof(UFortPlayerCompanionCosmeticComponent, AnimDataAsset) == 424, "Offset mismatch for UFortPlayerCompanionCosmeticComponent::AnimDataAsset");
static_assert(offsetof(UFortPlayerCompanionCosmeticComponent, AnimTableAsset) == 432, "Offset mismatch for UFortPlayerCompanionCosmeticComponent::AnimTableAsset");
static_assert(offsetof(UFortPlayerCompanionCosmeticComponent, AnimationSettingsOverride) == 440, "Offset mismatch for UFortPlayerCompanionCosmeticComponent::AnimationSettingsOverride");
static_assert(offsetof(UFortPlayerCompanionCosmeticComponent, ReactFX) == 448, "Offset mismatch for UFortPlayerCompanionCosmeticComponent::ReactFX");
static_assert(offsetof(UFortPlayerCompanionCosmeticComponent, ReactFXAttachmentParameters) == 456, "Offset mismatch for UFortPlayerCompanionCosmeticComponent::ReactFXAttachmentParameters");
static_assert(offsetof(UFortPlayerCompanionCosmeticComponent, CharacterParts) == 544, "Offset mismatch for UFortPlayerCompanionCosmeticComponent::CharacterParts");
static_assert(offsetof(UFortPlayerCompanionCosmeticComponent, DesiredCosmeticParts) == 560, "Offset mismatch for UFortPlayerCompanionCosmeticComponent::DesiredCosmeticParts");
static_assert(offsetof(UFortPlayerCompanionCosmeticComponent, OnCosmeticsInitialized) == 576, "Offset mismatch for UFortPlayerCompanionCosmeticComponent::OnCosmeticsInitialized");
static_assert(offsetof(UFortPlayerCompanionCosmeticComponent, CompanionName) == 592, "Offset mismatch for UFortPlayerCompanionCosmeticComponent::CompanionName");
static_assert(offsetof(UFortPlayerCompanionCosmeticComponent, OverrideMaterial) == 608, "Offset mismatch for UFortPlayerCompanionCosmeticComponent::OverrideMaterial");
static_assert(offsetof(UFortPlayerCompanionCosmeticComponent, MaterialOverrideStateMap) == 712, "Offset mismatch for UFortPlayerCompanionCosmeticComponent::MaterialOverrideStateMap");
static_assert(offsetof(UFortPlayerCompanionCosmeticComponent, VFXComponents) == 728, "Offset mismatch for UFortPlayerCompanionCosmeticComponent::VFXComponents");
static_assert(offsetof(UFortPlayerCompanionCosmeticComponent, SampleItemDefs) == 744, "Offset mismatch for UFortPlayerCompanionCosmeticComponent::SampleItemDefs");
static_assert(offsetof(UFortPlayerCompanionCosmeticComponent, SoftCompanionEmotes) == 760, "Offset mismatch for UFortPlayerCompanionCosmeticComponent::SoftCompanionEmotes");
static_assert(offsetof(UFortPlayerCompanionCosmeticComponent, PartModifiers) == 776, "Offset mismatch for UFortPlayerCompanionCosmeticComponent::PartModifiers");
static_assert(offsetof(UFortPlayerCompanionCosmeticComponent, AddedComponents) == 792, "Offset mismatch for UFortPlayerCompanionCosmeticComponent::AddedComponents");
static_assert(offsetof(UFortPlayerCompanionCosmeticComponent, CachedCosmeticLoadout) == 808, "Offset mismatch for UFortPlayerCompanionCosmeticComponent::CachedCosmeticLoadout");
static_assert(offsetof(UFortPlayerCompanionCosmeticComponent, CachedCompanionSubsystem) == 888, "Offset mismatch for UFortPlayerCompanionCosmeticComponent::CachedCompanionSubsystem");

// /Script/CosmeticCompanionsRuntime.FortPlayerCompanionCosmeticInterface
// Kind: Class; super: Interface
class UFortPlayerCompanionCosmeticInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CosmeticCompanionsRuntime.FortPlayerCompanionPreviewActor
// Kind: Class; super: Actor
class UFortPlayerCompanionPreviewActor
{
public:
    std::uint8_t Pad_0000[0x290]; // 0x0000
    void* CosmeticComponent; // 0x0290 (Size: 0x8, Type: ObjectProperty)
    void* ContextualAnimSceneComponent; // 0x0298 (Size: 0x8, Type: ObjectProperty)
    void* Mesh; // 0x02A0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x24]; // 0x02A8
    float ZoomScaleFactorOffPawnPreview; // 0x02CC (Size: 0x4, Type: FloatProperty)
    std::uint8_t SpawnAnimMode; // 0x02D0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x7]; // 0x02D1
    std::uint8_t CameraFrameTargetBounds[0x20]; // 0x02D8 (Size: 0x20, Type: StructProperty)
    std::uint8_t bIsLockerActor; // 0x02F8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x7]; // 0x02F9
    std::uint8_t ContextTags[0x20]; // 0x0300 (Size: 0x20, Type: StructProperty)
    void* HologramMaterial; // 0x0320 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortPlayerCompanionPreviewActor, CosmeticComponent) == 656, "Offset mismatch for UFortPlayerCompanionPreviewActor::CosmeticComponent");
static_assert(offsetof(UFortPlayerCompanionPreviewActor, ContextualAnimSceneComponent) == 664, "Offset mismatch for UFortPlayerCompanionPreviewActor::ContextualAnimSceneComponent");
static_assert(offsetof(UFortPlayerCompanionPreviewActor, Mesh) == 672, "Offset mismatch for UFortPlayerCompanionPreviewActor::Mesh");
static_assert(offsetof(UFortPlayerCompanionPreviewActor, ZoomScaleFactorOffPawnPreview) == 716, "Offset mismatch for UFortPlayerCompanionPreviewActor::ZoomScaleFactorOffPawnPreview");
static_assert(offsetof(UFortPlayerCompanionPreviewActor, SpawnAnimMode) == 720, "Offset mismatch for UFortPlayerCompanionPreviewActor::SpawnAnimMode");
static_assert(offsetof(UFortPlayerCompanionPreviewActor, CameraFrameTargetBounds) == 728, "Offset mismatch for UFortPlayerCompanionPreviewActor::CameraFrameTargetBounds");
static_assert(offsetof(UFortPlayerCompanionPreviewActor, bIsLockerActor) == 760, "Offset mismatch for UFortPlayerCompanionPreviewActor::bIsLockerActor");
static_assert(offsetof(UFortPlayerCompanionPreviewActor, ContextTags) == 768, "Offset mismatch for UFortPlayerCompanionPreviewActor::ContextTags");
static_assert(offsetof(UFortPlayerCompanionPreviewActor, HologramMaterial) == 800, "Offset mismatch for UFortPlayerCompanionPreviewActor::HologramMaterial");

// /Script/CosmeticCompanionsRuntime.FortPlayerCompanionPreviewActorReactionFinishedDelegateWrapper
// Kind: Class; super: Object
class UFortPlayerCompanionPreviewActorReactionFinishedDelegateWrapper
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CosmeticCompanionsRuntime.FortPlayerCompanionPreviewLockerComponent
// Kind: Class; super: ActorComponent
class UFortPlayerCompanionPreviewLockerComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t CompanionActorClass[0x20]; // 0x00C0 (Size: 0x20, Type: SoftClassProperty)
    void* CompanionActor; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x00E8
    std::uint8_t LockerOffset[0x1]; // 0x00F0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortPlayerCompanionPreviewLockerComponent, CompanionActorClass) == 192, "Offset mismatch for UFortPlayerCompanionPreviewLockerComponent::CompanionActorClass");
static_assert(offsetof(UFortPlayerCompanionPreviewLockerComponent, CompanionActor) == 224, "Offset mismatch for UFortPlayerCompanionPreviewLockerComponent::CompanionActor");
static_assert(offsetof(UFortPlayerCompanionPreviewLockerComponent, LockerOffset) == 240, "Offset mismatch for UFortPlayerCompanionPreviewLockerComponent::LockerOffset");

// /Script/CosmeticCompanionsRuntime.FortPlayerCompanionQuadrupedDataAsset
// Kind: Class; super: DataAsset
class UFortPlayerCompanionQuadrupedDataAsset
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Struct[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortPlayerCompanionQuadrupedDataAsset, Struct) == 40, "Offset mismatch for UFortPlayerCompanionQuadrupedDataAsset::Struct");

// /Script/CosmeticCompanionsRuntime.FortQuestDefinitionComponent_CompanionExtension
// Kind: Class; super: FortQuestDefinitionComponent
class UFortQuestDefinitionComponent_CompanionExtension
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TMap<void*, void*> ObjectivesExtensionData; // 0x0030 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UFortQuestDefinitionComponent_CompanionExtension, ObjectivesExtensionData) == 48, "Offset mismatch for UFortQuestDefinitionComponent_CompanionExtension::ObjectivesExtensionData");

// /Script/CosmeticCompanionsRuntime.FortQuestDefinitionComponent_CompanionProgression
// Kind: Class; super: FortQuestDefinitionComponent
class UFortQuestDefinitionComponent_CompanionProgression
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TMap<void*, void*> ObjectivesExtensionData; // 0x0030 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UFortQuestDefinitionComponent_CompanionProgression, ObjectivesExtensionData) == 48, "Offset mismatch for UFortQuestDefinitionComponent_CompanionProgression::ObjectivesExtensionData");

// /Script/CosmeticCompanionsRuntime.HandleCompanionPostLoadInterface
// Kind: Class; super: Interface
class UHandleCompanionPostLoadInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CosmeticCompanionsRuntime.RodentAnimExtension
// Kind: Class; super: CompanionAnimExtension
class URodentAnimExtension
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    float PivotAngleThreshold; // 0x0028 (Size: 0x4, Type: FloatProperty)
    float MinLocoAdditiveSpeed; // 0x002C (Size: 0x4, Type: FloatProperty)
    float MaxLocoAdditiveSpeed; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float LocoAdditiveAlphaInterpSpeed; // 0x0034 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(URodentAnimExtension, PivotAngleThreshold) == 40, "Offset mismatch for URodentAnimExtension::PivotAngleThreshold");
static_assert(offsetof(URodentAnimExtension, MinLocoAdditiveSpeed) == 44, "Offset mismatch for URodentAnimExtension::MinLocoAdditiveSpeed");
static_assert(offsetof(URodentAnimExtension, MaxLocoAdditiveSpeed) == 48, "Offset mismatch for URodentAnimExtension::MaxLocoAdditiveSpeed");
static_assert(offsetof(URodentAnimExtension, LocoAdditiveAlphaInterpSpeed) == 52, "Offset mismatch for URodentAnimExtension::LocoAdditiveAlphaInterpSpeed");

// /Script/CosmeticCompanionsRuntime.RoseBruinAnimInstance
// Kind: Class; super: FortPlayerCompanionAnimInstance
class URoseBruinAnimInstance
{
public:
    std::uint8_t Pad_0000[0x640]; // 0x0000
    float BreathingPlayRate; // 0x0640 (Size: 0x4, Type: FloatProperty)
    float IdlePlayrate; // 0x0644 (Size: 0x4, Type: FloatProperty)
    double LocomotionAlpha; // 0x0648 (Size: 0x8, Type: DoubleProperty)
    float LocoAdditiveAlpha; // 0x0650 (Size: 0x4, Type: FloatProperty)
    float TailAdditiveAlpha; // 0x0654 (Size: 0x4, Type: FloatProperty)
    double LookAtPitchAdjusted; // 0x0658 (Size: 0x8, Type: DoubleProperty)
    double AnticsAlpha; // 0x0660 (Size: 0x8, Type: DoubleProperty)
    double LookAtYawAdjusted; // 0x0668 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bDisableFaceAntics; // 0x0670 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsEmoteActive; // 0x0671 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsReactionActive; // 0x0672 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTriggerReactOutro; // 0x0673 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTriggerPivot; // 0x0674 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasPivotAnim; // 0x0675 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTriggerStop; // 0x0676 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTrotStop; // 0x0677 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTriggerStopToStart; // 0x0678 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTriggerFaceAntic; // 0x0679 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTriggerBodyAntic; // 0x067A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bExitBodyAntic; // 0x067B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDontInteruptAntic; // 0x067C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bBlockBodyAntics; // 0x067D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsCombatReactionActive; // 0x067E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsHappyReactionActive; // 0x067F (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTailAdditive; // 0x0680 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0681
    float DisableLocoFace; // 0x0684 (Size: 0x4, Type: FloatProperty)
    float TrotStopDecelerationThreshold; // 0x0688 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(URoseBruinAnimInstance, BreathingPlayRate) == 1600, "Offset mismatch for URoseBruinAnimInstance::BreathingPlayRate");
static_assert(offsetof(URoseBruinAnimInstance, IdlePlayrate) == 1604, "Offset mismatch for URoseBruinAnimInstance::IdlePlayrate");
static_assert(offsetof(URoseBruinAnimInstance, LocomotionAlpha) == 1608, "Offset mismatch for URoseBruinAnimInstance::LocomotionAlpha");
static_assert(offsetof(URoseBruinAnimInstance, LocoAdditiveAlpha) == 1616, "Offset mismatch for URoseBruinAnimInstance::LocoAdditiveAlpha");
static_assert(offsetof(URoseBruinAnimInstance, TailAdditiveAlpha) == 1620, "Offset mismatch for URoseBruinAnimInstance::TailAdditiveAlpha");
static_assert(offsetof(URoseBruinAnimInstance, LookAtPitchAdjusted) == 1624, "Offset mismatch for URoseBruinAnimInstance::LookAtPitchAdjusted");
static_assert(offsetof(URoseBruinAnimInstance, AnticsAlpha) == 1632, "Offset mismatch for URoseBruinAnimInstance::AnticsAlpha");
static_assert(offsetof(URoseBruinAnimInstance, LookAtYawAdjusted) == 1640, "Offset mismatch for URoseBruinAnimInstance::LookAtYawAdjusted");
static_assert(offsetof(URoseBruinAnimInstance, bDisableFaceAntics) == 1648, "Offset mismatch for URoseBruinAnimInstance::bDisableFaceAntics");
static_assert(offsetof(URoseBruinAnimInstance, bIsEmoteActive) == 1649, "Offset mismatch for URoseBruinAnimInstance::bIsEmoteActive");
static_assert(offsetof(URoseBruinAnimInstance, bIsReactionActive) == 1650, "Offset mismatch for URoseBruinAnimInstance::bIsReactionActive");
static_assert(offsetof(URoseBruinAnimInstance, bTriggerReactOutro) == 1651, "Offset mismatch for URoseBruinAnimInstance::bTriggerReactOutro");
static_assert(offsetof(URoseBruinAnimInstance, bTriggerPivot) == 1652, "Offset mismatch for URoseBruinAnimInstance::bTriggerPivot");
static_assert(offsetof(URoseBruinAnimInstance, bHasPivotAnim) == 1653, "Offset mismatch for URoseBruinAnimInstance::bHasPivotAnim");
static_assert(offsetof(URoseBruinAnimInstance, bTriggerStop) == 1654, "Offset mismatch for URoseBruinAnimInstance::bTriggerStop");
static_assert(offsetof(URoseBruinAnimInstance, bTrotStop) == 1655, "Offset mismatch for URoseBruinAnimInstance::bTrotStop");
static_assert(offsetof(URoseBruinAnimInstance, bTriggerStopToStart) == 1656, "Offset mismatch for URoseBruinAnimInstance::bTriggerStopToStart");
static_assert(offsetof(URoseBruinAnimInstance, bTriggerFaceAntic) == 1657, "Offset mismatch for URoseBruinAnimInstance::bTriggerFaceAntic");
static_assert(offsetof(URoseBruinAnimInstance, bTriggerBodyAntic) == 1658, "Offset mismatch for URoseBruinAnimInstance::bTriggerBodyAntic");
static_assert(offsetof(URoseBruinAnimInstance, bExitBodyAntic) == 1659, "Offset mismatch for URoseBruinAnimInstance::bExitBodyAntic");
static_assert(offsetof(URoseBruinAnimInstance, bDontInteruptAntic) == 1660, "Offset mismatch for URoseBruinAnimInstance::bDontInteruptAntic");
static_assert(offsetof(URoseBruinAnimInstance, bBlockBodyAntics) == 1661, "Offset mismatch for URoseBruinAnimInstance::bBlockBodyAntics");
static_assert(offsetof(URoseBruinAnimInstance, bIsCombatReactionActive) == 1662, "Offset mismatch for URoseBruinAnimInstance::bIsCombatReactionActive");
static_assert(offsetof(URoseBruinAnimInstance, bIsHappyReactionActive) == 1663, "Offset mismatch for URoseBruinAnimInstance::bIsHappyReactionActive");
static_assert(offsetof(URoseBruinAnimInstance, bHasTailAdditive) == 1664, "Offset mismatch for URoseBruinAnimInstance::bHasTailAdditive");
static_assert(offsetof(URoseBruinAnimInstance, DisableLocoFace) == 1668, "Offset mismatch for URoseBruinAnimInstance::DisableLocoFace");
static_assert(offsetof(URoseBruinAnimInstance, TrotStopDecelerationThreshold) == 1672, "Offset mismatch for URoseBruinAnimInstance::TrotStopDecelerationThreshold");

// /Script/CosmeticCompanionsRuntime.ShadowLapQuadrupedAnimInstance
// Kind: Class; super: AnimInstance
class UShadowLapQuadrupedAnimInstance
{
public:
    std::uint8_t Pad_0000[0x260]; // 0x0000
    std::uint8_t bCustomEmote; // 0x0260 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UShadowLapQuadrupedAnimInstance, bCustomEmote) == 608, "Offset mismatch for UShadowLapQuadrupedAnimInstance::bCustomEmote");

// /Script/CosmeticCompanionsRuntime.ShirtTilapiaQuadrupedPostAnimInstance
// Kind: Class; super: CompanionPostProcessAnimInstance
class UShirtTilapiaQuadrupedPostAnimInstance
{
public:
    std::uint8_t Pad_0000[0x3A0]; // 0x0000
    std::uint8_t OverrideWorldGravity[0x18]; // 0x03A0 (Size: 0x18, Type: StructProperty)
    void* ShirtTilapiaEmoteAgreeMAnimMontage; // 0x03B8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UShirtTilapiaQuadrupedPostAnimInstance, OverrideWorldGravity) == 928, "Offset mismatch for UShirtTilapiaQuadrupedPostAnimInstance::OverrideWorldGravity");
static_assert(offsetof(UShirtTilapiaQuadrupedPostAnimInstance, ShirtTilapiaEmoteAgreeMAnimMontage) == 952, "Offset mismatch for UShirtTilapiaQuadrupedPostAnimInstance::ShirtTilapiaEmoteAgreeMAnimMontage");

// /Script/CosmeticCompanionsRuntime.TeaPupQuadrupedCCPAnimInstance
// Kind: Class; super: CustomCharacterPartAnimInstance
class UTeaPupQuadrupedCCPAnimInstance
{
public:
    std::uint8_t Pad_0000[0x630]; // 0x0000
    std::uint8_t bCustomEmoteRetarget; // 0x0630 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UTeaPupQuadrupedCCPAnimInstance, bCustomEmoteRetarget) == 1584, "Offset mismatch for UTeaPupQuadrupedCCPAnimInstance::bCustomEmoteRetarget");

// /Script/CosmeticCompanionsRuntime.WartyBarkQuadrupedAnimInstance
// Kind: Class; super: AnimInstance
class UWartyBarkQuadrupedAnimInstance
{
public:
    std::uint8_t Pad_0000[0x260]; // 0x0000
    std::uint8_t bCustomEmoteRetarget; // 0x0260 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UWartyBarkQuadrupedAnimInstance, bCustomEmoteRetarget) == 608, "Offset mismatch for UWartyBarkQuadrupedAnimInstance::bCustomEmoteRetarget");

// /Script/CosmeticCompanionsRuntime.WhineDummeezQuadrupedAnimInstance
// Kind: Class; super: AnimInstance
class UWhineDummeezQuadrupedAnimInstance
{
public:
    std::uint8_t Pad_0000[0x260]; // 0x0000
    std::uint8_t bUseReverseRetarget; // 0x0260 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UWhineDummeezQuadrupedAnimInstance, bUseReverseRetarget) == 608, "Offset mismatch for UWhineDummeezQuadrupedAnimInstance::bUseReverseRetarget");

// /Script/CosmeticCompanionsRuntime.WideSnoreQuadrupedMorphCCPAnimInstance
// Kind: Class; super: CustomCharacterPartAnimInstance
class UWideSnoreQuadrupedMorphCCPAnimInstance
{
public:
    std::uint8_t Pad_0000[0x458]; // 0x0000
    FMulticastInlineDelegate CharacterCustomizationFinished; // 0x0458 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* CurrentWeapon; // 0x0468 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bCanPlayCustomAnimations; // 0x0470 (Size: 0x1, Type: BoolProperty)
    // 0x0470 BoolProperty bHideUntilFirstAnimationUpdate (shared storage)
    // 0x0470 BoolProperty bIgnoreSignificanceManagerAndAlwaysTick (shared storage)
    // 0x0470 BoolProperty bIsRelaxedLevel2 (shared storage)
    // 0x0470 BoolProperty bIsRiding (shared storage)
    // 0x0470 BoolProperty bUnhideOnNextUpdate (shared storage)
    // 0x0470 BoolProperty bUpdateOwnerAnimInputProperty (shared storage)
    // 0x0470 BoolProperty bUsesDayPhaseChange (shared storage)
    std::uint8_t bIsCrouching; // 0x0471 (Size: 0x1, Type: BoolProperty)
    // 0x0471 BoolProperty bIsInFirstPerson (shared storage)
    // 0x0471 BoolProperty bIsParachuteOpened (shared storage)
    // 0x0471 BoolProperty bIsSkydiveDiveMode (shared storage)
    // 0x0471 BoolProperty bIsSkydiveFloating (shared storage)
    // 0x0471 BoolProperty bIsSkydiving (shared storage)
    // 0x0471 BoolProperty bIsSkydivingFromBus (shared storage)
    // 0x0471 BoolProperty bParachuteOpenedAndStandingUpright (shared storage)
    std::uint8_t bIsAccelerating2D; // 0x0472 (Size: 0x1, Type: BoolProperty)
    // 0x0472 BoolProperty bIsBackpedaling (shared storage)
    // 0x0472 BoolProperty bIsMoving2D (shared storage)
    // 0x0472 BoolProperty bIsSprinting (shared storage)
    // 0x0472 BoolProperty bIsUsingJetpack (shared storage)
    std::uint8_t Pad_0001[0x1]; // 0x0473
    std::uint8_t bGoopJumpExecuted; // 0x0474 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0475
    std::uint8_t bIsInFrontEnd; // 0x0478 (Size: 0x1, Type: BoolProperty)
    // 0x0478 BoolProperty bIsPlayingEmote (shared storage)
    // 0x0478 BoolProperty bIsPlayingFullBodySlotInFrontEnd (shared storage)
    // 0x0478 BoolProperty bIsPlayingMeleeAnim (shared storage)
    // 0x0478 BoolProperty bIsSlopeSliding (shared storage)
    // 0x0478 BoolProperty bIsSurfaceSwimming (shared storage)
    // 0x0478 BoolProperty bIsSwimSprinting (shared storage)
    // 0x0478 BoolProperty bIsWaterJump (shared storage)
    std::uint8_t bIsInCannon; // 0x0479 (Size: 0x1, Type: BoolProperty)
    // 0x0479 BoolProperty bIsInShoppingCart (shared storage)
    // 0x0479 BoolProperty bIsInVehicle (shared storage)
    // 0x0479 BoolProperty bIsOnPawn (shared storage)
    // 0x0479 BoolProperty bIsPreviewingItemInFrontEnd (shared storage)
    // 0x0479 BoolProperty bIsValetDriver (shared storage)
    // 0x0479 BoolProperty bIsValetPassenger (shared storage)
    // 0x0479 BoolProperty bShouldDisplayFrontendReactivity (shared storage)
    std::uint8_t bIsCrouchSprinting; // 0x047A (Size: 0x1, Type: BoolProperty)
    // 0x047A BoolProperty bIsDBNO (shared storage)
    // 0x047A BoolProperty bIsTargeting (shared storage)
    // 0x047A BoolProperty bIsTargetingConsumableThrow (shared storage)
    std::uint8_t Pad_0003[0x1]; // 0x047B
    std::uint8_t bIsInAir; // 0x047C (Size: 0x1, Type: BoolProperty)
    // 0x047C BoolProperty bIsOnGround (shared storage)
    std::uint8_t Pad_0004[0x3]; // 0x047D
    std::uint8_t bIsFerretVehicleDriver; // 0x0480 (Size: 0x1, Type: BoolProperty)
    // 0x0480 BoolProperty bIsFerretVehiclePassenger (shared storage)
    // 0x0480 BoolProperty bIsGolfCartVehicleBackPassenger (shared storage)
    // 0x0480 BoolProperty bIsGolfCartVehicleDriver (shared storage)
    // 0x0480 BoolProperty bIsGolfCartVehicleFrontPassenger (shared storage)
    // 0x0480 BoolProperty bIsInVehicleSeat (shared storage)
    // 0x0480 BoolProperty bIsLandingPredicted (shared storage)
    // 0x0480 BoolProperty bVehicleSeatForcesCrouch (shared storage)
    std::uint8_t bHasMotorcyclePassenger; // 0x0481 (Size: 0x1, Type: BoolProperty)
    // 0x0481 BoolProperty bIsAntelopeVehicleDriver (shared storage)
    // 0x0481 BoolProperty bIsAntelopeVehiclePassenger (shared storage)
    // 0x0481 BoolProperty bIsJackalVehicleDriver (shared storage)
    // 0x0481 BoolProperty bIsMotorcycleDriver (shared storage)
    // 0x0481 BoolProperty bIsMotorcyclePassenger (shared storage)
    // 0x0481 BoolProperty bIsOctopusVehicleDriver (shared storage)
    // 0x0481 BoolProperty bIsOstrichVehicleDriver (shared storage)
    std::uint8_t bIsDBNOCarried; // 0x0482 (Size: 0x1, Type: BoolProperty)
    // 0x0482 BoolProperty bIsDBNOCarrying (shared storage)
    // 0x0482 BoolProperty bIsLeftArmHidden (shared storage)
    // 0x0482 BoolProperty bIsMeatballDriver (shared storage)
    // 0x0482 BoolProperty bIsMeatballPassenger (shared storage)
    // 0x0482 BoolProperty bIsOstrichVehicleGunner (shared storage)
    // 0x0482 BoolProperty bIsRightArmHidden (shared storage)
    // 0x0482 BoolProperty bIsTacticalSprinting (shared storage)
    std::uint8_t bIsLeftLegHidden; // 0x0483 (Size: 0x1, Type: BoolProperty)
    // 0x0483 BoolProperty bIsNeckHeadHidden (shared storage)
    // 0x0483 BoolProperty bIsRightLegHidden (shared storage)
    std::uint8_t bCachedIsWearingBackbling; // 0x0484 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCachedIsBackblingACape; // 0x0485 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x2]; // 0x0486
    std::uint8_t bOverrideRBANSimSpaceInFrontEnd; // 0x0488 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x3]; // 0x0489
    std::int32_t VehicleSeatIndex; // 0x048C (Size: 0x4, Type: IntProperty)
    std::uint8_t VehicleSlotExposure; // 0x0490 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0007[0x7]; // 0x0491
    std::uint8_t GameplayTagAnimations[0x10]; // 0x0498 (Size: 0x10, Type: StructProperty)
    float CrouchingWithRigidBodyEnabled; // 0x04A8 (Size: 0x4, Type: FloatProperty)
    float RidingSpeed2D; // 0x04AC (Size: 0x4, Type: FloatProperty)
    std::int32_t CurrentLOD; // 0x04B0 (Size: 0x4, Type: IntProperty)
    std::int32_t SignificanceLOD; // 0x04B4 (Size: 0x4, Type: IntProperty)
    std::uint8_t SkydivingExternalForceInput[0xE8]; // 0x04B8 (Size: 0xE8, Type: StructProperty)
    std::uint8_t SlopeInfoInput[0x60]; // 0x05A0 (Size: 0x60, Type: StructProperty)
    std::uint8_t PlayerGliderType; // 0x0600 (Size: 0x1, Type: EnumProperty)
    std::uint8_t WeaponCoreAnim; // 0x0601 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bIsFlyingHorizontally; // 0x0602 (Size: 0x1, Type: BoolProperty)
    // 0x0602 BoolProperty bIsFlyingVertically (shared storage)
    // 0x0602 BoolProperty bIsOnAscender (shared storage)
    // 0x0602 BoolProperty bIsOnGrindRail (shared storage)
    // 0x0602 BoolProperty bIsZiplining (shared storage)
    // 0x0602 BoolProperty bPbBlendEnabled (shared storage)
    std::uint8_t Pad_0008[0x1]; // 0x0603
    std::uint8_t bRegisteredForDayPhaseChange; // 0x0604 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0009[0x3]; // 0x0605
    std::uint8_t PartType; // 0x0608 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_000A[0x3]; // 0x0609
    TWeakObjectPtr<void> OwnerSkeletalMeshComponent; // 0x060C (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_000B[0x4]; // 0x0614
    void* PendingCustomizationFinishedEvent; // 0x0618 (Size: 0x8, Type: ObjectProperty)
    void* PendingPickaxeCustomizationFinishedEvent; // 0x0620 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UWideSnoreQuadrupedMorphCCPAnimInstance, CharacterCustomizationFinished) == 1112, "Offset mismatch for UWideSnoreQuadrupedMorphCCPAnimInstance::CharacterCustomizationFinished");
static_assert(offsetof(UWideSnoreQuadrupedMorphCCPAnimInstance, CurrentWeapon) == 1128, "Offset mismatch for UWideSnoreQuadrupedMorphCCPAnimInstance::CurrentWeapon");
static_assert(offsetof(UWideSnoreQuadrupedMorphCCPAnimInstance, bCanPlayCustomAnimations) == 1136, "Offset mismatch for UWideSnoreQuadrupedMorphCCPAnimInstance::bCanPlayCustomAnimations");
static_assert(offsetof(UWideSnoreQuadrupedMorphCCPAnimInstance, bIsCrouching) == 1137, "Offset mismatch for UWideSnoreQuadrupedMorphCCPAnimInstance::bIsCrouching");
static_assert(offsetof(UWideSnoreQuadrupedMorphCCPAnimInstance, bIsAccelerating2D) == 1138, "Offset mismatch for UWideSnoreQuadrupedMorphCCPAnimInstance::bIsAccelerating2D");
static_assert(offsetof(UWideSnoreQuadrupedMorphCCPAnimInstance, bGoopJumpExecuted) == 1140, "Offset mismatch for UWideSnoreQuadrupedMorphCCPAnimInstance::bGoopJumpExecuted");
static_assert(offsetof(UWideSnoreQuadrupedMorphCCPAnimInstance, bIsInFrontEnd) == 1144, "Offset mismatch for UWideSnoreQuadrupedMorphCCPAnimInstance::bIsInFrontEnd");
static_assert(offsetof(UWideSnoreQuadrupedMorphCCPAnimInstance, bIsInCannon) == 1145, "Offset mismatch for UWideSnoreQuadrupedMorphCCPAnimInstance::bIsInCannon");
static_assert(offsetof(UWideSnoreQuadrupedMorphCCPAnimInstance, bIsCrouchSprinting) == 1146, "Offset mismatch for UWideSnoreQuadrupedMorphCCPAnimInstance::bIsCrouchSprinting");
static_assert(offsetof(UWideSnoreQuadrupedMorphCCPAnimInstance, bIsInAir) == 1148, "Offset mismatch for UWideSnoreQuadrupedMorphCCPAnimInstance::bIsInAir");
static_assert(offsetof(UWideSnoreQuadrupedMorphCCPAnimInstance, bIsFerretVehicleDriver) == 1152, "Offset mismatch for UWideSnoreQuadrupedMorphCCPAnimInstance::bIsFerretVehicleDriver");
static_assert(offsetof(UWideSnoreQuadrupedMorphCCPAnimInstance, bHasMotorcyclePassenger) == 1153, "Offset mismatch for UWideSnoreQuadrupedMorphCCPAnimInstance::bHasMotorcyclePassenger");
static_assert(offsetof(UWideSnoreQuadrupedMorphCCPAnimInstance, bIsDBNOCarried) == 1154, "Offset mismatch for UWideSnoreQuadrupedMorphCCPAnimInstance::bIsDBNOCarried");
static_assert(offsetof(UWideSnoreQuadrupedMorphCCPAnimInstance, bIsLeftLegHidden) == 1155, "Offset mismatch for UWideSnoreQuadrupedMorphCCPAnimInstance::bIsLeftLegHidden");
static_assert(offsetof(UWideSnoreQuadrupedMorphCCPAnimInstance, bCachedIsWearingBackbling) == 1156, "Offset mismatch for UWideSnoreQuadrupedMorphCCPAnimInstance::bCachedIsWearingBackbling");
static_assert(offsetof(UWideSnoreQuadrupedMorphCCPAnimInstance, bCachedIsBackblingACape) == 1157, "Offset mismatch for UWideSnoreQuadrupedMorphCCPAnimInstance::bCachedIsBackblingACape");
static_assert(offsetof(UWideSnoreQuadrupedMorphCCPAnimInstance, bOverrideRBANSimSpaceInFrontEnd) == 1160, "Offset mismatch for UWideSnoreQuadrupedMorphCCPAnimInstance::bOverrideRBANSimSpaceInFrontEnd");
static_assert(offsetof(UWideSnoreQuadrupedMorphCCPAnimInstance, VehicleSeatIndex) == 1164, "Offset mismatch for UWideSnoreQuadrupedMorphCCPAnimInstance::VehicleSeatIndex");
static_assert(offsetof(UWideSnoreQuadrupedMorphCCPAnimInstance, VehicleSlotExposure) == 1168, "Offset mismatch for UWideSnoreQuadrupedMorphCCPAnimInstance::VehicleSlotExposure");
static_assert(offsetof(UWideSnoreQuadrupedMorphCCPAnimInstance, GameplayTagAnimations) == 1176, "Offset mismatch for UWideSnoreQuadrupedMorphCCPAnimInstance::GameplayTagAnimations");
static_assert(offsetof(UWideSnoreQuadrupedMorphCCPAnimInstance, CrouchingWithRigidBodyEnabled) == 1192, "Offset mismatch for UWideSnoreQuadrupedMorphCCPAnimInstance::CrouchingWithRigidBodyEnabled");
static_assert(offsetof(UWideSnoreQuadrupedMorphCCPAnimInstance, RidingSpeed2D) == 1196, "Offset mismatch for UWideSnoreQuadrupedMorphCCPAnimInstance::RidingSpeed2D");
static_assert(offsetof(UWideSnoreQuadrupedMorphCCPAnimInstance, CurrentLOD) == 1200, "Offset mismatch for UWideSnoreQuadrupedMorphCCPAnimInstance::CurrentLOD");
static_assert(offsetof(UWideSnoreQuadrupedMorphCCPAnimInstance, SignificanceLOD) == 1204, "Offset mismatch for UWideSnoreQuadrupedMorphCCPAnimInstance::SignificanceLOD");
static_assert(offsetof(UWideSnoreQuadrupedMorphCCPAnimInstance, SkydivingExternalForceInput) == 1208, "Offset mismatch for UWideSnoreQuadrupedMorphCCPAnimInstance::SkydivingExternalForceInput");
static_assert(offsetof(UWideSnoreQuadrupedMorphCCPAnimInstance, SlopeInfoInput) == 1440, "Offset mismatch for UWideSnoreQuadrupedMorphCCPAnimInstance::SlopeInfoInput");
static_assert(offsetof(UWideSnoreQuadrupedMorphCCPAnimInstance, PlayerGliderType) == 1536, "Offset mismatch for UWideSnoreQuadrupedMorphCCPAnimInstance::PlayerGliderType");
static_assert(offsetof(UWideSnoreQuadrupedMorphCCPAnimInstance, WeaponCoreAnim) == 1537, "Offset mismatch for UWideSnoreQuadrupedMorphCCPAnimInstance::WeaponCoreAnim");
static_assert(offsetof(UWideSnoreQuadrupedMorphCCPAnimInstance, bIsFlyingHorizontally) == 1538, "Offset mismatch for UWideSnoreQuadrupedMorphCCPAnimInstance::bIsFlyingHorizontally");
static_assert(offsetof(UWideSnoreQuadrupedMorphCCPAnimInstance, bRegisteredForDayPhaseChange) == 1540, "Offset mismatch for UWideSnoreQuadrupedMorphCCPAnimInstance::bRegisteredForDayPhaseChange");
static_assert(offsetof(UWideSnoreQuadrupedMorphCCPAnimInstance, PartType) == 1544, "Offset mismatch for UWideSnoreQuadrupedMorphCCPAnimInstance::PartType");
static_assert(offsetof(UWideSnoreQuadrupedMorphCCPAnimInstance, OwnerSkeletalMeshComponent) == 1548, "Offset mismatch for UWideSnoreQuadrupedMorphCCPAnimInstance::OwnerSkeletalMeshComponent");
static_assert(offsetof(UWideSnoreQuadrupedMorphCCPAnimInstance, PendingCustomizationFinishedEvent) == 1560, "Offset mismatch for UWideSnoreQuadrupedMorphCCPAnimInstance::PendingCustomizationFinishedEvent");
static_assert(offsetof(UWideSnoreQuadrupedMorphCCPAnimInstance, PendingPickaxeCustomizationFinishedEvent) == 1568, "Offset mismatch for UWideSnoreQuadrupedMorphCCPAnimInstance::PendingPickaxeCustomizationFinishedEvent");

// /Script/CosmeticCompanionsRuntime.ZestySiloQuadrupedAnimInstance
// Kind: Class; super: AnimInstance
class UZestySiloQuadrupedAnimInstance
{
public:
    std::uint8_t Pad_0000[0x260]; // 0x0000
    std::uint8_t bCustomEmote; // 0x0260 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UZestySiloQuadrupedAnimInstance, bCustomEmote) == 608, "Offset mismatch for UZestySiloQuadrupedAnimInstance::bCustomEmote");

/**
 * decamp dumper generated SDK
 * Package: /Script/LiveLink
 */
#pragma once
#include "Basic.h"

// /Script/LiveLink.LiveLinkRetargetAssetReference
// Kind: ScriptStruct; super: none
struct FLiveLinkRetargetAssetReference
{
public:
    std::uint8_t Opaque[1];
};


// /Script/LiveLink.LiveLinkRoleProjectSetting
// Kind: ScriptStruct; super: none
struct FLiveLinkRoleProjectSetting
{
public:
    void* Role; // 0x0000 (Size: 0x8, Type: ClassProperty)
    void* SettingClass; // 0x0008 (Size: 0x8, Type: ClassProperty)
    void* FrameInterpolationProcessor; // 0x0010 (Size: 0x8, Type: ClassProperty)
    TArray<void*> FramePreProcessors; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FLiveLinkRoleProjectSetting, Role) == 0, "Offset mismatch for FLiveLinkRoleProjectSetting::Role");
static_assert(offsetof(FLiveLinkRoleProjectSetting, SettingClass) == 8, "Offset mismatch for FLiveLinkRoleProjectSetting::SettingClass");
static_assert(offsetof(FLiveLinkRoleProjectSetting, FrameInterpolationProcessor) == 16, "Offset mismatch for FLiveLinkRoleProjectSetting::FrameInterpolationProcessor");
static_assert(offsetof(FLiveLinkRoleProjectSetting, FramePreProcessors) == 24, "Offset mismatch for FLiveLinkRoleProjectSetting::FramePreProcessors");

// /Script/LiveLink.LiveLinkVirtualSubjectBoneAttachment
// Kind: ScriptStruct; super: none
struct FLiveLinkVirtualSubjectBoneAttachment
{
public:
    std::uint8_t ParentSubject[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::uint8_t ParentBone[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    std::uint8_t ChildSubject[0x4]; // 0x0008 (Size: 0x4, Type: StructProperty)
    std::uint8_t ChildBone[0x4]; // 0x000C (Size: 0x4, Type: NameProperty)
    std::uint8_t LocationOffset[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    std::uint8_t RotationOffset[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FLiveLinkVirtualSubjectBoneAttachment, ParentSubject) == 0, "Offset mismatch for FLiveLinkVirtualSubjectBoneAttachment::ParentSubject");
static_assert(offsetof(FLiveLinkVirtualSubjectBoneAttachment, ParentBone) == 4, "Offset mismatch for FLiveLinkVirtualSubjectBoneAttachment::ParentBone");
static_assert(offsetof(FLiveLinkVirtualSubjectBoneAttachment, ChildSubject) == 8, "Offset mismatch for FLiveLinkVirtualSubjectBoneAttachment::ChildSubject");
static_assert(offsetof(FLiveLinkVirtualSubjectBoneAttachment, ChildBone) == 12, "Offset mismatch for FLiveLinkVirtualSubjectBoneAttachment::ChildBone");
static_assert(offsetof(FLiveLinkVirtualSubjectBoneAttachment, LocationOffset) == 16, "Offset mismatch for FLiveLinkVirtualSubjectBoneAttachment::LocationOffset");
static_assert(offsetof(FLiveLinkVirtualSubjectBoneAttachment, RotationOffset) == 40, "Offset mismatch for FLiveLinkVirtualSubjectBoneAttachment::RotationOffset");

// /Script/LiveLink.ProviderPollResult
// Kind: ScriptStruct; super: none
struct FProviderPollResult
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    FString Name; // 0x0010 (Size: 0x10, Type: StrProperty)
    FString MachineName; // 0x0020 (Size: 0x10, Type: StrProperty)
    double MachineTimeOffset; // 0x0030 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bIsValidProvider; // 0x0038 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0039
    std::int32_t DiscoveryProtocolVersion; // 0x003C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FProviderPollResult, Name) == 16, "Offset mismatch for FProviderPollResult::Name");
static_assert(offsetof(FProviderPollResult, MachineName) == 32, "Offset mismatch for FProviderPollResult::MachineName");
static_assert(offsetof(FProviderPollResult, MachineTimeOffset) == 48, "Offset mismatch for FProviderPollResult::MachineTimeOffset");
static_assert(offsetof(FProviderPollResult, bIsValidProvider) == 56, "Offset mismatch for FProviderPollResult::bIsValidProvider");
static_assert(offsetof(FProviderPollResult, DiscoveryProtocolVersion) == 60, "Offset mismatch for FProviderPollResult::DiscoveryProtocolVersion");

// /Script/LiveLink.LiveLinkAnimationAxisSwitchPreProcessor
// Kind: Class; super: LiveLinkTransformAxisSwitchPreProcessor
class ULiveLinkAnimationAxisSwitchPreProcessor
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t FrontAxis; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t RightAxis; // 0x0029 (Size: 0x1, Type: EnumProperty)
    std::uint8_t UpAxis; // 0x002A (Size: 0x1, Type: EnumProperty)
    std::uint8_t bUseOffsetPosition; // 0x002B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseOffsetOrientation; // 0x002C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x002D
    std::uint8_t OffsetPosition[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    std::uint8_t OffsetOrientation[0x1]; // 0x0048 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(ULiveLinkAnimationAxisSwitchPreProcessor, FrontAxis) == 40, "Offset mismatch for ULiveLinkAnimationAxisSwitchPreProcessor::FrontAxis");
static_assert(offsetof(ULiveLinkAnimationAxisSwitchPreProcessor, RightAxis) == 41, "Offset mismatch for ULiveLinkAnimationAxisSwitchPreProcessor::RightAxis");
static_assert(offsetof(ULiveLinkAnimationAxisSwitchPreProcessor, UpAxis) == 42, "Offset mismatch for ULiveLinkAnimationAxisSwitchPreProcessor::UpAxis");
static_assert(offsetof(ULiveLinkAnimationAxisSwitchPreProcessor, bUseOffsetPosition) == 43, "Offset mismatch for ULiveLinkAnimationAxisSwitchPreProcessor::bUseOffsetPosition");
static_assert(offsetof(ULiveLinkAnimationAxisSwitchPreProcessor, bUseOffsetOrientation) == 44, "Offset mismatch for ULiveLinkAnimationAxisSwitchPreProcessor::bUseOffsetOrientation");
static_assert(offsetof(ULiveLinkAnimationAxisSwitchPreProcessor, OffsetPosition) == 48, "Offset mismatch for ULiveLinkAnimationAxisSwitchPreProcessor::OffsetPosition");
static_assert(offsetof(ULiveLinkAnimationAxisSwitchPreProcessor, OffsetOrientation) == 72, "Offset mismatch for ULiveLinkAnimationAxisSwitchPreProcessor::OffsetOrientation");

// /Script/LiveLink.LiveLinkAnimationFrameInterpolationProcessor
// Kind: Class; super: LiveLinkBasicFrameInterpolationProcessor
class ULiveLinkAnimationFrameInterpolationProcessor
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bInterpolatePropertyValues; // 0x0028 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(ULiveLinkAnimationFrameInterpolationProcessor, bInterpolatePropertyValues) == 40, "Offset mismatch for ULiveLinkAnimationFrameInterpolationProcessor::bInterpolatePropertyValues");

// /Script/LiveLink.LiveLinkAnimationRoleToTransform
// Kind: Class; super: LiveLinkFrameTranslator
class ULiveLinkAnimationRoleToTransform
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FName BoneName; // 0x0028 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(ULiveLinkAnimationRoleToTransform, BoneName) == 40, "Offset mismatch for ULiveLinkAnimationRoleToTransform::BoneName");

// /Script/LiveLink.LiveLinkAnimationVirtualSubject
// Kind: Class; super: LiveLinkVirtualSubject
class ULiveLinkAnimationVirtualSubject
{
public:
    std::uint8_t Pad_0000[0x180]; // 0x0000
    TArray<void*> Attachments; // 0x0180 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t LocationBehavior; // 0x0190 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0191
    std::uint8_t RotationBehavior; // 0x0194 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0195
    std::uint8_t bAppendSubjectNameToBones; // 0x0198 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(ULiveLinkAnimationVirtualSubject, Attachments) == 384, "Offset mismatch for ULiveLinkAnimationVirtualSubject::Attachments");
static_assert(offsetof(ULiveLinkAnimationVirtualSubject, LocationBehavior) == 400, "Offset mismatch for ULiveLinkAnimationVirtualSubject::LocationBehavior");
static_assert(offsetof(ULiveLinkAnimationVirtualSubject, RotationBehavior) == 404, "Offset mismatch for ULiveLinkAnimationVirtualSubject::RotationBehavior");
static_assert(offsetof(ULiveLinkAnimationVirtualSubject, bAppendSubjectNameToBones) == 408, "Offset mismatch for ULiveLinkAnimationVirtualSubject::bAppendSubjectNameToBones");

// /Script/LiveLink.LiveLinkBasicFrameInterpolationProcessor
// Kind: Class; super: LiveLinkFrameInterpolationProcessor
class ULiveLinkBasicFrameInterpolationProcessor
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bInterpolatePropertyValues; // 0x0028 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(ULiveLinkBasicFrameInterpolationProcessor, bInterpolatePropertyValues) == 40, "Offset mismatch for ULiveLinkBasicFrameInterpolationProcessor::bInterpolatePropertyValues");

// /Script/LiveLink.LiveLinkBlueprintLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class ULiveLinkBlueprintLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/LiveLink.LiveLinkBlueprintVirtualSubject
// Kind: Class; super: LiveLinkVirtualSubject
class ULiveLinkBlueprintVirtualSubject
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t SyncSubject[0x8]; // 0x0030 (Size: 0x8, Type: StructProperty)
    void* Role; // 0x0038 (Size: 0x8, Type: ClassProperty)
    TArray<void*> Subjects; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> FrameTranslators; // 0x0050 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bRebroadcastSubject; // 0x0060 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(ULiveLinkBlueprintVirtualSubject, SyncSubject) == 48, "Offset mismatch for ULiveLinkBlueprintVirtualSubject::SyncSubject");
static_assert(offsetof(ULiveLinkBlueprintVirtualSubject, Role) == 56, "Offset mismatch for ULiveLinkBlueprintVirtualSubject::Role");
static_assert(offsetof(ULiveLinkBlueprintVirtualSubject, Subjects) == 64, "Offset mismatch for ULiveLinkBlueprintVirtualSubject::Subjects");
static_assert(offsetof(ULiveLinkBlueprintVirtualSubject, FrameTranslators) == 80, "Offset mismatch for ULiveLinkBlueprintVirtualSubject::FrameTranslators");
static_assert(offsetof(ULiveLinkBlueprintVirtualSubject, bRebroadcastSubject) == 96, "Offset mismatch for ULiveLinkBlueprintVirtualSubject::bRebroadcastSubject");

// /Script/LiveLink.LiveLinkBroadcastComponent
// Kind: Class; super: ActorComponent
class ULiveLinkBroadcastComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t bEnable; // 0x00C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00C1
    std::uint8_t SubjectName[0x4]; // 0x00C4 (Size: 0x4, Type: NameProperty)
    void* Role; // 0x00C8 (Size: 0x8, Type: ClassProperty)
    std::uint8_t SourceMesh[0x28]; // 0x00D0 (Size: 0x28, Type: StructProperty)
    TArray<void*> AllowedBoneNames; // 0x00F8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AllowedCurveNames; // 0x0108 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bRemoveSubjectWhenDisabled; // 0x0118 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(ULiveLinkBroadcastComponent, bEnable) == 192, "Offset mismatch for ULiveLinkBroadcastComponent::bEnable");
static_assert(offsetof(ULiveLinkBroadcastComponent, SubjectName) == 196, "Offset mismatch for ULiveLinkBroadcastComponent::SubjectName");
static_assert(offsetof(ULiveLinkBroadcastComponent, Role) == 200, "Offset mismatch for ULiveLinkBroadcastComponent::Role");
static_assert(offsetof(ULiveLinkBroadcastComponent, SourceMesh) == 208, "Offset mismatch for ULiveLinkBroadcastComponent::SourceMesh");
static_assert(offsetof(ULiveLinkBroadcastComponent, AllowedBoneNames) == 248, "Offset mismatch for ULiveLinkBroadcastComponent::AllowedBoneNames");
static_assert(offsetof(ULiveLinkBroadcastComponent, AllowedCurveNames) == 264, "Offset mismatch for ULiveLinkBroadcastComponent::AllowedCurveNames");
static_assert(offsetof(ULiveLinkBroadcastComponent, bRemoveSubjectWhenDisabled) == 280, "Offset mismatch for ULiveLinkBroadcastComponent::bRemoveSubjectWhenDisabled");

// /Script/LiveLink.LiveLinkBroadcastSubsystem
// Kind: Class; super: EngineSubsystem
class ULiveLinkBroadcastSubsystem
{
public:
    std::uint8_t Opaque[1];
};


// /Script/LiveLink.LiveLinkComponent
// Kind: Class; super: ActorComponent
class ULiveLinkComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnLiveLinkUpdated; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(ULiveLinkComponent, OnLiveLinkUpdated) == 192, "Offset mismatch for ULiveLinkComponent::OnLiveLinkUpdated");

// /Script/LiveLink.LiveLinkCustomTimeStep
// Kind: Class; super: GenlockedCustomTimeStep
class ULiveLinkCustomTimeStep
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t LiveLinkDataRate[0x8]; // 0x0030 (Size: 0x8, Type: StructProperty)
    std::uint8_t SubjectKey[0x14]; // 0x0038 (Size: 0x14, Type: StructProperty)
    std::uint8_t bLockStepMode; // 0x004C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x004D
    std::uint32_t FrameRateDivider; // 0x0050 (Size: 0x4, Type: UInt32Property)
    std::uint8_t Pad_0002[0x4]; // 0x0054
    double TimeoutInSeconds; // 0x0058 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(ULiveLinkCustomTimeStep, LiveLinkDataRate) == 48, "Offset mismatch for ULiveLinkCustomTimeStep::LiveLinkDataRate");
static_assert(offsetof(ULiveLinkCustomTimeStep, SubjectKey) == 56, "Offset mismatch for ULiveLinkCustomTimeStep::SubjectKey");
static_assert(offsetof(ULiveLinkCustomTimeStep, bLockStepMode) == 76, "Offset mismatch for ULiveLinkCustomTimeStep::bLockStepMode");
static_assert(offsetof(ULiveLinkCustomTimeStep, FrameRateDivider) == 80, "Offset mismatch for ULiveLinkCustomTimeStep::FrameRateDivider");
static_assert(offsetof(ULiveLinkCustomTimeStep, TimeoutInSeconds) == 88, "Offset mismatch for ULiveLinkCustomTimeStep::TimeoutInSeconds");

// /Script/LiveLink.LiveLinkDataPreview
// Kind: Class; super: Actor
class ULiveLinkDataPreview
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    TArray<void*> Subjects; // 0x0270 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0xE0]; // 0x0280
    std::uint8_t bDrawLabels; // 0x0360 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEvaluateLiveLink; // 0x0361 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x6]; // 0x0362
    void* BillboardComponent; // 0x0368 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(ULiveLinkDataPreview, Subjects) == 624, "Offset mismatch for ULiveLinkDataPreview::Subjects");
static_assert(offsetof(ULiveLinkDataPreview, bDrawLabels) == 864, "Offset mismatch for ULiveLinkDataPreview::bDrawLabels");
static_assert(offsetof(ULiveLinkDataPreview, bEvaluateLiveLink) == 865, "Offset mismatch for ULiveLinkDataPreview::bEvaluateLiveLink");
static_assert(offsetof(ULiveLinkDataPreview, BillboardComponent) == 872, "Offset mismatch for ULiveLinkDataPreview::BillboardComponent");

// /Script/LiveLink.LiveLinkDataPreviewComponent
// Kind: Class; super: InstancedStaticMeshComponent
class ULiveLinkDataPreviewComponent
{
public:
    std::uint8_t Pad_0000[0xA60]; // 0x0000
    std::uint8_t SubjectName[0x4]; // 0x0A60 (Size: 0x4, Type: StructProperty)
    std::uint8_t bEvaluateLiveLink; // 0x0A64 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDrawLabels; // 0x0A65 (Size: 0x1, Type: BoolProperty)
    std::uint8_t BoneVisualType; // 0x0A66 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(ULiveLinkDataPreviewComponent, SubjectName) == 2656, "Offset mismatch for ULiveLinkDataPreviewComponent::SubjectName");
static_assert(offsetof(ULiveLinkDataPreviewComponent, bEvaluateLiveLink) == 2660, "Offset mismatch for ULiveLinkDataPreviewComponent::bEvaluateLiveLink");
static_assert(offsetof(ULiveLinkDataPreviewComponent, bDrawLabels) == 2661, "Offset mismatch for ULiveLinkDataPreviewComponent::bDrawLabels");
static_assert(offsetof(ULiveLinkDataPreviewComponent, BoneVisualType) == 2662, "Offset mismatch for ULiveLinkDataPreviewComponent::BoneVisualType");

// /Script/LiveLink.LiveLinkDrivenComponent
// Kind: Class; super: ActorComponent
class ULiveLinkDrivenComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t SubjectName[0x4]; // 0x00C0 (Size: 0x4, Type: StructProperty)
    std::uint8_t ActorTransformBone[0x4]; // 0x00C4 (Size: 0x4, Type: NameProperty)
    std::uint8_t bModifyActorTransform; // 0x00C8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSetRelativeLocation; // 0x00C9 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(ULiveLinkDrivenComponent, SubjectName) == 192, "Offset mismatch for ULiveLinkDrivenComponent::SubjectName");
static_assert(offsetof(ULiveLinkDrivenComponent, ActorTransformBone) == 196, "Offset mismatch for ULiveLinkDrivenComponent::ActorTransformBone");
static_assert(offsetof(ULiveLinkDrivenComponent, bModifyActorTransform) == 200, "Offset mismatch for ULiveLinkDrivenComponent::bModifyActorTransform");
static_assert(offsetof(ULiveLinkDrivenComponent, bSetRelativeLocation) == 201, "Offset mismatch for ULiveLinkDrivenComponent::bSetRelativeLocation");

// /Script/LiveLink.LiveLinkHubSubjectSettings
// Kind: Class; super: LiveLinkSubjectSettings
class ULiveLinkHubSubjectSettings
{
public:
    std::uint8_t Pad_0000[0x98]; // 0x0000
    FString SubjectName; // 0x0098 (Size: 0x10, Type: StrProperty)
    FString OutboundName; // 0x00A8 (Size: 0x10, Type: StrProperty)
    FString Source; // 0x00B8 (Size: 0x10, Type: StrProperty)
    void* TranslatorsProxy; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(ULiveLinkHubSubjectSettings, SubjectName) == 152, "Offset mismatch for ULiveLinkHubSubjectSettings::SubjectName");
static_assert(offsetof(ULiveLinkHubSubjectSettings, OutboundName) == 168, "Offset mismatch for ULiveLinkHubSubjectSettings::OutboundName");
static_assert(offsetof(ULiveLinkHubSubjectSettings, Source) == 184, "Offset mismatch for ULiveLinkHubSubjectSettings::Source");
static_assert(offsetof(ULiveLinkHubSubjectSettings, TranslatorsProxy) == 200, "Offset mismatch for ULiveLinkHubSubjectSettings::TranslatorsProxy");

// /Script/LiveLink.LiveLinkLocatorAxisSwitchPreProcessor
// Kind: Class; super: LiveLinkTransformAxisSwitchPreProcessor
class ULiveLinkLocatorAxisSwitchPreProcessor
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t FrontAxis; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t RightAxis; // 0x0029 (Size: 0x1, Type: EnumProperty)
    std::uint8_t UpAxis; // 0x002A (Size: 0x1, Type: EnumProperty)
    std::uint8_t bUseOffsetPosition; // 0x002B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseOffsetOrientation; // 0x002C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x002D
    std::uint8_t OffsetPosition[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    std::uint8_t OffsetOrientation[0x1]; // 0x0048 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(ULiveLinkLocatorAxisSwitchPreProcessor, FrontAxis) == 40, "Offset mismatch for ULiveLinkLocatorAxisSwitchPreProcessor::FrontAxis");
static_assert(offsetof(ULiveLinkLocatorAxisSwitchPreProcessor, RightAxis) == 41, "Offset mismatch for ULiveLinkLocatorAxisSwitchPreProcessor::RightAxis");
static_assert(offsetof(ULiveLinkLocatorAxisSwitchPreProcessor, UpAxis) == 42, "Offset mismatch for ULiveLinkLocatorAxisSwitchPreProcessor::UpAxis");
static_assert(offsetof(ULiveLinkLocatorAxisSwitchPreProcessor, bUseOffsetPosition) == 43, "Offset mismatch for ULiveLinkLocatorAxisSwitchPreProcessor::bUseOffsetPosition");
static_assert(offsetof(ULiveLinkLocatorAxisSwitchPreProcessor, bUseOffsetOrientation) == 44, "Offset mismatch for ULiveLinkLocatorAxisSwitchPreProcessor::bUseOffsetOrientation");
static_assert(offsetof(ULiveLinkLocatorAxisSwitchPreProcessor, OffsetPosition) == 48, "Offset mismatch for ULiveLinkLocatorAxisSwitchPreProcessor::OffsetPosition");
static_assert(offsetof(ULiveLinkLocatorAxisSwitchPreProcessor, OffsetOrientation) == 72, "Offset mismatch for ULiveLinkLocatorAxisSwitchPreProcessor::OffsetOrientation");

// /Script/LiveLink.LiveLinkMarkerVisualizer
// Kind: Class; super: InstancedStaticMeshComponent
class ULiveLinkMarkerVisualizer
{
public:
    std::uint8_t Pad_0000[0xA60]; // 0x0000
    void* DynamicMaterial; // 0x0A60 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t LiveLinkSubject[0x4]; // 0x0A68 (Size: 0x4, Type: StructProperty)
    std::uint8_t bEvaluateLiveLink; // 0x0A6C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDrawLabels; // 0x0A6D (Size: 0x1, Type: BoolProperty)
    std::uint8_t XAxisSign; // 0x0A6E (Size: 0x1, Type: EnumProperty)
    std::uint8_t YAxisSign; // 0x0A6F (Size: 0x1, Type: EnumProperty)
    TArray<void*> MarkerLocations; // 0x0A70 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(ULiveLinkMarkerVisualizer, DynamicMaterial) == 2656, "Offset mismatch for ULiveLinkMarkerVisualizer::DynamicMaterial");
static_assert(offsetof(ULiveLinkMarkerVisualizer, LiveLinkSubject) == 2664, "Offset mismatch for ULiveLinkMarkerVisualizer::LiveLinkSubject");
static_assert(offsetof(ULiveLinkMarkerVisualizer, bEvaluateLiveLink) == 2668, "Offset mismatch for ULiveLinkMarkerVisualizer::bEvaluateLiveLink");
static_assert(offsetof(ULiveLinkMarkerVisualizer, bDrawLabels) == 2669, "Offset mismatch for ULiveLinkMarkerVisualizer::bDrawLabels");
static_assert(offsetof(ULiveLinkMarkerVisualizer, XAxisSign) == 2670, "Offset mismatch for ULiveLinkMarkerVisualizer::XAxisSign");
static_assert(offsetof(ULiveLinkMarkerVisualizer, YAxisSign) == 2671, "Offset mismatch for ULiveLinkMarkerVisualizer::YAxisSign");
static_assert(offsetof(ULiveLinkMarkerVisualizer, MarkerLocations) == 2672, "Offset mismatch for ULiveLinkMarkerVisualizer::MarkerLocations");

// /Script/LiveLink.LiveLinkMessageBusFinder
// Kind: Class; super: Object
class ULiveLinkMessageBusFinder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/LiveLink.LiveLinkMessageBusSourceFactory
// Kind: Class; super: LiveLinkSourceFactory
class ULiveLinkMessageBusSourceFactory
{
public:
    std::uint8_t Opaque[1];
};


// /Script/LiveLink.LiveLinkMessageBusSourceSettings
// Kind: Class; super: LiveLinkSourceSettings
class ULiveLinkMessageBusSourceSettings
{
public:
    std::uint8_t Pad_0000[0xB8]; // 0x0000
    std::uint8_t bEnableFrameResequencing; // 0x00B8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00B9
    std::int32_t ResequencerMaxBufferSize; // 0x00BC (Size: 0x4, Type: IntProperty)
    float ResequencerMaxWaitTimeSeconds; // 0x00C0 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(ULiveLinkMessageBusSourceSettings, bEnableFrameResequencing) == 184, "Offset mismatch for ULiveLinkMessageBusSourceSettings::bEnableFrameResequencing");
static_assert(offsetof(ULiveLinkMessageBusSourceSettings, ResequencerMaxBufferSize) == 188, "Offset mismatch for ULiveLinkMessageBusSourceSettings::ResequencerMaxBufferSize");
static_assert(offsetof(ULiveLinkMessageBusSourceSettings, ResequencerMaxWaitTimeSeconds) == 192, "Offset mismatch for ULiveLinkMessageBusSourceSettings::ResequencerMaxWaitTimeSeconds");

// /Script/LiveLink.LiveLinkPreset
// Kind: Class; super: Object
class ULiveLinkPreset
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> Sources; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Subjects; // 0x0038 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(ULiveLinkPreset, Sources) == 40, "Offset mismatch for ULiveLinkPreset::Sources");
static_assert(offsetof(ULiveLinkPreset, Subjects) == 56, "Offset mismatch for ULiveLinkPreset::Subjects");

// /Script/LiveLink.LiveLinkSettings
// Kind: Class; super: Object
class ULiveLinkSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> DefaultRoleSettings; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t DefaultSettingsClass[0x18]; // 0x0038 (Size: 0x18, Type: StructProperty)
    void* FrameInterpolationProcessor; // 0x0050 (Size: 0x8, Type: ClassProperty)
    std::uint8_t DefaultLiveLinkPreset[0x20]; // 0x0058 (Size: 0x20, Type: SoftObjectProperty)
    void* DefaultVirtualSubjectClass; // 0x0078 (Size: 0x8, Type: ClassProperty)
    float ClockOffsetCorrectionStep; // 0x0080 (Size: 0x4, Type: FloatProperty)
    std::uint8_t DefaultMessageBusSourceMode; // 0x0084 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0085
    double MessageBusPingRequestFrequency; // 0x0088 (Size: 0x8, Type: DoubleProperty)
    double MessageBusHeartbeatFrequency; // 0x0090 (Size: 0x8, Type: DoubleProperty)
    double MessageBusHeartbeatTimeout; // 0x0098 (Size: 0x8, Type: DoubleProperty)
    double MessageBusTimeBeforeRemovingInactiveSource; // 0x00A0 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bReEnableSubjectOnRemoval; // 0x00A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPreProcessRebroadcastFrames; // 0x00A9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTranslateRebroadcastFrames; // 0x00AA (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x5]; // 0x00AB
    double TimeWithoutFrameToBeConsiderAsInvalid; // 0x00B0 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t ValidColor[0x10]; // 0x00B8 (Size: 0x10, Type: StructProperty)
    std::uint8_t InvalidColor[0x10]; // 0x00C8 (Size: 0x10, Type: StructProperty)
    std::uint8_t TextSizeSource; // 0x00D8 (Size: 0x1, Type: ByteProperty)
    std::uint8_t TextSizeSubject; // 0x00D9 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(ULiveLinkSettings, DefaultRoleSettings) == 40, "Offset mismatch for ULiveLinkSettings::DefaultRoleSettings");
static_assert(offsetof(ULiveLinkSettings, DefaultSettingsClass) == 56, "Offset mismatch for ULiveLinkSettings::DefaultSettingsClass");
static_assert(offsetof(ULiveLinkSettings, FrameInterpolationProcessor) == 80, "Offset mismatch for ULiveLinkSettings::FrameInterpolationProcessor");
static_assert(offsetof(ULiveLinkSettings, DefaultLiveLinkPreset) == 88, "Offset mismatch for ULiveLinkSettings::DefaultLiveLinkPreset");
static_assert(offsetof(ULiveLinkSettings, DefaultVirtualSubjectClass) == 120, "Offset mismatch for ULiveLinkSettings::DefaultVirtualSubjectClass");
static_assert(offsetof(ULiveLinkSettings, ClockOffsetCorrectionStep) == 128, "Offset mismatch for ULiveLinkSettings::ClockOffsetCorrectionStep");
static_assert(offsetof(ULiveLinkSettings, DefaultMessageBusSourceMode) == 132, "Offset mismatch for ULiveLinkSettings::DefaultMessageBusSourceMode");
static_assert(offsetof(ULiveLinkSettings, MessageBusPingRequestFrequency) == 136, "Offset mismatch for ULiveLinkSettings::MessageBusPingRequestFrequency");
static_assert(offsetof(ULiveLinkSettings, MessageBusHeartbeatFrequency) == 144, "Offset mismatch for ULiveLinkSettings::MessageBusHeartbeatFrequency");
static_assert(offsetof(ULiveLinkSettings, MessageBusHeartbeatTimeout) == 152, "Offset mismatch for ULiveLinkSettings::MessageBusHeartbeatTimeout");
static_assert(offsetof(ULiveLinkSettings, MessageBusTimeBeforeRemovingInactiveSource) == 160, "Offset mismatch for ULiveLinkSettings::MessageBusTimeBeforeRemovingInactiveSource");
static_assert(offsetof(ULiveLinkSettings, bReEnableSubjectOnRemoval) == 168, "Offset mismatch for ULiveLinkSettings::bReEnableSubjectOnRemoval");
static_assert(offsetof(ULiveLinkSettings, bPreProcessRebroadcastFrames) == 169, "Offset mismatch for ULiveLinkSettings::bPreProcessRebroadcastFrames");
static_assert(offsetof(ULiveLinkSettings, bTranslateRebroadcastFrames) == 170, "Offset mismatch for ULiveLinkSettings::bTranslateRebroadcastFrames");
static_assert(offsetof(ULiveLinkSettings, TimeWithoutFrameToBeConsiderAsInvalid) == 176, "Offset mismatch for ULiveLinkSettings::TimeWithoutFrameToBeConsiderAsInvalid");
static_assert(offsetof(ULiveLinkSettings, ValidColor) == 184, "Offset mismatch for ULiveLinkSettings::ValidColor");
static_assert(offsetof(ULiveLinkSettings, InvalidColor) == 200, "Offset mismatch for ULiveLinkSettings::InvalidColor");
static_assert(offsetof(ULiveLinkSettings, TextSizeSource) == 216, "Offset mismatch for ULiveLinkSettings::TextSizeSource");
static_assert(offsetof(ULiveLinkSettings, TextSizeSubject) == 217, "Offset mismatch for ULiveLinkSettings::TextSizeSubject");

// /Script/LiveLink.LiveLinkSkeletonRemapper
// Kind: Class; super: LiveLinkSubjectRemapper
class ULiveLinkSkeletonRemapper
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    TSoftObjectPtr<void> ReferenceSkeleton; // 0x0040 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(ULiveLinkSkeletonRemapper, ReferenceSkeleton) == 64, "Offset mismatch for ULiveLinkSkeletonRemapper::ReferenceSkeleton");

// /Script/LiveLink.LiveLinkTimeSynchronizationSource
// Kind: Class; super: TimeSynchronizationSource
class ULiveLinkTimeSynchronizationSource
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t SubjectName[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(ULiveLinkTimeSynchronizationSource, SubjectName) == 48, "Offset mismatch for ULiveLinkTimeSynchronizationSource::SubjectName");

// /Script/LiveLink.LiveLinkTimecodeProvider
// Kind: Class; super: TimecodeProvider
class ULiveLinkTimecodeProvider
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t SubjectKey[0x14]; // 0x0030 (Size: 0x14, Type: StructProperty)
    std::uint8_t Evaluation; // 0x0044 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0045
    std::uint8_t bOverrideFrameRate; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0049
    std::uint8_t OverrideFrameRate[0x8]; // 0x004C (Size: 0x8, Type: StructProperty)
    std::int32_t BufferSize; // 0x0054 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(ULiveLinkTimecodeProvider, SubjectKey) == 48, "Offset mismatch for ULiveLinkTimecodeProvider::SubjectKey");
static_assert(offsetof(ULiveLinkTimecodeProvider, Evaluation) == 68, "Offset mismatch for ULiveLinkTimecodeProvider::Evaluation");
static_assert(offsetof(ULiveLinkTimecodeProvider, bOverrideFrameRate) == 72, "Offset mismatch for ULiveLinkTimecodeProvider::bOverrideFrameRate");
static_assert(offsetof(ULiveLinkTimecodeProvider, OverrideFrameRate) == 76, "Offset mismatch for ULiveLinkTimecodeProvider::OverrideFrameRate");
static_assert(offsetof(ULiveLinkTimecodeProvider, BufferSize) == 84, "Offset mismatch for ULiveLinkTimecodeProvider::BufferSize");

// /Script/LiveLink.LiveLinkTransformAxisSwitchPreProcessor
// Kind: Class; super: LiveLinkFramePreProcessor
class ULiveLinkTransformAxisSwitchPreProcessor
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t FrontAxis; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t RightAxis; // 0x0029 (Size: 0x1, Type: EnumProperty)
    std::uint8_t UpAxis; // 0x002A (Size: 0x1, Type: EnumProperty)
    std::uint8_t bUseOffsetPosition; // 0x002B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseOffsetOrientation; // 0x002C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x002D
    std::uint8_t OffsetPosition[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    std::uint8_t OffsetOrientation[0x1]; // 0x0048 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(ULiveLinkTransformAxisSwitchPreProcessor, FrontAxis) == 40, "Offset mismatch for ULiveLinkTransformAxisSwitchPreProcessor::FrontAxis");
static_assert(offsetof(ULiveLinkTransformAxisSwitchPreProcessor, RightAxis) == 41, "Offset mismatch for ULiveLinkTransformAxisSwitchPreProcessor::RightAxis");
static_assert(offsetof(ULiveLinkTransformAxisSwitchPreProcessor, UpAxis) == 42, "Offset mismatch for ULiveLinkTransformAxisSwitchPreProcessor::UpAxis");
static_assert(offsetof(ULiveLinkTransformAxisSwitchPreProcessor, bUseOffsetPosition) == 43, "Offset mismatch for ULiveLinkTransformAxisSwitchPreProcessor::bUseOffsetPosition");
static_assert(offsetof(ULiveLinkTransformAxisSwitchPreProcessor, bUseOffsetOrientation) == 44, "Offset mismatch for ULiveLinkTransformAxisSwitchPreProcessor::bUseOffsetOrientation");
static_assert(offsetof(ULiveLinkTransformAxisSwitchPreProcessor, OffsetPosition) == 48, "Offset mismatch for ULiveLinkTransformAxisSwitchPreProcessor::OffsetPosition");
static_assert(offsetof(ULiveLinkTransformAxisSwitchPreProcessor, OffsetOrientation) == 72, "Offset mismatch for ULiveLinkTransformAxisSwitchPreProcessor::OffsetOrientation");

// /Script/LiveLink.LiveLinkTransformDeadbandPreProcessor
// Kind: Class; super: LiveLinkFramePreProcessor
class ULiveLinkTransformDeadbandPreProcessor
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bEnableDeadband; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0029
    float TranslationDeadband; // 0x002C (Size: 0x4, Type: FloatProperty)
    float RotationDeadbandInDegrees; // 0x0030 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(ULiveLinkTransformDeadbandPreProcessor, bEnableDeadband) == 40, "Offset mismatch for ULiveLinkTransformDeadbandPreProcessor::bEnableDeadband");
static_assert(offsetof(ULiveLinkTransformDeadbandPreProcessor, TranslationDeadband) == 44, "Offset mismatch for ULiveLinkTransformDeadbandPreProcessor::TranslationDeadband");
static_assert(offsetof(ULiveLinkTransformDeadbandPreProcessor, RotationDeadbandInDegrees) == 48, "Offset mismatch for ULiveLinkTransformDeadbandPreProcessor::RotationDeadbandInDegrees");

// /Script/LiveLink.LiveLinkTransformRoleToAnimation
// Kind: Class; super: LiveLinkFrameTranslator
class ULiveLinkTransformRoleToAnimation
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FName OutputBoneName; // 0x0028 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(ULiveLinkTransformRoleToAnimation, OutputBoneName) == 40, "Offset mismatch for ULiveLinkTransformRoleToAnimation::OutputBoneName");

// /Script/LiveLink.LiveLinkUserSettings
// Kind: Class; super: Object
class ULiveLinkUserSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t PresetSaveDir[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(ULiveLinkUserSettings, PresetSaveDir) == 40, "Offset mismatch for ULiveLinkUserSettings::PresetSaveDir");

// /Script/LiveLink.LiveLinkVirtualSubjectSourceSettings
// Kind: Class; super: LiveLinkSourceSettings
class ULiveLinkVirtualSubjectSourceSettings
{
public:
    std::uint8_t Pad_0000[0xB8]; // 0x0000
    FName SourceName; // 0x00B8 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(ULiveLinkVirtualSubjectSourceSettings, SourceName) == 184, "Offset mismatch for ULiveLinkVirtualSubjectSourceSettings::SourceName");

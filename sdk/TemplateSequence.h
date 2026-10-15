/**
 * decamp dumper generated SDK
 * Package: /Script/TemplateSequence
 */
#pragma once
#include "Basic.h"

// /Script/TemplateSequence.TemplateSectionPropertyScale
// Kind: ScriptStruct; super: none
struct FTemplateSectionPropertyScale
{
public:
    std::uint8_t ObjectBinding[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t PropertyBinding[0xC]; // 0x0010 (Size: 0xC, Type: StructProperty)
    std::uint8_t PropertyScaleType; // 0x001C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x001D
    std::uint8_t FloatChannel[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FTemplateSectionPropertyScale, ObjectBinding) == 0, "Offset mismatch for FTemplateSectionPropertyScale::ObjectBinding");
static_assert(offsetof(FTemplateSectionPropertyScale, PropertyBinding) == 16, "Offset mismatch for FTemplateSectionPropertyScale::PropertyBinding");
static_assert(offsetof(FTemplateSectionPropertyScale, PropertyScaleType) == 28, "Offset mismatch for FTemplateSectionPropertyScale::PropertyScaleType");
static_assert(offsetof(FTemplateSectionPropertyScale, FloatChannel) == 32, "Offset mismatch for FTemplateSectionPropertyScale::FloatChannel");

// /Script/TemplateSequence.TemplateSequenceBindingOverrideData
// Kind: ScriptStruct; super: none
struct FTemplateSequenceBindingOverrideData
{
public:
    TWeakObjectPtr<void> Object; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t bOverridesDefault; // 0x0008 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FTemplateSequenceBindingOverrideData, Object) == 0, "Offset mismatch for FTemplateSequenceBindingOverrideData::Object");
static_assert(offsetof(FTemplateSequenceBindingOverrideData, bOverridesDefault) == 8, "Offset mismatch for FTemplateSequenceBindingOverrideData::bOverridesDefault");

// /Script/TemplateSequence.CameraAnimationBoundObjectInstantiator
// Kind: Class; super: MovieSceneEntityInstantiatorSystem
class UCameraAnimationBoundObjectInstantiator
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Linker; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UCameraAnimationBoundObjectInstantiator, Linker) == 40, "Offset mismatch for UCameraAnimationBoundObjectInstantiator::Linker");

// /Script/TemplateSequence.CameraAnimationEntitySystemLinker
// Kind: Class; super: MovieSceneEntitySystemLinker
class UCameraAnimationEntitySystemLinker
{
public:
    std::uint8_t Pad_0000[0x250]; // 0x0000
    std::uint8_t SystemGraph[0x1]; // 0x0250 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UCameraAnimationEntitySystemLinker, SystemGraph) == 592, "Offset mismatch for UCameraAnimationEntitySystemLinker::SystemGraph");

// /Script/TemplateSequence.CameraAnimationSequence
// Kind: Class; super: TemplateSequence
class UCameraAnimationSequence
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    void* MovieScene; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t BoundActorClass[0x20]; // 0x0070 (Size: 0x20, Type: SoftClassProperty)
    TMap<void*, void*> BoundActorComponents; // 0x0090 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UCameraAnimationSequence, MovieScene) == 104, "Offset mismatch for UCameraAnimationSequence::MovieScene");
static_assert(offsetof(UCameraAnimationSequence, BoundActorClass) == 112, "Offset mismatch for UCameraAnimationSequence::BoundActorClass");
static_assert(offsetof(UCameraAnimationSequence, BoundActorComponents) == 144, "Offset mismatch for UCameraAnimationSequence::BoundActorComponents");

// /Script/TemplateSequence.CameraAnimationSequenceCameraStandIn
// Kind: Class; super: Object
class UCameraAnimationSequenceCameraStandIn
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    float FieldOfView; // 0x0028 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bConstrainAspectRatio; // 0x002C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x002D
    float AspectRatio; // 0x0030 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0xC]; // 0x0034
    std::uint8_t PostProcessSettings[0x7B0]; // 0x0040 (Size: 0x7B0, Type: StructProperty)
    float PostProcessBlendWeight; // 0x07F0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Filmback[0x14]; // 0x07F4 (Size: 0x14, Type: StructProperty)
    std::uint8_t LensSettings[0x20]; // 0x0808 (Size: 0x20, Type: StructProperty)
    std::uint8_t FocusSettings[0x58]; // 0x0828 (Size: 0x58, Type: StructProperty)
    float CurrentFocalLength; // 0x0880 (Size: 0x4, Type: FloatProperty)
    float CurrentAperture; // 0x0884 (Size: 0x4, Type: FloatProperty)
    float CurrentFocusDistance; // 0x0888 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UCameraAnimationSequenceCameraStandIn, FieldOfView) == 40, "Offset mismatch for UCameraAnimationSequenceCameraStandIn::FieldOfView");
static_assert(offsetof(UCameraAnimationSequenceCameraStandIn, bConstrainAspectRatio) == 44, "Offset mismatch for UCameraAnimationSequenceCameraStandIn::bConstrainAspectRatio");
static_assert(offsetof(UCameraAnimationSequenceCameraStandIn, AspectRatio) == 48, "Offset mismatch for UCameraAnimationSequenceCameraStandIn::AspectRatio");
static_assert(offsetof(UCameraAnimationSequenceCameraStandIn, PostProcessSettings) == 64, "Offset mismatch for UCameraAnimationSequenceCameraStandIn::PostProcessSettings");
static_assert(offsetof(UCameraAnimationSequenceCameraStandIn, PostProcessBlendWeight) == 2032, "Offset mismatch for UCameraAnimationSequenceCameraStandIn::PostProcessBlendWeight");
static_assert(offsetof(UCameraAnimationSequenceCameraStandIn, Filmback) == 2036, "Offset mismatch for UCameraAnimationSequenceCameraStandIn::Filmback");
static_assert(offsetof(UCameraAnimationSequenceCameraStandIn, LensSettings) == 2056, "Offset mismatch for UCameraAnimationSequenceCameraStandIn::LensSettings");
static_assert(offsetof(UCameraAnimationSequenceCameraStandIn, FocusSettings) == 2088, "Offset mismatch for UCameraAnimationSequenceCameraStandIn::FocusSettings");
static_assert(offsetof(UCameraAnimationSequenceCameraStandIn, CurrentFocalLength) == 2176, "Offset mismatch for UCameraAnimationSequenceCameraStandIn::CurrentFocalLength");
static_assert(offsetof(UCameraAnimationSequenceCameraStandIn, CurrentAperture) == 2180, "Offset mismatch for UCameraAnimationSequenceCameraStandIn::CurrentAperture");
static_assert(offsetof(UCameraAnimationSequenceCameraStandIn, CurrentFocusDistance) == 2184, "Offset mismatch for UCameraAnimationSequenceCameraStandIn::CurrentFocusDistance");

// /Script/TemplateSequence.CameraAnimationSequencePlayer
// Kind: Class; super: Object
class UCameraAnimationSequencePlayer
{
public:
    std::uint8_t Pad_0000[0x100]; // 0x0000
    void* BoundObjectOverride; // 0x0100 (Size: 0x8, Type: ObjectProperty)
    void* Sequence; // 0x0108 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t RootTemplateInstance[0x1]; // 0x0110 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UCameraAnimationSequencePlayer, BoundObjectOverride) == 256, "Offset mismatch for UCameraAnimationSequencePlayer::BoundObjectOverride");
static_assert(offsetof(UCameraAnimationSequencePlayer, Sequence) == 264, "Offset mismatch for UCameraAnimationSequencePlayer::Sequence");
static_assert(offsetof(UCameraAnimationSequencePlayer, RootTemplateInstance) == 272, "Offset mismatch for UCameraAnimationSequencePlayer::RootTemplateInstance");

// /Script/TemplateSequence.CameraAnimationSequenceSubsystem
// Kind: Class; super: WorldSubsystem
class UCameraAnimationSequenceSubsystem
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* Linker; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UCameraAnimationSequenceSubsystem, Linker) == 56, "Offset mismatch for UCameraAnimationSequenceSubsystem::Linker");

// /Script/TemplateSequence.CameraAnimationSpawnableSystem
// Kind: Class; super: MovieSceneEntitySystem
class UCameraAnimationSpawnableSystem
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Linker; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UCameraAnimationSpawnableSystem, Linker) == 40, "Offset mismatch for UCameraAnimationSpawnableSystem::Linker");

// /Script/TemplateSequence.SequenceCameraShakePattern
// Kind: Class; super: CameraShakePattern
class USequenceCameraShakePattern
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Sequence; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    float PlayRate; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float Scale; // 0x0034 (Size: 0x4, Type: FloatProperty)
    float BlendInTime; // 0x0038 (Size: 0x4, Type: FloatProperty)
    float BlendOutTime; // 0x003C (Size: 0x4, Type: FloatProperty)
    float RandomSegmentDuration; // 0x0040 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bRandomSegment; // 0x0044 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0045
    void* player; // 0x0048 (Size: 0x8, Type: ObjectProperty)
    void* CameraStandIn; // 0x0050 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USequenceCameraShakePattern, Sequence) == 40, "Offset mismatch for USequenceCameraShakePattern::Sequence");
static_assert(offsetof(USequenceCameraShakePattern, PlayRate) == 48, "Offset mismatch for USequenceCameraShakePattern::PlayRate");
static_assert(offsetof(USequenceCameraShakePattern, Scale) == 52, "Offset mismatch for USequenceCameraShakePattern::Scale");
static_assert(offsetof(USequenceCameraShakePattern, BlendInTime) == 56, "Offset mismatch for USequenceCameraShakePattern::BlendInTime");
static_assert(offsetof(USequenceCameraShakePattern, BlendOutTime) == 60, "Offset mismatch for USequenceCameraShakePattern::BlendOutTime");
static_assert(offsetof(USequenceCameraShakePattern, RandomSegmentDuration) == 64, "Offset mismatch for USequenceCameraShakePattern::RandomSegmentDuration");
static_assert(offsetof(USequenceCameraShakePattern, bRandomSegment) == 68, "Offset mismatch for USequenceCameraShakePattern::bRandomSegment");
static_assert(offsetof(USequenceCameraShakePattern, player) == 72, "Offset mismatch for USequenceCameraShakePattern::player");
static_assert(offsetof(USequenceCameraShakePattern, CameraStandIn) == 80, "Offset mismatch for USequenceCameraShakePattern::CameraStandIn");

// /Script/TemplateSequence.SequenceCameraShakeTestUtil
// Kind: Class; super: BlueprintFunctionLibrary
class USequenceCameraShakeTestUtil
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TemplateSequence.TemplateSequence
// Kind: Class; super: MovieSceneSequence
class UTemplateSequence
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    void* MovieScene; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t BoundActorClass[0x20]; // 0x0070 (Size: 0x20, Type: SoftClassProperty)
    TMap<void*, void*> BoundActorComponents; // 0x0090 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UTemplateSequence, MovieScene) == 104, "Offset mismatch for UTemplateSequence::MovieScene");
static_assert(offsetof(UTemplateSequence, BoundActorClass) == 112, "Offset mismatch for UTemplateSequence::BoundActorClass");
static_assert(offsetof(UTemplateSequence, BoundActorComponents) == 144, "Offset mismatch for UTemplateSequence::BoundActorComponents");

// /Script/TemplateSequence.TemplateSequenceActor
// Kind: Class; super: Actor
class UTemplateSequenceActor
{
public:
    std::uint8_t Pad_0000[0x278]; // 0x0000
    std::uint8_t PlaybackSettings[0x28]; // 0x0278 (Size: 0x28, Type: StructProperty)
    void* SequencePlayer; // 0x02A0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t TemplateSequence[0x18]; // 0x02A8 (Size: 0x18, Type: StructProperty)
    std::uint8_t BindingOverride[0x1]; // 0x02C0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UTemplateSequenceActor, PlaybackSettings) == 632, "Offset mismatch for UTemplateSequenceActor::PlaybackSettings");
static_assert(offsetof(UTemplateSequenceActor, SequencePlayer) == 672, "Offset mismatch for UTemplateSequenceActor::SequencePlayer");
static_assert(offsetof(UTemplateSequenceActor, TemplateSequence) == 680, "Offset mismatch for UTemplateSequenceActor::TemplateSequence");
static_assert(offsetof(UTemplateSequenceActor, BindingOverride) == 704, "Offset mismatch for UTemplateSequenceActor::BindingOverride");

// /Script/TemplateSequence.TemplateSequencePlayer
// Kind: Class; super: MovieSceneSequencePlayer
class UTemplateSequencePlayer
{
public:
    std::uint8_t Pad_0000[0xD8]; // 0x0000
    TScriptInterface<void> Observer; // 0x00D8 (Size: 0x10, Type: InterfaceProperty)
    FMulticastInlineDelegate OnPlay; // 0x00E8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPlayReverse; // 0x00F8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnStop; // 0x0108 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPause; // 0x0118 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnFinished; // 0x0128 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0138
    std::uint8_t Status; // 0x0148 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0149
    std::uint8_t bReversePlayback; // 0x014C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0xB]; // 0x014D
    void* Sequence; // 0x0158 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t StartTime[0x4]; // 0x0160 (Size: 0x4, Type: StructProperty)
    std::int32_t DurationFrames; // 0x0164 (Size: 0x4, Type: IntProperty)
    float DurationSubFrames; // 0x0168 (Size: 0x4, Type: FloatProperty)
    std::int32_t CurrentNumLoops; // 0x016C (Size: 0x4, Type: IntProperty)
    std::int32_t SerialNumber; // 0x0170 (Size: 0x4, Type: IntProperty)
    std::uint8_t PlaybackSettings[0x54]; // 0x0174 (Size: 0x54, Type: StructProperty)
    std::uint8_t RootTemplateInstance[0xAC]; // 0x01C8 (Size: 0xAC, Type: StructProperty)
    std::uint8_t NetSyncProps[0x14]; // 0x0274 (Size: 0x14, Type: StructProperty)
    TScriptInterface<void> PlaybackClient; // 0x0288 (Size: 0x10, Type: InterfaceProperty)
    void* TickManager; // 0x0298 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UTemplateSequencePlayer, Observer) == 216, "Offset mismatch for UTemplateSequencePlayer::Observer");
static_assert(offsetof(UTemplateSequencePlayer, OnPlay) == 232, "Offset mismatch for UTemplateSequencePlayer::OnPlay");
static_assert(offsetof(UTemplateSequencePlayer, OnPlayReverse) == 248, "Offset mismatch for UTemplateSequencePlayer::OnPlayReverse");
static_assert(offsetof(UTemplateSequencePlayer, OnStop) == 264, "Offset mismatch for UTemplateSequencePlayer::OnStop");
static_assert(offsetof(UTemplateSequencePlayer, OnPause) == 280, "Offset mismatch for UTemplateSequencePlayer::OnPause");
static_assert(offsetof(UTemplateSequencePlayer, OnFinished) == 296, "Offset mismatch for UTemplateSequencePlayer::OnFinished");
static_assert(offsetof(UTemplateSequencePlayer, Status) == 328, "Offset mismatch for UTemplateSequencePlayer::Status");
static_assert(offsetof(UTemplateSequencePlayer, bReversePlayback) == 332, "Offset mismatch for UTemplateSequencePlayer::bReversePlayback");
static_assert(offsetof(UTemplateSequencePlayer, Sequence) == 344, "Offset mismatch for UTemplateSequencePlayer::Sequence");
static_assert(offsetof(UTemplateSequencePlayer, StartTime) == 352, "Offset mismatch for UTemplateSequencePlayer::StartTime");
static_assert(offsetof(UTemplateSequencePlayer, DurationFrames) == 356, "Offset mismatch for UTemplateSequencePlayer::DurationFrames");
static_assert(offsetof(UTemplateSequencePlayer, DurationSubFrames) == 360, "Offset mismatch for UTemplateSequencePlayer::DurationSubFrames");
static_assert(offsetof(UTemplateSequencePlayer, CurrentNumLoops) == 364, "Offset mismatch for UTemplateSequencePlayer::CurrentNumLoops");
static_assert(offsetof(UTemplateSequencePlayer, SerialNumber) == 368, "Offset mismatch for UTemplateSequencePlayer::SerialNumber");
static_assert(offsetof(UTemplateSequencePlayer, PlaybackSettings) == 372, "Offset mismatch for UTemplateSequencePlayer::PlaybackSettings");
static_assert(offsetof(UTemplateSequencePlayer, RootTemplateInstance) == 456, "Offset mismatch for UTemplateSequencePlayer::RootTemplateInstance");
static_assert(offsetof(UTemplateSequencePlayer, NetSyncProps) == 628, "Offset mismatch for UTemplateSequencePlayer::NetSyncProps");
static_assert(offsetof(UTemplateSequencePlayer, PlaybackClient) == 648, "Offset mismatch for UTemplateSequencePlayer::PlaybackClient");
static_assert(offsetof(UTemplateSequencePlayer, TickManager) == 664, "Offset mismatch for UTemplateSequencePlayer::TickManager");

// /Script/TemplateSequence.TemplateSequencePropertyScalingEvaluatorSystem
// Kind: Class; super: MovieSceneEntitySystem
class UTemplateSequencePropertyScalingEvaluatorSystem
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Linker; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UTemplateSequencePropertyScalingEvaluatorSystem, Linker) == 40, "Offset mismatch for UTemplateSequencePropertyScalingEvaluatorSystem::Linker");

// /Script/TemplateSequence.TemplateSequencePropertyScalingInstantiatorSystem
// Kind: Class; super: MovieSceneEntitySystem
class UTemplateSequencePropertyScalingInstantiatorSystem
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Linker; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UTemplateSequencePropertyScalingInstantiatorSystem, Linker) == 40, "Offset mismatch for UTemplateSequencePropertyScalingInstantiatorSystem::Linker");

// /Script/TemplateSequence.TemplateSequenceSection
// Kind: Class; super: MovieSceneSubSection
class UTemplateSequenceSection
{
public:
    std::uint8_t Pad_0000[0x6A8]; // 0x0000
    TArray<void*> PropertyScales; // 0x06A8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UTemplateSequenceSection, PropertyScales) == 1704, "Offset mismatch for UTemplateSequenceSection::PropertyScales");

// /Script/TemplateSequence.TemplateSequenceSystem
// Kind: Class; super: MovieSceneEntitySystem
class UTemplateSequenceSystem
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Linker; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UTemplateSequenceSystem, Linker) == 40, "Offset mismatch for UTemplateSequenceSystem::Linker");

// /Script/TemplateSequence.TemplateSequenceTrack
// Kind: Class; super: MovieSceneSubTrack
class UTemplateSequenceTrack
{
public:
    std::uint8_t Pad_0000[0xF8]; // 0x0000
    TArray<void*> Sections; // 0x00F8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UTemplateSequenceTrack, Sections) == 248, "Offset mismatch for UTemplateSequenceTrack::Sections");

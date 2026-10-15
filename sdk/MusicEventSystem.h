/**
 * decamp dumper generated SDK
 * Package: /Script/MusicEventSystem
 */
#pragma once
#include "Basic.h"

// /Script/MusicEventSystem.MusicEventData
// Kind: ScriptStruct; super: TableRowBase
struct FMusicEventData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t EventTag[0x4]; // 0x0008 (Size: 0x4, Type: StructProperty)
    std::uint8_t ResolutionRule; // 0x000C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x000D
    float FadeInTime; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float FadeOutTime; // 0x0014 (Size: 0x4, Type: FloatProperty)
    std::int32_t MaxConcurrentEvents; // 0x0018 (Size: 0x4, Type: IntProperty)
    float AttenuationEvalThreshold; // 0x001C (Size: 0x4, Type: FloatProperty)
    FString Description; // 0x0020 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FMusicEventData, EventTag) == 8, "Offset mismatch for FMusicEventData::EventTag");
static_assert(offsetof(FMusicEventData, ResolutionRule) == 12, "Offset mismatch for FMusicEventData::ResolutionRule");
static_assert(offsetof(FMusicEventData, FadeInTime) == 16, "Offset mismatch for FMusicEventData::FadeInTime");
static_assert(offsetof(FMusicEventData, FadeOutTime) == 20, "Offset mismatch for FMusicEventData::FadeOutTime");
static_assert(offsetof(FMusicEventData, MaxConcurrentEvents) == 24, "Offset mismatch for FMusicEventData::MaxConcurrentEvents");
static_assert(offsetof(FMusicEventData, AttenuationEvalThreshold) == 28, "Offset mismatch for FMusicEventData::AttenuationEvalThreshold");
static_assert(offsetof(FMusicEventData, Description) == 32, "Offset mismatch for FMusicEventData::Description");

// /Script/MusicEventSystem.SoundSelectorMusicEvent
// Kind: ScriptStruct; super: AudioMutatorSelector
struct FSoundSelectorMusicEvent
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t MusicEventTagQuery[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSoundSelectorMusicEvent, MusicEventTagQuery) == 8, "Offset mismatch for FSoundSelectorMusicEvent::MusicEventTagQuery");

// /Script/MusicEventSystem.MusicEventController
// Kind: Class; super: Interface
class UMusicEventController
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MusicEventSystem.MusicEventInstance
// Kind: Class; super: Object
class UMusicEventInstance
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TWeakObjectPtr<void> Component; // 0x0028 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> MusicClockComponent; // 0x0030 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0001[0x78]; // 0x0038
    void* Subsystem; // 0x00B0 (Size: 0x8, Type: ObjectProperty)
    void* SubsystemData; // 0x00B8 (Size: 0x8, Type: ObjectProperty)
    FMulticastInlineDelegate OnIsAudibleChanged; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnIsDominantChanged; // 0x00D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnWithinAttenuationChanged; // 0x00E0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPriorityChanged; // 0x00F0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnClockChanged; // 0x0100 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPlaybackCompleted; // 0x0110 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0002[0x40]; // 0x0120
    void* VolumeCB; // 0x0160 (Size: 0x8, Type: ObjectProperty)
    void* VolumeCBM; // 0x0168 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMusicEventInstance, Component) == 40, "Offset mismatch for UMusicEventInstance::Component");
static_assert(offsetof(UMusicEventInstance, MusicClockComponent) == 48, "Offset mismatch for UMusicEventInstance::MusicClockComponent");
static_assert(offsetof(UMusicEventInstance, Subsystem) == 176, "Offset mismatch for UMusicEventInstance::Subsystem");
static_assert(offsetof(UMusicEventInstance, SubsystemData) == 184, "Offset mismatch for UMusicEventInstance::SubsystemData");
static_assert(offsetof(UMusicEventInstance, OnIsAudibleChanged) == 192, "Offset mismatch for UMusicEventInstance::OnIsAudibleChanged");
static_assert(offsetof(UMusicEventInstance, OnIsDominantChanged) == 208, "Offset mismatch for UMusicEventInstance::OnIsDominantChanged");
static_assert(offsetof(UMusicEventInstance, OnWithinAttenuationChanged) == 224, "Offset mismatch for UMusicEventInstance::OnWithinAttenuationChanged");
static_assert(offsetof(UMusicEventInstance, OnPriorityChanged) == 240, "Offset mismatch for UMusicEventInstance::OnPriorityChanged");
static_assert(offsetof(UMusicEventInstance, OnClockChanged) == 256, "Offset mismatch for UMusicEventInstance::OnClockChanged");
static_assert(offsetof(UMusicEventInstance, OnPlaybackCompleted) == 272, "Offset mismatch for UMusicEventInstance::OnPlaybackCompleted");
static_assert(offsetof(UMusicEventInstance, VolumeCB) == 352, "Offset mismatch for UMusicEventInstance::VolumeCB");
static_assert(offsetof(UMusicEventInstance, VolumeCBM) == 360, "Offset mismatch for UMusicEventInstance::VolumeCBM");

// /Script/MusicEventSystem.MusicEventSubsystem
// Kind: Class; super: GameInstanceSubsystem
class UMusicEventSubsystem
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    std::uint8_t SubsystemDataAssetPath[0x18]; // 0x0058 (Size: 0x18, Type: StructProperty)
    void* SubsystemData; // 0x0070 (Size: 0x8, Type: ObjectProperty)
    FMulticastInlineDelegate OnHighestPriorityMusicEventChanged_BP; // 0x0078 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x18]; // 0x0088
    FMulticastInlineDelegate OnHighestPriorityEventWithClockChanged_BP; // 0x00A0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0002[0x18]; // 0x00B0
    FMulticastInlineDelegate OnHighestPriorityEventWithRunningClockChanged_BP; // 0x00C8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0003[0x18]; // 0x00D8
    FMulticastInlineDelegate OnHighestPriorityClockBeat_BP; // 0x00F0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    TArray<void*> EventDataArray; // 0x0100 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> EventInstances; // 0x0110 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> EventInstancesFadingOut; // 0x0120 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> TickingEventInstances; // 0x0130 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AllComponents; // 0x0140 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> OwnedComponents; // 0x0150 (Size: 0x10, Type: ArrayProperty)
    void* DebugWidget; // 0x0160 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> EventInstancesWithClocks; // 0x0168 (Size: 0x10, Type: ArrayProperty)
    void* HighestPriorityInstanceWithRunningClock; // 0x0178 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> MaterialParameterCollectionInstance; // 0x0180 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UMusicEventSubsystem, SubsystemDataAssetPath) == 88, "Offset mismatch for UMusicEventSubsystem::SubsystemDataAssetPath");
static_assert(offsetof(UMusicEventSubsystem, SubsystemData) == 112, "Offset mismatch for UMusicEventSubsystem::SubsystemData");
static_assert(offsetof(UMusicEventSubsystem, OnHighestPriorityMusicEventChanged_BP) == 120, "Offset mismatch for UMusicEventSubsystem::OnHighestPriorityMusicEventChanged_BP");
static_assert(offsetof(UMusicEventSubsystem, OnHighestPriorityEventWithClockChanged_BP) == 160, "Offset mismatch for UMusicEventSubsystem::OnHighestPriorityEventWithClockChanged_BP");
static_assert(offsetof(UMusicEventSubsystem, OnHighestPriorityEventWithRunningClockChanged_BP) == 200, "Offset mismatch for UMusicEventSubsystem::OnHighestPriorityEventWithRunningClockChanged_BP");
static_assert(offsetof(UMusicEventSubsystem, OnHighestPriorityClockBeat_BP) == 240, "Offset mismatch for UMusicEventSubsystem::OnHighestPriorityClockBeat_BP");
static_assert(offsetof(UMusicEventSubsystem, EventDataArray) == 256, "Offset mismatch for UMusicEventSubsystem::EventDataArray");
static_assert(offsetof(UMusicEventSubsystem, EventInstances) == 272, "Offset mismatch for UMusicEventSubsystem::EventInstances");
static_assert(offsetof(UMusicEventSubsystem, EventInstancesFadingOut) == 288, "Offset mismatch for UMusicEventSubsystem::EventInstancesFadingOut");
static_assert(offsetof(UMusicEventSubsystem, TickingEventInstances) == 304, "Offset mismatch for UMusicEventSubsystem::TickingEventInstances");
static_assert(offsetof(UMusicEventSubsystem, AllComponents) == 320, "Offset mismatch for UMusicEventSubsystem::AllComponents");
static_assert(offsetof(UMusicEventSubsystem, OwnedComponents) == 336, "Offset mismatch for UMusicEventSubsystem::OwnedComponents");
static_assert(offsetof(UMusicEventSubsystem, DebugWidget) == 352, "Offset mismatch for UMusicEventSubsystem::DebugWidget");
static_assert(offsetof(UMusicEventSubsystem, EventInstancesWithClocks) == 360, "Offset mismatch for UMusicEventSubsystem::EventInstancesWithClocks");
static_assert(offsetof(UMusicEventSubsystem, HighestPriorityInstanceWithRunningClock) == 376, "Offset mismatch for UMusicEventSubsystem::HighestPriorityInstanceWithRunningClock");
static_assert(offsetof(UMusicEventSubsystem, MaterialParameterCollectionInstance) == 384, "Offset mismatch for UMusicEventSubsystem::MaterialParameterCollectionInstance");

// /Script/MusicEventSystem.MusicEventSubsystemData
// Kind: Class; super: PrimaryDataAsset
class UMusicEventSubsystemData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* EventDataRegistry; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    void* DebugWidgetClass; // 0x0030 (Size: 0x8, Type: ClassProperty)
    std::uint8_t MusicClockMaterialParameters[0x60]; // 0x0038 (Size: 0x60, Type: StructProperty)
    void* MaterialParameterCollection; // 0x0098 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMusicEventSubsystemData, EventDataRegistry) == 40, "Offset mismatch for UMusicEventSubsystemData::EventDataRegistry");
static_assert(offsetof(UMusicEventSubsystemData, DebugWidgetClass) == 48, "Offset mismatch for UMusicEventSubsystemData::DebugWidgetClass");
static_assert(offsetof(UMusicEventSubsystemData, MusicClockMaterialParameters) == 56, "Offset mismatch for UMusicEventSubsystemData::MusicClockMaterialParameters");
static_assert(offsetof(UMusicEventSubsystemData, MaterialParameterCollection) == 152, "Offset mismatch for UMusicEventSubsystemData::MaterialParameterCollection");

// /Script/MusicEventSystem.MusicEventSubsystemDebugWidget
// Kind: Class; super: UserWidget
class UMusicEventSubsystemDebugWidget
{
public:
    std::uint8_t Pad_0000[0x1A0]; // 0x0000
    std::uint8_t ColorAndOpacity[0x10]; // 0x01A0 (Size: 0x10, Type: StructProperty)
    std::uint8_t ColorAndOpacityDelegate[0xC]; // 0x01B0 (Size: 0xC, Type: DelegateProperty)
    std::uint8_t ForegroundColor[0x14]; // 0x01BC (Size: 0x14, Type: StructProperty)
    FScriptDelegate ForegroundColorDelegate; // 0x01D0 (Size: 0x10, Type: DelegateProperty)
    FMulticastInlineDelegate OnVisibilityChanged; // 0x01E0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x30]; // 0x01F0
    std::uint8_t Padding[0x10]; // 0x0220 (Size: 0x10, Type: StructProperty)
    std::int32_t Priority; // 0x0230 (Size: 0x4, Type: IntProperty)
    std::uint8_t bAutomaticallyRegisterInputOnConstruction; // 0x0234 (Size: 0x1, Type: BoolProperty)
    // 0x0234 BoolProperty bIsFocusable (shared storage)
    // 0x0234 BoolProperty bStopAction (shared storage)
    std::uint8_t Pad_0002[0x3]; // 0x0235
    TArray<void*> QueuedWidgetAnimationTransitions; // 0x0238 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ActiveSequencePlayers; // 0x0248 (Size: 0x10, Type: ArrayProperty)
    void* AnimationTickManager; // 0x0258 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> StoppedSequencePlayers; // 0x0260 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0003[0x18]; // 0x0270
    TArray<void*> NamedSlotBindings; // 0x0288 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Extensions; // 0x0298 (Size: 0x10, Type: ArrayProperty)
    void* WidgetTree; // 0x02A8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bHasScriptImplementedPaint; // 0x02B0 (Size: 0x1, Type: BoolProperty)
    // 0x02B0 BoolProperty bHasScriptImplementedTick (shared storage)
    std::uint8_t Pad_0004[0x17]; // 0x02B1
    std::uint8_t TickFrequency; // 0x02C8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0005[0x3]; // 0x02C9
    std::uint8_t DesiredFocusWidget[0xC]; // 0x02CC (Size: 0xC, Type: StructProperty)
    void* InputComponent; // 0x02D8 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> AnimationCallbacks; // 0x02E0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMusicEventSubsystemDebugWidget, ColorAndOpacity) == 416, "Offset mismatch for UMusicEventSubsystemDebugWidget::ColorAndOpacity");
static_assert(offsetof(UMusicEventSubsystemDebugWidget, ColorAndOpacityDelegate) == 432, "Offset mismatch for UMusicEventSubsystemDebugWidget::ColorAndOpacityDelegate");
static_assert(offsetof(UMusicEventSubsystemDebugWidget, ForegroundColor) == 444, "Offset mismatch for UMusicEventSubsystemDebugWidget::ForegroundColor");
static_assert(offsetof(UMusicEventSubsystemDebugWidget, ForegroundColorDelegate) == 464, "Offset mismatch for UMusicEventSubsystemDebugWidget::ForegroundColorDelegate");
static_assert(offsetof(UMusicEventSubsystemDebugWidget, OnVisibilityChanged) == 480, "Offset mismatch for UMusicEventSubsystemDebugWidget::OnVisibilityChanged");
static_assert(offsetof(UMusicEventSubsystemDebugWidget, Padding) == 544, "Offset mismatch for UMusicEventSubsystemDebugWidget::Padding");
static_assert(offsetof(UMusicEventSubsystemDebugWidget, Priority) == 560, "Offset mismatch for UMusicEventSubsystemDebugWidget::Priority");
static_assert(offsetof(UMusicEventSubsystemDebugWidget, bAutomaticallyRegisterInputOnConstruction) == 564, "Offset mismatch for UMusicEventSubsystemDebugWidget::bAutomaticallyRegisterInputOnConstruction");
static_assert(offsetof(UMusicEventSubsystemDebugWidget, QueuedWidgetAnimationTransitions) == 568, "Offset mismatch for UMusicEventSubsystemDebugWidget::QueuedWidgetAnimationTransitions");
static_assert(offsetof(UMusicEventSubsystemDebugWidget, ActiveSequencePlayers) == 584, "Offset mismatch for UMusicEventSubsystemDebugWidget::ActiveSequencePlayers");
static_assert(offsetof(UMusicEventSubsystemDebugWidget, AnimationTickManager) == 600, "Offset mismatch for UMusicEventSubsystemDebugWidget::AnimationTickManager");
static_assert(offsetof(UMusicEventSubsystemDebugWidget, StoppedSequencePlayers) == 608, "Offset mismatch for UMusicEventSubsystemDebugWidget::StoppedSequencePlayers");
static_assert(offsetof(UMusicEventSubsystemDebugWidget, NamedSlotBindings) == 648, "Offset mismatch for UMusicEventSubsystemDebugWidget::NamedSlotBindings");
static_assert(offsetof(UMusicEventSubsystemDebugWidget, Extensions) == 664, "Offset mismatch for UMusicEventSubsystemDebugWidget::Extensions");
static_assert(offsetof(UMusicEventSubsystemDebugWidget, WidgetTree) == 680, "Offset mismatch for UMusicEventSubsystemDebugWidget::WidgetTree");
static_assert(offsetof(UMusicEventSubsystemDebugWidget, bHasScriptImplementedPaint) == 688, "Offset mismatch for UMusicEventSubsystemDebugWidget::bHasScriptImplementedPaint");
static_assert(offsetof(UMusicEventSubsystemDebugWidget, TickFrequency) == 712, "Offset mismatch for UMusicEventSubsystemDebugWidget::TickFrequency");
static_assert(offsetof(UMusicEventSubsystemDebugWidget, DesiredFocusWidget) == 716, "Offset mismatch for UMusicEventSubsystemDebugWidget::DesiredFocusWidget");
static_assert(offsetof(UMusicEventSubsystemDebugWidget, InputComponent) == 728, "Offset mismatch for UMusicEventSubsystemDebugWidget::InputComponent");
static_assert(offsetof(UMusicEventSubsystemDebugWidget, AnimationCallbacks) == 736, "Offset mismatch for UMusicEventSubsystemDebugWidget::AnimationCallbacks");

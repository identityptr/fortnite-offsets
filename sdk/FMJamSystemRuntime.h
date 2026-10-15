/**
 * decamp dumper generated SDK
 * Package: /Script/FMJamSystemRuntime
 */
#pragma once
#include "Basic.h"

// /Script/FMJamSystemRuntime.ControllerComponent_JamEmotePersistence
// Kind: Class; super: FortControllerComponent
class UControllerComponent_JamEmotePersistence
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    void* LastStartedJamEmote; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UControllerComponent_JamEmotePersistence, LastStartedJamEmote) == 200, "Offset mismatch for UControllerComponent_JamEmotePersistence::LastStartedJamEmote");

// /Script/FMJamSystemRuntime.JamControllerComponent
// Kind: Class; super: ControllerComponent
class UJamControllerComponent
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

static_assert(offsetof(UJamControllerComponent, PrimaryComponentTick) == 56, "Offset mismatch for UJamControllerComponent::PrimaryComponentTick");
static_assert(offsetof(UJamControllerComponent, ComponentTags) == 104, "Offset mismatch for UJamControllerComponent::ComponentTags");
static_assert(offsetof(UJamControllerComponent, AssetUserData) == 120, "Offset mismatch for UJamControllerComponent::AssetUserData");
static_assert(offsetof(UJamControllerComponent, UCSSerializationIndex) == 144, "Offset mismatch for UJamControllerComponent::UCSSerializationIndex");
static_assert(offsetof(UJamControllerComponent, bNetAddressable) == 152, "Offset mismatch for UJamControllerComponent::bNetAddressable");
static_assert(offsetof(UJamControllerComponent, bAutoActivate) == 154, "Offset mismatch for UJamControllerComponent::bAutoActivate");
static_assert(offsetof(UJamControllerComponent, bIsEditorOnly) == 155, "Offset mismatch for UJamControllerComponent::bIsEditorOnly");
static_assert(offsetof(UJamControllerComponent, CreationMethod) == 185, "Offset mismatch for UJamControllerComponent::CreationMethod");
static_assert(offsetof(UJamControllerComponent, OnComponentActivated) == 186, "Offset mismatch for UJamControllerComponent::OnComponentActivated");
static_assert(offsetof(UJamControllerComponent, OnComponentDeactivated) == 187, "Offset mismatch for UJamControllerComponent::OnComponentDeactivated");

// /Script/FMJamSystemRuntime.JamControllerComponent_LoopPreloader
// Kind: Class; super: ControllerComponent
class UJamControllerComponent_LoopPreloader
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t bHaveRegisteredForOnLoadoutFilled; // 0x00C0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UJamControllerComponent_LoopPreloader, bHaveRegisteredForOnLoadoutFilled) == 192, "Offset mismatch for UJamControllerComponent_LoopPreloader::bHaveRegisteredForOnLoadoutFilled");

// /Script/FMJamSystemRuntime.JamGlobalControlsWidget
// Kind: Class; super: CommonActivatableWidget
class UJamGlobalControlsWidget
{
public:
    std::uint8_t Pad_0000[0x4A0]; // 0x0000
    void* Button_Close; // 0x04A0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x10]; // 0x04A8
    void* GameplayAbility; // 0x04B8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x1C]; // 0x04C0
    std::uint8_t HasBlockedMovementInput; // 0x04DC (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UJamGlobalControlsWidget, Button_Close) == 1184, "Offset mismatch for UJamGlobalControlsWidget::Button_Close");
static_assert(offsetof(UJamGlobalControlsWidget, GameplayAbility) == 1208, "Offset mismatch for UJamGlobalControlsWidget::GameplayAbility");
static_assert(offsetof(UJamGlobalControlsWidget, HasBlockedMovementInput) == 1244, "Offset mismatch for UJamGlobalControlsWidget::HasBlockedMovementInput");

// /Script/FMJamSystemRuntime.JamLoopsSongPartPlayerOverrideComponent
// Kind: Class; super: SparksSongPartPlayerOverrideComponent
class UJamLoopsSongPartPlayerOverrideComponent
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t OverrideOverlayWidget[0x20]; // 0x00E0 (Size: 0x20, Type: SoftClassProperty)
    TSoftClassPtr<void> NewOverrideOverlayWidget; // 0x0100 (Size: 0x28, Type: SoftClassProperty)
};

static_assert(offsetof(UJamLoopsSongPartPlayerOverrideComponent, OverrideOverlayWidget) == 224, "Offset mismatch for UJamLoopsSongPartPlayerOverrideComponent::OverrideOverlayWidget");
static_assert(offsetof(UJamLoopsSongPartPlayerOverrideComponent, NewOverrideOverlayWidget) == 256, "Offset mismatch for UJamLoopsSongPartPlayerOverrideComponent::NewOverrideOverlayWidget");

// /Script/FMJamSystemRuntime.JamOnOffSwitchComponent
// Kind: Class; super: PlayerStateComponent
class UJamOnOffSwitchComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t bEnableJam[0x28]; // 0x00C0 (Size: 0x28, Type: StructProperty)
    void* JamBlockerEffect; // 0x00E8 (Size: 0x8, Type: ClassProperty)
    std::uint8_t JamBlockerEffectHandle[0x14]; // 0x00F0 (Size: 0x14, Type: StructProperty)
    std::uint8_t GamePhaseUpdatedEventHandle[0x1]; // 0x0104 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJamOnOffSwitchComponent, bEnableJam) == 192, "Offset mismatch for UJamOnOffSwitchComponent::bEnableJam");
static_assert(offsetof(UJamOnOffSwitchComponent, JamBlockerEffect) == 232, "Offset mismatch for UJamOnOffSwitchComponent::JamBlockerEffect");
static_assert(offsetof(UJamOnOffSwitchComponent, JamBlockerEffectHandle) == 240, "Offset mismatch for UJamOnOffSwitchComponent::JamBlockerEffectHandle");
static_assert(offsetof(UJamOnOffSwitchComponent, GamePhaseUpdatedEventHandle) == 260, "Offset mismatch for UJamOnOffSwitchComponent::GamePhaseUpdatedEventHandle");

// /Script/FMJamSystemRuntime.JamSessionComponent_QuestVerbProvider
// Kind: Class; super: ActorComponent
class UJamSessionComponent_QuestVerbProvider
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

static_assert(offsetof(UJamSessionComponent_QuestVerbProvider, PrimaryComponentTick) == 56, "Offset mismatch for UJamSessionComponent_QuestVerbProvider::PrimaryComponentTick");
static_assert(offsetof(UJamSessionComponent_QuestVerbProvider, ComponentTags) == 104, "Offset mismatch for UJamSessionComponent_QuestVerbProvider::ComponentTags");
static_assert(offsetof(UJamSessionComponent_QuestVerbProvider, AssetUserData) == 120, "Offset mismatch for UJamSessionComponent_QuestVerbProvider::AssetUserData");
static_assert(offsetof(UJamSessionComponent_QuestVerbProvider, UCSSerializationIndex) == 144, "Offset mismatch for UJamSessionComponent_QuestVerbProvider::UCSSerializationIndex");
static_assert(offsetof(UJamSessionComponent_QuestVerbProvider, bNetAddressable) == 152, "Offset mismatch for UJamSessionComponent_QuestVerbProvider::bNetAddressable");
static_assert(offsetof(UJamSessionComponent_QuestVerbProvider, bAutoActivate) == 154, "Offset mismatch for UJamSessionComponent_QuestVerbProvider::bAutoActivate");
static_assert(offsetof(UJamSessionComponent_QuestVerbProvider, bIsEditorOnly) == 155, "Offset mismatch for UJamSessionComponent_QuestVerbProvider::bIsEditorOnly");
static_assert(offsetof(UJamSessionComponent_QuestVerbProvider, CreationMethod) == 185, "Offset mismatch for UJamSessionComponent_QuestVerbProvider::CreationMethod");
static_assert(offsetof(UJamSessionComponent_QuestVerbProvider, OnComponentActivated) == 186, "Offset mismatch for UJamSessionComponent_QuestVerbProvider::OnComponentActivated");
static_assert(offsetof(UJamSessionComponent_QuestVerbProvider, OnComponentDeactivated) == 187, "Offset mismatch for UJamSessionComponent_QuestVerbProvider::OnComponentDeactivated");

// /Script/FMJamSystemRuntime.JamSystemBPFL
// Kind: Class; super: BlueprintFunctionLibrary
class UJamSystemBPFL
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FMJamSystemRuntime.JamSystemEmoteBPFL
// Kind: Class; super: BlueprintFunctionLibrary
class UJamSystemEmoteBPFL
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FMJamSystemRuntime.PawnComponent_JamInstrumentAnim
// Kind: Class; super: SparksInstrumentAnimPawnComponent
class UPawnComponent_JamInstrumentAnim
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    void* InstrumentAnimations; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x00C8
    void* MusicClock; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
    TScriptInterface<void> MidiEventDriver; // 0x00D8 (Size: 0x10, Type: InterfaceProperty)
    std::uint8_t CosmeticInstrumentType; // 0x00E8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t AnimatableState; // 0x00E9 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bCanPlayMidiAnimations; // 0x00EA (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x5]; // 0x00EB
    void* StagePropActor; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0003[0x30]; // 0x00F8
    FMulticastInlineDelegate BP_OnPlayerMusicClockChanged; // 0x0128 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0004[0x18]; // 0x0138
    FMulticastInlineDelegate BP_OnPlayerMidiEventDriverChanged; // 0x0150 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0005[0x18]; // 0x0160
    FMulticastInlineDelegate BP_OnPlayerCosmeticInstrumentTypeChanged; // 0x0178 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0006[0x18]; // 0x0188
    FMulticastInlineDelegate BP_OnPlayerAnimatableStateChanged; // 0x01A0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0007[0x18]; // 0x01B0
    FMulticastInlineDelegate BP_OnStagePropActorChanged; // 0x01C8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UPawnComponent_JamInstrumentAnim, InstrumentAnimations) == 192, "Offset mismatch for UPawnComponent_JamInstrumentAnim::InstrumentAnimations");
static_assert(offsetof(UPawnComponent_JamInstrumentAnim, MusicClock) == 208, "Offset mismatch for UPawnComponent_JamInstrumentAnim::MusicClock");
static_assert(offsetof(UPawnComponent_JamInstrumentAnim, MidiEventDriver) == 216, "Offset mismatch for UPawnComponent_JamInstrumentAnim::MidiEventDriver");
static_assert(offsetof(UPawnComponent_JamInstrumentAnim, CosmeticInstrumentType) == 232, "Offset mismatch for UPawnComponent_JamInstrumentAnim::CosmeticInstrumentType");
static_assert(offsetof(UPawnComponent_JamInstrumentAnim, AnimatableState) == 233, "Offset mismatch for UPawnComponent_JamInstrumentAnim::AnimatableState");
static_assert(offsetof(UPawnComponent_JamInstrumentAnim, bCanPlayMidiAnimations) == 234, "Offset mismatch for UPawnComponent_JamInstrumentAnim::bCanPlayMidiAnimations");
static_assert(offsetof(UPawnComponent_JamInstrumentAnim, StagePropActor) == 240, "Offset mismatch for UPawnComponent_JamInstrumentAnim::StagePropActor");
static_assert(offsetof(UPawnComponent_JamInstrumentAnim, BP_OnPlayerMusicClockChanged) == 296, "Offset mismatch for UPawnComponent_JamInstrumentAnim::BP_OnPlayerMusicClockChanged");
static_assert(offsetof(UPawnComponent_JamInstrumentAnim, BP_OnPlayerMidiEventDriverChanged) == 336, "Offset mismatch for UPawnComponent_JamInstrumentAnim::BP_OnPlayerMidiEventDriverChanged");
static_assert(offsetof(UPawnComponent_JamInstrumentAnim, BP_OnPlayerCosmeticInstrumentTypeChanged) == 376, "Offset mismatch for UPawnComponent_JamInstrumentAnim::BP_OnPlayerCosmeticInstrumentTypeChanged");
static_assert(offsetof(UPawnComponent_JamInstrumentAnim, BP_OnPlayerAnimatableStateChanged) == 416, "Offset mismatch for UPawnComponent_JamInstrumentAnim::BP_OnPlayerAnimatableStateChanged");
static_assert(offsetof(UPawnComponent_JamInstrumentAnim, BP_OnStagePropActorChanged) == 456, "Offset mismatch for UPawnComponent_JamInstrumentAnim::BP_OnStagePropActorChanged");

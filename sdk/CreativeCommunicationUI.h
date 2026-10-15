/**
 * decamp dumper generated SDK
 * Package: /Script/CreativeCommunicationUI
 */
#pragma once
#include "Basic.h"

// /Script/CreativeCommunicationUI.CreativeBubbleChatMessageViewModel
// Kind: Class; super: FortTextChatMessageVM
class UCreativeBubbleChatMessageViewModel
{
public:
    std::uint8_t Pad_0000[0x1B0]; // 0x0000
    std::uint8_t IsWhisper; // 0x01B0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t IsSocialParty; // 0x01B1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t IsFriend; // 0x01B2 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UCreativeBubbleChatMessageViewModel, IsWhisper) == 432, "Offset mismatch for UCreativeBubbleChatMessageViewModel::IsWhisper");
static_assert(offsetof(UCreativeBubbleChatMessageViewModel, IsSocialParty) == 433, "Offset mismatch for UCreativeBubbleChatMessageViewModel::IsSocialParty");
static_assert(offsetof(UCreativeBubbleChatMessageViewModel, IsFriend) == 434, "Offset mismatch for UCreativeBubbleChatMessageViewModel::IsFriend");

// /Script/CreativeCommunicationUI.CreativeBubbleChatViewModel
// Kind: Class; super: FortTextChatPlayerBaseVM
class UCreativeBubbleChatViewModel
{
public:
    std::uint8_t Pad_0000[0x88]; // 0x0000
    TWeakObjectPtr<void> TargetPlayerState; // 0x0088 (Size: 0x8, Type: WeakObjectProperty)
    TArray<void*> Messages; // 0x0090 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Message[0x10]; // 0x00A0 (Size: 0x10, Type: TextProperty)
    std::uint8_t bIsIndicatorClamped; // 0x00B0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UCreativeBubbleChatViewModel, TargetPlayerState) == 136, "Offset mismatch for UCreativeBubbleChatViewModel::TargetPlayerState");
static_assert(offsetof(UCreativeBubbleChatViewModel, Messages) == 144, "Offset mismatch for UCreativeBubbleChatViewModel::Messages");
static_assert(offsetof(UCreativeBubbleChatViewModel, Message) == 160, "Offset mismatch for UCreativeBubbleChatViewModel::Message");
static_assert(offsetof(UCreativeBubbleChatViewModel, bIsIndicatorClamped) == 176, "Offset mismatch for UCreativeBubbleChatViewModel::bIsIndicatorClamped");

// /Script/CreativeCommunicationUI.CreativeIndicatorLayerManagerWidget
// Kind: Class; super: FortHUDElementWidget
class UCreativeIndicatorLayerManagerWidget
{
public:
    std::uint8_t Pad_0000[0x380]; // 0x0000
    std::int32_t PlayerIndicatorPoolSize; // 0x0380 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0384
    std::uint8_t IndicatorPool[0x48]; // 0x0388 (Size: 0x48, Type: StructProperty)
    void* LocalPlayerViewModel; // 0x03D0 (Size: 0x8, Type: ObjectProperty)
    void* PlayerIndicatorClass; // 0x03D8 (Size: 0x8, Type: ClassProperty)
    void* PlayerIndicators; // 0x03E0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ShowIndicatorForLocalPlayer; // 0x03E8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UCreativeIndicatorLayerManagerWidget, PlayerIndicatorPoolSize) == 896, "Offset mismatch for UCreativeIndicatorLayerManagerWidget::PlayerIndicatorPoolSize");
static_assert(offsetof(UCreativeIndicatorLayerManagerWidget, IndicatorPool) == 904, "Offset mismatch for UCreativeIndicatorLayerManagerWidget::IndicatorPool");
static_assert(offsetof(UCreativeIndicatorLayerManagerWidget, LocalPlayerViewModel) == 976, "Offset mismatch for UCreativeIndicatorLayerManagerWidget::LocalPlayerViewModel");
static_assert(offsetof(UCreativeIndicatorLayerManagerWidget, PlayerIndicatorClass) == 984, "Offset mismatch for UCreativeIndicatorLayerManagerWidget::PlayerIndicatorClass");
static_assert(offsetof(UCreativeIndicatorLayerManagerWidget, PlayerIndicators) == 992, "Offset mismatch for UCreativeIndicatorLayerManagerWidget::PlayerIndicators");
static_assert(offsetof(UCreativeIndicatorLayerManagerWidget, ShowIndicatorForLocalPlayer) == 1000, "Offset mismatch for UCreativeIndicatorLayerManagerWidget::ShowIndicatorForLocalPlayer");

// /Script/CreativeCommunicationUI.CreativeLocalPlayerViewModel
// Kind: Class; super: FortPerUserViewModel
class UCreativeLocalPlayerViewModel
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    TArray<void*> CachedGameMemberPlayerStates; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CachedTeammatePlayerStates; // 0x0088 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CachedSquadMemberPlayerStates; // 0x0098 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CachedPartyMemberPlayerStates; // 0x00A8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UCreativeLocalPlayerViewModel, CachedGameMemberPlayerStates) == 120, "Offset mismatch for UCreativeLocalPlayerViewModel::CachedGameMemberPlayerStates");
static_assert(offsetof(UCreativeLocalPlayerViewModel, CachedTeammatePlayerStates) == 136, "Offset mismatch for UCreativeLocalPlayerViewModel::CachedTeammatePlayerStates");
static_assert(offsetof(UCreativeLocalPlayerViewModel, CachedSquadMemberPlayerStates) == 152, "Offset mismatch for UCreativeLocalPlayerViewModel::CachedSquadMemberPlayerStates");
static_assert(offsetof(UCreativeLocalPlayerViewModel, CachedPartyMemberPlayerStates) == 168, "Offset mismatch for UCreativeLocalPlayerViewModel::CachedPartyMemberPlayerStates");

// /Script/CreativeCommunicationUI.CreativePlayerIndicatorWidget
// Kind: Class; super: FortActorIndicatorWidget
class UCreativePlayerIndicatorWidget
{
public:
    std::uint8_t Pad_0000[0x430]; // 0x0000
    float MinDistanceToDisplayInfo; // 0x0430 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0434
    void* BubbleChatViewModel; // 0x0438 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x8]; // 0x0440
    void* Text_Distance; // 0x0448 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0003[0x30]; // 0x0450
    void* CachedCreativeCommunicationOverride; // 0x0480 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UCreativePlayerIndicatorWidget, MinDistanceToDisplayInfo) == 1072, "Offset mismatch for UCreativePlayerIndicatorWidget::MinDistanceToDisplayInfo");
static_assert(offsetof(UCreativePlayerIndicatorWidget, BubbleChatViewModel) == 1080, "Offset mismatch for UCreativePlayerIndicatorWidget::BubbleChatViewModel");
static_assert(offsetof(UCreativePlayerIndicatorWidget, Text_Distance) == 1096, "Offset mismatch for UCreativePlayerIndicatorWidget::Text_Distance");
static_assert(offsetof(UCreativePlayerIndicatorWidget, CachedCreativeCommunicationOverride) == 1152, "Offset mismatch for UCreativePlayerIndicatorWidget::CachedCreativeCommunicationOverride");

// /Script/CreativeCommunicationUI.CreativePlayerStateComponent_UIViewModels
// Kind: Class; super: PlayerStateComponent
class UCreativePlayerStateComponent_UIViewModels
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

static_assert(offsetof(UCreativePlayerStateComponent_UIViewModels, PrimaryComponentTick) == 56, "Offset mismatch for UCreativePlayerStateComponent_UIViewModels::PrimaryComponentTick");
static_assert(offsetof(UCreativePlayerStateComponent_UIViewModels, ComponentTags) == 104, "Offset mismatch for UCreativePlayerStateComponent_UIViewModels::ComponentTags");
static_assert(offsetof(UCreativePlayerStateComponent_UIViewModels, AssetUserData) == 120, "Offset mismatch for UCreativePlayerStateComponent_UIViewModels::AssetUserData");
static_assert(offsetof(UCreativePlayerStateComponent_UIViewModels, UCSSerializationIndex) == 144, "Offset mismatch for UCreativePlayerStateComponent_UIViewModels::UCSSerializationIndex");
static_assert(offsetof(UCreativePlayerStateComponent_UIViewModels, bNetAddressable) == 152, "Offset mismatch for UCreativePlayerStateComponent_UIViewModels::bNetAddressable");
static_assert(offsetof(UCreativePlayerStateComponent_UIViewModels, bAutoActivate) == 154, "Offset mismatch for UCreativePlayerStateComponent_UIViewModels::bAutoActivate");
static_assert(offsetof(UCreativePlayerStateComponent_UIViewModels, bIsEditorOnly) == 155, "Offset mismatch for UCreativePlayerStateComponent_UIViewModels::bIsEditorOnly");
static_assert(offsetof(UCreativePlayerStateComponent_UIViewModels, CreationMethod) == 185, "Offset mismatch for UCreativePlayerStateComponent_UIViewModels::CreationMethod");
static_assert(offsetof(UCreativePlayerStateComponent_UIViewModels, OnComponentActivated) == 186, "Offset mismatch for UCreativePlayerStateComponent_UIViewModels::OnComponentActivated");
static_assert(offsetof(UCreativePlayerStateComponent_UIViewModels, OnComponentDeactivated) == 187, "Offset mismatch for UCreativePlayerStateComponent_UIViewModels::OnComponentDeactivated");

// /Script/CreativeCommunicationUI.CreativeProximityChatDebugWidget
// Kind: Class; super: FortHUDElementWidget
class UCreativeProximityChatDebugWidget
{
public:
    std::uint8_t Pad_0000[0x338]; // 0x0000
    std::uint8_t HLTDependentWidgetTag[0x4]; // 0x0338 (Size: 0x4, Type: StructProperty)
    std::uint8_t ElementTag[0x4]; // 0x033C (Size: 0x4, Type: StructProperty)
    std::uint8_t HUDElementTag[0x20]; // 0x0340 (Size: 0x20, Type: StructProperty)
    std::uint8_t HiddenVisibility; // 0x0360 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0361
    void* TutorialHighlight; // 0x0368 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UCreativeProximityChatDebugWidget, HLTDependentWidgetTag) == 824, "Offset mismatch for UCreativeProximityChatDebugWidget::HLTDependentWidgetTag");
static_assert(offsetof(UCreativeProximityChatDebugWidget, ElementTag) == 828, "Offset mismatch for UCreativeProximityChatDebugWidget::ElementTag");
static_assert(offsetof(UCreativeProximityChatDebugWidget, HUDElementTag) == 832, "Offset mismatch for UCreativeProximityChatDebugWidget::HUDElementTag");
static_assert(offsetof(UCreativeProximityChatDebugWidget, HiddenVisibility) == 864, "Offset mismatch for UCreativeProximityChatDebugWidget::HiddenVisibility");
static_assert(offsetof(UCreativeProximityChatDebugWidget, TutorialHighlight) == 872, "Offset mismatch for UCreativeProximityChatDebugWidget::TutorialHighlight");

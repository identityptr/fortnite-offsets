/**
 * decamp dumper generated SDK
 * Package: /Script/SidewaysCodeRuntime
 */
#pragma once
#include "Basic.h"

// /Script/SidewaysCodeRuntime.FortControllerComponent_Sideways
// Kind: Class; super: FortControllerComponent
class UFortControllerComponent_Sideways
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    std::uint8_t UpdateClosestSidewaysHandle[0x1]; // 0x00C8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortControllerComponent_Sideways, UpdateClosestSidewaysHandle) == 200, "Offset mismatch for UFortControllerComponent_Sideways::UpdateClosestSidewaysHandle");

// /Script/SidewaysCodeRuntime.PlayspaceComponent_SidewaysDimension
// Kind: Class; super: FortPlayspaceComponent
class UPlayspaceComponent_SidewaysDimension
{
public:
    std::uint8_t Pad_0000[0x1F0]; // 0x0000
    void* CachedAIServiceLoot; // 0x01F0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPlayspaceComponent_SidewaysDimension, CachedAIServiceLoot) == 496, "Offset mismatch for UPlayspaceComponent_SidewaysDimension::CachedAIServiceLoot");

// /Script/SidewaysCodeRuntime.PlayspaceComponent_SidewaysEncounter
// Kind: Class; super: FortPlayspaceComponent
class UPlayspaceComponent_SidewaysEncounter
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnMeshNetworkReady_BP; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMeshNetworkEventBurst_BP; // 0x00D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMeshNetworkEventStart_BP; // 0x00E0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMeshNetworkEventChange_BP; // 0x00F0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMeshNetworkEventEnd_BP; // 0x0100 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t bSubscribeToMeshNetwork; // 0x0110 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPlayspaceComponent_SidewaysEncounter, OnMeshNetworkReady_BP) == 192, "Offset mismatch for UPlayspaceComponent_SidewaysEncounter::OnMeshNetworkReady_BP");
static_assert(offsetof(UPlayspaceComponent_SidewaysEncounter, OnMeshNetworkEventBurst_BP) == 208, "Offset mismatch for UPlayspaceComponent_SidewaysEncounter::OnMeshNetworkEventBurst_BP");
static_assert(offsetof(UPlayspaceComponent_SidewaysEncounter, OnMeshNetworkEventStart_BP) == 224, "Offset mismatch for UPlayspaceComponent_SidewaysEncounter::OnMeshNetworkEventStart_BP");
static_assert(offsetof(UPlayspaceComponent_SidewaysEncounter, OnMeshNetworkEventChange_BP) == 240, "Offset mismatch for UPlayspaceComponent_SidewaysEncounter::OnMeshNetworkEventChange_BP");
static_assert(offsetof(UPlayspaceComponent_SidewaysEncounter, OnMeshNetworkEventEnd_BP) == 256, "Offset mismatch for UPlayspaceComponent_SidewaysEncounter::OnMeshNetworkEventEnd_BP");
static_assert(offsetof(UPlayspaceComponent_SidewaysEncounter, bSubscribeToMeshNetwork) == 272, "Offset mismatch for UPlayspaceComponent_SidewaysEncounter::bSubscribeToMeshNetwork");

// /Script/SidewaysCodeRuntime.SidewaysCheatManager
// Kind: Class; super: ChildCheatManager
class USidewaysCheatManager
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SidewaysCodeRuntime.SidewaysFeatureAction_HoldGlobalData
// Kind: Class; super: GameFeatureAction
class USidewaysFeatureAction_HoldGlobalData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t SidewaysMaterialParameterCollection[0x20]; // 0x0028 (Size: 0x20, Type: SoftObjectProperty)
    FName SidewaysBubbleLocationParameterNamesForLocalPlayers; // 0x0048 (Size: 0x8, Type: NameProperty)
    FName SidewaysBubbleRadiusParameterNamesForLocalPlayers; // 0x0050 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(USidewaysFeatureAction_HoldGlobalData, SidewaysMaterialParameterCollection) == 40, "Offset mismatch for USidewaysFeatureAction_HoldGlobalData::SidewaysMaterialParameterCollection");
static_assert(offsetof(USidewaysFeatureAction_HoldGlobalData, SidewaysBubbleLocationParameterNamesForLocalPlayers) == 72, "Offset mismatch for USidewaysFeatureAction_HoldGlobalData::SidewaysBubbleLocationParameterNamesForLocalPlayers");
static_assert(offsetof(USidewaysFeatureAction_HoldGlobalData, SidewaysBubbleRadiusParameterNamesForLocalPlayers) == 80, "Offset mismatch for USidewaysFeatureAction_HoldGlobalData::SidewaysBubbleRadiusParameterNamesForLocalPlayers");

// /Script/SidewaysCodeRuntime.SidewaysLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class USidewaysLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SidewaysCodeRuntime.SidewaysPlayspace
// Kind: Class; super: FortPlayspace
class USidewaysPlayspace
{
public:
    std::uint8_t Pad_0000[0x528]; // 0x0000
    FMulticastInlineDelegate NotifyInactivePlayspaceUserAdded; // 0x0528 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x18]; // 0x0538
    FMulticastInlineDelegate NotifyInactivePlayspaceUserRemoved; // 0x0550 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0002[0x18]; // 0x0560
    std::uint8_t InactivePlayspaceUsers[0x78]; // 0x0578 (Size: 0x78, Type: StructProperty)
    std::uint8_t bSubscribeToMeshNetwork; // 0x05F0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x2]; // 0x05F1
    std::uint8_t UserAcceptanceType; // 0x05F3 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0004[0x4]; // 0x05F4
    std::uint8_t MatchmakingSettings[0x28]; // 0x05F8 (Size: 0x28, Type: StructProperty)
    void* ReplicatedStateClass; // 0x0620 (Size: 0x8, Type: ClassProperty)
    void* ReplicatedState; // 0x0628 (Size: 0x8, Type: ObjectProperty)
    void* EventRouter; // 0x0630 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bShouldCreateEventRouter; // 0x0638 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x7]; // 0x0639
    TArray<void*> InactivePendingUsers; // 0x0640 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USidewaysPlayspace, NotifyInactivePlayspaceUserAdded) == 1320, "Offset mismatch for USidewaysPlayspace::NotifyInactivePlayspaceUserAdded");
static_assert(offsetof(USidewaysPlayspace, NotifyInactivePlayspaceUserRemoved) == 1360, "Offset mismatch for USidewaysPlayspace::NotifyInactivePlayspaceUserRemoved");
static_assert(offsetof(USidewaysPlayspace, InactivePlayspaceUsers) == 1400, "Offset mismatch for USidewaysPlayspace::InactivePlayspaceUsers");
static_assert(offsetof(USidewaysPlayspace, bSubscribeToMeshNetwork) == 1520, "Offset mismatch for USidewaysPlayspace::bSubscribeToMeshNetwork");
static_assert(offsetof(USidewaysPlayspace, UserAcceptanceType) == 1523, "Offset mismatch for USidewaysPlayspace::UserAcceptanceType");
static_assert(offsetof(USidewaysPlayspace, MatchmakingSettings) == 1528, "Offset mismatch for USidewaysPlayspace::MatchmakingSettings");
static_assert(offsetof(USidewaysPlayspace, ReplicatedStateClass) == 1568, "Offset mismatch for USidewaysPlayspace::ReplicatedStateClass");
static_assert(offsetof(USidewaysPlayspace, ReplicatedState) == 1576, "Offset mismatch for USidewaysPlayspace::ReplicatedState");
static_assert(offsetof(USidewaysPlayspace, EventRouter) == 1584, "Offset mismatch for USidewaysPlayspace::EventRouter");
static_assert(offsetof(USidewaysPlayspace, bShouldCreateEventRouter) == 1592, "Offset mismatch for USidewaysPlayspace::bShouldCreateEventRouter");
static_assert(offsetof(USidewaysPlayspace, InactivePendingUsers) == 1600, "Offset mismatch for USidewaysPlayspace::InactivePendingUsers");

// /Script/SidewaysCodeRuntime.SidewaysStateComponent
// Kind: Class; super: GameFrameworkComponent
class USidewaysStateComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t SidewaysState; // 0x00C0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00C1
    void* SidewaysPlayspace; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
    FMulticastInlineDelegate OnSidewaysStateChangedDelegate; // 0x00D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(USidewaysStateComponent, SidewaysState) == 192, "Offset mismatch for USidewaysStateComponent::SidewaysState");
static_assert(offsetof(USidewaysStateComponent, SidewaysPlayspace) == 200, "Offset mismatch for USidewaysStateComponent::SidewaysPlayspace");
static_assert(offsetof(USidewaysStateComponent, OnSidewaysStateChangedDelegate) == 208, "Offset mismatch for USidewaysStateComponent::OnSidewaysStateChangedDelegate");

// /Script/SidewaysCodeRuntime.SidewaysStateComponent_Player
// Kind: Class; super: SidewaysStateComponent
class USidewaysStateComponent_Player
{
public:
    std::uint8_t Pad_0000[0xE8]; // 0x0000
    std::uint8_t SidewaysMaterialParameterCollection[0x20]; // 0x00E8 (Size: 0x20, Type: SoftObjectProperty)
    FName SidewaysBubbleLocationParameterNamesForLocalPlayers; // 0x0108 (Size: 0x8, Type: NameProperty)
    FName SidewaysBubbleRadiusParameterNamesForLocalPlayers; // 0x0110 (Size: 0x8, Type: NameProperty)
    float ExtraCorruptionRadius; // 0x0118 (Size: 0x4, Type: FloatProperty)
    float MinRadiusToHaveAnyCorruption; // 0x011C (Size: 0x4, Type: FloatProperty)
    float MaxRadiusForScalingExtraCorruptionRadius; // 0x0120 (Size: 0x4, Type: FloatProperty)
    float UpdateFrequency; // 0x0124 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(USidewaysStateComponent_Player, SidewaysMaterialParameterCollection) == 232, "Offset mismatch for USidewaysStateComponent_Player::SidewaysMaterialParameterCollection");
static_assert(offsetof(USidewaysStateComponent_Player, SidewaysBubbleLocationParameterNamesForLocalPlayers) == 264, "Offset mismatch for USidewaysStateComponent_Player::SidewaysBubbleLocationParameterNamesForLocalPlayers");
static_assert(offsetof(USidewaysStateComponent_Player, SidewaysBubbleRadiusParameterNamesForLocalPlayers) == 272, "Offset mismatch for USidewaysStateComponent_Player::SidewaysBubbleRadiusParameterNamesForLocalPlayers");
static_assert(offsetof(USidewaysStateComponent_Player, ExtraCorruptionRadius) == 280, "Offset mismatch for USidewaysStateComponent_Player::ExtraCorruptionRadius");
static_assert(offsetof(USidewaysStateComponent_Player, MinRadiusToHaveAnyCorruption) == 284, "Offset mismatch for USidewaysStateComponent_Player::MinRadiusToHaveAnyCorruption");
static_assert(offsetof(USidewaysStateComponent_Player, MaxRadiusForScalingExtraCorruptionRadius) == 288, "Offset mismatch for USidewaysStateComponent_Player::MaxRadiusForScalingExtraCorruptionRadius");
static_assert(offsetof(USidewaysStateComponent_Player, UpdateFrequency) == 292, "Offset mismatch for USidewaysStateComponent_Player::UpdateFrequency");

// /Script/SidewaysCodeRuntime.SidewaysVolume
// Kind: Class; super: GameplayVolume
class USidewaysVolume
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    FMulticastInlineDelegate PlayspaceSetEvent; // 0x0270 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x18]; // 0x0280
    std::uint8_t PlayspaceClassTemplate[0x20]; // 0x0298 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t PlayspaceCreationType; // 0x02B8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x7]; // 0x02B9
    void* PlayspaceClass; // 0x02C0 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bDestroyPlayspaceOnEndPlay; // 0x02C8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSpawnPlayspaceAtGameplayVolumeLocation; // 0x02C9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x6]; // 0x02CA
    void* Playspace; // 0x02D0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t VolumeTags[0x20]; // 0x02D8 (Size: 0x20, Type: StructProperty)
    void* BoundsComponent; // 0x02F8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USidewaysVolume, PlayspaceSetEvent) == 624, "Offset mismatch for USidewaysVolume::PlayspaceSetEvent");
static_assert(offsetof(USidewaysVolume, PlayspaceClassTemplate) == 664, "Offset mismatch for USidewaysVolume::PlayspaceClassTemplate");
static_assert(offsetof(USidewaysVolume, PlayspaceCreationType) == 696, "Offset mismatch for USidewaysVolume::PlayspaceCreationType");
static_assert(offsetof(USidewaysVolume, PlayspaceClass) == 704, "Offset mismatch for USidewaysVolume::PlayspaceClass");
static_assert(offsetof(USidewaysVolume, bDestroyPlayspaceOnEndPlay) == 712, "Offset mismatch for USidewaysVolume::bDestroyPlayspaceOnEndPlay");
static_assert(offsetof(USidewaysVolume, bSpawnPlayspaceAtGameplayVolumeLocation) == 713, "Offset mismatch for USidewaysVolume::bSpawnPlayspaceAtGameplayVolumeLocation");
static_assert(offsetof(USidewaysVolume, Playspace) == 720, "Offset mismatch for USidewaysVolume::Playspace");
static_assert(offsetof(USidewaysVolume, VolumeTags) == 728, "Offset mismatch for USidewaysVolume::VolumeTags");
static_assert(offsetof(USidewaysVolume, BoundsComponent) == 760, "Offset mismatch for USidewaysVolume::BoundsComponent");

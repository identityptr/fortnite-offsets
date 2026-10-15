/**
 * decamp dumper generated SDK
 * Package: /Script/FeralCorgiGameplayRuntime
 */
#pragma once
#include "Basic.h"

// /Script/FeralCorgiGameplayRuntime.FeralCorgiCheatEvent
// Kind: ScriptStruct; super: none
struct FFeralCorgiCheatEvent
{
public:
    std::uint8_t Tag[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFeralCorgiCheatEvent, Tag) == 0, "Offset mismatch for FFeralCorgiCheatEvent::Tag");

// /Script/FeralCorgiGameplayRuntime.ApparatusBridge
// Kind: Class; super: Object
class UApparatusBridge
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FeralCorgiGameplayRuntime.CheatBridge
// Kind: Class; super: Object
class UCheatBridge
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FeralCorgiGameplayRuntime.FeralCorgiGameStateComponentBridge
// Kind: Class; super: Object
class UFeralCorgiGameStateComponentBridge
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FeralCorgiGameplayRuntime.FeralCorgiPlayerState
// Kind: Class; super: FortPlayerStateAthena
class UFeralCorgiPlayerState
{
public:
    std::uint8_t Pad_0000[0x1788]; // 0x0000
    TArray<void*> PinColorForPlayer; // 0x1788 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFeralCorgiPlayerState, PinColorForPlayer) == 6024, "Offset mismatch for UFeralCorgiPlayerState::PinColorForPlayer");

// /Script/FeralCorgiGameplayRuntime.FeralCorgiRootPlayspace
// Kind: Class; super: FortPlayspace
class UFeralCorgiRootPlayspace
{
public:
    std::uint8_t Pad_0000[0x658]; // 0x0000
    void* FeralCorgiStateMachineClass; // 0x0658 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UFeralCorgiRootPlayspace, FeralCorgiStateMachineClass) == 1624, "Offset mismatch for UFeralCorgiRootPlayspace::FeralCorgiStateMachineClass");

// /Script/FeralCorgiGameplayRuntime.FeralCorgiState
// Kind: Class; super: FortGameplayState
class UFeralCorgiState
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    FText StateDisplayName; // 0x0078 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(UFeralCorgiState, StateDisplayName) == 120, "Offset mismatch for UFeralCorgiState::StateDisplayName");

// /Script/FeralCorgiGameplayRuntime.FeralCorgiStateMachine
// Kind: Class; super: FortGameplayStateMachine
class UFeralCorgiStateMachine
{
public:
    std::uint8_t Pad_0000[0xD8]; // 0x0000
    std::uint8_t RootTransitionData[0x1]; // 0x00D8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFeralCorgiStateMachine, RootTransitionData) == 216, "Offset mismatch for UFeralCorgiStateMachine::RootTransitionData");

// /Script/FeralCorgiGameplayRuntime.FeralCorgiState_ClassSelection
// Kind: Class; super: FeralCorgiState
class UFeralCorgiState_ClassSelection
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    FText StateDisplayName; // 0x0078 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(UFeralCorgiState_ClassSelection, StateDisplayName) == 120, "Offset mismatch for UFeralCorgiState_ClassSelection::StateDisplayName");

// /Script/FeralCorgiGameplayRuntime.FeralCorgiState_MainLoopSM
// Kind: Class; super: FeralCorgiStateMachine
class UFeralCorgiState_MainLoopSM
{
public:
    std::uint8_t Pad_0000[0xD8]; // 0x0000
    std::uint8_t RootTransitionData[0x1]; // 0x00D8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFeralCorgiState_MainLoopSM, RootTransitionData) == 216, "Offset mismatch for UFeralCorgiState_MainLoopSM::RootTransitionData");

// /Script/FeralCorgiGameplayRuntime.FeralCorgiState_MainLoop_BuyPhase
// Kind: Class; super: FeralCorgiState
class UFeralCorgiState_MainLoop_BuyPhase
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    FText StateDisplayName; // 0x0078 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(UFeralCorgiState_MainLoop_BuyPhase, StateDisplayName) == 120, "Offset mismatch for UFeralCorgiState_MainLoop_BuyPhase::StateDisplayName");

// /Script/FeralCorgiGameplayRuntime.FeralCorgiState_MainLoop_End
// Kind: Class; super: FeralCorgiState
class UFeralCorgiState_MainLoop_End
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    FText StateDisplayName; // 0x0078 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(UFeralCorgiState_MainLoop_End, StateDisplayName) == 120, "Offset mismatch for UFeralCorgiState_MainLoop_End::StateDisplayName");

// /Script/FeralCorgiGameplayRuntime.FeralCorgiState_MainLoop_Gameplay
// Kind: Class; super: FeralCorgiState
class UFeralCorgiState_MainLoop_Gameplay
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    FText StateDisplayName; // 0x0078 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(UFeralCorgiState_MainLoop_Gameplay, StateDisplayName) == 120, "Offset mismatch for UFeralCorgiState_MainLoop_Gameplay::StateDisplayName");

// /Script/FeralCorgiGameplayRuntime.FeralCorgiState_MainLoop_Reset
// Kind: Class; super: FeralCorgiState
class UFeralCorgiState_MainLoop_Reset
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    FText StateDisplayName; // 0x0078 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(UFeralCorgiState_MainLoop_Reset, StateDisplayName) == 120, "Offset mismatch for UFeralCorgiState_MainLoop_Reset::StateDisplayName");

// /Script/FeralCorgiGameplayRuntime.FeralCorgiState_MasterSM
// Kind: Class; super: FortGameplayStateMachine
class UFeralCorgiState_MasterSM
{
public:
    std::uint8_t Pad_0000[0xD8]; // 0x0000
    std::uint8_t RootTransitionData[0x1]; // 0x00D8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFeralCorgiState_MasterSM, RootTransitionData) == 216, "Offset mismatch for UFeralCorgiState_MasterSM::RootTransitionData");

// /Script/FeralCorgiGameplayRuntime.FeralCorgiState_MatchFinished
// Kind: Class; super: FeralCorgiState
class UFeralCorgiState_MatchFinished
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    FText StateDisplayName; // 0x0078 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(UFeralCorgiState_MatchFinished, StateDisplayName) == 120, "Offset mismatch for UFeralCorgiState_MatchFinished::StateDisplayName");

// /Script/FeralCorgiGameplayRuntime.FeralCorgiState_Setup
// Kind: Class; super: FeralCorgiState
class UFeralCorgiState_Setup
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    FText StateDisplayName; // 0x0078 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(UFeralCorgiState_Setup, StateDisplayName) == 120, "Offset mismatch for UFeralCorgiState_Setup::StateDisplayName");

// /Script/FeralCorgiGameplayRuntime.FeralCorgiTeamStart
// Kind: Class; super: FortSquadStart
class UFeralCorgiTeamStart
{
public:
    std::uint8_t Pad_0000[0x2A0]; // 0x0000
    std::uint8_t StartType; // 0x02A0 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UFeralCorgiTeamStart, StartType) == 672, "Offset mismatch for UFeralCorgiTeamStart::StartType");

// /Script/FeralCorgiGameplayRuntime.FortAthenaMutator_FeralCorgi
// Kind: Class; super: FortAthenaMutator_GameModeBase
class UFortAthenaMutator_FeralCorgi
{
public:
    std::uint8_t Pad_0000[0x400]; // 0x0000
    TArray<void*> DoNotDropItemDefs; // 0x0400 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> DoNotDestroyItemDefs; // 0x0410 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AutoPickupItemDefs; // 0x0420 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> BuyPhaseRestrictedItemDefs; // 0x0430 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t HUDMenuBottomBarVerticalAligment; // 0x0440 (Size: 0x1, Type: ByteProperty)
    std::uint8_t HUDMenuBottomBarHorizontalAligment; // 0x0441 (Size: 0x1, Type: ByteProperty)
    std::uint8_t HUDEliminatorSpectatingPlayernameVerticalAligment; // 0x0442 (Size: 0x1, Type: ByteProperty)
    std::uint8_t HUDEliminatorSpectatingPlayernameHorinzontalAligment; // 0x0443 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bUseTeamForSpectating; // 0x0444 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortAthenaMutator_FeralCorgi, DoNotDropItemDefs) == 1024, "Offset mismatch for UFortAthenaMutator_FeralCorgi::DoNotDropItemDefs");
static_assert(offsetof(UFortAthenaMutator_FeralCorgi, DoNotDestroyItemDefs) == 1040, "Offset mismatch for UFortAthenaMutator_FeralCorgi::DoNotDestroyItemDefs");
static_assert(offsetof(UFortAthenaMutator_FeralCorgi, AutoPickupItemDefs) == 1056, "Offset mismatch for UFortAthenaMutator_FeralCorgi::AutoPickupItemDefs");
static_assert(offsetof(UFortAthenaMutator_FeralCorgi, BuyPhaseRestrictedItemDefs) == 1072, "Offset mismatch for UFortAthenaMutator_FeralCorgi::BuyPhaseRestrictedItemDefs");
static_assert(offsetof(UFortAthenaMutator_FeralCorgi, HUDMenuBottomBarVerticalAligment) == 1088, "Offset mismatch for UFortAthenaMutator_FeralCorgi::HUDMenuBottomBarVerticalAligment");
static_assert(offsetof(UFortAthenaMutator_FeralCorgi, HUDMenuBottomBarHorizontalAligment) == 1089, "Offset mismatch for UFortAthenaMutator_FeralCorgi::HUDMenuBottomBarHorizontalAligment");
static_assert(offsetof(UFortAthenaMutator_FeralCorgi, HUDEliminatorSpectatingPlayernameVerticalAligment) == 1090, "Offset mismatch for UFortAthenaMutator_FeralCorgi::HUDEliminatorSpectatingPlayernameVerticalAligment");
static_assert(offsetof(UFortAthenaMutator_FeralCorgi, HUDEliminatorSpectatingPlayernameHorinzontalAligment) == 1091, "Offset mismatch for UFortAthenaMutator_FeralCorgi::HUDEliminatorSpectatingPlayernameHorinzontalAligment");
static_assert(offsetof(UFortAthenaMutator_FeralCorgi, bUseTeamForSpectating) == 1092, "Offset mismatch for UFortAthenaMutator_FeralCorgi::bUseTeamForSpectating");

// /Script/FeralCorgiGameplayRuntime.FortAutomationRpcManager_Feral
// Kind: Class; super: FortAutomationRpcManager
class UFortAutomationRpcManager_Feral
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FeralCorgiGameplayRuntime.FortCheatManager_FeralCorgi
// Kind: Class; super: ChildCheatManager
class UFortCheatManager_FeralCorgi
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FeralCorgiGameplayRuntime.FortControllerComponent_FeralCorgi
// Kind: Class; super: FortControllerComponent
class UFortControllerComponent_FeralCorgi
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    void* DamageCameraShakeClassOverride; // 0x00C8 (Size: 0x8, Type: ClassProperty)
    void* DynamicDamageZoneComponentClass; // 0x00D0 (Size: 0x8, Type: ClassProperty)
    void* EnvironmentRespawnQuery; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortControllerComponent_FeralCorgi, DamageCameraShakeClassOverride) == 200, "Offset mismatch for UFortControllerComponent_FeralCorgi::DamageCameraShakeClassOverride");
static_assert(offsetof(UFortControllerComponent_FeralCorgi, DynamicDamageZoneComponentClass) == 208, "Offset mismatch for UFortControllerComponent_FeralCorgi::DynamicDamageZoneComponentClass");
static_assert(offsetof(UFortControllerComponent_FeralCorgi, EnvironmentRespawnQuery) == 216, "Offset mismatch for UFortControllerComponent_FeralCorgi::EnvironmentRespawnQuery");

// /Script/FeralCorgiGameplayRuntime.FortGameStateComponent_FeralCorgiManager
// Kind: Class; super: FortGameStateComponent
class UFortGameStateComponent_FeralCorgiManager
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    std::uint8_t TeamOneTeamId; // 0x00D0 (Size: 0x1, Type: ByteProperty)
    std::uint8_t TeamTwoTeamId; // 0x00D1 (Size: 0x1, Type: ByteProperty)
    std::uint8_t CurrentAttackingTeam; // 0x00D2 (Size: 0x1, Type: EnumProperty)
    std::uint8_t RoundWinningTeam; // 0x00D3 (Size: 0x1, Type: EnumProperty)
    std::uint8_t RoundWinningTeamRole; // 0x00D4 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UFortGameStateComponent_FeralCorgiManager, TeamOneTeamId) == 208, "Offset mismatch for UFortGameStateComponent_FeralCorgiManager::TeamOneTeamId");
static_assert(offsetof(UFortGameStateComponent_FeralCorgiManager, TeamTwoTeamId) == 209, "Offset mismatch for UFortGameStateComponent_FeralCorgiManager::TeamTwoTeamId");
static_assert(offsetof(UFortGameStateComponent_FeralCorgiManager, CurrentAttackingTeam) == 210, "Offset mismatch for UFortGameStateComponent_FeralCorgiManager::CurrentAttackingTeam");
static_assert(offsetof(UFortGameStateComponent_FeralCorgiManager, RoundWinningTeam) == 211, "Offset mismatch for UFortGameStateComponent_FeralCorgiManager::RoundWinningTeam");
static_assert(offsetof(UFortGameStateComponent_FeralCorgiManager, RoundWinningTeamRole) == 212, "Offset mismatch for UFortGameStateComponent_FeralCorgiManager::RoundWinningTeamRole");

// /Script/FeralCorgiGameplayRuntime.FortGameStateComponent_FeralCorgiVerseCommonBridge
// Kind: Class; super: FortGameStateComponent
class UFortGameStateComponent_FeralCorgiVerseCommonBridge
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FString CurrentPhaseName; // 0x00C0 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UFortGameStateComponent_FeralCorgiVerseCommonBridge, CurrentPhaseName) == 192, "Offset mismatch for UFortGameStateComponent_FeralCorgiVerseCommonBridge::CurrentPhaseName");

// /Script/FeralCorgiGameplayRuntime.FortPawnComponent_FeralCorgi
// Kind: Class; super: FortPawnComponent
class UFortPawnComponent_FeralCorgi
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

static_assert(offsetof(UFortPawnComponent_FeralCorgi, PrimaryComponentTick) == 56, "Offset mismatch for UFortPawnComponent_FeralCorgi::PrimaryComponentTick");
static_assert(offsetof(UFortPawnComponent_FeralCorgi, ComponentTags) == 104, "Offset mismatch for UFortPawnComponent_FeralCorgi::ComponentTags");
static_assert(offsetof(UFortPawnComponent_FeralCorgi, AssetUserData) == 120, "Offset mismatch for UFortPawnComponent_FeralCorgi::AssetUserData");
static_assert(offsetof(UFortPawnComponent_FeralCorgi, UCSSerializationIndex) == 144, "Offset mismatch for UFortPawnComponent_FeralCorgi::UCSSerializationIndex");
static_assert(offsetof(UFortPawnComponent_FeralCorgi, bNetAddressable) == 152, "Offset mismatch for UFortPawnComponent_FeralCorgi::bNetAddressable");
static_assert(offsetof(UFortPawnComponent_FeralCorgi, bAutoActivate) == 154, "Offset mismatch for UFortPawnComponent_FeralCorgi::bAutoActivate");
static_assert(offsetof(UFortPawnComponent_FeralCorgi, bIsEditorOnly) == 155, "Offset mismatch for UFortPawnComponent_FeralCorgi::bIsEditorOnly");
static_assert(offsetof(UFortPawnComponent_FeralCorgi, CreationMethod) == 185, "Offset mismatch for UFortPawnComponent_FeralCorgi::CreationMethod");
static_assert(offsetof(UFortPawnComponent_FeralCorgi, OnComponentActivated) == 186, "Offset mismatch for UFortPawnComponent_FeralCorgi::OnComponentActivated");
static_assert(offsetof(UFortPawnComponent_FeralCorgi, OnComponentDeactivated) == 187, "Offset mismatch for UFortPawnComponent_FeralCorgi::OnComponentDeactivated");

// /Script/FeralCorgiGameplayRuntime.FortPlayspaceComponent_Apparatus
// Kind: Class; super: FortPlayspaceComponent
class UFortPlayspaceComponent_Apparatus
{
public:
    std::uint8_t Pad_0000[0x128]; // 0x0000
    FMulticastInlineDelegate OnApparatusTimerRemainingUpdated; // 0x0128 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnApparatusReset; // 0x0138 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UFortPlayspaceComponent_Apparatus, OnApparatusTimerRemainingUpdated) == 296, "Offset mismatch for UFortPlayspaceComponent_Apparatus::OnApparatusTimerRemainingUpdated");
static_assert(offsetof(UFortPlayspaceComponent_Apparatus, OnApparatusReset) == 312, "Offset mismatch for UFortPlayspaceComponent_Apparatus::OnApparatusReset");

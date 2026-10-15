/**
 * decamp dumper generated SDK
 * Package: /Script/FortniteGameFramework
 */
#pragma once
#include "Basic.h"

// /Script/FortniteGameFramework.ActorOwnedStateTreeConfig
// Kind: ScriptStruct; super: none
struct FActorOwnedStateTreeConfig
{
public:
    std::uint8_t StateTreeAsset[0x20]; // 0x0000 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t bShouldReplicate; // 0x0020 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FActorOwnedStateTreeConfig, StateTreeAsset) == 0, "Offset mismatch for FActorOwnedStateTreeConfig::StateTreeAsset");
static_assert(offsetof(FActorOwnedStateTreeConfig, bShouldReplicate) == 32, "Offset mismatch for FActorOwnedStateTreeConfig::bShouldReplicate");

// /Script/FortniteGameFramework.ComponentCacheHelper
// Kind: ScriptStruct; super: none
struct FComponentCacheHelper
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortniteGameFramework.StateChangeData
// Kind: ScriptStruct; super: FastArraySerializerItem
struct FStateChangeData
{
public:
    std::uint8_t Pad_0000[0xC]; // 0x0000
    std::int32_t StateTreeDataHandle; // 0x000C (Size: 0x4, Type: IntProperty)
    std::int32_t Handle; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::int32_t StateIdentifier; // 0x0014 (Size: 0x4, Type: IntProperty)
    void* StateObject; // 0x0018 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t StateChangeType; // 0x0020 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FStateChangeData, StateTreeDataHandle) == 12, "Offset mismatch for FStateChangeData::StateTreeDataHandle");
static_assert(offsetof(FStateChangeData, Handle) == 16, "Offset mismatch for FStateChangeData::Handle");
static_assert(offsetof(FStateChangeData, StateIdentifier) == 20, "Offset mismatch for FStateChangeData::StateIdentifier");
static_assert(offsetof(FStateChangeData, StateObject) == 24, "Offset mismatch for FStateChangeData::StateObject");
static_assert(offsetof(FStateChangeData, StateChangeType) == 32, "Offset mismatch for FStateChangeData::StateChangeType");

// /Script/FortniteGameFramework.StateChangeDataArray
// Kind: ScriptStruct; super: FastArraySerializer
struct FStateChangeDataArray
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    TArray<void*> StateChangeDataList; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    void* StateTreeManagerComponent; // 0x0058 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FStateChangeDataArray, StateChangeDataList) == 72, "Offset mismatch for FStateChangeDataArray::StateChangeDataList");
static_assert(offsetof(FStateChangeDataArray, StateTreeManagerComponent) == 88, "Offset mismatch for FStateChangeDataArray::StateTreeManagerComponent");

// /Script/FortniteGameFramework.StateTreeClientSimulationData
// Kind: ScriptStruct; super: none
struct FStateTreeClientSimulationData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortniteGameFramework.StateTreeRuntimeData
// Kind: ScriptStruct; super: none
struct FStateTreeRuntimeData
{
public:
    void* Owner; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* StateTree; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t StateTreeInstanceData[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FStateTreeRuntimeData, Owner) == 0, "Offset mismatch for FStateTreeRuntimeData::Owner");
static_assert(offsetof(FStateTreeRuntimeData, StateTree) == 8, "Offset mismatch for FStateTreeRuntimeData::StateTree");
static_assert(offsetof(FStateTreeRuntimeData, StateTreeInstanceData) == 16, "Offset mismatch for FStateTreeRuntimeData::StateTreeInstanceData");

// /Script/FortniteGameFramework.FGF_Character
// Kind: Class; super: Character
class UFGF_Character
{
public:
    std::uint8_t Pad_0000[0x2F0]; // 0x0000
    void* Mesh; // 0x02F0 (Size: 0x8, Type: ObjectProperty)
    void* CharacterMovement; // 0x02F8 (Size: 0x8, Type: ObjectProperty)
    void* CapsuleComponent; // 0x0300 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t BasedMovement[0x58]; // 0x0308 (Size: 0x58, Type: StructProperty)
    std::uint8_t ReplicatedBasedMovement[0x58]; // 0x0360 (Size: 0x58, Type: StructProperty)
    float ReplicatedServerLastTransformUpdateTimeStamp; // 0x03B8 (Size: 0x4, Type: FloatProperty)
    float ReplayLastTransformUpdateTimeStamp; // 0x03BC (Size: 0x4, Type: FloatProperty)
    std::uint8_t BaseRotationOffset[0x20]; // 0x03C0 (Size: 0x20, Type: StructProperty)
    std::uint8_t BaseTranslationOffset[0x18]; // 0x03E0 (Size: 0x18, Type: StructProperty)
    std::uint8_t ReplicatedGravityDirection[0x30]; // 0x03F8 (Size: 0x30, Type: StructProperty)
    float AnimRootMotionTranslationScale; // 0x0428 (Size: 0x4, Type: FloatProperty)
    float CrouchedEyeHeight; // 0x042C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bClientResimulateRootMotion; // 0x0430 (Size: 0x1, Type: BoolProperty)
    // 0x0430 BoolProperty bClientResimulateRootMotionSources (shared storage)
    // 0x0430 BoolProperty bClientUpdating (shared storage)
    // 0x0430 BoolProperty bClientWasFalling (shared storage)
    // 0x0430 BoolProperty bInBaseReplication (shared storage)
    // 0x0430 BoolProperty bIsCrouched (shared storage)
    // 0x0430 BoolProperty bPressedJump (shared storage)
    // 0x0430 BoolProperty bProxyIsJumpForceApplied (shared storage)
    std::uint8_t bClientCheckEncroachmentOnNetUpdate; // 0x0431 (Size: 0x1, Type: BoolProperty)
    // 0x0431 BoolProperty bProxyIsCharacterMovementActive (shared storage)
    // 0x0431 BoolProperty bServerMoveIgnoreRootMotion (shared storage)
    // 0x0431 BoolProperty bSimGravityDisabled (shared storage)
    // 0x0431 BoolProperty bWasJumping (shared storage)
    std::uint8_t ReplicatedMovementMode; // 0x0432 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x1]; // 0x0433
    float JumpKeyHoldTime; // 0x0434 (Size: 0x4, Type: FloatProperty)
    float JumpForceTimeRemaining; // 0x0438 (Size: 0x4, Type: FloatProperty)
    float ProxyJumpForceStartedTime; // 0x043C (Size: 0x4, Type: FloatProperty)
    float JumpMaxHoldTime; // 0x0440 (Size: 0x4, Type: FloatProperty)
    std::int32_t JumpMaxCount; // 0x0444 (Size: 0x4, Type: IntProperty)
    std::int32_t JumpCurrentCount; // 0x0448 (Size: 0x4, Type: IntProperty)
    std::int32_t JumpCurrentCountPreJump; // 0x044C (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x8]; // 0x0450
    FMulticastInlineDelegate OnReachedJumpApex; // 0x0458 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate LandedDelegate; // 0x0468 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate MovementModeChangedDelegate; // 0x0478 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnCharacterMovementUpdated; // 0x0488 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t SavedRootMotion[0x48]; // 0x0498 (Size: 0x48, Type: StructProperty)
    std::uint8_t ClientRootMotionParams[0x70]; // 0x04E0 (Size: 0x70, Type: StructProperty)
    TArray<void*> RootMotionRepMoves; // 0x0550 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t RepRootMotion[0x1]; // 0x0560 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFGF_Character, Mesh) == 752, "Offset mismatch for UFGF_Character::Mesh");
static_assert(offsetof(UFGF_Character, CharacterMovement) == 760, "Offset mismatch for UFGF_Character::CharacterMovement");
static_assert(offsetof(UFGF_Character, CapsuleComponent) == 768, "Offset mismatch for UFGF_Character::CapsuleComponent");
static_assert(offsetof(UFGF_Character, BasedMovement) == 776, "Offset mismatch for UFGF_Character::BasedMovement");
static_assert(offsetof(UFGF_Character, ReplicatedBasedMovement) == 864, "Offset mismatch for UFGF_Character::ReplicatedBasedMovement");
static_assert(offsetof(UFGF_Character, ReplicatedServerLastTransformUpdateTimeStamp) == 952, "Offset mismatch for UFGF_Character::ReplicatedServerLastTransformUpdateTimeStamp");
static_assert(offsetof(UFGF_Character, ReplayLastTransformUpdateTimeStamp) == 956, "Offset mismatch for UFGF_Character::ReplayLastTransformUpdateTimeStamp");
static_assert(offsetof(UFGF_Character, BaseRotationOffset) == 960, "Offset mismatch for UFGF_Character::BaseRotationOffset");
static_assert(offsetof(UFGF_Character, BaseTranslationOffset) == 992, "Offset mismatch for UFGF_Character::BaseTranslationOffset");
static_assert(offsetof(UFGF_Character, ReplicatedGravityDirection) == 1016, "Offset mismatch for UFGF_Character::ReplicatedGravityDirection");
static_assert(offsetof(UFGF_Character, AnimRootMotionTranslationScale) == 1064, "Offset mismatch for UFGF_Character::AnimRootMotionTranslationScale");
static_assert(offsetof(UFGF_Character, CrouchedEyeHeight) == 1068, "Offset mismatch for UFGF_Character::CrouchedEyeHeight");
static_assert(offsetof(UFGF_Character, bClientResimulateRootMotion) == 1072, "Offset mismatch for UFGF_Character::bClientResimulateRootMotion");
static_assert(offsetof(UFGF_Character, bClientCheckEncroachmentOnNetUpdate) == 1073, "Offset mismatch for UFGF_Character::bClientCheckEncroachmentOnNetUpdate");
static_assert(offsetof(UFGF_Character, ReplicatedMovementMode) == 1074, "Offset mismatch for UFGF_Character::ReplicatedMovementMode");
static_assert(offsetof(UFGF_Character, JumpKeyHoldTime) == 1076, "Offset mismatch for UFGF_Character::JumpKeyHoldTime");
static_assert(offsetof(UFGF_Character, JumpForceTimeRemaining) == 1080, "Offset mismatch for UFGF_Character::JumpForceTimeRemaining");
static_assert(offsetof(UFGF_Character, ProxyJumpForceStartedTime) == 1084, "Offset mismatch for UFGF_Character::ProxyJumpForceStartedTime");
static_assert(offsetof(UFGF_Character, JumpMaxHoldTime) == 1088, "Offset mismatch for UFGF_Character::JumpMaxHoldTime");
static_assert(offsetof(UFGF_Character, JumpMaxCount) == 1092, "Offset mismatch for UFGF_Character::JumpMaxCount");
static_assert(offsetof(UFGF_Character, JumpCurrentCount) == 1096, "Offset mismatch for UFGF_Character::JumpCurrentCount");
static_assert(offsetof(UFGF_Character, JumpCurrentCountPreJump) == 1100, "Offset mismatch for UFGF_Character::JumpCurrentCountPreJump");
static_assert(offsetof(UFGF_Character, OnReachedJumpApex) == 1112, "Offset mismatch for UFGF_Character::OnReachedJumpApex");
static_assert(offsetof(UFGF_Character, LandedDelegate) == 1128, "Offset mismatch for UFGF_Character::LandedDelegate");
static_assert(offsetof(UFGF_Character, MovementModeChangedDelegate) == 1144, "Offset mismatch for UFGF_Character::MovementModeChangedDelegate");
static_assert(offsetof(UFGF_Character, OnCharacterMovementUpdated) == 1160, "Offset mismatch for UFGF_Character::OnCharacterMovementUpdated");
static_assert(offsetof(UFGF_Character, SavedRootMotion) == 1176, "Offset mismatch for UFGF_Character::SavedRootMotion");
static_assert(offsetof(UFGF_Character, ClientRootMotionParams) == 1248, "Offset mismatch for UFGF_Character::ClientRootMotionParams");
static_assert(offsetof(UFGF_Character, RootMotionRepMoves) == 1360, "Offset mismatch for UFGF_Character::RootMotionRepMoves");
static_assert(offsetof(UFGF_Character, RepRootMotion) == 1376, "Offset mismatch for UFGF_Character::RepRootMotion");

// /Script/FortniteGameFramework.FGF_GameMode
// Kind: Class; super: GameMode
class UFGF_GameMode
{
public:
    std::uint8_t Pad_0000[0x308]; // 0x0000
    std::uint8_t MatchState[0x4]; // 0x0308 (Size: 0x4, Type: NameProperty)
    std::uint8_t bDelayedStart; // 0x030C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x030D
    std::int32_t NumSpectators; // 0x0310 (Size: 0x4, Type: IntProperty)
    std::int32_t NumPlayers; // 0x0314 (Size: 0x4, Type: IntProperty)
    std::int32_t NumBots; // 0x0318 (Size: 0x4, Type: IntProperty)
    float MinRespawnDelay; // 0x031C (Size: 0x4, Type: FloatProperty)
    std::int32_t NumTravellingPlayers; // 0x0320 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0324
    void* EngineMessageClass; // 0x0328 (Size: 0x8, Type: ClassProperty)
    TArray<void*> InactivePlayerArray; // 0x0330 (Size: 0x10, Type: ArrayProperty)
    float InactivePlayerStateLifeSpan; // 0x0340 (Size: 0x4, Type: FloatProperty)
    std::int32_t MaxInactivePlayers; // 0x0344 (Size: 0x4, Type: IntProperty)
    std::uint8_t bHandleDedicatedServerReplays; // 0x0348 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFGF_GameMode, MatchState) == 776, "Offset mismatch for UFGF_GameMode::MatchState");
static_assert(offsetof(UFGF_GameMode, bDelayedStart) == 780, "Offset mismatch for UFGF_GameMode::bDelayedStart");
static_assert(offsetof(UFGF_GameMode, NumSpectators) == 784, "Offset mismatch for UFGF_GameMode::NumSpectators");
static_assert(offsetof(UFGF_GameMode, NumPlayers) == 788, "Offset mismatch for UFGF_GameMode::NumPlayers");
static_assert(offsetof(UFGF_GameMode, NumBots) == 792, "Offset mismatch for UFGF_GameMode::NumBots");
static_assert(offsetof(UFGF_GameMode, MinRespawnDelay) == 796, "Offset mismatch for UFGF_GameMode::MinRespawnDelay");
static_assert(offsetof(UFGF_GameMode, NumTravellingPlayers) == 800, "Offset mismatch for UFGF_GameMode::NumTravellingPlayers");
static_assert(offsetof(UFGF_GameMode, EngineMessageClass) == 808, "Offset mismatch for UFGF_GameMode::EngineMessageClass");
static_assert(offsetof(UFGF_GameMode, InactivePlayerArray) == 816, "Offset mismatch for UFGF_GameMode::InactivePlayerArray");
static_assert(offsetof(UFGF_GameMode, InactivePlayerStateLifeSpan) == 832, "Offset mismatch for UFGF_GameMode::InactivePlayerStateLifeSpan");
static_assert(offsetof(UFGF_GameMode, MaxInactivePlayers) == 836, "Offset mismatch for UFGF_GameMode::MaxInactivePlayers");
static_assert(offsetof(UFGF_GameMode, bHandleDedicatedServerReplays) == 840, "Offset mismatch for UFGF_GameMode::bHandleDedicatedServerReplays");

// /Script/FortniteGameFramework.FGF_GameState
// Kind: Class; super: GameState
class UFGF_GameState
{
public:
    std::uint8_t Pad_0000[0x320]; // 0x0000
    std::uint8_t bIsObjectTrackingEnabled; // 0x0320 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFGF_GameState, bIsObjectTrackingEnabled) == 800, "Offset mismatch for UFGF_GameState::bIsObjectTrackingEnabled");

// /Script/FortniteGameFramework.FGF_PlayerController
// Kind: Class; super: PlayerController
class UFGF_PlayerController
{
public:
    std::uint8_t Pad_0000[0x310]; // 0x0000
    void* player; // 0x0310 (Size: 0x8, Type: ObjectProperty)
    void* AcknowledgedPawn; // 0x0318 (Size: 0x8, Type: ObjectProperty)
    void* MyHUD; // 0x0320 (Size: 0x8, Type: ObjectProperty)
    void* PlayerCameraManager; // 0x0328 (Size: 0x8, Type: ObjectProperty)
    void* PlayerCameraManagerClass; // 0x0330 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bAutoManageActiveCameraTarget; // 0x0338 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0339
    std::uint8_t TargetViewRotation[0x30]; // 0x0340 (Size: 0x30, Type: StructProperty)
    float SmoothTargetViewRotationSpeed; // 0x0370 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0374
    TArray<void*> HiddenActors; // 0x0378 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> HiddenPrimitiveComponents; // 0x0388 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0003[0x4]; // 0x0398
    float LastSpectatorStateSynchTime; // 0x039C (Size: 0x4, Type: FloatProperty)
    std::uint8_t LastSpectatorSyncLocation[0x18]; // 0x03A0 (Size: 0x18, Type: StructProperty)
    std::uint8_t LastSpectatorSyncRotation[0x18]; // 0x03B8 (Size: 0x18, Type: StructProperty)
    std::int32_t ClientCap; // 0x03D0 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0004[0x4]; // 0x03D4
    void* CheatManager; // 0x03D8 (Size: 0x8, Type: ObjectProperty)
    void* CheatClass; // 0x03E0 (Size: 0x8, Type: ClassProperty)
    void* PlayerInput; // 0x03E8 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ActiveForceFeedbackEffects; // 0x03F0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0005[0x80]; // 0x0400
    std::uint8_t bPlayerIsWaiting; // 0x0480 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x3]; // 0x0481
    std::uint8_t NetPlayerIndex; // 0x0484 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0007[0x1B]; // 0x0485
    void* PendingSwapConnection; // 0x04A0 (Size: 0x8, Type: ObjectProperty)
    void* NetConnection; // 0x04A8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0008[0x18]; // 0x04B0
    float InputYawScale; // 0x04C8 (Size: 0x4, Type: FloatProperty)
    float InputPitchScale; // 0x04CC (Size: 0x4, Type: FloatProperty)
    float InputRollScale; // 0x04D0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bEnableClickEvents; // 0x04D4 (Size: 0x1, Type: BoolProperty)
    // 0x04D4 BoolProperty bEnableMotionControls (shared storage)
    // 0x04D4 BoolProperty bEnableMouseOverEvents (shared storage)
    // 0x04D4 BoolProperty bEnableStreamingSource (shared storage)
    // 0x04D4 BoolProperty bEnableTouchEvents (shared storage)
    // 0x04D4 BoolProperty bEnableTouchOverEvents (shared storage)
    // 0x04D4 BoolProperty bForceFeedbackEnabled (shared storage)
    // 0x04D4 BoolProperty bShowMouseCursor (shared storage)
    std::uint8_t bStreamingSourceShouldActivate; // 0x04D5 (Size: 0x1, Type: BoolProperty)
    // 0x04D5 BoolProperty bStreamingSourceShouldBlockOnSlowStreaming (shared storage)
    std::uint8_t Pad_0009[0x2]; // 0x04D6
    std::uint8_t StreamingSourcePriority; // 0x04D8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_000A[0x3]; // 0x04D9
    std::uint8_t StreamingSourceDebugColor[0x4]; // 0x04DC (Size: 0x4, Type: StructProperty)
    TArray<void*> StreamingSourceShapes; // 0x04E0 (Size: 0x10, Type: ArrayProperty)
    float ForceFeedbackScale; // 0x04F0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_000B[0x4]; // 0x04F4
    TArray<void*> ClickEventKeys; // 0x04F8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t DefaultMouseCursor; // 0x0508 (Size: 0x1, Type: ByteProperty)
    std::uint8_t CurrentMouseCursor; // 0x0509 (Size: 0x1, Type: ByteProperty)
    std::uint8_t DefaultClickTraceChannel; // 0x050A (Size: 0x1, Type: ByteProperty)
    std::uint8_t CurrentClickTraceChannel; // 0x050B (Size: 0x1, Type: ByteProperty)
    float HitResultTraceDistance; // 0x050C (Size: 0x4, Type: FloatProperty)
    std::uint16_t SeamlessTravelCount; // 0x0510 (Size: 0x2, Type: UInt16Property)
    std::uint16_t LastCompletedSeamlessTravelCount; // 0x0512 (Size: 0x2, Type: UInt16Property)
    std::uint8_t Pad_000C[0x84]; // 0x0514
    void* InactiveStateInputComponent; // 0x0598 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bShouldPerformFullTickWhenPaused; // 0x05A0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000D[0x17]; // 0x05A1
    void* CurrentTouchInterface; // 0x05B8 (Size: 0x8, Type: ObjectProperty)
    void* OverridePlayerInputClass; // 0x05C0 (Size: 0x8, Type: ClassProperty)
    std::uint8_t Pad_000E[0x78]; // 0x05C8
    void* SpectatorPawn; // 0x0640 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_000F[0x4]; // 0x0648
    std::uint8_t bIsLocalPlayerController; // 0x064C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0010[0x3]; // 0x064D
    std::uint8_t SpawnLocation[0x48]; // 0x0650 (Size: 0x48, Type: StructProperty)
    std::uint8_t CachedConnectionPlayerId[0x30]; // 0x0698 (Size: 0x30, Type: StructProperty)
    std::uint32_t ClientHandshakeId; // 0x06C8 (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(UFGF_PlayerController, player) == 784, "Offset mismatch for UFGF_PlayerController::player");
static_assert(offsetof(UFGF_PlayerController, AcknowledgedPawn) == 792, "Offset mismatch for UFGF_PlayerController::AcknowledgedPawn");
static_assert(offsetof(UFGF_PlayerController, MyHUD) == 800, "Offset mismatch for UFGF_PlayerController::MyHUD");
static_assert(offsetof(UFGF_PlayerController, PlayerCameraManager) == 808, "Offset mismatch for UFGF_PlayerController::PlayerCameraManager");
static_assert(offsetof(UFGF_PlayerController, PlayerCameraManagerClass) == 816, "Offset mismatch for UFGF_PlayerController::PlayerCameraManagerClass");
static_assert(offsetof(UFGF_PlayerController, bAutoManageActiveCameraTarget) == 824, "Offset mismatch for UFGF_PlayerController::bAutoManageActiveCameraTarget");
static_assert(offsetof(UFGF_PlayerController, TargetViewRotation) == 832, "Offset mismatch for UFGF_PlayerController::TargetViewRotation");
static_assert(offsetof(UFGF_PlayerController, SmoothTargetViewRotationSpeed) == 880, "Offset mismatch for UFGF_PlayerController::SmoothTargetViewRotationSpeed");
static_assert(offsetof(UFGF_PlayerController, HiddenActors) == 888, "Offset mismatch for UFGF_PlayerController::HiddenActors");
static_assert(offsetof(UFGF_PlayerController, HiddenPrimitiveComponents) == 904, "Offset mismatch for UFGF_PlayerController::HiddenPrimitiveComponents");
static_assert(offsetof(UFGF_PlayerController, LastSpectatorStateSynchTime) == 924, "Offset mismatch for UFGF_PlayerController::LastSpectatorStateSynchTime");
static_assert(offsetof(UFGF_PlayerController, LastSpectatorSyncLocation) == 928, "Offset mismatch for UFGF_PlayerController::LastSpectatorSyncLocation");
static_assert(offsetof(UFGF_PlayerController, LastSpectatorSyncRotation) == 952, "Offset mismatch for UFGF_PlayerController::LastSpectatorSyncRotation");
static_assert(offsetof(UFGF_PlayerController, ClientCap) == 976, "Offset mismatch for UFGF_PlayerController::ClientCap");
static_assert(offsetof(UFGF_PlayerController, CheatManager) == 984, "Offset mismatch for UFGF_PlayerController::CheatManager");
static_assert(offsetof(UFGF_PlayerController, CheatClass) == 992, "Offset mismatch for UFGF_PlayerController::CheatClass");
static_assert(offsetof(UFGF_PlayerController, PlayerInput) == 1000, "Offset mismatch for UFGF_PlayerController::PlayerInput");
static_assert(offsetof(UFGF_PlayerController, ActiveForceFeedbackEffects) == 1008, "Offset mismatch for UFGF_PlayerController::ActiveForceFeedbackEffects");
static_assert(offsetof(UFGF_PlayerController, bPlayerIsWaiting) == 1152, "Offset mismatch for UFGF_PlayerController::bPlayerIsWaiting");
static_assert(offsetof(UFGF_PlayerController, NetPlayerIndex) == 1156, "Offset mismatch for UFGF_PlayerController::NetPlayerIndex");
static_assert(offsetof(UFGF_PlayerController, PendingSwapConnection) == 1184, "Offset mismatch for UFGF_PlayerController::PendingSwapConnection");
static_assert(offsetof(UFGF_PlayerController, NetConnection) == 1192, "Offset mismatch for UFGF_PlayerController::NetConnection");
static_assert(offsetof(UFGF_PlayerController, InputYawScale) == 1224, "Offset mismatch for UFGF_PlayerController::InputYawScale");
static_assert(offsetof(UFGF_PlayerController, InputPitchScale) == 1228, "Offset mismatch for UFGF_PlayerController::InputPitchScale");
static_assert(offsetof(UFGF_PlayerController, InputRollScale) == 1232, "Offset mismatch for UFGF_PlayerController::InputRollScale");
static_assert(offsetof(UFGF_PlayerController, bEnableClickEvents) == 1236, "Offset mismatch for UFGF_PlayerController::bEnableClickEvents");
static_assert(offsetof(UFGF_PlayerController, bStreamingSourceShouldActivate) == 1237, "Offset mismatch for UFGF_PlayerController::bStreamingSourceShouldActivate");
static_assert(offsetof(UFGF_PlayerController, StreamingSourcePriority) == 1240, "Offset mismatch for UFGF_PlayerController::StreamingSourcePriority");
static_assert(offsetof(UFGF_PlayerController, StreamingSourceDebugColor) == 1244, "Offset mismatch for UFGF_PlayerController::StreamingSourceDebugColor");
static_assert(offsetof(UFGF_PlayerController, StreamingSourceShapes) == 1248, "Offset mismatch for UFGF_PlayerController::StreamingSourceShapes");
static_assert(offsetof(UFGF_PlayerController, ForceFeedbackScale) == 1264, "Offset mismatch for UFGF_PlayerController::ForceFeedbackScale");
static_assert(offsetof(UFGF_PlayerController, ClickEventKeys) == 1272, "Offset mismatch for UFGF_PlayerController::ClickEventKeys");
static_assert(offsetof(UFGF_PlayerController, DefaultMouseCursor) == 1288, "Offset mismatch for UFGF_PlayerController::DefaultMouseCursor");
static_assert(offsetof(UFGF_PlayerController, CurrentMouseCursor) == 1289, "Offset mismatch for UFGF_PlayerController::CurrentMouseCursor");
static_assert(offsetof(UFGF_PlayerController, DefaultClickTraceChannel) == 1290, "Offset mismatch for UFGF_PlayerController::DefaultClickTraceChannel");
static_assert(offsetof(UFGF_PlayerController, CurrentClickTraceChannel) == 1291, "Offset mismatch for UFGF_PlayerController::CurrentClickTraceChannel");
static_assert(offsetof(UFGF_PlayerController, HitResultTraceDistance) == 1292, "Offset mismatch for UFGF_PlayerController::HitResultTraceDistance");
static_assert(offsetof(UFGF_PlayerController, SeamlessTravelCount) == 1296, "Offset mismatch for UFGF_PlayerController::SeamlessTravelCount");
static_assert(offsetof(UFGF_PlayerController, LastCompletedSeamlessTravelCount) == 1298, "Offset mismatch for UFGF_PlayerController::LastCompletedSeamlessTravelCount");
static_assert(offsetof(UFGF_PlayerController, InactiveStateInputComponent) == 1432, "Offset mismatch for UFGF_PlayerController::InactiveStateInputComponent");
static_assert(offsetof(UFGF_PlayerController, bShouldPerformFullTickWhenPaused) == 1440, "Offset mismatch for UFGF_PlayerController::bShouldPerformFullTickWhenPaused");
static_assert(offsetof(UFGF_PlayerController, CurrentTouchInterface) == 1464, "Offset mismatch for UFGF_PlayerController::CurrentTouchInterface");
static_assert(offsetof(UFGF_PlayerController, OverridePlayerInputClass) == 1472, "Offset mismatch for UFGF_PlayerController::OverridePlayerInputClass");
static_assert(offsetof(UFGF_PlayerController, SpectatorPawn) == 1600, "Offset mismatch for UFGF_PlayerController::SpectatorPawn");
static_assert(offsetof(UFGF_PlayerController, bIsLocalPlayerController) == 1612, "Offset mismatch for UFGF_PlayerController::bIsLocalPlayerController");
static_assert(offsetof(UFGF_PlayerController, SpawnLocation) == 1616, "Offset mismatch for UFGF_PlayerController::SpawnLocation");
static_assert(offsetof(UFGF_PlayerController, CachedConnectionPlayerId) == 1688, "Offset mismatch for UFGF_PlayerController::CachedConnectionPlayerId");
static_assert(offsetof(UFGF_PlayerController, ClientHandshakeId) == 1736, "Offset mismatch for UFGF_PlayerController::ClientHandshakeId");

// /Script/FortniteGameFramework.FGF_PlayerState
// Kind: Class; super: PlayerState
class UFGF_PlayerState
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    float Score; // 0x0270 (Size: 0x4, Type: FloatProperty)
    std::int32_t PlayerID; // 0x0274 (Size: 0x4, Type: IntProperty)
    std::uint8_t CompressedPing; // 0x0278 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x1]; // 0x0279
    std::uint8_t bFromPreviousLevel; // 0x027A (Size: 0x1, Type: BoolProperty)
    // 0x027A BoolProperty bIsABot (shared storage)
    // 0x027A BoolProperty bIsInactive (shared storage)
    // 0x027A BoolProperty bIsSpectator (shared storage)
    // 0x027A BoolProperty bOnlySpectator (shared storage)
    // 0x027A BoolProperty bShouldUpdateReplicatedPing (shared storage)
    std::uint8_t Pad_0002[0x1]; // 0x027B
    std::int32_t StartTime; // 0x027C (Size: 0x4, Type: IntProperty)
    std::uint8_t UniqueID[0x30]; // 0x0280 (Size: 0x30, Type: StructProperty)
    void* EngineMessageClass; // 0x02B0 (Size: 0x8, Type: ClassProperty)
    std::uint8_t Pad_0003[0x8]; // 0x02B8
    FString SavedNetworkAddress; // 0x02C0 (Size: 0x10, Type: StrProperty)
    std::uint8_t Pad_0004[0x8]; // 0x02D0
    FMulticastInlineDelegate OnPawnSet; // 0x02D8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* PawnPrivate; // 0x02E8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0005[0x18]; // 0x02F0
    FString PlayerNamePrivate; // 0x0308 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UFGF_PlayerState, Score) == 624, "Offset mismatch for UFGF_PlayerState::Score");
static_assert(offsetof(UFGF_PlayerState, PlayerID) == 628, "Offset mismatch for UFGF_PlayerState::PlayerID");
static_assert(offsetof(UFGF_PlayerState, CompressedPing) == 632, "Offset mismatch for UFGF_PlayerState::CompressedPing");
static_assert(offsetof(UFGF_PlayerState, bFromPreviousLevel) == 634, "Offset mismatch for UFGF_PlayerState::bFromPreviousLevel");
static_assert(offsetof(UFGF_PlayerState, StartTime) == 636, "Offset mismatch for UFGF_PlayerState::StartTime");
static_assert(offsetof(UFGF_PlayerState, UniqueID) == 640, "Offset mismatch for UFGF_PlayerState::UniqueID");
static_assert(offsetof(UFGF_PlayerState, EngineMessageClass) == 688, "Offset mismatch for UFGF_PlayerState::EngineMessageClass");
static_assert(offsetof(UFGF_PlayerState, SavedNetworkAddress) == 704, "Offset mismatch for UFGF_PlayerState::SavedNetworkAddress");
static_assert(offsetof(UFGF_PlayerState, OnPawnSet) == 728, "Offset mismatch for UFGF_PlayerState::OnPawnSet");
static_assert(offsetof(UFGF_PlayerState, PawnPrivate) == 744, "Offset mismatch for UFGF_PlayerState::PawnPrivate");
static_assert(offsetof(UFGF_PlayerState, PlayerNamePrivate) == 776, "Offset mismatch for UFGF_PlayerState::PlayerNamePrivate");

// /Script/FortniteGameFramework.ObjectBasedStateTreeSchema
// Kind: Class; super: StateTreeSchema
class UObjectBasedStateTreeSchema
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortniteGameFramework.StateTreeManagerComponent
// Kind: Class; super: ActorComponent
class UStateTreeManagerComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TArray<void*> StateTreeRuntimeDataList; // 0x00C0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SimulatedDataList; // 0x00D0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ReplicatedStateChanges[0x1]; // 0x00E0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UStateTreeManagerComponent, StateTreeRuntimeDataList) == 192, "Offset mismatch for UStateTreeManagerComponent::StateTreeRuntimeDataList");
static_assert(offsetof(UStateTreeManagerComponent, SimulatedDataList) == 208, "Offset mismatch for UStateTreeManagerComponent::SimulatedDataList");
static_assert(offsetof(UStateTreeManagerComponent, ReplicatedStateChanges) == 224, "Offset mismatch for UStateTreeManagerComponent::ReplicatedStateChanges");

// /Script/FortniteGameFramework.StateTreeTaskObject
// Kind: Class; super: StateTreeTaskBlueprintBase
class UStateTreeTaskObject
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t bReplicates; // 0x0070 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UStateTreeTaskObject, bReplicates) == 112, "Offset mismatch for UStateTreeTaskObject::bReplicates");

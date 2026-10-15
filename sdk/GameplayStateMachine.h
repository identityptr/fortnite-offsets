/**
 * decamp dumper generated SDK
 * Package: /Script/GameplayStateMachine
 */
#pragma once
#include "Basic.h"

// /Script/GameplayStateMachine.ActiveGameplayStateData
// Kind: ScriptStruct; super: none
struct FActiveGameplayStateData
{
public:
    void* GameplayState; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t PreviousStateId[0x4]; // 0x0008 (Size: 0x4, Type: StructProperty)
    float BeginStateDelay; // 0x000C (Size: 0x4, Type: FloatProperty)
    float InitializationTime; // 0x0010 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FActiveGameplayStateData, GameplayState) == 0, "Offset mismatch for FActiveGameplayStateData::GameplayState");
static_assert(offsetof(FActiveGameplayStateData, PreviousStateId) == 8, "Offset mismatch for FActiveGameplayStateData::PreviousStateId");
static_assert(offsetof(FActiveGameplayStateData, BeginStateDelay) == 12, "Offset mismatch for FActiveGameplayStateData::BeginStateDelay");
static_assert(offsetof(FActiveGameplayStateData, InitializationTime) == 16, "Offset mismatch for FActiveGameplayStateData::InitializationTime");

// /Script/GameplayStateMachine.GameplayStateMachineArray
// Kind: ScriptStruct; super: FastArraySerializer
struct FGameplayStateMachineArray
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    void* StateMachineManager; // 0x0048 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> StateMachineItems; // 0x0050 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FGameplayStateMachineArray, StateMachineManager) == 72, "Offset mismatch for FGameplayStateMachineArray::StateMachineManager");
static_assert(offsetof(FGameplayStateMachineArray, StateMachineItems) == 80, "Offset mismatch for FGameplayStateMachineArray::StateMachineItems");

// /Script/GameplayStateMachine.GameplayStateMachineItem
// Kind: ScriptStruct; super: FastArraySerializerItem
struct FGameplayStateMachineItem
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    void* StateMachine; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    float BeginStateDelay; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float InitializationTime; // 0x001C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FGameplayStateMachineItem, StateMachine) == 16, "Offset mismatch for FGameplayStateMachineItem::StateMachine");
static_assert(offsetof(FGameplayStateMachineItem, BeginStateDelay) == 24, "Offset mismatch for FGameplayStateMachineItem::BeginStateDelay");
static_assert(offsetof(FGameplayStateMachineItem, InitializationTime) == 28, "Offset mismatch for FGameplayStateMachineItem::InitializationTime");

// /Script/GameplayStateMachine.GameplayStateSettings
// Kind: ScriptStruct; super: none
struct FGameplayStateSettings
{
public:
    void* StateClass; // 0x0000 (Size: 0x8, Type: ClassProperty)
    std::uint8_t StateId[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    TArray<void*> StateTransitions; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FGameplayStateSettings, StateClass) == 0, "Offset mismatch for FGameplayStateSettings::StateClass");
static_assert(offsetof(FGameplayStateSettings, StateId) == 8, "Offset mismatch for FGameplayStateSettings::StateId");
static_assert(offsetof(FGameplayStateSettings, StateTransitions) == 16, "Offset mismatch for FGameplayStateSettings::StateTransitions");

// /Script/GameplayStateMachine.GameplayStateTransition
// Kind: ScriptStruct; super: none
struct FGameplayStateTransition
{
public:
    std::uint8_t TransitionConditionTags[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    std::uint8_t TransitionStateTag[0x4]; // 0x0020 (Size: 0x4, Type: StructProperty)
    float BeginStateDelay; // 0x0024 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FGameplayStateTransition, TransitionConditionTags) == 0, "Offset mismatch for FGameplayStateTransition::TransitionConditionTags");
static_assert(offsetof(FGameplayStateTransition, TransitionStateTag) == 32, "Offset mismatch for FGameplayStateTransition::TransitionStateTag");
static_assert(offsetof(FGameplayStateTransition, BeginStateDelay) == 36, "Offset mismatch for FGameplayStateTransition::BeginStateDelay");

// /Script/GameplayStateMachine.GameplayState
// Kind: Class; super: Object
class UGameplayState
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t StateId[0x8]; // 0x0028 (Size: 0x8, Type: StructProperty)
    std::uint8_t StateRuntimeTags[0x20]; // 0x0030 (Size: 0x20, Type: StructProperty)
    std::uint8_t bEvaluateTransition; // 0x0050 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bReplicates; // 0x0051 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStateBegun; // 0x0052 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStateEnded; // 0x0053 (Size: 0x1, Type: BoolProperty)
    float InitializationServerTime; // 0x0054 (Size: 0x4, Type: FloatProperty)
    float BeginStateDelay; // 0x0058 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x005C
    void* CachedGameplayStateMachine; // 0x0060 (Size: 0x8, Type: ObjectProperty)
    void* CachedStateMachineManager; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    void* Hack_StateToDelayProcess; // 0x0070 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UGameplayState, StateId) == 40, "Offset mismatch for UGameplayState::StateId");
static_assert(offsetof(UGameplayState, StateRuntimeTags) == 48, "Offset mismatch for UGameplayState::StateRuntimeTags");
static_assert(offsetof(UGameplayState, bEvaluateTransition) == 80, "Offset mismatch for UGameplayState::bEvaluateTransition");
static_assert(offsetof(UGameplayState, bReplicates) == 81, "Offset mismatch for UGameplayState::bReplicates");
static_assert(offsetof(UGameplayState, bStateBegun) == 82, "Offset mismatch for UGameplayState::bStateBegun");
static_assert(offsetof(UGameplayState, bStateEnded) == 83, "Offset mismatch for UGameplayState::bStateEnded");
static_assert(offsetof(UGameplayState, InitializationServerTime) == 84, "Offset mismatch for UGameplayState::InitializationServerTime");
static_assert(offsetof(UGameplayState, BeginStateDelay) == 88, "Offset mismatch for UGameplayState::BeginStateDelay");
static_assert(offsetof(UGameplayState, CachedGameplayStateMachine) == 96, "Offset mismatch for UGameplayState::CachedGameplayStateMachine");
static_assert(offsetof(UGameplayState, CachedStateMachineManager) == 104, "Offset mismatch for UGameplayState::CachedStateMachineManager");
static_assert(offsetof(UGameplayState, Hack_StateToDelayProcess) == 112, "Offset mismatch for UGameplayState::Hack_StateToDelayProcess");

// /Script/GameplayStateMachine.GameplayStateMachine
// Kind: Class; super: GameplayState
class UGameplayStateMachine
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    std::uint8_t StateMachineId[0x8]; // 0x0090 (Size: 0x8, Type: StructProperty)
    std::uint8_t ActiveGameplayStateData[0x18]; // 0x0098 (Size: 0x18, Type: StructProperty)
    TArray<void*> GameplayStateSettings; // 0x00B0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t InitialGameplayStateId[0x1]; // 0x00C0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UGameplayStateMachine, StateMachineId) == 144, "Offset mismatch for UGameplayStateMachine::StateMachineId");
static_assert(offsetof(UGameplayStateMachine, ActiveGameplayStateData) == 152, "Offset mismatch for UGameplayStateMachine::ActiveGameplayStateData");
static_assert(offsetof(UGameplayStateMachine, GameplayStateSettings) == 176, "Offset mismatch for UGameplayStateMachine::GameplayStateSettings");
static_assert(offsetof(UGameplayStateMachine, InitialGameplayStateId) == 192, "Offset mismatch for UGameplayStateMachine::InitialGameplayStateId");

// /Script/GameplayStateMachine.GameplayStateMachineManager
// Kind: Class; super: ActorComponent
class UGameplayStateMachineManager
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t StateMachineList[0x1]; // 0x00C0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UGameplayStateMachineManager, StateMachineList) == 192, "Offset mismatch for UGameplayStateMachineManager::StateMachineList");

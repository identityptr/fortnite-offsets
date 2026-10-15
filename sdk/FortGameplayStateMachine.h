/**
 * decamp dumper generated SDK
 * Package: /Script/FortGameplayStateMachine
 */
#pragma once
#include "Basic.h"

// /Script/FortGameplayStateMachine.FortGameplayStateChanged
// Kind: ScriptStruct; super: none
struct FFortGameplayStateChanged
{
public:
    void* StateMachine; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t OldStateId[0x4]; // 0x0008 (Size: 0x4, Type: StructProperty)
    std::uint8_t NewStateId[0x1]; // 0x000C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortGameplayStateChanged, StateMachine) == 0, "Offset mismatch for FFortGameplayStateChanged::StateMachine");
static_assert(offsetof(FFortGameplayStateChanged, OldStateId) == 8, "Offset mismatch for FFortGameplayStateChanged::OldStateId");
static_assert(offsetof(FFortGameplayStateChanged, NewStateId) == 12, "Offset mismatch for FFortGameplayStateChanged::NewStateId");

// /Script/FortGameplayStateMachine.FortGameplayStateTransitionData
// Kind: ScriptStruct; super: none
struct FFortGameplayStateTransitionData
{
public:
    void* TargetStateMachine; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t TargetStateId[0x4]; // 0x0008 (Size: 0x4, Type: StructProperty)
    float TransitionStartServerTime; // 0x000C (Size: 0x4, Type: FloatProperty)
    float TransitionEndServerTime; // 0x0010 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortGameplayStateTransitionData, TargetStateMachine) == 0, "Offset mismatch for FFortGameplayStateTransitionData::TargetStateMachine");
static_assert(offsetof(FFortGameplayStateTransitionData, TargetStateId) == 8, "Offset mismatch for FFortGameplayStateTransitionData::TargetStateId");
static_assert(offsetof(FFortGameplayStateTransitionData, TransitionStartServerTime) == 12, "Offset mismatch for FFortGameplayStateTransitionData::TransitionStartServerTime");
static_assert(offsetof(FFortGameplayStateTransitionData, TransitionEndServerTime) == 16, "Offset mismatch for FFortGameplayStateTransitionData::TransitionEndServerTime");

// /Script/FortGameplayStateMachine.FortGameplayStateTransitionEnded
// Kind: ScriptStruct; super: none
struct FFortGameplayStateTransitionEnded
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortGameplayStateMachine.FortGameplayStateTransitionStarted
// Kind: ScriptStruct; super: FortGameplayStateTransitionData
struct FFortGameplayStateTransitionStarted
{
public:
    void* TargetStateMachine; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t TargetStateId[0x4]; // 0x0008 (Size: 0x4, Type: StructProperty)
    float TransitionStartServerTime; // 0x000C (Size: 0x4, Type: FloatProperty)
    float TransitionEndServerTime; // 0x0010 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortGameplayStateTransitionStarted, TargetStateMachine) == 0, "Offset mismatch for FFortGameplayStateTransitionStarted::TargetStateMachine");
static_assert(offsetof(FFortGameplayStateTransitionStarted, TargetStateId) == 8, "Offset mismatch for FFortGameplayStateTransitionStarted::TargetStateId");
static_assert(offsetof(FFortGameplayStateTransitionStarted, TransitionStartServerTime) == 12, "Offset mismatch for FFortGameplayStateTransitionStarted::TransitionStartServerTime");
static_assert(offsetof(FFortGameplayStateTransitionStarted, TransitionEndServerTime) == 16, "Offset mismatch for FFortGameplayStateTransitionStarted::TransitionEndServerTime");

// /Script/FortGameplayStateMachine.FortLeafGameplayStateChanged
// Kind: ScriptStruct; super: none
struct FFortLeafGameplayStateChanged
{
public:
    void* RootStateMachine; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t OldLeafStateId[0x4]; // 0x0008 (Size: 0x4, Type: StructProperty)
    std::uint8_t NewLeafStateId[0x1]; // 0x000C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortLeafGameplayStateChanged, RootStateMachine) == 0, "Offset mismatch for FFortLeafGameplayStateChanged::RootStateMachine");
static_assert(offsetof(FFortLeafGameplayStateChanged, OldLeafStateId) == 8, "Offset mismatch for FFortLeafGameplayStateChanged::OldLeafStateId");
static_assert(offsetof(FFortLeafGameplayStateChanged, NewLeafStateId) == 12, "Offset mismatch for FFortLeafGameplayStateChanged::NewLeafStateId");

// /Script/FortGameplayStateMachine.RootStateMachineData
// Kind: ScriptStruct; super: none
struct FRootStateMachineData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortGameplayStateMachine.FortGameplayState
// Kind: Class; super: GameplayState
class UFortGameplayState
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    FText StateDisplayName; // 0x0078 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(UFortGameplayState, StateDisplayName) == 120, "Offset mismatch for UFortGameplayState::StateDisplayName");

// /Script/FortGameplayStateMachine.FortGameplayStateMachine
// Kind: Class; super: GameplayStateMachine
class UFortGameplayStateMachine
{
public:
    std::uint8_t Pad_0000[0xD8]; // 0x0000
    std::uint8_t RootTransitionData[0x1]; // 0x00D8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortGameplayStateMachine, RootTransitionData) == 216, "Offset mismatch for UFortGameplayStateMachine::RootTransitionData");

// /Script/FortGameplayStateMachine.FortGameplayStateMachineManager
// Kind: Class; super: GameplayStateMachineManager
class UFortGameplayStateMachineManager
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t StateMachineList[0x1]; // 0x00C0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortGameplayStateMachineManager, StateMachineList) == 192, "Offset mismatch for UFortGameplayStateMachineManager::StateMachineList");

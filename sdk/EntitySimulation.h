/**
 * decamp dumper generated SDK
 * Package: /Script/EntitySimulation
 */
#pragma once
#include "Basic.h"

// /Script/EntitySimulation.LocalizableMessageParameterAgent
// Kind: ScriptStruct; super: none
struct FLocalizableMessageParameterAgent
{
public:
    std::uint8_t Value[0x30]; // 0x0000 (Size: 0x30, Type: StructProperty)
    std::uint64_t PawnNetGuid; // 0x0030 (Size: 0x8, Type: UInt64Property)
};

static_assert(offsetof(FLocalizableMessageParameterAgent, Value) == 0, "Offset mismatch for FLocalizableMessageParameterAgent::Value");
static_assert(offsetof(FLocalizableMessageParameterAgent, PawnNetGuid) == 48, "Offset mismatch for FLocalizableMessageParameterAgent::PawnNetGuid");

// /Script/EntitySimulation.VerseSimulationSubsystem
// Kind: Class; super: WorldSubsystem
class UVerseSimulationSubsystem
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    TMap<void*, void*> TrackedAgents; // 0x0068 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> TrackedAgentsByID; // 0x0078 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> TrackedUsers; // 0x0088 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UVerseSimulationSubsystem, TrackedAgents) == 104, "Offset mismatch for UVerseSimulationSubsystem::TrackedAgents");
static_assert(offsetof(UVerseSimulationSubsystem, TrackedAgentsByID) == 120, "Offset mismatch for UVerseSimulationSubsystem::TrackedAgentsByID");
static_assert(offsetof(UVerseSimulationSubsystem, TrackedUsers) == 136, "Offset mismatch for UVerseSimulationSubsystem::TrackedUsers");

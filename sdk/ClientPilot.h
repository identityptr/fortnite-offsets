/**
 * decamp dumper generated SDK
 * Package: /Script/ClientPilot
 */
#pragma once
#include "Basic.h"

// /Script/ClientPilot.ClientPilotBlackboard
// Kind: Class; super: Object
class UClientPilotBlackboard
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ClientPilot.ClientPilotBlackboardManager
// Kind: Class; super: Object
class UClientPilotBlackboardManager
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* PilotBlackboard; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UClientPilotBlackboardManager, PilotBlackboard) == 40, "Offset mismatch for UClientPilotBlackboardManager::PilotBlackboard");

// /Script/ClientPilot.ClientPilotComponent
// Kind: Class; super: Object
class UClientPilotComponent
{
public:
    std::uint8_t Opaque[1];
};

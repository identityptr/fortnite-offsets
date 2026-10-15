/**
 * decamp dumper generated SDK
 * Package: /Script/PilgrimQPSharedRuntime
 */
#pragma once
#include "Basic.h"

// /Script/PilgrimQPSharedRuntime.PilgrimEvent_QuickplayState_Base
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_QuickplayState_Base
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t StateId; // 0x0008 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FPilgrimEvent_QuickplayState_Base, StateId) == 8, "Offset mismatch for FPilgrimEvent_QuickplayState_Base::StateId");

// /Script/PilgrimQPSharedRuntime.PilgrimEvent_QuickplayState_Began
// Kind: ScriptStruct; super: PilgrimEvent_QuickplayState_Base
struct FPilgrimEvent_QuickplayState_Began
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t StateId; // 0x0008 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FPilgrimEvent_QuickplayState_Began, StateId) == 8, "Offset mismatch for FPilgrimEvent_QuickplayState_Began::StateId");

// /Script/PilgrimQPSharedRuntime.PilgrimEvent_QuickplayState_BeganClient
// Kind: ScriptStruct; super: PilgrimEvent_QuickplayState_Began
struct FPilgrimEvent_QuickplayState_BeganClient
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t StateId; // 0x0008 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FPilgrimEvent_QuickplayState_BeganClient, StateId) == 8, "Offset mismatch for FPilgrimEvent_QuickplayState_BeganClient::StateId");

// /Script/PilgrimQPSharedRuntime.PilgrimEvent_QuickplayState_BeganServer
// Kind: ScriptStruct; super: PilgrimEvent_QuickplayState_Began
struct FPilgrimEvent_QuickplayState_BeganServer
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t StateId; // 0x0008 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FPilgrimEvent_QuickplayState_BeganServer, StateId) == 8, "Offset mismatch for FPilgrimEvent_QuickplayState_BeganServer::StateId");

// /Script/PilgrimQPSharedRuntime.PilgrimEvent_QuickplayState_Ended
// Kind: ScriptStruct; super: PilgrimEvent_QuickplayState_Base
struct FPilgrimEvent_QuickplayState_Ended
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t StateId; // 0x0008 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FPilgrimEvent_QuickplayState_Ended, StateId) == 8, "Offset mismatch for FPilgrimEvent_QuickplayState_Ended::StateId");

// /Script/PilgrimQPSharedRuntime.PilgrimEvent_QuickplayState_EndedClient
// Kind: ScriptStruct; super: PilgrimEvent_QuickplayState_Ended
struct FPilgrimEvent_QuickplayState_EndedClient
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t StateId; // 0x0008 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FPilgrimEvent_QuickplayState_EndedClient, StateId) == 8, "Offset mismatch for FPilgrimEvent_QuickplayState_EndedClient::StateId");

// /Script/PilgrimQPSharedRuntime.PilgrimEvent_QuickplayState_EndedServer
// Kind: ScriptStruct; super: PilgrimEvent_QuickplayState_Ended
struct FPilgrimEvent_QuickplayState_EndedServer
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t StateId; // 0x0008 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FPilgrimEvent_QuickplayState_EndedServer, StateId) == 8, "Offset mismatch for FPilgrimEvent_QuickplayState_EndedServer::StateId");

// /Script/PilgrimQPSharedRuntime.PilgrimEvent_Quickplay_ReturningToGameplay
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_Quickplay_ReturningToGameplay
{
public:
    std::uint8_t Opaque[1];
};

/**
 * decamp dumper generated SDK
 * Package: /Script/JunoTeleportRuntime
 */
#pragma once
#include "Basic.h"

// /Script/JunoTeleportRuntime.JunoTeleportTelemetryData
// Kind: ScriptStruct; super: none
struct FJunoTeleportTelemetryData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoTeleportRuntime.JunoControllerComponent_Teleport
// Kind: Class; super: FortControllerComponent
class UJunoControllerComponent_Teleport
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    std::uint8_t ClientTagsToApplyDuringTeleportSequence[0x20]; // 0x00D0 (Size: 0x20, Type: StructProperty)
    TArray<void*> GameplayEffectsToApplyDuringTeleportSequence; // 0x00F0 (Size: 0x10, Type: ArrayProperty)
    void* EQSQuerierClass; // 0x0100 (Size: 0x8, Type: ClassProperty)
    void* EQSQueryTemplate; // 0x0108 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t StaticSpawnLocationRegistry[0x8]; // 0x0110 (Size: 0x8, Type: StructProperty)
    std::uint8_t CachedTeleportRequest[0x10]; // 0x0118 (Size: 0x10, Type: StructProperty)
    void* WaitForLevelStreamingTask; // 0x0128 (Size: 0x8, Type: ObjectProperty)
    void* EQSQueryInstance; // 0x0130 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ServerFinishedTeleportCallbacks; // 0x0138 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UJunoControllerComponent_Teleport, ClientTagsToApplyDuringTeleportSequence) == 208, "Offset mismatch for UJunoControllerComponent_Teleport::ClientTagsToApplyDuringTeleportSequence");
static_assert(offsetof(UJunoControllerComponent_Teleport, GameplayEffectsToApplyDuringTeleportSequence) == 240, "Offset mismatch for UJunoControllerComponent_Teleport::GameplayEffectsToApplyDuringTeleportSequence");
static_assert(offsetof(UJunoControllerComponent_Teleport, EQSQuerierClass) == 256, "Offset mismatch for UJunoControllerComponent_Teleport::EQSQuerierClass");
static_assert(offsetof(UJunoControllerComponent_Teleport, EQSQueryTemplate) == 264, "Offset mismatch for UJunoControllerComponent_Teleport::EQSQueryTemplate");
static_assert(offsetof(UJunoControllerComponent_Teleport, StaticSpawnLocationRegistry) == 272, "Offset mismatch for UJunoControllerComponent_Teleport::StaticSpawnLocationRegistry");
static_assert(offsetof(UJunoControllerComponent_Teleport, CachedTeleportRequest) == 280, "Offset mismatch for UJunoControllerComponent_Teleport::CachedTeleportRequest");
static_assert(offsetof(UJunoControllerComponent_Teleport, WaitForLevelStreamingTask) == 296, "Offset mismatch for UJunoControllerComponent_Teleport::WaitForLevelStreamingTask");
static_assert(offsetof(UJunoControllerComponent_Teleport, EQSQueryInstance) == 304, "Offset mismatch for UJunoControllerComponent_Teleport::EQSQueryInstance");
static_assert(offsetof(UJunoControllerComponent_Teleport, ServerFinishedTeleportCallbacks) == 312, "Offset mismatch for UJunoControllerComponent_Teleport::ServerFinishedTeleportCallbacks");

// /Script/JunoTeleportRuntime.JunoTeleportAnalytics
// Kind: Class; super: Object
class UJunoTeleportAnalytics
{
public:
    std::uint8_t Opaque[1];
};

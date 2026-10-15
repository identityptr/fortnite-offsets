/**
 * decamp dumper generated SDK
 * Package: /Script/DanceVolume
 */
#pragma once
#include "Basic.h"

// /Script/DanceVolume.DanceBeatInfo
// Kind: ScriptStruct; super: none
struct FDanceBeatInfo
{
public:
    float LengthBeats; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float StartOffsetMs; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDanceBeatInfo, LengthBeats) == 0, "Offset mismatch for FDanceBeatInfo::LengthBeats");
static_assert(offsetof(FDanceBeatInfo, StartOffsetMs) == 4, "Offset mismatch for FDanceBeatInfo::StartOffsetMs");

// /Script/DanceVolume.DanceSynchronizerComponent
// Kind: Class; super: ActorComponent
class UDanceSynchronizerComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t bShouldHalfOrDoubleTimeDances; // 0x00C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00C1
    std::uint8_t BeatInfo[0x8]; // 0x00C4 (Size: 0x8, Type: StructProperty)
    std::uint8_t SyncMode; // 0x00CC (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x00CD
    float Tempo; // 0x00D0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0003[0x4]; // 0x00D4
    void* OwnerPlayerPawn; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
    void* OwnerMeshComponent; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    void* LeaderMeshComponent; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDanceSynchronizerComponent, bShouldHalfOrDoubleTimeDances) == 192, "Offset mismatch for UDanceSynchronizerComponent::bShouldHalfOrDoubleTimeDances");
static_assert(offsetof(UDanceSynchronizerComponent, BeatInfo) == 196, "Offset mismatch for UDanceSynchronizerComponent::BeatInfo");
static_assert(offsetof(UDanceSynchronizerComponent, SyncMode) == 204, "Offset mismatch for UDanceSynchronizerComponent::SyncMode");
static_assert(offsetof(UDanceSynchronizerComponent, Tempo) == 208, "Offset mismatch for UDanceSynchronizerComponent::Tempo");
static_assert(offsetof(UDanceSynchronizerComponent, OwnerPlayerPawn) == 216, "Offset mismatch for UDanceSynchronizerComponent::OwnerPlayerPawn");
static_assert(offsetof(UDanceSynchronizerComponent, OwnerMeshComponent) == 224, "Offset mismatch for UDanceSynchronizerComponent::OwnerMeshComponent");
static_assert(offsetof(UDanceSynchronizerComponent, LeaderMeshComponent) == 232, "Offset mismatch for UDanceSynchronizerComponent::LeaderMeshComponent");

// /Script/DanceVolume.DanceVolumeLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UDanceVolumeLibrary
{
public:
    std::uint8_t Opaque[1];
};

/**
 * decamp dumper generated SDK
 * Package: /Script/FallTeleportationRuntime
 */
#pragma once
#include "Basic.h"

// /Script/FallTeleportationRuntime.FortFallTeleportCheatManager
// Kind: Class; super: ChildCheatManager
class UFortFallTeleportCheatManager
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FallTeleportationRuntime.FortFallTeleportComponentBase
// Kind: Class; super: ActorComponent
class UFortFallTeleportComponentBase
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t TeleportEnabled[0x28]; // 0x00C0 (Size: 0x28, Type: StructProperty)
    std::uint8_t ContinuousTeleportUpdateEnabled[0x28]; // 0x00E8 (Size: 0x28, Type: StructProperty)
    std::uint8_t ForceTeleportZHeight[0x28]; // 0x0110 (Size: 0x28, Type: StructProperty)
    std::uint8_t SphereTraceRadius[0x28]; // 0x0138 (Size: 0x28, Type: StructProperty)
    float WalkingLocationUpdateRate; // 0x0160 (Size: 0x4, Type: FloatProperty)
    float ZHeightThresholdCheckRate; // 0x0164 (Size: 0x4, Type: FloatProperty)
    float TeleportZModifier; // 0x0168 (Size: 0x4, Type: FloatProperty)
    float DistanceFromPawnToTraceLocation; // 0x016C (Size: 0x4, Type: FloatProperty)
    TArray<void*> TeleportOnBlocklist; // 0x0170 (Size: 0x10, Type: ArrayProperty)
    FName NoTeleportActorTag; // 0x0180 (Size: 0x8, Type: NameProperty)
    std::uint8_t SafeManualLocation[0x18]; // 0x0188 (Size: 0x18, Type: StructProperty)
    void* TeleportGEClass; // 0x01A0 (Size: 0x8, Type: ClassProperty)
    std::uint8_t TeleportLocation[0x18]; // 0x01A8 (Size: 0x18, Type: StructProperty)
    std::uint8_t FallbackLocation[0x18]; // 0x01C0 (Size: 0x18, Type: StructProperty)
    std::uint8_t bValidFallbackLocation; // 0x01D8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTeleporting; // 0x01D9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x01DA
    std::int32_t TeleportLimitBeforeFail; // 0x01DC (Size: 0x4, Type: IntProperty)
    std::int32_t TeleportCount; // 0x01E0 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x01E4
    void* OwningPawn; // 0x01E8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortFallTeleportComponentBase, TeleportEnabled) == 192, "Offset mismatch for UFortFallTeleportComponentBase::TeleportEnabled");
static_assert(offsetof(UFortFallTeleportComponentBase, ContinuousTeleportUpdateEnabled) == 232, "Offset mismatch for UFortFallTeleportComponentBase::ContinuousTeleportUpdateEnabled");
static_assert(offsetof(UFortFallTeleportComponentBase, ForceTeleportZHeight) == 272, "Offset mismatch for UFortFallTeleportComponentBase::ForceTeleportZHeight");
static_assert(offsetof(UFortFallTeleportComponentBase, SphereTraceRadius) == 312, "Offset mismatch for UFortFallTeleportComponentBase::SphereTraceRadius");
static_assert(offsetof(UFortFallTeleportComponentBase, WalkingLocationUpdateRate) == 352, "Offset mismatch for UFortFallTeleportComponentBase::WalkingLocationUpdateRate");
static_assert(offsetof(UFortFallTeleportComponentBase, ZHeightThresholdCheckRate) == 356, "Offset mismatch for UFortFallTeleportComponentBase::ZHeightThresholdCheckRate");
static_assert(offsetof(UFortFallTeleportComponentBase, TeleportZModifier) == 360, "Offset mismatch for UFortFallTeleportComponentBase::TeleportZModifier");
static_assert(offsetof(UFortFallTeleportComponentBase, DistanceFromPawnToTraceLocation) == 364, "Offset mismatch for UFortFallTeleportComponentBase::DistanceFromPawnToTraceLocation");
static_assert(offsetof(UFortFallTeleportComponentBase, TeleportOnBlocklist) == 368, "Offset mismatch for UFortFallTeleportComponentBase::TeleportOnBlocklist");
static_assert(offsetof(UFortFallTeleportComponentBase, NoTeleportActorTag) == 384, "Offset mismatch for UFortFallTeleportComponentBase::NoTeleportActorTag");
static_assert(offsetof(UFortFallTeleportComponentBase, SafeManualLocation) == 392, "Offset mismatch for UFortFallTeleportComponentBase::SafeManualLocation");
static_assert(offsetof(UFortFallTeleportComponentBase, TeleportGEClass) == 416, "Offset mismatch for UFortFallTeleportComponentBase::TeleportGEClass");
static_assert(offsetof(UFortFallTeleportComponentBase, TeleportLocation) == 424, "Offset mismatch for UFortFallTeleportComponentBase::TeleportLocation");
static_assert(offsetof(UFortFallTeleportComponentBase, FallbackLocation) == 448, "Offset mismatch for UFortFallTeleportComponentBase::FallbackLocation");
static_assert(offsetof(UFortFallTeleportComponentBase, bValidFallbackLocation) == 472, "Offset mismatch for UFortFallTeleportComponentBase::bValidFallbackLocation");
static_assert(offsetof(UFortFallTeleportComponentBase, bTeleporting) == 473, "Offset mismatch for UFortFallTeleportComponentBase::bTeleporting");
static_assert(offsetof(UFortFallTeleportComponentBase, TeleportLimitBeforeFail) == 476, "Offset mismatch for UFortFallTeleportComponentBase::TeleportLimitBeforeFail");
static_assert(offsetof(UFortFallTeleportComponentBase, TeleportCount) == 480, "Offset mismatch for UFortFallTeleportComponentBase::TeleportCount");
static_assert(offsetof(UFortFallTeleportComponentBase, OwningPawn) == 488, "Offset mismatch for UFortFallTeleportComponentBase::OwningPawn");

// /Script/FallTeleportationRuntime.FortFallTeleportSpawnerComponent
// Kind: Class; super: ActorComponent
class UFortFallTeleportSpawnerComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t PlayerPawnReceiverClass[0x20]; // 0x00C0 (Size: 0x20, Type: SoftClassProperty)
    void* ComponentToAddClass; // 0x00E0 (Size: 0x8, Type: ClassProperty)
    std::uint8_t TeleportEnabled[0x28]; // 0x00E8 (Size: 0x28, Type: StructProperty)
    std::uint8_t RemoveComponentRequestTimeOffset[0x1]; // 0x0110 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortFallTeleportSpawnerComponent, PlayerPawnReceiverClass) == 192, "Offset mismatch for UFortFallTeleportSpawnerComponent::PlayerPawnReceiverClass");
static_assert(offsetof(UFortFallTeleportSpawnerComponent, ComponentToAddClass) == 224, "Offset mismatch for UFortFallTeleportSpawnerComponent::ComponentToAddClass");
static_assert(offsetof(UFortFallTeleportSpawnerComponent, TeleportEnabled) == 232, "Offset mismatch for UFortFallTeleportSpawnerComponent::TeleportEnabled");
static_assert(offsetof(UFortFallTeleportSpawnerComponent, RemoveComponentRequestTimeOffset) == 272, "Offset mismatch for UFortFallTeleportSpawnerComponent::RemoveComponentRequestTimeOffset");

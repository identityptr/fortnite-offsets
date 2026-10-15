/**
 * decamp dumper generated SDK
 * Package: /Script/EntityFortnite
 */
#pragma once
#include "Basic.h"

// /Script/EntityFortnite.EntityFortniteStormPhase
// Kind: ScriptStruct; super: none
struct FEntityFortniteStormPhase
{
public:
    float WaitTime; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float ShrinkTime; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float EndRadius; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float EndRadiusPercentage; // 0x000C (Size: 0x4, Type: FloatProperty)
    std::int32_t DamageIndex; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::uint8_t bMoves; // 0x0014 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0015
    float MinMovementDistance; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float MaxMovementDistance; // 0x001C (Size: 0x4, Type: FloatProperty)
    float MinMovementDistancePercentage; // 0x0020 (Size: 0x4, Type: FloatProperty)
    float MaxMovementDistancePercentage; // 0x0024 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0028
    std::uint8_t EndLocation[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FEntityFortniteStormPhase, WaitTime) == 0, "Offset mismatch for FEntityFortniteStormPhase::WaitTime");
static_assert(offsetof(FEntityFortniteStormPhase, ShrinkTime) == 4, "Offset mismatch for FEntityFortniteStormPhase::ShrinkTime");
static_assert(offsetof(FEntityFortniteStormPhase, EndRadius) == 8, "Offset mismatch for FEntityFortniteStormPhase::EndRadius");
static_assert(offsetof(FEntityFortniteStormPhase, EndRadiusPercentage) == 12, "Offset mismatch for FEntityFortniteStormPhase::EndRadiusPercentage");
static_assert(offsetof(FEntityFortniteStormPhase, DamageIndex) == 16, "Offset mismatch for FEntityFortniteStormPhase::DamageIndex");
static_assert(offsetof(FEntityFortniteStormPhase, bMoves) == 20, "Offset mismatch for FEntityFortniteStormPhase::bMoves");
static_assert(offsetof(FEntityFortniteStormPhase, MinMovementDistance) == 24, "Offset mismatch for FEntityFortniteStormPhase::MinMovementDistance");
static_assert(offsetof(FEntityFortniteStormPhase, MaxMovementDistance) == 28, "Offset mismatch for FEntityFortniteStormPhase::MaxMovementDistance");
static_assert(offsetof(FEntityFortniteStormPhase, MinMovementDistancePercentage) == 32, "Offset mismatch for FEntityFortniteStormPhase::MinMovementDistancePercentage");
static_assert(offsetof(FEntityFortniteStormPhase, MaxMovementDistancePercentage) == 36, "Offset mismatch for FEntityFortniteStormPhase::MaxMovementDistancePercentage");
static_assert(offsetof(FEntityFortniteStormPhase, EndLocation) == 48, "Offset mismatch for FEntityFortniteStormPhase::EndLocation");

// /Script/EntityFortnite.EntityFortniteInterface
// Kind: Class; super: Interface
class UEntityFortniteInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/EntityFortnite.EntityFortnitePlayerComponent
// Kind: Class; super: EntityActorPlayerComponent
class UEntityFortnitePlayerComponent
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    std::uint8_t PlayerID[0x30]; // 0x0060 (Size: 0x30, Type: StructProperty)
    std::uint8_t PlayerControllerCache[0x20]; // 0x0090 (Size: 0x20, Type: SoftObjectProperty)
    TSoftObjectPtr<void> PlayerStateCache; // 0x00B0 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UEntityFortnitePlayerComponent, PlayerID) == 96, "Offset mismatch for UEntityFortnitePlayerComponent::PlayerID");
static_assert(offsetof(UEntityFortnitePlayerComponent, PlayerControllerCache) == 144, "Offset mismatch for UEntityFortnitePlayerComponent::PlayerControllerCache");
static_assert(offsetof(UEntityFortnitePlayerComponent, PlayerStateCache) == 176, "Offset mismatch for UEntityFortnitePlayerComponent::PlayerStateCache");

// /Script/EntityFortnite.EntityFortniteStormControllerComponent
// Kind: Class; super: EntityComponent
class UEntityFortniteStormControllerComponent
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    void* StormSpawnerClass; // 0x0058 (Size: 0x8, Type: ClassProperty)
    void* StormSpawner; // 0x0060 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UEntityFortniteStormControllerComponent, StormSpawnerClass) == 88, "Offset mismatch for UEntityFortniteStormControllerComponent::StormSpawnerClass");
static_assert(offsetof(UEntityFortniteStormControllerComponent, StormSpawner) == 96, "Offset mismatch for UEntityFortniteStormControllerComponent::StormSpawner");

// /Script/EntityFortnite.EntityFortniteStormSpawner
// Kind: Class; super: Actor
class UEntityFortniteStormSpawner
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    void* SceneComponent; // 0x0270 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UEntityFortniteStormSpawner, SceneComponent) == 624, "Offset mismatch for UEntityFortniteStormSpawner::SceneComponent");

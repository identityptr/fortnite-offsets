/**
 * decamp dumper generated SDK
 * Package: /Game/Blueprints/Adventures/SpawnTeleporter/BP_TeleportationDrone
 */
#pragma once
#include "Basic.h"

// /Game/Blueprints/Adventures/SpawnTeleporter/BP_TeleportationDrone.BP_TeleportationDrone_C
// Kind: BlueprintGeneratedClass; super: Pawn
class UBP_TeleportationDrone_C
{
public:
    std::uint8_t None[0x2F0]; // 0x0000 (Size: 0x2F0, Type: UnknownProperty)
    std::uint8_t UberGraphFrame[0x8]; // 0x02F0 (Size: 0x8, Type: StructProperty)
    void* SoundLibrary; // 0x02F8 (Size: 0x8, Type: ObjectProperty)
    void* SkeletalMeshComponentBudgeted; // 0x0300 (Size: 0x8, Type: ObjectProperty)
    void* Scene; // 0x0308 (Size: 0x8, Type: ObjectProperty)
    double AnimPlayRate; // 0x0310 (Size: 0x8, Type: DoubleProperty)
    void* StaticMeshMID; // 0x0318 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UBP_TeleportationDrone_C, None) == 0, "Offset mismatch for UBP_TeleportationDrone_C::None");
static_assert(offsetof(UBP_TeleportationDrone_C, UberGraphFrame) == 752, "Offset mismatch for UBP_TeleportationDrone_C::UberGraphFrame");
static_assert(offsetof(UBP_TeleportationDrone_C, SoundLibrary) == 760, "Offset mismatch for UBP_TeleportationDrone_C::SoundLibrary");
static_assert(offsetof(UBP_TeleportationDrone_C, SkeletalMeshComponentBudgeted) == 768, "Offset mismatch for UBP_TeleportationDrone_C::SkeletalMeshComponentBudgeted");
static_assert(offsetof(UBP_TeleportationDrone_C, Scene) == 776, "Offset mismatch for UBP_TeleportationDrone_C::Scene");
static_assert(offsetof(UBP_TeleportationDrone_C, AnimPlayRate) == 784, "Offset mismatch for UBP_TeleportationDrone_C::AnimPlayRate");
static_assert(offsetof(UBP_TeleportationDrone_C, StaticMeshMID) == 792, "Offset mismatch for UBP_TeleportationDrone_C::StaticMeshMID");

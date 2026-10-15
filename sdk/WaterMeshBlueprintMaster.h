/**
 * decamp dumper generated SDK
 * Package: /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/_WaterMeshBlueprintMaster
 */
#pragma once
#include "Basic.h"

// /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/_WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C
// Kind: BlueprintGeneratedClass; super: Actor
class UWaterMeshBlueprintMaster_C
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x0270 (Size: 0x8, Type: StructProperty)
    void* CollisionMesh1; // 0x0278 (Size: 0x8, Type: ObjectProperty)
    void* CollisionMesh2; // 0x0280 (Size: 0x8, Type: ObjectProperty)
    void* CollisionMesh4; // 0x0288 (Size: 0x8, Type: ObjectProperty)
    void* CollisionMesh3; // 0x0290 (Size: 0x8, Type: ObjectProperty)
    void* StaticMesh1; // 0x0298 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x4]; // 0x02A0
    std::uint8_t FlipFlow; // 0x02A4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t NoFlow; // 0x02A5 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x02A6
    void* FlippedMaterial; // 0x02A8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0003[0x18]; // 0x02B0
    std::uint8_t Continue; // 0x02C8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0xF]; // 0x02C9
    std::uint8_t ShowTestMesh; // 0x02D8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t HasExecutedConstuctionScript; // 0x02D9 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UWaterMeshBlueprintMaster_C, UberGraphFrame) == 624, "Offset mismatch for UWaterMeshBlueprintMaster_C::UberGraphFrame");
static_assert(offsetof(UWaterMeshBlueprintMaster_C, CollisionMesh1) == 632, "Offset mismatch for UWaterMeshBlueprintMaster_C::CollisionMesh1");
static_assert(offsetof(UWaterMeshBlueprintMaster_C, CollisionMesh2) == 640, "Offset mismatch for UWaterMeshBlueprintMaster_C::CollisionMesh2");
static_assert(offsetof(UWaterMeshBlueprintMaster_C, CollisionMesh4) == 648, "Offset mismatch for UWaterMeshBlueprintMaster_C::CollisionMesh4");
static_assert(offsetof(UWaterMeshBlueprintMaster_C, CollisionMesh3) == 656, "Offset mismatch for UWaterMeshBlueprintMaster_C::CollisionMesh3");
static_assert(offsetof(UWaterMeshBlueprintMaster_C, StaticMesh1) == 664, "Offset mismatch for UWaterMeshBlueprintMaster_C::StaticMesh1");
static_assert(offsetof(UWaterMeshBlueprintMaster_C, FlipFlow) == 676, "Offset mismatch for UWaterMeshBlueprintMaster_C::FlipFlow");
static_assert(offsetof(UWaterMeshBlueprintMaster_C, NoFlow) == 677, "Offset mismatch for UWaterMeshBlueprintMaster_C::NoFlow");
static_assert(offsetof(UWaterMeshBlueprintMaster_C, FlippedMaterial) == 680, "Offset mismatch for UWaterMeshBlueprintMaster_C::FlippedMaterial");
static_assert(offsetof(UWaterMeshBlueprintMaster_C, Continue) == 712, "Offset mismatch for UWaterMeshBlueprintMaster_C::Continue");
static_assert(offsetof(UWaterMeshBlueprintMaster_C, ShowTestMesh) == 728, "Offset mismatch for UWaterMeshBlueprintMaster_C::ShowTestMesh");
static_assert(offsetof(UWaterMeshBlueprintMaster_C, HasExecutedConstuctionScript) == 729, "Offset mismatch for UWaterMeshBlueprintMaster_C::HasExecutedConstuctionScript");

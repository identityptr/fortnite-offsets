/**
 * decamp dumper generated SDK
 * Package: /Game/Sounds/Fort_Player/Blueprints/B_FortFootstepComponent
 */
#pragma once
#include "Basic.h"

// /Game/Sounds/Fort_Player/Blueprints/B_FortFootstepComponent.B_FortFootstepComponent_C
// Kind: BlueprintGeneratedClass; super: FortFootstepComponent
class UB_FortFootstepComponent_C
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    float MaxFootstepDistance; // 0x00C8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00CC
    void* FoleyActionDataTable; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
    void* DefaultFootstepSound; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
    void* DefaultFastFootstepSound; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    void* DBNOLandingSound; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
    void* DefaultLandingSound; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
    void* DefaultHardLandingSound; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
    void* DefaultCrouchSound; // 0x0100 (Size: 0x8, Type: ObjectProperty)
    void* DefaultStandSound; // 0x0108 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t SurfaceType; // 0x0110 (Size: 0x1, Type: ByteProperty)
    std::uint8_t FootstepSurface; // 0x0111 (Size: 0x1, Type: EnumProperty)
    std::uint8_t PhysicalSurfaces; // 0x0112 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x25]; // 0x0113
    void* PlayerFoleyContextClass; // 0x0138 (Size: 0x8, Type: ClassProperty)
    void* PlayerFoleyContext; // 0x0140 (Size: 0x8, Type: ObjectProperty)
    void* OwningPawn; // 0x0148 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0003[0x10]; // 0x0150
    void* SurfaceTrackingComponent; // 0x0160 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UB_FortFootstepComponent_C, MaxFootstepDistance) == 200, "Offset mismatch for UB_FortFootstepComponent_C::MaxFootstepDistance");
static_assert(offsetof(UB_FortFootstepComponent_C, FoleyActionDataTable) == 208, "Offset mismatch for UB_FortFootstepComponent_C::FoleyActionDataTable");
static_assert(offsetof(UB_FortFootstepComponent_C, DefaultFootstepSound) == 216, "Offset mismatch for UB_FortFootstepComponent_C::DefaultFootstepSound");
static_assert(offsetof(UB_FortFootstepComponent_C, DefaultFastFootstepSound) == 224, "Offset mismatch for UB_FortFootstepComponent_C::DefaultFastFootstepSound");
static_assert(offsetof(UB_FortFootstepComponent_C, DBNOLandingSound) == 232, "Offset mismatch for UB_FortFootstepComponent_C::DBNOLandingSound");
static_assert(offsetof(UB_FortFootstepComponent_C, DefaultLandingSound) == 240, "Offset mismatch for UB_FortFootstepComponent_C::DefaultLandingSound");
static_assert(offsetof(UB_FortFootstepComponent_C, DefaultHardLandingSound) == 248, "Offset mismatch for UB_FortFootstepComponent_C::DefaultHardLandingSound");
static_assert(offsetof(UB_FortFootstepComponent_C, DefaultCrouchSound) == 256, "Offset mismatch for UB_FortFootstepComponent_C::DefaultCrouchSound");
static_assert(offsetof(UB_FortFootstepComponent_C, DefaultStandSound) == 264, "Offset mismatch for UB_FortFootstepComponent_C::DefaultStandSound");
static_assert(offsetof(UB_FortFootstepComponent_C, SurfaceType) == 272, "Offset mismatch for UB_FortFootstepComponent_C::SurfaceType");
static_assert(offsetof(UB_FortFootstepComponent_C, FootstepSurface) == 273, "Offset mismatch for UB_FortFootstepComponent_C::FootstepSurface");
static_assert(offsetof(UB_FortFootstepComponent_C, PhysicalSurfaces) == 274, "Offset mismatch for UB_FortFootstepComponent_C::PhysicalSurfaces");
static_assert(offsetof(UB_FortFootstepComponent_C, PlayerFoleyContextClass) == 312, "Offset mismatch for UB_FortFootstepComponent_C::PlayerFoleyContextClass");
static_assert(offsetof(UB_FortFootstepComponent_C, PlayerFoleyContext) == 320, "Offset mismatch for UB_FortFootstepComponent_C::PlayerFoleyContext");
static_assert(offsetof(UB_FortFootstepComponent_C, OwningPawn) == 328, "Offset mismatch for UB_FortFootstepComponent_C::OwningPawn");
static_assert(offsetof(UB_FortFootstepComponent_C, SurfaceTrackingComponent) == 352, "Offset mismatch for UB_FortFootstepComponent_C::SurfaceTrackingComponent");

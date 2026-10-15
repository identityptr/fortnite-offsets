/**
 * decamp dumper generated SDK
 * Package: /Script/Buoyancy
 */
#pragma once
#include "Basic.h"

// /Script/Buoyancy.BuoyancyEventInterface
// Kind: Class; super: Interface
class UBuoyancyEventInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Buoyancy.BuoyancyRuntimeSettings
// Kind: Class; super: DeveloperSettings
class UBuoyancyRuntimeSettings
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t bBuoyancyEnabled; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bKeepFloatingObjectsAwake; // 0x0031 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0032
    float WaterDensity; // 0x0034 (Size: 0x4, Type: FloatProperty)
    float WaterDrag; // 0x0038 (Size: 0x4, Type: FloatProperty)
    float WaterLift; // 0x003C (Size: 0x4, Type: FloatProperty)
    std::uint8_t CollisionChannelForWaterObjects; // 0x0040 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0041
    std::int32_t MaxNumBoundsSubdivisions; // 0x0044 (Size: 0x4, Type: IntProperty)
    float MinBoundsSubdivisionVol; // 0x0048 (Size: 0x4, Type: FloatProperty)
    std::uint8_t SurfaceTouchCallbackFlags; // 0x004C (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0003[0x3]; // 0x004D
    float MinVelocityForSurfaceTouchCallback; // 0x0050 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bEnableSplineKeyCacheGrid; // 0x0054 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x0055
    float SplineKeyCacheGridSize; // 0x0058 (Size: 0x4, Type: FloatProperty)
    std::uint32_t SplineKeyCacheLimit; // 0x005C (Size: 0x4, Type: UInt32Property)
    std::uint8_t bCullInteractionsByOceanSpline; // 0x0060 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UBuoyancyRuntimeSettings, bBuoyancyEnabled) == 48, "Offset mismatch for UBuoyancyRuntimeSettings::bBuoyancyEnabled");
static_assert(offsetof(UBuoyancyRuntimeSettings, bKeepFloatingObjectsAwake) == 49, "Offset mismatch for UBuoyancyRuntimeSettings::bKeepFloatingObjectsAwake");
static_assert(offsetof(UBuoyancyRuntimeSettings, WaterDensity) == 52, "Offset mismatch for UBuoyancyRuntimeSettings::WaterDensity");
static_assert(offsetof(UBuoyancyRuntimeSettings, WaterDrag) == 56, "Offset mismatch for UBuoyancyRuntimeSettings::WaterDrag");
static_assert(offsetof(UBuoyancyRuntimeSettings, WaterLift) == 60, "Offset mismatch for UBuoyancyRuntimeSettings::WaterLift");
static_assert(offsetof(UBuoyancyRuntimeSettings, CollisionChannelForWaterObjects) == 64, "Offset mismatch for UBuoyancyRuntimeSettings::CollisionChannelForWaterObjects");
static_assert(offsetof(UBuoyancyRuntimeSettings, MaxNumBoundsSubdivisions) == 68, "Offset mismatch for UBuoyancyRuntimeSettings::MaxNumBoundsSubdivisions");
static_assert(offsetof(UBuoyancyRuntimeSettings, MinBoundsSubdivisionVol) == 72, "Offset mismatch for UBuoyancyRuntimeSettings::MinBoundsSubdivisionVol");
static_assert(offsetof(UBuoyancyRuntimeSettings, SurfaceTouchCallbackFlags) == 76, "Offset mismatch for UBuoyancyRuntimeSettings::SurfaceTouchCallbackFlags");
static_assert(offsetof(UBuoyancyRuntimeSettings, MinVelocityForSurfaceTouchCallback) == 80, "Offset mismatch for UBuoyancyRuntimeSettings::MinVelocityForSurfaceTouchCallback");
static_assert(offsetof(UBuoyancyRuntimeSettings, bEnableSplineKeyCacheGrid) == 84, "Offset mismatch for UBuoyancyRuntimeSettings::bEnableSplineKeyCacheGrid");
static_assert(offsetof(UBuoyancyRuntimeSettings, SplineKeyCacheGridSize) == 88, "Offset mismatch for UBuoyancyRuntimeSettings::SplineKeyCacheGridSize");
static_assert(offsetof(UBuoyancyRuntimeSettings, SplineKeyCacheLimit) == 92, "Offset mismatch for UBuoyancyRuntimeSettings::SplineKeyCacheLimit");
static_assert(offsetof(UBuoyancyRuntimeSettings, bCullInteractionsByOceanSpline) == 96, "Offset mismatch for UBuoyancyRuntimeSettings::bCullInteractionsByOceanSpline");

// /Script/Buoyancy.BuoyancySubsystem
// Kind: Class; super: TickableWorldSubsystem
class UBuoyancySubsystem
{
public:
    std::uint8_t Opaque[1];
};

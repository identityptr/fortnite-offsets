/**
 * decamp dumper generated SDK
 * Package: /Script/LandscapeGeneratorRuntime
 */
#pragma once
#include "Basic.h"

// /Script/LandscapeGeneratorRuntime.LandscapeGeneratorSplineMeshComponent
// Kind: Class; super: PrimitiveComponent
class ULandscapeGeneratorSplineMeshComponent
{
public:
    std::uint8_t Pad_0000[0x570]; // 0x0000
    void* Material; // 0x0570 (Size: 0x8, Type: ObjectProperty)
    std::int32_t NumSegments; // 0x0578 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x057C
    std::uint8_t SplineParams[0xB0]; // 0x0580 (Size: 0xB0, Type: StructProperty)
    std::uint8_t SplineUpDir[0x18]; // 0x0630 (Size: 0x18, Type: StructProperty)
    float SplineBoundaryMin; // 0x0648 (Size: 0x4, Type: FloatProperty)
    float SplineBoundaryMax; // 0x064C (Size: 0x4, Type: FloatProperty)
    std::uint8_t ForwardAxis; // 0x0650 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bSmoothInterpRollScale; // 0x0651 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(ULandscapeGeneratorSplineMeshComponent, Material) == 1392, "Offset mismatch for ULandscapeGeneratorSplineMeshComponent::Material");
static_assert(offsetof(ULandscapeGeneratorSplineMeshComponent, NumSegments) == 1400, "Offset mismatch for ULandscapeGeneratorSplineMeshComponent::NumSegments");
static_assert(offsetof(ULandscapeGeneratorSplineMeshComponent, SplineParams) == 1408, "Offset mismatch for ULandscapeGeneratorSplineMeshComponent::SplineParams");
static_assert(offsetof(ULandscapeGeneratorSplineMeshComponent, SplineUpDir) == 1584, "Offset mismatch for ULandscapeGeneratorSplineMeshComponent::SplineUpDir");
static_assert(offsetof(ULandscapeGeneratorSplineMeshComponent, SplineBoundaryMin) == 1608, "Offset mismatch for ULandscapeGeneratorSplineMeshComponent::SplineBoundaryMin");
static_assert(offsetof(ULandscapeGeneratorSplineMeshComponent, SplineBoundaryMax) == 1612, "Offset mismatch for ULandscapeGeneratorSplineMeshComponent::SplineBoundaryMax");
static_assert(offsetof(ULandscapeGeneratorSplineMeshComponent, ForwardAxis) == 1616, "Offset mismatch for ULandscapeGeneratorSplineMeshComponent::ForwardAxis");
static_assert(offsetof(ULandscapeGeneratorSplineMeshComponent, bSmoothInterpRollScale) == 1617, "Offset mismatch for ULandscapeGeneratorSplineMeshComponent::bSmoothInterpRollScale");

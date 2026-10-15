/**
 * decamp dumper generated SDK
 * Package: /Script/ProceduralMeshComponent
 */
#pragma once
#include "Basic.h"

// /Script/ProceduralMeshComponent.ProcMeshSection
// Kind: ScriptStruct; super: none
struct FProcMeshSection
{
public:
    TArray<void*> ProcVertexBuffer; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ProcIndexBuffer; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t SectionLocalBox[0x38]; // 0x0020 (Size: 0x38, Type: StructProperty)
    std::uint8_t bEnableCollision; // 0x0058 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSectionVisible; // 0x0059 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FProcMeshSection, ProcVertexBuffer) == 0, "Offset mismatch for FProcMeshSection::ProcVertexBuffer");
static_assert(offsetof(FProcMeshSection, ProcIndexBuffer) == 16, "Offset mismatch for FProcMeshSection::ProcIndexBuffer");
static_assert(offsetof(FProcMeshSection, SectionLocalBox) == 32, "Offset mismatch for FProcMeshSection::SectionLocalBox");
static_assert(offsetof(FProcMeshSection, bEnableCollision) == 88, "Offset mismatch for FProcMeshSection::bEnableCollision");
static_assert(offsetof(FProcMeshSection, bSectionVisible) == 89, "Offset mismatch for FProcMeshSection::bSectionVisible");

// /Script/ProceduralMeshComponent.ProcMeshTangent
// Kind: ScriptStruct; super: none
struct FProcMeshTangent
{
public:
    std::uint8_t TangentX[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t bFlipTangentY; // 0x0018 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FProcMeshTangent, TangentX) == 0, "Offset mismatch for FProcMeshTangent::TangentX");
static_assert(offsetof(FProcMeshTangent, bFlipTangentY) == 24, "Offset mismatch for FProcMeshTangent::bFlipTangentY");

// /Script/ProceduralMeshComponent.ProcMeshVertex
// Kind: ScriptStruct; super: none
struct FProcMeshVertex
{
public:
    std::uint8_t Position[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t Normal[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t Tangent[0x20]; // 0x0030 (Size: 0x20, Type: StructProperty)
    std::uint8_t Color[0x8]; // 0x0050 (Size: 0x8, Type: StructProperty)
    std::uint8_t UV0[0x10]; // 0x0058 (Size: 0x10, Type: StructProperty)
    std::uint8_t UV1[0x10]; // 0x0068 (Size: 0x10, Type: StructProperty)
    std::uint8_t UV2[0x10]; // 0x0078 (Size: 0x10, Type: StructProperty)
    std::uint8_t UV3[0x1]; // 0x0088 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FProcMeshVertex, Position) == 0, "Offset mismatch for FProcMeshVertex::Position");
static_assert(offsetof(FProcMeshVertex, Normal) == 24, "Offset mismatch for FProcMeshVertex::Normal");
static_assert(offsetof(FProcMeshVertex, Tangent) == 48, "Offset mismatch for FProcMeshVertex::Tangent");
static_assert(offsetof(FProcMeshVertex, Color) == 80, "Offset mismatch for FProcMeshVertex::Color");
static_assert(offsetof(FProcMeshVertex, UV0) == 88, "Offset mismatch for FProcMeshVertex::UV0");
static_assert(offsetof(FProcMeshVertex, UV1) == 104, "Offset mismatch for FProcMeshVertex::UV1");
static_assert(offsetof(FProcMeshVertex, UV2) == 120, "Offset mismatch for FProcMeshVertex::UV2");
static_assert(offsetof(FProcMeshVertex, UV3) == 136, "Offset mismatch for FProcMeshVertex::UV3");

// /Script/ProceduralMeshComponent.KismetProceduralMeshLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UKismetProceduralMeshLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ProceduralMeshComponent.ProceduralMeshComponent
// Kind: Class; super: MeshComponent
class UProceduralMeshComponent
{
public:
    std::uint8_t Pad_0000[0x5D8]; // 0x0000
    std::uint8_t bUseComplexAsSimpleCollision; // 0x05D8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseAsyncCooking; // 0x05D9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x05DA
    void* ProcMeshBodySetup; // 0x05E0 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ProcMeshSections; // 0x05E8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CollisionConvexElems; // 0x05F8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t LocalBounds[0x38]; // 0x0608 (Size: 0x38, Type: StructProperty)
    TArray<void*> AsyncBodySetupQueue; // 0x0640 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UProceduralMeshComponent, bUseComplexAsSimpleCollision) == 1496, "Offset mismatch for UProceduralMeshComponent::bUseComplexAsSimpleCollision");
static_assert(offsetof(UProceduralMeshComponent, bUseAsyncCooking) == 1497, "Offset mismatch for UProceduralMeshComponent::bUseAsyncCooking");
static_assert(offsetof(UProceduralMeshComponent, ProcMeshBodySetup) == 1504, "Offset mismatch for UProceduralMeshComponent::ProcMeshBodySetup");
static_assert(offsetof(UProceduralMeshComponent, ProcMeshSections) == 1512, "Offset mismatch for UProceduralMeshComponent::ProcMeshSections");
static_assert(offsetof(UProceduralMeshComponent, CollisionConvexElems) == 1528, "Offset mismatch for UProceduralMeshComponent::CollisionConvexElems");
static_assert(offsetof(UProceduralMeshComponent, LocalBounds) == 1544, "Offset mismatch for UProceduralMeshComponent::LocalBounds");
static_assert(offsetof(UProceduralMeshComponent, AsyncBodySetupQueue) == 1600, "Offset mismatch for UProceduralMeshComponent::AsyncBodySetupQueue");

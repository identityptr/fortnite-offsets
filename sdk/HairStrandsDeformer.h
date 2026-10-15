/**
 * decamp dumper generated SDK
 * Package: /Script/HairStrandsDeformer
 */
#pragma once
#include "Basic.h"

// /Script/HairStrandsDeformer.OptimusGroomAssetComponentSource
// Kind: Class; super: OptimusComponentSource
class UOptimusGroomAssetComponentSource
{
public:
    std::uint8_t Opaque[1];
};


// /Script/HairStrandsDeformer.OptimusGroomAttributeReadDataInterface
// Kind: Class; super: OptimusComputeDataInterface
class UOptimusGroomAttributeReadDataInterface
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t GroomAttributeName[0x4]; // 0x0028 (Size: 0x4, Type: NameProperty)
    std::uint8_t GroomAttributeGroup; // 0x002C (Size: 0x1, Type: EnumProperty)
    std::uint8_t GroomAttributeType; // 0x002D (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UOptimusGroomAttributeReadDataInterface, GroomAttributeName) == 40, "Offset mismatch for UOptimusGroomAttributeReadDataInterface::GroomAttributeName");
static_assert(offsetof(UOptimusGroomAttributeReadDataInterface, GroomAttributeGroup) == 44, "Offset mismatch for UOptimusGroomAttributeReadDataInterface::GroomAttributeGroup");
static_assert(offsetof(UOptimusGroomAttributeReadDataInterface, GroomAttributeType) == 45, "Offset mismatch for UOptimusGroomAttributeReadDataInterface::GroomAttributeType");

// /Script/HairStrandsDeformer.OptimusGroomAttributeReadDataProvider
// Kind: Class; super: ComputeDataProvider
class UOptimusGroomAttributeReadDataProvider
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* MeshComponent; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t GroomAttributeName[0x4]; // 0x0030 (Size: 0x4, Type: NameProperty)
    std::uint8_t GroomAttributeGroup; // 0x0034 (Size: 0x1, Type: EnumProperty)
    std::uint8_t GroomAttributeType; // 0x0035 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UOptimusGroomAttributeReadDataProvider, MeshComponent) == 40, "Offset mismatch for UOptimusGroomAttributeReadDataProvider::MeshComponent");
static_assert(offsetof(UOptimusGroomAttributeReadDataProvider, GroomAttributeName) == 48, "Offset mismatch for UOptimusGroomAttributeReadDataProvider::GroomAttributeName");
static_assert(offsetof(UOptimusGroomAttributeReadDataProvider, GroomAttributeGroup) == 52, "Offset mismatch for UOptimusGroomAttributeReadDataProvider::GroomAttributeGroup");
static_assert(offsetof(UOptimusGroomAttributeReadDataProvider, GroomAttributeType) == 53, "Offset mismatch for UOptimusGroomAttributeReadDataProvider::GroomAttributeType");

// /Script/HairStrandsDeformer.OptimusGroomCollisionComponentSource
// Kind: Class; super: OptimusComponentSource
class UOptimusGroomCollisionComponentSource
{
public:
    std::uint8_t Opaque[1];
};


// /Script/HairStrandsDeformer.OptimusGroomCollisionReadDataInterface
// Kind: Class; super: OptimusComputeDataInterface
class UOptimusGroomCollisionReadDataInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/HairStrandsDeformer.OptimusGroomCollisionReadDataProvider
// Kind: Class; super: ComputeDataProvider
class UOptimusGroomCollisionReadDataProvider
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* SolverComponent; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UOptimusGroomCollisionReadDataProvider, SolverComponent) == 40, "Offset mismatch for UOptimusGroomCollisionReadDataProvider::SolverComponent");

// /Script/HairStrandsDeformer.OptimusGroomExecDataInterface
// Kind: Class; super: OptimusComputeDataInterface
class UOptimusGroomExecDataInterface
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t Domain; // 0x0030 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UOptimusGroomExecDataInterface, Domain) == 48, "Offset mismatch for UOptimusGroomExecDataInterface::Domain");

// /Script/HairStrandsDeformer.OptimusGroomExecDataProvider
// Kind: Class; super: ComputeDataProvider
class UOptimusGroomExecDataProvider
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* MeshComponent; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Domain; // 0x0030 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UOptimusGroomExecDataProvider, MeshComponent) == 40, "Offset mismatch for UOptimusGroomExecDataProvider::MeshComponent");
static_assert(offsetof(UOptimusGroomExecDataProvider, Domain) == 48, "Offset mismatch for UOptimusGroomExecDataProvider::Domain");

// /Script/HairStrandsDeformer.OptimusGroomGuidesReadDataInterface
// Kind: Class; super: OptimusComputeDataInterface
class UOptimusGroomGuidesReadDataInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/HairStrandsDeformer.OptimusGroomGuidesReadDataProvider
// Kind: Class; super: ComputeDataProvider
class UOptimusGroomGuidesReadDataProvider
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* MeshComponent; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UOptimusGroomGuidesReadDataProvider, MeshComponent) == 40, "Offset mismatch for UOptimusGroomGuidesReadDataProvider::MeshComponent");

// /Script/HairStrandsDeformer.OptimusGroomGuidesWriteDataInterface
// Kind: Class; super: OptimusComputeDataInterface
class UOptimusGroomGuidesWriteDataInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/HairStrandsDeformer.OptimusGroomGuidesWriteDataProvider
// Kind: Class; super: ComputeDataProvider
class UOptimusGroomGuidesWriteDataProvider
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* MeshComponent; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UOptimusGroomGuidesWriteDataProvider, MeshComponent) == 40, "Offset mismatch for UOptimusGroomGuidesWriteDataProvider::MeshComponent");

// /Script/HairStrandsDeformer.OptimusGroomMeshesReadDataInterface
// Kind: Class; super: OptimusComputeDataInterface
class UOptimusGroomMeshesReadDataInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/HairStrandsDeformer.OptimusGroomMeshesReadDataProvider
// Kind: Class; super: ComputeDataProvider
class UOptimusGroomMeshesReadDataProvider
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* MeshComponent; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UOptimusGroomMeshesReadDataProvider, MeshComponent) == 40, "Offset mismatch for UOptimusGroomMeshesReadDataProvider::MeshComponent");

// /Script/HairStrandsDeformer.OptimusGroomSolverComponentSource
// Kind: Class; super: OptimusComponentSource
class UOptimusGroomSolverComponentSource
{
public:
    std::uint8_t Opaque[1];
};


// /Script/HairStrandsDeformer.OptimusGroomSolverReadDataInterface
// Kind: Class; super: OptimusComputeDataInterface
class UOptimusGroomSolverReadDataInterface
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FName ResetSimulationTrigger; // 0x0028 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UOptimusGroomSolverReadDataInterface, ResetSimulationTrigger) == 40, "Offset mismatch for UOptimusGroomSolverReadDataInterface::ResetSimulationTrigger");

// /Script/HairStrandsDeformer.OptimusGroomSolverReadDataProvider
// Kind: Class; super: ComputeDataProvider
class UOptimusGroomSolverReadDataProvider
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    void* SolverComponent; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    void* DeformerInstance; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UOptimusGroomSolverReadDataProvider, SolverComponent) == 48, "Offset mismatch for UOptimusGroomSolverReadDataProvider::SolverComponent");
static_assert(offsetof(UOptimusGroomSolverReadDataProvider, DeformerInstance) == 56, "Offset mismatch for UOptimusGroomSolverReadDataProvider::DeformerInstance");

// /Script/HairStrandsDeformer.OptimusGroomStrandsReadDataInterface
// Kind: Class; super: OptimusComputeDataInterface
class UOptimusGroomStrandsReadDataInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/HairStrandsDeformer.OptimusGroomStrandsReadDataProvider
// Kind: Class; super: ComputeDataProvider
class UOptimusGroomStrandsReadDataProvider
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* MeshComponent; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UOptimusGroomStrandsReadDataProvider, MeshComponent) == 40, "Offset mismatch for UOptimusGroomStrandsReadDataProvider::MeshComponent");

// /Script/HairStrandsDeformer.OptimusGroomStrandsWriteDataInterface
// Kind: Class; super: OptimusComputeDataInterface
class UOptimusGroomStrandsWriteDataInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/HairStrandsDeformer.OptimusGroomStrandsWriteDataProvider
// Kind: Class; super: ComputeDataProvider
class UOptimusGroomStrandsWriteDataProvider
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* MeshComponent; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UOptimusGroomStrandsWriteDataProvider, MeshComponent) == 40, "Offset mismatch for UOptimusGroomStrandsWriteDataProvider::MeshComponent");

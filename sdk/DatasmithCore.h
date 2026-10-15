/**
 * decamp dumper generated SDK
 * Package: /Script/DatasmithCore
 */
#pragma once
#include "Basic.h"

// /Script/DatasmithCore.DatasmithMeshSourceModel
// Kind: ScriptStruct; super: none
struct FDatasmithMeshSourceModel
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DatasmithCore.DatasmithClothAssetFactory
// Kind: Class; super: Object
class UDatasmithClothAssetFactory
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DatasmithCore.DatasmithClothComponentFactory
// Kind: Class; super: Object
class UDatasmithClothComponentFactory
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DatasmithCore.DatasmithMesh
// Kind: Class; super: Object
class UDatasmithMesh
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FString MeshName; // 0x0028 (Size: 0x10, Type: StrProperty)
    std::uint8_t bIsCollisionMesh; // 0x0038 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0039
    TArray<void*> SourceModels; // 0x0040 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UDatasmithMesh, MeshName) == 40, "Offset mismatch for UDatasmithMesh::MeshName");
static_assert(offsetof(UDatasmithMesh, bIsCollisionMesh) == 56, "Offset mismatch for UDatasmithMesh::bIsCollisionMesh");
static_assert(offsetof(UDatasmithMesh, SourceModels) == 64, "Offset mismatch for UDatasmithMesh::SourceModels");

/**
 * decamp dumper generated SDK
 * Package: /Script/MeshDescription
 */
#pragma once
#include "Basic.h"

// /Script/MeshDescription.EdgeID
// Kind: ScriptStruct; super: ElementID
struct FEdgeID
{
public:
    std::int32_t IDValue; // 0x0000 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FEdgeID, IDValue) == 0, "Offset mismatch for FEdgeID::IDValue");

// /Script/MeshDescription.ElementID
// Kind: ScriptStruct; super: none
struct FElementID
{
public:
    std::int32_t IDValue; // 0x0000 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FElementID, IDValue) == 0, "Offset mismatch for FElementID::IDValue");

// /Script/MeshDescription.PolygonGroupID
// Kind: ScriptStruct; super: ElementID
struct FPolygonGroupID
{
public:
    std::int32_t IDValue; // 0x0000 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FPolygonGroupID, IDValue) == 0, "Offset mismatch for FPolygonGroupID::IDValue");

// /Script/MeshDescription.PolygonID
// Kind: ScriptStruct; super: ElementID
struct FPolygonID
{
public:
    std::int32_t IDValue; // 0x0000 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FPolygonID, IDValue) == 0, "Offset mismatch for FPolygonID::IDValue");

// /Script/MeshDescription.TriangleID
// Kind: ScriptStruct; super: ElementID
struct FTriangleID
{
public:
    std::int32_t IDValue; // 0x0000 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FTriangleID, IDValue) == 0, "Offset mismatch for FTriangleID::IDValue");

// /Script/MeshDescription.UVID
// Kind: ScriptStruct; super: ElementID
struct FUVID
{
public:
    std::int32_t IDValue; // 0x0000 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FUVID, IDValue) == 0, "Offset mismatch for FUVID::IDValue");

// /Script/MeshDescription.VertexID
// Kind: ScriptStruct; super: ElementID
struct FVertexID
{
public:
    std::int32_t IDValue; // 0x0000 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FVertexID, IDValue) == 0, "Offset mismatch for FVertexID::IDValue");

// /Script/MeshDescription.VertexInstanceID
// Kind: ScriptStruct; super: ElementID
struct FVertexInstanceID
{
public:
    std::int32_t IDValue; // 0x0000 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FVertexInstanceID, IDValue) == 0, "Offset mismatch for FVertexInstanceID::IDValue");

// /Script/MeshDescription.MeshDescriptionBase
// Kind: Class; super: Object
class UMeshDescriptionBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MeshDescription.MeshDescriptionBaseBulkData
// Kind: Class; super: Object
class UMeshDescriptionBaseBulkData
{
public:
    std::uint8_t Opaque[1];
};

/**
 * decamp dumper generated SDK
 * Package: /Script/MassCore
 */
#pragma once
#include "Basic.h"

// /Script/MassCore.MassChunkFragment
// Kind: ScriptStruct; super: MassElement
struct FMassChunkFragment
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassCore.MassConstSharedFragment
// Kind: ScriptStruct; super: MassElement
struct FMassConstSharedFragment
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassCore.MassElement
// Kind: ScriptStruct; super: none
struct FMassElement
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassCore.MassEntityHandle
// Kind: ScriptStruct; super: none
struct FMassEntityHandle
{
public:
    std::int32_t Index; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t SerialNumber; // 0x0004 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FMassEntityHandle, Index) == 0, "Offset mismatch for FMassEntityHandle::Index");
static_assert(offsetof(FMassEntityHandle, SerialNumber) == 4, "Offset mismatch for FMassEntityHandle::SerialNumber");

// /Script/MassCore.MassFragment
// Kind: ScriptStruct; super: MassElement
struct FMassFragment
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassCore.MassSharedFragment
// Kind: ScriptStruct; super: MassElement
struct FMassSharedFragment
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassCore.MassSparseFragment
// Kind: ScriptStruct; super: MassFragment
struct FMassSparseFragment
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassCore.MassSparseTag
// Kind: ScriptStruct; super: MassTag
struct FMassSparseTag
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassCore.MassTag
// Kind: ScriptStruct; super: MassElement
struct FMassTag
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassCore.TransformFragment
// Kind: ScriptStruct; super: MassFragment
struct FTransformFragment
{
public:
    std::uint8_t Transform[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FTransformFragment, Transform) == 0, "Offset mismatch for FTransformFragment::Transform");

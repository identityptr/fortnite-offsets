/**
 * decamp dumper generated SDK
 * Package: /Script/LFNBaseUtilities
 */
#pragma once
#include "Basic.h"

// /Script/LFNBaseUtilities.LFNStaticMeshPrimitives
// Kind: ScriptStruct; super: none
struct FLFNStaticMeshPrimitives
{
public:
    std::int32_t SphereElements; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t BoxElements; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t CapsuleElements; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::int32_t ConvexElements; // 0x000C (Size: 0x4, Type: IntProperty)
    std::int32_t TotalElements; // 0x0010 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FLFNStaticMeshPrimitives, SphereElements) == 0, "Offset mismatch for FLFNStaticMeshPrimitives::SphereElements");
static_assert(offsetof(FLFNStaticMeshPrimitives, BoxElements) == 4, "Offset mismatch for FLFNStaticMeshPrimitives::BoxElements");
static_assert(offsetof(FLFNStaticMeshPrimitives, CapsuleElements) == 8, "Offset mismatch for FLFNStaticMeshPrimitives::CapsuleElements");
static_assert(offsetof(FLFNStaticMeshPrimitives, ConvexElements) == 12, "Offset mismatch for FLFNStaticMeshPrimitives::ConvexElements");
static_assert(offsetof(FLFNStaticMeshPrimitives, TotalElements) == 16, "Offset mismatch for FLFNStaticMeshPrimitives::TotalElements");

// /Script/LFNBaseUtilities.LFNBaseUtilitiesLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class ULFNBaseUtilitiesLibrary
{
public:
    std::uint8_t Opaque[1];
};

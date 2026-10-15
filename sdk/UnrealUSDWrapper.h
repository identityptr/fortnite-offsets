/**
 * decamp dumper generated SDK
 * Package: /Script/UnrealUSDWrapper
 */
#pragma once
#include "Basic.h"

// /Script/UnrealUSDWrapper.Matrix2D
// Kind: ScriptStruct; super: none
struct FMatrix2D
{
public:
    std::uint8_t Row0[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t Row1[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMatrix2D, Row0) == 0, "Offset mismatch for FMatrix2D::Row0");
static_assert(offsetof(FMatrix2D, Row1) == 16, "Offset mismatch for FMatrix2D::Row1");

// /Script/UnrealUSDWrapper.Matrix3D
// Kind: ScriptStruct; super: none
struct FMatrix3D
{
public:
    std::uint8_t Row0[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t Row1[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t Row2[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMatrix3D, Row0) == 0, "Offset mismatch for FMatrix3D::Row0");
static_assert(offsetof(FMatrix3D, Row1) == 24, "Offset mismatch for FMatrix3D::Row1");
static_assert(offsetof(FMatrix3D, Row2) == 48, "Offset mismatch for FMatrix3D::Row2");

/**
 * decamp dumper generated SDK
 * Package: /Script/MassCommon
 */
#pragma once
#include "Basic.h"

// /Script/MassCommon.AgentHeightFragment
// Kind: ScriptStruct; super: MassFragment
struct FAgentHeightFragment
{
public:
    float Height; // 0x0000 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FAgentHeightFragment, Height) == 0, "Offset mismatch for FAgentHeightFragment::Height");

// /Script/MassCommon.AgentRadiusFragment
// Kind: ScriptStruct; super: MassFragment
struct FAgentRadiusFragment
{
public:
    float Radius; // 0x0000 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FAgentRadiusFragment, Radius) == 0, "Offset mismatch for FAgentRadiusFragment::Radius");

// /Script/MassCommon.MassInt16Real
// Kind: ScriptStruct; super: none
struct FMassInt16Real
{
public:
    std::int16_t Value; // 0x0000 (Size: 0x2, Type: Int16Property)
};

static_assert(offsetof(FMassInt16Real, Value) == 0, "Offset mismatch for FMassInt16Real::Value");

// /Script/MassCommon.MassInt16Real10
// Kind: ScriptStruct; super: none
struct FMassInt16Real10
{
public:
    std::int16_t Value; // 0x0000 (Size: 0x2, Type: Int16Property)
};

static_assert(offsetof(FMassInt16Real10, Value) == 0, "Offset mismatch for FMassInt16Real10::Value");

// /Script/MassCommon.MassInt16Vector
// Kind: ScriptStruct; super: none
struct FMassInt16Vector
{
public:
    std::int16_t X; // 0x0000 (Size: 0x2, Type: Int16Property)
    std::int16_t Y; // 0x0002 (Size: 0x2, Type: Int16Property)
    std::int16_t Z; // 0x0004 (Size: 0x2, Type: Int16Property)
};

static_assert(offsetof(FMassInt16Vector, X) == 0, "Offset mismatch for FMassInt16Vector::X");
static_assert(offsetof(FMassInt16Vector, Y) == 2, "Offset mismatch for FMassInt16Vector::Y");
static_assert(offsetof(FMassInt16Vector, Z) == 4, "Offset mismatch for FMassInt16Vector::Z");

// /Script/MassCommon.MassInt16Vector2D
// Kind: ScriptStruct; super: none
struct FMassInt16Vector2D
{
public:
    std::int16_t X; // 0x0000 (Size: 0x2, Type: Int16Property)
    std::int16_t Y; // 0x0002 (Size: 0x2, Type: Int16Property)
};

static_assert(offsetof(FMassInt16Vector2D, X) == 0, "Offset mismatch for FMassInt16Vector2D::X");
static_assert(offsetof(FMassInt16Vector2D, Y) == 2, "Offset mismatch for FMassInt16Vector2D::Y");

// /Script/MassCommon.MassNetworkID
// Kind: ScriptStruct; super: SequentialIDBase
struct FMassNetworkID
{
public:
    std::uint32_t Value; // 0x0000 (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(FMassNetworkID, Value) == 0, "Offset mismatch for FMassNetworkID::Value");

// /Script/MassCommon.MassSnorm8Vector
// Kind: ScriptStruct; super: none
struct FMassSnorm8Vector
{
public:
    std::int8_t X; // 0x0000 (Size: 0x1, Type: Int8Property)
    std::int8_t Y; // 0x0001 (Size: 0x1, Type: Int8Property)
    std::int8_t Z; // 0x0002 (Size: 0x1, Type: Int8Property)
};

static_assert(offsetof(FMassSnorm8Vector, X) == 0, "Offset mismatch for FMassSnorm8Vector::X");
static_assert(offsetof(FMassSnorm8Vector, Y) == 1, "Offset mismatch for FMassSnorm8Vector::Y");
static_assert(offsetof(FMassSnorm8Vector, Z) == 2, "Offset mismatch for FMassSnorm8Vector::Z");

// /Script/MassCommon.MassSnorm8Vector2D
// Kind: ScriptStruct; super: none
struct FMassSnorm8Vector2D
{
public:
    std::int8_t X; // 0x0000 (Size: 0x1, Type: Int8Property)
    std::int8_t Y; // 0x0001 (Size: 0x1, Type: Int8Property)
};

static_assert(offsetof(FMassSnorm8Vector2D, X) == 0, "Offset mismatch for FMassSnorm8Vector2D::X");
static_assert(offsetof(FMassSnorm8Vector2D, Y) == 1, "Offset mismatch for FMassSnorm8Vector2D::Y");

// /Script/MassCommon.MassUnorm8Real
// Kind: ScriptStruct; super: none
struct FMassUnorm8Real
{
public:
    std::uint8_t Value; // 0x0000 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FMassUnorm8Real, Value) == 0, "Offset mismatch for FMassUnorm8Real::Value");

// /Script/MassCommon.ObjectWrapperFragment
// Kind: ScriptStruct; super: MassFragment
struct FObjectWrapperFragment
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassCommon.MassGameplaySettings
// Kind: Class; super: MassModuleSettings
class UMassGameplaySettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bLogSpawnLocations; // 0x0028 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMassGameplaySettings, bLogSpawnLocations) == 40, "Offset mismatch for UMassGameplaySettings::bLogSpawnLocations");

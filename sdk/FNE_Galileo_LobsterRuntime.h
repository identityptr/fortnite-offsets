/**
 * decamp dumper generated SDK
 * Package: /Script/FNE_Galileo_LobsterRuntime
 */
#pragma once
#include "Basic.h"

// /Script/FNE_Galileo_LobsterRuntime.FortItemComponentData_Lightsaber
// Kind: ScriptStruct; super: FortItemComponentData
struct FFortItemComponentData_Lightsaber
{
public:
    std::uint8_t HiltMesh[0x20]; // 0x0000 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t BladeMesh[0x20]; // 0x0020 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t BladeMaterial[0x20]; // 0x0040 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t MaterialParams[0x28]; // 0x0060 (Size: 0x28, Type: StructProperty)
    std::uint8_t bHasCrossGuard; // 0x0088 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFortItemComponentData_Lightsaber, HiltMesh) == 0, "Offset mismatch for FFortItemComponentData_Lightsaber::HiltMesh");
static_assert(offsetof(FFortItemComponentData_Lightsaber, BladeMesh) == 32, "Offset mismatch for FFortItemComponentData_Lightsaber::BladeMesh");
static_assert(offsetof(FFortItemComponentData_Lightsaber, BladeMaterial) == 64, "Offset mismatch for FFortItemComponentData_Lightsaber::BladeMaterial");
static_assert(offsetof(FFortItemComponentData_Lightsaber, MaterialParams) == 96, "Offset mismatch for FFortItemComponentData_Lightsaber::MaterialParams");
static_assert(offsetof(FFortItemComponentData_Lightsaber, bHasCrossGuard) == 136, "Offset mismatch for FFortItemComponentData_Lightsaber::bHasCrossGuard");

// /Script/FNE_Galileo_LobsterRuntime.LightsaberMaterialParams
// Kind: ScriptStruct; super: none
struct FLightsaberMaterialParams
{
public:
    std::uint8_t BladeHueLinear[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    double EmissiveIntensity; // 0x0010 (Size: 0x8, Type: DoubleProperty)
    double ArcIntensity; // 0x0018 (Size: 0x8, Type: DoubleProperty)
    double Stability; // 0x0020 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FLightsaberMaterialParams, BladeHueLinear) == 0, "Offset mismatch for FLightsaberMaterialParams::BladeHueLinear");
static_assert(offsetof(FLightsaberMaterialParams, EmissiveIntensity) == 16, "Offset mismatch for FLightsaberMaterialParams::EmissiveIntensity");
static_assert(offsetof(FLightsaberMaterialParams, ArcIntensity) == 24, "Offset mismatch for FLightsaberMaterialParams::ArcIntensity");
static_assert(offsetof(FLightsaberMaterialParams, Stability) == 32, "Offset mismatch for FLightsaberMaterialParams::Stability");

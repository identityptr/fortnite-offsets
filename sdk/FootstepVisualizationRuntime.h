/**
 * decamp dumper generated SDK
 * Package: /Script/FootstepVisualizationRuntime
 */
#pragma once
#include "Basic.h"

// /Script/FootstepVisualizationRuntime.FootstepVisualizationExclusionRow
// Kind: ScriptStruct; super: TableRowBase
struct FFootstepVisualizationExclusionRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t ExclusionTestQuery[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFootstepVisualizationExclusionRow, ExclusionTestQuery) == 8, "Offset mismatch for FFootstepVisualizationExclusionRow::ExclusionTestQuery");

// /Script/FootstepVisualizationRuntime.FootstepVisualizationSurfaceInclusionRow
// Kind: ScriptStruct; super: TableRowBase
struct FFootstepVisualizationSurfaceInclusionRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t ObjectType; // 0x0008 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FFootstepVisualizationSurfaceInclusionRow, ObjectType) == 8, "Offset mismatch for FFootstepVisualizationSurfaceInclusionRow::ObjectType");

// /Script/FootstepVisualizationRuntime.VisualizedFootstepData
// Kind: ScriptStruct; super: none
struct FVisualizedFootstepData
{
public:
    std::uint8_t Location[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    float time; // 0x0018 (Size: 0x4, Type: FloatProperty)
    std::int32_t PawnID; // 0x001C (Size: 0x4, Type: IntProperty)
    std::uint8_t Team; // 0x0020 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FVisualizedFootstepData, Location) == 0, "Offset mismatch for FVisualizedFootstepData::Location");
static_assert(offsetof(FVisualizedFootstepData, time) == 24, "Offset mismatch for FVisualizedFootstepData::time");
static_assert(offsetof(FVisualizedFootstepData, PawnID) == 28, "Offset mismatch for FVisualizedFootstepData::PawnID");
static_assert(offsetof(FVisualizedFootstepData, Team) == 32, "Offset mismatch for FVisualizedFootstepData::Team");

// /Script/FootstepVisualizationRuntime.FortGameStateComponent_FootstepVisualization
// Kind: Class; super: FortGameStateComponent
class UFortGameStateComponent_FootstepVisualization
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    void* FootstepFxDataChannel; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t EnableFootstepGeneratorDeathEvent[0x28]; // 0x00C8 (Size: 0x28, Type: StructProperty)
    FMulticastInlineDelegate OnFootstepGeneratorDeath; // 0x00F0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0xB0]; // 0x0100
    TArray<void*> PawnComponents; // 0x01B0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t SimulatedFootstepMaxTicksPerFrame[0x30]; // 0x01C0 (Size: 0x30, Type: StructProperty)
    std::uint8_t RegisteredFootstepCapacity[0x28]; // 0x01F0 (Size: 0x28, Type: StructProperty)
    std::uint8_t RegisteredFootstepMaxAge[0x28]; // 0x0218 (Size: 0x28, Type: StructProperty)
    TArray<void*> FootstepRegistry; // 0x0240 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortGameStateComponent_FootstepVisualization, FootstepFxDataChannel) == 192, "Offset mismatch for UFortGameStateComponent_FootstepVisualization::FootstepFxDataChannel");
static_assert(offsetof(UFortGameStateComponent_FootstepVisualization, EnableFootstepGeneratorDeathEvent) == 200, "Offset mismatch for UFortGameStateComponent_FootstepVisualization::EnableFootstepGeneratorDeathEvent");
static_assert(offsetof(UFortGameStateComponent_FootstepVisualization, OnFootstepGeneratorDeath) == 240, "Offset mismatch for UFortGameStateComponent_FootstepVisualization::OnFootstepGeneratorDeath");
static_assert(offsetof(UFortGameStateComponent_FootstepVisualization, PawnComponents) == 432, "Offset mismatch for UFortGameStateComponent_FootstepVisualization::PawnComponents");
static_assert(offsetof(UFortGameStateComponent_FootstepVisualization, SimulatedFootstepMaxTicksPerFrame) == 448, "Offset mismatch for UFortGameStateComponent_FootstepVisualization::SimulatedFootstepMaxTicksPerFrame");
static_assert(offsetof(UFortGameStateComponent_FootstepVisualization, RegisteredFootstepCapacity) == 496, "Offset mismatch for UFortGameStateComponent_FootstepVisualization::RegisteredFootstepCapacity");
static_assert(offsetof(UFortGameStateComponent_FootstepVisualization, RegisteredFootstepMaxAge) == 536, "Offset mismatch for UFortGameStateComponent_FootstepVisualization::RegisteredFootstepMaxAge");
static_assert(offsetof(UFortGameStateComponent_FootstepVisualization, FootstepRegistry) == 576, "Offset mismatch for UFortGameStateComponent_FootstepVisualization::FootstepRegistry");

// /Script/FootstepVisualizationRuntime.FortPawnComponent_FootstepVisualization
// Kind: Class; super: FortPawnComponent
class UFortPawnComponent_FootstepVisualization
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    FName LeftFootSocket; // 0x00C8 (Size: 0x8, Type: NameProperty)
    std::uint8_t LeftFootSocketToFootprint[0x60]; // 0x00D0 (Size: 0x60, Type: StructProperty)
    FName RightFootSocket; // 0x0130 (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0138
    std::uint8_t RightFootSocketToFootprint[0x60]; // 0x0140 (Size: 0x60, Type: StructProperty)
    double FixupFootstepBelowCapsuleDistance; // 0x01A0 (Size: 0x8, Type: DoubleProperty)
    double FixupFootstepYawToleranceDegrees; // 0x01A8 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t FixupFootstepTraceProfile[0x4]; // 0x01B0 (Size: 0x4, Type: NameProperty)
    std::uint8_t FixupFootstepMeshForwardAxis; // 0x01B4 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0002[0x3]; // 0x01B5
    std::uint8_t DistanceBetweenStepsDefault[0x28]; // 0x01B8 (Size: 0x28, Type: StructProperty)
    std::uint8_t DistanceBetweenStepsCrouching[0x28]; // 0x01E0 (Size: 0x28, Type: StructProperty)
    std::uint8_t DistanceBetweenStepsSprinting[0x28]; // 0x0208 (Size: 0x28, Type: StructProperty)
    std::uint8_t NextFootstepDeadzoneDistance[0x28]; // 0x0230 (Size: 0x28, Type: StructProperty)
    void* VisualizationExclusionTable; // 0x0258 (Size: 0x8, Type: ObjectProperty)
    void* SurfaceInclusionTable; // 0x0260 (Size: 0x8, Type: ObjectProperty)
    void* GameStateComponent; // 0x0268 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortPawnComponent_FootstepVisualization, LeftFootSocket) == 200, "Offset mismatch for UFortPawnComponent_FootstepVisualization::LeftFootSocket");
static_assert(offsetof(UFortPawnComponent_FootstepVisualization, LeftFootSocketToFootprint) == 208, "Offset mismatch for UFortPawnComponent_FootstepVisualization::LeftFootSocketToFootprint");
static_assert(offsetof(UFortPawnComponent_FootstepVisualization, RightFootSocket) == 304, "Offset mismatch for UFortPawnComponent_FootstepVisualization::RightFootSocket");
static_assert(offsetof(UFortPawnComponent_FootstepVisualization, RightFootSocketToFootprint) == 320, "Offset mismatch for UFortPawnComponent_FootstepVisualization::RightFootSocketToFootprint");
static_assert(offsetof(UFortPawnComponent_FootstepVisualization, FixupFootstepBelowCapsuleDistance) == 416, "Offset mismatch for UFortPawnComponent_FootstepVisualization::FixupFootstepBelowCapsuleDistance");
static_assert(offsetof(UFortPawnComponent_FootstepVisualization, FixupFootstepYawToleranceDegrees) == 424, "Offset mismatch for UFortPawnComponent_FootstepVisualization::FixupFootstepYawToleranceDegrees");
static_assert(offsetof(UFortPawnComponent_FootstepVisualization, FixupFootstepTraceProfile) == 432, "Offset mismatch for UFortPawnComponent_FootstepVisualization::FixupFootstepTraceProfile");
static_assert(offsetof(UFortPawnComponent_FootstepVisualization, FixupFootstepMeshForwardAxis) == 436, "Offset mismatch for UFortPawnComponent_FootstepVisualization::FixupFootstepMeshForwardAxis");
static_assert(offsetof(UFortPawnComponent_FootstepVisualization, DistanceBetweenStepsDefault) == 440, "Offset mismatch for UFortPawnComponent_FootstepVisualization::DistanceBetweenStepsDefault");
static_assert(offsetof(UFortPawnComponent_FootstepVisualization, DistanceBetweenStepsCrouching) == 480, "Offset mismatch for UFortPawnComponent_FootstepVisualization::DistanceBetweenStepsCrouching");
static_assert(offsetof(UFortPawnComponent_FootstepVisualization, DistanceBetweenStepsSprinting) == 520, "Offset mismatch for UFortPawnComponent_FootstepVisualization::DistanceBetweenStepsSprinting");
static_assert(offsetof(UFortPawnComponent_FootstepVisualization, NextFootstepDeadzoneDistance) == 560, "Offset mismatch for UFortPawnComponent_FootstepVisualization::NextFootstepDeadzoneDistance");
static_assert(offsetof(UFortPawnComponent_FootstepVisualization, VisualizationExclusionTable) == 600, "Offset mismatch for UFortPawnComponent_FootstepVisualization::VisualizationExclusionTable");
static_assert(offsetof(UFortPawnComponent_FootstepVisualization, SurfaceInclusionTable) == 608, "Offset mismatch for UFortPawnComponent_FootstepVisualization::SurfaceInclusionTable");
static_assert(offsetof(UFortPawnComponent_FootstepVisualization, GameStateComponent) == 616, "Offset mismatch for UFortPawnComponent_FootstepVisualization::GameStateComponent");

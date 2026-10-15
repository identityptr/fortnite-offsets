/**
 * decamp dumper generated SDK
 * Package: /Script/JunoProceduralWorld
 */
#pragma once
#include "Basic.h"

// /Script/JunoProceduralWorld.AdditionalPOIAssignment
// Kind: ScriptStruct; super: none
struct FAdditionalPOIAssignment
{
public:
    std::uint8_t POI[0x2D8]; // 0x0000 (Size: 0x2D8, Type: StructProperty)
    std::uint8_t SlotGuid[0x1]; // 0x02D8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FAdditionalPOIAssignment, POI) == 0, "Offset mismatch for FAdditionalPOIAssignment::POI");
static_assert(offsetof(FAdditionalPOIAssignment, SlotGuid) == 728, "Offset mismatch for FAdditionalPOIAssignment::SlotGuid");

// /Script/JunoProceduralWorld.BridgeSpawnInfo
// Kind: ScriptStruct; super: none
struct FBridgeSpawnInfo
{
public:
    std::uint8_t Start[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t End[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FBridgeSpawnInfo, Start) == 0, "Offset mismatch for FBridgeSpawnInfo::Start");
static_assert(offsetof(FBridgeSpawnInfo, End) == 24, "Offset mismatch for FBridgeSpawnInfo::End");

// /Script/JunoProceduralWorld.CaveShellID
// Kind: ScriptStruct; super: none
struct FCaveShellID
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoProceduralWorld.CaveShellSpawnLimitData
// Kind: ScriptStruct; super: none
struct FCaveShellSpawnLimitData
{
public:
    std::uint8_t MaxNumberOfSpawn[0x28]; // 0x0000 (Size: 0x28, Type: StructProperty)
    std::uint8_t EventMemoryResetDurationsHours[0x28]; // 0x0028 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinDistanceToTeleporter[0x1]; // 0x0050 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCaveShellSpawnLimitData, MaxNumberOfSpawn) == 0, "Offset mismatch for FCaveShellSpawnLimitData::MaxNumberOfSpawn");
static_assert(offsetof(FCaveShellSpawnLimitData, EventMemoryResetDurationsHours) == 40, "Offset mismatch for FCaveShellSpawnLimitData::EventMemoryResetDurationsHours");
static_assert(offsetof(FCaveShellSpawnLimitData, MinDistanceToTeleporter) == 80, "Offset mismatch for FCaveShellSpawnLimitData::MinDistanceToTeleporter");

// /Script/JunoProceduralWorld.CaveSpawnEvent
// Kind: ScriptStruct; super: none
struct FCaveSpawnEvent
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoProceduralWorld.CaveSpawnPointProviderMemory
// Kind: ScriptStruct; super: none
struct FCaveSpawnPointProviderMemory
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoProceduralWorld.ControlPointParameters
// Kind: ScriptStruct; super: none
struct FControlPointParameters
{
public:
    float Width; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float LayerWidthRatio; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float SideFalloff; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float LeftSideFalloffFactor; // 0x000C (Size: 0x4, Type: FloatProperty)
    float RightSideFalloffFactor; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float LeftSideLayerFalloffFactor; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float RightSideLayerFalloffFactor; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float EndFalloff; // 0x001C (Size: 0x4, Type: FloatProperty)
    float SegmentMeshOffset; // 0x0020 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0024
    void* Mesh; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> MaterialOverrides; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t MeshScale[0x18]; // 0x0040 (Size: 0x18, Type: StructProperty)
    std::uint8_t bCastShadow; // 0x0058 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FControlPointParameters, Width) == 0, "Offset mismatch for FControlPointParameters::Width");
static_assert(offsetof(FControlPointParameters, LayerWidthRatio) == 4, "Offset mismatch for FControlPointParameters::LayerWidthRatio");
static_assert(offsetof(FControlPointParameters, SideFalloff) == 8, "Offset mismatch for FControlPointParameters::SideFalloff");
static_assert(offsetof(FControlPointParameters, LeftSideFalloffFactor) == 12, "Offset mismatch for FControlPointParameters::LeftSideFalloffFactor");
static_assert(offsetof(FControlPointParameters, RightSideFalloffFactor) == 16, "Offset mismatch for FControlPointParameters::RightSideFalloffFactor");
static_assert(offsetof(FControlPointParameters, LeftSideLayerFalloffFactor) == 20, "Offset mismatch for FControlPointParameters::LeftSideLayerFalloffFactor");
static_assert(offsetof(FControlPointParameters, RightSideLayerFalloffFactor) == 24, "Offset mismatch for FControlPointParameters::RightSideLayerFalloffFactor");
static_assert(offsetof(FControlPointParameters, EndFalloff) == 28, "Offset mismatch for FControlPointParameters::EndFalloff");
static_assert(offsetof(FControlPointParameters, SegmentMeshOffset) == 32, "Offset mismatch for FControlPointParameters::SegmentMeshOffset");
static_assert(offsetof(FControlPointParameters, Mesh) == 40, "Offset mismatch for FControlPointParameters::Mesh");
static_assert(offsetof(FControlPointParameters, MaterialOverrides) == 48, "Offset mismatch for FControlPointParameters::MaterialOverrides");
static_assert(offsetof(FControlPointParameters, MeshScale) == 64, "Offset mismatch for FControlPointParameters::MeshScale");
static_assert(offsetof(FControlPointParameters, bCastShadow) == 88, "Offset mismatch for FControlPointParameters::bCastShadow");

// /Script/JunoProceduralWorld.DendrogramClusterOutput
// Kind: ScriptStruct; super: none
struct FDendrogramClusterOutput
{
public:
    std::int32_t NodeLevel; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsLeaf; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    TArray<void*> Actors; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    void* ConnectedActorA; // 0x0018 (Size: 0x8, Type: ObjectProperty)
    void* ConnectedActorB; // 0x0020 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t LeafAAttributes[0x20]; // 0x0028 (Size: 0x20, Type: StructProperty)
    std::uint8_t LeafBAttributes[0x1]; // 0x0048 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDendrogramClusterOutput, NodeLevel) == 0, "Offset mismatch for FDendrogramClusterOutput::NodeLevel");
static_assert(offsetof(FDendrogramClusterOutput, bIsLeaf) == 4, "Offset mismatch for FDendrogramClusterOutput::bIsLeaf");
static_assert(offsetof(FDendrogramClusterOutput, Actors) == 8, "Offset mismatch for FDendrogramClusterOutput::Actors");
static_assert(offsetof(FDendrogramClusterOutput, ConnectedActorA) == 24, "Offset mismatch for FDendrogramClusterOutput::ConnectedActorA");
static_assert(offsetof(FDendrogramClusterOutput, ConnectedActorB) == 32, "Offset mismatch for FDendrogramClusterOutput::ConnectedActorB");
static_assert(offsetof(FDendrogramClusterOutput, LeafAAttributes) == 40, "Offset mismatch for FDendrogramClusterOutput::LeafAAttributes");
static_assert(offsetof(FDendrogramClusterOutput, LeafBAttributes) == 72, "Offset mismatch for FDendrogramClusterOutput::LeafBAttributes");

// /Script/JunoProceduralWorld.DendrogramLeafAttributes
// Kind: ScriptStruct; super: none
struct FDendrogramLeafAttributes
{
public:
    std::uint8_t Location[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    float DistanceScale; // 0x0018 (Size: 0x4, Type: FloatProperty)
    FName LeafTypeName; // 0x001C (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FDendrogramLeafAttributes, Location) == 0, "Offset mismatch for FDendrogramLeafAttributes::Location");
static_assert(offsetof(FDendrogramLeafAttributes, DistanceScale) == 24, "Offset mismatch for FDendrogramLeafAttributes::DistanceScale");
static_assert(offsetof(FDendrogramLeafAttributes, LeafTypeName) == 28, "Offset mismatch for FDendrogramLeafAttributes::LeafTypeName");

// /Script/JunoProceduralWorld.EventTilesArray
// Kind: ScriptStruct; super: none
struct FEventTilesArray
{
public:
    TArray<void*> Tiles; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FEventTilesArray, Tiles) == 0, "Offset mismatch for FEventTilesArray::Tiles");

// /Script/JunoProceduralWorld.InterpSegment
// Kind: ScriptStruct; super: none
struct FInterpSegment
{
public:
    std::uint8_t SplineInfo[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    float SplineLength; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float SplineLengthBeforeThis; // 0x001C (Size: 0x4, Type: FloatProperty)
    float StartFalloffFraction; // 0x0020 (Size: 0x4, Type: FloatProperty)
    float EndFalloffFraction; // 0x0024 (Size: 0x4, Type: FloatProperty)
    float StartWidth; // 0x0028 (Size: 0x4, Type: FloatProperty)
    float EndWidth; // 0x002C (Size: 0x4, Type: FloatProperty)
    float StartLayerWidth; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float EndLayerWidth; // 0x0034 (Size: 0x4, Type: FloatProperty)
    float FalloffStartLeftSide; // 0x0038 (Size: 0x4, Type: FloatProperty)
    float FalloffEndLeftSide; // 0x003C (Size: 0x4, Type: FloatProperty)
    float FalloffStartRightSide; // 0x0040 (Size: 0x4, Type: FloatProperty)
    float FalloffEndRightSide; // 0x0044 (Size: 0x4, Type: FloatProperty)
    float FalloffStartLeftSideLayer; // 0x0048 (Size: 0x4, Type: FloatProperty)
    float FalloffEndLeftSideLayer; // 0x004C (Size: 0x4, Type: FloatProperty)
    float FalloffStartRightSideLayer; // 0x0050 (Size: 0x4, Type: FloatProperty)
    float FalloffEndRightSideLayer; // 0x0054 (Size: 0x4, Type: FloatProperty)
    float StartRollDegrees; // 0x0058 (Size: 0x4, Type: FloatProperty)
    float EndRollDegrees; // 0x005C (Size: 0x4, Type: FloatProperty)
    float StartRoll; // 0x0060 (Size: 0x4, Type: FloatProperty)
    float EndRoll; // 0x0064 (Size: 0x4, Type: FloatProperty)
    float StartMeshOffset; // 0x0068 (Size: 0x4, Type: FloatProperty)
    float EndMeshOffset; // 0x006C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FInterpSegment, SplineInfo) == 0, "Offset mismatch for FInterpSegment::SplineInfo");
static_assert(offsetof(FInterpSegment, SplineLength) == 24, "Offset mismatch for FInterpSegment::SplineLength");
static_assert(offsetof(FInterpSegment, SplineLengthBeforeThis) == 28, "Offset mismatch for FInterpSegment::SplineLengthBeforeThis");
static_assert(offsetof(FInterpSegment, StartFalloffFraction) == 32, "Offset mismatch for FInterpSegment::StartFalloffFraction");
static_assert(offsetof(FInterpSegment, EndFalloffFraction) == 36, "Offset mismatch for FInterpSegment::EndFalloffFraction");
static_assert(offsetof(FInterpSegment, StartWidth) == 40, "Offset mismatch for FInterpSegment::StartWidth");
static_assert(offsetof(FInterpSegment, EndWidth) == 44, "Offset mismatch for FInterpSegment::EndWidth");
static_assert(offsetof(FInterpSegment, StartLayerWidth) == 48, "Offset mismatch for FInterpSegment::StartLayerWidth");
static_assert(offsetof(FInterpSegment, EndLayerWidth) == 52, "Offset mismatch for FInterpSegment::EndLayerWidth");
static_assert(offsetof(FInterpSegment, FalloffStartLeftSide) == 56, "Offset mismatch for FInterpSegment::FalloffStartLeftSide");
static_assert(offsetof(FInterpSegment, FalloffEndLeftSide) == 60, "Offset mismatch for FInterpSegment::FalloffEndLeftSide");
static_assert(offsetof(FInterpSegment, FalloffStartRightSide) == 64, "Offset mismatch for FInterpSegment::FalloffStartRightSide");
static_assert(offsetof(FInterpSegment, FalloffEndRightSide) == 68, "Offset mismatch for FInterpSegment::FalloffEndRightSide");
static_assert(offsetof(FInterpSegment, FalloffStartLeftSideLayer) == 72, "Offset mismatch for FInterpSegment::FalloffStartLeftSideLayer");
static_assert(offsetof(FInterpSegment, FalloffEndLeftSideLayer) == 76, "Offset mismatch for FInterpSegment::FalloffEndLeftSideLayer");
static_assert(offsetof(FInterpSegment, FalloffStartRightSideLayer) == 80, "Offset mismatch for FInterpSegment::FalloffStartRightSideLayer");
static_assert(offsetof(FInterpSegment, FalloffEndRightSideLayer) == 84, "Offset mismatch for FInterpSegment::FalloffEndRightSideLayer");
static_assert(offsetof(FInterpSegment, StartRollDegrees) == 88, "Offset mismatch for FInterpSegment::StartRollDegrees");
static_assert(offsetof(FInterpSegment, EndRollDegrees) == 92, "Offset mismatch for FInterpSegment::EndRollDegrees");
static_assert(offsetof(FInterpSegment, StartRoll) == 96, "Offset mismatch for FInterpSegment::StartRoll");
static_assert(offsetof(FInterpSegment, EndRoll) == 100, "Offset mismatch for FInterpSegment::EndRoll");
static_assert(offsetof(FInterpSegment, StartMeshOffset) == 104, "Offset mismatch for FInterpSegment::StartMeshOffset");
static_assert(offsetof(FInterpSegment, EndMeshOffset) == 108, "Offset mismatch for FInterpSegment::EndMeshOffset");

// /Script/JunoProceduralWorld.JunoAdditionalPOIAssignmentData
// Kind: ScriptStruct; super: none
struct FJunoAdditionalPOIAssignmentData
{
public:
    TArray<void*> AdditionalPOIs; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> FailedAdditionalPOIs; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Blockers; // 0x0020 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJunoAdditionalPOIAssignmentData, AdditionalPOIs) == 0, "Offset mismatch for FJunoAdditionalPOIAssignmentData::AdditionalPOIs");
static_assert(offsetof(FJunoAdditionalPOIAssignmentData, FailedAdditionalPOIs) == 16, "Offset mismatch for FJunoAdditionalPOIAssignmentData::FailedAdditionalPOIs");
static_assert(offsetof(FJunoAdditionalPOIAssignmentData, Blockers) == 32, "Offset mismatch for FJunoAdditionalPOIAssignmentData::Blockers");

// /Script/JunoProceduralWorld.JunoAdditionalPOIAssignmentData_v0
// Kind: ScriptStruct; super: none
struct FJunoAdditionalPOIAssignmentData_v0
{
public:
    TArray<void*> AdditionalPOIs; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> FailedAdditionalPOIs; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Blockers; // 0x0020 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJunoAdditionalPOIAssignmentData_v0, AdditionalPOIs) == 0, "Offset mismatch for FJunoAdditionalPOIAssignmentData_v0::AdditionalPOIs");
static_assert(offsetof(FJunoAdditionalPOIAssignmentData_v0, FailedAdditionalPOIs) == 16, "Offset mismatch for FJunoAdditionalPOIAssignmentData_v0::FailedAdditionalPOIs");
static_assert(offsetof(FJunoAdditionalPOIAssignmentData_v0, Blockers) == 32, "Offset mismatch for FJunoAdditionalPOIAssignmentData_v0::Blockers");

// /Script/JunoProceduralWorld.JunoAdditionalPOIAssignmentInfo
// Kind: ScriptStruct; super: none
struct FJunoAdditionalPOIAssignmentInfo
{
public:
    std::uint8_t Name[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t bReportAddToWorldToTelemetry; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    std::uint8_t Location[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t SlotGuid[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoAdditionalPOIAssignmentInfo, Name) == 0, "Offset mismatch for FJunoAdditionalPOIAssignmentInfo::Name");
static_assert(offsetof(FJunoAdditionalPOIAssignmentInfo, bReportAddToWorldToTelemetry) == 4, "Offset mismatch for FJunoAdditionalPOIAssignmentInfo::bReportAddToWorldToTelemetry");
static_assert(offsetof(FJunoAdditionalPOIAssignmentInfo, Location) == 8, "Offset mismatch for FJunoAdditionalPOIAssignmentInfo::Location");
static_assert(offsetof(FJunoAdditionalPOIAssignmentInfo, SlotGuid) == 32, "Offset mismatch for FJunoAdditionalPOIAssignmentInfo::SlotGuid");

// /Script/JunoProceduralWorld.JunoAdditionalPOIAssignmentResults
// Kind: ScriptStruct; super: none
struct FJunoAdditionalPOIAssignmentResults
{
public:
    TMap<void*, void*> CellAssignment; // 0x0000 (Size: 0x10, Type: MapProperty)
    TArray<void*> SkippedAdditionalPOIs; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> ActorLocationInfos; // 0x0020 (Size: 0x10, Type: MapProperty)
    double Error; // 0x0030 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FJunoAdditionalPOIAssignmentResults, CellAssignment) == 0, "Offset mismatch for FJunoAdditionalPOIAssignmentResults::CellAssignment");
static_assert(offsetof(FJunoAdditionalPOIAssignmentResults, SkippedAdditionalPOIs) == 16, "Offset mismatch for FJunoAdditionalPOIAssignmentResults::SkippedAdditionalPOIs");
static_assert(offsetof(FJunoAdditionalPOIAssignmentResults, ActorLocationInfos) == 32, "Offset mismatch for FJunoAdditionalPOIAssignmentResults::ActorLocationInfos");
static_assert(offsetof(FJunoAdditionalPOIAssignmentResults, Error) == 48, "Offset mismatch for FJunoAdditionalPOIAssignmentResults::Error");

// /Script/JunoProceduralWorld.JunoAdditionalPOIBlocker
// Kind: ScriptStruct; super: none
struct FJunoAdditionalPOIBlocker
{
public:
    TArray<void*> AllowedLayerNames; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Location[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    float Radius; // 0x0020 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FJunoAdditionalPOIBlocker, AllowedLayerNames) == 0, "Offset mismatch for FJunoAdditionalPOIBlocker::AllowedLayerNames");
static_assert(offsetof(FJunoAdditionalPOIBlocker, Location) == 16, "Offset mismatch for FJunoAdditionalPOIBlocker::Location");
static_assert(offsetof(FJunoAdditionalPOIBlocker, Radius) == 32, "Offset mismatch for FJunoAdditionalPOIBlocker::Radius");

// /Script/JunoProceduralWorld.JunoAdditionalPOICellAssignement
// Kind: ScriptStruct; super: none
struct FJunoAdditionalPOICellAssignement
{
public:
    TArray<void*> AssignedPOIs; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PreloadActors; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Blockers; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AdditionalLevelsToLoad; // 0x0030 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJunoAdditionalPOICellAssignement, AssignedPOIs) == 0, "Offset mismatch for FJunoAdditionalPOICellAssignement::AssignedPOIs");
static_assert(offsetof(FJunoAdditionalPOICellAssignement, PreloadActors) == 16, "Offset mismatch for FJunoAdditionalPOICellAssignement::PreloadActors");
static_assert(offsetof(FJunoAdditionalPOICellAssignement, Blockers) == 32, "Offset mismatch for FJunoAdditionalPOICellAssignement::Blockers");
static_assert(offsetof(FJunoAdditionalPOICellAssignement, AdditionalLevelsToLoad) == 48, "Offset mismatch for FJunoAdditionalPOICellAssignement::AdditionalLevelsToLoad");

// /Script/JunoProceduralWorld.JunoAdditionalPOIPersistentData
// Kind: ScriptStruct; super: none
struct FJunoAdditionalPOIPersistentData
{
public:
    std::uint8_t RegistryID[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t SlotGuid[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoAdditionalPOIPersistentData, RegistryID) == 0, "Offset mismatch for FJunoAdditionalPOIPersistentData::RegistryID");
static_assert(offsetof(FJunoAdditionalPOIPersistentData, SlotGuid) == 8, "Offset mismatch for FJunoAdditionalPOIPersistentData::SlotGuid");

// /Script/JunoProceduralWorld.JunoAdditionalPOIWorldTileInfo
// Kind: ScriptStruct; super: none
struct FJunoAdditionalPOIWorldTileInfo
{
public:
    FName CellName; // 0x0000 (Size: 0x8, Type: NameProperty)
    std::uint8_t TileInformation[0x1C8]; // 0x0008 (Size: 0x1C8, Type: StructProperty)
    std::int32_t CoordX; // 0x01D0 (Size: 0x4, Type: IntProperty)
    std::int32_t CoordY; // 0x01D4 (Size: 0x4, Type: IntProperty)
    std::uint8_t SavedActorGuid[0x10]; // 0x01D8 (Size: 0x10, Type: StructProperty)
    std::uint8_t TileGuid[0x18]; // 0x01E8 (Size: 0x18, Type: StructProperty)
    std::uint8_t Transform[0x60]; // 0x0200 (Size: 0x60, Type: StructProperty)
    std::uint8_t SavedBounds[0x38]; // 0x0260 (Size: 0x38, Type: StructProperty)
    TArray<void*> Blockers; // 0x0298 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> FailedAdditionalPOIs; // 0x02A8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJunoAdditionalPOIWorldTileInfo, CellName) == 0, "Offset mismatch for FJunoAdditionalPOIWorldTileInfo::CellName");
static_assert(offsetof(FJunoAdditionalPOIWorldTileInfo, TileInformation) == 8, "Offset mismatch for FJunoAdditionalPOIWorldTileInfo::TileInformation");
static_assert(offsetof(FJunoAdditionalPOIWorldTileInfo, CoordX) == 464, "Offset mismatch for FJunoAdditionalPOIWorldTileInfo::CoordX");
static_assert(offsetof(FJunoAdditionalPOIWorldTileInfo, CoordY) == 468, "Offset mismatch for FJunoAdditionalPOIWorldTileInfo::CoordY");
static_assert(offsetof(FJunoAdditionalPOIWorldTileInfo, SavedActorGuid) == 472, "Offset mismatch for FJunoAdditionalPOIWorldTileInfo::SavedActorGuid");
static_assert(offsetof(FJunoAdditionalPOIWorldTileInfo, TileGuid) == 488, "Offset mismatch for FJunoAdditionalPOIWorldTileInfo::TileGuid");
static_assert(offsetof(FJunoAdditionalPOIWorldTileInfo, Transform) == 512, "Offset mismatch for FJunoAdditionalPOIWorldTileInfo::Transform");
static_assert(offsetof(FJunoAdditionalPOIWorldTileInfo, SavedBounds) == 608, "Offset mismatch for FJunoAdditionalPOIWorldTileInfo::SavedBounds");
static_assert(offsetof(FJunoAdditionalPOIWorldTileInfo, Blockers) == 664, "Offset mismatch for FJunoAdditionalPOIWorldTileInfo::Blockers");
static_assert(offsetof(FJunoAdditionalPOIWorldTileInfo, FailedAdditionalPOIs) == 680, "Offset mismatch for FJunoAdditionalPOIWorldTileInfo::FailedAdditionalPOIs");

// /Script/JunoProceduralWorld.JunoBehavior_FillPOISlots
// Kind: ScriptStruct; super: JunoTileMutationBehavior
struct FJunoBehavior_FillPOISlots
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> ReplacementPOIs; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    std::int32_t MaxPlacements; // 0x0018 (Size: 0x4, Type: IntProperty)
    std::uint8_t bRemoveSystemPlacedObjects; // 0x001C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRemovePlayerBuiltObjects; // 0x001D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIgnoreBiomeRestrictions; // 0x001E (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FJunoBehavior_FillPOISlots, ReplacementPOIs) == 8, "Offset mismatch for FJunoBehavior_FillPOISlots::ReplacementPOIs");
static_assert(offsetof(FJunoBehavior_FillPOISlots, MaxPlacements) == 24, "Offset mismatch for FJunoBehavior_FillPOISlots::MaxPlacements");
static_assert(offsetof(FJunoBehavior_FillPOISlots, bRemoveSystemPlacedObjects) == 28, "Offset mismatch for FJunoBehavior_FillPOISlots::bRemoveSystemPlacedObjects");
static_assert(offsetof(FJunoBehavior_FillPOISlots, bRemovePlayerBuiltObjects) == 29, "Offset mismatch for FJunoBehavior_FillPOISlots::bRemovePlayerBuiltObjects");
static_assert(offsetof(FJunoBehavior_FillPOISlots, bIgnoreBiomeRestrictions) == 30, "Offset mismatch for FJunoBehavior_FillPOISlots::bIgnoreBiomeRestrictions");

// /Script/JunoProceduralWorld.JunoBehavior_FindSlots
// Kind: ScriptStruct; super: JunoTileMutationBehavior
struct FJunoBehavior_FindSlots
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoProceduralWorld.JunoBehavior_FixupPOITags
// Kind: ScriptStruct; super: JunoTileMutationBehavior
struct FJunoBehavior_FixupPOITags
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> TargetPOIRegistryNames; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> RequiredTags; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJunoBehavior_FixupPOITags, TargetPOIRegistryNames) == 8, "Offset mismatch for FJunoBehavior_FixupPOITags::TargetPOIRegistryNames");
static_assert(offsetof(FJunoBehavior_FixupPOITags, RequiredTags) == 24, "Offset mismatch for FJunoBehavior_FixupPOITags::RequiredTags");

// /Script/JunoProceduralWorld.JunoBehavior_RemovePOIs
// Kind: ScriptStruct; super: JunoTileMutationBehavior
struct FJunoBehavior_RemovePOIs
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> POIsToRemove; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bRemovePlayerBuiltObjects; // 0x0018 (Size: 0x1, Type: BoolProperty)
    std::uint8_t RemovedSlotState; // 0x0019 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FJunoBehavior_RemovePOIs, POIsToRemove) == 8, "Offset mismatch for FJunoBehavior_RemovePOIs::POIsToRemove");
static_assert(offsetof(FJunoBehavior_RemovePOIs, bRemovePlayerBuiltObjects) == 24, "Offset mismatch for FJunoBehavior_RemovePOIs::bRemovePlayerBuiltObjects");
static_assert(offsetof(FJunoBehavior_RemovePOIs, RemovedSlotState) == 25, "Offset mismatch for FJunoBehavior_RemovePOIs::RemovedSlotState");

// /Script/JunoProceduralWorld.JunoBridgePOISelectorParams
// Kind: ScriptStruct; super: none
struct FJunoBridgePOISelectorParams
{
public:
    std::uint8_t Guid[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    double RiverWidth; // 0x0010 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t RequiredPOITags[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoBridgePOISelectorParams, Guid) == 0, "Offset mismatch for FJunoBridgePOISelectorParams::Guid");
static_assert(offsetof(FJunoBridgePOISelectorParams, RiverWidth) == 16, "Offset mismatch for FJunoBridgePOISelectorParams::RiverWidth");
static_assert(offsetof(FJunoBridgePOISelectorParams, RequiredPOITags) == 24, "Offset mismatch for FJunoBridgePOISelectorParams::RequiredPOITags");

// /Script/JunoProceduralWorld.JunoCave
// Kind: ScriptStruct; super: none
struct FJunoCave
{
public:
    TArray<void*> Shells; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Bounds[0x38]; // 0x0010 (Size: 0x38, Type: StructProperty)
    std::int32_t Variation; // 0x0048 (Size: 0x4, Type: IntProperty)
    std::uint8_t bNeedsFixupReset; // 0x004C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FJunoCave, Shells) == 0, "Offset mismatch for FJunoCave::Shells");
static_assert(offsetof(FJunoCave, Bounds) == 16, "Offset mismatch for FJunoCave::Bounds");
static_assert(offsetof(FJunoCave, Variation) == 72, "Offset mismatch for FJunoCave::Variation");
static_assert(offsetof(FJunoCave, bNeedsFixupReset) == 76, "Offset mismatch for FJunoCave::bNeedsFixupReset");

// /Script/JunoProceduralWorld.JunoCaveConditionalTags
// Kind: ScriptStruct; super: none
struct FJunoCaveConditionalTags
{
public:
    std::uint8_t Type; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Biome; // 0x0001 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x6]; // 0x0002
    std::uint8_t TagsToApply[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoCaveConditionalTags, Type) == 0, "Offset mismatch for FJunoCaveConditionalTags::Type");
static_assert(offsetof(FJunoCaveConditionalTags, Biome) == 1, "Offset mismatch for FJunoCaveConditionalTags::Biome");
static_assert(offsetof(FJunoCaveConditionalTags, TagsToApply) == 8, "Offset mismatch for FJunoCaveConditionalTags::TagsToApply");

// /Script/JunoProceduralWorld.JunoCaveFloor
// Kind: ScriptStruct; super: none
struct FJunoCaveFloor
{
public:
    std::uint8_t BiomeOverride; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    std::uint8_t Tags[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoCaveFloor, BiomeOverride) == 0, "Offset mismatch for FJunoCaveFloor::BiomeOverride");
static_assert(offsetof(FJunoCaveFloor, Tags) == 8, "Offset mismatch for FJunoCaveFloor::Tags");

// /Script/JunoProceduralWorld.JunoCaveFloorChain
// Kind: ScriptStruct; super: none
struct FJunoCaveFloorChain
{
public:
    std::int32_t SelectionWeight; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    TArray<void*> Floors; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJunoCaveFloorChain, SelectionWeight) == 0, "Offset mismatch for FJunoCaveFloorChain::SelectionWeight");
static_assert(offsetof(FJunoCaveFloorChain, Floors) == 8, "Offset mismatch for FJunoCaveFloorChain::Floors");

// /Script/JunoProceduralWorld.JunoCaveFloorChainStage
// Kind: ScriptStruct; super: none
struct FJunoCaveFloorChainStage
{
public:
    TArray<void*> FloorChains; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJunoCaveFloorChainStage, FloorChains) == 0, "Offset mismatch for FJunoCaveFloorChainStage::FloorChains");

// /Script/JunoProceduralWorld.JunoCaveGeneratorData
// Kind: ScriptStruct; super: TableRowBase
struct FJunoCaveGeneratorData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> Shells; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Themes; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Sequences; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Types; // 0x0038 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJunoCaveGeneratorData, Shells) == 8, "Offset mismatch for FJunoCaveGeneratorData::Shells");
static_assert(offsetof(FJunoCaveGeneratorData, Themes) == 24, "Offset mismatch for FJunoCaveGeneratorData::Themes");
static_assert(offsetof(FJunoCaveGeneratorData, Sequences) == 40, "Offset mismatch for FJunoCaveGeneratorData::Sequences");
static_assert(offsetof(FJunoCaveGeneratorData, Types) == 56, "Offset mismatch for FJunoCaveGeneratorData::Types");

// /Script/JunoProceduralWorld.JunoCaveGeneratorPCGResourceMap
// Kind: ScriptStruct; super: none
struct FJunoCaveGeneratorPCGResourceMap
{
public:
    TMap<void*, void*> ResourceWeight; // 0x0000 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FJunoCaveGeneratorPCGResourceMap, ResourceWeight) == 0, "Offset mismatch for FJunoCaveGeneratorPCGResourceMap::ResourceWeight");

// /Script/JunoProceduralWorld.JunoCaveGeneratorPOIMarker
// Kind: ScriptStruct; super: none
struct FJunoCaveGeneratorPOIMarker
{
public:
    std::uint8_t ValidSizes[0x10]; // 0x0000 (Size: 0x10, Type: SetProperty)
    std::uint8_t POIQuery[0x48]; // 0x0010 (Size: 0x48, Type: StructProperty)
    float SpawnChance; // 0x0058 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x005C
    std::uint8_t Transform[0x60]; // 0x0060 (Size: 0x60, Type: StructProperty)
    std::uint8_t bRandomizeRotation; // 0x00C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCenterBounds; // 0x00C1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStayLoadedOnOccupiedFloor; // 0x00C2 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FJunoCaveGeneratorPOIMarker, ValidSizes) == 0, "Offset mismatch for FJunoCaveGeneratorPOIMarker::ValidSizes");
static_assert(offsetof(FJunoCaveGeneratorPOIMarker, POIQuery) == 16, "Offset mismatch for FJunoCaveGeneratorPOIMarker::POIQuery");
static_assert(offsetof(FJunoCaveGeneratorPOIMarker, SpawnChance) == 88, "Offset mismatch for FJunoCaveGeneratorPOIMarker::SpawnChance");
static_assert(offsetof(FJunoCaveGeneratorPOIMarker, Transform) == 96, "Offset mismatch for FJunoCaveGeneratorPOIMarker::Transform");
static_assert(offsetof(FJunoCaveGeneratorPOIMarker, bRandomizeRotation) == 192, "Offset mismatch for FJunoCaveGeneratorPOIMarker::bRandomizeRotation");
static_assert(offsetof(FJunoCaveGeneratorPOIMarker, bCenterBounds) == 193, "Offset mismatch for FJunoCaveGeneratorPOIMarker::bCenterBounds");
static_assert(offsetof(FJunoCaveGeneratorPOIMarker, bStayLoadedOnOccupiedFloor) == 194, "Offset mismatch for FJunoCaveGeneratorPOIMarker::bStayLoadedOnOccupiedFloor");

// /Script/JunoProceduralWorld.JunoCaveGeneratorResourceWorlds
// Kind: ScriptStruct; super: none
struct FJunoCaveGeneratorResourceWorlds
{
public:
    std::uint8_t ValidBiomes[0x10]; // 0x0000 (Size: 0x10, Type: SetProperty)
    std::uint8_t SlotTagQuery[0x48]; // 0x0010 (Size: 0x48, Type: StructProperty)
    TArray<void*> Worlds; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bAlwaysValid; // 0x0068 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FJunoCaveGeneratorResourceWorlds, ValidBiomes) == 0, "Offset mismatch for FJunoCaveGeneratorResourceWorlds::ValidBiomes");
static_assert(offsetof(FJunoCaveGeneratorResourceWorlds, SlotTagQuery) == 16, "Offset mismatch for FJunoCaveGeneratorResourceWorlds::SlotTagQuery");
static_assert(offsetof(FJunoCaveGeneratorResourceWorlds, Worlds) == 88, "Offset mismatch for FJunoCaveGeneratorResourceWorlds::Worlds");
static_assert(offsetof(FJunoCaveGeneratorResourceWorlds, bAlwaysValid) == 104, "Offset mismatch for FJunoCaveGeneratorResourceWorlds::bAlwaysValid");

// /Script/JunoProceduralWorld.JunoCaveGeneratorResult
// Kind: ScriptStruct; super: none
struct FJunoCaveGeneratorResult
{
public:
    TArray<void*> Shells; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0000[0x20]; // 0x0010
    TArray<void*> POIs; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t RuleName[0x4]; // 0x0040 (Size: 0x4, Type: NameProperty)
    std::uint8_t ThemeName[0x4]; // 0x0044 (Size: 0x4, Type: NameProperty)
    std::uint8_t TypeName[0x4]; // 0x0048 (Size: 0x4, Type: NameProperty)
    std::uint8_t CaveEntrancePOI[0x8]; // 0x004C (Size: 0x8, Type: StructProperty)
    std::int32_t PrimaryChainDepth; // 0x0054 (Size: 0x4, Type: IntProperty)
    std::int32_t NumSecondaryChainsCreated; // 0x0058 (Size: 0x4, Type: IntProperty)
    std::int32_t SecondaryChainMaxDepth; // 0x005C (Size: 0x4, Type: IntProperty)
    std::int32_t NumPOIsCreated; // 0x0060 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FJunoCaveGeneratorResult, Shells) == 0, "Offset mismatch for FJunoCaveGeneratorResult::Shells");
static_assert(offsetof(FJunoCaveGeneratorResult, POIs) == 48, "Offset mismatch for FJunoCaveGeneratorResult::POIs");
static_assert(offsetof(FJunoCaveGeneratorResult, RuleName) == 64, "Offset mismatch for FJunoCaveGeneratorResult::RuleName");
static_assert(offsetof(FJunoCaveGeneratorResult, ThemeName) == 68, "Offset mismatch for FJunoCaveGeneratorResult::ThemeName");
static_assert(offsetof(FJunoCaveGeneratorResult, TypeName) == 72, "Offset mismatch for FJunoCaveGeneratorResult::TypeName");
static_assert(offsetof(FJunoCaveGeneratorResult, CaveEntrancePOI) == 76, "Offset mismatch for FJunoCaveGeneratorResult::CaveEntrancePOI");
static_assert(offsetof(FJunoCaveGeneratorResult, PrimaryChainDepth) == 84, "Offset mismatch for FJunoCaveGeneratorResult::PrimaryChainDepth");
static_assert(offsetof(FJunoCaveGeneratorResult, NumSecondaryChainsCreated) == 88, "Offset mismatch for FJunoCaveGeneratorResult::NumSecondaryChainsCreated");
static_assert(offsetof(FJunoCaveGeneratorResult, SecondaryChainMaxDepth) == 92, "Offset mismatch for FJunoCaveGeneratorResult::SecondaryChainMaxDepth");
static_assert(offsetof(FJunoCaveGeneratorResult, NumPOIsCreated) == 96, "Offset mismatch for FJunoCaveGeneratorResult::NumPOIsCreated");

// /Script/JunoProceduralWorld.JunoCaveGeneratorRule
// Kind: ScriptStruct; super: TableRowBase
struct FJunoCaveGeneratorRule
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Name[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::int32_t SelectionWeight; // 0x000C (Size: 0x4, Type: IntProperty)
    std::uint8_t bEnabled; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0011
    std::int32_t DepthAttemptThreshold; // 0x0014 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxNumberOfTeleporters; // 0x0018 (Size: 0x4, Type: IntProperty)
    std::uint8_t Mode; // 0x001C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x001D
    std::int32_t MinPrimaryChainLength; // 0x0020 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxPrimaryChainLength; // 0x0024 (Size: 0x4, Type: IntProperty)
    void* SpecialEndingTeleporterClass; // 0x0028 (Size: 0x8, Type: ClassProperty)
    float PrimaryChainHallwayChance; // 0x0030 (Size: 0x4, Type: FloatProperty)
    std::int32_t MinNumberOfSecondaryChains; // 0x0034 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxNumberOfSecondaryChains; // 0x0038 (Size: 0x4, Type: IntProperty)
    std::int32_t MinSecondaryChainLength; // 0x003C (Size: 0x4, Type: IntProperty)
    std::int32_t MaxSecondaryChainLength; // 0x0040 (Size: 0x4, Type: IntProperty)
    std::int32_t MinStartingDepthOfSecondaryChains; // 0x0044 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxStartingDepthOfSecondaryChains; // 0x0048 (Size: 0x4, Type: IntProperty)
    float SecondaryChainHallwayChance; // 0x004C (Size: 0x4, Type: FloatProperty)
    TArray<void*> Stages; // 0x0050 (Size: 0x10, Type: ArrayProperty)
    std::int32_t MaxNumberOfPOIs; // 0x0060 (Size: 0x4, Type: IntProperty)
    float BasePOISpawnChance; // 0x0064 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bAllowPOIsInTeleporterRooms; // 0x0068 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FJunoCaveGeneratorRule, Name) == 8, "Offset mismatch for FJunoCaveGeneratorRule::Name");
static_assert(offsetof(FJunoCaveGeneratorRule, SelectionWeight) == 12, "Offset mismatch for FJunoCaveGeneratorRule::SelectionWeight");
static_assert(offsetof(FJunoCaveGeneratorRule, bEnabled) == 16, "Offset mismatch for FJunoCaveGeneratorRule::bEnabled");
static_assert(offsetof(FJunoCaveGeneratorRule, DepthAttemptThreshold) == 20, "Offset mismatch for FJunoCaveGeneratorRule::DepthAttemptThreshold");
static_assert(offsetof(FJunoCaveGeneratorRule, MaxNumberOfTeleporters) == 24, "Offset mismatch for FJunoCaveGeneratorRule::MaxNumberOfTeleporters");
static_assert(offsetof(FJunoCaveGeneratorRule, Mode) == 28, "Offset mismatch for FJunoCaveGeneratorRule::Mode");
static_assert(offsetof(FJunoCaveGeneratorRule, MinPrimaryChainLength) == 32, "Offset mismatch for FJunoCaveGeneratorRule::MinPrimaryChainLength");
static_assert(offsetof(FJunoCaveGeneratorRule, MaxPrimaryChainLength) == 36, "Offset mismatch for FJunoCaveGeneratorRule::MaxPrimaryChainLength");
static_assert(offsetof(FJunoCaveGeneratorRule, SpecialEndingTeleporterClass) == 40, "Offset mismatch for FJunoCaveGeneratorRule::SpecialEndingTeleporterClass");
static_assert(offsetof(FJunoCaveGeneratorRule, PrimaryChainHallwayChance) == 48, "Offset mismatch for FJunoCaveGeneratorRule::PrimaryChainHallwayChance");
static_assert(offsetof(FJunoCaveGeneratorRule, MinNumberOfSecondaryChains) == 52, "Offset mismatch for FJunoCaveGeneratorRule::MinNumberOfSecondaryChains");
static_assert(offsetof(FJunoCaveGeneratorRule, MaxNumberOfSecondaryChains) == 56, "Offset mismatch for FJunoCaveGeneratorRule::MaxNumberOfSecondaryChains");
static_assert(offsetof(FJunoCaveGeneratorRule, MinSecondaryChainLength) == 60, "Offset mismatch for FJunoCaveGeneratorRule::MinSecondaryChainLength");
static_assert(offsetof(FJunoCaveGeneratorRule, MaxSecondaryChainLength) == 64, "Offset mismatch for FJunoCaveGeneratorRule::MaxSecondaryChainLength");
static_assert(offsetof(FJunoCaveGeneratorRule, MinStartingDepthOfSecondaryChains) == 68, "Offset mismatch for FJunoCaveGeneratorRule::MinStartingDepthOfSecondaryChains");
static_assert(offsetof(FJunoCaveGeneratorRule, MaxStartingDepthOfSecondaryChains) == 72, "Offset mismatch for FJunoCaveGeneratorRule::MaxStartingDepthOfSecondaryChains");
static_assert(offsetof(FJunoCaveGeneratorRule, SecondaryChainHallwayChance) == 76, "Offset mismatch for FJunoCaveGeneratorRule::SecondaryChainHallwayChance");
static_assert(offsetof(FJunoCaveGeneratorRule, Stages) == 80, "Offset mismatch for FJunoCaveGeneratorRule::Stages");
static_assert(offsetof(FJunoCaveGeneratorRule, MaxNumberOfPOIs) == 96, "Offset mismatch for FJunoCaveGeneratorRule::MaxNumberOfPOIs");
static_assert(offsetof(FJunoCaveGeneratorRule, BasePOISpawnChance) == 100, "Offset mismatch for FJunoCaveGeneratorRule::BasePOISpawnChance");
static_assert(offsetof(FJunoCaveGeneratorRule, bAllowPOIsInTeleporterRooms) == 104, "Offset mismatch for FJunoCaveGeneratorRule::bAllowPOIsInTeleporterRooms");

// /Script/JunoProceduralWorld.JunoCaveGeneratorSequenceData
// Kind: ScriptStruct; super: TableRowBase
struct FJunoCaveGeneratorSequenceData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Name[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::uint8_t bEnabled; // 0x000C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x000D
    TArray<void*> FloorChainStages; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJunoCaveGeneratorSequenceData, Name) == 8, "Offset mismatch for FJunoCaveGeneratorSequenceData::Name");
static_assert(offsetof(FJunoCaveGeneratorSequenceData, bEnabled) == 12, "Offset mismatch for FJunoCaveGeneratorSequenceData::bEnabled");
static_assert(offsetof(FJunoCaveGeneratorSequenceData, FloorChainStages) == 16, "Offset mismatch for FJunoCaveGeneratorSequenceData::FloorChainStages");

// /Script/JunoProceduralWorld.JunoCaveGeneratorShellData
// Kind: ScriptStruct; super: TableRowBase
struct FJunoCaveGeneratorShellData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    FName Name; // 0x0008 (Size: 0x8, Type: NameProperty)
    std::uint8_t World[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    std::uint8_t ValidBiomes[0x10]; // 0x0028 (Size: 0x10, Type: SetProperty)
    std::uint8_t ShellTags[0x10]; // 0x0038 (Size: 0x10, Type: SetProperty)
    std::uint8_t Tags[0x20]; // 0x0048 (Size: 0x20, Type: StructProperty)
    std::uint8_t ShellType; // 0x0068 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ShellSize; // 0x0069 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x2]; // 0x006A
    std::int32_t MinDepth; // 0x006C (Size: 0x4, Type: IntProperty)
    std::int32_t MaxDepth; // 0x0070 (Size: 0x4, Type: IntProperty)
    std::uint8_t bEnabled; // 0x0074 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0075
    std::int32_t Version; // 0x0078 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0003[0x4]; // 0x007C
    TArray<void*> ResourceLevels; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> VariationResourceLevels; // 0x0090 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ShellBoundsSize[0x18]; // 0x00A0 (Size: 0x18, Type: StructProperty)
    std::uint8_t ShellBoundsCenter[0x18]; // 0x00B8 (Size: 0x18, Type: StructProperty)
    TArray<void*> ExitLocations; // 0x00D0 (Size: 0x10, Type: ArrayProperty)
    std::int32_t NumOfSpawners; // 0x00E0 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0004[0x4]; // 0x00E4
    TArray<void*> POIMarkers; // 0x00E8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> TeleporterMarkers; // 0x00F8 (Size: 0x10, Type: ArrayProperty)
    std::int32_t NumOfAIPointProviders; // 0x0108 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0005[0x4]; // 0x010C
    TMap<void*, void*> SupportedLayouts; // 0x0110 (Size: 0x10, Type: MapProperty)
    std::uint8_t bHasFixedEntrance; // 0x0120 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOneWaySurfaceToCaveEntrance; // 0x0121 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FJunoCaveGeneratorShellData, Name) == 8, "Offset mismatch for FJunoCaveGeneratorShellData::Name");
static_assert(offsetof(FJunoCaveGeneratorShellData, World) == 16, "Offset mismatch for FJunoCaveGeneratorShellData::World");
static_assert(offsetof(FJunoCaveGeneratorShellData, ValidBiomes) == 40, "Offset mismatch for FJunoCaveGeneratorShellData::ValidBiomes");
static_assert(offsetof(FJunoCaveGeneratorShellData, ShellTags) == 56, "Offset mismatch for FJunoCaveGeneratorShellData::ShellTags");
static_assert(offsetof(FJunoCaveGeneratorShellData, Tags) == 72, "Offset mismatch for FJunoCaveGeneratorShellData::Tags");
static_assert(offsetof(FJunoCaveGeneratorShellData, ShellType) == 104, "Offset mismatch for FJunoCaveGeneratorShellData::ShellType");
static_assert(offsetof(FJunoCaveGeneratorShellData, ShellSize) == 105, "Offset mismatch for FJunoCaveGeneratorShellData::ShellSize");
static_assert(offsetof(FJunoCaveGeneratorShellData, MinDepth) == 108, "Offset mismatch for FJunoCaveGeneratorShellData::MinDepth");
static_assert(offsetof(FJunoCaveGeneratorShellData, MaxDepth) == 112, "Offset mismatch for FJunoCaveGeneratorShellData::MaxDepth");
static_assert(offsetof(FJunoCaveGeneratorShellData, bEnabled) == 116, "Offset mismatch for FJunoCaveGeneratorShellData::bEnabled");
static_assert(offsetof(FJunoCaveGeneratorShellData, Version) == 120, "Offset mismatch for FJunoCaveGeneratorShellData::Version");
static_assert(offsetof(FJunoCaveGeneratorShellData, ResourceLevels) == 128, "Offset mismatch for FJunoCaveGeneratorShellData::ResourceLevels");
static_assert(offsetof(FJunoCaveGeneratorShellData, VariationResourceLevels) == 144, "Offset mismatch for FJunoCaveGeneratorShellData::VariationResourceLevels");
static_assert(offsetof(FJunoCaveGeneratorShellData, ShellBoundsSize) == 160, "Offset mismatch for FJunoCaveGeneratorShellData::ShellBoundsSize");
static_assert(offsetof(FJunoCaveGeneratorShellData, ShellBoundsCenter) == 184, "Offset mismatch for FJunoCaveGeneratorShellData::ShellBoundsCenter");
static_assert(offsetof(FJunoCaveGeneratorShellData, ExitLocations) == 208, "Offset mismatch for FJunoCaveGeneratorShellData::ExitLocations");
static_assert(offsetof(FJunoCaveGeneratorShellData, NumOfSpawners) == 224, "Offset mismatch for FJunoCaveGeneratorShellData::NumOfSpawners");
static_assert(offsetof(FJunoCaveGeneratorShellData, POIMarkers) == 232, "Offset mismatch for FJunoCaveGeneratorShellData::POIMarkers");
static_assert(offsetof(FJunoCaveGeneratorShellData, TeleporterMarkers) == 248, "Offset mismatch for FJunoCaveGeneratorShellData::TeleporterMarkers");
static_assert(offsetof(FJunoCaveGeneratorShellData, NumOfAIPointProviders) == 264, "Offset mismatch for FJunoCaveGeneratorShellData::NumOfAIPointProviders");
static_assert(offsetof(FJunoCaveGeneratorShellData, SupportedLayouts) == 272, "Offset mismatch for FJunoCaveGeneratorShellData::SupportedLayouts");
static_assert(offsetof(FJunoCaveGeneratorShellData, bHasFixedEntrance) == 288, "Offset mismatch for FJunoCaveGeneratorShellData::bHasFixedEntrance");
static_assert(offsetof(FJunoCaveGeneratorShellData, bOneWaySurfaceToCaveEntrance) == 289, "Offset mismatch for FJunoCaveGeneratorShellData::bOneWaySurfaceToCaveEntrance");

// /Script/JunoProceduralWorld.JunoCaveGeneratorShellMetadata
// Kind: ScriptStruct; super: none
struct FJunoCaveGeneratorShellMetadata
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoProceduralWorld.JunoCaveGeneratorTeleporterMarker
// Kind: ScriptStruct; super: none
struct FJunoCaveGeneratorTeleporterMarker
{
public:
    std::uint8_t Transform[0x60]; // 0x0000 (Size: 0x60, Type: StructProperty)
    std::uint8_t Tags[0x1]; // 0x0060 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoCaveGeneratorTeleporterMarker, Transform) == 0, "Offset mismatch for FJunoCaveGeneratorTeleporterMarker::Transform");
static_assert(offsetof(FJunoCaveGeneratorTeleporterMarker, Tags) == 96, "Offset mismatch for FJunoCaveGeneratorTeleporterMarker::Tags");

// /Script/JunoProceduralWorld.JunoCaveGeneratorThemeEntry
// Kind: ScriptStruct; super: TableRowBase
struct FJunoCaveGeneratorThemeEntry
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t CaveMaterial[0x20]; // 0x0008 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t DestructibleCaveMaterial[0x20]; // 0x0028 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t ThemeResourceDataTable[0x20]; // 0x0048 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t POIDataTable[0x20]; // 0x0068 (Size: 0x20, Type: SoftObjectProperty)
    TMap<void*, void*> PCGTypeWeights; // 0x0088 (Size: 0x10, Type: MapProperty)
    std::uint8_t bEnabled; // 0x0098 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0099
    std::uint8_t Name[0x4]; // 0x009C (Size: 0x4, Type: NameProperty)
    std::uint8_t Biomes[0x10]; // 0x00A0 (Size: 0x10, Type: SetProperty)
    std::uint8_t SlotTagQuery[0x48]; // 0x00B0 (Size: 0x48, Type: StructProperty)
    std::uint8_t bExportTheme; // 0x00F8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x00F9
    std::uint8_t ThemeExportName[0x4]; // 0x00FC (Size: 0x4, Type: NameProperty)
    FName ThemeExportPath; // 0x0100 (Size: 0x8, Type: NameProperty)
    TSoftClassPtr<void> TeleporterClass; // 0x0108 (Size: 0x28, Type: SoftClassProperty)
};

static_assert(offsetof(FJunoCaveGeneratorThemeEntry, CaveMaterial) == 8, "Offset mismatch for FJunoCaveGeneratorThemeEntry::CaveMaterial");
static_assert(offsetof(FJunoCaveGeneratorThemeEntry, DestructibleCaveMaterial) == 40, "Offset mismatch for FJunoCaveGeneratorThemeEntry::DestructibleCaveMaterial");
static_assert(offsetof(FJunoCaveGeneratorThemeEntry, ThemeResourceDataTable) == 72, "Offset mismatch for FJunoCaveGeneratorThemeEntry::ThemeResourceDataTable");
static_assert(offsetof(FJunoCaveGeneratorThemeEntry, POIDataTable) == 104, "Offset mismatch for FJunoCaveGeneratorThemeEntry::POIDataTable");
static_assert(offsetof(FJunoCaveGeneratorThemeEntry, PCGTypeWeights) == 136, "Offset mismatch for FJunoCaveGeneratorThemeEntry::PCGTypeWeights");
static_assert(offsetof(FJunoCaveGeneratorThemeEntry, bEnabled) == 152, "Offset mismatch for FJunoCaveGeneratorThemeEntry::bEnabled");
static_assert(offsetof(FJunoCaveGeneratorThemeEntry, Name) == 156, "Offset mismatch for FJunoCaveGeneratorThemeEntry::Name");
static_assert(offsetof(FJunoCaveGeneratorThemeEntry, Biomes) == 160, "Offset mismatch for FJunoCaveGeneratorThemeEntry::Biomes");
static_assert(offsetof(FJunoCaveGeneratorThemeEntry, SlotTagQuery) == 176, "Offset mismatch for FJunoCaveGeneratorThemeEntry::SlotTagQuery");
static_assert(offsetof(FJunoCaveGeneratorThemeEntry, bExportTheme) == 248, "Offset mismatch for FJunoCaveGeneratorThemeEntry::bExportTheme");
static_assert(offsetof(FJunoCaveGeneratorThemeEntry, ThemeExportName) == 252, "Offset mismatch for FJunoCaveGeneratorThemeEntry::ThemeExportName");
static_assert(offsetof(FJunoCaveGeneratorThemeEntry, ThemeExportPath) == 256, "Offset mismatch for FJunoCaveGeneratorThemeEntry::ThemeExportPath");
static_assert(offsetof(FJunoCaveGeneratorThemeEntry, TeleporterClass) == 264, "Offset mismatch for FJunoCaveGeneratorThemeEntry::TeleporterClass");

// /Script/JunoProceduralWorld.JunoCaveGeneratorTypeData
// Kind: ScriptStruct; super: TableRowBase
struct FJunoCaveGeneratorTypeData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t TypeName[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::uint8_t bEnabled; // 0x000C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Type; // 0x000D (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x2]; // 0x000E
    float MaxZSize; // 0x0010 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Mode; // 0x0014 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0015
    TArray<void*> Rules; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SharedRuleIds; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    std::int32_t SelectionWeight; // 0x0038 (Size: 0x4, Type: IntProperty)
    std::uint8_t Sequence[0xC]; // 0x003C (Size: 0xC, Type: StructProperty)
    std::uint8_t ValidBiomes[0x10]; // 0x0048 (Size: 0x10, Type: SetProperty)
    std::uint8_t SlotTagQuery[0x48]; // 0x0058 (Size: 0x48, Type: StructProperty)
    std::uint8_t ShellTags[0x10]; // 0x00A0 (Size: 0x10, Type: SetProperty)
    std::uint8_t ShellQuery[0x48]; // 0x00B0 (Size: 0x48, Type: StructProperty)
    std::uint8_t LayoutTags[0x10]; // 0x00F8 (Size: 0x10, Type: SetProperty)
    TArray<void*> EntrancePOIs; // 0x0108 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> TeleporterRules; // 0x0118 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJunoCaveGeneratorTypeData, TypeName) == 8, "Offset mismatch for FJunoCaveGeneratorTypeData::TypeName");
static_assert(offsetof(FJunoCaveGeneratorTypeData, bEnabled) == 12, "Offset mismatch for FJunoCaveGeneratorTypeData::bEnabled");
static_assert(offsetof(FJunoCaveGeneratorTypeData, Type) == 13, "Offset mismatch for FJunoCaveGeneratorTypeData::Type");
static_assert(offsetof(FJunoCaveGeneratorTypeData, MaxZSize) == 16, "Offset mismatch for FJunoCaveGeneratorTypeData::MaxZSize");
static_assert(offsetof(FJunoCaveGeneratorTypeData, Mode) == 20, "Offset mismatch for FJunoCaveGeneratorTypeData::Mode");
static_assert(offsetof(FJunoCaveGeneratorTypeData, Rules) == 24, "Offset mismatch for FJunoCaveGeneratorTypeData::Rules");
static_assert(offsetof(FJunoCaveGeneratorTypeData, SharedRuleIds) == 40, "Offset mismatch for FJunoCaveGeneratorTypeData::SharedRuleIds");
static_assert(offsetof(FJunoCaveGeneratorTypeData, SelectionWeight) == 56, "Offset mismatch for FJunoCaveGeneratorTypeData::SelectionWeight");
static_assert(offsetof(FJunoCaveGeneratorTypeData, Sequence) == 60, "Offset mismatch for FJunoCaveGeneratorTypeData::Sequence");
static_assert(offsetof(FJunoCaveGeneratorTypeData, ValidBiomes) == 72, "Offset mismatch for FJunoCaveGeneratorTypeData::ValidBiomes");
static_assert(offsetof(FJunoCaveGeneratorTypeData, SlotTagQuery) == 88, "Offset mismatch for FJunoCaveGeneratorTypeData::SlotTagQuery");
static_assert(offsetof(FJunoCaveGeneratorTypeData, ShellTags) == 160, "Offset mismatch for FJunoCaveGeneratorTypeData::ShellTags");
static_assert(offsetof(FJunoCaveGeneratorTypeData, ShellQuery) == 176, "Offset mismatch for FJunoCaveGeneratorTypeData::ShellQuery");
static_assert(offsetof(FJunoCaveGeneratorTypeData, LayoutTags) == 248, "Offset mismatch for FJunoCaveGeneratorTypeData::LayoutTags");
static_assert(offsetof(FJunoCaveGeneratorTypeData, EntrancePOIs) == 264, "Offset mismatch for FJunoCaveGeneratorTypeData::EntrancePOIs");
static_assert(offsetof(FJunoCaveGeneratorTypeData, TeleporterRules) == 280, "Offset mismatch for FJunoCaveGeneratorTypeData::TeleporterRules");

// /Script/JunoProceduralWorld.JunoCaveGeneratorTypeEntrancePOI
// Kind: ScriptStruct; super: none
struct FJunoCaveGeneratorTypeEntrancePOI
{
public:
    std::uint8_t POIQuery[0x48]; // 0x0000 (Size: 0x48, Type: StructProperty)
    FName RuleName; // 0x0048 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FJunoCaveGeneratorTypeEntrancePOI, POIQuery) == 0, "Offset mismatch for FJunoCaveGeneratorTypeEntrancePOI::POIQuery");
static_assert(offsetof(FJunoCaveGeneratorTypeEntrancePOI, RuleName) == 72, "Offset mismatch for FJunoCaveGeneratorTypeEntrancePOI::RuleName");

// /Script/JunoProceduralWorld.JunoCaveGeneratorTypeTeleporterRule
// Kind: ScriptStruct; super: none
struct FJunoCaveGeneratorTypeTeleporterRule
{
public:
    std::uint8_t Type; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    std::uint8_t MarkerQuery[0x48]; // 0x0008 (Size: 0x48, Type: StructProperty)
    void* StartTeleporterClass; // 0x0050 (Size: 0x8, Type: ClassProperty)
    void* EndTeleporterClass; // 0x0058 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(FJunoCaveGeneratorTypeTeleporterRule, Type) == 0, "Offset mismatch for FJunoCaveGeneratorTypeTeleporterRule::Type");
static_assert(offsetof(FJunoCaveGeneratorTypeTeleporterRule, MarkerQuery) == 8, "Offset mismatch for FJunoCaveGeneratorTypeTeleporterRule::MarkerQuery");
static_assert(offsetof(FJunoCaveGeneratorTypeTeleporterRule, StartTeleporterClass) == 80, "Offset mismatch for FJunoCaveGeneratorTypeTeleporterRule::StartTeleporterClass");
static_assert(offsetof(FJunoCaveGeneratorTypeTeleporterRule, EndTeleporterClass) == 88, "Offset mismatch for FJunoCaveGeneratorTypeTeleporterRule::EndTeleporterClass");

// /Script/JunoProceduralWorld.JunoCaveGeneratorWorldsList
// Kind: ScriptStruct; super: none
struct FJunoCaveGeneratorWorldsList
{
public:
    TArray<void*> Worlds; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJunoCaveGeneratorWorldsList, Worlds) == 0, "Offset mismatch for FJunoCaveGeneratorWorldsList::Worlds");

// /Script/JunoProceduralWorld.JunoCaveResetData
// Kind: ScriptStruct; super: none
struct FJunoCaveResetData
{
public:
    std::uint8_t CaveIdentifier[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::uint8_t CaveGUID[0x14]; // 0x0004 (Size: 0x14, Type: StructProperty)
    std::uint8_t CompletionTime[0x8]; // 0x0018 (Size: 0x8, Type: StructProperty)
    std::uint8_t bExpired; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0021
    std::int32_t ResetCount; // 0x0024 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FJunoCaveResetData, CaveIdentifier) == 0, "Offset mismatch for FJunoCaveResetData::CaveIdentifier");
static_assert(offsetof(FJunoCaveResetData, CaveGUID) == 4, "Offset mismatch for FJunoCaveResetData::CaveGUID");
static_assert(offsetof(FJunoCaveResetData, CompletionTime) == 24, "Offset mismatch for FJunoCaveResetData::CompletionTime");
static_assert(offsetof(FJunoCaveResetData, bExpired) == 32, "Offset mismatch for FJunoCaveResetData::bExpired");
static_assert(offsetof(FJunoCaveResetData, ResetCount) == 36, "Offset mismatch for FJunoCaveResetData::ResetCount");

// /Script/JunoProceduralWorld.JunoCaveResetEvent
// Kind: ScriptStruct; super: TableRowBase
struct FJunoCaveResetEvent
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t bEnabled; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0009
    std::uint8_t EventTag[0x4]; // 0x000C (Size: 0x4, Type: StructProperty)
    std::uint8_t CaveGenerationTags[0x20]; // 0x0010 (Size: 0x20, Type: StructProperty)
    std::uint8_t CaveBiome; // 0x0030 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0031
    std::uint8_t CaveGUID[0x1C]; // 0x0034 (Size: 0x1C, Type: StructProperty)
    std::uint8_t bCanResetDuringGame; // 0x0050 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSpawnPlayerAtCaveEntrance; // 0x0051 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x2]; // 0x0052
    std::uint8_t ForceResetReleaseVersion[0x1]; // 0x0054 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoCaveResetEvent, bEnabled) == 8, "Offset mismatch for FJunoCaveResetEvent::bEnabled");
static_assert(offsetof(FJunoCaveResetEvent, EventTag) == 12, "Offset mismatch for FJunoCaveResetEvent::EventTag");
static_assert(offsetof(FJunoCaveResetEvent, CaveGenerationTags) == 16, "Offset mismatch for FJunoCaveResetEvent::CaveGenerationTags");
static_assert(offsetof(FJunoCaveResetEvent, CaveBiome) == 48, "Offset mismatch for FJunoCaveResetEvent::CaveBiome");
static_assert(offsetof(FJunoCaveResetEvent, CaveGUID) == 52, "Offset mismatch for FJunoCaveResetEvent::CaveGUID");
static_assert(offsetof(FJunoCaveResetEvent, bCanResetDuringGame) == 80, "Offset mismatch for FJunoCaveResetEvent::bCanResetDuringGame");
static_assert(offsetof(FJunoCaveResetEvent, bSpawnPlayerAtCaveEntrance) == 81, "Offset mismatch for FJunoCaveResetEvent::bSpawnPlayerAtCaveEntrance");
static_assert(offsetof(FJunoCaveResetEvent, ForceResetReleaseVersion) == 84, "Offset mismatch for FJunoCaveResetEvent::ForceResetReleaseVersion");

// /Script/JunoProceduralWorld.JunoCaveRuleChain
// Kind: ScriptStruct; super: none
struct FJunoCaveRuleChain
{
public:
    TArray<void*> Shells; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    float SelectionWeight; // 0x0010 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FJunoCaveRuleChain, Shells) == 0, "Offset mismatch for FJunoCaveRuleChain::Shells");
static_assert(offsetof(FJunoCaveRuleChain, SelectionWeight) == 16, "Offset mismatch for FJunoCaveRuleChain::SelectionWeight");

// /Script/JunoProceduralWorld.JunoCaveRuleChainShell
// Kind: ScriptStruct; super: none
struct FJunoCaveRuleChainShell
{
public:
    std::uint8_t ShellQuery[0x48]; // 0x0000 (Size: 0x48, Type: StructProperty)
    std::uint8_t bCanHaveTeleporterExit; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanHavePOIs; // 0x0049 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanHaveSecondaryChains; // 0x004A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPOIsCanHaveEncounters; // 0x004B (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FJunoCaveRuleChainShell, ShellQuery) == 0, "Offset mismatch for FJunoCaveRuleChainShell::ShellQuery");
static_assert(offsetof(FJunoCaveRuleChainShell, bCanHaveTeleporterExit) == 72, "Offset mismatch for FJunoCaveRuleChainShell::bCanHaveTeleporterExit");
static_assert(offsetof(FJunoCaveRuleChainShell, bCanHavePOIs) == 73, "Offset mismatch for FJunoCaveRuleChainShell::bCanHavePOIs");
static_assert(offsetof(FJunoCaveRuleChainShell, bCanHaveSecondaryChains) == 74, "Offset mismatch for FJunoCaveRuleChainShell::bCanHaveSecondaryChains");
static_assert(offsetof(FJunoCaveRuleChainShell, bPOIsCanHaveEncounters) == 75, "Offset mismatch for FJunoCaveRuleChainShell::bPOIsCanHaveEncounters");

// /Script/JunoProceduralWorld.JunoCaveRuleChainStage
// Kind: ScriptStruct; super: none
struct FJunoCaveRuleChainStage
{
public:
    TArray<void*> PrimaryChains; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SecondaryChains; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJunoCaveRuleChainStage, PrimaryChains) == 0, "Offset mismatch for FJunoCaveRuleChainStage::PrimaryChains");
static_assert(offsetof(FJunoCaveRuleChainStage, SecondaryChains) == 16, "Offset mismatch for FJunoCaveRuleChainStage::SecondaryChains");

// /Script/JunoProceduralWorld.JunoCaveShellGameplayVolumeTeleporterLink
// Kind: ScriptStruct; super: none
struct FJunoCaveShellGameplayVolumeTeleporterLink
{
public:
    void* SurfaceTeleporter; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* CaveTeleporter; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FJunoCaveShellGameplayVolumeTeleporterLink, SurfaceTeleporter) == 0, "Offset mismatch for FJunoCaveShellGameplayVolumeTeleporterLink::SurfaceTeleporter");
static_assert(offsetof(FJunoCaveShellGameplayVolumeTeleporterLink, CaveTeleporter) == 8, "Offset mismatch for FJunoCaveShellGameplayVolumeTeleporterLink::CaveTeleporter");

// /Script/JunoProceduralWorld.JunoCaveShellInstanceData
// Kind: ScriptStruct; super: none
struct FJunoCaveShellInstanceData
{
public:
    std::int32_t ExitsUsedMask; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t Depth; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t Tier; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::int32_t ChainID; // 0x000C (Size: 0x4, Type: IntProperty)
    std::int32_t floor; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::uint8_t Type; // 0x0014 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0015
    FName ThemeName; // 0x0018 (Size: 0x8, Type: NameProperty)
    std::uint8_t ThemeObject[0x20]; // 0x0020 (Size: 0x20, Type: SoftObjectProperty)
    FName BranchParentShellID; // 0x0040 (Size: 0x8, Type: NameProperty)
    double EntranceZ; // 0x0048 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t EntranceBiome; // 0x0050 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0051
    TArray<void*> Teleporters; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Tags[0x1]; // 0x0068 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoCaveShellInstanceData, ExitsUsedMask) == 0, "Offset mismatch for FJunoCaveShellInstanceData::ExitsUsedMask");
static_assert(offsetof(FJunoCaveShellInstanceData, Depth) == 4, "Offset mismatch for FJunoCaveShellInstanceData::Depth");
static_assert(offsetof(FJunoCaveShellInstanceData, Tier) == 8, "Offset mismatch for FJunoCaveShellInstanceData::Tier");
static_assert(offsetof(FJunoCaveShellInstanceData, ChainID) == 12, "Offset mismatch for FJunoCaveShellInstanceData::ChainID");
static_assert(offsetof(FJunoCaveShellInstanceData, floor) == 16, "Offset mismatch for FJunoCaveShellInstanceData::floor");
static_assert(offsetof(FJunoCaveShellInstanceData, Type) == 20, "Offset mismatch for FJunoCaveShellInstanceData::Type");
static_assert(offsetof(FJunoCaveShellInstanceData, ThemeName) == 24, "Offset mismatch for FJunoCaveShellInstanceData::ThemeName");
static_assert(offsetof(FJunoCaveShellInstanceData, ThemeObject) == 32, "Offset mismatch for FJunoCaveShellInstanceData::ThemeObject");
static_assert(offsetof(FJunoCaveShellInstanceData, BranchParentShellID) == 64, "Offset mismatch for FJunoCaveShellInstanceData::BranchParentShellID");
static_assert(offsetof(FJunoCaveShellInstanceData, EntranceZ) == 72, "Offset mismatch for FJunoCaveShellInstanceData::EntranceZ");
static_assert(offsetof(FJunoCaveShellInstanceData, EntranceBiome) == 80, "Offset mismatch for FJunoCaveShellInstanceData::EntranceBiome");
static_assert(offsetof(FJunoCaveShellInstanceData, Teleporters) == 88, "Offset mismatch for FJunoCaveShellInstanceData::Teleporters");
static_assert(offsetof(FJunoCaveShellInstanceData, Tags) == 104, "Offset mismatch for FJunoCaveShellInstanceData::Tags");

// /Script/JunoProceduralWorld.JunoCaveStateSaveData
// Kind: ScriptStruct; super: none
struct FJunoCaveStateSaveData
{
public:
    std::uint8_t StateTags[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoCaveStateSaveData, StateTags) == 0, "Offset mismatch for FJunoCaveStateSaveData::StateTags");

// /Script/JunoProceduralWorld.JunoCaveSurfaceData
// Kind: ScriptStruct; super: none
struct FJunoCaveSurfaceData
{
public:
    std::uint8_t CaveGUID[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    TArray<void*> Entrances; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> EntranceTeleporterTransforms; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    std::int32_t SlotIndex; // 0x0030 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FJunoCaveSurfaceData, CaveGUID) == 0, "Offset mismatch for FJunoCaveSurfaceData::CaveGUID");
static_assert(offsetof(FJunoCaveSurfaceData, Entrances) == 16, "Offset mismatch for FJunoCaveSurfaceData::Entrances");
static_assert(offsetof(FJunoCaveSurfaceData, EntranceTeleporterTransforms) == 32, "Offset mismatch for FJunoCaveSurfaceData::EntranceTeleporterTransforms");
static_assert(offsetof(FJunoCaveSurfaceData, SlotIndex) == 48, "Offset mismatch for FJunoCaveSurfaceData::SlotIndex");

// /Script/JunoProceduralWorld.JunoCaveTeleporterLink
// Kind: ScriptStruct; super: none
struct FJunoCaveTeleporterLink
{
public:
    std::uint8_t SurfaceTransform[0x60]; // 0x0000 (Size: 0x60, Type: StructProperty)
    std::uint8_t CaveTransform[0x60]; // 0x0060 (Size: 0x60, Type: StructProperty)
    void* SurfaceTeleporterClass; // 0x00C0 (Size: 0x8, Type: ClassProperty)
    void* CaveTeleporterClass; // 0x00C8 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bOneWaySurfaceToCave; // 0x00D0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x00D1
    std::uint8_t SurfacePOISlotGuid[0x1]; // 0x00D4 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoCaveTeleporterLink, SurfaceTransform) == 0, "Offset mismatch for FJunoCaveTeleporterLink::SurfaceTransform");
static_assert(offsetof(FJunoCaveTeleporterLink, CaveTransform) == 96, "Offset mismatch for FJunoCaveTeleporterLink::CaveTransform");
static_assert(offsetof(FJunoCaveTeleporterLink, SurfaceTeleporterClass) == 192, "Offset mismatch for FJunoCaveTeleporterLink::SurfaceTeleporterClass");
static_assert(offsetof(FJunoCaveTeleporterLink, CaveTeleporterClass) == 200, "Offset mismatch for FJunoCaveTeleporterLink::CaveTeleporterClass");
static_assert(offsetof(FJunoCaveTeleporterLink, bOneWaySurfaceToCave) == 208, "Offset mismatch for FJunoCaveTeleporterLink::bOneWaySurfaceToCave");
static_assert(offsetof(FJunoCaveTeleporterLink, SurfacePOISlotGuid) == 212, "Offset mismatch for FJunoCaveTeleporterLink::SurfacePOISlotGuid");

// /Script/JunoProceduralWorld.JunoChainLevelValidity
// Kind: ScriptStruct; super: none
struct FJunoChainLevelValidity
{
public:
    std::int32_t Depth; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t RuleId[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    std::int32_t Qualifying; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::int32_t Valid; // 0x000C (Size: 0x4, Type: IntProperty)
    std::int32_t MinRequired; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::int32_t RequiredPlacements; // 0x0014 (Size: 0x4, Type: IntProperty)
    std::uint8_t bPass; // 0x0018 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0019
    TArray<void*> Origins; // 0x0020 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJunoChainLevelValidity, Depth) == 0, "Offset mismatch for FJunoChainLevelValidity::Depth");
static_assert(offsetof(FJunoChainLevelValidity, RuleId) == 4, "Offset mismatch for FJunoChainLevelValidity::RuleId");
static_assert(offsetof(FJunoChainLevelValidity, Qualifying) == 8, "Offset mismatch for FJunoChainLevelValidity::Qualifying");
static_assert(offsetof(FJunoChainLevelValidity, Valid) == 12, "Offset mismatch for FJunoChainLevelValidity::Valid");
static_assert(offsetof(FJunoChainLevelValidity, MinRequired) == 16, "Offset mismatch for FJunoChainLevelValidity::MinRequired");
static_assert(offsetof(FJunoChainLevelValidity, RequiredPlacements) == 20, "Offset mismatch for FJunoChainLevelValidity::RequiredPlacements");
static_assert(offsetof(FJunoChainLevelValidity, bPass) == 24, "Offset mismatch for FJunoChainLevelValidity::bPass");
static_assert(offsetof(FJunoChainLevelValidity, Origins) == 32, "Offset mismatch for FJunoChainLevelValidity::Origins");

// /Script/JunoProceduralWorld.JunoCompressedActorSpawnInfo
// Kind: ScriptStruct; super: none
struct FJunoCompressedActorSpawnInfo
{
public:
    FString ActorToSpawn; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t Representation; // 0x0010 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FJunoCompressedActorSpawnInfo, ActorToSpawn) == 0, "Offset mismatch for FJunoCompressedActorSpawnInfo::ActorToSpawn");
static_assert(offsetof(FJunoCompressedActorSpawnInfo, Representation) == 16, "Offset mismatch for FJunoCompressedActorSpawnInfo::Representation");

// /Script/JunoProceduralWorld.JunoCompressedPoint
// Kind: ScriptStruct; super: none
struct FJunoCompressedPoint
{
public:
    std::uint16_t X; // 0x0000 (Size: 0x2, Type: UInt16Property)
    std::uint16_t Y; // 0x0002 (Size: 0x2, Type: UInt16Property)
    std::uint16_t Z; // 0x0004 (Size: 0x2, Type: UInt16Property)
    std::uint8_t RotationX; // 0x0006 (Size: 0x1, Type: ByteProperty)
    std::uint8_t RotationY; // 0x0007 (Size: 0x1, Type: ByteProperty)
    std::uint8_t RotationZ; // 0x0008 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0000[0x1]; // 0x0009
    std::uint16_t ActorSpawnInfoIndex; // 0x000A (Size: 0x2, Type: UInt16Property)
};

static_assert(offsetof(FJunoCompressedPoint, X) == 0, "Offset mismatch for FJunoCompressedPoint::X");
static_assert(offsetof(FJunoCompressedPoint, Y) == 2, "Offset mismatch for FJunoCompressedPoint::Y");
static_assert(offsetof(FJunoCompressedPoint, Z) == 4, "Offset mismatch for FJunoCompressedPoint::Z");
static_assert(offsetof(FJunoCompressedPoint, RotationX) == 6, "Offset mismatch for FJunoCompressedPoint::RotationX");
static_assert(offsetof(FJunoCompressedPoint, RotationY) == 7, "Offset mismatch for FJunoCompressedPoint::RotationY");
static_assert(offsetof(FJunoCompressedPoint, RotationZ) == 8, "Offset mismatch for FJunoCompressedPoint::RotationZ");
static_assert(offsetof(FJunoCompressedPoint, ActorSpawnInfoIndex) == 10, "Offset mismatch for FJunoCompressedPoint::ActorSpawnInfoIndex");

// /Script/JunoProceduralWorld.JunoCompressedPointList
// Kind: ScriptStruct; super: none
struct FJunoCompressedPointList
{
public:
    std::uint8_t BoundsMin[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t BoundsMax[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t RotationMin[0xC]; // 0x0030 (Size: 0xC, Type: StructProperty)
    std::uint8_t RotationMax[0xC]; // 0x003C (Size: 0xC, Type: StructProperty)
    TArray<void*> Points; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    std::uint16_t HighResPosCount; // 0x0058 (Size: 0x2, Type: UInt16Property)
    std::uint8_t Pad_0000[0x2]; // 0x005A
    std::int32_t Seed; // 0x005C (Size: 0x4, Type: IntProperty)
    TArray<void*> ActorSpawnInfo; // 0x0060 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Features[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoCompressedPointList, BoundsMin) == 0, "Offset mismatch for FJunoCompressedPointList::BoundsMin");
static_assert(offsetof(FJunoCompressedPointList, BoundsMax) == 24, "Offset mismatch for FJunoCompressedPointList::BoundsMax");
static_assert(offsetof(FJunoCompressedPointList, RotationMin) == 48, "Offset mismatch for FJunoCompressedPointList::RotationMin");
static_assert(offsetof(FJunoCompressedPointList, RotationMax) == 60, "Offset mismatch for FJunoCompressedPointList::RotationMax");
static_assert(offsetof(FJunoCompressedPointList, Points) == 72, "Offset mismatch for FJunoCompressedPointList::Points");
static_assert(offsetof(FJunoCompressedPointList, HighResPosCount) == 88, "Offset mismatch for FJunoCompressedPointList::HighResPosCount");
static_assert(offsetof(FJunoCompressedPointList, Seed) == 92, "Offset mismatch for FJunoCompressedPointList::Seed");
static_assert(offsetof(FJunoCompressedPointList, ActorSpawnInfo) == 96, "Offset mismatch for FJunoCompressedPointList::ActorSpawnInfo");
static_assert(offsetof(FJunoCompressedPointList, Features) == 112, "Offset mismatch for FJunoCompressedPointList::Features");

// /Script/JunoProceduralWorld.JunoCompressedTransforms
// Kind: ScriptStruct; super: none
struct FJunoCompressedTransforms
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoProceduralWorld.JunoCreateLevelParams
// Kind: ScriptStruct; super: none
struct FJunoCreateLevelParams
{
public:
    FString LevelPackageName; // 0x0000 (Size: 0x10, Type: StrProperty)
    TArray<void*> Actors; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> WorldPartitionGrids; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    void* WorldPartitionDefaultHLODLayer; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t WorldPartitionServerStreamingMode; // 0x0038 (Size: 0x1, Type: EnumProperty)
    std::uint8_t WorldPartitionServerStreamingOutMode; // 0x0039 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x6]; // 0x003A
    TSoftObjectPtr<void> TemplateWorld; // 0x0040 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FJunoCreateLevelParams, LevelPackageName) == 0, "Offset mismatch for FJunoCreateLevelParams::LevelPackageName");
static_assert(offsetof(FJunoCreateLevelParams, Actors) == 16, "Offset mismatch for FJunoCreateLevelParams::Actors");
static_assert(offsetof(FJunoCreateLevelParams, WorldPartitionGrids) == 32, "Offset mismatch for FJunoCreateLevelParams::WorldPartitionGrids");
static_assert(offsetof(FJunoCreateLevelParams, WorldPartitionDefaultHLODLayer) == 48, "Offset mismatch for FJunoCreateLevelParams::WorldPartitionDefaultHLODLayer");
static_assert(offsetof(FJunoCreateLevelParams, WorldPartitionServerStreamingMode) == 56, "Offset mismatch for FJunoCreateLevelParams::WorldPartitionServerStreamingMode");
static_assert(offsetof(FJunoCreateLevelParams, WorldPartitionServerStreamingOutMode) == 57, "Offset mismatch for FJunoCreateLevelParams::WorldPartitionServerStreamingOutMode");
static_assert(offsetof(FJunoCreateLevelParams, TemplateWorld) == 64, "Offset mismatch for FJunoCreateLevelParams::TemplateWorld");

// /Script/JunoProceduralWorld.JunoCreateLevelWorldPartitionGrid
// Kind: ScriptStruct; super: none
struct FJunoCreateLevelWorldPartitionGrid
{
public:
    std::uint8_t Name[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::int32_t CellSize; // 0x0004 (Size: 0x4, Type: IntProperty)
    float LoadingRange; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bBlockOnSlowStreaming; // 0x000C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x000D
    std::uint8_t origin[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t DebugColor[0x10]; // 0x0020 (Size: 0x10, Type: StructProperty)
    std::int32_t Priority; // 0x0030 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FJunoCreateLevelWorldPartitionGrid, Name) == 0, "Offset mismatch for FJunoCreateLevelWorldPartitionGrid::Name");
static_assert(offsetof(FJunoCreateLevelWorldPartitionGrid, CellSize) == 4, "Offset mismatch for FJunoCreateLevelWorldPartitionGrid::CellSize");
static_assert(offsetof(FJunoCreateLevelWorldPartitionGrid, LoadingRange) == 8, "Offset mismatch for FJunoCreateLevelWorldPartitionGrid::LoadingRange");
static_assert(offsetof(FJunoCreateLevelWorldPartitionGrid, bBlockOnSlowStreaming) == 12, "Offset mismatch for FJunoCreateLevelWorldPartitionGrid::bBlockOnSlowStreaming");
static_assert(offsetof(FJunoCreateLevelWorldPartitionGrid, origin) == 16, "Offset mismatch for FJunoCreateLevelWorldPartitionGrid::origin");
static_assert(offsetof(FJunoCreateLevelWorldPartitionGrid, DebugColor) == 32, "Offset mismatch for FJunoCreateLevelWorldPartitionGrid::DebugColor");
static_assert(offsetof(FJunoCreateLevelWorldPartitionGrid, Priority) == 48, "Offset mismatch for FJunoCreateLevelWorldPartitionGrid::Priority");

// /Script/JunoProceduralWorld.JunoDebugWorldTileState
// Kind: ScriptStruct; super: none
struct FJunoDebugWorldTileState
{
public:
    FString TileName; // 0x0000 (Size: 0x10, Type: StrProperty)
    TArray<void*> Levels; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJunoDebugWorldTileState, TileName) == 0, "Offset mismatch for FJunoDebugWorldTileState::TileName");
static_assert(offsetof(FJunoDebugWorldTileState, Levels) == 16, "Offset mismatch for FJunoDebugWorldTileState::Levels");

// /Script/JunoProceduralWorld.JunoGenerateTileParams
// Kind: ScriptStruct; super: none
struct FJunoGenerateTileParams
{
public:
    FString TilesToGenerate; // 0x0000 (Size: 0x10, Type: StrProperty)
    TWeakObjectPtr<void> Commandlet; // 0x0010 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FJunoGenerateTileParams, TilesToGenerate) == 0, "Offset mismatch for FJunoGenerateTileParams::TilesToGenerate");
static_assert(offsetof(FJunoGenerateTileParams, Commandlet) == 16, "Offset mismatch for FJunoGenerateTileParams::Commandlet");

// /Script/JunoProceduralWorld.JunoGeneratedCaveShellData
// Kind: ScriptStruct; super: none
struct FJunoGeneratedCaveShellData
{
public:
    std::uint8_t Transform[0x60]; // 0x0000 (Size: 0x60, Type: StructProperty)
    std::uint8_t Extent[0x18]; // 0x0060 (Size: 0x18, Type: StructProperty)
    std::uint8_t BoundsOffset[0x18]; // 0x0078 (Size: 0x18, Type: StructProperty)
    FName ShellID; // 0x0090 (Size: 0x8, Type: NameProperty)
    TArray<void*> Levels; // 0x0098 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t InstanceData[0x1]; // 0x00A8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoGeneratedCaveShellData, Transform) == 0, "Offset mismatch for FJunoGeneratedCaveShellData::Transform");
static_assert(offsetof(FJunoGeneratedCaveShellData, Extent) == 96, "Offset mismatch for FJunoGeneratedCaveShellData::Extent");
static_assert(offsetof(FJunoGeneratedCaveShellData, BoundsOffset) == 120, "Offset mismatch for FJunoGeneratedCaveShellData::BoundsOffset");
static_assert(offsetof(FJunoGeneratedCaveShellData, ShellID) == 144, "Offset mismatch for FJunoGeneratedCaveShellData::ShellID");
static_assert(offsetof(FJunoGeneratedCaveShellData, Levels) == 152, "Offset mismatch for FJunoGeneratedCaveShellData::Levels");
static_assert(offsetof(FJunoGeneratedCaveShellData, InstanceData) == 168, "Offset mismatch for FJunoGeneratedCaveShellData::InstanceData");

// /Script/JunoProceduralWorld.JunoHLODMapActorRedirectorsEntry
// Kind: ScriptStruct; super: none
struct FJunoHLODMapActorRedirectorsEntry
{
public:
    FName MapName; // 0x0000 (Size: 0x8, Type: NameProperty)
    std::uint8_t ActorRedirectors[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoHLODMapActorRedirectorsEntry, MapName) == 0, "Offset mismatch for FJunoHLODMapActorRedirectorsEntry::MapName");
static_assert(offsetof(FJunoHLODMapActorRedirectorsEntry, ActorRedirectors) == 8, "Offset mismatch for FJunoHLODMapActorRedirectorsEntry::ActorRedirectors");

// /Script/JunoProceduralWorld.JunoInstancedActorClassSettings
// Kind: ScriptStruct; super: InstancedActorsClassSettingsBase
struct FJunoInstancedActorClassSettings
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    std::uint8_t OverrideSettings[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoInstancedActorClassSettings, OverrideSettings) == 24, "Offset mismatch for FJunoInstancedActorClassSettings::OverrideSettings");

// /Script/JunoProceduralWorld.JunoInstancedActorSettings
// Kind: ScriptStruct; super: InstancedActorsSettings
struct FJunoInstancedActorSettings
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t bOverride_OverrideMaterialsWithTags; // 0x00C0 (Size: 0x1, Type: BoolProperty)
    // 0x00C0 BoolProperty bOverride_bCanBeBuiltUpon (shared storage)
    std::uint8_t bCanBeBuiltUpon; // 0x00C1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x00C2
    TArray<void*> OverrideMaterialsWithTags; // 0x00C8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJunoInstancedActorSettings, bOverride_OverrideMaterialsWithTags) == 192, "Offset mismatch for FJunoInstancedActorSettings::bOverride_OverrideMaterialsWithTags");
static_assert(offsetof(FJunoInstancedActorSettings, bCanBeBuiltUpon) == 193, "Offset mismatch for FJunoInstancedActorSettings::bCanBeBuiltUpon");
static_assert(offsetof(FJunoInstancedActorSettings, OverrideMaterialsWithTags) == 200, "Offset mismatch for FJunoInstancedActorSettings::OverrideMaterialsWithTags");

// /Script/JunoProceduralWorld.JunoLWMCaveShellInfo
// Kind: ScriptStruct; super: none
struct FJunoLWMCaveShellInfo
{
public:
    void* SpawnEntry; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FJunoLWMCaveShellInfo, SpawnEntry) == 0, "Offset mismatch for FJunoLWMCaveShellInfo::SpawnEntry");

// /Script/JunoProceduralWorld.JunoLWMCaveShellPointProviders
// Kind: ScriptStruct; super: none
struct FJunoLWMCaveShellPointProviders
{
public:
    TArray<void*> PointProviders; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJunoLWMCaveShellPointProviders, PointProviders) == 0, "Offset mismatch for FJunoLWMCaveShellPointProviders::PointProviders");

// /Script/JunoProceduralWorld.JunoLayerSwap
// Kind: ScriptStruct; super: none
struct FJunoLayerSwap
{
public:
    std::uint8_t SwapFrom[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    FName SwapTo; // 0x0004 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FJunoLayerSwap, SwapFrom) == 0, "Offset mismatch for FJunoLayerSwap::SwapFrom");
static_assert(offsetof(FJunoLayerSwap, SwapTo) == 4, "Offset mismatch for FJunoLayerSwap::SwapTo");

// /Script/JunoProceduralWorld.JunoLevelRedirector
// Kind: ScriptStruct; super: none
struct FJunoLevelRedirector
{
public:
    std::uint8_t OldName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    FName NewName; // 0x0004 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FJunoLevelRedirector, OldName) == 0, "Offset mismatch for FJunoLevelRedirector::OldName");
static_assert(offsetof(FJunoLevelRedirector, NewName) == 4, "Offset mismatch for FJunoLevelRedirector::NewName");

// /Script/JunoProceduralWorld.JunoLifecycleParameters
// Kind: ScriptStruct; super: MassConstSharedFragment
struct FJunoLifecycleParameters
{
public:
    TArray<void*> LifecyclePhases; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0000[0x1]; // 0x0010
    std::uint8_t bRepeatLifecyclePhases; // 0x0011 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FJunoLifecycleParameters, LifecyclePhases) == 0, "Offset mismatch for FJunoLifecycleParameters::LifecyclePhases");
static_assert(offsetof(FJunoLifecycleParameters, bRepeatLifecyclePhases) == 17, "Offset mismatch for FJunoLifecycleParameters::bRepeatLifecyclePhases");

// /Script/JunoProceduralWorld.JunoLifecyclePhase
// Kind: ScriptStruct; super: none
struct FJunoLifecyclePhase
{
public:
    std::uint8_t duration[0x28]; // 0x0000 (Size: 0x28, Type: StructProperty)
    std::uint8_t bOverrideMesh; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0029
    std::uint8_t Mesh[0x20]; // 0x0030 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t ApplyMeshScale; // 0x0050 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0051
    std::uint8_t MeshScale[0x18]; // 0x0058 (Size: 0x18, Type: StructProperty)
    std::uint8_t bOverrideMaterials; // 0x0070 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0071
    TArray<void*> Materials; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bOverrideCollisionEnabled; // 0x0088 (Size: 0x1, Type: BoolProperty)
    std::uint8_t CollisionEnabled; // 0x0089 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bOverrideHealth; // 0x008A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x5]; // 0x008B
    std::uint8_t Health[0x28]; // 0x0090 (Size: 0x28, Type: StructProperty)
    std::uint8_t Tag[0x8]; // 0x00B8 (Size: 0x8, Type: StructProperty)
    std::uint8_t CustomData[0x1]; // 0x00C0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoLifecyclePhase, duration) == 0, "Offset mismatch for FJunoLifecyclePhase::duration");
static_assert(offsetof(FJunoLifecyclePhase, bOverrideMesh) == 40, "Offset mismatch for FJunoLifecyclePhase::bOverrideMesh");
static_assert(offsetof(FJunoLifecyclePhase, Mesh) == 48, "Offset mismatch for FJunoLifecyclePhase::Mesh");
static_assert(offsetof(FJunoLifecyclePhase, ApplyMeshScale) == 80, "Offset mismatch for FJunoLifecyclePhase::ApplyMeshScale");
static_assert(offsetof(FJunoLifecyclePhase, MeshScale) == 88, "Offset mismatch for FJunoLifecyclePhase::MeshScale");
static_assert(offsetof(FJunoLifecyclePhase, bOverrideMaterials) == 112, "Offset mismatch for FJunoLifecyclePhase::bOverrideMaterials");
static_assert(offsetof(FJunoLifecyclePhase, Materials) == 120, "Offset mismatch for FJunoLifecyclePhase::Materials");
static_assert(offsetof(FJunoLifecyclePhase, bOverrideCollisionEnabled) == 136, "Offset mismatch for FJunoLifecyclePhase::bOverrideCollisionEnabled");
static_assert(offsetof(FJunoLifecyclePhase, CollisionEnabled) == 137, "Offset mismatch for FJunoLifecyclePhase::CollisionEnabled");
static_assert(offsetof(FJunoLifecyclePhase, bOverrideHealth) == 138, "Offset mismatch for FJunoLifecyclePhase::bOverrideHealth");
static_assert(offsetof(FJunoLifecyclePhase, Health) == 144, "Offset mismatch for FJunoLifecyclePhase::Health");
static_assert(offsetof(FJunoLifecyclePhase, Tag) == 184, "Offset mismatch for FJunoLifecyclePhase::Tag");
static_assert(offsetof(FJunoLifecyclePhase, CustomData) == 192, "Offset mismatch for FJunoLifecyclePhase::CustomData");

// /Script/JunoProceduralWorld.JunoLifecyclePhaseFragment
// Kind: ScriptStruct; super: MassFragment
struct FJunoLifecyclePhaseFragment
{
public:
    std::uint8_t PrevPhaseIndex; // 0x0000 (Size: 0x1, Type: ByteProperty)
    std::uint8_t CurrentPhaseIndex; // 0x0001 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FJunoLifecyclePhaseFragment, PrevPhaseIndex) == 0, "Offset mismatch for FJunoLifecyclePhaseFragment::PrevPhaseIndex");
static_assert(offsetof(FJunoLifecyclePhaseFragment, CurrentPhaseIndex) == 1, "Offset mismatch for FJunoLifecyclePhaseFragment::CurrentPhaseIndex");

// /Script/JunoProceduralWorld.JunoLifecyclePhaseTimeFragment
// Kind: ScriptStruct; super: MassFragment
struct FJunoLifecyclePhaseTimeFragment
{
public:
    float CurrentPhaseTimeElapsed; // 0x0000 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FJunoLifecyclePhaseTimeFragment, CurrentPhaseTimeElapsed) == 0, "Offset mismatch for FJunoLifecyclePhaseTimeFragment::CurrentPhaseTimeElapsed");

// /Script/JunoProceduralWorld.JunoLifecycleScaleFragment
// Kind: ScriptStruct; super: MassFragment
struct FJunoLifecycleScaleFragment
{
public:
    std::uint8_t FinalLifecycleScale[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoLifecycleScaleFragment, FinalLifecycleScale) == 0, "Offset mismatch for FJunoLifecycleScaleFragment::FinalLifecycleScale");

// /Script/JunoProceduralWorld.JunoLifecycleVisualizationsSharedFragment
// Kind: ScriptStruct; super: MassSharedFragment
struct FJunoLifecycleVisualizationsSharedFragment
{
public:
    TArray<void*> LifecyclePhaseVisualizations; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJunoLifecycleVisualizationsSharedFragment, LifecyclePhaseVisualizations) == 0, "Offset mismatch for FJunoLifecycleVisualizationsSharedFragment::LifecyclePhaseVisualizations");

// /Script/JunoProceduralWorld.JunoLifecycleVisualizationsSharedFragmentHashHelper
// Kind: ScriptStruct; super: MassSharedFragment
struct FJunoLifecycleVisualizationsSharedFragmentHashHelper
{
public:
    void* LifecycleComponent; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* InstancedActorsData; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FJunoLifecycleVisualizationsSharedFragmentHashHelper, LifecycleComponent) == 0, "Offset mismatch for FJunoLifecycleVisualizationsSharedFragmentHashHelper::LifecycleComponent");
static_assert(offsetof(FJunoLifecycleVisualizationsSharedFragmentHashHelper, InstancedActorsData) == 8, "Offset mismatch for FJunoLifecycleVisualizationsSharedFragmentHashHelper::InstancedActorsData");

// /Script/JunoProceduralWorld.JunoLivingWorldModifier
// Kind: ScriptStruct; super: none
struct FJunoLivingWorldModifier
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoProceduralWorld.JunoLivingWorldModifierAreaData
// Kind: ScriptStruct; super: none
struct FJunoLivingWorldModifierAreaData
{
public:
    std::uint8_t Tags[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    std::uint8_t InflationRadius[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoLivingWorldModifierAreaData, Tags) == 0, "Offset mismatch for FJunoLivingWorldModifierAreaData::Tags");
static_assert(offsetof(FJunoLivingWorldModifierAreaData, InflationRadius) == 32, "Offset mismatch for FJunoLivingWorldModifierAreaData::InflationRadius");

// /Script/JunoProceduralWorld.JunoLivingWorldStaticPointProviderClusterEntry
// Kind: ScriptStruct; super: none
struct FJunoLivingWorldStaticPointProviderClusterEntry
{
public:
    void* PointProviderTemplate; // 0x0000 (Size: 0x8, Type: ClassProperty)
    void* PointProviderLightTemplate; // 0x0008 (Size: 0x8, Type: ClassProperty)
    void* NavInvokerInfo; // 0x0010 (Size: 0x8, Type: ClassProperty)
    TArray<void*> DataList; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJunoLivingWorldStaticPointProviderClusterEntry, PointProviderTemplate) == 0, "Offset mismatch for FJunoLivingWorldStaticPointProviderClusterEntry::PointProviderTemplate");
static_assert(offsetof(FJunoLivingWorldStaticPointProviderClusterEntry, PointProviderLightTemplate) == 8, "Offset mismatch for FJunoLivingWorldStaticPointProviderClusterEntry::PointProviderLightTemplate");
static_assert(offsetof(FJunoLivingWorldStaticPointProviderClusterEntry, NavInvokerInfo) == 16, "Offset mismatch for FJunoLivingWorldStaticPointProviderClusterEntry::NavInvokerInfo");
static_assert(offsetof(FJunoLivingWorldStaticPointProviderClusterEntry, DataList) == 24, "Offset mismatch for FJunoLivingWorldStaticPointProviderClusterEntry::DataList");

// /Script/JunoProceduralWorld.JunoLivingWorldStaticPointProviderClusterEntryData
// Kind: ScriptStruct; super: none
struct FJunoLivingWorldStaticPointProviderClusterEntryData
{
public:
    std::uint8_t Location[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t Tags[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoLivingWorldStaticPointProviderClusterEntryData, Location) == 0, "Offset mismatch for FJunoLivingWorldStaticPointProviderClusterEntryData::Location");
static_assert(offsetof(FJunoLivingWorldStaticPointProviderClusterEntryData, Tags) == 24, "Offset mismatch for FJunoLivingWorldStaticPointProviderClusterEntryData::Tags");

// /Script/JunoProceduralWorld.JunoMaterialOverrideTag
// Kind: ScriptStruct; super: MassTag
struct FJunoMaterialOverrideTag
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoProceduralWorld.JunoMutatedSlot
// Kind: ScriptStruct; super: none
struct FJunoMutatedSlot
{
public:
    std::uint8_t SlotGuid[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t Location[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    std::uint8_t POIRegistryItemName[0x4]; // 0x0028 (Size: 0x4, Type: NameProperty)
    std::uint8_t Result; // 0x002C (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FJunoMutatedSlot, SlotGuid) == 0, "Offset mismatch for FJunoMutatedSlot::SlotGuid");
static_assert(offsetof(FJunoMutatedSlot, Location) == 16, "Offset mismatch for FJunoMutatedSlot::Location");
static_assert(offsetof(FJunoMutatedSlot, POIRegistryItemName) == 40, "Offset mismatch for FJunoMutatedSlot::POIRegistryItemName");
static_assert(offsetof(FJunoMutatedSlot, Result) == 44, "Offset mismatch for FJunoMutatedSlot::Result");

// /Script/JunoProceduralWorld.JunoMutationActivationCondition
// Kind: ScriptStruct; super: none
struct FJunoMutationActivationCondition
{
public:
    std::uint8_t Condition; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    FString CalendarEventName; // 0x0008 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FJunoMutationActivationCondition, Condition) == 0, "Offset mismatch for FJunoMutationActivationCondition::Condition");
static_assert(offsetof(FJunoMutationActivationCondition, CalendarEventName) == 8, "Offset mismatch for FJunoMutationActivationCondition::CalendarEventName");

// /Script/JunoProceduralWorld.JunoMutationRulesetRow
// Kind: ScriptStruct; super: TableRowBase
struct FJunoMutationRulesetRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::int32_t Priority; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x000C
    std::uint8_t ActivationCondition[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    std::uint8_t Rule[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoMutationRulesetRow, Priority) == 8, "Offset mismatch for FJunoMutationRulesetRow::Priority");
static_assert(offsetof(FJunoMutationRulesetRow, ActivationCondition) == 16, "Offset mismatch for FJunoMutationRulesetRow::ActivationCondition");
static_assert(offsetof(FJunoMutationRulesetRow, Rule) == 40, "Offset mismatch for FJunoMutationRulesetRow::Rule");

// /Script/JunoProceduralWorld.JunoPCGVolumePointDataFeatures
// Kind: ScriptStruct; super: none
struct FJunoPCGVolumePointDataFeatures
{
public:
    std::uint8_t bRotationX; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRotationY; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRotationZ; // 0x0002 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSpawnActorPathAttribute; // 0x0003 (Size: 0x1, Type: BoolProperty)
    std::uint8_t SpawnActorPathAttributeName[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    FName SpawnActorRepresentationAttributeName; // 0x0008 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FJunoPCGVolumePointDataFeatures, bRotationX) == 0, "Offset mismatch for FJunoPCGVolumePointDataFeatures::bRotationX");
static_assert(offsetof(FJunoPCGVolumePointDataFeatures, bRotationY) == 1, "Offset mismatch for FJunoPCGVolumePointDataFeatures::bRotationY");
static_assert(offsetof(FJunoPCGVolumePointDataFeatures, bRotationZ) == 2, "Offset mismatch for FJunoPCGVolumePointDataFeatures::bRotationZ");
static_assert(offsetof(FJunoPCGVolumePointDataFeatures, bSpawnActorPathAttribute) == 3, "Offset mismatch for FJunoPCGVolumePointDataFeatures::bSpawnActorPathAttribute");
static_assert(offsetof(FJunoPCGVolumePointDataFeatures, SpawnActorPathAttributeName) == 4, "Offset mismatch for FJunoPCGVolumePointDataFeatures::SpawnActorPathAttributeName");
static_assert(offsetof(FJunoPCGVolumePointDataFeatures, SpawnActorRepresentationAttributeName) == 8, "Offset mismatch for FJunoPCGVolumePointDataFeatures::SpawnActorRepresentationAttributeName");

// /Script/JunoProceduralWorld.JunoPOIBucketWeightEntry
// Kind: ScriptStruct; super: none
struct FJunoPOIBucketWeightEntry
{
public:
    std::uint8_t POITag[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    float EncounterWeight; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float CosmeticWeight; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FJunoPOIBucketWeightEntry, POITag) == 0, "Offset mismatch for FJunoPOIBucketWeightEntry::POITag");
static_assert(offsetof(FJunoPOIBucketWeightEntry, EncounterWeight) == 4, "Offset mismatch for FJunoPOIBucketWeightEntry::EncounterWeight");
static_assert(offsetof(FJunoPOIBucketWeightEntry, CosmeticWeight) == 8, "Offset mismatch for FJunoPOIBucketWeightEntry::CosmeticWeight");

// /Script/JunoProceduralWorld.JunoPOICellDistributionPersistentData
// Kind: ScriptStruct; super: none
struct FJunoPOICellDistributionPersistentData
{
public:
    TMap<void*, void*> POICount; // 0x0000 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FJunoPOICellDistributionPersistentData, POICount) == 0, "Offset mismatch for FJunoPOICellDistributionPersistentData::POICount");

// /Script/JunoProceduralWorld.JunoPOIData
// Kind: ScriptStruct; super: none
struct FJunoPOIData
{
public:
    std::uint8_t Transform[0x60]; // 0x0000 (Size: 0x60, Type: StructProperty)
    std::uint8_t Extent[0x18]; // 0x0060 (Size: 0x18, Type: StructProperty)
    std::uint8_t BoundsOffset[0x18]; // 0x0078 (Size: 0x18, Type: StructProperty)
    std::uint8_t InjectionExtent[0x18]; // 0x0090 (Size: 0x18, Type: StructProperty)
    std::uint8_t InjectionBoundsOffset[0x18]; // 0x00A8 (Size: 0x18, Type: StructProperty)
    TArray<void*> Levels; // 0x00C0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> HLODLevels; // 0x00D0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t InstanceData[0x20]; // 0x00E0 (Size: 0x20, Type: StructProperty)
    std::uint8_t EncounterCapabilities[0x20]; // 0x0100 (Size: 0x20, Type: StructProperty)
    std::int32_t EncounterVariantCount; // 0x0120 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0124
    std::uint8_t EncounterCategoryTable[0x20]; // 0x0128 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t RegistryItemName[0x4]; // 0x0148 (Size: 0x4, Type: NameProperty)
    std::uint8_t RegistryType[0x4]; // 0x014C (Size: 0x4, Type: StructProperty)
    std::int32_t PersistenceVersion; // 0x0150 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0154
    TArray<void*> Teleporters; // 0x0158 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t SlotState; // 0x0168 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bReportCreationToTelemetry; // 0x0169 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FJunoPOIData, Transform) == 0, "Offset mismatch for FJunoPOIData::Transform");
static_assert(offsetof(FJunoPOIData, Extent) == 96, "Offset mismatch for FJunoPOIData::Extent");
static_assert(offsetof(FJunoPOIData, BoundsOffset) == 120, "Offset mismatch for FJunoPOIData::BoundsOffset");
static_assert(offsetof(FJunoPOIData, InjectionExtent) == 144, "Offset mismatch for FJunoPOIData::InjectionExtent");
static_assert(offsetof(FJunoPOIData, InjectionBoundsOffset) == 168, "Offset mismatch for FJunoPOIData::InjectionBoundsOffset");
static_assert(offsetof(FJunoPOIData, Levels) == 192, "Offset mismatch for FJunoPOIData::Levels");
static_assert(offsetof(FJunoPOIData, HLODLevels) == 208, "Offset mismatch for FJunoPOIData::HLODLevels");
static_assert(offsetof(FJunoPOIData, InstanceData) == 224, "Offset mismatch for FJunoPOIData::InstanceData");
static_assert(offsetof(FJunoPOIData, EncounterCapabilities) == 256, "Offset mismatch for FJunoPOIData::EncounterCapabilities");
static_assert(offsetof(FJunoPOIData, EncounterVariantCount) == 288, "Offset mismatch for FJunoPOIData::EncounterVariantCount");
static_assert(offsetof(FJunoPOIData, EncounterCategoryTable) == 296, "Offset mismatch for FJunoPOIData::EncounterCategoryTable");
static_assert(offsetof(FJunoPOIData, RegistryItemName) == 328, "Offset mismatch for FJunoPOIData::RegistryItemName");
static_assert(offsetof(FJunoPOIData, RegistryType) == 332, "Offset mismatch for FJunoPOIData::RegistryType");
static_assert(offsetof(FJunoPOIData, PersistenceVersion) == 336, "Offset mismatch for FJunoPOIData::PersistenceVersion");
static_assert(offsetof(FJunoPOIData, Teleporters) == 344, "Offset mismatch for FJunoPOIData::Teleporters");
static_assert(offsetof(FJunoPOIData, SlotState) == 360, "Offset mismatch for FJunoPOIData::SlotState");
static_assert(offsetof(FJunoPOIData, bReportCreationToTelemetry) == 361, "Offset mismatch for FJunoPOIData::bReportCreationToTelemetry");

// /Script/JunoProceduralWorld.JunoPOIDistanceFilter
// Kind: ScriptStruct; super: none
struct FJunoPOIDistanceFilter
{
public:
    std::uint8_t OriginMode; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t DistanceFilterMode; // 0x0001 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0002
    float DistanceThreshold; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float MaxDistanceThreshold; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x000C
    std::uint8_t OriginLocation[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    std::uint8_t WorldLocationInfoTag[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoPOIDistanceFilter, OriginMode) == 0, "Offset mismatch for FJunoPOIDistanceFilter::OriginMode");
static_assert(offsetof(FJunoPOIDistanceFilter, DistanceFilterMode) == 1, "Offset mismatch for FJunoPOIDistanceFilter::DistanceFilterMode");
static_assert(offsetof(FJunoPOIDistanceFilter, DistanceThreshold) == 4, "Offset mismatch for FJunoPOIDistanceFilter::DistanceThreshold");
static_assert(offsetof(FJunoPOIDistanceFilter, MaxDistanceThreshold) == 8, "Offset mismatch for FJunoPOIDistanceFilter::MaxDistanceThreshold");
static_assert(offsetof(FJunoPOIDistanceFilter, OriginLocation) == 16, "Offset mismatch for FJunoPOIDistanceFilter::OriginLocation");
static_assert(offsetof(FJunoPOIDistanceFilter, WorldLocationInfoTag) == 40, "Offset mismatch for FJunoPOIDistanceFilter::WorldLocationInfoTag");

// /Script/JunoProceduralWorld.JunoPOIInstanceData
// Kind: ScriptStruct; super: none
struct FJunoPOIInstanceData
{
public:
    TArray<void*> Tags; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t SlotBiome; // 0x0010 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0011
    std::uint8_t CaveTypeName[0x4]; // 0x0014 (Size: 0x4, Type: NameProperty)
    FName CaveRuleName; // 0x0018 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FJunoPOIInstanceData, Tags) == 0, "Offset mismatch for FJunoPOIInstanceData::Tags");
static_assert(offsetof(FJunoPOIInstanceData, SlotBiome) == 16, "Offset mismatch for FJunoPOIInstanceData::SlotBiome");
static_assert(offsetof(FJunoPOIInstanceData, CaveTypeName) == 20, "Offset mismatch for FJunoPOIInstanceData::CaveTypeName");
static_assert(offsetof(FJunoPOIInstanceData, CaveRuleName) == 24, "Offset mismatch for FJunoPOIInstanceData::CaveRuleName");

// /Script/JunoProceduralWorld.JunoPOILayerDistributionData
// Kind: ScriptStruct; super: none
struct FJunoPOILayerDistributionData
{
public:
    TMap<void*, void*> Layers; // 0x0000 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FJunoPOILayerDistributionData, Layers) == 0, "Offset mismatch for FJunoPOILayerDistributionData::Layers");

// /Script/JunoProceduralWorld.JunoPOIManagerData
// Kind: ScriptStruct; super: none
struct FJunoPOIManagerData
{
public:
    FName Name; // 0x0000 (Size: 0x8, Type: NameProperty)
    TArray<void*> LocationHelperData; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJunoPOIManagerData, Name) == 0, "Offset mismatch for FJunoPOIManagerData::Name");
static_assert(offsetof(FJunoPOIManagerData, LocationHelperData) == 8, "Offset mismatch for FJunoPOIManagerData::LocationHelperData");

// /Script/JunoProceduralWorld.JunoPOIManagerSlot
// Kind: ScriptStruct; super: none
struct FJunoPOIManagerSlot
{
public:
    std::uint8_t Location[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t Guid[0x10]; // 0x0018 (Size: 0x10, Type: StructProperty)
    std::uint8_t Biome; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Size; // 0x0029 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x6]; // 0x002A
    TArray<void*> Tags; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t SelectionMode; // 0x0040 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0041
    std::uint8_t GameplayTags[0x1]; // 0x0048 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoPOIManagerSlot, Location) == 0, "Offset mismatch for FJunoPOIManagerSlot::Location");
static_assert(offsetof(FJunoPOIManagerSlot, Guid) == 24, "Offset mismatch for FJunoPOIManagerSlot::Guid");
static_assert(offsetof(FJunoPOIManagerSlot, Biome) == 40, "Offset mismatch for FJunoPOIManagerSlot::Biome");
static_assert(offsetof(FJunoPOIManagerSlot, Size) == 41, "Offset mismatch for FJunoPOIManagerSlot::Size");
static_assert(offsetof(FJunoPOIManagerSlot, Tags) == 48, "Offset mismatch for FJunoPOIManagerSlot::Tags");
static_assert(offsetof(FJunoPOIManagerSlot, SelectionMode) == 64, "Offset mismatch for FJunoPOIManagerSlot::SelectionMode");
static_assert(offsetof(FJunoPOIManagerSlot, GameplayTags) == 72, "Offset mismatch for FJunoPOIManagerSlot::GameplayTags");

// /Script/JunoProceduralWorld.JunoPOIOperationSettings
// Kind: ScriptStruct; super: none
struct FJunoPOIOperationSettings
{
public:
    std::uint8_t bRemovePlayerBuiltObjects; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRespectBuildBudget; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t RemovedSlotState; // 0x0002 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bIgnoreBiomeRestrictions; // 0x0003 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FJunoPOIOperationSettings, bRemovePlayerBuiltObjects) == 0, "Offset mismatch for FJunoPOIOperationSettings::bRemovePlayerBuiltObjects");
static_assert(offsetof(FJunoPOIOperationSettings, bRespectBuildBudget) == 1, "Offset mismatch for FJunoPOIOperationSettings::bRespectBuildBudget");
static_assert(offsetof(FJunoPOIOperationSettings, RemovedSlotState) == 2, "Offset mismatch for FJunoPOIOperationSettings::RemovedSlotState");
static_assert(offsetof(FJunoPOIOperationSettings, bIgnoreBiomeRestrictions) == 3, "Offset mismatch for FJunoPOIOperationSettings::bIgnoreBiomeRestrictions");

// /Script/JunoProceduralWorld.JunoPOIPreselectorAdditionalPOI
// Kind: ScriptStruct; super: none
struct FJunoPOIPreselectorAdditionalPOI
{
public:
    std::uint8_t Name[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t POIName[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    std::uint8_t Location[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t SlotGuid[0x10]; // 0x0020 (Size: 0x10, Type: StructProperty)
    std::uint8_t WorldLocationInfoTag[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoPOIPreselectorAdditionalPOI, Name) == 0, "Offset mismatch for FJunoPOIPreselectorAdditionalPOI::Name");
static_assert(offsetof(FJunoPOIPreselectorAdditionalPOI, POIName) == 4, "Offset mismatch for FJunoPOIPreselectorAdditionalPOI::POIName");
static_assert(offsetof(FJunoPOIPreselectorAdditionalPOI, Location) == 8, "Offset mismatch for FJunoPOIPreselectorAdditionalPOI::Location");
static_assert(offsetof(FJunoPOIPreselectorAdditionalPOI, SlotGuid) == 32, "Offset mismatch for FJunoPOIPreselectorAdditionalPOI::SlotGuid");
static_assert(offsetof(FJunoPOIPreselectorAdditionalPOI, WorldLocationInfoTag) == 48, "Offset mismatch for FJunoPOIPreselectorAdditionalPOI::WorldLocationInfoTag");

// /Script/JunoProceduralWorld.JunoPOIPreselectorFailedAdditionalPOI
// Kind: ScriptStruct; super: none
struct FJunoPOIPreselectorFailedAdditionalPOI
{
public:
    std::uint8_t Name[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t WorldLocationInfoTag[0x1]; // 0x0004 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoPOIPreselectorFailedAdditionalPOI, Name) == 0, "Offset mismatch for FJunoPOIPreselectorFailedAdditionalPOI::Name");
static_assert(offsetof(FJunoPOIPreselectorFailedAdditionalPOI, WorldLocationInfoTag) == 4, "Offset mismatch for FJunoPOIPreselectorFailedAdditionalPOI::WorldLocationInfoTag");

// /Script/JunoProceduralWorld.JunoPOIPreselectorFailedRarePOI
// Kind: ScriptStruct; super: none
struct FJunoPOIPreselectorFailedRarePOI
{
public:
    std::uint8_t POIName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t WorldLocationInfoTag[0x4]; // 0x0004 (Size: 0x4, Type: StructProperty)
    std::int32_t ShortfallCount; // 0x0008 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FJunoPOIPreselectorFailedRarePOI, POIName) == 0, "Offset mismatch for FJunoPOIPreselectorFailedRarePOI::POIName");
static_assert(offsetof(FJunoPOIPreselectorFailedRarePOI, WorldLocationInfoTag) == 4, "Offset mismatch for FJunoPOIPreselectorFailedRarePOI::WorldLocationInfoTag");
static_assert(offsetof(FJunoPOIPreselectorFailedRarePOI, ShortfallCount) == 8, "Offset mismatch for FJunoPOIPreselectorFailedRarePOI::ShortfallCount");

// /Script/JunoProceduralWorld.JunoPOIPreselectorMovedCaveEntrance
// Kind: ScriptStruct; super: none
struct FJunoPOIPreselectorMovedCaveEntrance
{
public:
    std::uint8_t OldSlot[0x70]; // 0x0000 (Size: 0x70, Type: StructProperty)
    std::uint8_t NewSlot[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoPOIPreselectorMovedCaveEntrance, OldSlot) == 0, "Offset mismatch for FJunoPOIPreselectorMovedCaveEntrance::OldSlot");
static_assert(offsetof(FJunoPOIPreselectorMovedCaveEntrance, NewSlot) == 112, "Offset mismatch for FJunoPOIPreselectorMovedCaveEntrance::NewSlot");

// /Script/JunoProceduralWorld.JunoPOIPreselectorParams
// Kind: ScriptStruct; super: TableRowBase
struct FJunoPOIPreselectorParams
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    float NearWorldStartCullNormalDistance; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float NearWorldStartCullCosmeticDistance; // 0x000C (Size: 0x4, Type: FloatProperty)
    float NearWorldStartCullCaveEntranceDistance; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float NearWorldStartCullRareDistance; // 0x0014 (Size: 0x4, Type: FloatProperty)
    std::int32_t MaxPOIs; // 0x0018 (Size: 0x4, Type: IntProperty)
    float POISlotDensity; // 0x001C (Size: 0x4, Type: FloatProperty)
    float CaveEntranceSlotDensity; // 0x0020 (Size: 0x4, Type: FloatProperty)
    std::int32_t MaxCaveEntrances; // 0x0024 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxOneEntranceCaves; // 0x0028 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxTwoEntranceCaves; // 0x002C (Size: 0x4, Type: IntProperty)
    std::int32_t MaxThreeEntranceCaves; // 0x0030 (Size: 0x4, Type: IntProperty)
    float OneEntranceCaveSelectionWeight; // 0x0034 (Size: 0x4, Type: FloatProperty)
    float TwoEntranceCaveSelectionWeight; // 0x0038 (Size: 0x4, Type: FloatProperty)
    float ThreeEntranceCaveSelectionWeight; // 0x003C (Size: 0x4, Type: FloatProperty)
    float MinDistanceBetweenCaveEntrances; // 0x0040 (Size: 0x4, Type: FloatProperty)
    float MinDistanceBetweenNormalPOIs; // 0x0044 (Size: 0x4, Type: FloatProperty)
    float MinDistanceBetweenCosmeticPOIs; // 0x0048 (Size: 0x4, Type: FloatProperty)
    float MinDistanceBetweenRarePOIs; // 0x004C (Size: 0x4, Type: FloatProperty)
    std::int32_t MinDesired8x8NonCosmeticSlots; // 0x0050 (Size: 0x4, Type: IntProperty)
    std::int32_t PreselectionAttempts; // 0x0054 (Size: 0x4, Type: IntProperty)
    std::uint8_t bCheckForUGC; // 0x0058 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnabled; // 0x0059 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x005A
    TArray<void*> BucketWeights; // 0x0060 (Size: 0x10, Type: ArrayProperty)
    std::int32_t BucketWeightSelectionPriority; // 0x0070 (Size: 0x4, Type: IntProperty)
    std::int32_t WeightedPOISelectionDepth; // 0x0074 (Size: 0x4, Type: IntProperty)
    std::uint8_t ValidCaveSlotBiomes[0x10]; // 0x0078 (Size: 0x10, Type: SetProperty)
    std::uint8_t ValidCaveSlotSizes[0x10]; // 0x0088 (Size: 0x10, Type: SetProperty)
    std::uint8_t bMaximizeCaveBiomeVariety; // 0x0098 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnforceMinDistanceBetweenCosmeticPOIs; // 0x0099 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOnlyPlaceOnAllowedBlockedAreas; // 0x009A (Size: 0x1, Type: BoolProperty)
    std::uint8_t LayerPOIType; // 0x009B (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FJunoPOIPreselectorParams, NearWorldStartCullNormalDistance) == 8, "Offset mismatch for FJunoPOIPreselectorParams::NearWorldStartCullNormalDistance");
static_assert(offsetof(FJunoPOIPreselectorParams, NearWorldStartCullCosmeticDistance) == 12, "Offset mismatch for FJunoPOIPreselectorParams::NearWorldStartCullCosmeticDistance");
static_assert(offsetof(FJunoPOIPreselectorParams, NearWorldStartCullCaveEntranceDistance) == 16, "Offset mismatch for FJunoPOIPreselectorParams::NearWorldStartCullCaveEntranceDistance");
static_assert(offsetof(FJunoPOIPreselectorParams, NearWorldStartCullRareDistance) == 20, "Offset mismatch for FJunoPOIPreselectorParams::NearWorldStartCullRareDistance");
static_assert(offsetof(FJunoPOIPreselectorParams, MaxPOIs) == 24, "Offset mismatch for FJunoPOIPreselectorParams::MaxPOIs");
static_assert(offsetof(FJunoPOIPreselectorParams, POISlotDensity) == 28, "Offset mismatch for FJunoPOIPreselectorParams::POISlotDensity");
static_assert(offsetof(FJunoPOIPreselectorParams, CaveEntranceSlotDensity) == 32, "Offset mismatch for FJunoPOIPreselectorParams::CaveEntranceSlotDensity");
static_assert(offsetof(FJunoPOIPreselectorParams, MaxCaveEntrances) == 36, "Offset mismatch for FJunoPOIPreselectorParams::MaxCaveEntrances");
static_assert(offsetof(FJunoPOIPreselectorParams, MaxOneEntranceCaves) == 40, "Offset mismatch for FJunoPOIPreselectorParams::MaxOneEntranceCaves");
static_assert(offsetof(FJunoPOIPreselectorParams, MaxTwoEntranceCaves) == 44, "Offset mismatch for FJunoPOIPreselectorParams::MaxTwoEntranceCaves");
static_assert(offsetof(FJunoPOIPreselectorParams, MaxThreeEntranceCaves) == 48, "Offset mismatch for FJunoPOIPreselectorParams::MaxThreeEntranceCaves");
static_assert(offsetof(FJunoPOIPreselectorParams, OneEntranceCaveSelectionWeight) == 52, "Offset mismatch for FJunoPOIPreselectorParams::OneEntranceCaveSelectionWeight");
static_assert(offsetof(FJunoPOIPreselectorParams, TwoEntranceCaveSelectionWeight) == 56, "Offset mismatch for FJunoPOIPreselectorParams::TwoEntranceCaveSelectionWeight");
static_assert(offsetof(FJunoPOIPreselectorParams, ThreeEntranceCaveSelectionWeight) == 60, "Offset mismatch for FJunoPOIPreselectorParams::ThreeEntranceCaveSelectionWeight");
static_assert(offsetof(FJunoPOIPreselectorParams, MinDistanceBetweenCaveEntrances) == 64, "Offset mismatch for FJunoPOIPreselectorParams::MinDistanceBetweenCaveEntrances");
static_assert(offsetof(FJunoPOIPreselectorParams, MinDistanceBetweenNormalPOIs) == 68, "Offset mismatch for FJunoPOIPreselectorParams::MinDistanceBetweenNormalPOIs");
static_assert(offsetof(FJunoPOIPreselectorParams, MinDistanceBetweenCosmeticPOIs) == 72, "Offset mismatch for FJunoPOIPreselectorParams::MinDistanceBetweenCosmeticPOIs");
static_assert(offsetof(FJunoPOIPreselectorParams, MinDistanceBetweenRarePOIs) == 76, "Offset mismatch for FJunoPOIPreselectorParams::MinDistanceBetweenRarePOIs");
static_assert(offsetof(FJunoPOIPreselectorParams, MinDesired8x8NonCosmeticSlots) == 80, "Offset mismatch for FJunoPOIPreselectorParams::MinDesired8x8NonCosmeticSlots");
static_assert(offsetof(FJunoPOIPreselectorParams, PreselectionAttempts) == 84, "Offset mismatch for FJunoPOIPreselectorParams::PreselectionAttempts");
static_assert(offsetof(FJunoPOIPreselectorParams, bCheckForUGC) == 88, "Offset mismatch for FJunoPOIPreselectorParams::bCheckForUGC");
static_assert(offsetof(FJunoPOIPreselectorParams, bEnabled) == 89, "Offset mismatch for FJunoPOIPreselectorParams::bEnabled");
static_assert(offsetof(FJunoPOIPreselectorParams, BucketWeights) == 96, "Offset mismatch for FJunoPOIPreselectorParams::BucketWeights");
static_assert(offsetof(FJunoPOIPreselectorParams, BucketWeightSelectionPriority) == 112, "Offset mismatch for FJunoPOIPreselectorParams::BucketWeightSelectionPriority");
static_assert(offsetof(FJunoPOIPreselectorParams, WeightedPOISelectionDepth) == 116, "Offset mismatch for FJunoPOIPreselectorParams::WeightedPOISelectionDepth");
static_assert(offsetof(FJunoPOIPreselectorParams, ValidCaveSlotBiomes) == 120, "Offset mismatch for FJunoPOIPreselectorParams::ValidCaveSlotBiomes");
static_assert(offsetof(FJunoPOIPreselectorParams, ValidCaveSlotSizes) == 136, "Offset mismatch for FJunoPOIPreselectorParams::ValidCaveSlotSizes");
static_assert(offsetof(FJunoPOIPreselectorParams, bMaximizeCaveBiomeVariety) == 152, "Offset mismatch for FJunoPOIPreselectorParams::bMaximizeCaveBiomeVariety");
static_assert(offsetof(FJunoPOIPreselectorParams, bEnforceMinDistanceBetweenCosmeticPOIs) == 153, "Offset mismatch for FJunoPOIPreselectorParams::bEnforceMinDistanceBetweenCosmeticPOIs");
static_assert(offsetof(FJunoPOIPreselectorParams, bOnlyPlaceOnAllowedBlockedAreas) == 154, "Offset mismatch for FJunoPOIPreselectorParams::bOnlyPlaceOnAllowedBlockedAreas");
static_assert(offsetof(FJunoPOIPreselectorParams, LayerPOIType) == 155, "Offset mismatch for FJunoPOIPreselectorParams::LayerPOIType");

// /Script/JunoProceduralWorld.JunoPOIPreselectorPreGenerateCave
// Kind: ScriptStruct; super: none
struct FJunoPOIPreselectorPreGenerateCave
{
public:
    std::uint8_t CaveGUID[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t CaveGenerationTags[0x20]; // 0x0010 (Size: 0x20, Type: StructProperty)
    std::uint8_t Biome; // 0x0030 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0031
    void* SurfaceTeleporterClass; // 0x0038 (Size: 0x8, Type: ClassProperty)
    std::uint8_t Bounds[0x40]; // 0x0040 (Size: 0x40, Type: OptionalProperty)
    std::int32_t Variation; // 0x0080 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FJunoPOIPreselectorPreGenerateCave, CaveGUID) == 0, "Offset mismatch for FJunoPOIPreselectorPreGenerateCave::CaveGUID");
static_assert(offsetof(FJunoPOIPreselectorPreGenerateCave, CaveGenerationTags) == 16, "Offset mismatch for FJunoPOIPreselectorPreGenerateCave::CaveGenerationTags");
static_assert(offsetof(FJunoPOIPreselectorPreGenerateCave, Biome) == 48, "Offset mismatch for FJunoPOIPreselectorPreGenerateCave::Biome");
static_assert(offsetof(FJunoPOIPreselectorPreGenerateCave, SurfaceTeleporterClass) == 56, "Offset mismatch for FJunoPOIPreselectorPreGenerateCave::SurfaceTeleporterClass");
static_assert(offsetof(FJunoPOIPreselectorPreGenerateCave, Bounds) == 64, "Offset mismatch for FJunoPOIPreselectorPreGenerateCave::Bounds");
static_assert(offsetof(FJunoPOIPreselectorPreGenerateCave, Variation) == 128, "Offset mismatch for FJunoPOIPreselectorPreGenerateCave::Variation");

// /Script/JunoProceduralWorld.JunoPOIPreselectorResults
// Kind: ScriptStruct; super: none
struct FJunoPOIPreselectorResults
{
public:
    TArray<void*> CaveSurfaceDatas; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> POIs; // 0x0010 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> MetaDatas; // 0x0020 (Size: 0x10, Type: MapProperty)
    TArray<void*> CaveResetEvents; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PreGenerateCaves; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> HandledAdditionalPOIs; // 0x0050 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> HandledRarePOIs; // 0x0060 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> MovedCaveEntrances; // 0x0070 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t CaveFixupVersion; // 0x0080 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0081
    TArray<void*> FailedAdditionalPOIs; // 0x0088 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> FailedRarePOIs; // 0x0098 (Size: 0x10, Type: ArrayProperty)
    std::int32_t NumberOf8x8NonCosmeticSlots; // 0x00A8 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00AC
    TArray<void*> DisplacedStandardPOIs; // 0x00B0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJunoPOIPreselectorResults, CaveSurfaceDatas) == 0, "Offset mismatch for FJunoPOIPreselectorResults::CaveSurfaceDatas");
static_assert(offsetof(FJunoPOIPreselectorResults, POIs) == 16, "Offset mismatch for FJunoPOIPreselectorResults::POIs");
static_assert(offsetof(FJunoPOIPreselectorResults, MetaDatas) == 32, "Offset mismatch for FJunoPOIPreselectorResults::MetaDatas");
static_assert(offsetof(FJunoPOIPreselectorResults, CaveResetEvents) == 48, "Offset mismatch for FJunoPOIPreselectorResults::CaveResetEvents");
static_assert(offsetof(FJunoPOIPreselectorResults, PreGenerateCaves) == 64, "Offset mismatch for FJunoPOIPreselectorResults::PreGenerateCaves");
static_assert(offsetof(FJunoPOIPreselectorResults, HandledAdditionalPOIs) == 80, "Offset mismatch for FJunoPOIPreselectorResults::HandledAdditionalPOIs");
static_assert(offsetof(FJunoPOIPreselectorResults, HandledRarePOIs) == 96, "Offset mismatch for FJunoPOIPreselectorResults::HandledRarePOIs");
static_assert(offsetof(FJunoPOIPreselectorResults, MovedCaveEntrances) == 112, "Offset mismatch for FJunoPOIPreselectorResults::MovedCaveEntrances");
static_assert(offsetof(FJunoPOIPreselectorResults, CaveFixupVersion) == 128, "Offset mismatch for FJunoPOIPreselectorResults::CaveFixupVersion");
static_assert(offsetof(FJunoPOIPreselectorResults, FailedAdditionalPOIs) == 136, "Offset mismatch for FJunoPOIPreselectorResults::FailedAdditionalPOIs");
static_assert(offsetof(FJunoPOIPreselectorResults, FailedRarePOIs) == 152, "Offset mismatch for FJunoPOIPreselectorResults::FailedRarePOIs");
static_assert(offsetof(FJunoPOIPreselectorResults, NumberOf8x8NonCosmeticSlots) == 168, "Offset mismatch for FJunoPOIPreselectorResults::NumberOf8x8NonCosmeticSlots");
static_assert(offsetof(FJunoPOIPreselectorResults, DisplacedStandardPOIs) == 176, "Offset mismatch for FJunoPOIPreselectorResults::DisplacedStandardPOIs");

// /Script/JunoProceduralWorld.JunoPOIPreselectorSlots
// Kind: ScriptStruct; super: none
struct FJunoPOIPreselectorSlots
{
public:
    TArray<void*> Slots; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJunoPOIPreselectorSlots, Slots) == 0, "Offset mismatch for FJunoPOIPreselectorSlots::Slots");

// /Script/JunoProceduralWorld.JunoPOIRegistryItem
// Kind: ScriptStruct; super: none
struct FJunoPOIRegistryItem
{
public:
    std::uint8_t Key[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t Value[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoPOIRegistryItem, Key) == 0, "Offset mismatch for FJunoPOIRegistryItem::Key");
static_assert(offsetof(FJunoPOIRegistryItem, Value) == 8, "Offset mismatch for FJunoPOIRegistryItem::Value");

// /Script/JunoProceduralWorld.JunoPOIRegistryNameRedirector
// Kind: ScriptStruct; super: none
struct FJunoPOIRegistryNameRedirector
{
public:
    std::uint8_t OldName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    FName NewName; // 0x0004 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FJunoPOIRegistryNameRedirector, OldName) == 0, "Offset mismatch for FJunoPOIRegistryNameRedirector::OldName");
static_assert(offsetof(FJunoPOIRegistryNameRedirector, NewName) == 4, "Offset mismatch for FJunoPOIRegistryNameRedirector::NewName");

// /Script/JunoProceduralWorld.JunoPOISelectorCache
// Kind: ScriptStruct; super: none
struct FJunoPOISelectorCache
{
public:
    TArray<void*> ItemsByType; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t DataRegistry[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoPOISelectorCache, ItemsByType) == 0, "Offset mismatch for FJunoPOISelectorCache::ItemsByType");
static_assert(offsetof(FJunoPOISelectorCache, DataRegistry) == 16, "Offset mismatch for FJunoPOISelectorCache::DataRegistry");

// /Script/JunoProceduralWorld.JunoPOISelectorCacheBiomeBucket
// Kind: ScriptStruct; super: none
struct FJunoPOISelectorCacheBiomeBucket
{
public:
    TArray<void*> ItemsBySize; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJunoPOISelectorCacheBiomeBucket, ItemsBySize) == 0, "Offset mismatch for FJunoPOISelectorCacheBiomeBucket::ItemsBySize");

// /Script/JunoProceduralWorld.JunoPOISelectorCacheSizeBucket
// Kind: ScriptStruct; super: none
struct FJunoPOISelectorCacheSizeBucket
{
public:
    TArray<void*> Items; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TSet<void*> Sizes; // 0x0010 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(FJunoPOISelectorCacheSizeBucket, Items) == 0, "Offset mismatch for FJunoPOISelectorCacheSizeBucket::Items");
static_assert(offsetof(FJunoPOISelectorCacheSizeBucket, Sizes) == 16, "Offset mismatch for FJunoPOISelectorCacheSizeBucket::Sizes");

// /Script/JunoProceduralWorld.JunoPOISelectorCacheTypeBucket
// Kind: ScriptStruct; super: none
struct FJunoPOISelectorCacheTypeBucket
{
public:
    TArray<void*> ItemsByBiome; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJunoPOISelectorCacheTypeBucket, ItemsByBiome) == 0, "Offset mismatch for FJunoPOISelectorCacheTypeBucket::ItemsByBiome");

// /Script/JunoProceduralWorld.JunoPOISelectorParams
// Kind: ScriptStruct; super: none
struct FJunoPOISelectorParams
{
public:
    std::uint8_t Guid[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t Size; // 0x0010 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Biome; // 0x0011 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x6]; // 0x0012
    TArray<void*> SlotTags; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    void* POIManager; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FJunoPOISelectorParams, Guid) == 0, "Offset mismatch for FJunoPOISelectorParams::Guid");
static_assert(offsetof(FJunoPOISelectorParams, Size) == 16, "Offset mismatch for FJunoPOISelectorParams::Size");
static_assert(offsetof(FJunoPOISelectorParams, Biome) == 17, "Offset mismatch for FJunoPOISelectorParams::Biome");
static_assert(offsetof(FJunoPOISelectorParams, SlotTags) == 24, "Offset mismatch for FJunoPOISelectorParams::SlotTags");
static_assert(offsetof(FJunoPOISelectorParams, POIManager) == 40, "Offset mismatch for FJunoPOISelectorParams::POIManager");

// /Script/JunoProceduralWorld.JunoPOISelectorTeleporterClass
// Kind: ScriptStruct; super: none
struct FJunoPOISelectorTeleporterClass
{
public:
    std::uint8_t Biome; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    void* Teleporter; // 0x0008 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(FJunoPOISelectorTeleporterClass, Biome) == 0, "Offset mismatch for FJunoPOISelectorTeleporterClass::Biome");
static_assert(offsetof(FJunoPOISelectorTeleporterClass, Teleporter) == 8, "Offset mismatch for FJunoPOISelectorTeleporterClass::Teleporter");

// /Script/JunoProceduralWorld.JunoPOISizeFilter
// Kind: ScriptStruct; super: none
struct FJunoPOISizeFilter
{
public:
    std::uint8_t Mode; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    TArray<void*> SizeList; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJunoPOISizeFilter, Mode) == 0, "Offset mismatch for FJunoPOISizeFilter::Mode");
static_assert(offsetof(FJunoPOISizeFilter, SizeList) == 8, "Offset mismatch for FJunoPOISizeFilter::SizeList");

// /Script/JunoProceduralWorld.JunoPOISlotFilter
// Kind: ScriptStruct; super: none
struct FJunoPOISlotFilter
{
public:
    std::uint8_t AllowedBiomes[0x10]; // 0x0000 (Size: 0x10, Type: SetProperty)
    std::uint8_t ExcludedBiomes[0x10]; // 0x0010 (Size: 0x10, Type: SetProperty)
    TArray<void*> AllowedPOINames; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t SizeFilter[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    std::uint8_t RequiredSlotGameplayTags[0x20]; // 0x0048 (Size: 0x20, Type: StructProperty)
    std::uint8_t ExcludedSlotGameplayTags[0x20]; // 0x0068 (Size: 0x20, Type: StructProperty)
    std::uint8_t TagQuery[0x48]; // 0x0088 (Size: 0x48, Type: StructProperty)
    TArray<void*> DistanceFilters; // 0x00D0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t SortOperator[0x10]; // 0x00E0 (Size: 0x10, Type: StructProperty)
    float MaxBuildBudgetUsagePercent; // 0x00F0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t SlotInclusionMode; // 0x00F4 (Size: 0x1, Type: EnumProperty)
    std::uint8_t CaveFilterMode; // 0x00F5 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x2]; // 0x00F6
    std::uint8_t AllowedPOITypes[0x10]; // 0x00F8 (Size: 0x10, Type: SetProperty)
    std::uint8_t DangerousOptions[0x1]; // 0x0108 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoPOISlotFilter, AllowedBiomes) == 0, "Offset mismatch for FJunoPOISlotFilter::AllowedBiomes");
static_assert(offsetof(FJunoPOISlotFilter, ExcludedBiomes) == 16, "Offset mismatch for FJunoPOISlotFilter::ExcludedBiomes");
static_assert(offsetof(FJunoPOISlotFilter, AllowedPOINames) == 32, "Offset mismatch for FJunoPOISlotFilter::AllowedPOINames");
static_assert(offsetof(FJunoPOISlotFilter, SizeFilter) == 48, "Offset mismatch for FJunoPOISlotFilter::SizeFilter");
static_assert(offsetof(FJunoPOISlotFilter, RequiredSlotGameplayTags) == 72, "Offset mismatch for FJunoPOISlotFilter::RequiredSlotGameplayTags");
static_assert(offsetof(FJunoPOISlotFilter, ExcludedSlotGameplayTags) == 104, "Offset mismatch for FJunoPOISlotFilter::ExcludedSlotGameplayTags");
static_assert(offsetof(FJunoPOISlotFilter, TagQuery) == 136, "Offset mismatch for FJunoPOISlotFilter::TagQuery");
static_assert(offsetof(FJunoPOISlotFilter, DistanceFilters) == 208, "Offset mismatch for FJunoPOISlotFilter::DistanceFilters");
static_assert(offsetof(FJunoPOISlotFilter, SortOperator) == 224, "Offset mismatch for FJunoPOISlotFilter::SortOperator");
static_assert(offsetof(FJunoPOISlotFilter, MaxBuildBudgetUsagePercent) == 240, "Offset mismatch for FJunoPOISlotFilter::MaxBuildBudgetUsagePercent");
static_assert(offsetof(FJunoPOISlotFilter, SlotInclusionMode) == 244, "Offset mismatch for FJunoPOISlotFilter::SlotInclusionMode");
static_assert(offsetof(FJunoPOISlotFilter, CaveFilterMode) == 245, "Offset mismatch for FJunoPOISlotFilter::CaveFilterMode");
static_assert(offsetof(FJunoPOISlotFilter, AllowedPOITypes) == 248, "Offset mismatch for FJunoPOISlotFilter::AllowedPOITypes");
static_assert(offsetof(FJunoPOISlotFilter, DangerousOptions) == 264, "Offset mismatch for FJunoPOISlotFilter::DangerousOptions");

// /Script/JunoProceduralWorld.JunoPOISlotFilterDangerousOptions
// Kind: ScriptStruct; super: none
struct FJunoPOISlotFilterDangerousOptions
{
public:
    std::uint8_t bIgnoreSafeZones; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bReturnAdditionalSlots; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIncludeTaggedSlots; // 0x0002 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIncludeLocationsInsideBlockers; // 0x0003 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FJunoPOISlotFilterDangerousOptions, bIgnoreSafeZones) == 0, "Offset mismatch for FJunoPOISlotFilterDangerousOptions::bIgnoreSafeZones");
static_assert(offsetof(FJunoPOISlotFilterDangerousOptions, bReturnAdditionalSlots) == 1, "Offset mismatch for FJunoPOISlotFilterDangerousOptions::bReturnAdditionalSlots");
static_assert(offsetof(FJunoPOISlotFilterDangerousOptions, bIncludeTaggedSlots) == 2, "Offset mismatch for FJunoPOISlotFilterDangerousOptions::bIncludeTaggedSlots");
static_assert(offsetof(FJunoPOISlotFilterDangerousOptions, bIncludeLocationsInsideBlockers) == 3, "Offset mismatch for FJunoPOISlotFilterDangerousOptions::bIncludeLocationsInsideBlockers");

// /Script/JunoProceduralWorld.JunoPOISlotMetaData
// Kind: ScriptStruct; super: none
struct FJunoPOISlotMetaData
{
public:
    std::uint8_t State; // 0x0000 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FJunoPOISlotMetaData, State) == 0, "Offset mismatch for FJunoPOISlotMetaData::State");

// /Script/JunoProceduralWorld.JunoPOISlotQueryResult
// Kind: ScriptStruct; super: none
struct FJunoPOISlotQueryResult
{
public:
    std::uint8_t Slot[0x70]; // 0x0000 (Size: 0x70, Type: StructProperty)
    void* POIVolume; // 0x0070 (Size: 0x8, Type: ObjectProperty)
    double DistanceFromOrigin; // 0x0078 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bHasPOIType; // 0x0080 (Size: 0x1, Type: BoolProperty)
    std::uint8_t POIType; // 0x0081 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bIsInsideBlocker; // 0x0082 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsAdditionalSlot; // 0x0083 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FJunoPOISlotQueryResult, Slot) == 0, "Offset mismatch for FJunoPOISlotQueryResult::Slot");
static_assert(offsetof(FJunoPOISlotQueryResult, POIVolume) == 112, "Offset mismatch for FJunoPOISlotQueryResult::POIVolume");
static_assert(offsetof(FJunoPOISlotQueryResult, DistanceFromOrigin) == 120, "Offset mismatch for FJunoPOISlotQueryResult::DistanceFromOrigin");
static_assert(offsetof(FJunoPOISlotQueryResult, bHasPOIType) == 128, "Offset mismatch for FJunoPOISlotQueryResult::bHasPOIType");
static_assert(offsetof(FJunoPOISlotQueryResult, POIType) == 129, "Offset mismatch for FJunoPOISlotQueryResult::POIType");
static_assert(offsetof(FJunoPOISlotQueryResult, bIsInsideBlocker) == 130, "Offset mismatch for FJunoPOISlotQueryResult::bIsInsideBlocker");
static_assert(offsetof(FJunoPOISlotQueryResult, bIsAdditionalSlot) == 131, "Offset mismatch for FJunoPOISlotQueryResult::bIsAdditionalSlot");

// /Script/JunoProceduralWorld.JunoPOITeleporter
// Kind: ScriptStruct; super: none
struct FJunoPOITeleporter
{
public:
    void* TeleporterClass; // 0x0000 (Size: 0x8, Type: ClassProperty)
    std::uint8_t Pad_0000[0x8]; // 0x0008
    std::uint8_t Transform[0x60]; // 0x0010 (Size: 0x60, Type: StructProperty)
    std::uint8_t CaveGenerationTags[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoPOITeleporter, TeleporterClass) == 0, "Offset mismatch for FJunoPOITeleporter::TeleporterClass");
static_assert(offsetof(FJunoPOITeleporter, Transform) == 16, "Offset mismatch for FJunoPOITeleporter::Transform");
static_assert(offsetof(FJunoPOITeleporter, CaveGenerationTags) == 112, "Offset mismatch for FJunoPOITeleporter::CaveGenerationTags");

// /Script/JunoProceduralWorld.JunoPOITileData
// Kind: ScriptStruct; super: TableRowBase
struct FJunoPOITileData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> Managers; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJunoPOITileData, Managers) == 8, "Offset mismatch for FJunoPOITileData::Managers");

// /Script/JunoProceduralWorld.JunoPointProviderConditionalTagsRow
// Kind: ScriptStruct; super: TableRowBase
struct FJunoPointProviderConditionalTagsRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Biome; // 0x0008 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0009
    std::uint8_t TileTagQuery[0x48]; // 0x0010 (Size: 0x48, Type: StructProperty)
    std::uint8_t TagsToApply[0x1]; // 0x0058 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoPointProviderConditionalTagsRow, Biome) == 8, "Offset mismatch for FJunoPointProviderConditionalTagsRow::Biome");
static_assert(offsetof(FJunoPointProviderConditionalTagsRow, TileTagQuery) == 16, "Offset mismatch for FJunoPointProviderConditionalTagsRow::TileTagQuery");
static_assert(offsetof(FJunoPointProviderConditionalTagsRow, TagsToApply) == 88, "Offset mismatch for FJunoPointProviderConditionalTagsRow::TagsToApply");

// /Script/JunoProceduralWorld.JunoRandomTableKeysIterator
// Kind: ScriptStruct; super: none
struct FJunoRandomTableKeysIterator
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoProceduralWorld.JunoReservedAreaPersistentData
// Kind: ScriptStruct; super: none
struct FJunoReservedAreaPersistentData
{
public:
    TMap<void*, void*> Tiles; // 0x0000 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FJunoReservedAreaPersistentData, Tiles) == 0, "Offset mismatch for FJunoReservedAreaPersistentData::Tiles");

// /Script/JunoProceduralWorld.JunoRoadAINavigationClusterEntry
// Kind: ScriptStruct; super: none
struct FJunoRoadAINavigationClusterEntry
{
public:
    void* PatrolPathTemplate; // 0x0000 (Size: 0x8, Type: ClassProperty)
    std::int32_t SharedPointEntryIndex; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::int32_t StartSharedPointIndex; // 0x000C (Size: 0x4, Type: IntProperty)
    std::int32_t EndSharedPointIndex; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0014
    TArray<void*> InternalPoints; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    float Width; // 0x0028 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x002C
    std::uint8_t Tags[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoRoadAINavigationClusterEntry, PatrolPathTemplate) == 0, "Offset mismatch for FJunoRoadAINavigationClusterEntry::PatrolPathTemplate");
static_assert(offsetof(FJunoRoadAINavigationClusterEntry, SharedPointEntryIndex) == 8, "Offset mismatch for FJunoRoadAINavigationClusterEntry::SharedPointEntryIndex");
static_assert(offsetof(FJunoRoadAINavigationClusterEntry, StartSharedPointIndex) == 12, "Offset mismatch for FJunoRoadAINavigationClusterEntry::StartSharedPointIndex");
static_assert(offsetof(FJunoRoadAINavigationClusterEntry, EndSharedPointIndex) == 16, "Offset mismatch for FJunoRoadAINavigationClusterEntry::EndSharedPointIndex");
static_assert(offsetof(FJunoRoadAINavigationClusterEntry, InternalPoints) == 24, "Offset mismatch for FJunoRoadAINavigationClusterEntry::InternalPoints");
static_assert(offsetof(FJunoRoadAINavigationClusterEntry, Width) == 40, "Offset mismatch for FJunoRoadAINavigationClusterEntry::Width");
static_assert(offsetof(FJunoRoadAINavigationClusterEntry, Tags) == 48, "Offset mismatch for FJunoRoadAINavigationClusterEntry::Tags");

// /Script/JunoProceduralWorld.JunoRoadAINavigationClusterSharedPointsEntry
// Kind: ScriptStruct; super: none
struct FJunoRoadAINavigationClusterSharedPointsEntry
{
public:
    void* PatrolPointTemplate; // 0x0000 (Size: 0x8, Type: ClassProperty)
    TArray<void*> Points; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SpawnedPointsIndex; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJunoRoadAINavigationClusterSharedPointsEntry, PatrolPointTemplate) == 0, "Offset mismatch for FJunoRoadAINavigationClusterSharedPointsEntry::PatrolPointTemplate");
static_assert(offsetof(FJunoRoadAINavigationClusterSharedPointsEntry, Points) == 8, "Offset mismatch for FJunoRoadAINavigationClusterSharedPointsEntry::Points");
static_assert(offsetof(FJunoRoadAINavigationClusterSharedPointsEntry, SpawnedPointsIndex) == 24, "Offset mismatch for FJunoRoadAINavigationClusterSharedPointsEntry::SpawnedPointsIndex");

// /Script/JunoProceduralWorld.JunoRuleEntry
// Kind: ScriptStruct; super: none
struct FJunoRuleEntry
{
public:
    std::uint8_t bEnabled; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    std::uint8_t TileFilter[0xA0]; // 0x0008 (Size: 0xA0, Type: StructProperty)
    std::uint8_t SlotFilter[0x110]; // 0x00A8 (Size: 0x110, Type: StructProperty)
    std::int32_t MinRequiredSlots; // 0x01B8 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x01BC
    std::uint8_t Behavior[0x10]; // 0x01C0 (Size: 0x10, Type: StructProperty)
    std::int32_t MaxSuccessfulApplications; // 0x01D0 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x01D4
    std::uint8_t SubRule[0x1]; // 0x01D8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoRuleEntry, bEnabled) == 0, "Offset mismatch for FJunoRuleEntry::bEnabled");
static_assert(offsetof(FJunoRuleEntry, TileFilter) == 8, "Offset mismatch for FJunoRuleEntry::TileFilter");
static_assert(offsetof(FJunoRuleEntry, SlotFilter) == 168, "Offset mismatch for FJunoRuleEntry::SlotFilter");
static_assert(offsetof(FJunoRuleEntry, MinRequiredSlots) == 440, "Offset mismatch for FJunoRuleEntry::MinRequiredSlots");
static_assert(offsetof(FJunoRuleEntry, Behavior) == 448, "Offset mismatch for FJunoRuleEntry::Behavior");
static_assert(offsetof(FJunoRuleEntry, MaxSuccessfulApplications) == 464, "Offset mismatch for FJunoRuleEntry::MaxSuccessfulApplications");
static_assert(offsetof(FJunoRuleEntry, SubRule) == 472, "Offset mismatch for FJunoRuleEntry::SubRule");

// /Script/JunoProceduralWorld.JunoSlotSortOperator
// Kind: ScriptStruct; super: none
struct FJunoSlotSortOperator
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoProceduralWorld.JunoSlotSortOperator_BuildBudget
// Kind: ScriptStruct; super: JunoSlotSortOperator
struct FJunoSlotSortOperator_BuildBudget
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t bMostUsedFirst; // 0x0008 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FJunoSlotSortOperator_BuildBudget, bMostUsedFirst) == 8, "Offset mismatch for FJunoSlotSortOperator_BuildBudget::bMostUsedFirst");

// /Script/JunoProceduralWorld.JunoSlotSortOperator_Composite
// Kind: ScriptStruct; super: JunoSlotSortOperator
struct FJunoSlotSortOperator_Composite
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> WeightedOperators; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJunoSlotSortOperator_Composite, WeightedOperators) == 8, "Offset mismatch for FJunoSlotSortOperator_Composite::WeightedOperators");

// /Script/JunoProceduralWorld.JunoSlotSortOperator_Distance
// Kind: ScriptStruct; super: JunoSlotSortOperator
struct FJunoSlotSortOperator_Distance
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    float ReferenceDistance; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bFarthestFirst; // 0x000C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FJunoSlotSortOperator_Distance, ReferenceDistance) == 8, "Offset mismatch for FJunoSlotSortOperator_Distance::ReferenceDistance");
static_assert(offsetof(FJunoSlotSortOperator_Distance, bFarthestFirst) == 12, "Offset mismatch for FJunoSlotSortOperator_Distance::bFarthestFirst");

// /Script/JunoProceduralWorld.JunoSlotSortOperator_LeastUGC
// Kind: ScriptStruct; super: JunoSlotSortOperator
struct FJunoSlotSortOperator_LeastUGC
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    float ReferencePieceCount; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bPlayerBuiltOnly; // 0x000C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bMostBuiltFirst; // 0x000D (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FJunoSlotSortOperator_LeastUGC, ReferencePieceCount) == 8, "Offset mismatch for FJunoSlotSortOperator_LeastUGC::ReferencePieceCount");
static_assert(offsetof(FJunoSlotSortOperator_LeastUGC, bPlayerBuiltOnly) == 12, "Offset mismatch for FJunoSlotSortOperator_LeastUGC::bPlayerBuiltOnly");
static_assert(offsetof(FJunoSlotSortOperator_LeastUGC, bMostBuiltFirst) == 13, "Offset mismatch for FJunoSlotSortOperator_LeastUGC::bMostBuiltFirst");

// /Script/JunoProceduralWorld.JunoSlotValidityPreview
// Kind: ScriptStruct; super: none
struct FJunoSlotValidityPreview
{
public:
    std::int32_t Depth; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t SlotGuid[0x14]; // 0x0004 (Size: 0x14, Type: StructProperty)
    std::uint8_t Location[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t bValid; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasVolumeBounds; // 0x0031 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x6]; // 0x0032
    std::uint8_t VolumeOrigin[0x18]; // 0x0038 (Size: 0x18, Type: StructProperty)
    std::uint8_t VolumeExtents[0x18]; // 0x0050 (Size: 0x18, Type: StructProperty)
    std::uint8_t POIRegistryItemName[0x4]; // 0x0068 (Size: 0x4, Type: NameProperty)
    std::int32_t LevelIndex; // 0x006C (Size: 0x4, Type: IntProperty)
    std::uint8_t Biome; // 0x0070 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Size; // 0x0071 (Size: 0x1, Type: EnumProperty)
    std::uint8_t SelectionMode; // 0x0072 (Size: 0x1, Type: EnumProperty)
    std::uint8_t State; // 0x0073 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bHasState; // 0x0074 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0075
    TArray<void*> Tags; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t GameplayTags[0x20]; // 0x0088 (Size: 0x20, Type: StructProperty)
    std::uint8_t TileLocation[0x18]; // 0x00A8 (Size: 0x18, Type: StructProperty)
    double SortScore; // 0x00C0 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FJunoSlotValidityPreview, Depth) == 0, "Offset mismatch for FJunoSlotValidityPreview::Depth");
static_assert(offsetof(FJunoSlotValidityPreview, SlotGuid) == 4, "Offset mismatch for FJunoSlotValidityPreview::SlotGuid");
static_assert(offsetof(FJunoSlotValidityPreview, Location) == 24, "Offset mismatch for FJunoSlotValidityPreview::Location");
static_assert(offsetof(FJunoSlotValidityPreview, bValid) == 48, "Offset mismatch for FJunoSlotValidityPreview::bValid");
static_assert(offsetof(FJunoSlotValidityPreview, bHasVolumeBounds) == 49, "Offset mismatch for FJunoSlotValidityPreview::bHasVolumeBounds");
static_assert(offsetof(FJunoSlotValidityPreview, VolumeOrigin) == 56, "Offset mismatch for FJunoSlotValidityPreview::VolumeOrigin");
static_assert(offsetof(FJunoSlotValidityPreview, VolumeExtents) == 80, "Offset mismatch for FJunoSlotValidityPreview::VolumeExtents");
static_assert(offsetof(FJunoSlotValidityPreview, POIRegistryItemName) == 104, "Offset mismatch for FJunoSlotValidityPreview::POIRegistryItemName");
static_assert(offsetof(FJunoSlotValidityPreview, LevelIndex) == 108, "Offset mismatch for FJunoSlotValidityPreview::LevelIndex");
static_assert(offsetof(FJunoSlotValidityPreview, Biome) == 112, "Offset mismatch for FJunoSlotValidityPreview::Biome");
static_assert(offsetof(FJunoSlotValidityPreview, Size) == 113, "Offset mismatch for FJunoSlotValidityPreview::Size");
static_assert(offsetof(FJunoSlotValidityPreview, SelectionMode) == 114, "Offset mismatch for FJunoSlotValidityPreview::SelectionMode");
static_assert(offsetof(FJunoSlotValidityPreview, State) == 115, "Offset mismatch for FJunoSlotValidityPreview::State");
static_assert(offsetof(FJunoSlotValidityPreview, bHasState) == 116, "Offset mismatch for FJunoSlotValidityPreview::bHasState");
static_assert(offsetof(FJunoSlotValidityPreview, Tags) == 120, "Offset mismatch for FJunoSlotValidityPreview::Tags");
static_assert(offsetof(FJunoSlotValidityPreview, GameplayTags) == 136, "Offset mismatch for FJunoSlotValidityPreview::GameplayTags");
static_assert(offsetof(FJunoSlotValidityPreview, TileLocation) == 168, "Offset mismatch for FJunoSlotValidityPreview::TileLocation");
static_assert(offsetof(FJunoSlotValidityPreview, SortScore) == 192, "Offset mismatch for FJunoSlotValidityPreview::SortScore");

// /Script/JunoProceduralWorld.JunoTaggedMaterialOverride
// Kind: ScriptStruct; super: none
struct FJunoTaggedMaterialOverride
{
public:
    std::uint8_t Tag[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    TArray<void*> OverrideMaterials; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJunoTaggedMaterialOverride, Tag) == 0, "Offset mismatch for FJunoTaggedMaterialOverride::Tag");
static_assert(offsetof(FJunoTaggedMaterialOverride, OverrideMaterials) == 8, "Offset mismatch for FJunoTaggedMaterialOverride::OverrideMaterials");

// /Script/JunoProceduralWorld.JunoTerrainGenerationConfiguration
// Kind: ScriptStruct; super: none
struct FJunoTerrainGenerationConfiguration
{
public:
    float GenerateStart; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float GenerateRemove; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x20]; // 0x0008
    double GenerationFlushDistance; // 0x0028 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t InfiniteRange; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t EnabledServer; // 0x0031 (Size: 0x1, Type: BoolProperty)
    std::uint8_t EnabledClient; // 0x0032 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FJunoTerrainGenerationConfiguration, GenerateStart) == 0, "Offset mismatch for FJunoTerrainGenerationConfiguration::GenerateStart");
static_assert(offsetof(FJunoTerrainGenerationConfiguration, GenerateRemove) == 4, "Offset mismatch for FJunoTerrainGenerationConfiguration::GenerateRemove");
static_assert(offsetof(FJunoTerrainGenerationConfiguration, GenerationFlushDistance) == 40, "Offset mismatch for FJunoTerrainGenerationConfiguration::GenerationFlushDistance");
static_assert(offsetof(FJunoTerrainGenerationConfiguration, InfiniteRange) == 48, "Offset mismatch for FJunoTerrainGenerationConfiguration::InfiniteRange");
static_assert(offsetof(FJunoTerrainGenerationConfiguration, EnabledServer) == 49, "Offset mismatch for FJunoTerrainGenerationConfiguration::EnabledServer");
static_assert(offsetof(FJunoTerrainGenerationConfiguration, EnabledClient) == 50, "Offset mismatch for FJunoTerrainGenerationConfiguration::EnabledClient");

// /Script/JunoProceduralWorld.JunoTerrainWaterInformation
// Kind: ScriptStruct; super: none
struct FJunoTerrainWaterInformation
{
public:
    std::uint8_t Location[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    float WaterSurfaceHeight; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float TerrainHeight; // 0x001C (Size: 0x4, Type: FloatProperty)
    float WaterDepth; // 0x0020 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x64]; // 0x0024
    std::uint8_t WaterType; // 0x0088 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0089
    std::uint8_t Direction[0x18]; // 0x0090 (Size: 0x18, Type: StructProperty)
    float Distance; // 0x00A8 (Size: 0x4, Type: FloatProperty)
    std::int32_t DirectionMaskIndex; // 0x00AC (Size: 0x4, Type: IntProperty)
    std::uint8_t bWasNearMiss; // 0x00B0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFoundWater; // 0x00B1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x00B2
    float NearMissEstimatedDistance; // 0x00B4 (Size: 0x4, Type: FloatProperty)
    void* FoundWaterBody; // 0x00B8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FJunoTerrainWaterInformation, Location) == 0, "Offset mismatch for FJunoTerrainWaterInformation::Location");
static_assert(offsetof(FJunoTerrainWaterInformation, WaterSurfaceHeight) == 24, "Offset mismatch for FJunoTerrainWaterInformation::WaterSurfaceHeight");
static_assert(offsetof(FJunoTerrainWaterInformation, TerrainHeight) == 28, "Offset mismatch for FJunoTerrainWaterInformation::TerrainHeight");
static_assert(offsetof(FJunoTerrainWaterInformation, WaterDepth) == 32, "Offset mismatch for FJunoTerrainWaterInformation::WaterDepth");
static_assert(offsetof(FJunoTerrainWaterInformation, WaterType) == 136, "Offset mismatch for FJunoTerrainWaterInformation::WaterType");
static_assert(offsetof(FJunoTerrainWaterInformation, Direction) == 144, "Offset mismatch for FJunoTerrainWaterInformation::Direction");
static_assert(offsetof(FJunoTerrainWaterInformation, Distance) == 168, "Offset mismatch for FJunoTerrainWaterInformation::Distance");
static_assert(offsetof(FJunoTerrainWaterInformation, DirectionMaskIndex) == 172, "Offset mismatch for FJunoTerrainWaterInformation::DirectionMaskIndex");
static_assert(offsetof(FJunoTerrainWaterInformation, bWasNearMiss) == 176, "Offset mismatch for FJunoTerrainWaterInformation::bWasNearMiss");
static_assert(offsetof(FJunoTerrainWaterInformation, bFoundWater) == 177, "Offset mismatch for FJunoTerrainWaterInformation::bFoundWater");
static_assert(offsetof(FJunoTerrainWaterInformation, NearMissEstimatedDistance) == 180, "Offset mismatch for FJunoTerrainWaterInformation::NearMissEstimatedDistance");
static_assert(offsetof(FJunoTerrainWaterInformation, FoundWaterBody) == 184, "Offset mismatch for FJunoTerrainWaterInformation::FoundWaterBody");

// /Script/JunoProceduralWorld.JunoTestPOISlotAssignment
// Kind: ScriptStruct; super: none
struct FJunoTestPOISlotAssignment
{
public:
    std::uint8_t Slot[0x70]; // 0x0000 (Size: 0x70, Type: StructProperty)
    std::uint8_t SlotGuid[0x10]; // 0x0070 (Size: 0x10, Type: StructProperty)
    FName AssignmentReason; // 0x0080 (Size: 0x8, Type: NameProperty)
    std::uint8_t Location[0x1]; // 0x0088 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoTestPOISlotAssignment, Slot) == 0, "Offset mismatch for FJunoTestPOISlotAssignment::Slot");
static_assert(offsetof(FJunoTestPOISlotAssignment, SlotGuid) == 112, "Offset mismatch for FJunoTestPOISlotAssignment::SlotGuid");
static_assert(offsetof(FJunoTestPOISlotAssignment, AssignmentReason) == 128, "Offset mismatch for FJunoTestPOISlotAssignment::AssignmentReason");
static_assert(offsetof(FJunoTestPOISlotAssignment, Location) == 136, "Offset mismatch for FJunoTestPOISlotAssignment::Location");

// /Script/JunoProceduralWorld.JunoTestPOISlotCategoryResults
// Kind: ScriptStruct; super: none
struct FJunoTestPOISlotCategoryResults
{
public:
    TArray<void*> HandledAdditionalPOIs; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> HandledRarePOIs; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CaveSurfaceDatas; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ForceSpawnNormalPOIs; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> RandomNormalPOIs; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CosmeticPOIs; // 0x0050 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> RoadTerminalCosmeticPOIs; // 0x0060 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> UnusedSlots; // 0x0070 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CaveEntranceSlots; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> BlockedSlots; // 0x0090 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> UGCSlots; // 0x00A0 (Size: 0x10, Type: ArrayProperty)
    std::int32_t TotalAdditionalPOIs; // 0x00B0 (Size: 0x4, Type: IntProperty)
    std::int32_t TotalRarePOIs; // 0x00B4 (Size: 0x4, Type: IntProperty)
    std::int32_t TotalNormalSlots; // 0x00B8 (Size: 0x4, Type: IntProperty)
    std::int32_t TotalCosmeticSlots; // 0x00BC (Size: 0x4, Type: IntProperty)
    std::int32_t TotalAssignedSlots; // 0x00C0 (Size: 0x4, Type: IntProperty)
    std::int32_t TotalSlots; // 0x00C4 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FJunoTestPOISlotCategoryResults, HandledAdditionalPOIs) == 0, "Offset mismatch for FJunoTestPOISlotCategoryResults::HandledAdditionalPOIs");
static_assert(offsetof(FJunoTestPOISlotCategoryResults, HandledRarePOIs) == 16, "Offset mismatch for FJunoTestPOISlotCategoryResults::HandledRarePOIs");
static_assert(offsetof(FJunoTestPOISlotCategoryResults, CaveSurfaceDatas) == 32, "Offset mismatch for FJunoTestPOISlotCategoryResults::CaveSurfaceDatas");
static_assert(offsetof(FJunoTestPOISlotCategoryResults, ForceSpawnNormalPOIs) == 48, "Offset mismatch for FJunoTestPOISlotCategoryResults::ForceSpawnNormalPOIs");
static_assert(offsetof(FJunoTestPOISlotCategoryResults, RandomNormalPOIs) == 64, "Offset mismatch for FJunoTestPOISlotCategoryResults::RandomNormalPOIs");
static_assert(offsetof(FJunoTestPOISlotCategoryResults, CosmeticPOIs) == 80, "Offset mismatch for FJunoTestPOISlotCategoryResults::CosmeticPOIs");
static_assert(offsetof(FJunoTestPOISlotCategoryResults, RoadTerminalCosmeticPOIs) == 96, "Offset mismatch for FJunoTestPOISlotCategoryResults::RoadTerminalCosmeticPOIs");
static_assert(offsetof(FJunoTestPOISlotCategoryResults, UnusedSlots) == 112, "Offset mismatch for FJunoTestPOISlotCategoryResults::UnusedSlots");
static_assert(offsetof(FJunoTestPOISlotCategoryResults, CaveEntranceSlots) == 128, "Offset mismatch for FJunoTestPOISlotCategoryResults::CaveEntranceSlots");
static_assert(offsetof(FJunoTestPOISlotCategoryResults, BlockedSlots) == 144, "Offset mismatch for FJunoTestPOISlotCategoryResults::BlockedSlots");
static_assert(offsetof(FJunoTestPOISlotCategoryResults, UGCSlots) == 160, "Offset mismatch for FJunoTestPOISlotCategoryResults::UGCSlots");
static_assert(offsetof(FJunoTestPOISlotCategoryResults, TotalAdditionalPOIs) == 176, "Offset mismatch for FJunoTestPOISlotCategoryResults::TotalAdditionalPOIs");
static_assert(offsetof(FJunoTestPOISlotCategoryResults, TotalRarePOIs) == 180, "Offset mismatch for FJunoTestPOISlotCategoryResults::TotalRarePOIs");
static_assert(offsetof(FJunoTestPOISlotCategoryResults, TotalNormalSlots) == 184, "Offset mismatch for FJunoTestPOISlotCategoryResults::TotalNormalSlots");
static_assert(offsetof(FJunoTestPOISlotCategoryResults, TotalCosmeticSlots) == 188, "Offset mismatch for FJunoTestPOISlotCategoryResults::TotalCosmeticSlots");
static_assert(offsetof(FJunoTestPOISlotCategoryResults, TotalAssignedSlots) == 192, "Offset mismatch for FJunoTestPOISlotCategoryResults::TotalAssignedSlots");
static_assert(offsetof(FJunoTestPOISlotCategoryResults, TotalSlots) == 196, "Offset mismatch for FJunoTestPOISlotCategoryResults::TotalSlots");

// /Script/JunoProceduralWorld.JunoTestPOISlotWithData
// Kind: ScriptStruct; super: none
struct FJunoTestPOISlotWithData
{
public:
    std::uint8_t Slot[0x70]; // 0x0000 (Size: 0x70, Type: StructProperty)
    std::uint8_t SlotGuid[0x10]; // 0x0070 (Size: 0x10, Type: StructProperty)
    std::uint8_t Location[0x1]; // 0x0080 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoTestPOISlotWithData, Slot) == 0, "Offset mismatch for FJunoTestPOISlotWithData::Slot");
static_assert(offsetof(FJunoTestPOISlotWithData, SlotGuid) == 112, "Offset mismatch for FJunoTestPOISlotWithData::SlotGuid");
static_assert(offsetof(FJunoTestPOISlotWithData, Location) == 128, "Offset mismatch for FJunoTestPOISlotWithData::Location");

// /Script/JunoProceduralWorld.JunoTestRarePOICellAssignment
// Kind: ScriptStruct; super: none
struct FJunoTestRarePOICellAssignment
{
public:
    TMap<void*, void*> LayerCounts; // 0x0000 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FJunoTestRarePOICellAssignment, LayerCounts) == 0, "Offset mismatch for FJunoTestRarePOICellAssignment::LayerCounts");

// /Script/JunoProceduralWorld.JunoTestRarePOILayerCounts
// Kind: ScriptStruct; super: none
struct FJunoTestRarePOILayerCounts
{
public:
    TMap<void*, void*> POICounts; // 0x0000 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FJunoTestRarePOILayerCounts, POICounts) == 0, "Offset mismatch for FJunoTestRarePOILayerCounts::POICounts");

// /Script/JunoProceduralWorld.JunoTestRarePOIScatterResults
// Kind: ScriptStruct; super: none
struct FJunoTestRarePOIScatterResults
{
public:
    TMap<void*, void*> CellAssignment; // 0x0000 (Size: 0x10, Type: MapProperty)
    TArray<void*> SkippedRarePOIs; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJunoTestRarePOIScatterResults, CellAssignment) == 0, "Offset mismatch for FJunoTestRarePOIScatterResults::CellAssignment");
static_assert(offsetof(FJunoTestRarePOIScatterResults, SkippedRarePOIs) == 16, "Offset mismatch for FJunoTestRarePOIScatterResults::SkippedRarePOIs");

// /Script/JunoProceduralWorld.JunoTestStartTileResult
// Kind: ScriptStruct; super: none
struct FJunoTestStartTileResult
{
public:
    std::uint8_t bSuccess; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::uint8_t ChosenCellName[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    std::uint8_t StartLocation[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t SelectionPass; // 0x0020 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0021
    TArray<void*> CandidateCellNames; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> BestScoredCellNames; // 0x0038 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJunoTestStartTileResult, bSuccess) == 0, "Offset mismatch for FJunoTestStartTileResult::bSuccess");
static_assert(offsetof(FJunoTestStartTileResult, ChosenCellName) == 4, "Offset mismatch for FJunoTestStartTileResult::ChosenCellName");
static_assert(offsetof(FJunoTestStartTileResult, StartLocation) == 8, "Offset mismatch for FJunoTestStartTileResult::StartLocation");
static_assert(offsetof(FJunoTestStartTileResult, SelectionPass) == 32, "Offset mismatch for FJunoTestStartTileResult::SelectionPass");
static_assert(offsetof(FJunoTestStartTileResult, CandidateCellNames) == 40, "Offset mismatch for FJunoTestStartTileResult::CandidateCellNames");
static_assert(offsetof(FJunoTestStartTileResult, BestScoredCellNames) == 56, "Offset mismatch for FJunoTestStartTileResult::BestScoredCellNames");

// /Script/JunoProceduralWorld.JunoTileFilter
// Kind: ScriptStruct; super: none
struct FJunoTileFilter
{
public:
    std::uint8_t AllowedTileNames[0x10]; // 0x0000 (Size: 0x10, Type: SetProperty)
    std::uint8_t RequiredTileTagQuery[0x48]; // 0x0010 (Size: 0x48, Type: StructProperty)
    std::uint8_t ExcludedTileTagQuery[0x1]; // 0x0058 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoTileFilter, AllowedTileNames) == 0, "Offset mismatch for FJunoTileFilter::AllowedTileNames");
static_assert(offsetof(FJunoTileFilter, RequiredTileTagQuery) == 16, "Offset mismatch for FJunoTileFilter::RequiredTileTagQuery");
static_assert(offsetof(FJunoTileFilter, ExcludedTileTagQuery) == 88, "Offset mismatch for FJunoTileFilter::ExcludedTileTagQuery");

// /Script/JunoProceduralWorld.JunoTileGridPersistenceFeatureData_InGameClass_PersistentInfo
// Kind: ScriptStruct; super: none
struct FJunoTileGridPersistenceFeatureData_InGameClass_PersistentInfo
{
public:
    TMap<void*, void*> Tiles; // 0x0000 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> Events; // 0x0010 (Size: 0x10, Type: MapProperty)
    std::uint8_t TileGridSaveData[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoTileGridPersistenceFeatureData_InGameClass_PersistentInfo, Tiles) == 0, "Offset mismatch for FJunoTileGridPersistenceFeatureData_InGameClass_PersistentInfo::Tiles");
static_assert(offsetof(FJunoTileGridPersistenceFeatureData_InGameClass_PersistentInfo, Events) == 16, "Offset mismatch for FJunoTileGridPersistenceFeatureData_InGameClass_PersistentInfo::Events");
static_assert(offsetof(FJunoTileGridPersistenceFeatureData_InGameClass_PersistentInfo, TileGridSaveData) == 32, "Offset mismatch for FJunoTileGridPersistenceFeatureData_InGameClass_PersistentInfo::TileGridSaveData");

// /Script/JunoProceduralWorld.JunoTileGridPersistenceFeatureData_InGameClass_PersistentInfo_v0
// Kind: ScriptStruct; super: none
struct FJunoTileGridPersistenceFeatureData_InGameClass_PersistentInfo_v0
{
public:
    TMap<void*, void*> Tiles; // 0x0000 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> Events; // 0x0010 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> ReservedAreas; // 0x0020 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> PerCellRarePOICounts; // 0x0030 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> PerCellAdditionalPOIs; // 0x0040 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FJunoTileGridPersistenceFeatureData_InGameClass_PersistentInfo_v0, Tiles) == 0, "Offset mismatch for FJunoTileGridPersistenceFeatureData_InGameClass_PersistentInfo_v0::Tiles");
static_assert(offsetof(FJunoTileGridPersistenceFeatureData_InGameClass_PersistentInfo_v0, Events) == 16, "Offset mismatch for FJunoTileGridPersistenceFeatureData_InGameClass_PersistentInfo_v0::Events");
static_assert(offsetof(FJunoTileGridPersistenceFeatureData_InGameClass_PersistentInfo_v0, ReservedAreas) == 32, "Offset mismatch for FJunoTileGridPersistenceFeatureData_InGameClass_PersistentInfo_v0::ReservedAreas");
static_assert(offsetof(FJunoTileGridPersistenceFeatureData_InGameClass_PersistentInfo_v0, PerCellRarePOICounts) == 48, "Offset mismatch for FJunoTileGridPersistenceFeatureData_InGameClass_PersistentInfo_v0::PerCellRarePOICounts");
static_assert(offsetof(FJunoTileGridPersistenceFeatureData_InGameClass_PersistentInfo_v0, PerCellAdditionalPOIs) == 64, "Offset mismatch for FJunoTileGridPersistenceFeatureData_InGameClass_PersistentInfo_v0::PerCellAdditionalPOIs");

// /Script/JunoProceduralWorld.JunoTileGridPersistenceFeatureData_InGameClass_PersistentInfo_v1
// Kind: ScriptStruct; super: none
struct FJunoTileGridPersistenceFeatureData_InGameClass_PersistentInfo_v1
{
public:
    TMap<void*, void*> Tiles; // 0x0000 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> Events; // 0x0010 (Size: 0x10, Type: MapProperty)
    std::uint8_t TileGridSaveData[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoTileGridPersistenceFeatureData_InGameClass_PersistentInfo_v1, Tiles) == 0, "Offset mismatch for FJunoTileGridPersistenceFeatureData_InGameClass_PersistentInfo_v1::Tiles");
static_assert(offsetof(FJunoTileGridPersistenceFeatureData_InGameClass_PersistentInfo_v1, Events) == 16, "Offset mismatch for FJunoTileGridPersistenceFeatureData_InGameClass_PersistentInfo_v1::Events");
static_assert(offsetof(FJunoTileGridPersistenceFeatureData_InGameClass_PersistentInfo_v1, TileGridSaveData) == 32, "Offset mismatch for FJunoTileGridPersistenceFeatureData_InGameClass_PersistentInfo_v1::TileGridSaveData");

// /Script/JunoProceduralWorld.JunoTileGridPersistenceFeatureData_InGameClass_PersistentInfo_v2
// Kind: ScriptStruct; super: none
struct FJunoTileGridPersistenceFeatureData_InGameClass_PersistentInfo_v2
{
public:
    TMap<void*, void*> Tiles; // 0x0000 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> Events; // 0x0010 (Size: 0x10, Type: MapProperty)
    std::uint8_t TileGridSaveData[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoTileGridPersistenceFeatureData_InGameClass_PersistentInfo_v2, Tiles) == 0, "Offset mismatch for FJunoTileGridPersistenceFeatureData_InGameClass_PersistentInfo_v2::Tiles");
static_assert(offsetof(FJunoTileGridPersistenceFeatureData_InGameClass_PersistentInfo_v2, Events) == 16, "Offset mismatch for FJunoTileGridPersistenceFeatureData_InGameClass_PersistentInfo_v2::Events");
static_assert(offsetof(FJunoTileGridPersistenceFeatureData_InGameClass_PersistentInfo_v2, TileGridSaveData) == 32, "Offset mismatch for FJunoTileGridPersistenceFeatureData_InGameClass_PersistentInfo_v2::TileGridSaveData");

// /Script/JunoProceduralWorld.JunoTileGridSaveData
// Kind: ScriptStruct; super: none
struct FJunoTileGridSaveData
{
public:
    TMap<void*, void*> ReservedAreas; // 0x0000 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> PerCellLayerDistribution; // 0x0010 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> PerCellAdditionalPOIs; // 0x0020 (Size: 0x10, Type: MapProperty)
    TArray<void*> SkippedAdditionalPOIs; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bHasAssignedNewGamePOIs; // 0x0040 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0041
    TArray<void*> CaveResetData; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t CaveResetReleaseVersion[0x1]; // 0x0058 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoTileGridSaveData, ReservedAreas) == 0, "Offset mismatch for FJunoTileGridSaveData::ReservedAreas");
static_assert(offsetof(FJunoTileGridSaveData, PerCellLayerDistribution) == 16, "Offset mismatch for FJunoTileGridSaveData::PerCellLayerDistribution");
static_assert(offsetof(FJunoTileGridSaveData, PerCellAdditionalPOIs) == 32, "Offset mismatch for FJunoTileGridSaveData::PerCellAdditionalPOIs");
static_assert(offsetof(FJunoTileGridSaveData, SkippedAdditionalPOIs) == 48, "Offset mismatch for FJunoTileGridSaveData::SkippedAdditionalPOIs");
static_assert(offsetof(FJunoTileGridSaveData, bHasAssignedNewGamePOIs) == 64, "Offset mismatch for FJunoTileGridSaveData::bHasAssignedNewGamePOIs");
static_assert(offsetof(FJunoTileGridSaveData, CaveResetData) == 72, "Offset mismatch for FJunoTileGridSaveData::CaveResetData");
static_assert(offsetof(FJunoTileGridSaveData, CaveResetReleaseVersion) == 88, "Offset mismatch for FJunoTileGridSaveData::CaveResetReleaseVersion");

// /Script/JunoProceduralWorld.JunoTileGridSaveData_v1
// Kind: ScriptStruct; super: none
struct FJunoTileGridSaveData_v1
{
public:
    TMap<void*, void*> ReservedAreas; // 0x0000 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> PerCellRarePOICounts; // 0x0010 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> PerCellAdditionalPOIs; // 0x0020 (Size: 0x10, Type: MapProperty)
    std::uint8_t bHasAssignedNewGamePOIs; // 0x0030 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FJunoTileGridSaveData_v1, ReservedAreas) == 0, "Offset mismatch for FJunoTileGridSaveData_v1::ReservedAreas");
static_assert(offsetof(FJunoTileGridSaveData_v1, PerCellRarePOICounts) == 16, "Offset mismatch for FJunoTileGridSaveData_v1::PerCellRarePOICounts");
static_assert(offsetof(FJunoTileGridSaveData_v1, PerCellAdditionalPOIs) == 32, "Offset mismatch for FJunoTileGridSaveData_v1::PerCellAdditionalPOIs");
static_assert(offsetof(FJunoTileGridSaveData_v1, bHasAssignedNewGamePOIs) == 48, "Offset mismatch for FJunoTileGridSaveData_v1::bHasAssignedNewGamePOIs");

// /Script/JunoProceduralWorld.JunoTileGridSaveData_v2
// Kind: ScriptStruct; super: none
struct FJunoTileGridSaveData_v2
{
public:
    TMap<void*, void*> ReservedAreas; // 0x0000 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> PerCellLayerDistribution; // 0x0010 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> PerCellAdditionalPOIs; // 0x0020 (Size: 0x10, Type: MapProperty)
    TArray<void*> SkippedAdditionalPOIs; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bHasAssignedNewGamePOIs; // 0x0040 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0041
    TArray<void*> CaveResetData; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t CaveResetReleaseVersion[0x1]; // 0x0058 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoTileGridSaveData_v2, ReservedAreas) == 0, "Offset mismatch for FJunoTileGridSaveData_v2::ReservedAreas");
static_assert(offsetof(FJunoTileGridSaveData_v2, PerCellLayerDistribution) == 16, "Offset mismatch for FJunoTileGridSaveData_v2::PerCellLayerDistribution");
static_assert(offsetof(FJunoTileGridSaveData_v2, PerCellAdditionalPOIs) == 32, "Offset mismatch for FJunoTileGridSaveData_v2::PerCellAdditionalPOIs");
static_assert(offsetof(FJunoTileGridSaveData_v2, SkippedAdditionalPOIs) == 48, "Offset mismatch for FJunoTileGridSaveData_v2::SkippedAdditionalPOIs");
static_assert(offsetof(FJunoTileGridSaveData_v2, bHasAssignedNewGamePOIs) == 64, "Offset mismatch for FJunoTileGridSaveData_v2::bHasAssignedNewGamePOIs");
static_assert(offsetof(FJunoTileGridSaveData_v2, CaveResetData) == 72, "Offset mismatch for FJunoTileGridSaveData_v2::CaveResetData");
static_assert(offsetof(FJunoTileGridSaveData_v2, CaveResetReleaseVersion) == 88, "Offset mismatch for FJunoTileGridSaveData_v2::CaveResetReleaseVersion");

// /Script/JunoProceduralWorld.JunoTileMutationBehavior
// Kind: ScriptStruct; super: none
struct FJunoTileMutationBehavior
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoProceduralWorld.JunoTileMutationContext
// Kind: ScriptStruct; super: none
struct FJunoTileMutationContext
{
public:
    TArray<void*> MutatedSlots; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t CustomData[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::int32_t Depth; // 0x0020 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FJunoTileMutationContext, MutatedSlots) == 0, "Offset mismatch for FJunoTileMutationContext::MutatedSlots");
static_assert(offsetof(FJunoTileMutationContext, CustomData) == 16, "Offset mismatch for FJunoTileMutationContext::CustomData");
static_assert(offsetof(FJunoTileMutationContext, Depth) == 32, "Offset mismatch for FJunoTileMutationContext::Depth");

// /Script/JunoProceduralWorld.JunoTileSelector
// Kind: ScriptStruct; super: TableRowBase
struct FJunoTileSelector
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::int64_t Priority; // 0x0008 (Size: 0x8, Type: Int64Property)
    std::int64_t TileSize; // 0x0010 (Size: 0x8, Type: Int64Property)
    std::int64_t WorldSize; // 0x0018 (Size: 0x8, Type: Int64Property)
    std::int64_t GenerateWorldDiameter; // 0x0020 (Size: 0x8, Type: Int64Property)
    std::uint8_t WorldOriginTileOffset[0x10]; // 0x0028 (Size: 0x10, Type: StructProperty)
    void* TileSelector; // 0x0038 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(FJunoTileSelector, Priority) == 8, "Offset mismatch for FJunoTileSelector::Priority");
static_assert(offsetof(FJunoTileSelector, TileSize) == 16, "Offset mismatch for FJunoTileSelector::TileSize");
static_assert(offsetof(FJunoTileSelector, WorldSize) == 24, "Offset mismatch for FJunoTileSelector::WorldSize");
static_assert(offsetof(FJunoTileSelector, GenerateWorldDiameter) == 32, "Offset mismatch for FJunoTileSelector::GenerateWorldDiameter");
static_assert(offsetof(FJunoTileSelector, WorldOriginTileOffset) == 40, "Offset mismatch for FJunoTileSelector::WorldOriginTileOffset");
static_assert(offsetof(FJunoTileSelector, TileSelector) == 56, "Offset mismatch for FJunoTileSelector::TileSelector");

// /Script/JunoProceduralWorld.JunoWaterSplineInjectorParams
// Kind: ScriptStruct; super: none
struct FJunoWaterSplineInjectorParams
{
public:
    std::uint8_t SplineGuide[0x110]; // 0x0000 (Size: 0x110, Type: StructProperty)
    std::int32_t Seed; // 0x0110 (Size: 0x4, Type: IntProperty)
    std::uint8_t bAllowRandomYaw; // 0x0114 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowRandomScale; // 0x0115 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0116
    std::uint8_t ScaleRange[0x1]; // 0x0118 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoWaterSplineInjectorParams, SplineGuide) == 0, "Offset mismatch for FJunoWaterSplineInjectorParams::SplineGuide");
static_assert(offsetof(FJunoWaterSplineInjectorParams, Seed) == 272, "Offset mismatch for FJunoWaterSplineInjectorParams::Seed");
static_assert(offsetof(FJunoWaterSplineInjectorParams, bAllowRandomYaw) == 276, "Offset mismatch for FJunoWaterSplineInjectorParams::bAllowRandomYaw");
static_assert(offsetof(FJunoWaterSplineInjectorParams, bAllowRandomScale) == 277, "Offset mismatch for FJunoWaterSplineInjectorParams::bAllowRandomScale");
static_assert(offsetof(FJunoWaterSplineInjectorParams, ScaleRange) == 280, "Offset mismatch for FJunoWaterSplineInjectorParams::ScaleRange");

// /Script/JunoProceduralWorld.JunoWeightedPOIEntry
// Kind: ScriptStruct; super: none
struct FJunoWeightedPOIEntry
{
public:
    std::uint8_t RegistryID[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    float Weight; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::int32_t MinInstances; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxInstances; // 0x000C (Size: 0x4, Type: IntProperty)
    std::uint8_t WorldLocationInfoTag[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::uint8_t WorldLocationGameplayTags[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoWeightedPOIEntry, RegistryID) == 0, "Offset mismatch for FJunoWeightedPOIEntry::RegistryID");
static_assert(offsetof(FJunoWeightedPOIEntry, Weight) == 4, "Offset mismatch for FJunoWeightedPOIEntry::Weight");
static_assert(offsetof(FJunoWeightedPOIEntry, MinInstances) == 8, "Offset mismatch for FJunoWeightedPOIEntry::MinInstances");
static_assert(offsetof(FJunoWeightedPOIEntry, MaxInstances) == 12, "Offset mismatch for FJunoWeightedPOIEntry::MaxInstances");
static_assert(offsetof(FJunoWeightedPOIEntry, WorldLocationInfoTag) == 16, "Offset mismatch for FJunoWeightedPOIEntry::WorldLocationInfoTag");
static_assert(offsetof(FJunoWeightedPOIEntry, WorldLocationGameplayTags) == 24, "Offset mismatch for FJunoWeightedPOIEntry::WorldLocationGameplayTags");

// /Script/JunoProceduralWorld.JunoWeightedSlotSortOperator
// Kind: ScriptStruct; super: none
struct FJunoWeightedSlotSortOperator
{
public:
    float Weight; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    std::uint8_t Operator[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoWeightedSlotSortOperator, Weight) == 0, "Offset mismatch for FJunoWeightedSlotSortOperator::Weight");
static_assert(offsetof(FJunoWeightedSlotSortOperator, Operator) == 8, "Offset mismatch for FJunoWeightedSlotSortOperator::Operator");

// /Script/JunoProceduralWorld.JunoWorldConditionBiome
// Kind: ScriptStruct; super: WorldConditionCommonActorBase
struct FJunoWorldConditionBiome
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t ActorRef[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    TArray<void*> AllowedBiomes; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t AllowedBiomesTagQuery[0x48]; // 0x0028 (Size: 0x48, Type: StructProperty)
    std::uint8_t bCanBeSecondaryBiome; // 0x0070 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0071
    TArray<void*> AllowedHabitats; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t AllowedHabitatsTagQuery[0x48]; // 0x0088 (Size: 0x48, Type: StructProperty)
    std::uint8_t bCanBeSecondaryHabitat; // 0x00D0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FJunoWorldConditionBiome, ActorRef) == 16, "Offset mismatch for FJunoWorldConditionBiome::ActorRef");
static_assert(offsetof(FJunoWorldConditionBiome, AllowedBiomes) == 24, "Offset mismatch for FJunoWorldConditionBiome::AllowedBiomes");
static_assert(offsetof(FJunoWorldConditionBiome, AllowedBiomesTagQuery) == 40, "Offset mismatch for FJunoWorldConditionBiome::AllowedBiomesTagQuery");
static_assert(offsetof(FJunoWorldConditionBiome, bCanBeSecondaryBiome) == 112, "Offset mismatch for FJunoWorldConditionBiome::bCanBeSecondaryBiome");
static_assert(offsetof(FJunoWorldConditionBiome, AllowedHabitats) == 120, "Offset mismatch for FJunoWorldConditionBiome::AllowedHabitats");
static_assert(offsetof(FJunoWorldConditionBiome, AllowedHabitatsTagQuery) == 136, "Offset mismatch for FJunoWorldConditionBiome::AllowedHabitatsTagQuery");
static_assert(offsetof(FJunoWorldConditionBiome, bCanBeSecondaryHabitat) == 208, "Offset mismatch for FJunoWorldConditionBiome::bCanBeSecondaryHabitat");

// /Script/JunoProceduralWorld.JunoWorldConditionWorldTile
// Kind: ScriptStruct; super: WorldConditionCommonActorBase
struct FJunoWorldConditionWorldTile
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t ActorRef[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::uint8_t TileQuery[0x48]; // 0x0018 (Size: 0x48, Type: StructProperty)
    FName EventName; // 0x0060 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FJunoWorldConditionWorldTile, ActorRef) == 16, "Offset mismatch for FJunoWorldConditionWorldTile::ActorRef");
static_assert(offsetof(FJunoWorldConditionWorldTile, TileQuery) == 24, "Offset mismatch for FJunoWorldConditionWorldTile::TileQuery");
static_assert(offsetof(FJunoWorldConditionWorldTile, EventName) == 96, "Offset mismatch for FJunoWorldConditionWorldTile::EventName");

// /Script/JunoProceduralWorld.JunoWorldEventOverrides
// Kind: ScriptStruct; super: TableRowBase
struct FJunoWorldEventOverrides
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::int32_t Priority; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x000C
    void* StartTileChooser; // 0x0010 (Size: 0x8, Type: ClassProperty)
    std::uint8_t EnableStartTileChooser; // 0x0018 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0019
    float StartTileChooserPercentChance; // 0x001C (Size: 0x4, Type: FloatProperty)
    FString CalendarEventName; // 0x0020 (Size: 0x10, Type: StrProperty)
    std::uint8_t SunsetReleaseVersion[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoWorldEventOverrides, Priority) == 8, "Offset mismatch for FJunoWorldEventOverrides::Priority");
static_assert(offsetof(FJunoWorldEventOverrides, StartTileChooser) == 16, "Offset mismatch for FJunoWorldEventOverrides::StartTileChooser");
static_assert(offsetof(FJunoWorldEventOverrides, EnableStartTileChooser) == 24, "Offset mismatch for FJunoWorldEventOverrides::EnableStartTileChooser");
static_assert(offsetof(FJunoWorldEventOverrides, StartTileChooserPercentChance) == 28, "Offset mismatch for FJunoWorldEventOverrides::StartTileChooserPercentChance");
static_assert(offsetof(FJunoWorldEventOverrides, CalendarEventName) == 32, "Offset mismatch for FJunoWorldEventOverrides::CalendarEventName");
static_assert(offsetof(FJunoWorldEventOverrides, SunsetReleaseVersion) == 48, "Offset mismatch for FJunoWorldEventOverrides::SunsetReleaseVersion");

// /Script/JunoProceduralWorld.JunoWorldEventTileDefinition
// Kind: ScriptStruct; super: TableRowBase
struct FJunoWorldEventTileDefinition
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t bEnabled; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0009
    std::uint8_t EventName[0x4]; // 0x000C (Size: 0x4, Type: NameProperty)
    std::int64_t Priority; // 0x0010 (Size: 0x8, Type: Int64Property)
    std::uint8_t EventTileQuery[0x48]; // 0x0018 (Size: 0x48, Type: StructProperty)
    void* EventBuilderClass; // 0x0060 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(FJunoWorldEventTileDefinition, bEnabled) == 8, "Offset mismatch for FJunoWorldEventTileDefinition::bEnabled");
static_assert(offsetof(FJunoWorldEventTileDefinition, EventName) == 12, "Offset mismatch for FJunoWorldEventTileDefinition::EventName");
static_assert(offsetof(FJunoWorldEventTileDefinition, Priority) == 16, "Offset mismatch for FJunoWorldEventTileDefinition::Priority");
static_assert(offsetof(FJunoWorldEventTileDefinition, EventTileQuery) == 24, "Offset mismatch for FJunoWorldEventTileDefinition::EventTileQuery");
static_assert(offsetof(FJunoWorldEventTileDefinition, EventBuilderClass) == 96, "Offset mismatch for FJunoWorldEventTileDefinition::EventBuilderClass");

// /Script/JunoProceduralWorld.JunoWorldMutationsPersistenceFeatureData_InGameClass_PersistentInfo
// Kind: ScriptStruct; super: none
struct FJunoWorldMutationsPersistenceFeatureData_InGameClass_PersistentInfo
{
public:
    std::uint8_t SaveData[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoWorldMutationsPersistenceFeatureData_InGameClass_PersistentInfo, SaveData) == 0, "Offset mismatch for FJunoWorldMutationsPersistenceFeatureData_InGameClass_PersistentInfo::SaveData");

// /Script/JunoProceduralWorld.JunoWorldMutationsSaveData
// Kind: ScriptStruct; super: none
struct FJunoWorldMutationsSaveData
{
public:
    std::uint8_t AppliedTileMutationRules[0x10]; // 0x0000 (Size: 0x10, Type: SetProperty)
    TMap<void*, void*> TileMutationRuleApplicationCounts; // 0x0010 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FJunoWorldMutationsSaveData, AppliedTileMutationRules) == 0, "Offset mismatch for FJunoWorldMutationsSaveData::AppliedTileMutationRules");
static_assert(offsetof(FJunoWorldMutationsSaveData, TileMutationRuleApplicationCounts) == 16, "Offset mismatch for FJunoWorldMutationsSaveData::TileMutationRuleApplicationCounts");

// /Script/JunoProceduralWorld.JunoWorldPOIInfo
// Kind: ScriptStruct; super: none
struct FJunoWorldPOIInfo
{
public:
    std::uint8_t POIGuid[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    FName RegistryItemName; // 0x0010 (Size: 0x8, Type: NameProperty)
    std::uint8_t TileLocation[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t POILocation[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    float DistanceFromOrigin; // 0x0048 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Biome; // 0x004C (Size: 0x1, Type: EnumProperty)
    std::uint8_t POIType; // 0x004D (Size: 0x1, Type: EnumProperty)
    std::uint8_t bWorldHasTileMutations; // 0x004E (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FJunoWorldPOIInfo, POIGuid) == 0, "Offset mismatch for FJunoWorldPOIInfo::POIGuid");
static_assert(offsetof(FJunoWorldPOIInfo, RegistryItemName) == 16, "Offset mismatch for FJunoWorldPOIInfo::RegistryItemName");
static_assert(offsetof(FJunoWorldPOIInfo, TileLocation) == 24, "Offset mismatch for FJunoWorldPOIInfo::TileLocation");
static_assert(offsetof(FJunoWorldPOIInfo, POILocation) == 48, "Offset mismatch for FJunoWorldPOIInfo::POILocation");
static_assert(offsetof(FJunoWorldPOIInfo, DistanceFromOrigin) == 72, "Offset mismatch for FJunoWorldPOIInfo::DistanceFromOrigin");
static_assert(offsetof(FJunoWorldPOIInfo, Biome) == 76, "Offset mismatch for FJunoWorldPOIInfo::Biome");
static_assert(offsetof(FJunoWorldPOIInfo, POIType) == 77, "Offset mismatch for FJunoWorldPOIInfo::POIType");
static_assert(offsetof(FJunoWorldPOIInfo, bWorldHasTileMutations) == 78, "Offset mismatch for FJunoWorldPOIInfo::bWorldHasTileMutations");

// /Script/JunoProceduralWorld.JunoWorldPOIQueryResult
// Kind: ScriptStruct; super: none
struct FJunoWorldPOIQueryResult
{
public:
    std::uint8_t Info[0x50]; // 0x0000 (Size: 0x50, Type: StructProperty)
    void* POIVolume; // 0x0050 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FJunoWorldPOIQueryResult, Info) == 0, "Offset mismatch for FJunoWorldPOIQueryResult::Info");
static_assert(offsetof(FJunoWorldPOIQueryResult, POIVolume) == 80, "Offset mismatch for FJunoWorldPOIQueryResult::POIVolume");

// /Script/JunoProceduralWorld.JunoWorldPartitionLevelPersistentData
// Kind: ScriptStruct; super: none
struct FJunoWorldPartitionLevelPersistentData
{
public:
    std::uint8_t RuntimeHashType[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::uint8_t RuntimeHashMigrationType[0x4]; // 0x0004 (Size: 0x4, Type: StructProperty)
    TSet<void*> RuntimeHashMigrationUpgradedCellNames; // 0x0008 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(FJunoWorldPartitionLevelPersistentData, RuntimeHashType) == 0, "Offset mismatch for FJunoWorldPartitionLevelPersistentData::RuntimeHashType");
static_assert(offsetof(FJunoWorldPartitionLevelPersistentData, RuntimeHashMigrationType) == 4, "Offset mismatch for FJunoWorldPartitionLevelPersistentData::RuntimeHashMigrationType");
static_assert(offsetof(FJunoWorldPartitionLevelPersistentData, RuntimeHashMigrationUpgradedCellNames) == 8, "Offset mismatch for FJunoWorldPartitionLevelPersistentData::RuntimeHashMigrationUpgradedCellNames");

// /Script/JunoProceduralWorld.JunoWorldPartitionPersistentDataHandler
// Kind: ScriptStruct; super: none
struct FJunoWorldPartitionPersistentDataHandler
{
public:
    TMap<void*, void*> WPLevelPersistentDatas; // 0x0000 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FJunoWorldPartitionPersistentDataHandler, WPLevelPersistentDatas) == 0, "Offset mismatch for FJunoWorldPartitionPersistentDataHandler::WPLevelPersistentDatas");

// /Script/JunoProceduralWorld.JunoWorldPartitionRuntimeHashType
// Kind: ScriptStruct; super: none
struct FJunoWorldPartitionRuntimeHashType
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoProceduralWorld.JunoWorldRegistryEntry
// Kind: ScriptStruct; super: none
struct FJunoWorldRegistryEntry
{
public:
    std::uint8_t Location[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t GameplayTags[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoWorldRegistryEntry, Location) == 0, "Offset mismatch for FJunoWorldRegistryEntry::Location");
static_assert(offsetof(FJunoWorldRegistryEntry, GameplayTags) == 24, "Offset mismatch for FJunoWorldRegistryEntry::GameplayTags");

// /Script/JunoProceduralWorld.JunoWorldTileAdditionalPOI
// Kind: ScriptStruct; super: TableRowBase
struct FJunoWorldTileAdditionalPOI
{
public:
    std::uint8_t Pad_0000[0xC]; // 0x0000
    std::uint8_t bEnabled; // 0x000C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x000D
    std::int32_t PlacementOrder; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::uint8_t SunsetReleaseVersion[0x4]; // 0x0014 (Size: 0x4, Type: StructProperty)
    FName LayerName; // 0x0018 (Size: 0x8, Type: NameProperty)
    std::uint8_t POIQuery[0x48]; // 0x0020 (Size: 0x48, Type: StructProperty)
    std::uint8_t RarePOI[0x8]; // 0x0068 (Size: 0x8, Type: StructProperty)
    std::int32_t RareCount; // 0x0070 (Size: 0x4, Type: IntProperty)
    std::uint8_t Type; // 0x0074 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0075
    std::uint8_t CaveGeneratorTags[0x20]; // 0x0078 (Size: 0x20, Type: StructProperty)
    std::uint8_t CaveGeneratorBiomeOverride; // 0x0098 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0099
    std::uint8_t CaveGUID[0x10]; // 0x009C (Size: 0x10, Type: StructProperty)
    std::uint8_t TaggedTileAndSlotTag[0x4]; // 0x00AC (Size: 0x4, Type: StructProperty)
    std::uint8_t TileTagQuery[0x48]; // 0x00B0 (Size: 0x48, Type: StructProperty)
    std::uint8_t BackupTileTagQuery[0x48]; // 0x00F8 (Size: 0x48, Type: StructProperty)
    std::uint8_t SessionOriginFallbackTileTagQuery[0x48]; // 0x0140 (Size: 0x48, Type: StructProperty)
    std::int32_t PreferredBiomePriority; // 0x0188 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0004[0x4]; // 0x018C
    std::uint8_t PreferredBiomes[0x10]; // 0x0190 (Size: 0x10, Type: SetProperty)
    std::uint8_t AvoidBiomes[0x10]; // 0x01A0 (Size: 0x10, Type: SetProperty)
    FName EventName; // 0x01B0 (Size: 0x8, Type: NameProperty)
    std::uint8_t EventTileTagQuery[0x48]; // 0x01B8 (Size: 0x48, Type: StructProperty)
    std::uint8_t WorldTilePlacement; // 0x0200 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0005[0x3]; // 0x0201
    float MinimumDistanceToWorldStart; // 0x0204 (Size: 0x4, Type: FloatProperty)
    float MinimumDistanceToSessionStart; // 0x0208 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0006[0x4]; // 0x020C
    TArray<void*> LocationDependencies; // 0x0210 (Size: 0x10, Type: ArrayProperty)
    float LocationDependencyVariation; // 0x0220 (Size: 0x4, Type: FloatProperty)
    float LocationDependencyFalloff; // 0x0224 (Size: 0x4, Type: FloatProperty)
    TArray<void*> SlotTagPreferences; // 0x0228 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t WorldMode; // 0x0238 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0007[0x7]; // 0x0239
    FString RandomStreamName; // 0x0240 (Size: 0x10, Type: StrProperty)
    std::uint8_t WorldLocationInfoTag[0x8]; // 0x0250 (Size: 0x8, Type: StructProperty)
    std::uint8_t WorldLocationGameplayTags[0x20]; // 0x0258 (Size: 0x20, Type: StructProperty)
    std::uint8_t bAllowedInCozyMode; // 0x0278 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowedInSandboxMode; // 0x0279 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowedInHardcoreMode; // 0x027A (Size: 0x1, Type: BoolProperty)
    std::uint8_t UGCTestMode; // 0x027B (Size: 0x1, Type: EnumProperty)
    float AdditionalUGCCheckRadius; // 0x027C (Size: 0x4, Type: FloatProperty)
    std::uint8_t BackupTileUGCTestMode; // 0x0280 (Size: 0x1, Type: EnumProperty)
    std::uint8_t orientation; // 0x0281 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0008[0x6]; // 0x0282
    std::uint8_t AdditionalTileInformation[0x20]; // 0x0288 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t bReportAddToWorldToTelemetry; // 0x02A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0009[0x7]; // 0x02A9
    TArray<void*> PreloadActors; // 0x02B0 (Size: 0x10, Type: ArrayProperty)
    void* UGCRequestClass; // 0x02C0 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bAllowReplacingUGC; // 0x02C8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000A[0x3]; // 0x02C9
    std::uint8_t UGCRemovalFilter[0x1]; // 0x02CC (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoWorldTileAdditionalPOI, bEnabled) == 12, "Offset mismatch for FJunoWorldTileAdditionalPOI::bEnabled");
static_assert(offsetof(FJunoWorldTileAdditionalPOI, PlacementOrder) == 16, "Offset mismatch for FJunoWorldTileAdditionalPOI::PlacementOrder");
static_assert(offsetof(FJunoWorldTileAdditionalPOI, SunsetReleaseVersion) == 20, "Offset mismatch for FJunoWorldTileAdditionalPOI::SunsetReleaseVersion");
static_assert(offsetof(FJunoWorldTileAdditionalPOI, LayerName) == 24, "Offset mismatch for FJunoWorldTileAdditionalPOI::LayerName");
static_assert(offsetof(FJunoWorldTileAdditionalPOI, POIQuery) == 32, "Offset mismatch for FJunoWorldTileAdditionalPOI::POIQuery");
static_assert(offsetof(FJunoWorldTileAdditionalPOI, RarePOI) == 104, "Offset mismatch for FJunoWorldTileAdditionalPOI::RarePOI");
static_assert(offsetof(FJunoWorldTileAdditionalPOI, RareCount) == 112, "Offset mismatch for FJunoWorldTileAdditionalPOI::RareCount");
static_assert(offsetof(FJunoWorldTileAdditionalPOI, Type) == 116, "Offset mismatch for FJunoWorldTileAdditionalPOI::Type");
static_assert(offsetof(FJunoWorldTileAdditionalPOI, CaveGeneratorTags) == 120, "Offset mismatch for FJunoWorldTileAdditionalPOI::CaveGeneratorTags");
static_assert(offsetof(FJunoWorldTileAdditionalPOI, CaveGeneratorBiomeOverride) == 152, "Offset mismatch for FJunoWorldTileAdditionalPOI::CaveGeneratorBiomeOverride");
static_assert(offsetof(FJunoWorldTileAdditionalPOI, CaveGUID) == 156, "Offset mismatch for FJunoWorldTileAdditionalPOI::CaveGUID");
static_assert(offsetof(FJunoWorldTileAdditionalPOI, TaggedTileAndSlotTag) == 172, "Offset mismatch for FJunoWorldTileAdditionalPOI::TaggedTileAndSlotTag");
static_assert(offsetof(FJunoWorldTileAdditionalPOI, TileTagQuery) == 176, "Offset mismatch for FJunoWorldTileAdditionalPOI::TileTagQuery");
static_assert(offsetof(FJunoWorldTileAdditionalPOI, BackupTileTagQuery) == 248, "Offset mismatch for FJunoWorldTileAdditionalPOI::BackupTileTagQuery");
static_assert(offsetof(FJunoWorldTileAdditionalPOI, SessionOriginFallbackTileTagQuery) == 320, "Offset mismatch for FJunoWorldTileAdditionalPOI::SessionOriginFallbackTileTagQuery");
static_assert(offsetof(FJunoWorldTileAdditionalPOI, PreferredBiomePriority) == 392, "Offset mismatch for FJunoWorldTileAdditionalPOI::PreferredBiomePriority");
static_assert(offsetof(FJunoWorldTileAdditionalPOI, PreferredBiomes) == 400, "Offset mismatch for FJunoWorldTileAdditionalPOI::PreferredBiomes");
static_assert(offsetof(FJunoWorldTileAdditionalPOI, AvoidBiomes) == 416, "Offset mismatch for FJunoWorldTileAdditionalPOI::AvoidBiomes");
static_assert(offsetof(FJunoWorldTileAdditionalPOI, EventName) == 432, "Offset mismatch for FJunoWorldTileAdditionalPOI::EventName");
static_assert(offsetof(FJunoWorldTileAdditionalPOI, EventTileTagQuery) == 440, "Offset mismatch for FJunoWorldTileAdditionalPOI::EventTileTagQuery");
static_assert(offsetof(FJunoWorldTileAdditionalPOI, WorldTilePlacement) == 512, "Offset mismatch for FJunoWorldTileAdditionalPOI::WorldTilePlacement");
static_assert(offsetof(FJunoWorldTileAdditionalPOI, MinimumDistanceToWorldStart) == 516, "Offset mismatch for FJunoWorldTileAdditionalPOI::MinimumDistanceToWorldStart");
static_assert(offsetof(FJunoWorldTileAdditionalPOI, MinimumDistanceToSessionStart) == 520, "Offset mismatch for FJunoWorldTileAdditionalPOI::MinimumDistanceToSessionStart");
static_assert(offsetof(FJunoWorldTileAdditionalPOI, LocationDependencies) == 528, "Offset mismatch for FJunoWorldTileAdditionalPOI::LocationDependencies");
static_assert(offsetof(FJunoWorldTileAdditionalPOI, LocationDependencyVariation) == 544, "Offset mismatch for FJunoWorldTileAdditionalPOI::LocationDependencyVariation");
static_assert(offsetof(FJunoWorldTileAdditionalPOI, LocationDependencyFalloff) == 548, "Offset mismatch for FJunoWorldTileAdditionalPOI::LocationDependencyFalloff");
static_assert(offsetof(FJunoWorldTileAdditionalPOI, SlotTagPreferences) == 552, "Offset mismatch for FJunoWorldTileAdditionalPOI::SlotTagPreferences");
static_assert(offsetof(FJunoWorldTileAdditionalPOI, WorldMode) == 568, "Offset mismatch for FJunoWorldTileAdditionalPOI::WorldMode");
static_assert(offsetof(FJunoWorldTileAdditionalPOI, RandomStreamName) == 576, "Offset mismatch for FJunoWorldTileAdditionalPOI::RandomStreamName");
static_assert(offsetof(FJunoWorldTileAdditionalPOI, WorldLocationInfoTag) == 592, "Offset mismatch for FJunoWorldTileAdditionalPOI::WorldLocationInfoTag");
static_assert(offsetof(FJunoWorldTileAdditionalPOI, WorldLocationGameplayTags) == 600, "Offset mismatch for FJunoWorldTileAdditionalPOI::WorldLocationGameplayTags");
static_assert(offsetof(FJunoWorldTileAdditionalPOI, bAllowedInCozyMode) == 632, "Offset mismatch for FJunoWorldTileAdditionalPOI::bAllowedInCozyMode");
static_assert(offsetof(FJunoWorldTileAdditionalPOI, bAllowedInSandboxMode) == 633, "Offset mismatch for FJunoWorldTileAdditionalPOI::bAllowedInSandboxMode");
static_assert(offsetof(FJunoWorldTileAdditionalPOI, bAllowedInHardcoreMode) == 634, "Offset mismatch for FJunoWorldTileAdditionalPOI::bAllowedInHardcoreMode");
static_assert(offsetof(FJunoWorldTileAdditionalPOI, UGCTestMode) == 635, "Offset mismatch for FJunoWorldTileAdditionalPOI::UGCTestMode");
static_assert(offsetof(FJunoWorldTileAdditionalPOI, AdditionalUGCCheckRadius) == 636, "Offset mismatch for FJunoWorldTileAdditionalPOI::AdditionalUGCCheckRadius");
static_assert(offsetof(FJunoWorldTileAdditionalPOI, BackupTileUGCTestMode) == 640, "Offset mismatch for FJunoWorldTileAdditionalPOI::BackupTileUGCTestMode");
static_assert(offsetof(FJunoWorldTileAdditionalPOI, orientation) == 641, "Offset mismatch for FJunoWorldTileAdditionalPOI::orientation");
static_assert(offsetof(FJunoWorldTileAdditionalPOI, AdditionalTileInformation) == 648, "Offset mismatch for FJunoWorldTileAdditionalPOI::AdditionalTileInformation");
static_assert(offsetof(FJunoWorldTileAdditionalPOI, bReportAddToWorldToTelemetry) == 680, "Offset mismatch for FJunoWorldTileAdditionalPOI::bReportAddToWorldToTelemetry");
static_assert(offsetof(FJunoWorldTileAdditionalPOI, PreloadActors) == 688, "Offset mismatch for FJunoWorldTileAdditionalPOI::PreloadActors");
static_assert(offsetof(FJunoWorldTileAdditionalPOI, UGCRequestClass) == 704, "Offset mismatch for FJunoWorldTileAdditionalPOI::UGCRequestClass");
static_assert(offsetof(FJunoWorldTileAdditionalPOI, bAllowReplacingUGC) == 712, "Offset mismatch for FJunoWorldTileAdditionalPOI::bAllowReplacingUGC");
static_assert(offsetof(FJunoWorldTileAdditionalPOI, UGCRemovalFilter) == 716, "Offset mismatch for FJunoWorldTileAdditionalPOI::UGCRemovalFilter");

// /Script/JunoProceduralWorld.JunoWorldTileAdditionalPOILocationDependency
// Kind: ScriptStruct; super: none
struct FJunoWorldTileAdditionalPOILocationDependency
{
public:
    std::uint8_t Type; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::uint8_t WorldLocationInfoTag[0x4]; // 0x0004 (Size: 0x4, Type: StructProperty)
    std::uint8_t Offset[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    double MinimumDistance; // 0x0020 (Size: 0x8, Type: DoubleProperty)
    double MaximumDistance; // 0x0028 (Size: 0x8, Type: DoubleProperty)
    double Weight; // 0x0030 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t UsageType; // 0x0038 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FJunoWorldTileAdditionalPOILocationDependency, Type) == 0, "Offset mismatch for FJunoWorldTileAdditionalPOILocationDependency::Type");
static_assert(offsetof(FJunoWorldTileAdditionalPOILocationDependency, WorldLocationInfoTag) == 4, "Offset mismatch for FJunoWorldTileAdditionalPOILocationDependency::WorldLocationInfoTag");
static_assert(offsetof(FJunoWorldTileAdditionalPOILocationDependency, Offset) == 8, "Offset mismatch for FJunoWorldTileAdditionalPOILocationDependency::Offset");
static_assert(offsetof(FJunoWorldTileAdditionalPOILocationDependency, MinimumDistance) == 32, "Offset mismatch for FJunoWorldTileAdditionalPOILocationDependency::MinimumDistance");
static_assert(offsetof(FJunoWorldTileAdditionalPOILocationDependency, MaximumDistance) == 40, "Offset mismatch for FJunoWorldTileAdditionalPOILocationDependency::MaximumDistance");
static_assert(offsetof(FJunoWorldTileAdditionalPOILocationDependency, Weight) == 48, "Offset mismatch for FJunoWorldTileAdditionalPOILocationDependency::Weight");
static_assert(offsetof(FJunoWorldTileAdditionalPOILocationDependency, UsageType) == 56, "Offset mismatch for FJunoWorldTileAdditionalPOILocationDependency::UsageType");

// /Script/JunoProceduralWorld.JunoWorldTileAdditionalPOIReservedArea
// Kind: ScriptStruct; super: none
struct FJunoWorldTileAdditionalPOIReservedArea
{
public:
    std::uint8_t Location[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    float Radius; // 0x0010 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FJunoWorldTileAdditionalPOIReservedArea, Location) == 0, "Offset mismatch for FJunoWorldTileAdditionalPOIReservedArea::Location");
static_assert(offsetof(FJunoWorldTileAdditionalPOIReservedArea, Radius) == 16, "Offset mismatch for FJunoWorldTileAdditionalPOIReservedArea::Radius");

// /Script/JunoProceduralWorld.JunoWorldTileAdditionalPOISlotTagPreference
// Kind: ScriptStruct; super: none
struct FJunoWorldTileAdditionalPOISlotTagPreference
{
public:
    std::uint8_t TagQuery[0x48]; // 0x0000 (Size: 0x48, Type: StructProperty)
    std::int32_t Priority; // 0x0048 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FJunoWorldTileAdditionalPOISlotTagPreference, TagQuery) == 0, "Offset mismatch for FJunoWorldTileAdditionalPOISlotTagPreference::TagQuery");
static_assert(offsetof(FJunoWorldTileAdditionalPOISlotTagPreference, Priority) == 72, "Offset mismatch for FJunoWorldTileAdditionalPOISlotTagPreference::Priority");

// /Script/JunoProceduralWorld.JunoWorldTileAdditionalPOITaggedSlotLocation
// Kind: ScriptStruct; super: none
struct FJunoWorldTileAdditionalPOITaggedSlotLocation
{
public:
    std::uint8_t SlotTag[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t Location[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoWorldTileAdditionalPOITaggedSlotLocation, SlotTag) == 0, "Offset mismatch for FJunoWorldTileAdditionalPOITaggedSlotLocation::SlotTag");
static_assert(offsetof(FJunoWorldTileAdditionalPOITaggedSlotLocation, Location) == 8, "Offset mismatch for FJunoWorldTileAdditionalPOITaggedSlotLocation::Location");

// /Script/JunoProceduralWorld.JunoWorldTileAdditionalPOITileInfo
// Kind: ScriptStruct; super: TableRowBase
struct FJunoWorldTileAdditionalPOITileInfo
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t TileWorld[0x20]; // 0x0008 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t TileNW[0x30]; // 0x0028 (Size: 0x30, Type: StructProperty)
    std::uint8_t TileNE[0x30]; // 0x0058 (Size: 0x30, Type: StructProperty)
    std::uint8_t TileSW[0x30]; // 0x0088 (Size: 0x30, Type: StructProperty)
    std::uint8_t TileSE[0x30]; // 0x00B8 (Size: 0x30, Type: StructProperty)
    std::uint8_t TileCenter[0x1]; // 0x00E8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoWorldTileAdditionalPOITileInfo, TileWorld) == 8, "Offset mismatch for FJunoWorldTileAdditionalPOITileInfo::TileWorld");
static_assert(offsetof(FJunoWorldTileAdditionalPOITileInfo, TileNW) == 40, "Offset mismatch for FJunoWorldTileAdditionalPOITileInfo::TileNW");
static_assert(offsetof(FJunoWorldTileAdditionalPOITileInfo, TileNE) == 88, "Offset mismatch for FJunoWorldTileAdditionalPOITileInfo::TileNE");
static_assert(offsetof(FJunoWorldTileAdditionalPOITileInfo, TileSW) == 136, "Offset mismatch for FJunoWorldTileAdditionalPOITileInfo::TileSW");
static_assert(offsetof(FJunoWorldTileAdditionalPOITileInfo, TileSE) == 184, "Offset mismatch for FJunoWorldTileAdditionalPOITileInfo::TileSE");
static_assert(offsetof(FJunoWorldTileAdditionalPOITileInfo, TileCenter) == 232, "Offset mismatch for FJunoWorldTileAdditionalPOITileInfo::TileCenter");

// /Script/JunoProceduralWorld.JunoWorldTileAdditionalPOITileQuadrantInfo
// Kind: ScriptStruct; super: none
struct FJunoWorldTileAdditionalPOITileQuadrantInfo
{
public:
    TArray<void*> ReservedAreas; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SlotLocations; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ResourceWorlds; // 0x0020 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJunoWorldTileAdditionalPOITileQuadrantInfo, ReservedAreas) == 0, "Offset mismatch for FJunoWorldTileAdditionalPOITileQuadrantInfo::ReservedAreas");
static_assert(offsetof(FJunoWorldTileAdditionalPOITileQuadrantInfo, SlotLocations) == 16, "Offset mismatch for FJunoWorldTileAdditionalPOITileQuadrantInfo::SlotLocations");
static_assert(offsetof(FJunoWorldTileAdditionalPOITileQuadrantInfo, ResourceWorlds) == 32, "Offset mismatch for FJunoWorldTileAdditionalPOITileQuadrantInfo::ResourceWorlds");

// /Script/JunoProceduralWorld.JunoWorldTileCaveSurfaceSaveData
// Kind: ScriptStruct; super: none
struct FJunoWorldTileCaveSurfaceSaveData
{
public:
    TArray<void*> CaveSurfaceData; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t FixupVersion; // 0x0010 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FJunoWorldTileCaveSurfaceSaveData, CaveSurfaceData) == 0, "Offset mismatch for FJunoWorldTileCaveSurfaceSaveData::CaveSurfaceData");
static_assert(offsetof(FJunoWorldTileCaveSurfaceSaveData, FixupVersion) == 16, "Offset mismatch for FJunoWorldTileCaveSurfaceSaveData::FixupVersion");

// /Script/JunoProceduralWorld.JunoWorldTileEventBuilderRestriction
// Kind: ScriptStruct; super: none
struct FJunoWorldTileEventBuilderRestriction
{
public:
    std::uint8_t Type; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t RestrictionSource; // 0x0001 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ShapeType; // 0x0002 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x5]; // 0x0003
    std::uint8_t Circle[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t Box[0x28]; // 0x0020 (Size: 0x28, Type: StructProperty)
    std::uint8_t BoxPadding[0x28]; // 0x0048 (Size: 0x28, Type: StructProperty)
    double CirclePadding; // 0x0070 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bSoftRestriction; // 0x0078 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0079
    std::int32_t SoftRestrictionPriority; // 0x007C (Size: 0x4, Type: IntProperty)
    std::uint8_t GameplayTagRestrictionQuery[0x1]; // 0x0080 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoWorldTileEventBuilderRestriction, Type) == 0, "Offset mismatch for FJunoWorldTileEventBuilderRestriction::Type");
static_assert(offsetof(FJunoWorldTileEventBuilderRestriction, RestrictionSource) == 1, "Offset mismatch for FJunoWorldTileEventBuilderRestriction::RestrictionSource");
static_assert(offsetof(FJunoWorldTileEventBuilderRestriction, ShapeType) == 2, "Offset mismatch for FJunoWorldTileEventBuilderRestriction::ShapeType");
static_assert(offsetof(FJunoWorldTileEventBuilderRestriction, Circle) == 8, "Offset mismatch for FJunoWorldTileEventBuilderRestriction::Circle");
static_assert(offsetof(FJunoWorldTileEventBuilderRestriction, Box) == 32, "Offset mismatch for FJunoWorldTileEventBuilderRestriction::Box");
static_assert(offsetof(FJunoWorldTileEventBuilderRestriction, BoxPadding) == 72, "Offset mismatch for FJunoWorldTileEventBuilderRestriction::BoxPadding");
static_assert(offsetof(FJunoWorldTileEventBuilderRestriction, CirclePadding) == 112, "Offset mismatch for FJunoWorldTileEventBuilderRestriction::CirclePadding");
static_assert(offsetof(FJunoWorldTileEventBuilderRestriction, bSoftRestriction) == 120, "Offset mismatch for FJunoWorldTileEventBuilderRestriction::bSoftRestriction");
static_assert(offsetof(FJunoWorldTileEventBuilderRestriction, SoftRestrictionPriority) == 124, "Offset mismatch for FJunoWorldTileEventBuilderRestriction::SoftRestrictionPriority");
static_assert(offsetof(FJunoWorldTileEventBuilderRestriction, GameplayTagRestrictionQuery) == 128, "Offset mismatch for FJunoWorldTileEventBuilderRestriction::GameplayTagRestrictionQuery");

// /Script/JunoProceduralWorld.JunoWorldTileEventCircleBounds
// Kind: ScriptStruct; super: none
struct FJunoWorldTileEventCircleBounds
{
public:
    double Radius; // 0x0000 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t Center[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoWorldTileEventCircleBounds, Radius) == 0, "Offset mismatch for FJunoWorldTileEventCircleBounds::Radius");
static_assert(offsetof(FJunoWorldTileEventCircleBounds, Center) == 8, "Offset mismatch for FJunoWorldTileEventCircleBounds::Center");

// /Script/JunoProceduralWorld.JunoWorldTileMetaData
// Kind: ScriptStruct; super: TableRowBase
struct FJunoWorldTileMetaData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t TileWorld[0x20]; // 0x0008 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t GameplayTags[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoWorldTileMetaData, TileWorld) == 8, "Offset mismatch for FJunoWorldTileMetaData::TileWorld");
static_assert(offsetof(FJunoWorldTileMetaData, GameplayTags) == 40, "Offset mismatch for FJunoWorldTileMetaData::GameplayTags");

// /Script/JunoProceduralWorld.JunoWorldTileOverlayPOIInfo
// Kind: ScriptStruct; super: none
struct FJunoWorldTileOverlayPOIInfo
{
public:
    std::uint8_t SlotGuid[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoWorldTileOverlayPOIInfo, SlotGuid) == 0, "Offset mismatch for FJunoWorldTileOverlayPOIInfo::SlotGuid");

// /Script/JunoProceduralWorld.JunoWorldTilePOILimitBucket
// Kind: ScriptStruct; super: none
struct FJunoWorldTilePOILimitBucket
{
public:
    std::uint32_t PlacedCount; // 0x0000 (Size: 0x4, Type: UInt32Property)
    std::uint32_t Limit; // 0x0004 (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(FJunoWorldTilePOILimitBucket, PlacedCount) == 0, "Offset mismatch for FJunoWorldTilePOILimitBucket::PlacedCount");
static_assert(offsetof(FJunoWorldTilePOILimitBucket, Limit) == 4, "Offset mismatch for FJunoWorldTilePOILimitBucket::Limit");

// /Script/JunoProceduralWorld.JunoWorldTilePreloadActor
// Kind: ScriptStruct; super: none
struct FJunoWorldTilePreloadActor
{
public:
    std::uint8_t ActorClass[0x20]; // 0x0000 (Size: 0x20, Type: SoftClassProperty)
    void* ActorClassPtr; // 0x0020 (Size: 0x8, Type: ClassProperty)
    std::uint8_t ActorLocation[0x18]; // 0x0028 (Size: 0x18, Type: StructProperty)
    std::uint8_t bSpawnServer; // 0x0040 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSpawnClient; // 0x0041 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FJunoWorldTilePreloadActor, ActorClass) == 0, "Offset mismatch for FJunoWorldTilePreloadActor::ActorClass");
static_assert(offsetof(FJunoWorldTilePreloadActor, ActorClassPtr) == 32, "Offset mismatch for FJunoWorldTilePreloadActor::ActorClassPtr");
static_assert(offsetof(FJunoWorldTilePreloadActor, ActorLocation) == 40, "Offset mismatch for FJunoWorldTilePreloadActor::ActorLocation");
static_assert(offsetof(FJunoWorldTilePreloadActor, bSpawnServer) == 64, "Offset mismatch for FJunoWorldTilePreloadActor::bSpawnServer");
static_assert(offsetof(FJunoWorldTilePreloadActor, bSpawnClient) == 65, "Offset mismatch for FJunoWorldTilePreloadActor::bSpawnClient");

// /Script/JunoProceduralWorld.JunoWorldTilePreloadActorInfo
// Kind: ScriptStruct; super: none
struct FJunoWorldTilePreloadActorInfo
{
public:
    std::uint8_t ActorClass[0x20]; // 0x0000 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t bSpawnServer; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSpawnClient; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x6]; // 0x0022
    std::uint8_t SpawnOffset[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoWorldTilePreloadActorInfo, ActorClass) == 0, "Offset mismatch for FJunoWorldTilePreloadActorInfo::ActorClass");
static_assert(offsetof(FJunoWorldTilePreloadActorInfo, bSpawnServer) == 32, "Offset mismatch for FJunoWorldTilePreloadActorInfo::bSpawnServer");
static_assert(offsetof(FJunoWorldTilePreloadActorInfo, bSpawnClient) == 33, "Offset mismatch for FJunoWorldTilePreloadActorInfo::bSpawnClient");
static_assert(offsetof(FJunoWorldTilePreloadActorInfo, SpawnOffset) == 40, "Offset mismatch for FJunoWorldTilePreloadActorInfo::SpawnOffset");

// /Script/JunoProceduralWorld.JunoWorldTileSaveData
// Kind: ScriptStruct; super: none
struct FJunoWorldTileSaveData
{
public:
    TMap<void*, void*> POISlotMetaDatas; // 0x0000 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> CaveSurfaceLayerData; // 0x0010 (Size: 0x10, Type: MapProperty)
    std::int32_t UsedCaveSlotCount; // 0x0020 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0024
    TMap<void*, void*> AppliedOverlayRules; // 0x0028 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> EncounterPOIBuckets; // 0x0038 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> CosmeticPOIBuckets; // 0x0048 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> CaveStates; // 0x0058 (Size: 0x10, Type: MapProperty)
    std::uint8_t CaveFixupVersion; // 0x0068 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FJunoWorldTileSaveData, POISlotMetaDatas) == 0, "Offset mismatch for FJunoWorldTileSaveData::POISlotMetaDatas");
static_assert(offsetof(FJunoWorldTileSaveData, CaveSurfaceLayerData) == 16, "Offset mismatch for FJunoWorldTileSaveData::CaveSurfaceLayerData");
static_assert(offsetof(FJunoWorldTileSaveData, UsedCaveSlotCount) == 32, "Offset mismatch for FJunoWorldTileSaveData::UsedCaveSlotCount");
static_assert(offsetof(FJunoWorldTileSaveData, AppliedOverlayRules) == 40, "Offset mismatch for FJunoWorldTileSaveData::AppliedOverlayRules");
static_assert(offsetof(FJunoWorldTileSaveData, EncounterPOIBuckets) == 56, "Offset mismatch for FJunoWorldTileSaveData::EncounterPOIBuckets");
static_assert(offsetof(FJunoWorldTileSaveData, CosmeticPOIBuckets) == 72, "Offset mismatch for FJunoWorldTileSaveData::CosmeticPOIBuckets");
static_assert(offsetof(FJunoWorldTileSaveData, CaveStates) == 88, "Offset mismatch for FJunoWorldTileSaveData::CaveStates");
static_assert(offsetof(FJunoWorldTileSaveData, CaveFixupVersion) == 104, "Offset mismatch for FJunoWorldTileSaveData::CaveFixupVersion");

// /Script/JunoProceduralWorld.JunoWorldTileSaveData_Cave_PersistentInfo
// Kind: ScriptStruct; super: none
struct FJunoWorldTileSaveData_Cave_PersistentInfo
{
public:
    std::uint8_t Guid[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    TArray<void*> GameplayVolumes; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Bounds[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoWorldTileSaveData_Cave_PersistentInfo, Guid) == 0, "Offset mismatch for FJunoWorldTileSaveData_Cave_PersistentInfo::Guid");
static_assert(offsetof(FJunoWorldTileSaveData_Cave_PersistentInfo, GameplayVolumes) == 16, "Offset mismatch for FJunoWorldTileSaveData_Cave_PersistentInfo::GameplayVolumes");
static_assert(offsetof(FJunoWorldTileSaveData_Cave_PersistentInfo, Bounds) == 32, "Offset mismatch for FJunoWorldTileSaveData_Cave_PersistentInfo::Bounds");

// /Script/JunoProceduralWorld.JunoWorldTileSaveData_InGameClass_PersistentInfo
// Kind: ScriptStruct; super: none
struct FJunoWorldTileSaveData_InGameClass_PersistentInfo
{
public:
    std::uint8_t SaveData[0x70]; // 0x0000 (Size: 0x70, Type: StructProperty)
    TArray<void*> Caves; // 0x0070 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> POIs; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t MissingPOIWaiverState; // 0x0090 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0091
    std::int32_t MissingPOIWaiverEpoch; // 0x0094 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FJunoWorldTileSaveData_InGameClass_PersistentInfo, SaveData) == 0, "Offset mismatch for FJunoWorldTileSaveData_InGameClass_PersistentInfo::SaveData");
static_assert(offsetof(FJunoWorldTileSaveData_InGameClass_PersistentInfo, Caves) == 112, "Offset mismatch for FJunoWorldTileSaveData_InGameClass_PersistentInfo::Caves");
static_assert(offsetof(FJunoWorldTileSaveData_InGameClass_PersistentInfo, POIs) == 128, "Offset mismatch for FJunoWorldTileSaveData_InGameClass_PersistentInfo::POIs");
static_assert(offsetof(FJunoWorldTileSaveData_InGameClass_PersistentInfo, MissingPOIWaiverState) == 144, "Offset mismatch for FJunoWorldTileSaveData_InGameClass_PersistentInfo::MissingPOIWaiverState");
static_assert(offsetof(FJunoWorldTileSaveData_InGameClass_PersistentInfo, MissingPOIWaiverEpoch) == 148, "Offset mismatch for FJunoWorldTileSaveData_InGameClass_PersistentInfo::MissingPOIWaiverEpoch");

// /Script/JunoProceduralWorld.JunoWorldTileSaveData_InGameClass_PersistentInfo_v0
// Kind: ScriptStruct; super: none
struct FJunoWorldTileSaveData_InGameClass_PersistentInfo_v0
{
public:
    std::uint8_t SaveData[0x28]; // 0x0000 (Size: 0x28, Type: StructProperty)
    TArray<void*> Caves; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> POIs; // 0x0038 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJunoWorldTileSaveData_InGameClass_PersistentInfo_v0, SaveData) == 0, "Offset mismatch for FJunoWorldTileSaveData_InGameClass_PersistentInfo_v0::SaveData");
static_assert(offsetof(FJunoWorldTileSaveData_InGameClass_PersistentInfo_v0, Caves) == 40, "Offset mismatch for FJunoWorldTileSaveData_InGameClass_PersistentInfo_v0::Caves");
static_assert(offsetof(FJunoWorldTileSaveData_InGameClass_PersistentInfo_v0, POIs) == 56, "Offset mismatch for FJunoWorldTileSaveData_InGameClass_PersistentInfo_v0::POIs");

// /Script/JunoProceduralWorld.JunoWorldTileSaveData_InGameClass_PersistentInfo_v1
// Kind: ScriptStruct; super: none
struct FJunoWorldTileSaveData_InGameClass_PersistentInfo_v1
{
public:
    std::uint8_t SaveData[0x70]; // 0x0000 (Size: 0x70, Type: StructProperty)
    TArray<void*> Caves; // 0x0070 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> POIs; // 0x0080 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJunoWorldTileSaveData_InGameClass_PersistentInfo_v1, SaveData) == 0, "Offset mismatch for FJunoWorldTileSaveData_InGameClass_PersistentInfo_v1::SaveData");
static_assert(offsetof(FJunoWorldTileSaveData_InGameClass_PersistentInfo_v1, Caves) == 112, "Offset mismatch for FJunoWorldTileSaveData_InGameClass_PersistentInfo_v1::Caves");
static_assert(offsetof(FJunoWorldTileSaveData_InGameClass_PersistentInfo_v1, POIs) == 128, "Offset mismatch for FJunoWorldTileSaveData_InGameClass_PersistentInfo_v1::POIs");

// /Script/JunoProceduralWorld.JunoWorldTileSaveData_InGameClass_PersistentInfo_v2
// Kind: ScriptStruct; super: none
struct FJunoWorldTileSaveData_InGameClass_PersistentInfo_v2
{
public:
    std::uint8_t SaveData[0x70]; // 0x0000 (Size: 0x70, Type: StructProperty)
    TArray<void*> Caves; // 0x0070 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> POIs; // 0x0080 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJunoWorldTileSaveData_InGameClass_PersistentInfo_v2, SaveData) == 0, "Offset mismatch for FJunoWorldTileSaveData_InGameClass_PersistentInfo_v2::SaveData");
static_assert(offsetof(FJunoWorldTileSaveData_InGameClass_PersistentInfo_v2, Caves) == 112, "Offset mismatch for FJunoWorldTileSaveData_InGameClass_PersistentInfo_v2::Caves");
static_assert(offsetof(FJunoWorldTileSaveData_InGameClass_PersistentInfo_v2, POIs) == 128, "Offset mismatch for FJunoWorldTileSaveData_InGameClass_PersistentInfo_v2::POIs");

// /Script/JunoProceduralWorld.JunoWorldTileSaveData_InGameClass_PersistentInfo_v3
// Kind: ScriptStruct; super: none
struct FJunoWorldTileSaveData_InGameClass_PersistentInfo_v3
{
public:
    std::uint8_t SaveData[0x70]; // 0x0000 (Size: 0x70, Type: StructProperty)
    TArray<void*> Caves; // 0x0070 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> POIs; // 0x0080 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJunoWorldTileSaveData_InGameClass_PersistentInfo_v3, SaveData) == 0, "Offset mismatch for FJunoWorldTileSaveData_InGameClass_PersistentInfo_v3::SaveData");
static_assert(offsetof(FJunoWorldTileSaveData_InGameClass_PersistentInfo_v3, Caves) == 112, "Offset mismatch for FJunoWorldTileSaveData_InGameClass_PersistentInfo_v3::Caves");
static_assert(offsetof(FJunoWorldTileSaveData_InGameClass_PersistentInfo_v3, POIs) == 128, "Offset mismatch for FJunoWorldTileSaveData_InGameClass_PersistentInfo_v3::POIs");

// /Script/JunoProceduralWorld.JunoWorldTileSaveData_POI_PersistentInfo
// Kind: ScriptStruct; super: none
struct FJunoWorldTileSaveData_POI_PersistentInfo
{
public:
    std::uint8_t Guid[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t GameplayVolume[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoWorldTileSaveData_POI_PersistentInfo, Guid) == 0, "Offset mismatch for FJunoWorldTileSaveData_POI_PersistentInfo::Guid");
static_assert(offsetof(FJunoWorldTileSaveData_POI_PersistentInfo, GameplayVolume) == 16, "Offset mismatch for FJunoWorldTileSaveData_POI_PersistentInfo::GameplayVolume");

// /Script/JunoProceduralWorld.JunoWorldTileSaveData_v0
// Kind: ScriptStruct; super: none
struct FJunoWorldTileSaveData_v0
{
public:
    TMap<void*, void*> POISlotMetaDatas; // 0x0000 (Size: 0x10, Type: MapProperty)
    TArray<void*> CaveSurfaceData; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bIsCaveSurfaceDataValid; // 0x0020 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FJunoWorldTileSaveData_v0, POISlotMetaDatas) == 0, "Offset mismatch for FJunoWorldTileSaveData_v0::POISlotMetaDatas");
static_assert(offsetof(FJunoWorldTileSaveData_v0, CaveSurfaceData) == 16, "Offset mismatch for FJunoWorldTileSaveData_v0::CaveSurfaceData");
static_assert(offsetof(FJunoWorldTileSaveData_v0, bIsCaveSurfaceDataValid) == 32, "Offset mismatch for FJunoWorldTileSaveData_v0::bIsCaveSurfaceDataValid");

// /Script/JunoProceduralWorld.JunoWorldTileStreamingLevel
// Kind: ScriptStruct; super: none
struct FJunoWorldTileStreamingLevel
{
public:
    std::uint8_t WorldAsset[0x20]; // 0x0000 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t HLODWorldAsset[0x20]; // 0x0020 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t Position[0x18]; // 0x0040 (Size: 0x18, Type: StructProperty)
    std::uint8_t BoundsOffset[0xC]; // 0x0058 (Size: 0xC, Type: StructProperty)
    std::uint8_t BoundsExtent[0xC]; // 0x0064 (Size: 0xC, Type: StructProperty)
    std::uint8_t Guid[0x10]; // 0x0070 (Size: 0x10, Type: StructProperty)
    std::uint8_t PlayspaceGuid[0x10]; // 0x0080 (Size: 0x10, Type: StructProperty)
    std::uint8_t WorldTileGuid[0x10]; // 0x0090 (Size: 0x10, Type: StructProperty)
    std::int32_t PlayspaceLevelKey; // 0x00A0 (Size: 0x4, Type: IntProperty)
    std::uint8_t Type; // 0x00A4 (Size: 0x1, Type: EnumProperty)
    std::uint8_t RotationBits; // 0x00A5 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FJunoWorldTileStreamingLevel, WorldAsset) == 0, "Offset mismatch for FJunoWorldTileStreamingLevel::WorldAsset");
static_assert(offsetof(FJunoWorldTileStreamingLevel, HLODWorldAsset) == 32, "Offset mismatch for FJunoWorldTileStreamingLevel::HLODWorldAsset");
static_assert(offsetof(FJunoWorldTileStreamingLevel, Position) == 64, "Offset mismatch for FJunoWorldTileStreamingLevel::Position");
static_assert(offsetof(FJunoWorldTileStreamingLevel, BoundsOffset) == 88, "Offset mismatch for FJunoWorldTileStreamingLevel::BoundsOffset");
static_assert(offsetof(FJunoWorldTileStreamingLevel, BoundsExtent) == 100, "Offset mismatch for FJunoWorldTileStreamingLevel::BoundsExtent");
static_assert(offsetof(FJunoWorldTileStreamingLevel, Guid) == 112, "Offset mismatch for FJunoWorldTileStreamingLevel::Guid");
static_assert(offsetof(FJunoWorldTileStreamingLevel, PlayspaceGuid) == 128, "Offset mismatch for FJunoWorldTileStreamingLevel::PlayspaceGuid");
static_assert(offsetof(FJunoWorldTileStreamingLevel, WorldTileGuid) == 144, "Offset mismatch for FJunoWorldTileStreamingLevel::WorldTileGuid");
static_assert(offsetof(FJunoWorldTileStreamingLevel, PlayspaceLevelKey) == 160, "Offset mismatch for FJunoWorldTileStreamingLevel::PlayspaceLevelKey");
static_assert(offsetof(FJunoWorldTileStreamingLevel, Type) == 164, "Offset mismatch for FJunoWorldTileStreamingLevel::Type");
static_assert(offsetof(FJunoWorldTileStreamingLevel, RotationBits) == 165, "Offset mismatch for FJunoWorldTileStreamingLevel::RotationBits");

// /Script/JunoProceduralWorld.JunoWorldTileStreamingLevelEntry
// Kind: ScriptStruct; super: FastArraySerializerItem
struct FJunoWorldTileStreamingLevelEntry
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Value[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoWorldTileStreamingLevelEntry, Value) == 16, "Offset mismatch for FJunoWorldTileStreamingLevelEntry::Value");

// /Script/JunoProceduralWorld.JunoWorldTileStreamingLevelFastArray
// Kind: ScriptStruct; super: FastArraySerializer
struct FJunoWorldTileStreamingLevelFastArray
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    TArray<void*> Entries; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    void* WorldTile; // 0x0058 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FJunoWorldTileStreamingLevelFastArray, Entries) == 72, "Offset mismatch for FJunoWorldTileStreamingLevelFastArray::Entries");
static_assert(offsetof(FJunoWorldTileStreamingLevelFastArray, WorldTile) == 88, "Offset mismatch for FJunoWorldTileStreamingLevelFastArray::WorldTile");

// /Script/JunoProceduralWorld.JunoWorldTileUGCRemovalFilter
// Kind: ScriptStruct; super: TableRowBase
struct FJunoWorldTileUGCRemovalFilter
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> ActorClassesThatPreventRemoval; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    std::int32_t MinPrefabCountToPreventRemoval; // 0x0018 (Size: 0x4, Type: IntProperty)
    std::int32_t MinBuildingTypeCountToPreventRemoval; // 0x001C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FJunoWorldTileUGCRemovalFilter, ActorClassesThatPreventRemoval) == 8, "Offset mismatch for FJunoWorldTileUGCRemovalFilter::ActorClassesThatPreventRemoval");
static_assert(offsetof(FJunoWorldTileUGCRemovalFilter, MinPrefabCountToPreventRemoval) == 24, "Offset mismatch for FJunoWorldTileUGCRemovalFilter::MinPrefabCountToPreventRemoval");
static_assert(offsetof(FJunoWorldTileUGCRemovalFilter, MinBuildingTypeCountToPreventRemoval) == 28, "Offset mismatch for FJunoWorldTileUGCRemovalFilter::MinBuildingTypeCountToPreventRemoval");

// /Script/JunoProceduralWorld.LWMClusterPointInfo
// Kind: ScriptStruct; super: none
struct FLWMClusterPointInfo
{
public:
    void* PointProvider; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t SupportedAgents[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FLWMClusterPointInfo, PointProvider) == 0, "Offset mismatch for FLWMClusterPointInfo::PointProvider");
static_assert(offsetof(FLWMClusterPointInfo, SupportedAgents) == 8, "Offset mismatch for FLWMClusterPointInfo::SupportedAgents");

// /Script/JunoProceduralWorld.LandmassPCGRouteInput
// Kind: ScriptStruct; super: none
struct FLandmassPCGRouteInput
{
public:
    FName Name; // 0x0000 (Size: 0x8, Type: NameProperty)
    TArray<void*> Data; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FLandmassPCGRouteInput, Name) == 0, "Offset mismatch for FLandmassPCGRouteInput::Name");
static_assert(offsetof(FLandmassPCGRouteInput, Data) == 8, "Offset mismatch for FLandmassPCGRouteInput::Data");

// /Script/JunoProceduralWorld.LandmassPathfinderRules
// Kind: ScriptStruct; super: none
struct FLandmassPathfinderRules
{
public:
    std::uint8_t VerticalDirection; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float MaxSlopeWhileGoingAgainstLegalVerticalDirection; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bFavorGoingDown; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0009
    float FavorGoingDownWeight; // 0x000C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bUseGravitationalPotentialEnergy; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0011
    float StartingGravitationalPotentialEnergy; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float MaxSlope; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float VerticalCostMultiplier; // 0x001C (Size: 0x4, Type: FloatProperty)
    float SideRollCostMultiplier; // 0x0020 (Size: 0x4, Type: FloatProperty)
    float SearchRadius; // 0x0024 (Size: 0x4, Type: FloatProperty)
    std::uint8_t SearchConeInDegrees[0x10]; // 0x0028 (Size: 0x10, Type: StructProperty)
    float BackStop; // 0x0038 (Size: 0x4, Type: FloatProperty)
    std::int32_t SearchPointsNum; // 0x003C (Size: 0x4, Type: IntProperty)
    float DestinationRadius; // 0x0040 (Size: 0x4, Type: FloatProperty)
    float MinimalViableDistance; // 0x0044 (Size: 0x4, Type: FloatProperty)
    float SnapDistance; // 0x0048 (Size: 0x4, Type: FloatProperty)
    float MaxCost; // 0x004C (Size: 0x4, Type: FloatProperty)
    std::int32_t MaxSteps; // 0x0050 (Size: 0x4, Type: IntProperty)
    float TooCloseDistanceRatio; // 0x0054 (Size: 0x4, Type: FloatProperty)
    float HeuristicToDestinationWeight; // 0x0058 (Size: 0x4, Type: FloatProperty)
    float MaxBoostDistance; // 0x005C (Size: 0x4, Type: FloatProperty)
    float BoostIntensity; // 0x0060 (Size: 0x4, Type: FloatProperty)
    float SnappedSpeedMultiplier; // 0x0064 (Size: 0x4, Type: FloatProperty)
    TArray<void*> RouteClassesAvoidances; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    float WarpFixedCost; // 0x0078 (Size: 0x4, Type: FloatProperty)
    float WarpAngleConstraint; // 0x007C (Size: 0x4, Type: FloatProperty)
    float MaxWarpingDistance; // 0x0080 (Size: 0x4, Type: FloatProperty)
    float MaxWarpingZDelta; // 0x0084 (Size: 0x4, Type: FloatProperty)
    float MinPercentageOfLandOnEachSide; // 0x0088 (Size: 0x4, Type: FloatProperty)
    float WarpZoneApproximatedGreaterHalfWidth; // 0x008C (Size: 0x4, Type: FloatProperty)
    float WarpZoneApproximatedLesserHalfWidth; // 0x0090 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bUseWarpZoneDifficultTerrain; // 0x0094 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0095
    float WarpZoneDifficultTerrainWidth; // 0x0098 (Size: 0x4, Type: FloatProperty)
    float WarpZoneDifficultTerrainCostMult; // 0x009C (Size: 0x4, Type: FloatProperty)
    float TileDimension; // 0x00A0 (Size: 0x4, Type: FloatProperty)
    float TileEdgeAvoidanceDistance; // 0x00A4 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FLandmassPathfinderRules, VerticalDirection) == 0, "Offset mismatch for FLandmassPathfinderRules::VerticalDirection");
static_assert(offsetof(FLandmassPathfinderRules, MaxSlopeWhileGoingAgainstLegalVerticalDirection) == 4, "Offset mismatch for FLandmassPathfinderRules::MaxSlopeWhileGoingAgainstLegalVerticalDirection");
static_assert(offsetof(FLandmassPathfinderRules, bFavorGoingDown) == 8, "Offset mismatch for FLandmassPathfinderRules::bFavorGoingDown");
static_assert(offsetof(FLandmassPathfinderRules, FavorGoingDownWeight) == 12, "Offset mismatch for FLandmassPathfinderRules::FavorGoingDownWeight");
static_assert(offsetof(FLandmassPathfinderRules, bUseGravitationalPotentialEnergy) == 16, "Offset mismatch for FLandmassPathfinderRules::bUseGravitationalPotentialEnergy");
static_assert(offsetof(FLandmassPathfinderRules, StartingGravitationalPotentialEnergy) == 20, "Offset mismatch for FLandmassPathfinderRules::StartingGravitationalPotentialEnergy");
static_assert(offsetof(FLandmassPathfinderRules, MaxSlope) == 24, "Offset mismatch for FLandmassPathfinderRules::MaxSlope");
static_assert(offsetof(FLandmassPathfinderRules, VerticalCostMultiplier) == 28, "Offset mismatch for FLandmassPathfinderRules::VerticalCostMultiplier");
static_assert(offsetof(FLandmassPathfinderRules, SideRollCostMultiplier) == 32, "Offset mismatch for FLandmassPathfinderRules::SideRollCostMultiplier");
static_assert(offsetof(FLandmassPathfinderRules, SearchRadius) == 36, "Offset mismatch for FLandmassPathfinderRules::SearchRadius");
static_assert(offsetof(FLandmassPathfinderRules, SearchConeInDegrees) == 40, "Offset mismatch for FLandmassPathfinderRules::SearchConeInDegrees");
static_assert(offsetof(FLandmassPathfinderRules, BackStop) == 56, "Offset mismatch for FLandmassPathfinderRules::BackStop");
static_assert(offsetof(FLandmassPathfinderRules, SearchPointsNum) == 60, "Offset mismatch for FLandmassPathfinderRules::SearchPointsNum");
static_assert(offsetof(FLandmassPathfinderRules, DestinationRadius) == 64, "Offset mismatch for FLandmassPathfinderRules::DestinationRadius");
static_assert(offsetof(FLandmassPathfinderRules, MinimalViableDistance) == 68, "Offset mismatch for FLandmassPathfinderRules::MinimalViableDistance");
static_assert(offsetof(FLandmassPathfinderRules, SnapDistance) == 72, "Offset mismatch for FLandmassPathfinderRules::SnapDistance");
static_assert(offsetof(FLandmassPathfinderRules, MaxCost) == 76, "Offset mismatch for FLandmassPathfinderRules::MaxCost");
static_assert(offsetof(FLandmassPathfinderRules, MaxSteps) == 80, "Offset mismatch for FLandmassPathfinderRules::MaxSteps");
static_assert(offsetof(FLandmassPathfinderRules, TooCloseDistanceRatio) == 84, "Offset mismatch for FLandmassPathfinderRules::TooCloseDistanceRatio");
static_assert(offsetof(FLandmassPathfinderRules, HeuristicToDestinationWeight) == 88, "Offset mismatch for FLandmassPathfinderRules::HeuristicToDestinationWeight");
static_assert(offsetof(FLandmassPathfinderRules, MaxBoostDistance) == 92, "Offset mismatch for FLandmassPathfinderRules::MaxBoostDistance");
static_assert(offsetof(FLandmassPathfinderRules, BoostIntensity) == 96, "Offset mismatch for FLandmassPathfinderRules::BoostIntensity");
static_assert(offsetof(FLandmassPathfinderRules, SnappedSpeedMultiplier) == 100, "Offset mismatch for FLandmassPathfinderRules::SnappedSpeedMultiplier");
static_assert(offsetof(FLandmassPathfinderRules, RouteClassesAvoidances) == 104, "Offset mismatch for FLandmassPathfinderRules::RouteClassesAvoidances");
static_assert(offsetof(FLandmassPathfinderRules, WarpFixedCost) == 120, "Offset mismatch for FLandmassPathfinderRules::WarpFixedCost");
static_assert(offsetof(FLandmassPathfinderRules, WarpAngleConstraint) == 124, "Offset mismatch for FLandmassPathfinderRules::WarpAngleConstraint");
static_assert(offsetof(FLandmassPathfinderRules, MaxWarpingDistance) == 128, "Offset mismatch for FLandmassPathfinderRules::MaxWarpingDistance");
static_assert(offsetof(FLandmassPathfinderRules, MaxWarpingZDelta) == 132, "Offset mismatch for FLandmassPathfinderRules::MaxWarpingZDelta");
static_assert(offsetof(FLandmassPathfinderRules, MinPercentageOfLandOnEachSide) == 136, "Offset mismatch for FLandmassPathfinderRules::MinPercentageOfLandOnEachSide");
static_assert(offsetof(FLandmassPathfinderRules, WarpZoneApproximatedGreaterHalfWidth) == 140, "Offset mismatch for FLandmassPathfinderRules::WarpZoneApproximatedGreaterHalfWidth");
static_assert(offsetof(FLandmassPathfinderRules, WarpZoneApproximatedLesserHalfWidth) == 144, "Offset mismatch for FLandmassPathfinderRules::WarpZoneApproximatedLesserHalfWidth");
static_assert(offsetof(FLandmassPathfinderRules, bUseWarpZoneDifficultTerrain) == 148, "Offset mismatch for FLandmassPathfinderRules::bUseWarpZoneDifficultTerrain");
static_assert(offsetof(FLandmassPathfinderRules, WarpZoneDifficultTerrainWidth) == 152, "Offset mismatch for FLandmassPathfinderRules::WarpZoneDifficultTerrainWidth");
static_assert(offsetof(FLandmassPathfinderRules, WarpZoneDifficultTerrainCostMult) == 156, "Offset mismatch for FLandmassPathfinderRules::WarpZoneDifficultTerrainCostMult");
static_assert(offsetof(FLandmassPathfinderRules, TileDimension) == 160, "Offset mismatch for FLandmassPathfinderRules::TileDimension");
static_assert(offsetof(FLandmassPathfinderRules, TileEdgeAvoidanceDistance) == 164, "Offset mismatch for FLandmassPathfinderRules::TileEdgeAvoidanceDistance");

// /Script/JunoProceduralWorld.PCGJunoAudioElementRow
// Kind: ScriptStruct; super: TableRowBase
struct FPCGJunoAudioElementRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    float Weight; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x000C
    void* AudioActorToSpawn; // 0x0010 (Size: 0x8, Type: ClassProperty)
    TSoftObjectPtr<void> Level; // 0x0018 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FPCGJunoAudioElementRow, Weight) == 8, "Offset mismatch for FPCGJunoAudioElementRow::Weight");
static_assert(offsetof(FPCGJunoAudioElementRow, AudioActorToSpawn) == 16, "Offset mismatch for FPCGJunoAudioElementRow::AudioActorToSpawn");
static_assert(offsetof(FPCGJunoAudioElementRow, Level) == 24, "Offset mismatch for FPCGJunoAudioElementRow::Level");

// /Script/JunoProceduralWorld.PCGJunoBiomeElementRow
// Kind: ScriptStruct; super: TableRowBase
struct FPCGJunoBiomeElementRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    float Weight; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Type[0x4]; // 0x000C (Size: 0x4, Type: NameProperty)
    TArray<void*> LayerWeights; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t PositionOffset[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    std::uint8_t ScaleMinMax[0x10]; // 0x0038 (Size: 0x10, Type: StructProperty)
    float BlendToVertical; // 0x0048 (Size: 0x4, Type: FloatProperty)
    float RandomLeanAmount; // 0x004C (Size: 0x4, Type: FloatProperty)
    std::uint8_t Representation; // 0x0050 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0051
    void* Actor; // 0x0058 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(FPCGJunoBiomeElementRow, Weight) == 8, "Offset mismatch for FPCGJunoBiomeElementRow::Weight");
static_assert(offsetof(FPCGJunoBiomeElementRow, Type) == 12, "Offset mismatch for FPCGJunoBiomeElementRow::Type");
static_assert(offsetof(FPCGJunoBiomeElementRow, LayerWeights) == 16, "Offset mismatch for FPCGJunoBiomeElementRow::LayerWeights");
static_assert(offsetof(FPCGJunoBiomeElementRow, PositionOffset) == 32, "Offset mismatch for FPCGJunoBiomeElementRow::PositionOffset");
static_assert(offsetof(FPCGJunoBiomeElementRow, ScaleMinMax) == 56, "Offset mismatch for FPCGJunoBiomeElementRow::ScaleMinMax");
static_assert(offsetof(FPCGJunoBiomeElementRow, BlendToVertical) == 72, "Offset mismatch for FPCGJunoBiomeElementRow::BlendToVertical");
static_assert(offsetof(FPCGJunoBiomeElementRow, RandomLeanAmount) == 76, "Offset mismatch for FPCGJunoBiomeElementRow::RandomLeanAmount");
static_assert(offsetof(FPCGJunoBiomeElementRow, Representation) == 80, "Offset mismatch for FPCGJunoBiomeElementRow::Representation");
static_assert(offsetof(FPCGJunoBiomeElementRow, Actor) == 88, "Offset mismatch for FPCGJunoBiomeElementRow::Actor");

// /Script/JunoProceduralWorld.PCGJunoBiomeEntry
// Kind: ScriptStruct; super: none
struct FPCGJunoBiomeEntry
{
public:
    std::uint8_t Name[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    float Density; // 0x0004 (Size: 0x4, Type: FloatProperty)
    TSoftObjectPtr<void> BiomeElements; // 0x0008 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FPCGJunoBiomeEntry, Name) == 0, "Offset mismatch for FPCGJunoBiomeEntry::Name");
static_assert(offsetof(FPCGJunoBiomeEntry, Density) == 4, "Offset mismatch for FPCGJunoBiomeEntry::Density");
static_assert(offsetof(FPCGJunoBiomeEntry, BiomeElements) == 8, "Offset mismatch for FPCGJunoBiomeEntry::BiomeElements");

// /Script/JunoProceduralWorld.PCGJunoCaveDataRegistryRow
// Kind: ScriptStruct; super: TableRowBase
struct FPCGJunoCaveDataRegistryRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TSoftObjectPtr<void> CaveDataCollection; // 0x0008 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FPCGJunoCaveDataRegistryRow, CaveDataCollection) == 8, "Offset mismatch for FPCGJunoCaveDataRegistryRow::CaveDataCollection");

// /Script/JunoProceduralWorld.PCGJunoCullDistanceGameplayTagRow
// Kind: ScriptStruct; super: TableRowBase
struct FPCGJunoCullDistanceGameplayTagRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t CullDistanceTag[0x4]; // 0x0008 (Size: 0x4, Type: StructProperty)
    std::int32_t EndCullDistance; // 0x000C (Size: 0x4, Type: IntProperty)
    float LODInstanceScale; // 0x0010 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FPCGJunoCullDistanceGameplayTagRow, CullDistanceTag) == 8, "Offset mismatch for FPCGJunoCullDistanceGameplayTagRow::CullDistanceTag");
static_assert(offsetof(FPCGJunoCullDistanceGameplayTagRow, EndCullDistance) == 12, "Offset mismatch for FPCGJunoCullDistanceGameplayTagRow::EndCullDistance");
static_assert(offsetof(FPCGJunoCullDistanceGameplayTagRow, LODInstanceScale) == 16, "Offset mismatch for FPCGJunoCullDistanceGameplayTagRow::LODInstanceScale");

// /Script/JunoProceduralWorld.PCGJunoFilterPointsBasedOnLandscapeSlopeContext
// Kind: ScriptStruct; super: PCGContext
struct FPCGJunoFilterPointsBasedOnLandscapeSlopeContext
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoProceduralWorld.PCGJunoPOIElementRow
// Kind: ScriptStruct; super: TableRowBase
struct FPCGJunoPOIElementRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    float Weight; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float BoundsMultiplier; // 0x000C (Size: 0x4, Type: FloatProperty)
    void* POIActor; // 0x0010 (Size: 0x8, Type: ClassProperty)
    void* BuildingFoundation; // 0x0018 (Size: 0x8, Type: ClassProperty)
    TSoftObjectPtr<void> Level; // 0x0020 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FPCGJunoPOIElementRow, Weight) == 8, "Offset mismatch for FPCGJunoPOIElementRow::Weight");
static_assert(offsetof(FPCGJunoPOIElementRow, BoundsMultiplier) == 12, "Offset mismatch for FPCGJunoPOIElementRow::BoundsMultiplier");
static_assert(offsetof(FPCGJunoPOIElementRow, POIActor) == 16, "Offset mismatch for FPCGJunoPOIElementRow::POIActor");
static_assert(offsetof(FPCGJunoPOIElementRow, BuildingFoundation) == 24, "Offset mismatch for FPCGJunoPOIElementRow::BuildingFoundation");
static_assert(offsetof(FPCGJunoPOIElementRow, Level) == 32, "Offset mismatch for FPCGJunoPOIElementRow::Level");

// /Script/JunoProceduralWorld.PCGJunoPOISlotElementRow
// Kind: ScriptStruct; super: TableRowBase
struct FPCGJunoPOISlotElementRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    float Weight; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Size; // 0x000C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x000D
    void* POISlotActor; // 0x0010 (Size: 0x8, Type: ClassProperty)
    std::uint8_t PotentialPOIs[0x20]; // 0x0018 (Size: 0x20, Type: SoftObjectProperty)
    TSoftObjectPtr<void> TerrainHeightPatch; // 0x0038 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FPCGJunoPOISlotElementRow, Weight) == 8, "Offset mismatch for FPCGJunoPOISlotElementRow::Weight");
static_assert(offsetof(FPCGJunoPOISlotElementRow, Size) == 12, "Offset mismatch for FPCGJunoPOISlotElementRow::Size");
static_assert(offsetof(FPCGJunoPOISlotElementRow, POISlotActor) == 16, "Offset mismatch for FPCGJunoPOISlotElementRow::POISlotActor");
static_assert(offsetof(FPCGJunoPOISlotElementRow, PotentialPOIs) == 24, "Offset mismatch for FPCGJunoPOISlotElementRow::PotentialPOIs");
static_assert(offsetof(FPCGJunoPOISlotElementRow, TerrainHeightPatch) == 56, "Offset mismatch for FPCGJunoPOISlotElementRow::TerrainHeightPatch");

// /Script/JunoProceduralWorld.PCGJunoPathfindContext
// Kind: ScriptStruct; super: PCGContext
struct FPCGJunoPathfindContext
{
public:
    std::uint8_t Pad_0000[0x198]; // 0x0000
    TWeakObjectPtr<void> LandmassProceduralRoute; // 0x0198 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FPCGJunoPathfindContext, LandmassProceduralRoute) == 408, "Offset mismatch for FPCGJunoPathfindContext::LandmassProceduralRoute");

// /Script/JunoProceduralWorld.PCGJunoPersistenceMigrationResult
// Kind: ScriptStruct; super: none
struct FPCGJunoPersistenceMigrationResult
{
public:
    std::uint8_t Flags; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    void* NewStreamingGameplayVolume; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FPCGJunoPersistenceMigrationResult, Flags) == 0, "Offset mismatch for FPCGJunoPersistenceMigrationResult::Flags");
static_assert(offsetof(FPCGJunoPersistenceMigrationResult, NewStreamingGameplayVolume) == 8, "Offset mismatch for FPCGJunoPersistenceMigrationResult::NewStreamingGameplayVolume");

// /Script/JunoProceduralWorld.PCGJunoRoadAINavigationContext
// Kind: ScriptStruct; super: PCGContext
struct FPCGJunoRoadAINavigationContext
{
public:
    std::uint8_t Pad_0000[0x1A8]; // 0x0000
    void* RoadClusterClass; // 0x01A8 (Size: 0x8, Type: ClassProperty)
    void* PatrolPathClass; // 0x01B0 (Size: 0x8, Type: ClassProperty)
    void* PatrolPointClass; // 0x01B8 (Size: 0x8, Type: ClassProperty)
    void* ManagedActors; // 0x01C0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FPCGJunoRoadAINavigationContext, RoadClusterClass) == 424, "Offset mismatch for FPCGJunoRoadAINavigationContext::RoadClusterClass");
static_assert(offsetof(FPCGJunoRoadAINavigationContext, PatrolPathClass) == 432, "Offset mismatch for FPCGJunoRoadAINavigationContext::PatrolPathClass");
static_assert(offsetof(FPCGJunoRoadAINavigationContext, PatrolPointClass) == 440, "Offset mismatch for FPCGJunoRoadAINavigationContext::PatrolPointClass");
static_assert(offsetof(FPCGJunoRoadAINavigationContext, ManagedActors) == 448, "Offset mismatch for FPCGJunoRoadAINavigationContext::ManagedActors");

// /Script/JunoProceduralWorld.PCGJunoSpawnLivingWorldStaticPointContext
// Kind: ScriptStruct; super: PCGContext
struct FPCGJunoSpawnLivingWorldStaticPointContext
{
public:
    std::uint8_t Pad_0000[0x1A8]; // 0x0000
    void* StaticPointClass; // 0x01A8 (Size: 0x8, Type: ClassProperty)
    void* LightStaticPointClass; // 0x01B0 (Size: 0x8, Type: ClassProperty)
    void* LightStaticPointNavInfoClass; // 0x01B8 (Size: 0x8, Type: ClassProperty)
    void* PointClusterClass; // 0x01C0 (Size: 0x8, Type: ClassProperty)
    void* ManagedActors; // 0x01C8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ClusterTag[0x1]; // 0x01D0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPCGJunoSpawnLivingWorldStaticPointContext, StaticPointClass) == 424, "Offset mismatch for FPCGJunoSpawnLivingWorldStaticPointContext::StaticPointClass");
static_assert(offsetof(FPCGJunoSpawnLivingWorldStaticPointContext, LightStaticPointClass) == 432, "Offset mismatch for FPCGJunoSpawnLivingWorldStaticPointContext::LightStaticPointClass");
static_assert(offsetof(FPCGJunoSpawnLivingWorldStaticPointContext, LightStaticPointNavInfoClass) == 440, "Offset mismatch for FPCGJunoSpawnLivingWorldStaticPointContext::LightStaticPointNavInfoClass");
static_assert(offsetof(FPCGJunoSpawnLivingWorldStaticPointContext, PointClusterClass) == 448, "Offset mismatch for FPCGJunoSpawnLivingWorldStaticPointContext::PointClusterClass");
static_assert(offsetof(FPCGJunoSpawnLivingWorldStaticPointContext, ManagedActors) == 456, "Offset mismatch for FPCGJunoSpawnLivingWorldStaticPointContext::ManagedActors");
static_assert(offsetof(FPCGJunoSpawnLivingWorldStaticPointContext, ClusterTag) == 464, "Offset mismatch for FPCGJunoSpawnLivingWorldStaticPointContext::ClusterTag");

// /Script/JunoProceduralWorld.PCGJunoStoreDataPin
// Kind: ScriptStruct; super: none
struct FPCGJunoStoreDataPin
{
public:
    std::uint8_t Name[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t Features[0x1]; // 0x0004 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPCGJunoStoreDataPin, Name) == 0, "Offset mismatch for FPCGJunoStoreDataPin::Name");
static_assert(offsetof(FPCGJunoStoreDataPin, Features) == 4, "Offset mismatch for FPCGJunoStoreDataPin::Features");

// /Script/JunoProceduralWorld.PCGJunoWorldEventTile
// Kind: ScriptStruct; super: PCGJunoWorldTile
struct FPCGJunoWorldEventTile
{
public:
    std::uint8_t Pad_0000[0x1C8]; // 0x0000
    FName EventTileName; // 0x01C8 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FPCGJunoWorldEventTile, EventTileName) == 456, "Offset mismatch for FPCGJunoWorldEventTile::EventTileName");

// /Script/JunoProceduralWorld.PCGJunoWorldTile
// Kind: ScriptStruct; super: TableRowBase
struct FPCGJunoWorldTile
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Status; // 0x0008 (Size: 0x1, Type: EnumProperty)
    std::uint8_t GenerationType; // 0x0009 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bIsDebugTile; // 0x000A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x000B
    std::int32_t Version; // 0x000C (Size: 0x4, Type: IntProperty)
    std::uint8_t OriginRegistryId[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::uint8_t Terrain[0x20]; // 0x0018 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t MiniMapTexture[0x20]; // 0x0038 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t StaticBiomeDecorations[0x20]; // 0x0058 (Size: 0x20, Type: SoftObjectProperty)
    TArray<void*> Overlays; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PrimaryBiomeResourceVariations; // 0x0088 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t PrimaryBiomeResource[0x20]; // 0x0098 (Size: 0x20, Type: SoftObjectProperty)
    TArray<void*> SkyIslandsMiniMapTexturesVariations; // 0x00B8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t SkyIslandsMiniMapTexture[0x20]; // 0x00C8 (Size: 0x20, Type: SoftObjectProperty)
    TArray<void*> SlotBiomes; // 0x00E8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t NWBiome; // 0x00F8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t NEBiome; // 0x00F9 (Size: 0x1, Type: EnumProperty)
    std::uint8_t SEBiome; // 0x00FA (Size: 0x1, Type: EnumProperty)
    std::uint8_t SWBiome; // 0x00FB (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x4]; // 0x00FC
    TArray<void*> LayerSwaps; // 0x0100 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t POISlots[0x20]; // 0x0110 (Size: 0x20, Type: SoftObjectProperty)
    FName ReservedAreaName; // 0x0130 (Size: 0x8, Type: NameProperty)
    std::uint8_t GameplayTags[0x20]; // 0x0138 (Size: 0x20, Type: StructProperty)
    std::uint8_t AdditionalGameplayTags[0x20]; // 0x0158 (Size: 0x20, Type: StructProperty)
    std::uint8_t bIsReplaceable; // 0x0178 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x7]; // 0x0179
    std::uint8_t RequiredPOISelectorTags[0x20]; // 0x0180 (Size: 0x20, Type: StructProperty)
    std::uint8_t TileManipulatorClass[0x20]; // 0x01A0 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t TilesetTag[0x1]; // 0x01C0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPCGJunoWorldTile, Status) == 8, "Offset mismatch for FPCGJunoWorldTile::Status");
static_assert(offsetof(FPCGJunoWorldTile, GenerationType) == 9, "Offset mismatch for FPCGJunoWorldTile::GenerationType");
static_assert(offsetof(FPCGJunoWorldTile, bIsDebugTile) == 10, "Offset mismatch for FPCGJunoWorldTile::bIsDebugTile");
static_assert(offsetof(FPCGJunoWorldTile, Version) == 12, "Offset mismatch for FPCGJunoWorldTile::Version");
static_assert(offsetof(FPCGJunoWorldTile, OriginRegistryId) == 16, "Offset mismatch for FPCGJunoWorldTile::OriginRegistryId");
static_assert(offsetof(FPCGJunoWorldTile, Terrain) == 24, "Offset mismatch for FPCGJunoWorldTile::Terrain");
static_assert(offsetof(FPCGJunoWorldTile, MiniMapTexture) == 56, "Offset mismatch for FPCGJunoWorldTile::MiniMapTexture");
static_assert(offsetof(FPCGJunoWorldTile, StaticBiomeDecorations) == 88, "Offset mismatch for FPCGJunoWorldTile::StaticBiomeDecorations");
static_assert(offsetof(FPCGJunoWorldTile, Overlays) == 120, "Offset mismatch for FPCGJunoWorldTile::Overlays");
static_assert(offsetof(FPCGJunoWorldTile, PrimaryBiomeResourceVariations) == 136, "Offset mismatch for FPCGJunoWorldTile::PrimaryBiomeResourceVariations");
static_assert(offsetof(FPCGJunoWorldTile, PrimaryBiomeResource) == 152, "Offset mismatch for FPCGJunoWorldTile::PrimaryBiomeResource");
static_assert(offsetof(FPCGJunoWorldTile, SkyIslandsMiniMapTexturesVariations) == 184, "Offset mismatch for FPCGJunoWorldTile::SkyIslandsMiniMapTexturesVariations");
static_assert(offsetof(FPCGJunoWorldTile, SkyIslandsMiniMapTexture) == 200, "Offset mismatch for FPCGJunoWorldTile::SkyIslandsMiniMapTexture");
static_assert(offsetof(FPCGJunoWorldTile, SlotBiomes) == 232, "Offset mismatch for FPCGJunoWorldTile::SlotBiomes");
static_assert(offsetof(FPCGJunoWorldTile, NWBiome) == 248, "Offset mismatch for FPCGJunoWorldTile::NWBiome");
static_assert(offsetof(FPCGJunoWorldTile, NEBiome) == 249, "Offset mismatch for FPCGJunoWorldTile::NEBiome");
static_assert(offsetof(FPCGJunoWorldTile, SEBiome) == 250, "Offset mismatch for FPCGJunoWorldTile::SEBiome");
static_assert(offsetof(FPCGJunoWorldTile, SWBiome) == 251, "Offset mismatch for FPCGJunoWorldTile::SWBiome");
static_assert(offsetof(FPCGJunoWorldTile, LayerSwaps) == 256, "Offset mismatch for FPCGJunoWorldTile::LayerSwaps");
static_assert(offsetof(FPCGJunoWorldTile, POISlots) == 272, "Offset mismatch for FPCGJunoWorldTile::POISlots");
static_assert(offsetof(FPCGJunoWorldTile, ReservedAreaName) == 304, "Offset mismatch for FPCGJunoWorldTile::ReservedAreaName");
static_assert(offsetof(FPCGJunoWorldTile, GameplayTags) == 312, "Offset mismatch for FPCGJunoWorldTile::GameplayTags");
static_assert(offsetof(FPCGJunoWorldTile, AdditionalGameplayTags) == 344, "Offset mismatch for FPCGJunoWorldTile::AdditionalGameplayTags");
static_assert(offsetof(FPCGJunoWorldTile, bIsReplaceable) == 376, "Offset mismatch for FPCGJunoWorldTile::bIsReplaceable");
static_assert(offsetof(FPCGJunoWorldTile, RequiredPOISelectorTags) == 384, "Offset mismatch for FPCGJunoWorldTile::RequiredPOISelectorTags");
static_assert(offsetof(FPCGJunoWorldTile, TileManipulatorClass) == 416, "Offset mismatch for FPCGJunoWorldTile::TileManipulatorClass");
static_assert(offsetof(FPCGJunoWorldTile, TilesetTag) == 448, "Offset mismatch for FPCGJunoWorldTile::TilesetTag");

// /Script/JunoProceduralWorld.PCGJunoWorldTilePOI
// Kind: ScriptStruct; super: TableRowBase
struct FPCGJunoWorldTilePOI
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t WorldAsset[0x20]; // 0x0008 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t HLODWorldAsset[0x20]; // 0x0028 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t bEnabled; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Size; // 0x0049 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x6]; // 0x004A
    std::uint8_t SlotSizes[0x10]; // 0x0050 (Size: 0x10, Type: SetProperty)
    std::uint8_t BoundsSize[0x18]; // 0x0060 (Size: 0x18, Type: StructProperty)
    std::uint8_t Biomes[0x10]; // 0x0078 (Size: 0x10, Type: SetProperty)
    std::uint8_t Tags[0x10]; // 0x0088 (Size: 0x10, Type: SetProperty)
    std::uint8_t Type; // 0x0098 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0099
    std::uint8_t EncounterCapabilities[0x20]; // 0x00A0 (Size: 0x20, Type: StructProperty)
    std::uint8_t bCanRerollEncounters; // 0x00C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x7]; // 0x00C1
    std::uint8_t RerollCooldownTimeOverride[0x28]; // 0x00C8 (Size: 0x28, Type: StructProperty)
    std::int32_t EncounterVariantCount; // 0x00F0 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0004[0x4]; // 0x00F4
    std::uint8_t EncounterCategoryTable[0x20]; // 0x00F8 (Size: 0x20, Type: SoftObjectProperty)
    TArray<void*> Teleporters; // 0x0118 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PersistenceMigrations; // 0x0128 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t DistributionMethod; // 0x0138 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bUsePOINameForBiomeMessage; // 0x0139 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bReportCreationToTelemetry; // 0x013A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowedToBeReplaced; // 0x013B (Size: 0x1, Type: BoolProperty)
    std::int32_t TrackedActorBudgetCost; // 0x013C (Size: 0x4, Type: IntProperty)
    std::uint8_t IneligibleAction; // 0x0140 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0005[0x3]; // 0x0141
    std::uint8_t ReplacementPOI[0x1]; // 0x0144 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPCGJunoWorldTilePOI, WorldAsset) == 8, "Offset mismatch for FPCGJunoWorldTilePOI::WorldAsset");
static_assert(offsetof(FPCGJunoWorldTilePOI, HLODWorldAsset) == 40, "Offset mismatch for FPCGJunoWorldTilePOI::HLODWorldAsset");
static_assert(offsetof(FPCGJunoWorldTilePOI, bEnabled) == 72, "Offset mismatch for FPCGJunoWorldTilePOI::bEnabled");
static_assert(offsetof(FPCGJunoWorldTilePOI, Size) == 73, "Offset mismatch for FPCGJunoWorldTilePOI::Size");
static_assert(offsetof(FPCGJunoWorldTilePOI, SlotSizes) == 80, "Offset mismatch for FPCGJunoWorldTilePOI::SlotSizes");
static_assert(offsetof(FPCGJunoWorldTilePOI, BoundsSize) == 96, "Offset mismatch for FPCGJunoWorldTilePOI::BoundsSize");
static_assert(offsetof(FPCGJunoWorldTilePOI, Biomes) == 120, "Offset mismatch for FPCGJunoWorldTilePOI::Biomes");
static_assert(offsetof(FPCGJunoWorldTilePOI, Tags) == 136, "Offset mismatch for FPCGJunoWorldTilePOI::Tags");
static_assert(offsetof(FPCGJunoWorldTilePOI, Type) == 152, "Offset mismatch for FPCGJunoWorldTilePOI::Type");
static_assert(offsetof(FPCGJunoWorldTilePOI, EncounterCapabilities) == 160, "Offset mismatch for FPCGJunoWorldTilePOI::EncounterCapabilities");
static_assert(offsetof(FPCGJunoWorldTilePOI, bCanRerollEncounters) == 192, "Offset mismatch for FPCGJunoWorldTilePOI::bCanRerollEncounters");
static_assert(offsetof(FPCGJunoWorldTilePOI, RerollCooldownTimeOverride) == 200, "Offset mismatch for FPCGJunoWorldTilePOI::RerollCooldownTimeOverride");
static_assert(offsetof(FPCGJunoWorldTilePOI, EncounterVariantCount) == 240, "Offset mismatch for FPCGJunoWorldTilePOI::EncounterVariantCount");
static_assert(offsetof(FPCGJunoWorldTilePOI, EncounterCategoryTable) == 248, "Offset mismatch for FPCGJunoWorldTilePOI::EncounterCategoryTable");
static_assert(offsetof(FPCGJunoWorldTilePOI, Teleporters) == 280, "Offset mismatch for FPCGJunoWorldTilePOI::Teleporters");
static_assert(offsetof(FPCGJunoWorldTilePOI, PersistenceMigrations) == 296, "Offset mismatch for FPCGJunoWorldTilePOI::PersistenceMigrations");
static_assert(offsetof(FPCGJunoWorldTilePOI, DistributionMethod) == 312, "Offset mismatch for FPCGJunoWorldTilePOI::DistributionMethod");
static_assert(offsetof(FPCGJunoWorldTilePOI, bUsePOINameForBiomeMessage) == 313, "Offset mismatch for FPCGJunoWorldTilePOI::bUsePOINameForBiomeMessage");
static_assert(offsetof(FPCGJunoWorldTilePOI, bReportCreationToTelemetry) == 314, "Offset mismatch for FPCGJunoWorldTilePOI::bReportCreationToTelemetry");
static_assert(offsetof(FPCGJunoWorldTilePOI, bAllowedToBeReplaced) == 315, "Offset mismatch for FPCGJunoWorldTilePOI::bAllowedToBeReplaced");
static_assert(offsetof(FPCGJunoWorldTilePOI, TrackedActorBudgetCost) == 316, "Offset mismatch for FPCGJunoWorldTilePOI::TrackedActorBudgetCost");
static_assert(offsetof(FPCGJunoWorldTilePOI, IneligibleAction) == 320, "Offset mismatch for FPCGJunoWorldTilePOI::IneligibleAction");
static_assert(offsetof(FPCGJunoWorldTilePOI, ReplacementPOI) == 324, "Offset mismatch for FPCGJunoWorldTilePOI::ReplacementPOI");

// /Script/JunoProceduralWorld.PCGJunoWorldTilePOISlot
// Kind: ScriptStruct; super: TableRowBase
struct FPCGJunoWorldTilePOISlot
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Position[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    TArray<void*> Tags; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Size; // 0x0030 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0031
    std::uint8_t POISlotGuid[0x1]; // 0x0034 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPCGJunoWorldTilePOISlot, Position) == 8, "Offset mismatch for FPCGJunoWorldTilePOISlot::Position");
static_assert(offsetof(FPCGJunoWorldTilePOISlot, Tags) == 32, "Offset mismatch for FPCGJunoWorldTilePOISlot::Tags");
static_assert(offsetof(FPCGJunoWorldTilePOISlot, Size) == 48, "Offset mismatch for FPCGJunoWorldTilePOISlot::Size");
static_assert(offsetof(FPCGJunoWorldTilePOISlot, POISlotGuid) == 52, "Offset mismatch for FPCGJunoWorldTilePOISlot::POISlotGuid");

// /Script/JunoProceduralWorld.PCGJunoWorldTilePOITeleporter
// Kind: ScriptStruct; super: none
struct FPCGJunoWorldTilePOITeleporter
{
public:
    void* TeleporterClass; // 0x0000 (Size: 0x8, Type: ClassProperty)
    std::uint8_t Pad_0000[0x8]; // 0x0008
    std::uint8_t Offset[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPCGJunoWorldTilePOITeleporter, TeleporterClass) == 0, "Offset mismatch for FPCGJunoWorldTilePOITeleporter::TeleporterClass");
static_assert(offsetof(FPCGJunoWorldTilePOITeleporter, Offset) == 16, "Offset mismatch for FPCGJunoWorldTilePOITeleporter::Offset");

// /Script/JunoProceduralWorld.PathfinderGuideSet
// Kind: ScriptStruct; super: none
struct FPathfinderGuideSet
{
public:
    TArray<void*> Guides; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPathfinderGuideSet, Guides) == 0, "Offset mismatch for FPathfinderGuideSet::Guides");

// /Script/JunoProceduralWorld.PathfinderHistory
// Kind: ScriptStruct; super: none
struct FPathfinderHistory
{
public:
    std::uint8_t NearestLocationToDestination[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    float NearestLocationToDestinationDistance; // 0x0018 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x24]; // 0x001C
    std::int32_t TotalPushSteps; // 0x0040 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FPathfinderHistory, NearestLocationToDestination) == 0, "Offset mismatch for FPathfinderHistory::NearestLocationToDestination");
static_assert(offsetof(FPathfinderHistory, NearestLocationToDestinationDistance) == 24, "Offset mismatch for FPathfinderHistory::NearestLocationToDestinationDistance");
static_assert(offsetof(FPathfinderHistory, TotalPushSteps) == 64, "Offset mismatch for FPathfinderHistory::TotalPushSteps");

// /Script/JunoProceduralWorld.ProceduralRiverAnchor
// Kind: ScriptStruct; super: none
struct FProceduralRiverAnchor
{
public:
    std::uint8_t Location2D[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t Type; // 0x0010 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0011
    std::int32_t GroupID; // 0x0014 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FProceduralRiverAnchor, Location2D) == 0, "Offset mismatch for FProceduralRiverAnchor::Location2D");
static_assert(offsetof(FProceduralRiverAnchor, Type) == 16, "Offset mismatch for FProceduralRiverAnchor::Type");
static_assert(offsetof(FProceduralRiverAnchor, GroupID) == 20, "Offset mismatch for FProceduralRiverAnchor::GroupID");

// /Script/JunoProceduralWorld.ProceduralRiverAnchorConnectionRules
// Kind: ScriptStruct; super: none
struct FProceduralRiverAnchorConnectionRules
{
public:
    float MaxConnectionSlope; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    std::uint8_t CarveDownNearSourceAnchor[0x48]; // 0x0008 (Size: 0x48, Type: StructProperty)
    std::uint8_t CarveDownNearTargetAnchor[0x48]; // 0x0050 (Size: 0x48, Type: StructProperty)
    std::uint8_t WidthMultNearSourceAnchor[0x48]; // 0x0098 (Size: 0x48, Type: StructProperty)
    std::uint8_t WidthMultNearTargetAnchor[0x48]; // 0x00E0 (Size: 0x48, Type: StructProperty)
    std::uint8_t VelocityMultNearSourceAnchor[0x48]; // 0x0128 (Size: 0x48, Type: StructProperty)
    std::uint8_t VelocityMultNearTargetAnchor[0x48]; // 0x0170 (Size: 0x48, Type: StructProperty)
    std::uint8_t CoastlineAnchorZRange[0x10]; // 0x01B8 (Size: 0x10, Type: StructProperty)
    float CoastlineProbeAboveZeroPercent; // 0x01C8 (Size: 0x4, Type: FloatProperty)
    float CoastlineProbeBelowZeroPercent; // 0x01CC (Size: 0x4, Type: FloatProperty)
    std::uint8_t DeepSeaAnchorZRange[0x10]; // 0x01D0 (Size: 0x10, Type: StructProperty)
    float DeepSeaAnchorMinDistanceToCoastline; // 0x01E0 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FProceduralRiverAnchorConnectionRules, MaxConnectionSlope) == 0, "Offset mismatch for FProceduralRiverAnchorConnectionRules::MaxConnectionSlope");
static_assert(offsetof(FProceduralRiverAnchorConnectionRules, CarveDownNearSourceAnchor) == 8, "Offset mismatch for FProceduralRiverAnchorConnectionRules::CarveDownNearSourceAnchor");
static_assert(offsetof(FProceduralRiverAnchorConnectionRules, CarveDownNearTargetAnchor) == 80, "Offset mismatch for FProceduralRiverAnchorConnectionRules::CarveDownNearTargetAnchor");
static_assert(offsetof(FProceduralRiverAnchorConnectionRules, WidthMultNearSourceAnchor) == 152, "Offset mismatch for FProceduralRiverAnchorConnectionRules::WidthMultNearSourceAnchor");
static_assert(offsetof(FProceduralRiverAnchorConnectionRules, WidthMultNearTargetAnchor) == 224, "Offset mismatch for FProceduralRiverAnchorConnectionRules::WidthMultNearTargetAnchor");
static_assert(offsetof(FProceduralRiverAnchorConnectionRules, VelocityMultNearSourceAnchor) == 296, "Offset mismatch for FProceduralRiverAnchorConnectionRules::VelocityMultNearSourceAnchor");
static_assert(offsetof(FProceduralRiverAnchorConnectionRules, VelocityMultNearTargetAnchor) == 368, "Offset mismatch for FProceduralRiverAnchorConnectionRules::VelocityMultNearTargetAnchor");
static_assert(offsetof(FProceduralRiverAnchorConnectionRules, CoastlineAnchorZRange) == 440, "Offset mismatch for FProceduralRiverAnchorConnectionRules::CoastlineAnchorZRange");
static_assert(offsetof(FProceduralRiverAnchorConnectionRules, CoastlineProbeAboveZeroPercent) == 456, "Offset mismatch for FProceduralRiverAnchorConnectionRules::CoastlineProbeAboveZeroPercent");
static_assert(offsetof(FProceduralRiverAnchorConnectionRules, CoastlineProbeBelowZeroPercent) == 460, "Offset mismatch for FProceduralRiverAnchorConnectionRules::CoastlineProbeBelowZeroPercent");
static_assert(offsetof(FProceduralRiverAnchorConnectionRules, DeepSeaAnchorZRange) == 464, "Offset mismatch for FProceduralRiverAnchorConnectionRules::DeepSeaAnchorZRange");
static_assert(offsetof(FProceduralRiverAnchorConnectionRules, DeepSeaAnchorMinDistanceToCoastline) == 480, "Offset mismatch for FProceduralRiverAnchorConnectionRules::DeepSeaAnchorMinDistanceToCoastline");

// /Script/JunoProceduralWorld.ProceduralRiverGenRules
// Kind: ScriptStruct; super: none
struct FProceduralRiverGenRules
{
public:
    std::uint8_t AnchorConnectionRules[0x1E8]; // 0x0000 (Size: 0x1E8, Type: StructProperty)
    std::uint8_t ProceduralRiverShapeRules[0x120]; // 0x01E8 (Size: 0x120, Type: StructProperty)
    std::uint8_t PathfinderRules[0x1]; // 0x0308 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FProceduralRiverGenRules, AnchorConnectionRules) == 0, "Offset mismatch for FProceduralRiverGenRules::AnchorConnectionRules");
static_assert(offsetof(FProceduralRiverGenRules, ProceduralRiverShapeRules) == 488, "Offset mismatch for FProceduralRiverGenRules::ProceduralRiverShapeRules");
static_assert(offsetof(FProceduralRiverGenRules, PathfinderRules) == 776, "Offset mismatch for FProceduralRiverGenRules::PathfinderRules");

// /Script/JunoProceduralWorld.ProceduralRiverShapeRules
// Kind: ScriptStruct; super: none
struct FProceduralRiverShapeRules
{
public:
    std::uint8_t DepthCurve[0x48]; // 0x0000 (Size: 0x48, Type: StructProperty)
    std::uint8_t WidthCurve[0x48]; // 0x0048 (Size: 0x48, Type: StructProperty)
    std::uint8_t VelocityCurve[0x48]; // 0x0090 (Size: 0x48, Type: StructProperty)
    std::uint8_t VelocityBySlope[0x1]; // 0x00D8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FProceduralRiverShapeRules, DepthCurve) == 0, "Offset mismatch for FProceduralRiverShapeRules::DepthCurve");
static_assert(offsetof(FProceduralRiverShapeRules, WidthCurve) == 72, "Offset mismatch for FProceduralRiverShapeRules::WidthCurve");
static_assert(offsetof(FProceduralRiverShapeRules, VelocityCurve) == 144, "Offset mismatch for FProceduralRiverShapeRules::VelocityCurve");
static_assert(offsetof(FProceduralRiverShapeRules, VelocityBySlope) == 216, "Offset mismatch for FProceduralRiverShapeRules::VelocityBySlope");

// /Script/JunoProceduralWorld.ProceduralRoadGenRules
// Kind: ScriptStruct; super: none
struct FProceduralRoadGenRules
{
public:
    std::uint8_t PathfinderRules[0xA8]; // 0x0000 (Size: 0xA8, Type: StructProperty)
    std::uint8_t ControlPointParams[0x60]; // 0x00A8 (Size: 0x60, Type: StructProperty)
    std::uint8_t SegmentParams[0x1]; // 0x0108 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FProceduralRoadGenRules, PathfinderRules) == 0, "Offset mismatch for FProceduralRoadGenRules::PathfinderRules");
static_assert(offsetof(FProceduralRoadGenRules, ControlPointParams) == 168, "Offset mismatch for FProceduralRoadGenRules::ControlPointParams");
static_assert(offsetof(FProceduralRoadGenRules, SegmentParams) == 264, "Offset mismatch for FProceduralRoadGenRules::SegmentParams");

// /Script/JunoProceduralWorld.ProceduralRouteJunoTileInfo
// Kind: ScriptStruct; super: none
struct FProceduralRouteJunoTileInfo
{
public:
    std::int32_t TileIndex; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t TileID; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::uint8_t GuideSetSelectMethod; // 0x0008 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FProceduralRouteJunoTileInfo, TileIndex) == 0, "Offset mismatch for FProceduralRouteJunoTileInfo::TileIndex");
static_assert(offsetof(FProceduralRouteJunoTileInfo, TileID) == 4, "Offset mismatch for FProceduralRouteJunoTileInfo::TileID");
static_assert(offsetof(FProceduralRouteJunoTileInfo, GuideSetSelectMethod) == 8, "Offset mismatch for FProceduralRouteJunoTileInfo::GuideSetSelectMethod");

// /Script/JunoProceduralWorld.RoadPatrolPathInfo
// Kind: ScriptStruct; super: none
struct FRoadPatrolPathInfo
{
public:
    void* PatrolPath; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::int32_t EntryIndex; // 0x0008 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FRoadPatrolPathInfo, PatrolPath) == 0, "Offset mismatch for FRoadPatrolPathInfo::PatrolPath");
static_assert(offsetof(FRoadPatrolPathInfo, EntryIndex) == 8, "Offset mismatch for FRoadPatrolPathInfo::EntryIndex");

// /Script/JunoProceduralWorld.RoadPatrolPointInfo
// Kind: ScriptStruct; super: none
struct FRoadPatrolPointInfo
{
public:
    void* PatrolPoint; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FRoadPatrolPointInfo, PatrolPoint) == 0, "Offset mismatch for FRoadPatrolPointInfo::PatrolPoint");

// /Script/JunoProceduralWorld.RouteAvoidancePrimitive
// Kind: ScriptStruct; super: none
struct FRouteAvoidancePrimitive
{
public:
    std::uint8_t Type; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    std::uint8_t DiscLocation[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    void* SplineComponent; // 0x0018 (Size: 0x8, Type: ObjectProperty)
    void* ProceduralRoutes; // 0x0020 (Size: 0x8, Type: ObjectProperty)
    float Distance; // 0x0028 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRouteAvoidancePrimitive, Type) == 0, "Offset mismatch for FRouteAvoidancePrimitive::Type");
static_assert(offsetof(FRouteAvoidancePrimitive, DiscLocation) == 8, "Offset mismatch for FRouteAvoidancePrimitive::DiscLocation");
static_assert(offsetof(FRouteAvoidancePrimitive, SplineComponent) == 24, "Offset mismatch for FRouteAvoidancePrimitive::SplineComponent");
static_assert(offsetof(FRouteAvoidancePrimitive, ProceduralRoutes) == 32, "Offset mismatch for FRouteAvoidancePrimitive::ProceduralRoutes");
static_assert(offsetof(FRouteAvoidancePrimitive, Distance) == 40, "Offset mismatch for FRouteAvoidancePrimitive::Distance");

// /Script/JunoProceduralWorld.RouteClassAvoidance
// Kind: ScriptStruct; super: none
struct FRouteClassAvoidance
{
public:
    void* RouteClassesToAvoid; // 0x0000 (Size: 0x8, Type: ClassProperty)
    float Distance; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRouteClassAvoidance, RouteClassesToAvoid) == 0, "Offset mismatch for FRouteClassAvoidance::RouteClassesToAvoid");
static_assert(offsetof(FRouteClassAvoidance, Distance) == 8, "Offset mismatch for FRouteClassAvoidance::Distance");

// /Script/JunoProceduralWorld.SegmentInterpResult
// Kind: ScriptStruct; super: none
struct FSegmentInterpResult
{
public:
    float time; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float CosInterp; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float Width; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float LayerWidth; // 0x000C (Size: 0x4, Type: FloatProperty)
    float LeftFalloff; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float RightFalloff; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float LeftLayerFalloff; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float RightLayerFalloff; // 0x001C (Size: 0x4, Type: FloatProperty)
    float Roll; // 0x0020 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0024
    std::uint8_t Pos[0x18]; // 0x0028 (Size: 0x18, Type: StructProperty)
    std::uint8_t Tangent[0x18]; // 0x0040 (Size: 0x18, Type: StructProperty)
    std::uint8_t Binormal[0x18]; // 0x0058 (Size: 0x18, Type: StructProperty)
    std::uint8_t LeftPos[0x18]; // 0x0070 (Size: 0x18, Type: StructProperty)
    std::uint8_t RightPos[0x18]; // 0x0088 (Size: 0x18, Type: StructProperty)
    std::uint8_t FalloffLeftPos[0x18]; // 0x00A0 (Size: 0x18, Type: StructProperty)
    std::uint8_t FalloffRightPos[0x18]; // 0x00B8 (Size: 0x18, Type: StructProperty)
    std::uint8_t LayerLeftPos[0x18]; // 0x00D0 (Size: 0x18, Type: StructProperty)
    std::uint8_t LayerRightPos[0x18]; // 0x00E8 (Size: 0x18, Type: StructProperty)
    std::uint8_t LayerFalloffLeftPos[0x18]; // 0x0100 (Size: 0x18, Type: StructProperty)
    std::uint8_t LayerFalloffRightPos[0x18]; // 0x0118 (Size: 0x18, Type: StructProperty)
    float StartEndFalloff; // 0x0130 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FSegmentInterpResult, time) == 0, "Offset mismatch for FSegmentInterpResult::time");
static_assert(offsetof(FSegmentInterpResult, CosInterp) == 4, "Offset mismatch for FSegmentInterpResult::CosInterp");
static_assert(offsetof(FSegmentInterpResult, Width) == 8, "Offset mismatch for FSegmentInterpResult::Width");
static_assert(offsetof(FSegmentInterpResult, LayerWidth) == 12, "Offset mismatch for FSegmentInterpResult::LayerWidth");
static_assert(offsetof(FSegmentInterpResult, LeftFalloff) == 16, "Offset mismatch for FSegmentInterpResult::LeftFalloff");
static_assert(offsetof(FSegmentInterpResult, RightFalloff) == 20, "Offset mismatch for FSegmentInterpResult::RightFalloff");
static_assert(offsetof(FSegmentInterpResult, LeftLayerFalloff) == 24, "Offset mismatch for FSegmentInterpResult::LeftLayerFalloff");
static_assert(offsetof(FSegmentInterpResult, RightLayerFalloff) == 28, "Offset mismatch for FSegmentInterpResult::RightLayerFalloff");
static_assert(offsetof(FSegmentInterpResult, Roll) == 32, "Offset mismatch for FSegmentInterpResult::Roll");
static_assert(offsetof(FSegmentInterpResult, Pos) == 40, "Offset mismatch for FSegmentInterpResult::Pos");
static_assert(offsetof(FSegmentInterpResult, Tangent) == 64, "Offset mismatch for FSegmentInterpResult::Tangent");
static_assert(offsetof(FSegmentInterpResult, Binormal) == 88, "Offset mismatch for FSegmentInterpResult::Binormal");
static_assert(offsetof(FSegmentInterpResult, LeftPos) == 112, "Offset mismatch for FSegmentInterpResult::LeftPos");
static_assert(offsetof(FSegmentInterpResult, RightPos) == 136, "Offset mismatch for FSegmentInterpResult::RightPos");
static_assert(offsetof(FSegmentInterpResult, FalloffLeftPos) == 160, "Offset mismatch for FSegmentInterpResult::FalloffLeftPos");
static_assert(offsetof(FSegmentInterpResult, FalloffRightPos) == 184, "Offset mismatch for FSegmentInterpResult::FalloffRightPos");
static_assert(offsetof(FSegmentInterpResult, LayerLeftPos) == 208, "Offset mismatch for FSegmentInterpResult::LayerLeftPos");
static_assert(offsetof(FSegmentInterpResult, LayerRightPos) == 232, "Offset mismatch for FSegmentInterpResult::LayerRightPos");
static_assert(offsetof(FSegmentInterpResult, LayerFalloffLeftPos) == 256, "Offset mismatch for FSegmentInterpResult::LayerFalloffLeftPos");
static_assert(offsetof(FSegmentInterpResult, LayerFalloffRightPos) == 280, "Offset mismatch for FSegmentInterpResult::LayerFalloffRightPos");
static_assert(offsetof(FSegmentInterpResult, StartEndFalloff) == 304, "Offset mismatch for FSegmentInterpResult::StartEndFalloff");

// /Script/JunoProceduralWorld.SegmentParameters
// Kind: ScriptStruct; super: none
struct FSegmentParameters
{
public:
    std::uint8_t LayerName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t bRaiseTerrain; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bLowerTerrain; // 0x0005 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0006
    TArray<void*> SplineMeshes; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bCastShadow; // 0x0018 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHiddenInGame; // 0x0019 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPlaceSplineMeshesInStreamingLevels; // 0x001A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x001B
    std::int32_t RandomSeed; // 0x001C (Size: 0x4, Type: IntProperty)
    float LDMaxDrawDistance; // 0x0020 (Size: 0x4, Type: FloatProperty)
    std::int32_t TranslucencySortPriority; // 0x0024 (Size: 0x4, Type: IntProperty)
    std::uint8_t bRenderCustomDepth; // 0x0028 (Size: 0x1, Type: ByteProperty)
    std::uint8_t CustomDepthStencilWriteMask; // 0x0029 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x2]; // 0x002A
    std::int32_t CustomDepthStencilValue; // 0x002C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FSegmentParameters, LayerName) == 0, "Offset mismatch for FSegmentParameters::LayerName");
static_assert(offsetof(FSegmentParameters, bRaiseTerrain) == 4, "Offset mismatch for FSegmentParameters::bRaiseTerrain");
static_assert(offsetof(FSegmentParameters, bLowerTerrain) == 5, "Offset mismatch for FSegmentParameters::bLowerTerrain");
static_assert(offsetof(FSegmentParameters, SplineMeshes) == 8, "Offset mismatch for FSegmentParameters::SplineMeshes");
static_assert(offsetof(FSegmentParameters, bCastShadow) == 24, "Offset mismatch for FSegmentParameters::bCastShadow");
static_assert(offsetof(FSegmentParameters, bHiddenInGame) == 25, "Offset mismatch for FSegmentParameters::bHiddenInGame");
static_assert(offsetof(FSegmentParameters, bPlaceSplineMeshesInStreamingLevels) == 26, "Offset mismatch for FSegmentParameters::bPlaceSplineMeshesInStreamingLevels");
static_assert(offsetof(FSegmentParameters, RandomSeed) == 28, "Offset mismatch for FSegmentParameters::RandomSeed");
static_assert(offsetof(FSegmentParameters, LDMaxDrawDistance) == 32, "Offset mismatch for FSegmentParameters::LDMaxDrawDistance");
static_assert(offsetof(FSegmentParameters, TranslucencySortPriority) == 36, "Offset mismatch for FSegmentParameters::TranslucencySortPriority");
static_assert(offsetof(FSegmentParameters, bRenderCustomDepth) == 40, "Offset mismatch for FSegmentParameters::bRenderCustomDepth");
static_assert(offsetof(FSegmentParameters, CustomDepthStencilWriteMask) == 41, "Offset mismatch for FSegmentParameters::CustomDepthStencilWriteMask");
static_assert(offsetof(FSegmentParameters, CustomDepthStencilValue) == 44, "Offset mismatch for FSegmentParameters::CustomDepthStencilValue");

// /Script/JunoProceduralWorld.SplineCurvesInfo
// Kind: ScriptStruct; super: none
struct FSplineCurvesInfo
{
public:
    FString Name; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint32_t PointsNum; // 0x0010 (Size: 0x4, Type: UInt32Property)
    float Length; // 0x0014 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FSplineCurvesInfo, Name) == 0, "Offset mismatch for FSplineCurvesInfo::Name");
static_assert(offsetof(FSplineCurvesInfo, PointsNum) == 16, "Offset mismatch for FSplineCurvesInfo::PointsNum");
static_assert(offsetof(FSplineCurvesInfo, Length) == 20, "Offset mismatch for FSplineCurvesInfo::Length");

// /Script/JunoProceduralWorld.SplineGuide
// Kind: ScriptStruct; super: none
struct FSplineGuide
{
public:
    std::uint8_t SplineCurves[0x68]; // 0x0000 (Size: 0x68, Type: StructProperty)
    std::uint8_t bIsClosedLoop; // 0x0068 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0069
    std::uint8_t Transform[0x60]; // 0x0070 (Size: 0x60, Type: StructProperty)
    std::uint8_t SplineCurvesInfo[0x18]; // 0x00D0 (Size: 0x18, Type: StructProperty)
    std::uint8_t bAllowRandomYaw; // 0x00E8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowRandomScaleVariation; // 0x00E9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x00EA
    std::uint8_t ScaleVariation[0x10]; // 0x00F0 (Size: 0x10, Type: StructProperty)
    void* GuideClass; // 0x0100 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(FSplineGuide, SplineCurves) == 0, "Offset mismatch for FSplineGuide::SplineCurves");
static_assert(offsetof(FSplineGuide, bIsClosedLoop) == 104, "Offset mismatch for FSplineGuide::bIsClosedLoop");
static_assert(offsetof(FSplineGuide, Transform) == 112, "Offset mismatch for FSplineGuide::Transform");
static_assert(offsetof(FSplineGuide, SplineCurvesInfo) == 208, "Offset mismatch for FSplineGuide::SplineCurvesInfo");
static_assert(offsetof(FSplineGuide, bAllowRandomYaw) == 232, "Offset mismatch for FSplineGuide::bAllowRandomYaw");
static_assert(offsetof(FSplineGuide, bAllowRandomScaleVariation) == 233, "Offset mismatch for FSplineGuide::bAllowRandomScaleVariation");
static_assert(offsetof(FSplineGuide, ScaleVariation) == 240, "Offset mismatch for FSplineGuide::ScaleVariation");
static_assert(offsetof(FSplineGuide, GuideClass) == 256, "Offset mismatch for FSplineGuide::GuideClass");

// /Script/JunoProceduralWorld.CaveShellSpawnEntry
// Kind: Class; super: Object
class UCaveShellSpawnEntry
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoProceduralWorld.FortAutomationRpcManager_JunoProceduralWorld
// Kind: Class; super: FortAutomationRpcManager
class UFortAutomationRpcManager_JunoProceduralWorld
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoProceduralWorld.InstancedActorSmartObjectComponent
// Kind: Class; super: InstancedActorsComponent
class UInstancedActorSmartObjectComponent
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    void* ComponentClass; // 0x00D0 (Size: 0x8, Type: ClassProperty)
    void* DefinitionAsset; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UInstancedActorSmartObjectComponent, ComponentClass) == 208, "Offset mismatch for UInstancedActorSmartObjectComponent::ComponentClass");
static_assert(offsetof(UInstancedActorSmartObjectComponent, DefinitionAsset) == 216, "Offset mismatch for UInstancedActorSmartObjectComponent::DefinitionAsset");

// /Script/JunoProceduralWorld.JunoBiomeTagVolume
// Kind: Class; super: Actor
class UJunoBiomeTagVolume
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    std::uint8_t BoundsEvaluationType; // 0x0270 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0271
    std::uint8_t VolumeTags[0x20]; // 0x0278 (Size: 0x20, Type: StructProperty)
    void* BoundsComponent; // 0x0298 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoBiomeTagVolume, BoundsEvaluationType) == 624, "Offset mismatch for UJunoBiomeTagVolume::BoundsEvaluationType");
static_assert(offsetof(UJunoBiomeTagVolume, VolumeTags) == 632, "Offset mismatch for UJunoBiomeTagVolume::VolumeTags");
static_assert(offsetof(UJunoBiomeTagVolume, BoundsComponent) == 664, "Offset mismatch for UJunoBiomeTagVolume::BoundsComponent");

// /Script/JunoProceduralWorld.JunoBridgePOISelectorComponent
// Kind: Class; super: GameFrameworkComponent
class UJunoBridgePOISelectorComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t Params[0x38]; // 0x00C0 (Size: 0x38, Type: StructProperty)
    std::uint8_t DataRegistryType[0x1]; // 0x00F8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoBridgePOISelectorComponent, Params) == 192, "Offset mismatch for UJunoBridgePOISelectorComponent::Params");
static_assert(offsetof(UJunoBridgePOISelectorComponent, DataRegistryType) == 248, "Offset mismatch for UJunoBridgePOISelectorComponent::DataRegistryType");

// /Script/JunoProceduralWorld.JunoCaveBetweenFloorTeleporterComponent
// Kind: Class; super: GameFrameworkComponent
class UJunoCaveBetweenFloorTeleporterComponent
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    std::uint8_t TargetFloor; // 0x00C8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00C9
    FName MatchID; // 0x00CC (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UJunoCaveBetweenFloorTeleporterComponent, TargetFloor) == 200, "Offset mismatch for UJunoCaveBetweenFloorTeleporterComponent::TargetFloor");
static_assert(offsetof(UJunoCaveBetweenFloorTeleporterComponent, MatchID) == 204, "Offset mismatch for UJunoCaveBetweenFloorTeleporterComponent::MatchID");

// /Script/JunoProceduralWorld.JunoCaveBlueprintLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UJunoCaveBlueprintLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoProceduralWorld.JunoCaveDataCollectionBase
// Kind: Class; super: PrimaryDataAsset
class UJunoCaveDataCollectionBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoProceduralWorld.JunoCaveGeneratorDataMergerInterface
// Kind: Class; super: Interface
class UJunoCaveGeneratorDataMergerInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoProceduralWorld.JunoCaveGeneratorInterface
// Kind: Class; super: Interface
class UJunoCaveGeneratorInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoProceduralWorld.JunoCaveGeneratorPlayspaceComponent
// Kind: Class; super: FortPlayspaceComponent
class UJunoCaveGeneratorPlayspaceComponent
{
public:
    std::uint8_t Pad_0000[0x118]; // 0x0000
    std::uint8_t CaveGeneratorRegistry[0x4]; // 0x0118 (Size: 0x4, Type: StructProperty)
    std::uint8_t CaveGeneratorShellsRegistry[0x4]; // 0x011C (Size: 0x4, Type: StructProperty)
    std::uint8_t CaveGeneratorRulesRegistry[0x4]; // 0x0120 (Size: 0x4, Type: StructProperty)
    std::uint8_t CaveGeneratorThemesRegistry[0x4]; // 0x0124 (Size: 0x4, Type: StructProperty)
    std::uint8_t CaveGeneratorSequencesRegistry[0x4]; // 0x0128 (Size: 0x4, Type: StructProperty)
    std::uint8_t CaveGeneratorTypesRegistry[0x4]; // 0x012C (Size: 0x4, Type: StructProperty)
    std::uint8_t bUseSplitDataRegistries; // 0x0130 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0131
    std::uint8_t POIDataRegistry[0x4]; // 0x0134 (Size: 0x4, Type: StructProperty)
    std::uint8_t MergedData[0x58]; // 0x0138 (Size: 0x58, Type: StructProperty)
    std::uint8_t bWasDataMerged; // 0x0190 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UJunoCaveGeneratorPlayspaceComponent, CaveGeneratorRegistry) == 280, "Offset mismatch for UJunoCaveGeneratorPlayspaceComponent::CaveGeneratorRegistry");
static_assert(offsetof(UJunoCaveGeneratorPlayspaceComponent, CaveGeneratorShellsRegistry) == 284, "Offset mismatch for UJunoCaveGeneratorPlayspaceComponent::CaveGeneratorShellsRegistry");
static_assert(offsetof(UJunoCaveGeneratorPlayspaceComponent, CaveGeneratorRulesRegistry) == 288, "Offset mismatch for UJunoCaveGeneratorPlayspaceComponent::CaveGeneratorRulesRegistry");
static_assert(offsetof(UJunoCaveGeneratorPlayspaceComponent, CaveGeneratorThemesRegistry) == 292, "Offset mismatch for UJunoCaveGeneratorPlayspaceComponent::CaveGeneratorThemesRegistry");
static_assert(offsetof(UJunoCaveGeneratorPlayspaceComponent, CaveGeneratorSequencesRegistry) == 296, "Offset mismatch for UJunoCaveGeneratorPlayspaceComponent::CaveGeneratorSequencesRegistry");
static_assert(offsetof(UJunoCaveGeneratorPlayspaceComponent, CaveGeneratorTypesRegistry) == 300, "Offset mismatch for UJunoCaveGeneratorPlayspaceComponent::CaveGeneratorTypesRegistry");
static_assert(offsetof(UJunoCaveGeneratorPlayspaceComponent, bUseSplitDataRegistries) == 304, "Offset mismatch for UJunoCaveGeneratorPlayspaceComponent::bUseSplitDataRegistries");
static_assert(offsetof(UJunoCaveGeneratorPlayspaceComponent, POIDataRegistry) == 308, "Offset mismatch for UJunoCaveGeneratorPlayspaceComponent::POIDataRegistry");
static_assert(offsetof(UJunoCaveGeneratorPlayspaceComponent, MergedData) == 312, "Offset mismatch for UJunoCaveGeneratorPlayspaceComponent::MergedData");
static_assert(offsetof(UJunoCaveGeneratorPlayspaceComponent, bWasDataMerged) == 400, "Offset mismatch for UJunoCaveGeneratorPlayspaceComponent::bWasDataMerged");

// /Script/JunoProceduralWorld.JunoCaveInternalTeleporterComponent
// Kind: Class; super: GameFrameworkComponent
class UJunoCaveInternalTeleporterComponent
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    FName MatchID; // 0x00C8 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UJunoCaveInternalTeleporterComponent, MatchID) == 200, "Offset mismatch for UJunoCaveInternalTeleporterComponent::MatchID");

// /Script/JunoProceduralWorld.JunoCaveLivingWorldStaticPointProvider
// Kind: Class; super: JunoLivingWorldStaticPointProvider
class UJunoCaveLivingWorldStaticPointProvider
{
public:
    std::uint8_t Pad_0000[0x3F8]; // 0x0000
    FName CaveShellID; // 0x03F8 (Size: 0x8, Type: NameProperty)
    TArray<void*> ConditionalTags; // 0x0400 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t AssignLeashVolume[0x28]; // 0x0410 (Size: 0x28, Type: StructProperty)
    TWeakObjectPtr<void> CaveShellEntry; // 0x0438 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t bNeverEnable; // 0x0440 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UJunoCaveLivingWorldStaticPointProvider, CaveShellID) == 1016, "Offset mismatch for UJunoCaveLivingWorldStaticPointProvider::CaveShellID");
static_assert(offsetof(UJunoCaveLivingWorldStaticPointProvider, ConditionalTags) == 1024, "Offset mismatch for UJunoCaveLivingWorldStaticPointProvider::ConditionalTags");
static_assert(offsetof(UJunoCaveLivingWorldStaticPointProvider, AssignLeashVolume) == 1040, "Offset mismatch for UJunoCaveLivingWorldStaticPointProvider::AssignLeashVolume");
static_assert(offsetof(UJunoCaveLivingWorldStaticPointProvider, CaveShellEntry) == 1080, "Offset mismatch for UJunoCaveLivingWorldStaticPointProvider::CaveShellEntry");
static_assert(offsetof(UJunoCaveLivingWorldStaticPointProvider, bNeverEnable) == 1088, "Offset mismatch for UJunoCaveLivingWorldStaticPointProvider::bNeverEnable");

// /Script/JunoProceduralWorld.JunoCaveReturnToEntranceTeleporter
// Kind: Class; super: GameFrameworkComponent
class UJunoCaveReturnToEntranceTeleporter
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t PrimaryComponentTick[0x30]; // 0x0038 (Size: 0x30, Type: StructProperty)
    TArray<void*> ComponentTags; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AssetUserData; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0088
    std::int32_t UCSSerializationIndex; // 0x0090 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0094
    std::uint8_t bNetAddressable; // 0x0098 (Size: 0x1, Type: BoolProperty)
    // 0x0098 BoolProperty bReplicateUsingRegisteredSubObjectList (shared storage)
    // 0x0098 BoolProperty bReplicates (shared storage)
    std::uint8_t Pad_0003[0x1]; // 0x0099
    std::uint8_t bAutoActivate; // 0x009A (Size: 0x1, Type: BoolProperty)
    // 0x009A BoolProperty bCanEverAffectNavigation (shared storage)
    // 0x009A BoolProperty bEditableWhenInherited (shared storage)
    // 0x009A BoolProperty bIsActive (shared storage)
    std::uint8_t bIsEditorOnly; // 0x009B (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x1D]; // 0x009C
    std::uint8_t CreationMethod; // 0x00B9 (Size: 0x1, Type: EnumProperty)
    std::uint8_t OnComponentActivated[0x1]; // 0x00BA (Size: 0x1, Type: MulticastSparseDelegateProperty)
    FMulticastSparseDelegate OnComponentDeactivated; // 0x00BB (Size: 0x10, Type: MulticastSparseDelegateProperty)
};

static_assert(offsetof(UJunoCaveReturnToEntranceTeleporter, PrimaryComponentTick) == 56, "Offset mismatch for UJunoCaveReturnToEntranceTeleporter::PrimaryComponentTick");
static_assert(offsetof(UJunoCaveReturnToEntranceTeleporter, ComponentTags) == 104, "Offset mismatch for UJunoCaveReturnToEntranceTeleporter::ComponentTags");
static_assert(offsetof(UJunoCaveReturnToEntranceTeleporter, AssetUserData) == 120, "Offset mismatch for UJunoCaveReturnToEntranceTeleporter::AssetUserData");
static_assert(offsetof(UJunoCaveReturnToEntranceTeleporter, UCSSerializationIndex) == 144, "Offset mismatch for UJunoCaveReturnToEntranceTeleporter::UCSSerializationIndex");
static_assert(offsetof(UJunoCaveReturnToEntranceTeleporter, bNetAddressable) == 152, "Offset mismatch for UJunoCaveReturnToEntranceTeleporter::bNetAddressable");
static_assert(offsetof(UJunoCaveReturnToEntranceTeleporter, bAutoActivate) == 154, "Offset mismatch for UJunoCaveReturnToEntranceTeleporter::bAutoActivate");
static_assert(offsetof(UJunoCaveReturnToEntranceTeleporter, bIsEditorOnly) == 155, "Offset mismatch for UJunoCaveReturnToEntranceTeleporter::bIsEditorOnly");
static_assert(offsetof(UJunoCaveReturnToEntranceTeleporter, CreationMethod) == 185, "Offset mismatch for UJunoCaveReturnToEntranceTeleporter::CreationMethod");
static_assert(offsetof(UJunoCaveReturnToEntranceTeleporter, OnComponentActivated) == 186, "Offset mismatch for UJunoCaveReturnToEntranceTeleporter::OnComponentActivated");
static_assert(offsetof(UJunoCaveReturnToEntranceTeleporter, OnComponentDeactivated) == 187, "Offset mismatch for UJunoCaveReturnToEntranceTeleporter::OnComponentDeactivated");

// /Script/JunoProceduralWorld.JunoCaveShellGameplayVolume
// Kind: Class; super: JunoStreamingGameplayVolume
class UJunoCaveShellGameplayVolume
{
public:
    std::uint8_t Pad_0000[0x3E8]; // 0x0000
    std::uint8_t InstanceData[0x88]; // 0x03E8 (Size: 0x88, Type: StructProperty)
    std::uint8_t ShellID[0x4]; // 0x0470 (Size: 0x4, Type: NameProperty)
    std::uint8_t CaveGUID[0x14]; // 0x0474 (Size: 0x14, Type: StructProperty)
    TArray<void*> Teleporters; // 0x0488 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> LevelsToInject; // 0x0498 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UJunoCaveShellGameplayVolume, InstanceData) == 1000, "Offset mismatch for UJunoCaveShellGameplayVolume::InstanceData");
static_assert(offsetof(UJunoCaveShellGameplayVolume, ShellID) == 1136, "Offset mismatch for UJunoCaveShellGameplayVolume::ShellID");
static_assert(offsetof(UJunoCaveShellGameplayVolume, CaveGUID) == 1140, "Offset mismatch for UJunoCaveShellGameplayVolume::CaveGUID");
static_assert(offsetof(UJunoCaveShellGameplayVolume, Teleporters) == 1160, "Offset mismatch for UJunoCaveShellGameplayVolume::Teleporters");
static_assert(offsetof(UJunoCaveShellGameplayVolume, LevelsToInject) == 1176, "Offset mismatch for UJunoCaveShellGameplayVolume::LevelsToInject");

// /Script/JunoProceduralWorld.JunoCaveShellGateComponent
// Kind: Class; super: FortPlayspaceComponent
class UJunoCaveShellGateComponent
{
public:
    std::uint8_t Pad_0000[0x118]; // 0x0000
    TArray<void*> GateActors; // 0x0118 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UJunoCaveShellGateComponent, GateActors) == 280, "Offset mismatch for UJunoCaveShellGateComponent::GateActors");

// /Script/JunoProceduralWorld.JunoCaveShellPlayspace
// Kind: Class; super: JunoStreamingPlayspace
class UJunoCaveShellPlayspace
{
public:
    std::uint8_t Pad_0000[0x6B8]; // 0x0000
    TArray<void*> RequiredPersistenceFeatureDataClassesNative; // 0x06B8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x8]; // 0x06C8
    void* PersistenceComponent; // 0x06D0 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> RequiredPersistenceFeatureDataClasses; // 0x06D8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t SpatialLoadingState; // 0x06E8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x06E9
    std::uint8_t PersistenceMainLevelUniquePackageName[0x4]; // 0x06EC (Size: 0x4, Type: NameProperty)
    TWeakObjectPtr<void> PersistenceMainLevelWeakPtr; // 0x06F0 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> JunoPersistentPlayspaceSaveHandler; // 0x06F8 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UJunoCaveShellPlayspace, RequiredPersistenceFeatureDataClassesNative) == 1720, "Offset mismatch for UJunoCaveShellPlayspace::RequiredPersistenceFeatureDataClassesNative");
static_assert(offsetof(UJunoCaveShellPlayspace, PersistenceComponent) == 1744, "Offset mismatch for UJunoCaveShellPlayspace::PersistenceComponent");
static_assert(offsetof(UJunoCaveShellPlayspace, RequiredPersistenceFeatureDataClasses) == 1752, "Offset mismatch for UJunoCaveShellPlayspace::RequiredPersistenceFeatureDataClasses");
static_assert(offsetof(UJunoCaveShellPlayspace, SpatialLoadingState) == 1768, "Offset mismatch for UJunoCaveShellPlayspace::SpatialLoadingState");
static_assert(offsetof(UJunoCaveShellPlayspace, PersistenceMainLevelUniquePackageName) == 1772, "Offset mismatch for UJunoCaveShellPlayspace::PersistenceMainLevelUniquePackageName");
static_assert(offsetof(UJunoCaveShellPlayspace, PersistenceMainLevelWeakPtr) == 1776, "Offset mismatch for UJunoCaveShellPlayspace::PersistenceMainLevelWeakPtr");
static_assert(offsetof(UJunoCaveShellPlayspace, JunoPersistentPlayspaceSaveHandler) == 1784, "Offset mismatch for UJunoCaveShellPlayspace::JunoPersistentPlayspaceSaveHandler");

// /Script/JunoProceduralWorld.JunoCaveVolume
// Kind: Class; super: TriggerBox
class UJunoCaveVolume
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    void* CollisionComponent; // 0x0270 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoCaveVolume, CollisionComponent) == 624, "Offset mismatch for UJunoCaveVolume::CollisionComponent");

// /Script/JunoProceduralWorld.JunoCaveVolumePlayspaceComponent
// Kind: Class; super: FortPlayspaceComponent
class UJunoCaveVolumePlayspaceComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnMeshNetworkReady_BP; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMeshNetworkEventBurst_BP; // 0x00D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMeshNetworkEventStart_BP; // 0x00E0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMeshNetworkEventChange_BP; // 0x00F0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMeshNetworkEventEnd_BP; // 0x0100 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t bSubscribeToMeshNetwork; // 0x0110 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UJunoCaveVolumePlayspaceComponent, OnMeshNetworkReady_BP) == 192, "Offset mismatch for UJunoCaveVolumePlayspaceComponent::OnMeshNetworkReady_BP");
static_assert(offsetof(UJunoCaveVolumePlayspaceComponent, OnMeshNetworkEventBurst_BP) == 208, "Offset mismatch for UJunoCaveVolumePlayspaceComponent::OnMeshNetworkEventBurst_BP");
static_assert(offsetof(UJunoCaveVolumePlayspaceComponent, OnMeshNetworkEventStart_BP) == 224, "Offset mismatch for UJunoCaveVolumePlayspaceComponent::OnMeshNetworkEventStart_BP");
static_assert(offsetof(UJunoCaveVolumePlayspaceComponent, OnMeshNetworkEventChange_BP) == 240, "Offset mismatch for UJunoCaveVolumePlayspaceComponent::OnMeshNetworkEventChange_BP");
static_assert(offsetof(UJunoCaveVolumePlayspaceComponent, OnMeshNetworkEventEnd_BP) == 256, "Offset mismatch for UJunoCaveVolumePlayspaceComponent::OnMeshNetworkEventEnd_BP");
static_assert(offsetof(UJunoCaveVolumePlayspaceComponent, bSubscribeToMeshNetwork) == 272, "Offset mismatch for UJunoCaveVolumePlayspaceComponent::bSubscribeToMeshNetwork");

// /Script/JunoProceduralWorld.JunoCheatManager_ProceduralWorld
// Kind: Class; super: ChildCheatManager
class UJunoCheatManager_ProceduralWorld
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoProceduralWorld.JunoCosmeticGatheringInCave
// Kind: Class; super: FortProfileGo
class UJunoCosmeticGatheringInCave
{
public:
    std::uint8_t Pad_0000[0x88]; // 0x0000
    TMap<void*, void*> CsvNonPersistentMetadata; // 0x0088 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> CsvMetadata; // 0x0098 (Size: 0x10, Type: MapProperty)
    float DefaultSettleTime; // 0x00A8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x364]; // 0x00AC
    TArray<void*> ProfileGoScenarios; // 0x0410 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ProfileGoGeneratedScenarios; // 0x0420 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ProfileGoCollections; // 0x0430 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ProfileGoCommands; // 0x0440 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AnimProfilingAssetsBlacklist; // 0x0450 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AnimProfilingCosmeticsWhitelist; // 0x0460 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CachedAthenaCosmeticItemDefinitions; // 0x0470 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CachedAthenaCosmeticVariantTokens; // 0x0480 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UJunoCosmeticGatheringInCave, CsvNonPersistentMetadata) == 136, "Offset mismatch for UJunoCosmeticGatheringInCave::CsvNonPersistentMetadata");
static_assert(offsetof(UJunoCosmeticGatheringInCave, CsvMetadata) == 152, "Offset mismatch for UJunoCosmeticGatheringInCave::CsvMetadata");
static_assert(offsetof(UJunoCosmeticGatheringInCave, DefaultSettleTime) == 168, "Offset mismatch for UJunoCosmeticGatheringInCave::DefaultSettleTime");
static_assert(offsetof(UJunoCosmeticGatheringInCave, ProfileGoScenarios) == 1040, "Offset mismatch for UJunoCosmeticGatheringInCave::ProfileGoScenarios");
static_assert(offsetof(UJunoCosmeticGatheringInCave, ProfileGoGeneratedScenarios) == 1056, "Offset mismatch for UJunoCosmeticGatheringInCave::ProfileGoGeneratedScenarios");
static_assert(offsetof(UJunoCosmeticGatheringInCave, ProfileGoCollections) == 1072, "Offset mismatch for UJunoCosmeticGatheringInCave::ProfileGoCollections");
static_assert(offsetof(UJunoCosmeticGatheringInCave, ProfileGoCommands) == 1088, "Offset mismatch for UJunoCosmeticGatheringInCave::ProfileGoCommands");
static_assert(offsetof(UJunoCosmeticGatheringInCave, AnimProfilingAssetsBlacklist) == 1104, "Offset mismatch for UJunoCosmeticGatheringInCave::AnimProfilingAssetsBlacklist");
static_assert(offsetof(UJunoCosmeticGatheringInCave, AnimProfilingCosmeticsWhitelist) == 1120, "Offset mismatch for UJunoCosmeticGatheringInCave::AnimProfilingCosmeticsWhitelist");
static_assert(offsetof(UJunoCosmeticGatheringInCave, CachedAthenaCosmeticItemDefinitions) == 1136, "Offset mismatch for UJunoCosmeticGatheringInCave::CachedAthenaCosmeticItemDefinitions");
static_assert(offsetof(UJunoCosmeticGatheringInCave, CachedAthenaCosmeticVariantTokens) == 1152, "Offset mismatch for UJunoCosmeticGatheringInCave::CachedAthenaCosmeticVariantTokens");

// /Script/JunoProceduralWorld.JunoGameFeatureAction_AddTileSet
// Kind: Class; super: GameFeatureAction
class UJunoGameFeatureAction_AddTileSet
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t TilesetRegistryName[0x4]; // 0x0028 (Size: 0x4, Type: StructProperty)
    std::uint8_t UniqueTag[0x4]; // 0x002C (Size: 0x4, Type: StructProperty)
    std::uint8_t TileManipulatorClass[0x20]; // 0x0030 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t LandscapeMaterialLibrary[0x20]; // 0x0050 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t CachedComponentLayers[0x20]; // 0x0070 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t CachedComponentData[0x20]; // 0x0090 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t TileAssetData[0x20]; // 0x00B0 (Size: 0x20, Type: SoftObjectProperty)
    TArray<void*> TileAssetDatas; // 0x00D0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t TileAssetMetaData[0x20]; // 0x00E0 (Size: 0x20, Type: SoftObjectProperty)
    TArray<void*> TerrainDirectories; // 0x0100 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> TerrainAssetPaths; // 0x0110 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UJunoGameFeatureAction_AddTileSet, TilesetRegistryName) == 40, "Offset mismatch for UJunoGameFeatureAction_AddTileSet::TilesetRegistryName");
static_assert(offsetof(UJunoGameFeatureAction_AddTileSet, UniqueTag) == 44, "Offset mismatch for UJunoGameFeatureAction_AddTileSet::UniqueTag");
static_assert(offsetof(UJunoGameFeatureAction_AddTileSet, TileManipulatorClass) == 48, "Offset mismatch for UJunoGameFeatureAction_AddTileSet::TileManipulatorClass");
static_assert(offsetof(UJunoGameFeatureAction_AddTileSet, LandscapeMaterialLibrary) == 80, "Offset mismatch for UJunoGameFeatureAction_AddTileSet::LandscapeMaterialLibrary");
static_assert(offsetof(UJunoGameFeatureAction_AddTileSet, CachedComponentLayers) == 112, "Offset mismatch for UJunoGameFeatureAction_AddTileSet::CachedComponentLayers");
static_assert(offsetof(UJunoGameFeatureAction_AddTileSet, CachedComponentData) == 144, "Offset mismatch for UJunoGameFeatureAction_AddTileSet::CachedComponentData");
static_assert(offsetof(UJunoGameFeatureAction_AddTileSet, TileAssetData) == 176, "Offset mismatch for UJunoGameFeatureAction_AddTileSet::TileAssetData");
static_assert(offsetof(UJunoGameFeatureAction_AddTileSet, TileAssetDatas) == 208, "Offset mismatch for UJunoGameFeatureAction_AddTileSet::TileAssetDatas");
static_assert(offsetof(UJunoGameFeatureAction_AddTileSet, TileAssetMetaData) == 224, "Offset mismatch for UJunoGameFeatureAction_AddTileSet::TileAssetMetaData");
static_assert(offsetof(UJunoGameFeatureAction_AddTileSet, TerrainDirectories) == 256, "Offset mismatch for UJunoGameFeatureAction_AddTileSet::TerrainDirectories");
static_assert(offsetof(UJunoGameFeatureAction_AddTileSet, TerrainAssetPaths) == 272, "Offset mismatch for UJunoGameFeatureAction_AddTileSet::TerrainAssetPaths");

// /Script/JunoProceduralWorld.JunoGenerateTileCommandlet
// Kind: Class; super: Commandlet
class UJunoGenerateTileCommandlet
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FString HelpDescription; // 0x0028 (Size: 0x10, Type: StrProperty)
    FString HelpUsage; // 0x0038 (Size: 0x10, Type: StrProperty)
    FString HelpWebLink; // 0x0048 (Size: 0x10, Type: StrProperty)
    TArray<void*> HelpParamNames; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> HelpParamDescriptions; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t FastExit; // 0x0078 (Size: 0x1, Type: BoolProperty)
    // 0x0078 BoolProperty IsClient (shared storage)
    // 0x0078 BoolProperty IsEditor (shared storage)
    // 0x0078 BoolProperty IsServer (shared storage)
    // 0x0078 BoolProperty LogToConsole (shared storage)
    // 0x0078 BoolProperty ShowErrorCount (shared storage)
    // 0x0078 BoolProperty ShowProgress (shared storage)
    // 0x0078 BoolProperty UseCommandletResultAsExitCode (shared storage)
};

static_assert(offsetof(UJunoGenerateTileCommandlet, HelpDescription) == 40, "Offset mismatch for UJunoGenerateTileCommandlet::HelpDescription");
static_assert(offsetof(UJunoGenerateTileCommandlet, HelpUsage) == 56, "Offset mismatch for UJunoGenerateTileCommandlet::HelpUsage");
static_assert(offsetof(UJunoGenerateTileCommandlet, HelpWebLink) == 72, "Offset mismatch for UJunoGenerateTileCommandlet::HelpWebLink");
static_assert(offsetof(UJunoGenerateTileCommandlet, HelpParamNames) == 88, "Offset mismatch for UJunoGenerateTileCommandlet::HelpParamNames");
static_assert(offsetof(UJunoGenerateTileCommandlet, HelpParamDescriptions) == 104, "Offset mismatch for UJunoGenerateTileCommandlet::HelpParamDescriptions");
static_assert(offsetof(UJunoGenerateTileCommandlet, FastExit) == 120, "Offset mismatch for UJunoGenerateTileCommandlet::FastExit");

// /Script/JunoProceduralWorld.JunoGenerateTileInterface
// Kind: Class; super: Interface
class UJunoGenerateTileInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoProceduralWorld.JunoHLODMapActorRedirectors
// Kind: Class; super: Object
class UJunoHLODMapActorRedirectors
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> DefaultMapActorRedirectors; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> MapActorRedirectorsLookup; // 0x0038 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UJunoHLODMapActorRedirectors, DefaultMapActorRedirectors) == 40, "Offset mismatch for UJunoHLODMapActorRedirectors::DefaultMapActorRedirectors");
static_assert(offsetof(UJunoHLODMapActorRedirectors, MapActorRedirectorsLookup) == 56, "Offset mismatch for UJunoHLODMapActorRedirectors::MapActorRedirectorsLookup");

// /Script/JunoProceduralWorld.JunoHLODMapActorsPersistenceMigration
// Kind: Class; super: PCGJunoStreamingGameplayVolumePersistenceMigration
class UJunoHLODMapActorsPersistenceMigration
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> Classes; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t TargetLevel; // 0x0038 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UJunoHLODMapActorsPersistenceMigration, Classes) == 40, "Offset mismatch for UJunoHLODMapActorsPersistenceMigration::Classes");
static_assert(offsetof(UJunoHLODMapActorsPersistenceMigration, TargetLevel) == 56, "Offset mismatch for UJunoHLODMapActorsPersistenceMigration::TargetLevel");

// /Script/JunoProceduralWorld.JunoInstancedActorData
// Kind: Class; super: InstancedActorsData
class UJunoInstancedActorData
{
public:
    std::uint8_t Pad_0000[0x2E0]; // 0x0000
    std::uint8_t CompressedInstanceTransforms[0x1]; // 0x02E0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoInstancedActorData, CompressedInstanceTransforms) == 736, "Offset mismatch for UJunoInstancedActorData::CompressedInstanceTransforms");

// /Script/JunoProceduralWorld.JunoInstancedActorManager
// Kind: Class; super: InstancedActorsManager
class UJunoInstancedActorManager
{
public:
    std::uint8_t Pad_0000[0x998]; // 0x0000
    std::uint8_t bPersistentDataRestored; // 0x0998 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UJunoInstancedActorManager, bPersistentDataRestored) == 2456, "Offset mismatch for UJunoInstancedActorManager::bPersistentDataRestored");

// /Script/JunoProceduralWorld.JunoInstancedActorManagerHLODClonerComponent
// Kind: Class; super: ActorComponent
class UJunoInstancedActorManagerHLODClonerComponent
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t PrimaryComponentTick[0x30]; // 0x0038 (Size: 0x30, Type: StructProperty)
    TArray<void*> ComponentTags; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AssetUserData; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0088
    std::int32_t UCSSerializationIndex; // 0x0090 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0094
    std::uint8_t bNetAddressable; // 0x0098 (Size: 0x1, Type: BoolProperty)
    // 0x0098 BoolProperty bReplicateUsingRegisteredSubObjectList (shared storage)
    // 0x0098 BoolProperty bReplicates (shared storage)
    std::uint8_t Pad_0003[0x1]; // 0x0099
    std::uint8_t bAutoActivate; // 0x009A (Size: 0x1, Type: BoolProperty)
    // 0x009A BoolProperty bCanEverAffectNavigation (shared storage)
    // 0x009A BoolProperty bEditableWhenInherited (shared storage)
    // 0x009A BoolProperty bIsActive (shared storage)
    std::uint8_t bIsEditorOnly; // 0x009B (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x1D]; // 0x009C
    std::uint8_t CreationMethod; // 0x00B9 (Size: 0x1, Type: EnumProperty)
    std::uint8_t OnComponentActivated[0x1]; // 0x00BA (Size: 0x1, Type: MulticastSparseDelegateProperty)
    FMulticastSparseDelegate OnComponentDeactivated; // 0x00BB (Size: 0x10, Type: MulticastSparseDelegateProperty)
};

static_assert(offsetof(UJunoInstancedActorManagerHLODClonerComponent, PrimaryComponentTick) == 56, "Offset mismatch for UJunoInstancedActorManagerHLODClonerComponent::PrimaryComponentTick");
static_assert(offsetof(UJunoInstancedActorManagerHLODClonerComponent, ComponentTags) == 104, "Offset mismatch for UJunoInstancedActorManagerHLODClonerComponent::ComponentTags");
static_assert(offsetof(UJunoInstancedActorManagerHLODClonerComponent, AssetUserData) == 120, "Offset mismatch for UJunoInstancedActorManagerHLODClonerComponent::AssetUserData");
static_assert(offsetof(UJunoInstancedActorManagerHLODClonerComponent, UCSSerializationIndex) == 144, "Offset mismatch for UJunoInstancedActorManagerHLODClonerComponent::UCSSerializationIndex");
static_assert(offsetof(UJunoInstancedActorManagerHLODClonerComponent, bNetAddressable) == 152, "Offset mismatch for UJunoInstancedActorManagerHLODClonerComponent::bNetAddressable");
static_assert(offsetof(UJunoInstancedActorManagerHLODClonerComponent, bAutoActivate) == 154, "Offset mismatch for UJunoInstancedActorManagerHLODClonerComponent::bAutoActivate");
static_assert(offsetof(UJunoInstancedActorManagerHLODClonerComponent, bIsEditorOnly) == 155, "Offset mismatch for UJunoInstancedActorManagerHLODClonerComponent::bIsEditorOnly");
static_assert(offsetof(UJunoInstancedActorManagerHLODClonerComponent, CreationMethod) == 185, "Offset mismatch for UJunoInstancedActorManagerHLODClonerComponent::CreationMethod");
static_assert(offsetof(UJunoInstancedActorManagerHLODClonerComponent, OnComponentActivated) == 186, "Offset mismatch for UJunoInstancedActorManagerHLODClonerComponent::OnComponentActivated");
static_assert(offsetof(UJunoInstancedActorManagerHLODClonerComponent, OnComponentDeactivated) == 187, "Offset mismatch for UJunoInstancedActorManagerHLODClonerComponent::OnComponentDeactivated");

// /Script/JunoProceduralWorld.JunoInstancedActorModifierVolumeComponent
// Kind: Class; super: InstancedActorsModifierVolumeComponent
class UJunoInstancedActorModifierVolumeComponent
{
public:
    std::uint8_t Pad_0000[0x570]; // 0x0000
    std::uint8_t Shape; // 0x0570 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0571
    std::uint8_t Extent[0x18]; // 0x0578 (Size: 0x18, Type: StructProperty)
    float Radius; // 0x0590 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0594
    TArray<void*> Modifiers; // 0x0598 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bIgnoreOwnLevelsInstances; // 0x05A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x7]; // 0x05A9
    TArray<void*> LevelsToIgnore; // 0x05B0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Color[0x4]; // 0x05C0 (Size: 0x4, Type: StructProperty)
    std::uint8_t bDrawOnlyIfSelected; // 0x05C4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x05C5
    float LineThickness; // 0x05C8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ModifierVolumeHandle[0x4]; // 0x05CC (Size: 0x4, Type: StructProperty)
    TArray<void*> ModifiedManagers; // 0x05D0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UJunoInstancedActorModifierVolumeComponent, Shape) == 1392, "Offset mismatch for UJunoInstancedActorModifierVolumeComponent::Shape");
static_assert(offsetof(UJunoInstancedActorModifierVolumeComponent, Extent) == 1400, "Offset mismatch for UJunoInstancedActorModifierVolumeComponent::Extent");
static_assert(offsetof(UJunoInstancedActorModifierVolumeComponent, Radius) == 1424, "Offset mismatch for UJunoInstancedActorModifierVolumeComponent::Radius");
static_assert(offsetof(UJunoInstancedActorModifierVolumeComponent, Modifiers) == 1432, "Offset mismatch for UJunoInstancedActorModifierVolumeComponent::Modifiers");
static_assert(offsetof(UJunoInstancedActorModifierVolumeComponent, bIgnoreOwnLevelsInstances) == 1448, "Offset mismatch for UJunoInstancedActorModifierVolumeComponent::bIgnoreOwnLevelsInstances");
static_assert(offsetof(UJunoInstancedActorModifierVolumeComponent, LevelsToIgnore) == 1456, "Offset mismatch for UJunoInstancedActorModifierVolumeComponent::LevelsToIgnore");
static_assert(offsetof(UJunoInstancedActorModifierVolumeComponent, Color) == 1472, "Offset mismatch for UJunoInstancedActorModifierVolumeComponent::Color");
static_assert(offsetof(UJunoInstancedActorModifierVolumeComponent, bDrawOnlyIfSelected) == 1476, "Offset mismatch for UJunoInstancedActorModifierVolumeComponent::bDrawOnlyIfSelected");
static_assert(offsetof(UJunoInstancedActorModifierVolumeComponent, LineThickness) == 1480, "Offset mismatch for UJunoInstancedActorModifierVolumeComponent::LineThickness");
static_assert(offsetof(UJunoInstancedActorModifierVolumeComponent, ModifierVolumeHandle) == 1484, "Offset mismatch for UJunoInstancedActorModifierVolumeComponent::ModifierVolumeHandle");
static_assert(offsetof(UJunoInstancedActorModifierVolumeComponent, ModifiedManagers) == 1488, "Offset mismatch for UJunoInstancedActorModifierVolumeComponent::ModifiedManagers");

// /Script/JunoProceduralWorld.JunoInstancedActorRemovalModifierVolume
// Kind: Class; super: InstancedActorsModifierVolume
class UJunoInstancedActorRemovalModifierVolume
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    void* ModifierVolumeComponent; // 0x0270 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoInstancedActorRemovalModifierVolume, ModifierVolumeComponent) == 624, "Offset mismatch for UJunoInstancedActorRemovalModifierVolume::ModifierVolumeComponent");

// /Script/JunoProceduralWorld.JunoInstancedActorRepresentationActorManagement
// Kind: Class; super: InstancedActorsRepresentationActorManagement
class UJunoInstancedActorRepresentationActorManagement
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoProceduralWorld.JunoInstancedActorSubsystem
// Kind: Class; super: InstancedActorsSubsystem
class UJunoInstancedActorSubsystem
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    void* ProjectSettings; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    void* DataRegistrySubsystem; // 0x0070 (Size: 0x8, Type: ObjectProperty)
    void* ActorPartitionSubsystem; // 0x0078 (Size: 0x8, Type: ObjectProperty)
    void* InstancedActorsManagerClass; // 0x0080 (Size: 0x8, Type: ClassProperty)
    std::uint8_t Pad_0001[0x1C8]; // 0x0088
    void* ExemplarActorWorld; // 0x0250 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x10]; // 0x0258
    void* SettingsType; // 0x0268 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoInstancedActorSubsystem, ProjectSettings) == 104, "Offset mismatch for UJunoInstancedActorSubsystem::ProjectSettings");
static_assert(offsetof(UJunoInstancedActorSubsystem, DataRegistrySubsystem) == 112, "Offset mismatch for UJunoInstancedActorSubsystem::DataRegistrySubsystem");
static_assert(offsetof(UJunoInstancedActorSubsystem, ActorPartitionSubsystem) == 120, "Offset mismatch for UJunoInstancedActorSubsystem::ActorPartitionSubsystem");
static_assert(offsetof(UJunoInstancedActorSubsystem, InstancedActorsManagerClass) == 128, "Offset mismatch for UJunoInstancedActorSubsystem::InstancedActorsManagerClass");
static_assert(offsetof(UJunoInstancedActorSubsystem, ExemplarActorWorld) == 592, "Offset mismatch for UJunoInstancedActorSubsystem::ExemplarActorWorld");
static_assert(offsetof(UJunoInstancedActorSubsystem, SettingsType) == 616, "Offset mismatch for UJunoInstancedActorSubsystem::SettingsType");

// /Script/JunoProceduralWorld.JunoInstancedActorVisualizationTrait
// Kind: Class; super: InstancedActorsVisualizationTrait
class UJunoInstancedActorVisualizationTrait
{
public:
    std::uint8_t Pad_0000[0x120]; // 0x0000
    TWeakObjectPtr<void> InstanceData; // 0x0120 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UJunoInstancedActorVisualizationTrait, InstanceData) == 288, "Offset mismatch for UJunoInstancedActorVisualizationTrait::InstanceData");

// /Script/JunoProceduralWorld.JunoInstancedActorsMaterialOverrideComponent
// Kind: Class; super: InstancedActorsComponent
class UJunoInstancedActorsMaterialOverrideComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t InstanceHandle[0x1]; // 0x00C0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoInstancedActorsMaterialOverrideComponent, InstanceHandle) == 192, "Offset mismatch for UJunoInstancedActorsMaterialOverrideComponent::InstanceHandle");

// /Script/JunoProceduralWorld.JunoLandscapeClampingHelper
// Kind: Class; super: FortLandscapeClampingHelperBase
class UJunoLandscapeClampingHelper
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TWeakObjectPtr<void> CachedTerrainGenerationSystem; // 0x0028 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UJunoLandscapeClampingHelper, CachedTerrainGenerationSystem) == 40, "Offset mismatch for UJunoLandscapeClampingHelper::CachedTerrainGenerationSystem");

// /Script/JunoProceduralWorld.JunoLevelInstance
// Kind: Class; super: BuildingLevelInstance
class UJunoLevelInstance
{
public:
    std::uint8_t Pad_0000[0x738]; // 0x0000
    FMulticastInlineDelegate OnLevelLoaded; // 0x0738 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UJunoLevelInstance, OnLevelLoaded) == 1848, "Offset mismatch for UJunoLevelInstance::OnLevelLoaded");

// /Script/JunoProceduralWorld.JunoLevelRedirectors
// Kind: Class; super: Object
class UJunoLevelRedirectors
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> LevelNameRedirectors; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UJunoLevelRedirectors, LevelNameRedirectors) == 40, "Offset mismatch for UJunoLevelRedirectors::LevelNameRedirectors");

// /Script/JunoProceduralWorld.JunoLifecycleClientProcessor
// Kind: Class; super: MassProcessor
class UJunoLifecycleClientProcessor
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t ExecutionOrder[0x28]; // 0x0028 (Size: 0x28, Type: StructProperty)
    std::uint8_t ProcessingPhase; // 0x0050 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ExecutionFlags; // 0x0051 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bAggregateRequirements; // 0x0052 (Size: 0x1, Type: BoolProperty)
    // 0x0052 BoolProperty bAutoRegisterWithProcessingPhases (shared storage)
    // 0x0052 BoolProperty bRequiresGameThreadExecution (shared storage)
    std::uint8_t ActivationState; // 0x0053 (Size: 0x1, Type: EnumProperty)
    std::int16_t ExecutionPriority; // 0x0054 (Size: 0x2, Type: Int16Property)
};

static_assert(offsetof(UJunoLifecycleClientProcessor, ExecutionOrder) == 40, "Offset mismatch for UJunoLifecycleClientProcessor::ExecutionOrder");
static_assert(offsetof(UJunoLifecycleClientProcessor, ProcessingPhase) == 80, "Offset mismatch for UJunoLifecycleClientProcessor::ProcessingPhase");
static_assert(offsetof(UJunoLifecycleClientProcessor, ExecutionFlags) == 81, "Offset mismatch for UJunoLifecycleClientProcessor::ExecutionFlags");
static_assert(offsetof(UJunoLifecycleClientProcessor, bAggregateRequirements) == 82, "Offset mismatch for UJunoLifecycleClientProcessor::bAggregateRequirements");
static_assert(offsetof(UJunoLifecycleClientProcessor, ActivationState) == 83, "Offset mismatch for UJunoLifecycleClientProcessor::ActivationState");
static_assert(offsetof(UJunoLifecycleClientProcessor, ExecutionPriority) == 84, "Offset mismatch for UJunoLifecycleClientProcessor::ExecutionPriority");

// /Script/JunoProceduralWorld.JunoLifecycleComponent
// Kind: Class; super: InstancedActorsComponent
class UJunoLifecycleComponent
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    TArray<void*> LifecyclePhases; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bAutoAddFinalLifecyclePhase; // 0x00F0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRepeatLifecyclePhases; // 0x00F1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x00F2
    FMulticastInlineDelegate OnLifecyclePhaseChangedDelegate; // 0x00F8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnLifecycleCompletedDelegate; // 0x0108 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* MeshComponent; // 0x0118 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t FinalLifecycleScale[0x18]; // 0x0120 (Size: 0x18, Type: StructProperty)
    std::uint8_t StartingPhaseIndex; // 0x0138 (Size: 0x1, Type: ByteProperty)
    std::uint8_t CurrentPhaseIndex; // 0x0139 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UJunoLifecycleComponent, LifecyclePhases) == 224, "Offset mismatch for UJunoLifecycleComponent::LifecyclePhases");
static_assert(offsetof(UJunoLifecycleComponent, bAutoAddFinalLifecyclePhase) == 240, "Offset mismatch for UJunoLifecycleComponent::bAutoAddFinalLifecyclePhase");
static_assert(offsetof(UJunoLifecycleComponent, bRepeatLifecyclePhases) == 241, "Offset mismatch for UJunoLifecycleComponent::bRepeatLifecyclePhases");
static_assert(offsetof(UJunoLifecycleComponent, OnLifecyclePhaseChangedDelegate) == 248, "Offset mismatch for UJunoLifecycleComponent::OnLifecyclePhaseChangedDelegate");
static_assert(offsetof(UJunoLifecycleComponent, OnLifecycleCompletedDelegate) == 264, "Offset mismatch for UJunoLifecycleComponent::OnLifecycleCompletedDelegate");
static_assert(offsetof(UJunoLifecycleComponent, MeshComponent) == 280, "Offset mismatch for UJunoLifecycleComponent::MeshComponent");
static_assert(offsetof(UJunoLifecycleComponent, FinalLifecycleScale) == 288, "Offset mismatch for UJunoLifecycleComponent::FinalLifecycleScale");
static_assert(offsetof(UJunoLifecycleComponent, StartingPhaseIndex) == 312, "Offset mismatch for UJunoLifecycleComponent::StartingPhaseIndex");
static_assert(offsetof(UJunoLifecycleComponent, CurrentPhaseIndex) == 313, "Offset mismatch for UJunoLifecycleComponent::CurrentPhaseIndex");

// /Script/JunoProceduralWorld.JunoLifecycleProcessor
// Kind: Class; super: MassProcessor
class UJunoLifecycleProcessor
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t ExecutionOrder[0x28]; // 0x0028 (Size: 0x28, Type: StructProperty)
    std::uint8_t ProcessingPhase; // 0x0050 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ExecutionFlags; // 0x0051 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bAggregateRequirements; // 0x0052 (Size: 0x1, Type: BoolProperty)
    // 0x0052 BoolProperty bAutoRegisterWithProcessingPhases (shared storage)
    // 0x0052 BoolProperty bRequiresGameThreadExecution (shared storage)
    std::uint8_t ActivationState; // 0x0053 (Size: 0x1, Type: EnumProperty)
    std::int16_t ExecutionPriority; // 0x0054 (Size: 0x2, Type: Int16Property)
};

static_assert(offsetof(UJunoLifecycleProcessor, ExecutionOrder) == 40, "Offset mismatch for UJunoLifecycleProcessor::ExecutionOrder");
static_assert(offsetof(UJunoLifecycleProcessor, ProcessingPhase) == 80, "Offset mismatch for UJunoLifecycleProcessor::ProcessingPhase");
static_assert(offsetof(UJunoLifecycleProcessor, ExecutionFlags) == 81, "Offset mismatch for UJunoLifecycleProcessor::ExecutionFlags");
static_assert(offsetof(UJunoLifecycleProcessor, bAggregateRequirements) == 82, "Offset mismatch for UJunoLifecycleProcessor::bAggregateRequirements");
static_assert(offsetof(UJunoLifecycleProcessor, ActivationState) == 83, "Offset mismatch for UJunoLifecycleProcessor::ActivationState");
static_assert(offsetof(UJunoLifecycleProcessor, ExecutionPriority) == 84, "Offset mismatch for UJunoLifecycleProcessor::ExecutionPriority");

// /Script/JunoProceduralWorld.JunoLifecycleScaleDeinitializer
// Kind: Class; super: MassObserverProcessor
class UJunoLifecycleScaleDeinitializer
{
public:
    std::uint8_t Pad_0000[0x100]; // 0x0000
    void* ObservedType; // 0x0100 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ObservedTypes; // 0x0108 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bAutoRegisterWithObserverRegistry; // 0x0118 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UJunoLifecycleScaleDeinitializer, ObservedType) == 256, "Offset mismatch for UJunoLifecycleScaleDeinitializer::ObservedType");
static_assert(offsetof(UJunoLifecycleScaleDeinitializer, ObservedTypes) == 264, "Offset mismatch for UJunoLifecycleScaleDeinitializer::ObservedTypes");
static_assert(offsetof(UJunoLifecycleScaleDeinitializer, bAutoRegisterWithObserverRegistry) == 280, "Offset mismatch for UJunoLifecycleScaleDeinitializer::bAutoRegisterWithObserverRegistry");

// /Script/JunoProceduralWorld.JunoLifecycleScaleInitializer
// Kind: Class; super: MassObserverProcessor
class UJunoLifecycleScaleInitializer
{
public:
    std::uint8_t Pad_0000[0x100]; // 0x0000
    void* ObservedType; // 0x0100 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ObservedTypes; // 0x0108 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bAutoRegisterWithObserverRegistry; // 0x0118 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UJunoLifecycleScaleInitializer, ObservedType) == 256, "Offset mismatch for UJunoLifecycleScaleInitializer::ObservedType");
static_assert(offsetof(UJunoLifecycleScaleInitializer, ObservedTypes) == 264, "Offset mismatch for UJunoLifecycleScaleInitializer::ObservedTypes");
static_assert(offsetof(UJunoLifecycleScaleInitializer, bAutoRegisterWithObserverRegistry) == 280, "Offset mismatch for UJunoLifecycleScaleInitializer::bAutoRegisterWithObserverRegistry");

// /Script/JunoProceduralWorld.JunoLifecycleVisualizationProcessor
// Kind: Class; super: MassProcessor
class UJunoLifecycleVisualizationProcessor
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t ExecutionOrder[0x28]; // 0x0028 (Size: 0x28, Type: StructProperty)
    std::uint8_t ProcessingPhase; // 0x0050 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ExecutionFlags; // 0x0051 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bAggregateRequirements; // 0x0052 (Size: 0x1, Type: BoolProperty)
    // 0x0052 BoolProperty bAutoRegisterWithProcessingPhases (shared storage)
    // 0x0052 BoolProperty bRequiresGameThreadExecution (shared storage)
    std::uint8_t ActivationState; // 0x0053 (Size: 0x1, Type: EnumProperty)
    std::int16_t ExecutionPriority; // 0x0054 (Size: 0x2, Type: Int16Property)
};

static_assert(offsetof(UJunoLifecycleVisualizationProcessor, ExecutionOrder) == 40, "Offset mismatch for UJunoLifecycleVisualizationProcessor::ExecutionOrder");
static_assert(offsetof(UJunoLifecycleVisualizationProcessor, ProcessingPhase) == 80, "Offset mismatch for UJunoLifecycleVisualizationProcessor::ProcessingPhase");
static_assert(offsetof(UJunoLifecycleVisualizationProcessor, ExecutionFlags) == 81, "Offset mismatch for UJunoLifecycleVisualizationProcessor::ExecutionFlags");
static_assert(offsetof(UJunoLifecycleVisualizationProcessor, bAggregateRequirements) == 82, "Offset mismatch for UJunoLifecycleVisualizationProcessor::bAggregateRequirements");
static_assert(offsetof(UJunoLifecycleVisualizationProcessor, ActivationState) == 83, "Offset mismatch for UJunoLifecycleVisualizationProcessor::ActivationState");
static_assert(offsetof(UJunoLifecycleVisualizationProcessor, ExecutionPriority) == 84, "Offset mismatch for UJunoLifecycleVisualizationProcessor::ExecutionPriority");

// /Script/JunoProceduralWorld.JunoLightWeightBuildingGameplayActor
// Kind: Class; super: Actor
class UJunoLightWeightBuildingGameplayActor
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t PrimaryActorTick[0x30]; // 0x0028 (Size: 0x30, Type: StructProperty)
    std::uint8_t bAlwaysRelevant; // 0x0058 (Size: 0x1, Type: BoolProperty)
    // 0x0058 BoolProperty bCallPreReplication (shared storage)
    // 0x0058 BoolProperty bCallPreReplicationForReplay (shared storage)
    // 0x0058 BoolProperty bHidden (shared storage)
    // 0x0058 BoolProperty bNetTemporary (shared storage)
    // 0x0058 BoolProperty bOnlyRelevantToOwner (shared storage)
    // 0x0058 BoolProperty bReplicateMovement (shared storage)
    std::uint8_t bExchangedRoles; // 0x0059 (Size: 0x1, Type: BoolProperty)
    // 0x0059 BoolProperty bForceNetAddressable (shared storage)
    // 0x0059 BoolProperty bNetLoadOnClient (shared storage)
    // 0x0059 BoolProperty bNetUseOwnerRelevancy (shared storage)
    // 0x0059 BoolProperty bRelevantForLevelBounds (shared storage)
    // 0x0059 BoolProperty bRelevantForNetworkReplays (shared storage)
    // 0x0059 BoolProperty bReplayRewindable (shared storage)
    // 0x0059 BoolProperty bTearOff (shared storage)
    std::uint8_t bAllowTickBeforeBeginPlay; // 0x005A (Size: 0x1, Type: BoolProperty)
    // 0x005A BoolProperty bAutoDestroyWhenFinished (shared storage)
    // 0x005A BoolProperty bBlockInput (shared storage)
    // 0x005A BoolProperty bCanBeDamaged (shared storage)
    // 0x005A BoolProperty bCollideWhenPlacing (shared storage)
    // 0x005A BoolProperty bFindCameraComponentWhenViewTarget (shared storage)
    // 0x005A BoolProperty bGenerateOverlapEventsDuringLevelStreaming (shared storage)
    // 0x005A BoolProperty bIgnoresOriginShifting (shared storage)
    std::uint8_t bAllowReceiveTickEventOnDedicatedServer; // 0x005B (Size: 0x1, Type: BoolProperty)
    // 0x005B BoolProperty bCanBeInCluster (shared storage)
    // 0x005B BoolProperty bEnableAutoLODGeneration (shared storage)
    // 0x005B BoolProperty bIsEditorOnlyActor (shared storage)
    // 0x005B BoolProperty bReplicateUsingRegisteredSubObjectList (shared storage)
    // 0x005B BoolProperty bReplicates (shared storage)
    std::uint8_t Pad_0001[0x1]; // 0x005C
    std::uint8_t bActorEnableCollision; // 0x005D (Size: 0x1, Type: BoolProperty)
    // 0x005D BoolProperty bActorIsBeingDestroyed (shared storage)
    // 0x005D BoolProperty bAsyncPhysicsTickEnabled (shared storage)
    std::uint8_t UpdateOverlapsMethodDuringLevelStreaming; // 0x005E (Size: 0x1, Type: EnumProperty)
    std::uint8_t DefaultUpdateOverlapsMethodDuringLevelStreaming; // 0x005F (Size: 0x1, Type: EnumProperty)
    std::uint8_t RemoteRole; // 0x0060 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0061
    float InitialLifeSpan; // 0x0064 (Size: 0x4, Type: FloatProperty)
    float CustomTimeDilation; // 0x0068 (Size: 0x4, Type: FloatProperty)
    std::int32_t RayTracingGroupId; // 0x006C (Size: 0x4, Type: IntProperty)
    std::uint8_t AttachmentReplication[0x60]; // 0x0070 (Size: 0x60, Type: StructProperty)
    std::uint8_t ReplicatedMovement[0x88]; // 0x00D0 (Size: 0x88, Type: StructProperty)
    void* Owner; // 0x0158 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t NetDriverName[0x4]; // 0x0160 (Size: 0x4, Type: NameProperty)
    std::uint8_t Role; // 0x0164 (Size: 0x1, Type: ByteProperty)
    std::uint8_t NetDormancy; // 0x0165 (Size: 0x1, Type: ByteProperty)
    std::uint8_t SpawnCollisionHandlingMethod; // 0x0166 (Size: 0x1, Type: EnumProperty)
    std::uint8_t AutoReceiveInput; // 0x0167 (Size: 0x1, Type: ByteProperty)
    std::int32_t InputPriority; // 0x0168 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0003[0x4]; // 0x016C
    void* InputComponent; // 0x0170 (Size: 0x8, Type: ObjectProperty)
    std::int32_t NetTag; // 0x0178 (Size: 0x4, Type: IntProperty)
    float NetCullDistanceSquared; // 0x017C (Size: 0x4, Type: FloatProperty)
    float NetUpdateFrequency; // 0x0180 (Size: 0x4, Type: FloatProperty)
    float MinNetUpdateFrequency; // 0x0184 (Size: 0x4, Type: FloatProperty)
    float NetPriority; // 0x0188 (Size: 0x4, Type: FloatProperty)
    std::uint8_t PhysicsReplicationMode; // 0x018C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0004[0xB]; // 0x018D
    void* Instigator; // 0x0198 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Children; // 0x01A0 (Size: 0x10, Type: ArrayProperty)
    void* RootComponent; // 0x01B0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0005[0x8]; // 0x01B8
    void* HLODLayer; // 0x01C0 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Layers; // 0x01C8 (Size: 0x10, Type: ArrayProperty)
    TWeakObjectPtr<void> ParentComponent; // 0x01D8 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0006[0x10]; // 0x01E0
    TArray<void*> Tags; // 0x01F0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t OnTakeAnyDamage[0x1]; // 0x0200 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnTakePointDamage[0x1]; // 0x0201 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnTakeRadialDamage[0x1]; // 0x0202 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnActorBeginOverlap[0x1]; // 0x0203 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnActorEndOverlap[0x1]; // 0x0204 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnBeginCursorOver[0x1]; // 0x0205 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnEndCursorOver[0x1]; // 0x0206 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnClicked[0x1]; // 0x0207 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnReleased[0x1]; // 0x0208 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchBegin[0x1]; // 0x0209 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchEnd[0x1]; // 0x020A (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchEnter[0x1]; // 0x020B (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchLeave[0x1]; // 0x020C (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnActorHit[0x1]; // 0x020D (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnDestroyed[0x1]; // 0x020E (Size: 0x1, Type: MulticastSparseDelegateProperty)
    FMulticastSparseDelegate OnEndPlay; // 0x020F (Size: 0x10, Type: MulticastSparseDelegateProperty)
    std::uint8_t Pad_0007[0x31]; // 0x021F
    TArray<void*> InstanceComponents; // 0x0250 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> BlueprintCreatedComponents; // 0x0260 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UJunoLightWeightBuildingGameplayActor, PrimaryActorTick) == 40, "Offset mismatch for UJunoLightWeightBuildingGameplayActor::PrimaryActorTick");
static_assert(offsetof(UJunoLightWeightBuildingGameplayActor, bAlwaysRelevant) == 88, "Offset mismatch for UJunoLightWeightBuildingGameplayActor::bAlwaysRelevant");
static_assert(offsetof(UJunoLightWeightBuildingGameplayActor, bExchangedRoles) == 89, "Offset mismatch for UJunoLightWeightBuildingGameplayActor::bExchangedRoles");
static_assert(offsetof(UJunoLightWeightBuildingGameplayActor, bAllowTickBeforeBeginPlay) == 90, "Offset mismatch for UJunoLightWeightBuildingGameplayActor::bAllowTickBeforeBeginPlay");
static_assert(offsetof(UJunoLightWeightBuildingGameplayActor, bAllowReceiveTickEventOnDedicatedServer) == 91, "Offset mismatch for UJunoLightWeightBuildingGameplayActor::bAllowReceiveTickEventOnDedicatedServer");
static_assert(offsetof(UJunoLightWeightBuildingGameplayActor, bActorEnableCollision) == 93, "Offset mismatch for UJunoLightWeightBuildingGameplayActor::bActorEnableCollision");
static_assert(offsetof(UJunoLightWeightBuildingGameplayActor, UpdateOverlapsMethodDuringLevelStreaming) == 94, "Offset mismatch for UJunoLightWeightBuildingGameplayActor::UpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(UJunoLightWeightBuildingGameplayActor, DefaultUpdateOverlapsMethodDuringLevelStreaming) == 95, "Offset mismatch for UJunoLightWeightBuildingGameplayActor::DefaultUpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(UJunoLightWeightBuildingGameplayActor, RemoteRole) == 96, "Offset mismatch for UJunoLightWeightBuildingGameplayActor::RemoteRole");
static_assert(offsetof(UJunoLightWeightBuildingGameplayActor, InitialLifeSpan) == 100, "Offset mismatch for UJunoLightWeightBuildingGameplayActor::InitialLifeSpan");
static_assert(offsetof(UJunoLightWeightBuildingGameplayActor, CustomTimeDilation) == 104, "Offset mismatch for UJunoLightWeightBuildingGameplayActor::CustomTimeDilation");
static_assert(offsetof(UJunoLightWeightBuildingGameplayActor, RayTracingGroupId) == 108, "Offset mismatch for UJunoLightWeightBuildingGameplayActor::RayTracingGroupId");
static_assert(offsetof(UJunoLightWeightBuildingGameplayActor, AttachmentReplication) == 112, "Offset mismatch for UJunoLightWeightBuildingGameplayActor::AttachmentReplication");
static_assert(offsetof(UJunoLightWeightBuildingGameplayActor, ReplicatedMovement) == 208, "Offset mismatch for UJunoLightWeightBuildingGameplayActor::ReplicatedMovement");
static_assert(offsetof(UJunoLightWeightBuildingGameplayActor, Owner) == 344, "Offset mismatch for UJunoLightWeightBuildingGameplayActor::Owner");
static_assert(offsetof(UJunoLightWeightBuildingGameplayActor, NetDriverName) == 352, "Offset mismatch for UJunoLightWeightBuildingGameplayActor::NetDriverName");
static_assert(offsetof(UJunoLightWeightBuildingGameplayActor, Role) == 356, "Offset mismatch for UJunoLightWeightBuildingGameplayActor::Role");
static_assert(offsetof(UJunoLightWeightBuildingGameplayActor, NetDormancy) == 357, "Offset mismatch for UJunoLightWeightBuildingGameplayActor::NetDormancy");
static_assert(offsetof(UJunoLightWeightBuildingGameplayActor, SpawnCollisionHandlingMethod) == 358, "Offset mismatch for UJunoLightWeightBuildingGameplayActor::SpawnCollisionHandlingMethod");
static_assert(offsetof(UJunoLightWeightBuildingGameplayActor, AutoReceiveInput) == 359, "Offset mismatch for UJunoLightWeightBuildingGameplayActor::AutoReceiveInput");
static_assert(offsetof(UJunoLightWeightBuildingGameplayActor, InputPriority) == 360, "Offset mismatch for UJunoLightWeightBuildingGameplayActor::InputPriority");
static_assert(offsetof(UJunoLightWeightBuildingGameplayActor, InputComponent) == 368, "Offset mismatch for UJunoLightWeightBuildingGameplayActor::InputComponent");
static_assert(offsetof(UJunoLightWeightBuildingGameplayActor, NetTag) == 376, "Offset mismatch for UJunoLightWeightBuildingGameplayActor::NetTag");
static_assert(offsetof(UJunoLightWeightBuildingGameplayActor, NetCullDistanceSquared) == 380, "Offset mismatch for UJunoLightWeightBuildingGameplayActor::NetCullDistanceSquared");
static_assert(offsetof(UJunoLightWeightBuildingGameplayActor, NetUpdateFrequency) == 384, "Offset mismatch for UJunoLightWeightBuildingGameplayActor::NetUpdateFrequency");
static_assert(offsetof(UJunoLightWeightBuildingGameplayActor, MinNetUpdateFrequency) == 388, "Offset mismatch for UJunoLightWeightBuildingGameplayActor::MinNetUpdateFrequency");
static_assert(offsetof(UJunoLightWeightBuildingGameplayActor, NetPriority) == 392, "Offset mismatch for UJunoLightWeightBuildingGameplayActor::NetPriority");
static_assert(offsetof(UJunoLightWeightBuildingGameplayActor, PhysicsReplicationMode) == 396, "Offset mismatch for UJunoLightWeightBuildingGameplayActor::PhysicsReplicationMode");
static_assert(offsetof(UJunoLightWeightBuildingGameplayActor, Instigator) == 408, "Offset mismatch for UJunoLightWeightBuildingGameplayActor::Instigator");
static_assert(offsetof(UJunoLightWeightBuildingGameplayActor, Children) == 416, "Offset mismatch for UJunoLightWeightBuildingGameplayActor::Children");
static_assert(offsetof(UJunoLightWeightBuildingGameplayActor, RootComponent) == 432, "Offset mismatch for UJunoLightWeightBuildingGameplayActor::RootComponent");
static_assert(offsetof(UJunoLightWeightBuildingGameplayActor, HLODLayer) == 448, "Offset mismatch for UJunoLightWeightBuildingGameplayActor::HLODLayer");
static_assert(offsetof(UJunoLightWeightBuildingGameplayActor, Layers) == 456, "Offset mismatch for UJunoLightWeightBuildingGameplayActor::Layers");
static_assert(offsetof(UJunoLightWeightBuildingGameplayActor, ParentComponent) == 472, "Offset mismatch for UJunoLightWeightBuildingGameplayActor::ParentComponent");
static_assert(offsetof(UJunoLightWeightBuildingGameplayActor, Tags) == 496, "Offset mismatch for UJunoLightWeightBuildingGameplayActor::Tags");
static_assert(offsetof(UJunoLightWeightBuildingGameplayActor, OnTakeAnyDamage) == 512, "Offset mismatch for UJunoLightWeightBuildingGameplayActor::OnTakeAnyDamage");
static_assert(offsetof(UJunoLightWeightBuildingGameplayActor, OnTakePointDamage) == 513, "Offset mismatch for UJunoLightWeightBuildingGameplayActor::OnTakePointDamage");
static_assert(offsetof(UJunoLightWeightBuildingGameplayActor, OnTakeRadialDamage) == 514, "Offset mismatch for UJunoLightWeightBuildingGameplayActor::OnTakeRadialDamage");
static_assert(offsetof(UJunoLightWeightBuildingGameplayActor, OnActorBeginOverlap) == 515, "Offset mismatch for UJunoLightWeightBuildingGameplayActor::OnActorBeginOverlap");
static_assert(offsetof(UJunoLightWeightBuildingGameplayActor, OnActorEndOverlap) == 516, "Offset mismatch for UJunoLightWeightBuildingGameplayActor::OnActorEndOverlap");
static_assert(offsetof(UJunoLightWeightBuildingGameplayActor, OnBeginCursorOver) == 517, "Offset mismatch for UJunoLightWeightBuildingGameplayActor::OnBeginCursorOver");
static_assert(offsetof(UJunoLightWeightBuildingGameplayActor, OnEndCursorOver) == 518, "Offset mismatch for UJunoLightWeightBuildingGameplayActor::OnEndCursorOver");
static_assert(offsetof(UJunoLightWeightBuildingGameplayActor, OnClicked) == 519, "Offset mismatch for UJunoLightWeightBuildingGameplayActor::OnClicked");
static_assert(offsetof(UJunoLightWeightBuildingGameplayActor, OnReleased) == 520, "Offset mismatch for UJunoLightWeightBuildingGameplayActor::OnReleased");
static_assert(offsetof(UJunoLightWeightBuildingGameplayActor, OnInputTouchBegin) == 521, "Offset mismatch for UJunoLightWeightBuildingGameplayActor::OnInputTouchBegin");
static_assert(offsetof(UJunoLightWeightBuildingGameplayActor, OnInputTouchEnd) == 522, "Offset mismatch for UJunoLightWeightBuildingGameplayActor::OnInputTouchEnd");
static_assert(offsetof(UJunoLightWeightBuildingGameplayActor, OnInputTouchEnter) == 523, "Offset mismatch for UJunoLightWeightBuildingGameplayActor::OnInputTouchEnter");
static_assert(offsetof(UJunoLightWeightBuildingGameplayActor, OnInputTouchLeave) == 524, "Offset mismatch for UJunoLightWeightBuildingGameplayActor::OnInputTouchLeave");
static_assert(offsetof(UJunoLightWeightBuildingGameplayActor, OnActorHit) == 525, "Offset mismatch for UJunoLightWeightBuildingGameplayActor::OnActorHit");
static_assert(offsetof(UJunoLightWeightBuildingGameplayActor, OnDestroyed) == 526, "Offset mismatch for UJunoLightWeightBuildingGameplayActor::OnDestroyed");
static_assert(offsetof(UJunoLightWeightBuildingGameplayActor, OnEndPlay) == 527, "Offset mismatch for UJunoLightWeightBuildingGameplayActor::OnEndPlay");
static_assert(offsetof(UJunoLightWeightBuildingGameplayActor, InstanceComponents) == 592, "Offset mismatch for UJunoLightWeightBuildingGameplayActor::InstanceComponents");
static_assert(offsetof(UJunoLightWeightBuildingGameplayActor, BlueprintCreatedComponents) == 608, "Offset mismatch for UJunoLightWeightBuildingGameplayActor::BlueprintCreatedComponents");

// /Script/JunoProceduralWorld.JunoLightWeightBuildingProp
// Kind: Class; super: Actor
class UJunoLightWeightBuildingProp
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t PrimaryActorTick[0x30]; // 0x0028 (Size: 0x30, Type: StructProperty)
    std::uint8_t bAlwaysRelevant; // 0x0058 (Size: 0x1, Type: BoolProperty)
    // 0x0058 BoolProperty bCallPreReplication (shared storage)
    // 0x0058 BoolProperty bCallPreReplicationForReplay (shared storage)
    // 0x0058 BoolProperty bHidden (shared storage)
    // 0x0058 BoolProperty bNetTemporary (shared storage)
    // 0x0058 BoolProperty bOnlyRelevantToOwner (shared storage)
    // 0x0058 BoolProperty bReplicateMovement (shared storage)
    std::uint8_t bExchangedRoles; // 0x0059 (Size: 0x1, Type: BoolProperty)
    // 0x0059 BoolProperty bForceNetAddressable (shared storage)
    // 0x0059 BoolProperty bNetLoadOnClient (shared storage)
    // 0x0059 BoolProperty bNetUseOwnerRelevancy (shared storage)
    // 0x0059 BoolProperty bRelevantForLevelBounds (shared storage)
    // 0x0059 BoolProperty bRelevantForNetworkReplays (shared storage)
    // 0x0059 BoolProperty bReplayRewindable (shared storage)
    // 0x0059 BoolProperty bTearOff (shared storage)
    std::uint8_t bAllowTickBeforeBeginPlay; // 0x005A (Size: 0x1, Type: BoolProperty)
    // 0x005A BoolProperty bAutoDestroyWhenFinished (shared storage)
    // 0x005A BoolProperty bBlockInput (shared storage)
    // 0x005A BoolProperty bCanBeDamaged (shared storage)
    // 0x005A BoolProperty bCollideWhenPlacing (shared storage)
    // 0x005A BoolProperty bFindCameraComponentWhenViewTarget (shared storage)
    // 0x005A BoolProperty bGenerateOverlapEventsDuringLevelStreaming (shared storage)
    // 0x005A BoolProperty bIgnoresOriginShifting (shared storage)
    std::uint8_t bAllowReceiveTickEventOnDedicatedServer; // 0x005B (Size: 0x1, Type: BoolProperty)
    // 0x005B BoolProperty bCanBeInCluster (shared storage)
    // 0x005B BoolProperty bEnableAutoLODGeneration (shared storage)
    // 0x005B BoolProperty bIsEditorOnlyActor (shared storage)
    // 0x005B BoolProperty bReplicateUsingRegisteredSubObjectList (shared storage)
    // 0x005B BoolProperty bReplicates (shared storage)
    std::uint8_t Pad_0001[0x1]; // 0x005C
    std::uint8_t bActorEnableCollision; // 0x005D (Size: 0x1, Type: BoolProperty)
    // 0x005D BoolProperty bActorIsBeingDestroyed (shared storage)
    // 0x005D BoolProperty bAsyncPhysicsTickEnabled (shared storage)
    std::uint8_t UpdateOverlapsMethodDuringLevelStreaming; // 0x005E (Size: 0x1, Type: EnumProperty)
    std::uint8_t DefaultUpdateOverlapsMethodDuringLevelStreaming; // 0x005F (Size: 0x1, Type: EnumProperty)
    std::uint8_t RemoteRole; // 0x0060 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0061
    float InitialLifeSpan; // 0x0064 (Size: 0x4, Type: FloatProperty)
    float CustomTimeDilation; // 0x0068 (Size: 0x4, Type: FloatProperty)
    std::int32_t RayTracingGroupId; // 0x006C (Size: 0x4, Type: IntProperty)
    std::uint8_t AttachmentReplication[0x60]; // 0x0070 (Size: 0x60, Type: StructProperty)
    std::uint8_t ReplicatedMovement[0x88]; // 0x00D0 (Size: 0x88, Type: StructProperty)
    void* Owner; // 0x0158 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t NetDriverName[0x4]; // 0x0160 (Size: 0x4, Type: NameProperty)
    std::uint8_t Role; // 0x0164 (Size: 0x1, Type: ByteProperty)
    std::uint8_t NetDormancy; // 0x0165 (Size: 0x1, Type: ByteProperty)
    std::uint8_t SpawnCollisionHandlingMethod; // 0x0166 (Size: 0x1, Type: EnumProperty)
    std::uint8_t AutoReceiveInput; // 0x0167 (Size: 0x1, Type: ByteProperty)
    std::int32_t InputPriority; // 0x0168 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0003[0x4]; // 0x016C
    void* InputComponent; // 0x0170 (Size: 0x8, Type: ObjectProperty)
    std::int32_t NetTag; // 0x0178 (Size: 0x4, Type: IntProperty)
    float NetCullDistanceSquared; // 0x017C (Size: 0x4, Type: FloatProperty)
    float NetUpdateFrequency; // 0x0180 (Size: 0x4, Type: FloatProperty)
    float MinNetUpdateFrequency; // 0x0184 (Size: 0x4, Type: FloatProperty)
    float NetPriority; // 0x0188 (Size: 0x4, Type: FloatProperty)
    std::uint8_t PhysicsReplicationMode; // 0x018C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0004[0xB]; // 0x018D
    void* Instigator; // 0x0198 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Children; // 0x01A0 (Size: 0x10, Type: ArrayProperty)
    void* RootComponent; // 0x01B0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0005[0x8]; // 0x01B8
    void* HLODLayer; // 0x01C0 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Layers; // 0x01C8 (Size: 0x10, Type: ArrayProperty)
    TWeakObjectPtr<void> ParentComponent; // 0x01D8 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0006[0x10]; // 0x01E0
    TArray<void*> Tags; // 0x01F0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t OnTakeAnyDamage[0x1]; // 0x0200 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnTakePointDamage[0x1]; // 0x0201 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnTakeRadialDamage[0x1]; // 0x0202 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnActorBeginOverlap[0x1]; // 0x0203 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnActorEndOverlap[0x1]; // 0x0204 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnBeginCursorOver[0x1]; // 0x0205 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnEndCursorOver[0x1]; // 0x0206 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnClicked[0x1]; // 0x0207 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnReleased[0x1]; // 0x0208 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchBegin[0x1]; // 0x0209 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchEnd[0x1]; // 0x020A (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchEnter[0x1]; // 0x020B (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchLeave[0x1]; // 0x020C (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnActorHit[0x1]; // 0x020D (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnDestroyed[0x1]; // 0x020E (Size: 0x1, Type: MulticastSparseDelegateProperty)
    FMulticastSparseDelegate OnEndPlay; // 0x020F (Size: 0x10, Type: MulticastSparseDelegateProperty)
    std::uint8_t Pad_0007[0x31]; // 0x021F
    TArray<void*> InstanceComponents; // 0x0250 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> BlueprintCreatedComponents; // 0x0260 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UJunoLightWeightBuildingProp, PrimaryActorTick) == 40, "Offset mismatch for UJunoLightWeightBuildingProp::PrimaryActorTick");
static_assert(offsetof(UJunoLightWeightBuildingProp, bAlwaysRelevant) == 88, "Offset mismatch for UJunoLightWeightBuildingProp::bAlwaysRelevant");
static_assert(offsetof(UJunoLightWeightBuildingProp, bExchangedRoles) == 89, "Offset mismatch for UJunoLightWeightBuildingProp::bExchangedRoles");
static_assert(offsetof(UJunoLightWeightBuildingProp, bAllowTickBeforeBeginPlay) == 90, "Offset mismatch for UJunoLightWeightBuildingProp::bAllowTickBeforeBeginPlay");
static_assert(offsetof(UJunoLightWeightBuildingProp, bAllowReceiveTickEventOnDedicatedServer) == 91, "Offset mismatch for UJunoLightWeightBuildingProp::bAllowReceiveTickEventOnDedicatedServer");
static_assert(offsetof(UJunoLightWeightBuildingProp, bActorEnableCollision) == 93, "Offset mismatch for UJunoLightWeightBuildingProp::bActorEnableCollision");
static_assert(offsetof(UJunoLightWeightBuildingProp, UpdateOverlapsMethodDuringLevelStreaming) == 94, "Offset mismatch for UJunoLightWeightBuildingProp::UpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(UJunoLightWeightBuildingProp, DefaultUpdateOverlapsMethodDuringLevelStreaming) == 95, "Offset mismatch for UJunoLightWeightBuildingProp::DefaultUpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(UJunoLightWeightBuildingProp, RemoteRole) == 96, "Offset mismatch for UJunoLightWeightBuildingProp::RemoteRole");
static_assert(offsetof(UJunoLightWeightBuildingProp, InitialLifeSpan) == 100, "Offset mismatch for UJunoLightWeightBuildingProp::InitialLifeSpan");
static_assert(offsetof(UJunoLightWeightBuildingProp, CustomTimeDilation) == 104, "Offset mismatch for UJunoLightWeightBuildingProp::CustomTimeDilation");
static_assert(offsetof(UJunoLightWeightBuildingProp, RayTracingGroupId) == 108, "Offset mismatch for UJunoLightWeightBuildingProp::RayTracingGroupId");
static_assert(offsetof(UJunoLightWeightBuildingProp, AttachmentReplication) == 112, "Offset mismatch for UJunoLightWeightBuildingProp::AttachmentReplication");
static_assert(offsetof(UJunoLightWeightBuildingProp, ReplicatedMovement) == 208, "Offset mismatch for UJunoLightWeightBuildingProp::ReplicatedMovement");
static_assert(offsetof(UJunoLightWeightBuildingProp, Owner) == 344, "Offset mismatch for UJunoLightWeightBuildingProp::Owner");
static_assert(offsetof(UJunoLightWeightBuildingProp, NetDriverName) == 352, "Offset mismatch for UJunoLightWeightBuildingProp::NetDriverName");
static_assert(offsetof(UJunoLightWeightBuildingProp, Role) == 356, "Offset mismatch for UJunoLightWeightBuildingProp::Role");
static_assert(offsetof(UJunoLightWeightBuildingProp, NetDormancy) == 357, "Offset mismatch for UJunoLightWeightBuildingProp::NetDormancy");
static_assert(offsetof(UJunoLightWeightBuildingProp, SpawnCollisionHandlingMethod) == 358, "Offset mismatch for UJunoLightWeightBuildingProp::SpawnCollisionHandlingMethod");
static_assert(offsetof(UJunoLightWeightBuildingProp, AutoReceiveInput) == 359, "Offset mismatch for UJunoLightWeightBuildingProp::AutoReceiveInput");
static_assert(offsetof(UJunoLightWeightBuildingProp, InputPriority) == 360, "Offset mismatch for UJunoLightWeightBuildingProp::InputPriority");
static_assert(offsetof(UJunoLightWeightBuildingProp, InputComponent) == 368, "Offset mismatch for UJunoLightWeightBuildingProp::InputComponent");
static_assert(offsetof(UJunoLightWeightBuildingProp, NetTag) == 376, "Offset mismatch for UJunoLightWeightBuildingProp::NetTag");
static_assert(offsetof(UJunoLightWeightBuildingProp, NetCullDistanceSquared) == 380, "Offset mismatch for UJunoLightWeightBuildingProp::NetCullDistanceSquared");
static_assert(offsetof(UJunoLightWeightBuildingProp, NetUpdateFrequency) == 384, "Offset mismatch for UJunoLightWeightBuildingProp::NetUpdateFrequency");
static_assert(offsetof(UJunoLightWeightBuildingProp, MinNetUpdateFrequency) == 388, "Offset mismatch for UJunoLightWeightBuildingProp::MinNetUpdateFrequency");
static_assert(offsetof(UJunoLightWeightBuildingProp, NetPriority) == 392, "Offset mismatch for UJunoLightWeightBuildingProp::NetPriority");
static_assert(offsetof(UJunoLightWeightBuildingProp, PhysicsReplicationMode) == 396, "Offset mismatch for UJunoLightWeightBuildingProp::PhysicsReplicationMode");
static_assert(offsetof(UJunoLightWeightBuildingProp, Instigator) == 408, "Offset mismatch for UJunoLightWeightBuildingProp::Instigator");
static_assert(offsetof(UJunoLightWeightBuildingProp, Children) == 416, "Offset mismatch for UJunoLightWeightBuildingProp::Children");
static_assert(offsetof(UJunoLightWeightBuildingProp, RootComponent) == 432, "Offset mismatch for UJunoLightWeightBuildingProp::RootComponent");
static_assert(offsetof(UJunoLightWeightBuildingProp, HLODLayer) == 448, "Offset mismatch for UJunoLightWeightBuildingProp::HLODLayer");
static_assert(offsetof(UJunoLightWeightBuildingProp, Layers) == 456, "Offset mismatch for UJunoLightWeightBuildingProp::Layers");
static_assert(offsetof(UJunoLightWeightBuildingProp, ParentComponent) == 472, "Offset mismatch for UJunoLightWeightBuildingProp::ParentComponent");
static_assert(offsetof(UJunoLightWeightBuildingProp, Tags) == 496, "Offset mismatch for UJunoLightWeightBuildingProp::Tags");
static_assert(offsetof(UJunoLightWeightBuildingProp, OnTakeAnyDamage) == 512, "Offset mismatch for UJunoLightWeightBuildingProp::OnTakeAnyDamage");
static_assert(offsetof(UJunoLightWeightBuildingProp, OnTakePointDamage) == 513, "Offset mismatch for UJunoLightWeightBuildingProp::OnTakePointDamage");
static_assert(offsetof(UJunoLightWeightBuildingProp, OnTakeRadialDamage) == 514, "Offset mismatch for UJunoLightWeightBuildingProp::OnTakeRadialDamage");
static_assert(offsetof(UJunoLightWeightBuildingProp, OnActorBeginOverlap) == 515, "Offset mismatch for UJunoLightWeightBuildingProp::OnActorBeginOverlap");
static_assert(offsetof(UJunoLightWeightBuildingProp, OnActorEndOverlap) == 516, "Offset mismatch for UJunoLightWeightBuildingProp::OnActorEndOverlap");
static_assert(offsetof(UJunoLightWeightBuildingProp, OnBeginCursorOver) == 517, "Offset mismatch for UJunoLightWeightBuildingProp::OnBeginCursorOver");
static_assert(offsetof(UJunoLightWeightBuildingProp, OnEndCursorOver) == 518, "Offset mismatch for UJunoLightWeightBuildingProp::OnEndCursorOver");
static_assert(offsetof(UJunoLightWeightBuildingProp, OnClicked) == 519, "Offset mismatch for UJunoLightWeightBuildingProp::OnClicked");
static_assert(offsetof(UJunoLightWeightBuildingProp, OnReleased) == 520, "Offset mismatch for UJunoLightWeightBuildingProp::OnReleased");
static_assert(offsetof(UJunoLightWeightBuildingProp, OnInputTouchBegin) == 521, "Offset mismatch for UJunoLightWeightBuildingProp::OnInputTouchBegin");
static_assert(offsetof(UJunoLightWeightBuildingProp, OnInputTouchEnd) == 522, "Offset mismatch for UJunoLightWeightBuildingProp::OnInputTouchEnd");
static_assert(offsetof(UJunoLightWeightBuildingProp, OnInputTouchEnter) == 523, "Offset mismatch for UJunoLightWeightBuildingProp::OnInputTouchEnter");
static_assert(offsetof(UJunoLightWeightBuildingProp, OnInputTouchLeave) == 524, "Offset mismatch for UJunoLightWeightBuildingProp::OnInputTouchLeave");
static_assert(offsetof(UJunoLightWeightBuildingProp, OnActorHit) == 525, "Offset mismatch for UJunoLightWeightBuildingProp::OnActorHit");
static_assert(offsetof(UJunoLightWeightBuildingProp, OnDestroyed) == 526, "Offset mismatch for UJunoLightWeightBuildingProp::OnDestroyed");
static_assert(offsetof(UJunoLightWeightBuildingProp, OnEndPlay) == 527, "Offset mismatch for UJunoLightWeightBuildingProp::OnEndPlay");
static_assert(offsetof(UJunoLightWeightBuildingProp, InstanceComponents) == 592, "Offset mismatch for UJunoLightWeightBuildingProp::InstanceComponents");
static_assert(offsetof(UJunoLightWeightBuildingProp, BlueprintCreatedComponents) == 608, "Offset mismatch for UJunoLightWeightBuildingProp::BlueprintCreatedComponents");

// /Script/JunoProceduralWorld.JunoLightWeightFortStaticMeshActor
// Kind: Class; super: Actor
class UJunoLightWeightFortStaticMeshActor
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t PrimaryActorTick[0x30]; // 0x0028 (Size: 0x30, Type: StructProperty)
    std::uint8_t bAlwaysRelevant; // 0x0058 (Size: 0x1, Type: BoolProperty)
    // 0x0058 BoolProperty bCallPreReplication (shared storage)
    // 0x0058 BoolProperty bCallPreReplicationForReplay (shared storage)
    // 0x0058 BoolProperty bHidden (shared storage)
    // 0x0058 BoolProperty bNetTemporary (shared storage)
    // 0x0058 BoolProperty bOnlyRelevantToOwner (shared storage)
    // 0x0058 BoolProperty bReplicateMovement (shared storage)
    std::uint8_t bExchangedRoles; // 0x0059 (Size: 0x1, Type: BoolProperty)
    // 0x0059 BoolProperty bForceNetAddressable (shared storage)
    // 0x0059 BoolProperty bNetLoadOnClient (shared storage)
    // 0x0059 BoolProperty bNetUseOwnerRelevancy (shared storage)
    // 0x0059 BoolProperty bRelevantForLevelBounds (shared storage)
    // 0x0059 BoolProperty bRelevantForNetworkReplays (shared storage)
    // 0x0059 BoolProperty bReplayRewindable (shared storage)
    // 0x0059 BoolProperty bTearOff (shared storage)
    std::uint8_t bAllowTickBeforeBeginPlay; // 0x005A (Size: 0x1, Type: BoolProperty)
    // 0x005A BoolProperty bAutoDestroyWhenFinished (shared storage)
    // 0x005A BoolProperty bBlockInput (shared storage)
    // 0x005A BoolProperty bCanBeDamaged (shared storage)
    // 0x005A BoolProperty bCollideWhenPlacing (shared storage)
    // 0x005A BoolProperty bFindCameraComponentWhenViewTarget (shared storage)
    // 0x005A BoolProperty bGenerateOverlapEventsDuringLevelStreaming (shared storage)
    // 0x005A BoolProperty bIgnoresOriginShifting (shared storage)
    std::uint8_t bAllowReceiveTickEventOnDedicatedServer; // 0x005B (Size: 0x1, Type: BoolProperty)
    // 0x005B BoolProperty bCanBeInCluster (shared storage)
    // 0x005B BoolProperty bEnableAutoLODGeneration (shared storage)
    // 0x005B BoolProperty bIsEditorOnlyActor (shared storage)
    // 0x005B BoolProperty bReplicateUsingRegisteredSubObjectList (shared storage)
    // 0x005B BoolProperty bReplicates (shared storage)
    std::uint8_t Pad_0001[0x1]; // 0x005C
    std::uint8_t bActorEnableCollision; // 0x005D (Size: 0x1, Type: BoolProperty)
    // 0x005D BoolProperty bActorIsBeingDestroyed (shared storage)
    // 0x005D BoolProperty bAsyncPhysicsTickEnabled (shared storage)
    std::uint8_t UpdateOverlapsMethodDuringLevelStreaming; // 0x005E (Size: 0x1, Type: EnumProperty)
    std::uint8_t DefaultUpdateOverlapsMethodDuringLevelStreaming; // 0x005F (Size: 0x1, Type: EnumProperty)
    std::uint8_t RemoteRole; // 0x0060 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0061
    float InitialLifeSpan; // 0x0064 (Size: 0x4, Type: FloatProperty)
    float CustomTimeDilation; // 0x0068 (Size: 0x4, Type: FloatProperty)
    std::int32_t RayTracingGroupId; // 0x006C (Size: 0x4, Type: IntProperty)
    std::uint8_t AttachmentReplication[0x60]; // 0x0070 (Size: 0x60, Type: StructProperty)
    std::uint8_t ReplicatedMovement[0x88]; // 0x00D0 (Size: 0x88, Type: StructProperty)
    void* Owner; // 0x0158 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t NetDriverName[0x4]; // 0x0160 (Size: 0x4, Type: NameProperty)
    std::uint8_t Role; // 0x0164 (Size: 0x1, Type: ByteProperty)
    std::uint8_t NetDormancy; // 0x0165 (Size: 0x1, Type: ByteProperty)
    std::uint8_t SpawnCollisionHandlingMethod; // 0x0166 (Size: 0x1, Type: EnumProperty)
    std::uint8_t AutoReceiveInput; // 0x0167 (Size: 0x1, Type: ByteProperty)
    std::int32_t InputPriority; // 0x0168 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0003[0x4]; // 0x016C
    void* InputComponent; // 0x0170 (Size: 0x8, Type: ObjectProperty)
    std::int32_t NetTag; // 0x0178 (Size: 0x4, Type: IntProperty)
    float NetCullDistanceSquared; // 0x017C (Size: 0x4, Type: FloatProperty)
    float NetUpdateFrequency; // 0x0180 (Size: 0x4, Type: FloatProperty)
    float MinNetUpdateFrequency; // 0x0184 (Size: 0x4, Type: FloatProperty)
    float NetPriority; // 0x0188 (Size: 0x4, Type: FloatProperty)
    std::uint8_t PhysicsReplicationMode; // 0x018C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0004[0xB]; // 0x018D
    void* Instigator; // 0x0198 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Children; // 0x01A0 (Size: 0x10, Type: ArrayProperty)
    void* RootComponent; // 0x01B0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0005[0x8]; // 0x01B8
    void* HLODLayer; // 0x01C0 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Layers; // 0x01C8 (Size: 0x10, Type: ArrayProperty)
    TWeakObjectPtr<void> ParentComponent; // 0x01D8 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0006[0x10]; // 0x01E0
    TArray<void*> Tags; // 0x01F0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t OnTakeAnyDamage[0x1]; // 0x0200 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnTakePointDamage[0x1]; // 0x0201 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnTakeRadialDamage[0x1]; // 0x0202 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnActorBeginOverlap[0x1]; // 0x0203 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnActorEndOverlap[0x1]; // 0x0204 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnBeginCursorOver[0x1]; // 0x0205 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnEndCursorOver[0x1]; // 0x0206 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnClicked[0x1]; // 0x0207 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnReleased[0x1]; // 0x0208 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchBegin[0x1]; // 0x0209 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchEnd[0x1]; // 0x020A (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchEnter[0x1]; // 0x020B (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchLeave[0x1]; // 0x020C (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnActorHit[0x1]; // 0x020D (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnDestroyed[0x1]; // 0x020E (Size: 0x1, Type: MulticastSparseDelegateProperty)
    FMulticastSparseDelegate OnEndPlay; // 0x020F (Size: 0x10, Type: MulticastSparseDelegateProperty)
    std::uint8_t Pad_0007[0x31]; // 0x021F
    TArray<void*> InstanceComponents; // 0x0250 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> BlueprintCreatedComponents; // 0x0260 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UJunoLightWeightFortStaticMeshActor, PrimaryActorTick) == 40, "Offset mismatch for UJunoLightWeightFortStaticMeshActor::PrimaryActorTick");
static_assert(offsetof(UJunoLightWeightFortStaticMeshActor, bAlwaysRelevant) == 88, "Offset mismatch for UJunoLightWeightFortStaticMeshActor::bAlwaysRelevant");
static_assert(offsetof(UJunoLightWeightFortStaticMeshActor, bExchangedRoles) == 89, "Offset mismatch for UJunoLightWeightFortStaticMeshActor::bExchangedRoles");
static_assert(offsetof(UJunoLightWeightFortStaticMeshActor, bAllowTickBeforeBeginPlay) == 90, "Offset mismatch for UJunoLightWeightFortStaticMeshActor::bAllowTickBeforeBeginPlay");
static_assert(offsetof(UJunoLightWeightFortStaticMeshActor, bAllowReceiveTickEventOnDedicatedServer) == 91, "Offset mismatch for UJunoLightWeightFortStaticMeshActor::bAllowReceiveTickEventOnDedicatedServer");
static_assert(offsetof(UJunoLightWeightFortStaticMeshActor, bActorEnableCollision) == 93, "Offset mismatch for UJunoLightWeightFortStaticMeshActor::bActorEnableCollision");
static_assert(offsetof(UJunoLightWeightFortStaticMeshActor, UpdateOverlapsMethodDuringLevelStreaming) == 94, "Offset mismatch for UJunoLightWeightFortStaticMeshActor::UpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(UJunoLightWeightFortStaticMeshActor, DefaultUpdateOverlapsMethodDuringLevelStreaming) == 95, "Offset mismatch for UJunoLightWeightFortStaticMeshActor::DefaultUpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(UJunoLightWeightFortStaticMeshActor, RemoteRole) == 96, "Offset mismatch for UJunoLightWeightFortStaticMeshActor::RemoteRole");
static_assert(offsetof(UJunoLightWeightFortStaticMeshActor, InitialLifeSpan) == 100, "Offset mismatch for UJunoLightWeightFortStaticMeshActor::InitialLifeSpan");
static_assert(offsetof(UJunoLightWeightFortStaticMeshActor, CustomTimeDilation) == 104, "Offset mismatch for UJunoLightWeightFortStaticMeshActor::CustomTimeDilation");
static_assert(offsetof(UJunoLightWeightFortStaticMeshActor, RayTracingGroupId) == 108, "Offset mismatch for UJunoLightWeightFortStaticMeshActor::RayTracingGroupId");
static_assert(offsetof(UJunoLightWeightFortStaticMeshActor, AttachmentReplication) == 112, "Offset mismatch for UJunoLightWeightFortStaticMeshActor::AttachmentReplication");
static_assert(offsetof(UJunoLightWeightFortStaticMeshActor, ReplicatedMovement) == 208, "Offset mismatch for UJunoLightWeightFortStaticMeshActor::ReplicatedMovement");
static_assert(offsetof(UJunoLightWeightFortStaticMeshActor, Owner) == 344, "Offset mismatch for UJunoLightWeightFortStaticMeshActor::Owner");
static_assert(offsetof(UJunoLightWeightFortStaticMeshActor, NetDriverName) == 352, "Offset mismatch for UJunoLightWeightFortStaticMeshActor::NetDriverName");
static_assert(offsetof(UJunoLightWeightFortStaticMeshActor, Role) == 356, "Offset mismatch for UJunoLightWeightFortStaticMeshActor::Role");
static_assert(offsetof(UJunoLightWeightFortStaticMeshActor, NetDormancy) == 357, "Offset mismatch for UJunoLightWeightFortStaticMeshActor::NetDormancy");
static_assert(offsetof(UJunoLightWeightFortStaticMeshActor, SpawnCollisionHandlingMethod) == 358, "Offset mismatch for UJunoLightWeightFortStaticMeshActor::SpawnCollisionHandlingMethod");
static_assert(offsetof(UJunoLightWeightFortStaticMeshActor, AutoReceiveInput) == 359, "Offset mismatch for UJunoLightWeightFortStaticMeshActor::AutoReceiveInput");
static_assert(offsetof(UJunoLightWeightFortStaticMeshActor, InputPriority) == 360, "Offset mismatch for UJunoLightWeightFortStaticMeshActor::InputPriority");
static_assert(offsetof(UJunoLightWeightFortStaticMeshActor, InputComponent) == 368, "Offset mismatch for UJunoLightWeightFortStaticMeshActor::InputComponent");
static_assert(offsetof(UJunoLightWeightFortStaticMeshActor, NetTag) == 376, "Offset mismatch for UJunoLightWeightFortStaticMeshActor::NetTag");
static_assert(offsetof(UJunoLightWeightFortStaticMeshActor, NetCullDistanceSquared) == 380, "Offset mismatch for UJunoLightWeightFortStaticMeshActor::NetCullDistanceSquared");
static_assert(offsetof(UJunoLightWeightFortStaticMeshActor, NetUpdateFrequency) == 384, "Offset mismatch for UJunoLightWeightFortStaticMeshActor::NetUpdateFrequency");
static_assert(offsetof(UJunoLightWeightFortStaticMeshActor, MinNetUpdateFrequency) == 388, "Offset mismatch for UJunoLightWeightFortStaticMeshActor::MinNetUpdateFrequency");
static_assert(offsetof(UJunoLightWeightFortStaticMeshActor, NetPriority) == 392, "Offset mismatch for UJunoLightWeightFortStaticMeshActor::NetPriority");
static_assert(offsetof(UJunoLightWeightFortStaticMeshActor, PhysicsReplicationMode) == 396, "Offset mismatch for UJunoLightWeightFortStaticMeshActor::PhysicsReplicationMode");
static_assert(offsetof(UJunoLightWeightFortStaticMeshActor, Instigator) == 408, "Offset mismatch for UJunoLightWeightFortStaticMeshActor::Instigator");
static_assert(offsetof(UJunoLightWeightFortStaticMeshActor, Children) == 416, "Offset mismatch for UJunoLightWeightFortStaticMeshActor::Children");
static_assert(offsetof(UJunoLightWeightFortStaticMeshActor, RootComponent) == 432, "Offset mismatch for UJunoLightWeightFortStaticMeshActor::RootComponent");
static_assert(offsetof(UJunoLightWeightFortStaticMeshActor, HLODLayer) == 448, "Offset mismatch for UJunoLightWeightFortStaticMeshActor::HLODLayer");
static_assert(offsetof(UJunoLightWeightFortStaticMeshActor, Layers) == 456, "Offset mismatch for UJunoLightWeightFortStaticMeshActor::Layers");
static_assert(offsetof(UJunoLightWeightFortStaticMeshActor, ParentComponent) == 472, "Offset mismatch for UJunoLightWeightFortStaticMeshActor::ParentComponent");
static_assert(offsetof(UJunoLightWeightFortStaticMeshActor, Tags) == 496, "Offset mismatch for UJunoLightWeightFortStaticMeshActor::Tags");
static_assert(offsetof(UJunoLightWeightFortStaticMeshActor, OnTakeAnyDamage) == 512, "Offset mismatch for UJunoLightWeightFortStaticMeshActor::OnTakeAnyDamage");
static_assert(offsetof(UJunoLightWeightFortStaticMeshActor, OnTakePointDamage) == 513, "Offset mismatch for UJunoLightWeightFortStaticMeshActor::OnTakePointDamage");
static_assert(offsetof(UJunoLightWeightFortStaticMeshActor, OnTakeRadialDamage) == 514, "Offset mismatch for UJunoLightWeightFortStaticMeshActor::OnTakeRadialDamage");
static_assert(offsetof(UJunoLightWeightFortStaticMeshActor, OnActorBeginOverlap) == 515, "Offset mismatch for UJunoLightWeightFortStaticMeshActor::OnActorBeginOverlap");
static_assert(offsetof(UJunoLightWeightFortStaticMeshActor, OnActorEndOverlap) == 516, "Offset mismatch for UJunoLightWeightFortStaticMeshActor::OnActorEndOverlap");
static_assert(offsetof(UJunoLightWeightFortStaticMeshActor, OnBeginCursorOver) == 517, "Offset mismatch for UJunoLightWeightFortStaticMeshActor::OnBeginCursorOver");
static_assert(offsetof(UJunoLightWeightFortStaticMeshActor, OnEndCursorOver) == 518, "Offset mismatch for UJunoLightWeightFortStaticMeshActor::OnEndCursorOver");
static_assert(offsetof(UJunoLightWeightFortStaticMeshActor, OnClicked) == 519, "Offset mismatch for UJunoLightWeightFortStaticMeshActor::OnClicked");
static_assert(offsetof(UJunoLightWeightFortStaticMeshActor, OnReleased) == 520, "Offset mismatch for UJunoLightWeightFortStaticMeshActor::OnReleased");
static_assert(offsetof(UJunoLightWeightFortStaticMeshActor, OnInputTouchBegin) == 521, "Offset mismatch for UJunoLightWeightFortStaticMeshActor::OnInputTouchBegin");
static_assert(offsetof(UJunoLightWeightFortStaticMeshActor, OnInputTouchEnd) == 522, "Offset mismatch for UJunoLightWeightFortStaticMeshActor::OnInputTouchEnd");
static_assert(offsetof(UJunoLightWeightFortStaticMeshActor, OnInputTouchEnter) == 523, "Offset mismatch for UJunoLightWeightFortStaticMeshActor::OnInputTouchEnter");
static_assert(offsetof(UJunoLightWeightFortStaticMeshActor, OnInputTouchLeave) == 524, "Offset mismatch for UJunoLightWeightFortStaticMeshActor::OnInputTouchLeave");
static_assert(offsetof(UJunoLightWeightFortStaticMeshActor, OnActorHit) == 525, "Offset mismatch for UJunoLightWeightFortStaticMeshActor::OnActorHit");
static_assert(offsetof(UJunoLightWeightFortStaticMeshActor, OnDestroyed) == 526, "Offset mismatch for UJunoLightWeightFortStaticMeshActor::OnDestroyed");
static_assert(offsetof(UJunoLightWeightFortStaticMeshActor, OnEndPlay) == 527, "Offset mismatch for UJunoLightWeightFortStaticMeshActor::OnEndPlay");
static_assert(offsetof(UJunoLightWeightFortStaticMeshActor, InstanceComponents) == 592, "Offset mismatch for UJunoLightWeightFortStaticMeshActor::InstanceComponents");
static_assert(offsetof(UJunoLightWeightFortStaticMeshActor, BlueprintCreatedComponents) == 608, "Offset mismatch for UJunoLightWeightFortStaticMeshActor::BlueprintCreatedComponents");

// /Script/JunoProceduralWorld.JunoLivingWorldCaveSpawnLimiterComponent
// Kind: Class; super: ActorComponent
class UJunoLivingWorldCaveSpawnLimiterComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t SpawnLimitData[0x1]; // 0x00C0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoLivingWorldCaveSpawnLimiterComponent, SpawnLimitData) == 192, "Offset mismatch for UJunoLivingWorldCaveSpawnLimiterComponent::SpawnLimitData");

// /Script/JunoProceduralWorld.JunoLivingWorldCaveSpawnManager
// Kind: Class; super: GameStateComponent
class UJunoLivingWorldCaveSpawnManager
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TMap<void*, void*> ShellInfos; // 0x00C0 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> UnprocessedPointProviders; // 0x00D0 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UJunoLivingWorldCaveSpawnManager, ShellInfos) == 192, "Offset mismatch for UJunoLivingWorldCaveSpawnManager::ShellInfos");
static_assert(offsetof(UJunoLivingWorldCaveSpawnManager, UnprocessedPointProviders) == 208, "Offset mismatch for UJunoLivingWorldCaveSpawnManager::UnprocessedPointProviders");

// /Script/JunoProceduralWorld.JunoLivingWorldLightStaticPointProvider
// Kind: Class; super: FortAthenaLivingWorldLightStaticPointProvider
class UJunoLivingWorldLightStaticPointProvider
{
public:
    std::uint8_t Pad_0000[0x1C0]; // 0x0000
    std::uint8_t EventLimiter[0x20]; // 0x01C0 (Size: 0x20, Type: StructProperty)
    std::uint8_t SavedActorGuid[0x1]; // 0x01E0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoLivingWorldLightStaticPointProvider, EventLimiter) == 448, "Offset mismatch for UJunoLivingWorldLightStaticPointProvider::EventLimiter");
static_assert(offsetof(UJunoLivingWorldLightStaticPointProvider, SavedActorGuid) == 480, "Offset mismatch for UJunoLivingWorldLightStaticPointProvider::SavedActorGuid");

// /Script/JunoProceduralWorld.JunoLivingWorldModifierManager
// Kind: Class; super: GameStateComponent
class UJunoLivingWorldModifierManager
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    FMulticastInlineDelegate OnModifierChangedDelegate; // 0x00D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UJunoLivingWorldModifierManager, OnModifierChangedDelegate) == 208, "Offset mismatch for UJunoLivingWorldModifierManager::OnModifierChangedDelegate");

// /Script/JunoProceduralWorld.JunoLivingWorldModifierVolumeComponent
// Kind: Class; super: ActorComponent
class UJunoLivingWorldModifierVolumeComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t ModifierTagQuery[0x48]; // 0x00C0 (Size: 0x48, Type: StructProperty)
    std::uint8_t bIsDisableModifier; // 0x0108 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0109
    TArray<void*> AreaDatas; // 0x0110 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ClipToOwnerTile[0x28]; // 0x0120 (Size: 0x28, Type: StructProperty)
    std::uint8_t ClipDistanceThreshold[0x28]; // 0x0148 (Size: 0x28, Type: StructProperty)
    std::uint8_t VerticalExpandDistance[0x1]; // 0x0170 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoLivingWorldModifierVolumeComponent, ModifierTagQuery) == 192, "Offset mismatch for UJunoLivingWorldModifierVolumeComponent::ModifierTagQuery");
static_assert(offsetof(UJunoLivingWorldModifierVolumeComponent, bIsDisableModifier) == 264, "Offset mismatch for UJunoLivingWorldModifierVolumeComponent::bIsDisableModifier");
static_assert(offsetof(UJunoLivingWorldModifierVolumeComponent, AreaDatas) == 272, "Offset mismatch for UJunoLivingWorldModifierVolumeComponent::AreaDatas");
static_assert(offsetof(UJunoLivingWorldModifierVolumeComponent, ClipToOwnerTile) == 288, "Offset mismatch for UJunoLivingWorldModifierVolumeComponent::ClipToOwnerTile");
static_assert(offsetof(UJunoLivingWorldModifierVolumeComponent, ClipDistanceThreshold) == 328, "Offset mismatch for UJunoLivingWorldModifierVolumeComponent::ClipDistanceThreshold");
static_assert(offsetof(UJunoLivingWorldModifierVolumeComponent, VerticalExpandDistance) == 368, "Offset mismatch for UJunoLivingWorldModifierVolumeComponent::VerticalExpandDistance");

// /Script/JunoProceduralWorld.JunoLivingWorldStaticPointProvider
// Kind: Class; super: FortAthenaLivingWorldStaticPointProvider
class UJunoLivingWorldStaticPointProvider
{
public:
    std::uint8_t Pad_0000[0x3B0]; // 0x0000
    std::uint8_t EventLimiter[0x20]; // 0x03B0 (Size: 0x20, Type: StructProperty)
    std::uint8_t SavedActorGuid[0x1]; // 0x03D0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoLivingWorldStaticPointProvider, EventLimiter) == 944, "Offset mismatch for UJunoLivingWorldStaticPointProvider::EventLimiter");
static_assert(offsetof(UJunoLivingWorldStaticPointProvider, SavedActorGuid) == 976, "Offset mismatch for UJunoLivingWorldStaticPointProvider::SavedActorGuid");

// /Script/JunoProceduralWorld.JunoLivingWorldStaticPointProviderCluster
// Kind: Class; super: Actor
class UJunoLivingWorldStaticPointProviderCluster
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    std::uint8_t ClusterTag[0x8]; // 0x0270 (Size: 0x8, Type: StructProperty)
    std::uint8_t GlobalTags[0x20]; // 0x0278 (Size: 0x20, Type: StructProperty)
    TArray<void*> Entries; // 0x0298 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PointInfos; // 0x02A8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t PartitionnerCellSize[0x28]; // 0x02B8 (Size: 0x28, Type: StructProperty)
    std::uint8_t PointProvidersBounds[0x38]; // 0x02E0 (Size: 0x38, Type: StructProperty)
    float HysteresisSize; // 0x0318 (Size: 0x4, Type: FloatProperty)
    float MaxPlayerQueryRange; // 0x031C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UJunoLivingWorldStaticPointProviderCluster, ClusterTag) == 624, "Offset mismatch for UJunoLivingWorldStaticPointProviderCluster::ClusterTag");
static_assert(offsetof(UJunoLivingWorldStaticPointProviderCluster, GlobalTags) == 632, "Offset mismatch for UJunoLivingWorldStaticPointProviderCluster::GlobalTags");
static_assert(offsetof(UJunoLivingWorldStaticPointProviderCluster, Entries) == 664, "Offset mismatch for UJunoLivingWorldStaticPointProviderCluster::Entries");
static_assert(offsetof(UJunoLivingWorldStaticPointProviderCluster, PointInfos) == 680, "Offset mismatch for UJunoLivingWorldStaticPointProviderCluster::PointInfos");
static_assert(offsetof(UJunoLivingWorldStaticPointProviderCluster, PartitionnerCellSize) == 696, "Offset mismatch for UJunoLivingWorldStaticPointProviderCluster::PartitionnerCellSize");
static_assert(offsetof(UJunoLivingWorldStaticPointProviderCluster, PointProvidersBounds) == 736, "Offset mismatch for UJunoLivingWorldStaticPointProviderCluster::PointProvidersBounds");
static_assert(offsetof(UJunoLivingWorldStaticPointProviderCluster, HysteresisSize) == 792, "Offset mismatch for UJunoLivingWorldStaticPointProviderCluster::HysteresisSize");
static_assert(offsetof(UJunoLivingWorldStaticPointProviderCluster, MaxPlayerQueryRange) == 796, "Offset mismatch for UJunoLivingWorldStaticPointProviderCluster::MaxPlayerQueryRange");

// /Script/JunoProceduralWorld.JunoLivingWorldStaticPointProviderClusterNavigationInvokerInfo
// Kind: Class; super: Object
class UJunoLivingWorldStaticPointProviderClusterNavigationInvokerInfo
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t NavInvocationDistance[0x28]; // 0x0028 (Size: 0x28, Type: StructProperty)
    std::uint8_t EnablingDistance[0x28]; // 0x0050 (Size: 0x28, Type: StructProperty)
    TArray<void*> EnablingDistanceOverride; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t GenerationRadius[0x28]; // 0x0088 (Size: 0x28, Type: StructProperty)
    std::uint8_t SupportedAgents[0x1]; // 0x00B0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoLivingWorldStaticPointProviderClusterNavigationInvokerInfo, NavInvocationDistance) == 40, "Offset mismatch for UJunoLivingWorldStaticPointProviderClusterNavigationInvokerInfo::NavInvocationDistance");
static_assert(offsetof(UJunoLivingWorldStaticPointProviderClusterNavigationInvokerInfo, EnablingDistance) == 80, "Offset mismatch for UJunoLivingWorldStaticPointProviderClusterNavigationInvokerInfo::EnablingDistance");
static_assert(offsetof(UJunoLivingWorldStaticPointProviderClusterNavigationInvokerInfo, EnablingDistanceOverride) == 120, "Offset mismatch for UJunoLivingWorldStaticPointProviderClusterNavigationInvokerInfo::EnablingDistanceOverride");
static_assert(offsetof(UJunoLivingWorldStaticPointProviderClusterNavigationInvokerInfo, GenerationRadius) == 136, "Offset mismatch for UJunoLivingWorldStaticPointProviderClusterNavigationInvokerInfo::GenerationRadius");
static_assert(offsetof(UJunoLivingWorldStaticPointProviderClusterNavigationInvokerInfo, SupportedAgents) == 176, "Offset mismatch for UJunoLivingWorldStaticPointProviderClusterNavigationInvokerInfo::SupportedAgents");

// /Script/JunoProceduralWorld.JunoLivingWorldStaticPointProviderClusterRenderComponent
// Kind: Class; super: DebugDrawComponent
class UJunoLivingWorldStaticPointProviderClusterRenderComponent
{
public:
    std::uint8_t Pad_0000[0x278]; // 0x0000
    float MinDrawDistance; // 0x0278 (Size: 0x4, Type: FloatProperty)
    float LDMaxDrawDistance; // 0x027C (Size: 0x4, Type: FloatProperty)
    float CachedMaxDrawDistance; // 0x0280 (Size: 0x4, Type: FloatProperty)
    std::uint8_t DepthPriorityGroup; // 0x0284 (Size: 0x1, Type: ByteProperty)
    std::uint8_t ViewOwnerDepthPriorityGroup; // 0x0285 (Size: 0x1, Type: ByteProperty)
    std::uint8_t IndirectLightingCacheQuality; // 0x0286 (Size: 0x1, Type: ByteProperty)
    std::uint8_t LightmapType; // 0x0287 (Size: 0x1, Type: EnumProperty)
    std::uint8_t HLODBatchingPolicy; // 0x0288 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ShadowCacheInvalidationBehavior; // 0x0289 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bAlwaysCreatePhysicsState; // 0x028A (Size: 0x1, Type: BoolProperty)
    // 0x028A BoolProperty bEnableAutoLODGeneration (shared storage)
    // 0x028A BoolProperty bGenerateOverlapEvents (shared storage)
    // 0x028A BoolProperty bIsActorTextureStreamingBuiltData (shared storage)
    // 0x028A BoolProperty bIsValidTextureStreamingBuiltData (shared storage)
    // 0x028A BoolProperty bMultiBodyOverlap (shared storage)
    // 0x028A BoolProperty bNeverDistanceCull (shared storage)
    std::uint8_t bAllowCullDistanceVolume; // 0x028B (Size: 0x1, Type: BoolProperty)
    // 0x028B BoolProperty bReturnMaterialOnMove (shared storage)
    // 0x028B BoolProperty bTraceComplexOnMove (shared storage)
    // 0x028B BoolProperty bUseViewOwnerDepthPriorityGroup (shared storage)
    // 0x028B BoolProperty bVisibleInRayTracing (shared storage)
    // 0x028B BoolProperty bVisibleInRealTimeSkyCaptures (shared storage)
    // 0x028B BoolProperty bVisibleInReflectionCaptures (shared storage)
    // 0x028B BoolProperty bVisibleInReflections (shared storage)
    std::uint8_t bHoldout; // 0x028C (Size: 0x1, Type: BoolProperty)
    // 0x028C BoolProperty bOnlyOwnerSee (shared storage)
    // 0x028C BoolProperty bOwnerNoSee (shared storage)
    // 0x028C BoolProperty bReceivesDecals (shared storage)
    // 0x028C BoolProperty bRenderInDepthPass (shared storage)
    // 0x028C BoolProperty bRenderInMainPass (shared storage)
    // 0x028C BoolProperty bTreatAsBackgroundForOcclusion (shared storage)
    // 0x028C BoolProperty bUseAsOccluder (shared storage)
    std::uint8_t CastShadow; // 0x028D (Size: 0x1, Type: BoolProperty)
    // 0x028D BoolProperty bAffectDynamicIndirectLighting (shared storage)
    // 0x028D BoolProperty bAffectIndirectLightingWhileHidden (shared storage)
    // 0x028D BoolProperty bEmissiveLightSource (shared storage)
    // 0x028D BoolProperty bForceMipStreaming (shared storage)
    // 0x028D BoolProperty bHasPerInstanceHitProxies (shared storage)
    // 0x028D BoolProperty bSelectable (shared storage)
    // 0x028D BoolProperty bWantsEditorEffects (shared storage)
    std::uint8_t bAffectDistanceFieldLighting; // 0x028E (Size: 0x1, Type: BoolProperty)
    // 0x028E BoolProperty bCastContactShadow (shared storage)
    // 0x028E BoolProperty bCastDynamicShadow (shared storage)
    // 0x028E BoolProperty bCastFarShadow (shared storage)
    // 0x028E BoolProperty bCastInsetShadow (shared storage)
    // 0x028E BoolProperty bCastStaticShadow (shared storage)
    // 0x028E BoolProperty bCastVolumetricTranslucentShadow (shared storage)
    // 0x028E BoolProperty bSelfShadowOnly (shared storage)
    std::uint8_t bCastCinematicShadow; // 0x028F (Size: 0x1, Type: BoolProperty)
    // 0x028F BoolProperty bCastHiddenShadow (shared storage)
    // 0x028F BoolProperty bCastShadowAsTwoSided (shared storage)
    // 0x028F BoolProperty bExcludeFromLightAttachmentGroup (shared storage)
    // 0x028F BoolProperty bLightAsIfStatic (shared storage)
    // 0x028F BoolProperty bLightAttachmentsAsGroup (shared storage)
    // 0x028F BoolProperty bReceiveMobileCSMShadows (shared storage)
    // 0x028F BoolProperty bSingleSampleShadowFromStationaryLights (shared storage)
    std::uint8_t AlwaysLoadOnClient; // 0x0290 (Size: 0x1, Type: BoolProperty)
    // 0x0290 BoolProperty AlwaysLoadOnServer (shared storage)
    // 0x0290 BoolProperty bApplyImpulseOnDamage (shared storage)
    // 0x0290 BoolProperty bFillCollisionUnderneathForNavmesh (shared storage)
    // 0x0290 BoolProperty bIgnoreRadialForce (shared storage)
    // 0x0290 BoolProperty bIgnoreRadialImpulse (shared storage)
    // 0x0290 BoolProperty bRasterizeAsFilledConvexVolume (shared storage)
    // 0x0290 BoolProperty bReplicatePhysicsToAutonomousProxy (shared storage)
    std::uint8_t bHiddenInSceneCapture; // 0x0291 (Size: 0x1, Type: BoolProperty)
    // 0x0291 BoolProperty bIsBeingMovedByEditor (shared storage)
    // 0x0291 BoolProperty bLumenHeightfield (shared storage)
    // 0x0291 BoolProperty bRayTracingFarField (shared storage)
    // 0x0291 BoolProperty bRenderCustomDepth (shared storage)
    // 0x0291 BoolProperty bUseEditorCompositing (shared storage)
    // 0x0291 BoolProperty bVisibleInSceneCaptureOnly (shared storage)
    std::uint8_t FirstPersonPrimitiveType; // 0x0292 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bHasNoStreamableTextures; // 0x0293 (Size: 0x1, Type: BoolProperty)
    // 0x0293 BoolProperty bStaticWhenNotMoveable (shared storage)
    std::uint8_t bHasCustomNavigableGeometry; // 0x0294 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x1]; // 0x0295
    std::uint8_t CanCharacterStepUpOn; // 0x0296 (Size: 0x1, Type: ByteProperty)
    std::uint8_t LightingChannels[0x1]; // 0x0297 (Size: 0x1, Type: StructProperty)
    std::uint8_t RayTracingGroupCullingPriority; // 0x0298 (Size: 0x1, Type: EnumProperty)
    std::uint8_t CustomDepthStencilWriteMask; // 0x0299 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ExcludeFromHLODLevels; // 0x029A (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0002[0x1]; // 0x029B
    std::int32_t RayTracingGroupId; // 0x029C (Size: 0x4, Type: IntProperty)
    std::int32_t VisibilityId; // 0x02A0 (Size: 0x4, Type: IntProperty)
    std::int32_t CustomDepthStencilValue; // 0x02A4 (Size: 0x4, Type: IntProperty)
    std::uint8_t CustomPrimitiveData[0x10]; // 0x02A8 (Size: 0x10, Type: StructProperty)
    std::uint8_t CustomPrimitiveDataInternal[0x50]; // 0x02B8 (Size: 0x50, Type: StructProperty)
    std::int32_t TranslucencySortPriority; // 0x0308 (Size: 0x4, Type: IntProperty)
    float TranslucencySortDistanceOffset; // 0x030C (Size: 0x4, Type: FloatProperty)
    TArray<void*> RuntimeVirtualTextures; // 0x0310 (Size: 0x10, Type: ArrayProperty)
    std::int8_t VirtualTextureLodBias; // 0x0320 (Size: 0x1, Type: Int8Property)
    std::int8_t VirtualTextureCullMips; // 0x0321 (Size: 0x1, Type: Int8Property)
    std::int8_t VirtualTextureMinCoverage; // 0x0322 (Size: 0x1, Type: Int8Property)
    std::uint8_t VirtualTextureRenderPassType; // 0x0323 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x24]; // 0x0324
    float BoundsScale; // 0x0348 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0004[0x4]; // 0x034C
    TArray<void*> MoveIgnoreActors; // 0x0350 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> MoveIgnoreComponents; // 0x0360 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0005[0x10]; // 0x0370
    std::uint8_t BodyInstance[0x1A8]; // 0x0380 (Size: 0x1A8, Type: StructProperty)
    std::uint8_t OnComponentHit[0x1]; // 0x0528 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnComponentBeginOverlap[0x1]; // 0x0529 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnComponentEndOverlap[0x1]; // 0x052A (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnComponentWake[0x1]; // 0x052B (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnComponentSleep[0x2]; // 0x052C (Size: 0x2, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnComponentPhysicsStateChanged[0x1]; // 0x052E (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnBeginCursorOver[0x1]; // 0x052F (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnEndCursorOver[0x1]; // 0x0530 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnClicked[0x1]; // 0x0531 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnReleased[0x1]; // 0x0532 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchBegin[0x1]; // 0x0533 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchEnd[0x1]; // 0x0534 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchEnter[0x1]; // 0x0535 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchLeave[0x1]; // 0x0536 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnTouchBegan[0x1]; // 0x0537 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnTouchEnded[0x1]; // 0x0538 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnTouchEntered[0x1]; // 0x0539 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    FMulticastSparseDelegate OnTouchExited; // 0x053A (Size: 0x10, Type: MulticastSparseDelegateProperty)
    std::uint8_t Pad_0006[0xE]; // 0x054A
    void* LODParentPrimitive; // 0x0558 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoLivingWorldStaticPointProviderClusterRenderComponent, MinDrawDistance) == 632, "Offset mismatch for UJunoLivingWorldStaticPointProviderClusterRenderComponent::MinDrawDistance");
static_assert(offsetof(UJunoLivingWorldStaticPointProviderClusterRenderComponent, LDMaxDrawDistance) == 636, "Offset mismatch for UJunoLivingWorldStaticPointProviderClusterRenderComponent::LDMaxDrawDistance");
static_assert(offsetof(UJunoLivingWorldStaticPointProviderClusterRenderComponent, CachedMaxDrawDistance) == 640, "Offset mismatch for UJunoLivingWorldStaticPointProviderClusterRenderComponent::CachedMaxDrawDistance");
static_assert(offsetof(UJunoLivingWorldStaticPointProviderClusterRenderComponent, DepthPriorityGroup) == 644, "Offset mismatch for UJunoLivingWorldStaticPointProviderClusterRenderComponent::DepthPriorityGroup");
static_assert(offsetof(UJunoLivingWorldStaticPointProviderClusterRenderComponent, ViewOwnerDepthPriorityGroup) == 645, "Offset mismatch for UJunoLivingWorldStaticPointProviderClusterRenderComponent::ViewOwnerDepthPriorityGroup");
static_assert(offsetof(UJunoLivingWorldStaticPointProviderClusterRenderComponent, IndirectLightingCacheQuality) == 646, "Offset mismatch for UJunoLivingWorldStaticPointProviderClusterRenderComponent::IndirectLightingCacheQuality");
static_assert(offsetof(UJunoLivingWorldStaticPointProviderClusterRenderComponent, LightmapType) == 647, "Offset mismatch for UJunoLivingWorldStaticPointProviderClusterRenderComponent::LightmapType");
static_assert(offsetof(UJunoLivingWorldStaticPointProviderClusterRenderComponent, HLODBatchingPolicy) == 648, "Offset mismatch for UJunoLivingWorldStaticPointProviderClusterRenderComponent::HLODBatchingPolicy");
static_assert(offsetof(UJunoLivingWorldStaticPointProviderClusterRenderComponent, ShadowCacheInvalidationBehavior) == 649, "Offset mismatch for UJunoLivingWorldStaticPointProviderClusterRenderComponent::ShadowCacheInvalidationBehavior");
static_assert(offsetof(UJunoLivingWorldStaticPointProviderClusterRenderComponent, bAlwaysCreatePhysicsState) == 650, "Offset mismatch for UJunoLivingWorldStaticPointProviderClusterRenderComponent::bAlwaysCreatePhysicsState");
static_assert(offsetof(UJunoLivingWorldStaticPointProviderClusterRenderComponent, bAllowCullDistanceVolume) == 651, "Offset mismatch for UJunoLivingWorldStaticPointProviderClusterRenderComponent::bAllowCullDistanceVolume");
static_assert(offsetof(UJunoLivingWorldStaticPointProviderClusterRenderComponent, bHoldout) == 652, "Offset mismatch for UJunoLivingWorldStaticPointProviderClusterRenderComponent::bHoldout");
static_assert(offsetof(UJunoLivingWorldStaticPointProviderClusterRenderComponent, CastShadow) == 653, "Offset mismatch for UJunoLivingWorldStaticPointProviderClusterRenderComponent::CastShadow");
static_assert(offsetof(UJunoLivingWorldStaticPointProviderClusterRenderComponent, bAffectDistanceFieldLighting) == 654, "Offset mismatch for UJunoLivingWorldStaticPointProviderClusterRenderComponent::bAffectDistanceFieldLighting");
static_assert(offsetof(UJunoLivingWorldStaticPointProviderClusterRenderComponent, bCastCinematicShadow) == 655, "Offset mismatch for UJunoLivingWorldStaticPointProviderClusterRenderComponent::bCastCinematicShadow");
static_assert(offsetof(UJunoLivingWorldStaticPointProviderClusterRenderComponent, AlwaysLoadOnClient) == 656, "Offset mismatch for UJunoLivingWorldStaticPointProviderClusterRenderComponent::AlwaysLoadOnClient");
static_assert(offsetof(UJunoLivingWorldStaticPointProviderClusterRenderComponent, bHiddenInSceneCapture) == 657, "Offset mismatch for UJunoLivingWorldStaticPointProviderClusterRenderComponent::bHiddenInSceneCapture");
static_assert(offsetof(UJunoLivingWorldStaticPointProviderClusterRenderComponent, FirstPersonPrimitiveType) == 658, "Offset mismatch for UJunoLivingWorldStaticPointProviderClusterRenderComponent::FirstPersonPrimitiveType");
static_assert(offsetof(UJunoLivingWorldStaticPointProviderClusterRenderComponent, bHasNoStreamableTextures) == 659, "Offset mismatch for UJunoLivingWorldStaticPointProviderClusterRenderComponent::bHasNoStreamableTextures");
static_assert(offsetof(UJunoLivingWorldStaticPointProviderClusterRenderComponent, bHasCustomNavigableGeometry) == 660, "Offset mismatch for UJunoLivingWorldStaticPointProviderClusterRenderComponent::bHasCustomNavigableGeometry");
static_assert(offsetof(UJunoLivingWorldStaticPointProviderClusterRenderComponent, CanCharacterStepUpOn) == 662, "Offset mismatch for UJunoLivingWorldStaticPointProviderClusterRenderComponent::CanCharacterStepUpOn");
static_assert(offsetof(UJunoLivingWorldStaticPointProviderClusterRenderComponent, LightingChannels) == 663, "Offset mismatch for UJunoLivingWorldStaticPointProviderClusterRenderComponent::LightingChannels");
static_assert(offsetof(UJunoLivingWorldStaticPointProviderClusterRenderComponent, RayTracingGroupCullingPriority) == 664, "Offset mismatch for UJunoLivingWorldStaticPointProviderClusterRenderComponent::RayTracingGroupCullingPriority");
static_assert(offsetof(UJunoLivingWorldStaticPointProviderClusterRenderComponent, CustomDepthStencilWriteMask) == 665, "Offset mismatch for UJunoLivingWorldStaticPointProviderClusterRenderComponent::CustomDepthStencilWriteMask");
static_assert(offsetof(UJunoLivingWorldStaticPointProviderClusterRenderComponent, ExcludeFromHLODLevels) == 666, "Offset mismatch for UJunoLivingWorldStaticPointProviderClusterRenderComponent::ExcludeFromHLODLevels");
static_assert(offsetof(UJunoLivingWorldStaticPointProviderClusterRenderComponent, RayTracingGroupId) == 668, "Offset mismatch for UJunoLivingWorldStaticPointProviderClusterRenderComponent::RayTracingGroupId");
static_assert(offsetof(UJunoLivingWorldStaticPointProviderClusterRenderComponent, VisibilityId) == 672, "Offset mismatch for UJunoLivingWorldStaticPointProviderClusterRenderComponent::VisibilityId");
static_assert(offsetof(UJunoLivingWorldStaticPointProviderClusterRenderComponent, CustomDepthStencilValue) == 676, "Offset mismatch for UJunoLivingWorldStaticPointProviderClusterRenderComponent::CustomDepthStencilValue");
static_assert(offsetof(UJunoLivingWorldStaticPointProviderClusterRenderComponent, CustomPrimitiveData) == 680, "Offset mismatch for UJunoLivingWorldStaticPointProviderClusterRenderComponent::CustomPrimitiveData");
static_assert(offsetof(UJunoLivingWorldStaticPointProviderClusterRenderComponent, CustomPrimitiveDataInternal) == 696, "Offset mismatch for UJunoLivingWorldStaticPointProviderClusterRenderComponent::CustomPrimitiveDataInternal");
static_assert(offsetof(UJunoLivingWorldStaticPointProviderClusterRenderComponent, TranslucencySortPriority) == 776, "Offset mismatch for UJunoLivingWorldStaticPointProviderClusterRenderComponent::TranslucencySortPriority");
static_assert(offsetof(UJunoLivingWorldStaticPointProviderClusterRenderComponent, TranslucencySortDistanceOffset) == 780, "Offset mismatch for UJunoLivingWorldStaticPointProviderClusterRenderComponent::TranslucencySortDistanceOffset");
static_assert(offsetof(UJunoLivingWorldStaticPointProviderClusterRenderComponent, RuntimeVirtualTextures) == 784, "Offset mismatch for UJunoLivingWorldStaticPointProviderClusterRenderComponent::RuntimeVirtualTextures");
static_assert(offsetof(UJunoLivingWorldStaticPointProviderClusterRenderComponent, VirtualTextureLodBias) == 800, "Offset mismatch for UJunoLivingWorldStaticPointProviderClusterRenderComponent::VirtualTextureLodBias");
static_assert(offsetof(UJunoLivingWorldStaticPointProviderClusterRenderComponent, VirtualTextureCullMips) == 801, "Offset mismatch for UJunoLivingWorldStaticPointProviderClusterRenderComponent::VirtualTextureCullMips");
static_assert(offsetof(UJunoLivingWorldStaticPointProviderClusterRenderComponent, VirtualTextureMinCoverage) == 802, "Offset mismatch for UJunoLivingWorldStaticPointProviderClusterRenderComponent::VirtualTextureMinCoverage");
static_assert(offsetof(UJunoLivingWorldStaticPointProviderClusterRenderComponent, VirtualTextureRenderPassType) == 803, "Offset mismatch for UJunoLivingWorldStaticPointProviderClusterRenderComponent::VirtualTextureRenderPassType");
static_assert(offsetof(UJunoLivingWorldStaticPointProviderClusterRenderComponent, BoundsScale) == 840, "Offset mismatch for UJunoLivingWorldStaticPointProviderClusterRenderComponent::BoundsScale");
static_assert(offsetof(UJunoLivingWorldStaticPointProviderClusterRenderComponent, MoveIgnoreActors) == 848, "Offset mismatch for UJunoLivingWorldStaticPointProviderClusterRenderComponent::MoveIgnoreActors");
static_assert(offsetof(UJunoLivingWorldStaticPointProviderClusterRenderComponent, MoveIgnoreComponents) == 864, "Offset mismatch for UJunoLivingWorldStaticPointProviderClusterRenderComponent::MoveIgnoreComponents");
static_assert(offsetof(UJunoLivingWorldStaticPointProviderClusterRenderComponent, BodyInstance) == 896, "Offset mismatch for UJunoLivingWorldStaticPointProviderClusterRenderComponent::BodyInstance");
static_assert(offsetof(UJunoLivingWorldStaticPointProviderClusterRenderComponent, OnComponentHit) == 1320, "Offset mismatch for UJunoLivingWorldStaticPointProviderClusterRenderComponent::OnComponentHit");
static_assert(offsetof(UJunoLivingWorldStaticPointProviderClusterRenderComponent, OnComponentBeginOverlap) == 1321, "Offset mismatch for UJunoLivingWorldStaticPointProviderClusterRenderComponent::OnComponentBeginOverlap");
static_assert(offsetof(UJunoLivingWorldStaticPointProviderClusterRenderComponent, OnComponentEndOverlap) == 1322, "Offset mismatch for UJunoLivingWorldStaticPointProviderClusterRenderComponent::OnComponentEndOverlap");
static_assert(offsetof(UJunoLivingWorldStaticPointProviderClusterRenderComponent, OnComponentWake) == 1323, "Offset mismatch for UJunoLivingWorldStaticPointProviderClusterRenderComponent::OnComponentWake");
static_assert(offsetof(UJunoLivingWorldStaticPointProviderClusterRenderComponent, OnComponentSleep) == 1324, "Offset mismatch for UJunoLivingWorldStaticPointProviderClusterRenderComponent::OnComponentSleep");
static_assert(offsetof(UJunoLivingWorldStaticPointProviderClusterRenderComponent, OnComponentPhysicsStateChanged) == 1326, "Offset mismatch for UJunoLivingWorldStaticPointProviderClusterRenderComponent::OnComponentPhysicsStateChanged");
static_assert(offsetof(UJunoLivingWorldStaticPointProviderClusterRenderComponent, OnBeginCursorOver) == 1327, "Offset mismatch for UJunoLivingWorldStaticPointProviderClusterRenderComponent::OnBeginCursorOver");
static_assert(offsetof(UJunoLivingWorldStaticPointProviderClusterRenderComponent, OnEndCursorOver) == 1328, "Offset mismatch for UJunoLivingWorldStaticPointProviderClusterRenderComponent::OnEndCursorOver");
static_assert(offsetof(UJunoLivingWorldStaticPointProviderClusterRenderComponent, OnClicked) == 1329, "Offset mismatch for UJunoLivingWorldStaticPointProviderClusterRenderComponent::OnClicked");
static_assert(offsetof(UJunoLivingWorldStaticPointProviderClusterRenderComponent, OnReleased) == 1330, "Offset mismatch for UJunoLivingWorldStaticPointProviderClusterRenderComponent::OnReleased");
static_assert(offsetof(UJunoLivingWorldStaticPointProviderClusterRenderComponent, OnInputTouchBegin) == 1331, "Offset mismatch for UJunoLivingWorldStaticPointProviderClusterRenderComponent::OnInputTouchBegin");
static_assert(offsetof(UJunoLivingWorldStaticPointProviderClusterRenderComponent, OnInputTouchEnd) == 1332, "Offset mismatch for UJunoLivingWorldStaticPointProviderClusterRenderComponent::OnInputTouchEnd");
static_assert(offsetof(UJunoLivingWorldStaticPointProviderClusterRenderComponent, OnInputTouchEnter) == 1333, "Offset mismatch for UJunoLivingWorldStaticPointProviderClusterRenderComponent::OnInputTouchEnter");
static_assert(offsetof(UJunoLivingWorldStaticPointProviderClusterRenderComponent, OnInputTouchLeave) == 1334, "Offset mismatch for UJunoLivingWorldStaticPointProviderClusterRenderComponent::OnInputTouchLeave");
static_assert(offsetof(UJunoLivingWorldStaticPointProviderClusterRenderComponent, OnTouchBegan) == 1335, "Offset mismatch for UJunoLivingWorldStaticPointProviderClusterRenderComponent::OnTouchBegan");
static_assert(offsetof(UJunoLivingWorldStaticPointProviderClusterRenderComponent, OnTouchEnded) == 1336, "Offset mismatch for UJunoLivingWorldStaticPointProviderClusterRenderComponent::OnTouchEnded");
static_assert(offsetof(UJunoLivingWorldStaticPointProviderClusterRenderComponent, OnTouchEntered) == 1337, "Offset mismatch for UJunoLivingWorldStaticPointProviderClusterRenderComponent::OnTouchEntered");
static_assert(offsetof(UJunoLivingWorldStaticPointProviderClusterRenderComponent, OnTouchExited) == 1338, "Offset mismatch for UJunoLivingWorldStaticPointProviderClusterRenderComponent::OnTouchExited");
static_assert(offsetof(UJunoLivingWorldStaticPointProviderClusterRenderComponent, LODParentPrimitive) == 1368, "Offset mismatch for UJunoLivingWorldStaticPointProviderClusterRenderComponent::LODParentPrimitive");

// /Script/JunoProceduralWorld.JunoMarkerTrigger
// Kind: Class; super: Actor
class UJunoMarkerTrigger
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t PrimaryActorTick[0x30]; // 0x0028 (Size: 0x30, Type: StructProperty)
    std::uint8_t bAlwaysRelevant; // 0x0058 (Size: 0x1, Type: BoolProperty)
    // 0x0058 BoolProperty bCallPreReplication (shared storage)
    // 0x0058 BoolProperty bCallPreReplicationForReplay (shared storage)
    // 0x0058 BoolProperty bHidden (shared storage)
    // 0x0058 BoolProperty bNetTemporary (shared storage)
    // 0x0058 BoolProperty bOnlyRelevantToOwner (shared storage)
    // 0x0058 BoolProperty bReplicateMovement (shared storage)
    std::uint8_t bExchangedRoles; // 0x0059 (Size: 0x1, Type: BoolProperty)
    // 0x0059 BoolProperty bForceNetAddressable (shared storage)
    // 0x0059 BoolProperty bNetLoadOnClient (shared storage)
    // 0x0059 BoolProperty bNetUseOwnerRelevancy (shared storage)
    // 0x0059 BoolProperty bRelevantForLevelBounds (shared storage)
    // 0x0059 BoolProperty bRelevantForNetworkReplays (shared storage)
    // 0x0059 BoolProperty bReplayRewindable (shared storage)
    // 0x0059 BoolProperty bTearOff (shared storage)
    std::uint8_t bAllowTickBeforeBeginPlay; // 0x005A (Size: 0x1, Type: BoolProperty)
    // 0x005A BoolProperty bAutoDestroyWhenFinished (shared storage)
    // 0x005A BoolProperty bBlockInput (shared storage)
    // 0x005A BoolProperty bCanBeDamaged (shared storage)
    // 0x005A BoolProperty bCollideWhenPlacing (shared storage)
    // 0x005A BoolProperty bFindCameraComponentWhenViewTarget (shared storage)
    // 0x005A BoolProperty bGenerateOverlapEventsDuringLevelStreaming (shared storage)
    // 0x005A BoolProperty bIgnoresOriginShifting (shared storage)
    std::uint8_t bAllowReceiveTickEventOnDedicatedServer; // 0x005B (Size: 0x1, Type: BoolProperty)
    // 0x005B BoolProperty bCanBeInCluster (shared storage)
    // 0x005B BoolProperty bEnableAutoLODGeneration (shared storage)
    // 0x005B BoolProperty bIsEditorOnlyActor (shared storage)
    // 0x005B BoolProperty bReplicateUsingRegisteredSubObjectList (shared storage)
    // 0x005B BoolProperty bReplicates (shared storage)
    std::uint8_t Pad_0001[0x1]; // 0x005C
    std::uint8_t bActorEnableCollision; // 0x005D (Size: 0x1, Type: BoolProperty)
    // 0x005D BoolProperty bActorIsBeingDestroyed (shared storage)
    // 0x005D BoolProperty bAsyncPhysicsTickEnabled (shared storage)
    std::uint8_t UpdateOverlapsMethodDuringLevelStreaming; // 0x005E (Size: 0x1, Type: EnumProperty)
    std::uint8_t DefaultUpdateOverlapsMethodDuringLevelStreaming; // 0x005F (Size: 0x1, Type: EnumProperty)
    std::uint8_t RemoteRole; // 0x0060 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0061
    float InitialLifeSpan; // 0x0064 (Size: 0x4, Type: FloatProperty)
    float CustomTimeDilation; // 0x0068 (Size: 0x4, Type: FloatProperty)
    std::int32_t RayTracingGroupId; // 0x006C (Size: 0x4, Type: IntProperty)
    std::uint8_t AttachmentReplication[0x60]; // 0x0070 (Size: 0x60, Type: StructProperty)
    std::uint8_t ReplicatedMovement[0x88]; // 0x00D0 (Size: 0x88, Type: StructProperty)
    void* Owner; // 0x0158 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t NetDriverName[0x4]; // 0x0160 (Size: 0x4, Type: NameProperty)
    std::uint8_t Role; // 0x0164 (Size: 0x1, Type: ByteProperty)
    std::uint8_t NetDormancy; // 0x0165 (Size: 0x1, Type: ByteProperty)
    std::uint8_t SpawnCollisionHandlingMethod; // 0x0166 (Size: 0x1, Type: EnumProperty)
    std::uint8_t AutoReceiveInput; // 0x0167 (Size: 0x1, Type: ByteProperty)
    std::int32_t InputPriority; // 0x0168 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0003[0x4]; // 0x016C
    void* InputComponent; // 0x0170 (Size: 0x8, Type: ObjectProperty)
    std::int32_t NetTag; // 0x0178 (Size: 0x4, Type: IntProperty)
    float NetCullDistanceSquared; // 0x017C (Size: 0x4, Type: FloatProperty)
    float NetUpdateFrequency; // 0x0180 (Size: 0x4, Type: FloatProperty)
    float MinNetUpdateFrequency; // 0x0184 (Size: 0x4, Type: FloatProperty)
    float NetPriority; // 0x0188 (Size: 0x4, Type: FloatProperty)
    std::uint8_t PhysicsReplicationMode; // 0x018C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0004[0xB]; // 0x018D
    void* Instigator; // 0x0198 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Children; // 0x01A0 (Size: 0x10, Type: ArrayProperty)
    void* RootComponent; // 0x01B0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0005[0x8]; // 0x01B8
    void* HLODLayer; // 0x01C0 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Layers; // 0x01C8 (Size: 0x10, Type: ArrayProperty)
    TWeakObjectPtr<void> ParentComponent; // 0x01D8 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0006[0x10]; // 0x01E0
    TArray<void*> Tags; // 0x01F0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t OnTakeAnyDamage[0x1]; // 0x0200 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnTakePointDamage[0x1]; // 0x0201 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnTakeRadialDamage[0x1]; // 0x0202 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnActorBeginOverlap[0x1]; // 0x0203 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnActorEndOverlap[0x1]; // 0x0204 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnBeginCursorOver[0x1]; // 0x0205 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnEndCursorOver[0x1]; // 0x0206 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnClicked[0x1]; // 0x0207 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnReleased[0x1]; // 0x0208 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchBegin[0x1]; // 0x0209 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchEnd[0x1]; // 0x020A (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchEnter[0x1]; // 0x020B (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchLeave[0x1]; // 0x020C (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnActorHit[0x1]; // 0x020D (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnDestroyed[0x1]; // 0x020E (Size: 0x1, Type: MulticastSparseDelegateProperty)
    FMulticastSparseDelegate OnEndPlay; // 0x020F (Size: 0x10, Type: MulticastSparseDelegateProperty)
    std::uint8_t Pad_0007[0x31]; // 0x021F
    TArray<void*> InstanceComponents; // 0x0250 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> BlueprintCreatedComponents; // 0x0260 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UJunoMarkerTrigger, PrimaryActorTick) == 40, "Offset mismatch for UJunoMarkerTrigger::PrimaryActorTick");
static_assert(offsetof(UJunoMarkerTrigger, bAlwaysRelevant) == 88, "Offset mismatch for UJunoMarkerTrigger::bAlwaysRelevant");
static_assert(offsetof(UJunoMarkerTrigger, bExchangedRoles) == 89, "Offset mismatch for UJunoMarkerTrigger::bExchangedRoles");
static_assert(offsetof(UJunoMarkerTrigger, bAllowTickBeforeBeginPlay) == 90, "Offset mismatch for UJunoMarkerTrigger::bAllowTickBeforeBeginPlay");
static_assert(offsetof(UJunoMarkerTrigger, bAllowReceiveTickEventOnDedicatedServer) == 91, "Offset mismatch for UJunoMarkerTrigger::bAllowReceiveTickEventOnDedicatedServer");
static_assert(offsetof(UJunoMarkerTrigger, bActorEnableCollision) == 93, "Offset mismatch for UJunoMarkerTrigger::bActorEnableCollision");
static_assert(offsetof(UJunoMarkerTrigger, UpdateOverlapsMethodDuringLevelStreaming) == 94, "Offset mismatch for UJunoMarkerTrigger::UpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(UJunoMarkerTrigger, DefaultUpdateOverlapsMethodDuringLevelStreaming) == 95, "Offset mismatch for UJunoMarkerTrigger::DefaultUpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(UJunoMarkerTrigger, RemoteRole) == 96, "Offset mismatch for UJunoMarkerTrigger::RemoteRole");
static_assert(offsetof(UJunoMarkerTrigger, InitialLifeSpan) == 100, "Offset mismatch for UJunoMarkerTrigger::InitialLifeSpan");
static_assert(offsetof(UJunoMarkerTrigger, CustomTimeDilation) == 104, "Offset mismatch for UJunoMarkerTrigger::CustomTimeDilation");
static_assert(offsetof(UJunoMarkerTrigger, RayTracingGroupId) == 108, "Offset mismatch for UJunoMarkerTrigger::RayTracingGroupId");
static_assert(offsetof(UJunoMarkerTrigger, AttachmentReplication) == 112, "Offset mismatch for UJunoMarkerTrigger::AttachmentReplication");
static_assert(offsetof(UJunoMarkerTrigger, ReplicatedMovement) == 208, "Offset mismatch for UJunoMarkerTrigger::ReplicatedMovement");
static_assert(offsetof(UJunoMarkerTrigger, Owner) == 344, "Offset mismatch for UJunoMarkerTrigger::Owner");
static_assert(offsetof(UJunoMarkerTrigger, NetDriverName) == 352, "Offset mismatch for UJunoMarkerTrigger::NetDriverName");
static_assert(offsetof(UJunoMarkerTrigger, Role) == 356, "Offset mismatch for UJunoMarkerTrigger::Role");
static_assert(offsetof(UJunoMarkerTrigger, NetDormancy) == 357, "Offset mismatch for UJunoMarkerTrigger::NetDormancy");
static_assert(offsetof(UJunoMarkerTrigger, SpawnCollisionHandlingMethod) == 358, "Offset mismatch for UJunoMarkerTrigger::SpawnCollisionHandlingMethod");
static_assert(offsetof(UJunoMarkerTrigger, AutoReceiveInput) == 359, "Offset mismatch for UJunoMarkerTrigger::AutoReceiveInput");
static_assert(offsetof(UJunoMarkerTrigger, InputPriority) == 360, "Offset mismatch for UJunoMarkerTrigger::InputPriority");
static_assert(offsetof(UJunoMarkerTrigger, InputComponent) == 368, "Offset mismatch for UJunoMarkerTrigger::InputComponent");
static_assert(offsetof(UJunoMarkerTrigger, NetTag) == 376, "Offset mismatch for UJunoMarkerTrigger::NetTag");
static_assert(offsetof(UJunoMarkerTrigger, NetCullDistanceSquared) == 380, "Offset mismatch for UJunoMarkerTrigger::NetCullDistanceSquared");
static_assert(offsetof(UJunoMarkerTrigger, NetUpdateFrequency) == 384, "Offset mismatch for UJunoMarkerTrigger::NetUpdateFrequency");
static_assert(offsetof(UJunoMarkerTrigger, MinNetUpdateFrequency) == 388, "Offset mismatch for UJunoMarkerTrigger::MinNetUpdateFrequency");
static_assert(offsetof(UJunoMarkerTrigger, NetPriority) == 392, "Offset mismatch for UJunoMarkerTrigger::NetPriority");
static_assert(offsetof(UJunoMarkerTrigger, PhysicsReplicationMode) == 396, "Offset mismatch for UJunoMarkerTrigger::PhysicsReplicationMode");
static_assert(offsetof(UJunoMarkerTrigger, Instigator) == 408, "Offset mismatch for UJunoMarkerTrigger::Instigator");
static_assert(offsetof(UJunoMarkerTrigger, Children) == 416, "Offset mismatch for UJunoMarkerTrigger::Children");
static_assert(offsetof(UJunoMarkerTrigger, RootComponent) == 432, "Offset mismatch for UJunoMarkerTrigger::RootComponent");
static_assert(offsetof(UJunoMarkerTrigger, HLODLayer) == 448, "Offset mismatch for UJunoMarkerTrigger::HLODLayer");
static_assert(offsetof(UJunoMarkerTrigger, Layers) == 456, "Offset mismatch for UJunoMarkerTrigger::Layers");
static_assert(offsetof(UJunoMarkerTrigger, ParentComponent) == 472, "Offset mismatch for UJunoMarkerTrigger::ParentComponent");
static_assert(offsetof(UJunoMarkerTrigger, Tags) == 496, "Offset mismatch for UJunoMarkerTrigger::Tags");
static_assert(offsetof(UJunoMarkerTrigger, OnTakeAnyDamage) == 512, "Offset mismatch for UJunoMarkerTrigger::OnTakeAnyDamage");
static_assert(offsetof(UJunoMarkerTrigger, OnTakePointDamage) == 513, "Offset mismatch for UJunoMarkerTrigger::OnTakePointDamage");
static_assert(offsetof(UJunoMarkerTrigger, OnTakeRadialDamage) == 514, "Offset mismatch for UJunoMarkerTrigger::OnTakeRadialDamage");
static_assert(offsetof(UJunoMarkerTrigger, OnActorBeginOverlap) == 515, "Offset mismatch for UJunoMarkerTrigger::OnActorBeginOverlap");
static_assert(offsetof(UJunoMarkerTrigger, OnActorEndOverlap) == 516, "Offset mismatch for UJunoMarkerTrigger::OnActorEndOverlap");
static_assert(offsetof(UJunoMarkerTrigger, OnBeginCursorOver) == 517, "Offset mismatch for UJunoMarkerTrigger::OnBeginCursorOver");
static_assert(offsetof(UJunoMarkerTrigger, OnEndCursorOver) == 518, "Offset mismatch for UJunoMarkerTrigger::OnEndCursorOver");
static_assert(offsetof(UJunoMarkerTrigger, OnClicked) == 519, "Offset mismatch for UJunoMarkerTrigger::OnClicked");
static_assert(offsetof(UJunoMarkerTrigger, OnReleased) == 520, "Offset mismatch for UJunoMarkerTrigger::OnReleased");
static_assert(offsetof(UJunoMarkerTrigger, OnInputTouchBegin) == 521, "Offset mismatch for UJunoMarkerTrigger::OnInputTouchBegin");
static_assert(offsetof(UJunoMarkerTrigger, OnInputTouchEnd) == 522, "Offset mismatch for UJunoMarkerTrigger::OnInputTouchEnd");
static_assert(offsetof(UJunoMarkerTrigger, OnInputTouchEnter) == 523, "Offset mismatch for UJunoMarkerTrigger::OnInputTouchEnter");
static_assert(offsetof(UJunoMarkerTrigger, OnInputTouchLeave) == 524, "Offset mismatch for UJunoMarkerTrigger::OnInputTouchLeave");
static_assert(offsetof(UJunoMarkerTrigger, OnActorHit) == 525, "Offset mismatch for UJunoMarkerTrigger::OnActorHit");
static_assert(offsetof(UJunoMarkerTrigger, OnDestroyed) == 526, "Offset mismatch for UJunoMarkerTrigger::OnDestroyed");
static_assert(offsetof(UJunoMarkerTrigger, OnEndPlay) == 527, "Offset mismatch for UJunoMarkerTrigger::OnEndPlay");
static_assert(offsetof(UJunoMarkerTrigger, InstanceComponents) == 592, "Offset mismatch for UJunoMarkerTrigger::InstanceComponents");
static_assert(offsetof(UJunoMarkerTrigger, BlueprintCreatedComponents) == 608, "Offset mismatch for UJunoMarkerTrigger::BlueprintCreatedComponents");

// /Script/JunoProceduralWorld.JunoMassDehydrationSignalProcessor
// Kind: Class; super: JunoMassHydrationSignalProcessorBase
class UJunoMassDehydrationSignalProcessor
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t ExecutionOrder[0x28]; // 0x0028 (Size: 0x28, Type: StructProperty)
    std::uint8_t ProcessingPhase; // 0x0050 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ExecutionFlags; // 0x0051 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bAggregateRequirements; // 0x0052 (Size: 0x1, Type: BoolProperty)
    // 0x0052 BoolProperty bAutoRegisterWithProcessingPhases (shared storage)
    // 0x0052 BoolProperty bRequiresGameThreadExecution (shared storage)
    std::uint8_t ActivationState; // 0x0053 (Size: 0x1, Type: EnumProperty)
    std::int16_t ExecutionPriority; // 0x0054 (Size: 0x2, Type: Int16Property)
};

static_assert(offsetof(UJunoMassDehydrationSignalProcessor, ExecutionOrder) == 40, "Offset mismatch for UJunoMassDehydrationSignalProcessor::ExecutionOrder");
static_assert(offsetof(UJunoMassDehydrationSignalProcessor, ProcessingPhase) == 80, "Offset mismatch for UJunoMassDehydrationSignalProcessor::ProcessingPhase");
static_assert(offsetof(UJunoMassDehydrationSignalProcessor, ExecutionFlags) == 81, "Offset mismatch for UJunoMassDehydrationSignalProcessor::ExecutionFlags");
static_assert(offsetof(UJunoMassDehydrationSignalProcessor, bAggregateRequirements) == 82, "Offset mismatch for UJunoMassDehydrationSignalProcessor::bAggregateRequirements");
static_assert(offsetof(UJunoMassDehydrationSignalProcessor, ActivationState) == 83, "Offset mismatch for UJunoMassDehydrationSignalProcessor::ActivationState");
static_assert(offsetof(UJunoMassDehydrationSignalProcessor, ExecutionPriority) == 84, "Offset mismatch for UJunoMassDehydrationSignalProcessor::ExecutionPriority");

// /Script/JunoProceduralWorld.JunoMassHydrationSignalProcessor
// Kind: Class; super: JunoMassHydrationSignalProcessorBase
class UJunoMassHydrationSignalProcessor
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t ExecutionOrder[0x28]; // 0x0028 (Size: 0x28, Type: StructProperty)
    std::uint8_t ProcessingPhase; // 0x0050 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ExecutionFlags; // 0x0051 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bAggregateRequirements; // 0x0052 (Size: 0x1, Type: BoolProperty)
    // 0x0052 BoolProperty bAutoRegisterWithProcessingPhases (shared storage)
    // 0x0052 BoolProperty bRequiresGameThreadExecution (shared storage)
    std::uint8_t ActivationState; // 0x0053 (Size: 0x1, Type: EnumProperty)
    std::int16_t ExecutionPriority; // 0x0054 (Size: 0x2, Type: Int16Property)
};

static_assert(offsetof(UJunoMassHydrationSignalProcessor, ExecutionOrder) == 40, "Offset mismatch for UJunoMassHydrationSignalProcessor::ExecutionOrder");
static_assert(offsetof(UJunoMassHydrationSignalProcessor, ProcessingPhase) == 80, "Offset mismatch for UJunoMassHydrationSignalProcessor::ProcessingPhase");
static_assert(offsetof(UJunoMassHydrationSignalProcessor, ExecutionFlags) == 81, "Offset mismatch for UJunoMassHydrationSignalProcessor::ExecutionFlags");
static_assert(offsetof(UJunoMassHydrationSignalProcessor, bAggregateRequirements) == 82, "Offset mismatch for UJunoMassHydrationSignalProcessor::bAggregateRequirements");
static_assert(offsetof(UJunoMassHydrationSignalProcessor, ActivationState) == 83, "Offset mismatch for UJunoMassHydrationSignalProcessor::ActivationState");
static_assert(offsetof(UJunoMassHydrationSignalProcessor, ExecutionPriority) == 84, "Offset mismatch for UJunoMassHydrationSignalProcessor::ExecutionPriority");

// /Script/JunoProceduralWorld.JunoMassHydrationSignalProcessorBase
// Kind: Class; super: MassSignalProcessorBase
class UJunoMassHydrationSignalProcessorBase
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t ExecutionOrder[0x28]; // 0x0028 (Size: 0x28, Type: StructProperty)
    std::uint8_t ProcessingPhase; // 0x0050 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ExecutionFlags; // 0x0051 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bAggregateRequirements; // 0x0052 (Size: 0x1, Type: BoolProperty)
    // 0x0052 BoolProperty bAutoRegisterWithProcessingPhases (shared storage)
    // 0x0052 BoolProperty bRequiresGameThreadExecution (shared storage)
    std::uint8_t ActivationState; // 0x0053 (Size: 0x1, Type: EnumProperty)
    std::int16_t ExecutionPriority; // 0x0054 (Size: 0x2, Type: Int16Property)
};

static_assert(offsetof(UJunoMassHydrationSignalProcessorBase, ExecutionOrder) == 40, "Offset mismatch for UJunoMassHydrationSignalProcessorBase::ExecutionOrder");
static_assert(offsetof(UJunoMassHydrationSignalProcessorBase, ProcessingPhase) == 80, "Offset mismatch for UJunoMassHydrationSignalProcessorBase::ProcessingPhase");
static_assert(offsetof(UJunoMassHydrationSignalProcessorBase, ExecutionFlags) == 81, "Offset mismatch for UJunoMassHydrationSignalProcessorBase::ExecutionFlags");
static_assert(offsetof(UJunoMassHydrationSignalProcessorBase, bAggregateRequirements) == 82, "Offset mismatch for UJunoMassHydrationSignalProcessorBase::bAggregateRequirements");
static_assert(offsetof(UJunoMassHydrationSignalProcessorBase, ActivationState) == 83, "Offset mismatch for UJunoMassHydrationSignalProcessorBase::ActivationState");
static_assert(offsetof(UJunoMassHydrationSignalProcessorBase, ExecutionPriority) == 84, "Offset mismatch for UJunoMassHydrationSignalProcessorBase::ExecutionPriority");

// /Script/JunoProceduralWorld.JunoMaterialOverrideInitializerProcessor
// Kind: Class; super: MassObserverProcessor
class UJunoMaterialOverrideInitializerProcessor
{
public:
    std::uint8_t Pad_0000[0x100]; // 0x0000
    void* ObservedType; // 0x0100 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ObservedTypes; // 0x0108 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bAutoRegisterWithObserverRegistry; // 0x0118 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UJunoMaterialOverrideInitializerProcessor, ObservedType) == 256, "Offset mismatch for UJunoMaterialOverrideInitializerProcessor::ObservedType");
static_assert(offsetof(UJunoMaterialOverrideInitializerProcessor, ObservedTypes) == 264, "Offset mismatch for UJunoMaterialOverrideInitializerProcessor::ObservedTypes");
static_assert(offsetof(UJunoMaterialOverrideInitializerProcessor, bAutoRegisterWithObserverRegistry) == 280, "Offset mismatch for UJunoMaterialOverrideInitializerProcessor::bAutoRegisterWithObserverRegistry");

// /Script/JunoProceduralWorld.JunoMinimapGenerator
// Kind: Class; super: Actor
class UJunoMinimapGenerator
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    FMulticastInlineDelegate OnTexture2DPackageCreatedDelegate; // 0x0270 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UJunoMinimapGenerator, OnTexture2DPackageCreatedDelegate) == 624, "Offset mismatch for UJunoMinimapGenerator::OnTexture2DPackageCreatedDelegate");

// /Script/JunoProceduralWorld.JunoOutOfBoundsTile
// Kind: Class; super: Actor
class UJunoOutOfBoundsTile
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    TArray<void*> LevelsToLoad; // 0x0270 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UJunoOutOfBoundsTile, LevelsToLoad) == 624, "Offset mismatch for UJunoOutOfBoundsTile::LevelsToLoad");

// /Script/JunoProceduralWorld.JunoPCGVolume
// Kind: Class; super: Actor
class UJunoPCGVolume
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    TMap<void*, void*> CompressedData; // 0x0270 (Size: 0x10, Type: MapProperty)
    std::uint8_t bIsCompressedDataValid; // 0x0280 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0281
    void* SceneRootComponent; // 0x0288 (Size: 0x8, Type: ObjectProperty)
    void* GeneratorComponent; // 0x0290 (Size: 0x8, Type: ObjectProperty)
    void* SpawnerComponent; // 0x0298 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoPCGVolume, CompressedData) == 624, "Offset mismatch for UJunoPCGVolume::CompressedData");
static_assert(offsetof(UJunoPCGVolume, bIsCompressedDataValid) == 640, "Offset mismatch for UJunoPCGVolume::bIsCompressedDataValid");
static_assert(offsetof(UJunoPCGVolume, SceneRootComponent) == 648, "Offset mismatch for UJunoPCGVolume::SceneRootComponent");
static_assert(offsetof(UJunoPCGVolume, GeneratorComponent) == 656, "Offset mismatch for UJunoPCGVolume::GeneratorComponent");
static_assert(offsetof(UJunoPCGVolume, SpawnerComponent) == 664, "Offset mismatch for UJunoPCGVolume::SpawnerComponent");

// /Script/JunoProceduralWorld.JunoPOIBlueprintLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UJunoPOIBlueprintLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoProceduralWorld.JunoPOIGameplayVolume
// Kind: Class; super: JunoStreamingGameplayVolume
class UJunoPOIGameplayVolume
{
public:
    std::uint8_t Pad_0000[0x3F0]; // 0x0000
    std::uint8_t InstanceData[0x20]; // 0x03F0 (Size: 0x20, Type: StructProperty)
    std::uint8_t POIGuid[0x10]; // 0x0410 (Size: 0x10, Type: StructProperty)
    std::uint8_t CaveGUID[0x10]; // 0x0420 (Size: 0x10, Type: StructProperty)
    std::uint8_t EncounterCapabilities[0x20]; // 0x0430 (Size: 0x20, Type: StructProperty)
    std::int32_t EncounterVariantCount; // 0x0450 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0454
    std::uint8_t EncounterCategoryTable[0x20]; // 0x0458 (Size: 0x20, Type: SoftObjectProperty)
    TArray<void*> LevelsToInject; // 0x0478 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t RegistryItemName[0x4]; // 0x0488 (Size: 0x4, Type: NameProperty)
    std::uint8_t RegistryType[0x4]; // 0x048C (Size: 0x4, Type: StructProperty)
    std::int32_t PersistenceVersion; // 0x0490 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0494
    TArray<void*> Teleporters; // 0x0498 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UJunoPOIGameplayVolume, InstanceData) == 1008, "Offset mismatch for UJunoPOIGameplayVolume::InstanceData");
static_assert(offsetof(UJunoPOIGameplayVolume, POIGuid) == 1040, "Offset mismatch for UJunoPOIGameplayVolume::POIGuid");
static_assert(offsetof(UJunoPOIGameplayVolume, CaveGUID) == 1056, "Offset mismatch for UJunoPOIGameplayVolume::CaveGUID");
static_assert(offsetof(UJunoPOIGameplayVolume, EncounterCapabilities) == 1072, "Offset mismatch for UJunoPOIGameplayVolume::EncounterCapabilities");
static_assert(offsetof(UJunoPOIGameplayVolume, EncounterVariantCount) == 1104, "Offset mismatch for UJunoPOIGameplayVolume::EncounterVariantCount");
static_assert(offsetof(UJunoPOIGameplayVolume, EncounterCategoryTable) == 1112, "Offset mismatch for UJunoPOIGameplayVolume::EncounterCategoryTable");
static_assert(offsetof(UJunoPOIGameplayVolume, LevelsToInject) == 1144, "Offset mismatch for UJunoPOIGameplayVolume::LevelsToInject");
static_assert(offsetof(UJunoPOIGameplayVolume, RegistryItemName) == 1160, "Offset mismatch for UJunoPOIGameplayVolume::RegistryItemName");
static_assert(offsetof(UJunoPOIGameplayVolume, RegistryType) == 1164, "Offset mismatch for UJunoPOIGameplayVolume::RegistryType");
static_assert(offsetof(UJunoPOIGameplayVolume, PersistenceVersion) == 1168, "Offset mismatch for UJunoPOIGameplayVolume::PersistenceVersion");
static_assert(offsetof(UJunoPOIGameplayVolume, Teleporters) == 1176, "Offset mismatch for UJunoPOIGameplayVolume::Teleporters");

// /Script/JunoProceduralWorld.JunoPOIIAMDuplicatedInvalidInstancesFix
// Kind: Class; super: PCGJunoStreamingGameplayVolumePersistenceMigration
class UJunoPOIIAMDuplicatedInvalidInstancesFix
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FString MapNameFilter; // 0x0028 (Size: 0x10, Type: StrProperty)
    TArray<void*> ActorsToMigrateNames; // 0x0038 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UJunoPOIIAMDuplicatedInvalidInstancesFix, MapNameFilter) == 40, "Offset mismatch for UJunoPOIIAMDuplicatedInvalidInstancesFix::MapNameFilter");
static_assert(offsetof(UJunoPOIIAMDuplicatedInvalidInstancesFix, ActorsToMigrateNames) == 56, "Offset mismatch for UJunoPOIIAMDuplicatedInvalidInstancesFix::ActorsToMigrateNames");

// /Script/JunoProceduralWorld.JunoPOIIAMMigrationToHLOD
// Kind: Class; super: JunoHLODMapActorsPersistenceMigration
class UJunoPOIIAMMigrationToHLOD
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> Classes; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t TargetLevel; // 0x0038 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UJunoPOIIAMMigrationToHLOD, Classes) == 40, "Offset mismatch for UJunoPOIIAMMigrationToHLOD::Classes");
static_assert(offsetof(UJunoPOIIAMMigrationToHLOD, TargetLevel) == 56, "Offset mismatch for UJunoPOIIAMMigrationToHLOD::TargetLevel");

// /Script/JunoProceduralWorld.JunoPOIIAMMigrationToNonHLOD
// Kind: Class; super: JunoHLODMapActorsPersistenceMigration
class UJunoPOIIAMMigrationToNonHLOD
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> Classes; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t TargetLevel; // 0x0038 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UJunoPOIIAMMigrationToNonHLOD, Classes) == 40, "Offset mismatch for UJunoPOIIAMMigrationToNonHLOD::Classes");
static_assert(offsetof(UJunoPOIIAMMigrationToNonHLOD, TargetLevel) == 56, "Offset mismatch for UJunoPOIIAMMigrationToNonHLOD::TargetLevel");

// /Script/JunoProceduralWorld.JunoPOIMessageControllerComponent
// Kind: Class; super: FortControllerComponent
class UJunoPOIMessageControllerComponent
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t PrimaryComponentTick[0x30]; // 0x0038 (Size: 0x30, Type: StructProperty)
    TArray<void*> ComponentTags; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AssetUserData; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0088
    std::int32_t UCSSerializationIndex; // 0x0090 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0094
    std::uint8_t bNetAddressable; // 0x0098 (Size: 0x1, Type: BoolProperty)
    // 0x0098 BoolProperty bReplicateUsingRegisteredSubObjectList (shared storage)
    // 0x0098 BoolProperty bReplicates (shared storage)
    std::uint8_t Pad_0003[0x1]; // 0x0099
    std::uint8_t bAutoActivate; // 0x009A (Size: 0x1, Type: BoolProperty)
    // 0x009A BoolProperty bCanEverAffectNavigation (shared storage)
    // 0x009A BoolProperty bEditableWhenInherited (shared storage)
    // 0x009A BoolProperty bIsActive (shared storage)
    std::uint8_t bIsEditorOnly; // 0x009B (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x1D]; // 0x009C
    std::uint8_t CreationMethod; // 0x00B9 (Size: 0x1, Type: EnumProperty)
    std::uint8_t OnComponentActivated[0x1]; // 0x00BA (Size: 0x1, Type: MulticastSparseDelegateProperty)
    FMulticastSparseDelegate OnComponentDeactivated; // 0x00BB (Size: 0x10, Type: MulticastSparseDelegateProperty)
};

static_assert(offsetof(UJunoPOIMessageControllerComponent, PrimaryComponentTick) == 56, "Offset mismatch for UJunoPOIMessageControllerComponent::PrimaryComponentTick");
static_assert(offsetof(UJunoPOIMessageControllerComponent, ComponentTags) == 104, "Offset mismatch for UJunoPOIMessageControllerComponent::ComponentTags");
static_assert(offsetof(UJunoPOIMessageControllerComponent, AssetUserData) == 120, "Offset mismatch for UJunoPOIMessageControllerComponent::AssetUserData");
static_assert(offsetof(UJunoPOIMessageControllerComponent, UCSSerializationIndex) == 144, "Offset mismatch for UJunoPOIMessageControllerComponent::UCSSerializationIndex");
static_assert(offsetof(UJunoPOIMessageControllerComponent, bNetAddressable) == 152, "Offset mismatch for UJunoPOIMessageControllerComponent::bNetAddressable");
static_assert(offsetof(UJunoPOIMessageControllerComponent, bAutoActivate) == 154, "Offset mismatch for UJunoPOIMessageControllerComponent::bAutoActivate");
static_assert(offsetof(UJunoPOIMessageControllerComponent, bIsEditorOnly) == 155, "Offset mismatch for UJunoPOIMessageControllerComponent::bIsEditorOnly");
static_assert(offsetof(UJunoPOIMessageControllerComponent, CreationMethod) == 185, "Offset mismatch for UJunoPOIMessageControllerComponent::CreationMethod");
static_assert(offsetof(UJunoPOIMessageControllerComponent, OnComponentActivated) == 186, "Offset mismatch for UJunoPOIMessageControllerComponent::OnComponentActivated");
static_assert(offsetof(UJunoPOIMessageControllerComponent, OnComponentDeactivated) == 187, "Offset mismatch for UJunoPOIMessageControllerComponent::OnComponentDeactivated");

// /Script/JunoProceduralWorld.JunoPOIPreselectorComponent
// Kind: Class; super: GameFrameworkComponent
class UJunoPOIPreselectorComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TArray<void*> WorldTileSlots; // 0x00C0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x48]; // 0x00D0
    TArray<void*> DebugSpawnPOIs; // 0x0118 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t POIDataRegistry[0x4]; // 0x0128 (Size: 0x4, Type: StructProperty)
    std::uint8_t POIBlockerDataRegistry[0x4]; // 0x012C (Size: 0x4, Type: StructProperty)
    std::uint8_t TileRequiredTags[0x48]; // 0x0130 (Size: 0x48, Type: StructProperty)
    void* WorldTile; // 0x0178 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t TuningParams[0x1]; // 0x0180 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoPOIPreselectorComponent, WorldTileSlots) == 192, "Offset mismatch for UJunoPOIPreselectorComponent::WorldTileSlots");
static_assert(offsetof(UJunoPOIPreselectorComponent, DebugSpawnPOIs) == 280, "Offset mismatch for UJunoPOIPreselectorComponent::DebugSpawnPOIs");
static_assert(offsetof(UJunoPOIPreselectorComponent, POIDataRegistry) == 296, "Offset mismatch for UJunoPOIPreselectorComponent::POIDataRegistry");
static_assert(offsetof(UJunoPOIPreselectorComponent, POIBlockerDataRegistry) == 300, "Offset mismatch for UJunoPOIPreselectorComponent::POIBlockerDataRegistry");
static_assert(offsetof(UJunoPOIPreselectorComponent, TileRequiredTags) == 304, "Offset mismatch for UJunoPOIPreselectorComponent::TileRequiredTags");
static_assert(offsetof(UJunoPOIPreselectorComponent, WorldTile) == 376, "Offset mismatch for UJunoPOIPreselectorComponent::WorldTile");
static_assert(offsetof(UJunoPOIPreselectorComponent, TuningParams) == 384, "Offset mismatch for UJunoPOIPreselectorComponent::TuningParams");

// /Script/JunoProceduralWorld.JunoPOIPreselectorModifierInterface
// Kind: Class; super: Interface
class UJunoPOIPreselectorModifierInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoProceduralWorld.JunoPOIRegistryNameRedirectors
// Kind: Class; super: Object
class UJunoPOIRegistryNameRedirectors
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> POIRegistryNameRedirectors; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UJunoPOIRegistryNameRedirectors, POIRegistryNameRedirectors) == 40, "Offset mismatch for UJunoPOIRegistryNameRedirectors::POIRegistryNameRedirectors");

// /Script/JunoProceduralWorld.JunoPOISelectorComponent
// Kind: Class; super: GameFrameworkComponent
class UJunoPOISelectorComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t DataRegistryType[0x8]; // 0x00C0 (Size: 0x8, Type: StructProperty)
    TArray<void*> TeleporterClasses; // 0x00C8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x78]; // 0x00D8
    std::uint8_t POITypes[0x10]; // 0x0150 (Size: 0x10, Type: SetProperty)
    std::uint8_t CaveGenerationTags[0x20]; // 0x0160 (Size: 0x20, Type: StructProperty)
    std::uint8_t RequiredPOITags[0x20]; // 0x0180 (Size: 0x20, Type: StructProperty)
    std::uint8_t bRandomizeRotation; // 0x01A0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x01A1
    std::uint8_t Params[0x30]; // 0x01A8 (Size: 0x30, Type: StructProperty)
    TWeakObjectPtr<void> PreSelectorComponent; // 0x01D8 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0003[0x8]; // 0x01E0
    std::uint8_t CaveSurfaceData[0x1]; // 0x01E8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoPOISelectorComponent, DataRegistryType) == 192, "Offset mismatch for UJunoPOISelectorComponent::DataRegistryType");
static_assert(offsetof(UJunoPOISelectorComponent, TeleporterClasses) == 200, "Offset mismatch for UJunoPOISelectorComponent::TeleporterClasses");
static_assert(offsetof(UJunoPOISelectorComponent, POITypes) == 336, "Offset mismatch for UJunoPOISelectorComponent::POITypes");
static_assert(offsetof(UJunoPOISelectorComponent, CaveGenerationTags) == 352, "Offset mismatch for UJunoPOISelectorComponent::CaveGenerationTags");
static_assert(offsetof(UJunoPOISelectorComponent, RequiredPOITags) == 384, "Offset mismatch for UJunoPOISelectorComponent::RequiredPOITags");
static_assert(offsetof(UJunoPOISelectorComponent, bRandomizeRotation) == 416, "Offset mismatch for UJunoPOISelectorComponent::bRandomizeRotation");
static_assert(offsetof(UJunoPOISelectorComponent, Params) == 424, "Offset mismatch for UJunoPOISelectorComponent::Params");
static_assert(offsetof(UJunoPOISelectorComponent, PreSelectorComponent) == 472, "Offset mismatch for UJunoPOISelectorComponent::PreSelectorComponent");
static_assert(offsetof(UJunoPOISelectorComponent, CaveSurfaceData) == 488, "Offset mismatch for UJunoPOISelectorComponent::CaveSurfaceData");

// /Script/JunoProceduralWorld.JunoPOISelectorPlayspaceComponent
// Kind: Class; super: FortPlayspaceComponent
class UJunoPOISelectorPlayspaceComponent
{
public:
    std::uint8_t Pad_0000[0x118]; // 0x0000
    std::uint8_t DataRegistry[0x8]; // 0x0118 (Size: 0x8, Type: StructProperty)
    std::uint8_t Cache[0x1]; // 0x0120 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoPOISelectorPlayspaceComponent, DataRegistry) == 280, "Offset mismatch for UJunoPOISelectorPlayspaceComponent::DataRegistry");
static_assert(offsetof(UJunoPOISelectorPlayspaceComponent, Cache) == 288, "Offset mismatch for UJunoPOISelectorPlayspaceComponent::Cache");

// /Script/JunoProceduralWorld.JunoPOISlot
// Kind: Class; super: Actor
class UJunoPOISlot
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    std::uint8_t PotentialPOIs[0x20]; // 0x0270 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t SlotSize; // 0x0290 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0291
    TSoftObjectPtr<void> TerrainHeightTexture; // 0x0298 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UJunoPOISlot, PotentialPOIs) == 624, "Offset mismatch for UJunoPOISlot::PotentialPOIs");
static_assert(offsetof(UJunoPOISlot, SlotSize) == 656, "Offset mismatch for UJunoPOISlot::SlotSize");
static_assert(offsetof(UJunoPOISlot, TerrainHeightTexture) == 664, "Offset mismatch for UJunoPOISlot::TerrainHeightTexture");

// /Script/JunoProceduralWorld.JunoPawnComponent_StreamingSourcesProvider
// Kind: Class; super: JunoPawnComponent
class UJunoPawnComponent_StreamingSourcesProvider
{
public:
    std::uint8_t Pad_0000[0xD8]; // 0x0000
    std::uint8_t AboveGroundLocation[0x18]; // 0x00D8 (Size: 0x18, Type: StructProperty)
    std::uint8_t AboveGroundRotation[0x18]; // 0x00F0 (Size: 0x18, Type: StructProperty)
    std::uint8_t BelowGroundLocation[0x18]; // 0x0108 (Size: 0x18, Type: StructProperty)
    std::uint8_t BelowGroundRotation[0x1]; // 0x0120 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoPawnComponent_StreamingSourcesProvider, AboveGroundLocation) == 216, "Offset mismatch for UJunoPawnComponent_StreamingSourcesProvider::AboveGroundLocation");
static_assert(offsetof(UJunoPawnComponent_StreamingSourcesProvider, AboveGroundRotation) == 240, "Offset mismatch for UJunoPawnComponent_StreamingSourcesProvider::AboveGroundRotation");
static_assert(offsetof(UJunoPawnComponent_StreamingSourcesProvider, BelowGroundLocation) == 264, "Offset mismatch for UJunoPawnComponent_StreamingSourcesProvider::BelowGroundLocation");
static_assert(offsetof(UJunoPawnComponent_StreamingSourcesProvider, BelowGroundRotation) == 288, "Offset mismatch for UJunoPawnComponent_StreamingSourcesProvider::BelowGroundRotation");

// /Script/JunoProceduralWorld.JunoProceduralFoundation
// Kind: Class; super: BuildingFoundation
class UJunoProceduralFoundation
{
public:
    std::uint8_t Pad_0000[0xAD8]; // 0x0000
    TArray<void*> BuildingGroups; // 0x0AD8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AdditionalWorlds; // 0x0AE8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t BuildingDeconstructorOrigin[0x18]; // 0x0AF8 (Size: 0x18, Type: StructProperty)
    std::uint8_t BuildingDeconstructorExtent[0x18]; // 0x0B10 (Size: 0x18, Type: StructProperty)
    std::uint8_t bConditionalFoundation; // 0x0B28 (Size: 0x1, Type: BoolProperty)
    // 0x0B28 BoolProperty bFlipXAxis (shared storage)
    // 0x0B28 BoolProperty bFlipYAxis (shared storage)
    // 0x0B28 BoolProperty bForceDitheringTransition (shared storage)
    // 0x0B28 BoolProperty bHasExcludedZone (shared storage)
    // 0x0B28 BoolProperty bOverrideNavigationGraphCells (shared storage)
    // 0x0B28 BoolProperty bServerStreamedInLevel (shared storage)
    // 0x0B28 BoolProperty bShowHLODWhenDisabled (shared storage)
    std::uint8_t bStreamingDataBasedBounds; // 0x0B29 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x0B2A
    std::uint8_t FoundationEnabledState; // 0x0B2B (Size: 0x1, Type: EnumProperty)
    std::uint8_t DynamicFoundationType; // 0x0B2C (Size: 0x1, Type: EnumProperty)
    std::uint8_t FoundationType; // 0x0B2D (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0002[0x2]; // 0x0B2E
    std::int32_t NavExclusionMinX; // 0x0B30 (Size: 0x4, Type: IntProperty)
    std::int32_t NavExclusionMaxX; // 0x0B34 (Size: 0x4, Type: IntProperty)
    std::int32_t NavExclusionMinY; // 0x0B38 (Size: 0x4, Type: IntProperty)
    std::int32_t NavExclusionMaxY; // 0x0B3C (Size: 0x4, Type: IntProperty)
    std::uint8_t StreamingBoundingBox[0x38]; // 0x0B40 (Size: 0x38, Type: StructProperty)
    FName LevelToStream; // 0x0B78 (Size: 0x8, Type: NameProperty)
    std::uint8_t BuildingGroupFilter[0x48]; // 0x0B80 (Size: 0x48, Type: StructProperty)
    std::uint8_t MapLocationTag[0x8]; // 0x0BC8 (Size: 0x8, Type: StructProperty)
    std::uint8_t LandIcon[0xB0]; // 0x0BD0 (Size: 0xB0, Type: StructProperty)
    std::uint8_t LandIconWorldOffset[0x18]; // 0x0C80 (Size: 0x18, Type: StructProperty)
    std::uint8_t MapLocationText[0x10]; // 0x0C98 (Size: 0x10, Type: TextProperty)
    std::uint8_t MapLocationTextOffset[0x18]; // 0x0CA8 (Size: 0x18, Type: StructProperty)
    float LandIconAdditionalRenderYaw; // 0x0CC0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bRotateLandIconWorldOffset; // 0x0CC4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0CC5
    std::uint8_t MapLocationOverride[0x18]; // 0x0CC8 (Size: 0x18, Type: StructProperty)
    std::uint8_t bShadowLayer; // 0x0CE0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x7]; // 0x0CE1
    std::uint8_t StreamingData[0xC8]; // 0x0CE8 (Size: 0xC8, Type: StructProperty)
    TArray<void*> SpawnedLODActors; // 0x0DB0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SpawnedLODActorsMinDrawDistances; // 0x0DC0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ChildSpawnedLODActors; // 0x0DD0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> HLODActors; // 0x0DE0 (Size: 0x10, Type: ArrayProperty)
    void* ParentFoundation; // 0x0DF0 (Size: 0x8, Type: ObjectProperty)
    float ProxyMeshMaxDrawDistanceMultiplier; // 0x0DF8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0005[0xC]; // 0x0DFC
    void* LevelStreamInfo; // 0x0E08 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0006[0x18]; // 0x0E10
    std::uint8_t DynamicFoundationRepData[0x48]; // 0x0E28 (Size: 0x48, Type: StructProperty)
    std::uint8_t DynamicFoundationTransform[0x9C]; // 0x0E70 (Size: 0x9C, Type: StructProperty)
    std::uint8_t FoundationGUID[0x1]; // 0x0F0C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoProceduralFoundation, BuildingGroups) == 2776, "Offset mismatch for UJunoProceduralFoundation::BuildingGroups");
static_assert(offsetof(UJunoProceduralFoundation, AdditionalWorlds) == 2792, "Offset mismatch for UJunoProceduralFoundation::AdditionalWorlds");
static_assert(offsetof(UJunoProceduralFoundation, BuildingDeconstructorOrigin) == 2808, "Offset mismatch for UJunoProceduralFoundation::BuildingDeconstructorOrigin");
static_assert(offsetof(UJunoProceduralFoundation, BuildingDeconstructorExtent) == 2832, "Offset mismatch for UJunoProceduralFoundation::BuildingDeconstructorExtent");
static_assert(offsetof(UJunoProceduralFoundation, bConditionalFoundation) == 2856, "Offset mismatch for UJunoProceduralFoundation::bConditionalFoundation");
static_assert(offsetof(UJunoProceduralFoundation, bStreamingDataBasedBounds) == 2857, "Offset mismatch for UJunoProceduralFoundation::bStreamingDataBasedBounds");
static_assert(offsetof(UJunoProceduralFoundation, FoundationEnabledState) == 2859, "Offset mismatch for UJunoProceduralFoundation::FoundationEnabledState");
static_assert(offsetof(UJunoProceduralFoundation, DynamicFoundationType) == 2860, "Offset mismatch for UJunoProceduralFoundation::DynamicFoundationType");
static_assert(offsetof(UJunoProceduralFoundation, FoundationType) == 2861, "Offset mismatch for UJunoProceduralFoundation::FoundationType");
static_assert(offsetof(UJunoProceduralFoundation, NavExclusionMinX) == 2864, "Offset mismatch for UJunoProceduralFoundation::NavExclusionMinX");
static_assert(offsetof(UJunoProceduralFoundation, NavExclusionMaxX) == 2868, "Offset mismatch for UJunoProceduralFoundation::NavExclusionMaxX");
static_assert(offsetof(UJunoProceduralFoundation, NavExclusionMinY) == 2872, "Offset mismatch for UJunoProceduralFoundation::NavExclusionMinY");
static_assert(offsetof(UJunoProceduralFoundation, NavExclusionMaxY) == 2876, "Offset mismatch for UJunoProceduralFoundation::NavExclusionMaxY");
static_assert(offsetof(UJunoProceduralFoundation, StreamingBoundingBox) == 2880, "Offset mismatch for UJunoProceduralFoundation::StreamingBoundingBox");
static_assert(offsetof(UJunoProceduralFoundation, LevelToStream) == 2936, "Offset mismatch for UJunoProceduralFoundation::LevelToStream");
static_assert(offsetof(UJunoProceduralFoundation, BuildingGroupFilter) == 2944, "Offset mismatch for UJunoProceduralFoundation::BuildingGroupFilter");
static_assert(offsetof(UJunoProceduralFoundation, MapLocationTag) == 3016, "Offset mismatch for UJunoProceduralFoundation::MapLocationTag");
static_assert(offsetof(UJunoProceduralFoundation, LandIcon) == 3024, "Offset mismatch for UJunoProceduralFoundation::LandIcon");
static_assert(offsetof(UJunoProceduralFoundation, LandIconWorldOffset) == 3200, "Offset mismatch for UJunoProceduralFoundation::LandIconWorldOffset");
static_assert(offsetof(UJunoProceduralFoundation, MapLocationText) == 3224, "Offset mismatch for UJunoProceduralFoundation::MapLocationText");
static_assert(offsetof(UJunoProceduralFoundation, MapLocationTextOffset) == 3240, "Offset mismatch for UJunoProceduralFoundation::MapLocationTextOffset");
static_assert(offsetof(UJunoProceduralFoundation, LandIconAdditionalRenderYaw) == 3264, "Offset mismatch for UJunoProceduralFoundation::LandIconAdditionalRenderYaw");
static_assert(offsetof(UJunoProceduralFoundation, bRotateLandIconWorldOffset) == 3268, "Offset mismatch for UJunoProceduralFoundation::bRotateLandIconWorldOffset");
static_assert(offsetof(UJunoProceduralFoundation, MapLocationOverride) == 3272, "Offset mismatch for UJunoProceduralFoundation::MapLocationOverride");
static_assert(offsetof(UJunoProceduralFoundation, bShadowLayer) == 3296, "Offset mismatch for UJunoProceduralFoundation::bShadowLayer");
static_assert(offsetof(UJunoProceduralFoundation, StreamingData) == 3304, "Offset mismatch for UJunoProceduralFoundation::StreamingData");
static_assert(offsetof(UJunoProceduralFoundation, SpawnedLODActors) == 3504, "Offset mismatch for UJunoProceduralFoundation::SpawnedLODActors");
static_assert(offsetof(UJunoProceduralFoundation, SpawnedLODActorsMinDrawDistances) == 3520, "Offset mismatch for UJunoProceduralFoundation::SpawnedLODActorsMinDrawDistances");
static_assert(offsetof(UJunoProceduralFoundation, ChildSpawnedLODActors) == 3536, "Offset mismatch for UJunoProceduralFoundation::ChildSpawnedLODActors");
static_assert(offsetof(UJunoProceduralFoundation, HLODActors) == 3552, "Offset mismatch for UJunoProceduralFoundation::HLODActors");
static_assert(offsetof(UJunoProceduralFoundation, ParentFoundation) == 3568, "Offset mismatch for UJunoProceduralFoundation::ParentFoundation");
static_assert(offsetof(UJunoProceduralFoundation, ProxyMeshMaxDrawDistanceMultiplier) == 3576, "Offset mismatch for UJunoProceduralFoundation::ProxyMeshMaxDrawDistanceMultiplier");
static_assert(offsetof(UJunoProceduralFoundation, LevelStreamInfo) == 3592, "Offset mismatch for UJunoProceduralFoundation::LevelStreamInfo");
static_assert(offsetof(UJunoProceduralFoundation, DynamicFoundationRepData) == 3624, "Offset mismatch for UJunoProceduralFoundation::DynamicFoundationRepData");
static_assert(offsetof(UJunoProceduralFoundation, DynamicFoundationTransform) == 3696, "Offset mismatch for UJunoProceduralFoundation::DynamicFoundationTransform");
static_assert(offsetof(UJunoProceduralFoundation, FoundationGUID) == 3852, "Offset mismatch for UJunoProceduralFoundation::FoundationGUID");

// /Script/JunoProceduralWorld.JunoProceduralWorldAdditionalPOIBlueprintLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UJunoProceduralWorldAdditionalPOIBlueprintLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoProceduralWorld.JunoProceduralWorldBlueprintLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UJunoProceduralWorldBlueprintLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoProceduralWorld.JunoProceduralWorldDeveloperSettings
// Kind: Class; super: DeveloperSettings
class UJunoProceduralWorldDeveloperSettings
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoProceduralWorld.JunoProceduralWorldSettings
// Kind: Class; super: FortPlayspaceComponent
class UJunoProceduralWorldSettings
{
public:
    std::uint8_t Pad_0000[0x118]; // 0x0000
    std::uint8_t bEnableTiledWorldsInPIE; // 0x0118 (Size: 0x1, Type: BoolProperty)
    std::uint8_t CellLoadingMode; // 0x0119 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Caves_LevelInstanceMode; // 0x011A (Size: 0x1, Type: EnumProperty)
    std::uint8_t POI_LevelInstanceMode; // 0x011B (Size: 0x1, Type: EnumProperty)
    std::uint8_t bEnablePOI_HLODs; // 0x011C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x011D
    std::int32_t MaxPOIsPerTile; // 0x0120 (Size: 0x4, Type: IntProperty)
    std::uint8_t InjectedPOI_GridName[0x4]; // 0x0124 (Size: 0x4, Type: NameProperty)
    std::uint8_t InjectedPOI_HLODGridName[0x4]; // 0x0128 (Size: 0x4, Type: NameProperty)
    std::uint8_t InjectedCave_GridName[0x4]; // 0x012C (Size: 0x4, Type: NameProperty)
    std::uint8_t InjectedCave_HLODGridName[0x4]; // 0x0130 (Size: 0x4, Type: NameProperty)
    std::int32_t POIStreamingPriority; // 0x0134 (Size: 0x4, Type: IntProperty)
    std::int32_t CaveStreamingPriority; // 0x0138 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x013C
    std::int64_t TileSize; // 0x0140 (Size: 0x8, Type: Int64Property)
    std::int64_t WorldSize; // 0x0148 (Size: 0x8, Type: Int64Property)
    std::int64_t GenerateWorldDiameter; // 0x0150 (Size: 0x8, Type: Int64Property)
    std::uint8_t WorldOriginTileOffset[0x10]; // 0x0158 (Size: 0x10, Type: StructProperty)
    std::int64_t DynamicGridLevels; // 0x0168 (Size: 0x8, Type: Int64Property)
    float DynamicGridWorldMaxExtent; // 0x0170 (Size: 0x4, Type: FloatProperty)
    float DynamicGridLoadingRange; // 0x0174 (Size: 0x4, Type: FloatProperty)
    void* TileSelectionClass; // 0x0178 (Size: 0x8, Type: ClassProperty)
    void* WorldTileClass; // 0x0180 (Size: 0x8, Type: ClassProperty)
    void* OutOfBoundsTileActor; // 0x0188 (Size: 0x8, Type: ClassProperty)
    float TerrainElevationMinimum; // 0x0190 (Size: 0x4, Type: FloatProperty)
    float TerrainElevationMaximum; // 0x0194 (Size: 0x4, Type: FloatProperty)
    void* CaveVolumeClass; // 0x0198 (Size: 0x8, Type: ClassProperty)
    void* POIVolumeClass; // 0x01A0 (Size: 0x8, Type: ClassProperty)
    std::uint8_t POIResourcesTable[0x20]; // 0x01A8 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t TileRegistryType[0x4]; // 0x01C8 (Size: 0x4, Type: StructProperty)
    std::uint8_t EventUpdatesRegistryType[0x4]; // 0x01CC (Size: 0x4, Type: StructProperty)
    std::uint8_t TilesetRegistryType[0x4]; // 0x01D0 (Size: 0x4, Type: StructProperty)
    std::uint8_t POIRegistryType[0x4]; // 0x01D4 (Size: 0x4, Type: StructProperty)
    std::uint8_t AdditionalPOIsRegistryType[0x4]; // 0x01D8 (Size: 0x4, Type: StructProperty)
    std::uint8_t TileSelectorRegistryType[0x4]; // 0x01DC (Size: 0x4, Type: StructProperty)
    std::uint8_t CaveResetEventsRegistry[0x8]; // 0x01E0 (Size: 0x8, Type: StructProperty)
    std::uint8_t TestOverlayLevel[0x20]; // 0x01E8 (Size: 0x20, Type: SoftObjectProperty)
    FName TileSelectorOverride; // 0x0208 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UJunoProceduralWorldSettings, bEnableTiledWorldsInPIE) == 280, "Offset mismatch for UJunoProceduralWorldSettings::bEnableTiledWorldsInPIE");
static_assert(offsetof(UJunoProceduralWorldSettings, CellLoadingMode) == 281, "Offset mismatch for UJunoProceduralWorldSettings::CellLoadingMode");
static_assert(offsetof(UJunoProceduralWorldSettings, Caves_LevelInstanceMode) == 282, "Offset mismatch for UJunoProceduralWorldSettings::Caves_LevelInstanceMode");
static_assert(offsetof(UJunoProceduralWorldSettings, POI_LevelInstanceMode) == 283, "Offset mismatch for UJunoProceduralWorldSettings::POI_LevelInstanceMode");
static_assert(offsetof(UJunoProceduralWorldSettings, bEnablePOI_HLODs) == 284, "Offset mismatch for UJunoProceduralWorldSettings::bEnablePOI_HLODs");
static_assert(offsetof(UJunoProceduralWorldSettings, MaxPOIsPerTile) == 288, "Offset mismatch for UJunoProceduralWorldSettings::MaxPOIsPerTile");
static_assert(offsetof(UJunoProceduralWorldSettings, InjectedPOI_GridName) == 292, "Offset mismatch for UJunoProceduralWorldSettings::InjectedPOI_GridName");
static_assert(offsetof(UJunoProceduralWorldSettings, InjectedPOI_HLODGridName) == 296, "Offset mismatch for UJunoProceduralWorldSettings::InjectedPOI_HLODGridName");
static_assert(offsetof(UJunoProceduralWorldSettings, InjectedCave_GridName) == 300, "Offset mismatch for UJunoProceduralWorldSettings::InjectedCave_GridName");
static_assert(offsetof(UJunoProceduralWorldSettings, InjectedCave_HLODGridName) == 304, "Offset mismatch for UJunoProceduralWorldSettings::InjectedCave_HLODGridName");
static_assert(offsetof(UJunoProceduralWorldSettings, POIStreamingPriority) == 308, "Offset mismatch for UJunoProceduralWorldSettings::POIStreamingPriority");
static_assert(offsetof(UJunoProceduralWorldSettings, CaveStreamingPriority) == 312, "Offset mismatch for UJunoProceduralWorldSettings::CaveStreamingPriority");
static_assert(offsetof(UJunoProceduralWorldSettings, TileSize) == 320, "Offset mismatch for UJunoProceduralWorldSettings::TileSize");
static_assert(offsetof(UJunoProceduralWorldSettings, WorldSize) == 328, "Offset mismatch for UJunoProceduralWorldSettings::WorldSize");
static_assert(offsetof(UJunoProceduralWorldSettings, GenerateWorldDiameter) == 336, "Offset mismatch for UJunoProceduralWorldSettings::GenerateWorldDiameter");
static_assert(offsetof(UJunoProceduralWorldSettings, WorldOriginTileOffset) == 344, "Offset mismatch for UJunoProceduralWorldSettings::WorldOriginTileOffset");
static_assert(offsetof(UJunoProceduralWorldSettings, DynamicGridLevels) == 360, "Offset mismatch for UJunoProceduralWorldSettings::DynamicGridLevels");
static_assert(offsetof(UJunoProceduralWorldSettings, DynamicGridWorldMaxExtent) == 368, "Offset mismatch for UJunoProceduralWorldSettings::DynamicGridWorldMaxExtent");
static_assert(offsetof(UJunoProceduralWorldSettings, DynamicGridLoadingRange) == 372, "Offset mismatch for UJunoProceduralWorldSettings::DynamicGridLoadingRange");
static_assert(offsetof(UJunoProceduralWorldSettings, TileSelectionClass) == 376, "Offset mismatch for UJunoProceduralWorldSettings::TileSelectionClass");
static_assert(offsetof(UJunoProceduralWorldSettings, WorldTileClass) == 384, "Offset mismatch for UJunoProceduralWorldSettings::WorldTileClass");
static_assert(offsetof(UJunoProceduralWorldSettings, OutOfBoundsTileActor) == 392, "Offset mismatch for UJunoProceduralWorldSettings::OutOfBoundsTileActor");
static_assert(offsetof(UJunoProceduralWorldSettings, TerrainElevationMinimum) == 400, "Offset mismatch for UJunoProceduralWorldSettings::TerrainElevationMinimum");
static_assert(offsetof(UJunoProceduralWorldSettings, TerrainElevationMaximum) == 404, "Offset mismatch for UJunoProceduralWorldSettings::TerrainElevationMaximum");
static_assert(offsetof(UJunoProceduralWorldSettings, CaveVolumeClass) == 408, "Offset mismatch for UJunoProceduralWorldSettings::CaveVolumeClass");
static_assert(offsetof(UJunoProceduralWorldSettings, POIVolumeClass) == 416, "Offset mismatch for UJunoProceduralWorldSettings::POIVolumeClass");
static_assert(offsetof(UJunoProceduralWorldSettings, POIResourcesTable) == 424, "Offset mismatch for UJunoProceduralWorldSettings::POIResourcesTable");
static_assert(offsetof(UJunoProceduralWorldSettings, TileRegistryType) == 456, "Offset mismatch for UJunoProceduralWorldSettings::TileRegistryType");
static_assert(offsetof(UJunoProceduralWorldSettings, EventUpdatesRegistryType) == 460, "Offset mismatch for UJunoProceduralWorldSettings::EventUpdatesRegistryType");
static_assert(offsetof(UJunoProceduralWorldSettings, TilesetRegistryType) == 464, "Offset mismatch for UJunoProceduralWorldSettings::TilesetRegistryType");
static_assert(offsetof(UJunoProceduralWorldSettings, POIRegistryType) == 468, "Offset mismatch for UJunoProceduralWorldSettings::POIRegistryType");
static_assert(offsetof(UJunoProceduralWorldSettings, AdditionalPOIsRegistryType) == 472, "Offset mismatch for UJunoProceduralWorldSettings::AdditionalPOIsRegistryType");
static_assert(offsetof(UJunoProceduralWorldSettings, TileSelectorRegistryType) == 476, "Offset mismatch for UJunoProceduralWorldSettings::TileSelectorRegistryType");
static_assert(offsetof(UJunoProceduralWorldSettings, CaveResetEventsRegistry) == 480, "Offset mismatch for UJunoProceduralWorldSettings::CaveResetEventsRegistry");
static_assert(offsetof(UJunoProceduralWorldSettings, TestOverlayLevel) == 488, "Offset mismatch for UJunoProceduralWorldSettings::TestOverlayLevel");
static_assert(offsetof(UJunoProceduralWorldSettings, TileSelectorOverride) == 520, "Offset mismatch for UJunoProceduralWorldSettings::TileSelectorOverride");

// /Script/JunoProceduralWorld.JunoProfileGo
// Kind: Class; super: FortProfileGo
class UJunoProfileGo
{
public:
    std::uint8_t Pad_0000[0x88]; // 0x0000
    TMap<void*, void*> CsvNonPersistentMetadata; // 0x0088 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> CsvMetadata; // 0x0098 (Size: 0x10, Type: MapProperty)
    float DefaultSettleTime; // 0x00A8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x364]; // 0x00AC
    TArray<void*> ProfileGoScenarios; // 0x0410 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ProfileGoGeneratedScenarios; // 0x0420 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ProfileGoCollections; // 0x0430 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ProfileGoCommands; // 0x0440 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AnimProfilingAssetsBlacklist; // 0x0450 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AnimProfilingCosmeticsWhitelist; // 0x0460 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CachedAthenaCosmeticItemDefinitions; // 0x0470 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CachedAthenaCosmeticVariantTokens; // 0x0480 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UJunoProfileGo, CsvNonPersistentMetadata) == 136, "Offset mismatch for UJunoProfileGo::CsvNonPersistentMetadata");
static_assert(offsetof(UJunoProfileGo, CsvMetadata) == 152, "Offset mismatch for UJunoProfileGo::CsvMetadata");
static_assert(offsetof(UJunoProfileGo, DefaultSettleTime) == 168, "Offset mismatch for UJunoProfileGo::DefaultSettleTime");
static_assert(offsetof(UJunoProfileGo, ProfileGoScenarios) == 1040, "Offset mismatch for UJunoProfileGo::ProfileGoScenarios");
static_assert(offsetof(UJunoProfileGo, ProfileGoGeneratedScenarios) == 1056, "Offset mismatch for UJunoProfileGo::ProfileGoGeneratedScenarios");
static_assert(offsetof(UJunoProfileGo, ProfileGoCollections) == 1072, "Offset mismatch for UJunoProfileGo::ProfileGoCollections");
static_assert(offsetof(UJunoProfileGo, ProfileGoCommands) == 1088, "Offset mismatch for UJunoProfileGo::ProfileGoCommands");
static_assert(offsetof(UJunoProfileGo, AnimProfilingAssetsBlacklist) == 1104, "Offset mismatch for UJunoProfileGo::AnimProfilingAssetsBlacklist");
static_assert(offsetof(UJunoProfileGo, AnimProfilingCosmeticsWhitelist) == 1120, "Offset mismatch for UJunoProfileGo::AnimProfilingCosmeticsWhitelist");
static_assert(offsetof(UJunoProfileGo, CachedAthenaCosmeticItemDefinitions) == 1136, "Offset mismatch for UJunoProfileGo::CachedAthenaCosmeticItemDefinitions");
static_assert(offsetof(UJunoProfileGo, CachedAthenaCosmeticVariantTokens) == 1152, "Offset mismatch for UJunoProfileGo::CachedAthenaCosmeticVariantTokens");

// /Script/JunoProceduralWorld.JunoProjectPositionTestShape
// Kind: Class; super: PCGSpatialData
class UJunoProjectPositionTestShape
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    TWeakObjectPtr<void> TargetActor; // 0x0048 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t bKeepZeroDensityPoints; // 0x0050 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasCachedLastSelector; // 0x0051 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x0052
    std::uint8_t CachedLastSelector[0x1]; // 0x0058 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoProjectPositionTestShape, TargetActor) == 72, "Offset mismatch for UJunoProjectPositionTestShape::TargetActor");
static_assert(offsetof(UJunoProjectPositionTestShape, bKeepZeroDensityPoints) == 80, "Offset mismatch for UJunoProjectPositionTestShape::bKeepZeroDensityPoints");
static_assert(offsetof(UJunoProjectPositionTestShape, bHasCachedLastSelector) == 81, "Offset mismatch for UJunoProjectPositionTestShape::bHasCachedLastSelector");
static_assert(offsetof(UJunoProjectPositionTestShape, CachedLastSelector) == 88, "Offset mismatch for UJunoProjectPositionTestShape::CachedLastSelector");

// /Script/JunoProceduralWorld.JunoRemoveInstancesModifierVolumeComponent
// Kind: Class; super: JunoInstancedActorModifierVolumeComponent
class UJunoRemoveInstancesModifierVolumeComponent
{
public:
    std::uint8_t Pad_0000[0x570]; // 0x0000
    std::uint8_t Shape; // 0x0570 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0571
    std::uint8_t Extent[0x18]; // 0x0578 (Size: 0x18, Type: StructProperty)
    float Radius; // 0x0590 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0594
    TArray<void*> Modifiers; // 0x0598 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bIgnoreOwnLevelsInstances; // 0x05A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x7]; // 0x05A9
    TArray<void*> LevelsToIgnore; // 0x05B0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Color[0x4]; // 0x05C0 (Size: 0x4, Type: StructProperty)
    std::uint8_t bDrawOnlyIfSelected; // 0x05C4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x05C5
    float LineThickness; // 0x05C8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ModifierVolumeHandle[0x4]; // 0x05CC (Size: 0x4, Type: StructProperty)
    TArray<void*> ModifiedManagers; // 0x05D0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UJunoRemoveInstancesModifierVolumeComponent, Shape) == 1392, "Offset mismatch for UJunoRemoveInstancesModifierVolumeComponent::Shape");
static_assert(offsetof(UJunoRemoveInstancesModifierVolumeComponent, Extent) == 1400, "Offset mismatch for UJunoRemoveInstancesModifierVolumeComponent::Extent");
static_assert(offsetof(UJunoRemoveInstancesModifierVolumeComponent, Radius) == 1424, "Offset mismatch for UJunoRemoveInstancesModifierVolumeComponent::Radius");
static_assert(offsetof(UJunoRemoveInstancesModifierVolumeComponent, Modifiers) == 1432, "Offset mismatch for UJunoRemoveInstancesModifierVolumeComponent::Modifiers");
static_assert(offsetof(UJunoRemoveInstancesModifierVolumeComponent, bIgnoreOwnLevelsInstances) == 1448, "Offset mismatch for UJunoRemoveInstancesModifierVolumeComponent::bIgnoreOwnLevelsInstances");
static_assert(offsetof(UJunoRemoveInstancesModifierVolumeComponent, LevelsToIgnore) == 1456, "Offset mismatch for UJunoRemoveInstancesModifierVolumeComponent::LevelsToIgnore");
static_assert(offsetof(UJunoRemoveInstancesModifierVolumeComponent, Color) == 1472, "Offset mismatch for UJunoRemoveInstancesModifierVolumeComponent::Color");
static_assert(offsetof(UJunoRemoveInstancesModifierVolumeComponent, bDrawOnlyIfSelected) == 1476, "Offset mismatch for UJunoRemoveInstancesModifierVolumeComponent::bDrawOnlyIfSelected");
static_assert(offsetof(UJunoRemoveInstancesModifierVolumeComponent, LineThickness) == 1480, "Offset mismatch for UJunoRemoveInstancesModifierVolumeComponent::LineThickness");
static_assert(offsetof(UJunoRemoveInstancesModifierVolumeComponent, ModifierVolumeHandle) == 1484, "Offset mismatch for UJunoRemoveInstancesModifierVolumeComponent::ModifierVolumeHandle");
static_assert(offsetof(UJunoRemoveInstancesModifierVolumeComponent, ModifiedManagers) == 1488, "Offset mismatch for UJunoRemoveInstancesModifierVolumeComponent::ModifiedManagers");

// /Script/JunoProceduralWorld.JunoResetPOITagsPersistenceMigration
// Kind: Class; super: PCGJunoStreamingGameplayVolumePersistenceMigration
class UJunoResetPOITagsPersistenceMigration
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoProceduralWorld.JunoResetPlayspacePersistenceMigration
// Kind: Class; super: PCGJunoStreamingGameplayVolumePersistenceMigration
class UJunoResetPlayspacePersistenceMigration
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoProceduralWorld.JunoRoadAINavigationCluster
// Kind: Class; super: Actor
class UJunoRoadAINavigationCluster
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    std::uint8_t GlobalTags[0x20]; // 0x0270 (Size: 0x20, Type: StructProperty)
    TArray<void*> Entries; // 0x0290 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SharedPoints; // 0x02A0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PatrolInfos; // 0x02B0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PointInfos; // 0x02C0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t PartitionnerCellSize[0x28]; // 0x02D0 (Size: 0x28, Type: StructProperty)
    std::uint8_t NavInvocationRange[0x28]; // 0x02F8 (Size: 0x28, Type: StructProperty)
    std::uint8_t NavMeshGenerationRadius[0x28]; // 0x0320 (Size: 0x28, Type: StructProperty)
    std::uint8_t NavInvocationSupportedAgents[0x8]; // 0x0348 (Size: 0x8, Type: StructProperty)
    std::uint8_t LeashExtraWidth[0x28]; // 0x0350 (Size: 0x28, Type: StructProperty)
    std::uint8_t LeashHeight[0x28]; // 0x0378 (Size: 0x28, Type: StructProperty)
    std::uint8_t InnerLeashExtraWidth[0x28]; // 0x03A0 (Size: 0x28, Type: StructProperty)
    std::uint8_t InnerLeashHeight[0x28]; // 0x03C8 (Size: 0x28, Type: StructProperty)
    std::uint8_t EnableCampTagging[0x28]; // 0x03F0 (Size: 0x28, Type: StructProperty)
    std::uint8_t CampTags[0x20]; // 0x0418 (Size: 0x20, Type: StructProperty)
    std::uint8_t CampDistanceThreshold[0x1]; // 0x0438 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoRoadAINavigationCluster, GlobalTags) == 624, "Offset mismatch for UJunoRoadAINavigationCluster::GlobalTags");
static_assert(offsetof(UJunoRoadAINavigationCluster, Entries) == 656, "Offset mismatch for UJunoRoadAINavigationCluster::Entries");
static_assert(offsetof(UJunoRoadAINavigationCluster, SharedPoints) == 672, "Offset mismatch for UJunoRoadAINavigationCluster::SharedPoints");
static_assert(offsetof(UJunoRoadAINavigationCluster, PatrolInfos) == 688, "Offset mismatch for UJunoRoadAINavigationCluster::PatrolInfos");
static_assert(offsetof(UJunoRoadAINavigationCluster, PointInfos) == 704, "Offset mismatch for UJunoRoadAINavigationCluster::PointInfos");
static_assert(offsetof(UJunoRoadAINavigationCluster, PartitionnerCellSize) == 720, "Offset mismatch for UJunoRoadAINavigationCluster::PartitionnerCellSize");
static_assert(offsetof(UJunoRoadAINavigationCluster, NavInvocationRange) == 760, "Offset mismatch for UJunoRoadAINavigationCluster::NavInvocationRange");
static_assert(offsetof(UJunoRoadAINavigationCluster, NavMeshGenerationRadius) == 800, "Offset mismatch for UJunoRoadAINavigationCluster::NavMeshGenerationRadius");
static_assert(offsetof(UJunoRoadAINavigationCluster, NavInvocationSupportedAgents) == 840, "Offset mismatch for UJunoRoadAINavigationCluster::NavInvocationSupportedAgents");
static_assert(offsetof(UJunoRoadAINavigationCluster, LeashExtraWidth) == 848, "Offset mismatch for UJunoRoadAINavigationCluster::LeashExtraWidth");
static_assert(offsetof(UJunoRoadAINavigationCluster, LeashHeight) == 888, "Offset mismatch for UJunoRoadAINavigationCluster::LeashHeight");
static_assert(offsetof(UJunoRoadAINavigationCluster, InnerLeashExtraWidth) == 928, "Offset mismatch for UJunoRoadAINavigationCluster::InnerLeashExtraWidth");
static_assert(offsetof(UJunoRoadAINavigationCluster, InnerLeashHeight) == 968, "Offset mismatch for UJunoRoadAINavigationCluster::InnerLeashHeight");
static_assert(offsetof(UJunoRoadAINavigationCluster, EnableCampTagging) == 1008, "Offset mismatch for UJunoRoadAINavigationCluster::EnableCampTagging");
static_assert(offsetof(UJunoRoadAINavigationCluster, CampTags) == 1048, "Offset mismatch for UJunoRoadAINavigationCluster::CampTags");
static_assert(offsetof(UJunoRoadAINavigationCluster, CampDistanceThreshold) == 1080, "Offset mismatch for UJunoRoadAINavigationCluster::CampDistanceThreshold");

// /Script/JunoProceduralWorld.JunoRoadAINavigationClusterRenderComponent
// Kind: Class; super: DebugDrawComponent
class UJunoRoadAINavigationClusterRenderComponent
{
public:
    std::uint8_t Pad_0000[0x278]; // 0x0000
    float MinDrawDistance; // 0x0278 (Size: 0x4, Type: FloatProperty)
    float LDMaxDrawDistance; // 0x027C (Size: 0x4, Type: FloatProperty)
    float CachedMaxDrawDistance; // 0x0280 (Size: 0x4, Type: FloatProperty)
    std::uint8_t DepthPriorityGroup; // 0x0284 (Size: 0x1, Type: ByteProperty)
    std::uint8_t ViewOwnerDepthPriorityGroup; // 0x0285 (Size: 0x1, Type: ByteProperty)
    std::uint8_t IndirectLightingCacheQuality; // 0x0286 (Size: 0x1, Type: ByteProperty)
    std::uint8_t LightmapType; // 0x0287 (Size: 0x1, Type: EnumProperty)
    std::uint8_t HLODBatchingPolicy; // 0x0288 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ShadowCacheInvalidationBehavior; // 0x0289 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bAlwaysCreatePhysicsState; // 0x028A (Size: 0x1, Type: BoolProperty)
    // 0x028A BoolProperty bEnableAutoLODGeneration (shared storage)
    // 0x028A BoolProperty bGenerateOverlapEvents (shared storage)
    // 0x028A BoolProperty bIsActorTextureStreamingBuiltData (shared storage)
    // 0x028A BoolProperty bIsValidTextureStreamingBuiltData (shared storage)
    // 0x028A BoolProperty bMultiBodyOverlap (shared storage)
    // 0x028A BoolProperty bNeverDistanceCull (shared storage)
    std::uint8_t bAllowCullDistanceVolume; // 0x028B (Size: 0x1, Type: BoolProperty)
    // 0x028B BoolProperty bReturnMaterialOnMove (shared storage)
    // 0x028B BoolProperty bTraceComplexOnMove (shared storage)
    // 0x028B BoolProperty bUseViewOwnerDepthPriorityGroup (shared storage)
    // 0x028B BoolProperty bVisibleInRayTracing (shared storage)
    // 0x028B BoolProperty bVisibleInRealTimeSkyCaptures (shared storage)
    // 0x028B BoolProperty bVisibleInReflectionCaptures (shared storage)
    // 0x028B BoolProperty bVisibleInReflections (shared storage)
    std::uint8_t bHoldout; // 0x028C (Size: 0x1, Type: BoolProperty)
    // 0x028C BoolProperty bOnlyOwnerSee (shared storage)
    // 0x028C BoolProperty bOwnerNoSee (shared storage)
    // 0x028C BoolProperty bReceivesDecals (shared storage)
    // 0x028C BoolProperty bRenderInDepthPass (shared storage)
    // 0x028C BoolProperty bRenderInMainPass (shared storage)
    // 0x028C BoolProperty bTreatAsBackgroundForOcclusion (shared storage)
    // 0x028C BoolProperty bUseAsOccluder (shared storage)
    std::uint8_t CastShadow; // 0x028D (Size: 0x1, Type: BoolProperty)
    // 0x028D BoolProperty bAffectDynamicIndirectLighting (shared storage)
    // 0x028D BoolProperty bAffectIndirectLightingWhileHidden (shared storage)
    // 0x028D BoolProperty bEmissiveLightSource (shared storage)
    // 0x028D BoolProperty bForceMipStreaming (shared storage)
    // 0x028D BoolProperty bHasPerInstanceHitProxies (shared storage)
    // 0x028D BoolProperty bSelectable (shared storage)
    // 0x028D BoolProperty bWantsEditorEffects (shared storage)
    std::uint8_t bAffectDistanceFieldLighting; // 0x028E (Size: 0x1, Type: BoolProperty)
    // 0x028E BoolProperty bCastContactShadow (shared storage)
    // 0x028E BoolProperty bCastDynamicShadow (shared storage)
    // 0x028E BoolProperty bCastFarShadow (shared storage)
    // 0x028E BoolProperty bCastInsetShadow (shared storage)
    // 0x028E BoolProperty bCastStaticShadow (shared storage)
    // 0x028E BoolProperty bCastVolumetricTranslucentShadow (shared storage)
    // 0x028E BoolProperty bSelfShadowOnly (shared storage)
    std::uint8_t bCastCinematicShadow; // 0x028F (Size: 0x1, Type: BoolProperty)
    // 0x028F BoolProperty bCastHiddenShadow (shared storage)
    // 0x028F BoolProperty bCastShadowAsTwoSided (shared storage)
    // 0x028F BoolProperty bExcludeFromLightAttachmentGroup (shared storage)
    // 0x028F BoolProperty bLightAsIfStatic (shared storage)
    // 0x028F BoolProperty bLightAttachmentsAsGroup (shared storage)
    // 0x028F BoolProperty bReceiveMobileCSMShadows (shared storage)
    // 0x028F BoolProperty bSingleSampleShadowFromStationaryLights (shared storage)
    std::uint8_t AlwaysLoadOnClient; // 0x0290 (Size: 0x1, Type: BoolProperty)
    // 0x0290 BoolProperty AlwaysLoadOnServer (shared storage)
    // 0x0290 BoolProperty bApplyImpulseOnDamage (shared storage)
    // 0x0290 BoolProperty bFillCollisionUnderneathForNavmesh (shared storage)
    // 0x0290 BoolProperty bIgnoreRadialForce (shared storage)
    // 0x0290 BoolProperty bIgnoreRadialImpulse (shared storage)
    // 0x0290 BoolProperty bRasterizeAsFilledConvexVolume (shared storage)
    // 0x0290 BoolProperty bReplicatePhysicsToAutonomousProxy (shared storage)
    std::uint8_t bHiddenInSceneCapture; // 0x0291 (Size: 0x1, Type: BoolProperty)
    // 0x0291 BoolProperty bIsBeingMovedByEditor (shared storage)
    // 0x0291 BoolProperty bLumenHeightfield (shared storage)
    // 0x0291 BoolProperty bRayTracingFarField (shared storage)
    // 0x0291 BoolProperty bRenderCustomDepth (shared storage)
    // 0x0291 BoolProperty bUseEditorCompositing (shared storage)
    // 0x0291 BoolProperty bVisibleInSceneCaptureOnly (shared storage)
    std::uint8_t FirstPersonPrimitiveType; // 0x0292 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bHasNoStreamableTextures; // 0x0293 (Size: 0x1, Type: BoolProperty)
    // 0x0293 BoolProperty bStaticWhenNotMoveable (shared storage)
    std::uint8_t bHasCustomNavigableGeometry; // 0x0294 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x1]; // 0x0295
    std::uint8_t CanCharacterStepUpOn; // 0x0296 (Size: 0x1, Type: ByteProperty)
    std::uint8_t LightingChannels[0x1]; // 0x0297 (Size: 0x1, Type: StructProperty)
    std::uint8_t RayTracingGroupCullingPriority; // 0x0298 (Size: 0x1, Type: EnumProperty)
    std::uint8_t CustomDepthStencilWriteMask; // 0x0299 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ExcludeFromHLODLevels; // 0x029A (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0002[0x1]; // 0x029B
    std::int32_t RayTracingGroupId; // 0x029C (Size: 0x4, Type: IntProperty)
    std::int32_t VisibilityId; // 0x02A0 (Size: 0x4, Type: IntProperty)
    std::int32_t CustomDepthStencilValue; // 0x02A4 (Size: 0x4, Type: IntProperty)
    std::uint8_t CustomPrimitiveData[0x10]; // 0x02A8 (Size: 0x10, Type: StructProperty)
    std::uint8_t CustomPrimitiveDataInternal[0x50]; // 0x02B8 (Size: 0x50, Type: StructProperty)
    std::int32_t TranslucencySortPriority; // 0x0308 (Size: 0x4, Type: IntProperty)
    float TranslucencySortDistanceOffset; // 0x030C (Size: 0x4, Type: FloatProperty)
    TArray<void*> RuntimeVirtualTextures; // 0x0310 (Size: 0x10, Type: ArrayProperty)
    std::int8_t VirtualTextureLodBias; // 0x0320 (Size: 0x1, Type: Int8Property)
    std::int8_t VirtualTextureCullMips; // 0x0321 (Size: 0x1, Type: Int8Property)
    std::int8_t VirtualTextureMinCoverage; // 0x0322 (Size: 0x1, Type: Int8Property)
    std::uint8_t VirtualTextureRenderPassType; // 0x0323 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x24]; // 0x0324
    float BoundsScale; // 0x0348 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0004[0x4]; // 0x034C
    TArray<void*> MoveIgnoreActors; // 0x0350 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> MoveIgnoreComponents; // 0x0360 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0005[0x10]; // 0x0370
    std::uint8_t BodyInstance[0x1A8]; // 0x0380 (Size: 0x1A8, Type: StructProperty)
    std::uint8_t OnComponentHit[0x1]; // 0x0528 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnComponentBeginOverlap[0x1]; // 0x0529 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnComponentEndOverlap[0x1]; // 0x052A (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnComponentWake[0x1]; // 0x052B (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnComponentSleep[0x2]; // 0x052C (Size: 0x2, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnComponentPhysicsStateChanged[0x1]; // 0x052E (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnBeginCursorOver[0x1]; // 0x052F (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnEndCursorOver[0x1]; // 0x0530 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnClicked[0x1]; // 0x0531 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnReleased[0x1]; // 0x0532 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchBegin[0x1]; // 0x0533 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchEnd[0x1]; // 0x0534 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchEnter[0x1]; // 0x0535 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchLeave[0x1]; // 0x0536 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnTouchBegan[0x1]; // 0x0537 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnTouchEnded[0x1]; // 0x0538 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnTouchEntered[0x1]; // 0x0539 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    FMulticastSparseDelegate OnTouchExited; // 0x053A (Size: 0x10, Type: MulticastSparseDelegateProperty)
    std::uint8_t Pad_0006[0xE]; // 0x054A
    void* LODParentPrimitive; // 0x0558 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoRoadAINavigationClusterRenderComponent, MinDrawDistance) == 632, "Offset mismatch for UJunoRoadAINavigationClusterRenderComponent::MinDrawDistance");
static_assert(offsetof(UJunoRoadAINavigationClusterRenderComponent, LDMaxDrawDistance) == 636, "Offset mismatch for UJunoRoadAINavigationClusterRenderComponent::LDMaxDrawDistance");
static_assert(offsetof(UJunoRoadAINavigationClusterRenderComponent, CachedMaxDrawDistance) == 640, "Offset mismatch for UJunoRoadAINavigationClusterRenderComponent::CachedMaxDrawDistance");
static_assert(offsetof(UJunoRoadAINavigationClusterRenderComponent, DepthPriorityGroup) == 644, "Offset mismatch for UJunoRoadAINavigationClusterRenderComponent::DepthPriorityGroup");
static_assert(offsetof(UJunoRoadAINavigationClusterRenderComponent, ViewOwnerDepthPriorityGroup) == 645, "Offset mismatch for UJunoRoadAINavigationClusterRenderComponent::ViewOwnerDepthPriorityGroup");
static_assert(offsetof(UJunoRoadAINavigationClusterRenderComponent, IndirectLightingCacheQuality) == 646, "Offset mismatch for UJunoRoadAINavigationClusterRenderComponent::IndirectLightingCacheQuality");
static_assert(offsetof(UJunoRoadAINavigationClusterRenderComponent, LightmapType) == 647, "Offset mismatch for UJunoRoadAINavigationClusterRenderComponent::LightmapType");
static_assert(offsetof(UJunoRoadAINavigationClusterRenderComponent, HLODBatchingPolicy) == 648, "Offset mismatch for UJunoRoadAINavigationClusterRenderComponent::HLODBatchingPolicy");
static_assert(offsetof(UJunoRoadAINavigationClusterRenderComponent, ShadowCacheInvalidationBehavior) == 649, "Offset mismatch for UJunoRoadAINavigationClusterRenderComponent::ShadowCacheInvalidationBehavior");
static_assert(offsetof(UJunoRoadAINavigationClusterRenderComponent, bAlwaysCreatePhysicsState) == 650, "Offset mismatch for UJunoRoadAINavigationClusterRenderComponent::bAlwaysCreatePhysicsState");
static_assert(offsetof(UJunoRoadAINavigationClusterRenderComponent, bAllowCullDistanceVolume) == 651, "Offset mismatch for UJunoRoadAINavigationClusterRenderComponent::bAllowCullDistanceVolume");
static_assert(offsetof(UJunoRoadAINavigationClusterRenderComponent, bHoldout) == 652, "Offset mismatch for UJunoRoadAINavigationClusterRenderComponent::bHoldout");
static_assert(offsetof(UJunoRoadAINavigationClusterRenderComponent, CastShadow) == 653, "Offset mismatch for UJunoRoadAINavigationClusterRenderComponent::CastShadow");
static_assert(offsetof(UJunoRoadAINavigationClusterRenderComponent, bAffectDistanceFieldLighting) == 654, "Offset mismatch for UJunoRoadAINavigationClusterRenderComponent::bAffectDistanceFieldLighting");
static_assert(offsetof(UJunoRoadAINavigationClusterRenderComponent, bCastCinematicShadow) == 655, "Offset mismatch for UJunoRoadAINavigationClusterRenderComponent::bCastCinematicShadow");
static_assert(offsetof(UJunoRoadAINavigationClusterRenderComponent, AlwaysLoadOnClient) == 656, "Offset mismatch for UJunoRoadAINavigationClusterRenderComponent::AlwaysLoadOnClient");
static_assert(offsetof(UJunoRoadAINavigationClusterRenderComponent, bHiddenInSceneCapture) == 657, "Offset mismatch for UJunoRoadAINavigationClusterRenderComponent::bHiddenInSceneCapture");
static_assert(offsetof(UJunoRoadAINavigationClusterRenderComponent, FirstPersonPrimitiveType) == 658, "Offset mismatch for UJunoRoadAINavigationClusterRenderComponent::FirstPersonPrimitiveType");
static_assert(offsetof(UJunoRoadAINavigationClusterRenderComponent, bHasNoStreamableTextures) == 659, "Offset mismatch for UJunoRoadAINavigationClusterRenderComponent::bHasNoStreamableTextures");
static_assert(offsetof(UJunoRoadAINavigationClusterRenderComponent, bHasCustomNavigableGeometry) == 660, "Offset mismatch for UJunoRoadAINavigationClusterRenderComponent::bHasCustomNavigableGeometry");
static_assert(offsetof(UJunoRoadAINavigationClusterRenderComponent, CanCharacterStepUpOn) == 662, "Offset mismatch for UJunoRoadAINavigationClusterRenderComponent::CanCharacterStepUpOn");
static_assert(offsetof(UJunoRoadAINavigationClusterRenderComponent, LightingChannels) == 663, "Offset mismatch for UJunoRoadAINavigationClusterRenderComponent::LightingChannels");
static_assert(offsetof(UJunoRoadAINavigationClusterRenderComponent, RayTracingGroupCullingPriority) == 664, "Offset mismatch for UJunoRoadAINavigationClusterRenderComponent::RayTracingGroupCullingPriority");
static_assert(offsetof(UJunoRoadAINavigationClusterRenderComponent, CustomDepthStencilWriteMask) == 665, "Offset mismatch for UJunoRoadAINavigationClusterRenderComponent::CustomDepthStencilWriteMask");
static_assert(offsetof(UJunoRoadAINavigationClusterRenderComponent, ExcludeFromHLODLevels) == 666, "Offset mismatch for UJunoRoadAINavigationClusterRenderComponent::ExcludeFromHLODLevels");
static_assert(offsetof(UJunoRoadAINavigationClusterRenderComponent, RayTracingGroupId) == 668, "Offset mismatch for UJunoRoadAINavigationClusterRenderComponent::RayTracingGroupId");
static_assert(offsetof(UJunoRoadAINavigationClusterRenderComponent, VisibilityId) == 672, "Offset mismatch for UJunoRoadAINavigationClusterRenderComponent::VisibilityId");
static_assert(offsetof(UJunoRoadAINavigationClusterRenderComponent, CustomDepthStencilValue) == 676, "Offset mismatch for UJunoRoadAINavigationClusterRenderComponent::CustomDepthStencilValue");
static_assert(offsetof(UJunoRoadAINavigationClusterRenderComponent, CustomPrimitiveData) == 680, "Offset mismatch for UJunoRoadAINavigationClusterRenderComponent::CustomPrimitiveData");
static_assert(offsetof(UJunoRoadAINavigationClusterRenderComponent, CustomPrimitiveDataInternal) == 696, "Offset mismatch for UJunoRoadAINavigationClusterRenderComponent::CustomPrimitiveDataInternal");
static_assert(offsetof(UJunoRoadAINavigationClusterRenderComponent, TranslucencySortPriority) == 776, "Offset mismatch for UJunoRoadAINavigationClusterRenderComponent::TranslucencySortPriority");
static_assert(offsetof(UJunoRoadAINavigationClusterRenderComponent, TranslucencySortDistanceOffset) == 780, "Offset mismatch for UJunoRoadAINavigationClusterRenderComponent::TranslucencySortDistanceOffset");
static_assert(offsetof(UJunoRoadAINavigationClusterRenderComponent, RuntimeVirtualTextures) == 784, "Offset mismatch for UJunoRoadAINavigationClusterRenderComponent::RuntimeVirtualTextures");
static_assert(offsetof(UJunoRoadAINavigationClusterRenderComponent, VirtualTextureLodBias) == 800, "Offset mismatch for UJunoRoadAINavigationClusterRenderComponent::VirtualTextureLodBias");
static_assert(offsetof(UJunoRoadAINavigationClusterRenderComponent, VirtualTextureCullMips) == 801, "Offset mismatch for UJunoRoadAINavigationClusterRenderComponent::VirtualTextureCullMips");
static_assert(offsetof(UJunoRoadAINavigationClusterRenderComponent, VirtualTextureMinCoverage) == 802, "Offset mismatch for UJunoRoadAINavigationClusterRenderComponent::VirtualTextureMinCoverage");
static_assert(offsetof(UJunoRoadAINavigationClusterRenderComponent, VirtualTextureRenderPassType) == 803, "Offset mismatch for UJunoRoadAINavigationClusterRenderComponent::VirtualTextureRenderPassType");
static_assert(offsetof(UJunoRoadAINavigationClusterRenderComponent, BoundsScale) == 840, "Offset mismatch for UJunoRoadAINavigationClusterRenderComponent::BoundsScale");
static_assert(offsetof(UJunoRoadAINavigationClusterRenderComponent, MoveIgnoreActors) == 848, "Offset mismatch for UJunoRoadAINavigationClusterRenderComponent::MoveIgnoreActors");
static_assert(offsetof(UJunoRoadAINavigationClusterRenderComponent, MoveIgnoreComponents) == 864, "Offset mismatch for UJunoRoadAINavigationClusterRenderComponent::MoveIgnoreComponents");
static_assert(offsetof(UJunoRoadAINavigationClusterRenderComponent, BodyInstance) == 896, "Offset mismatch for UJunoRoadAINavigationClusterRenderComponent::BodyInstance");
static_assert(offsetof(UJunoRoadAINavigationClusterRenderComponent, OnComponentHit) == 1320, "Offset mismatch for UJunoRoadAINavigationClusterRenderComponent::OnComponentHit");
static_assert(offsetof(UJunoRoadAINavigationClusterRenderComponent, OnComponentBeginOverlap) == 1321, "Offset mismatch for UJunoRoadAINavigationClusterRenderComponent::OnComponentBeginOverlap");
static_assert(offsetof(UJunoRoadAINavigationClusterRenderComponent, OnComponentEndOverlap) == 1322, "Offset mismatch for UJunoRoadAINavigationClusterRenderComponent::OnComponentEndOverlap");
static_assert(offsetof(UJunoRoadAINavigationClusterRenderComponent, OnComponentWake) == 1323, "Offset mismatch for UJunoRoadAINavigationClusterRenderComponent::OnComponentWake");
static_assert(offsetof(UJunoRoadAINavigationClusterRenderComponent, OnComponentSleep) == 1324, "Offset mismatch for UJunoRoadAINavigationClusterRenderComponent::OnComponentSleep");
static_assert(offsetof(UJunoRoadAINavigationClusterRenderComponent, OnComponentPhysicsStateChanged) == 1326, "Offset mismatch for UJunoRoadAINavigationClusterRenderComponent::OnComponentPhysicsStateChanged");
static_assert(offsetof(UJunoRoadAINavigationClusterRenderComponent, OnBeginCursorOver) == 1327, "Offset mismatch for UJunoRoadAINavigationClusterRenderComponent::OnBeginCursorOver");
static_assert(offsetof(UJunoRoadAINavigationClusterRenderComponent, OnEndCursorOver) == 1328, "Offset mismatch for UJunoRoadAINavigationClusterRenderComponent::OnEndCursorOver");
static_assert(offsetof(UJunoRoadAINavigationClusterRenderComponent, OnClicked) == 1329, "Offset mismatch for UJunoRoadAINavigationClusterRenderComponent::OnClicked");
static_assert(offsetof(UJunoRoadAINavigationClusterRenderComponent, OnReleased) == 1330, "Offset mismatch for UJunoRoadAINavigationClusterRenderComponent::OnReleased");
static_assert(offsetof(UJunoRoadAINavigationClusterRenderComponent, OnInputTouchBegin) == 1331, "Offset mismatch for UJunoRoadAINavigationClusterRenderComponent::OnInputTouchBegin");
static_assert(offsetof(UJunoRoadAINavigationClusterRenderComponent, OnInputTouchEnd) == 1332, "Offset mismatch for UJunoRoadAINavigationClusterRenderComponent::OnInputTouchEnd");
static_assert(offsetof(UJunoRoadAINavigationClusterRenderComponent, OnInputTouchEnter) == 1333, "Offset mismatch for UJunoRoadAINavigationClusterRenderComponent::OnInputTouchEnter");
static_assert(offsetof(UJunoRoadAINavigationClusterRenderComponent, OnInputTouchLeave) == 1334, "Offset mismatch for UJunoRoadAINavigationClusterRenderComponent::OnInputTouchLeave");
static_assert(offsetof(UJunoRoadAINavigationClusterRenderComponent, OnTouchBegan) == 1335, "Offset mismatch for UJunoRoadAINavigationClusterRenderComponent::OnTouchBegan");
static_assert(offsetof(UJunoRoadAINavigationClusterRenderComponent, OnTouchEnded) == 1336, "Offset mismatch for UJunoRoadAINavigationClusterRenderComponent::OnTouchEnded");
static_assert(offsetof(UJunoRoadAINavigationClusterRenderComponent, OnTouchEntered) == 1337, "Offset mismatch for UJunoRoadAINavigationClusterRenderComponent::OnTouchEntered");
static_assert(offsetof(UJunoRoadAINavigationClusterRenderComponent, OnTouchExited) == 1338, "Offset mismatch for UJunoRoadAINavigationClusterRenderComponent::OnTouchExited");
static_assert(offsetof(UJunoRoadAINavigationClusterRenderComponent, LODParentPrimitive) == 1368, "Offset mismatch for UJunoRoadAINavigationClusterRenderComponent::LODParentPrimitive");

// /Script/JunoProceduralWorld.JunoRoadLivingWorldRuntimePointProviderComponent
// Kind: Class; super: FortAthenaLivingWorldRuntimePointProviderComponent
class UJunoRoadLivingWorldRuntimePointProviderComponent
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    std::uint8_t bUseSpawnLimitFromPatrol; // 0x00D0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00D1
    std::uint8_t SpawnLimiter[0x68]; // 0x00D8 (Size: 0x68, Type: StructProperty)
    std::uint8_t bUseTagsFromPatrol; // 0x0140 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0141
    std::uint8_t Tags[0x1]; // 0x0148 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoRoadLivingWorldRuntimePointProviderComponent, bUseSpawnLimitFromPatrol) == 208, "Offset mismatch for UJunoRoadLivingWorldRuntimePointProviderComponent::bUseSpawnLimitFromPatrol");
static_assert(offsetof(UJunoRoadLivingWorldRuntimePointProviderComponent, SpawnLimiter) == 216, "Offset mismatch for UJunoRoadLivingWorldRuntimePointProviderComponent::SpawnLimiter");
static_assert(offsetof(UJunoRoadLivingWorldRuntimePointProviderComponent, bUseTagsFromPatrol) == 320, "Offset mismatch for UJunoRoadLivingWorldRuntimePointProviderComponent::bUseTagsFromPatrol");
static_assert(offsetof(UJunoRoadLivingWorldRuntimePointProviderComponent, Tags) == 328, "Offset mismatch for UJunoRoadLivingWorldRuntimePointProviderComponent::Tags");

// /Script/JunoProceduralWorld.JunoServerInstancedActorSpawnerSubsystem
// Kind: Class; super: ServerInstancedActorsSpawnerSubsystem
class UJunoServerInstancedActorSpawnerSubsystem
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    void* TransientActorBeingSpawned; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t TransientActorSpawningInstance[0x1]; // 0x00D0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoServerInstancedActorSpawnerSubsystem, TransientActorBeingSpawned) == 200, "Offset mismatch for UJunoServerInstancedActorSpawnerSubsystem::TransientActorBeingSpawned");
static_assert(offsetof(UJunoServerInstancedActorSpawnerSubsystem, TransientActorSpawningInstance) == 208, "Offset mismatch for UJunoServerInstancedActorSpawnerSubsystem::TransientActorSpawningInstance");

// /Script/JunoProceduralWorld.JunoStaticMeshPoolActor
// Kind: Class; super: Actor
class UJunoStaticMeshPoolActor
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t PrimaryActorTick[0x30]; // 0x0028 (Size: 0x30, Type: StructProperty)
    std::uint8_t bAlwaysRelevant; // 0x0058 (Size: 0x1, Type: BoolProperty)
    // 0x0058 BoolProperty bCallPreReplication (shared storage)
    // 0x0058 BoolProperty bCallPreReplicationForReplay (shared storage)
    // 0x0058 BoolProperty bHidden (shared storage)
    // 0x0058 BoolProperty bNetTemporary (shared storage)
    // 0x0058 BoolProperty bOnlyRelevantToOwner (shared storage)
    // 0x0058 BoolProperty bReplicateMovement (shared storage)
    std::uint8_t bExchangedRoles; // 0x0059 (Size: 0x1, Type: BoolProperty)
    // 0x0059 BoolProperty bForceNetAddressable (shared storage)
    // 0x0059 BoolProperty bNetLoadOnClient (shared storage)
    // 0x0059 BoolProperty bNetUseOwnerRelevancy (shared storage)
    // 0x0059 BoolProperty bRelevantForLevelBounds (shared storage)
    // 0x0059 BoolProperty bRelevantForNetworkReplays (shared storage)
    // 0x0059 BoolProperty bReplayRewindable (shared storage)
    // 0x0059 BoolProperty bTearOff (shared storage)
    std::uint8_t bAllowTickBeforeBeginPlay; // 0x005A (Size: 0x1, Type: BoolProperty)
    // 0x005A BoolProperty bAutoDestroyWhenFinished (shared storage)
    // 0x005A BoolProperty bBlockInput (shared storage)
    // 0x005A BoolProperty bCanBeDamaged (shared storage)
    // 0x005A BoolProperty bCollideWhenPlacing (shared storage)
    // 0x005A BoolProperty bFindCameraComponentWhenViewTarget (shared storage)
    // 0x005A BoolProperty bGenerateOverlapEventsDuringLevelStreaming (shared storage)
    // 0x005A BoolProperty bIgnoresOriginShifting (shared storage)
    std::uint8_t bAllowReceiveTickEventOnDedicatedServer; // 0x005B (Size: 0x1, Type: BoolProperty)
    // 0x005B BoolProperty bCanBeInCluster (shared storage)
    // 0x005B BoolProperty bEnableAutoLODGeneration (shared storage)
    // 0x005B BoolProperty bIsEditorOnlyActor (shared storage)
    // 0x005B BoolProperty bReplicateUsingRegisteredSubObjectList (shared storage)
    // 0x005B BoolProperty bReplicates (shared storage)
    std::uint8_t Pad_0001[0x1]; // 0x005C
    std::uint8_t bActorEnableCollision; // 0x005D (Size: 0x1, Type: BoolProperty)
    // 0x005D BoolProperty bActorIsBeingDestroyed (shared storage)
    // 0x005D BoolProperty bAsyncPhysicsTickEnabled (shared storage)
    std::uint8_t UpdateOverlapsMethodDuringLevelStreaming; // 0x005E (Size: 0x1, Type: EnumProperty)
    std::uint8_t DefaultUpdateOverlapsMethodDuringLevelStreaming; // 0x005F (Size: 0x1, Type: EnumProperty)
    std::uint8_t RemoteRole; // 0x0060 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0061
    float InitialLifeSpan; // 0x0064 (Size: 0x4, Type: FloatProperty)
    float CustomTimeDilation; // 0x0068 (Size: 0x4, Type: FloatProperty)
    std::int32_t RayTracingGroupId; // 0x006C (Size: 0x4, Type: IntProperty)
    std::uint8_t AttachmentReplication[0x60]; // 0x0070 (Size: 0x60, Type: StructProperty)
    std::uint8_t ReplicatedMovement[0x88]; // 0x00D0 (Size: 0x88, Type: StructProperty)
    void* Owner; // 0x0158 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t NetDriverName[0x4]; // 0x0160 (Size: 0x4, Type: NameProperty)
    std::uint8_t Role; // 0x0164 (Size: 0x1, Type: ByteProperty)
    std::uint8_t NetDormancy; // 0x0165 (Size: 0x1, Type: ByteProperty)
    std::uint8_t SpawnCollisionHandlingMethod; // 0x0166 (Size: 0x1, Type: EnumProperty)
    std::uint8_t AutoReceiveInput; // 0x0167 (Size: 0x1, Type: ByteProperty)
    std::int32_t InputPriority; // 0x0168 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0003[0x4]; // 0x016C
    void* InputComponent; // 0x0170 (Size: 0x8, Type: ObjectProperty)
    std::int32_t NetTag; // 0x0178 (Size: 0x4, Type: IntProperty)
    float NetCullDistanceSquared; // 0x017C (Size: 0x4, Type: FloatProperty)
    float NetUpdateFrequency; // 0x0180 (Size: 0x4, Type: FloatProperty)
    float MinNetUpdateFrequency; // 0x0184 (Size: 0x4, Type: FloatProperty)
    float NetPriority; // 0x0188 (Size: 0x4, Type: FloatProperty)
    std::uint8_t PhysicsReplicationMode; // 0x018C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0004[0xB]; // 0x018D
    void* Instigator; // 0x0198 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Children; // 0x01A0 (Size: 0x10, Type: ArrayProperty)
    void* RootComponent; // 0x01B0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0005[0x8]; // 0x01B8
    void* HLODLayer; // 0x01C0 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Layers; // 0x01C8 (Size: 0x10, Type: ArrayProperty)
    TWeakObjectPtr<void> ParentComponent; // 0x01D8 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0006[0x10]; // 0x01E0
    TArray<void*> Tags; // 0x01F0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t OnTakeAnyDamage[0x1]; // 0x0200 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnTakePointDamage[0x1]; // 0x0201 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnTakeRadialDamage[0x1]; // 0x0202 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnActorBeginOverlap[0x1]; // 0x0203 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnActorEndOverlap[0x1]; // 0x0204 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnBeginCursorOver[0x1]; // 0x0205 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnEndCursorOver[0x1]; // 0x0206 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnClicked[0x1]; // 0x0207 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnReleased[0x1]; // 0x0208 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchBegin[0x1]; // 0x0209 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchEnd[0x1]; // 0x020A (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchEnter[0x1]; // 0x020B (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchLeave[0x1]; // 0x020C (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnActorHit[0x1]; // 0x020D (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnDestroyed[0x1]; // 0x020E (Size: 0x1, Type: MulticastSparseDelegateProperty)
    FMulticastSparseDelegate OnEndPlay; // 0x020F (Size: 0x10, Type: MulticastSparseDelegateProperty)
    std::uint8_t Pad_0007[0x31]; // 0x021F
    TArray<void*> InstanceComponents; // 0x0250 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> BlueprintCreatedComponents; // 0x0260 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UJunoStaticMeshPoolActor, PrimaryActorTick) == 40, "Offset mismatch for UJunoStaticMeshPoolActor::PrimaryActorTick");
static_assert(offsetof(UJunoStaticMeshPoolActor, bAlwaysRelevant) == 88, "Offset mismatch for UJunoStaticMeshPoolActor::bAlwaysRelevant");
static_assert(offsetof(UJunoStaticMeshPoolActor, bExchangedRoles) == 89, "Offset mismatch for UJunoStaticMeshPoolActor::bExchangedRoles");
static_assert(offsetof(UJunoStaticMeshPoolActor, bAllowTickBeforeBeginPlay) == 90, "Offset mismatch for UJunoStaticMeshPoolActor::bAllowTickBeforeBeginPlay");
static_assert(offsetof(UJunoStaticMeshPoolActor, bAllowReceiveTickEventOnDedicatedServer) == 91, "Offset mismatch for UJunoStaticMeshPoolActor::bAllowReceiveTickEventOnDedicatedServer");
static_assert(offsetof(UJunoStaticMeshPoolActor, bActorEnableCollision) == 93, "Offset mismatch for UJunoStaticMeshPoolActor::bActorEnableCollision");
static_assert(offsetof(UJunoStaticMeshPoolActor, UpdateOverlapsMethodDuringLevelStreaming) == 94, "Offset mismatch for UJunoStaticMeshPoolActor::UpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(UJunoStaticMeshPoolActor, DefaultUpdateOverlapsMethodDuringLevelStreaming) == 95, "Offset mismatch for UJunoStaticMeshPoolActor::DefaultUpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(UJunoStaticMeshPoolActor, RemoteRole) == 96, "Offset mismatch for UJunoStaticMeshPoolActor::RemoteRole");
static_assert(offsetof(UJunoStaticMeshPoolActor, InitialLifeSpan) == 100, "Offset mismatch for UJunoStaticMeshPoolActor::InitialLifeSpan");
static_assert(offsetof(UJunoStaticMeshPoolActor, CustomTimeDilation) == 104, "Offset mismatch for UJunoStaticMeshPoolActor::CustomTimeDilation");
static_assert(offsetof(UJunoStaticMeshPoolActor, RayTracingGroupId) == 108, "Offset mismatch for UJunoStaticMeshPoolActor::RayTracingGroupId");
static_assert(offsetof(UJunoStaticMeshPoolActor, AttachmentReplication) == 112, "Offset mismatch for UJunoStaticMeshPoolActor::AttachmentReplication");
static_assert(offsetof(UJunoStaticMeshPoolActor, ReplicatedMovement) == 208, "Offset mismatch for UJunoStaticMeshPoolActor::ReplicatedMovement");
static_assert(offsetof(UJunoStaticMeshPoolActor, Owner) == 344, "Offset mismatch for UJunoStaticMeshPoolActor::Owner");
static_assert(offsetof(UJunoStaticMeshPoolActor, NetDriverName) == 352, "Offset mismatch for UJunoStaticMeshPoolActor::NetDriverName");
static_assert(offsetof(UJunoStaticMeshPoolActor, Role) == 356, "Offset mismatch for UJunoStaticMeshPoolActor::Role");
static_assert(offsetof(UJunoStaticMeshPoolActor, NetDormancy) == 357, "Offset mismatch for UJunoStaticMeshPoolActor::NetDormancy");
static_assert(offsetof(UJunoStaticMeshPoolActor, SpawnCollisionHandlingMethod) == 358, "Offset mismatch for UJunoStaticMeshPoolActor::SpawnCollisionHandlingMethod");
static_assert(offsetof(UJunoStaticMeshPoolActor, AutoReceiveInput) == 359, "Offset mismatch for UJunoStaticMeshPoolActor::AutoReceiveInput");
static_assert(offsetof(UJunoStaticMeshPoolActor, InputPriority) == 360, "Offset mismatch for UJunoStaticMeshPoolActor::InputPriority");
static_assert(offsetof(UJunoStaticMeshPoolActor, InputComponent) == 368, "Offset mismatch for UJunoStaticMeshPoolActor::InputComponent");
static_assert(offsetof(UJunoStaticMeshPoolActor, NetTag) == 376, "Offset mismatch for UJunoStaticMeshPoolActor::NetTag");
static_assert(offsetof(UJunoStaticMeshPoolActor, NetCullDistanceSquared) == 380, "Offset mismatch for UJunoStaticMeshPoolActor::NetCullDistanceSquared");
static_assert(offsetof(UJunoStaticMeshPoolActor, NetUpdateFrequency) == 384, "Offset mismatch for UJunoStaticMeshPoolActor::NetUpdateFrequency");
static_assert(offsetof(UJunoStaticMeshPoolActor, MinNetUpdateFrequency) == 388, "Offset mismatch for UJunoStaticMeshPoolActor::MinNetUpdateFrequency");
static_assert(offsetof(UJunoStaticMeshPoolActor, NetPriority) == 392, "Offset mismatch for UJunoStaticMeshPoolActor::NetPriority");
static_assert(offsetof(UJunoStaticMeshPoolActor, PhysicsReplicationMode) == 396, "Offset mismatch for UJunoStaticMeshPoolActor::PhysicsReplicationMode");
static_assert(offsetof(UJunoStaticMeshPoolActor, Instigator) == 408, "Offset mismatch for UJunoStaticMeshPoolActor::Instigator");
static_assert(offsetof(UJunoStaticMeshPoolActor, Children) == 416, "Offset mismatch for UJunoStaticMeshPoolActor::Children");
static_assert(offsetof(UJunoStaticMeshPoolActor, RootComponent) == 432, "Offset mismatch for UJunoStaticMeshPoolActor::RootComponent");
static_assert(offsetof(UJunoStaticMeshPoolActor, HLODLayer) == 448, "Offset mismatch for UJunoStaticMeshPoolActor::HLODLayer");
static_assert(offsetof(UJunoStaticMeshPoolActor, Layers) == 456, "Offset mismatch for UJunoStaticMeshPoolActor::Layers");
static_assert(offsetof(UJunoStaticMeshPoolActor, ParentComponent) == 472, "Offset mismatch for UJunoStaticMeshPoolActor::ParentComponent");
static_assert(offsetof(UJunoStaticMeshPoolActor, Tags) == 496, "Offset mismatch for UJunoStaticMeshPoolActor::Tags");
static_assert(offsetof(UJunoStaticMeshPoolActor, OnTakeAnyDamage) == 512, "Offset mismatch for UJunoStaticMeshPoolActor::OnTakeAnyDamage");
static_assert(offsetof(UJunoStaticMeshPoolActor, OnTakePointDamage) == 513, "Offset mismatch for UJunoStaticMeshPoolActor::OnTakePointDamage");
static_assert(offsetof(UJunoStaticMeshPoolActor, OnTakeRadialDamage) == 514, "Offset mismatch for UJunoStaticMeshPoolActor::OnTakeRadialDamage");
static_assert(offsetof(UJunoStaticMeshPoolActor, OnActorBeginOverlap) == 515, "Offset mismatch for UJunoStaticMeshPoolActor::OnActorBeginOverlap");
static_assert(offsetof(UJunoStaticMeshPoolActor, OnActorEndOverlap) == 516, "Offset mismatch for UJunoStaticMeshPoolActor::OnActorEndOverlap");
static_assert(offsetof(UJunoStaticMeshPoolActor, OnBeginCursorOver) == 517, "Offset mismatch for UJunoStaticMeshPoolActor::OnBeginCursorOver");
static_assert(offsetof(UJunoStaticMeshPoolActor, OnEndCursorOver) == 518, "Offset mismatch for UJunoStaticMeshPoolActor::OnEndCursorOver");
static_assert(offsetof(UJunoStaticMeshPoolActor, OnClicked) == 519, "Offset mismatch for UJunoStaticMeshPoolActor::OnClicked");
static_assert(offsetof(UJunoStaticMeshPoolActor, OnReleased) == 520, "Offset mismatch for UJunoStaticMeshPoolActor::OnReleased");
static_assert(offsetof(UJunoStaticMeshPoolActor, OnInputTouchBegin) == 521, "Offset mismatch for UJunoStaticMeshPoolActor::OnInputTouchBegin");
static_assert(offsetof(UJunoStaticMeshPoolActor, OnInputTouchEnd) == 522, "Offset mismatch for UJunoStaticMeshPoolActor::OnInputTouchEnd");
static_assert(offsetof(UJunoStaticMeshPoolActor, OnInputTouchEnter) == 523, "Offset mismatch for UJunoStaticMeshPoolActor::OnInputTouchEnter");
static_assert(offsetof(UJunoStaticMeshPoolActor, OnInputTouchLeave) == 524, "Offset mismatch for UJunoStaticMeshPoolActor::OnInputTouchLeave");
static_assert(offsetof(UJunoStaticMeshPoolActor, OnActorHit) == 525, "Offset mismatch for UJunoStaticMeshPoolActor::OnActorHit");
static_assert(offsetof(UJunoStaticMeshPoolActor, OnDestroyed) == 526, "Offset mismatch for UJunoStaticMeshPoolActor::OnDestroyed");
static_assert(offsetof(UJunoStaticMeshPoolActor, OnEndPlay) == 527, "Offset mismatch for UJunoStaticMeshPoolActor::OnEndPlay");
static_assert(offsetof(UJunoStaticMeshPoolActor, InstanceComponents) == 592, "Offset mismatch for UJunoStaticMeshPoolActor::InstanceComponents");
static_assert(offsetof(UJunoStaticMeshPoolActor, BlueprintCreatedComponents) == 608, "Offset mismatch for UJunoStaticMeshPoolActor::BlueprintCreatedComponents");

// /Script/JunoProceduralWorld.JunoStaticMeshPoolSubsystem
// Kind: Class; super: WorldSubsystem
class UJunoStaticMeshPoolSubsystem
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* StaticMeshPoolActor; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoStaticMeshPoolSubsystem, StaticMeshPoolActor) == 56, "Offset mismatch for UJunoStaticMeshPoolSubsystem::StaticMeshPoolActor");

// /Script/JunoProceduralWorld.JunoStreamingGameplayVolume
// Kind: Class; super: GameplayVolume
class UJunoStreamingGameplayVolume
{
public:
    std::uint8_t Pad_0000[0x358]; // 0x0000
    std::uint8_t SavedActorGuid[0x10]; // 0x0358 (Size: 0x10, Type: StructProperty)
    std::uint8_t bSpawnedByLevelSaveRecord; // 0x0368 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0369
    std::uint8_t BoundsExtent[0x18]; // 0x0370 (Size: 0x18, Type: StructProperty)
    std::uint8_t BoundsOffset[0x20]; // 0x0388 (Size: 0x20, Type: StructProperty)
    std::uint8_t bReceiveOnActorPersistentDataReadyNotification; // 0x03A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x17]; // 0x03A9
    std::uint8_t bDeleteFromPersistenceDataRequest; // 0x03C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x17]; // 0x03C1
    TArray<void*> LevelsToLoad; // 0x03D8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UJunoStreamingGameplayVolume, SavedActorGuid) == 856, "Offset mismatch for UJunoStreamingGameplayVolume::SavedActorGuid");
static_assert(offsetof(UJunoStreamingGameplayVolume, bSpawnedByLevelSaveRecord) == 872, "Offset mismatch for UJunoStreamingGameplayVolume::bSpawnedByLevelSaveRecord");
static_assert(offsetof(UJunoStreamingGameplayVolume, BoundsExtent) == 880, "Offset mismatch for UJunoStreamingGameplayVolume::BoundsExtent");
static_assert(offsetof(UJunoStreamingGameplayVolume, BoundsOffset) == 904, "Offset mismatch for UJunoStreamingGameplayVolume::BoundsOffset");
static_assert(offsetof(UJunoStreamingGameplayVolume, bReceiveOnActorPersistentDataReadyNotification) == 936, "Offset mismatch for UJunoStreamingGameplayVolume::bReceiveOnActorPersistentDataReadyNotification");
static_assert(offsetof(UJunoStreamingGameplayVolume, bDeleteFromPersistenceDataRequest) == 960, "Offset mismatch for UJunoStreamingGameplayVolume::bDeleteFromPersistenceDataRequest");
static_assert(offsetof(UJunoStreamingGameplayVolume, LevelsToLoad) == 984, "Offset mismatch for UJunoStreamingGameplayVolume::LevelsToLoad");

// /Script/JunoProceduralWorld.JunoStreamingGameplayVolumeDebugger
// Kind: Class; super: TickableWorldSubsystem
class UJunoStreamingGameplayVolumeDebugger
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoProceduralWorld.JunoStreamingPlayspace
// Kind: Class; super: JunoPersistentPlayspace
class UJunoStreamingPlayspace
{
public:
    std::uint8_t Pad_0000[0x6B8]; // 0x0000
    TArray<void*> RequiredPersistenceFeatureDataClassesNative; // 0x06B8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x8]; // 0x06C8
    void* PersistenceComponent; // 0x06D0 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> RequiredPersistenceFeatureDataClasses; // 0x06D8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t SpatialLoadingState; // 0x06E8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x06E9
    std::uint8_t PersistenceMainLevelUniquePackageName[0x4]; // 0x06EC (Size: 0x4, Type: NameProperty)
    TWeakObjectPtr<void> PersistenceMainLevelWeakPtr; // 0x06F0 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> JunoPersistentPlayspaceSaveHandler; // 0x06F8 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UJunoStreamingPlayspace, RequiredPersistenceFeatureDataClassesNative) == 1720, "Offset mismatch for UJunoStreamingPlayspace::RequiredPersistenceFeatureDataClassesNative");
static_assert(offsetof(UJunoStreamingPlayspace, PersistenceComponent) == 1744, "Offset mismatch for UJunoStreamingPlayspace::PersistenceComponent");
static_assert(offsetof(UJunoStreamingPlayspace, RequiredPersistenceFeatureDataClasses) == 1752, "Offset mismatch for UJunoStreamingPlayspace::RequiredPersistenceFeatureDataClasses");
static_assert(offsetof(UJunoStreamingPlayspace, SpatialLoadingState) == 1768, "Offset mismatch for UJunoStreamingPlayspace::SpatialLoadingState");
static_assert(offsetof(UJunoStreamingPlayspace, PersistenceMainLevelUniquePackageName) == 1772, "Offset mismatch for UJunoStreamingPlayspace::PersistenceMainLevelUniquePackageName");
static_assert(offsetof(UJunoStreamingPlayspace, PersistenceMainLevelWeakPtr) == 1776, "Offset mismatch for UJunoStreamingPlayspace::PersistenceMainLevelWeakPtr");
static_assert(offsetof(UJunoStreamingPlayspace, JunoPersistentPlayspaceSaveHandler) == 1784, "Offset mismatch for UJunoStreamingPlayspace::JunoPersistentPlayspaceSaveHandler");

// /Script/JunoProceduralWorld.JunoSurfaceTargetTeleporterComponent
// Kind: Class; super: GameFrameworkComponent
class UJunoSurfaceTargetTeleporterComponent
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t PrimaryComponentTick[0x30]; // 0x0038 (Size: 0x30, Type: StructProperty)
    TArray<void*> ComponentTags; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AssetUserData; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0088
    std::int32_t UCSSerializationIndex; // 0x0090 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0094
    std::uint8_t bNetAddressable; // 0x0098 (Size: 0x1, Type: BoolProperty)
    // 0x0098 BoolProperty bReplicateUsingRegisteredSubObjectList (shared storage)
    // 0x0098 BoolProperty bReplicates (shared storage)
    std::uint8_t Pad_0003[0x1]; // 0x0099
    std::uint8_t bAutoActivate; // 0x009A (Size: 0x1, Type: BoolProperty)
    // 0x009A BoolProperty bCanEverAffectNavigation (shared storage)
    // 0x009A BoolProperty bEditableWhenInherited (shared storage)
    // 0x009A BoolProperty bIsActive (shared storage)
    std::uint8_t bIsEditorOnly; // 0x009B (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x1D]; // 0x009C
    std::uint8_t CreationMethod; // 0x00B9 (Size: 0x1, Type: EnumProperty)
    std::uint8_t OnComponentActivated[0x1]; // 0x00BA (Size: 0x1, Type: MulticastSparseDelegateProperty)
    FMulticastSparseDelegate OnComponentDeactivated; // 0x00BB (Size: 0x10, Type: MulticastSparseDelegateProperty)
};

static_assert(offsetof(UJunoSurfaceTargetTeleporterComponent, PrimaryComponentTick) == 56, "Offset mismatch for UJunoSurfaceTargetTeleporterComponent::PrimaryComponentTick");
static_assert(offsetof(UJunoSurfaceTargetTeleporterComponent, ComponentTags) == 104, "Offset mismatch for UJunoSurfaceTargetTeleporterComponent::ComponentTags");
static_assert(offsetof(UJunoSurfaceTargetTeleporterComponent, AssetUserData) == 120, "Offset mismatch for UJunoSurfaceTargetTeleporterComponent::AssetUserData");
static_assert(offsetof(UJunoSurfaceTargetTeleporterComponent, UCSSerializationIndex) == 144, "Offset mismatch for UJunoSurfaceTargetTeleporterComponent::UCSSerializationIndex");
static_assert(offsetof(UJunoSurfaceTargetTeleporterComponent, bNetAddressable) == 152, "Offset mismatch for UJunoSurfaceTargetTeleporterComponent::bNetAddressable");
static_assert(offsetof(UJunoSurfaceTargetTeleporterComponent, bAutoActivate) == 154, "Offset mismatch for UJunoSurfaceTargetTeleporterComponent::bAutoActivate");
static_assert(offsetof(UJunoSurfaceTargetTeleporterComponent, bIsEditorOnly) == 155, "Offset mismatch for UJunoSurfaceTargetTeleporterComponent::bIsEditorOnly");
static_assert(offsetof(UJunoSurfaceTargetTeleporterComponent, CreationMethod) == 185, "Offset mismatch for UJunoSurfaceTargetTeleporterComponent::CreationMethod");
static_assert(offsetof(UJunoSurfaceTargetTeleporterComponent, OnComponentActivated) == 186, "Offset mismatch for UJunoSurfaceTargetTeleporterComponent::OnComponentActivated");
static_assert(offsetof(UJunoSurfaceTargetTeleporterComponent, OnComponentDeactivated) == 187, "Offset mismatch for UJunoSurfaceTargetTeleporterComponent::OnComponentDeactivated");

// /Script/JunoProceduralWorld.JunoTerrainCachedComponentData
// Kind: Class; super: FortRuntimeLandscapeCachedComponentData
class UJunoTerrainCachedComponentData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TMap<void*, void*> PrecachedData; // 0x0028 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UJunoTerrainCachedComponentData, PrecachedData) == 40, "Offset mismatch for UJunoTerrainCachedComponentData::PrecachedData");

// /Script/JunoProceduralWorld.JunoTerrainGenerationCommandlet
// Kind: Class; super: Commandlet
class UJunoTerrainGenerationCommandlet
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FString HelpDescription; // 0x0028 (Size: 0x10, Type: StrProperty)
    FString HelpUsage; // 0x0038 (Size: 0x10, Type: StrProperty)
    FString HelpWebLink; // 0x0048 (Size: 0x10, Type: StrProperty)
    TArray<void*> HelpParamNames; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> HelpParamDescriptions; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t FastExit; // 0x0078 (Size: 0x1, Type: BoolProperty)
    // 0x0078 BoolProperty IsClient (shared storage)
    // 0x0078 BoolProperty IsEditor (shared storage)
    // 0x0078 BoolProperty IsServer (shared storage)
    // 0x0078 BoolProperty LogToConsole (shared storage)
    // 0x0078 BoolProperty ShowErrorCount (shared storage)
    // 0x0078 BoolProperty ShowProgress (shared storage)
    // 0x0078 BoolProperty UseCommandletResultAsExitCode (shared storage)
};

static_assert(offsetof(UJunoTerrainGenerationCommandlet, HelpDescription) == 40, "Offset mismatch for UJunoTerrainGenerationCommandlet::HelpDescription");
static_assert(offsetof(UJunoTerrainGenerationCommandlet, HelpUsage) == 56, "Offset mismatch for UJunoTerrainGenerationCommandlet::HelpUsage");
static_assert(offsetof(UJunoTerrainGenerationCommandlet, HelpWebLink) == 72, "Offset mismatch for UJunoTerrainGenerationCommandlet::HelpWebLink");
static_assert(offsetof(UJunoTerrainGenerationCommandlet, HelpParamNames) == 88, "Offset mismatch for UJunoTerrainGenerationCommandlet::HelpParamNames");
static_assert(offsetof(UJunoTerrainGenerationCommandlet, HelpParamDescriptions) == 104, "Offset mismatch for UJunoTerrainGenerationCommandlet::HelpParamDescriptions");
static_assert(offsetof(UJunoTerrainGenerationCommandlet, FastExit) == 120, "Offset mismatch for UJunoTerrainGenerationCommandlet::FastExit");

// /Script/JunoProceduralWorld.JunoTerrainGenerationSystem
// Kind: Class; super: TickableWorldSubsystem
class UJunoTerrainGenerationSystem
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t TrackedLandscapes[0x10]; // 0x0068 (Size: 0x10, Type: SetProperty)
    std::uint8_t TrackedLandscapeComponents[0x10]; // 0x0078 (Size: 0x10, Type: SetProperty)
    void* RuntimeLandscapeSubsystem; // 0x0088 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0090
    void* TileTrackingSubsystem; // 0x0098 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0xA0]; // 0x00A0
    std::uint8_t VisualsConfiguration[0x70]; // 0x0140 (Size: 0x70, Type: StructProperty)
    std::uint8_t ModificationsConfiguration[0x70]; // 0x01B0 (Size: 0x70, Type: StructProperty)
    std::uint8_t HeightmapConfiguration[0x70]; // 0x0220 (Size: 0x70, Type: StructProperty)
    std::uint8_t GrassConfiguration[0x70]; // 0x0290 (Size: 0x70, Type: StructProperty)
    std::uint8_t CollisionConfiguration[0x70]; // 0x0300 (Size: 0x70, Type: StructProperty)
    std::uint8_t WeightmapConfiguration[0x70]; // 0x0370 (Size: 0x70, Type: StructProperty)
    std::uint8_t WaterConfiguration[0x80]; // 0x03E0 (Size: 0x80, Type: StructProperty)
    TArray<void*> WeightmapsToGather; // 0x0460 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bEnablePhysicsAndGrassStripping; // 0x0470 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x7]; // 0x0471
    TArray<void*> ExcludePhysicsAndGrassStrippingPlatforms; // 0x0478 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bEnablePCGCacheStripping; // 0x0488 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x7]; // 0x0489
    TArray<void*> ExcludePCGCacheStrippingPlatforms; // 0x0490 (Size: 0x10, Type: ArrayProperty)
    void* WaterNavigationMaterial; // 0x04A0 (Size: 0x8, Type: ObjectProperty)
    void* WaterIdentificationMaterial; // 0x04A8 (Size: 0x8, Type: ObjectProperty)
    void* WaterIdentificationMaterialDynamic; // 0x04B0 (Size: 0x8, Type: ObjectProperty)
    void* WaterNavigationMaterialDynamic; // 0x04B8 (Size: 0x8, Type: ObjectProperty)
    void* RiverIdentificationMaterial; // 0x04C0 (Size: 0x8, Type: ObjectProperty)
    void* LakeIdentificationMaterial; // 0x04C8 (Size: 0x8, Type: ObjectProperty)
    void* WaterBodyIdentificationTexture; // 0x04D0 (Size: 0x8, Type: ObjectProperty)
    void* WaterIdentificationFinal; // 0x04D8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoTerrainGenerationSystem, TrackedLandscapes) == 104, "Offset mismatch for UJunoTerrainGenerationSystem::TrackedLandscapes");
static_assert(offsetof(UJunoTerrainGenerationSystem, TrackedLandscapeComponents) == 120, "Offset mismatch for UJunoTerrainGenerationSystem::TrackedLandscapeComponents");
static_assert(offsetof(UJunoTerrainGenerationSystem, RuntimeLandscapeSubsystem) == 136, "Offset mismatch for UJunoTerrainGenerationSystem::RuntimeLandscapeSubsystem");
static_assert(offsetof(UJunoTerrainGenerationSystem, TileTrackingSubsystem) == 152, "Offset mismatch for UJunoTerrainGenerationSystem::TileTrackingSubsystem");
static_assert(offsetof(UJunoTerrainGenerationSystem, VisualsConfiguration) == 320, "Offset mismatch for UJunoTerrainGenerationSystem::VisualsConfiguration");
static_assert(offsetof(UJunoTerrainGenerationSystem, ModificationsConfiguration) == 432, "Offset mismatch for UJunoTerrainGenerationSystem::ModificationsConfiguration");
static_assert(offsetof(UJunoTerrainGenerationSystem, HeightmapConfiguration) == 544, "Offset mismatch for UJunoTerrainGenerationSystem::HeightmapConfiguration");
static_assert(offsetof(UJunoTerrainGenerationSystem, GrassConfiguration) == 656, "Offset mismatch for UJunoTerrainGenerationSystem::GrassConfiguration");
static_assert(offsetof(UJunoTerrainGenerationSystem, CollisionConfiguration) == 768, "Offset mismatch for UJunoTerrainGenerationSystem::CollisionConfiguration");
static_assert(offsetof(UJunoTerrainGenerationSystem, WeightmapConfiguration) == 880, "Offset mismatch for UJunoTerrainGenerationSystem::WeightmapConfiguration");
static_assert(offsetof(UJunoTerrainGenerationSystem, WaterConfiguration) == 992, "Offset mismatch for UJunoTerrainGenerationSystem::WaterConfiguration");
static_assert(offsetof(UJunoTerrainGenerationSystem, WeightmapsToGather) == 1120, "Offset mismatch for UJunoTerrainGenerationSystem::WeightmapsToGather");
static_assert(offsetof(UJunoTerrainGenerationSystem, bEnablePhysicsAndGrassStripping) == 1136, "Offset mismatch for UJunoTerrainGenerationSystem::bEnablePhysicsAndGrassStripping");
static_assert(offsetof(UJunoTerrainGenerationSystem, ExcludePhysicsAndGrassStrippingPlatforms) == 1144, "Offset mismatch for UJunoTerrainGenerationSystem::ExcludePhysicsAndGrassStrippingPlatforms");
static_assert(offsetof(UJunoTerrainGenerationSystem, bEnablePCGCacheStripping) == 1160, "Offset mismatch for UJunoTerrainGenerationSystem::bEnablePCGCacheStripping");
static_assert(offsetof(UJunoTerrainGenerationSystem, ExcludePCGCacheStrippingPlatforms) == 1168, "Offset mismatch for UJunoTerrainGenerationSystem::ExcludePCGCacheStrippingPlatforms");
static_assert(offsetof(UJunoTerrainGenerationSystem, WaterNavigationMaterial) == 1184, "Offset mismatch for UJunoTerrainGenerationSystem::WaterNavigationMaterial");
static_assert(offsetof(UJunoTerrainGenerationSystem, WaterIdentificationMaterial) == 1192, "Offset mismatch for UJunoTerrainGenerationSystem::WaterIdentificationMaterial");
static_assert(offsetof(UJunoTerrainGenerationSystem, WaterIdentificationMaterialDynamic) == 1200, "Offset mismatch for UJunoTerrainGenerationSystem::WaterIdentificationMaterialDynamic");
static_assert(offsetof(UJunoTerrainGenerationSystem, WaterNavigationMaterialDynamic) == 1208, "Offset mismatch for UJunoTerrainGenerationSystem::WaterNavigationMaterialDynamic");
static_assert(offsetof(UJunoTerrainGenerationSystem, RiverIdentificationMaterial) == 1216, "Offset mismatch for UJunoTerrainGenerationSystem::RiverIdentificationMaterial");
static_assert(offsetof(UJunoTerrainGenerationSystem, LakeIdentificationMaterial) == 1224, "Offset mismatch for UJunoTerrainGenerationSystem::LakeIdentificationMaterial");
static_assert(offsetof(UJunoTerrainGenerationSystem, WaterBodyIdentificationTexture) == 1232, "Offset mismatch for UJunoTerrainGenerationSystem::WaterBodyIdentificationTexture");
static_assert(offsetof(UJunoTerrainGenerationSystem, WaterIdentificationFinal) == 1240, "Offset mismatch for UJunoTerrainGenerationSystem::WaterIdentificationFinal");

// /Script/JunoProceduralWorld.JunoTerrainMaterialCollector
// Kind: Class; super: FortRuntimeLandscapeExternalMaterialsCollector
class UJunoTerrainMaterialCollector
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoProceduralWorld.JunoTerrainSystemAssets
// Kind: Class; super: PrimaryDataAsset
class UJunoTerrainSystemAssets
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* WaterNavigationMaterial; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    void* WaterIdentificationMaterial; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    void* RiverIdentificationMaterial; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    void* LakeIdentificationMaterial; // 0x0040 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoTerrainSystemAssets, WaterNavigationMaterial) == 40, "Offset mismatch for UJunoTerrainSystemAssets::WaterNavigationMaterial");
static_assert(offsetof(UJunoTerrainSystemAssets, WaterIdentificationMaterial) == 48, "Offset mismatch for UJunoTerrainSystemAssets::WaterIdentificationMaterial");
static_assert(offsetof(UJunoTerrainSystemAssets, RiverIdentificationMaterial) == 56, "Offset mismatch for UJunoTerrainSystemAssets::RiverIdentificationMaterial");
static_assert(offsetof(UJunoTerrainSystemAssets, LakeIdentificationMaterial) == 64, "Offset mismatch for UJunoTerrainSystemAssets::LakeIdentificationMaterial");

// /Script/JunoProceduralWorld.JunoTestPOIMarker
// Kind: Class; super: Actor
class UJunoTestPOIMarker
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    float DebugBoxSize; // 0x0270 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UJunoTestPOIMarker, DebugBoxSize) == 624, "Offset mismatch for UJunoTestPOIMarker::DebugBoxSize");

// /Script/JunoProceduralWorld.JunoTileGenerationUGCRequest
// Kind: Class; super: Object
class UJunoTileGenerationUGCRequest
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoProceduralWorld.JunoTileGenerationUGCRequest_AllTiles
// Kind: Class; super: JunoTileGenerationUGCRequest
class UJunoTileGenerationUGCRequest_AllTiles
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoProceduralWorld.JunoTileGridPersistenceFeatureData
// Kind: Class; super: JunoBasePFWPersistenceFeatureData
class UJunoTileGridPersistenceFeatureData
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    TMap<void*, void*> Tiles; // 0x0058 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> SaveIDToTiles; // 0x0068 (Size: 0x10, Type: MapProperty)
    std::uint8_t TileSaveData[0x1]; // 0x0078 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoTileGridPersistenceFeatureData, Tiles) == 88, "Offset mismatch for UJunoTileGridPersistenceFeatureData::Tiles");
static_assert(offsetof(UJunoTileGridPersistenceFeatureData, SaveIDToTiles) == 104, "Offset mismatch for UJunoTileGridPersistenceFeatureData::SaveIDToTiles");
static_assert(offsetof(UJunoTileGridPersistenceFeatureData, TileSaveData) == 120, "Offset mismatch for UJunoTileGridPersistenceFeatureData::TileSaveData");

// /Script/JunoProceduralWorld.JunoTileGridPersistenceFeatureData_Container
// Kind: Class; super: JunoBasePFWPersistenceFeatureDataContainer
class UJunoTileGridPersistenceFeatureData_Container
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t GameplayTagContainer[0x20]; // 0x0028 (Size: 0x20, Type: StructProperty)
    std::uint8_t RestoreVersionInfo[0x10]; // 0x0048 (Size: 0x10, Type: StructProperty)
    std::uint8_t SupportedVersionsTable[0x20]; // 0x0058 (Size: 0x20, Type: StructProperty)
    std::uint64_t RestoreAttemptCount; // 0x0078 (Size: 0x8, Type: UInt64Property)
    std::uint64_t SaveAttemptCount; // 0x0080 (Size: 0x8, Type: UInt64Property)
    std::uint64_t DeleteAttemptCount; // 0x0088 (Size: 0x8, Type: UInt64Property)
    void* ServiceData; // 0x0090 (Size: 0x8, Type: ObjectProperty)
    void* BackendRequestsQueue; // 0x0098 (Size: 0x8, Type: ObjectProperty)
    FName PersistentClassName; // 0x00A0 (Size: 0x8, Type: NameProperty)
    std::uint8_t PersistentName[0x30]; // 0x00A8 (Size: 0x30, Type: StructProperty)
    FString Description; // 0x00D8 (Size: 0x10, Type: StrProperty)
    void* MakeReadyForPersistenceProcess; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bMakeReadyForPersistenceProcessFailedOnLastAttempt; // 0x00F0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00F1
    void* DeinitProcess; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoTileGridPersistenceFeatureData_Container, GameplayTagContainer) == 40, "Offset mismatch for UJunoTileGridPersistenceFeatureData_Container::GameplayTagContainer");
static_assert(offsetof(UJunoTileGridPersistenceFeatureData_Container, RestoreVersionInfo) == 72, "Offset mismatch for UJunoTileGridPersistenceFeatureData_Container::RestoreVersionInfo");
static_assert(offsetof(UJunoTileGridPersistenceFeatureData_Container, SupportedVersionsTable) == 88, "Offset mismatch for UJunoTileGridPersistenceFeatureData_Container::SupportedVersionsTable");
static_assert(offsetof(UJunoTileGridPersistenceFeatureData_Container, RestoreAttemptCount) == 120, "Offset mismatch for UJunoTileGridPersistenceFeatureData_Container::RestoreAttemptCount");
static_assert(offsetof(UJunoTileGridPersistenceFeatureData_Container, SaveAttemptCount) == 128, "Offset mismatch for UJunoTileGridPersistenceFeatureData_Container::SaveAttemptCount");
static_assert(offsetof(UJunoTileGridPersistenceFeatureData_Container, DeleteAttemptCount) == 136, "Offset mismatch for UJunoTileGridPersistenceFeatureData_Container::DeleteAttemptCount");
static_assert(offsetof(UJunoTileGridPersistenceFeatureData_Container, ServiceData) == 144, "Offset mismatch for UJunoTileGridPersistenceFeatureData_Container::ServiceData");
static_assert(offsetof(UJunoTileGridPersistenceFeatureData_Container, BackendRequestsQueue) == 152, "Offset mismatch for UJunoTileGridPersistenceFeatureData_Container::BackendRequestsQueue");
static_assert(offsetof(UJunoTileGridPersistenceFeatureData_Container, PersistentClassName) == 160, "Offset mismatch for UJunoTileGridPersistenceFeatureData_Container::PersistentClassName");
static_assert(offsetof(UJunoTileGridPersistenceFeatureData_Container, PersistentName) == 168, "Offset mismatch for UJunoTileGridPersistenceFeatureData_Container::PersistentName");
static_assert(offsetof(UJunoTileGridPersistenceFeatureData_Container, Description) == 216, "Offset mismatch for UJunoTileGridPersistenceFeatureData_Container::Description");
static_assert(offsetof(UJunoTileGridPersistenceFeatureData_Container, MakeReadyForPersistenceProcess) == 232, "Offset mismatch for UJunoTileGridPersistenceFeatureData_Container::MakeReadyForPersistenceProcess");
static_assert(offsetof(UJunoTileGridPersistenceFeatureData_Container, bMakeReadyForPersistenceProcessFailedOnLastAttempt) == 240, "Offset mismatch for UJunoTileGridPersistenceFeatureData_Container::bMakeReadyForPersistenceProcessFailedOnLastAttempt");
static_assert(offsetof(UJunoTileGridPersistenceFeatureData_Container, DeinitProcess) == 248, "Offset mismatch for UJunoTileGridPersistenceFeatureData_Container::DeinitProcess");

// /Script/JunoProceduralWorld.JunoTileGridPersistenceFeatureModule
// Kind: Class; super: PersistenceFrameworkModule
class UJunoTileGridPersistenceFeatureModule
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t GameplayTagContainer[0x20]; // 0x0028 (Size: 0x20, Type: StructProperty)
    TMap<void*, void*> Containers; // 0x0048 (Size: 0x10, Type: MapProperty)
    void* ServiceData; // 0x0058 (Size: 0x8, Type: ObjectProperty)
    FString PersistentName; // 0x0060 (Size: 0x10, Type: StrProperty)
    void* MakeReadyForPersistenceProcess; // 0x0070 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bMakeReadyForPersistenceProcessFailedOnLastAttempt; // 0x0078 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0079
    void* DeinitProcess; // 0x0080 (Size: 0x8, Type: ObjectProperty)
    FString Description; // 0x0088 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UJunoTileGridPersistenceFeatureModule, GameplayTagContainer) == 40, "Offset mismatch for UJunoTileGridPersistenceFeatureModule::GameplayTagContainer");
static_assert(offsetof(UJunoTileGridPersistenceFeatureModule, Containers) == 72, "Offset mismatch for UJunoTileGridPersistenceFeatureModule::Containers");
static_assert(offsetof(UJunoTileGridPersistenceFeatureModule, ServiceData) == 88, "Offset mismatch for UJunoTileGridPersistenceFeatureModule::ServiceData");
static_assert(offsetof(UJunoTileGridPersistenceFeatureModule, PersistentName) == 96, "Offset mismatch for UJunoTileGridPersistenceFeatureModule::PersistentName");
static_assert(offsetof(UJunoTileGridPersistenceFeatureModule, MakeReadyForPersistenceProcess) == 112, "Offset mismatch for UJunoTileGridPersistenceFeatureModule::MakeReadyForPersistenceProcess");
static_assert(offsetof(UJunoTileGridPersistenceFeatureModule, bMakeReadyForPersistenceProcessFailedOnLastAttempt) == 120, "Offset mismatch for UJunoTileGridPersistenceFeatureModule::bMakeReadyForPersistenceProcessFailedOnLastAttempt");
static_assert(offsetof(UJunoTileGridPersistenceFeatureModule, DeinitProcess) == 128, "Offset mismatch for UJunoTileGridPersistenceFeatureModule::DeinitProcess");
static_assert(offsetof(UJunoTileGridPersistenceFeatureModule, Description) == 136, "Offset mismatch for UJunoTileGridPersistenceFeatureModule::Description");

// /Script/JunoProceduralWorld.JunoTilePOIStreamingComponent
// Kind: Class; super: GameFrameworkComponent
class UJunoTilePOIStreamingComponent
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t PrimaryComponentTick[0x30]; // 0x0038 (Size: 0x30, Type: StructProperty)
    TArray<void*> ComponentTags; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AssetUserData; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0088
    std::int32_t UCSSerializationIndex; // 0x0090 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0094
    std::uint8_t bNetAddressable; // 0x0098 (Size: 0x1, Type: BoolProperty)
    // 0x0098 BoolProperty bReplicateUsingRegisteredSubObjectList (shared storage)
    // 0x0098 BoolProperty bReplicates (shared storage)
    std::uint8_t Pad_0003[0x1]; // 0x0099
    std::uint8_t bAutoActivate; // 0x009A (Size: 0x1, Type: BoolProperty)
    // 0x009A BoolProperty bCanEverAffectNavigation (shared storage)
    // 0x009A BoolProperty bEditableWhenInherited (shared storage)
    // 0x009A BoolProperty bIsActive (shared storage)
    std::uint8_t bIsEditorOnly; // 0x009B (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x1D]; // 0x009C
    std::uint8_t CreationMethod; // 0x00B9 (Size: 0x1, Type: EnumProperty)
    std::uint8_t OnComponentActivated[0x1]; // 0x00BA (Size: 0x1, Type: MulticastSparseDelegateProperty)
    FMulticastSparseDelegate OnComponentDeactivated; // 0x00BB (Size: 0x10, Type: MulticastSparseDelegateProperty)
};

static_assert(offsetof(UJunoTilePOIStreamingComponent, PrimaryComponentTick) == 56, "Offset mismatch for UJunoTilePOIStreamingComponent::PrimaryComponentTick");
static_assert(offsetof(UJunoTilePOIStreamingComponent, ComponentTags) == 104, "Offset mismatch for UJunoTilePOIStreamingComponent::ComponentTags");
static_assert(offsetof(UJunoTilePOIStreamingComponent, AssetUserData) == 120, "Offset mismatch for UJunoTilePOIStreamingComponent::AssetUserData");
static_assert(offsetof(UJunoTilePOIStreamingComponent, UCSSerializationIndex) == 144, "Offset mismatch for UJunoTilePOIStreamingComponent::UCSSerializationIndex");
static_assert(offsetof(UJunoTilePOIStreamingComponent, bNetAddressable) == 152, "Offset mismatch for UJunoTilePOIStreamingComponent::bNetAddressable");
static_assert(offsetof(UJunoTilePOIStreamingComponent, bAutoActivate) == 154, "Offset mismatch for UJunoTilePOIStreamingComponent::bAutoActivate");
static_assert(offsetof(UJunoTilePOIStreamingComponent, bIsEditorOnly) == 155, "Offset mismatch for UJunoTilePOIStreamingComponent::bIsEditorOnly");
static_assert(offsetof(UJunoTilePOIStreamingComponent, CreationMethod) == 185, "Offset mismatch for UJunoTilePOIStreamingComponent::CreationMethod");
static_assert(offsetof(UJunoTilePOIStreamingComponent, OnComponentActivated) == 186, "Offset mismatch for UJunoTilePOIStreamingComponent::OnComponentActivated");
static_assert(offsetof(UJunoTilePOIStreamingComponent, OnComponentDeactivated) == 187, "Offset mismatch for UJunoTilePOIStreamingComponent::OnComponentDeactivated");

// /Script/JunoProceduralWorld.JunoTileSubsystem
// Kind: Class; super: WorldSubsystem
class UJunoTileSubsystem
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    void* TileGridPersistenceFeatureHelper; // 0x0078 (Size: 0x8, Type: ObjectProperty)
    TMap<void*, void*> OutOfBoundsActors; // 0x0080 (Size: 0x10, Type: MapProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0090
    void* WorldTileGenerator; // 0x0098 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoTileSubsystem, TileGridPersistenceFeatureHelper) == 120, "Offset mismatch for UJunoTileSubsystem::TileGridPersistenceFeatureHelper");
static_assert(offsetof(UJunoTileSubsystem, OutOfBoundsActors) == 128, "Offset mismatch for UJunoTileSubsystem::OutOfBoundsActors");
static_assert(offsetof(UJunoTileSubsystem, WorldTileGenerator) == 152, "Offset mismatch for UJunoTileSubsystem::WorldTileGenerator");

// /Script/JunoProceduralWorld.JunoTileTrackingSubsystem
// Kind: Class; super: WorldSubsystem
class UJunoTileTrackingSubsystem
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoProceduralWorld.JunoTilesetSubsystem
// Kind: Class; super: EngineSubsystem
class UJunoTilesetSubsystem
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoProceduralWorld.JunoTransitionCaveEntranceTeleporterComponent
// Kind: Class; super: GameFrameworkComponent
class UJunoTransitionCaveEntranceTeleporterComponent
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    TArray<void*> AdditionalPOIs; // 0x00C8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t TransitionId[0x4]; // 0x00D8 (Size: 0x4, Type: NameProperty)
    FName PreselectorLayerName; // 0x00DC (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UJunoTransitionCaveEntranceTeleporterComponent, AdditionalPOIs) == 200, "Offset mismatch for UJunoTransitionCaveEntranceTeleporterComponent::AdditionalPOIs");
static_assert(offsetof(UJunoTransitionCaveEntranceTeleporterComponent, TransitionId) == 216, "Offset mismatch for UJunoTransitionCaveEntranceTeleporterComponent::TransitionId");
static_assert(offsetof(UJunoTransitionCaveEntranceTeleporterComponent, PreselectorLayerName) == 220, "Offset mismatch for UJunoTransitionCaveEntranceTeleporterComponent::PreselectorLayerName");

// /Script/JunoProceduralWorld.JunoTransitionCaveExitTeleporterComponent
// Kind: Class; super: GameFrameworkComponent
class UJunoTransitionCaveExitTeleporterComponent
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    TArray<void*> AdditionalPOIs; // 0x00C8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t TransitionId[0x4]; // 0x00D8 (Size: 0x4, Type: NameProperty)
    FName PreselectorLayerName; // 0x00DC (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UJunoTransitionCaveExitTeleporterComponent, AdditionalPOIs) == 200, "Offset mismatch for UJunoTransitionCaveExitTeleporterComponent::AdditionalPOIs");
static_assert(offsetof(UJunoTransitionCaveExitTeleporterComponent, TransitionId) == 216, "Offset mismatch for UJunoTransitionCaveExitTeleporterComponent::TransitionId");
static_assert(offsetof(UJunoTransitionCaveExitTeleporterComponent, PreselectorLayerName) == 220, "Offset mismatch for UJunoTransitionCaveExitTeleporterComponent::PreselectorLayerName");

// /Script/JunoProceduralWorld.JunoWaterSplineInjector
// Kind: Class; super: ActorComponent
class UJunoWaterSplineInjector
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t PrimaryComponentTick[0x30]; // 0x0038 (Size: 0x30, Type: StructProperty)
    TArray<void*> ComponentTags; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AssetUserData; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0088
    std::int32_t UCSSerializationIndex; // 0x0090 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0094
    std::uint8_t bNetAddressable; // 0x0098 (Size: 0x1, Type: BoolProperty)
    // 0x0098 BoolProperty bReplicateUsingRegisteredSubObjectList (shared storage)
    // 0x0098 BoolProperty bReplicates (shared storage)
    std::uint8_t Pad_0003[0x1]; // 0x0099
    std::uint8_t bAutoActivate; // 0x009A (Size: 0x1, Type: BoolProperty)
    // 0x009A BoolProperty bCanEverAffectNavigation (shared storage)
    // 0x009A BoolProperty bEditableWhenInherited (shared storage)
    // 0x009A BoolProperty bIsActive (shared storage)
    std::uint8_t bIsEditorOnly; // 0x009B (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x1D]; // 0x009C
    std::uint8_t CreationMethod; // 0x00B9 (Size: 0x1, Type: EnumProperty)
    std::uint8_t OnComponentActivated[0x1]; // 0x00BA (Size: 0x1, Type: MulticastSparseDelegateProperty)
    FMulticastSparseDelegate OnComponentDeactivated; // 0x00BB (Size: 0x10, Type: MulticastSparseDelegateProperty)
};

static_assert(offsetof(UJunoWaterSplineInjector, PrimaryComponentTick) == 56, "Offset mismatch for UJunoWaterSplineInjector::PrimaryComponentTick");
static_assert(offsetof(UJunoWaterSplineInjector, ComponentTags) == 104, "Offset mismatch for UJunoWaterSplineInjector::ComponentTags");
static_assert(offsetof(UJunoWaterSplineInjector, AssetUserData) == 120, "Offset mismatch for UJunoWaterSplineInjector::AssetUserData");
static_assert(offsetof(UJunoWaterSplineInjector, UCSSerializationIndex) == 144, "Offset mismatch for UJunoWaterSplineInjector::UCSSerializationIndex");
static_assert(offsetof(UJunoWaterSplineInjector, bNetAddressable) == 152, "Offset mismatch for UJunoWaterSplineInjector::bNetAddressable");
static_assert(offsetof(UJunoWaterSplineInjector, bAutoActivate) == 154, "Offset mismatch for UJunoWaterSplineInjector::bAutoActivate");
static_assert(offsetof(UJunoWaterSplineInjector, bIsEditorOnly) == 155, "Offset mismatch for UJunoWaterSplineInjector::bIsEditorOnly");
static_assert(offsetof(UJunoWaterSplineInjector, CreationMethod) == 185, "Offset mismatch for UJunoWaterSplineInjector::CreationMethod");
static_assert(offsetof(UJunoWaterSplineInjector, OnComponentActivated) == 186, "Offset mismatch for UJunoWaterSplineInjector::OnComponentActivated");
static_assert(offsetof(UJunoWaterSplineInjector, OnComponentDeactivated) == 187, "Offset mismatch for UJunoWaterSplineInjector::OnComponentDeactivated");

// /Script/JunoProceduralWorld.JunoWorldEventStartTileChooser
// Kind: Class; super: Object
class UJunoWorldEventStartTileChooser
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoProceduralWorld.JunoWorldEventTileLayout
// Kind: Class; super: Object
class UJunoWorldEventTileLayout
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoProceduralWorld.JunoWorldLocalEnvironmentComponent
// Kind: Class; super: GameFrameworkComponent
class UJunoWorldLocalEnvironmentComponent
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    std::uint8_t LocalBiome[0xD0]; // 0x00C8 (Size: 0xD0, Type: StructProperty)
    std::uint8_t ServerBiome[0xD0]; // 0x0198 (Size: 0xD0, Type: StructProperty)
    TArray<void*> WaterDirectionInformation; // 0x0268 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t LookDirectionWaterInformation[0x50]; // 0x0278 (Size: 0x50, Type: StructProperty)
    std::uint8_t bShouldUpdateWaterLocation; // 0x02C8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x02C9
    TWeakObjectPtr<void> WorldTile; // 0x02CC (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0002[0x4]; // 0x02D4
    FMulticastInlineDelegate OnJunoEnvironmentChanged; // 0x02D8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0003[0x88]; // 0x02E8
    std::uint8_t CaveGUID[0x10]; // 0x0370 (Size: 0x10, Type: StructProperty)
    TWeakObjectPtr<void> WeakRegistryManager; // 0x0380 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> CachedController; // 0x0388 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UJunoWorldLocalEnvironmentComponent, LocalBiome) == 200, "Offset mismatch for UJunoWorldLocalEnvironmentComponent::LocalBiome");
static_assert(offsetof(UJunoWorldLocalEnvironmentComponent, ServerBiome) == 408, "Offset mismatch for UJunoWorldLocalEnvironmentComponent::ServerBiome");
static_assert(offsetof(UJunoWorldLocalEnvironmentComponent, WaterDirectionInformation) == 616, "Offset mismatch for UJunoWorldLocalEnvironmentComponent::WaterDirectionInformation");
static_assert(offsetof(UJunoWorldLocalEnvironmentComponent, LookDirectionWaterInformation) == 632, "Offset mismatch for UJunoWorldLocalEnvironmentComponent::LookDirectionWaterInformation");
static_assert(offsetof(UJunoWorldLocalEnvironmentComponent, bShouldUpdateWaterLocation) == 712, "Offset mismatch for UJunoWorldLocalEnvironmentComponent::bShouldUpdateWaterLocation");
static_assert(offsetof(UJunoWorldLocalEnvironmentComponent, WorldTile) == 716, "Offset mismatch for UJunoWorldLocalEnvironmentComponent::WorldTile");
static_assert(offsetof(UJunoWorldLocalEnvironmentComponent, OnJunoEnvironmentChanged) == 728, "Offset mismatch for UJunoWorldLocalEnvironmentComponent::OnJunoEnvironmentChanged");
static_assert(offsetof(UJunoWorldLocalEnvironmentComponent, CaveGUID) == 880, "Offset mismatch for UJunoWorldLocalEnvironmentComponent::CaveGUID");
static_assert(offsetof(UJunoWorldLocalEnvironmentComponent, WeakRegistryManager) == 896, "Offset mismatch for UJunoWorldLocalEnvironmentComponent::WeakRegistryManager");
static_assert(offsetof(UJunoWorldLocalEnvironmentComponent, CachedController) == 904, "Offset mismatch for UJunoWorldLocalEnvironmentComponent::CachedController");

// /Script/JunoProceduralWorld.JunoWorldMutationSubsystem
// Kind: Class; super: WorldSubsystem
class UJunoWorldMutationSubsystem
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* WorldMutationsPersistenceFeatureHelper; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoWorldMutationSubsystem, WorldMutationsPersistenceFeatureHelper) == 56, "Offset mismatch for UJunoWorldMutationSubsystem::WorldMutationsPersistenceFeatureHelper");

// /Script/JunoProceduralWorld.JunoWorldMutationsPersistenceFeatureData
// Kind: Class; super: JunoBasePFWPersistenceFeatureData
class UJunoWorldMutationsPersistenceFeatureData
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    std::uint8_t SaveData[0x1]; // 0x0058 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoWorldMutationsPersistenceFeatureData, SaveData) == 88, "Offset mismatch for UJunoWorldMutationsPersistenceFeatureData::SaveData");

// /Script/JunoProceduralWorld.JunoWorldMutationsPersistenceFeatureData_Container
// Kind: Class; super: JunoBasePFWPersistenceFeatureDataContainer
class UJunoWorldMutationsPersistenceFeatureData_Container
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t GameplayTagContainer[0x20]; // 0x0028 (Size: 0x20, Type: StructProperty)
    std::uint8_t RestoreVersionInfo[0x10]; // 0x0048 (Size: 0x10, Type: StructProperty)
    std::uint8_t SupportedVersionsTable[0x20]; // 0x0058 (Size: 0x20, Type: StructProperty)
    std::uint64_t RestoreAttemptCount; // 0x0078 (Size: 0x8, Type: UInt64Property)
    std::uint64_t SaveAttemptCount; // 0x0080 (Size: 0x8, Type: UInt64Property)
    std::uint64_t DeleteAttemptCount; // 0x0088 (Size: 0x8, Type: UInt64Property)
    void* ServiceData; // 0x0090 (Size: 0x8, Type: ObjectProperty)
    void* BackendRequestsQueue; // 0x0098 (Size: 0x8, Type: ObjectProperty)
    FName PersistentClassName; // 0x00A0 (Size: 0x8, Type: NameProperty)
    std::uint8_t PersistentName[0x30]; // 0x00A8 (Size: 0x30, Type: StructProperty)
    FString Description; // 0x00D8 (Size: 0x10, Type: StrProperty)
    void* MakeReadyForPersistenceProcess; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bMakeReadyForPersistenceProcessFailedOnLastAttempt; // 0x00F0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00F1
    void* DeinitProcess; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoWorldMutationsPersistenceFeatureData_Container, GameplayTagContainer) == 40, "Offset mismatch for UJunoWorldMutationsPersistenceFeatureData_Container::GameplayTagContainer");
static_assert(offsetof(UJunoWorldMutationsPersistenceFeatureData_Container, RestoreVersionInfo) == 72, "Offset mismatch for UJunoWorldMutationsPersistenceFeatureData_Container::RestoreVersionInfo");
static_assert(offsetof(UJunoWorldMutationsPersistenceFeatureData_Container, SupportedVersionsTable) == 88, "Offset mismatch for UJunoWorldMutationsPersistenceFeatureData_Container::SupportedVersionsTable");
static_assert(offsetof(UJunoWorldMutationsPersistenceFeatureData_Container, RestoreAttemptCount) == 120, "Offset mismatch for UJunoWorldMutationsPersistenceFeatureData_Container::RestoreAttemptCount");
static_assert(offsetof(UJunoWorldMutationsPersistenceFeatureData_Container, SaveAttemptCount) == 128, "Offset mismatch for UJunoWorldMutationsPersistenceFeatureData_Container::SaveAttemptCount");
static_assert(offsetof(UJunoWorldMutationsPersistenceFeatureData_Container, DeleteAttemptCount) == 136, "Offset mismatch for UJunoWorldMutationsPersistenceFeatureData_Container::DeleteAttemptCount");
static_assert(offsetof(UJunoWorldMutationsPersistenceFeatureData_Container, ServiceData) == 144, "Offset mismatch for UJunoWorldMutationsPersistenceFeatureData_Container::ServiceData");
static_assert(offsetof(UJunoWorldMutationsPersistenceFeatureData_Container, BackendRequestsQueue) == 152, "Offset mismatch for UJunoWorldMutationsPersistenceFeatureData_Container::BackendRequestsQueue");
static_assert(offsetof(UJunoWorldMutationsPersistenceFeatureData_Container, PersistentClassName) == 160, "Offset mismatch for UJunoWorldMutationsPersistenceFeatureData_Container::PersistentClassName");
static_assert(offsetof(UJunoWorldMutationsPersistenceFeatureData_Container, PersistentName) == 168, "Offset mismatch for UJunoWorldMutationsPersistenceFeatureData_Container::PersistentName");
static_assert(offsetof(UJunoWorldMutationsPersistenceFeatureData_Container, Description) == 216, "Offset mismatch for UJunoWorldMutationsPersistenceFeatureData_Container::Description");
static_assert(offsetof(UJunoWorldMutationsPersistenceFeatureData_Container, MakeReadyForPersistenceProcess) == 232, "Offset mismatch for UJunoWorldMutationsPersistenceFeatureData_Container::MakeReadyForPersistenceProcess");
static_assert(offsetof(UJunoWorldMutationsPersistenceFeatureData_Container, bMakeReadyForPersistenceProcessFailedOnLastAttempt) == 240, "Offset mismatch for UJunoWorldMutationsPersistenceFeatureData_Container::bMakeReadyForPersistenceProcessFailedOnLastAttempt");
static_assert(offsetof(UJunoWorldMutationsPersistenceFeatureData_Container, DeinitProcess) == 248, "Offset mismatch for UJunoWorldMutationsPersistenceFeatureData_Container::DeinitProcess");

// /Script/JunoProceduralWorld.JunoWorldMutationsPersistenceFeatureModule
// Kind: Class; super: PersistenceFrameworkModule
class UJunoWorldMutationsPersistenceFeatureModule
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t GameplayTagContainer[0x20]; // 0x0028 (Size: 0x20, Type: StructProperty)
    TMap<void*, void*> Containers; // 0x0048 (Size: 0x10, Type: MapProperty)
    void* ServiceData; // 0x0058 (Size: 0x8, Type: ObjectProperty)
    FString PersistentName; // 0x0060 (Size: 0x10, Type: StrProperty)
    void* MakeReadyForPersistenceProcess; // 0x0070 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bMakeReadyForPersistenceProcessFailedOnLastAttempt; // 0x0078 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0079
    void* DeinitProcess; // 0x0080 (Size: 0x8, Type: ObjectProperty)
    FString Description; // 0x0088 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UJunoWorldMutationsPersistenceFeatureModule, GameplayTagContainer) == 40, "Offset mismatch for UJunoWorldMutationsPersistenceFeatureModule::GameplayTagContainer");
static_assert(offsetof(UJunoWorldMutationsPersistenceFeatureModule, Containers) == 72, "Offset mismatch for UJunoWorldMutationsPersistenceFeatureModule::Containers");
static_assert(offsetof(UJunoWorldMutationsPersistenceFeatureModule, ServiceData) == 88, "Offset mismatch for UJunoWorldMutationsPersistenceFeatureModule::ServiceData");
static_assert(offsetof(UJunoWorldMutationsPersistenceFeatureModule, PersistentName) == 96, "Offset mismatch for UJunoWorldMutationsPersistenceFeatureModule::PersistentName");
static_assert(offsetof(UJunoWorldMutationsPersistenceFeatureModule, MakeReadyForPersistenceProcess) == 112, "Offset mismatch for UJunoWorldMutationsPersistenceFeatureModule::MakeReadyForPersistenceProcess");
static_assert(offsetof(UJunoWorldMutationsPersistenceFeatureModule, bMakeReadyForPersistenceProcessFailedOnLastAttempt) == 120, "Offset mismatch for UJunoWorldMutationsPersistenceFeatureModule::bMakeReadyForPersistenceProcessFailedOnLastAttempt");
static_assert(offsetof(UJunoWorldMutationsPersistenceFeatureModule, DeinitProcess) == 128, "Offset mismatch for UJunoWorldMutationsPersistenceFeatureModule::DeinitProcess");
static_assert(offsetof(UJunoWorldMutationsPersistenceFeatureModule, Description) == 136, "Offset mismatch for UJunoWorldMutationsPersistenceFeatureModule::Description");

// /Script/JunoProceduralWorld.JunoWorldPreloadActor
// Kind: Class; super: Actor
class UJunoWorldPreloadActor
{
public:
    std::uint8_t Pad_0000[0x278]; // 0x0000
    std::uint8_t bOverrideBounds; // 0x0278 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0279
    std::uint8_t OverridenBounds[0x38]; // 0x0280 (Size: 0x38, Type: StructProperty)
    std::uint8_t PrecalculatedBounds[0x1]; // 0x02B8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoWorldPreloadActor, bOverrideBounds) == 632, "Offset mismatch for UJunoWorldPreloadActor::bOverrideBounds");
static_assert(offsetof(UJunoWorldPreloadActor, OverridenBounds) == 640, "Offset mismatch for UJunoWorldPreloadActor::OverridenBounds");
static_assert(offsetof(UJunoWorldPreloadActor, PrecalculatedBounds) == 696, "Offset mismatch for UJunoWorldPreloadActor::PrecalculatedBounds");

// /Script/JunoProceduralWorld.JunoWorldPreloadActorReference
// Kind: Class; super: Object
class UJunoWorldPreloadActorReference
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* SpawnedActor; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ActorInfo[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoWorldPreloadActorReference, SpawnedActor) == 40, "Offset mismatch for UJunoWorldPreloadActorReference::SpawnedActor");
static_assert(offsetof(UJunoWorldPreloadActorReference, ActorInfo) == 48, "Offset mismatch for UJunoWorldPreloadActorReference::ActorInfo");

// /Script/JunoProceduralWorld.JunoWorldRegistryActorComponent
// Kind: Class; super: GameFrameworkComponent
class UJunoWorldRegistryActorComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t WorldRegistryEntryTags[0x20]; // 0x00C0 (Size: 0x20, Type: StructProperty)
    std::uint8_t WorldRegistryType; // 0x00E0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00E1
    std::uint8_t VisitedTags[0x1]; // 0x00E8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoWorldRegistryActorComponent, WorldRegistryEntryTags) == 192, "Offset mismatch for UJunoWorldRegistryActorComponent::WorldRegistryEntryTags");
static_assert(offsetof(UJunoWorldRegistryActorComponent, WorldRegistryType) == 224, "Offset mismatch for UJunoWorldRegistryActorComponent::WorldRegistryType");
static_assert(offsetof(UJunoWorldRegistryActorComponent, VisitedTags) == 232, "Offset mismatch for UJunoWorldRegistryActorComponent::VisitedTags");

// /Script/JunoProceduralWorld.JunoWorldRegistryManager
// Kind: Class; super: FortPlayspaceComponent
class UJunoWorldRegistryManager
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnMeshNetworkReady_BP; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMeshNetworkEventBurst_BP; // 0x00D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMeshNetworkEventStart_BP; // 0x00E0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMeshNetworkEventChange_BP; // 0x00F0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMeshNetworkEventEnd_BP; // 0x0100 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t bSubscribeToMeshNetwork; // 0x0110 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UJunoWorldRegistryManager, OnMeshNetworkReady_BP) == 192, "Offset mismatch for UJunoWorldRegistryManager::OnMeshNetworkReady_BP");
static_assert(offsetof(UJunoWorldRegistryManager, OnMeshNetworkEventBurst_BP) == 208, "Offset mismatch for UJunoWorldRegistryManager::OnMeshNetworkEventBurst_BP");
static_assert(offsetof(UJunoWorldRegistryManager, OnMeshNetworkEventStart_BP) == 224, "Offset mismatch for UJunoWorldRegistryManager::OnMeshNetworkEventStart_BP");
static_assert(offsetof(UJunoWorldRegistryManager, OnMeshNetworkEventChange_BP) == 240, "Offset mismatch for UJunoWorldRegistryManager::OnMeshNetworkEventChange_BP");
static_assert(offsetof(UJunoWorldRegistryManager, OnMeshNetworkEventEnd_BP) == 256, "Offset mismatch for UJunoWorldRegistryManager::OnMeshNetworkEventEnd_BP");
static_assert(offsetof(UJunoWorldRegistryManager, bSubscribeToMeshNetwork) == 272, "Offset mismatch for UJunoWorldRegistryManager::bSubscribeToMeshNetwork");

// /Script/JunoProceduralWorld.JunoWorldTile
// Kind: Class; super: JunoStreamingGameplayVolume
class UJunoWorldTile
{
public:
    std::uint8_t Pad_0000[0x3F8]; // 0x0000
    std::uint8_t TileInformation[0x1C8]; // 0x03F8 (Size: 0x1C8, Type: StructProperty)
    std::uint8_t WorldPartitionPersistentDataHandler[0x10]; // 0x05C0 (Size: 0x10, Type: StructProperty)
    std::uint8_t InjectedLevels[0x60]; // 0x05D0 (Size: 0x60, Type: StructProperty)
    TArray<void*> ReferencedTagVolumes; // 0x0630 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PreloadActors; // 0x0640 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> OwnedPreloadActorReferences; // 0x0650 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ReferencedPreloadActors; // 0x0660 (Size: 0x10, Type: ArrayProperty)
    TWeakObjectPtr<void> EventBuilder; // 0x0670 (Size: 0x8, Type: WeakObjectProperty)
    std::int32_t PreloadActorCount; // 0x0678 (Size: 0x4, Type: IntProperty)
    std::int32_t ReferencedPreloadActorCount; // 0x067C (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x38]; // 0x0680
    std::uint8_t bTileGenerationComplete; // 0x06B8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bLoaded; // 0x06B9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x1E]; // 0x06BA
    std::uint8_t KnownNonStreamingLevels[0x40]; // 0x06D8 (Size: 0x40, Type: SetProperty)
    void* InjectedObjectsWorldPartition; // 0x0718 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0003[0x20]; // 0x0720
    TMap<void*, void*> POITeleporters; // 0x0740 (Size: 0x10, Type: MapProperty)
    std::uint8_t bIsSingleTileProxy; // 0x0750 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x7]; // 0x0751
    TSoftObjectPtr<void> DefaultEmptyTileMap; // 0x0758 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UJunoWorldTile, TileInformation) == 1016, "Offset mismatch for UJunoWorldTile::TileInformation");
static_assert(offsetof(UJunoWorldTile, WorldPartitionPersistentDataHandler) == 1472, "Offset mismatch for UJunoWorldTile::WorldPartitionPersistentDataHandler");
static_assert(offsetof(UJunoWorldTile, InjectedLevels) == 1488, "Offset mismatch for UJunoWorldTile::InjectedLevels");
static_assert(offsetof(UJunoWorldTile, ReferencedTagVolumes) == 1584, "Offset mismatch for UJunoWorldTile::ReferencedTagVolumes");
static_assert(offsetof(UJunoWorldTile, PreloadActors) == 1600, "Offset mismatch for UJunoWorldTile::PreloadActors");
static_assert(offsetof(UJunoWorldTile, OwnedPreloadActorReferences) == 1616, "Offset mismatch for UJunoWorldTile::OwnedPreloadActorReferences");
static_assert(offsetof(UJunoWorldTile, ReferencedPreloadActors) == 1632, "Offset mismatch for UJunoWorldTile::ReferencedPreloadActors");
static_assert(offsetof(UJunoWorldTile, EventBuilder) == 1648, "Offset mismatch for UJunoWorldTile::EventBuilder");
static_assert(offsetof(UJunoWorldTile, PreloadActorCount) == 1656, "Offset mismatch for UJunoWorldTile::PreloadActorCount");
static_assert(offsetof(UJunoWorldTile, ReferencedPreloadActorCount) == 1660, "Offset mismatch for UJunoWorldTile::ReferencedPreloadActorCount");
static_assert(offsetof(UJunoWorldTile, bTileGenerationComplete) == 1720, "Offset mismatch for UJunoWorldTile::bTileGenerationComplete");
static_assert(offsetof(UJunoWorldTile, bLoaded) == 1721, "Offset mismatch for UJunoWorldTile::bLoaded");
static_assert(offsetof(UJunoWorldTile, KnownNonStreamingLevels) == 1752, "Offset mismatch for UJunoWorldTile::KnownNonStreamingLevels");
static_assert(offsetof(UJunoWorldTile, InjectedObjectsWorldPartition) == 1816, "Offset mismatch for UJunoWorldTile::InjectedObjectsWorldPartition");
static_assert(offsetof(UJunoWorldTile, POITeleporters) == 1856, "Offset mismatch for UJunoWorldTile::POITeleporters");
static_assert(offsetof(UJunoWorldTile, bIsSingleTileProxy) == 1872, "Offset mismatch for UJunoWorldTile::bIsSingleTileProxy");
static_assert(offsetof(UJunoWorldTile, DefaultEmptyTileMap) == 1880, "Offset mismatch for UJunoWorldTile::DefaultEmptyTileMap");

// /Script/JunoProceduralWorld.JunoWorldTileControllerComponent
// Kind: Class; super: FortControllerComponent
class UJunoWorldTileControllerComponent
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t PrimaryComponentTick[0x30]; // 0x0038 (Size: 0x30, Type: StructProperty)
    TArray<void*> ComponentTags; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AssetUserData; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0088
    std::int32_t UCSSerializationIndex; // 0x0090 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0094
    std::uint8_t bNetAddressable; // 0x0098 (Size: 0x1, Type: BoolProperty)
    // 0x0098 BoolProperty bReplicateUsingRegisteredSubObjectList (shared storage)
    // 0x0098 BoolProperty bReplicates (shared storage)
    std::uint8_t Pad_0003[0x1]; // 0x0099
    std::uint8_t bAutoActivate; // 0x009A (Size: 0x1, Type: BoolProperty)
    // 0x009A BoolProperty bCanEverAffectNavigation (shared storage)
    // 0x009A BoolProperty bEditableWhenInherited (shared storage)
    // 0x009A BoolProperty bIsActive (shared storage)
    std::uint8_t bIsEditorOnly; // 0x009B (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x1D]; // 0x009C
    std::uint8_t CreationMethod; // 0x00B9 (Size: 0x1, Type: EnumProperty)
    std::uint8_t OnComponentActivated[0x1]; // 0x00BA (Size: 0x1, Type: MulticastSparseDelegateProperty)
    FMulticastSparseDelegate OnComponentDeactivated; // 0x00BB (Size: 0x10, Type: MulticastSparseDelegateProperty)
};

static_assert(offsetof(UJunoWorldTileControllerComponent, PrimaryComponentTick) == 56, "Offset mismatch for UJunoWorldTileControllerComponent::PrimaryComponentTick");
static_assert(offsetof(UJunoWorldTileControllerComponent, ComponentTags) == 104, "Offset mismatch for UJunoWorldTileControllerComponent::ComponentTags");
static_assert(offsetof(UJunoWorldTileControllerComponent, AssetUserData) == 120, "Offset mismatch for UJunoWorldTileControllerComponent::AssetUserData");
static_assert(offsetof(UJunoWorldTileControllerComponent, UCSSerializationIndex) == 144, "Offset mismatch for UJunoWorldTileControllerComponent::UCSSerializationIndex");
static_assert(offsetof(UJunoWorldTileControllerComponent, bNetAddressable) == 152, "Offset mismatch for UJunoWorldTileControllerComponent::bNetAddressable");
static_assert(offsetof(UJunoWorldTileControllerComponent, bAutoActivate) == 154, "Offset mismatch for UJunoWorldTileControllerComponent::bAutoActivate");
static_assert(offsetof(UJunoWorldTileControllerComponent, bIsEditorOnly) == 155, "Offset mismatch for UJunoWorldTileControllerComponent::bIsEditorOnly");
static_assert(offsetof(UJunoWorldTileControllerComponent, CreationMethod) == 185, "Offset mismatch for UJunoWorldTileControllerComponent::CreationMethod");
static_assert(offsetof(UJunoWorldTileControllerComponent, OnComponentActivated) == 186, "Offset mismatch for UJunoWorldTileControllerComponent::OnComponentActivated");
static_assert(offsetof(UJunoWorldTileControllerComponent, OnComponentDeactivated) == 187, "Offset mismatch for UJunoWorldTileControllerComponent::OnComponentDeactivated");

// /Script/JunoProceduralWorld.JunoWorldTileDebugger
// Kind: Class; super: TickableWorldSubsystem
class UJunoWorldTileDebugger
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoProceduralWorld.JunoWorldTileEventBuilder
// Kind: Class; super: Actor
class UJunoWorldTileEventBuilder
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    std::uint8_t EventTileSize[0x8]; // 0x0270 (Size: 0x8, Type: StructProperty)
    std::uint8_t bIsBespokeEvent; // 0x0278 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFillWithWater; // 0x0279 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x027A
    double TileExtent; // 0x0280 (Size: 0x8, Type: DoubleProperty)
    double TileSize; // 0x0288 (Size: 0x8, Type: DoubleProperty)
    double WorldRadius; // 0x0290 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t EventRandomStream[0x8]; // 0x0298 (Size: 0x8, Type: StructProperty)
    std::uint8_t bUsePlayerLocationBuffer; // 0x02A0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPlaceNearLastEvent; // 0x02A1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPlaceNearPlayer; // 0x02A2 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UJunoWorldTileEventBuilder, EventTileSize) == 624, "Offset mismatch for UJunoWorldTileEventBuilder::EventTileSize");
static_assert(offsetof(UJunoWorldTileEventBuilder, bIsBespokeEvent) == 632, "Offset mismatch for UJunoWorldTileEventBuilder::bIsBespokeEvent");
static_assert(offsetof(UJunoWorldTileEventBuilder, bFillWithWater) == 633, "Offset mismatch for UJunoWorldTileEventBuilder::bFillWithWater");
static_assert(offsetof(UJunoWorldTileEventBuilder, TileExtent) == 640, "Offset mismatch for UJunoWorldTileEventBuilder::TileExtent");
static_assert(offsetof(UJunoWorldTileEventBuilder, TileSize) == 648, "Offset mismatch for UJunoWorldTileEventBuilder::TileSize");
static_assert(offsetof(UJunoWorldTileEventBuilder, WorldRadius) == 656, "Offset mismatch for UJunoWorldTileEventBuilder::WorldRadius");
static_assert(offsetof(UJunoWorldTileEventBuilder, EventRandomStream) == 664, "Offset mismatch for UJunoWorldTileEventBuilder::EventRandomStream");
static_assert(offsetof(UJunoWorldTileEventBuilder, bUsePlayerLocationBuffer) == 672, "Offset mismatch for UJunoWorldTileEventBuilder::bUsePlayerLocationBuffer");
static_assert(offsetof(UJunoWorldTileEventBuilder, bPlaceNearLastEvent) == 673, "Offset mismatch for UJunoWorldTileEventBuilder::bPlaceNearLastEvent");
static_assert(offsetof(UJunoWorldTileEventBuilder, bPlaceNearPlayer) == 674, "Offset mismatch for UJunoWorldTileEventBuilder::bPlaceNearPlayer");

// /Script/JunoProceduralWorld.JunoWorldTileGenerator
// Kind: Class; super: Object
class UJunoWorldTileGenerator
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    TWeakObjectPtr<void> TileGrid; // 0x0038 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> OwnerPlayspace; // 0x0040 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> ProceduralSettings; // 0x0048 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0001[0x78]; // 0x0050
    void* TileSelectionInterfaceObject; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> POIRegistry; // 0x00D0 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> AdditionalPOIsRegistry; // 0x00D8 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> CaveResetEventsRegistry; // 0x00E0 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> RandomStreamComponent; // 0x00E8 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> TileSubsystem; // 0x00F0 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> LocationComponent; // 0x00F8 (Size: 0x8, Type: WeakObjectProperty)
    TMap<void*, void*> PendingEventAndBuilders; // 0x0100 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UJunoWorldTileGenerator, TileGrid) == 56, "Offset mismatch for UJunoWorldTileGenerator::TileGrid");
static_assert(offsetof(UJunoWorldTileGenerator, OwnerPlayspace) == 64, "Offset mismatch for UJunoWorldTileGenerator::OwnerPlayspace");
static_assert(offsetof(UJunoWorldTileGenerator, ProceduralSettings) == 72, "Offset mismatch for UJunoWorldTileGenerator::ProceduralSettings");
static_assert(offsetof(UJunoWorldTileGenerator, TileSelectionInterfaceObject) == 200, "Offset mismatch for UJunoWorldTileGenerator::TileSelectionInterfaceObject");
static_assert(offsetof(UJunoWorldTileGenerator, POIRegistry) == 208, "Offset mismatch for UJunoWorldTileGenerator::POIRegistry");
static_assert(offsetof(UJunoWorldTileGenerator, AdditionalPOIsRegistry) == 216, "Offset mismatch for UJunoWorldTileGenerator::AdditionalPOIsRegistry");
static_assert(offsetof(UJunoWorldTileGenerator, CaveResetEventsRegistry) == 224, "Offset mismatch for UJunoWorldTileGenerator::CaveResetEventsRegistry");
static_assert(offsetof(UJunoWorldTileGenerator, RandomStreamComponent) == 232, "Offset mismatch for UJunoWorldTileGenerator::RandomStreamComponent");
static_assert(offsetof(UJunoWorldTileGenerator, TileSubsystem) == 240, "Offset mismatch for UJunoWorldTileGenerator::TileSubsystem");
static_assert(offsetof(UJunoWorldTileGenerator, LocationComponent) == 248, "Offset mismatch for UJunoWorldTileGenerator::LocationComponent");
static_assert(offsetof(UJunoWorldTileGenerator, PendingEventAndBuilders) == 256, "Offset mismatch for UJunoWorldTileGenerator::PendingEventAndBuilders");

// /Script/JunoProceduralWorld.JunoWorldTileLayoutInterface
// Kind: Class; super: Interface
class UJunoWorldTileLayoutInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoProceduralWorld.JunoWorldTileLayoutInterfaceBlueprintLibary
// Kind: Class; super: BlueprintFunctionLibrary
class UJunoWorldTileLayoutInterfaceBlueprintLibary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoProceduralWorld.JunoWorldTileManipulator
// Kind: Class; super: Object
class UJunoWorldTileManipulator
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoProceduralWorld.JunoWorldTilePersistenceFeatureData
// Kind: Class; super: JunoBasePFWPersistenceFeatureData
class UJunoWorldTilePersistenceFeatureData
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    TMap<void*, void*> Caves; // 0x0068 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> POIs; // 0x0078 (Size: 0x10, Type: MapProperty)
    std::uint8_t HasClearedUGCSlots[0x10]; // 0x0088 (Size: 0x10, Type: SetProperty)
    std::uint8_t SaveData[0x70]; // 0x0098 (Size: 0x70, Type: StructProperty)
    std::uint8_t MissingPOIWaiverState; // 0x0108 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0109
    std::int32_t MissingPOIWaiverEpoch; // 0x010C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UJunoWorldTilePersistenceFeatureData, Caves) == 104, "Offset mismatch for UJunoWorldTilePersistenceFeatureData::Caves");
static_assert(offsetof(UJunoWorldTilePersistenceFeatureData, POIs) == 120, "Offset mismatch for UJunoWorldTilePersistenceFeatureData::POIs");
static_assert(offsetof(UJunoWorldTilePersistenceFeatureData, HasClearedUGCSlots) == 136, "Offset mismatch for UJunoWorldTilePersistenceFeatureData::HasClearedUGCSlots");
static_assert(offsetof(UJunoWorldTilePersistenceFeatureData, SaveData) == 152, "Offset mismatch for UJunoWorldTilePersistenceFeatureData::SaveData");
static_assert(offsetof(UJunoWorldTilePersistenceFeatureData, MissingPOIWaiverState) == 264, "Offset mismatch for UJunoWorldTilePersistenceFeatureData::MissingPOIWaiverState");
static_assert(offsetof(UJunoWorldTilePersistenceFeatureData, MissingPOIWaiverEpoch) == 268, "Offset mismatch for UJunoWorldTilePersistenceFeatureData::MissingPOIWaiverEpoch");

// /Script/JunoProceduralWorld.JunoWorldTilePersistenceFeatureModule
// Kind: Class; super: PersistenceFrameworkModule
class UJunoWorldTilePersistenceFeatureModule
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t GameplayTagContainer[0x20]; // 0x0028 (Size: 0x20, Type: StructProperty)
    TMap<void*, void*> Containers; // 0x0048 (Size: 0x10, Type: MapProperty)
    void* ServiceData; // 0x0058 (Size: 0x8, Type: ObjectProperty)
    FString PersistentName; // 0x0060 (Size: 0x10, Type: StrProperty)
    void* MakeReadyForPersistenceProcess; // 0x0070 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bMakeReadyForPersistenceProcessFailedOnLastAttempt; // 0x0078 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0079
    void* DeinitProcess; // 0x0080 (Size: 0x8, Type: ObjectProperty)
    FString Description; // 0x0088 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UJunoWorldTilePersistenceFeatureModule, GameplayTagContainer) == 40, "Offset mismatch for UJunoWorldTilePersistenceFeatureModule::GameplayTagContainer");
static_assert(offsetof(UJunoWorldTilePersistenceFeatureModule, Containers) == 72, "Offset mismatch for UJunoWorldTilePersistenceFeatureModule::Containers");
static_assert(offsetof(UJunoWorldTilePersistenceFeatureModule, ServiceData) == 88, "Offset mismatch for UJunoWorldTilePersistenceFeatureModule::ServiceData");
static_assert(offsetof(UJunoWorldTilePersistenceFeatureModule, PersistentName) == 96, "Offset mismatch for UJunoWorldTilePersistenceFeatureModule::PersistentName");
static_assert(offsetof(UJunoWorldTilePersistenceFeatureModule, MakeReadyForPersistenceProcess) == 112, "Offset mismatch for UJunoWorldTilePersistenceFeatureModule::MakeReadyForPersistenceProcess");
static_assert(offsetof(UJunoWorldTilePersistenceFeatureModule, bMakeReadyForPersistenceProcessFailedOnLastAttempt) == 120, "Offset mismatch for UJunoWorldTilePersistenceFeatureModule::bMakeReadyForPersistenceProcessFailedOnLastAttempt");
static_assert(offsetof(UJunoWorldTilePersistenceFeatureModule, DeinitProcess) == 128, "Offset mismatch for UJunoWorldTilePersistenceFeatureModule::DeinitProcess");
static_assert(offsetof(UJunoWorldTilePersistenceFeatureModule, Description) == 136, "Offset mismatch for UJunoWorldTilePersistenceFeatureModule::Description");

// /Script/JunoProceduralWorld.JunoWorldTilePlayspaceComponent
// Kind: Class; super: FortPlayspaceComponent
class UJunoWorldTilePlayspaceComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnMeshNetworkReady_BP; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMeshNetworkEventBurst_BP; // 0x00D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMeshNetworkEventStart_BP; // 0x00E0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMeshNetworkEventChange_BP; // 0x00F0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMeshNetworkEventEnd_BP; // 0x0100 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t bSubscribeToMeshNetwork; // 0x0110 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UJunoWorldTilePlayspaceComponent, OnMeshNetworkReady_BP) == 192, "Offset mismatch for UJunoWorldTilePlayspaceComponent::OnMeshNetworkReady_BP");
static_assert(offsetof(UJunoWorldTilePlayspaceComponent, OnMeshNetworkEventBurst_BP) == 208, "Offset mismatch for UJunoWorldTilePlayspaceComponent::OnMeshNetworkEventBurst_BP");
static_assert(offsetof(UJunoWorldTilePlayspaceComponent, OnMeshNetworkEventStart_BP) == 224, "Offset mismatch for UJunoWorldTilePlayspaceComponent::OnMeshNetworkEventStart_BP");
static_assert(offsetof(UJunoWorldTilePlayspaceComponent, OnMeshNetworkEventChange_BP) == 240, "Offset mismatch for UJunoWorldTilePlayspaceComponent::OnMeshNetworkEventChange_BP");
static_assert(offsetof(UJunoWorldTilePlayspaceComponent, OnMeshNetworkEventEnd_BP) == 256, "Offset mismatch for UJunoWorldTilePlayspaceComponent::OnMeshNetworkEventEnd_BP");
static_assert(offsetof(UJunoWorldTilePlayspaceComponent, bSubscribeToMeshNetwork) == 272, "Offset mismatch for UJunoWorldTilePlayspaceComponent::bSubscribeToMeshNetwork");

// /Script/JunoProceduralWorld.JunoWorldTileReplaceableTileUGCCollector
// Kind: Class; super: JunoTileGenerationUGCRequest
class UJunoWorldTileReplaceableTileUGCCollector
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoProceduralWorld.JunoWorldTileSaveData_Container
// Kind: Class; super: JunoBasePFWPersistenceFeatureDataContainer
class UJunoWorldTileSaveData_Container
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t GameplayTagContainer[0x20]; // 0x0028 (Size: 0x20, Type: StructProperty)
    std::uint8_t RestoreVersionInfo[0x10]; // 0x0048 (Size: 0x10, Type: StructProperty)
    std::uint8_t SupportedVersionsTable[0x20]; // 0x0058 (Size: 0x20, Type: StructProperty)
    std::uint64_t RestoreAttemptCount; // 0x0078 (Size: 0x8, Type: UInt64Property)
    std::uint64_t SaveAttemptCount; // 0x0080 (Size: 0x8, Type: UInt64Property)
    std::uint64_t DeleteAttemptCount; // 0x0088 (Size: 0x8, Type: UInt64Property)
    void* ServiceData; // 0x0090 (Size: 0x8, Type: ObjectProperty)
    void* BackendRequestsQueue; // 0x0098 (Size: 0x8, Type: ObjectProperty)
    FName PersistentClassName; // 0x00A0 (Size: 0x8, Type: NameProperty)
    std::uint8_t PersistentName[0x30]; // 0x00A8 (Size: 0x30, Type: StructProperty)
    FString Description; // 0x00D8 (Size: 0x10, Type: StrProperty)
    void* MakeReadyForPersistenceProcess; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bMakeReadyForPersistenceProcessFailedOnLastAttempt; // 0x00F0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00F1
    void* DeinitProcess; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoWorldTileSaveData_Container, GameplayTagContainer) == 40, "Offset mismatch for UJunoWorldTileSaveData_Container::GameplayTagContainer");
static_assert(offsetof(UJunoWorldTileSaveData_Container, RestoreVersionInfo) == 72, "Offset mismatch for UJunoWorldTileSaveData_Container::RestoreVersionInfo");
static_assert(offsetof(UJunoWorldTileSaveData_Container, SupportedVersionsTable) == 88, "Offset mismatch for UJunoWorldTileSaveData_Container::SupportedVersionsTable");
static_assert(offsetof(UJunoWorldTileSaveData_Container, RestoreAttemptCount) == 120, "Offset mismatch for UJunoWorldTileSaveData_Container::RestoreAttemptCount");
static_assert(offsetof(UJunoWorldTileSaveData_Container, SaveAttemptCount) == 128, "Offset mismatch for UJunoWorldTileSaveData_Container::SaveAttemptCount");
static_assert(offsetof(UJunoWorldTileSaveData_Container, DeleteAttemptCount) == 136, "Offset mismatch for UJunoWorldTileSaveData_Container::DeleteAttemptCount");
static_assert(offsetof(UJunoWorldTileSaveData_Container, ServiceData) == 144, "Offset mismatch for UJunoWorldTileSaveData_Container::ServiceData");
static_assert(offsetof(UJunoWorldTileSaveData_Container, BackendRequestsQueue) == 152, "Offset mismatch for UJunoWorldTileSaveData_Container::BackendRequestsQueue");
static_assert(offsetof(UJunoWorldTileSaveData_Container, PersistentClassName) == 160, "Offset mismatch for UJunoWorldTileSaveData_Container::PersistentClassName");
static_assert(offsetof(UJunoWorldTileSaveData_Container, PersistentName) == 168, "Offset mismatch for UJunoWorldTileSaveData_Container::PersistentName");
static_assert(offsetof(UJunoWorldTileSaveData_Container, Description) == 216, "Offset mismatch for UJunoWorldTileSaveData_Container::Description");
static_assert(offsetof(UJunoWorldTileSaveData_Container, MakeReadyForPersistenceProcess) == 232, "Offset mismatch for UJunoWorldTileSaveData_Container::MakeReadyForPersistenceProcess");
static_assert(offsetof(UJunoWorldTileSaveData_Container, bMakeReadyForPersistenceProcessFailedOnLastAttempt) == 240, "Offset mismatch for UJunoWorldTileSaveData_Container::bMakeReadyForPersistenceProcessFailedOnLastAttempt");
static_assert(offsetof(UJunoWorldTileSaveData_Container, DeinitProcess) == 248, "Offset mismatch for UJunoWorldTileSaveData_Container::DeinitProcess");

// /Script/JunoProceduralWorld.JunoWorldTileSelectionBase
// Kind: Class; super: PrimaryDataAsset
class UJunoWorldTileSelectionBase
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TWeakObjectPtr<void> ProceduralWorldSettings; // 0x0028 (Size: 0x8, Type: WeakObjectProperty)
    float TileExtent; // 0x0030 (Size: 0x4, Type: FloatProperty)
    std::int32_t WorldGridCount; // 0x0034 (Size: 0x4, Type: IntProperty)
    std::int64_t WorldSize; // 0x0038 (Size: 0x8, Type: Int64Property)
    std::uint8_t BaseTileset[0x4]; // 0x0040 (Size: 0x4, Type: StructProperty)
    std::uint8_t bRequiresDebugArea; // 0x0044 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableBiomeSwaps; // 0x0045 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableBorderPermutations; // 0x0046 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x0047
    FName WaterTileName; // 0x0048 (Size: 0x8, Type: NameProperty)
    void* JunoWorldTileLayoutInterface; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    void* RandomStreamGenerator; // 0x0058 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoWorldTileSelectionBase, ProceduralWorldSettings) == 40, "Offset mismatch for UJunoWorldTileSelectionBase::ProceduralWorldSettings");
static_assert(offsetof(UJunoWorldTileSelectionBase, TileExtent) == 48, "Offset mismatch for UJunoWorldTileSelectionBase::TileExtent");
static_assert(offsetof(UJunoWorldTileSelectionBase, WorldGridCount) == 52, "Offset mismatch for UJunoWorldTileSelectionBase::WorldGridCount");
static_assert(offsetof(UJunoWorldTileSelectionBase, WorldSize) == 56, "Offset mismatch for UJunoWorldTileSelectionBase::WorldSize");
static_assert(offsetof(UJunoWorldTileSelectionBase, BaseTileset) == 64, "Offset mismatch for UJunoWorldTileSelectionBase::BaseTileset");
static_assert(offsetof(UJunoWorldTileSelectionBase, bRequiresDebugArea) == 68, "Offset mismatch for UJunoWorldTileSelectionBase::bRequiresDebugArea");
static_assert(offsetof(UJunoWorldTileSelectionBase, bEnableBiomeSwaps) == 69, "Offset mismatch for UJunoWorldTileSelectionBase::bEnableBiomeSwaps");
static_assert(offsetof(UJunoWorldTileSelectionBase, bEnableBorderPermutations) == 70, "Offset mismatch for UJunoWorldTileSelectionBase::bEnableBorderPermutations");
static_assert(offsetof(UJunoWorldTileSelectionBase, WaterTileName) == 72, "Offset mismatch for UJunoWorldTileSelectionBase::WaterTileName");
static_assert(offsetof(UJunoWorldTileSelectionBase, JunoWorldTileLayoutInterface) == 80, "Offset mismatch for UJunoWorldTileSelectionBase::JunoWorldTileLayoutInterface");
static_assert(offsetof(UJunoWorldTileSelectionBase, RandomStreamGenerator) == 88, "Offset mismatch for UJunoWorldTileSelectionBase::RandomStreamGenerator");

// /Script/JunoProceduralWorld.JunoWorldTileSelectionCynthia
// Kind: Class; super: JunoWorldTileSelectionBase
class UJunoWorldTileSelectionCynthia
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    TArray<void*> ScatteredLandBiomes; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> StartTileRequiredBiomes; // 0x0088 (Size: 0x10, Type: ArrayProperty)
    float WaterLevel; // 0x0098 (Size: 0x4, Type: FloatProperty)
    float TileNoiseFrequency; // 0x009C (Size: 0x4, Type: FloatProperty)
    std::int32_t NumberOfAlpineRanges; // 0x00A0 (Size: 0x4, Type: IntProperty)
    std::int32_t AlpineRangeLength; // 0x00A4 (Size: 0x4, Type: IntProperty)
    TArray<void*> ScatteredAlpineBiomes; // 0x00A8 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> AreasToUpdate; // 0x00B8 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UJunoWorldTileSelectionCynthia, ScatteredLandBiomes) == 120, "Offset mismatch for UJunoWorldTileSelectionCynthia::ScatteredLandBiomes");
static_assert(offsetof(UJunoWorldTileSelectionCynthia, StartTileRequiredBiomes) == 136, "Offset mismatch for UJunoWorldTileSelectionCynthia::StartTileRequiredBiomes");
static_assert(offsetof(UJunoWorldTileSelectionCynthia, WaterLevel) == 152, "Offset mismatch for UJunoWorldTileSelectionCynthia::WaterLevel");
static_assert(offsetof(UJunoWorldTileSelectionCynthia, TileNoiseFrequency) == 156, "Offset mismatch for UJunoWorldTileSelectionCynthia::TileNoiseFrequency");
static_assert(offsetof(UJunoWorldTileSelectionCynthia, NumberOfAlpineRanges) == 160, "Offset mismatch for UJunoWorldTileSelectionCynthia::NumberOfAlpineRanges");
static_assert(offsetof(UJunoWorldTileSelectionCynthia, AlpineRangeLength) == 164, "Offset mismatch for UJunoWorldTileSelectionCynthia::AlpineRangeLength");
static_assert(offsetof(UJunoWorldTileSelectionCynthia, ScatteredAlpineBiomes) == 168, "Offset mismatch for UJunoWorldTileSelectionCynthia::ScatteredAlpineBiomes");
static_assert(offsetof(UJunoWorldTileSelectionCynthia, AreasToUpdate) == 184, "Offset mismatch for UJunoWorldTileSelectionCynthia::AreasToUpdate");

// /Script/JunoProceduralWorld.JunoWorldTileTabascoWaterTileUGCCollector
// Kind: Class; super: JunoTileGenerationUGCRequest
class UJunoWorldTileTabascoWaterTileUGCCollector
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoProceduralWorld.JunoWorldWeatherLocationComponent
// Kind: Class; super: JunoWeatherLocationComponent
class UJunoWorldWeatherLocationComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnLocationChanged; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x20]; // 0x00D0
    std::uint8_t Location[0x1]; // 0x00F0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoWorldWeatherLocationComponent, OnLocationChanged) == 192, "Offset mismatch for UJunoWorldWeatherLocationComponent::OnLocationChanged");
static_assert(offsetof(UJunoWorldWeatherLocationComponent, Location) == 240, "Offset mismatch for UJunoWorldWeatherLocationComponent::Location");

// /Script/JunoProceduralWorld.LandmassCluster
// Kind: Class; super: Object
class ULandmassCluster
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bInitialized; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x17]; // 0x0029
    TArray<void*> Actors; // 0x0040 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(ULandmassCluster, bInitialized) == 40, "Offset mismatch for ULandmassCluster::bInitialized");
static_assert(offsetof(ULandmassCluster, Actors) == 64, "Offset mismatch for ULandmassCluster::Actors");

// /Script/JunoProceduralWorld.LandmassFunctionLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class ULandmassFunctionLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoProceduralWorld.LandmassPathfinder
// Kind: Class; super: Object
class ULandmassPathfinder
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* LandscapeProxy; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    void* RouteSystem; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> BackStopPaths; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    void* BlockingRoute; // 0x0048 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x158]; // 0x0050
    TWeakObjectPtr<void> PCGSampler; // 0x01A8 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0002[0x10]; // 0x01B0
    FMulticastInlineDelegate PathfinderSpawnWarpingActorDelegate; // 0x01C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t PathfinderHistory[0x48]; // 0x01D0 (Size: 0x48, Type: StructProperty)
    std::int32_t MaxNodesPerCell; // 0x0218 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0003[0x4]; // 0x021C
    std::uint8_t bUsePCGSamplerIfAvailable; // 0x0220 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bVisualizeHeuristicSteps; // 0x0221 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bVisualizeBacktracedPathOfHeuristicSteps; // 0x0222 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bVisualizeValidLocationSearching; // 0x0223 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(ULandmassPathfinder, LandscapeProxy) == 40, "Offset mismatch for ULandmassPathfinder::LandscapeProxy");
static_assert(offsetof(ULandmassPathfinder, RouteSystem) == 48, "Offset mismatch for ULandmassPathfinder::RouteSystem");
static_assert(offsetof(ULandmassPathfinder, BackStopPaths) == 56, "Offset mismatch for ULandmassPathfinder::BackStopPaths");
static_assert(offsetof(ULandmassPathfinder, BlockingRoute) == 72, "Offset mismatch for ULandmassPathfinder::BlockingRoute");
static_assert(offsetof(ULandmassPathfinder, PCGSampler) == 424, "Offset mismatch for ULandmassPathfinder::PCGSampler");
static_assert(offsetof(ULandmassPathfinder, PathfinderSpawnWarpingActorDelegate) == 448, "Offset mismatch for ULandmassPathfinder::PathfinderSpawnWarpingActorDelegate");
static_assert(offsetof(ULandmassPathfinder, PathfinderHistory) == 464, "Offset mismatch for ULandmassPathfinder::PathfinderHistory");
static_assert(offsetof(ULandmassPathfinder, MaxNodesPerCell) == 536, "Offset mismatch for ULandmassPathfinder::MaxNodesPerCell");
static_assert(offsetof(ULandmassPathfinder, bUsePCGSamplerIfAvailable) == 544, "Offset mismatch for ULandmassPathfinder::bUsePCGSamplerIfAvailable");
static_assert(offsetof(ULandmassPathfinder, bVisualizeHeuristicSteps) == 545, "Offset mismatch for ULandmassPathfinder::bVisualizeHeuristicSteps");
static_assert(offsetof(ULandmassPathfinder, bVisualizeBacktracedPathOfHeuristicSteps) == 546, "Offset mismatch for ULandmassPathfinder::bVisualizeBacktracedPathOfHeuristicSteps");
static_assert(offsetof(ULandmassPathfinder, bVisualizeValidLocationSearching) == 547, "Offset mismatch for ULandmassPathfinder::bVisualizeValidLocationSearching");

// /Script/JunoProceduralWorld.LandmassProceduralRoadGenRules
// Kind: Class; super: DataAsset
class ULandmassProceduralRoadGenRules
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TMap<void*, void*> RuleSet; // 0x0028 (Size: 0x10, Type: MapProperty)
    float RoadGridGridSize; // 0x0038 (Size: 0x4, Type: FloatProperty)
    std::int32_t RasterizeToRoadGridExtent; // 0x003C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(ULandmassProceduralRoadGenRules, RuleSet) == 40, "Offset mismatch for ULandmassProceduralRoadGenRules::RuleSet");
static_assert(offsetof(ULandmassProceduralRoadGenRules, RoadGridGridSize) == 56, "Offset mismatch for ULandmassProceduralRoadGenRules::RoadGridGridSize");
static_assert(offsetof(ULandmassProceduralRoadGenRules, RasterizeToRoadGridExtent) == 60, "Offset mismatch for ULandmassProceduralRoadGenRules::RasterizeToRoadGridExtent");

// /Script/JunoProceduralWorld.LandmassProceduralRoute
// Kind: Class; super: Actor
class ULandmassProceduralRoute
{
public:
    std::uint8_t Pad_0000[0x278]; // 0x0000
    std::uint8_t EditorTickIsEnabled; // 0x0278 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0279
    TWeakObjectPtr<void> PCGSampler; // 0x027C (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t bRunFromPCG; // 0x0284 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0285
    void* LandscapeProxy; // 0x0288 (Size: 0x8, Type: ObjectProperty)
    std::int32_t TickFrequency; // 0x0290 (Size: 0x4, Type: IntProperty)
    std::uint8_t JunoTileInfo[0xC]; // 0x0294 (Size: 0xC, Type: StructProperty)
    void* Pathfinder; // 0x02A0 (Size: 0x8, Type: ClassProperty)
    TArray<void*> Lakes; // 0x02A8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0003[0x10]; // 0x02B8
    FMulticastInlineDelegate OnGenerationFinishedMulticastDelegate; // 0x02C8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0004[0x20]; // 0x02D8
    TArray<void*> PendingRoutesToAddToRouteGrid; // 0x02F8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0005[0x20]; // 0x0308
    void* LandmassCluster; // 0x0328 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bEnableDebugInfo; // 0x0330 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(ULandmassProceduralRoute, EditorTickIsEnabled) == 632, "Offset mismatch for ULandmassProceduralRoute::EditorTickIsEnabled");
static_assert(offsetof(ULandmassProceduralRoute, PCGSampler) == 636, "Offset mismatch for ULandmassProceduralRoute::PCGSampler");
static_assert(offsetof(ULandmassProceduralRoute, bRunFromPCG) == 644, "Offset mismatch for ULandmassProceduralRoute::bRunFromPCG");
static_assert(offsetof(ULandmassProceduralRoute, LandscapeProxy) == 648, "Offset mismatch for ULandmassProceduralRoute::LandscapeProxy");
static_assert(offsetof(ULandmassProceduralRoute, TickFrequency) == 656, "Offset mismatch for ULandmassProceduralRoute::TickFrequency");
static_assert(offsetof(ULandmassProceduralRoute, JunoTileInfo) == 660, "Offset mismatch for ULandmassProceduralRoute::JunoTileInfo");
static_assert(offsetof(ULandmassProceduralRoute, Pathfinder) == 672, "Offset mismatch for ULandmassProceduralRoute::Pathfinder");
static_assert(offsetof(ULandmassProceduralRoute, Lakes) == 680, "Offset mismatch for ULandmassProceduralRoute::Lakes");
static_assert(offsetof(ULandmassProceduralRoute, OnGenerationFinishedMulticastDelegate) == 712, "Offset mismatch for ULandmassProceduralRoute::OnGenerationFinishedMulticastDelegate");
static_assert(offsetof(ULandmassProceduralRoute, PendingRoutesToAddToRouteGrid) == 760, "Offset mismatch for ULandmassProceduralRoute::PendingRoutesToAddToRouteGrid");
static_assert(offsetof(ULandmassProceduralRoute, LandmassCluster) == 808, "Offset mismatch for ULandmassProceduralRoute::LandmassCluster");
static_assert(offsetof(ULandmassProceduralRoute, bEnableDebugInfo) == 816, "Offset mismatch for ULandmassProceduralRoute::bEnableDebugInfo");

// /Script/JunoProceduralWorld.PCGAddLandscapeLayerWeightsSettings
// Kind: Class; super: PCGSettings
class UPCGAddLandscapeLayerWeightsSettings
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    std::int32_t Seed; // 0x0050 (Size: 0x4, Type: IntProperty)
    std::uint8_t bExecutionDependencyRequired; // 0x0054 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0xB]; // 0x0055
    std::uint8_t bUseSeed; // 0x0060 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x1F]; // 0x0061
    TArray<void*> CachedOverridableParams; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    void* OverriddenSettingsPropertyBag; // 0x0090 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0003[0x1]; // 0x0098
    std::uint8_t bExecuteOnGPU; // 0x0099 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDumpCookedHLSL; // 0x009A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDumpDataDescriptions; // 0x009B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPrintShaderDebugValues; // 0x009C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x009D
    std::int32_t DebugBufferSize; // 0x00A0 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UPCGAddLandscapeLayerWeightsSettings, Seed) == 80, "Offset mismatch for UPCGAddLandscapeLayerWeightsSettings::Seed");
static_assert(offsetof(UPCGAddLandscapeLayerWeightsSettings, bExecutionDependencyRequired) == 84, "Offset mismatch for UPCGAddLandscapeLayerWeightsSettings::bExecutionDependencyRequired");
static_assert(offsetof(UPCGAddLandscapeLayerWeightsSettings, bUseSeed) == 96, "Offset mismatch for UPCGAddLandscapeLayerWeightsSettings::bUseSeed");
static_assert(offsetof(UPCGAddLandscapeLayerWeightsSettings, CachedOverridableParams) == 128, "Offset mismatch for UPCGAddLandscapeLayerWeightsSettings::CachedOverridableParams");
static_assert(offsetof(UPCGAddLandscapeLayerWeightsSettings, OverriddenSettingsPropertyBag) == 144, "Offset mismatch for UPCGAddLandscapeLayerWeightsSettings::OverriddenSettingsPropertyBag");
static_assert(offsetof(UPCGAddLandscapeLayerWeightsSettings, bExecuteOnGPU) == 153, "Offset mismatch for UPCGAddLandscapeLayerWeightsSettings::bExecuteOnGPU");
static_assert(offsetof(UPCGAddLandscapeLayerWeightsSettings, bDumpCookedHLSL) == 154, "Offset mismatch for UPCGAddLandscapeLayerWeightsSettings::bDumpCookedHLSL");
static_assert(offsetof(UPCGAddLandscapeLayerWeightsSettings, bDumpDataDescriptions) == 155, "Offset mismatch for UPCGAddLandscapeLayerWeightsSettings::bDumpDataDescriptions");
static_assert(offsetof(UPCGAddLandscapeLayerWeightsSettings, bPrintShaderDebugValues) == 156, "Offset mismatch for UPCGAddLandscapeLayerWeightsSettings::bPrintShaderDebugValues");
static_assert(offsetof(UPCGAddLandscapeLayerWeightsSettings, DebugBufferSize) == 160, "Offset mismatch for UPCGAddLandscapeLayerWeightsSettings::DebugBufferSize");

// /Script/JunoProceduralWorld.PCGJunoActorBoundsToPointSettings
// Kind: Class; super: PCGSettings
class UPCGJunoActorBoundsToPointSettings
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    std::int32_t Seed; // 0x0050 (Size: 0x4, Type: IntProperty)
    std::uint8_t bExecutionDependencyRequired; // 0x0054 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0xB]; // 0x0055
    std::uint8_t bUseSeed; // 0x0060 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x1F]; // 0x0061
    TArray<void*> CachedOverridableParams; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    void* OverriddenSettingsPropertyBag; // 0x0090 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0003[0x1]; // 0x0098
    std::uint8_t bExecuteOnGPU; // 0x0099 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDumpCookedHLSL; // 0x009A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDumpDataDescriptions; // 0x009B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPrintShaderDebugValues; // 0x009C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x009D
    std::int32_t DebugBufferSize; // 0x00A0 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UPCGJunoActorBoundsToPointSettings, Seed) == 80, "Offset mismatch for UPCGJunoActorBoundsToPointSettings::Seed");
static_assert(offsetof(UPCGJunoActorBoundsToPointSettings, bExecutionDependencyRequired) == 84, "Offset mismatch for UPCGJunoActorBoundsToPointSettings::bExecutionDependencyRequired");
static_assert(offsetof(UPCGJunoActorBoundsToPointSettings, bUseSeed) == 96, "Offset mismatch for UPCGJunoActorBoundsToPointSettings::bUseSeed");
static_assert(offsetof(UPCGJunoActorBoundsToPointSettings, CachedOverridableParams) == 128, "Offset mismatch for UPCGJunoActorBoundsToPointSettings::CachedOverridableParams");
static_assert(offsetof(UPCGJunoActorBoundsToPointSettings, OverriddenSettingsPropertyBag) == 144, "Offset mismatch for UPCGJunoActorBoundsToPointSettings::OverriddenSettingsPropertyBag");
static_assert(offsetof(UPCGJunoActorBoundsToPointSettings, bExecuteOnGPU) == 153, "Offset mismatch for UPCGJunoActorBoundsToPointSettings::bExecuteOnGPU");
static_assert(offsetof(UPCGJunoActorBoundsToPointSettings, bDumpCookedHLSL) == 154, "Offset mismatch for UPCGJunoActorBoundsToPointSettings::bDumpCookedHLSL");
static_assert(offsetof(UPCGJunoActorBoundsToPointSettings, bDumpDataDescriptions) == 155, "Offset mismatch for UPCGJunoActorBoundsToPointSettings::bDumpDataDescriptions");
static_assert(offsetof(UPCGJunoActorBoundsToPointSettings, bPrintShaderDebugValues) == 156, "Offset mismatch for UPCGJunoActorBoundsToPointSettings::bPrintShaderDebugValues");
static_assert(offsetof(UPCGJunoActorBoundsToPointSettings, DebugBufferSize) == 160, "Offset mismatch for UPCGJunoActorBoundsToPointSettings::DebugBufferSize");

// /Script/JunoProceduralWorld.PCGJunoApplyMaskNodeSettings
// Kind: Class; super: PCGSettings
class UPCGJunoApplyMaskNodeSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t Mode; // 0x00A8 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UPCGJunoApplyMaskNodeSettings, Mode) == 168, "Offset mismatch for UPCGJunoApplyMaskNodeSettings::Mode");

// /Script/JunoProceduralWorld.PCGJunoCreateMaskDataNodeSettings
// Kind: Class; super: PCGSettings
class UPCGJunoCreateMaskDataNodeSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t bIs2D; // 0x00A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00A9
    std::int32_t Resolution; // 0x00AC (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UPCGJunoCreateMaskDataNodeSettings, bIs2D) == 168, "Offset mismatch for UPCGJunoCreateMaskDataNodeSettings::bIs2D");
static_assert(offsetof(UPCGJunoCreateMaskDataNodeSettings, Resolution) == 172, "Offset mismatch for UPCGJunoCreateMaskDataNodeSettings::Resolution");

// /Script/JunoProceduralWorld.PCGJunoFilterPointsBasedOnLandscapeSlopeSettings
// Kind: Class; super: PCGSettings
class UPCGJunoFilterPointsBasedOnLandscapeSlopeSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    float Radius; // 0x00A8 (Size: 0x4, Type: FloatProperty)
    std::int32_t DirectionCount; // 0x00AC (Size: 0x4, Type: IntProperty)
    std::int32_t SampleOnEachDirectionCount; // 0x00B0 (Size: 0x4, Type: IntProperty)
    float BaseDistanceThreshold; // 0x00B4 (Size: 0x4, Type: FloatProperty)
    float MaxSlopeAngleDegree; // 0x00B8 (Size: 0x4, Type: FloatProperty)
    std::int32_t RequiredValidConsecutiveDirectionsCount; // 0x00BC (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UPCGJunoFilterPointsBasedOnLandscapeSlopeSettings, Radius) == 168, "Offset mismatch for UPCGJunoFilterPointsBasedOnLandscapeSlopeSettings::Radius");
static_assert(offsetof(UPCGJunoFilterPointsBasedOnLandscapeSlopeSettings, DirectionCount) == 172, "Offset mismatch for UPCGJunoFilterPointsBasedOnLandscapeSlopeSettings::DirectionCount");
static_assert(offsetof(UPCGJunoFilterPointsBasedOnLandscapeSlopeSettings, SampleOnEachDirectionCount) == 176, "Offset mismatch for UPCGJunoFilterPointsBasedOnLandscapeSlopeSettings::SampleOnEachDirectionCount");
static_assert(offsetof(UPCGJunoFilterPointsBasedOnLandscapeSlopeSettings, BaseDistanceThreshold) == 180, "Offset mismatch for UPCGJunoFilterPointsBasedOnLandscapeSlopeSettings::BaseDistanceThreshold");
static_assert(offsetof(UPCGJunoFilterPointsBasedOnLandscapeSlopeSettings, MaxSlopeAngleDegree) == 184, "Offset mismatch for UPCGJunoFilterPointsBasedOnLandscapeSlopeSettings::MaxSlopeAngleDegree");
static_assert(offsetof(UPCGJunoFilterPointsBasedOnLandscapeSlopeSettings, RequiredValidConsecutiveDirectionsCount) == 188, "Offset mismatch for UPCGJunoFilterPointsBasedOnLandscapeSlopeSettings::RequiredValidConsecutiveDirectionsCount");

// /Script/JunoProceduralWorld.PCGJunoFindFoundationSettings
// Kind: Class; super: PCGSettings
class UPCGJunoFindFoundationSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    float DistanceToSample; // 0x00A8 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UPCGJunoFindFoundationSettings, DistanceToSample) == 168, "Offset mismatch for UPCGJunoFindFoundationSettings::DistanceToSample");

// /Script/JunoProceduralWorld.PCGJunoFractalNoise2DSettings
// Kind: Class; super: PCGSettings
class UPCGJunoFractalNoise2DSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t TilingFactor[0x10]; // 0x00A8 (Size: 0x10, Type: StructProperty)
    float Brightness; // 0x00B8 (Size: 0x4, Type: FloatProperty)
    float Contrast; // 0x00BC (Size: 0x4, Type: FloatProperty)
    std::int32_t Iterations; // 0x00C0 (Size: 0x4, Type: IntProperty)
    std::uint8_t Mode; // 0x00C4 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00C5
    std::uint8_t AttributeName[0x4]; // 0x00C8 (Size: 0x4, Type: NameProperty)
    std::uint8_t VoronoiIDAttributeName[0x4]; // 0x00CC (Size: 0x4, Type: NameProperty)
    std::uint8_t bVoronoiOrientSamplesToCellEdge; // 0x00D0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x00D1
    double VoronoiDistortion; // 0x00D8 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t VoronoiDistortionTiling[0x10]; // 0x00E0 (Size: 0x10, Type: StructProperty)
    std::int32_t TiledVoronoiResolution; // 0x00F0 (Size: 0x4, Type: IntProperty)
    std::uint8_t DensityMode; // 0x00F4 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x3]; // 0x00F5
    std::uint8_t Offset[0x10]; // 0x00F8 (Size: 0x10, Type: StructProperty)
    std::uint8_t RandomizedOffset[0x10]; // 0x0108 (Size: 0x10, Type: StructProperty)
    float EdgeBlendDistance; // 0x0118 (Size: 0x4, Type: FloatProperty)
    float EdgeNoiseBrightness; // 0x011C (Size: 0x4, Type: FloatProperty)
    float EdgeNoiseContrast; // 0x0120 (Size: 0x4, Type: FloatProperty)
    float EdgeBlendCurve; // 0x0124 (Size: 0x4, Type: FloatProperty)
    float EdgeBlendCurveOffset; // 0x0128 (Size: 0x4, Type: FloatProperty)
    float EdgeBlendNoise; // 0x012C (Size: 0x4, Type: FloatProperty)
    std::uint8_t EdgeBlendFadeOut; // 0x0130 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x7]; // 0x0131
    std::uint8_t EdgeBlendNoiseTilingFactor[0x10]; // 0x0138 (Size: 0x10, Type: StructProperty)
    std::uint8_t EdgeNoiseMode; // 0x0148 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0005[0x3]; // 0x0149
    std::int32_t EdgeNoiseIterations; // 0x014C (Size: 0x4, Type: IntProperty)
    std::int32_t EdgeBlendCellCount; // 0x0150 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UPCGJunoFractalNoise2DSettings, TilingFactor) == 168, "Offset mismatch for UPCGJunoFractalNoise2DSettings::TilingFactor");
static_assert(offsetof(UPCGJunoFractalNoise2DSettings, Brightness) == 184, "Offset mismatch for UPCGJunoFractalNoise2DSettings::Brightness");
static_assert(offsetof(UPCGJunoFractalNoise2DSettings, Contrast) == 188, "Offset mismatch for UPCGJunoFractalNoise2DSettings::Contrast");
static_assert(offsetof(UPCGJunoFractalNoise2DSettings, Iterations) == 192, "Offset mismatch for UPCGJunoFractalNoise2DSettings::Iterations");
static_assert(offsetof(UPCGJunoFractalNoise2DSettings, Mode) == 196, "Offset mismatch for UPCGJunoFractalNoise2DSettings::Mode");
static_assert(offsetof(UPCGJunoFractalNoise2DSettings, AttributeName) == 200, "Offset mismatch for UPCGJunoFractalNoise2DSettings::AttributeName");
static_assert(offsetof(UPCGJunoFractalNoise2DSettings, VoronoiIDAttributeName) == 204, "Offset mismatch for UPCGJunoFractalNoise2DSettings::VoronoiIDAttributeName");
static_assert(offsetof(UPCGJunoFractalNoise2DSettings, bVoronoiOrientSamplesToCellEdge) == 208, "Offset mismatch for UPCGJunoFractalNoise2DSettings::bVoronoiOrientSamplesToCellEdge");
static_assert(offsetof(UPCGJunoFractalNoise2DSettings, VoronoiDistortion) == 216, "Offset mismatch for UPCGJunoFractalNoise2DSettings::VoronoiDistortion");
static_assert(offsetof(UPCGJunoFractalNoise2DSettings, VoronoiDistortionTiling) == 224, "Offset mismatch for UPCGJunoFractalNoise2DSettings::VoronoiDistortionTiling");
static_assert(offsetof(UPCGJunoFractalNoise2DSettings, TiledVoronoiResolution) == 240, "Offset mismatch for UPCGJunoFractalNoise2DSettings::TiledVoronoiResolution");
static_assert(offsetof(UPCGJunoFractalNoise2DSettings, DensityMode) == 244, "Offset mismatch for UPCGJunoFractalNoise2DSettings::DensityMode");
static_assert(offsetof(UPCGJunoFractalNoise2DSettings, Offset) == 248, "Offset mismatch for UPCGJunoFractalNoise2DSettings::Offset");
static_assert(offsetof(UPCGJunoFractalNoise2DSettings, RandomizedOffset) == 264, "Offset mismatch for UPCGJunoFractalNoise2DSettings::RandomizedOffset");
static_assert(offsetof(UPCGJunoFractalNoise2DSettings, EdgeBlendDistance) == 280, "Offset mismatch for UPCGJunoFractalNoise2DSettings::EdgeBlendDistance");
static_assert(offsetof(UPCGJunoFractalNoise2DSettings, EdgeNoiseBrightness) == 284, "Offset mismatch for UPCGJunoFractalNoise2DSettings::EdgeNoiseBrightness");
static_assert(offsetof(UPCGJunoFractalNoise2DSettings, EdgeNoiseContrast) == 288, "Offset mismatch for UPCGJunoFractalNoise2DSettings::EdgeNoiseContrast");
static_assert(offsetof(UPCGJunoFractalNoise2DSettings, EdgeBlendCurve) == 292, "Offset mismatch for UPCGJunoFractalNoise2DSettings::EdgeBlendCurve");
static_assert(offsetof(UPCGJunoFractalNoise2DSettings, EdgeBlendCurveOffset) == 296, "Offset mismatch for UPCGJunoFractalNoise2DSettings::EdgeBlendCurveOffset");
static_assert(offsetof(UPCGJunoFractalNoise2DSettings, EdgeBlendNoise) == 300, "Offset mismatch for UPCGJunoFractalNoise2DSettings::EdgeBlendNoise");
static_assert(offsetof(UPCGJunoFractalNoise2DSettings, EdgeBlendFadeOut) == 304, "Offset mismatch for UPCGJunoFractalNoise2DSettings::EdgeBlendFadeOut");
static_assert(offsetof(UPCGJunoFractalNoise2DSettings, EdgeBlendNoiseTilingFactor) == 312, "Offset mismatch for UPCGJunoFractalNoise2DSettings::EdgeBlendNoiseTilingFactor");
static_assert(offsetof(UPCGJunoFractalNoise2DSettings, EdgeNoiseMode) == 328, "Offset mismatch for UPCGJunoFractalNoise2DSettings::EdgeNoiseMode");
static_assert(offsetof(UPCGJunoFractalNoise2DSettings, EdgeNoiseIterations) == 332, "Offset mismatch for UPCGJunoFractalNoise2DSettings::EdgeNoiseIterations");
static_assert(offsetof(UPCGJunoFractalNoise2DSettings, EdgeBlendCellCount) == 336, "Offset mismatch for UPCGJunoFractalNoise2DSettings::EdgeBlendCellCount");

// /Script/JunoProceduralWorld.PCGJunoLoadDataSettings
// Kind: Class; super: PCGSettings
class UPCGJunoLoadDataSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    TArray<void*> Pins; // 0x00A8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Source; // 0x00B8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00B9
    std::uint8_t AdditionalExtents[0x18]; // 0x00C0 (Size: 0x18, Type: StructProperty)
    FName Tag; // 0x00D8 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UPCGJunoLoadDataSettings, Pins) == 168, "Offset mismatch for UPCGJunoLoadDataSettings::Pins");
static_assert(offsetof(UPCGJunoLoadDataSettings, Source) == 184, "Offset mismatch for UPCGJunoLoadDataSettings::Source");
static_assert(offsetof(UPCGJunoLoadDataSettings, AdditionalExtents) == 192, "Offset mismatch for UPCGJunoLoadDataSettings::AdditionalExtents");
static_assert(offsetof(UPCGJunoLoadDataSettings, Tag) == 216, "Offset mismatch for UPCGJunoLoadDataSettings::Tag");

// /Script/JunoProceduralWorld.PCGJunoMaskData
// Kind: Class; super: PCGData
class UPCGJunoMaskData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint64_t UID; // 0x0028 (Size: 0x8, Type: UInt64Property)
    std::uint8_t Pad_0001[0x8]; // 0x0030
    void* MetaData; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPCGJunoMaskData, UID) == 40, "Offset mismatch for UPCGJunoMaskData::UID");
static_assert(offsetof(UPCGJunoMaskData, MetaData) == 56, "Offset mismatch for UPCGJunoMaskData::MetaData");

// /Script/JunoProceduralWorld.PCGJunoPathfindSettings
// Kind: Class; super: PCGSettings
class UPCGJunoPathfindSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    FName ProceduralRouteTag; // 0x00A8 (Size: 0x8, Type: NameProperty)
    TArray<void*> InputPins; // 0x00B0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> OutputPins; // 0x00C0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPCGJunoPathfindSettings, ProceduralRouteTag) == 168, "Offset mismatch for UPCGJunoPathfindSettings::ProceduralRouteTag");
static_assert(offsetof(UPCGJunoPathfindSettings, InputPins) == 176, "Offset mismatch for UPCGJunoPathfindSettings::InputPins");
static_assert(offsetof(UPCGJunoPathfindSettings, OutputPins) == 192, "Offset mismatch for UPCGJunoPathfindSettings::OutputPins");

// /Script/JunoProceduralWorld.PCGJunoProjectPositionSettings
// Kind: Class; super: PCGSettings
class UPCGJunoProjectPositionSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t bProjectLandscapeMetadata; // 0x00A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bProjectPositions; // 0x00A9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bProjectRotations; // 0x00AA (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGJunoProjectPositionSettings, bProjectLandscapeMetadata) == 168, "Offset mismatch for UPCGJunoProjectPositionSettings::bProjectLandscapeMetadata");
static_assert(offsetof(UPCGJunoProjectPositionSettings, bProjectPositions) == 169, "Offset mismatch for UPCGJunoProjectPositionSettings::bProjectPositions");
static_assert(offsetof(UPCGJunoProjectPositionSettings, bProjectRotations) == 170, "Offset mismatch for UPCGJunoProjectPositionSettings::bProjectRotations");

// /Script/JunoProceduralWorld.PCGJunoReadLandscapeSplinesSettings
// Kind: Class; super: PCGSettings
class UPCGJunoReadLandscapeSplinesSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t ExtraSearchExtents[0x18]; // 0x00A8 (Size: 0x18, Type: StructProperty)
    std::uint8_t bPerformBoundsCheck; // 0x00C0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGJunoReadLandscapeSplinesSettings, ExtraSearchExtents) == 168, "Offset mismatch for UPCGJunoReadLandscapeSplinesSettings::ExtraSearchExtents");
static_assert(offsetof(UPCGJunoReadLandscapeSplinesSettings, bPerformBoundsCheck) == 192, "Offset mismatch for UPCGJunoReadLandscapeSplinesSettings::bPerformBoundsCheck");

// /Script/JunoProceduralWorld.PCGJunoReadProceduralSplinesSettings
// Kind: Class; super: PCGSettings
class UPCGJunoReadProceduralSplinesSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    FName ProceduralRouteTag; // 0x00A8 (Size: 0x8, Type: NameProperty)
    TArray<void*> OutputPins; // 0x00B0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPCGJunoReadProceduralSplinesSettings, ProceduralRouteTag) == 168, "Offset mismatch for UPCGJunoReadProceduralSplinesSettings::ProceduralRouteTag");
static_assert(offsetof(UPCGJunoReadProceduralSplinesSettings, OutputPins) == 176, "Offset mismatch for UPCGJunoReadProceduralSplinesSettings::OutputPins");

// /Script/JunoProceduralWorld.PCGJunoRoadAINavigationSettings
// Kind: Class; super: PCGSettings
class UPCGJunoRoadAINavigationSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t RoadClusterClass[0x20]; // 0x00A8 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t PatrolPathClass[0x20]; // 0x00C8 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t PatrolPointClass[0x20]; // 0x00E8 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t GraphSettings[0x1]; // 0x0108 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPCGJunoRoadAINavigationSettings, RoadClusterClass) == 168, "Offset mismatch for UPCGJunoRoadAINavigationSettings::RoadClusterClass");
static_assert(offsetof(UPCGJunoRoadAINavigationSettings, PatrolPathClass) == 200, "Offset mismatch for UPCGJunoRoadAINavigationSettings::PatrolPathClass");
static_assert(offsetof(UPCGJunoRoadAINavigationSettings, PatrolPointClass) == 232, "Offset mismatch for UPCGJunoRoadAINavigationSettings::PatrolPointClass");
static_assert(offsetof(UPCGJunoRoadAINavigationSettings, GraphSettings) == 264, "Offset mismatch for UPCGJunoRoadAINavigationSettings::GraphSettings");

// /Script/JunoProceduralWorld.PCGJunoSpawnLivingWorldStaticPointSettings
// Kind: Class; super: PCGSettings
class UPCGJunoSpawnLivingWorldStaticPointSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t FiltersTags[0x20]; // 0x00A8 (Size: 0x20, Type: StructProperty)
    TArray<void*> ConditionalTags; // 0x00C8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ConditionalTagsSets; // 0x00D8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bExclusiveConditionalTags; // 0x00E8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseLightStaticPoint; // 0x00E9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x00EA
    std::uint8_t StaticPointClass[0x20]; // 0x00F0 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t LightStaticPointClass[0x20]; // 0x0110 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t LightStaticPointNavInfoClass[0x20]; // 0x0130 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t PointClusterClass[0x20]; // 0x0150 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t ClusterTag[0x1]; // 0x0170 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPCGJunoSpawnLivingWorldStaticPointSettings, FiltersTags) == 168, "Offset mismatch for UPCGJunoSpawnLivingWorldStaticPointSettings::FiltersTags");
static_assert(offsetof(UPCGJunoSpawnLivingWorldStaticPointSettings, ConditionalTags) == 200, "Offset mismatch for UPCGJunoSpawnLivingWorldStaticPointSettings::ConditionalTags");
static_assert(offsetof(UPCGJunoSpawnLivingWorldStaticPointSettings, ConditionalTagsSets) == 216, "Offset mismatch for UPCGJunoSpawnLivingWorldStaticPointSettings::ConditionalTagsSets");
static_assert(offsetof(UPCGJunoSpawnLivingWorldStaticPointSettings, bExclusiveConditionalTags) == 232, "Offset mismatch for UPCGJunoSpawnLivingWorldStaticPointSettings::bExclusiveConditionalTags");
static_assert(offsetof(UPCGJunoSpawnLivingWorldStaticPointSettings, bUseLightStaticPoint) == 233, "Offset mismatch for UPCGJunoSpawnLivingWorldStaticPointSettings::bUseLightStaticPoint");
static_assert(offsetof(UPCGJunoSpawnLivingWorldStaticPointSettings, StaticPointClass) == 240, "Offset mismatch for UPCGJunoSpawnLivingWorldStaticPointSettings::StaticPointClass");
static_assert(offsetof(UPCGJunoSpawnLivingWorldStaticPointSettings, LightStaticPointClass) == 272, "Offset mismatch for UPCGJunoSpawnLivingWorldStaticPointSettings::LightStaticPointClass");
static_assert(offsetof(UPCGJunoSpawnLivingWorldStaticPointSettings, LightStaticPointNavInfoClass) == 304, "Offset mismatch for UPCGJunoSpawnLivingWorldStaticPointSettings::LightStaticPointNavInfoClass");
static_assert(offsetof(UPCGJunoSpawnLivingWorldStaticPointSettings, PointClusterClass) == 336, "Offset mismatch for UPCGJunoSpawnLivingWorldStaticPointSettings::PointClusterClass");
static_assert(offsetof(UPCGJunoSpawnLivingWorldStaticPointSettings, ClusterTag) == 368, "Offset mismatch for UPCGJunoSpawnLivingWorldStaticPointSettings::ClusterTag");

// /Script/JunoProceduralWorld.PCGJunoStoreDataSettings
// Kind: Class; super: PCGSettings
class UPCGJunoStoreDataSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    TArray<void*> ExpectedPins; // 0x00A8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPCGJunoStoreDataSettings, ExpectedPins) == 168, "Offset mismatch for UPCGJunoStoreDataSettings::ExpectedPins");

// /Script/JunoProceduralWorld.PCGJunoStreamingGameplayVolumePersistenceMigration
// Kind: Class; super: Object
class UPCGJunoStreamingGameplayVolumePersistenceMigration
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoProceduralWorld.PCGJunoUnionMasksNodeSettings
// Kind: Class; super: PCGSettings
class UPCGJunoUnionMasksNodeSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t bIs2D; // 0x00A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00A9
    std::int32_t Resolution; // 0x00AC (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UPCGJunoUnionMasksNodeSettings, bIs2D) == 168, "Offset mismatch for UPCGJunoUnionMasksNodeSettings::bIs2D");
static_assert(offsetof(UPCGJunoUnionMasksNodeSettings, Resolution) == 172, "Offset mismatch for UPCGJunoUnionMasksNodeSettings::Resolution");

// /Script/JunoProceduralWorld.PCGManageLightweightInstances
// Kind: Class; super: PCGManagedActors
class UPCGManageLightweightInstances
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    TSet<void*> GeneratedLWIs; // 0x0060 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(UPCGManageLightweightInstances, GeneratedLWIs) == 96, "Offset mismatch for UPCGManageLightweightInstances::GeneratedLWIs");

// /Script/JunoProceduralWorld.PCGManagedActorInstances
// Kind: Class; super: PCGManagedActors
class UPCGManagedActorInstances
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    TSet<void*> GeneratedInstances; // 0x0060 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(UPCGManagedActorInstances, GeneratedInstances) == 96, "Offset mismatch for UPCGManagedActorInstances::GeneratedInstances");

// /Script/JunoProceduralWorld.PCGResolveAudioBankSettings
// Kind: Class; super: PCGSettings
class UPCGResolveAudioBankSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t AttributeNameForBiomeDataTable[0x4]; // 0x00A8 (Size: 0x4, Type: NameProperty)
    std::uint8_t AttributeNameForResolvedActorPath[0x4]; // 0x00AC (Size: 0x4, Type: NameProperty)
    FName AttributeNameForResolvedAudioBankPath; // 0x00B0 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UPCGResolveAudioBankSettings, AttributeNameForBiomeDataTable) == 168, "Offset mismatch for UPCGResolveAudioBankSettings::AttributeNameForBiomeDataTable");
static_assert(offsetof(UPCGResolveAudioBankSettings, AttributeNameForResolvedActorPath) == 172, "Offset mismatch for UPCGResolveAudioBankSettings::AttributeNameForResolvedActorPath");
static_assert(offsetof(UPCGResolveAudioBankSettings, AttributeNameForResolvedAudioBankPath) == 176, "Offset mismatch for UPCGResolveAudioBankSettings::AttributeNameForResolvedAudioBankPath");

// /Script/JunoProceduralWorld.PCGResolveBiomeIngredientsSettings
// Kind: Class; super: PCGSettings
class UPCGResolveBiomeIngredientsSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t AttributeNameForBiomeTypeFilter[0x4]; // 0x00A8 (Size: 0x4, Type: NameProperty)
    std::uint8_t AttributeNameForBiomeDataTable[0x4]; // 0x00AC (Size: 0x4, Type: NameProperty)
    std::uint8_t AttributeNameForBiomeLayer[0x4]; // 0x00B0 (Size: 0x4, Type: NameProperty)
    std::uint8_t AttributeNameForResolvedActorPath[0x4]; // 0x00B4 (Size: 0x4, Type: NameProperty)
    std::uint8_t AttributeNameForRepresentation[0x4]; // 0x00B8 (Size: 0x4, Type: NameProperty)
    std::uint8_t AttributeNameForResolvedRowName[0x4]; // 0x00BC (Size: 0x4, Type: NameProperty)
    std::uint8_t bApplyBlendToVertical; // 0x00C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bApplyRandomLeanAmount; // 0x00C1 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGResolveBiomeIngredientsSettings, AttributeNameForBiomeTypeFilter) == 168, "Offset mismatch for UPCGResolveBiomeIngredientsSettings::AttributeNameForBiomeTypeFilter");
static_assert(offsetof(UPCGResolveBiomeIngredientsSettings, AttributeNameForBiomeDataTable) == 172, "Offset mismatch for UPCGResolveBiomeIngredientsSettings::AttributeNameForBiomeDataTable");
static_assert(offsetof(UPCGResolveBiomeIngredientsSettings, AttributeNameForBiomeLayer) == 176, "Offset mismatch for UPCGResolveBiomeIngredientsSettings::AttributeNameForBiomeLayer");
static_assert(offsetof(UPCGResolveBiomeIngredientsSettings, AttributeNameForResolvedActorPath) == 180, "Offset mismatch for UPCGResolveBiomeIngredientsSettings::AttributeNameForResolvedActorPath");
static_assert(offsetof(UPCGResolveBiomeIngredientsSettings, AttributeNameForRepresentation) == 184, "Offset mismatch for UPCGResolveBiomeIngredientsSettings::AttributeNameForRepresentation");
static_assert(offsetof(UPCGResolveBiomeIngredientsSettings, AttributeNameForResolvedRowName) == 188, "Offset mismatch for UPCGResolveBiomeIngredientsSettings::AttributeNameForResolvedRowName");
static_assert(offsetof(UPCGResolveBiomeIngredientsSettings, bApplyBlendToVertical) == 192, "Offset mismatch for UPCGResolveBiomeIngredientsSettings::bApplyBlendToVertical");
static_assert(offsetof(UPCGResolveBiomeIngredientsSettings, bApplyRandomLeanAmount) == 193, "Offset mismatch for UPCGResolveBiomeIngredientsSettings::bApplyRandomLeanAmount");

// /Script/JunoProceduralWorld.PCGResolveBiomePOISettings
// Kind: Class; super: PCGSettings
class UPCGResolveBiomePOISettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t AttributeNameForBiomeDataTable[0x4]; // 0x00A8 (Size: 0x4, Type: NameProperty)
    std::uint8_t AttributeNameForResolvedActorPath[0x4]; // 0x00AC (Size: 0x4, Type: NameProperty)
    std::uint8_t AttributeNameForResolvedPOIPath[0x4]; // 0x00B0 (Size: 0x4, Type: NameProperty)
    std::uint8_t AttributeNameForBoundsMultiplier[0x4]; // 0x00B4 (Size: 0x4, Type: NameProperty)
    std::uint8_t AttributeNameForRepresentation[0x4]; // 0x00B8 (Size: 0x4, Type: NameProperty)
    FName AttributeNameForResolvedRowName; // 0x00BC (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UPCGResolveBiomePOISettings, AttributeNameForBiomeDataTable) == 168, "Offset mismatch for UPCGResolveBiomePOISettings::AttributeNameForBiomeDataTable");
static_assert(offsetof(UPCGResolveBiomePOISettings, AttributeNameForResolvedActorPath) == 172, "Offset mismatch for UPCGResolveBiomePOISettings::AttributeNameForResolvedActorPath");
static_assert(offsetof(UPCGResolveBiomePOISettings, AttributeNameForResolvedPOIPath) == 176, "Offset mismatch for UPCGResolveBiomePOISettings::AttributeNameForResolvedPOIPath");
static_assert(offsetof(UPCGResolveBiomePOISettings, AttributeNameForBoundsMultiplier) == 180, "Offset mismatch for UPCGResolveBiomePOISettings::AttributeNameForBoundsMultiplier");
static_assert(offsetof(UPCGResolveBiomePOISettings, AttributeNameForRepresentation) == 184, "Offset mismatch for UPCGResolveBiomePOISettings::AttributeNameForRepresentation");
static_assert(offsetof(UPCGResolveBiomePOISettings, AttributeNameForResolvedRowName) == 188, "Offset mismatch for UPCGResolveBiomePOISettings::AttributeNameForResolvedRowName");

// /Script/JunoProceduralWorld.PCGResolveBiomeSettings
// Kind: Class; super: PCGSettings
class UPCGResolveBiomeSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t DefaultBiome[0x28]; // 0x00A8 (Size: 0x28, Type: StructProperty)
    TArray<void*> Biomes; // 0x00D0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t AttributeNameForResolvedBiome[0x4]; // 0x00E0 (Size: 0x4, Type: NameProperty)
    std::uint8_t AttributeNameForResolvedBiomeEnum[0x4]; // 0x00E4 (Size: 0x4, Type: NameProperty)
    FName AttributeNameForResolvedBiomeDataTable; // 0x00E8 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UPCGResolveBiomeSettings, DefaultBiome) == 168, "Offset mismatch for UPCGResolveBiomeSettings::DefaultBiome");
static_assert(offsetof(UPCGResolveBiomeSettings, Biomes) == 208, "Offset mismatch for UPCGResolveBiomeSettings::Biomes");
static_assert(offsetof(UPCGResolveBiomeSettings, AttributeNameForResolvedBiome) == 224, "Offset mismatch for UPCGResolveBiomeSettings::AttributeNameForResolvedBiome");
static_assert(offsetof(UPCGResolveBiomeSettings, AttributeNameForResolvedBiomeEnum) == 228, "Offset mismatch for UPCGResolveBiomeSettings::AttributeNameForResolvedBiomeEnum");
static_assert(offsetof(UPCGResolveBiomeSettings, AttributeNameForResolvedBiomeDataTable) == 232, "Offset mismatch for UPCGResolveBiomeSettings::AttributeNameForResolvedBiomeDataTable");

// /Script/JunoProceduralWorld.PCGResolvePOISlotsSettings
// Kind: Class; super: PCGSettings
class UPCGResolvePOISlotsSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t AttributeNameForBiomeDataTable[0x4]; // 0x00A8 (Size: 0x4, Type: NameProperty)
    std::uint8_t AttributeNameForPotentialPIOsDataTable[0x4]; // 0x00AC (Size: 0x4, Type: NameProperty)
    std::uint8_t AttributeNameForResolvedActorPath[0x4]; // 0x00B0 (Size: 0x4, Type: NameProperty)
    std::uint8_t AttributeNameForResolvedPOIPath[0x4]; // 0x00B4 (Size: 0x4, Type: NameProperty)
    std::uint8_t AttributeNameForResolvedSlotSize[0x4]; // 0x00B8 (Size: 0x4, Type: NameProperty)
    FName AttributeNameForResolvedTerrainHeightPatch; // 0x00BC (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UPCGResolvePOISlotsSettings, AttributeNameForBiomeDataTable) == 168, "Offset mismatch for UPCGResolvePOISlotsSettings::AttributeNameForBiomeDataTable");
static_assert(offsetof(UPCGResolvePOISlotsSettings, AttributeNameForPotentialPIOsDataTable) == 172, "Offset mismatch for UPCGResolvePOISlotsSettings::AttributeNameForPotentialPIOsDataTable");
static_assert(offsetof(UPCGResolvePOISlotsSettings, AttributeNameForResolvedActorPath) == 176, "Offset mismatch for UPCGResolvePOISlotsSettings::AttributeNameForResolvedActorPath");
static_assert(offsetof(UPCGResolvePOISlotsSettings, AttributeNameForResolvedPOIPath) == 180, "Offset mismatch for UPCGResolvePOISlotsSettings::AttributeNameForResolvedPOIPath");
static_assert(offsetof(UPCGResolvePOISlotsSettings, AttributeNameForResolvedSlotSize) == 184, "Offset mismatch for UPCGResolvePOISlotsSettings::AttributeNameForResolvedSlotSize");
static_assert(offsetof(UPCGResolvePOISlotsSettings, AttributeNameForResolvedTerrainHeightPatch) == 188, "Offset mismatch for UPCGResolvePOISlotsSettings::AttributeNameForResolvedTerrainHeightPatch");

// /Script/JunoProceduralWorld.PCGSetAudioBankSettings
// Kind: Class; super: PCGSettings
class UPCGSetAudioBankSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t AttributeNameForResolvedAudioBankPath[0x4]; // 0x00A8 (Size: 0x4, Type: NameProperty)
    FName AttributeNameForSpawnedActorPtr; // 0x00AC (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UPCGSetAudioBankSettings, AttributeNameForResolvedAudioBankPath) == 168, "Offset mismatch for UPCGSetAudioBankSettings::AttributeNameForResolvedAudioBankPath");
static_assert(offsetof(UPCGSetAudioBankSettings, AttributeNameForSpawnedActorPtr) == 172, "Offset mismatch for UPCGSetAudioBankSettings::AttributeNameForSpawnedActorPtr");

// /Script/JunoProceduralWorld.PCGSetFoundationLevelSettings
// Kind: Class; super: PCGSettings
class UPCGSetFoundationLevelSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t AttributeNameForResolvedPOIPath[0x4]; // 0x00A8 (Size: 0x4, Type: NameProperty)
    FName AttributeNameForSpawnedActorPtr; // 0x00AC (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UPCGSetFoundationLevelSettings, AttributeNameForResolvedPOIPath) == 168, "Offset mismatch for UPCGSetFoundationLevelSettings::AttributeNameForResolvedPOIPath");
static_assert(offsetof(UPCGSetFoundationLevelSettings, AttributeNameForSpawnedActorPtr) == 172, "Offset mismatch for UPCGSetFoundationLevelSettings::AttributeNameForSpawnedActorPtr");

// /Script/JunoProceduralWorld.PCGSetLevelInstanceLevelSettings
// Kind: Class; super: PCGSettings
class UPCGSetLevelInstanceLevelSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t AttributeNameForResolvedPOIPath[0x4]; // 0x00A8 (Size: 0x4, Type: NameProperty)
    FName AttributeNameForSpawnedActorPtr; // 0x00AC (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UPCGSetLevelInstanceLevelSettings, AttributeNameForResolvedPOIPath) == 168, "Offset mismatch for UPCGSetLevelInstanceLevelSettings::AttributeNameForResolvedPOIPath");
static_assert(offsetof(UPCGSetLevelInstanceLevelSettings, AttributeNameForSpawnedActorPtr) == 172, "Offset mismatch for UPCGSetLevelInstanceLevelSettings::AttributeNameForSpawnedActorPtr");

// /Script/JunoProceduralWorld.PCGSetPOISlotPropertiesSettings
// Kind: Class; super: PCGSettings
class UPCGSetPOISlotPropertiesSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t AttributeNameForSpawnedActorPtr[0x4]; // 0x00A8 (Size: 0x4, Type: NameProperty)
    std::uint8_t AttributeNameForPotentialPIOsDataTable[0x4]; // 0x00AC (Size: 0x4, Type: NameProperty)
    std::uint8_t AttributeNameForResolvedPOIPath[0x4]; // 0x00B0 (Size: 0x4, Type: NameProperty)
    std::uint8_t AttributeNameForResolvedSlotSize[0x4]; // 0x00B4 (Size: 0x4, Type: NameProperty)
    FName AttributeNameForResolvedTerrainHeightPatch; // 0x00B8 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UPCGSetPOISlotPropertiesSettings, AttributeNameForSpawnedActorPtr) == 168, "Offset mismatch for UPCGSetPOISlotPropertiesSettings::AttributeNameForSpawnedActorPtr");
static_assert(offsetof(UPCGSetPOISlotPropertiesSettings, AttributeNameForPotentialPIOsDataTable) == 172, "Offset mismatch for UPCGSetPOISlotPropertiesSettings::AttributeNameForPotentialPIOsDataTable");
static_assert(offsetof(UPCGSetPOISlotPropertiesSettings, AttributeNameForResolvedPOIPath) == 176, "Offset mismatch for UPCGSetPOISlotPropertiesSettings::AttributeNameForResolvedPOIPath");
static_assert(offsetof(UPCGSetPOISlotPropertiesSettings, AttributeNameForResolvedSlotSize) == 180, "Offset mismatch for UPCGSetPOISlotPropertiesSettings::AttributeNameForResolvedSlotSize");
static_assert(offsetof(UPCGSetPOISlotPropertiesSettings, AttributeNameForResolvedTerrainHeightPatch) == 184, "Offset mismatch for UPCGSetPOISlotPropertiesSettings::AttributeNameForResolvedTerrainHeightPatch");

// /Script/JunoProceduralWorld.PCGSpawnActorForPathSettings
// Kind: Class; super: PCGSettings
class UPCGSpawnActorForPathSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t bUseInstancedActors; // 0x00A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00A9
    std::uint8_t InstanceTags[0x20]; // 0x00B0 (Size: 0x20, Type: StructProperty)
    TArray<void*> TagsToAddOnActors; // 0x00D0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bAddSpawnedActorAttribute; // 0x00E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x00E1
    std::uint8_t AttributeNameForSpawnedActorPtr[0x4]; // 0x00E4 (Size: 0x4, Type: NameProperty)
    std::uint8_t PathAttributeName[0x4]; // 0x00E8 (Size: 0x4, Type: NameProperty)
    std::uint8_t MaterialOverrideAttributeName[0x4]; // 0x00EC (Size: 0x4, Type: NameProperty)
    FName AttributeNameForRepresentation; // 0x00F0 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UPCGSpawnActorForPathSettings, bUseInstancedActors) == 168, "Offset mismatch for UPCGSpawnActorForPathSettings::bUseInstancedActors");
static_assert(offsetof(UPCGSpawnActorForPathSettings, InstanceTags) == 176, "Offset mismatch for UPCGSpawnActorForPathSettings::InstanceTags");
static_assert(offsetof(UPCGSpawnActorForPathSettings, TagsToAddOnActors) == 208, "Offset mismatch for UPCGSpawnActorForPathSettings::TagsToAddOnActors");
static_assert(offsetof(UPCGSpawnActorForPathSettings, bAddSpawnedActorAttribute) == 224, "Offset mismatch for UPCGSpawnActorForPathSettings::bAddSpawnedActorAttribute");
static_assert(offsetof(UPCGSpawnActorForPathSettings, AttributeNameForSpawnedActorPtr) == 228, "Offset mismatch for UPCGSpawnActorForPathSettings::AttributeNameForSpawnedActorPtr");
static_assert(offsetof(UPCGSpawnActorForPathSettings, PathAttributeName) == 232, "Offset mismatch for UPCGSpawnActorForPathSettings::PathAttributeName");
static_assert(offsetof(UPCGSpawnActorForPathSettings, MaterialOverrideAttributeName) == 236, "Offset mismatch for UPCGSpawnActorForPathSettings::MaterialOverrideAttributeName");
static_assert(offsetof(UPCGSpawnActorForPathSettings, AttributeNameForRepresentation) == 240, "Offset mismatch for UPCGSpawnActorForPathSettings::AttributeNameForRepresentation");

// /Script/JunoProceduralWorld.PCGSpawnJunoBiomeSettings
// Kind: Class; super: PCGSettings
class UPCGSpawnJunoBiomeSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t DefaultBiome[0x28]; // 0x00A8 (Size: 0x28, Type: StructProperty)
    TArray<void*> Biomes; // 0x00D0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPCGSpawnJunoBiomeSettings, DefaultBiome) == 168, "Offset mismatch for UPCGSpawnJunoBiomeSettings::DefaultBiome");
static_assert(offsetof(UPCGSpawnJunoBiomeSettings, Biomes) == 208, "Offset mismatch for UPCGSpawnJunoBiomeSettings::Biomes");

// /Script/JunoProceduralWorld.PathfinderGuideSetsDataAsset
// Kind: Class; super: DataAsset
class UPathfinderGuideSetsDataAsset
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> GuideSets; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPathfinderGuideSetsDataAsset, GuideSets) == 40, "Offset mismatch for UPathfinderGuideSetsDataAsset::GuideSets");

// /Script/JunoProceduralWorld.ProceduralRiverDefinition
// Kind: Class; super: ProceduralRouteDefinition
class UProceduralRiverDefinition
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    void* GenRulesAsset; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t RiverTier; // 0x0038 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0039
    void* WaterBody; // 0x0040 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UProceduralRiverDefinition, GenRulesAsset) == 48, "Offset mismatch for UProceduralRiverDefinition::GenRulesAsset");
static_assert(offsetof(UProceduralRiverDefinition, RiverTier) == 56, "Offset mismatch for UProceduralRiverDefinition::RiverTier");
static_assert(offsetof(UProceduralRiverDefinition, WaterBody) == 64, "Offset mismatch for UProceduralRiverDefinition::WaterBody");

// /Script/JunoProceduralWorld.ProceduralRiverGenRulesAsset
// Kind: Class; super: DataAsset
class UProceduralRiverGenRulesAsset
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TMap<void*, void*> RuleSet; // 0x0028 (Size: 0x10, Type: MapProperty)
    float RiverGridGridSize; // 0x0038 (Size: 0x4, Type: FloatProperty)
    std::int32_t RasterizeToRiverGridExtent; // 0x003C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UProceduralRiverGenRulesAsset, RuleSet) == 40, "Offset mismatch for UProceduralRiverGenRulesAsset::RuleSet");
static_assert(offsetof(UProceduralRiverGenRulesAsset, RiverGridGridSize) == 56, "Offset mismatch for UProceduralRiverGenRulesAsset::RiverGridGridSize");
static_assert(offsetof(UProceduralRiverGenRulesAsset, RasterizeToRiverGridExtent) == 60, "Offset mismatch for UProceduralRiverGenRulesAsset::RasterizeToRiverGridExtent");

// /Script/JunoProceduralWorld.ProceduralRivers
// Kind: Class; super: LandmassProceduralRoute
class UProceduralRivers
{
public:
    std::uint8_t Pad_0000[0x338]; // 0x0000
    void* WaterClass; // 0x0338 (Size: 0x8, Type: ClassProperty)
    void* GenRulesAsset; // 0x0340 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> AnchorsInput; // 0x0348 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> OutRivers; // 0x0358 (Size: 0x10, Type: ArrayProperty)
    void* CurrentRoute; // 0x0368 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bEnableDebug; // 0x0370 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UProceduralRivers, WaterClass) == 824, "Offset mismatch for UProceduralRivers::WaterClass");
static_assert(offsetof(UProceduralRivers, GenRulesAsset) == 832, "Offset mismatch for UProceduralRivers::GenRulesAsset");
static_assert(offsetof(UProceduralRivers, AnchorsInput) == 840, "Offset mismatch for UProceduralRivers::AnchorsInput");
static_assert(offsetof(UProceduralRivers, OutRivers) == 856, "Offset mismatch for UProceduralRivers::OutRivers");
static_assert(offsetof(UProceduralRivers, CurrentRoute) == 872, "Offset mismatch for UProceduralRivers::CurrentRoute");
static_assert(offsetof(UProceduralRivers, bEnableDebug) == 880, "Offset mismatch for UProceduralRivers::bEnableDebug");

// /Script/JunoProceduralWorld.ProceduralRoadDefinition
// Kind: Class; super: ProceduralRouteDefinition
class UProceduralRoadDefinition
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    void* GenRulesAsset; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t RoadTier; // 0x0038 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0039
    std::uint8_t Transform[0x60]; // 0x0040 (Size: 0x60, Type: StructProperty)
    TArray<void*> OutInterpSegments; // 0x00A0 (Size: 0x10, Type: ArrayProperty)
    float Length; // 0x00B0 (Size: 0x4, Type: FloatProperty)
    float LUTGridSize; // 0x00B4 (Size: 0x4, Type: FloatProperty)
    TArray<void*> LUT; // 0x00B8 (Size: 0x10, Type: ArrayProperty)
    float LUTResolution; // 0x00C8 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UProceduralRoadDefinition, GenRulesAsset) == 48, "Offset mismatch for UProceduralRoadDefinition::GenRulesAsset");
static_assert(offsetof(UProceduralRoadDefinition, RoadTier) == 56, "Offset mismatch for UProceduralRoadDefinition::RoadTier");
static_assert(offsetof(UProceduralRoadDefinition, Transform) == 64, "Offset mismatch for UProceduralRoadDefinition::Transform");
static_assert(offsetof(UProceduralRoadDefinition, OutInterpSegments) == 160, "Offset mismatch for UProceduralRoadDefinition::OutInterpSegments");
static_assert(offsetof(UProceduralRoadDefinition, Length) == 176, "Offset mismatch for UProceduralRoadDefinition::Length");
static_assert(offsetof(UProceduralRoadDefinition, LUTGridSize) == 180, "Offset mismatch for UProceduralRoadDefinition::LUTGridSize");
static_assert(offsetof(UProceduralRoadDefinition, LUT) == 184, "Offset mismatch for UProceduralRoadDefinition::LUT");
static_assert(offsetof(UProceduralRoadDefinition, LUTResolution) == 200, "Offset mismatch for UProceduralRoadDefinition::LUTResolution");

// /Script/JunoProceduralWorld.ProceduralRoads
// Kind: Class; super: LandmassProceduralRoute
class UProceduralRoads
{
public:
    std::uint8_t Pad_0000[0x338]; // 0x0000
    std::uint8_t bDoesAffectLandscape; // 0x0338 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0339
    void* SplinesComponent; // 0x0340 (Size: 0x8, Type: ObjectProperty)
    std::int32_t SplineLayerIndex; // 0x0348 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x034C
    void* GenRulesAsset; // 0x0350 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> OutRoads; // 0x0358 (Size: 0x10, Type: ArrayProperty)
    void* CurrentRoute; // 0x0368 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0003[0x60]; // 0x0370
    TArray<void*> SelectedSplineControlPoints; // 0x03D0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0004[0x278]; // 0x03E0
    TArray<void*> ControlPoints; // 0x0658 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Segments; // 0x0668 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UProceduralRoads, bDoesAffectLandscape) == 824, "Offset mismatch for UProceduralRoads::bDoesAffectLandscape");
static_assert(offsetof(UProceduralRoads, SplinesComponent) == 832, "Offset mismatch for UProceduralRoads::SplinesComponent");
static_assert(offsetof(UProceduralRoads, SplineLayerIndex) == 840, "Offset mismatch for UProceduralRoads::SplineLayerIndex");
static_assert(offsetof(UProceduralRoads, GenRulesAsset) == 848, "Offset mismatch for UProceduralRoads::GenRulesAsset");
static_assert(offsetof(UProceduralRoads, OutRoads) == 856, "Offset mismatch for UProceduralRoads::OutRoads");
static_assert(offsetof(UProceduralRoads, CurrentRoute) == 872, "Offset mismatch for UProceduralRoads::CurrentRoute");
static_assert(offsetof(UProceduralRoads, SelectedSplineControlPoints) == 976, "Offset mismatch for UProceduralRoads::SelectedSplineControlPoints");
static_assert(offsetof(UProceduralRoads, ControlPoints) == 1624, "Offset mismatch for UProceduralRoads::ControlPoints");
static_assert(offsetof(UProceduralRoads, Segments) == 1640, "Offset mismatch for UProceduralRoads::Segments");

// /Script/JunoProceduralWorld.ProceduralRouteDefinition
// Kind: Class; super: Object
class UProceduralRouteDefinition
{
public:
    std::uint8_t Opaque[1];
};

/**
 * decamp dumper generated SDK
 * Package: /Script/NavigationSystem
 */
#pragma once
#include "Basic.h"

// /Script/NavigationSystem.NavCollisionBox
// Kind: ScriptStruct; super: none
struct FNavCollisionBox
{
public:
    std::uint8_t Offset[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t Extent[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FNavCollisionBox, Offset) == 0, "Offset mismatch for FNavCollisionBox::Offset");
static_assert(offsetof(FNavCollisionBox, Extent) == 24, "Offset mismatch for FNavCollisionBox::Extent");

// /Script/NavigationSystem.NavCollisionCylinder
// Kind: ScriptStruct; super: none
struct FNavCollisionCylinder
{
public:
    std::uint8_t Offset[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    float Radius; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float Height; // 0x001C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FNavCollisionCylinder, Offset) == 0, "Offset mismatch for FNavCollisionCylinder::Offset");
static_assert(offsetof(FNavCollisionCylinder, Radius) == 24, "Offset mismatch for FNavCollisionCylinder::Radius");
static_assert(offsetof(FNavCollisionCylinder, Height) == 28, "Offset mismatch for FNavCollisionCylinder::Height");

// /Script/NavigationSystem.NavGraphEdge
// Kind: ScriptStruct; super: none
struct FNavGraphEdge
{
public:
    std::uint8_t Opaque[1];
};


// /Script/NavigationSystem.NavGraphNode
// Kind: ScriptStruct; super: none
struct FNavGraphNode
{
public:
    void* Owner; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FNavGraphNode, Owner) == 0, "Offset mismatch for FNavGraphNode::Owner");

// /Script/NavigationSystem.NavLinkCustomInstanceData
// Kind: ScriptStruct; super: ActorComponentInstanceData
struct FNavLinkCustomInstanceData
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t CustomLinkId[0x8]; // 0x0068 (Size: 0x8, Type: StructProperty)
    std::uint8_t AuxiliaryCustomLinkId[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FNavLinkCustomInstanceData, CustomLinkId) == 104, "Offset mismatch for FNavLinkCustomInstanceData::CustomLinkId");
static_assert(offsetof(FNavLinkCustomInstanceData, AuxiliaryCustomLinkId) == 112, "Offset mismatch for FNavLinkCustomInstanceData::AuxiliaryCustomLinkId");

// /Script/NavigationSystem.NavLinkGenerationJumpConfig
// Kind: ScriptStruct; super: none
struct FNavLinkGenerationJumpConfig
{
public:
    std::uint8_t bEnabled; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::uint8_t Name[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    float JumpLength; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float JumpDistanceFromEdge; // 0x000C (Size: 0x4, Type: FloatProperty)
    float JumpMaxDepth; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float JumpHeight; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float JumpEndsHeightTolerance; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float SamplingSeparationFactor; // 0x001C (Size: 0x4, Type: FloatProperty)
    float FilterDistanceThreshold; // 0x0020 (Size: 0x4, Type: FloatProperty)
    std::uint16_t LinkBuilderFlags; // 0x0024 (Size: 0x2, Type: UInt16Property)
    std::uint8_t Pad_0001[0x2]; // 0x0026
    void* DownDirectionAreaClass; // 0x0028 (Size: 0x8, Type: ClassProperty)
    void* UpDirectionAreaClass; // 0x0030 (Size: 0x8, Type: ClassProperty)
    void* LinkProxyClass; // 0x0038 (Size: 0x8, Type: ClassProperty)
    std::uint8_t LinkProxyId[0x8]; // 0x0040 (Size: 0x8, Type: StructProperty)
    void* LinkProxy; // 0x0048 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bLinkProxyRegistered; // 0x0050 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FNavLinkGenerationJumpConfig, bEnabled) == 0, "Offset mismatch for FNavLinkGenerationJumpConfig::bEnabled");
static_assert(offsetof(FNavLinkGenerationJumpConfig, Name) == 4, "Offset mismatch for FNavLinkGenerationJumpConfig::Name");
static_assert(offsetof(FNavLinkGenerationJumpConfig, JumpLength) == 8, "Offset mismatch for FNavLinkGenerationJumpConfig::JumpLength");
static_assert(offsetof(FNavLinkGenerationJumpConfig, JumpDistanceFromEdge) == 12, "Offset mismatch for FNavLinkGenerationJumpConfig::JumpDistanceFromEdge");
static_assert(offsetof(FNavLinkGenerationJumpConfig, JumpMaxDepth) == 16, "Offset mismatch for FNavLinkGenerationJumpConfig::JumpMaxDepth");
static_assert(offsetof(FNavLinkGenerationJumpConfig, JumpHeight) == 20, "Offset mismatch for FNavLinkGenerationJumpConfig::JumpHeight");
static_assert(offsetof(FNavLinkGenerationJumpConfig, JumpEndsHeightTolerance) == 24, "Offset mismatch for FNavLinkGenerationJumpConfig::JumpEndsHeightTolerance");
static_assert(offsetof(FNavLinkGenerationJumpConfig, SamplingSeparationFactor) == 28, "Offset mismatch for FNavLinkGenerationJumpConfig::SamplingSeparationFactor");
static_assert(offsetof(FNavLinkGenerationJumpConfig, FilterDistanceThreshold) == 32, "Offset mismatch for FNavLinkGenerationJumpConfig::FilterDistanceThreshold");
static_assert(offsetof(FNavLinkGenerationJumpConfig, LinkBuilderFlags) == 36, "Offset mismatch for FNavLinkGenerationJumpConfig::LinkBuilderFlags");
static_assert(offsetof(FNavLinkGenerationJumpConfig, DownDirectionAreaClass) == 40, "Offset mismatch for FNavLinkGenerationJumpConfig::DownDirectionAreaClass");
static_assert(offsetof(FNavLinkGenerationJumpConfig, UpDirectionAreaClass) == 48, "Offset mismatch for FNavLinkGenerationJumpConfig::UpDirectionAreaClass");
static_assert(offsetof(FNavLinkGenerationJumpConfig, LinkProxyClass) == 56, "Offset mismatch for FNavLinkGenerationJumpConfig::LinkProxyClass");
static_assert(offsetof(FNavLinkGenerationJumpConfig, LinkProxyId) == 64, "Offset mismatch for FNavLinkGenerationJumpConfig::LinkProxyId");
static_assert(offsetof(FNavLinkGenerationJumpConfig, LinkProxy) == 72, "Offset mismatch for FNavLinkGenerationJumpConfig::LinkProxy");
static_assert(offsetof(FNavLinkGenerationJumpConfig, bLinkProxyRegistered) == 80, "Offset mismatch for FNavLinkGenerationJumpConfig::bLinkProxyRegistered");

// /Script/NavigationSystem.NavLinkGenerationJumpDownConfig
// Kind: ScriptStruct; super: none
struct FNavLinkGenerationJumpDownConfig
{
public:
    std::uint8_t bEnabled; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float JumpLength; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float JumpDistanceFromEdge; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float JumpMaxDepth; // 0x000C (Size: 0x4, Type: FloatProperty)
    float JumpHeight; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float JumpEndsHeightTolerance; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float SamplingSeparationFactor; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float FilterDistanceThreshold; // 0x001C (Size: 0x4, Type: FloatProperty)
    std::uint16_t LinkBuilderFlags; // 0x0020 (Size: 0x2, Type: UInt16Property)
    std::uint8_t Pad_0001[0x6]; // 0x0022
    void* DownDirectionAreaClass; // 0x0028 (Size: 0x8, Type: ClassProperty)
    void* UpDirectionAreaClass; // 0x0030 (Size: 0x8, Type: ClassProperty)
    void* LinkProxyClass; // 0x0038 (Size: 0x8, Type: ClassProperty)
    std::uint8_t LinkProxyId[0x8]; // 0x0040 (Size: 0x8, Type: StructProperty)
    void* LinkProxy; // 0x0048 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bLinkProxyRegistered; // 0x0050 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FNavLinkGenerationJumpDownConfig, bEnabled) == 0, "Offset mismatch for FNavLinkGenerationJumpDownConfig::bEnabled");
static_assert(offsetof(FNavLinkGenerationJumpDownConfig, JumpLength) == 4, "Offset mismatch for FNavLinkGenerationJumpDownConfig::JumpLength");
static_assert(offsetof(FNavLinkGenerationJumpDownConfig, JumpDistanceFromEdge) == 8, "Offset mismatch for FNavLinkGenerationJumpDownConfig::JumpDistanceFromEdge");
static_assert(offsetof(FNavLinkGenerationJumpDownConfig, JumpMaxDepth) == 12, "Offset mismatch for FNavLinkGenerationJumpDownConfig::JumpMaxDepth");
static_assert(offsetof(FNavLinkGenerationJumpDownConfig, JumpHeight) == 16, "Offset mismatch for FNavLinkGenerationJumpDownConfig::JumpHeight");
static_assert(offsetof(FNavLinkGenerationJumpDownConfig, JumpEndsHeightTolerance) == 20, "Offset mismatch for FNavLinkGenerationJumpDownConfig::JumpEndsHeightTolerance");
static_assert(offsetof(FNavLinkGenerationJumpDownConfig, SamplingSeparationFactor) == 24, "Offset mismatch for FNavLinkGenerationJumpDownConfig::SamplingSeparationFactor");
static_assert(offsetof(FNavLinkGenerationJumpDownConfig, FilterDistanceThreshold) == 28, "Offset mismatch for FNavLinkGenerationJumpDownConfig::FilterDistanceThreshold");
static_assert(offsetof(FNavLinkGenerationJumpDownConfig, LinkBuilderFlags) == 32, "Offset mismatch for FNavLinkGenerationJumpDownConfig::LinkBuilderFlags");
static_assert(offsetof(FNavLinkGenerationJumpDownConfig, DownDirectionAreaClass) == 40, "Offset mismatch for FNavLinkGenerationJumpDownConfig::DownDirectionAreaClass");
static_assert(offsetof(FNavLinkGenerationJumpDownConfig, UpDirectionAreaClass) == 48, "Offset mismatch for FNavLinkGenerationJumpDownConfig::UpDirectionAreaClass");
static_assert(offsetof(FNavLinkGenerationJumpDownConfig, LinkProxyClass) == 56, "Offset mismatch for FNavLinkGenerationJumpDownConfig::LinkProxyClass");
static_assert(offsetof(FNavLinkGenerationJumpDownConfig, LinkProxyId) == 64, "Offset mismatch for FNavLinkGenerationJumpDownConfig::LinkProxyId");
static_assert(offsetof(FNavLinkGenerationJumpDownConfig, LinkProxy) == 72, "Offset mismatch for FNavLinkGenerationJumpDownConfig::LinkProxy");
static_assert(offsetof(FNavLinkGenerationJumpDownConfig, bLinkProxyRegistered) == 80, "Offset mismatch for FNavLinkGenerationJumpDownConfig::bLinkProxyRegistered");

// /Script/NavigationSystem.NavMeshResolutionParam
// Kind: ScriptStruct; super: none
struct FNavMeshResolutionParam
{
public:
    float CellSize; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float CellHeight; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float AgentMaxStepHeight; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FNavMeshResolutionParam, CellSize) == 0, "Offset mismatch for FNavMeshResolutionParam::CellSize");
static_assert(offsetof(FNavMeshResolutionParam, CellHeight) == 4, "Offset mismatch for FNavMeshResolutionParam::CellHeight");
static_assert(offsetof(FNavMeshResolutionParam, AgentMaxStepHeight) == 8, "Offset mismatch for FNavMeshResolutionParam::AgentMaxStepHeight");

// /Script/NavigationSystem.NavigationFilterArea
// Kind: ScriptStruct; super: none
struct FNavigationFilterArea
{
public:
    void* AreaClass; // 0x0000 (Size: 0x8, Type: ClassProperty)
    float TravelCostOverride; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float EnteringCostOverride; // 0x000C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsExcluded; // 0x0010 (Size: 0x1, Type: BoolProperty)
    // 0x0010 BoolProperty bOverrideEnteringCost (shared storage)
    // 0x0010 BoolProperty bOverrideTravelCost (shared storage)
};

static_assert(offsetof(FNavigationFilterArea, AreaClass) == 0, "Offset mismatch for FNavigationFilterArea::AreaClass");
static_assert(offsetof(FNavigationFilterArea, TravelCostOverride) == 8, "Offset mismatch for FNavigationFilterArea::TravelCostOverride");
static_assert(offsetof(FNavigationFilterArea, EnteringCostOverride) == 12, "Offset mismatch for FNavigationFilterArea::EnteringCostOverride");
static_assert(offsetof(FNavigationFilterArea, bIsExcluded) == 16, "Offset mismatch for FNavigationFilterArea::bIsExcluded");

// /Script/NavigationSystem.NavigationFilterFlags
// Kind: ScriptStruct; super: none
struct FNavigationFilterFlags
{
public:
    std::uint8_t bNavFlag0; // 0x0000 (Size: 0x1, Type: BoolProperty)
    // 0x0000 BoolProperty bNavFlag1 (shared storage)
    // 0x0000 BoolProperty bNavFlag2 (shared storage)
    // 0x0000 BoolProperty bNavFlag3 (shared storage)
    // 0x0000 BoolProperty bNavFlag4 (shared storage)
    // 0x0000 BoolProperty bNavFlag5 (shared storage)
    // 0x0000 BoolProperty bNavFlag6 (shared storage)
    // 0x0000 BoolProperty bNavFlag7 (shared storage)
    std::uint8_t bNavFlag10; // 0x0001 (Size: 0x1, Type: BoolProperty)
    // 0x0001 BoolProperty bNavFlag11 (shared storage)
    // 0x0001 BoolProperty bNavFlag12 (shared storage)
    // 0x0001 BoolProperty bNavFlag13 (shared storage)
    // 0x0001 BoolProperty bNavFlag14 (shared storage)
    // 0x0001 BoolProperty bNavFlag15 (shared storage)
    // 0x0001 BoolProperty bNavFlag8 (shared storage)
    // 0x0001 BoolProperty bNavFlag9 (shared storage)
};

static_assert(offsetof(FNavigationFilterFlags, bNavFlag0) == 0, "Offset mismatch for FNavigationFilterFlags::bNavFlag0");
static_assert(offsetof(FNavigationFilterFlags, bNavFlag10) == 1, "Offset mismatch for FNavigationFilterFlags::bNavFlag10");

// /Script/NavigationSystem.RecastNavMeshTileGenerationDebug
// Kind: ScriptStruct; super: none
struct FRecastNavMeshTileGenerationDebug
{
public:
    std::uint8_t bEnabled; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::uint8_t TileCoordinate[0xC]; // 0x0004 (Size: 0xC, Type: StructProperty)
    std::uint8_t MaxTileCoordinate[0xC]; // 0x0010 (Size: 0xC, Type: StructProperty)
    std::uint8_t bCollisionGeometry; // 0x001C (Size: 0x1, Type: BoolProperty)
    // 0x001C BoolProperty bDynamicAreas (shared storage)
    // 0x001C BoolProperty bGenerateDebugTileOnly (shared storage)
    std::uint8_t Pad_0001[0x3]; // 0x001D
    std::uint8_t HeightFieldRenderMode; // 0x0020 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0021
    std::uint8_t bCompactHeightfield; // 0x0024 (Size: 0x1, Type: BoolProperty)
    // 0x0024 BoolProperty bCompactHeightfieldEroded (shared storage)
    // 0x0024 BoolProperty bHeightFieldLayers (shared storage)
    // 0x0024 BoolProperty bHeightfieldBounds (shared storage)
    // 0x0024 BoolProperty bHeightfieldFromModifierAreas (shared storage)
    // 0x0024 BoolProperty bHeightfieldFromRasterization (shared storage)
    // 0x0024 BoolProperty bHeightfieldPostHeightFiltering (shared storage)
    // 0x0024 BoolProperty bHeightfieldPostInclusionBoundsFiltering (shared storage)
    std::uint8_t bCompactHeightfieldDistances; // 0x0025 (Size: 0x1, Type: BoolProperty)
    // 0x0025 BoolProperty bCompactHeightfieldRegions (shared storage)
    // 0x0025 BoolProperty bSkipContourSimplification (shared storage)
    // 0x0025 BoolProperty bTileCacheContours (shared storage)
    // 0x0025 BoolProperty bTileCacheDetailMesh (shared storage)
    // 0x0025 BoolProperty bTileCacheLayerAreas (shared storage)
    // 0x0025 BoolProperty bTileCacheLayerRegions (shared storage)
    // 0x0025 BoolProperty bTileCachePolyMesh (shared storage)
    std::uint8_t bUseMaxTileCoordinate; // 0x0026 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x1]; // 0x0027
    std::uint16_t LinkGenerationDebugFlags; // 0x0028 (Size: 0x2, Type: UInt16Property)
    std::uint8_t Pad_0004[0x2]; // 0x002A
    std::int32_t LinkGenerationSelectedEdge; // 0x002C (Size: 0x4, Type: IntProperty)
    std::int32_t LinkGenerationSelectedConfig; // 0x0030 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FRecastNavMeshTileGenerationDebug, bEnabled) == 0, "Offset mismatch for FRecastNavMeshTileGenerationDebug::bEnabled");
static_assert(offsetof(FRecastNavMeshTileGenerationDebug, TileCoordinate) == 4, "Offset mismatch for FRecastNavMeshTileGenerationDebug::TileCoordinate");
static_assert(offsetof(FRecastNavMeshTileGenerationDebug, MaxTileCoordinate) == 16, "Offset mismatch for FRecastNavMeshTileGenerationDebug::MaxTileCoordinate");
static_assert(offsetof(FRecastNavMeshTileGenerationDebug, bCollisionGeometry) == 28, "Offset mismatch for FRecastNavMeshTileGenerationDebug::bCollisionGeometry");
static_assert(offsetof(FRecastNavMeshTileGenerationDebug, HeightFieldRenderMode) == 32, "Offset mismatch for FRecastNavMeshTileGenerationDebug::HeightFieldRenderMode");
static_assert(offsetof(FRecastNavMeshTileGenerationDebug, bCompactHeightfield) == 36, "Offset mismatch for FRecastNavMeshTileGenerationDebug::bCompactHeightfield");
static_assert(offsetof(FRecastNavMeshTileGenerationDebug, bCompactHeightfieldDistances) == 37, "Offset mismatch for FRecastNavMeshTileGenerationDebug::bCompactHeightfieldDistances");
static_assert(offsetof(FRecastNavMeshTileGenerationDebug, bUseMaxTileCoordinate) == 38, "Offset mismatch for FRecastNavMeshTileGenerationDebug::bUseMaxTileCoordinate");
static_assert(offsetof(FRecastNavMeshTileGenerationDebug, LinkGenerationDebugFlags) == 40, "Offset mismatch for FRecastNavMeshTileGenerationDebug::LinkGenerationDebugFlags");
static_assert(offsetof(FRecastNavMeshTileGenerationDebug, LinkGenerationSelectedEdge) == 44, "Offset mismatch for FRecastNavMeshTileGenerationDebug::LinkGenerationSelectedEdge");
static_assert(offsetof(FRecastNavMeshTileGenerationDebug, LinkGenerationSelectedConfig) == 48, "Offset mismatch for FRecastNavMeshTileGenerationDebug::LinkGenerationSelectedConfig");

// /Script/NavigationSystem.SupportedAreaData
// Kind: ScriptStruct; super: none
struct FSupportedAreaData
{
public:
    FString AreaClassName; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::int32_t AreaID; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0014
    void* AreaClass; // 0x0018 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(FSupportedAreaData, AreaClassName) == 0, "Offset mismatch for FSupportedAreaData::AreaClassName");
static_assert(offsetof(FSupportedAreaData, AreaID) == 16, "Offset mismatch for FSupportedAreaData::AreaID");
static_assert(offsetof(FSupportedAreaData, AreaClass) == 24, "Offset mismatch for FSupportedAreaData::AreaClass");

// /Script/NavigationSystem.AbstractNavData
// Kind: Class; super: NavigationData
class UAbstractNavData
{
public:
    std::uint8_t Pad_0000[0x278]; // 0x0000
    void* RenderingComp; // 0x0278 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t NavDataConfig[0x70]; // 0x0280 (Size: 0x70, Type: StructProperty)
    std::uint8_t bAutoDestroyWhenNoNavigation; // 0x02F0 (Size: 0x1, Type: BoolProperty)
    // 0x02F0 BoolProperty bCanBeMainNavData (shared storage)
    // 0x02F0 BoolProperty bCanSpawnOnRebuild (shared storage)
    // 0x02F0 BoolProperty bEnableDrawing (shared storage)
    // 0x02F0 BoolProperty bForceRebuildOnLoad (shared storage)
    // 0x02F0 BoolProperty bRebuildAtRuntime (shared storage)
    std::uint8_t Pad_0001[0x3]; // 0x02F1
    std::uint8_t RuntimeGeneration; // 0x02F4 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x7]; // 0x02F5
    float ObservedPathsTickInterval; // 0x02FC (Size: 0x4, Type: FloatProperty)
    std::uint32_t DataVersion; // 0x0300 (Size: 0x4, Type: UInt32Property)
    std::uint8_t Pad_0003[0xD4]; // 0x0304
    TArray<void*> SupportedAreas; // 0x03D8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UAbstractNavData, RenderingComp) == 632, "Offset mismatch for UAbstractNavData::RenderingComp");
static_assert(offsetof(UAbstractNavData, NavDataConfig) == 640, "Offset mismatch for UAbstractNavData::NavDataConfig");
static_assert(offsetof(UAbstractNavData, bAutoDestroyWhenNoNavigation) == 752, "Offset mismatch for UAbstractNavData::bAutoDestroyWhenNoNavigation");
static_assert(offsetof(UAbstractNavData, RuntimeGeneration) == 756, "Offset mismatch for UAbstractNavData::RuntimeGeneration");
static_assert(offsetof(UAbstractNavData, ObservedPathsTickInterval) == 764, "Offset mismatch for UAbstractNavData::ObservedPathsTickInterval");
static_assert(offsetof(UAbstractNavData, DataVersion) == 768, "Offset mismatch for UAbstractNavData::DataVersion");
static_assert(offsetof(UAbstractNavData, SupportedAreas) == 984, "Offset mismatch for UAbstractNavData::SupportedAreas");

// /Script/NavigationSystem.BaseGeneratedNavLinksProxy
// Kind: Class; super: Object
class UBaseGeneratedNavLinksProxy
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t LinkProxyId[0x8]; // 0x0030 (Size: 0x8, Type: StructProperty)
    void* Owner; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UBaseGeneratedNavLinksProxy, LinkProxyId) == 48, "Offset mismatch for UBaseGeneratedNavLinksProxy::LinkProxyId");
static_assert(offsetof(UBaseGeneratedNavLinksProxy, Owner) == 56, "Offset mismatch for UBaseGeneratedNavLinksProxy::Owner");

// /Script/NavigationSystem.CrowdManagerBase
// Kind: Class; super: Object
class UCrowdManagerBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/NavigationSystem.NavArea
// Kind: Class; super: NavAreaBase
class UNavArea
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    float DefaultCost; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float FixedAreaEnteringCost; // 0x0034 (Size: 0x4, Type: FloatProperty)
    std::uint8_t DrawColor[0x4]; // 0x0038 (Size: 0x4, Type: StructProperty)
    std::uint8_t SupportedAgents[0x4]; // 0x003C (Size: 0x4, Type: StructProperty)
    std::uint8_t bSupportsAgent0; // 0x0040 (Size: 0x1, Type: BoolProperty)
    // 0x0040 BoolProperty bSupportsAgent1 (shared storage)
    // 0x0040 BoolProperty bSupportsAgent2 (shared storage)
    // 0x0040 BoolProperty bSupportsAgent3 (shared storage)
    // 0x0040 BoolProperty bSupportsAgent4 (shared storage)
    // 0x0040 BoolProperty bSupportsAgent5 (shared storage)
    // 0x0040 BoolProperty bSupportsAgent6 (shared storage)
    // 0x0040 BoolProperty bSupportsAgent7 (shared storage)
    std::uint8_t bSupportsAgent10; // 0x0041 (Size: 0x1, Type: BoolProperty)
    // 0x0041 BoolProperty bSupportsAgent11 (shared storage)
    // 0x0041 BoolProperty bSupportsAgent12 (shared storage)
    // 0x0041 BoolProperty bSupportsAgent13 (shared storage)
    // 0x0041 BoolProperty bSupportsAgent14 (shared storage)
    // 0x0041 BoolProperty bSupportsAgent15 (shared storage)
    // 0x0041 BoolProperty bSupportsAgent8 (shared storage)
    // 0x0041 BoolProperty bSupportsAgent9 (shared storage)
};

static_assert(offsetof(UNavArea, DefaultCost) == 48, "Offset mismatch for UNavArea::DefaultCost");
static_assert(offsetof(UNavArea, FixedAreaEnteringCost) == 52, "Offset mismatch for UNavArea::FixedAreaEnteringCost");
static_assert(offsetof(UNavArea, DrawColor) == 56, "Offset mismatch for UNavArea::DrawColor");
static_assert(offsetof(UNavArea, SupportedAgents) == 60, "Offset mismatch for UNavArea::SupportedAgents");
static_assert(offsetof(UNavArea, bSupportsAgent0) == 64, "Offset mismatch for UNavArea::bSupportsAgent0");
static_assert(offsetof(UNavArea, bSupportsAgent10) == 65, "Offset mismatch for UNavArea::bSupportsAgent10");

// /Script/NavigationSystem.NavAreaMeta
// Kind: Class; super: NavArea
class UNavAreaMeta
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    float DefaultCost; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float FixedAreaEnteringCost; // 0x0034 (Size: 0x4, Type: FloatProperty)
    std::uint8_t DrawColor[0x4]; // 0x0038 (Size: 0x4, Type: StructProperty)
    std::uint8_t SupportedAgents[0x4]; // 0x003C (Size: 0x4, Type: StructProperty)
    std::uint8_t bSupportsAgent0; // 0x0040 (Size: 0x1, Type: BoolProperty)
    // 0x0040 BoolProperty bSupportsAgent1 (shared storage)
    // 0x0040 BoolProperty bSupportsAgent2 (shared storage)
    // 0x0040 BoolProperty bSupportsAgent3 (shared storage)
    // 0x0040 BoolProperty bSupportsAgent4 (shared storage)
    // 0x0040 BoolProperty bSupportsAgent5 (shared storage)
    // 0x0040 BoolProperty bSupportsAgent6 (shared storage)
    // 0x0040 BoolProperty bSupportsAgent7 (shared storage)
    std::uint8_t bSupportsAgent10; // 0x0041 (Size: 0x1, Type: BoolProperty)
    // 0x0041 BoolProperty bSupportsAgent11 (shared storage)
    // 0x0041 BoolProperty bSupportsAgent12 (shared storage)
    // 0x0041 BoolProperty bSupportsAgent13 (shared storage)
    // 0x0041 BoolProperty bSupportsAgent14 (shared storage)
    // 0x0041 BoolProperty bSupportsAgent15 (shared storage)
    // 0x0041 BoolProperty bSupportsAgent8 (shared storage)
    // 0x0041 BoolProperty bSupportsAgent9 (shared storage)
};

static_assert(offsetof(UNavAreaMeta, DefaultCost) == 48, "Offset mismatch for UNavAreaMeta::DefaultCost");
static_assert(offsetof(UNavAreaMeta, FixedAreaEnteringCost) == 52, "Offset mismatch for UNavAreaMeta::FixedAreaEnteringCost");
static_assert(offsetof(UNavAreaMeta, DrawColor) == 56, "Offset mismatch for UNavAreaMeta::DrawColor");
static_assert(offsetof(UNavAreaMeta, SupportedAgents) == 60, "Offset mismatch for UNavAreaMeta::SupportedAgents");
static_assert(offsetof(UNavAreaMeta, bSupportsAgent0) == 64, "Offset mismatch for UNavAreaMeta::bSupportsAgent0");
static_assert(offsetof(UNavAreaMeta, bSupportsAgent10) == 65, "Offset mismatch for UNavAreaMeta::bSupportsAgent10");

// /Script/NavigationSystem.NavAreaMeta_SwitchByAgent
// Kind: Class; super: NavAreaMeta
class UNavAreaMeta_SwitchByAgent
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    void* Agent0Area; // 0x0048 (Size: 0x8, Type: ClassProperty)
    void* Agent1Area; // 0x0050 (Size: 0x8, Type: ClassProperty)
    void* Agent2Area; // 0x0058 (Size: 0x8, Type: ClassProperty)
    void* Agent3Area; // 0x0060 (Size: 0x8, Type: ClassProperty)
    void* Agent4Area; // 0x0068 (Size: 0x8, Type: ClassProperty)
    void* Agent5Area; // 0x0070 (Size: 0x8, Type: ClassProperty)
    void* Agent6Area; // 0x0078 (Size: 0x8, Type: ClassProperty)
    void* Agent7Area; // 0x0080 (Size: 0x8, Type: ClassProperty)
    void* Agent8Area; // 0x0088 (Size: 0x8, Type: ClassProperty)
    void* Agent9Area; // 0x0090 (Size: 0x8, Type: ClassProperty)
    void* Agent10Area; // 0x0098 (Size: 0x8, Type: ClassProperty)
    void* Agent11Area; // 0x00A0 (Size: 0x8, Type: ClassProperty)
    void* Agent12Area; // 0x00A8 (Size: 0x8, Type: ClassProperty)
    void* Agent13Area; // 0x00B0 (Size: 0x8, Type: ClassProperty)
    void* Agent14Area; // 0x00B8 (Size: 0x8, Type: ClassProperty)
    void* Agent15Area; // 0x00C0 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent0Area) == 72, "Offset mismatch for UNavAreaMeta_SwitchByAgent::Agent0Area");
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent1Area) == 80, "Offset mismatch for UNavAreaMeta_SwitchByAgent::Agent1Area");
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent2Area) == 88, "Offset mismatch for UNavAreaMeta_SwitchByAgent::Agent2Area");
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent3Area) == 96, "Offset mismatch for UNavAreaMeta_SwitchByAgent::Agent3Area");
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent4Area) == 104, "Offset mismatch for UNavAreaMeta_SwitchByAgent::Agent4Area");
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent5Area) == 112, "Offset mismatch for UNavAreaMeta_SwitchByAgent::Agent5Area");
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent6Area) == 120, "Offset mismatch for UNavAreaMeta_SwitchByAgent::Agent6Area");
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent7Area) == 128, "Offset mismatch for UNavAreaMeta_SwitchByAgent::Agent7Area");
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent8Area) == 136, "Offset mismatch for UNavAreaMeta_SwitchByAgent::Agent8Area");
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent9Area) == 144, "Offset mismatch for UNavAreaMeta_SwitchByAgent::Agent9Area");
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent10Area) == 152, "Offset mismatch for UNavAreaMeta_SwitchByAgent::Agent10Area");
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent11Area) == 160, "Offset mismatch for UNavAreaMeta_SwitchByAgent::Agent11Area");
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent12Area) == 168, "Offset mismatch for UNavAreaMeta_SwitchByAgent::Agent12Area");
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent13Area) == 176, "Offset mismatch for UNavAreaMeta_SwitchByAgent::Agent13Area");
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent14Area) == 184, "Offset mismatch for UNavAreaMeta_SwitchByAgent::Agent14Area");
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent15Area) == 192, "Offset mismatch for UNavAreaMeta_SwitchByAgent::Agent15Area");

// /Script/NavigationSystem.NavArea_Default
// Kind: Class; super: NavArea
class UNavArea_Default
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    float DefaultCost; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float FixedAreaEnteringCost; // 0x0034 (Size: 0x4, Type: FloatProperty)
    std::uint8_t DrawColor[0x4]; // 0x0038 (Size: 0x4, Type: StructProperty)
    std::uint8_t SupportedAgents[0x4]; // 0x003C (Size: 0x4, Type: StructProperty)
    std::uint8_t bSupportsAgent0; // 0x0040 (Size: 0x1, Type: BoolProperty)
    // 0x0040 BoolProperty bSupportsAgent1 (shared storage)
    // 0x0040 BoolProperty bSupportsAgent2 (shared storage)
    // 0x0040 BoolProperty bSupportsAgent3 (shared storage)
    // 0x0040 BoolProperty bSupportsAgent4 (shared storage)
    // 0x0040 BoolProperty bSupportsAgent5 (shared storage)
    // 0x0040 BoolProperty bSupportsAgent6 (shared storage)
    // 0x0040 BoolProperty bSupportsAgent7 (shared storage)
    std::uint8_t bSupportsAgent10; // 0x0041 (Size: 0x1, Type: BoolProperty)
    // 0x0041 BoolProperty bSupportsAgent11 (shared storage)
    // 0x0041 BoolProperty bSupportsAgent12 (shared storage)
    // 0x0041 BoolProperty bSupportsAgent13 (shared storage)
    // 0x0041 BoolProperty bSupportsAgent14 (shared storage)
    // 0x0041 BoolProperty bSupportsAgent15 (shared storage)
    // 0x0041 BoolProperty bSupportsAgent8 (shared storage)
    // 0x0041 BoolProperty bSupportsAgent9 (shared storage)
};

static_assert(offsetof(UNavArea_Default, DefaultCost) == 48, "Offset mismatch for UNavArea_Default::DefaultCost");
static_assert(offsetof(UNavArea_Default, FixedAreaEnteringCost) == 52, "Offset mismatch for UNavArea_Default::FixedAreaEnteringCost");
static_assert(offsetof(UNavArea_Default, DrawColor) == 56, "Offset mismatch for UNavArea_Default::DrawColor");
static_assert(offsetof(UNavArea_Default, SupportedAgents) == 60, "Offset mismatch for UNavArea_Default::SupportedAgents");
static_assert(offsetof(UNavArea_Default, bSupportsAgent0) == 64, "Offset mismatch for UNavArea_Default::bSupportsAgent0");
static_assert(offsetof(UNavArea_Default, bSupportsAgent10) == 65, "Offset mismatch for UNavArea_Default::bSupportsAgent10");

// /Script/NavigationSystem.NavArea_LowHeight
// Kind: Class; super: NavArea
class UNavArea_LowHeight
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    float DefaultCost; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float FixedAreaEnteringCost; // 0x0034 (Size: 0x4, Type: FloatProperty)
    std::uint8_t DrawColor[0x4]; // 0x0038 (Size: 0x4, Type: StructProperty)
    std::uint8_t SupportedAgents[0x4]; // 0x003C (Size: 0x4, Type: StructProperty)
    std::uint8_t bSupportsAgent0; // 0x0040 (Size: 0x1, Type: BoolProperty)
    // 0x0040 BoolProperty bSupportsAgent1 (shared storage)
    // 0x0040 BoolProperty bSupportsAgent2 (shared storage)
    // 0x0040 BoolProperty bSupportsAgent3 (shared storage)
    // 0x0040 BoolProperty bSupportsAgent4 (shared storage)
    // 0x0040 BoolProperty bSupportsAgent5 (shared storage)
    // 0x0040 BoolProperty bSupportsAgent6 (shared storage)
    // 0x0040 BoolProperty bSupportsAgent7 (shared storage)
    std::uint8_t bSupportsAgent10; // 0x0041 (Size: 0x1, Type: BoolProperty)
    // 0x0041 BoolProperty bSupportsAgent11 (shared storage)
    // 0x0041 BoolProperty bSupportsAgent12 (shared storage)
    // 0x0041 BoolProperty bSupportsAgent13 (shared storage)
    // 0x0041 BoolProperty bSupportsAgent14 (shared storage)
    // 0x0041 BoolProperty bSupportsAgent15 (shared storage)
    // 0x0041 BoolProperty bSupportsAgent8 (shared storage)
    // 0x0041 BoolProperty bSupportsAgent9 (shared storage)
};

static_assert(offsetof(UNavArea_LowHeight, DefaultCost) == 48, "Offset mismatch for UNavArea_LowHeight::DefaultCost");
static_assert(offsetof(UNavArea_LowHeight, FixedAreaEnteringCost) == 52, "Offset mismatch for UNavArea_LowHeight::FixedAreaEnteringCost");
static_assert(offsetof(UNavArea_LowHeight, DrawColor) == 56, "Offset mismatch for UNavArea_LowHeight::DrawColor");
static_assert(offsetof(UNavArea_LowHeight, SupportedAgents) == 60, "Offset mismatch for UNavArea_LowHeight::SupportedAgents");
static_assert(offsetof(UNavArea_LowHeight, bSupportsAgent0) == 64, "Offset mismatch for UNavArea_LowHeight::bSupportsAgent0");
static_assert(offsetof(UNavArea_LowHeight, bSupportsAgent10) == 65, "Offset mismatch for UNavArea_LowHeight::bSupportsAgent10");

// /Script/NavigationSystem.NavArea_Null
// Kind: Class; super: NavArea
class UNavArea_Null
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    float DefaultCost; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float FixedAreaEnteringCost; // 0x0034 (Size: 0x4, Type: FloatProperty)
    std::uint8_t DrawColor[0x4]; // 0x0038 (Size: 0x4, Type: StructProperty)
    std::uint8_t SupportedAgents[0x4]; // 0x003C (Size: 0x4, Type: StructProperty)
    std::uint8_t bSupportsAgent0; // 0x0040 (Size: 0x1, Type: BoolProperty)
    // 0x0040 BoolProperty bSupportsAgent1 (shared storage)
    // 0x0040 BoolProperty bSupportsAgent2 (shared storage)
    // 0x0040 BoolProperty bSupportsAgent3 (shared storage)
    // 0x0040 BoolProperty bSupportsAgent4 (shared storage)
    // 0x0040 BoolProperty bSupportsAgent5 (shared storage)
    // 0x0040 BoolProperty bSupportsAgent6 (shared storage)
    // 0x0040 BoolProperty bSupportsAgent7 (shared storage)
    std::uint8_t bSupportsAgent10; // 0x0041 (Size: 0x1, Type: BoolProperty)
    // 0x0041 BoolProperty bSupportsAgent11 (shared storage)
    // 0x0041 BoolProperty bSupportsAgent12 (shared storage)
    // 0x0041 BoolProperty bSupportsAgent13 (shared storage)
    // 0x0041 BoolProperty bSupportsAgent14 (shared storage)
    // 0x0041 BoolProperty bSupportsAgent15 (shared storage)
    // 0x0041 BoolProperty bSupportsAgent8 (shared storage)
    // 0x0041 BoolProperty bSupportsAgent9 (shared storage)
};

static_assert(offsetof(UNavArea_Null, DefaultCost) == 48, "Offset mismatch for UNavArea_Null::DefaultCost");
static_assert(offsetof(UNavArea_Null, FixedAreaEnteringCost) == 52, "Offset mismatch for UNavArea_Null::FixedAreaEnteringCost");
static_assert(offsetof(UNavArea_Null, DrawColor) == 56, "Offset mismatch for UNavArea_Null::DrawColor");
static_assert(offsetof(UNavArea_Null, SupportedAgents) == 60, "Offset mismatch for UNavArea_Null::SupportedAgents");
static_assert(offsetof(UNavArea_Null, bSupportsAgent0) == 64, "Offset mismatch for UNavArea_Null::bSupportsAgent0");
static_assert(offsetof(UNavArea_Null, bSupportsAgent10) == 65, "Offset mismatch for UNavArea_Null::bSupportsAgent10");

// /Script/NavigationSystem.NavArea_Obstacle
// Kind: Class; super: NavArea
class UNavArea_Obstacle
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    float DefaultCost; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float FixedAreaEnteringCost; // 0x0034 (Size: 0x4, Type: FloatProperty)
    std::uint8_t DrawColor[0x4]; // 0x0038 (Size: 0x4, Type: StructProperty)
    std::uint8_t SupportedAgents[0x4]; // 0x003C (Size: 0x4, Type: StructProperty)
    std::uint8_t bSupportsAgent0; // 0x0040 (Size: 0x1, Type: BoolProperty)
    // 0x0040 BoolProperty bSupportsAgent1 (shared storage)
    // 0x0040 BoolProperty bSupportsAgent2 (shared storage)
    // 0x0040 BoolProperty bSupportsAgent3 (shared storage)
    // 0x0040 BoolProperty bSupportsAgent4 (shared storage)
    // 0x0040 BoolProperty bSupportsAgent5 (shared storage)
    // 0x0040 BoolProperty bSupportsAgent6 (shared storage)
    // 0x0040 BoolProperty bSupportsAgent7 (shared storage)
    std::uint8_t bSupportsAgent10; // 0x0041 (Size: 0x1, Type: BoolProperty)
    // 0x0041 BoolProperty bSupportsAgent11 (shared storage)
    // 0x0041 BoolProperty bSupportsAgent12 (shared storage)
    // 0x0041 BoolProperty bSupportsAgent13 (shared storage)
    // 0x0041 BoolProperty bSupportsAgent14 (shared storage)
    // 0x0041 BoolProperty bSupportsAgent15 (shared storage)
    // 0x0041 BoolProperty bSupportsAgent8 (shared storage)
    // 0x0041 BoolProperty bSupportsAgent9 (shared storage)
};

static_assert(offsetof(UNavArea_Obstacle, DefaultCost) == 48, "Offset mismatch for UNavArea_Obstacle::DefaultCost");
static_assert(offsetof(UNavArea_Obstacle, FixedAreaEnteringCost) == 52, "Offset mismatch for UNavArea_Obstacle::FixedAreaEnteringCost");
static_assert(offsetof(UNavArea_Obstacle, DrawColor) == 56, "Offset mismatch for UNavArea_Obstacle::DrawColor");
static_assert(offsetof(UNavArea_Obstacle, SupportedAgents) == 60, "Offset mismatch for UNavArea_Obstacle::SupportedAgents");
static_assert(offsetof(UNavArea_Obstacle, bSupportsAgent0) == 64, "Offset mismatch for UNavArea_Obstacle::bSupportsAgent0");
static_assert(offsetof(UNavArea_Obstacle, bSupportsAgent10) == 65, "Offset mismatch for UNavArea_Obstacle::bSupportsAgent10");

// /Script/NavigationSystem.NavCollision
// Kind: Class; super: NavCollisionBase
class UNavCollision
{
public:
    std::uint8_t Pad_0000[0xB8]; // 0x0000
    TArray<void*> CylinderCollision; // 0x00B8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> BoxCollision; // 0x00C8 (Size: 0x10, Type: ArrayProperty)
    void* AreaClass; // 0x00D8 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bCreateOnClient; // 0x00E0 (Size: 0x1, Type: BoolProperty)
    // 0x00E0 BoolProperty bGatherConvexGeometry (shared storage)
};

static_assert(offsetof(UNavCollision, CylinderCollision) == 184, "Offset mismatch for UNavCollision::CylinderCollision");
static_assert(offsetof(UNavCollision, BoxCollision) == 200, "Offset mismatch for UNavCollision::BoxCollision");
static_assert(offsetof(UNavCollision, AreaClass) == 216, "Offset mismatch for UNavCollision::AreaClass");
static_assert(offsetof(UNavCollision, bCreateOnClient) == 224, "Offset mismatch for UNavCollision::bCreateOnClient");

// /Script/NavigationSystem.NavLinkComponent
// Kind: Class; super: PrimitiveComponent
class UNavLinkComponent
{
public:
    std::uint8_t Pad_0000[0x578]; // 0x0000
    TArray<void*> Links; // 0x0578 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UNavLinkComponent, Links) == 1400, "Offset mismatch for UNavLinkComponent::Links");

// /Script/NavigationSystem.NavLinkCustomComponent
// Kind: Class; super: NavRelevantComponent
class UNavLinkCustomComponent
{
public:
    std::uint8_t Pad_0000[0x118]; // 0x0000
    std::uint32_t NavLinkUserId; // 0x0118 (Size: 0x4, Type: UInt32Property)
    std::uint8_t Pad_0001[0x4]; // 0x011C
    std::uint8_t CustomLinkId[0x8]; // 0x0120 (Size: 0x8, Type: StructProperty)
    std::uint8_t AuxiliaryCustomLinkId[0x8]; // 0x0128 (Size: 0x8, Type: StructProperty)
    void* EnabledAreaClass; // 0x0130 (Size: 0x8, Type: ClassProperty)
    void* DisabledAreaClass; // 0x0138 (Size: 0x8, Type: ClassProperty)
    std::uint8_t SupportedAgents[0x8]; // 0x0140 (Size: 0x8, Type: StructProperty)
    std::uint8_t LinkRelativeStart[0x18]; // 0x0148 (Size: 0x18, Type: StructProperty)
    std::uint8_t LinkRelativeEnd[0x18]; // 0x0160 (Size: 0x18, Type: StructProperty)
    std::uint8_t LinkDirection; // 0x0178 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0179
    std::uint8_t bCreateBoxObstacle; // 0x017C (Size: 0x1, Type: BoolProperty)
    // 0x017C BoolProperty bLinkEnabled (shared storage)
    // 0x017C BoolProperty bNotifyWhenDisabled (shared storage)
    // 0x017C BoolProperty bNotifyWhenEnabled (shared storage)
    std::uint8_t Pad_0003[0x3]; // 0x017D
    std::uint8_t ObstacleOffset[0x18]; // 0x0180 (Size: 0x18, Type: StructProperty)
    std::uint8_t ObstacleExtent[0x18]; // 0x0198 (Size: 0x18, Type: StructProperty)
    void* ObstacleAreaClass; // 0x01B0 (Size: 0x8, Type: ClassProperty)
    float BroadcastRadius; // 0x01B8 (Size: 0x4, Type: FloatProperty)
    float BroadcastInterval; // 0x01BC (Size: 0x4, Type: FloatProperty)
    std::uint8_t BroadcastChannel; // 0x01C0 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UNavLinkCustomComponent, NavLinkUserId) == 280, "Offset mismatch for UNavLinkCustomComponent::NavLinkUserId");
static_assert(offsetof(UNavLinkCustomComponent, CustomLinkId) == 288, "Offset mismatch for UNavLinkCustomComponent::CustomLinkId");
static_assert(offsetof(UNavLinkCustomComponent, AuxiliaryCustomLinkId) == 296, "Offset mismatch for UNavLinkCustomComponent::AuxiliaryCustomLinkId");
static_assert(offsetof(UNavLinkCustomComponent, EnabledAreaClass) == 304, "Offset mismatch for UNavLinkCustomComponent::EnabledAreaClass");
static_assert(offsetof(UNavLinkCustomComponent, DisabledAreaClass) == 312, "Offset mismatch for UNavLinkCustomComponent::DisabledAreaClass");
static_assert(offsetof(UNavLinkCustomComponent, SupportedAgents) == 320, "Offset mismatch for UNavLinkCustomComponent::SupportedAgents");
static_assert(offsetof(UNavLinkCustomComponent, LinkRelativeStart) == 328, "Offset mismatch for UNavLinkCustomComponent::LinkRelativeStart");
static_assert(offsetof(UNavLinkCustomComponent, LinkRelativeEnd) == 352, "Offset mismatch for UNavLinkCustomComponent::LinkRelativeEnd");
static_assert(offsetof(UNavLinkCustomComponent, LinkDirection) == 376, "Offset mismatch for UNavLinkCustomComponent::LinkDirection");
static_assert(offsetof(UNavLinkCustomComponent, bCreateBoxObstacle) == 380, "Offset mismatch for UNavLinkCustomComponent::bCreateBoxObstacle");
static_assert(offsetof(UNavLinkCustomComponent, ObstacleOffset) == 384, "Offset mismatch for UNavLinkCustomComponent::ObstacleOffset");
static_assert(offsetof(UNavLinkCustomComponent, ObstacleExtent) == 408, "Offset mismatch for UNavLinkCustomComponent::ObstacleExtent");
static_assert(offsetof(UNavLinkCustomComponent, ObstacleAreaClass) == 432, "Offset mismatch for UNavLinkCustomComponent::ObstacleAreaClass");
static_assert(offsetof(UNavLinkCustomComponent, BroadcastRadius) == 440, "Offset mismatch for UNavLinkCustomComponent::BroadcastRadius");
static_assert(offsetof(UNavLinkCustomComponent, BroadcastInterval) == 444, "Offset mismatch for UNavLinkCustomComponent::BroadcastInterval");
static_assert(offsetof(UNavLinkCustomComponent, BroadcastChannel) == 448, "Offset mismatch for UNavLinkCustomComponent::BroadcastChannel");

// /Script/NavigationSystem.NavLinkCustomInterface
// Kind: Class; super: Interface
class UNavLinkCustomInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/NavigationSystem.NavLinkHostInterface
// Kind: Class; super: Interface
class UNavLinkHostInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/NavigationSystem.NavLinkRenderingComponent
// Kind: Class; super: PrimitiveComponent
class UNavLinkRenderingComponent
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

static_assert(offsetof(UNavLinkRenderingComponent, MinDrawDistance) == 632, "Offset mismatch for UNavLinkRenderingComponent::MinDrawDistance");
static_assert(offsetof(UNavLinkRenderingComponent, LDMaxDrawDistance) == 636, "Offset mismatch for UNavLinkRenderingComponent::LDMaxDrawDistance");
static_assert(offsetof(UNavLinkRenderingComponent, CachedMaxDrawDistance) == 640, "Offset mismatch for UNavLinkRenderingComponent::CachedMaxDrawDistance");
static_assert(offsetof(UNavLinkRenderingComponent, DepthPriorityGroup) == 644, "Offset mismatch for UNavLinkRenderingComponent::DepthPriorityGroup");
static_assert(offsetof(UNavLinkRenderingComponent, ViewOwnerDepthPriorityGroup) == 645, "Offset mismatch for UNavLinkRenderingComponent::ViewOwnerDepthPriorityGroup");
static_assert(offsetof(UNavLinkRenderingComponent, IndirectLightingCacheQuality) == 646, "Offset mismatch for UNavLinkRenderingComponent::IndirectLightingCacheQuality");
static_assert(offsetof(UNavLinkRenderingComponent, LightmapType) == 647, "Offset mismatch for UNavLinkRenderingComponent::LightmapType");
static_assert(offsetof(UNavLinkRenderingComponent, HLODBatchingPolicy) == 648, "Offset mismatch for UNavLinkRenderingComponent::HLODBatchingPolicy");
static_assert(offsetof(UNavLinkRenderingComponent, ShadowCacheInvalidationBehavior) == 649, "Offset mismatch for UNavLinkRenderingComponent::ShadowCacheInvalidationBehavior");
static_assert(offsetof(UNavLinkRenderingComponent, bAlwaysCreatePhysicsState) == 650, "Offset mismatch for UNavLinkRenderingComponent::bAlwaysCreatePhysicsState");
static_assert(offsetof(UNavLinkRenderingComponent, bAllowCullDistanceVolume) == 651, "Offset mismatch for UNavLinkRenderingComponent::bAllowCullDistanceVolume");
static_assert(offsetof(UNavLinkRenderingComponent, bHoldout) == 652, "Offset mismatch for UNavLinkRenderingComponent::bHoldout");
static_assert(offsetof(UNavLinkRenderingComponent, CastShadow) == 653, "Offset mismatch for UNavLinkRenderingComponent::CastShadow");
static_assert(offsetof(UNavLinkRenderingComponent, bAffectDistanceFieldLighting) == 654, "Offset mismatch for UNavLinkRenderingComponent::bAffectDistanceFieldLighting");
static_assert(offsetof(UNavLinkRenderingComponent, bCastCinematicShadow) == 655, "Offset mismatch for UNavLinkRenderingComponent::bCastCinematicShadow");
static_assert(offsetof(UNavLinkRenderingComponent, AlwaysLoadOnClient) == 656, "Offset mismatch for UNavLinkRenderingComponent::AlwaysLoadOnClient");
static_assert(offsetof(UNavLinkRenderingComponent, bHiddenInSceneCapture) == 657, "Offset mismatch for UNavLinkRenderingComponent::bHiddenInSceneCapture");
static_assert(offsetof(UNavLinkRenderingComponent, FirstPersonPrimitiveType) == 658, "Offset mismatch for UNavLinkRenderingComponent::FirstPersonPrimitiveType");
static_assert(offsetof(UNavLinkRenderingComponent, bHasNoStreamableTextures) == 659, "Offset mismatch for UNavLinkRenderingComponent::bHasNoStreamableTextures");
static_assert(offsetof(UNavLinkRenderingComponent, bHasCustomNavigableGeometry) == 660, "Offset mismatch for UNavLinkRenderingComponent::bHasCustomNavigableGeometry");
static_assert(offsetof(UNavLinkRenderingComponent, CanCharacterStepUpOn) == 662, "Offset mismatch for UNavLinkRenderingComponent::CanCharacterStepUpOn");
static_assert(offsetof(UNavLinkRenderingComponent, LightingChannels) == 663, "Offset mismatch for UNavLinkRenderingComponent::LightingChannels");
static_assert(offsetof(UNavLinkRenderingComponent, RayTracingGroupCullingPriority) == 664, "Offset mismatch for UNavLinkRenderingComponent::RayTracingGroupCullingPriority");
static_assert(offsetof(UNavLinkRenderingComponent, CustomDepthStencilWriteMask) == 665, "Offset mismatch for UNavLinkRenderingComponent::CustomDepthStencilWriteMask");
static_assert(offsetof(UNavLinkRenderingComponent, ExcludeFromHLODLevels) == 666, "Offset mismatch for UNavLinkRenderingComponent::ExcludeFromHLODLevels");
static_assert(offsetof(UNavLinkRenderingComponent, RayTracingGroupId) == 668, "Offset mismatch for UNavLinkRenderingComponent::RayTracingGroupId");
static_assert(offsetof(UNavLinkRenderingComponent, VisibilityId) == 672, "Offset mismatch for UNavLinkRenderingComponent::VisibilityId");
static_assert(offsetof(UNavLinkRenderingComponent, CustomDepthStencilValue) == 676, "Offset mismatch for UNavLinkRenderingComponent::CustomDepthStencilValue");
static_assert(offsetof(UNavLinkRenderingComponent, CustomPrimitiveData) == 680, "Offset mismatch for UNavLinkRenderingComponent::CustomPrimitiveData");
static_assert(offsetof(UNavLinkRenderingComponent, CustomPrimitiveDataInternal) == 696, "Offset mismatch for UNavLinkRenderingComponent::CustomPrimitiveDataInternal");
static_assert(offsetof(UNavLinkRenderingComponent, TranslucencySortPriority) == 776, "Offset mismatch for UNavLinkRenderingComponent::TranslucencySortPriority");
static_assert(offsetof(UNavLinkRenderingComponent, TranslucencySortDistanceOffset) == 780, "Offset mismatch for UNavLinkRenderingComponent::TranslucencySortDistanceOffset");
static_assert(offsetof(UNavLinkRenderingComponent, RuntimeVirtualTextures) == 784, "Offset mismatch for UNavLinkRenderingComponent::RuntimeVirtualTextures");
static_assert(offsetof(UNavLinkRenderingComponent, VirtualTextureLodBias) == 800, "Offset mismatch for UNavLinkRenderingComponent::VirtualTextureLodBias");
static_assert(offsetof(UNavLinkRenderingComponent, VirtualTextureCullMips) == 801, "Offset mismatch for UNavLinkRenderingComponent::VirtualTextureCullMips");
static_assert(offsetof(UNavLinkRenderingComponent, VirtualTextureMinCoverage) == 802, "Offset mismatch for UNavLinkRenderingComponent::VirtualTextureMinCoverage");
static_assert(offsetof(UNavLinkRenderingComponent, VirtualTextureRenderPassType) == 803, "Offset mismatch for UNavLinkRenderingComponent::VirtualTextureRenderPassType");
static_assert(offsetof(UNavLinkRenderingComponent, BoundsScale) == 840, "Offset mismatch for UNavLinkRenderingComponent::BoundsScale");
static_assert(offsetof(UNavLinkRenderingComponent, MoveIgnoreActors) == 848, "Offset mismatch for UNavLinkRenderingComponent::MoveIgnoreActors");
static_assert(offsetof(UNavLinkRenderingComponent, MoveIgnoreComponents) == 864, "Offset mismatch for UNavLinkRenderingComponent::MoveIgnoreComponents");
static_assert(offsetof(UNavLinkRenderingComponent, BodyInstance) == 896, "Offset mismatch for UNavLinkRenderingComponent::BodyInstance");
static_assert(offsetof(UNavLinkRenderingComponent, OnComponentHit) == 1320, "Offset mismatch for UNavLinkRenderingComponent::OnComponentHit");
static_assert(offsetof(UNavLinkRenderingComponent, OnComponentBeginOverlap) == 1321, "Offset mismatch for UNavLinkRenderingComponent::OnComponentBeginOverlap");
static_assert(offsetof(UNavLinkRenderingComponent, OnComponentEndOverlap) == 1322, "Offset mismatch for UNavLinkRenderingComponent::OnComponentEndOverlap");
static_assert(offsetof(UNavLinkRenderingComponent, OnComponentWake) == 1323, "Offset mismatch for UNavLinkRenderingComponent::OnComponentWake");
static_assert(offsetof(UNavLinkRenderingComponent, OnComponentSleep) == 1324, "Offset mismatch for UNavLinkRenderingComponent::OnComponentSleep");
static_assert(offsetof(UNavLinkRenderingComponent, OnComponentPhysicsStateChanged) == 1326, "Offset mismatch for UNavLinkRenderingComponent::OnComponentPhysicsStateChanged");
static_assert(offsetof(UNavLinkRenderingComponent, OnBeginCursorOver) == 1327, "Offset mismatch for UNavLinkRenderingComponent::OnBeginCursorOver");
static_assert(offsetof(UNavLinkRenderingComponent, OnEndCursorOver) == 1328, "Offset mismatch for UNavLinkRenderingComponent::OnEndCursorOver");
static_assert(offsetof(UNavLinkRenderingComponent, OnClicked) == 1329, "Offset mismatch for UNavLinkRenderingComponent::OnClicked");
static_assert(offsetof(UNavLinkRenderingComponent, OnReleased) == 1330, "Offset mismatch for UNavLinkRenderingComponent::OnReleased");
static_assert(offsetof(UNavLinkRenderingComponent, OnInputTouchBegin) == 1331, "Offset mismatch for UNavLinkRenderingComponent::OnInputTouchBegin");
static_assert(offsetof(UNavLinkRenderingComponent, OnInputTouchEnd) == 1332, "Offset mismatch for UNavLinkRenderingComponent::OnInputTouchEnd");
static_assert(offsetof(UNavLinkRenderingComponent, OnInputTouchEnter) == 1333, "Offset mismatch for UNavLinkRenderingComponent::OnInputTouchEnter");
static_assert(offsetof(UNavLinkRenderingComponent, OnInputTouchLeave) == 1334, "Offset mismatch for UNavLinkRenderingComponent::OnInputTouchLeave");
static_assert(offsetof(UNavLinkRenderingComponent, OnTouchBegan) == 1335, "Offset mismatch for UNavLinkRenderingComponent::OnTouchBegan");
static_assert(offsetof(UNavLinkRenderingComponent, OnTouchEnded) == 1336, "Offset mismatch for UNavLinkRenderingComponent::OnTouchEnded");
static_assert(offsetof(UNavLinkRenderingComponent, OnTouchEntered) == 1337, "Offset mismatch for UNavLinkRenderingComponent::OnTouchEntered");
static_assert(offsetof(UNavLinkRenderingComponent, OnTouchExited) == 1338, "Offset mismatch for UNavLinkRenderingComponent::OnTouchExited");
static_assert(offsetof(UNavLinkRenderingComponent, LODParentPrimitive) == 1368, "Offset mismatch for UNavLinkRenderingComponent::LODParentPrimitive");

// /Script/NavigationSystem.NavLinkTrivial
// Kind: Class; super: NavLinkDefinition
class UNavLinkTrivial
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> Links; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SegmentLinks; // 0x0038 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UNavLinkTrivial, Links) == 40, "Offset mismatch for UNavLinkTrivial::Links");
static_assert(offsetof(UNavLinkTrivial, SegmentLinks) == 56, "Offset mismatch for UNavLinkTrivial::SegmentLinks");

// /Script/NavigationSystem.NavMeshBoundsVolume
// Kind: Class; super: Volume
class UNavMeshBoundsVolume
{
public:
    std::uint8_t Pad_0000[0x2A8]; // 0x0000
    std::uint8_t SupportedAgents[0x4]; // 0x02A8 (Size: 0x4, Type: StructProperty)
    std::uint8_t bAllowPhysicsOverlap; // 0x02AC (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UNavMeshBoundsVolume, SupportedAgents) == 680, "Offset mismatch for UNavMeshBoundsVolume::SupportedAgents");
static_assert(offsetof(UNavMeshBoundsVolume, bAllowPhysicsOverlap) == 684, "Offset mismatch for UNavMeshBoundsVolume::bAllowPhysicsOverlap");

// /Script/NavigationSystem.NavMeshRenderingComponent
// Kind: Class; super: DebugDrawComponent
class UNavMeshRenderingComponent
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

static_assert(offsetof(UNavMeshRenderingComponent, MinDrawDistance) == 632, "Offset mismatch for UNavMeshRenderingComponent::MinDrawDistance");
static_assert(offsetof(UNavMeshRenderingComponent, LDMaxDrawDistance) == 636, "Offset mismatch for UNavMeshRenderingComponent::LDMaxDrawDistance");
static_assert(offsetof(UNavMeshRenderingComponent, CachedMaxDrawDistance) == 640, "Offset mismatch for UNavMeshRenderingComponent::CachedMaxDrawDistance");
static_assert(offsetof(UNavMeshRenderingComponent, DepthPriorityGroup) == 644, "Offset mismatch for UNavMeshRenderingComponent::DepthPriorityGroup");
static_assert(offsetof(UNavMeshRenderingComponent, ViewOwnerDepthPriorityGroup) == 645, "Offset mismatch for UNavMeshRenderingComponent::ViewOwnerDepthPriorityGroup");
static_assert(offsetof(UNavMeshRenderingComponent, IndirectLightingCacheQuality) == 646, "Offset mismatch for UNavMeshRenderingComponent::IndirectLightingCacheQuality");
static_assert(offsetof(UNavMeshRenderingComponent, LightmapType) == 647, "Offset mismatch for UNavMeshRenderingComponent::LightmapType");
static_assert(offsetof(UNavMeshRenderingComponent, HLODBatchingPolicy) == 648, "Offset mismatch for UNavMeshRenderingComponent::HLODBatchingPolicy");
static_assert(offsetof(UNavMeshRenderingComponent, ShadowCacheInvalidationBehavior) == 649, "Offset mismatch for UNavMeshRenderingComponent::ShadowCacheInvalidationBehavior");
static_assert(offsetof(UNavMeshRenderingComponent, bAlwaysCreatePhysicsState) == 650, "Offset mismatch for UNavMeshRenderingComponent::bAlwaysCreatePhysicsState");
static_assert(offsetof(UNavMeshRenderingComponent, bAllowCullDistanceVolume) == 651, "Offset mismatch for UNavMeshRenderingComponent::bAllowCullDistanceVolume");
static_assert(offsetof(UNavMeshRenderingComponent, bHoldout) == 652, "Offset mismatch for UNavMeshRenderingComponent::bHoldout");
static_assert(offsetof(UNavMeshRenderingComponent, CastShadow) == 653, "Offset mismatch for UNavMeshRenderingComponent::CastShadow");
static_assert(offsetof(UNavMeshRenderingComponent, bAffectDistanceFieldLighting) == 654, "Offset mismatch for UNavMeshRenderingComponent::bAffectDistanceFieldLighting");
static_assert(offsetof(UNavMeshRenderingComponent, bCastCinematicShadow) == 655, "Offset mismatch for UNavMeshRenderingComponent::bCastCinematicShadow");
static_assert(offsetof(UNavMeshRenderingComponent, AlwaysLoadOnClient) == 656, "Offset mismatch for UNavMeshRenderingComponent::AlwaysLoadOnClient");
static_assert(offsetof(UNavMeshRenderingComponent, bHiddenInSceneCapture) == 657, "Offset mismatch for UNavMeshRenderingComponent::bHiddenInSceneCapture");
static_assert(offsetof(UNavMeshRenderingComponent, FirstPersonPrimitiveType) == 658, "Offset mismatch for UNavMeshRenderingComponent::FirstPersonPrimitiveType");
static_assert(offsetof(UNavMeshRenderingComponent, bHasNoStreamableTextures) == 659, "Offset mismatch for UNavMeshRenderingComponent::bHasNoStreamableTextures");
static_assert(offsetof(UNavMeshRenderingComponent, bHasCustomNavigableGeometry) == 660, "Offset mismatch for UNavMeshRenderingComponent::bHasCustomNavigableGeometry");
static_assert(offsetof(UNavMeshRenderingComponent, CanCharacterStepUpOn) == 662, "Offset mismatch for UNavMeshRenderingComponent::CanCharacterStepUpOn");
static_assert(offsetof(UNavMeshRenderingComponent, LightingChannels) == 663, "Offset mismatch for UNavMeshRenderingComponent::LightingChannels");
static_assert(offsetof(UNavMeshRenderingComponent, RayTracingGroupCullingPriority) == 664, "Offset mismatch for UNavMeshRenderingComponent::RayTracingGroupCullingPriority");
static_assert(offsetof(UNavMeshRenderingComponent, CustomDepthStencilWriteMask) == 665, "Offset mismatch for UNavMeshRenderingComponent::CustomDepthStencilWriteMask");
static_assert(offsetof(UNavMeshRenderingComponent, ExcludeFromHLODLevels) == 666, "Offset mismatch for UNavMeshRenderingComponent::ExcludeFromHLODLevels");
static_assert(offsetof(UNavMeshRenderingComponent, RayTracingGroupId) == 668, "Offset mismatch for UNavMeshRenderingComponent::RayTracingGroupId");
static_assert(offsetof(UNavMeshRenderingComponent, VisibilityId) == 672, "Offset mismatch for UNavMeshRenderingComponent::VisibilityId");
static_assert(offsetof(UNavMeshRenderingComponent, CustomDepthStencilValue) == 676, "Offset mismatch for UNavMeshRenderingComponent::CustomDepthStencilValue");
static_assert(offsetof(UNavMeshRenderingComponent, CustomPrimitiveData) == 680, "Offset mismatch for UNavMeshRenderingComponent::CustomPrimitiveData");
static_assert(offsetof(UNavMeshRenderingComponent, CustomPrimitiveDataInternal) == 696, "Offset mismatch for UNavMeshRenderingComponent::CustomPrimitiveDataInternal");
static_assert(offsetof(UNavMeshRenderingComponent, TranslucencySortPriority) == 776, "Offset mismatch for UNavMeshRenderingComponent::TranslucencySortPriority");
static_assert(offsetof(UNavMeshRenderingComponent, TranslucencySortDistanceOffset) == 780, "Offset mismatch for UNavMeshRenderingComponent::TranslucencySortDistanceOffset");
static_assert(offsetof(UNavMeshRenderingComponent, RuntimeVirtualTextures) == 784, "Offset mismatch for UNavMeshRenderingComponent::RuntimeVirtualTextures");
static_assert(offsetof(UNavMeshRenderingComponent, VirtualTextureLodBias) == 800, "Offset mismatch for UNavMeshRenderingComponent::VirtualTextureLodBias");
static_assert(offsetof(UNavMeshRenderingComponent, VirtualTextureCullMips) == 801, "Offset mismatch for UNavMeshRenderingComponent::VirtualTextureCullMips");
static_assert(offsetof(UNavMeshRenderingComponent, VirtualTextureMinCoverage) == 802, "Offset mismatch for UNavMeshRenderingComponent::VirtualTextureMinCoverage");
static_assert(offsetof(UNavMeshRenderingComponent, VirtualTextureRenderPassType) == 803, "Offset mismatch for UNavMeshRenderingComponent::VirtualTextureRenderPassType");
static_assert(offsetof(UNavMeshRenderingComponent, BoundsScale) == 840, "Offset mismatch for UNavMeshRenderingComponent::BoundsScale");
static_assert(offsetof(UNavMeshRenderingComponent, MoveIgnoreActors) == 848, "Offset mismatch for UNavMeshRenderingComponent::MoveIgnoreActors");
static_assert(offsetof(UNavMeshRenderingComponent, MoveIgnoreComponents) == 864, "Offset mismatch for UNavMeshRenderingComponent::MoveIgnoreComponents");
static_assert(offsetof(UNavMeshRenderingComponent, BodyInstance) == 896, "Offset mismatch for UNavMeshRenderingComponent::BodyInstance");
static_assert(offsetof(UNavMeshRenderingComponent, OnComponentHit) == 1320, "Offset mismatch for UNavMeshRenderingComponent::OnComponentHit");
static_assert(offsetof(UNavMeshRenderingComponent, OnComponentBeginOverlap) == 1321, "Offset mismatch for UNavMeshRenderingComponent::OnComponentBeginOverlap");
static_assert(offsetof(UNavMeshRenderingComponent, OnComponentEndOverlap) == 1322, "Offset mismatch for UNavMeshRenderingComponent::OnComponentEndOverlap");
static_assert(offsetof(UNavMeshRenderingComponent, OnComponentWake) == 1323, "Offset mismatch for UNavMeshRenderingComponent::OnComponentWake");
static_assert(offsetof(UNavMeshRenderingComponent, OnComponentSleep) == 1324, "Offset mismatch for UNavMeshRenderingComponent::OnComponentSleep");
static_assert(offsetof(UNavMeshRenderingComponent, OnComponentPhysicsStateChanged) == 1326, "Offset mismatch for UNavMeshRenderingComponent::OnComponentPhysicsStateChanged");
static_assert(offsetof(UNavMeshRenderingComponent, OnBeginCursorOver) == 1327, "Offset mismatch for UNavMeshRenderingComponent::OnBeginCursorOver");
static_assert(offsetof(UNavMeshRenderingComponent, OnEndCursorOver) == 1328, "Offset mismatch for UNavMeshRenderingComponent::OnEndCursorOver");
static_assert(offsetof(UNavMeshRenderingComponent, OnClicked) == 1329, "Offset mismatch for UNavMeshRenderingComponent::OnClicked");
static_assert(offsetof(UNavMeshRenderingComponent, OnReleased) == 1330, "Offset mismatch for UNavMeshRenderingComponent::OnReleased");
static_assert(offsetof(UNavMeshRenderingComponent, OnInputTouchBegin) == 1331, "Offset mismatch for UNavMeshRenderingComponent::OnInputTouchBegin");
static_assert(offsetof(UNavMeshRenderingComponent, OnInputTouchEnd) == 1332, "Offset mismatch for UNavMeshRenderingComponent::OnInputTouchEnd");
static_assert(offsetof(UNavMeshRenderingComponent, OnInputTouchEnter) == 1333, "Offset mismatch for UNavMeshRenderingComponent::OnInputTouchEnter");
static_assert(offsetof(UNavMeshRenderingComponent, OnInputTouchLeave) == 1334, "Offset mismatch for UNavMeshRenderingComponent::OnInputTouchLeave");
static_assert(offsetof(UNavMeshRenderingComponent, OnTouchBegan) == 1335, "Offset mismatch for UNavMeshRenderingComponent::OnTouchBegan");
static_assert(offsetof(UNavMeshRenderingComponent, OnTouchEnded) == 1336, "Offset mismatch for UNavMeshRenderingComponent::OnTouchEnded");
static_assert(offsetof(UNavMeshRenderingComponent, OnTouchEntered) == 1337, "Offset mismatch for UNavMeshRenderingComponent::OnTouchEntered");
static_assert(offsetof(UNavMeshRenderingComponent, OnTouchExited) == 1338, "Offset mismatch for UNavMeshRenderingComponent::OnTouchExited");
static_assert(offsetof(UNavMeshRenderingComponent, LODParentPrimitive) == 1368, "Offset mismatch for UNavMeshRenderingComponent::LODParentPrimitive");

// /Script/NavigationSystem.NavModifierComponent
// Kind: Class; super: NavRelevantComponent
class UNavModifierComponent
{
public:
    std::uint8_t Pad_0000[0x110]; // 0x0000
    void* AreaClass; // 0x0110 (Size: 0x8, Type: ClassProperty)
    void* AreaClassToReplace; // 0x0118 (Size: 0x8, Type: ClassProperty)
    std::uint8_t FailsafeExtent[0x18]; // 0x0120 (Size: 0x18, Type: StructProperty)
    std::uint8_t NavMeshResolution; // 0x0138 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bIncludeAgentHeight; // 0x0139 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UNavModifierComponent, AreaClass) == 272, "Offset mismatch for UNavModifierComponent::AreaClass");
static_assert(offsetof(UNavModifierComponent, AreaClassToReplace) == 280, "Offset mismatch for UNavModifierComponent::AreaClassToReplace");
static_assert(offsetof(UNavModifierComponent, FailsafeExtent) == 288, "Offset mismatch for UNavModifierComponent::FailsafeExtent");
static_assert(offsetof(UNavModifierComponent, NavMeshResolution) == 312, "Offset mismatch for UNavModifierComponent::NavMeshResolution");
static_assert(offsetof(UNavModifierComponent, bIncludeAgentHeight) == 313, "Offset mismatch for UNavModifierComponent::bIncludeAgentHeight");

// /Script/NavigationSystem.NavModifierVolume
// Kind: Class; super: Volume
class UNavModifierVolume
{
public:
    std::uint8_t Pad_0000[0x2B0]; // 0x0000
    void* AreaClass; // 0x02B0 (Size: 0x8, Type: ClassProperty)
    void* AreaClassToReplace; // 0x02B8 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bMaskFillCollisionUnderneathForNavmesh; // 0x02C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t NavMeshResolution; // 0x02C1 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UNavModifierVolume, AreaClass) == 688, "Offset mismatch for UNavModifierVolume::AreaClass");
static_assert(offsetof(UNavModifierVolume, AreaClassToReplace) == 696, "Offset mismatch for UNavModifierVolume::AreaClassToReplace");
static_assert(offsetof(UNavModifierVolume, bMaskFillCollisionUnderneathForNavmesh) == 704, "Offset mismatch for UNavModifierVolume::bMaskFillCollisionUnderneathForNavmesh");
static_assert(offsetof(UNavModifierVolume, NavMeshResolution) == 705, "Offset mismatch for UNavModifierVolume::NavMeshResolution");

// /Script/NavigationSystem.NavNodeInterface
// Kind: Class; super: Interface
class UNavNodeInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/NavigationSystem.NavRelevantComponent
// Kind: Class; super: ActorComponent
class UNavRelevantComponent
{
public:
    std::uint8_t Pad_0000[0x100]; // 0x0000
    std::uint8_t bAttachToOwnersRoot; // 0x0100 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0101
    void* CachedNavParent; // 0x0108 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UNavRelevantComponent, bAttachToOwnersRoot) == 256, "Offset mismatch for UNavRelevantComponent::bAttachToOwnersRoot");
static_assert(offsetof(UNavRelevantComponent, CachedNavParent) == 264, "Offset mismatch for UNavRelevantComponent::CachedNavParent");

// /Script/NavigationSystem.NavSystemConfigOverride
// Kind: Class; super: Actor
class UNavSystemConfigOverride
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    void* NavigationSystemConfig; // 0x0270 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t OverridePolicy; // 0x0278 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bLoadOnClient; // 0x0279 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UNavSystemConfigOverride, NavigationSystemConfig) == 624, "Offset mismatch for UNavSystemConfigOverride::NavigationSystemConfig");
static_assert(offsetof(UNavSystemConfigOverride, OverridePolicy) == 632, "Offset mismatch for UNavSystemConfigOverride::OverridePolicy");
static_assert(offsetof(UNavSystemConfigOverride, bLoadOnClient) == 633, "Offset mismatch for UNavSystemConfigOverride::bLoadOnClient");

// /Script/NavigationSystem.NavTestRenderingComponent
// Kind: Class; super: DebugDrawComponent
class UNavTestRenderingComponent
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

static_assert(offsetof(UNavTestRenderingComponent, MinDrawDistance) == 632, "Offset mismatch for UNavTestRenderingComponent::MinDrawDistance");
static_assert(offsetof(UNavTestRenderingComponent, LDMaxDrawDistance) == 636, "Offset mismatch for UNavTestRenderingComponent::LDMaxDrawDistance");
static_assert(offsetof(UNavTestRenderingComponent, CachedMaxDrawDistance) == 640, "Offset mismatch for UNavTestRenderingComponent::CachedMaxDrawDistance");
static_assert(offsetof(UNavTestRenderingComponent, DepthPriorityGroup) == 644, "Offset mismatch for UNavTestRenderingComponent::DepthPriorityGroup");
static_assert(offsetof(UNavTestRenderingComponent, ViewOwnerDepthPriorityGroup) == 645, "Offset mismatch for UNavTestRenderingComponent::ViewOwnerDepthPriorityGroup");
static_assert(offsetof(UNavTestRenderingComponent, IndirectLightingCacheQuality) == 646, "Offset mismatch for UNavTestRenderingComponent::IndirectLightingCacheQuality");
static_assert(offsetof(UNavTestRenderingComponent, LightmapType) == 647, "Offset mismatch for UNavTestRenderingComponent::LightmapType");
static_assert(offsetof(UNavTestRenderingComponent, HLODBatchingPolicy) == 648, "Offset mismatch for UNavTestRenderingComponent::HLODBatchingPolicy");
static_assert(offsetof(UNavTestRenderingComponent, ShadowCacheInvalidationBehavior) == 649, "Offset mismatch for UNavTestRenderingComponent::ShadowCacheInvalidationBehavior");
static_assert(offsetof(UNavTestRenderingComponent, bAlwaysCreatePhysicsState) == 650, "Offset mismatch for UNavTestRenderingComponent::bAlwaysCreatePhysicsState");
static_assert(offsetof(UNavTestRenderingComponent, bAllowCullDistanceVolume) == 651, "Offset mismatch for UNavTestRenderingComponent::bAllowCullDistanceVolume");
static_assert(offsetof(UNavTestRenderingComponent, bHoldout) == 652, "Offset mismatch for UNavTestRenderingComponent::bHoldout");
static_assert(offsetof(UNavTestRenderingComponent, CastShadow) == 653, "Offset mismatch for UNavTestRenderingComponent::CastShadow");
static_assert(offsetof(UNavTestRenderingComponent, bAffectDistanceFieldLighting) == 654, "Offset mismatch for UNavTestRenderingComponent::bAffectDistanceFieldLighting");
static_assert(offsetof(UNavTestRenderingComponent, bCastCinematicShadow) == 655, "Offset mismatch for UNavTestRenderingComponent::bCastCinematicShadow");
static_assert(offsetof(UNavTestRenderingComponent, AlwaysLoadOnClient) == 656, "Offset mismatch for UNavTestRenderingComponent::AlwaysLoadOnClient");
static_assert(offsetof(UNavTestRenderingComponent, bHiddenInSceneCapture) == 657, "Offset mismatch for UNavTestRenderingComponent::bHiddenInSceneCapture");
static_assert(offsetof(UNavTestRenderingComponent, FirstPersonPrimitiveType) == 658, "Offset mismatch for UNavTestRenderingComponent::FirstPersonPrimitiveType");
static_assert(offsetof(UNavTestRenderingComponent, bHasNoStreamableTextures) == 659, "Offset mismatch for UNavTestRenderingComponent::bHasNoStreamableTextures");
static_assert(offsetof(UNavTestRenderingComponent, bHasCustomNavigableGeometry) == 660, "Offset mismatch for UNavTestRenderingComponent::bHasCustomNavigableGeometry");
static_assert(offsetof(UNavTestRenderingComponent, CanCharacterStepUpOn) == 662, "Offset mismatch for UNavTestRenderingComponent::CanCharacterStepUpOn");
static_assert(offsetof(UNavTestRenderingComponent, LightingChannels) == 663, "Offset mismatch for UNavTestRenderingComponent::LightingChannels");
static_assert(offsetof(UNavTestRenderingComponent, RayTracingGroupCullingPriority) == 664, "Offset mismatch for UNavTestRenderingComponent::RayTracingGroupCullingPriority");
static_assert(offsetof(UNavTestRenderingComponent, CustomDepthStencilWriteMask) == 665, "Offset mismatch for UNavTestRenderingComponent::CustomDepthStencilWriteMask");
static_assert(offsetof(UNavTestRenderingComponent, ExcludeFromHLODLevels) == 666, "Offset mismatch for UNavTestRenderingComponent::ExcludeFromHLODLevels");
static_assert(offsetof(UNavTestRenderingComponent, RayTracingGroupId) == 668, "Offset mismatch for UNavTestRenderingComponent::RayTracingGroupId");
static_assert(offsetof(UNavTestRenderingComponent, VisibilityId) == 672, "Offset mismatch for UNavTestRenderingComponent::VisibilityId");
static_assert(offsetof(UNavTestRenderingComponent, CustomDepthStencilValue) == 676, "Offset mismatch for UNavTestRenderingComponent::CustomDepthStencilValue");
static_assert(offsetof(UNavTestRenderingComponent, CustomPrimitiveData) == 680, "Offset mismatch for UNavTestRenderingComponent::CustomPrimitiveData");
static_assert(offsetof(UNavTestRenderingComponent, CustomPrimitiveDataInternal) == 696, "Offset mismatch for UNavTestRenderingComponent::CustomPrimitiveDataInternal");
static_assert(offsetof(UNavTestRenderingComponent, TranslucencySortPriority) == 776, "Offset mismatch for UNavTestRenderingComponent::TranslucencySortPriority");
static_assert(offsetof(UNavTestRenderingComponent, TranslucencySortDistanceOffset) == 780, "Offset mismatch for UNavTestRenderingComponent::TranslucencySortDistanceOffset");
static_assert(offsetof(UNavTestRenderingComponent, RuntimeVirtualTextures) == 784, "Offset mismatch for UNavTestRenderingComponent::RuntimeVirtualTextures");
static_assert(offsetof(UNavTestRenderingComponent, VirtualTextureLodBias) == 800, "Offset mismatch for UNavTestRenderingComponent::VirtualTextureLodBias");
static_assert(offsetof(UNavTestRenderingComponent, VirtualTextureCullMips) == 801, "Offset mismatch for UNavTestRenderingComponent::VirtualTextureCullMips");
static_assert(offsetof(UNavTestRenderingComponent, VirtualTextureMinCoverage) == 802, "Offset mismatch for UNavTestRenderingComponent::VirtualTextureMinCoverage");
static_assert(offsetof(UNavTestRenderingComponent, VirtualTextureRenderPassType) == 803, "Offset mismatch for UNavTestRenderingComponent::VirtualTextureRenderPassType");
static_assert(offsetof(UNavTestRenderingComponent, BoundsScale) == 840, "Offset mismatch for UNavTestRenderingComponent::BoundsScale");
static_assert(offsetof(UNavTestRenderingComponent, MoveIgnoreActors) == 848, "Offset mismatch for UNavTestRenderingComponent::MoveIgnoreActors");
static_assert(offsetof(UNavTestRenderingComponent, MoveIgnoreComponents) == 864, "Offset mismatch for UNavTestRenderingComponent::MoveIgnoreComponents");
static_assert(offsetof(UNavTestRenderingComponent, BodyInstance) == 896, "Offset mismatch for UNavTestRenderingComponent::BodyInstance");
static_assert(offsetof(UNavTestRenderingComponent, OnComponentHit) == 1320, "Offset mismatch for UNavTestRenderingComponent::OnComponentHit");
static_assert(offsetof(UNavTestRenderingComponent, OnComponentBeginOverlap) == 1321, "Offset mismatch for UNavTestRenderingComponent::OnComponentBeginOverlap");
static_assert(offsetof(UNavTestRenderingComponent, OnComponentEndOverlap) == 1322, "Offset mismatch for UNavTestRenderingComponent::OnComponentEndOverlap");
static_assert(offsetof(UNavTestRenderingComponent, OnComponentWake) == 1323, "Offset mismatch for UNavTestRenderingComponent::OnComponentWake");
static_assert(offsetof(UNavTestRenderingComponent, OnComponentSleep) == 1324, "Offset mismatch for UNavTestRenderingComponent::OnComponentSleep");
static_assert(offsetof(UNavTestRenderingComponent, OnComponentPhysicsStateChanged) == 1326, "Offset mismatch for UNavTestRenderingComponent::OnComponentPhysicsStateChanged");
static_assert(offsetof(UNavTestRenderingComponent, OnBeginCursorOver) == 1327, "Offset mismatch for UNavTestRenderingComponent::OnBeginCursorOver");
static_assert(offsetof(UNavTestRenderingComponent, OnEndCursorOver) == 1328, "Offset mismatch for UNavTestRenderingComponent::OnEndCursorOver");
static_assert(offsetof(UNavTestRenderingComponent, OnClicked) == 1329, "Offset mismatch for UNavTestRenderingComponent::OnClicked");
static_assert(offsetof(UNavTestRenderingComponent, OnReleased) == 1330, "Offset mismatch for UNavTestRenderingComponent::OnReleased");
static_assert(offsetof(UNavTestRenderingComponent, OnInputTouchBegin) == 1331, "Offset mismatch for UNavTestRenderingComponent::OnInputTouchBegin");
static_assert(offsetof(UNavTestRenderingComponent, OnInputTouchEnd) == 1332, "Offset mismatch for UNavTestRenderingComponent::OnInputTouchEnd");
static_assert(offsetof(UNavTestRenderingComponent, OnInputTouchEnter) == 1333, "Offset mismatch for UNavTestRenderingComponent::OnInputTouchEnter");
static_assert(offsetof(UNavTestRenderingComponent, OnInputTouchLeave) == 1334, "Offset mismatch for UNavTestRenderingComponent::OnInputTouchLeave");
static_assert(offsetof(UNavTestRenderingComponent, OnTouchBegan) == 1335, "Offset mismatch for UNavTestRenderingComponent::OnTouchBegan");
static_assert(offsetof(UNavTestRenderingComponent, OnTouchEnded) == 1336, "Offset mismatch for UNavTestRenderingComponent::OnTouchEnded");
static_assert(offsetof(UNavTestRenderingComponent, OnTouchEntered) == 1337, "Offset mismatch for UNavTestRenderingComponent::OnTouchEntered");
static_assert(offsetof(UNavTestRenderingComponent, OnTouchExited) == 1338, "Offset mismatch for UNavTestRenderingComponent::OnTouchExited");
static_assert(offsetof(UNavTestRenderingComponent, LODParentPrimitive) == 1368, "Offset mismatch for UNavTestRenderingComponent::LODParentPrimitive");

// /Script/NavigationSystem.NavigationData
// Kind: Class; super: Actor
class UNavigationData
{
public:
    std::uint8_t Pad_0000[0x278]; // 0x0000
    void* RenderingComp; // 0x0278 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t NavDataConfig[0x70]; // 0x0280 (Size: 0x70, Type: StructProperty)
    std::uint8_t bAutoDestroyWhenNoNavigation; // 0x02F0 (Size: 0x1, Type: BoolProperty)
    // 0x02F0 BoolProperty bCanBeMainNavData (shared storage)
    // 0x02F0 BoolProperty bCanSpawnOnRebuild (shared storage)
    // 0x02F0 BoolProperty bEnableDrawing (shared storage)
    // 0x02F0 BoolProperty bForceRebuildOnLoad (shared storage)
    // 0x02F0 BoolProperty bRebuildAtRuntime (shared storage)
    std::uint8_t Pad_0001[0x3]; // 0x02F1
    std::uint8_t RuntimeGeneration; // 0x02F4 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x7]; // 0x02F5
    float ObservedPathsTickInterval; // 0x02FC (Size: 0x4, Type: FloatProperty)
    std::uint32_t DataVersion; // 0x0300 (Size: 0x4, Type: UInt32Property)
    std::uint8_t Pad_0003[0xD4]; // 0x0304
    TArray<void*> SupportedAreas; // 0x03D8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UNavigationData, RenderingComp) == 632, "Offset mismatch for UNavigationData::RenderingComp");
static_assert(offsetof(UNavigationData, NavDataConfig) == 640, "Offset mismatch for UNavigationData::NavDataConfig");
static_assert(offsetof(UNavigationData, bAutoDestroyWhenNoNavigation) == 752, "Offset mismatch for UNavigationData::bAutoDestroyWhenNoNavigation");
static_assert(offsetof(UNavigationData, RuntimeGeneration) == 756, "Offset mismatch for UNavigationData::RuntimeGeneration");
static_assert(offsetof(UNavigationData, ObservedPathsTickInterval) == 764, "Offset mismatch for UNavigationData::ObservedPathsTickInterval");
static_assert(offsetof(UNavigationData, DataVersion) == 768, "Offset mismatch for UNavigationData::DataVersion");
static_assert(offsetof(UNavigationData, SupportedAreas) == 984, "Offset mismatch for UNavigationData::SupportedAreas");

// /Script/NavigationSystem.NavigationGraph
// Kind: Class; super: NavigationData
class UNavigationGraph
{
public:
    std::uint8_t Pad_0000[0x278]; // 0x0000
    void* RenderingComp; // 0x0278 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t NavDataConfig[0x70]; // 0x0280 (Size: 0x70, Type: StructProperty)
    std::uint8_t bAutoDestroyWhenNoNavigation; // 0x02F0 (Size: 0x1, Type: BoolProperty)
    // 0x02F0 BoolProperty bCanBeMainNavData (shared storage)
    // 0x02F0 BoolProperty bCanSpawnOnRebuild (shared storage)
    // 0x02F0 BoolProperty bEnableDrawing (shared storage)
    // 0x02F0 BoolProperty bForceRebuildOnLoad (shared storage)
    // 0x02F0 BoolProperty bRebuildAtRuntime (shared storage)
    std::uint8_t Pad_0001[0x3]; // 0x02F1
    std::uint8_t RuntimeGeneration; // 0x02F4 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x7]; // 0x02F5
    float ObservedPathsTickInterval; // 0x02FC (Size: 0x4, Type: FloatProperty)
    std::uint32_t DataVersion; // 0x0300 (Size: 0x4, Type: UInt32Property)
    std::uint8_t Pad_0003[0xD4]; // 0x0304
    TArray<void*> SupportedAreas; // 0x03D8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UNavigationGraph, RenderingComp) == 632, "Offset mismatch for UNavigationGraph::RenderingComp");
static_assert(offsetof(UNavigationGraph, NavDataConfig) == 640, "Offset mismatch for UNavigationGraph::NavDataConfig");
static_assert(offsetof(UNavigationGraph, bAutoDestroyWhenNoNavigation) == 752, "Offset mismatch for UNavigationGraph::bAutoDestroyWhenNoNavigation");
static_assert(offsetof(UNavigationGraph, RuntimeGeneration) == 756, "Offset mismatch for UNavigationGraph::RuntimeGeneration");
static_assert(offsetof(UNavigationGraph, ObservedPathsTickInterval) == 764, "Offset mismatch for UNavigationGraph::ObservedPathsTickInterval");
static_assert(offsetof(UNavigationGraph, DataVersion) == 768, "Offset mismatch for UNavigationGraph::DataVersion");
static_assert(offsetof(UNavigationGraph, SupportedAreas) == 984, "Offset mismatch for UNavigationGraph::SupportedAreas");

// /Script/NavigationSystem.NavigationGraphNode
// Kind: Class; super: Actor
class UNavigationGraphNode
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

static_assert(offsetof(UNavigationGraphNode, PrimaryActorTick) == 40, "Offset mismatch for UNavigationGraphNode::PrimaryActorTick");
static_assert(offsetof(UNavigationGraphNode, bAlwaysRelevant) == 88, "Offset mismatch for UNavigationGraphNode::bAlwaysRelevant");
static_assert(offsetof(UNavigationGraphNode, bExchangedRoles) == 89, "Offset mismatch for UNavigationGraphNode::bExchangedRoles");
static_assert(offsetof(UNavigationGraphNode, bAllowTickBeforeBeginPlay) == 90, "Offset mismatch for UNavigationGraphNode::bAllowTickBeforeBeginPlay");
static_assert(offsetof(UNavigationGraphNode, bAllowReceiveTickEventOnDedicatedServer) == 91, "Offset mismatch for UNavigationGraphNode::bAllowReceiveTickEventOnDedicatedServer");
static_assert(offsetof(UNavigationGraphNode, bActorEnableCollision) == 93, "Offset mismatch for UNavigationGraphNode::bActorEnableCollision");
static_assert(offsetof(UNavigationGraphNode, UpdateOverlapsMethodDuringLevelStreaming) == 94, "Offset mismatch for UNavigationGraphNode::UpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(UNavigationGraphNode, DefaultUpdateOverlapsMethodDuringLevelStreaming) == 95, "Offset mismatch for UNavigationGraphNode::DefaultUpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(UNavigationGraphNode, RemoteRole) == 96, "Offset mismatch for UNavigationGraphNode::RemoteRole");
static_assert(offsetof(UNavigationGraphNode, InitialLifeSpan) == 100, "Offset mismatch for UNavigationGraphNode::InitialLifeSpan");
static_assert(offsetof(UNavigationGraphNode, CustomTimeDilation) == 104, "Offset mismatch for UNavigationGraphNode::CustomTimeDilation");
static_assert(offsetof(UNavigationGraphNode, RayTracingGroupId) == 108, "Offset mismatch for UNavigationGraphNode::RayTracingGroupId");
static_assert(offsetof(UNavigationGraphNode, AttachmentReplication) == 112, "Offset mismatch for UNavigationGraphNode::AttachmentReplication");
static_assert(offsetof(UNavigationGraphNode, ReplicatedMovement) == 208, "Offset mismatch for UNavigationGraphNode::ReplicatedMovement");
static_assert(offsetof(UNavigationGraphNode, Owner) == 344, "Offset mismatch for UNavigationGraphNode::Owner");
static_assert(offsetof(UNavigationGraphNode, NetDriverName) == 352, "Offset mismatch for UNavigationGraphNode::NetDriverName");
static_assert(offsetof(UNavigationGraphNode, Role) == 356, "Offset mismatch for UNavigationGraphNode::Role");
static_assert(offsetof(UNavigationGraphNode, NetDormancy) == 357, "Offset mismatch for UNavigationGraphNode::NetDormancy");
static_assert(offsetof(UNavigationGraphNode, SpawnCollisionHandlingMethod) == 358, "Offset mismatch for UNavigationGraphNode::SpawnCollisionHandlingMethod");
static_assert(offsetof(UNavigationGraphNode, AutoReceiveInput) == 359, "Offset mismatch for UNavigationGraphNode::AutoReceiveInput");
static_assert(offsetof(UNavigationGraphNode, InputPriority) == 360, "Offset mismatch for UNavigationGraphNode::InputPriority");
static_assert(offsetof(UNavigationGraphNode, InputComponent) == 368, "Offset mismatch for UNavigationGraphNode::InputComponent");
static_assert(offsetof(UNavigationGraphNode, NetTag) == 376, "Offset mismatch for UNavigationGraphNode::NetTag");
static_assert(offsetof(UNavigationGraphNode, NetCullDistanceSquared) == 380, "Offset mismatch for UNavigationGraphNode::NetCullDistanceSquared");
static_assert(offsetof(UNavigationGraphNode, NetUpdateFrequency) == 384, "Offset mismatch for UNavigationGraphNode::NetUpdateFrequency");
static_assert(offsetof(UNavigationGraphNode, MinNetUpdateFrequency) == 388, "Offset mismatch for UNavigationGraphNode::MinNetUpdateFrequency");
static_assert(offsetof(UNavigationGraphNode, NetPriority) == 392, "Offset mismatch for UNavigationGraphNode::NetPriority");
static_assert(offsetof(UNavigationGraphNode, PhysicsReplicationMode) == 396, "Offset mismatch for UNavigationGraphNode::PhysicsReplicationMode");
static_assert(offsetof(UNavigationGraphNode, Instigator) == 408, "Offset mismatch for UNavigationGraphNode::Instigator");
static_assert(offsetof(UNavigationGraphNode, Children) == 416, "Offset mismatch for UNavigationGraphNode::Children");
static_assert(offsetof(UNavigationGraphNode, RootComponent) == 432, "Offset mismatch for UNavigationGraphNode::RootComponent");
static_assert(offsetof(UNavigationGraphNode, HLODLayer) == 448, "Offset mismatch for UNavigationGraphNode::HLODLayer");
static_assert(offsetof(UNavigationGraphNode, Layers) == 456, "Offset mismatch for UNavigationGraphNode::Layers");
static_assert(offsetof(UNavigationGraphNode, ParentComponent) == 472, "Offset mismatch for UNavigationGraphNode::ParentComponent");
static_assert(offsetof(UNavigationGraphNode, Tags) == 496, "Offset mismatch for UNavigationGraphNode::Tags");
static_assert(offsetof(UNavigationGraphNode, OnTakeAnyDamage) == 512, "Offset mismatch for UNavigationGraphNode::OnTakeAnyDamage");
static_assert(offsetof(UNavigationGraphNode, OnTakePointDamage) == 513, "Offset mismatch for UNavigationGraphNode::OnTakePointDamage");
static_assert(offsetof(UNavigationGraphNode, OnTakeRadialDamage) == 514, "Offset mismatch for UNavigationGraphNode::OnTakeRadialDamage");
static_assert(offsetof(UNavigationGraphNode, OnActorBeginOverlap) == 515, "Offset mismatch for UNavigationGraphNode::OnActorBeginOverlap");
static_assert(offsetof(UNavigationGraphNode, OnActorEndOverlap) == 516, "Offset mismatch for UNavigationGraphNode::OnActorEndOverlap");
static_assert(offsetof(UNavigationGraphNode, OnBeginCursorOver) == 517, "Offset mismatch for UNavigationGraphNode::OnBeginCursorOver");
static_assert(offsetof(UNavigationGraphNode, OnEndCursorOver) == 518, "Offset mismatch for UNavigationGraphNode::OnEndCursorOver");
static_assert(offsetof(UNavigationGraphNode, OnClicked) == 519, "Offset mismatch for UNavigationGraphNode::OnClicked");
static_assert(offsetof(UNavigationGraphNode, OnReleased) == 520, "Offset mismatch for UNavigationGraphNode::OnReleased");
static_assert(offsetof(UNavigationGraphNode, OnInputTouchBegin) == 521, "Offset mismatch for UNavigationGraphNode::OnInputTouchBegin");
static_assert(offsetof(UNavigationGraphNode, OnInputTouchEnd) == 522, "Offset mismatch for UNavigationGraphNode::OnInputTouchEnd");
static_assert(offsetof(UNavigationGraphNode, OnInputTouchEnter) == 523, "Offset mismatch for UNavigationGraphNode::OnInputTouchEnter");
static_assert(offsetof(UNavigationGraphNode, OnInputTouchLeave) == 524, "Offset mismatch for UNavigationGraphNode::OnInputTouchLeave");
static_assert(offsetof(UNavigationGraphNode, OnActorHit) == 525, "Offset mismatch for UNavigationGraphNode::OnActorHit");
static_assert(offsetof(UNavigationGraphNode, OnDestroyed) == 526, "Offset mismatch for UNavigationGraphNode::OnDestroyed");
static_assert(offsetof(UNavigationGraphNode, OnEndPlay) == 527, "Offset mismatch for UNavigationGraphNode::OnEndPlay");
static_assert(offsetof(UNavigationGraphNode, InstanceComponents) == 592, "Offset mismatch for UNavigationGraphNode::InstanceComponents");
static_assert(offsetof(UNavigationGraphNode, BlueprintCreatedComponents) == 608, "Offset mismatch for UNavigationGraphNode::BlueprintCreatedComponents");

// /Script/NavigationSystem.NavigationGraphNodeComponent
// Kind: Class; super: SceneComponent
class UNavigationGraphNodeComponent
{
public:
    std::uint8_t Pad_0000[0x240]; // 0x0000
    std::uint8_t Node[0x18]; // 0x0240 (Size: 0x18, Type: StructProperty)
    void* NextNodeComponent; // 0x0258 (Size: 0x8, Type: ObjectProperty)
    void* PrevNodeComponent; // 0x0260 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UNavigationGraphNodeComponent, Node) == 576, "Offset mismatch for UNavigationGraphNodeComponent::Node");
static_assert(offsetof(UNavigationGraphNodeComponent, NextNodeComponent) == 600, "Offset mismatch for UNavigationGraphNodeComponent::NextNodeComponent");
static_assert(offsetof(UNavigationGraphNodeComponent, PrevNodeComponent) == 608, "Offset mismatch for UNavigationGraphNodeComponent::PrevNodeComponent");

// /Script/NavigationSystem.NavigationInvokerComponent
// Kind: Class; super: ActorComponent
class UNavigationInvokerComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    float TileGenerationRadius; // 0x00C0 (Size: 0x4, Type: FloatProperty)
    float TileRemovalRadius; // 0x00C4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t SupportedAgents[0x4]; // 0x00C8 (Size: 0x4, Type: StructProperty)
    std::uint8_t Priority; // 0x00CC (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UNavigationInvokerComponent, TileGenerationRadius) == 192, "Offset mismatch for UNavigationInvokerComponent::TileGenerationRadius");
static_assert(offsetof(UNavigationInvokerComponent, TileRemovalRadius) == 196, "Offset mismatch for UNavigationInvokerComponent::TileRemovalRadius");
static_assert(offsetof(UNavigationInvokerComponent, SupportedAgents) == 200, "Offset mismatch for UNavigationInvokerComponent::SupportedAgents");
static_assert(offsetof(UNavigationInvokerComponent, Priority) == 204, "Offset mismatch for UNavigationInvokerComponent::Priority");

// /Script/NavigationSystem.NavigationObjectRepository
// Kind: Class; super: WorldSubsystem
class UNavigationObjectRepository
{
public:
    std::uint8_t Opaque[1];
};


// /Script/NavigationSystem.NavigationPath
// Kind: Class; super: Object
class UNavigationPath
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FMulticastInlineDelegate PathUpdatedNotifier; // 0x0028 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    TArray<void*> PathPoints; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t RecalculateOnInvalidation; // 0x0048 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UNavigationPath, PathUpdatedNotifier) == 40, "Offset mismatch for UNavigationPath::PathUpdatedNotifier");
static_assert(offsetof(UNavigationPath, PathPoints) == 56, "Offset mismatch for UNavigationPath::PathPoints");
static_assert(offsetof(UNavigationPath, RecalculateOnInvalidation) == 72, "Offset mismatch for UNavigationPath::RecalculateOnInvalidation");

// /Script/NavigationSystem.NavigationPathGenerator
// Kind: Class; super: Interface
class UNavigationPathGenerator
{
public:
    std::uint8_t Opaque[1];
};


// /Script/NavigationSystem.NavigationQueryFilter
// Kind: Class; super: Object
class UNavigationQueryFilter
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> Areas; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t IncludeFlags[0x4]; // 0x0038 (Size: 0x4, Type: StructProperty)
    std::uint8_t ExcludeFlags[0x1]; // 0x003C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UNavigationQueryFilter, Areas) == 40, "Offset mismatch for UNavigationQueryFilter::Areas");
static_assert(offsetof(UNavigationQueryFilter, IncludeFlags) == 56, "Offset mismatch for UNavigationQueryFilter::IncludeFlags");
static_assert(offsetof(UNavigationQueryFilter, ExcludeFlags) == 60, "Offset mismatch for UNavigationQueryFilter::ExcludeFlags");

// /Script/NavigationSystem.NavigationSystemModuleConfig
// Kind: Class; super: NavigationSystemConfig
class UNavigationSystemModuleConfig
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    std::uint8_t bAutoSpawnMissingNavData; // 0x0050 (Size: 0x1, Type: BoolProperty)
    // 0x0050 BoolProperty bCreateOnClient (shared storage)
    // 0x0050 BoolProperty bDirtyNavDataPackageOnNavigationGenerationFinished (shared storage)
    // 0x0050 BoolProperty bSpawnNavDataInNavBoundsLevel (shared storage)
    // 0x0050 BoolProperty bStrictlyStatic (shared storage)
};

static_assert(offsetof(UNavigationSystemModuleConfig, bAutoSpawnMissingNavData) == 80, "Offset mismatch for UNavigationSystemModuleConfig::bAutoSpawnMissingNavData");

// /Script/NavigationSystem.NavigationSystemV1
// Kind: Class; super: NavigationSystemBase
class UNavigationSystemV1
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* MainNavData; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    void* AbstractNavData; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    FName DefaultAgentName; // 0x0038 (Size: 0x8, Type: NameProperty)
    std::uint8_t CrowdManagerClass[0x20]; // 0x0040 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t bAllowClientSideNavigation; // 0x0060 (Size: 0x1, Type: BoolProperty)
    // 0x0060 BoolProperty bAutoCreateNavigationData (shared storage)
    // 0x0060 BoolProperty bDirtyNavDataPackageOnNavigationGenerationFinished (shared storage)
    // 0x0060 BoolProperty bInitialBuildingLocked (shared storage)
    // 0x0060 BoolProperty bShouldDiscardSubLevelNavData (shared storage)
    // 0x0060 BoolProperty bSpawnNavDataInNavBoundsLevel (shared storage)
    // 0x0060 BoolProperty bSupportRebuilding (shared storage)
    // 0x0060 BoolProperty bTickWhilePaused (shared storage)
    std::uint8_t bSkipAgentHeightCheckWhenPickingNavData; // 0x0061 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0062
    std::int32_t GeometryExportTriangleCountWarningThreshold; // 0x0064 (Size: 0x4, Type: IntProperty)
    std::uint8_t bGenerateNavigationOnlyAroundNavigationInvokers; // 0x0068 (Size: 0x1, Type: BoolProperty)
    // 0x0068 BoolProperty bPreserveTilesOutsideInvokerRadius (shared storage)
    std::uint8_t Pad_0002[0x3]; // 0x0069
    float ActiveTilesUpdateInterval; // 0x006C (Size: 0x4, Type: FloatProperty)
    double InvokersMaximumDistanceFromSeed; // 0x0070 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t DataGatheringMode; // 0x0078 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0079
    float DirtyAreaWarningSizeThreshold; // 0x007C (Size: 0x4, Type: FloatProperty)
    float GatheringNavModifiersWarningLimitTime; // 0x0080 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0004[0x4]; // 0x0084
    TArray<void*> SupportedAgents; // 0x0088 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t SupportedAgentsMask[0x8]; // 0x0098 (Size: 0x8, Type: StructProperty)
    std::uint8_t BuildBounds[0x38]; // 0x00A0 (Size: 0x38, Type: StructProperty)
    TArray<void*> NavDataSet; // 0x00D8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> NavDataRegistrationQueue; // 0x00E8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0005[0x10]; // 0x00F8
    FMulticastInlineDelegate OnNavDataRegisteredEvent; // 0x0108 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnNavigationGenerationFinishedDelegate; // 0x0118 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0006[0x70]; // 0x0128
    std::uint8_t OperationMode; // 0x0198 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0007[0xE7]; // 0x0199
    void* Repository; // 0x0280 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UNavigationSystemV1, MainNavData) == 40, "Offset mismatch for UNavigationSystemV1::MainNavData");
static_assert(offsetof(UNavigationSystemV1, AbstractNavData) == 48, "Offset mismatch for UNavigationSystemV1::AbstractNavData");
static_assert(offsetof(UNavigationSystemV1, DefaultAgentName) == 56, "Offset mismatch for UNavigationSystemV1::DefaultAgentName");
static_assert(offsetof(UNavigationSystemV1, CrowdManagerClass) == 64, "Offset mismatch for UNavigationSystemV1::CrowdManagerClass");
static_assert(offsetof(UNavigationSystemV1, bAllowClientSideNavigation) == 96, "Offset mismatch for UNavigationSystemV1::bAllowClientSideNavigation");
static_assert(offsetof(UNavigationSystemV1, bSkipAgentHeightCheckWhenPickingNavData) == 97, "Offset mismatch for UNavigationSystemV1::bSkipAgentHeightCheckWhenPickingNavData");
static_assert(offsetof(UNavigationSystemV1, GeometryExportTriangleCountWarningThreshold) == 100, "Offset mismatch for UNavigationSystemV1::GeometryExportTriangleCountWarningThreshold");
static_assert(offsetof(UNavigationSystemV1, bGenerateNavigationOnlyAroundNavigationInvokers) == 104, "Offset mismatch for UNavigationSystemV1::bGenerateNavigationOnlyAroundNavigationInvokers");
static_assert(offsetof(UNavigationSystemV1, ActiveTilesUpdateInterval) == 108, "Offset mismatch for UNavigationSystemV1::ActiveTilesUpdateInterval");
static_assert(offsetof(UNavigationSystemV1, InvokersMaximumDistanceFromSeed) == 112, "Offset mismatch for UNavigationSystemV1::InvokersMaximumDistanceFromSeed");
static_assert(offsetof(UNavigationSystemV1, DataGatheringMode) == 120, "Offset mismatch for UNavigationSystemV1::DataGatheringMode");
static_assert(offsetof(UNavigationSystemV1, DirtyAreaWarningSizeThreshold) == 124, "Offset mismatch for UNavigationSystemV1::DirtyAreaWarningSizeThreshold");
static_assert(offsetof(UNavigationSystemV1, GatheringNavModifiersWarningLimitTime) == 128, "Offset mismatch for UNavigationSystemV1::GatheringNavModifiersWarningLimitTime");
static_assert(offsetof(UNavigationSystemV1, SupportedAgents) == 136, "Offset mismatch for UNavigationSystemV1::SupportedAgents");
static_assert(offsetof(UNavigationSystemV1, SupportedAgentsMask) == 152, "Offset mismatch for UNavigationSystemV1::SupportedAgentsMask");
static_assert(offsetof(UNavigationSystemV1, BuildBounds) == 160, "Offset mismatch for UNavigationSystemV1::BuildBounds");
static_assert(offsetof(UNavigationSystemV1, NavDataSet) == 216, "Offset mismatch for UNavigationSystemV1::NavDataSet");
static_assert(offsetof(UNavigationSystemV1, NavDataRegistrationQueue) == 232, "Offset mismatch for UNavigationSystemV1::NavDataRegistrationQueue");
static_assert(offsetof(UNavigationSystemV1, OnNavDataRegisteredEvent) == 264, "Offset mismatch for UNavigationSystemV1::OnNavDataRegisteredEvent");
static_assert(offsetof(UNavigationSystemV1, OnNavigationGenerationFinishedDelegate) == 280, "Offset mismatch for UNavigationSystemV1::OnNavigationGenerationFinishedDelegate");
static_assert(offsetof(UNavigationSystemV1, OperationMode) == 408, "Offset mismatch for UNavigationSystemV1::OperationMode");
static_assert(offsetof(UNavigationSystemV1, Repository) == 640, "Offset mismatch for UNavigationSystemV1::Repository");

// /Script/NavigationSystem.NavigationTestingActor
// Kind: Class; super: Actor
class UNavigationTestingActor
{
public:
    std::uint8_t Pad_0000[0x280]; // 0x0000
    void* CapsuleComponent; // 0x0280 (Size: 0x8, Type: ObjectProperty)
    void* InvokerComponent; // 0x0288 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bActAsNavigationInvoker; // 0x0290 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0291
    std::uint8_t NavAgentProps[0x30]; // 0x0298 (Size: 0x30, Type: StructProperty)
    std::uint8_t QueryingExtent[0x18]; // 0x02C8 (Size: 0x18, Type: StructProperty)
    void* MyNavData; // 0x02E0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ProjectedLocation[0x18]; // 0x02E8 (Size: 0x18, Type: StructProperty)
    std::uint8_t bProjectedLocationValid; // 0x0300 (Size: 0x1, Type: BoolProperty)
    // 0x0300 BoolProperty bSearchStart (shared storage)
    std::uint8_t Pad_0002[0x3]; // 0x0301
    float CostLimitFactor; // 0x0304 (Size: 0x4, Type: FloatProperty)
    float MinimumCostLimit; // 0x0308 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bBacktracking; // 0x030C (Size: 0x1, Type: BoolProperty)
    // 0x030C BoolProperty bDrawDistanceToWall (shared storage)
    // 0x030C BoolProperty bDrawIfNavDataIsReadyInRadius (shared storage)
    // 0x030C BoolProperty bDrawIfNavDataIsReadyToQueryTargetActor (shared storage)
    // 0x030C BoolProperty bDrawRaycastToQueryTargetActor (shared storage)
    // 0x030C BoolProperty bGatherDetailedInfo (shared storage)
    // 0x030C BoolProperty bRequireNavigableEndLocation (shared storage)
    // 0x030C BoolProperty bUseHierarchicalPathfinding (shared storage)
    std::uint8_t Pad_0003[0x3]; // 0x030D
    void* QueryTargetActor; // 0x0310 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bShouldBeVisibleInGame; // 0x0318 (Size: 0x1, Type: BoolProperty)
    // 0x0318 BoolProperty bShowBestPath (shared storage)
    // 0x0318 BoolProperty bShowDiffWithPreviousStep (shared storage)
    // 0x0318 BoolProperty bShowNodePool (shared storage)
    std::uint8_t Pad_0004[0x3]; // 0x0319
    float RadiusUsedToValidateNavData; // 0x031C (Size: 0x4, Type: FloatProperty)
    std::uint8_t CostDisplayMode; // 0x0320 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0005[0x7]; // 0x0321
    std::uint8_t TextCanvasOffset[0x10]; // 0x0328 (Size: 0x10, Type: StructProperty)
    std::uint8_t bPathExist; // 0x0338 (Size: 0x1, Type: BoolProperty)
    // 0x0338 BoolProperty bPathIsPartial (shared storage)
    // 0x0338 BoolProperty bPathSearchOutOfNodes (shared storage)
    std::uint8_t Pad_0006[0x3]; // 0x0339
    float PathfindingTime; // 0x033C (Size: 0x4, Type: FloatProperty)
    double PathCost; // 0x0340 (Size: 0x8, Type: DoubleProperty)
    std::int32_t PathfindingSteps; // 0x0348 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0007[0x4]; // 0x034C
    void* OtherActor; // 0x0350 (Size: 0x8, Type: ObjectProperty)
    void* FilterClass; // 0x0358 (Size: 0x8, Type: ClassProperty)
    std::int32_t ShowStepIndex; // 0x0360 (Size: 0x4, Type: IntProperty)
    float OffsetFromCornersDistance; // 0x0364 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UNavigationTestingActor, CapsuleComponent) == 640, "Offset mismatch for UNavigationTestingActor::CapsuleComponent");
static_assert(offsetof(UNavigationTestingActor, InvokerComponent) == 648, "Offset mismatch for UNavigationTestingActor::InvokerComponent");
static_assert(offsetof(UNavigationTestingActor, bActAsNavigationInvoker) == 656, "Offset mismatch for UNavigationTestingActor::bActAsNavigationInvoker");
static_assert(offsetof(UNavigationTestingActor, NavAgentProps) == 664, "Offset mismatch for UNavigationTestingActor::NavAgentProps");
static_assert(offsetof(UNavigationTestingActor, QueryingExtent) == 712, "Offset mismatch for UNavigationTestingActor::QueryingExtent");
static_assert(offsetof(UNavigationTestingActor, MyNavData) == 736, "Offset mismatch for UNavigationTestingActor::MyNavData");
static_assert(offsetof(UNavigationTestingActor, ProjectedLocation) == 744, "Offset mismatch for UNavigationTestingActor::ProjectedLocation");
static_assert(offsetof(UNavigationTestingActor, bProjectedLocationValid) == 768, "Offset mismatch for UNavigationTestingActor::bProjectedLocationValid");
static_assert(offsetof(UNavigationTestingActor, CostLimitFactor) == 772, "Offset mismatch for UNavigationTestingActor::CostLimitFactor");
static_assert(offsetof(UNavigationTestingActor, MinimumCostLimit) == 776, "Offset mismatch for UNavigationTestingActor::MinimumCostLimit");
static_assert(offsetof(UNavigationTestingActor, bBacktracking) == 780, "Offset mismatch for UNavigationTestingActor::bBacktracking");
static_assert(offsetof(UNavigationTestingActor, QueryTargetActor) == 784, "Offset mismatch for UNavigationTestingActor::QueryTargetActor");
static_assert(offsetof(UNavigationTestingActor, bShouldBeVisibleInGame) == 792, "Offset mismatch for UNavigationTestingActor::bShouldBeVisibleInGame");
static_assert(offsetof(UNavigationTestingActor, RadiusUsedToValidateNavData) == 796, "Offset mismatch for UNavigationTestingActor::RadiusUsedToValidateNavData");
static_assert(offsetof(UNavigationTestingActor, CostDisplayMode) == 800, "Offset mismatch for UNavigationTestingActor::CostDisplayMode");
static_assert(offsetof(UNavigationTestingActor, TextCanvasOffset) == 808, "Offset mismatch for UNavigationTestingActor::TextCanvasOffset");
static_assert(offsetof(UNavigationTestingActor, bPathExist) == 824, "Offset mismatch for UNavigationTestingActor::bPathExist");
static_assert(offsetof(UNavigationTestingActor, PathfindingTime) == 828, "Offset mismatch for UNavigationTestingActor::PathfindingTime");
static_assert(offsetof(UNavigationTestingActor, PathCost) == 832, "Offset mismatch for UNavigationTestingActor::PathCost");
static_assert(offsetof(UNavigationTestingActor, PathfindingSteps) == 840, "Offset mismatch for UNavigationTestingActor::PathfindingSteps");
static_assert(offsetof(UNavigationTestingActor, OtherActor) == 848, "Offset mismatch for UNavigationTestingActor::OtherActor");
static_assert(offsetof(UNavigationTestingActor, FilterClass) == 856, "Offset mismatch for UNavigationTestingActor::FilterClass");
static_assert(offsetof(UNavigationTestingActor, ShowStepIndex) == 864, "Offset mismatch for UNavigationTestingActor::ShowStepIndex");
static_assert(offsetof(UNavigationTestingActor, OffsetFromCornersDistance) == 868, "Offset mismatch for UNavigationTestingActor::OffsetFromCornersDistance");

// /Script/NavigationSystem.RecastFilter_UseDefaultArea
// Kind: Class; super: NavigationQueryFilter
class URecastFilter_UseDefaultArea
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> Areas; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t IncludeFlags[0x4]; // 0x0038 (Size: 0x4, Type: StructProperty)
    std::uint8_t ExcludeFlags[0x1]; // 0x003C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(URecastFilter_UseDefaultArea, Areas) == 40, "Offset mismatch for URecastFilter_UseDefaultArea::Areas");
static_assert(offsetof(URecastFilter_UseDefaultArea, IncludeFlags) == 56, "Offset mismatch for URecastFilter_UseDefaultArea::IncludeFlags");
static_assert(offsetof(URecastFilter_UseDefaultArea, ExcludeFlags) == 60, "Offset mismatch for URecastFilter_UseDefaultArea::ExcludeFlags");

// /Script/NavigationSystem.RecastNavMesh
// Kind: Class; super: NavigationData
class URecastNavMesh
{
public:
    std::uint8_t Pad_0000[0x430]; // 0x0000
    std::uint8_t bDrawFilledPolys; // 0x0430 (Size: 0x1, Type: BoolProperty)
    // 0x0430 BoolProperty bDrawNavMeshEdges (shared storage)
    // 0x0430 BoolProperty bDrawPathCollidingGeometry (shared storage)
    // 0x0430 BoolProperty bDrawPolyEdges (shared storage)
    // 0x0430 BoolProperty bDrawTileBounds (shared storage)
    // 0x0430 BoolProperty bDrawTileLabels (shared storage)
    // 0x0430 BoolProperty bDrawTileResolutions (shared storage)
    // 0x0430 BoolProperty bDrawTriangleEdges (shared storage)
    std::uint8_t bDrawDefaultPolygonCost; // 0x0431 (Size: 0x1, Type: BoolProperty)
    // 0x0431 BoolProperty bDrawLabelsOnPathNodes (shared storage)
    // 0x0431 BoolProperty bDrawNavLinks (shared storage)
    // 0x0431 BoolProperty bDrawPolygonAreaIDs (shared storage)
    // 0x0431 BoolProperty bDrawPolygonFlags (shared storage)
    // 0x0431 BoolProperty bDrawPolygonLabels (shared storage)
    // 0x0431 BoolProperty bDrawTileBuildTimes (shared storage)
    // 0x0431 BoolProperty bDrawTileBuildTimesHeatMap (shared storage)
    std::uint8_t bDistinctlyDrawTilesBeingBuilt; // 0x0432 (Size: 0x1, Type: BoolProperty)
    // 0x0432 BoolProperty bDrawClusters (shared storage)
    // 0x0432 BoolProperty bDrawFailedNavLinks (shared storage)
    // 0x0432 BoolProperty bDrawMarkedForbiddenPolys (shared storage)
    // 0x0432 BoolProperty bDrawOctree (shared storage)
    // 0x0432 BoolProperty bDrawOctreeDetails (shared storage)
    // 0x0432 BoolProperty bDrawOnScreenInformation (shared storage)
    // 0x0432 BoolProperty bDrawTileStateGrid (shared storage)
    std::uint8_t Pad_0001[0x1]; // 0x0433
    float DrawOffset; // 0x0434 (Size: 0x4, Type: FloatProperty)
    std::uint8_t TileGenerationDebug[0x34]; // 0x0438 (Size: 0x34, Type: StructProperty)
    std::uint8_t bFixedTilePoolSize; // 0x046C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x046D
    std::int32_t TilePoolSize; // 0x0470 (Size: 0x4, Type: IntProperty)
    float TileSizeUU; // 0x0474 (Size: 0x4, Type: FloatProperty)
    float AverageLayersPerTile; // 0x0478 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bEnableProgressiveBuild; // 0x047C (Size: 0x1, Type: BoolProperty)
    // 0x047C BoolProperty bMinimizeLinkPoolSize (shared storage)
    std::uint8_t Pad_0003[0x3]; // 0x047D
    std::int32_t MaxCoverageTilesPerTick; // 0x0480 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxCoverageInitialScanTilesPerTick; // 0x0484 (Size: 0x4, Type: IntProperty)
    std::int32_t CoveragePendingBacklogLimit; // 0x0488 (Size: 0x4, Type: IntProperty)
    float CoveragePoolMaxUsageFraction; // 0x048C (Size: 0x4, Type: FloatProperty)
    float CellSize; // 0x0490 (Size: 0x4, Type: FloatProperty)
    float CellHeight; // 0x0494 (Size: 0x4, Type: FloatProperty)
    float AgentMaxStepHeight; // 0x0498 (Size: 0x4, Type: FloatProperty)
    std::uint8_t NavMeshResolutionParams[0x24]; // 0x049C (Size: 0x24, Type: StructProperty)
    float AgentRadius; // 0x04C0 (Size: 0x4, Type: FloatProperty)
    float AgentHeight; // 0x04C4 (Size: 0x4, Type: FloatProperty)
    float AgentMaxSlope; // 0x04C8 (Size: 0x4, Type: FloatProperty)
    float MinRegionArea; // 0x04CC (Size: 0x4, Type: FloatProperty)
    float MergeRegionSize; // 0x04D0 (Size: 0x4, Type: FloatProperty)
    std::int32_t MaxVerticalMergeError; // 0x04D4 (Size: 0x4, Type: IntProperty)
    float MaxSimplificationError; // 0x04D8 (Size: 0x4, Type: FloatProperty)
    float SimplificationElevationRatio; // 0x04DC (Size: 0x4, Type: FloatProperty)
    std::int32_t MaxSimultaneousTileGenerationJobsCount; // 0x04E0 (Size: 0x4, Type: IntProperty)
    std::int32_t TileNumberHardLimit; // 0x04E4 (Size: 0x4, Type: IntProperty)
    std::int32_t ExpectedMaxLayersPerTile; // 0x04E8 (Size: 0x4, Type: IntProperty)
    std::int32_t PolyRefTileBits; // 0x04EC (Size: 0x4, Type: IntProperty)
    std::int32_t PolyRefNavPolyBits; // 0x04F0 (Size: 0x4, Type: IntProperty)
    std::int32_t PolyRefSaltBits; // 0x04F4 (Size: 0x4, Type: IntProperty)
    std::uint8_t NavMeshOriginOffset[0x18]; // 0x04F8 (Size: 0x18, Type: StructProperty)
    float DefaultDrawDistance; // 0x0510 (Size: 0x4, Type: FloatProperty)
    float DefaultMaxSearchNodes; // 0x0514 (Size: 0x4, Type: FloatProperty)
    float DefaultMaxHierarchicalSearchNodes; // 0x0518 (Size: 0x4, Type: FloatProperty)
    std::uint8_t LedgeSlopeFilterMode; // 0x051C (Size: 0x1, Type: EnumProperty)
    std::uint8_t RegionPartitioning; // 0x051D (Size: 0x1, Type: ByteProperty)
    std::uint8_t LayerPartitioning; // 0x051E (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0004[0x1]; // 0x051F
    std::int32_t RegionChunkSplits; // 0x0520 (Size: 0x4, Type: IntProperty)
    std::int32_t LayerChunkSplits; // 0x0524 (Size: 0x4, Type: IntProperty)
    std::uint8_t bFilterLowSpanFromTileCache; // 0x0528 (Size: 0x1, Type: BoolProperty)
    // 0x0528 BoolProperty bFilterLowSpanSequences (shared storage)
    // 0x0528 BoolProperty bGenerateNavLinks (shared storage)
    // 0x0528 BoolProperty bIsWorldPartitioned (shared storage)
    // 0x0528 BoolProperty bMarkLowHeightAreas (shared storage)
    // 0x0528 BoolProperty bPerformVoxelFiltering (shared storage)
    // 0x0528 BoolProperty bSortNavigationAreasByCost (shared storage)
    // 0x0528 BoolProperty bUseExtraTopCellWhenMarkingAreas (shared storage)
    std::uint8_t bAllowNavLinkAsPathEnd; // 0x0529 (Size: 0x1, Type: BoolProperty)
    // 0x0529 BoolProperty bDoFullyAsyncNavDataGathering (shared storage)
    // 0x0529 BoolProperty bStoreEmptyTileLayers (shared storage)
    // 0x0529 BoolProperty bUseBetterOffsetsFromCorners (shared storage)
    // 0x0529 BoolProperty bUseVirtualFilters (shared storage)
    // 0x0529 BoolProperty bUseVirtualGeometryFilteringAndDirtying (shared storage)
    std::uint8_t Pad_0005[0x2]; // 0x052A
    std::int32_t TimeSliceFilterLedgeSpansMaxYProcess; // 0x052C (Size: 0x4, Type: IntProperty)
    double TimeSliceLongDurationDebug; // 0x0530 (Size: 0x8, Type: DoubleProperty)
    std::uint32_t InvokerTilePriorityBumpDistanceThresholdInTileUnits; // 0x0538 (Size: 0x4, Type: UInt32Property)
    std::uint8_t InvokerTilePriorityBumpIncrease; // 0x053C (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0006[0x3]; // 0x053D
    TArray<void*> NavLinkJumpConfigs; // 0x0540 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0007[0x4]; // 0x0550
    std::uint8_t bUseVoxelCache; // 0x0554 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0008[0x3]; // 0x0555
    float TileSetUpdateInterval; // 0x0558 (Size: 0x4, Type: FloatProperty)
    float HeuristicScale; // 0x055C (Size: 0x4, Type: FloatProperty)
    float VerticalDeviationFromGroundCompensation; // 0x0560 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(URecastNavMesh, bDrawFilledPolys) == 1072, "Offset mismatch for URecastNavMesh::bDrawFilledPolys");
static_assert(offsetof(URecastNavMesh, bDrawDefaultPolygonCost) == 1073, "Offset mismatch for URecastNavMesh::bDrawDefaultPolygonCost");
static_assert(offsetof(URecastNavMesh, bDistinctlyDrawTilesBeingBuilt) == 1074, "Offset mismatch for URecastNavMesh::bDistinctlyDrawTilesBeingBuilt");
static_assert(offsetof(URecastNavMesh, DrawOffset) == 1076, "Offset mismatch for URecastNavMesh::DrawOffset");
static_assert(offsetof(URecastNavMesh, TileGenerationDebug) == 1080, "Offset mismatch for URecastNavMesh::TileGenerationDebug");
static_assert(offsetof(URecastNavMesh, bFixedTilePoolSize) == 1132, "Offset mismatch for URecastNavMesh::bFixedTilePoolSize");
static_assert(offsetof(URecastNavMesh, TilePoolSize) == 1136, "Offset mismatch for URecastNavMesh::TilePoolSize");
static_assert(offsetof(URecastNavMesh, TileSizeUU) == 1140, "Offset mismatch for URecastNavMesh::TileSizeUU");
static_assert(offsetof(URecastNavMesh, AverageLayersPerTile) == 1144, "Offset mismatch for URecastNavMesh::AverageLayersPerTile");
static_assert(offsetof(URecastNavMesh, bEnableProgressiveBuild) == 1148, "Offset mismatch for URecastNavMesh::bEnableProgressiveBuild");
static_assert(offsetof(URecastNavMesh, MaxCoverageTilesPerTick) == 1152, "Offset mismatch for URecastNavMesh::MaxCoverageTilesPerTick");
static_assert(offsetof(URecastNavMesh, MaxCoverageInitialScanTilesPerTick) == 1156, "Offset mismatch for URecastNavMesh::MaxCoverageInitialScanTilesPerTick");
static_assert(offsetof(URecastNavMesh, CoveragePendingBacklogLimit) == 1160, "Offset mismatch for URecastNavMesh::CoveragePendingBacklogLimit");
static_assert(offsetof(URecastNavMesh, CoveragePoolMaxUsageFraction) == 1164, "Offset mismatch for URecastNavMesh::CoveragePoolMaxUsageFraction");
static_assert(offsetof(URecastNavMesh, CellSize) == 1168, "Offset mismatch for URecastNavMesh::CellSize");
static_assert(offsetof(URecastNavMesh, CellHeight) == 1172, "Offset mismatch for URecastNavMesh::CellHeight");
static_assert(offsetof(URecastNavMesh, AgentMaxStepHeight) == 1176, "Offset mismatch for URecastNavMesh::AgentMaxStepHeight");
static_assert(offsetof(URecastNavMesh, NavMeshResolutionParams) == 1180, "Offset mismatch for URecastNavMesh::NavMeshResolutionParams");
static_assert(offsetof(URecastNavMesh, AgentRadius) == 1216, "Offset mismatch for URecastNavMesh::AgentRadius");
static_assert(offsetof(URecastNavMesh, AgentHeight) == 1220, "Offset mismatch for URecastNavMesh::AgentHeight");
static_assert(offsetof(URecastNavMesh, AgentMaxSlope) == 1224, "Offset mismatch for URecastNavMesh::AgentMaxSlope");
static_assert(offsetof(URecastNavMesh, MinRegionArea) == 1228, "Offset mismatch for URecastNavMesh::MinRegionArea");
static_assert(offsetof(URecastNavMesh, MergeRegionSize) == 1232, "Offset mismatch for URecastNavMesh::MergeRegionSize");
static_assert(offsetof(URecastNavMesh, MaxVerticalMergeError) == 1236, "Offset mismatch for URecastNavMesh::MaxVerticalMergeError");
static_assert(offsetof(URecastNavMesh, MaxSimplificationError) == 1240, "Offset mismatch for URecastNavMesh::MaxSimplificationError");
static_assert(offsetof(URecastNavMesh, SimplificationElevationRatio) == 1244, "Offset mismatch for URecastNavMesh::SimplificationElevationRatio");
static_assert(offsetof(URecastNavMesh, MaxSimultaneousTileGenerationJobsCount) == 1248, "Offset mismatch for URecastNavMesh::MaxSimultaneousTileGenerationJobsCount");
static_assert(offsetof(URecastNavMesh, TileNumberHardLimit) == 1252, "Offset mismatch for URecastNavMesh::TileNumberHardLimit");
static_assert(offsetof(URecastNavMesh, ExpectedMaxLayersPerTile) == 1256, "Offset mismatch for URecastNavMesh::ExpectedMaxLayersPerTile");
static_assert(offsetof(URecastNavMesh, PolyRefTileBits) == 1260, "Offset mismatch for URecastNavMesh::PolyRefTileBits");
static_assert(offsetof(URecastNavMesh, PolyRefNavPolyBits) == 1264, "Offset mismatch for URecastNavMesh::PolyRefNavPolyBits");
static_assert(offsetof(URecastNavMesh, PolyRefSaltBits) == 1268, "Offset mismatch for URecastNavMesh::PolyRefSaltBits");
static_assert(offsetof(URecastNavMesh, NavMeshOriginOffset) == 1272, "Offset mismatch for URecastNavMesh::NavMeshOriginOffset");
static_assert(offsetof(URecastNavMesh, DefaultDrawDistance) == 1296, "Offset mismatch for URecastNavMesh::DefaultDrawDistance");
static_assert(offsetof(URecastNavMesh, DefaultMaxSearchNodes) == 1300, "Offset mismatch for URecastNavMesh::DefaultMaxSearchNodes");
static_assert(offsetof(URecastNavMesh, DefaultMaxHierarchicalSearchNodes) == 1304, "Offset mismatch for URecastNavMesh::DefaultMaxHierarchicalSearchNodes");
static_assert(offsetof(URecastNavMesh, LedgeSlopeFilterMode) == 1308, "Offset mismatch for URecastNavMesh::LedgeSlopeFilterMode");
static_assert(offsetof(URecastNavMesh, RegionPartitioning) == 1309, "Offset mismatch for URecastNavMesh::RegionPartitioning");
static_assert(offsetof(URecastNavMesh, LayerPartitioning) == 1310, "Offset mismatch for URecastNavMesh::LayerPartitioning");
static_assert(offsetof(URecastNavMesh, RegionChunkSplits) == 1312, "Offset mismatch for URecastNavMesh::RegionChunkSplits");
static_assert(offsetof(URecastNavMesh, LayerChunkSplits) == 1316, "Offset mismatch for URecastNavMesh::LayerChunkSplits");
static_assert(offsetof(URecastNavMesh, bFilterLowSpanFromTileCache) == 1320, "Offset mismatch for URecastNavMesh::bFilterLowSpanFromTileCache");
static_assert(offsetof(URecastNavMesh, bAllowNavLinkAsPathEnd) == 1321, "Offset mismatch for URecastNavMesh::bAllowNavLinkAsPathEnd");
static_assert(offsetof(URecastNavMesh, TimeSliceFilterLedgeSpansMaxYProcess) == 1324, "Offset mismatch for URecastNavMesh::TimeSliceFilterLedgeSpansMaxYProcess");
static_assert(offsetof(URecastNavMesh, TimeSliceLongDurationDebug) == 1328, "Offset mismatch for URecastNavMesh::TimeSliceLongDurationDebug");
static_assert(offsetof(URecastNavMesh, InvokerTilePriorityBumpDistanceThresholdInTileUnits) == 1336, "Offset mismatch for URecastNavMesh::InvokerTilePriorityBumpDistanceThresholdInTileUnits");
static_assert(offsetof(URecastNavMesh, InvokerTilePriorityBumpIncrease) == 1340, "Offset mismatch for URecastNavMesh::InvokerTilePriorityBumpIncrease");
static_assert(offsetof(URecastNavMesh, NavLinkJumpConfigs) == 1344, "Offset mismatch for URecastNavMesh::NavLinkJumpConfigs");
static_assert(offsetof(URecastNavMesh, bUseVoxelCache) == 1364, "Offset mismatch for URecastNavMesh::bUseVoxelCache");
static_assert(offsetof(URecastNavMesh, TileSetUpdateInterval) == 1368, "Offset mismatch for URecastNavMesh::TileSetUpdateInterval");
static_assert(offsetof(URecastNavMesh, HeuristicScale) == 1372, "Offset mismatch for URecastNavMesh::HeuristicScale");
static_assert(offsetof(URecastNavMesh, VerticalDeviationFromGroundCompensation) == 1376, "Offset mismatch for URecastNavMesh::VerticalDeviationFromGroundCompensation");

// /Script/NavigationSystem.RecastNavMeshDataChunk
// Kind: Class; super: NavigationDataChunk
class URecastNavMeshDataChunk
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FName NavigationDataName; // 0x0028 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(URecastNavMeshDataChunk, NavigationDataName) == 40, "Offset mismatch for URecastNavMeshDataChunk::NavigationDataName");

// /Script/NavigationSystem.SplineNavModifierComponent
// Kind: Class; super: NavModifierComponent
class USplineNavModifierComponent
{
public:
    std::uint8_t Pad_0000[0x1C0]; // 0x0000
    std::uint8_t bUpdateNavDataOnSplineChange; // 0x01C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x01C1
    std::uint8_t AttachedSpline[0x28]; // 0x01C8 (Size: 0x28, Type: StructProperty)
    double StrokeWidth; // 0x01F0 (Size: 0x8, Type: DoubleProperty)
    double StrokeHeight; // 0x01F8 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t SubdivisionLOD; // 0x0200 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(USplineNavModifierComponent, bUpdateNavDataOnSplineChange) == 448, "Offset mismatch for USplineNavModifierComponent::bUpdateNavDataOnSplineChange");
static_assert(offsetof(USplineNavModifierComponent, AttachedSpline) == 456, "Offset mismatch for USplineNavModifierComponent::AttachedSpline");
static_assert(offsetof(USplineNavModifierComponent, StrokeWidth) == 496, "Offset mismatch for USplineNavModifierComponent::StrokeWidth");
static_assert(offsetof(USplineNavModifierComponent, StrokeHeight) == 504, "Offset mismatch for USplineNavModifierComponent::StrokeHeight");
static_assert(offsetof(USplineNavModifierComponent, SubdivisionLOD) == 512, "Offset mismatch for USplineNavModifierComponent::SubdivisionLOD");

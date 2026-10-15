/**
 * decamp dumper generated SDK
 * Package: /script/ZoneGraph
 */
#pragma once
#include "Basic.h"

// /script/ZoneGraph.RegisteredZoneGraphData
// Kind: ScriptStruct; super: none
struct FRegisteredZoneGraphData
{
public:
    void* ZoneGraphData; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FRegisteredZoneGraphData, ZoneGraphData) == 0, "Offset mismatch for FRegisteredZoneGraphData::ZoneGraphData");

// /script/ZoneGraph.ZoneData
// Kind: ScriptStruct; super: none
struct FZoneData
{
public:
    std::int32_t BoundaryPointsBegin; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t BoundaryPointsEnd; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t LanesBegin; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::int32_t LanesEnd; // 0x000C (Size: 0x4, Type: IntProperty)
    std::uint8_t Bounds[0x38]; // 0x0010 (Size: 0x38, Type: StructProperty)
    std::uint8_t Tags[0x1]; // 0x0048 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FZoneData, BoundaryPointsBegin) == 0, "Offset mismatch for FZoneData::BoundaryPointsBegin");
static_assert(offsetof(FZoneData, BoundaryPointsEnd) == 4, "Offset mismatch for FZoneData::BoundaryPointsEnd");
static_assert(offsetof(FZoneData, LanesBegin) == 8, "Offset mismatch for FZoneData::LanesBegin");
static_assert(offsetof(FZoneData, LanesEnd) == 12, "Offset mismatch for FZoneData::LanesEnd");
static_assert(offsetof(FZoneData, Bounds) == 16, "Offset mismatch for FZoneData::Bounds");
static_assert(offsetof(FZoneData, Tags) == 72, "Offset mismatch for FZoneData::Tags");

// /script/ZoneGraph.ZoneGraphBVNode
// Kind: ScriptStruct; super: none
struct FZoneGraphBVNode
{
public:
    std::uint16_t MinX; // 0x0000 (Size: 0x2, Type: UInt16Property)
    std::uint16_t MinY; // 0x0002 (Size: 0x2, Type: UInt16Property)
    std::uint16_t MinZ; // 0x0004 (Size: 0x2, Type: UInt16Property)
    std::uint16_t MaxX; // 0x0006 (Size: 0x2, Type: UInt16Property)
    std::uint16_t MaxY; // 0x0008 (Size: 0x2, Type: UInt16Property)
    std::uint16_t MaxZ; // 0x000A (Size: 0x2, Type: UInt16Property)
    std::int32_t Index; // 0x000C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FZoneGraphBVNode, MinX) == 0, "Offset mismatch for FZoneGraphBVNode::MinX");
static_assert(offsetof(FZoneGraphBVNode, MinY) == 2, "Offset mismatch for FZoneGraphBVNode::MinY");
static_assert(offsetof(FZoneGraphBVNode, MinZ) == 4, "Offset mismatch for FZoneGraphBVNode::MinZ");
static_assert(offsetof(FZoneGraphBVNode, MaxX) == 6, "Offset mismatch for FZoneGraphBVNode::MaxX");
static_assert(offsetof(FZoneGraphBVNode, MaxY) == 8, "Offset mismatch for FZoneGraphBVNode::MaxY");
static_assert(offsetof(FZoneGraphBVNode, MaxZ) == 10, "Offset mismatch for FZoneGraphBVNode::MaxZ");
static_assert(offsetof(FZoneGraphBVNode, Index) == 12, "Offset mismatch for FZoneGraphBVNode::Index");

// /script/ZoneGraph.ZoneGraphBVTree
// Kind: ScriptStruct; super: none
struct FZoneGraphBVTree
{
public:
    std::uint8_t origin[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    float QuantizationScale; // 0x0018 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x001C
    TArray<void*> Nodes; // 0x0020 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FZoneGraphBVTree, origin) == 0, "Offset mismatch for FZoneGraphBVTree::origin");
static_assert(offsetof(FZoneGraphBVTree, QuantizationScale) == 24, "Offset mismatch for FZoneGraphBVTree::QuantizationScale");
static_assert(offsetof(FZoneGraphBVTree, Nodes) == 32, "Offset mismatch for FZoneGraphBVTree::Nodes");

// /script/ZoneGraph.ZoneGraphBuildData
// Kind: ScriptStruct; super: none
struct FZoneGraphBuildData
{
public:
    TMap<void*, void*> ZoneShapeComponentBuildData; // 0x0000 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FZoneGraphBuildData, ZoneShapeComponentBuildData) == 0, "Offset mismatch for FZoneGraphBuildData::ZoneShapeComponentBuildData");

// /script/ZoneGraph.ZoneGraphBuildSettings
// Kind: ScriptStruct; super: none
struct FZoneGraphBuildSettings
{
public:
    float CommonTessellationTolerance; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    TArray<void*> SpecificTessellationTolerances; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    float LaneConnectionAngle; // 0x0018 (Size: 0x4, Type: FloatProperty)
    std::uint8_t LaneConnectionMask[0x4]; // 0x001C (Size: 0x4, Type: StructProperty)
    float TurnThresholdAngle; // 0x0020 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0024
    TArray<void*> PolygonRoutingRules; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    float ConnectionSnapDistance; // 0x0038 (Size: 0x4, Type: FloatProperty)
    float ConnectionSnapAngle; // 0x003C (Size: 0x4, Type: FloatProperty)
    double DragEndpointAutoConnectRange; // 0x0040 (Size: 0x8, Type: DoubleProperty)
    double DragEndpointAutoIntersectionRange; // 0x0048 (Size: 0x8, Type: DoubleProperty)
    double SnapAutoIntersectionToClosestPointTolerance; // 0x0050 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bShow3DRadiusForAutoConnectionAndIntersection; // 0x0058 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FZoneGraphBuildSettings, CommonTessellationTolerance) == 0, "Offset mismatch for FZoneGraphBuildSettings::CommonTessellationTolerance");
static_assert(offsetof(FZoneGraphBuildSettings, SpecificTessellationTolerances) == 8, "Offset mismatch for FZoneGraphBuildSettings::SpecificTessellationTolerances");
static_assert(offsetof(FZoneGraphBuildSettings, LaneConnectionAngle) == 24, "Offset mismatch for FZoneGraphBuildSettings::LaneConnectionAngle");
static_assert(offsetof(FZoneGraphBuildSettings, LaneConnectionMask) == 28, "Offset mismatch for FZoneGraphBuildSettings::LaneConnectionMask");
static_assert(offsetof(FZoneGraphBuildSettings, TurnThresholdAngle) == 32, "Offset mismatch for FZoneGraphBuildSettings::TurnThresholdAngle");
static_assert(offsetof(FZoneGraphBuildSettings, PolygonRoutingRules) == 40, "Offset mismatch for FZoneGraphBuildSettings::PolygonRoutingRules");
static_assert(offsetof(FZoneGraphBuildSettings, ConnectionSnapDistance) == 56, "Offset mismatch for FZoneGraphBuildSettings::ConnectionSnapDistance");
static_assert(offsetof(FZoneGraphBuildSettings, ConnectionSnapAngle) == 60, "Offset mismatch for FZoneGraphBuildSettings::ConnectionSnapAngle");
static_assert(offsetof(FZoneGraphBuildSettings, DragEndpointAutoConnectRange) == 64, "Offset mismatch for FZoneGraphBuildSettings::DragEndpointAutoConnectRange");
static_assert(offsetof(FZoneGraphBuildSettings, DragEndpointAutoIntersectionRange) == 72, "Offset mismatch for FZoneGraphBuildSettings::DragEndpointAutoIntersectionRange");
static_assert(offsetof(FZoneGraphBuildSettings, SnapAutoIntersectionToClosestPointTolerance) == 80, "Offset mismatch for FZoneGraphBuildSettings::SnapAutoIntersectionToClosestPointTolerance");
static_assert(offsetof(FZoneGraphBuildSettings, bShow3DRadiusForAutoConnectionAndIntersection) == 88, "Offset mismatch for FZoneGraphBuildSettings::bShow3DRadiusForAutoConnectionAndIntersection");

// /script/ZoneGraph.ZoneGraphBuilder
// Kind: ScriptStruct; super: none
struct FZoneGraphBuilder
{
public:
    TArray<void*> ShapeComponents; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ShapeComponentsFreeList; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> ShapeComponentToIndex; // 0x0020 (Size: 0x10, Type: MapProperty)
    std::uint8_t BuildData[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FZoneGraphBuilder, ShapeComponents) == 0, "Offset mismatch for FZoneGraphBuilder::ShapeComponents");
static_assert(offsetof(FZoneGraphBuilder, ShapeComponentsFreeList) == 16, "Offset mismatch for FZoneGraphBuilder::ShapeComponentsFreeList");
static_assert(offsetof(FZoneGraphBuilder, ShapeComponentToIndex) == 32, "Offset mismatch for FZoneGraphBuilder::ShapeComponentToIndex");
static_assert(offsetof(FZoneGraphBuilder, BuildData) == 48, "Offset mismatch for FZoneGraphBuilder::BuildData");

// /script/ZoneGraph.ZoneGraphBuilderRegisteredComponent
// Kind: ScriptStruct; super: none
struct FZoneGraphBuilderRegisteredComponent
{
public:
    void* Component; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint32_t ShapeHash; // 0x0008 (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(FZoneGraphBuilderRegisteredComponent, Component) == 0, "Offset mismatch for FZoneGraphBuilderRegisteredComponent::Component");
static_assert(offsetof(FZoneGraphBuilderRegisteredComponent, ShapeHash) == 8, "Offset mismatch for FZoneGraphBuilderRegisteredComponent::ShapeHash");

// /script/ZoneGraph.ZoneGraphCompactLaneLocation
// Kind: ScriptStruct; super: none
struct FZoneGraphCompactLaneLocation
{
public:
    std::uint8_t LaneHandle[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    float DistanceAlongLane; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FZoneGraphCompactLaneLocation, LaneHandle) == 0, "Offset mismatch for FZoneGraphCompactLaneLocation::LaneHandle");
static_assert(offsetof(FZoneGraphCompactLaneLocation, DistanceAlongLane) == 8, "Offset mismatch for FZoneGraphCompactLaneLocation::DistanceAlongLane");

// /script/ZoneGraph.ZoneGraphDataHandle
// Kind: ScriptStruct; super: none
struct FZoneGraphDataHandle
{
public:
    std::uint16_t Index; // 0x0000 (Size: 0x2, Type: UInt16Property)
    std::uint16_t Generation; // 0x0002 (Size: 0x2, Type: UInt16Property)
};

static_assert(offsetof(FZoneGraphDataHandle, Index) == 0, "Offset mismatch for FZoneGraphDataHandle::Index");
static_assert(offsetof(FZoneGraphDataHandle, Generation) == 2, "Offset mismatch for FZoneGraphDataHandle::Generation");

// /script/ZoneGraph.ZoneGraphLaneHandle
// Kind: ScriptStruct; super: none
struct FZoneGraphLaneHandle
{
public:
    std::int32_t Index; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t DataHandle[0x1]; // 0x0004 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FZoneGraphLaneHandle, Index) == 0, "Offset mismatch for FZoneGraphLaneHandle::Index");
static_assert(offsetof(FZoneGraphLaneHandle, DataHandle) == 4, "Offset mismatch for FZoneGraphLaneHandle::DataHandle");

// /script/ZoneGraph.ZoneGraphLaneLocation
// Kind: ScriptStruct; super: none
struct FZoneGraphLaneLocation
{
public:
    std::uint8_t Position[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t Direction[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t Tangent[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    std::uint8_t Up[0x18]; // 0x0048 (Size: 0x18, Type: StructProperty)
    std::uint8_t LaneHandle[0x8]; // 0x0060 (Size: 0x8, Type: StructProperty)
    std::int32_t LaneSegment; // 0x0068 (Size: 0x4, Type: IntProperty)
    float DistanceAlongLane; // 0x006C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FZoneGraphLaneLocation, Position) == 0, "Offset mismatch for FZoneGraphLaneLocation::Position");
static_assert(offsetof(FZoneGraphLaneLocation, Direction) == 24, "Offset mismatch for FZoneGraphLaneLocation::Direction");
static_assert(offsetof(FZoneGraphLaneLocation, Tangent) == 48, "Offset mismatch for FZoneGraphLaneLocation::Tangent");
static_assert(offsetof(FZoneGraphLaneLocation, Up) == 72, "Offset mismatch for FZoneGraphLaneLocation::Up");
static_assert(offsetof(FZoneGraphLaneLocation, LaneHandle) == 96, "Offset mismatch for FZoneGraphLaneLocation::LaneHandle");
static_assert(offsetof(FZoneGraphLaneLocation, LaneSegment) == 104, "Offset mismatch for FZoneGraphLaneLocation::LaneSegment");
static_assert(offsetof(FZoneGraphLaneLocation, DistanceAlongLane) == 108, "Offset mismatch for FZoneGraphLaneLocation::DistanceAlongLane");

// /script/ZoneGraph.ZoneGraphLaneRoutingRule
// Kind: ScriptStruct; super: none
struct FZoneGraphLaneRoutingRule
{
public:
    std::uint8_t bEnabled; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    FString Comment; // 0x0008 (Size: 0x10, Type: StrProperty)
    std::uint8_t ZoneTagFilter[0xC]; // 0x0018 (Size: 0xC, Type: StructProperty)
    std::uint8_t SourceLaneProfile[0x14]; // 0x0024 (Size: 0x14, Type: StructProperty)
    std::uint8_t DestinationLaneProfile[0x14]; // 0x0038 (Size: 0x14, Type: StructProperty)
    std::uint8_t SourceOutgoingConnections; // 0x004C (Size: 0x1, Type: EnumProperty)
    std::uint8_t DestinationIncomingConnections; // 0x004D (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x2]; // 0x004E
    std::int32_t ConnectionRestrictions; // 0x0050 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FZoneGraphLaneRoutingRule, bEnabled) == 0, "Offset mismatch for FZoneGraphLaneRoutingRule::bEnabled");
static_assert(offsetof(FZoneGraphLaneRoutingRule, Comment) == 8, "Offset mismatch for FZoneGraphLaneRoutingRule::Comment");
static_assert(offsetof(FZoneGraphLaneRoutingRule, ZoneTagFilter) == 24, "Offset mismatch for FZoneGraphLaneRoutingRule::ZoneTagFilter");
static_assert(offsetof(FZoneGraphLaneRoutingRule, SourceLaneProfile) == 36, "Offset mismatch for FZoneGraphLaneRoutingRule::SourceLaneProfile");
static_assert(offsetof(FZoneGraphLaneRoutingRule, DestinationLaneProfile) == 56, "Offset mismatch for FZoneGraphLaneRoutingRule::DestinationLaneProfile");
static_assert(offsetof(FZoneGraphLaneRoutingRule, SourceOutgoingConnections) == 76, "Offset mismatch for FZoneGraphLaneRoutingRule::SourceOutgoingConnections");
static_assert(offsetof(FZoneGraphLaneRoutingRule, DestinationIncomingConnections) == 77, "Offset mismatch for FZoneGraphLaneRoutingRule::DestinationIncomingConnections");
static_assert(offsetof(FZoneGraphLaneRoutingRule, ConnectionRestrictions) == 80, "Offset mismatch for FZoneGraphLaneRoutingRule::ConnectionRestrictions");

// /script/ZoneGraph.ZoneGraphLaneSection
// Kind: ScriptStruct; super: none
struct FZoneGraphLaneSection
{
public:
    std::uint8_t LaneHandle[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    float StartDistanceAlongLane; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float EndDistanceAlongLane; // 0x000C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FZoneGraphLaneSection, LaneHandle) == 0, "Offset mismatch for FZoneGraphLaneSection::LaneHandle");
static_assert(offsetof(FZoneGraphLaneSection, StartDistanceAlongLane) == 8, "Offset mismatch for FZoneGraphLaneSection::StartDistanceAlongLane");
static_assert(offsetof(FZoneGraphLaneSection, EndDistanceAlongLane) == 12, "Offset mismatch for FZoneGraphLaneSection::EndDistanceAlongLane");

// /script/ZoneGraph.ZoneGraphLinkedLane
// Kind: ScriptStruct; super: none
struct FZoneGraphLinkedLane
{
public:
    std::uint8_t DestLane[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t Type; // 0x0008 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Flags; // 0x0009 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FZoneGraphLinkedLane, DestLane) == 0, "Offset mismatch for FZoneGraphLinkedLane::DestLane");
static_assert(offsetof(FZoneGraphLinkedLane, Type) == 8, "Offset mismatch for FZoneGraphLinkedLane::Type");
static_assert(offsetof(FZoneGraphLinkedLane, Flags) == 9, "Offset mismatch for FZoneGraphLinkedLane::Flags");

// /script/ZoneGraph.ZoneGraphStorage
// Kind: ScriptStruct; super: none
struct FZoneGraphStorage
{
public:
    TArray<void*> Zones; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Lanes; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> BoundaryPoints; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> LanePoints; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> LaneUpVectors; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> LaneTangentVectors; // 0x0050 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> LanePointProgressions; // 0x0060 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> LaneLinks; // 0x0070 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Bounds[0x38]; // 0x0080 (Size: 0x38, Type: StructProperty)
    std::uint8_t ZoneBVTree[0x1]; // 0x00B8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FZoneGraphStorage, Zones) == 0, "Offset mismatch for FZoneGraphStorage::Zones");
static_assert(offsetof(FZoneGraphStorage, Lanes) == 16, "Offset mismatch for FZoneGraphStorage::Lanes");
static_assert(offsetof(FZoneGraphStorage, BoundaryPoints) == 32, "Offset mismatch for FZoneGraphStorage::BoundaryPoints");
static_assert(offsetof(FZoneGraphStorage, LanePoints) == 48, "Offset mismatch for FZoneGraphStorage::LanePoints");
static_assert(offsetof(FZoneGraphStorage, LaneUpVectors) == 64, "Offset mismatch for FZoneGraphStorage::LaneUpVectors");
static_assert(offsetof(FZoneGraphStorage, LaneTangentVectors) == 80, "Offset mismatch for FZoneGraphStorage::LaneTangentVectors");
static_assert(offsetof(FZoneGraphStorage, LanePointProgressions) == 96, "Offset mismatch for FZoneGraphStorage::LanePointProgressions");
static_assert(offsetof(FZoneGraphStorage, LaneLinks) == 112, "Offset mismatch for FZoneGraphStorage::LaneLinks");
static_assert(offsetof(FZoneGraphStorage, Bounds) == 128, "Offset mismatch for FZoneGraphStorage::Bounds");
static_assert(offsetof(FZoneGraphStorage, ZoneBVTree) == 184, "Offset mismatch for FZoneGraphStorage::ZoneBVTree");

// /script/ZoneGraph.ZoneGraphTag
// Kind: ScriptStruct; super: none
struct FZoneGraphTag
{
public:
    std::uint8_t Bit; // 0x0000 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FZoneGraphTag, Bit) == 0, "Offset mismatch for FZoneGraphTag::Bit");

// /script/ZoneGraph.ZoneGraphTagFilter
// Kind: ScriptStruct; super: none
struct FZoneGraphTagFilter
{
public:
    std::uint8_t AnyTags[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::uint8_t AllTags[0x4]; // 0x0004 (Size: 0x4, Type: StructProperty)
    std::uint8_t NotTags[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FZoneGraphTagFilter, AnyTags) == 0, "Offset mismatch for FZoneGraphTagFilter::AnyTags");
static_assert(offsetof(FZoneGraphTagFilter, AllTags) == 4, "Offset mismatch for FZoneGraphTagFilter::AllTags");
static_assert(offsetof(FZoneGraphTagFilter, NotTags) == 8, "Offset mismatch for FZoneGraphTagFilter::NotTags");

// /script/ZoneGraph.ZoneGraphTagInfo
// Kind: ScriptStruct; super: none
struct FZoneGraphTagInfo
{
public:
    std::uint8_t Name[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t Color[0x4]; // 0x0004 (Size: 0x4, Type: StructProperty)
    std::uint8_t Tag[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FZoneGraphTagInfo, Name) == 0, "Offset mismatch for FZoneGraphTagInfo::Name");
static_assert(offsetof(FZoneGraphTagInfo, Color) == 4, "Offset mismatch for FZoneGraphTagInfo::Color");
static_assert(offsetof(FZoneGraphTagInfo, Tag) == 8, "Offset mismatch for FZoneGraphTagInfo::Tag");

// /script/ZoneGraph.ZoneGraphTagMask
// Kind: ScriptStruct; super: none
struct FZoneGraphTagMask
{
public:
    std::uint32_t Mask; // 0x0000 (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(FZoneGraphTagMask, Mask) == 0, "Offset mismatch for FZoneGraphTagMask::Mask");

// /script/ZoneGraph.ZoneGraphTessellationSettings
// Kind: ScriptStruct; super: none
struct FZoneGraphTessellationSettings
{
public:
    std::uint8_t LaneFilter[0xC]; // 0x0000 (Size: 0xC, Type: StructProperty)
    float TessellationTolerance; // 0x000C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FZoneGraphTessellationSettings, LaneFilter) == 0, "Offset mismatch for FZoneGraphTessellationSettings::LaneFilter");
static_assert(offsetof(FZoneGraphTessellationSettings, TessellationTolerance) == 12, "Offset mismatch for FZoneGraphTessellationSettings::TessellationTolerance");

// /script/ZoneGraph.ZoneHandle
// Kind: ScriptStruct; super: none
struct FZoneHandle
{
public:
    std::uint32_t Index; // 0x0000 (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(FZoneHandle, Index) == 0, "Offset mismatch for FZoneHandle::Index");

// /script/ZoneGraph.ZoneLaneData
// Kind: ScriptStruct; super: none
struct FZoneLaneData
{
public:
    float Width; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Tags[0x4]; // 0x0004 (Size: 0x4, Type: StructProperty)
    std::int32_t PointsBegin; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::int32_t PointsEnd; // 0x000C (Size: 0x4, Type: IntProperty)
    std::int32_t LinksBegin; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::int32_t LinksEnd; // 0x0014 (Size: 0x4, Type: IntProperty)
    std::int32_t ZoneIndex; // 0x0018 (Size: 0x4, Type: IntProperty)
    std::uint16_t StartEntryId; // 0x001C (Size: 0x2, Type: UInt16Property)
    std::uint16_t EndEntryId; // 0x001E (Size: 0x2, Type: UInt16Property)
};

static_assert(offsetof(FZoneLaneData, Width) == 0, "Offset mismatch for FZoneLaneData::Width");
static_assert(offsetof(FZoneLaneData, Tags) == 4, "Offset mismatch for FZoneLaneData::Tags");
static_assert(offsetof(FZoneLaneData, PointsBegin) == 8, "Offset mismatch for FZoneLaneData::PointsBegin");
static_assert(offsetof(FZoneLaneData, PointsEnd) == 12, "Offset mismatch for FZoneLaneData::PointsEnd");
static_assert(offsetof(FZoneLaneData, LinksBegin) == 16, "Offset mismatch for FZoneLaneData::LinksBegin");
static_assert(offsetof(FZoneLaneData, LinksEnd) == 20, "Offset mismatch for FZoneLaneData::LinksEnd");
static_assert(offsetof(FZoneLaneData, ZoneIndex) == 24, "Offset mismatch for FZoneLaneData::ZoneIndex");
static_assert(offsetof(FZoneLaneData, StartEntryId) == 28, "Offset mismatch for FZoneLaneData::StartEntryId");
static_assert(offsetof(FZoneLaneData, EndEntryId) == 30, "Offset mismatch for FZoneLaneData::EndEntryId");

// /script/ZoneGraph.ZoneLaneDesc
// Kind: ScriptStruct; super: none
struct FZoneLaneDesc
{
public:
    float Width; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Direction; // 0x0004 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    std::uint8_t Tags[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FZoneLaneDesc, Width) == 0, "Offset mismatch for FZoneLaneDesc::Width");
static_assert(offsetof(FZoneLaneDesc, Direction) == 4, "Offset mismatch for FZoneLaneDesc::Direction");
static_assert(offsetof(FZoneLaneDesc, Tags) == 8, "Offset mismatch for FZoneLaneDesc::Tags");

// /script/ZoneGraph.ZoneLaneLinkData
// Kind: ScriptStruct; super: none
struct FZoneLaneLinkData
{
public:
    std::int32_t DestLaneIndex; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t Type; // 0x0004 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Flags; // 0x0005 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FZoneLaneLinkData, DestLaneIndex) == 0, "Offset mismatch for FZoneLaneLinkData::DestLaneIndex");
static_assert(offsetof(FZoneLaneLinkData, Type) == 4, "Offset mismatch for FZoneLaneLinkData::Type");
static_assert(offsetof(FZoneLaneLinkData, Flags) == 5, "Offset mismatch for FZoneLaneLinkData::Flags");

// /script/ZoneGraph.ZoneLaneProfile
// Kind: ScriptStruct; super: none
struct FZoneLaneProfile
{
public:
    std::uint8_t Name[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t ID[0x14]; // 0x0004 (Size: 0x14, Type: StructProperty)
    TArray<void*> Lanes; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FZoneLaneProfile, Name) == 0, "Offset mismatch for FZoneLaneProfile::Name");
static_assert(offsetof(FZoneLaneProfile, ID) == 4, "Offset mismatch for FZoneLaneProfile::ID");
static_assert(offsetof(FZoneLaneProfile, Lanes) == 24, "Offset mismatch for FZoneLaneProfile::Lanes");

// /script/ZoneGraph.ZoneLaneProfileRef
// Kind: ScriptStruct; super: none
struct FZoneLaneProfileRef
{
public:
    std::uint8_t Name[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t ID[0x1]; // 0x0004 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FZoneLaneProfileRef, Name) == 0, "Offset mismatch for FZoneLaneProfileRef::Name");
static_assert(offsetof(FZoneLaneProfileRef, ID) == 4, "Offset mismatch for FZoneLaneProfileRef::ID");

// /script/ZoneGraph.ZoneShapeComponentBuildData
// Kind: ScriptStruct; super: none
struct FZoneShapeComponentBuildData
{
public:
    std::int32_t ZoneIndex; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    TArray<void*> Lanes; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FZoneShapeComponentBuildData, ZoneIndex) == 0, "Offset mismatch for FZoneShapeComponentBuildData::ZoneIndex");
static_assert(offsetof(FZoneShapeComponentBuildData, Lanes) == 8, "Offset mismatch for FZoneShapeComponentBuildData::Lanes");

// /script/ZoneGraph.ZoneShapeConnection
// Kind: ScriptStruct; super: none
struct FZoneShapeConnection
{
public:
    TWeakObjectPtr<void> ShapeComponent; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
    std::int32_t ConnectorIndex; // 0x0008 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FZoneShapeConnection, ShapeComponent) == 0, "Offset mismatch for FZoneShapeConnection::ShapeComponent");
static_assert(offsetof(FZoneShapeConnection, ConnectorIndex) == 8, "Offset mismatch for FZoneShapeConnection::ConnectorIndex");

// /script/ZoneGraph.ZoneShapeConnector
// Kind: ScriptStruct; super: none
struct FZoneShapeConnector
{
public:
    std::uint8_t Position[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t Normal[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t Up[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    std::int32_t PointIndex; // 0x0048 (Size: 0x4, Type: IntProperty)
    std::uint8_t LaneProfile[0x14]; // 0x004C (Size: 0x14, Type: StructProperty)
    std::uint8_t bReverseLaneProfile; // 0x0060 (Size: 0x1, Type: BoolProperty)
    std::uint8_t ShapeType; // 0x0061 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FZoneShapeConnector, Position) == 0, "Offset mismatch for FZoneShapeConnector::Position");
static_assert(offsetof(FZoneShapeConnector, Normal) == 24, "Offset mismatch for FZoneShapeConnector::Normal");
static_assert(offsetof(FZoneShapeConnector, Up) == 48, "Offset mismatch for FZoneShapeConnector::Up");
static_assert(offsetof(FZoneShapeConnector, PointIndex) == 72, "Offset mismatch for FZoneShapeConnector::PointIndex");
static_assert(offsetof(FZoneShapeConnector, LaneProfile) == 76, "Offset mismatch for FZoneShapeConnector::LaneProfile");
static_assert(offsetof(FZoneShapeConnector, bReverseLaneProfile) == 96, "Offset mismatch for FZoneShapeConnector::bReverseLaneProfile");
static_assert(offsetof(FZoneShapeConnector, ShapeType) == 97, "Offset mismatch for FZoneShapeConnector::ShapeType");

// /script/ZoneGraph.ZoneShapeLaneInternalLink
// Kind: ScriptStruct; super: none
struct FZoneShapeLaneInternalLink
{
public:
    std::int32_t LaneIndex; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t LinkData[0x1]; // 0x0004 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FZoneShapeLaneInternalLink, LaneIndex) == 0, "Offset mismatch for FZoneShapeLaneInternalLink::LaneIndex");
static_assert(offsetof(FZoneShapeLaneInternalLink, LinkData) == 4, "Offset mismatch for FZoneShapeLaneInternalLink::LinkData");

// /script/ZoneGraph.ZoneShapePoint
// Kind: ScriptStruct; super: none
struct FZoneShapePoint
{
public:
    std::uint8_t Position[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t InControlPoint[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t OutControlPoint[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    float TangentLength; // 0x0048 (Size: 0x4, Type: FloatProperty)
    float InnerTurnRadius; // 0x004C (Size: 0x4, Type: FloatProperty)
    std::uint8_t Rotation[0x18]; // 0x0050 (Size: 0x18, Type: StructProperty)
    std::uint8_t Type; // 0x0068 (Size: 0x1, Type: EnumProperty)
    std::uint8_t LaneProfile; // 0x0069 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bReverseLaneProfile; // 0x006A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x1]; // 0x006B
    std::int32_t LaneConnectionRestrictions; // 0x006C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FZoneShapePoint, Position) == 0, "Offset mismatch for FZoneShapePoint::Position");
static_assert(offsetof(FZoneShapePoint, InControlPoint) == 24, "Offset mismatch for FZoneShapePoint::InControlPoint");
static_assert(offsetof(FZoneShapePoint, OutControlPoint) == 48, "Offset mismatch for FZoneShapePoint::OutControlPoint");
static_assert(offsetof(FZoneShapePoint, TangentLength) == 72, "Offset mismatch for FZoneShapePoint::TangentLength");
static_assert(offsetof(FZoneShapePoint, InnerTurnRadius) == 76, "Offset mismatch for FZoneShapePoint::InnerTurnRadius");
static_assert(offsetof(FZoneShapePoint, Rotation) == 80, "Offset mismatch for FZoneShapePoint::Rotation");
static_assert(offsetof(FZoneShapePoint, Type) == 104, "Offset mismatch for FZoneShapePoint::Type");
static_assert(offsetof(FZoneShapePoint, LaneProfile) == 105, "Offset mismatch for FZoneShapePoint::LaneProfile");
static_assert(offsetof(FZoneShapePoint, bReverseLaneProfile) == 106, "Offset mismatch for FZoneShapePoint::bReverseLaneProfile");
static_assert(offsetof(FZoneShapePoint, LaneConnectionRestrictions) == 108, "Offset mismatch for FZoneShapePoint::LaneConnectionRestrictions");

// /script/ZoneGraph.ZoneGraphData
// Kind: Class; super: Actor
class UZoneGraphData
{
public:
    std::uint8_t Pad_0000[0x271]; // 0x0000
    std::uint8_t bEnableDrawing; // 0x0271 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x0272
    void* RenderingComp; // 0x0278 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ZoneStorage[0x118]; // 0x0280 (Size: 0x118, Type: StructProperty)
    std::uint32_t CombinedShapeHash; // 0x0398 (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(UZoneGraphData, bEnableDrawing) == 625, "Offset mismatch for UZoneGraphData::bEnableDrawing");
static_assert(offsetof(UZoneGraphData, RenderingComp) == 632, "Offset mismatch for UZoneGraphData::RenderingComp");
static_assert(offsetof(UZoneGraphData, ZoneStorage) == 640, "Offset mismatch for UZoneGraphData::ZoneStorage");
static_assert(offsetof(UZoneGraphData, CombinedShapeHash) == 920, "Offset mismatch for UZoneGraphData::CombinedShapeHash");

// /script/ZoneGraph.ZoneGraphRenderingComponent
// Kind: Class; super: PrimitiveComponent
class UZoneGraphRenderingComponent
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

static_assert(offsetof(UZoneGraphRenderingComponent, MinDrawDistance) == 632, "Offset mismatch for UZoneGraphRenderingComponent::MinDrawDistance");
static_assert(offsetof(UZoneGraphRenderingComponent, LDMaxDrawDistance) == 636, "Offset mismatch for UZoneGraphRenderingComponent::LDMaxDrawDistance");
static_assert(offsetof(UZoneGraphRenderingComponent, CachedMaxDrawDistance) == 640, "Offset mismatch for UZoneGraphRenderingComponent::CachedMaxDrawDistance");
static_assert(offsetof(UZoneGraphRenderingComponent, DepthPriorityGroup) == 644, "Offset mismatch for UZoneGraphRenderingComponent::DepthPriorityGroup");
static_assert(offsetof(UZoneGraphRenderingComponent, ViewOwnerDepthPriorityGroup) == 645, "Offset mismatch for UZoneGraphRenderingComponent::ViewOwnerDepthPriorityGroup");
static_assert(offsetof(UZoneGraphRenderingComponent, IndirectLightingCacheQuality) == 646, "Offset mismatch for UZoneGraphRenderingComponent::IndirectLightingCacheQuality");
static_assert(offsetof(UZoneGraphRenderingComponent, LightmapType) == 647, "Offset mismatch for UZoneGraphRenderingComponent::LightmapType");
static_assert(offsetof(UZoneGraphRenderingComponent, HLODBatchingPolicy) == 648, "Offset mismatch for UZoneGraphRenderingComponent::HLODBatchingPolicy");
static_assert(offsetof(UZoneGraphRenderingComponent, ShadowCacheInvalidationBehavior) == 649, "Offset mismatch for UZoneGraphRenderingComponent::ShadowCacheInvalidationBehavior");
static_assert(offsetof(UZoneGraphRenderingComponent, bAlwaysCreatePhysicsState) == 650, "Offset mismatch for UZoneGraphRenderingComponent::bAlwaysCreatePhysicsState");
static_assert(offsetof(UZoneGraphRenderingComponent, bAllowCullDistanceVolume) == 651, "Offset mismatch for UZoneGraphRenderingComponent::bAllowCullDistanceVolume");
static_assert(offsetof(UZoneGraphRenderingComponent, bHoldout) == 652, "Offset mismatch for UZoneGraphRenderingComponent::bHoldout");
static_assert(offsetof(UZoneGraphRenderingComponent, CastShadow) == 653, "Offset mismatch for UZoneGraphRenderingComponent::CastShadow");
static_assert(offsetof(UZoneGraphRenderingComponent, bAffectDistanceFieldLighting) == 654, "Offset mismatch for UZoneGraphRenderingComponent::bAffectDistanceFieldLighting");
static_assert(offsetof(UZoneGraphRenderingComponent, bCastCinematicShadow) == 655, "Offset mismatch for UZoneGraphRenderingComponent::bCastCinematicShadow");
static_assert(offsetof(UZoneGraphRenderingComponent, AlwaysLoadOnClient) == 656, "Offset mismatch for UZoneGraphRenderingComponent::AlwaysLoadOnClient");
static_assert(offsetof(UZoneGraphRenderingComponent, bHiddenInSceneCapture) == 657, "Offset mismatch for UZoneGraphRenderingComponent::bHiddenInSceneCapture");
static_assert(offsetof(UZoneGraphRenderingComponent, FirstPersonPrimitiveType) == 658, "Offset mismatch for UZoneGraphRenderingComponent::FirstPersonPrimitiveType");
static_assert(offsetof(UZoneGraphRenderingComponent, bHasNoStreamableTextures) == 659, "Offset mismatch for UZoneGraphRenderingComponent::bHasNoStreamableTextures");
static_assert(offsetof(UZoneGraphRenderingComponent, bHasCustomNavigableGeometry) == 660, "Offset mismatch for UZoneGraphRenderingComponent::bHasCustomNavigableGeometry");
static_assert(offsetof(UZoneGraphRenderingComponent, CanCharacterStepUpOn) == 662, "Offset mismatch for UZoneGraphRenderingComponent::CanCharacterStepUpOn");
static_assert(offsetof(UZoneGraphRenderingComponent, LightingChannels) == 663, "Offset mismatch for UZoneGraphRenderingComponent::LightingChannels");
static_assert(offsetof(UZoneGraphRenderingComponent, RayTracingGroupCullingPriority) == 664, "Offset mismatch for UZoneGraphRenderingComponent::RayTracingGroupCullingPriority");
static_assert(offsetof(UZoneGraphRenderingComponent, CustomDepthStencilWriteMask) == 665, "Offset mismatch for UZoneGraphRenderingComponent::CustomDepthStencilWriteMask");
static_assert(offsetof(UZoneGraphRenderingComponent, ExcludeFromHLODLevels) == 666, "Offset mismatch for UZoneGraphRenderingComponent::ExcludeFromHLODLevels");
static_assert(offsetof(UZoneGraphRenderingComponent, RayTracingGroupId) == 668, "Offset mismatch for UZoneGraphRenderingComponent::RayTracingGroupId");
static_assert(offsetof(UZoneGraphRenderingComponent, VisibilityId) == 672, "Offset mismatch for UZoneGraphRenderingComponent::VisibilityId");
static_assert(offsetof(UZoneGraphRenderingComponent, CustomDepthStencilValue) == 676, "Offset mismatch for UZoneGraphRenderingComponent::CustomDepthStencilValue");
static_assert(offsetof(UZoneGraphRenderingComponent, CustomPrimitiveData) == 680, "Offset mismatch for UZoneGraphRenderingComponent::CustomPrimitiveData");
static_assert(offsetof(UZoneGraphRenderingComponent, CustomPrimitiveDataInternal) == 696, "Offset mismatch for UZoneGraphRenderingComponent::CustomPrimitiveDataInternal");
static_assert(offsetof(UZoneGraphRenderingComponent, TranslucencySortPriority) == 776, "Offset mismatch for UZoneGraphRenderingComponent::TranslucencySortPriority");
static_assert(offsetof(UZoneGraphRenderingComponent, TranslucencySortDistanceOffset) == 780, "Offset mismatch for UZoneGraphRenderingComponent::TranslucencySortDistanceOffset");
static_assert(offsetof(UZoneGraphRenderingComponent, RuntimeVirtualTextures) == 784, "Offset mismatch for UZoneGraphRenderingComponent::RuntimeVirtualTextures");
static_assert(offsetof(UZoneGraphRenderingComponent, VirtualTextureLodBias) == 800, "Offset mismatch for UZoneGraphRenderingComponent::VirtualTextureLodBias");
static_assert(offsetof(UZoneGraphRenderingComponent, VirtualTextureCullMips) == 801, "Offset mismatch for UZoneGraphRenderingComponent::VirtualTextureCullMips");
static_assert(offsetof(UZoneGraphRenderingComponent, VirtualTextureMinCoverage) == 802, "Offset mismatch for UZoneGraphRenderingComponent::VirtualTextureMinCoverage");
static_assert(offsetof(UZoneGraphRenderingComponent, VirtualTextureRenderPassType) == 803, "Offset mismatch for UZoneGraphRenderingComponent::VirtualTextureRenderPassType");
static_assert(offsetof(UZoneGraphRenderingComponent, BoundsScale) == 840, "Offset mismatch for UZoneGraphRenderingComponent::BoundsScale");
static_assert(offsetof(UZoneGraphRenderingComponent, MoveIgnoreActors) == 848, "Offset mismatch for UZoneGraphRenderingComponent::MoveIgnoreActors");
static_assert(offsetof(UZoneGraphRenderingComponent, MoveIgnoreComponents) == 864, "Offset mismatch for UZoneGraphRenderingComponent::MoveIgnoreComponents");
static_assert(offsetof(UZoneGraphRenderingComponent, BodyInstance) == 896, "Offset mismatch for UZoneGraphRenderingComponent::BodyInstance");
static_assert(offsetof(UZoneGraphRenderingComponent, OnComponentHit) == 1320, "Offset mismatch for UZoneGraphRenderingComponent::OnComponentHit");
static_assert(offsetof(UZoneGraphRenderingComponent, OnComponentBeginOverlap) == 1321, "Offset mismatch for UZoneGraphRenderingComponent::OnComponentBeginOverlap");
static_assert(offsetof(UZoneGraphRenderingComponent, OnComponentEndOverlap) == 1322, "Offset mismatch for UZoneGraphRenderingComponent::OnComponentEndOverlap");
static_assert(offsetof(UZoneGraphRenderingComponent, OnComponentWake) == 1323, "Offset mismatch for UZoneGraphRenderingComponent::OnComponentWake");
static_assert(offsetof(UZoneGraphRenderingComponent, OnComponentSleep) == 1324, "Offset mismatch for UZoneGraphRenderingComponent::OnComponentSleep");
static_assert(offsetof(UZoneGraphRenderingComponent, OnComponentPhysicsStateChanged) == 1326, "Offset mismatch for UZoneGraphRenderingComponent::OnComponentPhysicsStateChanged");
static_assert(offsetof(UZoneGraphRenderingComponent, OnBeginCursorOver) == 1327, "Offset mismatch for UZoneGraphRenderingComponent::OnBeginCursorOver");
static_assert(offsetof(UZoneGraphRenderingComponent, OnEndCursorOver) == 1328, "Offset mismatch for UZoneGraphRenderingComponent::OnEndCursorOver");
static_assert(offsetof(UZoneGraphRenderingComponent, OnClicked) == 1329, "Offset mismatch for UZoneGraphRenderingComponent::OnClicked");
static_assert(offsetof(UZoneGraphRenderingComponent, OnReleased) == 1330, "Offset mismatch for UZoneGraphRenderingComponent::OnReleased");
static_assert(offsetof(UZoneGraphRenderingComponent, OnInputTouchBegin) == 1331, "Offset mismatch for UZoneGraphRenderingComponent::OnInputTouchBegin");
static_assert(offsetof(UZoneGraphRenderingComponent, OnInputTouchEnd) == 1332, "Offset mismatch for UZoneGraphRenderingComponent::OnInputTouchEnd");
static_assert(offsetof(UZoneGraphRenderingComponent, OnInputTouchEnter) == 1333, "Offset mismatch for UZoneGraphRenderingComponent::OnInputTouchEnter");
static_assert(offsetof(UZoneGraphRenderingComponent, OnInputTouchLeave) == 1334, "Offset mismatch for UZoneGraphRenderingComponent::OnInputTouchLeave");
static_assert(offsetof(UZoneGraphRenderingComponent, OnTouchBegan) == 1335, "Offset mismatch for UZoneGraphRenderingComponent::OnTouchBegan");
static_assert(offsetof(UZoneGraphRenderingComponent, OnTouchEnded) == 1336, "Offset mismatch for UZoneGraphRenderingComponent::OnTouchEnded");
static_assert(offsetof(UZoneGraphRenderingComponent, OnTouchEntered) == 1337, "Offset mismatch for UZoneGraphRenderingComponent::OnTouchEntered");
static_assert(offsetof(UZoneGraphRenderingComponent, OnTouchExited) == 1338, "Offset mismatch for UZoneGraphRenderingComponent::OnTouchExited");
static_assert(offsetof(UZoneGraphRenderingComponent, LODParentPrimitive) == 1368, "Offset mismatch for UZoneGraphRenderingComponent::LODParentPrimitive");

// /script/ZoneGraph.ZoneGraphSettings
// Kind: Class; super: DeveloperSettings
class UZoneGraphSettings
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TArray<void*> LaneProfiles; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Tags[0x180]; // 0x0040 (Size: 0x180, Type: StructProperty)
    std::uint8_t VisualizedTags[0x4]; // 0x01C0 (Size: 0x4, Type: StructProperty)
    float ShapeMaxDrawDistance; // 0x01C4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t BuildSettings[0x60]; // 0x01C8 (Size: 0x60, Type: StructProperty)
    std::uint8_t bBuildZoneGraphWhileEditing; // 0x0228 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UZoneGraphSettings, LaneProfiles) == 48, "Offset mismatch for UZoneGraphSettings::LaneProfiles");
static_assert(offsetof(UZoneGraphSettings, Tags) == 64, "Offset mismatch for UZoneGraphSettings::Tags");
static_assert(offsetof(UZoneGraphSettings, VisualizedTags) == 448, "Offset mismatch for UZoneGraphSettings::VisualizedTags");
static_assert(offsetof(UZoneGraphSettings, ShapeMaxDrawDistance) == 452, "Offset mismatch for UZoneGraphSettings::ShapeMaxDrawDistance");
static_assert(offsetof(UZoneGraphSettings, BuildSettings) == 456, "Offset mismatch for UZoneGraphSettings::BuildSettings");
static_assert(offsetof(UZoneGraphSettings, bBuildZoneGraphWhileEditing) == 552, "Offset mismatch for UZoneGraphSettings::bBuildZoneGraphWhileEditing");

// /script/ZoneGraph.ZoneGraphSubsystem
// Kind: Class; super: TickableWorldSubsystem
class UZoneGraphSubsystem
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    TArray<void*> RegisteredZoneGraphData; // 0x0070 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UZoneGraphSubsystem, RegisteredZoneGraphData) == 112, "Offset mismatch for UZoneGraphSubsystem::RegisteredZoneGraphData");

// /script/ZoneGraph.ZoneShape
// Kind: Class; super: Actor
class UZoneShape
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    void* ShapeComponent; // 0x0270 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UZoneShape, ShapeComponent) == 624, "Offset mismatch for UZoneShape::ShapeComponent");

// /script/ZoneGraph.ZoneShapeComponent
// Kind: Class; super: PrimitiveComponent
class UZoneShapeComponent
{
public:
    std::uint8_t Pad_0000[0x570]; // 0x0000
    std::uint8_t LaneProfile[0x14]; // 0x0570 (Size: 0x14, Type: StructProperty)
    std::uint8_t bReverseLaneProfile; // 0x0584 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0585
    TArray<void*> PerPointLaneProfiles; // 0x0588 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Points; // 0x0598 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ShapeType; // 0x05A8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t PolygonRoutingType; // 0x05A9 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x2]; // 0x05AA
    std::uint8_t Tags[0x4]; // 0x05AC (Size: 0x4, Type: StructProperty)
    TArray<void*> ShapeConnectors; // 0x05B0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ConnectedShapes; // 0x05C0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UZoneShapeComponent, LaneProfile) == 1392, "Offset mismatch for UZoneShapeComponent::LaneProfile");
static_assert(offsetof(UZoneShapeComponent, bReverseLaneProfile) == 1412, "Offset mismatch for UZoneShapeComponent::bReverseLaneProfile");
static_assert(offsetof(UZoneShapeComponent, PerPointLaneProfiles) == 1416, "Offset mismatch for UZoneShapeComponent::PerPointLaneProfiles");
static_assert(offsetof(UZoneShapeComponent, Points) == 1432, "Offset mismatch for UZoneShapeComponent::Points");
static_assert(offsetof(UZoneShapeComponent, ShapeType) == 1448, "Offset mismatch for UZoneShapeComponent::ShapeType");
static_assert(offsetof(UZoneShapeComponent, PolygonRoutingType) == 1449, "Offset mismatch for UZoneShapeComponent::PolygonRoutingType");
static_assert(offsetof(UZoneShapeComponent, Tags) == 1452, "Offset mismatch for UZoneShapeComponent::Tags");
static_assert(offsetof(UZoneShapeComponent, ShapeConnectors) == 1456, "Offset mismatch for UZoneShapeComponent::ShapeConnectors");
static_assert(offsetof(UZoneShapeComponent, ConnectedShapes) == 1472, "Offset mismatch for UZoneShapeComponent::ConnectedShapes");

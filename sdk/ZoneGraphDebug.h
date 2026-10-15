/**
 * decamp dumper generated SDK
 * Package: /Script/ZoneGraphDebug
 */
#pragma once
#include "Basic.h"

// /Script/ZoneGraphDebug.ZoneGraphTestingActor
// Kind: Class; super: Actor
class UZoneGraphTestingActor
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    void* DebugComp; // 0x0270 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UZoneGraphTestingActor, DebugComp) == 624, "Offset mismatch for UZoneGraphTestingActor::DebugComp");

// /Script/ZoneGraphDebug.ZoneGraphTestingComponent
// Kind: Class; super: PrimitiveComponent
class UZoneGraphTestingComponent
{
public:
    std::uint8_t Pad_0000[0x580]; // 0x0000
    void* ZoneGraph; // 0x0580 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t LaneLocation[0x70]; // 0x0588 (Size: 0x70, Type: StructProperty)
    std::uint8_t NextLaneLocation[0x70]; // 0x05F8 (Size: 0x70, Type: StructProperty)
    std::uint8_t NearestLaneLocation[0x70]; // 0x0668 (Size: 0x70, Type: StructProperty)
    std::uint8_t SearchExtent[0x18]; // 0x06D8 (Size: 0x18, Type: StructProperty)
    float AdvanceDistance; // 0x06F0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x06F4
    std::uint8_t NearestTestOffset[0x18]; // 0x06F8 (Size: 0x18, Type: StructProperty)
    std::uint8_t QueryFilter[0xC]; // 0x0710 (Size: 0xC, Type: StructProperty)
    std::uint8_t bDrawLinkedLanes; // 0x071C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDrawLaneTangentVectors; // 0x071D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDrawLaneSmoothing; // 0x071E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDrawBVTreeQuery; // 0x071F (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDrawLanePath; // 0x0720 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0721
    void* OtherActor; // 0x0728 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0003[0x100]; // 0x0730
    TArray<void*> CustomTests; // 0x0830 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UZoneGraphTestingComponent, ZoneGraph) == 1408, "Offset mismatch for UZoneGraphTestingComponent::ZoneGraph");
static_assert(offsetof(UZoneGraphTestingComponent, LaneLocation) == 1416, "Offset mismatch for UZoneGraphTestingComponent::LaneLocation");
static_assert(offsetof(UZoneGraphTestingComponent, NextLaneLocation) == 1528, "Offset mismatch for UZoneGraphTestingComponent::NextLaneLocation");
static_assert(offsetof(UZoneGraphTestingComponent, NearestLaneLocation) == 1640, "Offset mismatch for UZoneGraphTestingComponent::NearestLaneLocation");
static_assert(offsetof(UZoneGraphTestingComponent, SearchExtent) == 1752, "Offset mismatch for UZoneGraphTestingComponent::SearchExtent");
static_assert(offsetof(UZoneGraphTestingComponent, AdvanceDistance) == 1776, "Offset mismatch for UZoneGraphTestingComponent::AdvanceDistance");
static_assert(offsetof(UZoneGraphTestingComponent, NearestTestOffset) == 1784, "Offset mismatch for UZoneGraphTestingComponent::NearestTestOffset");
static_assert(offsetof(UZoneGraphTestingComponent, QueryFilter) == 1808, "Offset mismatch for UZoneGraphTestingComponent::QueryFilter");
static_assert(offsetof(UZoneGraphTestingComponent, bDrawLinkedLanes) == 1820, "Offset mismatch for UZoneGraphTestingComponent::bDrawLinkedLanes");
static_assert(offsetof(UZoneGraphTestingComponent, bDrawLaneTangentVectors) == 1821, "Offset mismatch for UZoneGraphTestingComponent::bDrawLaneTangentVectors");
static_assert(offsetof(UZoneGraphTestingComponent, bDrawLaneSmoothing) == 1822, "Offset mismatch for UZoneGraphTestingComponent::bDrawLaneSmoothing");
static_assert(offsetof(UZoneGraphTestingComponent, bDrawBVTreeQuery) == 1823, "Offset mismatch for UZoneGraphTestingComponent::bDrawBVTreeQuery");
static_assert(offsetof(UZoneGraphTestingComponent, bDrawLanePath) == 1824, "Offset mismatch for UZoneGraphTestingComponent::bDrawLanePath");
static_assert(offsetof(UZoneGraphTestingComponent, OtherActor) == 1832, "Offset mismatch for UZoneGraphTestingComponent::OtherActor");
static_assert(offsetof(UZoneGraphTestingComponent, CustomTests) == 2096, "Offset mismatch for UZoneGraphTestingComponent::CustomTests");

// /Script/ZoneGraphDebug.ZoneLaneTest
// Kind: Class; super: Object
class UZoneLaneTest
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* OwnerComponent; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UZoneLaneTest, OwnerComponent) == 40, "Offset mismatch for UZoneLaneTest::OwnerComponent");

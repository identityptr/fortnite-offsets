/**
 * decamp dumper generated SDK
 * Package: /Script/SonicSpearGameplayRuntime
 */
#pragma once
#include "Basic.h"

// /Script/SonicSpearGameplayRuntime.ReplicatedSonicSpearZoneArray
// Kind: ScriptStruct; super: FastArraySerializer
struct FReplicatedSonicSpearZoneArray
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    TArray<void*> Entries; // 0x0048 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FReplicatedSonicSpearZoneArray, Entries) == 72, "Offset mismatch for FReplicatedSonicSpearZoneArray::Entries");

// /Script/SonicSpearGameplayRuntime.SonicSpearActorTypeTableRow
// Kind: ScriptStruct; super: TableRowBase
struct FSonicSpearActorTypeTableRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* ActorClass; // 0x0008 (Size: 0x8, Type: ClassProperty)
    void* SpawnLocationEnvQuery; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    float BufferDistanceFromZoneEdge; // 0x0018 (Size: 0x4, Type: FloatProperty)
    std::uint8_t DebugMapUIColor[0x10]; // 0x001C (Size: 0x10, Type: StructProperty)
    float DebugMapWorldRadius; // 0x002C (Size: 0x4, Type: FloatProperty)
    std::int32_t TotalAllowedPerPhase; // 0x0030 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FSonicSpearActorTypeTableRow, ActorClass) == 8, "Offset mismatch for FSonicSpearActorTypeTableRow::ActorClass");
static_assert(offsetof(FSonicSpearActorTypeTableRow, SpawnLocationEnvQuery) == 16, "Offset mismatch for FSonicSpearActorTypeTableRow::SpawnLocationEnvQuery");
static_assert(offsetof(FSonicSpearActorTypeTableRow, BufferDistanceFromZoneEdge) == 24, "Offset mismatch for FSonicSpearActorTypeTableRow::BufferDistanceFromZoneEdge");
static_assert(offsetof(FSonicSpearActorTypeTableRow, DebugMapUIColor) == 28, "Offset mismatch for FSonicSpearActorTypeTableRow::DebugMapUIColor");
static_assert(offsetof(FSonicSpearActorTypeTableRow, DebugMapWorldRadius) == 44, "Offset mismatch for FSonicSpearActorTypeTableRow::DebugMapWorldRadius");
static_assert(offsetof(FSonicSpearActorTypeTableRow, TotalAllowedPerPhase) == 48, "Offset mismatch for FSonicSpearActorTypeTableRow::TotalAllowedPerPhase");

// /Script/SonicSpearGameplayRuntime.SonicSpearOverlapGameplayTagsRow
// Kind: ScriptStruct; super: TableRowBase
struct FSonicSpearOverlapGameplayTagsRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t MatchAnyTags[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSonicSpearOverlapGameplayTagsRow, MatchAnyTags) == 8, "Offset mismatch for FSonicSpearOverlapGameplayTagsRow::MatchAnyTags");

// /Script/SonicSpearGameplayRuntime.SonicSpearZoneData
// Kind: ScriptStruct; super: FastArraySerializerItem
struct FSonicSpearZoneData
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Location[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    float Radius; // 0x0020 (Size: 0x4, Type: FloatProperty)
    std::int32_t SafeZoneIndex; // 0x0024 (Size: 0x4, Type: IntProperty)
    std::uint8_t State; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0029
    TWeakObjectPtr<void> Actor; // 0x002C (Size: 0x8, Type: WeakObjectProperty)
    FName Name; // 0x0034 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FSonicSpearZoneData, Location) == 16, "Offset mismatch for FSonicSpearZoneData::Location");
static_assert(offsetof(FSonicSpearZoneData, Radius) == 32, "Offset mismatch for FSonicSpearZoneData::Radius");
static_assert(offsetof(FSonicSpearZoneData, SafeZoneIndex) == 36, "Offset mismatch for FSonicSpearZoneData::SafeZoneIndex");
static_assert(offsetof(FSonicSpearZoneData, State) == 40, "Offset mismatch for FSonicSpearZoneData::State");
static_assert(offsetof(FSonicSpearZoneData, Actor) == 44, "Offset mismatch for FSonicSpearZoneData::Actor");
static_assert(offsetof(FSonicSpearZoneData, Name) == 52, "Offset mismatch for FSonicSpearZoneData::Name");

// /Script/SonicSpearGameplayRuntime.SonicSpearZonePhaseTableRow
// Kind: ScriptStruct; super: TableRowBase
struct FSonicSpearZonePhaseTableRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> ActorClasses; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    std::int32_t TotalSpawns; // 0x0018 (Size: 0x4, Type: IntProperty)
    float duration; // 0x001C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bBalancedSelection; // 0x0020 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FSonicSpearZonePhaseTableRow, ActorClasses) == 8, "Offset mismatch for FSonicSpearZonePhaseTableRow::ActorClasses");
static_assert(offsetof(FSonicSpearZonePhaseTableRow, TotalSpawns) == 24, "Offset mismatch for FSonicSpearZonePhaseTableRow::TotalSpawns");
static_assert(offsetof(FSonicSpearZonePhaseTableRow, duration) == 28, "Offset mismatch for FSonicSpearZonePhaseTableRow::duration");
static_assert(offsetof(FSonicSpearZonePhaseTableRow, bBalancedSelection) == 32, "Offset mismatch for FSonicSpearZonePhaseTableRow::bBalancedSelection");

// /Script/SonicSpearGameplayRuntime.SonicSpearZoneRandomizationData
// Kind: ScriptStruct; super: none
struct FSonicSpearZoneRandomizationData
{
public:
    std::int32_t MinZonesDesired; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxZones; // 0x0004 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FSonicSpearZoneRandomizationData, MinZonesDesired) == 0, "Offset mismatch for FSonicSpearZoneRandomizationData::MinZonesDesired");
static_assert(offsetof(FSonicSpearZoneRandomizationData, MaxZones) == 4, "Offset mismatch for FSonicSpearZoneRandomizationData::MaxZones");

// /Script/SonicSpearGameplayRuntime.SonicSpearZoneSpawn
// Kind: ScriptStruct; super: none
struct FSonicSpearZoneSpawn
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SonicSpearGameplayRuntime.SonicSpearZoneTableRow
// Kind: ScriptStruct; super: TableRowBase
struct FSonicSpearZoneTableRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t bEnabled; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0009
    std::uint8_t Location[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    float MinRadius; // 0x0020 (Size: 0x4, Type: FloatProperty)
    float MaxRadius; // 0x0024 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FSonicSpearZoneTableRow, bEnabled) == 8, "Offset mismatch for FSonicSpearZoneTableRow::bEnabled");
static_assert(offsetof(FSonicSpearZoneTableRow, Location) == 16, "Offset mismatch for FSonicSpearZoneTableRow::Location");
static_assert(offsetof(FSonicSpearZoneTableRow, MinRadius) == 32, "Offset mismatch for FSonicSpearZoneTableRow::MinRadius");
static_assert(offsetof(FSonicSpearZoneTableRow, MaxRadius) == 36, "Offset mismatch for FSonicSpearZoneTableRow::MaxRadius");

// /Script/SonicSpearGameplayRuntime.EnvQueryTest_SonicSpearOverlapGameplayTags
// Kind: Class; super: EnvQueryTest
class UEnvQueryTest_SonicSpearOverlapGameplayTags
{
public:
    std::uint8_t Pad_0000[0x1F8]; // 0x0000
    std::uint8_t OverlapData[0x30]; // 0x01F8 (Size: 0x30, Type: StructProperty)
    std::uint8_t MatchAnyTags[0x1]; // 0x0228 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UEnvQueryTest_SonicSpearOverlapGameplayTags, OverlapData) == 504, "Offset mismatch for UEnvQueryTest_SonicSpearOverlapGameplayTags::OverlapData");
static_assert(offsetof(UEnvQueryTest_SonicSpearOverlapGameplayTags, MatchAnyTags) == 552, "Offset mismatch for UEnvQueryTest_SonicSpearOverlapGameplayTags::MatchAnyTags");

// /Script/SonicSpearGameplayRuntime.FortAthenaMutator_SonicSpear
// Kind: Class; super: FortAthenaMutator
class UFortAthenaMutator_SonicSpear
{
public:
    std::uint8_t Pad_0000[0x2E0]; // 0x0000
    FMulticastInlineDelegate OnZoneBegin; // 0x02E0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnZoneEnd; // 0x02F0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t bDestroyInBeginPlay; // 0x0300 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0301
    void* SonicSpearZoneClass; // 0x0308 (Size: 0x8, Type: ClassProperty)
    std::int32_t MinZonesPerMatch; // 0x0310 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxZonesPerMatch; // 0x0314 (Size: 0x4, Type: IntProperty)
    TMap<void*, void*> ZoneRandomizationMap; // 0x0318 (Size: 0x10, Type: MapProperty)
    float ZoneCutoffPercent; // 0x0328 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x032C
    void* ZoneDataTable; // 0x0330 (Size: 0x8, Type: ObjectProperty)
    void* ActorTypeDataTable; // 0x0338 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t MapUIPastZoneColor[0x10]; // 0x0340 (Size: 0x10, Type: StructProperty)
    std::uint8_t MapUIPresentZoneColor[0x10]; // 0x0350 (Size: 0x10, Type: StructProperty)
    std::uint8_t MapUIFutureZoneColor[0x10]; // 0x0360 (Size: 0x10, Type: StructProperty)
    std::uint8_t DebugUIOuterZoneColor[0x10]; // 0x0370 (Size: 0x10, Type: StructProperty)
    float MapUIZoneShapeThickness; // 0x0380 (Size: 0x4, Type: FloatProperty)
    std::int32_t MapUIZoneCircleNumSides; // 0x0384 (Size: 0x4, Type: IntProperty)
    std::uint8_t DebugMapUITextScale[0x10]; // 0x0388 (Size: 0x10, Type: StructProperty)
    std::uint8_t DebugMapUITextColor[0x10]; // 0x0398 (Size: 0x10, Type: StructProperty)
    std::uint8_t DebugCapsuleColor[0x4]; // 0x03A8 (Size: 0x4, Type: StructProperty)
    std::int32_t DebugCapsuleSegments; // 0x03AC (Size: 0x4, Type: IntProperty)
    float DebugCapsuleThickness; // 0x03B0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0003[0xC]; // 0x03B4
    TArray<void*> Zones; // 0x03C0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ReplicatedActiveZones[0x1]; // 0x03D0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortAthenaMutator_SonicSpear, OnZoneBegin) == 736, "Offset mismatch for UFortAthenaMutator_SonicSpear::OnZoneBegin");
static_assert(offsetof(UFortAthenaMutator_SonicSpear, OnZoneEnd) == 752, "Offset mismatch for UFortAthenaMutator_SonicSpear::OnZoneEnd");
static_assert(offsetof(UFortAthenaMutator_SonicSpear, bDestroyInBeginPlay) == 768, "Offset mismatch for UFortAthenaMutator_SonicSpear::bDestroyInBeginPlay");
static_assert(offsetof(UFortAthenaMutator_SonicSpear, SonicSpearZoneClass) == 776, "Offset mismatch for UFortAthenaMutator_SonicSpear::SonicSpearZoneClass");
static_assert(offsetof(UFortAthenaMutator_SonicSpear, MinZonesPerMatch) == 784, "Offset mismatch for UFortAthenaMutator_SonicSpear::MinZonesPerMatch");
static_assert(offsetof(UFortAthenaMutator_SonicSpear, MaxZonesPerMatch) == 788, "Offset mismatch for UFortAthenaMutator_SonicSpear::MaxZonesPerMatch");
static_assert(offsetof(UFortAthenaMutator_SonicSpear, ZoneRandomizationMap) == 792, "Offset mismatch for UFortAthenaMutator_SonicSpear::ZoneRandomizationMap");
static_assert(offsetof(UFortAthenaMutator_SonicSpear, ZoneCutoffPercent) == 808, "Offset mismatch for UFortAthenaMutator_SonicSpear::ZoneCutoffPercent");
static_assert(offsetof(UFortAthenaMutator_SonicSpear, ZoneDataTable) == 816, "Offset mismatch for UFortAthenaMutator_SonicSpear::ZoneDataTable");
static_assert(offsetof(UFortAthenaMutator_SonicSpear, ActorTypeDataTable) == 824, "Offset mismatch for UFortAthenaMutator_SonicSpear::ActorTypeDataTable");
static_assert(offsetof(UFortAthenaMutator_SonicSpear, MapUIPastZoneColor) == 832, "Offset mismatch for UFortAthenaMutator_SonicSpear::MapUIPastZoneColor");
static_assert(offsetof(UFortAthenaMutator_SonicSpear, MapUIPresentZoneColor) == 848, "Offset mismatch for UFortAthenaMutator_SonicSpear::MapUIPresentZoneColor");
static_assert(offsetof(UFortAthenaMutator_SonicSpear, MapUIFutureZoneColor) == 864, "Offset mismatch for UFortAthenaMutator_SonicSpear::MapUIFutureZoneColor");
static_assert(offsetof(UFortAthenaMutator_SonicSpear, DebugUIOuterZoneColor) == 880, "Offset mismatch for UFortAthenaMutator_SonicSpear::DebugUIOuterZoneColor");
static_assert(offsetof(UFortAthenaMutator_SonicSpear, MapUIZoneShapeThickness) == 896, "Offset mismatch for UFortAthenaMutator_SonicSpear::MapUIZoneShapeThickness");
static_assert(offsetof(UFortAthenaMutator_SonicSpear, MapUIZoneCircleNumSides) == 900, "Offset mismatch for UFortAthenaMutator_SonicSpear::MapUIZoneCircleNumSides");
static_assert(offsetof(UFortAthenaMutator_SonicSpear, DebugMapUITextScale) == 904, "Offset mismatch for UFortAthenaMutator_SonicSpear::DebugMapUITextScale");
static_assert(offsetof(UFortAthenaMutator_SonicSpear, DebugMapUITextColor) == 920, "Offset mismatch for UFortAthenaMutator_SonicSpear::DebugMapUITextColor");
static_assert(offsetof(UFortAthenaMutator_SonicSpear, DebugCapsuleColor) == 936, "Offset mismatch for UFortAthenaMutator_SonicSpear::DebugCapsuleColor");
static_assert(offsetof(UFortAthenaMutator_SonicSpear, DebugCapsuleSegments) == 940, "Offset mismatch for UFortAthenaMutator_SonicSpear::DebugCapsuleSegments");
static_assert(offsetof(UFortAthenaMutator_SonicSpear, DebugCapsuleThickness) == 944, "Offset mismatch for UFortAthenaMutator_SonicSpear::DebugCapsuleThickness");
static_assert(offsetof(UFortAthenaMutator_SonicSpear, Zones) == 960, "Offset mismatch for UFortAthenaMutator_SonicSpear::Zones");
static_assert(offsetof(UFortAthenaMutator_SonicSpear, ReplicatedActiveZones) == 976, "Offset mismatch for UFortAthenaMutator_SonicSpear::ReplicatedActiveZones");

// /Script/SonicSpearGameplayRuntime.SonicSpearZone
// Kind: Class; super: Actor
class USonicSpearZone
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    void* OverlapComponent; // 0x0270 (Size: 0x8, Type: ObjectProperty)
    void* PhaseDataTable; // 0x0278 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> PossiblePhaseOrders; // 0x0280 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t SafeZoneDurationPercent[0x28]; // 0x0290 (Size: 0x28, Type: StructProperty)
    std::uint8_t SafeZonePhaseEndTime[0x50]; // 0x02B8 (Size: 0x50, Type: StructProperty)
    std::uint8_t SpawnActorCollisionHandlingMethod; // 0x0308 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0309
    std::uint8_t RadiusBufferForNetCullDistance[0x28]; // 0x0310 (Size: 0x28, Type: StructProperty)
    std::uint8_t CapsuleTopZ[0x28]; // 0x0338 (Size: 0x28, Type: StructProperty)
    std::uint8_t CapsuleBottomZ[0x28]; // 0x0360 (Size: 0x28, Type: StructProperty)
    std::uint8_t TerrainTraceStartZ[0x28]; // 0x0388 (Size: 0x28, Type: StructProperty)
    std::uint8_t TerrainTraceEndZ[0x28]; // 0x03B0 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxNonEQSSpawnAttempts[0x28]; // 0x03D8 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxEQSSpawnAttempts[0x28]; // 0x0400 (Size: 0x28, Type: StructProperty)
    std::uint8_t FinalEQSFailsafeTime[0x28]; // 0x0428 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinSpawnOffsetZ[0x28]; // 0x0450 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxSpawnOffsetZ[0x28]; // 0x0478 (Size: 0x28, Type: StructProperty)
    std::uint8_t bRandomizeSpawnPitch[0x28]; // 0x04A0 (Size: 0x28, Type: StructProperty)
    std::uint8_t bRandomizeSpawnYaw[0x28]; // 0x04C8 (Size: 0x28, Type: StructProperty)
    std::uint8_t bUseEQS; // 0x04F0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x04F1
    float DebugUIActorSpawnCircleThickness; // 0x04F4 (Size: 0x4, Type: FloatProperty)
    std::int32_t DebugUIActorSpawnCircleNumSides; // 0x04F8 (Size: 0x4, Type: IntProperty)
    float Radius; // 0x04FC (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(USonicSpearZone, OverlapComponent) == 624, "Offset mismatch for USonicSpearZone::OverlapComponent");
static_assert(offsetof(USonicSpearZone, PhaseDataTable) == 632, "Offset mismatch for USonicSpearZone::PhaseDataTable");
static_assert(offsetof(USonicSpearZone, PossiblePhaseOrders) == 640, "Offset mismatch for USonicSpearZone::PossiblePhaseOrders");
static_assert(offsetof(USonicSpearZone, SafeZoneDurationPercent) == 656, "Offset mismatch for USonicSpearZone::SafeZoneDurationPercent");
static_assert(offsetof(USonicSpearZone, SafeZonePhaseEndTime) == 696, "Offset mismatch for USonicSpearZone::SafeZonePhaseEndTime");
static_assert(offsetof(USonicSpearZone, SpawnActorCollisionHandlingMethod) == 776, "Offset mismatch for USonicSpearZone::SpawnActorCollisionHandlingMethod");
static_assert(offsetof(USonicSpearZone, RadiusBufferForNetCullDistance) == 784, "Offset mismatch for USonicSpearZone::RadiusBufferForNetCullDistance");
static_assert(offsetof(USonicSpearZone, CapsuleTopZ) == 824, "Offset mismatch for USonicSpearZone::CapsuleTopZ");
static_assert(offsetof(USonicSpearZone, CapsuleBottomZ) == 864, "Offset mismatch for USonicSpearZone::CapsuleBottomZ");
static_assert(offsetof(USonicSpearZone, TerrainTraceStartZ) == 904, "Offset mismatch for USonicSpearZone::TerrainTraceStartZ");
static_assert(offsetof(USonicSpearZone, TerrainTraceEndZ) == 944, "Offset mismatch for USonicSpearZone::TerrainTraceEndZ");
static_assert(offsetof(USonicSpearZone, MaxNonEQSSpawnAttempts) == 984, "Offset mismatch for USonicSpearZone::MaxNonEQSSpawnAttempts");
static_assert(offsetof(USonicSpearZone, MaxEQSSpawnAttempts) == 1024, "Offset mismatch for USonicSpearZone::MaxEQSSpawnAttempts");
static_assert(offsetof(USonicSpearZone, FinalEQSFailsafeTime) == 1064, "Offset mismatch for USonicSpearZone::FinalEQSFailsafeTime");
static_assert(offsetof(USonicSpearZone, MinSpawnOffsetZ) == 1104, "Offset mismatch for USonicSpearZone::MinSpawnOffsetZ");
static_assert(offsetof(USonicSpearZone, MaxSpawnOffsetZ) == 1144, "Offset mismatch for USonicSpearZone::MaxSpawnOffsetZ");
static_assert(offsetof(USonicSpearZone, bRandomizeSpawnPitch) == 1184, "Offset mismatch for USonicSpearZone::bRandomizeSpawnPitch");
static_assert(offsetof(USonicSpearZone, bRandomizeSpawnYaw) == 1224, "Offset mismatch for USonicSpearZone::bRandomizeSpawnYaw");
static_assert(offsetof(USonicSpearZone, bUseEQS) == 1264, "Offset mismatch for USonicSpearZone::bUseEQS");
static_assert(offsetof(USonicSpearZone, DebugUIActorSpawnCircleThickness) == 1268, "Offset mismatch for USonicSpearZone::DebugUIActorSpawnCircleThickness");
static_assert(offsetof(USonicSpearZone, DebugUIActorSpawnCircleNumSides) == 1272, "Offset mismatch for USonicSpearZone::DebugUIActorSpawnCircleNumSides");
static_assert(offsetof(USonicSpearZone, Radius) == 1276, "Offset mismatch for USonicSpearZone::Radius");

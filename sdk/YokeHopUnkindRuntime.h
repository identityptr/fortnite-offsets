/**
 * decamp dumper generated SDK
 * Package: /Script/YokeHopUnkindRuntime
 */
#pragma once
#include "Basic.h"

// /Script/YokeHopUnkindRuntime.CurrentStormPhaseInfo
// Kind: ScriptStruct; super: none
struct FCurrentStormPhaseInfo
{
public:
    double CurrentStormPhaseStartTimeServer; // 0x0000 (Size: 0x8, Type: DoubleProperty)
    std::int32_t CurrentStormPhase; // 0x0008 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FCurrentStormPhaseInfo, CurrentStormPhaseStartTimeServer) == 0, "Offset mismatch for FCurrentStormPhaseInfo::CurrentStormPhaseStartTimeServer");
static_assert(offsetof(FCurrentStormPhaseInfo, CurrentStormPhase) == 8, "Offset mismatch for FCurrentStormPhaseInfo::CurrentStormPhase");

// /Script/YokeHopUnkindRuntime.PersistentSplineClosestPointInfo_YokeHopUnkindUI
// Kind: ScriptStruct; super: none
struct FPersistentSplineClosestPointInfo_YokeHopUnkindUI
{
public:
    std::uint8_t Opaque[1];
};


// /Script/YokeHopUnkindRuntime.SafeZoneShapeProviderSet_Minimap
// Kind: ScriptStruct; super: none
struct FSafeZoneShapeProviderSet_Minimap
{
public:
    std::uint8_t bOverrideBlurRadius; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    std::uint8_t BlurRadius[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSafeZoneShapeProviderSet_Minimap, bOverrideBlurRadius) == 0, "Offset mismatch for FSafeZoneShapeProviderSet_Minimap::bOverrideBlurRadius");
static_assert(offsetof(FSafeZoneShapeProviderSet_Minimap, BlurRadius) == 8, "Offset mismatch for FSafeZoneShapeProviderSet_Minimap::BlurRadius");

// /Script/YokeHopUnkindRuntime.StormShapeConfigNew
// Kind: ScriptStruct; super: none
struct FStormShapeConfigNew
{
public:
    std::uint8_t ShapeConfigIdTag[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t Enabled[0x28]; // 0x0008 (Size: 0x28, Type: StructProperty)
    std::uint8_t EnabledForWaveInfill[0x28]; // 0x0030 (Size: 0x28, Type: StructProperty)
    std::uint8_t Weight[0x30]; // 0x0058 (Size: 0x30, Type: StructProperty)
    TArray<void*> PhaseData_ProviderSets; // 0x0088 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t UseOneRandomShapeForAllStormPhases[0x28]; // 0x0098 (Size: 0x28, Type: StructProperty)
    std::uint8_t ShouldOverrideSafeZoneData[0x28]; // 0x00C0 (Size: 0x28, Type: StructProperty)
    std::uint8_t SafeZoneOverrideData[0x118]; // 0x00E8 (Size: 0x118, Type: StructProperty)
    std::uint8_t BaseRotation[0x28]; // 0x0200 (Size: 0x28, Type: StructProperty)
    std::uint8_t RandomRotationRangeMin[0x28]; // 0x0228 (Size: 0x28, Type: StructProperty)
    std::uint8_t RandomRotationRangeMax[0x1]; // 0x0250 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FStormShapeConfigNew, ShapeConfigIdTag) == 0, "Offset mismatch for FStormShapeConfigNew::ShapeConfigIdTag");
static_assert(offsetof(FStormShapeConfigNew, Enabled) == 8, "Offset mismatch for FStormShapeConfigNew::Enabled");
static_assert(offsetof(FStormShapeConfigNew, EnabledForWaveInfill) == 48, "Offset mismatch for FStormShapeConfigNew::EnabledForWaveInfill");
static_assert(offsetof(FStormShapeConfigNew, Weight) == 88, "Offset mismatch for FStormShapeConfigNew::Weight");
static_assert(offsetof(FStormShapeConfigNew, PhaseData_ProviderSets) == 136, "Offset mismatch for FStormShapeConfigNew::PhaseData_ProviderSets");
static_assert(offsetof(FStormShapeConfigNew, UseOneRandomShapeForAllStormPhases) == 152, "Offset mismatch for FStormShapeConfigNew::UseOneRandomShapeForAllStormPhases");
static_assert(offsetof(FStormShapeConfigNew, ShouldOverrideSafeZoneData) == 192, "Offset mismatch for FStormShapeConfigNew::ShouldOverrideSafeZoneData");
static_assert(offsetof(FStormShapeConfigNew, SafeZoneOverrideData) == 232, "Offset mismatch for FStormShapeConfigNew::SafeZoneOverrideData");
static_assert(offsetof(FStormShapeConfigNew, BaseRotation) == 512, "Offset mismatch for FStormShapeConfigNew::BaseRotation");
static_assert(offsetof(FStormShapeConfigNew, RandomRotationRangeMin) == 552, "Offset mismatch for FStormShapeConfigNew::RandomRotationRangeMin");
static_assert(offsetof(FStormShapeConfigNew, RandomRotationRangeMax) == 592, "Offset mismatch for FStormShapeConfigNew::RandomRotationRangeMax");

// /Script/YokeHopUnkindRuntime.StormShapeSafeZoneOverrideData
// Kind: ScriptStruct; super: none
struct FStormShapeSafeZoneOverrideData
{
public:
    std::uint8_t NumPhases[0x28]; // 0x0000 (Size: 0x28, Type: StructProperty)
    std::uint8_t StartingRadius[0x28]; // 0x0028 (Size: 0x28, Type: StructProperty)
    std::uint8_t Radius[0x28]; // 0x0050 (Size: 0x28, Type: StructProperty)
    std::uint8_t WaitTime[0x28]; // 0x0078 (Size: 0x28, Type: StructProperty)
    std::uint8_t ShrinkTime[0x28]; // 0x00A0 (Size: 0x28, Type: StructProperty)
    std::uint8_t ForceDistanceMin[0x28]; // 0x00C8 (Size: 0x28, Type: StructProperty)
    std::uint8_t ForceDistanceMax[0x1]; // 0x00F0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FStormShapeSafeZoneOverrideData, NumPhases) == 0, "Offset mismatch for FStormShapeSafeZoneOverrideData::NumPhases");
static_assert(offsetof(FStormShapeSafeZoneOverrideData, StartingRadius) == 40, "Offset mismatch for FStormShapeSafeZoneOverrideData::StartingRadius");
static_assert(offsetof(FStormShapeSafeZoneOverrideData, Radius) == 80, "Offset mismatch for FStormShapeSafeZoneOverrideData::Radius");
static_assert(offsetof(FStormShapeSafeZoneOverrideData, WaitTime) == 120, "Offset mismatch for FStormShapeSafeZoneOverrideData::WaitTime");
static_assert(offsetof(FStormShapeSafeZoneOverrideData, ShrinkTime) == 160, "Offset mismatch for FStormShapeSafeZoneOverrideData::ShrinkTime");
static_assert(offsetof(FStormShapeSafeZoneOverrideData, ForceDistanceMin) == 200, "Offset mismatch for FStormShapeSafeZoneOverrideData::ForceDistanceMin");
static_assert(offsetof(FStormShapeSafeZoneOverrideData, ForceDistanceMax) == 240, "Offset mismatch for FStormShapeSafeZoneOverrideData::ForceDistanceMax");

// /Script/YokeHopUnkindRuntime.StormShapeSafeZonePhaseData
// Kind: ScriptStruct; super: none
struct FStormShapeSafeZonePhaseData
{
public:
    std::uint8_t Center[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    float Radius; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float WaitTime; // 0x001C (Size: 0x4, Type: FloatProperty)
    float ShrinkTime; // 0x0020 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FStormShapeSafeZonePhaseData, Center) == 0, "Offset mismatch for FStormShapeSafeZonePhaseData::Center");
static_assert(offsetof(FStormShapeSafeZonePhaseData, Radius) == 24, "Offset mismatch for FStormShapeSafeZonePhaseData::Radius");
static_assert(offsetof(FStormShapeSafeZonePhaseData, WaitTime) == 28, "Offset mismatch for FStormShapeSafeZonePhaseData::WaitTime");
static_assert(offsetof(FStormShapeSafeZonePhaseData, ShrinkTime) == 32, "Offset mismatch for FStormShapeSafeZonePhaseData::ShrinkTime");

// /Script/YokeHopUnkindRuntime.StormShapeSelected
// Kind: ScriptStruct; super: none
struct FStormShapeSelected
{
public:
    std::int32_t CurrentStormPhase; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t ShapeConfigIdTag[0x4]; // 0x0004 (Size: 0x4, Type: StructProperty)
    std::int32_t ShapeProviderSetIndex; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::int32_t ShapeProviderIndex; // 0x000C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FStormShapeSelected, CurrentStormPhase) == 0, "Offset mismatch for FStormShapeSelected::CurrentStormPhase");
static_assert(offsetof(FStormShapeSelected, ShapeConfigIdTag) == 4, "Offset mismatch for FStormShapeSelected::ShapeConfigIdTag");
static_assert(offsetof(FStormShapeSelected, ShapeProviderSetIndex) == 8, "Offset mismatch for FStormShapeSelected::ShapeProviderSetIndex");
static_assert(offsetof(FStormShapeSelected, ShapeProviderIndex) == 12, "Offset mismatch for FStormShapeSelected::ShapeProviderIndex");

// /Script/YokeHopUnkindRuntime.StormShapeSystemConfig
// Kind: ScriptStruct; super: none
struct FStormShapeSystemConfig
{
public:
    std::uint8_t ShapeUpdateFrequency[0x28]; // 0x0000 (Size: 0x28, Type: StructProperty)
    std::uint8_t MapCurrentStormColor[0x10]; // 0x0028 (Size: 0x10, Type: StructProperty)
    std::uint8_t MapEndStormColor[0x10]; // 0x0038 (Size: 0x10, Type: StructProperty)
    std::uint8_t bDrawMapShapeLines; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0049
    float MapShapeLineThickness; // 0x004C (Size: 0x4, Type: FloatProperty)
    std::int32_t MapDrawLineSegments; // 0x0050 (Size: 0x4, Type: IntProperty)
    float VisMeshHeight; // 0x0054 (Size: 0x4, Type: FloatProperty)
    void* SplineStaticMesh; // 0x0058 (Size: 0x8, Type: ObjectProperty)
    void* SplineStaticMeshMaterial; // 0x0060 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ExpandFractionOfWaitTime[0x28]; // 0x0068 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinSplinePoints[0x28]; // 0x0090 (Size: 0x28, Type: StructProperty)
    std::uint8_t UseRadialPointsForFirstPhase[0x28]; // 0x00B8 (Size: 0x28, Type: StructProperty)
    std::uint8_t ConformFirstStormShapeToLand[0x28]; // 0x00E0 (Size: 0x28, Type: StructProperty)
    std::uint8_t LastPhaseToExpandThenContract[0x28]; // 0x0108 (Size: 0x28, Type: StructProperty)
    std::uint8_t LastPhaseToAvoidNextSafeZoneWhileShrinking[0x28]; // 0x0130 (Size: 0x28, Type: StructProperty)
    std::uint8_t StormInfillPointsTable[0x20]; // 0x0158 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t LandSearchUseAuthoredPoints[0x28]; // 0x0178 (Size: 0x28, Type: StructProperty)
    std::uint8_t LandSearchMaxDist[0x28]; // 0x01A0 (Size: 0x28, Type: StructProperty)
    std::uint8_t NumStormInfillSplinePoints[0x1]; // 0x01C8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FStormShapeSystemConfig, ShapeUpdateFrequency) == 0, "Offset mismatch for FStormShapeSystemConfig::ShapeUpdateFrequency");
static_assert(offsetof(FStormShapeSystemConfig, MapCurrentStormColor) == 40, "Offset mismatch for FStormShapeSystemConfig::MapCurrentStormColor");
static_assert(offsetof(FStormShapeSystemConfig, MapEndStormColor) == 56, "Offset mismatch for FStormShapeSystemConfig::MapEndStormColor");
static_assert(offsetof(FStormShapeSystemConfig, bDrawMapShapeLines) == 72, "Offset mismatch for FStormShapeSystemConfig::bDrawMapShapeLines");
static_assert(offsetof(FStormShapeSystemConfig, MapShapeLineThickness) == 76, "Offset mismatch for FStormShapeSystemConfig::MapShapeLineThickness");
static_assert(offsetof(FStormShapeSystemConfig, MapDrawLineSegments) == 80, "Offset mismatch for FStormShapeSystemConfig::MapDrawLineSegments");
static_assert(offsetof(FStormShapeSystemConfig, VisMeshHeight) == 84, "Offset mismatch for FStormShapeSystemConfig::VisMeshHeight");
static_assert(offsetof(FStormShapeSystemConfig, SplineStaticMesh) == 88, "Offset mismatch for FStormShapeSystemConfig::SplineStaticMesh");
static_assert(offsetof(FStormShapeSystemConfig, SplineStaticMeshMaterial) == 96, "Offset mismatch for FStormShapeSystemConfig::SplineStaticMeshMaterial");
static_assert(offsetof(FStormShapeSystemConfig, ExpandFractionOfWaitTime) == 104, "Offset mismatch for FStormShapeSystemConfig::ExpandFractionOfWaitTime");
static_assert(offsetof(FStormShapeSystemConfig, MinSplinePoints) == 144, "Offset mismatch for FStormShapeSystemConfig::MinSplinePoints");
static_assert(offsetof(FStormShapeSystemConfig, UseRadialPointsForFirstPhase) == 184, "Offset mismatch for FStormShapeSystemConfig::UseRadialPointsForFirstPhase");
static_assert(offsetof(FStormShapeSystemConfig, ConformFirstStormShapeToLand) == 224, "Offset mismatch for FStormShapeSystemConfig::ConformFirstStormShapeToLand");
static_assert(offsetof(FStormShapeSystemConfig, LastPhaseToExpandThenContract) == 264, "Offset mismatch for FStormShapeSystemConfig::LastPhaseToExpandThenContract");
static_assert(offsetof(FStormShapeSystemConfig, LastPhaseToAvoidNextSafeZoneWhileShrinking) == 304, "Offset mismatch for FStormShapeSystemConfig::LastPhaseToAvoidNextSafeZoneWhileShrinking");
static_assert(offsetof(FStormShapeSystemConfig, StormInfillPointsTable) == 344, "Offset mismatch for FStormShapeSystemConfig::StormInfillPointsTable");
static_assert(offsetof(FStormShapeSystemConfig, LandSearchUseAuthoredPoints) == 376, "Offset mismatch for FStormShapeSystemConfig::LandSearchUseAuthoredPoints");
static_assert(offsetof(FStormShapeSystemConfig, LandSearchMaxDist) == 416, "Offset mismatch for FStormShapeSystemConfig::LandSearchMaxDist");
static_assert(offsetof(FStormShapeSystemConfig, NumStormInfillSplinePoints) == 456, "Offset mismatch for FStormShapeSystemConfig::NumStormInfillSplinePoints");

// /Script/YokeHopUnkindRuntime.WaveInfillPlaylistOverride
// Kind: ScriptStruct; super: TableRowBase
struct FWaveInfillPlaylistOverride
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t PlaylistTagQuery[0x48]; // 0x0008 (Size: 0x48, Type: StructProperty)
    std::uint8_t PercentChance[0x28]; // 0x0050 (Size: 0x28, Type: StructProperty)
    std::uint8_t ForceDisableWaveInfill[0x1]; // 0x0078 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FWaveInfillPlaylistOverride, PlaylistTagQuery) == 8, "Offset mismatch for FWaveInfillPlaylistOverride::PlaylistTagQuery");
static_assert(offsetof(FWaveInfillPlaylistOverride, PercentChance) == 80, "Offset mismatch for FWaveInfillPlaylistOverride::PercentChance");
static_assert(offsetof(FWaveInfillPlaylistOverride, ForceDisableWaveInfill) == 120, "Offset mismatch for FWaveInfillPlaylistOverride::ForceDisableWaveInfill");

// /Script/YokeHopUnkindRuntime.FortAISafeZoneModifier_YokeHopUnkind
// Kind: Class; super: FortAISafeZoneModifierBase
class UFortAISafeZoneModifier_YokeHopUnkind
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    void* SafeZoneComponent; // 0x0040 (Size: 0x8, Type: ObjectProperty)
    void* GameStateComponent; // 0x0048 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortAISafeZoneModifier_YokeHopUnkind, SafeZoneComponent) == 64, "Offset mismatch for UFortAISafeZoneModifier_YokeHopUnkind::SafeZoneComponent");
static_assert(offsetof(UFortAISafeZoneModifier_YokeHopUnkind, GameStateComponent) == 72, "Offset mismatch for UFortAISafeZoneModifier_YokeHopUnkind::GameStateComponent");

// /Script/YokeHopUnkindRuntime.FortAthenaMutator_YokeHopUnkind
// Kind: Class; super: FortAthenaMutator_GameModeBase
class UFortAthenaMutator_YokeHopUnkind
{
public:
    std::uint8_t Pad_0000[0x400]; // 0x0000
    std::uint8_t StormShapeRegistry[0x20]; // 0x0400 (Size: 0x20, Type: SoftObjectProperty)
    void* StormShapeRegistryStrongReference; // 0x0420 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t StormShapeRegistryIndex[0x1]; // 0x0428 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortAthenaMutator_YokeHopUnkind, StormShapeRegistry) == 1024, "Offset mismatch for UFortAthenaMutator_YokeHopUnkind::StormShapeRegistry");
static_assert(offsetof(UFortAthenaMutator_YokeHopUnkind, StormShapeRegistryStrongReference) == 1056, "Offset mismatch for UFortAthenaMutator_YokeHopUnkind::StormShapeRegistryStrongReference");
static_assert(offsetof(UFortAthenaMutator_YokeHopUnkind, StormShapeRegistryIndex) == 1064, "Offset mismatch for UFortAthenaMutator_YokeHopUnkind::StormShapeRegistryIndex");

// /Script/YokeHopUnkindRuntime.FortAthenaMutator_YokeHopUnkindUI
// Kind: Class; super: FortAthenaMutator_GameModeBase
class UFortAthenaMutator_YokeHopUnkindUI
{
public:
    std::uint8_t Pad_0000[0x420]; // 0x0000
    float GentlePointSearchDistance; // 0x0420 (Size: 0x4, Type: FloatProperty)
    float GentlePointMaxAngleTolerated; // 0x0424 (Size: 0x4, Type: FloatProperty)
    float GentlePointSearchStepDistance; // 0x0428 (Size: 0x4, Type: FloatProperty)
    float GentlePointMaxSearchDistance; // 0x042C (Size: 0x4, Type: FloatProperty)
    float StormCollisionSearchStepDistance; // 0x0430 (Size: 0x4, Type: FloatProperty)
    float StormCollisionMaxSearchDistance; // 0x0434 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortAthenaMutator_YokeHopUnkindUI, GentlePointSearchDistance) == 1056, "Offset mismatch for UFortAthenaMutator_YokeHopUnkindUI::GentlePointSearchDistance");
static_assert(offsetof(UFortAthenaMutator_YokeHopUnkindUI, GentlePointMaxAngleTolerated) == 1060, "Offset mismatch for UFortAthenaMutator_YokeHopUnkindUI::GentlePointMaxAngleTolerated");
static_assert(offsetof(UFortAthenaMutator_YokeHopUnkindUI, GentlePointSearchStepDistance) == 1064, "Offset mismatch for UFortAthenaMutator_YokeHopUnkindUI::GentlePointSearchStepDistance");
static_assert(offsetof(UFortAthenaMutator_YokeHopUnkindUI, GentlePointMaxSearchDistance) == 1068, "Offset mismatch for UFortAthenaMutator_YokeHopUnkindUI::GentlePointMaxSearchDistance");
static_assert(offsetof(UFortAthenaMutator_YokeHopUnkindUI, StormCollisionSearchStepDistance) == 1072, "Offset mismatch for UFortAthenaMutator_YokeHopUnkindUI::StormCollisionSearchStepDistance");
static_assert(offsetof(UFortAthenaMutator_YokeHopUnkindUI, StormCollisionMaxSearchDistance) == 1076, "Offset mismatch for UFortAthenaMutator_YokeHopUnkindUI::StormCollisionMaxSearchDistance");

// /Script/YokeHopUnkindRuntime.FortCheatManager_YokeHopUnkind
// Kind: Class; super: ChildCheatManager
class UFortCheatManager_YokeHopUnkind
{
public:
    std::uint8_t Opaque[1];
};


// /Script/YokeHopUnkindRuntime.FortGameFeatureAction_AddSafeZoneShapeProviderRegistry
// Kind: Class; super: GameFeatureAction
class UFortGameFeatureAction_AddSafeZoneShapeProviderRegistry
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TSoftObjectPtr<void> SafeZoneShapeProviderRegistry; // 0x0028 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UFortGameFeatureAction_AddSafeZoneShapeProviderRegistry, SafeZoneShapeProviderRegistry) == 40, "Offset mismatch for UFortGameFeatureAction_AddSafeZoneShapeProviderRegistry::SafeZoneShapeProviderRegistry");

// /Script/YokeHopUnkindRuntime.FortGameStateComponent_YokeHopUnkind
// Kind: Class; super: FortGameStateComponent
class UFortGameStateComponent_YokeHopUnkind
{
public:
    std::uint8_t Pad_0000[0x130]; // 0x0000
    FMulticastInlineDelegate OnStormShapeSelected; // 0x0130 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t HF_RadialPhase0Radius[0x28]; // 0x0140 (Size: 0x28, Type: StructProperty)
    std::uint8_t HF_RadialPhase0WaitTime[0x28]; // 0x0168 (Size: 0x28, Type: StructProperty)
    std::uint8_t HF_RadialPhase0ShrinkTime[0x28]; // 0x0190 (Size: 0x28, Type: StructProperty)
    std::uint8_t HF_RadialPhase1Radius[0x28]; // 0x01B8 (Size: 0x28, Type: StructProperty)
    std::uint8_t HF_RadialPhase1WaitTime[0x28]; // 0x01E0 (Size: 0x28, Type: StructProperty)
    std::uint8_t HF_RadialPhase1ShrinkTime[0x40]; // 0x0208 (Size: 0x40, Type: StructProperty)
    std::uint8_t WaveInfillPercentChance[0x28]; // 0x0248 (Size: 0x28, Type: StructProperty)
    void* OverrideGameData; // 0x0270 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x30]; // 0x0278
    std::uint8_t StormShapeRegistry[0x20]; // 0x02A8 (Size: 0x20, Type: SoftObjectProperty)
    void* StormShapeRegistryStrongReference; // 0x02C8 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> AllStormShapeRegistries; // 0x02D0 (Size: 0x10, Type: ArrayProperty)
    void* StormInfillShapeDataStrongReference; // 0x02E0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t StormShapeSystemConfig[0x1F0]; // 0x02E8 (Size: 0x1F0, Type: StructProperty)
    std::uint8_t ActiveStormShapeConfig[0x278]; // 0x04D8 (Size: 0x278, Type: StructProperty)
    std::uint8_t PreviousStormShapeConfig[0x278]; // 0x0750 (Size: 0x278, Type: StructProperty)
    TArray<void*> CurrentValidShapeProviderSets; // 0x09C8 (Size: 0x10, Type: ArrayProperty)
    std::int32_t CurrentShapeProviderSetIndex; // 0x09D8 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x09DC
    void* PrevStormShapeProvider; // 0x09E0 (Size: 0x8, Type: ObjectProperty)
    void* ActiveStormShapeProvider; // 0x09E8 (Size: 0x8, Type: ObjectProperty)
    std::int32_t ActiveShapeProviderIndex; // 0x09F0 (Size: 0x4, Type: IntProperty)
    float ShapeConfigRotation; // 0x09F4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bPrevOverrideRotation; // 0x09F8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x09F9
    float PrevShapeProviderRotation; // 0x09FC (Size: 0x4, Type: FloatProperty)
    std::uint8_t bCurrentOverrideRotation; // 0x0A00 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x0A01
    float CurrentShapeProviderRotation; // 0x0A04 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsNextSafeZoneInsidePreviousSafeZone; // 0x0A08 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsNextSafeZoneTouchingPreviousSafeZone; // 0x0A09 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x16]; // 0x0A0A
    std::uint8_t StormPhaseInfo[0x14]; // 0x0A20 (Size: 0x14, Type: StructProperty)
    float MoveStartTime; // 0x0A34 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0006[0x48]; // 0x0A38
    void* PreviousShapeSpline; // 0x0A80 (Size: 0x8, Type: ObjectProperty)
    void* CurrentShapeSpline; // 0x0A88 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> WaveInfillCurrentShapeSplines; // 0x0A90 (Size: 0x10, Type: ArrayProperty)
    void* WaveInfillPreviousShapeSpline; // 0x0AA0 (Size: 0x8, Type: ObjectProperty)
    void* WaveInfillEndShapeSpline; // 0x0AA8 (Size: 0x8, Type: ObjectProperty)
    void* EndShapeSpline; // 0x0AB0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0007[0x78]; // 0x0AB8
    TArray<void*> InfluencerControlPointAngles; // 0x0B30 (Size: 0x10, Type: ArrayProperty)
    float AdditionalAdjustControlPointAngleFactor; // 0x0B40 (Size: 0x4, Type: FloatProperty)
    std::int32_t FinalPhaseWithInfluencers; // 0x0B44 (Size: 0x4, Type: IntProperty)
    TArray<void*> SplineMeshes; // 0x0B48 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0008[0x30]; // 0x0B58
    TArray<void*> SafeZoneInfluencers; // 0x0B88 (Size: 0x10, Type: ArrayProperty)
    std::int32_t CurrentPhaseDataIndex; // 0x0B98 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0009[0x1C]; // 0x0B9C
    std::uint8_t bIsEnabled; // 0x0BB8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000A[0x17]; // 0x0BB9
    TArray<void*> CachedLandscapeSplinePoints; // 0x0BD0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CachedSafeZonePhases; // 0x0BE0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_000B[0x18]; // 0x0BF0
    std::uint8_t bIsRadialFirstPhaseActive; // 0x0C08 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000C[0x7]; // 0x0C09
    std::uint8_t RadialPhase0Info[0x50]; // 0x0C10 (Size: 0x50, Type: StructProperty)
    std::uint8_t RadialPhase1Info[0xF0]; // 0x0C60 (Size: 0xF0, Type: StructProperty)
    std::uint8_t bForceConformFirstStormShapeToLand; // 0x0D50 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bForceEnforceShrinkTimes; // 0x0D51 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000D[0x6]; // 0x0D52
    void* StormInfillShapeData; // 0x0D58 (Size: 0x8, Type: ObjectProperty)
    float ShrinkPhaseCompletionAlpha_Replicated; // 0x0D60 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_000E[0x4]; // 0x0D64
    float ShapePhaseCompletionAlpha_Replicated; // 0x0D68 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_000F[0xC]; // 0x0D6C
    std::uint8_t WaveInfillEnabledStatus; // 0x0D78 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0010[0x3]; // 0x0D79
    std::uint32_t WaveInfillSeed; // 0x0D7C (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(UFortGameStateComponent_YokeHopUnkind, OnStormShapeSelected) == 304, "Offset mismatch for UFortGameStateComponent_YokeHopUnkind::OnStormShapeSelected");
static_assert(offsetof(UFortGameStateComponent_YokeHopUnkind, HF_RadialPhase0Radius) == 320, "Offset mismatch for UFortGameStateComponent_YokeHopUnkind::HF_RadialPhase0Radius");
static_assert(offsetof(UFortGameStateComponent_YokeHopUnkind, HF_RadialPhase0WaitTime) == 360, "Offset mismatch for UFortGameStateComponent_YokeHopUnkind::HF_RadialPhase0WaitTime");
static_assert(offsetof(UFortGameStateComponent_YokeHopUnkind, HF_RadialPhase0ShrinkTime) == 400, "Offset mismatch for UFortGameStateComponent_YokeHopUnkind::HF_RadialPhase0ShrinkTime");
static_assert(offsetof(UFortGameStateComponent_YokeHopUnkind, HF_RadialPhase1Radius) == 440, "Offset mismatch for UFortGameStateComponent_YokeHopUnkind::HF_RadialPhase1Radius");
static_assert(offsetof(UFortGameStateComponent_YokeHopUnkind, HF_RadialPhase1WaitTime) == 480, "Offset mismatch for UFortGameStateComponent_YokeHopUnkind::HF_RadialPhase1WaitTime");
static_assert(offsetof(UFortGameStateComponent_YokeHopUnkind, HF_RadialPhase1ShrinkTime) == 520, "Offset mismatch for UFortGameStateComponent_YokeHopUnkind::HF_RadialPhase1ShrinkTime");
static_assert(offsetof(UFortGameStateComponent_YokeHopUnkind, WaveInfillPercentChance) == 584, "Offset mismatch for UFortGameStateComponent_YokeHopUnkind::WaveInfillPercentChance");
static_assert(offsetof(UFortGameStateComponent_YokeHopUnkind, OverrideGameData) == 624, "Offset mismatch for UFortGameStateComponent_YokeHopUnkind::OverrideGameData");
static_assert(offsetof(UFortGameStateComponent_YokeHopUnkind, StormShapeRegistry) == 680, "Offset mismatch for UFortGameStateComponent_YokeHopUnkind::StormShapeRegistry");
static_assert(offsetof(UFortGameStateComponent_YokeHopUnkind, StormShapeRegistryStrongReference) == 712, "Offset mismatch for UFortGameStateComponent_YokeHopUnkind::StormShapeRegistryStrongReference");
static_assert(offsetof(UFortGameStateComponent_YokeHopUnkind, AllStormShapeRegistries) == 720, "Offset mismatch for UFortGameStateComponent_YokeHopUnkind::AllStormShapeRegistries");
static_assert(offsetof(UFortGameStateComponent_YokeHopUnkind, StormInfillShapeDataStrongReference) == 736, "Offset mismatch for UFortGameStateComponent_YokeHopUnkind::StormInfillShapeDataStrongReference");
static_assert(offsetof(UFortGameStateComponent_YokeHopUnkind, StormShapeSystemConfig) == 744, "Offset mismatch for UFortGameStateComponent_YokeHopUnkind::StormShapeSystemConfig");
static_assert(offsetof(UFortGameStateComponent_YokeHopUnkind, ActiveStormShapeConfig) == 1240, "Offset mismatch for UFortGameStateComponent_YokeHopUnkind::ActiveStormShapeConfig");
static_assert(offsetof(UFortGameStateComponent_YokeHopUnkind, PreviousStormShapeConfig) == 1872, "Offset mismatch for UFortGameStateComponent_YokeHopUnkind::PreviousStormShapeConfig");
static_assert(offsetof(UFortGameStateComponent_YokeHopUnkind, CurrentValidShapeProviderSets) == 2504, "Offset mismatch for UFortGameStateComponent_YokeHopUnkind::CurrentValidShapeProviderSets");
static_assert(offsetof(UFortGameStateComponent_YokeHopUnkind, CurrentShapeProviderSetIndex) == 2520, "Offset mismatch for UFortGameStateComponent_YokeHopUnkind::CurrentShapeProviderSetIndex");
static_assert(offsetof(UFortGameStateComponent_YokeHopUnkind, PrevStormShapeProvider) == 2528, "Offset mismatch for UFortGameStateComponent_YokeHopUnkind::PrevStormShapeProvider");
static_assert(offsetof(UFortGameStateComponent_YokeHopUnkind, ActiveStormShapeProvider) == 2536, "Offset mismatch for UFortGameStateComponent_YokeHopUnkind::ActiveStormShapeProvider");
static_assert(offsetof(UFortGameStateComponent_YokeHopUnkind, ActiveShapeProviderIndex) == 2544, "Offset mismatch for UFortGameStateComponent_YokeHopUnkind::ActiveShapeProviderIndex");
static_assert(offsetof(UFortGameStateComponent_YokeHopUnkind, ShapeConfigRotation) == 2548, "Offset mismatch for UFortGameStateComponent_YokeHopUnkind::ShapeConfigRotation");
static_assert(offsetof(UFortGameStateComponent_YokeHopUnkind, bPrevOverrideRotation) == 2552, "Offset mismatch for UFortGameStateComponent_YokeHopUnkind::bPrevOverrideRotation");
static_assert(offsetof(UFortGameStateComponent_YokeHopUnkind, PrevShapeProviderRotation) == 2556, "Offset mismatch for UFortGameStateComponent_YokeHopUnkind::PrevShapeProviderRotation");
static_assert(offsetof(UFortGameStateComponent_YokeHopUnkind, bCurrentOverrideRotation) == 2560, "Offset mismatch for UFortGameStateComponent_YokeHopUnkind::bCurrentOverrideRotation");
static_assert(offsetof(UFortGameStateComponent_YokeHopUnkind, CurrentShapeProviderRotation) == 2564, "Offset mismatch for UFortGameStateComponent_YokeHopUnkind::CurrentShapeProviderRotation");
static_assert(offsetof(UFortGameStateComponent_YokeHopUnkind, bIsNextSafeZoneInsidePreviousSafeZone) == 2568, "Offset mismatch for UFortGameStateComponent_YokeHopUnkind::bIsNextSafeZoneInsidePreviousSafeZone");
static_assert(offsetof(UFortGameStateComponent_YokeHopUnkind, bIsNextSafeZoneTouchingPreviousSafeZone) == 2569, "Offset mismatch for UFortGameStateComponent_YokeHopUnkind::bIsNextSafeZoneTouchingPreviousSafeZone");
static_assert(offsetof(UFortGameStateComponent_YokeHopUnkind, StormPhaseInfo) == 2592, "Offset mismatch for UFortGameStateComponent_YokeHopUnkind::StormPhaseInfo");
static_assert(offsetof(UFortGameStateComponent_YokeHopUnkind, MoveStartTime) == 2612, "Offset mismatch for UFortGameStateComponent_YokeHopUnkind::MoveStartTime");
static_assert(offsetof(UFortGameStateComponent_YokeHopUnkind, PreviousShapeSpline) == 2688, "Offset mismatch for UFortGameStateComponent_YokeHopUnkind::PreviousShapeSpline");
static_assert(offsetof(UFortGameStateComponent_YokeHopUnkind, CurrentShapeSpline) == 2696, "Offset mismatch for UFortGameStateComponent_YokeHopUnkind::CurrentShapeSpline");
static_assert(offsetof(UFortGameStateComponent_YokeHopUnkind, WaveInfillCurrentShapeSplines) == 2704, "Offset mismatch for UFortGameStateComponent_YokeHopUnkind::WaveInfillCurrentShapeSplines");
static_assert(offsetof(UFortGameStateComponent_YokeHopUnkind, WaveInfillPreviousShapeSpline) == 2720, "Offset mismatch for UFortGameStateComponent_YokeHopUnkind::WaveInfillPreviousShapeSpline");
static_assert(offsetof(UFortGameStateComponent_YokeHopUnkind, WaveInfillEndShapeSpline) == 2728, "Offset mismatch for UFortGameStateComponent_YokeHopUnkind::WaveInfillEndShapeSpline");
static_assert(offsetof(UFortGameStateComponent_YokeHopUnkind, EndShapeSpline) == 2736, "Offset mismatch for UFortGameStateComponent_YokeHopUnkind::EndShapeSpline");
static_assert(offsetof(UFortGameStateComponent_YokeHopUnkind, InfluencerControlPointAngles) == 2864, "Offset mismatch for UFortGameStateComponent_YokeHopUnkind::InfluencerControlPointAngles");
static_assert(offsetof(UFortGameStateComponent_YokeHopUnkind, AdditionalAdjustControlPointAngleFactor) == 2880, "Offset mismatch for UFortGameStateComponent_YokeHopUnkind::AdditionalAdjustControlPointAngleFactor");
static_assert(offsetof(UFortGameStateComponent_YokeHopUnkind, FinalPhaseWithInfluencers) == 2884, "Offset mismatch for UFortGameStateComponent_YokeHopUnkind::FinalPhaseWithInfluencers");
static_assert(offsetof(UFortGameStateComponent_YokeHopUnkind, SplineMeshes) == 2888, "Offset mismatch for UFortGameStateComponent_YokeHopUnkind::SplineMeshes");
static_assert(offsetof(UFortGameStateComponent_YokeHopUnkind, SafeZoneInfluencers) == 2952, "Offset mismatch for UFortGameStateComponent_YokeHopUnkind::SafeZoneInfluencers");
static_assert(offsetof(UFortGameStateComponent_YokeHopUnkind, CurrentPhaseDataIndex) == 2968, "Offset mismatch for UFortGameStateComponent_YokeHopUnkind::CurrentPhaseDataIndex");
static_assert(offsetof(UFortGameStateComponent_YokeHopUnkind, bIsEnabled) == 3000, "Offset mismatch for UFortGameStateComponent_YokeHopUnkind::bIsEnabled");
static_assert(offsetof(UFortGameStateComponent_YokeHopUnkind, CachedLandscapeSplinePoints) == 3024, "Offset mismatch for UFortGameStateComponent_YokeHopUnkind::CachedLandscapeSplinePoints");
static_assert(offsetof(UFortGameStateComponent_YokeHopUnkind, CachedSafeZonePhases) == 3040, "Offset mismatch for UFortGameStateComponent_YokeHopUnkind::CachedSafeZonePhases");
static_assert(offsetof(UFortGameStateComponent_YokeHopUnkind, bIsRadialFirstPhaseActive) == 3080, "Offset mismatch for UFortGameStateComponent_YokeHopUnkind::bIsRadialFirstPhaseActive");
static_assert(offsetof(UFortGameStateComponent_YokeHopUnkind, RadialPhase0Info) == 3088, "Offset mismatch for UFortGameStateComponent_YokeHopUnkind::RadialPhase0Info");
static_assert(offsetof(UFortGameStateComponent_YokeHopUnkind, RadialPhase1Info) == 3168, "Offset mismatch for UFortGameStateComponent_YokeHopUnkind::RadialPhase1Info");
static_assert(offsetof(UFortGameStateComponent_YokeHopUnkind, bForceConformFirstStormShapeToLand) == 3408, "Offset mismatch for UFortGameStateComponent_YokeHopUnkind::bForceConformFirstStormShapeToLand");
static_assert(offsetof(UFortGameStateComponent_YokeHopUnkind, bForceEnforceShrinkTimes) == 3409, "Offset mismatch for UFortGameStateComponent_YokeHopUnkind::bForceEnforceShrinkTimes");
static_assert(offsetof(UFortGameStateComponent_YokeHopUnkind, StormInfillShapeData) == 3416, "Offset mismatch for UFortGameStateComponent_YokeHopUnkind::StormInfillShapeData");
static_assert(offsetof(UFortGameStateComponent_YokeHopUnkind, ShrinkPhaseCompletionAlpha_Replicated) == 3424, "Offset mismatch for UFortGameStateComponent_YokeHopUnkind::ShrinkPhaseCompletionAlpha_Replicated");
static_assert(offsetof(UFortGameStateComponent_YokeHopUnkind, ShapePhaseCompletionAlpha_Replicated) == 3432, "Offset mismatch for UFortGameStateComponent_YokeHopUnkind::ShapePhaseCompletionAlpha_Replicated");
static_assert(offsetof(UFortGameStateComponent_YokeHopUnkind, WaveInfillEnabledStatus) == 3448, "Offset mismatch for UFortGameStateComponent_YokeHopUnkind::WaveInfillEnabledStatus");
static_assert(offsetof(UFortGameStateComponent_YokeHopUnkind, WaveInfillSeed) == 3452, "Offset mismatch for UFortGameStateComponent_YokeHopUnkind::WaveInfillSeed");

// /Script/YokeHopUnkindRuntime.FortSafeZoneInfluencer
// Kind: Class; super: Actor
class UFortSafeZoneInfluencer
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    std::uint8_t InfluenceType; // 0x0270 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0271
    float Radius; // 0x0274 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortSafeZoneInfluencer, InfluenceType) == 624, "Offset mismatch for UFortSafeZoneInfluencer::InfluenceType");
static_assert(offsetof(UFortSafeZoneInfluencer, Radius) == 628, "Offset mismatch for UFortSafeZoneInfluencer::Radius");

// /Script/YokeHopUnkindRuntime.FortSafeZoneInfluencerEditorComponent
// Kind: Class; super: ActorComponent
class UFortSafeZoneInfluencerEditorComponent
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

static_assert(offsetof(UFortSafeZoneInfluencerEditorComponent, PrimaryComponentTick) == 56, "Offset mismatch for UFortSafeZoneInfluencerEditorComponent::PrimaryComponentTick");
static_assert(offsetof(UFortSafeZoneInfluencerEditorComponent, ComponentTags) == 104, "Offset mismatch for UFortSafeZoneInfluencerEditorComponent::ComponentTags");
static_assert(offsetof(UFortSafeZoneInfluencerEditorComponent, AssetUserData) == 120, "Offset mismatch for UFortSafeZoneInfluencerEditorComponent::AssetUserData");
static_assert(offsetof(UFortSafeZoneInfluencerEditorComponent, UCSSerializationIndex) == 144, "Offset mismatch for UFortSafeZoneInfluencerEditorComponent::UCSSerializationIndex");
static_assert(offsetof(UFortSafeZoneInfluencerEditorComponent, bNetAddressable) == 152, "Offset mismatch for UFortSafeZoneInfluencerEditorComponent::bNetAddressable");
static_assert(offsetof(UFortSafeZoneInfluencerEditorComponent, bAutoActivate) == 154, "Offset mismatch for UFortSafeZoneInfluencerEditorComponent::bAutoActivate");
static_assert(offsetof(UFortSafeZoneInfluencerEditorComponent, bIsEditorOnly) == 155, "Offset mismatch for UFortSafeZoneInfluencerEditorComponent::bIsEditorOnly");
static_assert(offsetof(UFortSafeZoneInfluencerEditorComponent, CreationMethod) == 185, "Offset mismatch for UFortSafeZoneInfluencerEditorComponent::CreationMethod");
static_assert(offsetof(UFortSafeZoneInfluencerEditorComponent, OnComponentActivated) == 186, "Offset mismatch for UFortSafeZoneInfluencerEditorComponent::OnComponentActivated");
static_assert(offsetof(UFortSafeZoneInfluencerEditorComponent, OnComponentDeactivated) == 187, "Offset mismatch for UFortSafeZoneInfluencerEditorComponent::OnComponentDeactivated");

// /Script/YokeHopUnkindRuntime.SafeZoneShapeCircularOffsets
// Kind: Class; super: SafeZoneShapeProvider
class USafeZoneShapeCircularOffsets
{
public:
    std::uint8_t Pad_0000[0x1E8]; // 0x0000
    float CircleYawDeg; // 0x01E8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x01EC
    std::uint8_t CircleScale[0x10]; // 0x01F0 (Size: 0x10, Type: StructProperty)
    TArray<void*> ControlPointRadiusScale; // 0x0200 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USafeZoneShapeCircularOffsets, CircleYawDeg) == 488, "Offset mismatch for USafeZoneShapeCircularOffsets::CircleYawDeg");
static_assert(offsetof(USafeZoneShapeCircularOffsets, CircleScale) == 496, "Offset mismatch for USafeZoneShapeCircularOffsets::CircleScale");
static_assert(offsetof(USafeZoneShapeCircularOffsets, ControlPointRadiusScale) == 512, "Offset mismatch for USafeZoneShapeCircularOffsets::ControlPointRadiusScale");

// /Script/YokeHopUnkindRuntime.SafeZoneShapeExplicitSpline
// Kind: Class; super: SafeZoneShapeProvider
class USafeZoneShapeExplicitSpline
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t GeneratedSpline[0x68]; // 0x0028 (Size: 0x68, Type: StructProperty)
    std::uint8_t Enabled[0x28]; // 0x0090 (Size: 0x28, Type: StructProperty)
    std::uint8_t Weight[0x28]; // 0x00B8 (Size: 0x28, Type: StructProperty)
    std::uint8_t OverrideConfigRotation[0x28]; // 0x00E0 (Size: 0x28, Type: StructProperty)
    std::uint8_t BaseRotation[0x28]; // 0x0108 (Size: 0x28, Type: StructProperty)
    std::uint8_t RandomRotationRangeMin[0x28]; // 0x0130 (Size: 0x28, Type: StructProperty)
    std::uint8_t RandomRotationRangeMax[0x28]; // 0x0158 (Size: 0x28, Type: StructProperty)
    std::uint8_t PrimitiveShape[0x28]; // 0x0180 (Size: 0x28, Type: StructProperty)
    std::uint8_t InOutTest; // 0x01A8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t AdditionalPointDistribution; // 0x01A9 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x6]; // 0x01AA
    std::uint8_t MinimapOverrides[0x30]; // 0x01B0 (Size: 0x30, Type: StructProperty)
    std::uint8_t bSkipReindexing; // 0x01E0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(USafeZoneShapeExplicitSpline, GeneratedSpline) == 40, "Offset mismatch for USafeZoneShapeExplicitSpline::GeneratedSpline");
static_assert(offsetof(USafeZoneShapeExplicitSpline, Enabled) == 144, "Offset mismatch for USafeZoneShapeExplicitSpline::Enabled");
static_assert(offsetof(USafeZoneShapeExplicitSpline, Weight) == 184, "Offset mismatch for USafeZoneShapeExplicitSpline::Weight");
static_assert(offsetof(USafeZoneShapeExplicitSpline, OverrideConfigRotation) == 224, "Offset mismatch for USafeZoneShapeExplicitSpline::OverrideConfigRotation");
static_assert(offsetof(USafeZoneShapeExplicitSpline, BaseRotation) == 264, "Offset mismatch for USafeZoneShapeExplicitSpline::BaseRotation");
static_assert(offsetof(USafeZoneShapeExplicitSpline, RandomRotationRangeMin) == 304, "Offset mismatch for USafeZoneShapeExplicitSpline::RandomRotationRangeMin");
static_assert(offsetof(USafeZoneShapeExplicitSpline, RandomRotationRangeMax) == 344, "Offset mismatch for USafeZoneShapeExplicitSpline::RandomRotationRangeMax");
static_assert(offsetof(USafeZoneShapeExplicitSpline, PrimitiveShape) == 384, "Offset mismatch for USafeZoneShapeExplicitSpline::PrimitiveShape");
static_assert(offsetof(USafeZoneShapeExplicitSpline, InOutTest) == 424, "Offset mismatch for USafeZoneShapeExplicitSpline::InOutTest");
static_assert(offsetof(USafeZoneShapeExplicitSpline, AdditionalPointDistribution) == 425, "Offset mismatch for USafeZoneShapeExplicitSpline::AdditionalPointDistribution");
static_assert(offsetof(USafeZoneShapeExplicitSpline, MinimapOverrides) == 432, "Offset mismatch for USafeZoneShapeExplicitSpline::MinimapOverrides");
static_assert(offsetof(USafeZoneShapeExplicitSpline, bSkipReindexing) == 480, "Offset mismatch for USafeZoneShapeExplicitSpline::bSkipReindexing");

// /Script/YokeHopUnkindRuntime.SafeZoneShapeFromMask
// Kind: Class; super: SafeZoneShapeProvider
class USafeZoneShapeFromMask
{
public:
    std::uint8_t Pad_0000[0x1E8]; // 0x0000
    std::uint8_t ShapeMask[0x20]; // 0x01E8 (Size: 0x20, Type: SoftObjectProperty)
    float Scale; // 0x0208 (Size: 0x4, Type: FloatProperty)
    std::int32_t ConversionControlPointNum; // 0x020C (Size: 0x4, Type: IntProperty)
    std::int32_t DefaultRadiusStepCount; // 0x0210 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(USafeZoneShapeFromMask, ShapeMask) == 488, "Offset mismatch for USafeZoneShapeFromMask::ShapeMask");
static_assert(offsetof(USafeZoneShapeFromMask, Scale) == 520, "Offset mismatch for USafeZoneShapeFromMask::Scale");
static_assert(offsetof(USafeZoneShapeFromMask, ConversionControlPointNum) == 524, "Offset mismatch for USafeZoneShapeFromMask::ConversionControlPointNum");
static_assert(offsetof(USafeZoneShapeFromMask, DefaultRadiusStepCount) == 528, "Offset mismatch for USafeZoneShapeFromMask::DefaultRadiusStepCount");

// /Script/YokeHopUnkindRuntime.SafeZoneShapeProvider
// Kind: Class; super: Object
class USafeZoneShapeProvider
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t GeneratedSpline[0x68]; // 0x0028 (Size: 0x68, Type: StructProperty)
    std::uint8_t Enabled[0x28]; // 0x0090 (Size: 0x28, Type: StructProperty)
    std::uint8_t Weight[0x28]; // 0x00B8 (Size: 0x28, Type: StructProperty)
    std::uint8_t OverrideConfigRotation[0x28]; // 0x00E0 (Size: 0x28, Type: StructProperty)
    std::uint8_t BaseRotation[0x28]; // 0x0108 (Size: 0x28, Type: StructProperty)
    std::uint8_t RandomRotationRangeMin[0x28]; // 0x0130 (Size: 0x28, Type: StructProperty)
    std::uint8_t RandomRotationRangeMax[0x28]; // 0x0158 (Size: 0x28, Type: StructProperty)
    std::uint8_t PrimitiveShape[0x28]; // 0x0180 (Size: 0x28, Type: StructProperty)
    std::uint8_t InOutTest; // 0x01A8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t AdditionalPointDistribution; // 0x01A9 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x6]; // 0x01AA
    std::uint8_t MinimapOverrides[0x30]; // 0x01B0 (Size: 0x30, Type: StructProperty)
    std::uint8_t bSkipReindexing; // 0x01E0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(USafeZoneShapeProvider, GeneratedSpline) == 40, "Offset mismatch for USafeZoneShapeProvider::GeneratedSpline");
static_assert(offsetof(USafeZoneShapeProvider, Enabled) == 144, "Offset mismatch for USafeZoneShapeProvider::Enabled");
static_assert(offsetof(USafeZoneShapeProvider, Weight) == 184, "Offset mismatch for USafeZoneShapeProvider::Weight");
static_assert(offsetof(USafeZoneShapeProvider, OverrideConfigRotation) == 224, "Offset mismatch for USafeZoneShapeProvider::OverrideConfigRotation");
static_assert(offsetof(USafeZoneShapeProvider, BaseRotation) == 264, "Offset mismatch for USafeZoneShapeProvider::BaseRotation");
static_assert(offsetof(USafeZoneShapeProvider, RandomRotationRangeMin) == 304, "Offset mismatch for USafeZoneShapeProvider::RandomRotationRangeMin");
static_assert(offsetof(USafeZoneShapeProvider, RandomRotationRangeMax) == 344, "Offset mismatch for USafeZoneShapeProvider::RandomRotationRangeMax");
static_assert(offsetof(USafeZoneShapeProvider, PrimitiveShape) == 384, "Offset mismatch for USafeZoneShapeProvider::PrimitiveShape");
static_assert(offsetof(USafeZoneShapeProvider, InOutTest) == 424, "Offset mismatch for USafeZoneShapeProvider::InOutTest");
static_assert(offsetof(USafeZoneShapeProvider, AdditionalPointDistribution) == 425, "Offset mismatch for USafeZoneShapeProvider::AdditionalPointDistribution");
static_assert(offsetof(USafeZoneShapeProvider, MinimapOverrides) == 432, "Offset mismatch for USafeZoneShapeProvider::MinimapOverrides");
static_assert(offsetof(USafeZoneShapeProvider, bSkipReindexing) == 480, "Offset mismatch for USafeZoneShapeProvider::bSkipReindexing");

// /Script/YokeHopUnkindRuntime.SafeZoneShapeProviderRegistry
// Kind: Class; super: DataAsset
class USafeZoneShapeProviderRegistry
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> ShapeConfigsNew; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USafeZoneShapeProviderRegistry, ShapeConfigsNew) == 40, "Offset mismatch for USafeZoneShapeProviderRegistry::ShapeConfigsNew");

// /Script/YokeHopUnkindRuntime.SafeZoneShapeProviderSet
// Kind: Class; super: Object
class USafeZoneShapeProviderSet
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t MinPhase[0x28]; // 0x0028 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxPhase[0x28]; // 0x0050 (Size: 0x28, Type: StructProperty)
    TArray<void*> PhaseData_Providers; // 0x0078 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USafeZoneShapeProviderSet, MinPhase) == 40, "Offset mismatch for USafeZoneShapeProviderSet::MinPhase");
static_assert(offsetof(USafeZoneShapeProviderSet, MaxPhase) == 80, "Offset mismatch for USafeZoneShapeProviderSet::MaxPhase");
static_assert(offsetof(USafeZoneShapeProviderSet, PhaseData_Providers) == 120, "Offset mismatch for USafeZoneShapeProviderSet::PhaseData_Providers");

// /Script/YokeHopUnkindRuntime.StormInfillShapeData
// Kind: Class; super: DataAsset
class UStormInfillShapeData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> StormInfillSplinePoints; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UStormInfillShapeData, StormInfillSplinePoints) == 40, "Offset mismatch for UStormInfillShapeData::StormInfillSplinePoints");

// /Script/YokeHopUnkindRuntime.StormMapOverrideCircleProviderInterface
// Kind: Class; super: Interface
class UStormMapOverrideCircleProviderInterface
{
public:
    std::uint8_t Opaque[1];
};

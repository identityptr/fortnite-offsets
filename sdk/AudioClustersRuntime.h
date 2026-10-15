/**
 * decamp dumper generated SDK
 * Package: /Script/AudioClustersRuntime
 */
#pragma once
#include "Basic.h"

// /Script/AudioClustersRuntime.AudioClusterAlgorithmTemplate
// Kind: ScriptStruct; super: none
struct FAudioClusterAlgorithmTemplate
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AudioClustersRuntime.AudioClusterAlgorithmTemplate_DynamicSector
// Kind: ScriptStruct; super: AudioClusterAlgorithmTemplate
struct FAudioClusterAlgorithmTemplate_DynamicSector
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    double SectorWidth; // 0x0008 (Size: 0x8, Type: DoubleProperty)
    double SectorMinRadius; // 0x0010 (Size: 0x8, Type: DoubleProperty)
    double SectorMaxRadius; // 0x0018 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t RadialDistanceStrategy; // 0x0020 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0021
    float UpdateLagSpeed; // 0x0024 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FAudioClusterAlgorithmTemplate_DynamicSector, SectorWidth) == 8, "Offset mismatch for FAudioClusterAlgorithmTemplate_DynamicSector::SectorWidth");
static_assert(offsetof(FAudioClusterAlgorithmTemplate_DynamicSector, SectorMinRadius) == 16, "Offset mismatch for FAudioClusterAlgorithmTemplate_DynamicSector::SectorMinRadius");
static_assert(offsetof(FAudioClusterAlgorithmTemplate_DynamicSector, SectorMaxRadius) == 24, "Offset mismatch for FAudioClusterAlgorithmTemplate_DynamicSector::SectorMaxRadius");
static_assert(offsetof(FAudioClusterAlgorithmTemplate_DynamicSector, RadialDistanceStrategy) == 32, "Offset mismatch for FAudioClusterAlgorithmTemplate_DynamicSector::RadialDistanceStrategy");
static_assert(offsetof(FAudioClusterAlgorithmTemplate_DynamicSector, UpdateLagSpeed) == 36, "Offset mismatch for FAudioClusterAlgorithmTemplate_DynamicSector::UpdateLagSpeed");

// /Script/AudioClustersRuntime.AudioClusterAlgorithmTemplate_StaticSector
// Kind: ScriptStruct; super: AudioClusterAlgorithmTemplate
struct FAudioClusterAlgorithmTemplate_StaticSector
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::int32_t NumSectors; // 0x0008 (Size: 0x4, Type: IntProperty)
    float FirstSectorStartAngle; // 0x000C (Size: 0x4, Type: FloatProperty)
    double SectorMinRadius; // 0x0010 (Size: 0x8, Type: DoubleProperty)
    double SectorMaxRadius; // 0x0018 (Size: 0x8, Type: DoubleProperty)
    float MinTimeInSector; // 0x0020 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FAudioClusterAlgorithmTemplate_StaticSector, NumSectors) == 8, "Offset mismatch for FAudioClusterAlgorithmTemplate_StaticSector::NumSectors");
static_assert(offsetof(FAudioClusterAlgorithmTemplate_StaticSector, FirstSectorStartAngle) == 12, "Offset mismatch for FAudioClusterAlgorithmTemplate_StaticSector::FirstSectorStartAngle");
static_assert(offsetof(FAudioClusterAlgorithmTemplate_StaticSector, SectorMinRadius) == 16, "Offset mismatch for FAudioClusterAlgorithmTemplate_StaticSector::SectorMinRadius");
static_assert(offsetof(FAudioClusterAlgorithmTemplate_StaticSector, SectorMaxRadius) == 24, "Offset mismatch for FAudioClusterAlgorithmTemplate_StaticSector::SectorMaxRadius");
static_assert(offsetof(FAudioClusterAlgorithmTemplate_StaticSector, MinTimeInSector) == 32, "Offset mismatch for FAudioClusterAlgorithmTemplate_StaticSector::MinTimeInSector");

// /Script/AudioClustersRuntime.AudioClusterAlgorithm_Cone
// Kind: ScriptStruct; super: AudioClusterAlgorithmTemplate
struct FAudioClusterAlgorithm_Cone
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    double SectorWidth; // 0x0008 (Size: 0x8, Type: DoubleProperty)
    double SectorMinRadius; // 0x0010 (Size: 0x8, Type: DoubleProperty)
    double SectorMaxRadius; // 0x0018 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FAudioClusterAlgorithm_Cone, SectorWidth) == 8, "Offset mismatch for FAudioClusterAlgorithm_Cone::SectorWidth");
static_assert(offsetof(FAudioClusterAlgorithm_Cone, SectorMinRadius) == 16, "Offset mismatch for FAudioClusterAlgorithm_Cone::SectorMinRadius");
static_assert(offsetof(FAudioClusterAlgorithm_Cone, SectorMaxRadius) == 24, "Offset mismatch for FAudioClusterAlgorithm_Cone::SectorMaxRadius");

// /Script/AudioClustersRuntime.AudioClusterCondition
// Kind: ScriptStruct; super: none
struct FAudioClusterCondition
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AudioClustersRuntime.AudioClusterCondition_ActorTag
// Kind: ScriptStruct; super: AudioClusterCondition
struct FAudioClusterCondition_ActorTag
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    FName Name; // 0x0008 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FAudioClusterCondition_ActorTag, Name) == 8, "Offset mismatch for FAudioClusterCondition_ActorTag::Name");

// /Script/AudioClustersRuntime.AudioClusterCondition_All
// Kind: ScriptStruct; super: AudioClusterCondition
struct FAudioClusterCondition_All
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> Conditions; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FAudioClusterCondition_All, Conditions) == 8, "Offset mismatch for FAudioClusterCondition_All::Conditions");

// /Script/AudioClustersRuntime.AudioClusterCondition_Any
// Kind: ScriptStruct; super: AudioClusterCondition
struct FAudioClusterCondition_Any
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> Conditions; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FAudioClusterCondition_Any, Conditions) == 8, "Offset mismatch for FAudioClusterCondition_Any::Conditions");

// /Script/AudioClustersRuntime.AudioClusterCondition_None
// Kind: ScriptStruct; super: AudioClusterCondition
struct FAudioClusterCondition_None
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> Conditions; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FAudioClusterCondition_None, Conditions) == 8, "Offset mismatch for FAudioClusterCondition_None::Conditions");

// /Script/AudioClustersRuntime.AudioClusterCondition_SubclassOf
// Kind: ScriptStruct; super: AudioClusterCondition
struct FAudioClusterCondition_SubclassOf
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TSoftClassPtr<void> ParentClass; // 0x0008 (Size: 0x28, Type: SoftClassProperty)
};

static_assert(offsetof(FAudioClusterCondition_SubclassOf, ParentClass) == 8, "Offset mismatch for FAudioClusterCondition_SubclassOf::ParentClass");

// /Script/AudioClustersRuntime.AudioClusterCondition_TagQuery
// Kind: ScriptStruct; super: AudioClusterCondition
struct FAudioClusterCondition_TagQuery
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Query[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FAudioClusterCondition_TagQuery, Query) == 8, "Offset mismatch for FAudioClusterCondition_TagQuery::Query");

// /Script/AudioClustersRuntime.AudioClusterConfiguration
// Kind: ScriptStruct; super: none
struct FAudioClusterConfiguration
{
public:
    std::uint8_t Name[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t Enabled[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::int32_t MinQualityLevel; // 0x0020 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0024
    TMap<void*, void*> TrackedActorClasses; // 0x0028 (Size: 0x10, Type: MapProperty)
    std::uint8_t GlobalFilter[0x10]; // 0x0038 (Size: 0x10, Type: StructProperty)
    std::int32_t MinSize; // 0x0048 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x004C
    std::uint8_t AlgorithmUpdateRateMs[0x18]; // 0x0050 (Size: 0x18, Type: StructProperty)
    std::uint8_t AlgorithmTemplate[0x10]; // 0x0068 (Size: 0x10, Type: StructProperty)
    void* ClusterBehavior; // 0x0078 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FAudioClusterConfiguration, Name) == 0, "Offset mismatch for FAudioClusterConfiguration::Name");
static_assert(offsetof(FAudioClusterConfiguration, Enabled) == 8, "Offset mismatch for FAudioClusterConfiguration::Enabled");
static_assert(offsetof(FAudioClusterConfiguration, MinQualityLevel) == 32, "Offset mismatch for FAudioClusterConfiguration::MinQualityLevel");
static_assert(offsetof(FAudioClusterConfiguration, TrackedActorClasses) == 40, "Offset mismatch for FAudioClusterConfiguration::TrackedActorClasses");
static_assert(offsetof(FAudioClusterConfiguration, GlobalFilter) == 56, "Offset mismatch for FAudioClusterConfiguration::GlobalFilter");
static_assert(offsetof(FAudioClusterConfiguration, MinSize) == 72, "Offset mismatch for FAudioClusterConfiguration::MinSize");
static_assert(offsetof(FAudioClusterConfiguration, AlgorithmUpdateRateMs) == 80, "Offset mismatch for FAudioClusterConfiguration::AlgorithmUpdateRateMs");
static_assert(offsetof(FAudioClusterConfiguration, AlgorithmTemplate) == 104, "Offset mismatch for FAudioClusterConfiguration::AlgorithmTemplate");
static_assert(offsetof(FAudioClusterConfiguration, ClusterBehavior) == 120, "Offset mismatch for FAudioClusterConfiguration::ClusterBehavior");

// /Script/AudioClustersRuntime.AudioClusterConfigurationsHandle
// Kind: ScriptStruct; super: none
struct FAudioClusterConfigurationsHandle
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AudioClustersRuntime.AudioClusterData
// Kind: ScriptStruct; super: none
struct FAudioClusterData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AudioClustersRuntime.AudioClusterData_StaticSector
// Kind: ScriptStruct; super: AudioClusterData
struct FAudioClusterData_StaticSector
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::int32_t ClusterSectorIndex; // 0x0008 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FAudioClusterData_StaticSector, ClusterSectorIndex) == 8, "Offset mismatch for FAudioClusterData_StaticSector::ClusterSectorIndex");

// /Script/AudioClustersRuntime.AudioClusterBehavior
// Kind: Class; super: Object
class UAudioClusterBehavior
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t ClusterData[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UAudioClusterBehavior, ClusterData) == 40, "Offset mismatch for UAudioClusterBehavior::ClusterData");

// /Script/AudioClustersRuntime.AudioClusterConfigurations
// Kind: Class; super: DataAsset
class UAudioClusterConfigurations
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> ClusterConfigs; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UAudioClusterConfigurations, ClusterConfigs) == 40, "Offset mismatch for UAudioClusterConfigurations::ClusterConfigs");

// /Script/AudioClustersRuntime.AudioClusterFunctionLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UAudioClusterFunctionLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AudioClustersRuntime.AudioClustersSubsystem
// Kind: Class; super: WorldSubsystem
class UAudioClustersSubsystem
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AudioClustersRuntime.GameFeatureAction_ConfigureAudioClusters
// Kind: Class; super: GameFeatureAction
class UGameFeatureAction_ConfigureAudioClusters
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Configurations[0x20]; // 0x0028 (Size: 0x20, Type: SoftObjectProperty)
    void* LoadedConfigurations; // 0x0048 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UGameFeatureAction_ConfigureAudioClusters, Configurations) == 40, "Offset mismatch for UGameFeatureAction_ConfigureAudioClusters::Configurations");
static_assert(offsetof(UGameFeatureAction_ConfigureAudioClusters, LoadedConfigurations) == 72, "Offset mismatch for UGameFeatureAction_ConfigureAudioClusters::LoadedConfigurations");

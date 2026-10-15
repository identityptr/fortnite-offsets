/**
 * decamp dumper generated SDK
 * Package: /Script/SpatialMetrics
 */
#pragma once
#include "Basic.h"

// /Script/SpatialMetrics.LevelPackageDiskSizeMetric
// Kind: Class; super: SpatialMetricInterface
class ULevelPackageDiskSizeMetric
{
public:
    std::uint8_t Pad_0000[0x2D8]; // 0x0000
    TArray<void*> RegisteredWorldPartitions; // 0x02D8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x40]; // 0x02E8
    void* IoStorePackageHandler; // 0x0328 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ChunkTypeFlags; // 0x0330 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(ULevelPackageDiskSizeMetric, RegisteredWorldPartitions) == 728, "Offset mismatch for ULevelPackageDiskSizeMetric::RegisteredWorldPartitions");
static_assert(offsetof(ULevelPackageDiskSizeMetric, IoStorePackageHandler) == 808, "Offset mismatch for ULevelPackageDiskSizeMetric::IoStorePackageHandler");
static_assert(offsetof(ULevelPackageDiskSizeMetric, ChunkTypeFlags) == 816, "Offset mismatch for ULevelPackageDiskSizeMetric::ChunkTypeFlags");

// /Script/SpatialMetrics.SpatialActorResourceSizeMetric
// Kind: Class; super: SpatialMetricInterface
class USpatialActorResourceSizeMetric
{
public:
    std::uint8_t Pad_0000[0xEC]; // 0x0000
    float UpdateTimeThresholdInMs; // 0x00EC (Size: 0x4, Type: FloatProperty)
    std::uint8_t MemoryCategoryFlags; // 0x00F0 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(USpatialActorResourceSizeMetric, UpdateTimeThresholdInMs) == 236, "Offset mismatch for USpatialActorResourceSizeMetric::UpdateTimeThresholdInMs");
static_assert(offsetof(USpatialActorResourceSizeMetric, MemoryCategoryFlags) == 240, "Offset mismatch for USpatialActorResourceSizeMetric::MemoryCategoryFlags");

// /Script/SpatialMetrics.SpatialMetricsActorCount
// Kind: Class; super: SpatialMetricsQuantityMetric
class USpatialMetricsActorCount
{
public:
    std::uint8_t Pad_0000[0x490]; // 0x0000
    std::uint8_t QuantityProperties[0x1]; // 0x0490 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USpatialMetricsActorCount, QuantityProperties) == 1168, "Offset mismatch for USpatialMetricsActorCount::QuantityProperties");

// /Script/SpatialMetrics.SpatialMetricsAnimationPackageSize
// Kind: Class; super: SpatialMetricsPackageSize
class USpatialMetricsAnimationPackageSize
{
public:
    std::uint8_t Pad_0000[0x4A0]; // 0x0000
    std::uint8_t AllowedAssetTypes[0x10]; // 0x04A0 (Size: 0x10, Type: SetProperty)
    TSet<void*> BlockedAssetTypes; // 0x04B0 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(USpatialMetricsAnimationPackageSize, AllowedAssetTypes) == 1184, "Offset mismatch for USpatialMetricsAnimationPackageSize::AllowedAssetTypes");
static_assert(offsetof(USpatialMetricsAnimationPackageSize, BlockedAssetTypes) == 1200, "Offset mismatch for USpatialMetricsAnimationPackageSize::BlockedAssetTypes");

// /Script/SpatialMetrics.SpatialMetricsAudioPackageSize
// Kind: Class; super: SpatialMetricsPackageSize
class USpatialMetricsAudioPackageSize
{
public:
    std::uint8_t Pad_0000[0x4A0]; // 0x0000
    std::uint8_t AllowedAssetTypes[0x10]; // 0x04A0 (Size: 0x10, Type: SetProperty)
    TSet<void*> BlockedAssetTypes; // 0x04B0 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(USpatialMetricsAudioPackageSize, AllowedAssetTypes) == 1184, "Offset mismatch for USpatialMetricsAudioPackageSize::AllowedAssetTypes");
static_assert(offsetof(USpatialMetricsAudioPackageSize, BlockedAssetTypes) == 1200, "Offset mismatch for USpatialMetricsAudioPackageSize::BlockedAssetTypes");

// /Script/SpatialMetrics.SpatialMetricsAvailableMemory
// Kind: Class; super: SpatialMetricsQuantityMetric
class USpatialMetricsAvailableMemory
{
public:
    std::uint8_t Pad_0000[0x490]; // 0x0000
    std::uint8_t QuantityProperties[0x1]; // 0x0490 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USpatialMetricsAvailableMemory, QuantityProperties) == 1168, "Offset mismatch for USpatialMetricsAvailableMemory::QuantityProperties");

// /Script/SpatialMetrics.SpatialMetricsBlueprintPackageSize
// Kind: Class; super: SpatialMetricsPackageSize
class USpatialMetricsBlueprintPackageSize
{
public:
    std::uint8_t Pad_0000[0x4A0]; // 0x0000
    std::uint8_t AllowedAssetTypes[0x10]; // 0x04A0 (Size: 0x10, Type: SetProperty)
    TSet<void*> BlockedAssetTypes; // 0x04B0 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(USpatialMetricsBlueprintPackageSize, AllowedAssetTypes) == 1184, "Offset mismatch for USpatialMetricsBlueprintPackageSize::AllowedAssetTypes");
static_assert(offsetof(USpatialMetricsBlueprintPackageSize, BlockedAssetTypes) == 1200, "Offset mismatch for USpatialMetricsBlueprintPackageSize::BlockedAssetTypes");

// /Script/SpatialMetrics.SpatialMetricsDrawCallCount
// Kind: Class; super: SpatialMetricsQuantityMetric
class USpatialMetricsDrawCallCount
{
public:
    std::uint8_t Pad_0000[0x490]; // 0x0000
    std::uint8_t QuantityProperties[0x1]; // 0x0490 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USpatialMetricsDrawCallCount, QuantityProperties) == 1168, "Offset mismatch for USpatialMetricsDrawCallCount::QuantityProperties");

// /Script/SpatialMetrics.SpatialMetricsFrameTime
// Kind: Class; super: SpatialMetricsQuantityMetric
class USpatialMetricsFrameTime
{
public:
    std::uint8_t Pad_0000[0x490]; // 0x0000
    std::uint8_t QuantityProperties[0x1]; // 0x0490 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USpatialMetricsFrameTime, QuantityProperties) == 1168, "Offset mismatch for USpatialMetricsFrameTime::QuantityProperties");

// /Script/SpatialMetrics.SpatialMetricsGameUpdateTime
// Kind: Class; super: SpatialMetricsQuantityMetric
class USpatialMetricsGameUpdateTime
{
public:
    std::uint8_t Pad_0000[0x490]; // 0x0000
    std::uint8_t QuantityProperties[0x1]; // 0x0490 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USpatialMetricsGameUpdateTime, QuantityProperties) == 1168, "Offset mismatch for USpatialMetricsGameUpdateTime::QuantityProperties");

// /Script/SpatialMetrics.SpatialMetricsGpuTime
// Kind: Class; super: SpatialMetricsQuantityMetric
class USpatialMetricsGpuTime
{
public:
    std::uint8_t Pad_0000[0x490]; // 0x0000
    std::uint8_t QuantityProperties[0x1]; // 0x0490 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USpatialMetricsGpuTime, QuantityProperties) == 1168, "Offset mismatch for USpatialMetricsGpuTime::QuantityProperties");

// /Script/SpatialMetrics.SpatialMetricsLevelPackageSize
// Kind: Class; super: SpatialMetricsPackageSize
class USpatialMetricsLevelPackageSize
{
public:
    std::uint8_t Pad_0000[0x4A0]; // 0x0000
    std::uint8_t AllowedAssetTypes[0x10]; // 0x04A0 (Size: 0x10, Type: SetProperty)
    TSet<void*> BlockedAssetTypes; // 0x04B0 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(USpatialMetricsLevelPackageSize, AllowedAssetTypes) == 1184, "Offset mismatch for USpatialMetricsLevelPackageSize::AllowedAssetTypes");
static_assert(offsetof(USpatialMetricsLevelPackageSize, BlockedAssetTypes) == 1200, "Offset mismatch for USpatialMetricsLevelPackageSize::BlockedAssetTypes");

// /Script/SpatialMetrics.SpatialMetricsMaterialPackageSize
// Kind: Class; super: SpatialMetricsPackageSize
class USpatialMetricsMaterialPackageSize
{
public:
    std::uint8_t Pad_0000[0x4A0]; // 0x0000
    std::uint8_t AllowedAssetTypes[0x10]; // 0x04A0 (Size: 0x10, Type: SetProperty)
    TSet<void*> BlockedAssetTypes; // 0x04B0 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(USpatialMetricsMaterialPackageSize, AllowedAssetTypes) == 1184, "Offset mismatch for USpatialMetricsMaterialPackageSize::AllowedAssetTypes");
static_assert(offsetof(USpatialMetricsMaterialPackageSize, BlockedAssetTypes) == 1200, "Offset mismatch for USpatialMetricsMaterialPackageSize::BlockedAssetTypes");

// /Script/SpatialMetrics.SpatialMetricsMemoryUsage
// Kind: Class; super: SpatialMetricsQuantityMetric
class USpatialMetricsMemoryUsage
{
public:
    std::uint8_t Pad_0000[0x490]; // 0x0000
    std::uint8_t QuantityProperties[0x1]; // 0x0490 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USpatialMetricsMemoryUsage, QuantityProperties) == 1168, "Offset mismatch for USpatialMetricsMemoryUsage::QuantityProperties");

// /Script/SpatialMetrics.SpatialMetricsNanitePackageSize
// Kind: Class; super: SpatialMetricsPackageSize
class USpatialMetricsNanitePackageSize
{
public:
    std::uint8_t Pad_0000[0x4A0]; // 0x0000
    std::uint8_t AllowedAssetTypes[0x10]; // 0x04A0 (Size: 0x10, Type: SetProperty)
    TSet<void*> BlockedAssetTypes; // 0x04B0 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(USpatialMetricsNanitePackageSize, AllowedAssetTypes) == 1184, "Offset mismatch for USpatialMetricsNanitePackageSize::AllowedAssetTypes");
static_assert(offsetof(USpatialMetricsNanitePackageSize, BlockedAssetTypes) == 1200, "Offset mismatch for USpatialMetricsNanitePackageSize::BlockedAssetTypes");

// /Script/SpatialMetrics.SpatialMetricsNiagaraPackageSize
// Kind: Class; super: SpatialMetricsPackageSize
class USpatialMetricsNiagaraPackageSize
{
public:
    std::uint8_t Pad_0000[0x4A0]; // 0x0000
    std::uint8_t AllowedAssetTypes[0x10]; // 0x04A0 (Size: 0x10, Type: SetProperty)
    TSet<void*> BlockedAssetTypes; // 0x04B0 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(USpatialMetricsNiagaraPackageSize, AllowedAssetTypes) == 1184, "Offset mismatch for USpatialMetricsNiagaraPackageSize::AllowedAssetTypes");
static_assert(offsetof(USpatialMetricsNiagaraPackageSize, BlockedAssetTypes) == 1200, "Offset mismatch for USpatialMetricsNiagaraPackageSize::BlockedAssetTypes");

// /Script/SpatialMetrics.SpatialMetricsPackageMetadataProvider
// Kind: Class; super: WorldMetricsExtension
class USpatialMetricsPackageMetadataProvider
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SpatialMetrics.SpatialMetricsPackageSize
// Kind: Class; super: SpatialMetricsQuantityMetric
class USpatialMetricsPackageSize
{
public:
    std::uint8_t Pad_0000[0x4A0]; // 0x0000
    std::uint8_t AllowedAssetTypes[0x10]; // 0x04A0 (Size: 0x10, Type: SetProperty)
    TSet<void*> BlockedAssetTypes; // 0x04B0 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(USpatialMetricsPackageSize, AllowedAssetTypes) == 1184, "Offset mismatch for USpatialMetricsPackageSize::AllowedAssetTypes");
static_assert(offsetof(USpatialMetricsPackageSize, BlockedAssetTypes) == 1200, "Offset mismatch for USpatialMetricsPackageSize::BlockedAssetTypes");

// /Script/SpatialMetrics.SpatialMetricsPlayerLocation
// Kind: Class; super: SpatialMetricsGridLocationMetric
class USpatialMetricsPlayerLocation
{
public:
    std::uint8_t Pad_0000[0xC90]; // 0x0000
    std::int32_t CellSize; // 0x0C90 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(USpatialMetricsPlayerLocation, CellSize) == 3216, "Offset mismatch for USpatialMetricsPlayerLocation::CellSize");

// /Script/SpatialMetrics.SpatialMetricsPrimitiveCount
// Kind: Class; super: SpatialMetricsQuantityMetric
class USpatialMetricsPrimitiveCount
{
public:
    std::uint8_t Pad_0000[0x490]; // 0x0000
    std::uint8_t QuantityProperties[0x1]; // 0x0490 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USpatialMetricsPrimitiveCount, QuantityProperties) == 1168, "Offset mismatch for USpatialMetricsPrimitiveCount::QuantityProperties");

// /Script/SpatialMetrics.SpatialMetricsRenderTime
// Kind: Class; super: SpatialMetricsQuantityMetric
class USpatialMetricsRenderTime
{
public:
    std::uint8_t Pad_0000[0x490]; // 0x0000
    std::uint8_t QuantityProperties[0x1]; // 0x0490 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USpatialMetricsRenderTime, QuantityProperties) == 1168, "Offset mismatch for USpatialMetricsRenderTime::QuantityProperties");

// /Script/SpatialMetrics.SpatialMetricsRhiTime
// Kind: Class; super: SpatialMetricsQuantityMetric
class USpatialMetricsRhiTime
{
public:
    std::uint8_t Pad_0000[0x490]; // 0x0000
    std::uint8_t QuantityProperties[0x1]; // 0x0490 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USpatialMetricsRhiTime, QuantityProperties) == 1168, "Offset mismatch for USpatialMetricsRhiTime::QuantityProperties");

// /Script/SpatialMetrics.SpatialMetricsSceneGraphComponentCount
// Kind: Class; super: SpatialMetricsQuantityMetric
class USpatialMetricsSceneGraphComponentCount
{
public:
    std::uint8_t Pad_0000[0x490]; // 0x0000
    std::uint8_t QuantityProperties[0x1]; // 0x0490 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USpatialMetricsSceneGraphComponentCount, QuantityProperties) == 1168, "Offset mismatch for USpatialMetricsSceneGraphComponentCount::QuantityProperties");

// /Script/SpatialMetrics.SpatialMetricsSceneGraphEntityCount
// Kind: Class; super: SpatialMetricsQuantityMetric
class USpatialMetricsSceneGraphEntityCount
{
public:
    std::uint8_t Pad_0000[0x490]; // 0x0000
    std::uint8_t QuantityProperties[0x1]; // 0x0490 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USpatialMetricsSceneGraphEntityCount, QuantityProperties) == 1168, "Offset mismatch for USpatialMetricsSceneGraphEntityCount::QuantityProperties");

// /Script/SpatialMetrics.SpatialMetricsShadersLoadedCount
// Kind: Class; super: SpatialMetricsQuantityMetric
class USpatialMetricsShadersLoadedCount
{
public:
    std::uint8_t Pad_0000[0x490]; // 0x0000
    std::uint8_t QuantityProperties[0x1]; // 0x0490 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USpatialMetricsShadersLoadedCount, QuantityProperties) == 1168, "Offset mismatch for USpatialMetricsShadersLoadedCount::QuantityProperties");

// /Script/SpatialMetrics.SpatialMetricsStaticMeshPackageSize
// Kind: Class; super: SpatialMetricsPackageSize
class USpatialMetricsStaticMeshPackageSize
{
public:
    std::uint8_t Pad_0000[0x4A0]; // 0x0000
    std::uint8_t AllowedAssetTypes[0x10]; // 0x04A0 (Size: 0x10, Type: SetProperty)
    TSet<void*> BlockedAssetTypes; // 0x04B0 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(USpatialMetricsStaticMeshPackageSize, AllowedAssetTypes) == 1184, "Offset mismatch for USpatialMetricsStaticMeshPackageSize::AllowedAssetTypes");
static_assert(offsetof(USpatialMetricsStaticMeshPackageSize, BlockedAssetTypes) == 1200, "Offset mismatch for USpatialMetricsStaticMeshPackageSize::BlockedAssetTypes");

// /Script/SpatialMetrics.SpatialMetricsTexturePackageSize
// Kind: Class; super: SpatialMetricsPackageSize
class USpatialMetricsTexturePackageSize
{
public:
    std::uint8_t Pad_0000[0x4A0]; // 0x0000
    std::uint8_t AllowedAssetTypes[0x10]; // 0x04A0 (Size: 0x10, Type: SetProperty)
    TSet<void*> BlockedAssetTypes; // 0x04B0 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(USpatialMetricsTexturePackageSize, AllowedAssetTypes) == 1184, "Offset mismatch for USpatialMetricsTexturePackageSize::AllowedAssetTypes");
static_assert(offsetof(USpatialMetricsTexturePackageSize, BlockedAssetTypes) == 1200, "Offset mismatch for USpatialMetricsTexturePackageSize::BlockedAssetTypes");

// /Script/SpatialMetrics.SpatialMetricsTextureStreamingMemoryUsage
// Kind: Class; super: SpatialMetricsQuantityMetric
class USpatialMetricsTextureStreamingMemoryUsage
{
public:
    std::uint8_t Pad_0000[0x490]; // 0x0000
    std::uint8_t QuantityProperties[0x1]; // 0x0490 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USpatialMetricsTextureStreamingMemoryUsage, QuantityProperties) == 1168, "Offset mismatch for USpatialMetricsTextureStreamingMemoryUsage::QuantityProperties");

// /Script/SpatialMetrics.SpatialMetricsUObjectCount
// Kind: Class; super: SpatialMetricsQuantityMetric
class USpatialMetricsUObjectCount
{
public:
    std::uint8_t Pad_0000[0x490]; // 0x0000
    std::uint8_t QuantityProperties[0x1]; // 0x0490 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USpatialMetricsUObjectCount, QuantityProperties) == 1168, "Offset mismatch for USpatialMetricsUObjectCount::QuantityProperties");

// /Script/SpatialMetrics.SpatialMetricsUniqueCollisionMeshCount
// Kind: Class; super: SpatialMetricsQuantityMetric
class USpatialMetricsUniqueCollisionMeshCount
{
public:
    std::uint8_t Pad_0000[0x4A8]; // 0x0000
    std::uint8_t CollisionTypeToCount; // 0x04A8 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(USpatialMetricsUniqueCollisionMeshCount, CollisionTypeToCount) == 1192, "Offset mismatch for USpatialMetricsUniqueCollisionMeshCount::CollisionTypeToCount");

// /Script/SpatialMetrics.SpatialProxyMetric
// Kind: Class; super: SpatialMetricInterface
class USpatialProxyMetric
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Properties[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USpatialProxyMetric, Properties) == 40, "Offset mismatch for USpatialProxyMetric::Properties");

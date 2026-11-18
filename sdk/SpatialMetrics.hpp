#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SpatialMetrics
{
    struct LevelPackageDiskSizeMetric
    {
        static constexpr std::string_view Name = "LevelPackageDiskSizeMetric";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SpatialMetricInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t RegisteredWorldPartitions = 0x2D8;
            static constexpr std::uintptr_t IoStorePackageHandler = 0x328;
            static constexpr std::uintptr_t ChunkTypeFlags = 0x330;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"RegisteredWorldPartitions", 0x2D8, "ArrayProperty"},
            {"IoStorePackageHandler", 0x328, "ObjectProperty"},
            {"ChunkTypeFlags", 0x330, "EnumProperty"},
        }};
    };

    struct SpatialActorResourceSizeMetric
    {
        static constexpr std::string_view Name = "SpatialActorResourceSizeMetric";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SpatialMetricInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t UpdateTimeThresholdInMs = 0xEC;
            static constexpr std::uintptr_t MemoryCategoryFlags = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"UpdateTimeThresholdInMs", 0xEC, "FloatProperty"},
            {"MemoryCategoryFlags", 0xF0, "EnumProperty"},
        }};
    };

    struct SpatialMetricsActorCount
    {
        static constexpr std::string_view Name = "SpatialMetricsActorCount";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SpatialMetricsQuantityMetric";
        struct Offsets
        {
            static constexpr std::uintptr_t QuantityProperties = 0x490;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"QuantityProperties", 0x490, "StructProperty"},
        }};
    };

    struct SpatialMetricsAnimationPackageSize
    {
        static constexpr std::string_view Name = "SpatialMetricsAnimationPackageSize";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SpatialMetricsPackageSize";
        struct Offsets
        {
            static constexpr std::uintptr_t AllowedAssetTypes = 0x4A0;
            static constexpr std::uintptr_t BlockedAssetTypes = 0x4B0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"AllowedAssetTypes", 0x4A0, "SetProperty"},
            {"BlockedAssetTypes", 0x4B0, "SetProperty"},
        }};
    };

    struct SpatialMetricsAudioPackageSize
    {
        static constexpr std::string_view Name = "SpatialMetricsAudioPackageSize";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SpatialMetricsPackageSize";
        struct Offsets
        {
            static constexpr std::uintptr_t AllowedAssetTypes = 0x4A0;
            static constexpr std::uintptr_t BlockedAssetTypes = 0x4B0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"AllowedAssetTypes", 0x4A0, "SetProperty"},
            {"BlockedAssetTypes", 0x4B0, "SetProperty"},
        }};
    };

    struct SpatialMetricsAvailableMemory
    {
        static constexpr std::string_view Name = "SpatialMetricsAvailableMemory";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SpatialMetricsQuantityMetric";
        struct Offsets
        {
            static constexpr std::uintptr_t QuantityProperties = 0x490;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"QuantityProperties", 0x490, "StructProperty"},
        }};
    };

    struct SpatialMetricsBlueprintPackageSize
    {
        static constexpr std::string_view Name = "SpatialMetricsBlueprintPackageSize";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SpatialMetricsPackageSize";
        struct Offsets
        {
            static constexpr std::uintptr_t AllowedAssetTypes = 0x4A0;
            static constexpr std::uintptr_t BlockedAssetTypes = 0x4B0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"AllowedAssetTypes", 0x4A0, "SetProperty"},
            {"BlockedAssetTypes", 0x4B0, "SetProperty"},
        }};
    };

    struct SpatialMetricsDrawCallCount
    {
        static constexpr std::string_view Name = "SpatialMetricsDrawCallCount";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SpatialMetricsQuantityMetric";
        struct Offsets
        {
            static constexpr std::uintptr_t QuantityProperties = 0x490;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"QuantityProperties", 0x490, "StructProperty"},
        }};
    };

    struct SpatialMetricsFrameTime
    {
        static constexpr std::string_view Name = "SpatialMetricsFrameTime";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SpatialMetricsQuantityMetric";
        struct Offsets
        {
            static constexpr std::uintptr_t QuantityProperties = 0x490;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"QuantityProperties", 0x490, "StructProperty"},
        }};
    };

    struct SpatialMetricsGameUpdateTime
    {
        static constexpr std::string_view Name = "SpatialMetricsGameUpdateTime";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SpatialMetricsQuantityMetric";
        struct Offsets
        {
            static constexpr std::uintptr_t QuantityProperties = 0x490;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"QuantityProperties", 0x490, "StructProperty"},
        }};
    };

    struct SpatialMetricsGpuTime
    {
        static constexpr std::string_view Name = "SpatialMetricsGpuTime";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SpatialMetricsQuantityMetric";
        struct Offsets
        {
            static constexpr std::uintptr_t QuantityProperties = 0x490;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"QuantityProperties", 0x490, "StructProperty"},
        }};
    };

    struct SpatialMetricsLevelPackageSize
    {
        static constexpr std::string_view Name = "SpatialMetricsLevelPackageSize";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SpatialMetricsPackageSize";
        struct Offsets
        {
            static constexpr std::uintptr_t AllowedAssetTypes = 0x4A0;
            static constexpr std::uintptr_t BlockedAssetTypes = 0x4B0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"AllowedAssetTypes", 0x4A0, "SetProperty"},
            {"BlockedAssetTypes", 0x4B0, "SetProperty"},
        }};
    };

    struct SpatialMetricsMaterialPackageSize
    {
        static constexpr std::string_view Name = "SpatialMetricsMaterialPackageSize";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SpatialMetricsPackageSize";
        struct Offsets
        {
            static constexpr std::uintptr_t AllowedAssetTypes = 0x4A0;
            static constexpr std::uintptr_t BlockedAssetTypes = 0x4B0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"AllowedAssetTypes", 0x4A0, "SetProperty"},
            {"BlockedAssetTypes", 0x4B0, "SetProperty"},
        }};
    };

    struct SpatialMetricsMemoryUsage
    {
        static constexpr std::string_view Name = "SpatialMetricsMemoryUsage";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SpatialMetricsQuantityMetric";
        struct Offsets
        {
            static constexpr std::uintptr_t QuantityProperties = 0x490;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"QuantityProperties", 0x490, "StructProperty"},
        }};
    };

    struct SpatialMetricsNanitePackageSize
    {
        static constexpr std::string_view Name = "SpatialMetricsNanitePackageSize";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SpatialMetricsPackageSize";
        struct Offsets
        {
            static constexpr std::uintptr_t AllowedAssetTypes = 0x4A0;
            static constexpr std::uintptr_t BlockedAssetTypes = 0x4B0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"AllowedAssetTypes", 0x4A0, "SetProperty"},
            {"BlockedAssetTypes", 0x4B0, "SetProperty"},
        }};
    };

    struct SpatialMetricsNiagaraPackageSize
    {
        static constexpr std::string_view Name = "SpatialMetricsNiagaraPackageSize";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SpatialMetricsPackageSize";
        struct Offsets
        {
            static constexpr std::uintptr_t AllowedAssetTypes = 0x4A0;
            static constexpr std::uintptr_t BlockedAssetTypes = 0x4B0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"AllowedAssetTypes", 0x4A0, "SetProperty"},
            {"BlockedAssetTypes", 0x4B0, "SetProperty"},
        }};
    };

    struct SpatialMetricsPackageMetadataProvider
    {
        static constexpr std::string_view Name = "SpatialMetricsPackageMetadataProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldMetricsExtension";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SpatialMetricsPackageSize
    {
        static constexpr std::string_view Name = "SpatialMetricsPackageSize";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SpatialMetricsQuantityMetric";
        struct Offsets
        {
            static constexpr std::uintptr_t AllowedAssetTypes = 0x4A0;
            static constexpr std::uintptr_t BlockedAssetTypes = 0x4B0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"AllowedAssetTypes", 0x4A0, "SetProperty"},
            {"BlockedAssetTypes", 0x4B0, "SetProperty"},
        }};
    };

    struct SpatialMetricsPlayerLocation
    {
        static constexpr std::string_view Name = "SpatialMetricsPlayerLocation";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SpatialMetricsGridLocationMetric";
        struct Offsets
        {
            static constexpr std::uintptr_t CellSize = 0xC90;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CellSize", 0xC90, "IntProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "OnPlayerPawnPossessionChanged",
        }};
    };

    struct SpatialMetricsPrimitiveCount
    {
        static constexpr std::string_view Name = "SpatialMetricsPrimitiveCount";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SpatialMetricsQuantityMetric";
        struct Offsets
        {
            static constexpr std::uintptr_t QuantityProperties = 0x490;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"QuantityProperties", 0x490, "StructProperty"},
        }};
    };

    struct SpatialMetricsRenderTime
    {
        static constexpr std::string_view Name = "SpatialMetricsRenderTime";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SpatialMetricsQuantityMetric";
        struct Offsets
        {
            static constexpr std::uintptr_t QuantityProperties = 0x490;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"QuantityProperties", 0x490, "StructProperty"},
        }};
    };

    struct SpatialMetricsRhiTime
    {
        static constexpr std::string_view Name = "SpatialMetricsRhiTime";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SpatialMetricsQuantityMetric";
        struct Offsets
        {
            static constexpr std::uintptr_t QuantityProperties = 0x490;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"QuantityProperties", 0x490, "StructProperty"},
        }};
    };

    struct SpatialMetricsSceneGraphComponentCount
    {
        static constexpr std::string_view Name = "SpatialMetricsSceneGraphComponentCount";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SpatialMetricsQuantityMetric";
        struct Offsets
        {
            static constexpr std::uintptr_t QuantityProperties = 0x490;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"QuantityProperties", 0x490, "StructProperty"},
        }};
    };

    struct SpatialMetricsSceneGraphEntityCount
    {
        static constexpr std::string_view Name = "SpatialMetricsSceneGraphEntityCount";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SpatialMetricsQuantityMetric";
        struct Offsets
        {
            static constexpr std::uintptr_t QuantityProperties = 0x490;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"QuantityProperties", 0x490, "StructProperty"},
        }};
    };

    struct SpatialMetricsShadersLoadedCount
    {
        static constexpr std::string_view Name = "SpatialMetricsShadersLoadedCount";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SpatialMetricsQuantityMetric";
        struct Offsets
        {
            static constexpr std::uintptr_t QuantityProperties = 0x490;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"QuantityProperties", 0x490, "StructProperty"},
        }};
    };

    struct SpatialMetricsStaticMeshPackageSize
    {
        static constexpr std::string_view Name = "SpatialMetricsStaticMeshPackageSize";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SpatialMetricsPackageSize";
        struct Offsets
        {
            static constexpr std::uintptr_t AllowedAssetTypes = 0x4A0;
            static constexpr std::uintptr_t BlockedAssetTypes = 0x4B0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"AllowedAssetTypes", 0x4A0, "SetProperty"},
            {"BlockedAssetTypes", 0x4B0, "SetProperty"},
        }};
    };

    struct SpatialMetricsTexturePackageSize
    {
        static constexpr std::string_view Name = "SpatialMetricsTexturePackageSize";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SpatialMetricsPackageSize";
        struct Offsets
        {
            static constexpr std::uintptr_t AllowedAssetTypes = 0x4A0;
            static constexpr std::uintptr_t BlockedAssetTypes = 0x4B0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"AllowedAssetTypes", 0x4A0, "SetProperty"},
            {"BlockedAssetTypes", 0x4B0, "SetProperty"},
        }};
    };

    struct SpatialMetricsTextureStreamingMemoryUsage
    {
        static constexpr std::string_view Name = "SpatialMetricsTextureStreamingMemoryUsage";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SpatialMetricsQuantityMetric";
        struct Offsets
        {
            static constexpr std::uintptr_t QuantityProperties = 0x490;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"QuantityProperties", 0x490, "StructProperty"},
        }};
    };

    struct SpatialMetricsUObjectCount
    {
        static constexpr std::string_view Name = "SpatialMetricsUObjectCount";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SpatialMetricsQuantityMetric";
        struct Offsets
        {
            static constexpr std::uintptr_t QuantityProperties = 0x490;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"QuantityProperties", 0x490, "StructProperty"},
        }};
    };

    struct SpatialMetricsUniqueCollisionMeshCount
    {
        static constexpr std::string_view Name = "SpatialMetricsUniqueCollisionMeshCount";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SpatialMetricsQuantityMetric";
        struct Offsets
        {
            static constexpr std::uintptr_t CollisionTypeToCount = 0x4A8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CollisionTypeToCount", 0x4A8, "EnumProperty"},
        }};
    };

    struct SpatialProxyMetric
    {
        static constexpr std::string_view Name = "SpatialProxyMetric";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SpatialMetricInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t Properties = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Properties", 0x28, "StructProperty"},
        }};
    };

}

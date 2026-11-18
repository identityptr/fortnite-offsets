#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SpatialMetricsCore
{
    struct SpatialMetricBase
    {
        static constexpr std::string_view Name = "SpatialMetricBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SpatialMetricInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t SamplingFrequencyInSeconds = 0x1068;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SamplingFrequencyInSeconds", 0x1068, "FloatProperty"},
        }};
    };

    struct SpatialMetricInterface
    {
        static constexpr std::string_view Name = "SpatialMetricInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldMetricInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t Properties = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Properties", 0x28, "StructProperty"},
        }};
    };

    struct SpatialMetricProperties
    {
        static constexpr std::string_view Name = "SpatialMetricProperties";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Label = 0x0;
            static constexpr std::uintptr_t MinValue = 0x10;
            static constexpr std::uintptr_t MaxValue = 0x14;
            static constexpr std::uintptr_t ThresholdValue = 0x18;
            static constexpr std::uintptr_t ValuePreference = 0x1C;
            static constexpr std::uintptr_t Unit = 0x1D;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Label", 0x0, "TextProperty"},
            {"MinValue", 0x10, "IntProperty"},
            {"MaxValue", 0x14, "IntProperty"},
            {"ThresholdValue", 0x18, "IntProperty"},
            {"ValuePreference", 0x1C, "EnumProperty"},
            {"Unit", 0x1D, "EnumProperty"},
        }};
    };

    struct SpatialMetricSample
    {
        static constexpr std::string_view Name = "SpatialMetricSample";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Class = 0x0;
            static constexpr std::uintptr_t Properties = 0x18;
            static constexpr std::uintptr_t Values = 0x38;
            static constexpr std::uintptr_t BoundsMin = 0x48;
            static constexpr std::uintptr_t BoundsMax = 0x54;
            static constexpr std::uintptr_t Timestamp = 0x60;
            static constexpr std::uintptr_t SpatialPrecision = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Class", 0x0, "StructProperty"},
            {"Properties", 0x18, "StructProperty"},
            {"Values", 0x38, "ArrayProperty"},
            {"BoundsMin", 0x48, "StructProperty"},
            {"BoundsMax", 0x54, "StructProperty"},
            {"Timestamp", 0x60, "StructProperty"},
            {"SpatialPrecision", 0x68, "IntProperty"},
        }};
    };

    struct SpatialMetricSampleImageProperties
    {
        static constexpr std::string_view Name = "SpatialMetricSampleImageProperties";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ImageSize = 0x0;
            static constexpr std::uintptr_t MinWorldUnitsPerPixel = 0x4;
            static constexpr std::uintptr_t WorldColorSaturation = 0x8;
            static constexpr std::uintptr_t SpatialValueAlpha = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ImageSize", 0x0, "IntProperty"},
            {"MinWorldUnitsPerPixel", 0x4, "IntProperty"},
            {"WorldColorSaturation", 0x8, "FloatProperty"},
            {"SpatialValueAlpha", 0xC, "FloatProperty"},
        }};
    };

    struct SpatialMetricsActorCategorizer
    {
        static constexpr std::string_view Name = "SpatialMetricsActorCategorizer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldMetricsExtension";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SpatialMetricsActorIndexer
    {
        static constexpr std::string_view Name = "SpatialMetricsActorIndexer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldMetricsExtension";
        struct Offsets
        {
            static constexpr std::uintptr_t IndexCacheSize = 0x160;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"IndexCacheSize", 0x160, "IntProperty"},
        }};
    };

    struct SpatialMetricsActorIndexerSubscriber
    {
        static constexpr std::string_view Name = "SpatialMetricsActorIndexerSubscriber";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SpatialMetricsAddMetricRequest
    {
        static constexpr std::string_view Name = "SpatialMetricsAddMetricRequest";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "SpatialMetricsConnectorClassRequest";
        struct Offsets
        {
            static constexpr std::uintptr_t Class = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Class", 0x10, "StructProperty"},
        }};
    };

    struct SpatialMetricsAddMetricResponse
    {
        static constexpr std::string_view Name = "SpatialMetricsAddMetricResponse";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "SpatialMetricsConnectorBoolResponse";
        struct Offsets
        {
            static constexpr std::uintptr_t bResult = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bResult", 0x38, "BoolProperty"},
        }};
    };

    struct SpatialMetricsAvailableLocationMetricsRequest
    {
        static constexpr std::string_view Name = "SpatialMetricsAvailableLocationMetricsRequest";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "SpatialMetricsConnectorRequest";
        struct Offsets
        {
            static constexpr std::uintptr_t MessageId = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MessageId", 0x0, "StructProperty"},
        }};
    };

    struct SpatialMetricsAvailableLocationMetricsResponse
    {
        static constexpr std::string_view Name = "SpatialMetricsAvailableLocationMetricsResponse";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "SpatialMetricsConnectorResponse";
        struct Offsets
        {
            static constexpr std::uintptr_t Descriptors = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Descriptors", 0x38, "ArrayProperty"},
        }};
    };

    struct SpatialMetricsAvailableMetricsRequest
    {
        static constexpr std::string_view Name = "SpatialMetricsAvailableMetricsRequest";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "SpatialMetricsConnectorRequest";
        struct Offsets
        {
            static constexpr std::uintptr_t MessageId = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MessageId", 0x0, "StructProperty"},
        }};
    };

    struct SpatialMetricsAvailableMetricsResponse
    {
        static constexpr std::string_view Name = "SpatialMetricsAvailableMetricsResponse";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "SpatialMetricsConnectorResponse";
        struct Offsets
        {
            static constexpr std::uintptr_t DescriptorSet = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DescriptorSet", 0x38, "StructProperty"},
        }};
    };

    struct SpatialMetricsAvailableQuantityMetricsRequest
    {
        static constexpr std::string_view Name = "SpatialMetricsAvailableQuantityMetricsRequest";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "SpatialMetricsConnectorRequest";
        struct Offsets
        {
            static constexpr std::uintptr_t MessageId = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MessageId", 0x0, "StructProperty"},
        }};
    };

    struct SpatialMetricsAvailableQuantityMetricsResponse
    {
        static constexpr std::string_view Name = "SpatialMetricsAvailableQuantityMetricsResponse";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "SpatialMetricsConnectorResponse";
        struct Offsets
        {
            static constexpr std::uintptr_t Descriptors = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Descriptors", 0x38, "ArrayProperty"},
        }};
    };

    struct SpatialMetricsConnectorBoolRequest
    {
        static constexpr std::string_view Name = "SpatialMetricsConnectorBoolRequest";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "SpatialMetricsConnectorRequest";
        struct Offsets
        {
            static constexpr std::uintptr_t bValue = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bValue", 0x10, "BoolProperty"},
        }};
    };

    struct SpatialMetricsConnectorBoolResponse
    {
        static constexpr std::string_view Name = "SpatialMetricsConnectorBoolResponse";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "SpatialMetricsConnectorResponse";
        struct Offsets
        {
            static constexpr std::uintptr_t bResult = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bResult", 0x38, "BoolProperty"},
        }};
    };

    struct SpatialMetricsConnectorClassRequest
    {
        static constexpr std::string_view Name = "SpatialMetricsConnectorClassRequest";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "SpatialMetricsConnectorRequest";
        struct Offsets
        {
            static constexpr std::uintptr_t Class = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Class", 0x10, "StructProperty"},
        }};
    };

    struct SpatialMetricsConnectorClientPing
    {
        static constexpr std::string_view Name = "SpatialMetricsConnectorClientPing";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "SpatialMetricsConnectorRequest";
        struct Offsets
        {
            static constexpr std::uintptr_t MessageId = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MessageId", 0x0, "StructProperty"},
        }};
    };

    struct SpatialMetricsConnectorClientPong
    {
        static constexpr std::string_view Name = "SpatialMetricsConnectorClientPong";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "SpatialMetricsConnectorResponse";
        struct Offsets
        {
            static constexpr std::uintptr_t ServerID = 0x38;
            static constexpr std::uintptr_t ServerInstanceId = 0x48;
            static constexpr std::uintptr_t DeviceName = 0x58;
            static constexpr std::uintptr_t PlatformName = 0x68;
            static constexpr std::uintptr_t CurrentLevel = 0x78;
            static constexpr std::uintptr_t InstanceType = 0x88;
            static constexpr std::uintptr_t PlayerViewPoint = 0x98;
            static constexpr std::uintptr_t MetaData = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"ServerID", 0x38, "StructProperty"},
            {"ServerInstanceId", 0x48, "StructProperty"},
            {"DeviceName", 0x58, "StrProperty"},
            {"PlatformName", 0x68, "StrProperty"},
            {"CurrentLevel", 0x78, "StrProperty"},
            {"InstanceType", 0x88, "StrProperty"},
            {"PlayerViewPoint", 0x98, "OptionalProperty"},
            {"MetaData", 0xD0, "MapProperty"},
        }};
    };

    struct SpatialMetricsConnectorMessage
    {
        static constexpr std::string_view Name = "SpatialMetricsConnectorMessage";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t MessageId = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MessageId", 0x0, "StructProperty"},
        }};
    };

    struct SpatialMetricsConnectorPlayerViewPoint
    {
        static constexpr std::string_view Name = "SpatialMetricsConnectorPlayerViewPoint";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Location = 0x0;
            static constexpr std::uintptr_t Rotation = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Location", 0x0, "StructProperty"},
            {"Rotation", 0x18, "StructProperty"},
        }};
    };

    struct SpatialMetricsConnectorRequest
    {
        static constexpr std::string_view Name = "SpatialMetricsConnectorRequest";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "SpatialMetricsConnectorMessage";
        struct Offsets
        {
            static constexpr std::uintptr_t MessageId = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MessageId", 0x0, "StructProperty"},
        }};
    };

    struct SpatialMetricsConnectorResponse
    {
        static constexpr std::string_view Name = "SpatialMetricsConnectorResponse";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "SpatialMetricsConnectorMessage";
        struct Offsets
        {
            static constexpr std::uintptr_t RequestMessageId = 0x10;
            static constexpr std::uintptr_t ResponseCode = 0x20;
            static constexpr std::uintptr_t Reason = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"RequestMessageId", 0x10, "StructProperty"},
            {"ResponseCode", 0x20, "EnumProperty"},
            {"Reason", 0x28, "TextProperty"},
        }};
    };

    struct SpatialMetricsContextInterface
    {
        static constexpr std::string_view Name = "SpatialMetricsContextInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SpatialMetricsEditorContext
    {
        static constexpr std::string_view Name = "SpatialMetricsEditorContext";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldMetricsExtension";
        struct Offsets
        {
            static constexpr std::uintptr_t SpatialPrecision = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SpatialPrecision", 0x30, "IntProperty"},
        }};
    };

    struct SpatialMetricsEnableSamplerRequest
    {
        static constexpr std::string_view Name = "SpatialMetricsEnableSamplerRequest";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "SpatialMetricsConnectorBoolRequest";
        struct Offsets
        {
            static constexpr std::uintptr_t bValue = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bValue", 0x10, "BoolProperty"},
        }};
    };

    struct SpatialMetricsEnableSamplerResponse
    {
        static constexpr std::string_view Name = "SpatialMetricsEnableSamplerResponse";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "SpatialMetricsConnectorBoolResponse";
        struct Offsets
        {
            static constexpr std::uintptr_t bResult = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bResult", 0x38, "BoolProperty"},
        }};
    };

    struct SpatialMetricsGridLocationMetric
    {
        static constexpr std::string_view Name = "SpatialMetricsGridLocationMetric";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SpatialMetricsMetric";
        struct Offsets
        {
            static constexpr std::uintptr_t CellSize = 0xC90;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CellSize", 0xC90, "IntProperty"},
        }};
    };

    struct SpatialMetricsGridLocationMetricDescriptor
    {
        static constexpr std::string_view Name = "SpatialMetricsGridLocationMetricDescriptor";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t MetricClass = 0x0;
            static constexpr std::uintptr_t MetricProperties = 0x18;
            static constexpr std::uintptr_t CellSize = 0x60;
            static constexpr std::uintptr_t CellOriginPoint = 0x64;
            static constexpr std::uintptr_t GridOrigin = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"MetricClass", 0x0, "StructProperty"},
            {"MetricProperties", 0x18, "StructProperty"},
            {"CellSize", 0x60, "IntProperty"},
            {"CellOriginPoint", 0x64, "EnumProperty"},
            {"GridOrigin", 0x68, "StructProperty"},
        }};
    };

    struct SpatialMetricsGridLocationSample
    {
        static constexpr std::string_view Name = "SpatialMetricsGridLocationSample";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Values = 0x0;
            static constexpr std::uintptr_t MetricClass = 0x10;
            static constexpr std::uintptr_t MetricProperties = 0x28;
            static constexpr std::uintptr_t CellSize = 0x70;
            static constexpr std::uintptr_t CellOriginPoint = 0x74;
            static constexpr std::uintptr_t GridOrigin = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Values", 0x0, "ArrayProperty"},
            {"MetricClass", 0x10, "StructProperty"},
            {"MetricProperties", 0x28, "StructProperty"},
            {"CellSize", 0x70, "IntProperty"},
            {"CellOriginPoint", 0x74, "EnumProperty"},
            {"GridOrigin", 0x78, "StructProperty"},
        }};
    };

    struct SpatialMetricsHeatmapColorProperties
    {
        static constexpr std::string_view Name = "SpatialMetricsHeatmapColorProperties";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t LowValueColor = 0x0;
            static constexpr std::uintptr_t MidpointValueColor = 0x4;
            static constexpr std::uintptr_t HighValueColor = 0x8;
            static constexpr std::uintptr_t MaxValueColor = 0xC;
            static constexpr std::uintptr_t MinAlpha = 0x10;
            static constexpr std::uintptr_t MaxAlpha = 0x14;
            static constexpr std::uintptr_t AlphaFactor = 0x18;
            static constexpr std::uintptr_t LowpointRatio = 0x1C;
            static constexpr std::uintptr_t MidpointRatio = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"LowValueColor", 0x0, "StructProperty"},
            {"MidpointValueColor", 0x4, "StructProperty"},
            {"HighValueColor", 0x8, "StructProperty"},
            {"MaxValueColor", 0xC, "StructProperty"},
            {"MinAlpha", 0x10, "FloatProperty"},
            {"MaxAlpha", 0x14, "FloatProperty"},
            {"AlphaFactor", 0x18, "FloatProperty"},
            {"LowpointRatio", 0x1C, "FloatProperty"},
            {"MidpointRatio", 0x20, "FloatProperty"},
        }};
    };

    struct SpatialMetricsIsSamplerEnabledRequest
    {
        static constexpr std::string_view Name = "SpatialMetricsIsSamplerEnabledRequest";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "SpatialMetricsConnectorRequest";
        struct Offsets
        {
            static constexpr std::uintptr_t MessageId = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MessageId", 0x0, "StructProperty"},
        }};
    };

    struct SpatialMetricsIsSamplerEnabledResponse
    {
        static constexpr std::string_view Name = "SpatialMetricsIsSamplerEnabledResponse";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "SpatialMetricsConnectorBoolResponse";
        struct Offsets
        {
            static constexpr std::uintptr_t bResult = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bResult", 0x38, "BoolProperty"},
        }};
    };

    struct SpatialMetricsLocationIndexer
    {
        static constexpr std::string_view Name = "SpatialMetricsLocationIndexer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldMetricsExtension";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SpatialMetricsLocationIndexerSubscriber
    {
        static constexpr std::string_view Name = "SpatialMetricsLocationIndexerSubscriber";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SpatialMetricsMetric
    {
        static constexpr std::string_view Name = "SpatialMetricsMetric";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldMetricInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t Properties = 0x28;
            static constexpr std::uintptr_t SamplingFrequencyInSeconds = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Properties", 0x28, "StructProperty"},
            {"SamplingFrequencyInSeconds", 0x70, "FloatProperty"},
        }};
    };

    struct SpatialMetricsMetricDescriptorSet
    {
        static constexpr std::string_view Name = "SpatialMetricsMetricDescriptorSet";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t LocationDescriptors = 0x0;
            static constexpr std::uintptr_t QuantityDescriptors = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"LocationDescriptors", 0x0, "ArrayProperty"},
            {"QuantityDescriptors", 0x10, "ArrayProperty"},
        }};
    };

    struct SpatialMetricsMetricProperties
    {
        static constexpr std::string_view Name = "SpatialMetricsMetricProperties";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Label = 0x0;
            static constexpr std::uintptr_t Category = 0x10;
            static constexpr std::uintptr_t Description = 0x20;
            static constexpr std::uintptr_t ShortDescription = 0x30;
            static constexpr std::uintptr_t Unit = 0x40;
            static constexpr std::uintptr_t DefaultDisplayUnit = 0x41;
            static constexpr std::uintptr_t Target = 0x42;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Label", 0x0, "TextProperty"},
            {"Category", 0x10, "TextProperty"},
            {"Description", 0x20, "TextProperty"},
            {"ShortDescription", 0x30, "TextProperty"},
            {"Unit", 0x40, "EnumProperty"},
            {"DefaultDisplayUnit", 0x41, "EnumProperty"},
            {"Target", 0x42, "EnumProperty"},
        }};
    };

    struct SpatialMetricsMetricSet
    {
        static constexpr std::string_view Name = "SpatialMetricsMetricSet";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t LocationMetric = 0x0;
            static constexpr std::uintptr_t QuantityMetrics = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"LocationMetric", 0x0, "StructProperty"},
            {"QuantityMetrics", 0x18, "ArrayProperty"},
        }};
    };

    struct SpatialMetricsMinimalGridLocationSample
    {
        static constexpr std::string_view Name = "SpatialMetricsMinimalGridLocationSample";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Values = 0x0;
            static constexpr std::uintptr_t MetricClass = 0x10;
            static constexpr std::uintptr_t CellSize = 0x28;
            static constexpr std::uintptr_t CellOriginPoint = 0x2C;
            static constexpr std::uintptr_t GridOrigin = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Values", 0x0, "ArrayProperty"},
            {"MetricClass", 0x10, "StructProperty"},
            {"CellSize", 0x28, "IntProperty"},
            {"CellOriginPoint", 0x2C, "EnumProperty"},
            {"GridOrigin", 0x30, "StructProperty"},
        }};
    };

    struct SpatialMetricsMinimalQuantitySample
    {
        static constexpr std::string_view Name = "SpatialMetricsMinimalQuantitySample";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Values = 0x0;
            static constexpr std::uintptr_t MetricClass = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Values", 0x0, "ArrayProperty"},
            {"MetricClass", 0x10, "StructProperty"},
        }};
    };

    struct SpatialMetricsMinimalSampleSet
    {
        static constexpr std::string_view Name = "SpatialMetricsMinimalSampleSet";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t LocationSample = 0x0;
            static constexpr std::uintptr_t QuantitySamples = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"LocationSample", 0x0, "StructProperty"},
            {"QuantitySamples", 0x40, "ArrayProperty"},
        }};
    };

    struct SpatialMetricsPlayerContext
    {
        static constexpr std::string_view Name = "SpatialMetricsPlayerContext";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldMetricsExtension";
        struct Offsets
        {
            static constexpr std::uintptr_t SpatialPrecision = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SpatialPrecision", 0x38, "IntProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "OnPlayerPawnPossessionChanged",
        }};
    };

    struct SpatialMetricsQuantityGridView
    {
        static constexpr std::string_view Name = "SpatialMetricsQuantityGridView";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t LocationValues = 0x0;
            static constexpr std::uintptr_t QuantityValues = 0x10;
            static constexpr std::uintptr_t CellSize = 0x20;
            static constexpr std::uintptr_t ReductionMethod = 0x24;
            static constexpr std::uintptr_t QuantityUnit = 0x25;
            static constexpr std::uintptr_t CellOriginPoint = 0x26;
            static constexpr std::uintptr_t GridOrigin = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"LocationValues", 0x0, "ArrayProperty"},
            {"QuantityValues", 0x10, "ArrayProperty"},
            {"CellSize", 0x20, "IntProperty"},
            {"ReductionMethod", 0x24, "EnumProperty"},
            {"QuantityUnit", 0x25, "EnumProperty"},
            {"CellOriginPoint", 0x26, "EnumProperty"},
            {"GridOrigin", 0x28, "StructProperty"},
        }};
    };

    struct SpatialMetricsQuantityMetric
    {
        static constexpr std::string_view Name = "SpatialMetricsQuantityMetric";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SpatialMetricsMetric";
        struct Offsets
        {
            static constexpr std::uintptr_t QuantityProperties = 0x490;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"QuantityProperties", 0x490, "StructProperty"},
        }};
    };

    struct SpatialMetricsQuantityMetricDescriptor
    {
        static constexpr std::string_view Name = "SpatialMetricsQuantityMetricDescriptor";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t MetricClass = 0x0;
            static constexpr std::uintptr_t MetricProperties = 0x18;
            static constexpr std::uintptr_t QuantityProperties = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"MetricClass", 0x0, "StructProperty"},
            {"MetricProperties", 0x18, "StructProperty"},
            {"QuantityProperties", 0x60, "StructProperty"},
        }};
    };

    struct SpatialMetricsQuantityProperties
    {
        static constexpr std::string_view Name = "SpatialMetricsQuantityProperties";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t MinValue = 0x0;
            static constexpr std::uintptr_t MaxValue = 0x4;
            static constexpr std::uintptr_t ThresholdValue = 0x8;
            static constexpr std::uintptr_t ValuePreference = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"MinValue", 0x0, "IntProperty"},
            {"MaxValue", 0x4, "IntProperty"},
            {"ThresholdValue", 0x8, "IntProperty"},
            {"ValuePreference", 0xC, "EnumProperty"},
        }};
    };

    struct SpatialMetricsQuantitySample
    {
        static constexpr std::string_view Name = "SpatialMetricsQuantitySample";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Values = 0x0;
            static constexpr std::uintptr_t MetricClass = 0x10;
            static constexpr std::uintptr_t MetricProperties = 0x28;
            static constexpr std::uintptr_t QuantityProperties = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Values", 0x0, "ArrayProperty"},
            {"MetricClass", 0x10, "StructProperty"},
            {"MetricProperties", 0x28, "StructProperty"},
            {"QuantityProperties", 0x70, "StructProperty"},
        }};
    };

    struct SpatialMetricsRemoveMetricRequest
    {
        static constexpr std::string_view Name = "SpatialMetricsRemoveMetricRequest";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "SpatialMetricsConnectorClassRequest";
        struct Offsets
        {
            static constexpr std::uintptr_t Class = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Class", 0x10, "StructProperty"},
        }};
    };

    struct SpatialMetricsRemoveMetricResponse
    {
        static constexpr std::string_view Name = "SpatialMetricsRemoveMetricResponse";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "SpatialMetricsConnectorBoolResponse";
        struct Offsets
        {
            static constexpr std::uintptr_t bResult = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bResult", 0x38, "BoolProperty"},
        }};
    };

    struct SpatialMetricsSampleCollector
    {
        static constexpr std::string_view Name = "SpatialMetricsSampleCollector";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Sample = 0x0;
            static constexpr std::uintptr_t QuantityIndices = 0x98;
            static constexpr std::uintptr_t ValueCapacity = 0xA8;
            static constexpr std::uintptr_t WriteIndex = 0xAC;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Sample", 0x0, "StructProperty"},
            {"QuantityIndices", 0x98, "MapProperty"},
            {"ValueCapacity", 0xA8, "IntProperty"},
            {"WriteIndex", 0xAC, "IntProperty"},
        }};
    };

    struct SpatialMetricsSampleMetricsMinimalRequest
    {
        static constexpr std::string_view Name = "SpatialMetricsSampleMetricsMinimalRequest";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "SpatialMetricsConnectorRequest";
        struct Offsets
        {
            static constexpr std::uintptr_t MessageId = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MessageId", 0x0, "StructProperty"},
        }};
    };

    struct SpatialMetricsSampleMetricsMinimalResponse
    {
        static constexpr std::string_view Name = "SpatialMetricsSampleMetricsMinimalResponse";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "SpatialMetricsConnectorResponse";
        struct Offsets
        {
            static constexpr std::uintptr_t Sample = 0x38;
            static constexpr std::uintptr_t PlayerViewPoint = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Sample", 0x38, "StructProperty"},
            {"PlayerViewPoint", 0x88, "OptionalProperty"},
        }};
    };

    struct SpatialMetricsSampleMetricsRequest
    {
        static constexpr std::string_view Name = "SpatialMetricsSampleMetricsRequest";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "SpatialMetricsConnectorRequest";
        struct Offsets
        {
            static constexpr std::uintptr_t MessageId = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MessageId", 0x0, "StructProperty"},
        }};
    };

    struct SpatialMetricsSampleMetricsResponse
    {
        static constexpr std::string_view Name = "SpatialMetricsSampleMetricsResponse";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "SpatialMetricsConnectorResponse";
        struct Offsets
        {
            static constexpr std::uintptr_t Sample = 0x38;
            static constexpr std::uintptr_t PlayerViewPoint = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Sample", 0x38, "StructProperty"},
            {"PlayerViewPoint", 0xD0, "OptionalProperty"},
        }};
    };

    struct SpatialMetricsSampleSet
    {
        static constexpr std::string_view Name = "SpatialMetricsSampleSet";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t LocationSample = 0x0;
            static constexpr std::uintptr_t QuantitySamples = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"LocationSample", 0x0, "StructProperty"},
            {"QuantitySamples", 0x88, "ArrayProperty"},
        }};
    };

    struct SpatialMetricsSampler
    {
        static constexpr std::string_view Name = "SpatialMetricsSampler";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Metrics = 0x0;
            static constexpr std::uintptr_t LocationMetricClass = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Metrics", 0x0, "StructProperty"},
            {"LocationMetricClass", 0x20, "ClassProperty"},
        }};
    };

    struct SpatialMetricsSceneCapture2D
    {
        static constexpr std::string_view Name = "SpatialMetricsSceneCapture2D";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SceneCapture2D";
        struct Offsets
        {
            static constexpr std::uintptr_t CaptureComponent2D = 0x288;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CaptureComponent2D", 0x288, "ObjectProperty"},
        }};
    };

    struct SpatialMetricsSessionData
    {
        static constexpr std::string_view Name = "SpatialMetricsSessionData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Sources = 0x0;
            static constexpr std::uintptr_t MetaData = 0x10;
            static constexpr std::uintptr_t Timestamp = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Sources", 0x0, "ArrayProperty"},
            {"MetaData", 0x10, "MapProperty"},
            {"Timestamp", 0x20, "StructProperty"},
        }};
    };

    struct SpatialMetricsSessionSourceData
    {
        static constexpr std::string_view Name = "SpatialMetricsSessionSourceData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Label = 0x0;
            static constexpr std::uintptr_t Sample = 0x10;
            static constexpr std::uintptr_t MetaData = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Label", 0x0, "TextProperty"},
            {"Sample", 0x10, "StructProperty"},
            {"MetaData", 0xA8, "MapProperty"},
        }};
    };

    struct SpatialMetricsSetMetricsRequest
    {
        static constexpr std::string_view Name = "SpatialMetricsSetMetricsRequest";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "SpatialMetricsConnectorRequest";
        struct Offsets
        {
            static constexpr std::uintptr_t MetricSet = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MetricSet", 0x10, "StructProperty"},
        }};
    };

    struct SpatialMetricsSetMetricsResponse
    {
        static constexpr std::string_view Name = "SpatialMetricsSetMetricsResponse";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "SpatialMetricsConnectorResponse";
        struct Offsets
        {
            static constexpr std::uintptr_t MetricSet = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MetricSet", 0x38, "StructProperty"},
        }};
    };

    struct SpatialMetricsSubsystem
    {
        static constexpr std::string_view Name = "SpatialMetricsSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t AllowedMetricClasses = 0x38;
            static constexpr std::uintptr_t BlockedMetricClasses = 0x48;
            static constexpr std::uintptr_t Metrics = 0x58;
            static constexpr std::uintptr_t Sampler = 0x78;
            static constexpr std::uintptr_t bAutoCreateConnectorServer = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"AllowedMetricClasses", 0x38, "ArrayProperty"},
            {"BlockedMetricClasses", 0x48, "ArrayProperty"},
            {"Metrics", 0x58, "StructProperty"},
            {"Sampler", 0x78, "StructProperty"},
            {"bAutoCreateConnectorServer", 0xA0, "BoolProperty"},
        }};
    };

    struct SpatialValue
    {
        static constexpr std::string_view Name = "SpatialValue";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Location = 0x0;
            static constexpr std::uintptr_t Value = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Location", 0x0, "StructProperty"},
            {"Value", 0xC, "IntProperty"},
        }};
    };

    struct SpatialValueStats
    {
        static constexpr std::string_view Name = "SpatialValueStats";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t NumValues = 0x0;
            static constexpr std::uintptr_t NumValuesOutsideThreshold = 0x4;
            static constexpr std::uintptr_t MedianValue = 0x8;
            static constexpr std::uintptr_t MeanValue = 0xC;
            static constexpr std::uintptr_t MinValue = 0x10;
            static constexpr std::uintptr_t MaxValue = 0x14;
            static constexpr std::uintptr_t SumValue = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"NumValues", 0x0, "IntProperty"},
            {"NumValuesOutsideThreshold", 0x4, "IntProperty"},
            {"MedianValue", 0x8, "IntProperty"},
            {"MeanValue", 0xC, "IntProperty"},
            {"MinValue", 0x10, "IntProperty"},
            {"MaxValue", 0x14, "IntProperty"},
            {"SumValue", 0x18, "Int64Property"},
        }};
    };

}

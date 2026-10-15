/**
 * decamp dumper generated SDK
 * Package: /Script/SpatialMetricsCore
 */
#pragma once
#include "Basic.h"

// /Script/SpatialMetricsCore.SpatialMetricProperties
// Kind: ScriptStruct; super: none
struct FSpatialMetricProperties
{
public:
    std::uint8_t Label[0x10]; // 0x0000 (Size: 0x10, Type: TextProperty)
    std::int32_t MinValue; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxValue; // 0x0014 (Size: 0x4, Type: IntProperty)
    std::int32_t ThresholdValue; // 0x0018 (Size: 0x4, Type: IntProperty)
    std::uint8_t ValuePreference; // 0x001C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Unit; // 0x001D (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FSpatialMetricProperties, Label) == 0, "Offset mismatch for FSpatialMetricProperties::Label");
static_assert(offsetof(FSpatialMetricProperties, MinValue) == 16, "Offset mismatch for FSpatialMetricProperties::MinValue");
static_assert(offsetof(FSpatialMetricProperties, MaxValue) == 20, "Offset mismatch for FSpatialMetricProperties::MaxValue");
static_assert(offsetof(FSpatialMetricProperties, ThresholdValue) == 24, "Offset mismatch for FSpatialMetricProperties::ThresholdValue");
static_assert(offsetof(FSpatialMetricProperties, ValuePreference) == 28, "Offset mismatch for FSpatialMetricProperties::ValuePreference");
static_assert(offsetof(FSpatialMetricProperties, Unit) == 29, "Offset mismatch for FSpatialMetricProperties::Unit");

// /Script/SpatialMetricsCore.SpatialMetricSample
// Kind: ScriptStruct; super: none
struct FSpatialMetricSample
{
public:
    std::uint8_t Class[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t Properties[0x20]; // 0x0018 (Size: 0x20, Type: StructProperty)
    TArray<void*> Values; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t BoundsMin[0xC]; // 0x0048 (Size: 0xC, Type: StructProperty)
    std::uint8_t BoundsMax[0xC]; // 0x0054 (Size: 0xC, Type: StructProperty)
    std::uint8_t Timestamp[0x8]; // 0x0060 (Size: 0x8, Type: StructProperty)
    std::int32_t SpatialPrecision; // 0x0068 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FSpatialMetricSample, Class) == 0, "Offset mismatch for FSpatialMetricSample::Class");
static_assert(offsetof(FSpatialMetricSample, Properties) == 24, "Offset mismatch for FSpatialMetricSample::Properties");
static_assert(offsetof(FSpatialMetricSample, Values) == 56, "Offset mismatch for FSpatialMetricSample::Values");
static_assert(offsetof(FSpatialMetricSample, BoundsMin) == 72, "Offset mismatch for FSpatialMetricSample::BoundsMin");
static_assert(offsetof(FSpatialMetricSample, BoundsMax) == 84, "Offset mismatch for FSpatialMetricSample::BoundsMax");
static_assert(offsetof(FSpatialMetricSample, Timestamp) == 96, "Offset mismatch for FSpatialMetricSample::Timestamp");
static_assert(offsetof(FSpatialMetricSample, SpatialPrecision) == 104, "Offset mismatch for FSpatialMetricSample::SpatialPrecision");

// /Script/SpatialMetricsCore.SpatialMetricSampleImageProperties
// Kind: ScriptStruct; super: none
struct FSpatialMetricSampleImageProperties
{
public:
    std::int32_t ImageSize; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t MinWorldUnitsPerPixel; // 0x0004 (Size: 0x4, Type: IntProperty)
    float WorldColorSaturation; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float SpatialValueAlpha; // 0x000C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FSpatialMetricSampleImageProperties, ImageSize) == 0, "Offset mismatch for FSpatialMetricSampleImageProperties::ImageSize");
static_assert(offsetof(FSpatialMetricSampleImageProperties, MinWorldUnitsPerPixel) == 4, "Offset mismatch for FSpatialMetricSampleImageProperties::MinWorldUnitsPerPixel");
static_assert(offsetof(FSpatialMetricSampleImageProperties, WorldColorSaturation) == 8, "Offset mismatch for FSpatialMetricSampleImageProperties::WorldColorSaturation");
static_assert(offsetof(FSpatialMetricSampleImageProperties, SpatialValueAlpha) == 12, "Offset mismatch for FSpatialMetricSampleImageProperties::SpatialValueAlpha");

// /Script/SpatialMetricsCore.SpatialMetricsAddMetricRequest
// Kind: ScriptStruct; super: SpatialMetricsConnectorClassRequest
struct FSpatialMetricsAddMetricRequest
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Class[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSpatialMetricsAddMetricRequest, Class) == 16, "Offset mismatch for FSpatialMetricsAddMetricRequest::Class");

// /Script/SpatialMetricsCore.SpatialMetricsAddMetricResponse
// Kind: ScriptStruct; super: SpatialMetricsConnectorBoolResponse
struct FSpatialMetricsAddMetricResponse
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t bResult; // 0x0038 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FSpatialMetricsAddMetricResponse, bResult) == 56, "Offset mismatch for FSpatialMetricsAddMetricResponse::bResult");

// /Script/SpatialMetricsCore.SpatialMetricsAvailableLocationMetricsRequest
// Kind: ScriptStruct; super: SpatialMetricsConnectorRequest
struct FSpatialMetricsAvailableLocationMetricsRequest
{
public:
    std::uint8_t MessageId[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSpatialMetricsAvailableLocationMetricsRequest, MessageId) == 0, "Offset mismatch for FSpatialMetricsAvailableLocationMetricsRequest::MessageId");

// /Script/SpatialMetricsCore.SpatialMetricsAvailableLocationMetricsResponse
// Kind: ScriptStruct; super: SpatialMetricsConnectorResponse
struct FSpatialMetricsAvailableLocationMetricsResponse
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    TArray<void*> Descriptors; // 0x0038 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSpatialMetricsAvailableLocationMetricsResponse, Descriptors) == 56, "Offset mismatch for FSpatialMetricsAvailableLocationMetricsResponse::Descriptors");

// /Script/SpatialMetricsCore.SpatialMetricsAvailableMetricsRequest
// Kind: ScriptStruct; super: SpatialMetricsConnectorRequest
struct FSpatialMetricsAvailableMetricsRequest
{
public:
    std::uint8_t MessageId[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSpatialMetricsAvailableMetricsRequest, MessageId) == 0, "Offset mismatch for FSpatialMetricsAvailableMetricsRequest::MessageId");

// /Script/SpatialMetricsCore.SpatialMetricsAvailableMetricsResponse
// Kind: ScriptStruct; super: SpatialMetricsConnectorResponse
struct FSpatialMetricsAvailableMetricsResponse
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t DescriptorSet[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSpatialMetricsAvailableMetricsResponse, DescriptorSet) == 56, "Offset mismatch for FSpatialMetricsAvailableMetricsResponse::DescriptorSet");

// /Script/SpatialMetricsCore.SpatialMetricsAvailableQuantityMetricsRequest
// Kind: ScriptStruct; super: SpatialMetricsConnectorRequest
struct FSpatialMetricsAvailableQuantityMetricsRequest
{
public:
    std::uint8_t MessageId[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSpatialMetricsAvailableQuantityMetricsRequest, MessageId) == 0, "Offset mismatch for FSpatialMetricsAvailableQuantityMetricsRequest::MessageId");

// /Script/SpatialMetricsCore.SpatialMetricsAvailableQuantityMetricsResponse
// Kind: ScriptStruct; super: SpatialMetricsConnectorResponse
struct FSpatialMetricsAvailableQuantityMetricsResponse
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    TArray<void*> Descriptors; // 0x0038 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSpatialMetricsAvailableQuantityMetricsResponse, Descriptors) == 56, "Offset mismatch for FSpatialMetricsAvailableQuantityMetricsResponse::Descriptors");

// /Script/SpatialMetricsCore.SpatialMetricsConnectorBoolRequest
// Kind: ScriptStruct; super: SpatialMetricsConnectorRequest
struct FSpatialMetricsConnectorBoolRequest
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t bValue; // 0x0010 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FSpatialMetricsConnectorBoolRequest, bValue) == 16, "Offset mismatch for FSpatialMetricsConnectorBoolRequest::bValue");

// /Script/SpatialMetricsCore.SpatialMetricsConnectorBoolResponse
// Kind: ScriptStruct; super: SpatialMetricsConnectorResponse
struct FSpatialMetricsConnectorBoolResponse
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t bResult; // 0x0038 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FSpatialMetricsConnectorBoolResponse, bResult) == 56, "Offset mismatch for FSpatialMetricsConnectorBoolResponse::bResult");

// /Script/SpatialMetricsCore.SpatialMetricsConnectorClassRequest
// Kind: ScriptStruct; super: SpatialMetricsConnectorRequest
struct FSpatialMetricsConnectorClassRequest
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Class[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSpatialMetricsConnectorClassRequest, Class) == 16, "Offset mismatch for FSpatialMetricsConnectorClassRequest::Class");

// /Script/SpatialMetricsCore.SpatialMetricsConnectorClientPing
// Kind: ScriptStruct; super: SpatialMetricsConnectorRequest
struct FSpatialMetricsConnectorClientPing
{
public:
    std::uint8_t MessageId[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSpatialMetricsConnectorClientPing, MessageId) == 0, "Offset mismatch for FSpatialMetricsConnectorClientPing::MessageId");

// /Script/SpatialMetricsCore.SpatialMetricsConnectorClientPong
// Kind: ScriptStruct; super: SpatialMetricsConnectorResponse
struct FSpatialMetricsConnectorClientPong
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t ServerID[0x10]; // 0x0038 (Size: 0x10, Type: StructProperty)
    std::uint8_t ServerInstanceId[0x10]; // 0x0048 (Size: 0x10, Type: StructProperty)
    FString DeviceName; // 0x0058 (Size: 0x10, Type: StrProperty)
    FString PlatformName; // 0x0068 (Size: 0x10, Type: StrProperty)
    FString CurrentLevel; // 0x0078 (Size: 0x10, Type: StrProperty)
    FString InstanceType; // 0x0088 (Size: 0x10, Type: StrProperty)
    std::uint8_t PlayerViewPoint[0x38]; // 0x0098 (Size: 0x38, Type: OptionalProperty)
    TMap<void*, void*> MetaData; // 0x00D0 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FSpatialMetricsConnectorClientPong, ServerID) == 56, "Offset mismatch for FSpatialMetricsConnectorClientPong::ServerID");
static_assert(offsetof(FSpatialMetricsConnectorClientPong, ServerInstanceId) == 72, "Offset mismatch for FSpatialMetricsConnectorClientPong::ServerInstanceId");
static_assert(offsetof(FSpatialMetricsConnectorClientPong, DeviceName) == 88, "Offset mismatch for FSpatialMetricsConnectorClientPong::DeviceName");
static_assert(offsetof(FSpatialMetricsConnectorClientPong, PlatformName) == 104, "Offset mismatch for FSpatialMetricsConnectorClientPong::PlatformName");
static_assert(offsetof(FSpatialMetricsConnectorClientPong, CurrentLevel) == 120, "Offset mismatch for FSpatialMetricsConnectorClientPong::CurrentLevel");
static_assert(offsetof(FSpatialMetricsConnectorClientPong, InstanceType) == 136, "Offset mismatch for FSpatialMetricsConnectorClientPong::InstanceType");
static_assert(offsetof(FSpatialMetricsConnectorClientPong, PlayerViewPoint) == 152, "Offset mismatch for FSpatialMetricsConnectorClientPong::PlayerViewPoint");
static_assert(offsetof(FSpatialMetricsConnectorClientPong, MetaData) == 208, "Offset mismatch for FSpatialMetricsConnectorClientPong::MetaData");

// /Script/SpatialMetricsCore.SpatialMetricsConnectorMessage
// Kind: ScriptStruct; super: none
struct FSpatialMetricsConnectorMessage
{
public:
    std::uint8_t MessageId[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSpatialMetricsConnectorMessage, MessageId) == 0, "Offset mismatch for FSpatialMetricsConnectorMessage::MessageId");

// /Script/SpatialMetricsCore.SpatialMetricsConnectorPlayerViewPoint
// Kind: ScriptStruct; super: none
struct FSpatialMetricsConnectorPlayerViewPoint
{
public:
    std::uint8_t Location[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t Rotation[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSpatialMetricsConnectorPlayerViewPoint, Location) == 0, "Offset mismatch for FSpatialMetricsConnectorPlayerViewPoint::Location");
static_assert(offsetof(FSpatialMetricsConnectorPlayerViewPoint, Rotation) == 24, "Offset mismatch for FSpatialMetricsConnectorPlayerViewPoint::Rotation");

// /Script/SpatialMetricsCore.SpatialMetricsConnectorRequest
// Kind: ScriptStruct; super: SpatialMetricsConnectorMessage
struct FSpatialMetricsConnectorRequest
{
public:
    std::uint8_t MessageId[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSpatialMetricsConnectorRequest, MessageId) == 0, "Offset mismatch for FSpatialMetricsConnectorRequest::MessageId");

// /Script/SpatialMetricsCore.SpatialMetricsConnectorResponse
// Kind: ScriptStruct; super: SpatialMetricsConnectorMessage
struct FSpatialMetricsConnectorResponse
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t RequestMessageId[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t ResponseCode; // 0x0020 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0021
    FText Reason; // 0x0028 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(FSpatialMetricsConnectorResponse, RequestMessageId) == 16, "Offset mismatch for FSpatialMetricsConnectorResponse::RequestMessageId");
static_assert(offsetof(FSpatialMetricsConnectorResponse, ResponseCode) == 32, "Offset mismatch for FSpatialMetricsConnectorResponse::ResponseCode");
static_assert(offsetof(FSpatialMetricsConnectorResponse, Reason) == 40, "Offset mismatch for FSpatialMetricsConnectorResponse::Reason");

// /Script/SpatialMetricsCore.SpatialMetricsEnableSamplerRequest
// Kind: ScriptStruct; super: SpatialMetricsConnectorBoolRequest
struct FSpatialMetricsEnableSamplerRequest
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t bValue; // 0x0010 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FSpatialMetricsEnableSamplerRequest, bValue) == 16, "Offset mismatch for FSpatialMetricsEnableSamplerRequest::bValue");

// /Script/SpatialMetricsCore.SpatialMetricsEnableSamplerResponse
// Kind: ScriptStruct; super: SpatialMetricsConnectorBoolResponse
struct FSpatialMetricsEnableSamplerResponse
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t bResult; // 0x0038 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FSpatialMetricsEnableSamplerResponse, bResult) == 56, "Offset mismatch for FSpatialMetricsEnableSamplerResponse::bResult");

// /Script/SpatialMetricsCore.SpatialMetricsGridLocationMetricDescriptor
// Kind: ScriptStruct; super: none
struct FSpatialMetricsGridLocationMetricDescriptor
{
public:
    std::uint8_t MetricClass[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t MetricProperties[0x48]; // 0x0018 (Size: 0x48, Type: StructProperty)
    std::int32_t CellSize; // 0x0060 (Size: 0x4, Type: IntProperty)
    std::uint8_t CellOriginPoint; // 0x0064 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0065
    std::uint8_t GridOrigin[0x1]; // 0x0068 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSpatialMetricsGridLocationMetricDescriptor, MetricClass) == 0, "Offset mismatch for FSpatialMetricsGridLocationMetricDescriptor::MetricClass");
static_assert(offsetof(FSpatialMetricsGridLocationMetricDescriptor, MetricProperties) == 24, "Offset mismatch for FSpatialMetricsGridLocationMetricDescriptor::MetricProperties");
static_assert(offsetof(FSpatialMetricsGridLocationMetricDescriptor, CellSize) == 96, "Offset mismatch for FSpatialMetricsGridLocationMetricDescriptor::CellSize");
static_assert(offsetof(FSpatialMetricsGridLocationMetricDescriptor, CellOriginPoint) == 100, "Offset mismatch for FSpatialMetricsGridLocationMetricDescriptor::CellOriginPoint");
static_assert(offsetof(FSpatialMetricsGridLocationMetricDescriptor, GridOrigin) == 104, "Offset mismatch for FSpatialMetricsGridLocationMetricDescriptor::GridOrigin");

// /Script/SpatialMetricsCore.SpatialMetricsGridLocationSample
// Kind: ScriptStruct; super: none
struct FSpatialMetricsGridLocationSample
{
public:
    TArray<void*> Values; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t MetricClass[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    std::uint8_t MetricProperties[0x48]; // 0x0028 (Size: 0x48, Type: StructProperty)
    std::int32_t CellSize; // 0x0070 (Size: 0x4, Type: IntProperty)
    std::uint8_t CellOriginPoint; // 0x0074 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0075
    std::uint8_t GridOrigin[0x1]; // 0x0078 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSpatialMetricsGridLocationSample, Values) == 0, "Offset mismatch for FSpatialMetricsGridLocationSample::Values");
static_assert(offsetof(FSpatialMetricsGridLocationSample, MetricClass) == 16, "Offset mismatch for FSpatialMetricsGridLocationSample::MetricClass");
static_assert(offsetof(FSpatialMetricsGridLocationSample, MetricProperties) == 40, "Offset mismatch for FSpatialMetricsGridLocationSample::MetricProperties");
static_assert(offsetof(FSpatialMetricsGridLocationSample, CellSize) == 112, "Offset mismatch for FSpatialMetricsGridLocationSample::CellSize");
static_assert(offsetof(FSpatialMetricsGridLocationSample, CellOriginPoint) == 116, "Offset mismatch for FSpatialMetricsGridLocationSample::CellOriginPoint");
static_assert(offsetof(FSpatialMetricsGridLocationSample, GridOrigin) == 120, "Offset mismatch for FSpatialMetricsGridLocationSample::GridOrigin");

// /Script/SpatialMetricsCore.SpatialMetricsHeatmapColorProperties
// Kind: ScriptStruct; super: none
struct FSpatialMetricsHeatmapColorProperties
{
public:
    std::uint8_t LowValueColor[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::uint8_t MidpointValueColor[0x4]; // 0x0004 (Size: 0x4, Type: StructProperty)
    std::uint8_t HighValueColor[0x4]; // 0x0008 (Size: 0x4, Type: StructProperty)
    std::uint8_t MaxValueColor[0x4]; // 0x000C (Size: 0x4, Type: StructProperty)
    float MinAlpha; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float MaxAlpha; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float AlphaFactor; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float LowpointRatio; // 0x001C (Size: 0x4, Type: FloatProperty)
    float MidpointRatio; // 0x0020 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FSpatialMetricsHeatmapColorProperties, LowValueColor) == 0, "Offset mismatch for FSpatialMetricsHeatmapColorProperties::LowValueColor");
static_assert(offsetof(FSpatialMetricsHeatmapColorProperties, MidpointValueColor) == 4, "Offset mismatch for FSpatialMetricsHeatmapColorProperties::MidpointValueColor");
static_assert(offsetof(FSpatialMetricsHeatmapColorProperties, HighValueColor) == 8, "Offset mismatch for FSpatialMetricsHeatmapColorProperties::HighValueColor");
static_assert(offsetof(FSpatialMetricsHeatmapColorProperties, MaxValueColor) == 12, "Offset mismatch for FSpatialMetricsHeatmapColorProperties::MaxValueColor");
static_assert(offsetof(FSpatialMetricsHeatmapColorProperties, MinAlpha) == 16, "Offset mismatch for FSpatialMetricsHeatmapColorProperties::MinAlpha");
static_assert(offsetof(FSpatialMetricsHeatmapColorProperties, MaxAlpha) == 20, "Offset mismatch for FSpatialMetricsHeatmapColorProperties::MaxAlpha");
static_assert(offsetof(FSpatialMetricsHeatmapColorProperties, AlphaFactor) == 24, "Offset mismatch for FSpatialMetricsHeatmapColorProperties::AlphaFactor");
static_assert(offsetof(FSpatialMetricsHeatmapColorProperties, LowpointRatio) == 28, "Offset mismatch for FSpatialMetricsHeatmapColorProperties::LowpointRatio");
static_assert(offsetof(FSpatialMetricsHeatmapColorProperties, MidpointRatio) == 32, "Offset mismatch for FSpatialMetricsHeatmapColorProperties::MidpointRatio");

// /Script/SpatialMetricsCore.SpatialMetricsIsSamplerEnabledRequest
// Kind: ScriptStruct; super: SpatialMetricsConnectorRequest
struct FSpatialMetricsIsSamplerEnabledRequest
{
public:
    std::uint8_t MessageId[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSpatialMetricsIsSamplerEnabledRequest, MessageId) == 0, "Offset mismatch for FSpatialMetricsIsSamplerEnabledRequest::MessageId");

// /Script/SpatialMetricsCore.SpatialMetricsIsSamplerEnabledResponse
// Kind: ScriptStruct; super: SpatialMetricsConnectorBoolResponse
struct FSpatialMetricsIsSamplerEnabledResponse
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t bResult; // 0x0038 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FSpatialMetricsIsSamplerEnabledResponse, bResult) == 56, "Offset mismatch for FSpatialMetricsIsSamplerEnabledResponse::bResult");

// /Script/SpatialMetricsCore.SpatialMetricsMetricDescriptorSet
// Kind: ScriptStruct; super: none
struct FSpatialMetricsMetricDescriptorSet
{
public:
    TArray<void*> LocationDescriptors; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> QuantityDescriptors; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSpatialMetricsMetricDescriptorSet, LocationDescriptors) == 0, "Offset mismatch for FSpatialMetricsMetricDescriptorSet::LocationDescriptors");
static_assert(offsetof(FSpatialMetricsMetricDescriptorSet, QuantityDescriptors) == 16, "Offset mismatch for FSpatialMetricsMetricDescriptorSet::QuantityDescriptors");

// /Script/SpatialMetricsCore.SpatialMetricsMetricProperties
// Kind: ScriptStruct; super: none
struct FSpatialMetricsMetricProperties
{
public:
    std::uint8_t Label[0x10]; // 0x0000 (Size: 0x10, Type: TextProperty)
    std::uint8_t Category[0x10]; // 0x0010 (Size: 0x10, Type: TextProperty)
    std::uint8_t Description[0x10]; // 0x0020 (Size: 0x10, Type: TextProperty)
    std::uint8_t ShortDescription[0x10]; // 0x0030 (Size: 0x10, Type: TextProperty)
    std::uint8_t Unit; // 0x0040 (Size: 0x1, Type: EnumProperty)
    std::uint8_t DefaultDisplayUnit; // 0x0041 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Target; // 0x0042 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FSpatialMetricsMetricProperties, Label) == 0, "Offset mismatch for FSpatialMetricsMetricProperties::Label");
static_assert(offsetof(FSpatialMetricsMetricProperties, Category) == 16, "Offset mismatch for FSpatialMetricsMetricProperties::Category");
static_assert(offsetof(FSpatialMetricsMetricProperties, Description) == 32, "Offset mismatch for FSpatialMetricsMetricProperties::Description");
static_assert(offsetof(FSpatialMetricsMetricProperties, ShortDescription) == 48, "Offset mismatch for FSpatialMetricsMetricProperties::ShortDescription");
static_assert(offsetof(FSpatialMetricsMetricProperties, Unit) == 64, "Offset mismatch for FSpatialMetricsMetricProperties::Unit");
static_assert(offsetof(FSpatialMetricsMetricProperties, DefaultDisplayUnit) == 65, "Offset mismatch for FSpatialMetricsMetricProperties::DefaultDisplayUnit");
static_assert(offsetof(FSpatialMetricsMetricProperties, Target) == 66, "Offset mismatch for FSpatialMetricsMetricProperties::Target");

// /Script/SpatialMetricsCore.SpatialMetricsMetricSet
// Kind: ScriptStruct; super: none
struct FSpatialMetricsMetricSet
{
public:
    std::uint8_t LocationMetric[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    TArray<void*> QuantityMetrics; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSpatialMetricsMetricSet, LocationMetric) == 0, "Offset mismatch for FSpatialMetricsMetricSet::LocationMetric");
static_assert(offsetof(FSpatialMetricsMetricSet, QuantityMetrics) == 24, "Offset mismatch for FSpatialMetricsMetricSet::QuantityMetrics");

// /Script/SpatialMetricsCore.SpatialMetricsMinimalGridLocationSample
// Kind: ScriptStruct; super: none
struct FSpatialMetricsMinimalGridLocationSample
{
public:
    TArray<void*> Values; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t MetricClass[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    std::int32_t CellSize; // 0x0028 (Size: 0x4, Type: IntProperty)
    std::uint8_t CellOriginPoint; // 0x002C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x002D
    std::uint8_t GridOrigin[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSpatialMetricsMinimalGridLocationSample, Values) == 0, "Offset mismatch for FSpatialMetricsMinimalGridLocationSample::Values");
static_assert(offsetof(FSpatialMetricsMinimalGridLocationSample, MetricClass) == 16, "Offset mismatch for FSpatialMetricsMinimalGridLocationSample::MetricClass");
static_assert(offsetof(FSpatialMetricsMinimalGridLocationSample, CellSize) == 40, "Offset mismatch for FSpatialMetricsMinimalGridLocationSample::CellSize");
static_assert(offsetof(FSpatialMetricsMinimalGridLocationSample, CellOriginPoint) == 44, "Offset mismatch for FSpatialMetricsMinimalGridLocationSample::CellOriginPoint");
static_assert(offsetof(FSpatialMetricsMinimalGridLocationSample, GridOrigin) == 48, "Offset mismatch for FSpatialMetricsMinimalGridLocationSample::GridOrigin");

// /Script/SpatialMetricsCore.SpatialMetricsMinimalQuantitySample
// Kind: ScriptStruct; super: none
struct FSpatialMetricsMinimalQuantitySample
{
public:
    TArray<void*> Values; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t MetricClass[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSpatialMetricsMinimalQuantitySample, Values) == 0, "Offset mismatch for FSpatialMetricsMinimalQuantitySample::Values");
static_assert(offsetof(FSpatialMetricsMinimalQuantitySample, MetricClass) == 16, "Offset mismatch for FSpatialMetricsMinimalQuantitySample::MetricClass");

// /Script/SpatialMetricsCore.SpatialMetricsMinimalSampleSet
// Kind: ScriptStruct; super: none
struct FSpatialMetricsMinimalSampleSet
{
public:
    std::uint8_t LocationSample[0x40]; // 0x0000 (Size: 0x40, Type: StructProperty)
    TArray<void*> QuantitySamples; // 0x0040 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSpatialMetricsMinimalSampleSet, LocationSample) == 0, "Offset mismatch for FSpatialMetricsMinimalSampleSet::LocationSample");
static_assert(offsetof(FSpatialMetricsMinimalSampleSet, QuantitySamples) == 64, "Offset mismatch for FSpatialMetricsMinimalSampleSet::QuantitySamples");

// /Script/SpatialMetricsCore.SpatialMetricsQuantityGridView
// Kind: ScriptStruct; super: none
struct FSpatialMetricsQuantityGridView
{
public:
    TArray<void*> LocationValues; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> QuantityValues; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    std::int32_t CellSize; // 0x0020 (Size: 0x4, Type: IntProperty)
    std::uint8_t ReductionMethod; // 0x0024 (Size: 0x1, Type: EnumProperty)
    std::uint8_t QuantityUnit; // 0x0025 (Size: 0x1, Type: EnumProperty)
    std::uint8_t CellOriginPoint; // 0x0026 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x1]; // 0x0027
    std::uint8_t GridOrigin[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSpatialMetricsQuantityGridView, LocationValues) == 0, "Offset mismatch for FSpatialMetricsQuantityGridView::LocationValues");
static_assert(offsetof(FSpatialMetricsQuantityGridView, QuantityValues) == 16, "Offset mismatch for FSpatialMetricsQuantityGridView::QuantityValues");
static_assert(offsetof(FSpatialMetricsQuantityGridView, CellSize) == 32, "Offset mismatch for FSpatialMetricsQuantityGridView::CellSize");
static_assert(offsetof(FSpatialMetricsQuantityGridView, ReductionMethod) == 36, "Offset mismatch for FSpatialMetricsQuantityGridView::ReductionMethod");
static_assert(offsetof(FSpatialMetricsQuantityGridView, QuantityUnit) == 37, "Offset mismatch for FSpatialMetricsQuantityGridView::QuantityUnit");
static_assert(offsetof(FSpatialMetricsQuantityGridView, CellOriginPoint) == 38, "Offset mismatch for FSpatialMetricsQuantityGridView::CellOriginPoint");
static_assert(offsetof(FSpatialMetricsQuantityGridView, GridOrigin) == 40, "Offset mismatch for FSpatialMetricsQuantityGridView::GridOrigin");

// /Script/SpatialMetricsCore.SpatialMetricsQuantityMetricDescriptor
// Kind: ScriptStruct; super: none
struct FSpatialMetricsQuantityMetricDescriptor
{
public:
    std::uint8_t MetricClass[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t MetricProperties[0x48]; // 0x0018 (Size: 0x48, Type: StructProperty)
    std::uint8_t QuantityProperties[0x1]; // 0x0060 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSpatialMetricsQuantityMetricDescriptor, MetricClass) == 0, "Offset mismatch for FSpatialMetricsQuantityMetricDescriptor::MetricClass");
static_assert(offsetof(FSpatialMetricsQuantityMetricDescriptor, MetricProperties) == 24, "Offset mismatch for FSpatialMetricsQuantityMetricDescriptor::MetricProperties");
static_assert(offsetof(FSpatialMetricsQuantityMetricDescriptor, QuantityProperties) == 96, "Offset mismatch for FSpatialMetricsQuantityMetricDescriptor::QuantityProperties");

// /Script/SpatialMetricsCore.SpatialMetricsQuantityProperties
// Kind: ScriptStruct; super: none
struct FSpatialMetricsQuantityProperties
{
public:
    std::int32_t MinValue; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxValue; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t ThresholdValue; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::uint8_t ValuePreference; // 0x000C (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FSpatialMetricsQuantityProperties, MinValue) == 0, "Offset mismatch for FSpatialMetricsQuantityProperties::MinValue");
static_assert(offsetof(FSpatialMetricsQuantityProperties, MaxValue) == 4, "Offset mismatch for FSpatialMetricsQuantityProperties::MaxValue");
static_assert(offsetof(FSpatialMetricsQuantityProperties, ThresholdValue) == 8, "Offset mismatch for FSpatialMetricsQuantityProperties::ThresholdValue");
static_assert(offsetof(FSpatialMetricsQuantityProperties, ValuePreference) == 12, "Offset mismatch for FSpatialMetricsQuantityProperties::ValuePreference");

// /Script/SpatialMetricsCore.SpatialMetricsQuantitySample
// Kind: ScriptStruct; super: none
struct FSpatialMetricsQuantitySample
{
public:
    TArray<void*> Values; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t MetricClass[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    std::uint8_t MetricProperties[0x48]; // 0x0028 (Size: 0x48, Type: StructProperty)
    std::uint8_t QuantityProperties[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSpatialMetricsQuantitySample, Values) == 0, "Offset mismatch for FSpatialMetricsQuantitySample::Values");
static_assert(offsetof(FSpatialMetricsQuantitySample, MetricClass) == 16, "Offset mismatch for FSpatialMetricsQuantitySample::MetricClass");
static_assert(offsetof(FSpatialMetricsQuantitySample, MetricProperties) == 40, "Offset mismatch for FSpatialMetricsQuantitySample::MetricProperties");
static_assert(offsetof(FSpatialMetricsQuantitySample, QuantityProperties) == 112, "Offset mismatch for FSpatialMetricsQuantitySample::QuantityProperties");

// /Script/SpatialMetricsCore.SpatialMetricsRemoveMetricRequest
// Kind: ScriptStruct; super: SpatialMetricsConnectorClassRequest
struct FSpatialMetricsRemoveMetricRequest
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Class[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSpatialMetricsRemoveMetricRequest, Class) == 16, "Offset mismatch for FSpatialMetricsRemoveMetricRequest::Class");

// /Script/SpatialMetricsCore.SpatialMetricsRemoveMetricResponse
// Kind: ScriptStruct; super: SpatialMetricsConnectorBoolResponse
struct FSpatialMetricsRemoveMetricResponse
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t bResult; // 0x0038 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FSpatialMetricsRemoveMetricResponse, bResult) == 56, "Offset mismatch for FSpatialMetricsRemoveMetricResponse::bResult");

// /Script/SpatialMetricsCore.SpatialMetricsSampleCollector
// Kind: ScriptStruct; super: none
struct FSpatialMetricsSampleCollector
{
public:
    std::uint8_t Sample[0x98]; // 0x0000 (Size: 0x98, Type: StructProperty)
    TMap<void*, void*> QuantityIndices; // 0x0098 (Size: 0x10, Type: MapProperty)
    std::int32_t ValueCapacity; // 0x00A8 (Size: 0x4, Type: IntProperty)
    std::int32_t WriteIndex; // 0x00AC (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FSpatialMetricsSampleCollector, Sample) == 0, "Offset mismatch for FSpatialMetricsSampleCollector::Sample");
static_assert(offsetof(FSpatialMetricsSampleCollector, QuantityIndices) == 152, "Offset mismatch for FSpatialMetricsSampleCollector::QuantityIndices");
static_assert(offsetof(FSpatialMetricsSampleCollector, ValueCapacity) == 168, "Offset mismatch for FSpatialMetricsSampleCollector::ValueCapacity");
static_assert(offsetof(FSpatialMetricsSampleCollector, WriteIndex) == 172, "Offset mismatch for FSpatialMetricsSampleCollector::WriteIndex");

// /Script/SpatialMetricsCore.SpatialMetricsSampleMetricsMinimalRequest
// Kind: ScriptStruct; super: SpatialMetricsConnectorRequest
struct FSpatialMetricsSampleMetricsMinimalRequest
{
public:
    std::uint8_t MessageId[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSpatialMetricsSampleMetricsMinimalRequest, MessageId) == 0, "Offset mismatch for FSpatialMetricsSampleMetricsMinimalRequest::MessageId");

// /Script/SpatialMetricsCore.SpatialMetricsSampleMetricsMinimalResponse
// Kind: ScriptStruct; super: SpatialMetricsConnectorResponse
struct FSpatialMetricsSampleMetricsMinimalResponse
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t Sample[0x50]; // 0x0038 (Size: 0x50, Type: StructProperty)
    std::uint8_t PlayerViewPoint[0x1]; // 0x0088 (Size: 0x1, Type: OptionalProperty)
};

static_assert(offsetof(FSpatialMetricsSampleMetricsMinimalResponse, Sample) == 56, "Offset mismatch for FSpatialMetricsSampleMetricsMinimalResponse::Sample");
static_assert(offsetof(FSpatialMetricsSampleMetricsMinimalResponse, PlayerViewPoint) == 136, "Offset mismatch for FSpatialMetricsSampleMetricsMinimalResponse::PlayerViewPoint");

// /Script/SpatialMetricsCore.SpatialMetricsSampleMetricsRequest
// Kind: ScriptStruct; super: SpatialMetricsConnectorRequest
struct FSpatialMetricsSampleMetricsRequest
{
public:
    std::uint8_t MessageId[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSpatialMetricsSampleMetricsRequest, MessageId) == 0, "Offset mismatch for FSpatialMetricsSampleMetricsRequest::MessageId");

// /Script/SpatialMetricsCore.SpatialMetricsSampleMetricsResponse
// Kind: ScriptStruct; super: SpatialMetricsConnectorResponse
struct FSpatialMetricsSampleMetricsResponse
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t Sample[0x98]; // 0x0038 (Size: 0x98, Type: StructProperty)
    std::uint8_t PlayerViewPoint[0x1]; // 0x00D0 (Size: 0x1, Type: OptionalProperty)
};

static_assert(offsetof(FSpatialMetricsSampleMetricsResponse, Sample) == 56, "Offset mismatch for FSpatialMetricsSampleMetricsResponse::Sample");
static_assert(offsetof(FSpatialMetricsSampleMetricsResponse, PlayerViewPoint) == 208, "Offset mismatch for FSpatialMetricsSampleMetricsResponse::PlayerViewPoint");

// /Script/SpatialMetricsCore.SpatialMetricsSampleSet
// Kind: ScriptStruct; super: none
struct FSpatialMetricsSampleSet
{
public:
    std::uint8_t LocationSample[0x88]; // 0x0000 (Size: 0x88, Type: StructProperty)
    TArray<void*> QuantitySamples; // 0x0088 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSpatialMetricsSampleSet, LocationSample) == 0, "Offset mismatch for FSpatialMetricsSampleSet::LocationSample");
static_assert(offsetof(FSpatialMetricsSampleSet, QuantitySamples) == 136, "Offset mismatch for FSpatialMetricsSampleSet::QuantitySamples");

// /Script/SpatialMetricsCore.SpatialMetricsSampler
// Kind: ScriptStruct; super: none
struct FSpatialMetricsSampler
{
public:
    std::uint8_t Metrics[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    void* LocationMetricClass; // 0x0020 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(FSpatialMetricsSampler, Metrics) == 0, "Offset mismatch for FSpatialMetricsSampler::Metrics");
static_assert(offsetof(FSpatialMetricsSampler, LocationMetricClass) == 32, "Offset mismatch for FSpatialMetricsSampler::LocationMetricClass");

// /Script/SpatialMetricsCore.SpatialMetricsSessionData
// Kind: ScriptStruct; super: none
struct FSpatialMetricsSessionData
{
public:
    TArray<void*> Sources; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> MetaData; // 0x0010 (Size: 0x10, Type: MapProperty)
    std::uint8_t Timestamp[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSpatialMetricsSessionData, Sources) == 0, "Offset mismatch for FSpatialMetricsSessionData::Sources");
static_assert(offsetof(FSpatialMetricsSessionData, MetaData) == 16, "Offset mismatch for FSpatialMetricsSessionData::MetaData");
static_assert(offsetof(FSpatialMetricsSessionData, Timestamp) == 32, "Offset mismatch for FSpatialMetricsSessionData::Timestamp");

// /Script/SpatialMetricsCore.SpatialMetricsSessionSourceData
// Kind: ScriptStruct; super: none
struct FSpatialMetricsSessionSourceData
{
public:
    std::uint8_t Label[0x10]; // 0x0000 (Size: 0x10, Type: TextProperty)
    std::uint8_t Sample[0x98]; // 0x0010 (Size: 0x98, Type: StructProperty)
    TMap<void*, void*> MetaData; // 0x00A8 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FSpatialMetricsSessionSourceData, Label) == 0, "Offset mismatch for FSpatialMetricsSessionSourceData::Label");
static_assert(offsetof(FSpatialMetricsSessionSourceData, Sample) == 16, "Offset mismatch for FSpatialMetricsSessionSourceData::Sample");
static_assert(offsetof(FSpatialMetricsSessionSourceData, MetaData) == 168, "Offset mismatch for FSpatialMetricsSessionSourceData::MetaData");

// /Script/SpatialMetricsCore.SpatialMetricsSetMetricsRequest
// Kind: ScriptStruct; super: SpatialMetricsConnectorRequest
struct FSpatialMetricsSetMetricsRequest
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t MetricSet[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSpatialMetricsSetMetricsRequest, MetricSet) == 16, "Offset mismatch for FSpatialMetricsSetMetricsRequest::MetricSet");

// /Script/SpatialMetricsCore.SpatialMetricsSetMetricsResponse
// Kind: ScriptStruct; super: SpatialMetricsConnectorResponse
struct FSpatialMetricsSetMetricsResponse
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t MetricSet[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSpatialMetricsSetMetricsResponse, MetricSet) == 56, "Offset mismatch for FSpatialMetricsSetMetricsResponse::MetricSet");

// /Script/SpatialMetricsCore.SpatialValue
// Kind: ScriptStruct; super: none
struct FSpatialValue
{
public:
    std::uint8_t Location[0xC]; // 0x0000 (Size: 0xC, Type: StructProperty)
    std::int32_t Value; // 0x000C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FSpatialValue, Location) == 0, "Offset mismatch for FSpatialValue::Location");
static_assert(offsetof(FSpatialValue, Value) == 12, "Offset mismatch for FSpatialValue::Value");

// /Script/SpatialMetricsCore.SpatialValueStats
// Kind: ScriptStruct; super: none
struct FSpatialValueStats
{
public:
    std::int32_t NumValues; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t NumValuesOutsideThreshold; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t MedianValue; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::int32_t MeanValue; // 0x000C (Size: 0x4, Type: IntProperty)
    std::int32_t MinValue; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxValue; // 0x0014 (Size: 0x4, Type: IntProperty)
    std::int64_t SumValue; // 0x0018 (Size: 0x8, Type: Int64Property)
};

static_assert(offsetof(FSpatialValueStats, NumValues) == 0, "Offset mismatch for FSpatialValueStats::NumValues");
static_assert(offsetof(FSpatialValueStats, NumValuesOutsideThreshold) == 4, "Offset mismatch for FSpatialValueStats::NumValuesOutsideThreshold");
static_assert(offsetof(FSpatialValueStats, MedianValue) == 8, "Offset mismatch for FSpatialValueStats::MedianValue");
static_assert(offsetof(FSpatialValueStats, MeanValue) == 12, "Offset mismatch for FSpatialValueStats::MeanValue");
static_assert(offsetof(FSpatialValueStats, MinValue) == 16, "Offset mismatch for FSpatialValueStats::MinValue");
static_assert(offsetof(FSpatialValueStats, MaxValue) == 20, "Offset mismatch for FSpatialValueStats::MaxValue");
static_assert(offsetof(FSpatialValueStats, SumValue) == 24, "Offset mismatch for FSpatialValueStats::SumValue");

// /Script/SpatialMetricsCore.SpatialMetricBase
// Kind: Class; super: SpatialMetricInterface
class USpatialMetricBase
{
public:
    std::uint8_t Pad_0000[0x1068]; // 0x0000
    float SamplingFrequencyInSeconds; // 0x1068 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(USpatialMetricBase, SamplingFrequencyInSeconds) == 4200, "Offset mismatch for USpatialMetricBase::SamplingFrequencyInSeconds");

// /Script/SpatialMetricsCore.SpatialMetricInterface
// Kind: Class; super: WorldMetricInterface
class USpatialMetricInterface
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Properties[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USpatialMetricInterface, Properties) == 40, "Offset mismatch for USpatialMetricInterface::Properties");

// /Script/SpatialMetricsCore.SpatialMetricsActorCategorizer
// Kind: Class; super: WorldMetricsExtension
class USpatialMetricsActorCategorizer
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SpatialMetricsCore.SpatialMetricsActorIndexer
// Kind: Class; super: WorldMetricsExtension
class USpatialMetricsActorIndexer
{
public:
    std::uint8_t Pad_0000[0x160]; // 0x0000
    std::int32_t IndexCacheSize; // 0x0160 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(USpatialMetricsActorIndexer, IndexCacheSize) == 352, "Offset mismatch for USpatialMetricsActorIndexer::IndexCacheSize");

// /Script/SpatialMetricsCore.SpatialMetricsActorIndexerSubscriber
// Kind: Class; super: Interface
class USpatialMetricsActorIndexerSubscriber
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SpatialMetricsCore.SpatialMetricsContextInterface
// Kind: Class; super: Interface
class USpatialMetricsContextInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SpatialMetricsCore.SpatialMetricsEditorContext
// Kind: Class; super: WorldMetricsExtension
class USpatialMetricsEditorContext
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::int32_t SpatialPrecision; // 0x0030 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(USpatialMetricsEditorContext, SpatialPrecision) == 48, "Offset mismatch for USpatialMetricsEditorContext::SpatialPrecision");

// /Script/SpatialMetricsCore.SpatialMetricsGridLocationMetric
// Kind: Class; super: SpatialMetricsMetric
class USpatialMetricsGridLocationMetric
{
public:
    std::uint8_t Pad_0000[0xC90]; // 0x0000
    std::int32_t CellSize; // 0x0C90 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(USpatialMetricsGridLocationMetric, CellSize) == 3216, "Offset mismatch for USpatialMetricsGridLocationMetric::CellSize");

// /Script/SpatialMetricsCore.SpatialMetricsLocationIndexer
// Kind: Class; super: WorldMetricsExtension
class USpatialMetricsLocationIndexer
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SpatialMetricsCore.SpatialMetricsLocationIndexerSubscriber
// Kind: Class; super: Interface
class USpatialMetricsLocationIndexerSubscriber
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SpatialMetricsCore.SpatialMetricsMetric
// Kind: Class; super: WorldMetricInterface
class USpatialMetricsMetric
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Properties[0x48]; // 0x0028 (Size: 0x48, Type: StructProperty)
    float SamplingFrequencyInSeconds; // 0x0070 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(USpatialMetricsMetric, Properties) == 40, "Offset mismatch for USpatialMetricsMetric::Properties");
static_assert(offsetof(USpatialMetricsMetric, SamplingFrequencyInSeconds) == 112, "Offset mismatch for USpatialMetricsMetric::SamplingFrequencyInSeconds");

// /Script/SpatialMetricsCore.SpatialMetricsPlayerContext
// Kind: Class; super: WorldMetricsExtension
class USpatialMetricsPlayerContext
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::int32_t SpatialPrecision; // 0x0038 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(USpatialMetricsPlayerContext, SpatialPrecision) == 56, "Offset mismatch for USpatialMetricsPlayerContext::SpatialPrecision");

// /Script/SpatialMetricsCore.SpatialMetricsQuantityMetric
// Kind: Class; super: SpatialMetricsMetric
class USpatialMetricsQuantityMetric
{
public:
    std::uint8_t Pad_0000[0x490]; // 0x0000
    std::uint8_t QuantityProperties[0x1]; // 0x0490 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USpatialMetricsQuantityMetric, QuantityProperties) == 1168, "Offset mismatch for USpatialMetricsQuantityMetric::QuantityProperties");

// /Script/SpatialMetricsCore.SpatialMetricsSceneCapture2D
// Kind: Class; super: SceneCapture2D
class USpatialMetricsSceneCapture2D
{
public:
    std::uint8_t Pad_0000[0x280]; // 0x0000
    void* CaptureComponent2D; // 0x0280 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USpatialMetricsSceneCapture2D, CaptureComponent2D) == 640, "Offset mismatch for USpatialMetricsSceneCapture2D::CaptureComponent2D");

// /Script/SpatialMetricsCore.SpatialMetricsSubsystem
// Kind: Class; super: WorldSubsystem
class USpatialMetricsSubsystem
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    TArray<void*> AllowedMetricClasses; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> BlockedMetricClasses; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Metrics[0x20]; // 0x0058 (Size: 0x20, Type: StructProperty)
    std::uint8_t Sampler[0x28]; // 0x0078 (Size: 0x28, Type: StructProperty)
    std::uint8_t bAutoCreateConnectorServer; // 0x00A0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(USpatialMetricsSubsystem, AllowedMetricClasses) == 56, "Offset mismatch for USpatialMetricsSubsystem::AllowedMetricClasses");
static_assert(offsetof(USpatialMetricsSubsystem, BlockedMetricClasses) == 72, "Offset mismatch for USpatialMetricsSubsystem::BlockedMetricClasses");
static_assert(offsetof(USpatialMetricsSubsystem, Metrics) == 88, "Offset mismatch for USpatialMetricsSubsystem::Metrics");
static_assert(offsetof(USpatialMetricsSubsystem, Sampler) == 120, "Offset mismatch for USpatialMetricsSubsystem::Sampler");
static_assert(offsetof(USpatialMetricsSubsystem, bAutoCreateConnectorServer) == 160, "Offset mismatch for USpatialMetricsSubsystem::bAutoCreateConnectorServer");

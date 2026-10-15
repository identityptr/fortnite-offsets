/**
 * decamp dumper generated SDK
 * Package: /Script/NNEDenoiser
 */
#pragma once
#include "Basic.h"

// /Script/NNEDenoiser.NNEDenoiserBaseMappingData
// Kind: ScriptStruct; super: TableRowBase
struct FNNEDenoiserBaseMappingData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::int32_t TensorIndex; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::int32_t TensorChannel; // 0x000C (Size: 0x4, Type: IntProperty)
    std::int32_t ResourceChannel; // 0x0010 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FNNEDenoiserBaseMappingData, TensorIndex) == 8, "Offset mismatch for FNNEDenoiserBaseMappingData::TensorIndex");
static_assert(offsetof(FNNEDenoiserBaseMappingData, TensorChannel) == 12, "Offset mismatch for FNNEDenoiserBaseMappingData::TensorChannel");
static_assert(offsetof(FNNEDenoiserBaseMappingData, ResourceChannel) == 16, "Offset mismatch for FNNEDenoiserBaseMappingData::ResourceChannel");

// /Script/NNEDenoiser.NNEDenoiserInputMappingData
// Kind: ScriptStruct; super: NNEDenoiserBaseMappingData
struct FNNEDenoiserInputMappingData
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    std::uint8_t Resource; // 0x0018 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FNNEDenoiserInputMappingData, Resource) == 24, "Offset mismatch for FNNEDenoiserInputMappingData::Resource");

// /Script/NNEDenoiser.NNEDenoiserOutputMappingData
// Kind: ScriptStruct; super: NNEDenoiserBaseMappingData
struct FNNEDenoiserOutputMappingData
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    std::uint8_t Resource; // 0x0018 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FNNEDenoiserOutputMappingData, Resource) == 24, "Offset mismatch for FNNEDenoiserOutputMappingData::Resource");

// /Script/NNEDenoiser.NNEDenoiserTemporalInputMappingData
// Kind: ScriptStruct; super: NNEDenoiserBaseMappingData
struct FNNEDenoiserTemporalInputMappingData
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    std::uint8_t Resource; // 0x0018 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0019
    std::int32_t FrameIndex; // 0x001C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FNNEDenoiserTemporalInputMappingData, Resource) == 24, "Offset mismatch for FNNEDenoiserTemporalInputMappingData::Resource");
static_assert(offsetof(FNNEDenoiserTemporalInputMappingData, FrameIndex) == 28, "Offset mismatch for FNNEDenoiserTemporalInputMappingData::FrameIndex");

// /Script/NNEDenoiser.NNEDenoiserTemporalOutputMappingData
// Kind: ScriptStruct; super: NNEDenoiserBaseMappingData
struct FNNEDenoiserTemporalOutputMappingData
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    std::uint8_t Resource; // 0x0018 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FNNEDenoiserTemporalOutputMappingData, Resource) == 24, "Offset mismatch for FNNEDenoiserTemporalOutputMappingData::Resource");

// /Script/NNEDenoiser.TilingConfig
// Kind: ScriptStruct; super: none
struct FTilingConfig
{
public:
    std::int32_t Alignment; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t Overlap; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxSize; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::int32_t MinSize; // 0x000C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FTilingConfig, Alignment) == 0, "Offset mismatch for FTilingConfig::Alignment");
static_assert(offsetof(FTilingConfig, Overlap) == 4, "Offset mismatch for FTilingConfig::Overlap");
static_assert(offsetof(FTilingConfig, MaxSize) == 8, "Offset mismatch for FTilingConfig::MaxSize");
static_assert(offsetof(FTilingConfig, MinSize) == 12, "Offset mismatch for FTilingConfig::MinSize");

// /Script/NNEDenoiser.NNEDenoiserAsset
// Kind: Class; super: DataAsset
class UNNEDenoiserAsset
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t ModelData[0x20]; // 0x0028 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t InputMapping[0x20]; // 0x0048 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t OutputMapping[0x20]; // 0x0068 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t TilingConfig[0x1]; // 0x0088 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UNNEDenoiserAsset, ModelData) == 40, "Offset mismatch for UNNEDenoiserAsset::ModelData");
static_assert(offsetof(UNNEDenoiserAsset, InputMapping) == 72, "Offset mismatch for UNNEDenoiserAsset::InputMapping");
static_assert(offsetof(UNNEDenoiserAsset, OutputMapping) == 104, "Offset mismatch for UNNEDenoiserAsset::OutputMapping");
static_assert(offsetof(UNNEDenoiserAsset, TilingConfig) == 136, "Offset mismatch for UNNEDenoiserAsset::TilingConfig");

// /Script/NNEDenoiser.NNEDenoiserSettings
// Kind: Class; super: DeveloperSettingsBackedByCVars
class UNNEDenoiserSettings
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TSoftObjectPtr<void> DenoiserAsset; // 0x0030 (Size: 0x28, Type: SoftObjectProperty)
    std::uint8_t Pad_0001[0x18]; // 0x0058
    std::int32_t MaximumTileSizeOverride; // 0x0070 (Size: 0x4, Type: IntProperty)
    std::uint8_t RuntimeType; // 0x0074 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0075
    FString RuntimeName; // 0x0078 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UNNEDenoiserSettings, DenoiserAsset) == 48, "Offset mismatch for UNNEDenoiserSettings::DenoiserAsset");
static_assert(offsetof(UNNEDenoiserSettings, MaximumTileSizeOverride) == 112, "Offset mismatch for UNNEDenoiserSettings::MaximumTileSizeOverride");
static_assert(offsetof(UNNEDenoiserSettings, RuntimeType) == 116, "Offset mismatch for UNNEDenoiserSettings::RuntimeType");
static_assert(offsetof(UNNEDenoiserSettings, RuntimeName) == 120, "Offset mismatch for UNNEDenoiserSettings::RuntimeName");

// /Script/NNEDenoiser.NNEDenoiserTemporalAsset
// Kind: Class; super: DataAsset
class UNNEDenoiserTemporalAsset
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t ModelData[0x20]; // 0x0028 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t InputMapping[0x20]; // 0x0048 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t OutputMapping[0x20]; // 0x0068 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t TilingConfig[0x1]; // 0x0088 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UNNEDenoiserTemporalAsset, ModelData) == 40, "Offset mismatch for UNNEDenoiserTemporalAsset::ModelData");
static_assert(offsetof(UNNEDenoiserTemporalAsset, InputMapping) == 72, "Offset mismatch for UNNEDenoiserTemporalAsset::InputMapping");
static_assert(offsetof(UNNEDenoiserTemporalAsset, OutputMapping) == 104, "Offset mismatch for UNNEDenoiserTemporalAsset::OutputMapping");
static_assert(offsetof(UNNEDenoiserTemporalAsset, TilingConfig) == 136, "Offset mismatch for UNNEDenoiserTemporalAsset::TilingConfig");

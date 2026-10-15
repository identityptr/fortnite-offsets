/**
 * decamp dumper generated SDK
 * Package: /Script/WaveTable
 */
#pragma once
#include "Basic.h"

// /Script/WaveTable.WaveTableBankEntry
// Kind: ScriptStruct; super: none
struct FWaveTableBankEntry
{
public:
    std::uint8_t Transform[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FWaveTableBankEntry, Transform) == 0, "Offset mismatch for FWaveTableBankEntry::Transform");

// /Script/WaveTable.WaveTableData
// Kind: ScriptStruct; super: none
struct FWaveTableData
{
public:
    std::uint8_t BitDepth; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    TArray<void*> Data; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    float FinalValue; // 0x0018 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FWaveTableData, BitDepth) == 0, "Offset mismatch for FWaveTableData::BitDepth");
static_assert(offsetof(FWaveTableData, Data) == 8, "Offset mismatch for FWaveTableData::Data");
static_assert(offsetof(FWaveTableData, FinalValue) == 24, "Offset mismatch for FWaveTableData::FinalValue");

// /Script/WaveTable.WaveTableSettings
// Kind: ScriptStruct; super: none
struct FWaveTableSettings
{
public:
    std::uint8_t FilePath[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::int32_t ChannelIndex; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0014
    std::uint8_t SourceData[0x20]; // 0x0018 (Size: 0x20, Type: StructProperty)
    std::int32_t SourceSampleRate; // 0x0038 (Size: 0x4, Type: IntProperty)
    float Phase; // 0x003C (Size: 0x4, Type: FloatProperty)
    float Top; // 0x0040 (Size: 0x4, Type: FloatProperty)
    float Tail; // 0x0044 (Size: 0x4, Type: FloatProperty)
    float FadeIn; // 0x0048 (Size: 0x4, Type: FloatProperty)
    float FadeOut; // 0x004C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bNormalize; // 0x0050 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRemoveOffset; // 0x0051 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FWaveTableSettings, FilePath) == 0, "Offset mismatch for FWaveTableSettings::FilePath");
static_assert(offsetof(FWaveTableSettings, ChannelIndex) == 16, "Offset mismatch for FWaveTableSettings::ChannelIndex");
static_assert(offsetof(FWaveTableSettings, SourceData) == 24, "Offset mismatch for FWaveTableSettings::SourceData");
static_assert(offsetof(FWaveTableSettings, SourceSampleRate) == 56, "Offset mismatch for FWaveTableSettings::SourceSampleRate");
static_assert(offsetof(FWaveTableSettings, Phase) == 60, "Offset mismatch for FWaveTableSettings::Phase");
static_assert(offsetof(FWaveTableSettings, Top) == 64, "Offset mismatch for FWaveTableSettings::Top");
static_assert(offsetof(FWaveTableSettings, Tail) == 68, "Offset mismatch for FWaveTableSettings::Tail");
static_assert(offsetof(FWaveTableSettings, FadeIn) == 72, "Offset mismatch for FWaveTableSettings::FadeIn");
static_assert(offsetof(FWaveTableSettings, FadeOut) == 76, "Offset mismatch for FWaveTableSettings::FadeOut");
static_assert(offsetof(FWaveTableSettings, bNormalize) == 80, "Offset mismatch for FWaveTableSettings::bNormalize");
static_assert(offsetof(FWaveTableSettings, bRemoveOffset) == 81, "Offset mismatch for FWaveTableSettings::bRemoveOffset");

// /Script/WaveTable.WaveTableTransform
// Kind: ScriptStruct; super: none
struct FWaveTableTransform
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Curve; // 0x0008 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0009
    float Scalar; // 0x000C (Size: 0x4, Type: FloatProperty)
    std::uint8_t CurveCustom[0x40]; // 0x0010 (Size: 0x40, Type: StructProperty)
    void* CurveShared; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t TableData[0x20]; // 0x0058 (Size: 0x20, Type: StructProperty)
    float duration; // 0x0078 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FWaveTableTransform, Curve) == 8, "Offset mismatch for FWaveTableTransform::Curve");
static_assert(offsetof(FWaveTableTransform, Scalar) == 12, "Offset mismatch for FWaveTableTransform::Scalar");
static_assert(offsetof(FWaveTableTransform, CurveCustom) == 16, "Offset mismatch for FWaveTableTransform::CurveCustom");
static_assert(offsetof(FWaveTableTransform, CurveShared) == 80, "Offset mismatch for FWaveTableTransform::CurveShared");
static_assert(offsetof(FWaveTableTransform, TableData) == 88, "Offset mismatch for FWaveTableTransform::TableData");
static_assert(offsetof(FWaveTableTransform, duration) == 120, "Offset mismatch for FWaveTableTransform::duration");

// /Script/WaveTable.WaveTableBank
// Kind: Class; super: Object
class UWaveTableBank
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t SampleMode; // 0x0030 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Resolution; // 0x0031 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0032
    std::int32_t SampleRate; // 0x0034 (Size: 0x4, Type: IntProperty)
    std::uint8_t bBipolar; // 0x0038 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0039
    TArray<void*> Entries; // 0x0040 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UWaveTableBank, SampleMode) == 48, "Offset mismatch for UWaveTableBank::SampleMode");
static_assert(offsetof(UWaveTableBank, Resolution) == 49, "Offset mismatch for UWaveTableBank::Resolution");
static_assert(offsetof(UWaveTableBank, SampleRate) == 52, "Offset mismatch for UWaveTableBank::SampleRate");
static_assert(offsetof(UWaveTableBank, bBipolar) == 56, "Offset mismatch for UWaveTableBank::bBipolar");
static_assert(offsetof(UWaveTableBank, Entries) == 64, "Offset mismatch for UWaveTableBank::Entries");

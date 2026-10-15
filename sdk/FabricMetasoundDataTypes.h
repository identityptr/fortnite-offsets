/**
 * decamp dumper generated SDK
 * Package: /Script/FabricMetasoundDataTypes
 */
#pragma once
#include "Basic.h"

// /Script/FabricMetasoundDataTypes.FabricMetasoundDrumPlayerSampleData
// Kind: ScriptStruct; super: none
struct FFabricMetasoundDrumPlayerSampleData
{
public:
    std::uint8_t SampleLabel[0x10]; // 0x0000 (Size: 0x10, Type: TextProperty)
    void* WaveAsset; // 0x0010 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FFabricMetasoundDrumPlayerSampleData, SampleLabel) == 0, "Offset mismatch for FFabricMetasoundDrumPlayerSampleData::SampleLabel");
static_assert(offsetof(FFabricMetasoundDrumPlayerSampleData, WaveAsset) == 16, "Offset mismatch for FFabricMetasoundDrumPlayerSampleData::WaveAsset");

// /Script/FabricMetasoundDataTypes.FabricUserOption
// Kind: ScriptStruct; super: none
struct FFabricUserOption
{
public:
    std::uint8_t UserOptionType; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ConversionType; // 0x0001 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0002
    float min; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float max; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float ValueCurve; // 0x000C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bInverted; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0011
    TArray<void*> NumericLookupTable; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> StringLookupTable; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFabricUserOption, UserOptionType) == 0, "Offset mismatch for FFabricUserOption::UserOptionType");
static_assert(offsetof(FFabricUserOption, ConversionType) == 1, "Offset mismatch for FFabricUserOption::ConversionType");
static_assert(offsetof(FFabricUserOption, min) == 4, "Offset mismatch for FFabricUserOption::min");
static_assert(offsetof(FFabricUserOption, max) == 8, "Offset mismatch for FFabricUserOption::max");
static_assert(offsetof(FFabricUserOption, ValueCurve) == 12, "Offset mismatch for FFabricUserOption::ValueCurve");
static_assert(offsetof(FFabricUserOption, bInverted) == 16, "Offset mismatch for FFabricUserOption::bInverted");
static_assert(offsetof(FFabricUserOption, NumericLookupTable) == 24, "Offset mismatch for FFabricUserOption::NumericLookupTable");
static_assert(offsetof(FFabricUserOption, StringLookupTable) == 40, "Offset mismatch for FFabricUserOption::StringLookupTable");

// /Script/FabricMetasoundDataTypes.FabricMetaSoundUserOption
// Kind: Class; super: Object
class UFabricMetaSoundUserOption
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t FabricUserOption[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFabricMetaSoundUserOption, FabricUserOption) == 48, "Offset mismatch for UFabricMetaSoundUserOption::FabricUserOption");

// /Script/FabricMetasoundDataTypes.FabricMetasoundDrumPlayerDataAsset
// Kind: Class; super: DataAsset
class UFabricMetasoundDrumPlayerDataAsset
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> SampleBanks; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFabricMetasoundDrumPlayerDataAsset, SampleBanks) == 40, "Offset mismatch for UFabricMetasoundDrumPlayerDataAsset::SampleBanks");

// /Script/FabricMetasoundDataTypes.FabricMetasoundDrumPlayerSampleBankAsset
// Kind: Class; super: DataAsset
class UFabricMetasoundDrumPlayerSampleBankAsset
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t SampleKitName[0x10]; // 0x0028 (Size: 0x10, Type: TextProperty)
    TArray<void*> Samples; // 0x0038 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFabricMetasoundDrumPlayerSampleBankAsset, SampleKitName) == 40, "Offset mismatch for UFabricMetasoundDrumPlayerSampleBankAsset::SampleKitName");
static_assert(offsetof(UFabricMetasoundDrumPlayerSampleBankAsset, Samples) == 56, "Offset mismatch for UFabricMetasoundDrumPlayerSampleBankAsset::Samples");

// /Script/FabricMetasoundDataTypes.FabricMetasoundInstrumentPlayerDataAsset
// Kind: Class; super: DataAsset
class UFabricMetasoundInstrumentPlayerDataAsset
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Patch; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFabricMetasoundInstrumentPlayerDataAsset, Patch) == 40, "Offset mismatch for UFabricMetasoundInstrumentPlayerDataAsset::Patch");

// /Script/FabricMetasoundDataTypes.FabricMetasoundInstrumentPlayerDataAssetList
// Kind: Class; super: DataAsset
class UFabricMetasoundInstrumentPlayerDataAssetList
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> InstrumentPlayerData; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFabricMetasoundInstrumentPlayerDataAssetList, InstrumentPlayerData) == 40, "Offset mismatch for UFabricMetasoundInstrumentPlayerDataAssetList::InstrumentPlayerData");

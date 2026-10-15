/**
 * decamp dumper generated SDK
 * Package: /Script/DataAssetDirectory
 */
#pragma once
#include "Basic.h"

// /Script/DataAssetDirectory.DataAssetDirectoryTestPODStruct
// Kind: ScriptStruct; super: none
struct FDataAssetDirectoryTestPODStruct
{
public:
    std::uint8_t EnumProperty; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::int32_t IntProperty; // 0x0004 (Size: 0x4, Type: IntProperty)
    float FloatProperty; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t BoolProperty; // 0x000C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x000D
    FString StringProperty; // 0x0010 (Size: 0x10, Type: StrProperty)
    FName NameProperty; // 0x0020 (Size: 0x8, Type: NameProperty)
    FText TextProperty; // 0x0028 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(FDataAssetDirectoryTestPODStruct, EnumProperty) == 0, "Offset mismatch for FDataAssetDirectoryTestPODStruct::EnumProperty");
static_assert(offsetof(FDataAssetDirectoryTestPODStruct, IntProperty) == 4, "Offset mismatch for FDataAssetDirectoryTestPODStruct::IntProperty");
static_assert(offsetof(FDataAssetDirectoryTestPODStruct, FloatProperty) == 8, "Offset mismatch for FDataAssetDirectoryTestPODStruct::FloatProperty");
static_assert(offsetof(FDataAssetDirectoryTestPODStruct, BoolProperty) == 12, "Offset mismatch for FDataAssetDirectoryTestPODStruct::BoolProperty");
static_assert(offsetof(FDataAssetDirectoryTestPODStruct, StringProperty) == 16, "Offset mismatch for FDataAssetDirectoryTestPODStruct::StringProperty");
static_assert(offsetof(FDataAssetDirectoryTestPODStruct, NameProperty) == 32, "Offset mismatch for FDataAssetDirectoryTestPODStruct::NameProperty");
static_assert(offsetof(FDataAssetDirectoryTestPODStruct, TextProperty) == 40, "Offset mismatch for FDataAssetDirectoryTestPODStruct::TextProperty");

// /Script/DataAssetDirectory.DataAssetDirectoryTestSimpleStruct
// Kind: ScriptStruct; super: none
struct FDataAssetDirectoryTestSimpleStruct
{
public:
    std::int32_t IntProperty; // 0x0000 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FDataAssetDirectoryTestSimpleStruct, IntProperty) == 0, "Offset mismatch for FDataAssetDirectoryTestSimpleStruct::IntProperty");

// /Script/DataAssetDirectory.DataAssetDirectoryManager
// Kind: Class; super: Object
class UDataAssetDirectoryManager
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    std::uint8_t LastUpdateCheck[0x8]; // 0x00B0 (Size: 0x8, Type: StructProperty)
    std::uint32_t UpdateCheckLimitSeconds; // 0x00B8 (Size: 0x4, Type: UInt32Property)
    std::uint8_t bEnabled; // 0x00BC (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFailOnError; // 0x00BD (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAnalyticsEnabled; // 0x00BE (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UDataAssetDirectoryManager, LastUpdateCheck) == 176, "Offset mismatch for UDataAssetDirectoryManager::LastUpdateCheck");
static_assert(offsetof(UDataAssetDirectoryManager, UpdateCheckLimitSeconds) == 184, "Offset mismatch for UDataAssetDirectoryManager::UpdateCheckLimitSeconds");
static_assert(offsetof(UDataAssetDirectoryManager, bEnabled) == 188, "Offset mismatch for UDataAssetDirectoryManager::bEnabled");
static_assert(offsetof(UDataAssetDirectoryManager, bFailOnError) == 189, "Offset mismatch for UDataAssetDirectoryManager::bFailOnError");
static_assert(offsetof(UDataAssetDirectoryManager, bAnalyticsEnabled) == 190, "Offset mismatch for UDataAssetDirectoryManager::bAnalyticsEnabled");

// /Script/DataAssetDirectory.DataAssetDirectoryPatchableAsset
// Kind: Class; super: Interface
class UDataAssetDirectoryPatchableAsset
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DataAssetDirectory.DataAssetDirectoryPatcher
// Kind: Class; super: Object
class UDataAssetDirectoryPatcher
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DataAssetDirectory.DataAssetDirectorySimpleObject
// Kind: Class; super: Object
class UDataAssetDirectorySimpleObject
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::int32_t IntProperty; // 0x0028 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UDataAssetDirectorySimpleObject, IntProperty) == 40, "Offset mismatch for UDataAssetDirectorySimpleObject::IntProperty");

// /Script/DataAssetDirectory.DataAssetDirectoryTestArrayAsset
// Kind: Class; super: Object
class UDataAssetDirectoryTestArrayAsset
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> IntArray; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SimpleStructArray; // 0x0038 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UDataAssetDirectoryTestArrayAsset, IntArray) == 40, "Offset mismatch for UDataAssetDirectoryTestArrayAsset::IntArray");
static_assert(offsetof(UDataAssetDirectoryTestArrayAsset, SimpleStructArray) == 56, "Offset mismatch for UDataAssetDirectoryTestArrayAsset::SimpleStructArray");

// /Script/DataAssetDirectory.DataAssetDirectoryTestMapAsset
// Kind: Class; super: Object
class UDataAssetDirectoryTestMapAsset
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TMap<void*, void*> StringIntMap; // 0x0028 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> ShrinkStringIntMap; // 0x0038 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> GrowStringIntMap; // 0x0048 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> IntStructMap; // 0x0058 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UDataAssetDirectoryTestMapAsset, StringIntMap) == 40, "Offset mismatch for UDataAssetDirectoryTestMapAsset::StringIntMap");
static_assert(offsetof(UDataAssetDirectoryTestMapAsset, ShrinkStringIntMap) == 56, "Offset mismatch for UDataAssetDirectoryTestMapAsset::ShrinkStringIntMap");
static_assert(offsetof(UDataAssetDirectoryTestMapAsset, GrowStringIntMap) == 72, "Offset mismatch for UDataAssetDirectoryTestMapAsset::GrowStringIntMap");
static_assert(offsetof(UDataAssetDirectoryTestMapAsset, IntStructMap) == 88, "Offset mismatch for UDataAssetDirectoryTestMapAsset::IntStructMap");

// /Script/DataAssetDirectory.DataAssetDirectoryTestObjectAsset
// Kind: Class; super: Object
class UDataAssetDirectoryTestObjectAsset
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* SimpleObject; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDataAssetDirectoryTestObjectAsset, SimpleObject) == 40, "Offset mismatch for UDataAssetDirectoryTestObjectAsset::SimpleObject");

// /Script/DataAssetDirectory.DataAssetDirectoryTestPODAsset
// Kind: Class; super: Object
class UDataAssetDirectoryTestPODAsset
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FString AssetName; // 0x0028 (Size: 0x10, Type: StrProperty)
    std::uint8_t EnumProperty; // 0x0038 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0039
    std::int32_t IntProperty; // 0x003C (Size: 0x4, Type: IntProperty)
    float FloatProperty; // 0x0040 (Size: 0x4, Type: FloatProperty)
    std::uint8_t BoolProperty; // 0x0044 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0045
    FString StringProperty; // 0x0048 (Size: 0x10, Type: StrProperty)
    FName NameProperty; // 0x0058 (Size: 0x8, Type: NameProperty)
    FText TextProperty; // 0x0060 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(UDataAssetDirectoryTestPODAsset, AssetName) == 40, "Offset mismatch for UDataAssetDirectoryTestPODAsset::AssetName");
static_assert(offsetof(UDataAssetDirectoryTestPODAsset, EnumProperty) == 56, "Offset mismatch for UDataAssetDirectoryTestPODAsset::EnumProperty");
static_assert(offsetof(UDataAssetDirectoryTestPODAsset, IntProperty) == 60, "Offset mismatch for UDataAssetDirectoryTestPODAsset::IntProperty");
static_assert(offsetof(UDataAssetDirectoryTestPODAsset, FloatProperty) == 64, "Offset mismatch for UDataAssetDirectoryTestPODAsset::FloatProperty");
static_assert(offsetof(UDataAssetDirectoryTestPODAsset, BoolProperty) == 68, "Offset mismatch for UDataAssetDirectoryTestPODAsset::BoolProperty");
static_assert(offsetof(UDataAssetDirectoryTestPODAsset, StringProperty) == 72, "Offset mismatch for UDataAssetDirectoryTestPODAsset::StringProperty");
static_assert(offsetof(UDataAssetDirectoryTestPODAsset, NameProperty) == 88, "Offset mismatch for UDataAssetDirectoryTestPODAsset::NameProperty");
static_assert(offsetof(UDataAssetDirectoryTestPODAsset, TextProperty) == 96, "Offset mismatch for UDataAssetDirectoryTestPODAsset::TextProperty");

// /Script/DataAssetDirectory.DataAssetDirectoryTestStructAsset
// Kind: Class; super: Object
class UDataAssetDirectoryTestStructAsset
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t TestStruct[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UDataAssetDirectoryTestStructAsset, TestStruct) == 40, "Offset mismatch for UDataAssetDirectoryTestStructAsset::TestStruct");

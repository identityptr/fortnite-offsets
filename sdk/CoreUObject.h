/**
 * decamp dumper generated SDK
 * Package: /Script/CoreUObject
 */
#pragma once
#include "Basic.h"

// /Script/CoreUObject.ARFilter
// Kind: ScriptStruct; super: none
struct FARFilter
{
public:
    TArray<void*> PackageNames; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PackagePaths; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SoftObjectPaths; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ClassNames; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ClassPaths; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0000[0x10]; // 0x0050
    std::uint8_t RecursiveClassesExclusionSet[0x10]; // 0x0060 (Size: 0x10, Type: SetProperty)
    std::uint8_t RecursiveClassPathsExclusionSet[0x10]; // 0x0070 (Size: 0x10, Type: SetProperty)
    std::uint8_t bRecursivePaths; // 0x0080 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRecursiveClasses; // 0x0081 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIncludeOnlyOnDiskAssets; // 0x0082 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FARFilter, PackageNames) == 0, "Offset mismatch for FARFilter::PackageNames");
static_assert(offsetof(FARFilter, PackagePaths) == 16, "Offset mismatch for FARFilter::PackagePaths");
static_assert(offsetof(FARFilter, SoftObjectPaths) == 32, "Offset mismatch for FARFilter::SoftObjectPaths");
static_assert(offsetof(FARFilter, ClassNames) == 48, "Offset mismatch for FARFilter::ClassNames");
static_assert(offsetof(FARFilter, ClassPaths) == 64, "Offset mismatch for FARFilter::ClassPaths");
static_assert(offsetof(FARFilter, RecursiveClassesExclusionSet) == 96, "Offset mismatch for FARFilter::RecursiveClassesExclusionSet");
static_assert(offsetof(FARFilter, RecursiveClassPathsExclusionSet) == 112, "Offset mismatch for FARFilter::RecursiveClassPathsExclusionSet");
static_assert(offsetof(FARFilter, bRecursivePaths) == 128, "Offset mismatch for FARFilter::bRecursivePaths");
static_assert(offsetof(FARFilter, bRecursiveClasses) == 129, "Offset mismatch for FARFilter::bRecursiveClasses");
static_assert(offsetof(FARFilter, bIncludeOnlyOnDiskAssets) == 130, "Offset mismatch for FARFilter::bIncludeOnlyOnDiskAssets");

// /Script/CoreUObject.AssetBundleData
// Kind: ScriptStruct; super: none
struct FAssetBundleData
{
public:
    TArray<void*> Bundles; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FAssetBundleData, Bundles) == 0, "Offset mismatch for FAssetBundleData::Bundles");

// /Script/CoreUObject.AssetBundleEntry
// Kind: ScriptStruct; super: none
struct FAssetBundleEntry
{
public:
    FName BundleName; // 0x0000 (Size: 0x8, Type: NameProperty)
    TArray<void*> AssetPaths; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FAssetBundleEntry, BundleName) == 0, "Offset mismatch for FAssetBundleEntry::BundleName");
static_assert(offsetof(FAssetBundleEntry, AssetPaths) == 8, "Offset mismatch for FAssetBundleEntry::AssetPaths");

// /Script/CoreUObject.AssetData
// Kind: ScriptStruct; super: none
struct FAssetData
{
public:
    std::uint8_t PackageName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t PackagePath[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    std::uint8_t AssetName[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::uint8_t AssetClassPath[0x1]; // 0x000C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FAssetData, PackageName) == 0, "Offset mismatch for FAssetData::PackageName");
static_assert(offsetof(FAssetData, PackagePath) == 4, "Offset mismatch for FAssetData::PackagePath");
static_assert(offsetof(FAssetData, AssetName) == 8, "Offset mismatch for FAssetData::AssetName");
static_assert(offsetof(FAssetData, AssetClassPath) == 12, "Offset mismatch for FAssetData::AssetClassPath");

// /Script/CoreUObject.AutomationEvent
// Kind: ScriptStruct; super: none
struct FAutomationEvent
{
public:
    std::uint8_t Type; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    FString Message; // 0x0008 (Size: 0x10, Type: StrProperty)
    FString Context; // 0x0018 (Size: 0x10, Type: StrProperty)
    std::uint8_t Artifact[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FAutomationEvent, Type) == 0, "Offset mismatch for FAutomationEvent::Type");
static_assert(offsetof(FAutomationEvent, Message) == 8, "Offset mismatch for FAutomationEvent::Message");
static_assert(offsetof(FAutomationEvent, Context) == 24, "Offset mismatch for FAutomationEvent::Context");
static_assert(offsetof(FAutomationEvent, Artifact) == 40, "Offset mismatch for FAutomationEvent::Artifact");

// /Script/CoreUObject.AutomationExecutionEntry
// Kind: ScriptStruct; super: none
struct FAutomationExecutionEntry
{
public:
    std::uint8_t Event[0x38]; // 0x0000 (Size: 0x38, Type: StructProperty)
    FString Filename; // 0x0038 (Size: 0x10, Type: StrProperty)
    std::int32_t LineNumber; // 0x0048 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x004C
    std::uint8_t Timestamp[0x1]; // 0x0050 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FAutomationExecutionEntry, Event) == 0, "Offset mismatch for FAutomationExecutionEntry::Event");
static_assert(offsetof(FAutomationExecutionEntry, Filename) == 56, "Offset mismatch for FAutomationExecutionEntry::Filename");
static_assert(offsetof(FAutomationExecutionEntry, LineNumber) == 72, "Offset mismatch for FAutomationExecutionEntry::LineNumber");
static_assert(offsetof(FAutomationExecutionEntry, Timestamp) == 80, "Offset mismatch for FAutomationExecutionEntry::Timestamp");

// /Script/CoreUObject.Box
// Kind: ScriptStruct; super: none
struct FBox
{
public:
    std::uint8_t min[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t max[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t IsValid; // 0x0030 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FBox, min) == 0, "Offset mismatch for FBox::min");
static_assert(offsetof(FBox, max) == 24, "Offset mismatch for FBox::max");
static_assert(offsetof(FBox, IsValid) == 48, "Offset mismatch for FBox::IsValid");

// /Script/CoreUObject.Box2D
// Kind: ScriptStruct; super: none
struct FBox2D
{
public:
    std::uint8_t min[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t max[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t bIsValid; // 0x0020 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FBox2D, min) == 0, "Offset mismatch for FBox2D::min");
static_assert(offsetof(FBox2D, max) == 16, "Offset mismatch for FBox2D::max");
static_assert(offsetof(FBox2D, bIsValid) == 32, "Offset mismatch for FBox2D::bIsValid");

// /Script/CoreUObject.Box2f
// Kind: ScriptStruct; super: none
struct FBox2f
{
public:
    std::uint8_t min[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t max[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    std::uint8_t bIsValid; // 0x0010 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FBox2f, min) == 0, "Offset mismatch for FBox2f::min");
static_assert(offsetof(FBox2f, max) == 8, "Offset mismatch for FBox2f::max");
static_assert(offsetof(FBox2f, bIsValid) == 16, "Offset mismatch for FBox2f::bIsValid");

// /Script/CoreUObject.Box3d
// Kind: ScriptStruct; super: none
struct FBox3d
{
public:
    std::uint8_t min[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t max[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t IsValid; // 0x0030 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FBox3d, min) == 0, "Offset mismatch for FBox3d::min");
static_assert(offsetof(FBox3d, max) == 24, "Offset mismatch for FBox3d::max");
static_assert(offsetof(FBox3d, IsValid) == 48, "Offset mismatch for FBox3d::IsValid");

// /Script/CoreUObject.Box3f
// Kind: ScriptStruct; super: none
struct FBox3f
{
public:
    std::uint8_t min[0xC]; // 0x0000 (Size: 0xC, Type: StructProperty)
    std::uint8_t max[0xC]; // 0x000C (Size: 0xC, Type: StructProperty)
    std::uint8_t IsValid; // 0x0018 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FBox3f, min) == 0, "Offset mismatch for FBox3f::min");
static_assert(offsetof(FBox3f, max) == 12, "Offset mismatch for FBox3f::max");
static_assert(offsetof(FBox3f, IsValid) == 24, "Offset mismatch for FBox3f::IsValid");

// /Script/CoreUObject.BoxSphereBounds
// Kind: ScriptStruct; super: none
struct FBoxSphereBounds
{
public:
    std::uint8_t origin[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t BoxExtent[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    double SphereRadius; // 0x0030 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FBoxSphereBounds, origin) == 0, "Offset mismatch for FBoxSphereBounds::origin");
static_assert(offsetof(FBoxSphereBounds, BoxExtent) == 24, "Offset mismatch for FBoxSphereBounds::BoxExtent");
static_assert(offsetof(FBoxSphereBounds, SphereRadius) == 48, "Offset mismatch for FBoxSphereBounds::SphereRadius");

// /Script/CoreUObject.BoxSphereBounds3d
// Kind: ScriptStruct; super: none
struct FBoxSphereBounds3d
{
public:
    std::uint8_t origin[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t BoxExtent[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    double SphereRadius; // 0x0030 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FBoxSphereBounds3d, origin) == 0, "Offset mismatch for FBoxSphereBounds3d::origin");
static_assert(offsetof(FBoxSphereBounds3d, BoxExtent) == 24, "Offset mismatch for FBoxSphereBounds3d::BoxExtent");
static_assert(offsetof(FBoxSphereBounds3d, SphereRadius) == 48, "Offset mismatch for FBoxSphereBounds3d::SphereRadius");

// /Script/CoreUObject.BoxSphereBounds3f
// Kind: ScriptStruct; super: none
struct FBoxSphereBounds3f
{
public:
    std::uint8_t origin[0xC]; // 0x0000 (Size: 0xC, Type: StructProperty)
    std::uint8_t BoxExtent[0xC]; // 0x000C (Size: 0xC, Type: StructProperty)
    float SphereRadius; // 0x0018 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FBoxSphereBounds3f, origin) == 0, "Offset mismatch for FBoxSphereBounds3f::origin");
static_assert(offsetof(FBoxSphereBounds3f, BoxExtent) == 12, "Offset mismatch for FBoxSphereBounds3f::BoxExtent");
static_assert(offsetof(FBoxSphereBounds3f, SphereRadius) == 24, "Offset mismatch for FBoxSphereBounds3f::SphereRadius");

// /Script/CoreUObject.ChunkDependency
// Kind: ScriptStruct; super: none
struct FChunkDependency
{
public:
    std::int32_t ChunkId; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t ParentChunkID; // 0x0004 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FChunkDependency, ChunkId) == 0, "Offset mismatch for FChunkDependency::ChunkId");
static_assert(offsetof(FChunkDependency, ParentChunkID) == 4, "Offset mismatch for FChunkDependency::ParentChunkID");

// /Script/CoreUObject.Color
// Kind: ScriptStruct; super: none
struct FColor
{
public:
    std::uint8_t B; // 0x0000 (Size: 0x1, Type: ByteProperty)
    std::uint8_t G; // 0x0001 (Size: 0x1, Type: ByteProperty)
    std::uint8_t R; // 0x0002 (Size: 0x1, Type: ByteProperty)
    std::uint8_t A; // 0x0003 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FColor, B) == 0, "Offset mismatch for FColor::B");
static_assert(offsetof(FColor, G) == 1, "Offset mismatch for FColor::G");
static_assert(offsetof(FColor, R) == 2, "Offset mismatch for FColor::R");
static_assert(offsetof(FColor, A) == 3, "Offset mismatch for FColor::A");

// /Script/CoreUObject.ConstSharedStruct
// Kind: ScriptStruct; super: none
struct FConstSharedStruct
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CoreUObject.DateTime
// Kind: ScriptStruct; super: none
struct FDateTime
{
public:
    std::int64_t Ticks; // 0x0000 (Size: 0x8, Type: Int64Property)
};

static_assert(offsetof(FDateTime, Ticks) == 0, "Offset mismatch for FDateTime::Ticks");

// /Script/CoreUObject.DirectoryPath
// Kind: ScriptStruct; super: none
struct FDirectoryPath
{
public:
    FString Path; // 0x0000 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FDirectoryPath, Path) == 0, "Offset mismatch for FDirectoryPath::Path");

// /Script/CoreUObject.DoubleInterval
// Kind: ScriptStruct; super: none
struct FDoubleInterval
{
public:
    double min; // 0x0000 (Size: 0x8, Type: DoubleProperty)
    double max; // 0x0008 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FDoubleInterval, min) == 0, "Offset mismatch for FDoubleInterval::min");
static_assert(offsetof(FDoubleInterval, max) == 8, "Offset mismatch for FDoubleInterval::max");

// /Script/CoreUObject.DoubleRange
// Kind: ScriptStruct; super: none
struct FDoubleRange
{
public:
    std::uint8_t LowerBound[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t UpperBound[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDoubleRange, LowerBound) == 0, "Offset mismatch for FDoubleRange::LowerBound");
static_assert(offsetof(FDoubleRange, UpperBound) == 16, "Offset mismatch for FDoubleRange::UpperBound");

// /Script/CoreUObject.DoubleRangeBound
// Kind: ScriptStruct; super: none
struct FDoubleRangeBound
{
public:
    std::uint8_t Type; // 0x0000 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    double Value; // 0x0008 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FDoubleRangeBound, Type) == 0, "Offset mismatch for FDoubleRangeBound::Type");
static_assert(offsetof(FDoubleRangeBound, Value) == 8, "Offset mismatch for FDoubleRangeBound::Value");

// /Script/CoreUObject.FallbackStruct
// Kind: ScriptStruct; super: none
struct FFallbackStruct
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CoreUObject.FieldCookedMetaDataKey
// Kind: ScriptStruct; super: none
struct FFieldCookedMetaDataKey
{
public:
    TArray<void*> FieldPath; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFieldCookedMetaDataKey, FieldPath) == 0, "Offset mismatch for FFieldCookedMetaDataKey::FieldPath");

// /Script/CoreUObject.FieldCookedMetaDataStore
// Kind: ScriptStruct; super: none
struct FFieldCookedMetaDataStore
{
public:
    TMap<void*, void*> FieldMetaData; // 0x0000 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> SubFieldMetaData; // 0x0010 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FFieldCookedMetaDataStore, FieldMetaData) == 0, "Offset mismatch for FFieldCookedMetaDataStore::FieldMetaData");
static_assert(offsetof(FFieldCookedMetaDataStore, SubFieldMetaData) == 16, "Offset mismatch for FFieldCookedMetaDataStore::SubFieldMetaData");

// /Script/CoreUObject.FieldCookedMetaDataValue
// Kind: ScriptStruct; super: none
struct FFieldCookedMetaDataValue
{
public:
    TMap<void*, void*> MetaData; // 0x0000 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FFieldCookedMetaDataValue, MetaData) == 0, "Offset mismatch for FFieldCookedMetaDataValue::MetaData");

// /Script/CoreUObject.FilePath
// Kind: ScriptStruct; super: none
struct FFilePath
{
public:
    FString FilePath; // 0x0000 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FFilePath, FilePath) == 0, "Offset mismatch for FFilePath::FilePath");

// /Script/CoreUObject.FloatInterval
// Kind: ScriptStruct; super: none
struct FFloatInterval
{
public:
    float min; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float max; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFloatInterval, min) == 0, "Offset mismatch for FFloatInterval::min");
static_assert(offsetof(FFloatInterval, max) == 4, "Offset mismatch for FFloatInterval::max");

// /Script/CoreUObject.FloatRange
// Kind: ScriptStruct; super: none
struct FFloatRange
{
public:
    std::uint8_t LowerBound[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t UpperBound[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFloatRange, LowerBound) == 0, "Offset mismatch for FFloatRange::LowerBound");
static_assert(offsetof(FFloatRange, UpperBound) == 8, "Offset mismatch for FFloatRange::UpperBound");

// /Script/CoreUObject.FloatRangeBound
// Kind: ScriptStruct; super: none
struct FFloatRangeBound
{
public:
    std::uint8_t Type; // 0x0000 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float Value; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFloatRangeBound, Type) == 0, "Offset mismatch for FFloatRangeBound::Type");
static_assert(offsetof(FFloatRangeBound, Value) == 4, "Offset mismatch for FFloatRangeBound::Value");

// /Script/CoreUObject.FrameNumber
// Kind: ScriptStruct; super: none
struct FFrameNumber
{
public:
    std::int32_t Value; // 0x0000 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FFrameNumber, Value) == 0, "Offset mismatch for FFrameNumber::Value");

// /Script/CoreUObject.FrameNumberRange
// Kind: ScriptStruct; super: none
struct FFrameNumberRange
{
public:
    std::uint8_t LowerBound[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t UpperBound[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFrameNumberRange, LowerBound) == 0, "Offset mismatch for FFrameNumberRange::LowerBound");
static_assert(offsetof(FFrameNumberRange, UpperBound) == 8, "Offset mismatch for FFrameNumberRange::UpperBound");

// /Script/CoreUObject.FrameNumberRangeBound
// Kind: ScriptStruct; super: none
struct FFrameNumberRangeBound
{
public:
    std::uint8_t Type; // 0x0000 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::uint8_t Value[0x1]; // 0x0004 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFrameNumberRangeBound, Type) == 0, "Offset mismatch for FFrameNumberRangeBound::Type");
static_assert(offsetof(FFrameNumberRangeBound, Value) == 4, "Offset mismatch for FFrameNumberRangeBound::Value");

// /Script/CoreUObject.FrameRate
// Kind: ScriptStruct; super: none
struct FFrameRate
{
public:
    std::int32_t Numerator; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t Denominator; // 0x0004 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FFrameRate, Numerator) == 0, "Offset mismatch for FFrameRate::Numerator");
static_assert(offsetof(FFrameRate, Denominator) == 4, "Offset mismatch for FFrameRate::Denominator");

// /Script/CoreUObject.FrameTime
// Kind: ScriptStruct; super: none
struct FFrameTime
{
public:
    std::uint8_t FrameNumber[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    float SubFrame; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFrameTime, FrameNumber) == 0, "Offset mismatch for FFrameTime::FrameNumber");
static_assert(offsetof(FFrameTime, SubFrame) == 4, "Offset mismatch for FFrameTime::SubFrame");

// /Script/CoreUObject.GloballyUniqueHandleBase
// Kind: ScriptStruct; super: none
struct FGloballyUniqueHandleBase
{
public:
    std::uint64_t HandleValue; // 0x0000 (Size: 0x8, Type: UInt64Property)
    std::uint8_t GeneratedByServerId[0x4]; // 0x0008 (Size: 0x4, Type: StructProperty)
    std::uint8_t bIsValid; // 0x000C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FGloballyUniqueHandleBase, HandleValue) == 0, "Offset mismatch for FGloballyUniqueHandleBase::HandleValue");
static_assert(offsetof(FGloballyUniqueHandleBase, GeneratedByServerId) == 8, "Offset mismatch for FGloballyUniqueHandleBase::GeneratedByServerId");
static_assert(offsetof(FGloballyUniqueHandleBase, bIsValid) == 12, "Offset mismatch for FGloballyUniqueHandleBase::bIsValid");

// /Script/CoreUObject.Guid
// Kind: ScriptStruct; super: none
struct FGuid
{
public:
    std::int32_t A; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t B; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t C; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::int32_t D; // 0x000C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FGuid, A) == 0, "Offset mismatch for FGuid::A");
static_assert(offsetof(FGuid, B) == 4, "Offset mismatch for FGuid::B");
static_assert(offsetof(FGuid, C) == 8, "Offset mismatch for FGuid::C");
static_assert(offsetof(FGuid, D) == 12, "Offset mismatch for FGuid::D");

// /Script/CoreUObject.InputDeviceId
// Kind: ScriptStruct; super: none
struct FInputDeviceId
{
public:
    std::int32_t InternalId; // 0x0000 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FInputDeviceId, InternalId) == 0, "Offset mismatch for FInputDeviceId::InternalId");

// /Script/CoreUObject.InstancedPropertyBag
// Kind: ScriptStruct; super: none
struct FInstancedPropertyBag
{
public:
    std::uint8_t Value[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FInstancedPropertyBag, Value) == 0, "Offset mismatch for FInstancedPropertyBag::Value");

// /Script/CoreUObject.InstancedStruct
// Kind: ScriptStruct; super: none
struct FInstancedStruct
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CoreUObject.InstancedStructArray
// Kind: ScriptStruct; super: none
struct FInstancedStructArray
{
public:
    TArray<void*> Values; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FInstancedStructArray, Values) == 0, "Offset mismatch for FInstancedStructArray::Values");

// /Script/CoreUObject.InstancedStructBaseStructQueryParams
// Kind: ScriptStruct; super: none
struct FInstancedStructBaseStructQueryParams
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CoreUObject.InstancedStructContainer
// Kind: ScriptStruct; super: none
struct FInstancedStructContainer
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CoreUObject.Int32Interval
// Kind: ScriptStruct; super: none
struct FInt32Interval
{
public:
    std::int32_t min; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t max; // 0x0004 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FInt32Interval, min) == 0, "Offset mismatch for FInt32Interval::min");
static_assert(offsetof(FInt32Interval, max) == 4, "Offset mismatch for FInt32Interval::max");

// /Script/CoreUObject.Int32Point
// Kind: ScriptStruct; super: none
struct FInt32Point
{
public:
    std::int32_t X; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t Y; // 0x0004 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FInt32Point, X) == 0, "Offset mismatch for FInt32Point::X");
static_assert(offsetof(FInt32Point, Y) == 4, "Offset mismatch for FInt32Point::Y");

// /Script/CoreUObject.Int32Range
// Kind: ScriptStruct; super: none
struct FInt32Range
{
public:
    std::uint8_t LowerBound[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t UpperBound[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FInt32Range, LowerBound) == 0, "Offset mismatch for FInt32Range::LowerBound");
static_assert(offsetof(FInt32Range, UpperBound) == 8, "Offset mismatch for FInt32Range::UpperBound");

// /Script/CoreUObject.Int32RangeBound
// Kind: ScriptStruct; super: none
struct FInt32RangeBound
{
public:
    std::uint8_t Type; // 0x0000 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::int32_t Value; // 0x0004 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FInt32RangeBound, Type) == 0, "Offset mismatch for FInt32RangeBound::Type");
static_assert(offsetof(FInt32RangeBound, Value) == 4, "Offset mismatch for FInt32RangeBound::Value");

// /Script/CoreUObject.Int32Rect
// Kind: ScriptStruct; super: none
struct FInt32Rect
{
public:
    std::uint8_t min[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t max[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FInt32Rect, min) == 0, "Offset mismatch for FInt32Rect::min");
static_assert(offsetof(FInt32Rect, max) == 8, "Offset mismatch for FInt32Rect::max");

// /Script/CoreUObject.Int32Vector
// Kind: ScriptStruct; super: none
struct FInt32Vector
{
public:
    std::int32_t X; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t Y; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t Z; // 0x0008 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FInt32Vector, X) == 0, "Offset mismatch for FInt32Vector::X");
static_assert(offsetof(FInt32Vector, Y) == 4, "Offset mismatch for FInt32Vector::Y");
static_assert(offsetof(FInt32Vector, Z) == 8, "Offset mismatch for FInt32Vector::Z");

// /Script/CoreUObject.Int32Vector2
// Kind: ScriptStruct; super: none
struct FInt32Vector2
{
public:
    std::int32_t X; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t Y; // 0x0004 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FInt32Vector2, X) == 0, "Offset mismatch for FInt32Vector2::X");
static_assert(offsetof(FInt32Vector2, Y) == 4, "Offset mismatch for FInt32Vector2::Y");

// /Script/CoreUObject.Int32Vector4
// Kind: ScriptStruct; super: none
struct FInt32Vector4
{
public:
    std::int32_t X; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t Y; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t Z; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::int32_t W; // 0x000C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FInt32Vector4, X) == 0, "Offset mismatch for FInt32Vector4::X");
static_assert(offsetof(FInt32Vector4, Y) == 4, "Offset mismatch for FInt32Vector4::Y");
static_assert(offsetof(FInt32Vector4, Z) == 8, "Offset mismatch for FInt32Vector4::Z");
static_assert(offsetof(FInt32Vector4, W) == 12, "Offset mismatch for FInt32Vector4::W");

// /Script/CoreUObject.Int64Point
// Kind: ScriptStruct; super: none
struct FInt64Point
{
public:
    std::int64_t X; // 0x0000 (Size: 0x8, Type: Int64Property)
    std::int64_t Y; // 0x0008 (Size: 0x8, Type: Int64Property)
};

static_assert(offsetof(FInt64Point, X) == 0, "Offset mismatch for FInt64Point::X");
static_assert(offsetof(FInt64Point, Y) == 8, "Offset mismatch for FInt64Point::Y");

// /Script/CoreUObject.Int64Rect
// Kind: ScriptStruct; super: none
struct FInt64Rect
{
public:
    std::uint8_t min[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t max[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FInt64Rect, min) == 0, "Offset mismatch for FInt64Rect::min");
static_assert(offsetof(FInt64Rect, max) == 16, "Offset mismatch for FInt64Rect::max");

// /Script/CoreUObject.Int64Vector
// Kind: ScriptStruct; super: none
struct FInt64Vector
{
public:
    std::int64_t X; // 0x0000 (Size: 0x8, Type: Int64Property)
    std::int64_t Y; // 0x0008 (Size: 0x8, Type: Int64Property)
    std::int64_t Z; // 0x0010 (Size: 0x8, Type: Int64Property)
};

static_assert(offsetof(FInt64Vector, X) == 0, "Offset mismatch for FInt64Vector::X");
static_assert(offsetof(FInt64Vector, Y) == 8, "Offset mismatch for FInt64Vector::Y");
static_assert(offsetof(FInt64Vector, Z) == 16, "Offset mismatch for FInt64Vector::Z");

// /Script/CoreUObject.Int64Vector2
// Kind: ScriptStruct; super: none
struct FInt64Vector2
{
public:
    std::int64_t X; // 0x0000 (Size: 0x8, Type: Int64Property)
    std::int64_t Y; // 0x0008 (Size: 0x8, Type: Int64Property)
};

static_assert(offsetof(FInt64Vector2, X) == 0, "Offset mismatch for FInt64Vector2::X");
static_assert(offsetof(FInt64Vector2, Y) == 8, "Offset mismatch for FInt64Vector2::Y");

// /Script/CoreUObject.Int64Vector4
// Kind: ScriptStruct; super: none
struct FInt64Vector4
{
public:
    std::int64_t X; // 0x0000 (Size: 0x8, Type: Int64Property)
    std::int64_t Y; // 0x0008 (Size: 0x8, Type: Int64Property)
    std::int64_t Z; // 0x0010 (Size: 0x8, Type: Int64Property)
    std::int64_t W; // 0x0018 (Size: 0x8, Type: Int64Property)
};

static_assert(offsetof(FInt64Vector4, X) == 0, "Offset mismatch for FInt64Vector4::X");
static_assert(offsetof(FInt64Vector4, Y) == 8, "Offset mismatch for FInt64Vector4::Y");
static_assert(offsetof(FInt64Vector4, Z) == 16, "Offset mismatch for FInt64Vector4::Z");
static_assert(offsetof(FInt64Vector4, W) == 24, "Offset mismatch for FInt64Vector4::W");

// /Script/CoreUObject.IntPoint
// Kind: ScriptStruct; super: none
struct FIntPoint
{
public:
    std::int32_t X; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t Y; // 0x0004 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FIntPoint, X) == 0, "Offset mismatch for FIntPoint::X");
static_assert(offsetof(FIntPoint, Y) == 4, "Offset mismatch for FIntPoint::Y");

// /Script/CoreUObject.IntRect
// Kind: ScriptStruct; super: none
struct FIntRect
{
public:
    std::uint8_t min[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t max[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FIntRect, min) == 0, "Offset mismatch for FIntRect::min");
static_assert(offsetof(FIntRect, max) == 8, "Offset mismatch for FIntRect::max");

// /Script/CoreUObject.IntVector
// Kind: ScriptStruct; super: none
struct FIntVector
{
public:
    std::int32_t X; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t Y; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t Z; // 0x0008 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FIntVector, X) == 0, "Offset mismatch for FIntVector::X");
static_assert(offsetof(FIntVector, Y) == 4, "Offset mismatch for FIntVector::Y");
static_assert(offsetof(FIntVector, Z) == 8, "Offset mismatch for FIntVector::Z");

// /Script/CoreUObject.IntVector2
// Kind: ScriptStruct; super: none
struct FIntVector2
{
public:
    std::int32_t X; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t Y; // 0x0004 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FIntVector2, X) == 0, "Offset mismatch for FIntVector2::X");
static_assert(offsetof(FIntVector2, Y) == 4, "Offset mismatch for FIntVector2::Y");

// /Script/CoreUObject.IntVector4
// Kind: ScriptStruct; super: none
struct FIntVector4
{
public:
    std::int32_t X; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t Y; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t Z; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::int32_t W; // 0x000C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FIntVector4, X) == 0, "Offset mismatch for FIntVector4::X");
static_assert(offsetof(FIntVector4, Y) == 4, "Offset mismatch for FIntVector4::Y");
static_assert(offsetof(FIntVector4, Z) == 8, "Offset mismatch for FIntVector4::Z");
static_assert(offsetof(FIntVector4, W) == 12, "Offset mismatch for FIntVector4::W");

// /Script/CoreUObject.InterpCurveFloat
// Kind: ScriptStruct; super: none
struct FInterpCurveFloat
{
public:
    TArray<void*> Points; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bIsLooped; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0011
    float LoopKeyOffset; // 0x0014 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FInterpCurveFloat, Points) == 0, "Offset mismatch for FInterpCurveFloat::Points");
static_assert(offsetof(FInterpCurveFloat, bIsLooped) == 16, "Offset mismatch for FInterpCurveFloat::bIsLooped");
static_assert(offsetof(FInterpCurveFloat, LoopKeyOffset) == 20, "Offset mismatch for FInterpCurveFloat::LoopKeyOffset");

// /Script/CoreUObject.InterpCurveLinearColor
// Kind: ScriptStruct; super: none
struct FInterpCurveLinearColor
{
public:
    TArray<void*> Points; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bIsLooped; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0011
    float LoopKeyOffset; // 0x0014 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FInterpCurveLinearColor, Points) == 0, "Offset mismatch for FInterpCurveLinearColor::Points");
static_assert(offsetof(FInterpCurveLinearColor, bIsLooped) == 16, "Offset mismatch for FInterpCurveLinearColor::bIsLooped");
static_assert(offsetof(FInterpCurveLinearColor, LoopKeyOffset) == 20, "Offset mismatch for FInterpCurveLinearColor::LoopKeyOffset");

// /Script/CoreUObject.InterpCurvePointFloat
// Kind: ScriptStruct; super: none
struct FInterpCurvePointFloat
{
public:
    float InVal; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float OutVal; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float ArriveTangent; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float LeaveTangent; // 0x000C (Size: 0x4, Type: FloatProperty)
    std::uint8_t InterpMode; // 0x0010 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FInterpCurvePointFloat, InVal) == 0, "Offset mismatch for FInterpCurvePointFloat::InVal");
static_assert(offsetof(FInterpCurvePointFloat, OutVal) == 4, "Offset mismatch for FInterpCurvePointFloat::OutVal");
static_assert(offsetof(FInterpCurvePointFloat, ArriveTangent) == 8, "Offset mismatch for FInterpCurvePointFloat::ArriveTangent");
static_assert(offsetof(FInterpCurvePointFloat, LeaveTangent) == 12, "Offset mismatch for FInterpCurvePointFloat::LeaveTangent");
static_assert(offsetof(FInterpCurvePointFloat, InterpMode) == 16, "Offset mismatch for FInterpCurvePointFloat::InterpMode");

// /Script/CoreUObject.InterpCurvePointLinearColor
// Kind: ScriptStruct; super: none
struct FInterpCurvePointLinearColor
{
public:
    float InVal; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t OutVal[0x10]; // 0x0004 (Size: 0x10, Type: StructProperty)
    std::uint8_t ArriveTangent[0x10]; // 0x0014 (Size: 0x10, Type: StructProperty)
    std::uint8_t LeaveTangent[0x10]; // 0x0024 (Size: 0x10, Type: StructProperty)
    std::uint8_t InterpMode; // 0x0034 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FInterpCurvePointLinearColor, InVal) == 0, "Offset mismatch for FInterpCurvePointLinearColor::InVal");
static_assert(offsetof(FInterpCurvePointLinearColor, OutVal) == 4, "Offset mismatch for FInterpCurvePointLinearColor::OutVal");
static_assert(offsetof(FInterpCurvePointLinearColor, ArriveTangent) == 20, "Offset mismatch for FInterpCurvePointLinearColor::ArriveTangent");
static_assert(offsetof(FInterpCurvePointLinearColor, LeaveTangent) == 36, "Offset mismatch for FInterpCurvePointLinearColor::LeaveTangent");
static_assert(offsetof(FInterpCurvePointLinearColor, InterpMode) == 52, "Offset mismatch for FInterpCurvePointLinearColor::InterpMode");

// /Script/CoreUObject.InterpCurvePointQuat
// Kind: ScriptStruct; super: none
struct FInterpCurvePointQuat
{
public:
    float InVal; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0xC]; // 0x0004
    std::uint8_t OutVal[0x20]; // 0x0010 (Size: 0x20, Type: StructProperty)
    std::uint8_t ArriveTangent[0x20]; // 0x0030 (Size: 0x20, Type: StructProperty)
    std::uint8_t LeaveTangent[0x20]; // 0x0050 (Size: 0x20, Type: StructProperty)
    std::uint8_t InterpMode; // 0x0070 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FInterpCurvePointQuat, InVal) == 0, "Offset mismatch for FInterpCurvePointQuat::InVal");
static_assert(offsetof(FInterpCurvePointQuat, OutVal) == 16, "Offset mismatch for FInterpCurvePointQuat::OutVal");
static_assert(offsetof(FInterpCurvePointQuat, ArriveTangent) == 48, "Offset mismatch for FInterpCurvePointQuat::ArriveTangent");
static_assert(offsetof(FInterpCurvePointQuat, LeaveTangent) == 80, "Offset mismatch for FInterpCurvePointQuat::LeaveTangent");
static_assert(offsetof(FInterpCurvePointQuat, InterpMode) == 112, "Offset mismatch for FInterpCurvePointQuat::InterpMode");

// /Script/CoreUObject.InterpCurvePointTwoVectors
// Kind: ScriptStruct; super: none
struct FInterpCurvePointTwoVectors
{
public:
    float InVal; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    std::uint8_t OutVal[0x30]; // 0x0008 (Size: 0x30, Type: StructProperty)
    std::uint8_t ArriveTangent[0x30]; // 0x0038 (Size: 0x30, Type: StructProperty)
    std::uint8_t LeaveTangent[0x30]; // 0x0068 (Size: 0x30, Type: StructProperty)
    std::uint8_t InterpMode; // 0x0098 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FInterpCurvePointTwoVectors, InVal) == 0, "Offset mismatch for FInterpCurvePointTwoVectors::InVal");
static_assert(offsetof(FInterpCurvePointTwoVectors, OutVal) == 8, "Offset mismatch for FInterpCurvePointTwoVectors::OutVal");
static_assert(offsetof(FInterpCurvePointTwoVectors, ArriveTangent) == 56, "Offset mismatch for FInterpCurvePointTwoVectors::ArriveTangent");
static_assert(offsetof(FInterpCurvePointTwoVectors, LeaveTangent) == 104, "Offset mismatch for FInterpCurvePointTwoVectors::LeaveTangent");
static_assert(offsetof(FInterpCurvePointTwoVectors, InterpMode) == 152, "Offset mismatch for FInterpCurvePointTwoVectors::InterpMode");

// /Script/CoreUObject.InterpCurvePointVector
// Kind: ScriptStruct; super: none
struct FInterpCurvePointVector
{
public:
    float InVal; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    std::uint8_t OutVal[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t ArriveTangent[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    std::uint8_t LeaveTangent[0x18]; // 0x0038 (Size: 0x18, Type: StructProperty)
    std::uint8_t InterpMode; // 0x0050 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FInterpCurvePointVector, InVal) == 0, "Offset mismatch for FInterpCurvePointVector::InVal");
static_assert(offsetof(FInterpCurvePointVector, OutVal) == 8, "Offset mismatch for FInterpCurvePointVector::OutVal");
static_assert(offsetof(FInterpCurvePointVector, ArriveTangent) == 32, "Offset mismatch for FInterpCurvePointVector::ArriveTangent");
static_assert(offsetof(FInterpCurvePointVector, LeaveTangent) == 56, "Offset mismatch for FInterpCurvePointVector::LeaveTangent");
static_assert(offsetof(FInterpCurvePointVector, InterpMode) == 80, "Offset mismatch for FInterpCurvePointVector::InterpMode");

// /Script/CoreUObject.InterpCurvePointVector2D
// Kind: ScriptStruct; super: none
struct FInterpCurvePointVector2D
{
public:
    float InVal; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    std::uint8_t OutVal[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t ArriveTangent[0x10]; // 0x0018 (Size: 0x10, Type: StructProperty)
    std::uint8_t LeaveTangent[0x10]; // 0x0028 (Size: 0x10, Type: StructProperty)
    std::uint8_t InterpMode; // 0x0038 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FInterpCurvePointVector2D, InVal) == 0, "Offset mismatch for FInterpCurvePointVector2D::InVal");
static_assert(offsetof(FInterpCurvePointVector2D, OutVal) == 8, "Offset mismatch for FInterpCurvePointVector2D::OutVal");
static_assert(offsetof(FInterpCurvePointVector2D, ArriveTangent) == 24, "Offset mismatch for FInterpCurvePointVector2D::ArriveTangent");
static_assert(offsetof(FInterpCurvePointVector2D, LeaveTangent) == 40, "Offset mismatch for FInterpCurvePointVector2D::LeaveTangent");
static_assert(offsetof(FInterpCurvePointVector2D, InterpMode) == 56, "Offset mismatch for FInterpCurvePointVector2D::InterpMode");

// /Script/CoreUObject.InterpCurveQuat
// Kind: ScriptStruct; super: none
struct FInterpCurveQuat
{
public:
    TArray<void*> Points; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bIsLooped; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0011
    float LoopKeyOffset; // 0x0014 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FInterpCurveQuat, Points) == 0, "Offset mismatch for FInterpCurveQuat::Points");
static_assert(offsetof(FInterpCurveQuat, bIsLooped) == 16, "Offset mismatch for FInterpCurveQuat::bIsLooped");
static_assert(offsetof(FInterpCurveQuat, LoopKeyOffset) == 20, "Offset mismatch for FInterpCurveQuat::LoopKeyOffset");

// /Script/CoreUObject.InterpCurveTwoVectors
// Kind: ScriptStruct; super: none
struct FInterpCurveTwoVectors
{
public:
    TArray<void*> Points; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bIsLooped; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0011
    float LoopKeyOffset; // 0x0014 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FInterpCurveTwoVectors, Points) == 0, "Offset mismatch for FInterpCurveTwoVectors::Points");
static_assert(offsetof(FInterpCurveTwoVectors, bIsLooped) == 16, "Offset mismatch for FInterpCurveTwoVectors::bIsLooped");
static_assert(offsetof(FInterpCurveTwoVectors, LoopKeyOffset) == 20, "Offset mismatch for FInterpCurveTwoVectors::LoopKeyOffset");

// /Script/CoreUObject.InterpCurveVector
// Kind: ScriptStruct; super: none
struct FInterpCurveVector
{
public:
    TArray<void*> Points; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bIsLooped; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0011
    float LoopKeyOffset; // 0x0014 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FInterpCurveVector, Points) == 0, "Offset mismatch for FInterpCurveVector::Points");
static_assert(offsetof(FInterpCurveVector, bIsLooped) == 16, "Offset mismatch for FInterpCurveVector::bIsLooped");
static_assert(offsetof(FInterpCurveVector, LoopKeyOffset) == 20, "Offset mismatch for FInterpCurveVector::LoopKeyOffset");

// /Script/CoreUObject.InterpCurveVector2D
// Kind: ScriptStruct; super: none
struct FInterpCurveVector2D
{
public:
    TArray<void*> Points; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bIsLooped; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0011
    float LoopKeyOffset; // 0x0014 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FInterpCurveVector2D, Points) == 0, "Offset mismatch for FInterpCurveVector2D::Points");
static_assert(offsetof(FInterpCurveVector2D, bIsLooped) == 16, "Offset mismatch for FInterpCurveVector2D::bIsLooped");
static_assert(offsetof(FInterpCurveVector2D, LoopKeyOffset) == 20, "Offset mismatch for FInterpCurveVector2D::LoopKeyOffset");

// /Script/CoreUObject.LinearColor
// Kind: ScriptStruct; super: none
struct FLinearColor
{
public:
    float R; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float G; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float B; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float A; // 0x000C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FLinearColor, R) == 0, "Offset mismatch for FLinearColor::R");
static_assert(offsetof(FLinearColor, G) == 4, "Offset mismatch for FLinearColor::G");
static_assert(offsetof(FLinearColor, B) == 8, "Offset mismatch for FLinearColor::B");
static_assert(offsetof(FLinearColor, A) == 12, "Offset mismatch for FLinearColor::A");

// /Script/CoreUObject.Matrix
// Kind: ScriptStruct; super: none
struct FMatrix
{
public:
    std::uint8_t XPlane[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    std::uint8_t YPlane[0x20]; // 0x0020 (Size: 0x20, Type: StructProperty)
    std::uint8_t ZPlane[0x20]; // 0x0040 (Size: 0x20, Type: StructProperty)
    std::uint8_t WPlane[0x1]; // 0x0060 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMatrix, XPlane) == 0, "Offset mismatch for FMatrix::XPlane");
static_assert(offsetof(FMatrix, YPlane) == 32, "Offset mismatch for FMatrix::YPlane");
static_assert(offsetof(FMatrix, ZPlane) == 64, "Offset mismatch for FMatrix::ZPlane");
static_assert(offsetof(FMatrix, WPlane) == 96, "Offset mismatch for FMatrix::WPlane");

// /Script/CoreUObject.Matrix44d
// Kind: ScriptStruct; super: none
struct FMatrix44d
{
public:
    std::uint8_t XPlane[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    std::uint8_t YPlane[0x20]; // 0x0020 (Size: 0x20, Type: StructProperty)
    std::uint8_t ZPlane[0x20]; // 0x0040 (Size: 0x20, Type: StructProperty)
    std::uint8_t WPlane[0x1]; // 0x0060 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMatrix44d, XPlane) == 0, "Offset mismatch for FMatrix44d::XPlane");
static_assert(offsetof(FMatrix44d, YPlane) == 32, "Offset mismatch for FMatrix44d::YPlane");
static_assert(offsetof(FMatrix44d, ZPlane) == 64, "Offset mismatch for FMatrix44d::ZPlane");
static_assert(offsetof(FMatrix44d, WPlane) == 96, "Offset mismatch for FMatrix44d::WPlane");

// /Script/CoreUObject.Matrix44f
// Kind: ScriptStruct; super: none
struct FMatrix44f
{
public:
    std::uint8_t XPlane[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t YPlane[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t ZPlane[0x10]; // 0x0020 (Size: 0x10, Type: StructProperty)
    std::uint8_t WPlane[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMatrix44f, XPlane) == 0, "Offset mismatch for FMatrix44f::XPlane");
static_assert(offsetof(FMatrix44f, YPlane) == 16, "Offset mismatch for FMatrix44f::YPlane");
static_assert(offsetof(FMatrix44f, ZPlane) == 32, "Offset mismatch for FMatrix44f::ZPlane");
static_assert(offsetof(FMatrix44f, WPlane) == 48, "Offset mismatch for FMatrix44f::WPlane");

// /Script/CoreUObject.MusicalTime
// Kind: ScriptStruct; super: none
struct FMusicalTime
{
public:
    std::int32_t Bar; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t TickInBar; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t TicksPerBar; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::int32_t TicksPerBeat; // 0x000C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FMusicalTime, Bar) == 0, "Offset mismatch for FMusicalTime::Bar");
static_assert(offsetof(FMusicalTime, TickInBar) == 4, "Offset mismatch for FMusicalTime::TickInBar");
static_assert(offsetof(FMusicalTime, TicksPerBar) == 8, "Offset mismatch for FMusicalTime::TicksPerBar");
static_assert(offsetof(FMusicalTime, TicksPerBeat) == 12, "Offset mismatch for FMusicalTime::TicksPerBeat");

// /Script/CoreUObject.ObjectCookedMetaDataStore
// Kind: ScriptStruct; super: none
struct FObjectCookedMetaDataStore
{
public:
    TMap<void*, void*> ObjectMetaData; // 0x0000 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FObjectCookedMetaDataStore, ObjectMetaData) == 0, "Offset mismatch for FObjectCookedMetaDataStore::ObjectMetaData");

// /Script/CoreUObject.OrientedBox
// Kind: ScriptStruct; super: none
struct FOrientedBox
{
public:
    std::uint8_t Center[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t AxisX[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t AxisY[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    std::uint8_t AxisZ[0x18]; // 0x0048 (Size: 0x18, Type: StructProperty)
    double ExtentX; // 0x0060 (Size: 0x8, Type: DoubleProperty)
    double ExtentY; // 0x0068 (Size: 0x8, Type: DoubleProperty)
    double ExtentZ; // 0x0070 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FOrientedBox, Center) == 0, "Offset mismatch for FOrientedBox::Center");
static_assert(offsetof(FOrientedBox, AxisX) == 24, "Offset mismatch for FOrientedBox::AxisX");
static_assert(offsetof(FOrientedBox, AxisY) == 48, "Offset mismatch for FOrientedBox::AxisY");
static_assert(offsetof(FOrientedBox, AxisZ) == 72, "Offset mismatch for FOrientedBox::AxisZ");
static_assert(offsetof(FOrientedBox, ExtentX) == 96, "Offset mismatch for FOrientedBox::ExtentX");
static_assert(offsetof(FOrientedBox, ExtentY) == 104, "Offset mismatch for FOrientedBox::ExtentY");
static_assert(offsetof(FOrientedBox, ExtentZ) == 112, "Offset mismatch for FOrientedBox::ExtentZ");

// /Script/CoreUObject.OverriddenPropertyNode
// Kind: ScriptStruct; super: none
struct FOverriddenPropertyNode
{
public:
    std::uint8_t NodeId[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    std::uint8_t Operation; // 0x0020 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FOverriddenPropertyNode, NodeId) == 0, "Offset mismatch for FOverriddenPropertyNode::NodeId");
static_assert(offsetof(FOverriddenPropertyNode, Operation) == 32, "Offset mismatch for FOverriddenPropertyNode::Operation");

// /Script/CoreUObject.OverriddenPropertyNodeID
// Kind: ScriptStruct; super: none
struct FOverriddenPropertyNodeID
{
public:
    std::uint8_t Path[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    TWeakObjectPtr<void> Object; // 0x0018 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FOverriddenPropertyNodeID, Path) == 0, "Offset mismatch for FOverriddenPropertyNodeID::Path");
static_assert(offsetof(FOverriddenPropertyNodeID, Object) == 24, "Offset mismatch for FOverriddenPropertyNodeID::Object");

// /Script/CoreUObject.OverriddenPropertyPath
// Kind: ScriptStruct; super: none
struct FOverriddenPropertyPath
{
public:
    TArray<void*> Path; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint64_t CachedHash; // 0x0010 (Size: 0x8, Type: UInt64Property)
};

static_assert(offsetof(FOverriddenPropertyPath, Path) == 0, "Offset mismatch for FOverriddenPropertyPath::Path");
static_assert(offsetof(FOverriddenPropertyPath, CachedHash) == 16, "Offset mismatch for FOverriddenPropertyPath::CachedHash");

// /Script/CoreUObject.OverriddenPropertySet
// Kind: ScriptStruct; super: none
struct FOverriddenPropertySet
{
public:
    void* Owner; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bWasAdded; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0009
    std::uint8_t RootNode[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FOverriddenPropertySet, Owner) == 0, "Offset mismatch for FOverriddenPropertySet::Owner");
static_assert(offsetof(FOverriddenPropertySet, bWasAdded) == 8, "Offset mismatch for FOverriddenPropertySet::bWasAdded");
static_assert(offsetof(FOverriddenPropertySet, RootNode) == 16, "Offset mismatch for FOverriddenPropertySet::RootNode");

// /Script/CoreUObject.PackedNormal
// Kind: ScriptStruct; super: none
struct FPackedNormal
{
public:
    std::uint8_t X; // 0x0000 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Y; // 0x0001 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Z; // 0x0002 (Size: 0x1, Type: ByteProperty)
    std::uint8_t W; // 0x0003 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FPackedNormal, X) == 0, "Offset mismatch for FPackedNormal::X");
static_assert(offsetof(FPackedNormal, Y) == 1, "Offset mismatch for FPackedNormal::Y");
static_assert(offsetof(FPackedNormal, Z) == 2, "Offset mismatch for FPackedNormal::Z");
static_assert(offsetof(FPackedNormal, W) == 3, "Offset mismatch for FPackedNormal::W");

// /Script/CoreUObject.PackedRGB10A2N
// Kind: ScriptStruct; super: none
struct FPackedRGB10A2N
{
public:
    std::int32_t Packed; // 0x0000 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FPackedRGB10A2N, Packed) == 0, "Offset mismatch for FPackedRGB10A2N::Packed");

// /Script/CoreUObject.PackedRGBA16N
// Kind: ScriptStruct; super: none
struct FPackedRGBA16N
{
public:
    std::int32_t XY; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t ZW; // 0x0004 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FPackedRGBA16N, XY) == 0, "Offset mismatch for FPackedRGBA16N::XY");
static_assert(offsetof(FPackedRGBA16N, ZW) == 4, "Offset mismatch for FPackedRGBA16N::ZW");

// /Script/CoreUObject.PackedRemoteObjectHeader
// Kind: ScriptStruct; super: none
struct FPackedRemoteObjectHeader
{
public:
    std::uint16_t NameIndex; // 0x0000 (Size: 0x2, Type: UInt16Property)
    std::uint16_t IdIndex; // 0x0002 (Size: 0x2, Type: UInt16Property)
    std::uint16_t OuterIdIndex; // 0x0004 (Size: 0x2, Type: UInt16Property)
    std::uint16_t ClassIndex; // 0x0006 (Size: 0x2, Type: UInt16Property)
};

static_assert(offsetof(FPackedRemoteObjectHeader, NameIndex) == 0, "Offset mismatch for FPackedRemoteObjectHeader::NameIndex");
static_assert(offsetof(FPackedRemoteObjectHeader, IdIndex) == 2, "Offset mismatch for FPackedRemoteObjectHeader::IdIndex");
static_assert(offsetof(FPackedRemoteObjectHeader, OuterIdIndex) == 4, "Offset mismatch for FPackedRemoteObjectHeader::OuterIdIndex");
static_assert(offsetof(FPackedRemoteObjectHeader, ClassIndex) == 6, "Offset mismatch for FPackedRemoteObjectHeader::ClassIndex");

// /Script/CoreUObject.PackedRemoteObjectPathName
// Kind: ScriptStruct; super: none
struct FPackedRemoteObjectPathName
{
public:
    TArray<void*> RemoteIds; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Names; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPackedRemoteObjectPathName, RemoteIds) == 0, "Offset mismatch for FPackedRemoteObjectPathName::RemoteIds");
static_assert(offsetof(FPackedRemoteObjectPathName, Names) == 16, "Offset mismatch for FPackedRemoteObjectPathName::Names");

// /Script/CoreUObject.PerPlatformBool
// Kind: ScriptStruct; super: none
struct FPerPlatformBool
{
public:
    std::uint8_t Default; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPerPlatformBool, Default) == 0, "Offset mismatch for FPerPlatformBool::Default");

// /Script/CoreUObject.PerPlatformFloat
// Kind: ScriptStruct; super: none
struct FPerPlatformFloat
{
public:
    float Default; // 0x0000 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FPerPlatformFloat, Default) == 0, "Offset mismatch for FPerPlatformFloat::Default");

// /Script/CoreUObject.PerPlatformFrameRate
// Kind: ScriptStruct; super: none
struct FPerPlatformFrameRate
{
public:
    std::uint8_t Default[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPerPlatformFrameRate, Default) == 0, "Offset mismatch for FPerPlatformFrameRate::Default");

// /Script/CoreUObject.PerPlatformInt
// Kind: ScriptStruct; super: none
struct FPerPlatformInt
{
public:
    std::int32_t Default; // 0x0000 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FPerPlatformInt, Default) == 0, "Offset mismatch for FPerPlatformInt::Default");

// /Script/CoreUObject.Plane
// Kind: ScriptStruct; super: Vector
struct FPlane
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    double W; // 0x0018 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FPlane, W) == 24, "Offset mismatch for FPlane::W");

// /Script/CoreUObject.Plane4d
// Kind: ScriptStruct; super: Vector3d
struct FPlane4d
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    double W; // 0x0018 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FPlane4d, W) == 24, "Offset mismatch for FPlane4d::W");

// /Script/CoreUObject.Plane4f
// Kind: ScriptStruct; super: Vector3f
struct FPlane4f
{
public:
    std::uint8_t Pad_0000[0xC]; // 0x0000
    float W; // 0x000C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FPlane4f, W) == 12, "Offset mismatch for FPlane4f::W");

// /Script/CoreUObject.PlatformInputDeviceState
// Kind: ScriptStruct; super: none
struct FPlatformInputDeviceState
{
public:
    std::uint8_t OwningPlatformUser[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::uint8_t ConnectionState; // 0x0004 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FPlatformInputDeviceState, OwningPlatformUser) == 0, "Offset mismatch for FPlatformInputDeviceState::OwningPlatformUser");
static_assert(offsetof(FPlatformInputDeviceState, ConnectionState) == 4, "Offset mismatch for FPlatformInputDeviceState::ConnectionState");

// /Script/CoreUObject.PlatformUserId
// Kind: ScriptStruct; super: none
struct FPlatformUserId
{
public:
    std::int32_t InternalId; // 0x0000 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FPlatformUserId, InternalId) == 0, "Offset mismatch for FPlatformUserId::InternalId");

// /Script/CoreUObject.PolyglotTextData
// Kind: ScriptStruct; super: none
struct FPolyglotTextData
{
public:
    std::uint8_t Category; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    FString NativeCulture; // 0x0008 (Size: 0x10, Type: StrProperty)
    FString Namespace; // 0x0018 (Size: 0x10, Type: StrProperty)
    FString Key; // 0x0028 (Size: 0x10, Type: StrProperty)
    FString NativeString; // 0x0038 (Size: 0x10, Type: StrProperty)
    TMap<void*, void*> LocalizedStrings; // 0x0048 (Size: 0x10, Type: MapProperty)
    std::uint8_t bIsMinimalPatch; // 0x0058 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0059
    FText CachedText; // 0x0060 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(FPolyglotTextData, Category) == 0, "Offset mismatch for FPolyglotTextData::Category");
static_assert(offsetof(FPolyglotTextData, NativeCulture) == 8, "Offset mismatch for FPolyglotTextData::NativeCulture");
static_assert(offsetof(FPolyglotTextData, Namespace) == 24, "Offset mismatch for FPolyglotTextData::Namespace");
static_assert(offsetof(FPolyglotTextData, Key) == 40, "Offset mismatch for FPolyglotTextData::Key");
static_assert(offsetof(FPolyglotTextData, NativeString) == 56, "Offset mismatch for FPolyglotTextData::NativeString");
static_assert(offsetof(FPolyglotTextData, LocalizedStrings) == 72, "Offset mismatch for FPolyglotTextData::LocalizedStrings");
static_assert(offsetof(FPolyglotTextData, bIsMinimalPatch) == 88, "Offset mismatch for FPolyglotTextData::bIsMinimalPatch");
static_assert(offsetof(FPolyglotTextData, CachedText) == 96, "Offset mismatch for FPolyglotTextData::CachedText");

// /Script/CoreUObject.PredictsVarInfo
// Kind: ScriptStruct; super: none
struct FPredictsVarInfo
{
public:
    std::uint8_t PropertyName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t bExtern; // 0x0004 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPredictsVarInfo, PropertyName) == 0, "Offset mismatch for FPredictsVarInfo::PropertyName");
static_assert(offsetof(FPredictsVarInfo, bExtern) == 4, "Offset mismatch for FPredictsVarInfo::bExtern");

// /Script/CoreUObject.PrimaryAssetId
// Kind: ScriptStruct; super: none
struct FPrimaryAssetId
{
public:
    std::uint8_t PrimaryAssetType[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    FName PrimaryAssetName; // 0x0004 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FPrimaryAssetId, PrimaryAssetType) == 0, "Offset mismatch for FPrimaryAssetId::PrimaryAssetType");
static_assert(offsetof(FPrimaryAssetId, PrimaryAssetName) == 4, "Offset mismatch for FPrimaryAssetId::PrimaryAssetName");

// /Script/CoreUObject.PrimaryAssetType
// Kind: ScriptStruct; super: none
struct FPrimaryAssetType
{
public:
    FName Name; // 0x0000 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FPrimaryAssetType, Name) == 0, "Offset mismatch for FPrimaryAssetType::Name");

// /Script/CoreUObject.ProfileLocus
// Kind: ScriptStruct; super: none
struct FProfileLocus
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CoreUObject.PropertyBagContainerTypes
// Kind: ScriptStruct; super: none
struct FPropertyBagContainerTypes
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CoreUObject.PropertyBagMissingStruct
// Kind: ScriptStruct; super: none
struct FPropertyBagMissingStruct
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CoreUObject.PropertyBagPropertyDesc
// Kind: ScriptStruct; super: none
struct FPropertyBagPropertyDesc
{
public:
    void* ValueTypeObject; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ID[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t Name[0x4]; // 0x0018 (Size: 0x4, Type: NameProperty)
    std::uint8_t ValueType; // 0x001C (Size: 0x1, Type: EnumProperty)
    std::uint8_t ContainerTypes[0x3]; // 0x001D (Size: 0x3, Type: StructProperty)
    std::uint64_t PropertyFlags; // 0x0020 (Size: 0x8, Type: UInt64Property)
    std::uint8_t KeyType; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0029
    void* KeyTypeObject; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FPropertyBagPropertyDesc, ValueTypeObject) == 0, "Offset mismatch for FPropertyBagPropertyDesc::ValueTypeObject");
static_assert(offsetof(FPropertyBagPropertyDesc, ID) == 8, "Offset mismatch for FPropertyBagPropertyDesc::ID");
static_assert(offsetof(FPropertyBagPropertyDesc, Name) == 24, "Offset mismatch for FPropertyBagPropertyDesc::Name");
static_assert(offsetof(FPropertyBagPropertyDesc, ValueType) == 28, "Offset mismatch for FPropertyBagPropertyDesc::ValueType");
static_assert(offsetof(FPropertyBagPropertyDesc, ContainerTypes) == 29, "Offset mismatch for FPropertyBagPropertyDesc::ContainerTypes");
static_assert(offsetof(FPropertyBagPropertyDesc, PropertyFlags) == 32, "Offset mismatch for FPropertyBagPropertyDesc::PropertyFlags");
static_assert(offsetof(FPropertyBagPropertyDesc, KeyType) == 40, "Offset mismatch for FPropertyBagPropertyDesc::KeyType");
static_assert(offsetof(FPropertyBagPropertyDesc, KeyTypeObject) == 48, "Offset mismatch for FPropertyBagPropertyDesc::KeyTypeObject");

// /Script/CoreUObject.PropertyBagPropertyDescMetaData
// Kind: ScriptStruct; super: none
struct FPropertyBagPropertyDescMetaData
{
public:
    FName Key; // 0x0000 (Size: 0x8, Type: NameProperty)
    FString Value; // 0x0008 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FPropertyBagPropertyDescMetaData, Key) == 0, "Offset mismatch for FPropertyBagPropertyDescMetaData::Key");
static_assert(offsetof(FPropertyBagPropertyDescMetaData, Value) == 8, "Offset mismatch for FPropertyBagPropertyDescMetaData::Value");

// /Script/CoreUObject.PropertyTextFName
// Kind: ScriptStruct; super: none
struct FPropertyTextFName
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CoreUObject.PropertyTextString
// Kind: ScriptStruct; super: none
struct FPropertyTextString
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CoreUObject.QualifiedFrameTime
// Kind: ScriptStruct; super: none
struct FQualifiedFrameTime
{
public:
    std::uint8_t time[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t Rate[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FQualifiedFrameTime, time) == 0, "Offset mismatch for FQualifiedFrameTime::time");
static_assert(offsetof(FQualifiedFrameTime, Rate) == 8, "Offset mismatch for FQualifiedFrameTime::Rate");

// /Script/CoreUObject.Quat
// Kind: ScriptStruct; super: none
struct FQuat
{
public:
    double X; // 0x0000 (Size: 0x8, Type: DoubleProperty)
    double Y; // 0x0008 (Size: 0x8, Type: DoubleProperty)
    double Z; // 0x0010 (Size: 0x8, Type: DoubleProperty)
    double W; // 0x0018 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FQuat, X) == 0, "Offset mismatch for FQuat::X");
static_assert(offsetof(FQuat, Y) == 8, "Offset mismatch for FQuat::Y");
static_assert(offsetof(FQuat, Z) == 16, "Offset mismatch for FQuat::Z");
static_assert(offsetof(FQuat, W) == 24, "Offset mismatch for FQuat::W");

// /Script/CoreUObject.Quat4d
// Kind: ScriptStruct; super: none
struct FQuat4d
{
public:
    double X; // 0x0000 (Size: 0x8, Type: DoubleProperty)
    double Y; // 0x0008 (Size: 0x8, Type: DoubleProperty)
    double Z; // 0x0010 (Size: 0x8, Type: DoubleProperty)
    double W; // 0x0018 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FQuat4d, X) == 0, "Offset mismatch for FQuat4d::X");
static_assert(offsetof(FQuat4d, Y) == 8, "Offset mismatch for FQuat4d::Y");
static_assert(offsetof(FQuat4d, Z) == 16, "Offset mismatch for FQuat4d::Z");
static_assert(offsetof(FQuat4d, W) == 24, "Offset mismatch for FQuat4d::W");

// /Script/CoreUObject.Quat4f
// Kind: ScriptStruct; super: none
struct FQuat4f
{
public:
    float X; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float Y; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float Z; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float W; // 0x000C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FQuat4f, X) == 0, "Offset mismatch for FQuat4f::X");
static_assert(offsetof(FQuat4f, Y) == 4, "Offset mismatch for FQuat4f::Y");
static_assert(offsetof(FQuat4f, Z) == 8, "Offset mismatch for FQuat4f::Z");
static_assert(offsetof(FQuat4f, W) == 12, "Offset mismatch for FQuat4f::W");

// /Script/CoreUObject.RandomStream
// Kind: ScriptStruct; super: none
struct FRandomStream
{
public:
    std::int32_t InitialSeed; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t Seed; // 0x0004 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FRandomStream, InitialSeed) == 0, "Offset mismatch for FRandomStream::InitialSeed");
static_assert(offsetof(FRandomStream, Seed) == 4, "Offset mismatch for FRandomStream::Seed");

// /Script/CoreUObject.Ray
// Kind: ScriptStruct; super: none
struct FRay
{
public:
    std::uint8_t origin[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t Direction[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRay, origin) == 0, "Offset mismatch for FRay::origin");
static_assert(offsetof(FRay, Direction) == 24, "Offset mismatch for FRay::Direction");

// /Script/CoreUObject.Ray3d
// Kind: ScriptStruct; super: none
struct FRay3d
{
public:
    std::uint8_t origin[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t Direction[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRay3d, origin) == 0, "Offset mismatch for FRay3d::origin");
static_assert(offsetof(FRay3d, Direction) == 24, "Offset mismatch for FRay3d::Direction");

// /Script/CoreUObject.Ray3f
// Kind: ScriptStruct; super: none
struct FRay3f
{
public:
    std::uint8_t origin[0xC]; // 0x0000 (Size: 0xC, Type: StructProperty)
    std::uint8_t Direction[0x1]; // 0x000C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRay3f, origin) == 0, "Offset mismatch for FRay3f::origin");
static_assert(offsetof(FRay3f, Direction) == 12, "Offset mismatch for FRay3f::Direction");

// /Script/CoreUObject.RemoteObjectBytes
// Kind: ScriptStruct; super: none
struct FRemoteObjectBytes
{
public:
    TArray<void*> Bytes; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRemoteObjectBytes, Bytes) == 0, "Offset mismatch for FRemoteObjectBytes::Bytes");

// /Script/CoreUObject.RemoteObjectData
// Kind: ScriptStruct; super: none
struct FRemoteObjectData
{
public:
    std::uint8_t MigrationId[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t Tables[0x20]; // 0x0008 (Size: 0x20, Type: StructProperty)
    TArray<void*> PathNames; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SerializedObjectHeaders; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Bytes; // 0x0048 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRemoteObjectData, MigrationId) == 0, "Offset mismatch for FRemoteObjectData::MigrationId");
static_assert(offsetof(FRemoteObjectData, Tables) == 8, "Offset mismatch for FRemoteObjectData::Tables");
static_assert(offsetof(FRemoteObjectData, PathNames) == 40, "Offset mismatch for FRemoteObjectData::PathNames");
static_assert(offsetof(FRemoteObjectData, SerializedObjectHeaders) == 56, "Offset mismatch for FRemoteObjectData::SerializedObjectHeaders");
static_assert(offsetof(FRemoteObjectData, Bytes) == 72, "Offset mismatch for FRemoteObjectData::Bytes");

// /Script/CoreUObject.RemoteObjectId
// Kind: ScriptStruct; super: none
struct FRemoteObjectId
{
public:
    std::uint64_t ID; // 0x0000 (Size: 0x8, Type: UInt64Property)
};

static_assert(offsetof(FRemoteObjectId, ID) == 0, "Offset mismatch for FRemoteObjectId::ID");

// /Script/CoreUObject.RemoteObjectPathName
// Kind: ScriptStruct; super: RemoteObjectTables
struct FRemoteObjectPathName
{
public:
    TArray<void*> Names; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> RemoteIds; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRemoteObjectPathName, Names) == 0, "Offset mismatch for FRemoteObjectPathName::Names");
static_assert(offsetof(FRemoteObjectPathName, RemoteIds) == 16, "Offset mismatch for FRemoteObjectPathName::RemoteIds");

// /Script/CoreUObject.RemoteObjectReference
// Kind: ScriptStruct; super: none
struct FRemoteObjectReference
{
public:
    std::uint8_t ObjectID[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t ServerID[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRemoteObjectReference, ObjectID) == 0, "Offset mismatch for FRemoteObjectReference::ObjectID");
static_assert(offsetof(FRemoteObjectReference, ServerID) == 8, "Offset mismatch for FRemoteObjectReference::ServerID");

// /Script/CoreUObject.RemoteObjectTables
// Kind: ScriptStruct; super: none
struct FRemoteObjectTables
{
public:
    TArray<void*> Names; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> RemoteIds; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRemoteObjectTables, Names) == 0, "Offset mismatch for FRemoteObjectTables::Names");
static_assert(offsetof(FRemoteObjectTables, RemoteIds) == 16, "Offset mismatch for FRemoteObjectTables::RemoteIds");

// /Script/CoreUObject.RemoteServerId
// Kind: ScriptStruct; super: none
struct FRemoteServerId
{
public:
    std::uint32_t ID; // 0x0000 (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(FRemoteServerId, ID) == 0, "Offset mismatch for FRemoteServerId::ID");

// /Script/CoreUObject.RemoteTransactionId
// Kind: ScriptStruct; super: none
struct FRemoteTransactionId
{
public:
    std::uint32_t ID; // 0x0000 (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(FRemoteTransactionId, ID) == 0, "Offset mismatch for FRemoteTransactionId::ID");

// /Script/CoreUObject.RemoteWorkPriority
// Kind: ScriptStruct; super: none
struct FRemoteWorkPriority
{
public:
    std::uint64_t PackedData; // 0x0000 (Size: 0x8, Type: UInt64Property)
};

static_assert(offsetof(FRemoteWorkPriority, PackedData) == 0, "Offset mismatch for FRemoteWorkPriority::PackedData");

// /Script/CoreUObject.Rotator
// Kind: ScriptStruct; super: none
struct FRotator
{
public:
    double Pitch; // 0x0000 (Size: 0x8, Type: DoubleProperty)
    double Yaw; // 0x0008 (Size: 0x8, Type: DoubleProperty)
    double Roll; // 0x0010 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FRotator, Pitch) == 0, "Offset mismatch for FRotator::Pitch");
static_assert(offsetof(FRotator, Yaw) == 8, "Offset mismatch for FRotator::Yaw");
static_assert(offsetof(FRotator, Roll) == 16, "Offset mismatch for FRotator::Roll");

// /Script/CoreUObject.Rotator3d
// Kind: ScriptStruct; super: none
struct FRotator3d
{
public:
    double Pitch; // 0x0000 (Size: 0x8, Type: DoubleProperty)
    double Yaw; // 0x0008 (Size: 0x8, Type: DoubleProperty)
    double Roll; // 0x0010 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FRotator3d, Pitch) == 0, "Offset mismatch for FRotator3d::Pitch");
static_assert(offsetof(FRotator3d, Yaw) == 8, "Offset mismatch for FRotator3d::Yaw");
static_assert(offsetof(FRotator3d, Roll) == 16, "Offset mismatch for FRotator3d::Roll");

// /Script/CoreUObject.Rotator3f
// Kind: ScriptStruct; super: none
struct FRotator3f
{
public:
    float Pitch; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float Yaw; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float Roll; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRotator3f, Pitch) == 0, "Offset mismatch for FRotator3f::Pitch");
static_assert(offsetof(FRotator3f, Yaw) == 4, "Offset mismatch for FRotator3f::Yaw");
static_assert(offsetof(FRotator3f, Roll) == 8, "Offset mismatch for FRotator3f::Roll");

// /Script/CoreUObject.SharedStruct
// Kind: ScriptStruct; super: none
struct FSharedStruct
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CoreUObject.SoftClassPath
// Kind: ScriptStruct; super: SoftObjectPath
struct FSoftClassPath
{
public:
    std::uint8_t AssetPath[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t SubPathString[0x1]; // 0x0008 (Size: 0x1, Type: Utf8StrProperty)
};

static_assert(offsetof(FSoftClassPath, AssetPath) == 0, "Offset mismatch for FSoftClassPath::AssetPath");
static_assert(offsetof(FSoftClassPath, SubPathString) == 8, "Offset mismatch for FSoftClassPath::SubPathString");

// /Script/CoreUObject.SoftObjectPath
// Kind: ScriptStruct; super: none
struct FSoftObjectPath
{
public:
    std::uint8_t AssetPath[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t SubPathString[0x1]; // 0x0008 (Size: 0x1, Type: Utf8StrProperty)
};

static_assert(offsetof(FSoftObjectPath, AssetPath) == 0, "Offset mismatch for FSoftObjectPath::AssetPath");
static_assert(offsetof(FSoftObjectPath, SubPathString) == 8, "Offset mismatch for FSoftObjectPath::SubPathString");

// /Script/CoreUObject.SolarisProfilingData
// Kind: ScriptStruct; super: none
struct FSolarisProfilingData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CoreUObject.Sphere
// Kind: ScriptStruct; super: none
struct FSphere
{
public:
    std::uint8_t Center[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    double W; // 0x0018 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FSphere, Center) == 0, "Offset mismatch for FSphere::Center");
static_assert(offsetof(FSphere, W) == 24, "Offset mismatch for FSphere::W");

// /Script/CoreUObject.Sphere3d
// Kind: ScriptStruct; super: none
struct FSphere3d
{
public:
    std::uint8_t Center[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    double W; // 0x0018 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FSphere3d, Center) == 0, "Offset mismatch for FSphere3d::Center");
static_assert(offsetof(FSphere3d, W) == 24, "Offset mismatch for FSphere3d::W");

// /Script/CoreUObject.Sphere3f
// Kind: ScriptStruct; super: none
struct FSphere3f
{
public:
    std::uint8_t Center[0xC]; // 0x0000 (Size: 0xC, Type: StructProperty)
    float W; // 0x000C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FSphere3f, Center) == 0, "Offset mismatch for FSphere3f::Center");
static_assert(offsetof(FSphere3f, W) == 12, "Offset mismatch for FSphere3f::W");

// /Script/CoreUObject.StructCookedMetaDataStore
// Kind: ScriptStruct; super: none
struct FStructCookedMetaDataStore
{
public:
    std::uint8_t ObjectMetaData[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    TMap<void*, void*> PropertiesMetaData; // 0x0010 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FStructCookedMetaDataStore, ObjectMetaData) == 0, "Offset mismatch for FStructCookedMetaDataStore::ObjectMetaData");
static_assert(offsetof(FStructCookedMetaDataStore, PropertiesMetaData) == 16, "Offset mismatch for FStructCookedMetaDataStore::PropertiesMetaData");

// /Script/CoreUObject.SubScriptStructOf
// Kind: ScriptStruct; super: none
struct FSubScriptStructOf
{
public:
    void* ScriptStruct; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FSubScriptStructOf, ScriptStruct) == 0, "Offset mismatch for FSubScriptStructOf::ScriptStruct");

// /Script/CoreUObject.TemplateString
// Kind: ScriptStruct; super: none
struct FTemplateString
{
public:
    FString Template; // 0x0000 (Size: 0x10, Type: StrProperty)
    FText Resolved; // 0x0010 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(FTemplateString, Template) == 0, "Offset mismatch for FTemplateString::Template");
static_assert(offsetof(FTemplateString, Resolved) == 16, "Offset mismatch for FTemplateString::Resolved");

// /Script/CoreUObject.TestUndeclaredScriptStructObjectReferencesTest
// Kind: ScriptStruct; super: none
struct FTestUndeclaredScriptStructObjectReferencesTest
{
public:
    void* StrongObjectPointer; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t SoftObjectPointer[0x20]; // 0x0008 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t SoftObjectPath[0x18]; // 0x0028 (Size: 0x18, Type: StructProperty)
    TWeakObjectPtr<void> WeakObjectPointer; // 0x0040 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FTestUndeclaredScriptStructObjectReferencesTest, StrongObjectPointer) == 0, "Offset mismatch for FTestUndeclaredScriptStructObjectReferencesTest::StrongObjectPointer");
static_assert(offsetof(FTestUndeclaredScriptStructObjectReferencesTest, SoftObjectPointer) == 8, "Offset mismatch for FTestUndeclaredScriptStructObjectReferencesTest::SoftObjectPointer");
static_assert(offsetof(FTestUndeclaredScriptStructObjectReferencesTest, SoftObjectPath) == 40, "Offset mismatch for FTestUndeclaredScriptStructObjectReferencesTest::SoftObjectPath");
static_assert(offsetof(FTestUndeclaredScriptStructObjectReferencesTest, WeakObjectPointer) == 64, "Offset mismatch for FTestUndeclaredScriptStructObjectReferencesTest::WeakObjectPointer");

// /Script/CoreUObject.TestUninitializedScriptStructMembersTest
// Kind: ScriptStruct; super: none
struct FTestUninitializedScriptStructMembersTest
{
public:
    void* UninitializedObjectReference; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* InitializedObjectReference; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    float UnusedValue; // 0x0010 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FTestUninitializedScriptStructMembersTest, UninitializedObjectReference) == 0, "Offset mismatch for FTestUninitializedScriptStructMembersTest::UninitializedObjectReference");
static_assert(offsetof(FTestUninitializedScriptStructMembersTest, InitializedObjectReference) == 8, "Offset mismatch for FTestUninitializedScriptStructMembersTest::InitializedObjectReference");
static_assert(offsetof(FTestUninitializedScriptStructMembersTest, UnusedValue) == 16, "Offset mismatch for FTestUninitializedScriptStructMembersTest::UnusedValue");

// /Script/CoreUObject.Timecode
// Kind: ScriptStruct; super: none
struct FTimecode
{
public:
    std::int32_t Hours; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t Minutes; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t Seconds; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::int32_t Frames; // 0x000C (Size: 0x4, Type: IntProperty)
    float SubFrame; // 0x0010 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bDropFrameFormat; // 0x0014 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FTimecode, Hours) == 0, "Offset mismatch for FTimecode::Hours");
static_assert(offsetof(FTimecode, Minutes) == 4, "Offset mismatch for FTimecode::Minutes");
static_assert(offsetof(FTimecode, Seconds) == 8, "Offset mismatch for FTimecode::Seconds");
static_assert(offsetof(FTimecode, Frames) == 12, "Offset mismatch for FTimecode::Frames");
static_assert(offsetof(FTimecode, SubFrame) == 16, "Offset mismatch for FTimecode::SubFrame");
static_assert(offsetof(FTimecode, bDropFrameFormat) == 20, "Offset mismatch for FTimecode::bDropFrameFormat");

// /Script/CoreUObject.Timespan
// Kind: ScriptStruct; super: none
struct FTimespan
{
public:
    std::int64_t Ticks; // 0x0000 (Size: 0x8, Type: Int64Property)
};

static_assert(offsetof(FTimespan, Ticks) == 0, "Offset mismatch for FTimespan::Ticks");

// /Script/CoreUObject.TopLevelAssetPath
// Kind: ScriptStruct; super: none
struct FTopLevelAssetPath
{
public:
    std::uint8_t PackageName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    FName AssetName; // 0x0004 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FTopLevelAssetPath, PackageName) == 0, "Offset mismatch for FTopLevelAssetPath::PackageName");
static_assert(offsetof(FTopLevelAssetPath, AssetName) == 4, "Offset mismatch for FTopLevelAssetPath::AssetName");

// /Script/CoreUObject.Transform
// Kind: ScriptStruct; super: none
struct FTransform
{
public:
    std::uint8_t Rotation[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    std::uint8_t Translation[0x20]; // 0x0020 (Size: 0x20, Type: StructProperty)
    std::uint8_t Scale3D[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FTransform, Rotation) == 0, "Offset mismatch for FTransform::Rotation");
static_assert(offsetof(FTransform, Translation) == 32, "Offset mismatch for FTransform::Translation");
static_assert(offsetof(FTransform, Scale3D) == 64, "Offset mismatch for FTransform::Scale3D");

// /Script/CoreUObject.Transform3d
// Kind: ScriptStruct; super: none
struct FTransform3d
{
public:
    std::uint8_t Rotation[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    std::uint8_t Translation[0x20]; // 0x0020 (Size: 0x20, Type: StructProperty)
    std::uint8_t Scale3D[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FTransform3d, Rotation) == 0, "Offset mismatch for FTransform3d::Rotation");
static_assert(offsetof(FTransform3d, Translation) == 32, "Offset mismatch for FTransform3d::Translation");
static_assert(offsetof(FTransform3d, Scale3D) == 64, "Offset mismatch for FTransform3d::Scale3D");

// /Script/CoreUObject.Transform3f
// Kind: ScriptStruct; super: none
struct FTransform3f
{
public:
    std::uint8_t Rotation[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t Translation[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t Scale3D[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FTransform3f, Rotation) == 0, "Offset mismatch for FTransform3f::Rotation");
static_assert(offsetof(FTransform3f, Translation) == 16, "Offset mismatch for FTransform3f::Translation");
static_assert(offsetof(FTransform3f, Scale3D) == 32, "Offset mismatch for FTransform3f::Scale3D");

// /Script/CoreUObject.TwoVectors
// Kind: ScriptStruct; super: none
struct FTwoVectors
{
public:
    std::uint8_t V1[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t V2[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FTwoVectors, V1) == 0, "Offset mismatch for FTwoVectors::V1");
static_assert(offsetof(FTwoVectors, V2) == 24, "Offset mismatch for FTwoVectors::V2");

// /Script/CoreUObject.Uint32Point
// Kind: ScriptStruct; super: none
struct FUint32Point
{
public:
    std::int32_t X; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t Y; // 0x0004 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FUint32Point, X) == 0, "Offset mismatch for FUint32Point::X");
static_assert(offsetof(FUint32Point, Y) == 4, "Offset mismatch for FUint32Point::Y");

// /Script/CoreUObject.Uint32Rect
// Kind: ScriptStruct; super: none
struct FUint32Rect
{
public:
    std::uint8_t min[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t max[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FUint32Rect, min) == 0, "Offset mismatch for FUint32Rect::min");
static_assert(offsetof(FUint32Rect, max) == 8, "Offset mismatch for FUint32Rect::max");

// /Script/CoreUObject.Uint32Vector
// Kind: ScriptStruct; super: none
struct FUint32Vector
{
public:
    std::uint32_t X; // 0x0000 (Size: 0x4, Type: UInt32Property)
    std::uint32_t Y; // 0x0004 (Size: 0x4, Type: UInt32Property)
    std::uint32_t Z; // 0x0008 (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(FUint32Vector, X) == 0, "Offset mismatch for FUint32Vector::X");
static_assert(offsetof(FUint32Vector, Y) == 4, "Offset mismatch for FUint32Vector::Y");
static_assert(offsetof(FUint32Vector, Z) == 8, "Offset mismatch for FUint32Vector::Z");

// /Script/CoreUObject.Uint32Vector2
// Kind: ScriptStruct; super: none
struct FUint32Vector2
{
public:
    std::uint32_t X; // 0x0000 (Size: 0x4, Type: UInt32Property)
    std::uint32_t Y; // 0x0004 (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(FUint32Vector2, X) == 0, "Offset mismatch for FUint32Vector2::X");
static_assert(offsetof(FUint32Vector2, Y) == 4, "Offset mismatch for FUint32Vector2::Y");

// /Script/CoreUObject.Uint32Vector4
// Kind: ScriptStruct; super: none
struct FUint32Vector4
{
public:
    std::uint32_t X; // 0x0000 (Size: 0x4, Type: UInt32Property)
    std::uint32_t Y; // 0x0004 (Size: 0x4, Type: UInt32Property)
    std::uint32_t Z; // 0x0008 (Size: 0x4, Type: UInt32Property)
    std::uint32_t W; // 0x000C (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(FUint32Vector4, X) == 0, "Offset mismatch for FUint32Vector4::X");
static_assert(offsetof(FUint32Vector4, Y) == 4, "Offset mismatch for FUint32Vector4::Y");
static_assert(offsetof(FUint32Vector4, Z) == 8, "Offset mismatch for FUint32Vector4::Z");
static_assert(offsetof(FUint32Vector4, W) == 12, "Offset mismatch for FUint32Vector4::W");

// /Script/CoreUObject.Uint64Point
// Kind: ScriptStruct; super: none
struct FUint64Point
{
public:
    std::int64_t X; // 0x0000 (Size: 0x8, Type: Int64Property)
    std::int64_t Y; // 0x0008 (Size: 0x8, Type: Int64Property)
};

static_assert(offsetof(FUint64Point, X) == 0, "Offset mismatch for FUint64Point::X");
static_assert(offsetof(FUint64Point, Y) == 8, "Offset mismatch for FUint64Point::Y");

// /Script/CoreUObject.Uint64Rect
// Kind: ScriptStruct; super: none
struct FUint64Rect
{
public:
    std::uint8_t min[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t max[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FUint64Rect, min) == 0, "Offset mismatch for FUint64Rect::min");
static_assert(offsetof(FUint64Rect, max) == 16, "Offset mismatch for FUint64Rect::max");

// /Script/CoreUObject.Uint64Vector
// Kind: ScriptStruct; super: none
struct FUint64Vector
{
public:
    std::uint64_t X; // 0x0000 (Size: 0x8, Type: UInt64Property)
    std::uint64_t Y; // 0x0008 (Size: 0x8, Type: UInt64Property)
    std::uint64_t Z; // 0x0010 (Size: 0x8, Type: UInt64Property)
};

static_assert(offsetof(FUint64Vector, X) == 0, "Offset mismatch for FUint64Vector::X");
static_assert(offsetof(FUint64Vector, Y) == 8, "Offset mismatch for FUint64Vector::Y");
static_assert(offsetof(FUint64Vector, Z) == 16, "Offset mismatch for FUint64Vector::Z");

// /Script/CoreUObject.Uint64Vector2
// Kind: ScriptStruct; super: none
struct FUint64Vector2
{
public:
    std::uint64_t X; // 0x0000 (Size: 0x8, Type: UInt64Property)
    std::uint64_t Y; // 0x0008 (Size: 0x8, Type: UInt64Property)
};

static_assert(offsetof(FUint64Vector2, X) == 0, "Offset mismatch for FUint64Vector2::X");
static_assert(offsetof(FUint64Vector2, Y) == 8, "Offset mismatch for FUint64Vector2::Y");

// /Script/CoreUObject.Uint64Vector4
// Kind: ScriptStruct; super: none
struct FUint64Vector4
{
public:
    std::uint64_t X; // 0x0000 (Size: 0x8, Type: UInt64Property)
    std::uint64_t Y; // 0x0008 (Size: 0x8, Type: UInt64Property)
    std::uint64_t Z; // 0x0010 (Size: 0x8, Type: UInt64Property)
    std::uint64_t W; // 0x0018 (Size: 0x8, Type: UInt64Property)
};

static_assert(offsetof(FUint64Vector4, X) == 0, "Offset mismatch for FUint64Vector4::X");
static_assert(offsetof(FUint64Vector4, Y) == 8, "Offset mismatch for FUint64Vector4::Y");
static_assert(offsetof(FUint64Vector4, Z) == 16, "Offset mismatch for FUint64Vector4::Z");
static_assert(offsetof(FUint64Vector4, W) == 24, "Offset mismatch for FUint64Vector4::W");

// /Script/CoreUObject.UintPoint
// Kind: ScriptStruct; super: none
struct FUintPoint
{
public:
    std::int32_t X; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t Y; // 0x0004 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FUintPoint, X) == 0, "Offset mismatch for FUintPoint::X");
static_assert(offsetof(FUintPoint, Y) == 4, "Offset mismatch for FUintPoint::Y");

// /Script/CoreUObject.UintRect
// Kind: ScriptStruct; super: none
struct FUintRect
{
public:
    std::uint8_t min[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t max[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FUintRect, min) == 0, "Offset mismatch for FUintRect::min");
static_assert(offsetof(FUintRect, max) == 8, "Offset mismatch for FUintRect::max");

// /Script/CoreUObject.UintVector
// Kind: ScriptStruct; super: none
struct FUintVector
{
public:
    std::uint32_t X; // 0x0000 (Size: 0x4, Type: UInt32Property)
    std::uint32_t Y; // 0x0004 (Size: 0x4, Type: UInt32Property)
    std::uint32_t Z; // 0x0008 (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(FUintVector, X) == 0, "Offset mismatch for FUintVector::X");
static_assert(offsetof(FUintVector, Y) == 4, "Offset mismatch for FUintVector::Y");
static_assert(offsetof(FUintVector, Z) == 8, "Offset mismatch for FUintVector::Z");

// /Script/CoreUObject.UintVector2
// Kind: ScriptStruct; super: none
struct FUintVector2
{
public:
    std::uint32_t X; // 0x0000 (Size: 0x4, Type: UInt32Property)
    std::uint32_t Y; // 0x0004 (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(FUintVector2, X) == 0, "Offset mismatch for FUintVector2::X");
static_assert(offsetof(FUintVector2, Y) == 4, "Offset mismatch for FUintVector2::Y");

// /Script/CoreUObject.UintVector4
// Kind: ScriptStruct; super: none
struct FUintVector4
{
public:
    std::uint32_t X; // 0x0000 (Size: 0x4, Type: UInt32Property)
    std::uint32_t Y; // 0x0004 (Size: 0x4, Type: UInt32Property)
    std::uint32_t Z; // 0x0008 (Size: 0x4, Type: UInt32Property)
    std::uint32_t W; // 0x000C (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(FUintVector4, X) == 0, "Offset mismatch for FUintVector4::X");
static_assert(offsetof(FUintVector4, Y) == 4, "Offset mismatch for FUintVector4::Y");
static_assert(offsetof(FUintVector4, Z) == 8, "Offset mismatch for FUintVector4::Z");
static_assert(offsetof(FUintVector4, W) == 12, "Offset mismatch for FUintVector4::W");

// /Script/CoreUObject.UserDefinedPropertyID
// Kind: ScriptStruct; super: none
struct FUserDefinedPropertyID
{
public:
    std::uint8_t ID[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    FName Name; // 0x0010 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FUserDefinedPropertyID, ID) == 0, "Offset mismatch for FUserDefinedPropertyID::ID");
static_assert(offsetof(FUserDefinedPropertyID, Name) == 16, "Offset mismatch for FUserDefinedPropertyID::Name");

// /Script/CoreUObject.Vector
// Kind: ScriptStruct; super: none
struct FVector
{
public:
    double X; // 0x0000 (Size: 0x8, Type: DoubleProperty)
    double Y; // 0x0008 (Size: 0x8, Type: DoubleProperty)
    double Z; // 0x0010 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FVector, X) == 0, "Offset mismatch for FVector::X");
static_assert(offsetof(FVector, Y) == 8, "Offset mismatch for FVector::Y");
static_assert(offsetof(FVector, Z) == 16, "Offset mismatch for FVector::Z");

// /Script/CoreUObject.Vector2D
// Kind: ScriptStruct; super: none
struct FVector2D
{
public:
    double X; // 0x0000 (Size: 0x8, Type: DoubleProperty)
    double Y; // 0x0008 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FVector2D, X) == 0, "Offset mismatch for FVector2D::X");
static_assert(offsetof(FVector2D, Y) == 8, "Offset mismatch for FVector2D::Y");

// /Script/CoreUObject.Vector2f
// Kind: ScriptStruct; super: none
struct FVector2f
{
public:
    float X; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float Y; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FVector2f, X) == 0, "Offset mismatch for FVector2f::X");
static_assert(offsetof(FVector2f, Y) == 4, "Offset mismatch for FVector2f::Y");

// /Script/CoreUObject.Vector3d
// Kind: ScriptStruct; super: none
struct FVector3d
{
public:
    double X; // 0x0000 (Size: 0x8, Type: DoubleProperty)
    double Y; // 0x0008 (Size: 0x8, Type: DoubleProperty)
    double Z; // 0x0010 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FVector3d, X) == 0, "Offset mismatch for FVector3d::X");
static_assert(offsetof(FVector3d, Y) == 8, "Offset mismatch for FVector3d::Y");
static_assert(offsetof(FVector3d, Z) == 16, "Offset mismatch for FVector3d::Z");

// /Script/CoreUObject.Vector3f
// Kind: ScriptStruct; super: none
struct FVector3f
{
public:
    float X; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float Y; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float Z; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FVector3f, X) == 0, "Offset mismatch for FVector3f::X");
static_assert(offsetof(FVector3f, Y) == 4, "Offset mismatch for FVector3f::Y");
static_assert(offsetof(FVector3f, Z) == 8, "Offset mismatch for FVector3f::Z");

// /Script/CoreUObject.Vector4
// Kind: ScriptStruct; super: none
struct FVector4
{
public:
    double X; // 0x0000 (Size: 0x8, Type: DoubleProperty)
    double Y; // 0x0008 (Size: 0x8, Type: DoubleProperty)
    double Z; // 0x0010 (Size: 0x8, Type: DoubleProperty)
    double W; // 0x0018 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FVector4, X) == 0, "Offset mismatch for FVector4::X");
static_assert(offsetof(FVector4, Y) == 8, "Offset mismatch for FVector4::Y");
static_assert(offsetof(FVector4, Z) == 16, "Offset mismatch for FVector4::Z");
static_assert(offsetof(FVector4, W) == 24, "Offset mismatch for FVector4::W");

// /Script/CoreUObject.Vector4d
// Kind: ScriptStruct; super: none
struct FVector4d
{
public:
    double X; // 0x0000 (Size: 0x8, Type: DoubleProperty)
    double Y; // 0x0008 (Size: 0x8, Type: DoubleProperty)
    double Z; // 0x0010 (Size: 0x8, Type: DoubleProperty)
    double W; // 0x0018 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FVector4d, X) == 0, "Offset mismatch for FVector4d::X");
static_assert(offsetof(FVector4d, Y) == 8, "Offset mismatch for FVector4d::Y");
static_assert(offsetof(FVector4d, Z) == 16, "Offset mismatch for FVector4d::Z");
static_assert(offsetof(FVector4d, W) == 24, "Offset mismatch for FVector4d::W");

// /Script/CoreUObject.Vector4f
// Kind: ScriptStruct; super: none
struct FVector4f
{
public:
    float X; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float Y; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float Z; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float W; // 0x000C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FVector4f, X) == 0, "Offset mismatch for FVector4f::X");
static_assert(offsetof(FVector4f, Y) == 4, "Offset mismatch for FVector4f::Y");
static_assert(offsetof(FVector4f, Z) == 8, "Offset mismatch for FVector4f::Z");
static_assert(offsetof(FVector4f, W) == 12, "Offset mismatch for FVector4f::W");

// /Script/CoreUObject.VerseAccessSpecifier
// Kind: ScriptStruct; super: none
struct FVerseAccessSpecifier
{
public:
    std::uint8_t Kind[0x8]; // 0x0000 (Size: 0x8, Type: OptionalProperty)
    TArray<void*> ScopeModulePaths; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FVerseAccessSpecifier, Kind) == 0, "Offset mismatch for FVerseAccessSpecifier::Kind");
static_assert(offsetof(FVerseAccessSpecifier, ScopeModulePaths) == 8, "Offset mismatch for FVerseAccessSpecifier::ScopeModulePaths");

// /Script/CoreUObject.VerseClassVarAccessor
// Kind: ScriptStruct; super: none
struct FVerseClassVarAccessor
{
public:
    void* Func; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bIsInstanceMember; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsFallible; // 0x0009 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FVerseClassVarAccessor, Func) == 0, "Offset mismatch for FVerseClassVarAccessor::Func");
static_assert(offsetof(FVerseClassVarAccessor, bIsInstanceMember) == 8, "Offset mismatch for FVerseClassVarAccessor::bIsInstanceMember");
static_assert(offsetof(FVerseClassVarAccessor, bIsFallible) == 9, "Offset mismatch for FVerseClassVarAccessor::bIsFallible");

// /Script/CoreUObject.VerseClassVarAccessors
// Kind: ScriptStruct; super: none
struct FVerseClassVarAccessors
{
public:
    TMap<void*, void*> Getters; // 0x0000 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> Setters; // 0x0010 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FVerseClassVarAccessors, Getters) == 0, "Offset mismatch for FVerseClassVarAccessors::Getters");
static_assert(offsetof(FVerseClassVarAccessors, Setters) == 16, "Offset mismatch for FVerseClassVarAccessors::Setters");

// /Script/CoreUObject.VerseDoubleConstraints
// Kind: ScriptStruct; super: none
struct FVerseDoubleConstraints
{
public:
    double ClampMin; // 0x0000 (Size: 0x8, Type: DoubleProperty)
    double ClampMax; // 0x0008 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FVerseDoubleConstraints, ClampMin) == 0, "Offset mismatch for FVerseDoubleConstraints::ClampMin");
static_assert(offsetof(FVerseDoubleConstraints, ClampMax) == 8, "Offset mismatch for FVerseDoubleConstraints::ClampMax");

// /Script/CoreUObject.VerseIntConstraints
// Kind: ScriptStruct; super: none
struct FVerseIntConstraints
{
public:
    std::uint8_t ClampMin[0x10]; // 0x0000 (Size: 0x10, Type: OptionalProperty)
    std::uint8_t ClampMax[0x1]; // 0x0010 (Size: 0x1, Type: OptionalProperty)
};

static_assert(offsetof(FVerseIntConstraints, ClampMin) == 0, "Offset mismatch for FVerseIntConstraints::ClampMin");
static_assert(offsetof(FVerseIntConstraints, ClampMax) == 16, "Offset mismatch for FVerseIntConstraints::ClampMax");

// /Script/CoreUObject.VersePersistentVar
// Kind: ScriptStruct; super: none
struct FVersePersistentVar
{
public:
    FString Path; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString RelativePath; // 0x0010 (Size: 0x10, Type: StrProperty)
    std::uint8_t ExternalAccess; // 0x0020 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0021
    std::uint8_t Property[0x1]; // 0x0028 (Size: 0x1, Type: FieldPathProperty)
};

static_assert(offsetof(FVersePersistentVar, Path) == 0, "Offset mismatch for FVersePersistentVar::Path");
static_assert(offsetof(FVersePersistentVar, RelativePath) == 16, "Offset mismatch for FVersePersistentVar::RelativePath");
static_assert(offsetof(FVersePersistentVar, ExternalAccess) == 32, "Offset mismatch for FVersePersistentVar::ExternalAccess");
static_assert(offsetof(FVersePersistentVar, Property) == 40, "Offset mismatch for FVersePersistentVar::Property");

// /Script/CoreUObject.VersePropertyMetadata
// Kind: ScriptStruct; super: none
struct FVersePropertyMetadata
{
public:
    std::uint8_t IntConstraints[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    std::uint8_t DoubleConstraints[0x10]; // 0x0020 (Size: 0x10, Type: StructProperty)
    std::uint8_t AccessSpecifier[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    FString AIDescription; // 0x0048 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FVersePropertyMetadata, IntConstraints) == 0, "Offset mismatch for FVersePropertyMetadata::IntConstraints");
static_assert(offsetof(FVersePropertyMetadata, DoubleConstraints) == 32, "Offset mismatch for FVersePropertyMetadata::DoubleConstraints");
static_assert(offsetof(FVersePropertyMetadata, AccessSpecifier) == 48, "Offset mismatch for FVersePropertyMetadata::AccessSpecifier");
static_assert(offsetof(FVersePropertyMetadata, AIDescription) == 72, "Offset mismatch for FVersePropertyMetadata::AIDescription");

// /Script/CoreUObject.VerseRational
// Kind: ScriptStruct; super: none
struct FVerseRational
{
public:
    std::int64_t Numerator; // 0x0000 (Size: 0x8, Type: Int64Property)
    std::int64_t Denominator; // 0x0008 (Size: 0x8, Type: Int64Property)
};

static_assert(offsetof(FVerseRational, Numerator) == 0, "Offset mismatch for FVerseRational::Numerator");
static_assert(offsetof(FVerseRational, Denominator) == 8, "Offset mismatch for FVerseRational::Denominator");

// /Script/CoreUObject.VerseSessionVar
// Kind: ScriptStruct; super: none
struct FVerseSessionVar
{
public:
    std::uint8_t Property[0x1]; // 0x0000 (Size: 0x1, Type: FieldPathProperty)
};

static_assert(offsetof(FVerseSessionVar, Property) == 0, "Offset mismatch for FVerseSessionVar::Property");

// /Script/CoreUObject.ArrayProperty
// Kind: Class; super: Property
class UArrayProperty
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    void* Inner; // 0x0070 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UArrayProperty, Inner) == 112, "Offset mismatch for UArrayProperty::Inner");

// /Script/CoreUObject.BaseVerseSubobject
// Kind: Class; super: Object
class UBaseVerseSubobject
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t VerseAccessibility[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UBaseVerseSubobject, VerseAccessibility) == 40, "Offset mismatch for UBaseVerseSubobject::VerseAccessibility");

// /Script/CoreUObject.BoolProperty
// Kind: Class; super: Property
class UBoolProperty
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Next; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UBoolProperty, Next) == 40, "Offset mismatch for UBoolProperty::Next");

// /Script/CoreUObject.ByteProperty
// Kind: Class; super: NumericProperty
class UByteProperty
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    void* Enum; // 0x0070 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UByteProperty, Enum) == 112, "Offset mismatch for UByteProperty::Enum");

// /Script/CoreUObject.ChunkDependencyInfo
// Kind: Class; super: Object
class UChunkDependencyInfo
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> DependencyArray; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UChunkDependencyInfo, DependencyArray) == 40, "Offset mismatch for UChunkDependencyInfo::DependencyArray");

// /Script/CoreUObject.Class
// Kind: Class; super: Struct
class UClass
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    void* ClassDefaultObject; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> NetFields; // 0x00D0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x30]; // 0x00E0
    void* ClassWithin; // 0x0110 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UClass, ClassDefaultObject) == 200, "Offset mismatch for UClass::ClassDefaultObject");
static_assert(offsetof(UClass, NetFields) == 208, "Offset mismatch for UClass::NetFields");
static_assert(offsetof(UClass, ClassWithin) == 272, "Offset mismatch for UClass::ClassWithin");

// /Script/CoreUObject.ClassCookedMetaData
// Kind: Class; super: CookedMetaDataBase
class UClassCookedMetaData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t ClassMetaData[0x20]; // 0x0028 (Size: 0x20, Type: StructProperty)
    TMap<void*, void*> FunctionsMetaData; // 0x0048 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UClassCookedMetaData, ClassMetaData) == 40, "Offset mismatch for UClassCookedMetaData::ClassMetaData");
static_assert(offsetof(UClassCookedMetaData, FunctionsMetaData) == 72, "Offset mismatch for UClassCookedMetaData::FunctionsMetaData");

// /Script/CoreUObject.ClassProperty
// Kind: Class; super: ObjectProperty
class UClassProperty
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    void* MetaClass; // 0x0078 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UClassProperty, MetaClass) == 120, "Offset mismatch for UClassProperty::MetaClass");

// /Script/CoreUObject.CookedMetaDataBase
// Kind: Class; super: Object
class UCookedMetaDataBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CoreUObject.DelegateFunction
// Kind: Class; super: Function
class UDelegateFunction
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    void* SuperStruct; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    void* Children; // 0x0058 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x38]; // 0x0060
    TArray<void*> ScriptAndPropertyObjectReferences; // 0x0098 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UDelegateFunction, SuperStruct) == 80, "Offset mismatch for UDelegateFunction::SuperStruct");
static_assert(offsetof(UDelegateFunction, Children) == 88, "Offset mismatch for UDelegateFunction::Children");
static_assert(offsetof(UDelegateFunction, ScriptAndPropertyObjectReferences) == 152, "Offset mismatch for UDelegateFunction::ScriptAndPropertyObjectReferences");

// /Script/CoreUObject.DelegateProperty
// Kind: Class; super: Property
class UDelegateProperty
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    void* SignatureFunction; // 0x0070 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDelegateProperty, SignatureFunction) == 112, "Offset mismatch for UDelegateProperty::SignatureFunction");

// /Script/CoreUObject.DoubleProperty
// Kind: Class; super: NumericProperty
class UDoubleProperty
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Next; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDoubleProperty, Next) == 40, "Offset mismatch for UDoubleProperty::Next");

// /Script/CoreUObject.EditorPathObjectInterface
// Kind: Class; super: Interface
class UEditorPathObjectInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CoreUObject.Enum
// Kind: Class; super: Field
class UEnum
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Next; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UEnum, Next) == 40, "Offset mismatch for UEnum::Next");

// /Script/CoreUObject.EnumCookedMetaData
// Kind: Class; super: CookedMetaDataBase
class UEnumCookedMetaData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t EnumMetaData[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UEnumCookedMetaData, EnumMetaData) == 40, "Offset mismatch for UEnumCookedMetaData::EnumMetaData");

// /Script/CoreUObject.EnumProperty
// Kind: Class; super: Property
class UEnumProperty
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    void* UnderlyingProp; // 0x0070 (Size: 0x8, Type: ObjectProperty)
    void* Enum; // 0x0078 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UEnumProperty, UnderlyingProp) == 112, "Offset mismatch for UEnumProperty::UnderlyingProp");
static_assert(offsetof(UEnumProperty, Enum) == 120, "Offset mismatch for UEnumProperty::Enum");

// /Script/CoreUObject.Field
// Kind: Class; super: Object
class UField
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Next; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UField, Next) == 40, "Offset mismatch for UField::Next");

// /Script/CoreUObject.FloatProperty
// Kind: Class; super: NumericProperty
class UFloatProperty
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Next; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFloatProperty, Next) == 40, "Offset mismatch for UFloatProperty::Next");

// /Script/CoreUObject.Function
// Kind: Class; super: Struct
class UFunction
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    void* SuperStruct; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    void* Children; // 0x0058 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x38]; // 0x0060
    TArray<void*> ScriptAndPropertyObjectReferences; // 0x0098 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFunction, SuperStruct) == 80, "Offset mismatch for UFunction::SuperStruct");
static_assert(offsetof(UFunction, Children) == 88, "Offset mismatch for UFunction::Children");
static_assert(offsetof(UFunction, ScriptAndPropertyObjectReferences) == 152, "Offset mismatch for UFunction::ScriptAndPropertyObjectReferences");

// /Script/CoreUObject.GCBarrier
// Kind: Class; super: Object
class UGCBarrier
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CoreUObject.GCObjectReferencer
// Kind: Class; super: Object
class UGCObjectReferencer
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CoreUObject.Int16Property
// Kind: Class; super: NumericProperty
class UInt16Property
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Next; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UInt16Property, Next) == 40, "Offset mismatch for UInt16Property::Next");

// /Script/CoreUObject.Int64Property
// Kind: Class; super: NumericProperty
class UInt64Property
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Next; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UInt64Property, Next) == 40, "Offset mismatch for UInt64Property::Next");

// /Script/CoreUObject.Int8Property
// Kind: Class; super: NumericProperty
class UInt8Property
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Next; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UInt8Property, Next) == 40, "Offset mismatch for UInt8Property::Next");

// /Script/CoreUObject.IntProperty
// Kind: Class; super: NumericProperty
class UIntProperty
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Next; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UIntProperty, Next) == 40, "Offset mismatch for UIntProperty::Next");

// /Script/CoreUObject.Interface
// Kind: Class; super: Object
class UInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CoreUObject.InterfaceProperty
// Kind: Class; super: Property
class UInterfaceProperty
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    void* InterfaceClass; // 0x0070 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UInterfaceProperty, InterfaceClass) == 112, "Offset mismatch for UInterfaceProperty::InterfaceClass");

// /Script/CoreUObject.LazyObjectProperty
// Kind: Class; super: ObjectPropertyBase
class ULazyObjectProperty
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    void* PropertyClass; // 0x0070 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(ULazyObjectProperty, PropertyClass) == 112, "Offset mismatch for ULazyObjectProperty::PropertyClass");

// /Script/CoreUObject.LinkerPlaceholderClass
// Kind: Class; super: Class
class ULinkerPlaceholderClass
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    void* ClassDefaultObject; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> NetFields; // 0x00D0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x30]; // 0x00E0
    void* ClassWithin; // 0x0110 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(ULinkerPlaceholderClass, ClassDefaultObject) == 200, "Offset mismatch for ULinkerPlaceholderClass::ClassDefaultObject");
static_assert(offsetof(ULinkerPlaceholderClass, NetFields) == 208, "Offset mismatch for ULinkerPlaceholderClass::NetFields");
static_assert(offsetof(ULinkerPlaceholderClass, ClassWithin) == 272, "Offset mismatch for ULinkerPlaceholderClass::ClassWithin");

// /Script/CoreUObject.LinkerPlaceholderExportObject
// Kind: Class; super: Object
class ULinkerPlaceholderExportObject
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CoreUObject.LinkerPlaceholderFunction
// Kind: Class; super: Function
class ULinkerPlaceholderFunction
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    void* SuperStruct; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    void* Children; // 0x0058 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x38]; // 0x0060
    TArray<void*> ScriptAndPropertyObjectReferences; // 0x0098 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(ULinkerPlaceholderFunction, SuperStruct) == 80, "Offset mismatch for ULinkerPlaceholderFunction::SuperStruct");
static_assert(offsetof(ULinkerPlaceholderFunction, Children) == 88, "Offset mismatch for ULinkerPlaceholderFunction::Children");
static_assert(offsetof(ULinkerPlaceholderFunction, ScriptAndPropertyObjectReferences) == 152, "Offset mismatch for ULinkerPlaceholderFunction::ScriptAndPropertyObjectReferences");

// /Script/CoreUObject.MapProperty
// Kind: Class; super: Property
class UMapProperty
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    void* KeyProp; // 0x0070 (Size: 0x8, Type: ObjectProperty)
    void* ValueProp; // 0x0078 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMapProperty, KeyProp) == 112, "Offset mismatch for UMapProperty::KeyProp");
static_assert(offsetof(UMapProperty, ValueProp) == 120, "Offset mismatch for UMapProperty::ValueProp");

// /Script/CoreUObject.MetaData
// Kind: Class; super: Object
class UMetaData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CoreUObject.MulticastDelegateProperty
// Kind: Class; super: Property
class UMulticastDelegateProperty
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    void* SignatureFunction; // 0x0070 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMulticastDelegateProperty, SignatureFunction) == 112, "Offset mismatch for UMulticastDelegateProperty::SignatureFunction");

// /Script/CoreUObject.MulticastDelegatePropertyWrapper
// Kind: Class; super: PropertyWrapper
class UMulticastDelegatePropertyWrapper
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CoreUObject.MulticastInlineDelegateProperty
// Kind: Class; super: MulticastDelegateProperty
class UMulticastInlineDelegateProperty
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    void* SignatureFunction; // 0x0070 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMulticastInlineDelegateProperty, SignatureFunction) == 112, "Offset mismatch for UMulticastInlineDelegateProperty::SignatureFunction");

// /Script/CoreUObject.MulticastInlineDelegatePropertyWrapper
// Kind: Class; super: MulticastDelegatePropertyWrapper
class UMulticastInlineDelegatePropertyWrapper
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CoreUObject.MulticastSparseDelegateProperty
// Kind: Class; super: MulticastDelegateProperty
class UMulticastSparseDelegateProperty
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    void* SignatureFunction; // 0x0070 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMulticastSparseDelegateProperty, SignatureFunction) == 112, "Offset mismatch for UMulticastSparseDelegateProperty::SignatureFunction");

// /Script/CoreUObject.NameProperty
// Kind: Class; super: Property
class UNameProperty
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Next; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UNameProperty, Next) == 40, "Offset mismatch for UNameProperty::Next");

// /Script/CoreUObject.NumericProperty
// Kind: Class; super: Property
class UNumericProperty
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Next; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UNumericProperty, Next) == 40, "Offset mismatch for UNumericProperty::Next");

// /Script/CoreUObject.Object
// Kind: Class; super: none
class UObject
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CoreUObject.ObjectProperty
// Kind: Class; super: ObjectPropertyBase
class UObjectProperty
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    void* PropertyClass; // 0x0070 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UObjectProperty, PropertyClass) == 112, "Offset mismatch for UObjectProperty::PropertyClass");

// /Script/CoreUObject.ObjectPropertyBase
// Kind: Class; super: Property
class UObjectPropertyBase
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    void* PropertyClass; // 0x0070 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UObjectPropertyBase, PropertyClass) == 112, "Offset mismatch for UObjectPropertyBase::PropertyClass");

// /Script/CoreUObject.ObjectReachabilityStressData
// Kind: Class; super: Object
class UObjectReachabilityStressData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> Children; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UObjectReachabilityStressData, Children) == 40, "Offset mismatch for UObjectReachabilityStressData::Children");

// /Script/CoreUObject.ObjectRedirector
// Kind: Class; super: Object
class UObjectRedirector
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CoreUObject.Package
// Kind: Class; super: Object
class UPackage
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CoreUObject.PackageMap
// Kind: Class; super: Object
class UPackageMap
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CoreUObject.Property
// Kind: Class; super: Field
class UProperty
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Next; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UProperty, Next) == 40, "Offset mismatch for UProperty::Next");

// /Script/CoreUObject.PropertyBag
// Kind: Class; super: ScriptStruct
class UPropertyBag
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    TArray<void*> PropertyDescs; // 0x00C8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPropertyBag, PropertyDescs) == 200, "Offset mismatch for UPropertyBag::PropertyDescs");

// /Script/CoreUObject.PropertyBagMissingObject
// Kind: Class; super: Object
class UPropertyBagMissingObject
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CoreUObject.PropertyWrapper
// Kind: Class; super: Object
class UPropertyWrapper
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CoreUObject.ScriptStruct
// Kind: Class; super: Struct
class UScriptStruct
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    void* SuperStruct; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    void* Children; // 0x0058 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x38]; // 0x0060
    TArray<void*> ScriptAndPropertyObjectReferences; // 0x0098 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UScriptStruct, SuperStruct) == 80, "Offset mismatch for UScriptStruct::SuperStruct");
static_assert(offsetof(UScriptStruct, Children) == 88, "Offset mismatch for UScriptStruct::Children");
static_assert(offsetof(UScriptStruct, ScriptAndPropertyObjectReferences) == 152, "Offset mismatch for UScriptStruct::ScriptAndPropertyObjectReferences");

// /Script/CoreUObject.SetProperty
// Kind: Class; super: Property
class USetProperty
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    void* ElementProp; // 0x0070 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USetProperty, ElementProp) == 112, "Offset mismatch for USetProperty::ElementProp");

// /Script/CoreUObject.SoftClassProperty
// Kind: Class; super: SoftObjectProperty
class USoftClassProperty
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    void* MetaClass; // 0x0078 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(USoftClassProperty, MetaClass) == 120, "Offset mismatch for USoftClassProperty::MetaClass");

// /Script/CoreUObject.SoftObjectProperty
// Kind: Class; super: ObjectPropertyBase
class USoftObjectProperty
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    void* PropertyClass; // 0x0070 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(USoftObjectProperty, PropertyClass) == 112, "Offset mismatch for USoftObjectProperty::PropertyClass");

// /Script/CoreUObject.SparseDelegateFunction
// Kind: Class; super: DelegateFunction
class USparseDelegateFunction
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    void* SuperStruct; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    void* Children; // 0x0058 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x38]; // 0x0060
    TArray<void*> ScriptAndPropertyObjectReferences; // 0x0098 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USparseDelegateFunction, SuperStruct) == 80, "Offset mismatch for USparseDelegateFunction::SuperStruct");
static_assert(offsetof(USparseDelegateFunction, Children) == 88, "Offset mismatch for USparseDelegateFunction::Children");
static_assert(offsetof(USparseDelegateFunction, ScriptAndPropertyObjectReferences) == 152, "Offset mismatch for USparseDelegateFunction::ScriptAndPropertyObjectReferences");

// /Script/CoreUObject.StrProperty
// Kind: Class; super: Property
class UStrProperty
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Next; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UStrProperty, Next) == 40, "Offset mismatch for UStrProperty::Next");

// /Script/CoreUObject.Struct
// Kind: Class; super: Field
class UStruct
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    void* SuperStruct; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    void* Children; // 0x0058 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x38]; // 0x0060
    TArray<void*> ScriptAndPropertyObjectReferences; // 0x0098 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UStruct, SuperStruct) == 80, "Offset mismatch for UStruct::SuperStruct");
static_assert(offsetof(UStruct, Children) == 88, "Offset mismatch for UStruct::Children");
static_assert(offsetof(UStruct, ScriptAndPropertyObjectReferences) == 152, "Offset mismatch for UStruct::ScriptAndPropertyObjectReferences");

// /Script/CoreUObject.StructCookedMetaData
// Kind: Class; super: CookedMetaDataBase
class UStructCookedMetaData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t StructMetaData[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UStructCookedMetaData, StructMetaData) == 40, "Offset mismatch for UStructCookedMetaData::StructMetaData");

// /Script/CoreUObject.StructProperty
// Kind: Class; super: Property
class UStructProperty
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    void* Struct; // 0x0070 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UStructProperty, Struct) == 112, "Offset mismatch for UStructProperty::Struct");

// /Script/CoreUObject.TextBuffer
// Kind: Class; super: Object
class UTextBuffer
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CoreUObject.TextProperty
// Kind: Class; super: Property
class UTextProperty
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Next; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UTextProperty, Next) == 40, "Offset mismatch for UTextProperty::Next");

// /Script/CoreUObject.UInt16Property
// Kind: Class; super: NumericProperty
class UUInt16Property
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Next; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UUInt16Property, Next) == 40, "Offset mismatch for UUInt16Property::Next");

// /Script/CoreUObject.UInt32Property
// Kind: Class; super: NumericProperty
class UUInt32Property
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Next; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UUInt32Property, Next) == 40, "Offset mismatch for UUInt32Property::Next");

// /Script/CoreUObject.UInt64Property
// Kind: Class; super: NumericProperty
class UUInt64Property
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Next; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UUInt64Property, Next) == 40, "Offset mismatch for UUInt64Property::Next");

// /Script/CoreUObject.UserDefinedStruct
// Kind: Class; super: ScriptStruct
class UUserDefinedStruct
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    std::uint8_t Status; // 0x00C8 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00C9
    std::uint8_t Guid[0x14]; // 0x00CC (Size: 0x14, Type: StructProperty)
    TArray<void*> PropertyIDs; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UUserDefinedStruct, Status) == 200, "Offset mismatch for UUserDefinedStruct::Status");
static_assert(offsetof(UUserDefinedStruct, Guid) == 204, "Offset mismatch for UUserDefinedStruct::Guid");
static_assert(offsetof(UUserDefinedStruct, PropertyIDs) == 224, "Offset mismatch for UUserDefinedStruct::PropertyIDs");

// /Script/CoreUObject.UserDefinedStructEditorDataBase
// Kind: Class; super: Object
class UUserDefinedStructEditorDataBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CoreUObject.VerseClass
// Kind: Class; super: Class
class UVerseClass
{
public:
    std::uint8_t Pad_0000[0x1A8]; // 0x0000
    std::uint32_t SolClassFlags; // 0x01A8 (Size: 0x4, Type: UInt32Property)
    std::uint8_t Pad_0001[0x4]; // 0x01AC
    TArray<void*> TaskClasses; // 0x01B0 (Size: 0x10, Type: ArrayProperty)
    void* InitInstanceFunction; // 0x01C0 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> PersistentVars; // 0x01C8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SessionVars; // 0x01D8 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> VarAccessors; // 0x01E8 (Size: 0x10, Type: MapProperty)
    std::uint8_t ConstructorEffects; // 0x01F8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x01F9
    FName MangledPackageVersePath; // 0x01FC (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0003[0x4]; // 0x0204
    FString PackageRelativeVersePath; // 0x0208 (Size: 0x10, Type: StrProperty)
    TMap<void*, void*> DisplayNameToUENameFunctionMap; // 0x0218 (Size: 0x10, Type: MapProperty)
    TArray<void*> DirectInterfaces; // 0x0228 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PropertiesWrittenByInitCDO; // 0x0238 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> FunctionMangledNames; // 0x0248 (Size: 0x10, Type: MapProperty)
    TArray<void*> PredictsFunctionNames; // 0x0258 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> PredictsVars; // 0x0268 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> PredictsCoercedFunctions; // 0x0278 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> PropertyMetaData; // 0x0288 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> VerseFields; // 0x0298 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UVerseClass, SolClassFlags) == 424, "Offset mismatch for UVerseClass::SolClassFlags");
static_assert(offsetof(UVerseClass, TaskClasses) == 432, "Offset mismatch for UVerseClass::TaskClasses");
static_assert(offsetof(UVerseClass, InitInstanceFunction) == 448, "Offset mismatch for UVerseClass::InitInstanceFunction");
static_assert(offsetof(UVerseClass, PersistentVars) == 456, "Offset mismatch for UVerseClass::PersistentVars");
static_assert(offsetof(UVerseClass, SessionVars) == 472, "Offset mismatch for UVerseClass::SessionVars");
static_assert(offsetof(UVerseClass, VarAccessors) == 488, "Offset mismatch for UVerseClass::VarAccessors");
static_assert(offsetof(UVerseClass, ConstructorEffects) == 504, "Offset mismatch for UVerseClass::ConstructorEffects");
static_assert(offsetof(UVerseClass, MangledPackageVersePath) == 508, "Offset mismatch for UVerseClass::MangledPackageVersePath");
static_assert(offsetof(UVerseClass, PackageRelativeVersePath) == 520, "Offset mismatch for UVerseClass::PackageRelativeVersePath");
static_assert(offsetof(UVerseClass, DisplayNameToUENameFunctionMap) == 536, "Offset mismatch for UVerseClass::DisplayNameToUENameFunctionMap");
static_assert(offsetof(UVerseClass, DirectInterfaces) == 552, "Offset mismatch for UVerseClass::DirectInterfaces");
static_assert(offsetof(UVerseClass, PropertiesWrittenByInitCDO) == 568, "Offset mismatch for UVerseClass::PropertiesWrittenByInitCDO");
static_assert(offsetof(UVerseClass, FunctionMangledNames) == 584, "Offset mismatch for UVerseClass::FunctionMangledNames");
static_assert(offsetof(UVerseClass, PredictsFunctionNames) == 600, "Offset mismatch for UVerseClass::PredictsFunctionNames");
static_assert(offsetof(UVerseClass, PredictsVars) == 616, "Offset mismatch for UVerseClass::PredictsVars");
static_assert(offsetof(UVerseClass, PredictsCoercedFunctions) == 632, "Offset mismatch for UVerseClass::PredictsCoercedFunctions");
static_assert(offsetof(UVerseClass, PropertyMetaData) == 648, "Offset mismatch for UVerseClass::PropertyMetaData");
static_assert(offsetof(UVerseClass, VerseFields) == 664, "Offset mismatch for UVerseClass::VerseFields");

// /Script/CoreUObject.VerseEnum
// Kind: Class; super: Enum
class UVerseEnum
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t VerseEnumFlags; // 0x0070 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0071
    std::uint8_t QualifiedName[0x1]; // 0x0078 (Size: 0x1, Type: Utf8StrProperty)
};

static_assert(offsetof(UVerseEnum, VerseEnumFlags) == 112, "Offset mismatch for UVerseEnum::VerseEnumFlags");
static_assert(offsetof(UVerseEnum, QualifiedName) == 120, "Offset mismatch for UVerseEnum::QualifiedName");

// /Script/CoreUObject.VerseFunction
// Kind: Class; super: Function
class UVerseFunction
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    void* SuperStruct; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    void* Children; // 0x0058 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x38]; // 0x0060
    TArray<void*> ScriptAndPropertyObjectReferences; // 0x0098 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UVerseFunction, SuperStruct) == 80, "Offset mismatch for UVerseFunction::SuperStruct");
static_assert(offsetof(UVerseFunction, Children) == 88, "Offset mismatch for UVerseFunction::Children");
static_assert(offsetof(UVerseFunction, ScriptAndPropertyObjectReferences) == 152, "Offset mismatch for UVerseFunction::ScriptAndPropertyObjectReferences");

// /Script/CoreUObject.VerseModuleClass
// Kind: Class; super: Class
class UVerseModuleClass
{
public:
    std::uint8_t Pad_0000[0x1A0]; // 0x0000
    std::uint8_t bHasPersistentMaps; // 0x01A0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UVerseModuleClass, bHasPersistentMaps) == 416, "Offset mismatch for UVerseModuleClass::bHasPersistentMaps");

// /Script/CoreUObject.VerseStruct
// Kind: Class; super: ScriptStruct
class UVerseStruct
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    std::uint32_t VerseClassFlags; // 0x00D0 (Size: 0x4, Type: UInt32Property)
    std::uint8_t Pad_0001[0x4]; // 0x00D4
    std::uint8_t QualifiedName[0x10]; // 0x00D8 (Size: 0x10, Type: Utf8StrProperty)
    void* InitFunction; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
    void* ModuleClass; // 0x00F0 (Size: 0x8, Type: ClassProperty)
    std::uint8_t Guid[0x10]; // 0x00F8 (Size: 0x10, Type: StructProperty)
    void* FactoryFunction; // 0x0108 (Size: 0x8, Type: ObjectProperty)
    void* OverrideFactoryFunction; // 0x0110 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ConstructorEffects; // 0x0118 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0119
    TMap<void*, void*> PropertyMetaData; // 0x0120 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UVerseStruct, VerseClassFlags) == 208, "Offset mismatch for UVerseStruct::VerseClassFlags");
static_assert(offsetof(UVerseStruct, QualifiedName) == 216, "Offset mismatch for UVerseStruct::QualifiedName");
static_assert(offsetof(UVerseStruct, InitFunction) == 232, "Offset mismatch for UVerseStruct::InitFunction");
static_assert(offsetof(UVerseStruct, ModuleClass) == 240, "Offset mismatch for UVerseStruct::ModuleClass");
static_assert(offsetof(UVerseStruct, Guid) == 248, "Offset mismatch for UVerseStruct::Guid");
static_assert(offsetof(UVerseStruct, FactoryFunction) == 264, "Offset mismatch for UVerseStruct::FactoryFunction");
static_assert(offsetof(UVerseStruct, OverrideFactoryFunction) == 272, "Offset mismatch for UVerseStruct::OverrideFactoryFunction");
static_assert(offsetof(UVerseStruct, ConstructorEffects) == 280, "Offset mismatch for UVerseStruct::ConstructorEffects");
static_assert(offsetof(UVerseStruct, PropertyMetaData) == 288, "Offset mismatch for UVerseStruct::PropertyMetaData");

// /Script/CoreUObject.WeakObjectProperty
// Kind: Class; super: ObjectPropertyBase
class UWeakObjectProperty
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    void* PropertyClass; // 0x0070 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UWeakObjectProperty, PropertyClass) == 112, "Offset mismatch for UWeakObjectProperty::PropertyClass");

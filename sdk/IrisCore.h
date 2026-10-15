/**
 * decamp dumper generated SDK
 * Package: /Script/IrisCore
 */
#pragma once
#include "Basic.h"

// /Script/IrisCore.ArrayPropertyNetSerializerConfig
// Kind: ScriptStruct; super: NetSerializerConfig
struct FArrayPropertyNetSerializerConfig
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint16_t MaxElementCount; // 0x0010 (Size: 0x2, Type: UInt16Property)
    std::uint16_t ElementCountBitCount; // 0x0012 (Size: 0x2, Type: UInt16Property)
    std::uint8_t Pad_0001[0x4]; // 0x0014
    std::uint8_t Property[0x1]; // 0x0018 (Size: 0x1, Type: FieldPathProperty)
};

static_assert(offsetof(FArrayPropertyNetSerializerConfig, MaxElementCount) == 16, "Offset mismatch for FArrayPropertyNetSerializerConfig::MaxElementCount");
static_assert(offsetof(FArrayPropertyNetSerializerConfig, ElementCountBitCount) == 18, "Offset mismatch for FArrayPropertyNetSerializerConfig::ElementCountBitCount");
static_assert(offsetof(FArrayPropertyNetSerializerConfig, Property) == 24, "Offset mismatch for FArrayPropertyNetSerializerConfig::Property");

// /Script/IrisCore.BitfieldNetSerializerConfig
// Kind: ScriptStruct; super: NetSerializerConfig
struct FBitfieldNetSerializerConfig
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Bitmask; // 0x0010 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FBitfieldNetSerializerConfig, Bitmask) == 16, "Offset mismatch for FBitfieldNetSerializerConfig::Bitmask");

// /Script/IrisCore.BoolNetSerializerConfig
// Kind: ScriptStruct; super: NetSerializerConfig
struct FBoolNetSerializerConfig
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IrisCore.ClassNetSerializerConfig
// Kind: ScriptStruct; super: ObjectNetSerializerConfig
struct FClassNetSerializerConfig
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    void* PropertyClass; // 0x0010 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(FClassNetSerializerConfig, PropertyClass) == 16, "Offset mismatch for FClassNetSerializerConfig::PropertyClass");

// /Script/IrisCore.CreationFlowLogClassConfig
// Kind: ScriptStruct; super: none
struct FCreationFlowLogClassConfig
{
public:
    std::uint8_t ClassPath[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t bIncludeSubclasses; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTraceOwningConnectionOnly; // 0x0009 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FCreationFlowLogClassConfig, ClassPath) == 0, "Offset mismatch for FCreationFlowLogClassConfig::ClassPath");
static_assert(offsetof(FCreationFlowLogClassConfig, bIncludeSubclasses) == 8, "Offset mismatch for FCreationFlowLogClassConfig::bIncludeSubclasses");
static_assert(offsetof(FCreationFlowLogClassConfig, bTraceOwningConnectionOnly) == 9, "Offset mismatch for FCreationFlowLogClassConfig::bTraceOwningConnectionOnly");

// /Script/IrisCore.DataStreamDefinition
// Kind: ScriptStruct; super: none
struct FDataStreamDefinition
{
public:
    std::uint8_t DataStreamName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t ClassName[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    void* Class; // 0x0008 (Size: 0x8, Type: ClassProperty)
    std::uint8_t DefaultSendStatus; // 0x0010 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bAutoCreate; // 0x0011 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDynamicCreate; // 0x0012 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FDataStreamDefinition, DataStreamName) == 0, "Offset mismatch for FDataStreamDefinition::DataStreamName");
static_assert(offsetof(FDataStreamDefinition, ClassName) == 4, "Offset mismatch for FDataStreamDefinition::ClassName");
static_assert(offsetof(FDataStreamDefinition, Class) == 8, "Offset mismatch for FDataStreamDefinition::Class");
static_assert(offsetof(FDataStreamDefinition, DefaultSendStatus) == 16, "Offset mismatch for FDataStreamDefinition::DefaultSendStatus");
static_assert(offsetof(FDataStreamDefinition, bAutoCreate) == 17, "Offset mismatch for FDataStreamDefinition::bAutoCreate");
static_assert(offsetof(FDataStreamDefinition, bDynamicCreate) == 18, "Offset mismatch for FDataStreamDefinition::bDynamicCreate");

// /Script/IrisCore.DateTimeNetSerializerConfig
// Kind: ScriptStruct; super: NetSerializerConfig
struct FDateTimeNetSerializerConfig
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IrisCore.DoubleNetSerializerConfig
// Kind: ScriptStruct; super: NetSerializerConfig
struct FDoubleNetSerializerConfig
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IrisCore.EnumInt16NetSerializerConfig
// Kind: ScriptStruct; super: NetSerializerConfig
struct FEnumInt16NetSerializerConfig
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::int16_t LowerBound; // 0x0010 (Size: 0x2, Type: Int16Property)
    std::int16_t UpperBound; // 0x0012 (Size: 0x2, Type: Int16Property)
    std::uint8_t BitCount; // 0x0014 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FEnumInt16NetSerializerConfig, LowerBound) == 16, "Offset mismatch for FEnumInt16NetSerializerConfig::LowerBound");
static_assert(offsetof(FEnumInt16NetSerializerConfig, UpperBound) == 18, "Offset mismatch for FEnumInt16NetSerializerConfig::UpperBound");
static_assert(offsetof(FEnumInt16NetSerializerConfig, BitCount) == 20, "Offset mismatch for FEnumInt16NetSerializerConfig::BitCount");

// /Script/IrisCore.EnumInt32NetSerializerConfig
// Kind: ScriptStruct; super: NetSerializerConfig
struct FEnumInt32NetSerializerConfig
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::int32_t LowerBound; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::int32_t UpperBound; // 0x0014 (Size: 0x4, Type: IntProperty)
    std::uint8_t BitCount; // 0x0018 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FEnumInt32NetSerializerConfig, LowerBound) == 16, "Offset mismatch for FEnumInt32NetSerializerConfig::LowerBound");
static_assert(offsetof(FEnumInt32NetSerializerConfig, UpperBound) == 20, "Offset mismatch for FEnumInt32NetSerializerConfig::UpperBound");
static_assert(offsetof(FEnumInt32NetSerializerConfig, BitCount) == 24, "Offset mismatch for FEnumInt32NetSerializerConfig::BitCount");

// /Script/IrisCore.EnumInt64NetSerializerConfig
// Kind: ScriptStruct; super: NetSerializerConfig
struct FEnumInt64NetSerializerConfig
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::int64_t LowerBound; // 0x0010 (Size: 0x8, Type: Int64Property)
    std::int64_t UpperBound; // 0x0018 (Size: 0x8, Type: Int64Property)
    std::uint8_t BitCount; // 0x0020 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FEnumInt64NetSerializerConfig, LowerBound) == 16, "Offset mismatch for FEnumInt64NetSerializerConfig::LowerBound");
static_assert(offsetof(FEnumInt64NetSerializerConfig, UpperBound) == 24, "Offset mismatch for FEnumInt64NetSerializerConfig::UpperBound");
static_assert(offsetof(FEnumInt64NetSerializerConfig, BitCount) == 32, "Offset mismatch for FEnumInt64NetSerializerConfig::BitCount");

// /Script/IrisCore.EnumInt8NetSerializerConfig
// Kind: ScriptStruct; super: NetSerializerConfig
struct FEnumInt8NetSerializerConfig
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::int8_t LowerBound; // 0x0010 (Size: 0x1, Type: Int8Property)
    std::int8_t UpperBound; // 0x0011 (Size: 0x1, Type: Int8Property)
    std::uint8_t BitCount; // 0x0012 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FEnumInt8NetSerializerConfig, LowerBound) == 16, "Offset mismatch for FEnumInt8NetSerializerConfig::LowerBound");
static_assert(offsetof(FEnumInt8NetSerializerConfig, UpperBound) == 17, "Offset mismatch for FEnumInt8NetSerializerConfig::UpperBound");
static_assert(offsetof(FEnumInt8NetSerializerConfig, BitCount) == 18, "Offset mismatch for FEnumInt8NetSerializerConfig::BitCount");

// /Script/IrisCore.EnumUint16NetSerializerConfig
// Kind: ScriptStruct; super: NetSerializerConfig
struct FEnumUint16NetSerializerConfig
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint16_t LowerBound; // 0x0010 (Size: 0x2, Type: UInt16Property)
    std::uint16_t UpperBound; // 0x0012 (Size: 0x2, Type: UInt16Property)
    std::uint8_t BitCount; // 0x0014 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FEnumUint16NetSerializerConfig, LowerBound) == 16, "Offset mismatch for FEnumUint16NetSerializerConfig::LowerBound");
static_assert(offsetof(FEnumUint16NetSerializerConfig, UpperBound) == 18, "Offset mismatch for FEnumUint16NetSerializerConfig::UpperBound");
static_assert(offsetof(FEnumUint16NetSerializerConfig, BitCount) == 20, "Offset mismatch for FEnumUint16NetSerializerConfig::BitCount");

// /Script/IrisCore.EnumUint32NetSerializerConfig
// Kind: ScriptStruct; super: NetSerializerConfig
struct FEnumUint32NetSerializerConfig
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint32_t LowerBound; // 0x0010 (Size: 0x4, Type: UInt32Property)
    std::uint32_t UpperBound; // 0x0014 (Size: 0x4, Type: UInt32Property)
    std::uint8_t BitCount; // 0x0018 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FEnumUint32NetSerializerConfig, LowerBound) == 16, "Offset mismatch for FEnumUint32NetSerializerConfig::LowerBound");
static_assert(offsetof(FEnumUint32NetSerializerConfig, UpperBound) == 20, "Offset mismatch for FEnumUint32NetSerializerConfig::UpperBound");
static_assert(offsetof(FEnumUint32NetSerializerConfig, BitCount) == 24, "Offset mismatch for FEnumUint32NetSerializerConfig::BitCount");

// /Script/IrisCore.EnumUint64NetSerializerConfig
// Kind: ScriptStruct; super: NetSerializerConfig
struct FEnumUint64NetSerializerConfig
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint64_t LowerBound; // 0x0010 (Size: 0x8, Type: UInt64Property)
    std::uint64_t UpperBound; // 0x0018 (Size: 0x8, Type: UInt64Property)
    std::uint8_t BitCount; // 0x0020 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FEnumUint64NetSerializerConfig, LowerBound) == 16, "Offset mismatch for FEnumUint64NetSerializerConfig::LowerBound");
static_assert(offsetof(FEnumUint64NetSerializerConfig, UpperBound) == 24, "Offset mismatch for FEnumUint64NetSerializerConfig::UpperBound");
static_assert(offsetof(FEnumUint64NetSerializerConfig, BitCount) == 32, "Offset mismatch for FEnumUint64NetSerializerConfig::BitCount");

// /Script/IrisCore.EnumUint8NetSerializerConfig
// Kind: ScriptStruct; super: NetSerializerConfig
struct FEnumUint8NetSerializerConfig
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t LowerBound; // 0x0010 (Size: 0x1, Type: ByteProperty)
    std::uint8_t UpperBound; // 0x0011 (Size: 0x1, Type: ByteProperty)
    std::uint8_t BitCount; // 0x0012 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FEnumUint8NetSerializerConfig, LowerBound) == 16, "Offset mismatch for FEnumUint8NetSerializerConfig::LowerBound");
static_assert(offsetof(FEnumUint8NetSerializerConfig, UpperBound) == 17, "Offset mismatch for FEnumUint8NetSerializerConfig::UpperBound");
static_assert(offsetof(FEnumUint8NetSerializerConfig, BitCount) == 18, "Offset mismatch for FEnumUint8NetSerializerConfig::BitCount");

// /Script/IrisCore.FieldPathNetSerializerConfig
// Kind: ScriptStruct; super: NetSerializerConfig
struct FFieldPathNetSerializerConfig
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Property[0x1]; // 0x0010 (Size: 0x1, Type: FieldPathProperty)
};

static_assert(offsetof(FFieldPathNetSerializerConfig, Property) == 16, "Offset mismatch for FFieldPathNetSerializerConfig::Property");

// /Script/IrisCore.FieldPathNetSerializerSerializationHelper
// Kind: ScriptStruct; super: none
struct FFieldPathNetSerializerSerializationHelper
{
public:
    TWeakObjectPtr<void> Owner; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
    TArray<void*> PropertyPath; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFieldPathNetSerializerSerializationHelper, Owner) == 0, "Offset mismatch for FFieldPathNetSerializerSerializationHelper::Owner");
static_assert(offsetof(FFieldPathNetSerializerSerializationHelper, PropertyPath) == 8, "Offset mismatch for FFieldPathNetSerializerSerializationHelper::PropertyPath");

// /Script/IrisCore.FloatNetSerializerConfig
// Kind: ScriptStruct; super: NetSerializerConfig
struct FFloatNetSerializerConfig
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IrisCore.GuidNetSerializerConfig
// Kind: ScriptStruct; super: NetSerializerConfig
struct FGuidNetSerializerConfig
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IrisCore.InstancedStructNetSerializerConfig
// Kind: ScriptStruct; super: NetSerializerConfig
struct FInstancedStructNetSerializerConfig
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    TArray<void*> SupportedTypes; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FInstancedStructNetSerializerConfig, SupportedTypes) == 16, "Offset mismatch for FInstancedStructNetSerializerConfig::SupportedTypes");

// /Script/IrisCore.Int16RangeNetSerializerConfig
// Kind: ScriptStruct; super: NetSerializerConfig
struct FInt16RangeNetSerializerConfig
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::int16_t LowerBound; // 0x0010 (Size: 0x2, Type: Int16Property)
    std::int16_t UpperBound; // 0x0012 (Size: 0x2, Type: Int16Property)
    std::uint8_t BitCount; // 0x0014 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FInt16RangeNetSerializerConfig, LowerBound) == 16, "Offset mismatch for FInt16RangeNetSerializerConfig::LowerBound");
static_assert(offsetof(FInt16RangeNetSerializerConfig, UpperBound) == 18, "Offset mismatch for FInt16RangeNetSerializerConfig::UpperBound");
static_assert(offsetof(FInt16RangeNetSerializerConfig, BitCount) == 20, "Offset mismatch for FInt16RangeNetSerializerConfig::BitCount");

// /Script/IrisCore.Int32RangeNetSerializerConfig
// Kind: ScriptStruct; super: NetSerializerConfig
struct FInt32RangeNetSerializerConfig
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::int32_t LowerBound; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::int32_t UpperBound; // 0x0014 (Size: 0x4, Type: IntProperty)
    std::uint8_t BitCount; // 0x0018 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FInt32RangeNetSerializerConfig, LowerBound) == 16, "Offset mismatch for FInt32RangeNetSerializerConfig::LowerBound");
static_assert(offsetof(FInt32RangeNetSerializerConfig, UpperBound) == 20, "Offset mismatch for FInt32RangeNetSerializerConfig::UpperBound");
static_assert(offsetof(FInt32RangeNetSerializerConfig, BitCount) == 24, "Offset mismatch for FInt32RangeNetSerializerConfig::BitCount");

// /Script/IrisCore.Int64RangeNetSerializerConfig
// Kind: ScriptStruct; super: NetSerializerConfig
struct FInt64RangeNetSerializerConfig
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::int64_t LowerBound; // 0x0010 (Size: 0x8, Type: Int64Property)
    std::int64_t UpperBound; // 0x0018 (Size: 0x8, Type: Int64Property)
    std::uint8_t BitCount; // 0x0020 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FInt64RangeNetSerializerConfig, LowerBound) == 16, "Offset mismatch for FInt64RangeNetSerializerConfig::LowerBound");
static_assert(offsetof(FInt64RangeNetSerializerConfig, UpperBound) == 24, "Offset mismatch for FInt64RangeNetSerializerConfig::UpperBound");
static_assert(offsetof(FInt64RangeNetSerializerConfig, BitCount) == 32, "Offset mismatch for FInt64RangeNetSerializerConfig::BitCount");

// /Script/IrisCore.Int8RangeNetSerializerConfig
// Kind: ScriptStruct; super: NetSerializerConfig
struct FInt8RangeNetSerializerConfig
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::int8_t LowerBound; // 0x0010 (Size: 0x1, Type: Int8Property)
    std::int8_t UpperBound; // 0x0011 (Size: 0x1, Type: Int8Property)
    std::uint8_t BitCount; // 0x0012 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FInt8RangeNetSerializerConfig, LowerBound) == 16, "Offset mismatch for FInt8RangeNetSerializerConfig::LowerBound");
static_assert(offsetof(FInt8RangeNetSerializerConfig, UpperBound) == 17, "Offset mismatch for FInt8RangeNetSerializerConfig::UpperBound");
static_assert(offsetof(FInt8RangeNetSerializerConfig, BitCount) == 18, "Offset mismatch for FInt8RangeNetSerializerConfig::BitCount");

// /Script/IrisCore.IntNetSerializerConfig
// Kind: ScriptStruct; super: NetSerializerConfig
struct FIntNetSerializerConfig
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t BitCount; // 0x0010 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FIntNetSerializerConfig, BitCount) == 16, "Offset mismatch for FIntNetSerializerConfig::BitCount");

// /Script/IrisCore.IrisFastArraySerializer
// Kind: ScriptStruct; super: FastArraySerializer
struct FIrisFastArraySerializer
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    std::uint32_t ChangeMaskStorage; // 0x0050 (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(FIrisFastArraySerializer, ChangeMaskStorage) == 80, "Offset mismatch for FIrisFastArraySerializer::ChangeMaskStorage");

// /Script/IrisCore.LastResortPropertyNetSerializerConfig
// Kind: ScriptStruct; super: NetSerializerConfig
struct FLastResortPropertyNetSerializerConfig
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Property[0x20]; // 0x0010 (Size: 0x20, Type: FieldPathProperty)
    std::uint8_t bExcludeFromDefaultStateHash; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0031
    std::uint32_t MaxQuantizedSizeBits; // 0x0034 (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(FLastResortPropertyNetSerializerConfig, Property) == 16, "Offset mismatch for FLastResortPropertyNetSerializerConfig::Property");
static_assert(offsetof(FLastResortPropertyNetSerializerConfig, bExcludeFromDefaultStateHash) == 48, "Offset mismatch for FLastResortPropertyNetSerializerConfig::bExcludeFromDefaultStateHash");
static_assert(offsetof(FLastResortPropertyNetSerializerConfig, MaxQuantizedSizeBits) == 52, "Offset mismatch for FLastResortPropertyNetSerializerConfig::MaxQuantizedSizeBits");

// /Script/IrisCore.NameAsNetTokenNetSerializerConfig
// Kind: ScriptStruct; super: NetSerializerConfig
struct FNameAsNetTokenNetSerializerConfig
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IrisCore.NameNetSerializerConfig
// Kind: ScriptStruct; super: NetSerializerConfig
struct FNameNetSerializerConfig
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IrisCore.NetBlobHandlerDefinition
// Kind: ScriptStruct; super: none
struct FNetBlobHandlerDefinition
{
public:
    FName ClassName; // 0x0000 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FNetBlobHandlerDefinition, ClassName) == 0, "Offset mismatch for FNetBlobHandlerDefinition::ClassName");

// /Script/IrisCore.NetObjectFilterDefinition
// Kind: ScriptStruct; super: none
struct FNetObjectFilterDefinition
{
public:
    std::uint8_t FilterName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t ClassName[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    FName ConfigClassName; // 0x0008 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FNetObjectFilterDefinition, FilterName) == 0, "Offset mismatch for FNetObjectFilterDefinition::FilterName");
static_assert(offsetof(FNetObjectFilterDefinition, ClassName) == 4, "Offset mismatch for FNetObjectFilterDefinition::ClassName");
static_assert(offsetof(FNetObjectFilterDefinition, ConfigClassName) == 8, "Offset mismatch for FNetObjectFilterDefinition::ConfigClassName");

// /Script/IrisCore.NetObjectGridFilterProfile
// Kind: ScriptStruct; super: none
struct FNetObjectGridFilterProfile
{
public:
    std::uint8_t FilterProfileName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint16_t FrameCountBeforeCulling; // 0x0004 (Size: 0x2, Type: UInt16Property)
    std::uint8_t bUse2DCullDistance; // 0x0006 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FNetObjectGridFilterProfile, FilterProfileName) == 0, "Offset mismatch for FNetObjectGridFilterProfile::FilterProfileName");
static_assert(offsetof(FNetObjectGridFilterProfile, FrameCountBeforeCulling) == 4, "Offset mismatch for FNetObjectGridFilterProfile::FrameCountBeforeCulling");
static_assert(offsetof(FNetObjectGridFilterProfile, bUse2DCullDistance) == 6, "Offset mismatch for FNetObjectGridFilterProfile::bUse2DCullDistance");

// /Script/IrisCore.NetObjectPrioritizerDefinition
// Kind: ScriptStruct; super: none
struct FNetObjectPrioritizerDefinition
{
public:
    std::uint8_t PrioritizerName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t ClassName[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    void* Class; // 0x0008 (Size: 0x8, Type: ClassProperty)
    FName ConfigClassName; // 0x0010 (Size: 0x8, Type: NameProperty)
    void* ConfigClass; // 0x0018 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(FNetObjectPrioritizerDefinition, PrioritizerName) == 0, "Offset mismatch for FNetObjectPrioritizerDefinition::PrioritizerName");
static_assert(offsetof(FNetObjectPrioritizerDefinition, ClassName) == 4, "Offset mismatch for FNetObjectPrioritizerDefinition::ClassName");
static_assert(offsetof(FNetObjectPrioritizerDefinition, Class) == 8, "Offset mismatch for FNetObjectPrioritizerDefinition::Class");
static_assert(offsetof(FNetObjectPrioritizerDefinition, ConfigClassName) == 16, "Offset mismatch for FNetObjectPrioritizerDefinition::ConfigClassName");
static_assert(offsetof(FNetObjectPrioritizerDefinition, ConfigClass) == 24, "Offset mismatch for FNetObjectPrioritizerDefinition::ConfigClass");

// /Script/IrisCore.NetRoleNetSerializerConfig
// Kind: ScriptStruct; super: NetSerializerConfig
struct FNetRoleNetSerializerConfig
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::int32_t RelativeInternalOffsetToOtherRole; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::int32_t RelativeExternalOffsetToOtherRole; // 0x0014 (Size: 0x4, Type: IntProperty)
    std::uint8_t LowerBound; // 0x0018 (Size: 0x1, Type: ByteProperty)
    std::uint8_t UpperBound; // 0x0019 (Size: 0x1, Type: ByteProperty)
    std::uint8_t BitCount; // 0x001A (Size: 0x1, Type: ByteProperty)
    std::uint8_t AutonomousProxyValue; // 0x001B (Size: 0x1, Type: ByteProperty)
    std::uint8_t SimulatedProxyValue; // 0x001C (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FNetRoleNetSerializerConfig, RelativeInternalOffsetToOtherRole) == 16, "Offset mismatch for FNetRoleNetSerializerConfig::RelativeInternalOffsetToOtherRole");
static_assert(offsetof(FNetRoleNetSerializerConfig, RelativeExternalOffsetToOtherRole) == 20, "Offset mismatch for FNetRoleNetSerializerConfig::RelativeExternalOffsetToOtherRole");
static_assert(offsetof(FNetRoleNetSerializerConfig, LowerBound) == 24, "Offset mismatch for FNetRoleNetSerializerConfig::LowerBound");
static_assert(offsetof(FNetRoleNetSerializerConfig, UpperBound) == 25, "Offset mismatch for FNetRoleNetSerializerConfig::UpperBound");
static_assert(offsetof(FNetRoleNetSerializerConfig, BitCount) == 26, "Offset mismatch for FNetRoleNetSerializerConfig::BitCount");
static_assert(offsetof(FNetRoleNetSerializerConfig, AutonomousProxyValue) == 27, "Offset mismatch for FNetRoleNetSerializerConfig::AutonomousProxyValue");
static_assert(offsetof(FNetRoleNetSerializerConfig, SimulatedProxyValue) == 28, "Offset mismatch for FNetRoleNetSerializerConfig::SimulatedProxyValue");

// /Script/IrisCore.NetSerializerConfig
// Kind: ScriptStruct; super: none
struct FNetSerializerConfig
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IrisCore.NetTokenStoreTypeIdPair
// Kind: ScriptStruct; super: none
struct FNetTokenStoreTypeIdPair
{
public:
    FString StoreTypeName; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint32_t TypeId; // 0x0010 (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(FNetTokenStoreTypeIdPair, StoreTypeName) == 0, "Offset mismatch for FNetTokenStoreTypeIdPair::StoreTypeName");
static_assert(offsetof(FNetTokenStoreTypeIdPair, TypeId) == 16, "Offset mismatch for FNetTokenStoreTypeIdPair::TypeId");

// /Script/IrisCore.NopNetSerializerConfig
// Kind: ScriptStruct; super: NetSerializerConfig
struct FNopNetSerializerConfig
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IrisCore.ObjectNetSerializerConfig
// Kind: ScriptStruct; super: NetSerializerConfig
struct FObjectNetSerializerConfig
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    void* PropertyClass; // 0x0010 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(FObjectNetSerializerConfig, PropertyClass) == 16, "Offset mismatch for FObjectNetSerializerConfig::PropertyClass");

// /Script/IrisCore.ObjectPtrNetSerializerConfig
// Kind: ScriptStruct; super: ObjectNetSerializerConfig
struct FObjectPtrNetSerializerConfig
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    void* PropertyClass; // 0x0010 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(FObjectPtrNetSerializerConfig, PropertyClass) == 16, "Offset mismatch for FObjectPtrNetSerializerConfig::PropertyClass");

// /Script/IrisCore.ObjectReplicatedBridgeCriticalClassConfig
// Kind: ScriptStruct; super: none
struct FObjectReplicatedBridgeCriticalClassConfig
{
public:
    std::uint8_t ClassName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t bDisconnectOnProtocolMismatch; // 0x0004 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FObjectReplicatedBridgeCriticalClassConfig, ClassName) == 0, "Offset mismatch for FObjectReplicatedBridgeCriticalClassConfig::ClassName");
static_assert(offsetof(FObjectReplicatedBridgeCriticalClassConfig, bDisconnectOnProtocolMismatch) == 4, "Offset mismatch for FObjectReplicatedBridgeCriticalClassConfig::bDisconnectOnProtocolMismatch");

// /Script/IrisCore.ObjectReplicationBridgeAsyncLoadingClassConfig
// Kind: ScriptStruct; super: none
struct FObjectReplicationBridgeAsyncLoadingClassConfig
{
public:
    std::uint8_t ClassName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t IrisAsyncLoadingPriority; // 0x0004 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FObjectReplicationBridgeAsyncLoadingClassConfig, ClassName) == 0, "Offset mismatch for FObjectReplicationBridgeAsyncLoadingClassConfig::ClassName");
static_assert(offsetof(FObjectReplicationBridgeAsyncLoadingClassConfig, IrisAsyncLoadingPriority) == 4, "Offset mismatch for FObjectReplicationBridgeAsyncLoadingClassConfig::IrisAsyncLoadingPriority");

// /Script/IrisCore.ObjectReplicationBridgeDeltaCompressionConfig
// Kind: ScriptStruct; super: none
struct FObjectReplicationBridgeDeltaCompressionConfig
{
public:
    std::uint8_t ClassName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t bEnableDeltaCompression; // 0x0004 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FObjectReplicationBridgeDeltaCompressionConfig, ClassName) == 0, "Offset mismatch for FObjectReplicationBridgeDeltaCompressionConfig::ClassName");
static_assert(offsetof(FObjectReplicationBridgeDeltaCompressionConfig, bEnableDeltaCompression) == 4, "Offset mismatch for FObjectReplicationBridgeDeltaCompressionConfig::bEnableDeltaCompression");

// /Script/IrisCore.ObjectReplicationBridgeFilterConfig
// Kind: ScriptStruct; super: none
struct FObjectReplicationBridgeFilterConfig
{
public:
    std::uint8_t ClassName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t DynamicFilterName[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    std::uint8_t FilterProfile[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::uint8_t bForceEnableOnAllInstances; // 0x000C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FObjectReplicationBridgeFilterConfig, ClassName) == 0, "Offset mismatch for FObjectReplicationBridgeFilterConfig::ClassName");
static_assert(offsetof(FObjectReplicationBridgeFilterConfig, DynamicFilterName) == 4, "Offset mismatch for FObjectReplicationBridgeFilterConfig::DynamicFilterName");
static_assert(offsetof(FObjectReplicationBridgeFilterConfig, FilterProfile) == 8, "Offset mismatch for FObjectReplicationBridgeFilterConfig::FilterProfile");
static_assert(offsetof(FObjectReplicationBridgeFilterConfig, bForceEnableOnAllInstances) == 12, "Offset mismatch for FObjectReplicationBridgeFilterConfig::bForceEnableOnAllInstances");

// /Script/IrisCore.ObjectReplicationBridgePollConfig
// Kind: ScriptStruct; super: none
struct FObjectReplicationBridgePollConfig
{
public:
    std::uint8_t ClassName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    float PollFrequency; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIncludeSubclasses; // 0x0008 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FObjectReplicationBridgePollConfig, ClassName) == 0, "Offset mismatch for FObjectReplicationBridgePollConfig::ClassName");
static_assert(offsetof(FObjectReplicationBridgePollConfig, PollFrequency) == 4, "Offset mismatch for FObjectReplicationBridgePollConfig::PollFrequency");
static_assert(offsetof(FObjectReplicationBridgePollConfig, bIncludeSubclasses) == 8, "Offset mismatch for FObjectReplicationBridgePollConfig::bIncludeSubclasses");

// /Script/IrisCore.ObjectReplicationBridgePrioritizerConfig
// Kind: ScriptStruct; super: none
struct FObjectReplicationBridgePrioritizerConfig
{
public:
    std::uint8_t ClassName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t PrioritizerName[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    std::uint8_t bForceEnableOnAllInstances; // 0x0008 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FObjectReplicationBridgePrioritizerConfig, ClassName) == 0, "Offset mismatch for FObjectReplicationBridgePrioritizerConfig::ClassName");
static_assert(offsetof(FObjectReplicationBridgePrioritizerConfig, PrioritizerName) == 4, "Offset mismatch for FObjectReplicationBridgePrioritizerConfig::PrioritizerName");
static_assert(offsetof(FObjectReplicationBridgePrioritizerConfig, bForceEnableOnAllInstances) == 8, "Offset mismatch for FObjectReplicationBridgePrioritizerConfig::bForceEnableOnAllInstances");

// /Script/IrisCore.ObjectReplicationBridgeTypeStatsConfig
// Kind: ScriptStruct; super: none
struct FObjectReplicationBridgeTypeStatsConfig
{
public:
    std::uint8_t ClassName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t TypeStatsName[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    std::uint8_t bIncludeInMinimalCSVStats; // 0x0008 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FObjectReplicationBridgeTypeStatsConfig, ClassName) == 0, "Offset mismatch for FObjectReplicationBridgeTypeStatsConfig::ClassName");
static_assert(offsetof(FObjectReplicationBridgeTypeStatsConfig, TypeStatsName) == 4, "Offset mismatch for FObjectReplicationBridgeTypeStatsConfig::TypeStatsName");
static_assert(offsetof(FObjectReplicationBridgeTypeStatsConfig, bIncludeInMinimalCSVStats) == 8, "Offset mismatch for FObjectReplicationBridgeTypeStatsConfig::bIncludeInMinimalCSVStats");

// /Script/IrisCore.ObjectScopeHysteresisProfile
// Kind: ScriptStruct; super: none
struct FObjectScopeHysteresisProfile
{
public:
    std::uint8_t FilterProfileName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t HysteresisFrameCount; // 0x0004 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FObjectScopeHysteresisProfile, FilterProfileName) == 0, "Offset mismatch for FObjectScopeHysteresisProfile::FilterProfileName");
static_assert(offsetof(FObjectScopeHysteresisProfile, HysteresisFrameCount) == 4, "Offset mismatch for FObjectScopeHysteresisProfile::HysteresisFrameCount");

// /Script/IrisCore.OptionalPropertyNetSerializerConfig
// Kind: ScriptStruct; super: NetSerializerConfig
struct FOptionalPropertyNetSerializerConfig
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Property[0x1]; // 0x0010 (Size: 0x1, Type: FieldPathProperty)
};

static_assert(offsetof(FOptionalPropertyNetSerializerConfig, Property) == 16, "Offset mismatch for FOptionalPropertyNetSerializerConfig::Property");

// /Script/IrisCore.PackedInt32NetSerializerConfig
// Kind: ScriptStruct; super: NetSerializerConfig
struct FPackedInt32NetSerializerConfig
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IrisCore.PackedInt64NetSerializerConfig
// Kind: ScriptStruct; super: NetSerializerConfig
struct FPackedInt64NetSerializerConfig
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IrisCore.PackedUint32NetSerializerConfig
// Kind: ScriptStruct; super: NetSerializerConfig
struct FPackedUint32NetSerializerConfig
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IrisCore.PackedUint64NetSerializerConfig
// Kind: ScriptStruct; super: NetSerializerConfig
struct FPackedUint64NetSerializerConfig
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IrisCore.PolymorphicArrayStructNetSerializerConfig
// Kind: ScriptStruct; super: PolymorphicStructNetSerializerConfig
struct FPolymorphicArrayStructNetSerializerConfig
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IrisCore.PolymorphicStructNetSerializerConfig
// Kind: ScriptStruct; super: NetSerializerConfig
struct FPolymorphicStructNetSerializerConfig
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IrisCore.RemoteObjectIdNetSerializerConfig
// Kind: ScriptStruct; super: NetSerializerConfig
struct FRemoteObjectIdNetSerializerConfig
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IrisCore.RemoteObjectReferenceNetSerializerConfig
// Kind: ScriptStruct; super: NetSerializerConfig
struct FRemoteObjectReferenceNetSerializerConfig
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IrisCore.RemoteServerIdNetSerializerConfig
// Kind: ScriptStruct; super: NetSerializerConfig
struct FRemoteServerIdNetSerializerConfig
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IrisCore.ReplicationStateDescriptorClassPushModelConfig
// Kind: ScriptStruct; super: none
struct FReplicationStateDescriptorClassPushModelConfig
{
public:
    FName ClassName; // 0x0000 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FReplicationStateDescriptorClassPushModelConfig, ClassName) == 0, "Offset mismatch for FReplicationStateDescriptorClassPushModelConfig::ClassName");

// /Script/IrisCore.Rotator3dNetSerializerConfig
// Kind: ScriptStruct; super: NetSerializerConfig
struct FRotator3dNetSerializerConfig
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IrisCore.Rotator3fNetSerializerConfig
// Kind: ScriptStruct; super: NetSerializerConfig
struct FRotator3fNetSerializerConfig
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IrisCore.RotatorAsByteNetSerializerConfig
// Kind: ScriptStruct; super: NetSerializerConfig
struct FRotatorAsByteNetSerializerConfig
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IrisCore.RotatorAsShortNetSerializerConfig
// Kind: ScriptStruct; super: NetSerializerConfig
struct FRotatorAsShortNetSerializerConfig
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IrisCore.RotatorNetSerializerConfig
// Kind: ScriptStruct; super: NetSerializerConfig
struct FRotatorNetSerializerConfig
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IrisCore.ScriptInterfaceNetSerializerConfig
// Kind: ScriptStruct; super: ObjectNetSerializerConfig
struct FScriptInterfaceNetSerializerConfig
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    void* PropertyClass; // 0x0010 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(FScriptInterfaceNetSerializerConfig, PropertyClass) == 16, "Offset mismatch for FScriptInterfaceNetSerializerConfig::PropertyClass");

// /Script/IrisCore.SoftClassPathNetSerializerConfig
// Kind: ScriptStruct; super: NetSerializerConfig
struct FSoftClassPathNetSerializerConfig
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IrisCore.SoftObjectNetSerializerConfig
// Kind: ScriptStruct; super: NetSerializerConfig
struct FSoftObjectNetSerializerConfig
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IrisCore.SoftObjectPathNetSerializerConfig
// Kind: ScriptStruct; super: NetSerializerConfig
struct FSoftObjectPathNetSerializerConfig
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IrisCore.StringNetSerializerConfig
// Kind: ScriptStruct; super: NetSerializerConfig
struct FStringNetSerializerConfig
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IrisCore.StructNetSerializerConfig
// Kind: ScriptStruct; super: NetSerializerConfig
struct FStructNetSerializerConfig
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IrisCore.SupportsStructNetSerializerConfig
// Kind: ScriptStruct; super: none
struct FSupportsStructNetSerializerConfig
{
public:
    std::uint8_t StructName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t bCanUseStructNetSerializer; // 0x0004 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FSupportsStructNetSerializerConfig, StructName) == 0, "Offset mismatch for FSupportsStructNetSerializerConfig::StructName");
static_assert(offsetof(FSupportsStructNetSerializerConfig, bCanUseStructNetSerializer) == 4, "Offset mismatch for FSupportsStructNetSerializerConfig::bCanUseStructNetSerializer");

// /Script/IrisCore.Uint16RangeNetSerializerConfig
// Kind: ScriptStruct; super: NetSerializerConfig
struct FUint16RangeNetSerializerConfig
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint16_t LowerBound; // 0x0010 (Size: 0x2, Type: UInt16Property)
    std::uint16_t UpperBound; // 0x0012 (Size: 0x2, Type: UInt16Property)
    std::uint8_t BitCount; // 0x0014 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FUint16RangeNetSerializerConfig, LowerBound) == 16, "Offset mismatch for FUint16RangeNetSerializerConfig::LowerBound");
static_assert(offsetof(FUint16RangeNetSerializerConfig, UpperBound) == 18, "Offset mismatch for FUint16RangeNetSerializerConfig::UpperBound");
static_assert(offsetof(FUint16RangeNetSerializerConfig, BitCount) == 20, "Offset mismatch for FUint16RangeNetSerializerConfig::BitCount");

// /Script/IrisCore.Uint32RangeNetSerializerConfig
// Kind: ScriptStruct; super: NetSerializerConfig
struct FUint32RangeNetSerializerConfig
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint32_t LowerBound; // 0x0010 (Size: 0x4, Type: UInt32Property)
    std::uint32_t UpperBound; // 0x0014 (Size: 0x4, Type: UInt32Property)
    std::uint8_t BitCount; // 0x0018 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FUint32RangeNetSerializerConfig, LowerBound) == 16, "Offset mismatch for FUint32RangeNetSerializerConfig::LowerBound");
static_assert(offsetof(FUint32RangeNetSerializerConfig, UpperBound) == 20, "Offset mismatch for FUint32RangeNetSerializerConfig::UpperBound");
static_assert(offsetof(FUint32RangeNetSerializerConfig, BitCount) == 24, "Offset mismatch for FUint32RangeNetSerializerConfig::BitCount");

// /Script/IrisCore.Uint64RangeNetSerializerConfig
// Kind: ScriptStruct; super: NetSerializerConfig
struct FUint64RangeNetSerializerConfig
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint64_t LowerBound; // 0x0010 (Size: 0x8, Type: UInt64Property)
    std::uint64_t UpperBound; // 0x0018 (Size: 0x8, Type: UInt64Property)
    std::uint8_t BitCount; // 0x0020 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FUint64RangeNetSerializerConfig, LowerBound) == 16, "Offset mismatch for FUint64RangeNetSerializerConfig::LowerBound");
static_assert(offsetof(FUint64RangeNetSerializerConfig, UpperBound) == 24, "Offset mismatch for FUint64RangeNetSerializerConfig::UpperBound");
static_assert(offsetof(FUint64RangeNetSerializerConfig, BitCount) == 32, "Offset mismatch for FUint64RangeNetSerializerConfig::BitCount");

// /Script/IrisCore.Uint8RangeNetSerializerConfig
// Kind: ScriptStruct; super: NetSerializerConfig
struct FUint8RangeNetSerializerConfig
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t LowerBound; // 0x0010 (Size: 0x1, Type: ByteProperty)
    std::uint8_t UpperBound; // 0x0011 (Size: 0x1, Type: ByteProperty)
    std::uint8_t BitCount; // 0x0012 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FUint8RangeNetSerializerConfig, LowerBound) == 16, "Offset mismatch for FUint8RangeNetSerializerConfig::LowerBound");
static_assert(offsetof(FUint8RangeNetSerializerConfig, UpperBound) == 17, "Offset mismatch for FUint8RangeNetSerializerConfig::UpperBound");
static_assert(offsetof(FUint8RangeNetSerializerConfig, BitCount) == 18, "Offset mismatch for FUint8RangeNetSerializerConfig::BitCount");

// /Script/IrisCore.UintNetSerializerConfig
// Kind: ScriptStruct; super: NetSerializerConfig
struct FUintNetSerializerConfig
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t BitCount; // 0x0010 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FUintNetSerializerConfig, BitCount) == 16, "Offset mismatch for FUintNetSerializerConfig::BitCount");

// /Script/IrisCore.UnitQuat4dNetSerializerConfig
// Kind: ScriptStruct; super: NetSerializerConfig
struct FUnitQuat4dNetSerializerConfig
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IrisCore.UnitQuat4fNetSerializerConfig
// Kind: ScriptStruct; super: NetSerializerConfig
struct FUnitQuat4fNetSerializerConfig
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IrisCore.UnitQuatNetSerializerConfig
// Kind: ScriptStruct; super: NetSerializerConfig
struct FUnitQuatNetSerializerConfig
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IrisCore.Vector3dNetSerializerConfig
// Kind: ScriptStruct; super: NetSerializerConfig
struct FVector3dNetSerializerConfig
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IrisCore.Vector3fNetSerializerConfig
// Kind: ScriptStruct; super: NetSerializerConfig
struct FVector3fNetSerializerConfig
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IrisCore.VectorNetQuantize100NetSerializerConfig
// Kind: ScriptStruct; super: NetSerializerConfig
struct FVectorNetQuantize100NetSerializerConfig
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IrisCore.VectorNetQuantize10NetSerializerConfig
// Kind: ScriptStruct; super: NetSerializerConfig
struct FVectorNetQuantize10NetSerializerConfig
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IrisCore.VectorNetQuantizeNetSerializerConfig
// Kind: ScriptStruct; super: NetSerializerConfig
struct FVectorNetQuantizeNetSerializerConfig
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IrisCore.VectorNetQuantizeNormalNetSerializerConfig
// Kind: ScriptStruct; super: NetSerializerConfig
struct FVectorNetQuantizeNormalNetSerializerConfig
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IrisCore.VectorNetSerializerConfig
// Kind: ScriptStruct; super: NetSerializerConfig
struct FVectorNetSerializerConfig
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IrisCore.WeakObjectNetSerializerConfig
// Kind: ScriptStruct; super: ObjectNetSerializerConfig
struct FWeakObjectNetSerializerConfig
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    void* PropertyClass; // 0x0010 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(FWeakObjectNetSerializerConfig, PropertyClass) == 16, "Offset mismatch for FWeakObjectNetSerializerConfig::PropertyClass");

// /Script/IrisCore.AlwaysRelevantNetObjectFilter
// Kind: Class; super: NetObjectFilter
class UAlwaysRelevantNetObjectFilter
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IrisCore.AlwaysRelevantNetObjectFilterConfig
// Kind: Class; super: NetObjectFilterConfig
class UAlwaysRelevantNetObjectFilterConfig
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IrisCore.ChunkedDataStream
// Kind: Class; super: DataStream
class UChunkedDataStream
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    void* PackageMap; // 0x0058 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UChunkedDataStream, PackageMap) == 88, "Offset mismatch for UChunkedDataStream::PackageMap");

// /Script/IrisCore.DataStream
// Kind: Class; super: Object
class UDataStream
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IrisCore.DataStreamDefinitions
// Kind: Class; super: Object
class UDataStreamDefinitions
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> DataStreamDefinitions; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UDataStreamDefinitions, DataStreamDefinitions) == 40, "Offset mismatch for UDataStreamDefinitions::DataStreamDefinitions");

// /Script/IrisCore.DataStreamManager
// Kind: Class; super: DataStream
class UDataStreamManager
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IrisCore.FieldOfViewNetObjectPrioritizer
// Kind: Class; super: LocationBasedNetObjectPrioritizer
class UFieldOfViewNetObjectPrioritizer
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IrisCore.FieldOfViewNetObjectPrioritizerConfig
// Kind: Class; super: NetObjectPrioritizerConfig
class UFieldOfViewNetObjectPrioritizerConfig
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    float InnerSphereRadius; // 0x0028 (Size: 0x4, Type: FloatProperty)
    float InnerSpherePriority; // 0x002C (Size: 0x4, Type: FloatProperty)
    float OuterSphereRadius; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float OuterSpherePriority; // 0x0034 (Size: 0x4, Type: FloatProperty)
    float ConeFieldOfViewDegrees; // 0x0038 (Size: 0x4, Type: FloatProperty)
    float InnerConeLength; // 0x003C (Size: 0x4, Type: FloatProperty)
    float ConeLength; // 0x0040 (Size: 0x4, Type: FloatProperty)
    float MinConePriority; // 0x0044 (Size: 0x4, Type: FloatProperty)
    float MaxConePriority; // 0x0048 (Size: 0x4, Type: FloatProperty)
    float LineOfSightWidth; // 0x004C (Size: 0x4, Type: FloatProperty)
    float LineOfSightPriority; // 0x0050 (Size: 0x4, Type: FloatProperty)
    float OutsidePriority; // 0x0054 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFieldOfViewNetObjectPrioritizerConfig, InnerSphereRadius) == 40, "Offset mismatch for UFieldOfViewNetObjectPrioritizerConfig::InnerSphereRadius");
static_assert(offsetof(UFieldOfViewNetObjectPrioritizerConfig, InnerSpherePriority) == 44, "Offset mismatch for UFieldOfViewNetObjectPrioritizerConfig::InnerSpherePriority");
static_assert(offsetof(UFieldOfViewNetObjectPrioritizerConfig, OuterSphereRadius) == 48, "Offset mismatch for UFieldOfViewNetObjectPrioritizerConfig::OuterSphereRadius");
static_assert(offsetof(UFieldOfViewNetObjectPrioritizerConfig, OuterSpherePriority) == 52, "Offset mismatch for UFieldOfViewNetObjectPrioritizerConfig::OuterSpherePriority");
static_assert(offsetof(UFieldOfViewNetObjectPrioritizerConfig, ConeFieldOfViewDegrees) == 56, "Offset mismatch for UFieldOfViewNetObjectPrioritizerConfig::ConeFieldOfViewDegrees");
static_assert(offsetof(UFieldOfViewNetObjectPrioritizerConfig, InnerConeLength) == 60, "Offset mismatch for UFieldOfViewNetObjectPrioritizerConfig::InnerConeLength");
static_assert(offsetof(UFieldOfViewNetObjectPrioritizerConfig, ConeLength) == 64, "Offset mismatch for UFieldOfViewNetObjectPrioritizerConfig::ConeLength");
static_assert(offsetof(UFieldOfViewNetObjectPrioritizerConfig, MinConePriority) == 68, "Offset mismatch for UFieldOfViewNetObjectPrioritizerConfig::MinConePriority");
static_assert(offsetof(UFieldOfViewNetObjectPrioritizerConfig, MaxConePriority) == 72, "Offset mismatch for UFieldOfViewNetObjectPrioritizerConfig::MaxConePriority");
static_assert(offsetof(UFieldOfViewNetObjectPrioritizerConfig, LineOfSightWidth) == 76, "Offset mismatch for UFieldOfViewNetObjectPrioritizerConfig::LineOfSightWidth");
static_assert(offsetof(UFieldOfViewNetObjectPrioritizerConfig, LineOfSightPriority) == 80, "Offset mismatch for UFieldOfViewNetObjectPrioritizerConfig::LineOfSightPriority");
static_assert(offsetof(UFieldOfViewNetObjectPrioritizerConfig, OutsidePriority) == 84, "Offset mismatch for UFieldOfViewNetObjectPrioritizerConfig::OutsidePriority");

// /Script/IrisCore.FilterOutNetObjectFilter
// Kind: Class; super: NetObjectFilter
class UFilterOutNetObjectFilter
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IrisCore.FilterOutNetObjectFilterConfig
// Kind: Class; super: NetObjectFilterConfig
class UFilterOutNetObjectFilterConfig
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IrisCore.IrisCreationFlowLogConfig
// Kind: Class; super: Object
class UIrisCreationFlowLogConfig
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> ClassFilters; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UIrisCreationFlowLogConfig, ClassFilters) == 40, "Offset mismatch for UIrisCreationFlowLogConfig::ClassFilters");

// /Script/IrisCore.IrisObjectReferencePackageMap
// Kind: Class; super: PackageMap
class UIrisObjectReferencePackageMap
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IrisCore.LocationBasedNetObjectPrioritizer
// Kind: Class; super: NetObjectPrioritizer
class ULocationBasedNetObjectPrioritizer
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IrisCore.MultiServerNetRefHandleGenerator
// Kind: Class; super: NetRefHandleGenerator
class UMultiServerNetRefHandleGenerator
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint64_t NumServerIdBits; // 0x0030 (Size: 0x8, Type: UInt64Property)
    std::uint32_t ServerID; // 0x0038 (Size: 0x4, Type: UInt32Property)
    std::uint32_t InitialSerial; // 0x003C (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(UMultiServerNetRefHandleGenerator, NumServerIdBits) == 48, "Offset mismatch for UMultiServerNetRefHandleGenerator::NumServerIdBits");
static_assert(offsetof(UMultiServerNetRefHandleGenerator, ServerID) == 56, "Offset mismatch for UMultiServerNetRefHandleGenerator::ServerID");
static_assert(offsetof(UMultiServerNetRefHandleGenerator, InitialSerial) == 60, "Offset mismatch for UMultiServerNetRefHandleGenerator::InitialSerial");

// /Script/IrisCore.NetBlobHandler
// Kind: Class; super: Object
class UNetBlobHandler
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IrisCore.NetBlobHandlerDefinitions
// Kind: Class; super: Object
class UNetBlobHandlerDefinitions
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> NetBlobHandlerDefinitions; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UNetBlobHandlerDefinitions, NetBlobHandlerDefinitions) == 40, "Offset mismatch for UNetBlobHandlerDefinitions::NetBlobHandlerDefinitions");

// /Script/IrisCore.NetObjectBlobHandler
// Kind: Class; super: NetBlobHandler
class UNetObjectBlobHandler
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IrisCore.NetObjectConnectionFilter
// Kind: Class; super: NetObjectFilter
class UNetObjectConnectionFilter
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IrisCore.NetObjectConnectionFilterConfig
// Kind: Class; super: NetObjectFilterConfig
class UNetObjectConnectionFilterConfig
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint16_t MaxObjectCount; // 0x0028 (Size: 0x2, Type: UInt16Property)
};

static_assert(offsetof(UNetObjectConnectionFilterConfig, MaxObjectCount) == 40, "Offset mismatch for UNetObjectConnectionFilterConfig::MaxObjectCount");

// /Script/IrisCore.NetObjectCountLimiter
// Kind: Class; super: NetObjectPrioritizer
class UNetObjectCountLimiter
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IrisCore.NetObjectCountLimiterConfig
// Kind: Class; super: NetObjectPrioritizerConfig
class UNetObjectCountLimiterConfig
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Mode; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0029
    std::uint32_t MaxObjectCount; // 0x002C (Size: 0x4, Type: UInt32Property)
    float Priority; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float OwningConnectionPriority; // 0x0034 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bEnableOwnedObjectsFastLane; // 0x0038 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UNetObjectCountLimiterConfig, Mode) == 40, "Offset mismatch for UNetObjectCountLimiterConfig::Mode");
static_assert(offsetof(UNetObjectCountLimiterConfig, MaxObjectCount) == 44, "Offset mismatch for UNetObjectCountLimiterConfig::MaxObjectCount");
static_assert(offsetof(UNetObjectCountLimiterConfig, Priority) == 48, "Offset mismatch for UNetObjectCountLimiterConfig::Priority");
static_assert(offsetof(UNetObjectCountLimiterConfig, OwningConnectionPriority) == 52, "Offset mismatch for UNetObjectCountLimiterConfig::OwningConnectionPriority");
static_assert(offsetof(UNetObjectCountLimiterConfig, bEnableOwnedObjectsFastLane) == 56, "Offset mismatch for UNetObjectCountLimiterConfig::bEnableOwnedObjectsFastLane");

// /Script/IrisCore.NetObjectFactory
// Kind: Class; super: Object
class UNetObjectFactory
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IrisCore.NetObjectFilter
// Kind: Class; super: Object
class UNetObjectFilter
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IrisCore.NetObjectFilterConfig
// Kind: Class; super: Object
class UNetObjectFilterConfig
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IrisCore.NetObjectFilterDefinitions
// Kind: Class; super: Object
class UNetObjectFilterDefinitions
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> NetObjectFilterDefinitions; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UNetObjectFilterDefinitions, NetObjectFilterDefinitions) == 40, "Offset mismatch for UNetObjectFilterDefinitions::NetObjectFilterDefinitions");

// /Script/IrisCore.NetObjectGridFilter
// Kind: Class; super: NetObjectFilter
class UNetObjectGridFilter
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IrisCore.NetObjectGridFilterConfig
// Kind: Class; super: NetObjectFilterConfig
class UNetObjectGridFilterConfig
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint32_t ViewPosRelevancyFrameCount; // 0x0028 (Size: 0x4, Type: UInt32Property)
    std::uint16_t DefaultFrameCountBeforeCulling; // 0x002C (Size: 0x2, Type: UInt16Property)
    std::uint8_t Pad_0001[0x2]; // 0x002E
    float CellSizeX; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float CellSizeY; // 0x0034 (Size: 0x4, Type: FloatProperty)
    float DefaultCullDistance; // 0x0038 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bUseExactCullDistance; // 0x003C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDefaultUse2DCullDistance; // 0x003D (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x003E
    TArray<void*> FilterProfiles; // 0x0040 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UNetObjectGridFilterConfig, ViewPosRelevancyFrameCount) == 40, "Offset mismatch for UNetObjectGridFilterConfig::ViewPosRelevancyFrameCount");
static_assert(offsetof(UNetObjectGridFilterConfig, DefaultFrameCountBeforeCulling) == 44, "Offset mismatch for UNetObjectGridFilterConfig::DefaultFrameCountBeforeCulling");
static_assert(offsetof(UNetObjectGridFilterConfig, CellSizeX) == 48, "Offset mismatch for UNetObjectGridFilterConfig::CellSizeX");
static_assert(offsetof(UNetObjectGridFilterConfig, CellSizeY) == 52, "Offset mismatch for UNetObjectGridFilterConfig::CellSizeY");
static_assert(offsetof(UNetObjectGridFilterConfig, DefaultCullDistance) == 56, "Offset mismatch for UNetObjectGridFilterConfig::DefaultCullDistance");
static_assert(offsetof(UNetObjectGridFilterConfig, bUseExactCullDistance) == 60, "Offset mismatch for UNetObjectGridFilterConfig::bUseExactCullDistance");
static_assert(offsetof(UNetObjectGridFilterConfig, bDefaultUse2DCullDistance) == 61, "Offset mismatch for UNetObjectGridFilterConfig::bDefaultUse2DCullDistance");
static_assert(offsetof(UNetObjectGridFilterConfig, FilterProfiles) == 64, "Offset mismatch for UNetObjectGridFilterConfig::FilterProfiles");

// /Script/IrisCore.NetObjectGridWorldLocFilter
// Kind: Class; super: NetObjectGridFilter
class UNetObjectGridWorldLocFilter
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IrisCore.NetObjectParentRelevancyGridFilter
// Kind: Class; super: NetObjectGridWorldLocFilter
class UNetObjectParentRelevancyGridFilter
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IrisCore.NetObjectParentRelevancyGridFilterConfig
// Kind: Class; super: NetObjectGridFilterConfig
class UNetObjectParentRelevancyGridFilterConfig
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    std::uint32_t MaxParentChainDepth; // 0x0050 (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(UNetObjectParentRelevancyGridFilterConfig, MaxParentChainDepth) == 80, "Offset mismatch for UNetObjectParentRelevancyGridFilterConfig::MaxParentChainDepth");

// /Script/IrisCore.NetObjectPrioritizer
// Kind: Class; super: Object
class UNetObjectPrioritizer
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IrisCore.NetObjectPrioritizerConfig
// Kind: Class; super: Object
class UNetObjectPrioritizerConfig
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IrisCore.NetObjectPrioritizerDefinitions
// Kind: Class; super: Object
class UNetObjectPrioritizerDefinitions
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> NetObjectPrioritizerDefinitions; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UNetObjectPrioritizerDefinitions, NetObjectPrioritizerDefinitions) == 40, "Offset mismatch for UNetObjectPrioritizerDefinitions::NetObjectPrioritizerDefinitions");

// /Script/IrisCore.NetRPCHandler
// Kind: Class; super: NetBlobHandler
class UNetRPCHandler
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IrisCore.NetRefHandleGenerator
// Kind: Class; super: Object
class UNetRefHandleGenerator
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IrisCore.NetTokenDataStream
// Kind: Class; super: DataStream
class UNetTokenDataStream
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IrisCore.NetTokenTypeIdConfig
// Kind: Class; super: Object
class UNetTokenTypeIdConfig
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> ReservedTypeIds; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UNetTokenTypeIdConfig, ReservedTypeIds) == 40, "Offset mismatch for UNetTokenTypeIdConfig::ReservedTypeIds");

// /Script/IrisCore.ObjectReplicationBridge
// Kind: Class; super: ReplicationBridge
class UObjectReplicationBridge
{
public:
    std::uint8_t Pad_0000[0x240]; // 0x0000
    TArray<void*> NetObjectFactories; // 0x0240 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UObjectReplicationBridge, NetObjectFactories) == 576, "Offset mismatch for UObjectReplicationBridge::NetObjectFactories");

// /Script/IrisCore.ObjectReplicationBridgeConfig
// Kind: Class; super: Object
class UObjectReplicationBridgeConfig
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> PollConfigs; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> FilterConfigs; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PrioritizerConfigs; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> DeltaCompressionConfigs; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CriticalClassConfigs; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bAllClassesCritical; // 0x0078 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0079
    TArray<void*> TypeStatsConfigs; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    FName DefaultSpatialFilterName; // 0x0090 (Size: 0x8, Type: NameProperty)
    TArray<void*> AsyncLoadingClassConfigs; // 0x0098 (Size: 0x10, Type: ArrayProperty)
    FName RequiredNetDriverChannelClassName; // 0x00A8 (Size: 0x8, Type: NameProperty)
    TArray<void*> CriticalActorClasses; // 0x00B0 (Size: 0x10, Type: ArrayProperty)
    void* NetRefHandleGeneratorClass; // 0x00C0 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UObjectReplicationBridgeConfig, PollConfigs) == 40, "Offset mismatch for UObjectReplicationBridgeConfig::PollConfigs");
static_assert(offsetof(UObjectReplicationBridgeConfig, FilterConfigs) == 56, "Offset mismatch for UObjectReplicationBridgeConfig::FilterConfigs");
static_assert(offsetof(UObjectReplicationBridgeConfig, PrioritizerConfigs) == 72, "Offset mismatch for UObjectReplicationBridgeConfig::PrioritizerConfigs");
static_assert(offsetof(UObjectReplicationBridgeConfig, DeltaCompressionConfigs) == 88, "Offset mismatch for UObjectReplicationBridgeConfig::DeltaCompressionConfigs");
static_assert(offsetof(UObjectReplicationBridgeConfig, CriticalClassConfigs) == 104, "Offset mismatch for UObjectReplicationBridgeConfig::CriticalClassConfigs");
static_assert(offsetof(UObjectReplicationBridgeConfig, bAllClassesCritical) == 120, "Offset mismatch for UObjectReplicationBridgeConfig::bAllClassesCritical");
static_assert(offsetof(UObjectReplicationBridgeConfig, TypeStatsConfigs) == 128, "Offset mismatch for UObjectReplicationBridgeConfig::TypeStatsConfigs");
static_assert(offsetof(UObjectReplicationBridgeConfig, DefaultSpatialFilterName) == 144, "Offset mismatch for UObjectReplicationBridgeConfig::DefaultSpatialFilterName");
static_assert(offsetof(UObjectReplicationBridgeConfig, AsyncLoadingClassConfigs) == 152, "Offset mismatch for UObjectReplicationBridgeConfig::AsyncLoadingClassConfigs");
static_assert(offsetof(UObjectReplicationBridgeConfig, RequiredNetDriverChannelClassName) == 168, "Offset mismatch for UObjectReplicationBridgeConfig::RequiredNetDriverChannelClassName");
static_assert(offsetof(UObjectReplicationBridgeConfig, CriticalActorClasses) == 176, "Offset mismatch for UObjectReplicationBridgeConfig::CriticalActorClasses");
static_assert(offsetof(UObjectReplicationBridgeConfig, NetRefHandleGeneratorClass) == 192, "Offset mismatch for UObjectReplicationBridgeConfig::NetRefHandleGeneratorClass");

// /Script/IrisCore.PartialNetObjectAttachmentHandler
// Kind: Class; super: SequentialPartialNetBlobHandler
class UPartialNetObjectAttachmentHandler
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IrisCore.PartialNetObjectAttachmentHandlerConfig
// Kind: Class; super: SequentialPartialNetBlobHandlerConfig
class UPartialNetObjectAttachmentHandlerConfig
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint32_t BitCountSplitThreshold; // 0x0030 (Size: 0x4, Type: UInt32Property)
    std::uint32_t ClientUnreliableBitCountSplitThreshold; // 0x0034 (Size: 0x4, Type: UInt32Property)
    std::uint32_t ServerUnreliableBitCountSplitThreshold; // 0x0038 (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(UPartialNetObjectAttachmentHandlerConfig, BitCountSplitThreshold) == 48, "Offset mismatch for UPartialNetObjectAttachmentHandlerConfig::BitCountSplitThreshold");
static_assert(offsetof(UPartialNetObjectAttachmentHandlerConfig, ClientUnreliableBitCountSplitThreshold) == 52, "Offset mismatch for UPartialNetObjectAttachmentHandlerConfig::ClientUnreliableBitCountSplitThreshold");
static_assert(offsetof(UPartialNetObjectAttachmentHandlerConfig, ServerUnreliableBitCountSplitThreshold) == 56, "Offset mismatch for UPartialNetObjectAttachmentHandlerConfig::ServerUnreliableBitCountSplitThreshold");

// /Script/IrisCore.RemoteObjectNetRefHandleGenerator
// Kind: Class; super: NetRefHandleGenerator
class URemoteObjectNetRefHandleGenerator
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IrisCore.ReplicationBridge
// Kind: Class; super: Object
class UReplicationBridge
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IrisCore.ReplicationDataStream
// Kind: Class; super: DataStream
class UReplicationDataStream
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IrisCore.ReplicationFilteringConfig
// Kind: Class; super: Object
class UReplicationFilteringConfig
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bEnableObjectScopeHysteresis; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t DefaultHysteresisFrameCount; // 0x0029 (Size: 0x1, Type: ByteProperty)
    std::uint8_t HysteresisUpdateConnectionThrottling; // 0x002A (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x5]; // 0x002B
    TArray<void*> HysteresisProfiles; // 0x0030 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UReplicationFilteringConfig, bEnableObjectScopeHysteresis) == 40, "Offset mismatch for UReplicationFilteringConfig::bEnableObjectScopeHysteresis");
static_assert(offsetof(UReplicationFilteringConfig, DefaultHysteresisFrameCount) == 41, "Offset mismatch for UReplicationFilteringConfig::DefaultHysteresisFrameCount");
static_assert(offsetof(UReplicationFilteringConfig, HysteresisUpdateConnectionThrottling) == 42, "Offset mismatch for UReplicationFilteringConfig::HysteresisUpdateConnectionThrottling");
static_assert(offsetof(UReplicationFilteringConfig, HysteresisProfiles) == 48, "Offset mismatch for UReplicationFilteringConfig::HysteresisProfiles");

// /Script/IrisCore.ReplicationStateDescriptorConfig
// Kind: Class; super: Object
class UReplicationStateDescriptorConfig
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> SupportsStructNetSerializerList; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> EnsureFullyPushModelClassNames; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bEnsureAllClassesAreFullyPushModel; // 0x0048 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UReplicationStateDescriptorConfig, SupportsStructNetSerializerList) == 40, "Offset mismatch for UReplicationStateDescriptorConfig::SupportsStructNetSerializerList");
static_assert(offsetof(UReplicationStateDescriptorConfig, EnsureFullyPushModelClassNames) == 56, "Offset mismatch for UReplicationStateDescriptorConfig::EnsureFullyPushModelClassNames");
static_assert(offsetof(UReplicationStateDescriptorConfig, bEnsureAllClassesAreFullyPushModel) == 72, "Offset mismatch for UReplicationStateDescriptorConfig::bEnsureAllClassesAreFullyPushModel");

// /Script/IrisCore.ReplicationSystem
// Kind: Class; super: Object
class UReplicationSystem
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* ReplicationBridge; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x18]; // 0x0040
    void* NetRefHandleGenerator; // 0x0058 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UReplicationSystem, ReplicationBridge) == 56, "Offset mismatch for UReplicationSystem::ReplicationBridge");
static_assert(offsetof(UReplicationSystem, NetRefHandleGenerator) == 88, "Offset mismatch for UReplicationSystem::NetRefHandleGenerator");

// /Script/IrisCore.SequentialPartialNetBlobHandler
// Kind: Class; super: NetBlobHandler
class USequentialPartialNetBlobHandler
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IrisCore.SequentialPartialNetBlobHandlerConfig
// Kind: Class; super: Object
class USequentialPartialNetBlobHandlerConfig
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint32_t MaxPartBitCount; // 0x0028 (Size: 0x4, Type: UInt32Property)
    std::uint32_t MaxPartCount; // 0x002C (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(USequentialPartialNetBlobHandlerConfig, MaxPartBitCount) == 40, "Offset mismatch for USequentialPartialNetBlobHandlerConfig::MaxPartBitCount");
static_assert(offsetof(USequentialPartialNetBlobHandlerConfig, MaxPartCount) == 44, "Offset mismatch for USequentialPartialNetBlobHandlerConfig::MaxPartCount");

// /Script/IrisCore.SphereNetObjectPrioritizer
// Kind: Class; super: LocationBasedNetObjectPrioritizer
class USphereNetObjectPrioritizer
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IrisCore.SphereNetObjectPrioritizerConfig
// Kind: Class; super: NetObjectPrioritizerConfig
class USphereNetObjectPrioritizerConfig
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    float InnerRadius; // 0x0028 (Size: 0x4, Type: FloatProperty)
    float OuterRadius; // 0x002C (Size: 0x4, Type: FloatProperty)
    float InnerPriority; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float OuterPriority; // 0x0034 (Size: 0x4, Type: FloatProperty)
    float OutsidePriority; // 0x0038 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(USphereNetObjectPrioritizerConfig, InnerRadius) == 40, "Offset mismatch for USphereNetObjectPrioritizerConfig::InnerRadius");
static_assert(offsetof(USphereNetObjectPrioritizerConfig, OuterRadius) == 44, "Offset mismatch for USphereNetObjectPrioritizerConfig::OuterRadius");
static_assert(offsetof(USphereNetObjectPrioritizerConfig, InnerPriority) == 48, "Offset mismatch for USphereNetObjectPrioritizerConfig::InnerPriority");
static_assert(offsetof(USphereNetObjectPrioritizerConfig, OuterPriority) == 52, "Offset mismatch for USphereNetObjectPrioritizerConfig::OuterPriority");
static_assert(offsetof(USphereNetObjectPrioritizerConfig, OutsidePriority) == 56, "Offset mismatch for USphereNetObjectPrioritizerConfig::OutsidePriority");

// /Script/IrisCore.SphereWithOwnerBoostNetObjectPrioritizer
// Kind: Class; super: SphereNetObjectPrioritizer
class USphereWithOwnerBoostNetObjectPrioritizer
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IrisCore.SphereWithOwnerBoostNetObjectPrioritizerConfig
// Kind: Class; super: SphereNetObjectPrioritizerConfig
class USphereWithOwnerBoostNetObjectPrioritizerConfig
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    float OwnerPriorityBoost; // 0x0040 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(USphereWithOwnerBoostNetObjectPrioritizerConfig, OwnerPriorityBoost) == 64, "Offset mismatch for USphereWithOwnerBoostNetObjectPrioritizerConfig::OwnerPriorityBoost");

// /Script/IrisCore.WorldLocationsConfig
// Kind: Class; super: Object
class UWorldLocationsConfig
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t MinPos[0x18]; // 0x0028 (Size: 0x18, Type: StructProperty)
    std::uint8_t MaxPos[0x18]; // 0x0040 (Size: 0x18, Type: StructProperty)
    float MaxNetCullDistance; // 0x0058 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UWorldLocationsConfig, MinPos) == 40, "Offset mismatch for UWorldLocationsConfig::MinPos");
static_assert(offsetof(UWorldLocationsConfig, MaxPos) == 64, "Offset mismatch for UWorldLocationsConfig::MaxPos");
static_assert(offsetof(UWorldLocationsConfig, MaxNetCullDistance) == 88, "Offset mismatch for UWorldLocationsConfig::MaxNetCullDistance");

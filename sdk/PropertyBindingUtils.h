/**
 * decamp dumper generated SDK
 * Package: /script/PropertyBindingUtils
 */
#pragma once
#include "Basic.h"

// /script/PropertyBindingUtils.PropertyBindingBindableStructDescriptor
// Kind: ScriptStruct; super: none
struct FPropertyBindingBindableStructDescriptor
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* Struct; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    FName Name; // 0x0010 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FPropertyBindingBindableStructDescriptor, Struct) == 8, "Offset mismatch for FPropertyBindingBindableStructDescriptor::Struct");
static_assert(offsetof(FPropertyBindingBindableStructDescriptor, Name) == 16, "Offset mismatch for FPropertyBindingBindableStructDescriptor::Name");

// /script/PropertyBindingUtils.PropertyBindingBinding
// Kind: ScriptStruct; super: none
struct FPropertyBindingBinding
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t SourcePropertyPath[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t TargetPropertyPath[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPropertyBindingBinding, SourcePropertyPath) == 8, "Offset mismatch for FPropertyBindingBinding::SourcePropertyPath");
static_assert(offsetof(FPropertyBindingBinding, TargetPropertyPath) == 24, "Offset mismatch for FPropertyBindingBinding::TargetPropertyPath");

// /script/PropertyBindingUtils.PropertyBindingBindingCollection
// Kind: ScriptStruct; super: none
struct FPropertyBindingBindingCollection
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    TArray<void*> CopyBatches; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PropertyCopies; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PropertyIndirections; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0040
    TScriptInterface<void> BindingsOwner; // 0x0048 (Size: 0x10, Type: InterfaceProperty)
};

static_assert(offsetof(FPropertyBindingBindingCollection, CopyBatches) == 16, "Offset mismatch for FPropertyBindingBindingCollection::CopyBatches");
static_assert(offsetof(FPropertyBindingBindingCollection, PropertyCopies) == 32, "Offset mismatch for FPropertyBindingBindingCollection::PropertyCopies");
static_assert(offsetof(FPropertyBindingBindingCollection, PropertyIndirections) == 48, "Offset mismatch for FPropertyBindingBindingCollection::PropertyIndirections");
static_assert(offsetof(FPropertyBindingBindingCollection, BindingsOwner) == 72, "Offset mismatch for FPropertyBindingBindingCollection::BindingsOwner");

// /script/PropertyBindingUtils.PropertyBindingCopyInfo
// Kind: ScriptStruct; super: none
struct FPropertyBindingCopyInfo
{
public:
    std::uint8_t SourceIndirection[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t TargetIndirection[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t SourceDataHandle[0x20]; // 0x0030 (Size: 0x20, Type: StructProperty)
    void* SourceStructType; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    std::int32_t CopySize; // 0x0058 (Size: 0x4, Type: IntProperty)
    std::uint8_t Type; // 0x005C (Size: 0x1, Type: EnumProperty)
    std::uint8_t bPromoteArrayCopy; // 0x005D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCopyFromTargetToSource; // 0x005E (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPropertyBindingCopyInfo, SourceIndirection) == 0, "Offset mismatch for FPropertyBindingCopyInfo::SourceIndirection");
static_assert(offsetof(FPropertyBindingCopyInfo, TargetIndirection) == 24, "Offset mismatch for FPropertyBindingCopyInfo::TargetIndirection");
static_assert(offsetof(FPropertyBindingCopyInfo, SourceDataHandle) == 48, "Offset mismatch for FPropertyBindingCopyInfo::SourceDataHandle");
static_assert(offsetof(FPropertyBindingCopyInfo, SourceStructType) == 80, "Offset mismatch for FPropertyBindingCopyInfo::SourceStructType");
static_assert(offsetof(FPropertyBindingCopyInfo, CopySize) == 88, "Offset mismatch for FPropertyBindingCopyInfo::CopySize");
static_assert(offsetof(FPropertyBindingCopyInfo, Type) == 92, "Offset mismatch for FPropertyBindingCopyInfo::Type");
static_assert(offsetof(FPropertyBindingCopyInfo, bPromoteArrayCopy) == 93, "Offset mismatch for FPropertyBindingCopyInfo::bPromoteArrayCopy");
static_assert(offsetof(FPropertyBindingCopyInfo, bCopyFromTargetToSource) == 94, "Offset mismatch for FPropertyBindingCopyInfo::bCopyFromTargetToSource");

// /script/PropertyBindingUtils.PropertyBindingCopyInfoBatch
// Kind: ScriptStruct; super: none
struct FPropertyBindingCopyInfoBatch
{
public:
    std::uint8_t TargetStruct[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t BindingsBegin[0x2]; // 0x0010 (Size: 0x2, Type: StructProperty)
    std::uint8_t BindingsEnd[0x2]; // 0x0012 (Size: 0x2, Type: StructProperty)
    std::uint8_t PropertyFunctionsBegin[0x2]; // 0x0014 (Size: 0x2, Type: StructProperty)
    std::uint8_t PropertyFunctionsEnd[0x1]; // 0x0016 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPropertyBindingCopyInfoBatch, TargetStruct) == 0, "Offset mismatch for FPropertyBindingCopyInfoBatch::TargetStruct");
static_assert(offsetof(FPropertyBindingCopyInfoBatch, BindingsBegin) == 16, "Offset mismatch for FPropertyBindingCopyInfoBatch::BindingsBegin");
static_assert(offsetof(FPropertyBindingCopyInfoBatch, BindingsEnd) == 18, "Offset mismatch for FPropertyBindingCopyInfoBatch::BindingsEnd");
static_assert(offsetof(FPropertyBindingCopyInfoBatch, PropertyFunctionsBegin) == 20, "Offset mismatch for FPropertyBindingCopyInfoBatch::PropertyFunctionsBegin");
static_assert(offsetof(FPropertyBindingCopyInfoBatch, PropertyFunctionsEnd) == 22, "Offset mismatch for FPropertyBindingCopyInfoBatch::PropertyFunctionsEnd");

// /script/PropertyBindingUtils.PropertyBindingIndex16
// Kind: ScriptStruct; super: none
struct FPropertyBindingIndex16
{
public:
    std::uint16_t Value; // 0x0000 (Size: 0x2, Type: UInt16Property)
};

static_assert(offsetof(FPropertyBindingIndex16, Value) == 0, "Offset mismatch for FPropertyBindingIndex16::Value");

// /script/PropertyBindingUtils.PropertyBindingPath
// Kind: ScriptStruct; super: none
struct FPropertyBindingPath
{
public:
    TArray<void*> Segments; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPropertyBindingPath, Segments) == 0, "Offset mismatch for FPropertyBindingPath::Segments");

// /script/PropertyBindingUtils.PropertyBindingPathSegment
// Kind: ScriptStruct; super: none
struct FPropertyBindingPathSegment
{
public:
    std::uint8_t Name[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::int32_t ArrayIndex; // 0x0004 (Size: 0x4, Type: IntProperty)
    void* InstanceStruct; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t InstancedStructAccessType; // 0x0010 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FPropertyBindingPathSegment, Name) == 0, "Offset mismatch for FPropertyBindingPathSegment::Name");
static_assert(offsetof(FPropertyBindingPathSegment, ArrayIndex) == 4, "Offset mismatch for FPropertyBindingPathSegment::ArrayIndex");
static_assert(offsetof(FPropertyBindingPathSegment, InstanceStruct) == 8, "Offset mismatch for FPropertyBindingPathSegment::InstanceStruct");
static_assert(offsetof(FPropertyBindingPathSegment, InstancedStructAccessType) == 16, "Offset mismatch for FPropertyBindingPathSegment::InstancedStructAccessType");

// /script/PropertyBindingUtils.PropertyBindingPropertyIndirection
// Kind: ScriptStruct; super: none
struct FPropertyBindingPropertyIndirection
{
public:
    std::uint8_t ArrayIndex[0x2]; // 0x0000 (Size: 0x2, Type: StructProperty)
    std::uint16_t Offset; // 0x0002 (Size: 0x2, Type: UInt16Property)
    std::uint8_t NextIndex[0x2]; // 0x0004 (Size: 0x2, Type: StructProperty)
    std::uint8_t Type; // 0x0006 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x1]; // 0x0007
    void* InstanceStruct; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FPropertyBindingPropertyIndirection, ArrayIndex) == 0, "Offset mismatch for FPropertyBindingPropertyIndirection::ArrayIndex");
static_assert(offsetof(FPropertyBindingPropertyIndirection, Offset) == 2, "Offset mismatch for FPropertyBindingPropertyIndirection::Offset");
static_assert(offsetof(FPropertyBindingPropertyIndirection, NextIndex) == 4, "Offset mismatch for FPropertyBindingPropertyIndirection::NextIndex");
static_assert(offsetof(FPropertyBindingPropertyIndirection, Type) == 6, "Offset mismatch for FPropertyBindingPropertyIndirection::Type");
static_assert(offsetof(FPropertyBindingPropertyIndirection, InstanceStruct) == 8, "Offset mismatch for FPropertyBindingPropertyIndirection::InstanceStruct");

// /script/PropertyBindingUtils.PropertyBindingBindingCollectionOwner
// Kind: Class; super: Interface
class UPropertyBindingBindingCollectionOwner
{
public:
    std::uint8_t Opaque[1];
};


// /script/PropertyBindingUtils.PropertyBindingSettings
// Kind: Class; super: DeveloperSettings
class UPropertyBindingSettings
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TArray<void*> MetaDataToKeepWhenPromotingToParameter; // 0x0030 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPropertyBindingSettings, MetaDataToKeepWhenPromotingToParameter) == 48, "Offset mismatch for UPropertyBindingSettings::MetaDataToKeepWhenPromotingToParameter");

/**
 * decamp dumper generated SDK
 * Package: /Script/PropertyPath
 */
#pragma once
#include "Basic.h"

// /Script/PropertyPath.CachedPropertyPath
// Kind: ScriptStruct; super: none
struct FCachedPropertyPath
{
public:
    TArray<void*> Segments; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0000[0x8]; // 0x0010
    void* CachedFunction; // 0x0018 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FCachedPropertyPath, Segments) == 0, "Offset mismatch for FCachedPropertyPath::Segments");
static_assert(offsetof(FCachedPropertyPath, CachedFunction) == 24, "Offset mismatch for FCachedPropertyPath::CachedFunction");

// /Script/PropertyPath.PropertyPathSegment
// Kind: ScriptStruct; super: none
struct FPropertyPathSegment
{
public:
    std::uint8_t Name[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::int32_t ArrayIndex; // 0x0004 (Size: 0x4, Type: IntProperty)
    void* Struct; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FPropertyPathSegment, Name) == 0, "Offset mismatch for FPropertyPathSegment::Name");
static_assert(offsetof(FPropertyPathSegment, ArrayIndex) == 4, "Offset mismatch for FPropertyPathSegment::ArrayIndex");
static_assert(offsetof(FPropertyPathSegment, Struct) == 8, "Offset mismatch for FPropertyPathSegment::Struct");

// /Script/PropertyPath.PropertyPathTestBaseStruct
// Kind: ScriptStruct; super: none
struct FPropertyPathTestBaseStruct
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PropertyPath.PropertyPathTestBed
// Kind: ScriptStruct; super: none
struct FPropertyPathTestBed
{
public:
    void* Object; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* ModifiedObject; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ModifiedStruct[0x60]; // 0x0010 (Size: 0x60, Type: StructProperty)
    std::uint8_t DefaultStruct[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPropertyPathTestBed, Object) == 0, "Offset mismatch for FPropertyPathTestBed::Object");
static_assert(offsetof(FPropertyPathTestBed, ModifiedObject) == 8, "Offset mismatch for FPropertyPathTestBed::ModifiedObject");
static_assert(offsetof(FPropertyPathTestBed, ModifiedStruct) == 16, "Offset mismatch for FPropertyPathTestBed::ModifiedStruct");
static_assert(offsetof(FPropertyPathTestBed, DefaultStruct) == 112, "Offset mismatch for FPropertyPathTestBed::DefaultStruct");

// /Script/PropertyPath.PropertyPathTestInnerStruct
// Kind: ScriptStruct; super: PropertyPathTestBaseStruct
struct FPropertyPathTestInnerStruct
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    float float_; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bool_; // 0x000C (Size: 0x1, Type: BoolProperty)
    std::uint8_t EnumOne; // 0x000D (Size: 0x1, Type: ByteProperty)
    std::uint8_t EnumTwo; // 0x000E (Size: 0x1, Type: ByteProperty)
    std::uint8_t EnumThree; // 0x000F (Size: 0x1, Type: ByteProperty)
    std::uint8_t EnumFour; // 0x0010 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0011
    std::int32_t Integer; // 0x0014 (Size: 0x4, Type: IntProperty)
    FString String; // 0x0018 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FPropertyPathTestInnerStruct, float_) == 8, "Offset mismatch for FPropertyPathTestInnerStruct::float_");
static_assert(offsetof(FPropertyPathTestInnerStruct, bool_) == 12, "Offset mismatch for FPropertyPathTestInnerStruct::bool_");
static_assert(offsetof(FPropertyPathTestInnerStruct, EnumOne) == 13, "Offset mismatch for FPropertyPathTestInnerStruct::EnumOne");
static_assert(offsetof(FPropertyPathTestInnerStruct, EnumTwo) == 14, "Offset mismatch for FPropertyPathTestInnerStruct::EnumTwo");
static_assert(offsetof(FPropertyPathTestInnerStruct, EnumThree) == 15, "Offset mismatch for FPropertyPathTestInnerStruct::EnumThree");
static_assert(offsetof(FPropertyPathTestInnerStruct, EnumFour) == 16, "Offset mismatch for FPropertyPathTestInnerStruct::EnumFour");
static_assert(offsetof(FPropertyPathTestInnerStruct, Integer) == 20, "Offset mismatch for FPropertyPathTestInnerStruct::Integer");
static_assert(offsetof(FPropertyPathTestInnerStruct, String) == 24, "Offset mismatch for FPropertyPathTestInnerStruct::String");

// /Script/PropertyPath.PropertyPathTestStruct
// Kind: ScriptStruct; super: PropertyPathTestBaseStruct
struct FPropertyPathTestStruct
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t bool_; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0009
    std::int32_t Integer; // 0x000C (Size: 0x4, Type: IntProperty)
    std::uint8_t EnumOne; // 0x0010 (Size: 0x1, Type: ByteProperty)
    std::uint8_t EnumTwo; // 0x0011 (Size: 0x1, Type: ByteProperty)
    std::uint8_t EnumThree; // 0x0012 (Size: 0x1, Type: ByteProperty)
    std::uint8_t EnumFour; // 0x0013 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0014
    FString String; // 0x0018 (Size: 0x10, Type: StrProperty)
    float float_; // 0x0028 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0003[0x4]; // 0x002C
    std::uint8_t InnerStruct[0x28]; // 0x0030 (Size: 0x28, Type: StructProperty)
    void* InnerObject; // 0x0058 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FPropertyPathTestStruct, bool_) == 8, "Offset mismatch for FPropertyPathTestStruct::bool_");
static_assert(offsetof(FPropertyPathTestStruct, Integer) == 12, "Offset mismatch for FPropertyPathTestStruct::Integer");
static_assert(offsetof(FPropertyPathTestStruct, EnumOne) == 16, "Offset mismatch for FPropertyPathTestStruct::EnumOne");
static_assert(offsetof(FPropertyPathTestStruct, EnumTwo) == 17, "Offset mismatch for FPropertyPathTestStruct::EnumTwo");
static_assert(offsetof(FPropertyPathTestStruct, EnumThree) == 18, "Offset mismatch for FPropertyPathTestStruct::EnumThree");
static_assert(offsetof(FPropertyPathTestStruct, EnumFour) == 19, "Offset mismatch for FPropertyPathTestStruct::EnumFour");
static_assert(offsetof(FPropertyPathTestStruct, String) == 24, "Offset mismatch for FPropertyPathTestStruct::String");
static_assert(offsetof(FPropertyPathTestStruct, float_) == 40, "Offset mismatch for FPropertyPathTestStruct::float_");
static_assert(offsetof(FPropertyPathTestStruct, InnerStruct) == 48, "Offset mismatch for FPropertyPathTestStruct::InnerStruct");
static_assert(offsetof(FPropertyPathTestStruct, InnerObject) == 88, "Offset mismatch for FPropertyPathTestStruct::InnerObject");

// /Script/PropertyPath.PropertyPathTestObject
// Kind: Class; super: Object
class UPropertyPathTestObject
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bool_; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t EnumOne; // 0x0029 (Size: 0x1, Type: ByteProperty)
    std::uint8_t EnumTwo; // 0x002A (Size: 0x1, Type: ByteProperty)
    std::uint8_t EnumThree; // 0x002B (Size: 0x1, Type: ByteProperty)
    std::uint8_t EnumFour; // 0x002C (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x3]; // 0x002D
    std::int32_t Integer; // 0x0030 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0034
    FString String; // 0x0038 (Size: 0x10, Type: StrProperty)
    float float_; // 0x0048 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0003[0x4]; // 0x004C
    std::uint8_t Struct[0x60]; // 0x0050 (Size: 0x60, Type: StructProperty)
    std::uint8_t StructRef[0x60]; // 0x00B0 (Size: 0x60, Type: StructProperty)
    std::uint8_t StructConstRef[0x60]; // 0x0110 (Size: 0x60, Type: StructProperty)
    void* InnerObject; // 0x0170 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPropertyPathTestObject, bool_) == 40, "Offset mismatch for UPropertyPathTestObject::bool_");
static_assert(offsetof(UPropertyPathTestObject, EnumOne) == 41, "Offset mismatch for UPropertyPathTestObject::EnumOne");
static_assert(offsetof(UPropertyPathTestObject, EnumTwo) == 42, "Offset mismatch for UPropertyPathTestObject::EnumTwo");
static_assert(offsetof(UPropertyPathTestObject, EnumThree) == 43, "Offset mismatch for UPropertyPathTestObject::EnumThree");
static_assert(offsetof(UPropertyPathTestObject, EnumFour) == 44, "Offset mismatch for UPropertyPathTestObject::EnumFour");
static_assert(offsetof(UPropertyPathTestObject, Integer) == 48, "Offset mismatch for UPropertyPathTestObject::Integer");
static_assert(offsetof(UPropertyPathTestObject, String) == 56, "Offset mismatch for UPropertyPathTestObject::String");
static_assert(offsetof(UPropertyPathTestObject, float_) == 72, "Offset mismatch for UPropertyPathTestObject::float_");
static_assert(offsetof(UPropertyPathTestObject, Struct) == 80, "Offset mismatch for UPropertyPathTestObject::Struct");
static_assert(offsetof(UPropertyPathTestObject, StructRef) == 176, "Offset mismatch for UPropertyPathTestObject::StructRef");
static_assert(offsetof(UPropertyPathTestObject, StructConstRef) == 272, "Offset mismatch for UPropertyPathTestObject::StructConstRef");
static_assert(offsetof(UPropertyPathTestObject, InnerObject) == 368, "Offset mismatch for UPropertyPathTestObject::InnerObject");

/**
 * decamp dumper generated SDK
 * Package: /Script/Serialization
 */
#pragma once
#include "Basic.h"

// /Script/Serialization.OrientedBoxFloat
// Kind: ScriptStruct; super: none
struct FOrientedBoxFloat
{
public:
    std::uint8_t Center[0xC]; // 0x0000 (Size: 0xC, Type: StructProperty)
    std::uint8_t AxisX[0xC]; // 0x000C (Size: 0xC, Type: StructProperty)
    std::uint8_t AxisY[0xC]; // 0x0018 (Size: 0xC, Type: StructProperty)
    std::uint8_t AxisZ[0xC]; // 0x0024 (Size: 0xC, Type: StructProperty)
    float ExtentX; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float ExtentY; // 0x0034 (Size: 0x4, Type: FloatProperty)
    float ExtentZ; // 0x0038 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FOrientedBoxFloat, Center) == 0, "Offset mismatch for FOrientedBoxFloat::Center");
static_assert(offsetof(FOrientedBoxFloat, AxisX) == 12, "Offset mismatch for FOrientedBoxFloat::AxisX");
static_assert(offsetof(FOrientedBoxFloat, AxisY) == 24, "Offset mismatch for FOrientedBoxFloat::AxisY");
static_assert(offsetof(FOrientedBoxFloat, AxisZ) == 36, "Offset mismatch for FOrientedBoxFloat::AxisZ");
static_assert(offsetof(FOrientedBoxFloat, ExtentX) == 48, "Offset mismatch for FOrientedBoxFloat::ExtentX");
static_assert(offsetof(FOrientedBoxFloat, ExtentY) == 52, "Offset mismatch for FOrientedBoxFloat::ExtentY");
static_assert(offsetof(FOrientedBoxFloat, ExtentZ) == 56, "Offset mismatch for FOrientedBoxFloat::ExtentZ");

// /Script/Serialization.StructSerializerArrayTestStruct
// Kind: ScriptStruct; super: none
struct FStructSerializerArrayTestStruct
{
public:
    TArray<void*> Int32Array; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ByteArray; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    std::int32_t StaticSingleElement; // 0x0020 (Size: 0x4, Type: IntProperty)
    std::int32_t StaticInt32Array; // 0x0024 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x8]; // 0x0028
    float StaticFloatArray; // 0x0030 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0xC]; // 0x0034
    TArray<void*> VectorArray; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> StructArray; // 0x0050 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FStructSerializerArrayTestStruct, Int32Array) == 0, "Offset mismatch for FStructSerializerArrayTestStruct::Int32Array");
static_assert(offsetof(FStructSerializerArrayTestStruct, ByteArray) == 16, "Offset mismatch for FStructSerializerArrayTestStruct::ByteArray");
static_assert(offsetof(FStructSerializerArrayTestStruct, StaticSingleElement) == 32, "Offset mismatch for FStructSerializerArrayTestStruct::StaticSingleElement");
static_assert(offsetof(FStructSerializerArrayTestStruct, StaticInt32Array) == 36, "Offset mismatch for FStructSerializerArrayTestStruct::StaticInt32Array");
static_assert(offsetof(FStructSerializerArrayTestStruct, StaticFloatArray) == 48, "Offset mismatch for FStructSerializerArrayTestStruct::StaticFloatArray");
static_assert(offsetof(FStructSerializerArrayTestStruct, VectorArray) == 64, "Offset mismatch for FStructSerializerArrayTestStruct::VectorArray");
static_assert(offsetof(FStructSerializerArrayTestStruct, StructArray) == 80, "Offset mismatch for FStructSerializerArrayTestStruct::StructArray");

// /Script/Serialization.StructSerializerBooleanTestStruct
// Kind: ScriptStruct; super: none
struct FStructSerializerBooleanTestStruct
{
public:
    std::uint8_t BoolFalse; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t BoolTrue; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Bitfield0; // 0x0002 (Size: 0x1, Type: BoolProperty)
    // 0x0002 BoolProperty Bitfield1 (shared storage)
    // 0x0002 BoolProperty Bitfield2Set (shared storage)
    // 0x0002 BoolProperty Bitfield3 (shared storage)
    // 0x0002 BoolProperty Bitfield4Set (shared storage)
    // 0x0002 BoolProperty Bitfield5Set (shared storage)
    // 0x0002 BoolProperty Bitfield6 (shared storage)
    // 0x0002 BoolProperty Bitfield7Set (shared storage)
};

static_assert(offsetof(FStructSerializerBooleanTestStruct, BoolFalse) == 0, "Offset mismatch for FStructSerializerBooleanTestStruct::BoolFalse");
static_assert(offsetof(FStructSerializerBooleanTestStruct, BoolTrue) == 1, "Offset mismatch for FStructSerializerBooleanTestStruct::BoolTrue");
static_assert(offsetof(FStructSerializerBooleanTestStruct, Bitfield0) == 2, "Offset mismatch for FStructSerializerBooleanTestStruct::Bitfield0");

// /Script/Serialization.StructSerializerBuiltinTestStruct
// Kind: ScriptStruct; super: none
struct FStructSerializerBuiltinTestStruct
{
public:
    std::uint8_t Guid[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    FName Name; // 0x0010 (Size: 0x8, Type: NameProperty)
    FString String; // 0x0018 (Size: 0x10, Type: StrProperty)
    std::uint8_t Text[0x10]; // 0x0028 (Size: 0x10, Type: TextProperty)
    std::uint8_t DateTime[0x8]; // 0x0038 (Size: 0x8, Type: StructProperty)
    std::uint8_t Timespan[0x8]; // 0x0040 (Size: 0x8, Type: StructProperty)
    std::uint8_t Vector[0x18]; // 0x0048 (Size: 0x18, Type: StructProperty)
    std::uint8_t Vector4[0x20]; // 0x0060 (Size: 0x20, Type: StructProperty)
    std::uint8_t Rotator[0x20]; // 0x0080 (Size: 0x20, Type: StructProperty)
    std::uint8_t Quat[0x20]; // 0x00A0 (Size: 0x20, Type: StructProperty)
    std::uint8_t Color[0x1]; // 0x00C0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FStructSerializerBuiltinTestStruct, Guid) == 0, "Offset mismatch for FStructSerializerBuiltinTestStruct::Guid");
static_assert(offsetof(FStructSerializerBuiltinTestStruct, Name) == 16, "Offset mismatch for FStructSerializerBuiltinTestStruct::Name");
static_assert(offsetof(FStructSerializerBuiltinTestStruct, String) == 24, "Offset mismatch for FStructSerializerBuiltinTestStruct::String");
static_assert(offsetof(FStructSerializerBuiltinTestStruct, Text) == 40, "Offset mismatch for FStructSerializerBuiltinTestStruct::Text");
static_assert(offsetof(FStructSerializerBuiltinTestStruct, DateTime) == 56, "Offset mismatch for FStructSerializerBuiltinTestStruct::DateTime");
static_assert(offsetof(FStructSerializerBuiltinTestStruct, Timespan) == 64, "Offset mismatch for FStructSerializerBuiltinTestStruct::Timespan");
static_assert(offsetof(FStructSerializerBuiltinTestStruct, Vector) == 72, "Offset mismatch for FStructSerializerBuiltinTestStruct::Vector");
static_assert(offsetof(FStructSerializerBuiltinTestStruct, Vector4) == 96, "Offset mismatch for FStructSerializerBuiltinTestStruct::Vector4");
static_assert(offsetof(FStructSerializerBuiltinTestStruct, Rotator) == 128, "Offset mismatch for FStructSerializerBuiltinTestStruct::Rotator");
static_assert(offsetof(FStructSerializerBuiltinTestStruct, Quat) == 160, "Offset mismatch for FStructSerializerBuiltinTestStruct::Quat");
static_assert(offsetof(FStructSerializerBuiltinTestStruct, Color) == 192, "Offset mismatch for FStructSerializerBuiltinTestStruct::Color");

// /Script/Serialization.StructSerializerByteArray
// Kind: ScriptStruct; super: none
struct FStructSerializerByteArray
{
public:
    std::int32_t Dummy1; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    TArray<void*> ByteArray; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    std::int32_t Dummy2; // 0x0018 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x001C
    TArray<void*> Int8Array; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    std::int32_t Dummy3; // 0x0030 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FStructSerializerByteArray, Dummy1) == 0, "Offset mismatch for FStructSerializerByteArray::Dummy1");
static_assert(offsetof(FStructSerializerByteArray, ByteArray) == 8, "Offset mismatch for FStructSerializerByteArray::ByteArray");
static_assert(offsetof(FStructSerializerByteArray, Dummy2) == 24, "Offset mismatch for FStructSerializerByteArray::Dummy2");
static_assert(offsetof(FStructSerializerByteArray, Int8Array) == 32, "Offset mismatch for FStructSerializerByteArray::Int8Array");
static_assert(offsetof(FStructSerializerByteArray, Dummy3) == 48, "Offset mismatch for FStructSerializerByteArray::Dummy3");

// /Script/Serialization.StructSerializerLWCTypesTest
// Kind: ScriptStruct; super: none
struct FStructSerializerLWCTypesTest
{
public:
    std::uint8_t Vector[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t Vector2D[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t Vector4[0x20]; // 0x0030 (Size: 0x20, Type: StructProperty)
    std::uint8_t Matrix[0x80]; // 0x0050 (Size: 0x80, Type: StructProperty)
    std::uint8_t Plane[0x20]; // 0x00D0 (Size: 0x20, Type: StructProperty)
    std::uint8_t Quat[0x20]; // 0x00F0 (Size: 0x20, Type: StructProperty)
    std::uint8_t Rotator[0x20]; // 0x0110 (Size: 0x20, Type: StructProperty)
    std::uint8_t Transform[0x60]; // 0x0130 (Size: 0x60, Type: StructProperty)
    std::uint8_t Box[0x38]; // 0x0190 (Size: 0x38, Type: StructProperty)
    std::uint8_t Box2D[0x28]; // 0x01C8 (Size: 0x28, Type: StructProperty)
    std::uint8_t BoxSphereBounds[0x38]; // 0x01F0 (Size: 0x38, Type: StructProperty)
    std::uint8_t OrientedBox[0x78]; // 0x0228 (Size: 0x78, Type: StructProperty)
    float float_; // 0x02A0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x02A4
    double Double; // 0x02A8 (Size: 0x8, Type: DoubleProperty)
    TArray<void*> VectorArray; // 0x02B0 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> StrToVec; // 0x02C0 (Size: 0x10, Type: MapProperty)
    TSet<void*> VectorSet; // 0x02D0 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(FStructSerializerLWCTypesTest, Vector) == 0, "Offset mismatch for FStructSerializerLWCTypesTest::Vector");
static_assert(offsetof(FStructSerializerLWCTypesTest, Vector2D) == 24, "Offset mismatch for FStructSerializerLWCTypesTest::Vector2D");
static_assert(offsetof(FStructSerializerLWCTypesTest, Vector4) == 48, "Offset mismatch for FStructSerializerLWCTypesTest::Vector4");
static_assert(offsetof(FStructSerializerLWCTypesTest, Matrix) == 80, "Offset mismatch for FStructSerializerLWCTypesTest::Matrix");
static_assert(offsetof(FStructSerializerLWCTypesTest, Plane) == 208, "Offset mismatch for FStructSerializerLWCTypesTest::Plane");
static_assert(offsetof(FStructSerializerLWCTypesTest, Quat) == 240, "Offset mismatch for FStructSerializerLWCTypesTest::Quat");
static_assert(offsetof(FStructSerializerLWCTypesTest, Rotator) == 272, "Offset mismatch for FStructSerializerLWCTypesTest::Rotator");
static_assert(offsetof(FStructSerializerLWCTypesTest, Transform) == 304, "Offset mismatch for FStructSerializerLWCTypesTest::Transform");
static_assert(offsetof(FStructSerializerLWCTypesTest, Box) == 400, "Offset mismatch for FStructSerializerLWCTypesTest::Box");
static_assert(offsetof(FStructSerializerLWCTypesTest, Box2D) == 456, "Offset mismatch for FStructSerializerLWCTypesTest::Box2D");
static_assert(offsetof(FStructSerializerLWCTypesTest, BoxSphereBounds) == 496, "Offset mismatch for FStructSerializerLWCTypesTest::BoxSphereBounds");
static_assert(offsetof(FStructSerializerLWCTypesTest, OrientedBox) == 552, "Offset mismatch for FStructSerializerLWCTypesTest::OrientedBox");
static_assert(offsetof(FStructSerializerLWCTypesTest, float_) == 672, "Offset mismatch for FStructSerializerLWCTypesTest::float_");
static_assert(offsetof(FStructSerializerLWCTypesTest, Double) == 680, "Offset mismatch for FStructSerializerLWCTypesTest::Double");
static_assert(offsetof(FStructSerializerLWCTypesTest, VectorArray) == 688, "Offset mismatch for FStructSerializerLWCTypesTest::VectorArray");
static_assert(offsetof(FStructSerializerLWCTypesTest, StrToVec) == 704, "Offset mismatch for FStructSerializerLWCTypesTest::StrToVec");
static_assert(offsetof(FStructSerializerLWCTypesTest, VectorSet) == 720, "Offset mismatch for FStructSerializerLWCTypesTest::VectorSet");

// /Script/Serialization.StructSerializerMapTestStruct
// Kind: ScriptStruct; super: none
struct FStructSerializerMapTestStruct
{
public:
    TMap<void*, void*> IntToStr; // 0x0000 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> StrToStr; // 0x0010 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> StrToVec; // 0x0020 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> StrToStruct; // 0x0030 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FStructSerializerMapTestStruct, IntToStr) == 0, "Offset mismatch for FStructSerializerMapTestStruct::IntToStr");
static_assert(offsetof(FStructSerializerMapTestStruct, StrToStr) == 16, "Offset mismatch for FStructSerializerMapTestStruct::StrToStr");
static_assert(offsetof(FStructSerializerMapTestStruct, StrToVec) == 32, "Offset mismatch for FStructSerializerMapTestStruct::StrToVec");
static_assert(offsetof(FStructSerializerMapTestStruct, StrToStruct) == 48, "Offset mismatch for FStructSerializerMapTestStruct::StrToStruct");

// /Script/Serialization.StructSerializerNonLWCTypesTest
// Kind: ScriptStruct; super: none
struct FStructSerializerNonLWCTypesTest
{
public:
    std::uint8_t Vector[0xC]; // 0x0000 (Size: 0xC, Type: StructProperty)
    std::uint8_t Vector2D[0x14]; // 0x000C (Size: 0x14, Type: StructProperty)
    std::uint8_t Vector4[0x10]; // 0x0020 (Size: 0x10, Type: StructProperty)
    std::uint8_t Matrix[0x40]; // 0x0030 (Size: 0x40, Type: StructProperty)
    std::uint8_t Plane[0x10]; // 0x0070 (Size: 0x10, Type: StructProperty)
    std::uint8_t Quat[0x10]; // 0x0080 (Size: 0x10, Type: StructProperty)
    std::uint8_t Rotator[0x10]; // 0x0090 (Size: 0x10, Type: StructProperty)
    std::uint8_t Transform[0x30]; // 0x00A0 (Size: 0x30, Type: StructProperty)
    std::uint8_t Box[0x1C]; // 0x00D0 (Size: 0x1C, Type: StructProperty)
    std::uint8_t Box2D[0x14]; // 0x00EC (Size: 0x14, Type: StructProperty)
    std::uint8_t BoxSphereBounds[0x1C]; // 0x0100 (Size: 0x1C, Type: StructProperty)
    std::uint8_t OrientedBox[0x3C]; // 0x011C (Size: 0x3C, Type: StructProperty)
    float float_; // 0x0158 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x015C
    double Double; // 0x0160 (Size: 0x8, Type: DoubleProperty)
    TArray<void*> VectorArray; // 0x0168 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> StrToVec; // 0x0178 (Size: 0x10, Type: MapProperty)
    TSet<void*> VectorSet; // 0x0188 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(FStructSerializerNonLWCTypesTest, Vector) == 0, "Offset mismatch for FStructSerializerNonLWCTypesTest::Vector");
static_assert(offsetof(FStructSerializerNonLWCTypesTest, Vector2D) == 12, "Offset mismatch for FStructSerializerNonLWCTypesTest::Vector2D");
static_assert(offsetof(FStructSerializerNonLWCTypesTest, Vector4) == 32, "Offset mismatch for FStructSerializerNonLWCTypesTest::Vector4");
static_assert(offsetof(FStructSerializerNonLWCTypesTest, Matrix) == 48, "Offset mismatch for FStructSerializerNonLWCTypesTest::Matrix");
static_assert(offsetof(FStructSerializerNonLWCTypesTest, Plane) == 112, "Offset mismatch for FStructSerializerNonLWCTypesTest::Plane");
static_assert(offsetof(FStructSerializerNonLWCTypesTest, Quat) == 128, "Offset mismatch for FStructSerializerNonLWCTypesTest::Quat");
static_assert(offsetof(FStructSerializerNonLWCTypesTest, Rotator) == 144, "Offset mismatch for FStructSerializerNonLWCTypesTest::Rotator");
static_assert(offsetof(FStructSerializerNonLWCTypesTest, Transform) == 160, "Offset mismatch for FStructSerializerNonLWCTypesTest::Transform");
static_assert(offsetof(FStructSerializerNonLWCTypesTest, Box) == 208, "Offset mismatch for FStructSerializerNonLWCTypesTest::Box");
static_assert(offsetof(FStructSerializerNonLWCTypesTest, Box2D) == 236, "Offset mismatch for FStructSerializerNonLWCTypesTest::Box2D");
static_assert(offsetof(FStructSerializerNonLWCTypesTest, BoxSphereBounds) == 256, "Offset mismatch for FStructSerializerNonLWCTypesTest::BoxSphereBounds");
static_assert(offsetof(FStructSerializerNonLWCTypesTest, OrientedBox) == 284, "Offset mismatch for FStructSerializerNonLWCTypesTest::OrientedBox");
static_assert(offsetof(FStructSerializerNonLWCTypesTest, float_) == 344, "Offset mismatch for FStructSerializerNonLWCTypesTest::float_");
static_assert(offsetof(FStructSerializerNonLWCTypesTest, Double) == 352, "Offset mismatch for FStructSerializerNonLWCTypesTest::Double");
static_assert(offsetof(FStructSerializerNonLWCTypesTest, VectorArray) == 360, "Offset mismatch for FStructSerializerNonLWCTypesTest::VectorArray");
static_assert(offsetof(FStructSerializerNonLWCTypesTest, StrToVec) == 376, "Offset mismatch for FStructSerializerNonLWCTypesTest::StrToVec");
static_assert(offsetof(FStructSerializerNonLWCTypesTest, VectorSet) == 392, "Offset mismatch for FStructSerializerNonLWCTypesTest::VectorSet");

// /Script/Serialization.StructSerializerNumericTestStruct
// Kind: ScriptStruct; super: none
struct FStructSerializerNumericTestStruct
{
public:
    std::int8_t int8; // 0x0000 (Size: 0x1, Type: Int8Property)
    std::uint8_t Pad_0000[0x1]; // 0x0001
    std::int16_t int16; // 0x0002 (Size: 0x2, Type: Int16Property)
    std::int32_t int32; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int64_t int64; // 0x0008 (Size: 0x8, Type: Int64Property)
    std::uint8_t uint8; // 0x0010 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x1]; // 0x0011
    std::uint16_t uint16; // 0x0012 (Size: 0x2, Type: UInt16Property)
    std::uint32_t uint32; // 0x0014 (Size: 0x4, Type: UInt32Property)
    std::uint64_t uint64; // 0x0018 (Size: 0x8, Type: UInt64Property)
    float float_; // 0x0020 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0024
    double Double; // 0x0028 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FStructSerializerNumericTestStruct, int8) == 0, "Offset mismatch for FStructSerializerNumericTestStruct::int8");
static_assert(offsetof(FStructSerializerNumericTestStruct, int16) == 2, "Offset mismatch for FStructSerializerNumericTestStruct::int16");
static_assert(offsetof(FStructSerializerNumericTestStruct, int32) == 4, "Offset mismatch for FStructSerializerNumericTestStruct::int32");
static_assert(offsetof(FStructSerializerNumericTestStruct, int64) == 8, "Offset mismatch for FStructSerializerNumericTestStruct::int64");
static_assert(offsetof(FStructSerializerNumericTestStruct, uint8) == 16, "Offset mismatch for FStructSerializerNumericTestStruct::uint8");
static_assert(offsetof(FStructSerializerNumericTestStruct, uint16) == 18, "Offset mismatch for FStructSerializerNumericTestStruct::uint16");
static_assert(offsetof(FStructSerializerNumericTestStruct, uint32) == 20, "Offset mismatch for FStructSerializerNumericTestStruct::uint32");
static_assert(offsetof(FStructSerializerNumericTestStruct, uint64) == 24, "Offset mismatch for FStructSerializerNumericTestStruct::uint64");
static_assert(offsetof(FStructSerializerNumericTestStruct, float_) == 32, "Offset mismatch for FStructSerializerNumericTestStruct::float_");
static_assert(offsetof(FStructSerializerNumericTestStruct, Double) == 40, "Offset mismatch for FStructSerializerNumericTestStruct::Double");

// /Script/Serialization.StructSerializerObjectTestStruct
// Kind: ScriptStruct; super: none
struct FStructSerializerObjectTestStruct
{
public:
    void* RawClass; // 0x0000 (Size: 0x8, Type: ClassProperty)
    void* WrappedClass; // 0x0008 (Size: 0x8, Type: ClassProperty)
    void* SubClass; // 0x0010 (Size: 0x8, Type: ClassProperty)
    std::uint8_t SoftClass[0x20]; // 0x0018 (Size: 0x20, Type: SoftClassProperty)
    void* RawObject; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    void* WrappedObject; // 0x0040 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> WeakObject; // 0x0048 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t SoftObject[0x20]; // 0x0050 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t ClassPath[0x18]; // 0x0070 (Size: 0x18, Type: StructProperty)
    std::uint8_t ObjectPath[0x1]; // 0x0088 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FStructSerializerObjectTestStruct, RawClass) == 0, "Offset mismatch for FStructSerializerObjectTestStruct::RawClass");
static_assert(offsetof(FStructSerializerObjectTestStruct, WrappedClass) == 8, "Offset mismatch for FStructSerializerObjectTestStruct::WrappedClass");
static_assert(offsetof(FStructSerializerObjectTestStruct, SubClass) == 16, "Offset mismatch for FStructSerializerObjectTestStruct::SubClass");
static_assert(offsetof(FStructSerializerObjectTestStruct, SoftClass) == 24, "Offset mismatch for FStructSerializerObjectTestStruct::SoftClass");
static_assert(offsetof(FStructSerializerObjectTestStruct, RawObject) == 56, "Offset mismatch for FStructSerializerObjectTestStruct::RawObject");
static_assert(offsetof(FStructSerializerObjectTestStruct, WrappedObject) == 64, "Offset mismatch for FStructSerializerObjectTestStruct::WrappedObject");
static_assert(offsetof(FStructSerializerObjectTestStruct, WeakObject) == 72, "Offset mismatch for FStructSerializerObjectTestStruct::WeakObject");
static_assert(offsetof(FStructSerializerObjectTestStruct, SoftObject) == 80, "Offset mismatch for FStructSerializerObjectTestStruct::SoftObject");
static_assert(offsetof(FStructSerializerObjectTestStruct, ClassPath) == 112, "Offset mismatch for FStructSerializerObjectTestStruct::ClassPath");
static_assert(offsetof(FStructSerializerObjectTestStruct, ObjectPath) == 136, "Offset mismatch for FStructSerializerObjectTestStruct::ObjectPath");

// /Script/Serialization.StructSerializerOptionalTestStruct
// Kind: ScriptStruct; super: none
struct FStructSerializerOptionalTestStruct
{
public:
    std::uint8_t StrOptional[0x10]; // 0x0000 (Size: 0x10, Type: OptionalProperty)
    std::uint8_t StrOptionalUnset[0x10]; // 0x0010 (Size: 0x10, Type: OptionalProperty)
    std::uint8_t IntOptional[0x8]; // 0x0020 (Size: 0x8, Type: OptionalProperty)
    std::uint8_t IntOptionalUnset[0x8]; // 0x0028 (Size: 0x8, Type: OptionalProperty)
    std::uint8_t NameOptional[0x4]; // 0x0030 (Size: 0x4, Type: OptionalProperty)
    std::uint8_t NameOptionalUnset[0xC]; // 0x0034 (Size: 0xC, Type: OptionalProperty)
    std::uint8_t StructOptional[0xE0]; // 0x0040 (Size: 0xE0, Type: OptionalProperty)
    std::uint8_t StructOptionalUnset[0x1]; // 0x0120 (Size: 0x1, Type: OptionalProperty)
};

static_assert(offsetof(FStructSerializerOptionalTestStruct, StrOptional) == 0, "Offset mismatch for FStructSerializerOptionalTestStruct::StrOptional");
static_assert(offsetof(FStructSerializerOptionalTestStruct, StrOptionalUnset) == 16, "Offset mismatch for FStructSerializerOptionalTestStruct::StrOptionalUnset");
static_assert(offsetof(FStructSerializerOptionalTestStruct, IntOptional) == 32, "Offset mismatch for FStructSerializerOptionalTestStruct::IntOptional");
static_assert(offsetof(FStructSerializerOptionalTestStruct, IntOptionalUnset) == 40, "Offset mismatch for FStructSerializerOptionalTestStruct::IntOptionalUnset");
static_assert(offsetof(FStructSerializerOptionalTestStruct, NameOptional) == 48, "Offset mismatch for FStructSerializerOptionalTestStruct::NameOptional");
static_assert(offsetof(FStructSerializerOptionalTestStruct, NameOptionalUnset) == 52, "Offset mismatch for FStructSerializerOptionalTestStruct::NameOptionalUnset");
static_assert(offsetof(FStructSerializerOptionalTestStruct, StructOptional) == 64, "Offset mismatch for FStructSerializerOptionalTestStruct::StructOptional");
static_assert(offsetof(FStructSerializerOptionalTestStruct, StructOptionalUnset) == 288, "Offset mismatch for FStructSerializerOptionalTestStruct::StructOptionalUnset");

// /Script/Serialization.StructSerializerSetTestStruct
// Kind: ScriptStruct; super: none
struct FStructSerializerSetTestStruct
{
public:
    std::uint8_t StrSet[0x10]; // 0x0000 (Size: 0x10, Type: SetProperty)
    std::uint8_t IntSet[0x10]; // 0x0010 (Size: 0x10, Type: SetProperty)
    std::uint8_t NameSet[0x10]; // 0x0020 (Size: 0x10, Type: SetProperty)
    TSet<void*> StructSet; // 0x0030 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(FStructSerializerSetTestStruct, StrSet) == 0, "Offset mismatch for FStructSerializerSetTestStruct::StrSet");
static_assert(offsetof(FStructSerializerSetTestStruct, IntSet) == 16, "Offset mismatch for FStructSerializerSetTestStruct::IntSet");
static_assert(offsetof(FStructSerializerSetTestStruct, NameSet) == 32, "Offset mismatch for FStructSerializerSetTestStruct::NameSet");
static_assert(offsetof(FStructSerializerSetTestStruct, StructSet) == 48, "Offset mismatch for FStructSerializerSetTestStruct::StructSet");

// /Script/Serialization.StructSerializerTestStruct
// Kind: ScriptStruct; super: none
struct FStructSerializerTestStruct
{
public:
    std::uint8_t Numerics[0x30]; // 0x0000 (Size: 0x30, Type: StructProperty)
    std::uint8_t Booleans[0x8]; // 0x0030 (Size: 0x8, Type: StructProperty)
    std::uint8_t Objects[0xA8]; // 0x0038 (Size: 0xA8, Type: StructProperty)
    std::uint8_t Builtins[0xD0]; // 0x00E0 (Size: 0xD0, Type: StructProperty)
    std::uint8_t Arrays[0x60]; // 0x01B0 (Size: 0x60, Type: StructProperty)
    std::uint8_t Maps[0x40]; // 0x0210 (Size: 0x40, Type: StructProperty)
    std::uint8_t Sets[0x40]; // 0x0250 (Size: 0x40, Type: StructProperty)
    std::uint8_t Optionals[0x200]; // 0x0290 (Size: 0x200, Type: StructProperty)
    std::uint8_t LWCTypes[0x1]; // 0x0490 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FStructSerializerTestStruct, Numerics) == 0, "Offset mismatch for FStructSerializerTestStruct::Numerics");
static_assert(offsetof(FStructSerializerTestStruct, Booleans) == 48, "Offset mismatch for FStructSerializerTestStruct::Booleans");
static_assert(offsetof(FStructSerializerTestStruct, Objects) == 56, "Offset mismatch for FStructSerializerTestStruct::Objects");
static_assert(offsetof(FStructSerializerTestStruct, Builtins) == 224, "Offset mismatch for FStructSerializerTestStruct::Builtins");
static_assert(offsetof(FStructSerializerTestStruct, Arrays) == 432, "Offset mismatch for FStructSerializerTestStruct::Arrays");
static_assert(offsetof(FStructSerializerTestStruct, Maps) == 528, "Offset mismatch for FStructSerializerTestStruct::Maps");
static_assert(offsetof(FStructSerializerTestStruct, Sets) == 592, "Offset mismatch for FStructSerializerTestStruct::Sets");
static_assert(offsetof(FStructSerializerTestStruct, Optionals) == 656, "Offset mismatch for FStructSerializerTestStruct::Optionals");
static_assert(offsetof(FStructSerializerTestStruct, LWCTypes) == 1168, "Offset mismatch for FStructSerializerTestStruct::LWCTypes");

// /Script/Serialization.ObjectTest
// Kind: Class; super: Object
class UObjectTest
{
public:
    std::uint8_t Opaque[1];
};

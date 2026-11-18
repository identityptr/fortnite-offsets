#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::Serialization
{
    struct ObjectTest
    {
        static constexpr std::string_view Name = "ObjectTest";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OrientedBoxFloat
    {
        static constexpr std::string_view Name = "OrientedBoxFloat";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Center = 0x0;
            static constexpr std::uintptr_t AxisX = 0xC;
            static constexpr std::uintptr_t AxisY = 0x18;
            static constexpr std::uintptr_t AxisZ = 0x24;
            static constexpr std::uintptr_t ExtentX = 0x30;
            static constexpr std::uintptr_t ExtentY = 0x34;
            static constexpr std::uintptr_t ExtentZ = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Center", 0x0, "StructProperty"},
            {"AxisX", 0xC, "StructProperty"},
            {"AxisY", 0x18, "StructProperty"},
            {"AxisZ", 0x24, "StructProperty"},
            {"ExtentX", 0x30, "FloatProperty"},
            {"ExtentY", 0x34, "FloatProperty"},
            {"ExtentZ", 0x38, "FloatProperty"},
        }};
    };

    struct StructSerializerArrayTestStruct
    {
        static constexpr std::string_view Name = "StructSerializerArrayTestStruct";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Int32Array = 0x0;
            static constexpr std::uintptr_t ByteArray = 0x10;
            static constexpr std::uintptr_t StaticSingleElement = 0x20;
            static constexpr std::uintptr_t StaticInt32Array = 0x24;
            static constexpr std::uintptr_t StaticFloatArray = 0x30;
            static constexpr std::uintptr_t VectorArray = 0x40;
            static constexpr std::uintptr_t StructArray = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Int32Array", 0x0, "ArrayProperty"},
            {"ByteArray", 0x10, "ArrayProperty"},
            {"StaticSingleElement", 0x20, "IntProperty"},
            {"StaticInt32Array", 0x24, "IntProperty"},
            {"StaticFloatArray", 0x30, "FloatProperty"},
            {"VectorArray", 0x40, "ArrayProperty"},
            {"StructArray", 0x50, "ArrayProperty"},
        }};
    };

    struct StructSerializerBooleanTestStruct
    {
        static constexpr std::string_view Name = "StructSerializerBooleanTestStruct";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t BoolFalse = 0x0;
            static constexpr std::uintptr_t BoolTrue = 0x1;
            static constexpr std::uintptr_t Bitfield0 = 0x2;
            static constexpr std::uintptr_t Bitfield1 = 0x2;
            static constexpr std::uintptr_t Bitfield2Set = 0x2;
            static constexpr std::uintptr_t Bitfield3 = 0x2;
            static constexpr std::uintptr_t Bitfield4Set = 0x2;
            static constexpr std::uintptr_t Bitfield5Set = 0x2;
            static constexpr std::uintptr_t Bitfield6 = 0x2;
            static constexpr std::uintptr_t Bitfield7Set = 0x2;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"BoolFalse", 0x0, "BoolProperty"},
            {"BoolTrue", 0x1, "BoolProperty"},
            {"Bitfield0", 0x2, "BoolProperty"},
            {"Bitfield1", 0x2, "BoolProperty"},
            {"Bitfield2Set", 0x2, "BoolProperty"},
            {"Bitfield3", 0x2, "BoolProperty"},
            {"Bitfield4Set", 0x2, "BoolProperty"},
            {"Bitfield5Set", 0x2, "BoolProperty"},
            {"Bitfield6", 0x2, "BoolProperty"},
            {"Bitfield7Set", 0x2, "BoolProperty"},
        }};
    };

    struct StructSerializerBuiltinTestStruct
    {
        static constexpr std::string_view Name = "StructSerializerBuiltinTestStruct";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Guid = 0x0;
            static constexpr std::uintptr_t Name = 0x10;
            static constexpr std::uintptr_t String = 0x18;
            static constexpr std::uintptr_t Text = 0x28;
            static constexpr std::uintptr_t DateTime = 0x38;
            static constexpr std::uintptr_t Timespan = 0x40;
            static constexpr std::uintptr_t Vector = 0x48;
            static constexpr std::uintptr_t Vector4 = 0x60;
            static constexpr std::uintptr_t Rotator = 0x80;
            static constexpr std::uintptr_t Quat = 0xA0;
            static constexpr std::uintptr_t Color = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"Guid", 0x0, "StructProperty"},
            {"Name", 0x10, "NameProperty"},
            {"String", 0x18, "StrProperty"},
            {"Text", 0x28, "TextProperty"},
            {"DateTime", 0x38, "StructProperty"},
            {"Timespan", 0x40, "StructProperty"},
            {"Vector", 0x48, "StructProperty"},
            {"Vector4", 0x60, "StructProperty"},
            {"Rotator", 0x80, "StructProperty"},
            {"Quat", 0xA0, "StructProperty"},
            {"Color", 0xC0, "StructProperty"},
        }};
    };

    struct StructSerializerByteArray
    {
        static constexpr std::string_view Name = "StructSerializerByteArray";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Dummy1 = 0x0;
            static constexpr std::uintptr_t ByteArray = 0x8;
            static constexpr std::uintptr_t Dummy2 = 0x18;
            static constexpr std::uintptr_t Int8Array = 0x20;
            static constexpr std::uintptr_t Dummy3 = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Dummy1", 0x0, "IntProperty"},
            {"ByteArray", 0x8, "ArrayProperty"},
            {"Dummy2", 0x18, "IntProperty"},
            {"Int8Array", 0x20, "ArrayProperty"},
            {"Dummy3", 0x30, "IntProperty"},
        }};
    };

    struct StructSerializerLWCTypesTest
    {
        static constexpr std::string_view Name = "StructSerializerLWCTypesTest";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Vector = 0x0;
            static constexpr std::uintptr_t Vector2D = 0x18;
            static constexpr std::uintptr_t Vector4 = 0x30;
            static constexpr std::uintptr_t Matrix = 0x50;
            static constexpr std::uintptr_t Plane = 0xD0;
            static constexpr std::uintptr_t Quat = 0xF0;
            static constexpr std::uintptr_t Rotator = 0x110;
            static constexpr std::uintptr_t Transform = 0x130;
            static constexpr std::uintptr_t Box = 0x190;
            static constexpr std::uintptr_t Box2D = 0x1C8;
            static constexpr std::uintptr_t BoxSphereBounds = 0x1F0;
            static constexpr std::uintptr_t OrientedBox = 0x228;
            static constexpr std::uintptr_t float_ = 0x2A0;
            static constexpr std::uintptr_t Double = 0x2A8;
            static constexpr std::uintptr_t VectorArray = 0x2B0;
            static constexpr std::uintptr_t StrToVec = 0x2C0;
            static constexpr std::uintptr_t VectorSet = 0x2D0;
        };

        inline static constexpr std::array<PropertyInfo, 17> Properties{{
            {"Vector", 0x0, "StructProperty"},
            {"Vector2D", 0x18, "StructProperty"},
            {"Vector4", 0x30, "StructProperty"},
            {"Matrix", 0x50, "StructProperty"},
            {"Plane", 0xD0, "StructProperty"},
            {"Quat", 0xF0, "StructProperty"},
            {"Rotator", 0x110, "StructProperty"},
            {"Transform", 0x130, "StructProperty"},
            {"Box", 0x190, "StructProperty"},
            {"Box2D", 0x1C8, "StructProperty"},
            {"BoxSphereBounds", 0x1F0, "StructProperty"},
            {"OrientedBox", 0x228, "StructProperty"},
            {"float", 0x2A0, "FloatProperty"},
            {"Double", 0x2A8, "DoubleProperty"},
            {"VectorArray", 0x2B0, "ArrayProperty"},
            {"StrToVec", 0x2C0, "MapProperty"},
            {"VectorSet", 0x2D0, "SetProperty"},
        }};
    };

    struct StructSerializerMapTestStruct
    {
        static constexpr std::string_view Name = "StructSerializerMapTestStruct";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t IntToStr = 0x0;
            static constexpr std::uintptr_t StrToStr = 0x10;
            static constexpr std::uintptr_t StrToVec = 0x20;
            static constexpr std::uintptr_t StrToStruct = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"IntToStr", 0x0, "MapProperty"},
            {"StrToStr", 0x10, "MapProperty"},
            {"StrToVec", 0x20, "MapProperty"},
            {"StrToStruct", 0x30, "MapProperty"},
        }};
    };

    struct StructSerializerNonLWCTypesTest
    {
        static constexpr std::string_view Name = "StructSerializerNonLWCTypesTest";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Vector = 0x0;
            static constexpr std::uintptr_t Vector2D = 0xC;
            static constexpr std::uintptr_t Vector4 = 0x20;
            static constexpr std::uintptr_t Matrix = 0x30;
            static constexpr std::uintptr_t Plane = 0x70;
            static constexpr std::uintptr_t Quat = 0x80;
            static constexpr std::uintptr_t Rotator = 0x90;
            static constexpr std::uintptr_t Transform = 0xA0;
            static constexpr std::uintptr_t Box = 0xD0;
            static constexpr std::uintptr_t Box2D = 0xEC;
            static constexpr std::uintptr_t BoxSphereBounds = 0x100;
            static constexpr std::uintptr_t OrientedBox = 0x11C;
            static constexpr std::uintptr_t float_ = 0x158;
            static constexpr std::uintptr_t Double = 0x160;
            static constexpr std::uintptr_t VectorArray = 0x168;
            static constexpr std::uintptr_t StrToVec = 0x178;
            static constexpr std::uintptr_t VectorSet = 0x188;
        };

        inline static constexpr std::array<PropertyInfo, 17> Properties{{
            {"Vector", 0x0, "StructProperty"},
            {"Vector2D", 0xC, "StructProperty"},
            {"Vector4", 0x20, "StructProperty"},
            {"Matrix", 0x30, "StructProperty"},
            {"Plane", 0x70, "StructProperty"},
            {"Quat", 0x80, "StructProperty"},
            {"Rotator", 0x90, "StructProperty"},
            {"Transform", 0xA0, "StructProperty"},
            {"Box", 0xD0, "StructProperty"},
            {"Box2D", 0xEC, "StructProperty"},
            {"BoxSphereBounds", 0x100, "StructProperty"},
            {"OrientedBox", 0x11C, "StructProperty"},
            {"float", 0x158, "FloatProperty"},
            {"Double", 0x160, "DoubleProperty"},
            {"VectorArray", 0x168, "ArrayProperty"},
            {"StrToVec", 0x178, "MapProperty"},
            {"VectorSet", 0x188, "SetProperty"},
        }};
    };

    struct StructSerializerNumericTestStruct
    {
        static constexpr std::string_view Name = "StructSerializerNumericTestStruct";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t int8 = 0x0;
            static constexpr std::uintptr_t int16 = 0x2;
            static constexpr std::uintptr_t int32 = 0x4;
            static constexpr std::uintptr_t int64 = 0x8;
            static constexpr std::uintptr_t uint8 = 0x10;
            static constexpr std::uintptr_t uint16 = 0x12;
            static constexpr std::uintptr_t uint32 = 0x14;
            static constexpr std::uintptr_t uint64 = 0x18;
            static constexpr std::uintptr_t float_ = 0x20;
            static constexpr std::uintptr_t Double = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"int8", 0x0, "Int8Property"},
            {"int16", 0x2, "Int16Property"},
            {"int32", 0x4, "IntProperty"},
            {"int64", 0x8, "Int64Property"},
            {"uint8", 0x10, "ByteProperty"},
            {"uint16", 0x12, "UInt16Property"},
            {"uint32", 0x14, "UInt32Property"},
            {"uint64", 0x18, "UInt64Property"},
            {"float", 0x20, "FloatProperty"},
            {"Double", 0x28, "DoubleProperty"},
        }};
    };

    struct StructSerializerObjectTestStruct
    {
        static constexpr std::string_view Name = "StructSerializerObjectTestStruct";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t RawClass = 0x0;
            static constexpr std::uintptr_t WrappedClass = 0x8;
            static constexpr std::uintptr_t SubClass = 0x10;
            static constexpr std::uintptr_t SoftClass = 0x18;
            static constexpr std::uintptr_t RawObject = 0x38;
            static constexpr std::uintptr_t WrappedObject = 0x40;
            static constexpr std::uintptr_t WeakObject = 0x48;
            static constexpr std::uintptr_t SoftObject = 0x50;
            static constexpr std::uintptr_t ClassPath = 0x70;
            static constexpr std::uintptr_t ObjectPath = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"RawClass", 0x0, "ClassProperty"},
            {"WrappedClass", 0x8, "ClassProperty"},
            {"SubClass", 0x10, "ClassProperty"},
            {"SoftClass", 0x18, "SoftClassProperty"},
            {"RawObject", 0x38, "ObjectProperty"},
            {"WrappedObject", 0x40, "ObjectProperty"},
            {"WeakObject", 0x48, "WeakObjectProperty"},
            {"SoftObject", 0x50, "SoftObjectProperty"},
            {"ClassPath", 0x70, "StructProperty"},
            {"ObjectPath", 0x88, "StructProperty"},
        }};
    };

    struct StructSerializerOptionalTestStruct
    {
        static constexpr std::string_view Name = "StructSerializerOptionalTestStruct";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t StrOptional = 0x0;
            static constexpr std::uintptr_t StrOptionalUnset = 0x10;
            static constexpr std::uintptr_t IntOptional = 0x20;
            static constexpr std::uintptr_t IntOptionalUnset = 0x28;
            static constexpr std::uintptr_t NameOptional = 0x30;
            static constexpr std::uintptr_t NameOptionalUnset = 0x34;
            static constexpr std::uintptr_t StructOptional = 0x40;
            static constexpr std::uintptr_t StructOptionalUnset = 0x120;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"StrOptional", 0x0, "OptionalProperty"},
            {"StrOptionalUnset", 0x10, "OptionalProperty"},
            {"IntOptional", 0x20, "OptionalProperty"},
            {"IntOptionalUnset", 0x28, "OptionalProperty"},
            {"NameOptional", 0x30, "OptionalProperty"},
            {"NameOptionalUnset", 0x34, "OptionalProperty"},
            {"StructOptional", 0x40, "OptionalProperty"},
            {"StructOptionalUnset", 0x120, "OptionalProperty"},
        }};
    };

    struct StructSerializerSetTestStruct
    {
        static constexpr std::string_view Name = "StructSerializerSetTestStruct";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t StrSet = 0x0;
            static constexpr std::uintptr_t IntSet = 0x10;
            static constexpr std::uintptr_t NameSet = 0x20;
            static constexpr std::uintptr_t StructSet = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"StrSet", 0x0, "SetProperty"},
            {"IntSet", 0x10, "SetProperty"},
            {"NameSet", 0x20, "SetProperty"},
            {"StructSet", 0x30, "SetProperty"},
        }};
    };

    struct StructSerializerTestStruct
    {
        static constexpr std::string_view Name = "StructSerializerTestStruct";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Numerics = 0x0;
            static constexpr std::uintptr_t Booleans = 0x30;
            static constexpr std::uintptr_t Objects = 0x38;
            static constexpr std::uintptr_t Builtins = 0xE0;
            static constexpr std::uintptr_t Arrays = 0x1B0;
            static constexpr std::uintptr_t Maps = 0x210;
            static constexpr std::uintptr_t Sets = 0x250;
            static constexpr std::uintptr_t Optionals = 0x290;
            static constexpr std::uintptr_t LWCTypes = 0x490;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"Numerics", 0x0, "StructProperty"},
            {"Booleans", 0x30, "StructProperty"},
            {"Objects", 0x38, "StructProperty"},
            {"Builtins", 0xE0, "StructProperty"},
            {"Arrays", 0x1B0, "StructProperty"},
            {"Maps", 0x210, "StructProperty"},
            {"Sets", 0x250, "StructProperty"},
            {"Optionals", 0x290, "StructProperty"},
            {"LWCTypes", 0x490, "StructProperty"},
        }};
    };

}

#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::PropertyPath
{
    struct CachedPropertyPath
    {
        static constexpr std::string_view Name = "CachedPropertyPath";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Segments = 0x0;
            static constexpr std::uintptr_t CachedFunction = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Segments", 0x0, "ArrayProperty"},
            {"CachedFunction", 0x18, "ObjectProperty"},
        }};
    };

    struct PropertyPathSegment
    {
        static constexpr std::string_view Name = "PropertyPathSegment";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
            static constexpr std::uintptr_t ArrayIndex = 0x4;
            static constexpr std::uintptr_t Struct = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Name", 0x0, "NameProperty"},
            {"ArrayIndex", 0x4, "IntProperty"},
            {"Struct", 0x8, "ObjectProperty"},
        }};
    };

    struct PropertyPathTestBaseStruct
    {
        static constexpr std::string_view Name = "PropertyPathTestBaseStruct";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PropertyPathTestBed
    {
        static constexpr std::string_view Name = "PropertyPathTestBed";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Object = 0x0;
            static constexpr std::uintptr_t ModifiedObject = 0x8;
            static constexpr std::uintptr_t ModifiedStruct = 0x10;
            static constexpr std::uintptr_t DefaultStruct = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Object", 0x0, "ObjectProperty"},
            {"ModifiedObject", 0x8, "ObjectProperty"},
            {"ModifiedStruct", 0x10, "StructProperty"},
            {"DefaultStruct", 0x70, "StructProperty"},
        }};
    };

    struct PropertyPathTestInnerStruct
    {
        static constexpr std::string_view Name = "PropertyPathTestInnerStruct";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "PropertyPathTestBaseStruct";
        struct Offsets
        {
            static constexpr std::uintptr_t float_ = 0x8;
            static constexpr std::uintptr_t bool_ = 0xC;
            static constexpr std::uintptr_t EnumOne = 0xD;
            static constexpr std::uintptr_t EnumTwo = 0xE;
            static constexpr std::uintptr_t EnumThree = 0xF;
            static constexpr std::uintptr_t EnumFour = 0x10;
            static constexpr std::uintptr_t Integer = 0x14;
            static constexpr std::uintptr_t String = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"float", 0x8, "FloatProperty"},
            {"bool", 0xC, "BoolProperty"},
            {"EnumOne", 0xD, "ByteProperty"},
            {"EnumTwo", 0xE, "ByteProperty"},
            {"EnumThree", 0xF, "ByteProperty"},
            {"EnumFour", 0x10, "ByteProperty"},
            {"Integer", 0x14, "IntProperty"},
            {"String", 0x18, "StrProperty"},
        }};
    };

    struct PropertyPathTestObject
    {
        static constexpr std::string_view Name = "PropertyPathTestObject";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t bool_ = 0x28;
            static constexpr std::uintptr_t EnumOne = 0x29;
            static constexpr std::uintptr_t EnumTwo = 0x2A;
            static constexpr std::uintptr_t EnumThree = 0x2B;
            static constexpr std::uintptr_t EnumFour = 0x2C;
            static constexpr std::uintptr_t Integer = 0x30;
            static constexpr std::uintptr_t String = 0x38;
            static constexpr std::uintptr_t float_ = 0x48;
            static constexpr std::uintptr_t Struct = 0x50;
            static constexpr std::uintptr_t StructRef = 0xB0;
            static constexpr std::uintptr_t StructConstRef = 0x110;
            static constexpr std::uintptr_t InnerObject = 0x170;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"bool", 0x28, "BoolProperty"},
            {"EnumOne", 0x29, "ByteProperty"},
            {"EnumTwo", 0x2A, "ByteProperty"},
            {"EnumThree", 0x2B, "ByteProperty"},
            {"EnumFour", 0x2C, "ByteProperty"},
            {"Integer", 0x30, "IntProperty"},
            {"String", 0x38, "StrProperty"},
            {"float", 0x48, "FloatProperty"},
            {"Struct", 0x50, "StructProperty"},
            {"StructRef", 0xB0, "StructProperty"},
            {"StructConstRef", 0x110, "StructProperty"},
            {"InnerObject", 0x170, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 8> FunctionNames{{
            "GetFloat",
            "GetStruct",
            "GetStructConstRef",
            "GetStructRef",
            "SetFloat",
            "SetStruct",
            "SetStructConstRef",
            "SetStructRef",
        }};
    };

    struct PropertyPathTestStruct
    {
        static constexpr std::string_view Name = "PropertyPathTestStruct";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "PropertyPathTestBaseStruct";
        struct Offsets
        {
            static constexpr std::uintptr_t bool_ = 0x8;
            static constexpr std::uintptr_t Integer = 0xC;
            static constexpr std::uintptr_t EnumOne = 0x10;
            static constexpr std::uintptr_t EnumTwo = 0x11;
            static constexpr std::uintptr_t EnumThree = 0x12;
            static constexpr std::uintptr_t EnumFour = 0x13;
            static constexpr std::uintptr_t String = 0x18;
            static constexpr std::uintptr_t float_ = 0x28;
            static constexpr std::uintptr_t InnerStruct = 0x30;
            static constexpr std::uintptr_t InnerObject = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"bool", 0x8, "BoolProperty"},
            {"Integer", 0xC, "IntProperty"},
            {"EnumOne", 0x10, "ByteProperty"},
            {"EnumTwo", 0x11, "ByteProperty"},
            {"EnumThree", 0x12, "ByteProperty"},
            {"EnumFour", 0x13, "ByteProperty"},
            {"String", 0x18, "StrProperty"},
            {"float", 0x28, "FloatProperty"},
            {"InnerStruct", 0x30, "StructProperty"},
            {"InnerObject", 0x58, "ObjectProperty"},
        }};
    };

}

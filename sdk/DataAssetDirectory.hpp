#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::DataAssetDirectory
{
    struct DataAssetDirectoryManager
    {
        static constexpr std::string_view Name = "DataAssetDirectoryManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t LastUpdateCheck = 0xB0;
            static constexpr std::uintptr_t UpdateCheckLimitSeconds = 0xB8;
            static constexpr std::uintptr_t bEnabled = 0xBC;
            static constexpr std::uintptr_t bFailOnError = 0xBD;
            static constexpr std::uintptr_t bAnalyticsEnabled = 0xBE;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"LastUpdateCheck", 0xB0, "StructProperty"},
            {"UpdateCheckLimitSeconds", 0xB8, "UInt32Property"},
            {"bEnabled", 0xBC, "BoolProperty"},
            {"bFailOnError", 0xBD, "BoolProperty"},
            {"bAnalyticsEnabled", 0xBE, "BoolProperty"},
        }};
    };

    struct DataAssetDirectoryPatchableAsset
    {
        static constexpr std::string_view Name = "DataAssetDirectoryPatchableAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DataAssetDirectoryPatcher
    {
        static constexpr std::string_view Name = "DataAssetDirectoryPatcher";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DataAssetDirectorySimpleObject
    {
        static constexpr std::string_view Name = "DataAssetDirectorySimpleObject";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t IntProperty = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"IntProperty", 0x28, "IntProperty"},
        }};
    };

    struct DataAssetDirectoryTestArrayAsset
    {
        static constexpr std::string_view Name = "DataAssetDirectoryTestArrayAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t IntArray = 0x28;
            static constexpr std::uintptr_t SimpleStructArray = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"IntArray", 0x28, "ArrayProperty"},
            {"SimpleStructArray", 0x38, "ArrayProperty"},
        }};
    };

    struct DataAssetDirectoryTestMapAsset
    {
        static constexpr std::string_view Name = "DataAssetDirectoryTestMapAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t StringIntMap = 0x28;
            static constexpr std::uintptr_t ShrinkStringIntMap = 0x38;
            static constexpr std::uintptr_t GrowStringIntMap = 0x48;
            static constexpr std::uintptr_t IntStructMap = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"StringIntMap", 0x28, "MapProperty"},
            {"ShrinkStringIntMap", 0x38, "MapProperty"},
            {"GrowStringIntMap", 0x48, "MapProperty"},
            {"IntStructMap", 0x58, "MapProperty"},
        }};
    };

    struct DataAssetDirectoryTestObjectAsset
    {
        static constexpr std::string_view Name = "DataAssetDirectoryTestObjectAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t SimpleObject = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SimpleObject", 0x28, "ObjectProperty"},
        }};
    };

    struct DataAssetDirectoryTestPODAsset
    {
        static constexpr std::string_view Name = "DataAssetDirectoryTestPODAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t AssetName = 0x28;
            static constexpr std::uintptr_t EnumProperty = 0x38;
            static constexpr std::uintptr_t IntProperty = 0x3C;
            static constexpr std::uintptr_t FloatProperty = 0x40;
            static constexpr std::uintptr_t BoolProperty = 0x44;
            static constexpr std::uintptr_t StringProperty = 0x48;
            static constexpr std::uintptr_t NameProperty = 0x58;
            static constexpr std::uintptr_t TextProperty = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"AssetName", 0x28, "StrProperty"},
            {"EnumProperty", 0x38, "EnumProperty"},
            {"IntProperty", 0x3C, "IntProperty"},
            {"FloatProperty", 0x40, "FloatProperty"},
            {"BoolProperty", 0x44, "BoolProperty"},
            {"StringProperty", 0x48, "StrProperty"},
            {"NameProperty", 0x58, "NameProperty"},
            {"TextProperty", 0x60, "TextProperty"},
        }};
    };

    struct DataAssetDirectoryTestPODStruct
    {
        static constexpr std::string_view Name = "DataAssetDirectoryTestPODStruct";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t EnumProperty = 0x0;
            static constexpr std::uintptr_t IntProperty = 0x4;
            static constexpr std::uintptr_t FloatProperty = 0x8;
            static constexpr std::uintptr_t BoolProperty = 0xC;
            static constexpr std::uintptr_t StringProperty = 0x10;
            static constexpr std::uintptr_t NameProperty = 0x20;
            static constexpr std::uintptr_t TextProperty = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"EnumProperty", 0x0, "EnumProperty"},
            {"IntProperty", 0x4, "IntProperty"},
            {"FloatProperty", 0x8, "FloatProperty"},
            {"BoolProperty", 0xC, "BoolProperty"},
            {"StringProperty", 0x10, "StrProperty"},
            {"NameProperty", 0x20, "NameProperty"},
            {"TextProperty", 0x28, "TextProperty"},
        }};
    };

    struct DataAssetDirectoryTestSimpleStruct
    {
        static constexpr std::string_view Name = "DataAssetDirectoryTestSimpleStruct";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t IntProperty = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"IntProperty", 0x0, "IntProperty"},
        }};
    };

    struct DataAssetDirectoryTestStructAsset
    {
        static constexpr std::string_view Name = "DataAssetDirectoryTestStructAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t TestStruct = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TestStruct", 0x28, "StructProperty"},
        }};
    };

}

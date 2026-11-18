#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::Configurable
{
    struct Configurable
    {
        static constexpr std::string_view Name = "Configurable";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ConfigurableSettings
    {
        static constexpr std::string_view Name = "ConfigurableSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeveloperSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t AllowedObjectTypes = 0x30;
            static constexpr std::uintptr_t AllowedStructTypes = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"AllowedObjectTypes", 0x30, "ArrayProperty"},
            {"AllowedStructTypes", 0x40, "ArrayProperty"},
        }};
    };

    struct TestConfigData
    {
        static constexpr std::string_view Name = "TestConfigData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x28;
            static constexpr std::uintptr_t Name = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Value", 0x28, "IntProperty"},
            {"Name", 0x30, "StrProperty"},
        }};
    };

    struct TestConfigDataPtr
    {
        static constexpr std::string_view Name = "TestConfigDataPtr";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Configurable = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Configurable", 0x28, "StructProperty"},
        }};
    };

    struct TestConfigDataSoftPtr
    {
        static constexpr std::string_view Name = "TestConfigDataSoftPtr";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Configurable = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Configurable", 0x28, "StructProperty"},
        }};
    };

    struct TestConfigDataSoftPtrRoot
    {
        static constexpr std::string_view Name = "TestConfigDataSoftPtrRoot";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Configurable = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Configurable", 0x28, "StructProperty"},
        }};
    };

    struct TestConfigurable
    {
        static constexpr std::string_view Name = "TestConfigurable";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Configurable";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct TestConfigurableNoData
    {
        static constexpr std::string_view Name = "TestConfigurableNoData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Configurable";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}

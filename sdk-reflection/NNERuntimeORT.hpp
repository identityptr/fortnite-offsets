#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::NNERuntimeORT
{
    struct NNERuntimeORTCpu
    {
        static constexpr std::string_view Name = "NNERuntimeORTCpu";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct NNERuntimeORTDmlProxy
    {
        static constexpr std::string_view Name = "NNERuntimeORTDmlProxy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct NNERuntimeORTDml_GPU
    {
        static constexpr std::string_view Name = "NNERuntimeORTDml_GPU";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NNERuntimeORTDmlProxy";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct NNERuntimeORTDml_GPU_RDG
    {
        static constexpr std::string_view Name = "NNERuntimeORTDml_GPU_RDG";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NNERuntimeORTDmlProxy";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct NNERuntimeORTSettings
    {
        static constexpr std::string_view Name = "NNERuntimeORTSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeveloperSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t EditorThreadingOptions = 0x30;
            static constexpr std::uintptr_t GameThreadingOptions = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"EditorThreadingOptions", 0x30, "StructProperty"},
            {"GameThreadingOptions", 0x40, "StructProperty"},
        }};
    };

}

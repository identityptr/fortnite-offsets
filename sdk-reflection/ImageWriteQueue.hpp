#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::ImageWriteQueue
{
    struct ImageWriteBlueprintLibrary
    {
        static constexpr std::string_view Name = "ImageWriteBlueprintLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "ExportToDisk",
        }};
    };

    struct ImageWriteOptions
    {
        static constexpr std::string_view Name = "ImageWriteOptions";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Format = 0x0;
            static constexpr std::uintptr_t OnComplete = 0x4;
            static constexpr std::uintptr_t CompressionQuality = 0x10;
            static constexpr std::uintptr_t bOverwriteFile = 0x14;
            static constexpr std::uintptr_t bAsync = 0x15;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Format", 0x0, "EnumProperty"},
            {"OnComplete", 0x4, "DelegateProperty"},
            {"CompressionQuality", 0x10, "IntProperty"},
            {"bOverwriteFile", 0x14, "BoolProperty"},
            {"bAsync", 0x15, "BoolProperty"},
        }};
    };

}

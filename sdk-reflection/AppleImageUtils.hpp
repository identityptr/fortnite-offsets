#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::AppleImageUtils
{
    struct AppleImageInterface
    {
        static constexpr std::string_view Name = "AppleImageInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AppleImageUtilsBaseAsyncTaskBlueprintProxy
    {
        static constexpr std::string_view Name = "AppleImageUtilsBaseAsyncTaskBlueprintProxy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t OnSuccess = 0x30;
            static constexpr std::uintptr_t OnFailure = 0x40;
            static constexpr std::uintptr_t ConversionResult = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"OnSuccess", 0x30, "MulticastInlineDelegateProperty"},
            {"OnFailure", 0x40, "MulticastInlineDelegateProperty"},
            {"ConversionResult", 0x60, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 4> FunctionNames{{
            "CreateProxyObjectForConvertToHEIF",
            "CreateProxyObjectForConvertToJPEG",
            "CreateProxyObjectForConvertToPNG",
            "CreateProxyObjectForConvertToTIFF",
        }};
    };

    struct AppleImageUtilsImageConversionResult
    {
        static constexpr std::string_view Name = "AppleImageUtilsImageConversionResult";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Error = 0x0;
            static constexpr std::uintptr_t ImageData = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Error", 0x0, "StrProperty"},
            {"ImageData", 0x10, "ArrayProperty"},
        }};
    };

}

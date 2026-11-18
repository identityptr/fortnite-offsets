#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::EpicMediaMetadataResolver
{
    struct EpicMediaMetadataResolver
    {
        static constexpr std::string_view Name = "EpicMediaMetadataResolver";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t MetadataResultExt = 0x28;
            static constexpr std::uintptr_t CDNHostNames = 0x38;
            static constexpr std::uintptr_t MediaOptions = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"MetadataResultExt", 0x28, "MulticastInlineDelegateProperty"},
            {"CDNHostNames", 0x38, "ObjectProperty"},
            {"MediaOptions", 0x50, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "GetBlurl",
            "GetData",
        }};
    };

}

#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::EpicCMS
{
    struct DownloadCache
    {
        static constexpr std::string_view Name = "DownloadCache";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Version = 0x4;
            static constexpr std::uintptr_t Cache = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Version", 0x4, "IntProperty"},
            {"Cache", 0x8, "MapProperty"},
        }};
    };

    struct DownloadCacheEntry
    {
        static constexpr std::string_view Name = "DownloadCacheEntry";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t FilePath = 0x0;
            static constexpr std::uintptr_t SourceUrl = 0x10;
            static constexpr std::uintptr_t LastAccessTime = 0x20;
            static constexpr std::uintptr_t LifetimeInDays = 0x28;
            static constexpr std::uintptr_t ETag = 0x30;
            static constexpr std::uintptr_t ExpirationTime = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"FilePath", 0x0, "StrProperty"},
            {"SourceUrl", 0x10, "StrProperty"},
            {"LastAccessTime", 0x20, "StructProperty"},
            {"LifetimeInDays", 0x28, "IntProperty"},
            {"ETag", 0x30, "StrProperty"},
            {"ExpirationTime", 0x40, "StructProperty"},
        }};
    };

}

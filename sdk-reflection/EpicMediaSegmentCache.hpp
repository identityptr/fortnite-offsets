#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::EpicMediaSegmentCache
{
    struct EpicMediaSegmentCacheConfig
    {
        static constexpr std::string_view Name = "EpicMediaSegmentCacheConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bEnabled = 0x0;
            static constexpr std::uintptr_t bResetCache = 0x1;
            static constexpr std::uintptr_t bPersistentCache = 0x2;
            static constexpr std::uintptr_t bAllowPersistentCacheAsTemporary = 0x3;
            static constexpr std::uintptr_t bClearCache = 0x4;
            static constexpr std::uintptr_t CacheSizeMaxFiles = 0x8;
            static constexpr std::uintptr_t CacheSizeOnDiskMaxBytes = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"bEnabled", 0x0, "BoolProperty"},
            {"bResetCache", 0x1, "BoolProperty"},
            {"bPersistentCache", 0x2, "BoolProperty"},
            {"bAllowPersistentCacheAsTemporary", 0x3, "BoolProperty"},
            {"bClearCache", 0x4, "BoolProperty"},
            {"CacheSizeMaxFiles", 0x8, "IntProperty"},
            {"CacheSizeOnDiskMaxBytes", 0x10, "Int64Property"},
        }};
    };

    struct EpicMediaSegmentCacheInit
    {
        static constexpr std::string_view Name = "EpicMediaSegmentCacheInit";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t CacheConfig = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CacheConfig", 0x28, "StructProperty"},
        }};
    };

}

#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::ScheduledEvents
{
    struct CalendarDownload
    {
        static constexpr std::string_view Name = "CalendarDownload";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t CurrentTime = 0x0;
            static constexpr std::uintptr_t CacheIntervalMins = 0x8;
            static constexpr std::uintptr_t Channels = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"CurrentTime", 0x0, "StructProperty"},
            {"CacheIntervalMins", 0x8, "DoubleProperty"},
            {"Channels", 0x10, "MapProperty"},
        }};
    };

    struct EventChannelState
    {
        static constexpr std::string_view Name = "EventChannelState";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ValidFrom = 0x0;
            static constexpr std::uintptr_t ActiveEvents = 0x8;
            static constexpr std::uintptr_t State = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ValidFrom", 0x0, "StructProperty"},
            {"ActiveEvents", 0x8, "ArrayProperty"},
            {"State", 0x18, "StructProperty"},
        }};
    };

    struct EventRecord
    {
        static constexpr std::string_view Name = "EventRecord";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t EventType = 0x0;
            static constexpr std::uintptr_t ActiveUntil = 0x10;
            static constexpr std::uintptr_t ActiveSince = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"EventType", 0x0, "StrProperty"},
            {"ActiveUntil", 0x10, "StructProperty"},
            {"ActiveSince", 0x18, "StructProperty"},
        }};
    };

    struct EventsTimeline
    {
        static constexpr std::string_view Name = "EventsTimeline";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t CacheExpire = 0x0;
            static constexpr std::uintptr_t States = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CacheExpire", 0x0, "StructProperty"},
            {"States", 0x8, "ArrayProperty"},
        }};
    };

}

#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::PapayaTimedEvents
{
    struct PapayaTimedEvents
    {
        static constexpr std::string_view Name = "PapayaTimedEvents";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t MediaPlayerMap = 0x278;
            static constexpr std::uintptr_t MeshEventResponder = 0x288;
            static constexpr std::uintptr_t TimedEventActorTargets = 0x290;
            static constexpr std::uintptr_t TimedEventsArray = 0x2A8;
            static constexpr std::uintptr_t ScreenName = 0x318;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"MediaPlayerMap", 0x278, "MapProperty"},
            {"MeshEventResponder", 0x288, "ObjectProperty"},
            {"TimedEventActorTargets", 0x290, "ArrayProperty"},
            {"TimedEventsArray", 0x2A8, "StructProperty"},
            {"ScreenName", 0x318, "StrProperty"},
        }};
    };

    struct PapayaTimedEventsResponderComponent
    {
        static constexpr std::string_view Name = "PapayaTimedEventsResponderComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortEventResponderComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnMeshNetEvent = 0xC0;
            static constexpr std::uintptr_t MeshEventTags = 0xD0;
            static constexpr std::uintptr_t FilteredEventTypes = 0xE0;
            static constexpr std::uintptr_t bServerRespondToEvents = 0x100;
            static constexpr std::uintptr_t bClientRespondToEvents = 0x101;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"OnMeshNetEvent", 0xC0, "MulticastInlineDelegateProperty"},
            {"MeshEventTags", 0xD0, "ArrayProperty"},
            {"FilteredEventTypes", 0xE0, "StructProperty"},
            {"bServerRespondToEvents", 0x100, "BoolProperty"},
            {"bClientRespondToEvents", 0x101, "BoolProperty"},
        }};
    };

}

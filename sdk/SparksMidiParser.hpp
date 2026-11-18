#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SparksMidiParser
{
    struct ActorComponent_MidiEventDataManager
    {
        static constexpr std::string_view Name = "ActorComponent_MidiEventDataManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnMidiEventDriverChanged = 0xC0;
            static constexpr std::uintptr_t OnMidiEventDataParsed = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OnMidiEventDriverChanged", 0xC0, "MulticastInlineDelegateProperty"},
            {"OnMidiEventDataParsed", 0xE8, "MulticastInlineDelegateProperty"},
        }};
    };

    struct AsyncAction_ListenForMidiEventBase
    {
        static constexpr std::string_view Name = "AsyncAction_ListenForMidiEventBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CancellableAsyncAction";
        struct Offsets
        {
            static constexpr std::uintptr_t OnFinished = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OnFinished", 0x30, "MulticastInlineDelegateProperty"},
        }};
    };

    struct AsyncAction_ListenForMidiNoteEvent
    {
        static constexpr std::string_view Name = "AsyncAction_ListenForMidiNoteEvent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AsyncAction_ListenForMidiEventBase";
        struct Offsets
        {
            static constexpr std::uintptr_t OnMidiEventStart = 0x60;
            static constexpr std::uintptr_t OnMidiEventEnd = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OnMidiEventStart", 0x60, "MulticastInlineDelegateProperty"},
            {"OnMidiEventEnd", 0x70, "MulticastInlineDelegateProperty"},
        }};
    };

    struct AsyncAction_ListenForMidiNoteEventPools
    {
        static constexpr std::string_view Name = "AsyncAction_ListenForMidiNoteEventPools";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AsyncAction_ListenForMidiEventBase";
        struct Offsets
        {
            static constexpr std::uintptr_t OnMidiNoteStart = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OnMidiNoteStart", 0x60, "MulticastInlineDelegateProperty"},
        }};
    };

    struct AsyncAction_ListenForMidiTextEvent
    {
        static constexpr std::string_view Name = "AsyncAction_ListenForMidiTextEvent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AsyncAction_ListenForMidiEventBase";
        struct Offsets
        {
            static constexpr std::uintptr_t OnMidiEventStart = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OnMidiEventStart", 0x60, "MulticastInlineDelegateProperty"},
        }};
    };

    struct MidiEventDriverInterface
    {
        static constexpr std::string_view Name = "MidiEventDriverInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MidiEventListenerSubsystem
    {
        static constexpr std::string_view Name = "MidiEventListenerSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TickableWorldSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ParsedMidiEventData
    {
        static constexpr std::string_view Name = "ParsedMidiEventData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t MidiNoteEvents = 0x28;
            static constexpr std::uintptr_t MidiTextEvents = 0x38;
            static constexpr std::uintptr_t MidiFilePtr = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"MidiNoteEvents", 0x28, "MapProperty"},
            {"MidiTextEvents", 0x38, "MapProperty"},
            {"MidiFilePtr", 0x48, "ObjectProperty"},
        }};
    };

}

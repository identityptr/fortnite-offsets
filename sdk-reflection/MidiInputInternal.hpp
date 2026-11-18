#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::MidiInputInternal
{
    struct MidiInputDeviceConfiguration
    {
        static constexpr std::string_view Name = "MidiInputDeviceConfiguration";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t VendorId = 0x0;
            static constexpr std::uintptr_t ProductId = 0x2;
            static constexpr std::uintptr_t Description = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"VendorId", 0x0, "UInt16Property"},
            {"ProductId", 0x2, "UInt16Property"},
            {"Description", 0x8, "StrProperty"},
        }};
    };

    struct MidiInputDeviceSubsystem
    {
        static constexpr std::string_view Name = "MidiInputDeviceSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AudioEngineSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MidiInputEvent
    {
        static constexpr std::string_view Name = "MidiInputEvent";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MidiInputKey
    {
        static constexpr std::string_view Name = "MidiInputKey";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t NoteNumber = 0x0;
            static constexpr std::uintptr_t MinVelocity = 0x1;
            static constexpr std::uintptr_t MaxVelocity = 0x2;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"NoteNumber", 0x0, "ByteProperty"},
            {"MinVelocity", 0x1, "ByteProperty"},
            {"MaxVelocity", 0x2, "ByteProperty"},
        }};
    };

    struct MidiInputKeyMapping
    {
        static constexpr std::string_view Name = "MidiInputKeyMapping";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t MappingName = 0x0;
            static constexpr std::uintptr_t Keys = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"MappingName", 0x0, "NameProperty"},
            {"Keys", 0x8, "ArrayProperty"},
        }};
    };

    struct MidiInputMessage
    {
        static constexpr std::string_view Name = "MidiInputMessage";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MidiInputSettings
    {
        static constexpr std::string_view Name = "MidiInputSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeveloperSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t DeviceConfigurations = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DeviceConfigurations", 0x30, "ArrayProperty"},
        }};
    };

}

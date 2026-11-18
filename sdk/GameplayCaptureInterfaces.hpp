#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::GameplayCaptureInterfaces
{
    struct GameplayCaptureActorBindingMetadata
    {
        static constexpr std::string_view Name = "GameplayCaptureActorBindingMetadata";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameplayCaptureBindingMetadata";
        struct Offsets
        {
            static constexpr std::uintptr_t DisplayName = 0x30;
            static constexpr std::uintptr_t BoundObjectClass = 0x40;
            static constexpr std::uintptr_t bIsPlayerControlledCharacter = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"DisplayName", 0x30, "StrProperty"},
            {"BoundObjectClass", 0x40, "StructProperty"},
            {"bIsPlayerControlledCharacter", 0x58, "BoolProperty"},
        }};
    };

    struct GameplayCaptureBindingMetadata
    {
        static constexpr std::string_view Name = "GameplayCaptureBindingMetadata";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t SequenceCategory = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SequenceCategory", 0x28, "EnumProperty"},
        }};
    };

    struct GameplayCaptureBindingPlayerNames
    {
        static constexpr std::string_view Name = "GameplayCaptureBindingPlayerNames";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t BindingGuidToPlayerName = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"BindingGuidToPlayerName", 0x28, "MapProperty"},
        }};
    };

    struct SequencePlaybackSpectatorNotify
    {
        static constexpr std::string_view Name = "SequencePlaybackSpectatorNotify";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}

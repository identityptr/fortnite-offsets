#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::MusicBlocks
{
    struct MusicSequencerHitActor
    {
        static constexpr std::string_view Name = "MusicSequencerHitActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t MusicSequencerHitComponent = 0x278;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MusicSequencerHitComponent", 0x278, "ObjectProperty"},
        }};
    };

    struct MusicSequencerHitAdderComponent
    {
        static constexpr std::string_view Name = "MusicSequencerHitAdderComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PlayspaceComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t MusicSequencerHitActorClass = 0xC0;
            static constexpr std::uintptr_t MusicSequencerHitActor = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"MusicSequencerHitActorClass", 0xC0, "ClassProperty"},
            {"MusicSequencerHitActor", 0xC8, "WeakObjectProperty"},
        }};
    };

    struct MusicSequencerHitComponent
    {
        static constexpr std::string_view Name = "MusicSequencerHitComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t MusicSequencerEventList = 0xC0;
            static constexpr std::uintptr_t LoadedSoundsList = 0x120;
            static constexpr std::uintptr_t SoundPreloadClassList = 0x130;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"MusicSequencerEventList", 0xC0, "StructProperty"},
            {"LoadedSoundsList", 0x120, "ArrayProperty"},
            {"SoundPreloadClassList", 0x130, "ArrayProperty"},
        }};
    };

}

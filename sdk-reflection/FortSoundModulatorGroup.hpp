#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FortSoundModulatorGroup
{
    struct FortSoundModulatorGroupSubsystem
    {
        static constexpr std::string_view Name = "FortSoundModulatorGroupSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t ModulationParameters = 0x38;
            static constexpr std::uintptr_t RegisteredGroups = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ModulationParameters", 0x38, "MapProperty"},
            {"RegisteredGroups", 0x48, "ArrayProperty"},
        }};
    };

    struct GameFeatureAction_ActivateSoundModulatorGroupMix
    {
        static constexpr std::string_view Name = "GameFeatureAction_ActivateSoundModulatorGroupMix";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFeatureAction";
        struct Offsets
        {
            static constexpr std::uintptr_t Mixes = 0x28;
            static constexpr std::uintptr_t LoadedMixes = 0x38;
            static constexpr std::uintptr_t ActiveMixes = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Mixes", 0x28, "ArrayProperty"},
            {"LoadedMixes", 0x38, "ArrayProperty"},
            {"ActiveMixes", 0x48, "ArrayProperty"},
        }};
    };

    struct GameFeatureAction_RegisterSoundModulatorGroup
    {
        static constexpr std::string_view Name = "GameFeatureAction_RegisterSoundModulatorGroup";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFeatureAction";
        struct Offsets
        {
            static constexpr std::uintptr_t Groups = 0x28;
            static constexpr std::uintptr_t LoadedGroups = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Groups", 0x28, "ArrayProperty"},
            {"LoadedGroups", 0x38, "ArrayProperty"},
        }};
    };

    struct SoundModulatorGroupMix
    {
        static constexpr std::string_view Name = "SoundModulatorGroupMix";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t Stages = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Stages", 0x28, "ArrayProperty"},
        }};
    };

}

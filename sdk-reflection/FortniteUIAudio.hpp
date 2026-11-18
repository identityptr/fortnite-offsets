#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FortniteUIAudio
{
    struct FortAudioUserMixGameUserSettings
    {
        static constexpr std::string_view Name = "FortAudioUserMixGameUserSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t UserMixCurrentValues = 0x28;
            static constexpr std::uintptr_t Version = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"UserMixCurrentValues", 0x28, "ArrayProperty"},
            {"Version", 0x38, "IntProperty"},
        }};
    };

    struct FortAudioUserMixSettings
    {
        static constexpr std::string_view Name = "FortAudioUserMixSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeveloperSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t UserMixes = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"UserMixes", 0x30, "ArrayProperty"},
        }};
    };

    struct FortAudioUserMixSubsystem
    {
        static constexpr std::string_view Name = "FortAudioUserMixSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameInstanceSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t SubsystemDataAssetPath = 0x58;
            static constexpr std::uintptr_t SubsystemData = 0x70;
            static constexpr std::uintptr_t UserSettings = 0x78;
            static constexpr std::uintptr_t DirtyBusNames = 0x80;
            static constexpr std::uintptr_t Mixes = 0x90;
            static constexpr std::uintptr_t LoadedMixes = 0xA0;
            static constexpr std::uintptr_t MutedBuses = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"SubsystemDataAssetPath", 0x58, "StructProperty"},
            {"SubsystemData", 0x70, "ObjectProperty"},
            {"UserSettings", 0x78, "ObjectProperty"},
            {"DirtyBusNames", 0x80, "ArrayProperty"},
            {"Mixes", 0x90, "ArrayProperty"},
            {"LoadedMixes", 0xA0, "ArrayProperty"},
            {"MutedBuses", 0xC0, "ArrayProperty"},
        }};
    };

    struct FortAudioUserMixSubsystemData
    {
        static constexpr std::string_view Name = "FortAudioUserMixSubsystemData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimaryDataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t UserMixes = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"UserMixes", 0x28, "ArrayProperty"},
        }};
    };

    struct FortSettingVolume
    {
        static constexpr std::string_view Name = "FortSettingVolume";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortSettingValueScalar";
        struct Offsets
        {
            static constexpr std::uintptr_t ControlBus = 0x1F0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ControlBus", 0x1F0, "ObjectProperty"},
        }};
    };

    struct FortSettingVolumeMarkup
    {
        static constexpr std::string_view Name = "FortSettingVolumeMarkup";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortSettingMarkup";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultValue = 0x88;
            static constexpr std::uintptr_t ControlBus = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DefaultValue", 0x88, "DoubleProperty"},
            {"ControlBus", 0x90, "ObjectProperty"},
        }};
    };

    struct GameFeatureAction_ActivateAudioUserMix
    {
        static constexpr std::string_view Name = "GameFeatureAction_ActivateAudioUserMix";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFeatureAction";
        struct Offsets
        {
            static constexpr std::uintptr_t UserMix = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"UserMix", 0x28, "StructProperty"},
        }};
    };

}

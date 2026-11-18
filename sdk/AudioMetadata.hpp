#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::AudioMetadata
{
    struct AudioMetadataDeveloperSettings
    {
        static constexpr std::string_view Name = "AudioMetadataDeveloperSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeveloperSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t ModulationSettings = 0x30;
            static constexpr std::uintptr_t SubmixSettings = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ModulationSettings", 0x30, "StructProperty"},
            {"SubmixSettings", 0x40, "StructProperty"},
        }};
    };

    struct AudioMetadataModulationSettings
    {
        static constexpr std::string_view Name = "AudioMetadataModulationSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ControlBusLicensedAudioMuteAll = 0x0;
            static constexpr std::uintptr_t ControlBusLicensedAudioMuteOthers = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ControlBusLicensedAudioMuteAll", 0x0, "ObjectProperty"},
            {"ControlBusLicensedAudioMuteOthers", 0x8, "ObjectProperty"},
        }};
    };

    struct AudioMetadataSubmixSettings
    {
        static constexpr std::string_view Name = "AudioMetadataSubmixSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t LicensedAudioSubmix = 0x0;
            static constexpr std::uintptr_t PostPartySubmix = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"LicensedAudioSubmix", 0x0, "ObjectProperty"},
            {"PostPartySubmix", 0x8, "ObjectProperty"},
        }};
    };

    struct AudioMetadataSubsystem
    {
        static constexpr std::string_view Name = "AudioMetadataSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AudioEngineSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}

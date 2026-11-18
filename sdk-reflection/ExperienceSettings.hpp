#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::ExperienceSettings
{
    struct FortUserOptionComponent_Cosmetic
    {
        static constexpr std::string_view Name = "FortUserOptionComponent_Cosmetic";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortUserOptionContainerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t UserOptionData = 0xE0;
            static constexpr std::uintptr_t BehaviorSetNodes = 0x148;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"UserOptionData", 0xE0, "StructProperty"},
            {"BehaviorSetNodes", 0x148, "ArrayProperty"},
        }};
    };

    struct FortUserOptionComponent_Music
    {
        static constexpr std::string_view Name = "FortUserOptionComponent_Music";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortUserOptionContainerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t JamEnabledPropertyName = 0x158;
            static constexpr std::uintptr_t bJamEnabled = 0x168;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"JamEnabledPropertyName", 0x158, "StrProperty"},
            {"bJamEnabled", 0x168, "BoolProperty"},
        }};
    };

    struct FortUserOptionComponent_VoiceChat
    {
        static constexpr std::string_view Name = "FortUserOptionComponent_VoiceChat";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortUserOptionContainerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t AttenuationShape = 0x158;
            static constexpr std::uintptr_t FullVolumeConeAngle = 0x15C;
            static constexpr std::uintptr_t FalloffConeAngle = 0x160;
            static constexpr std::uintptr_t FullVolumeSphereDistance = 0x164;
            static constexpr std::uintptr_t FalloffSphereDistance = 0x168;
            static constexpr std::uintptr_t AttenuationFunction = 0x16C;
            static constexpr std::uintptr_t bVoiceSpatialized = 0x16D;
            static constexpr std::uintptr_t bOccludeSpeakers = 0x16E;
            static constexpr std::uintptr_t OcclusionVolumeMultiplier = 0x170;
            static constexpr std::uintptr_t OcclusionLowPassFilterFrequency = 0x174;
            static constexpr std::uintptr_t OcclusionInterpolationTime = 0x178;
            static constexpr std::uintptr_t bFocusedListening = 0x17C;
            static constexpr std::uintptr_t FocusFullVolumeAngle = 0x180;
            static constexpr std::uintptr_t FocusFalloffAngle = 0x184;
            static constexpr std::uintptr_t MinimumUnfocusedMultiplier = 0x188;
            static constexpr std::uintptr_t SpatialVoiceVersion = 0x18C;
            static constexpr std::uintptr_t ProximityChatPropertyName = 0x190;
            static constexpr std::uintptr_t DataRegistrySettingsComponent = 0x1A0;
            static constexpr std::uintptr_t bProximityChatEnabled = 0x1A8;
        };

        inline static constexpr std::array<PropertyInfo, 19> Properties{{
            {"AttenuationShape", 0x158, "EnumProperty"},
            {"FullVolumeConeAngle", 0x15C, "FloatProperty"},
            {"FalloffConeAngle", 0x160, "FloatProperty"},
            {"FullVolumeSphereDistance", 0x164, "FloatProperty"},
            {"FalloffSphereDistance", 0x168, "FloatProperty"},
            {"AttenuationFunction", 0x16C, "EnumProperty"},
            {"bVoiceSpatialized", 0x16D, "BoolProperty"},
            {"bOccludeSpeakers", 0x16E, "BoolProperty"},
            {"OcclusionVolumeMultiplier", 0x170, "FloatProperty"},
            {"OcclusionLowPassFilterFrequency", 0x174, "FloatProperty"},
            {"OcclusionInterpolationTime", 0x178, "FloatProperty"},
            {"bFocusedListening", 0x17C, "BoolProperty"},
            {"FocusFullVolumeAngle", 0x180, "FloatProperty"},
            {"FocusFalloffAngle", 0x184, "FloatProperty"},
            {"MinimumUnfocusedMultiplier", 0x188, "FloatProperty"},
            {"SpatialVoiceVersion", 0x18C, "StructProperty"},
            {"ProximityChatPropertyName", 0x190, "StrProperty"},
            {"DataRegistrySettingsComponent", 0x1A0, "ClassProperty"},
            {"bProximityChatEnabled", 0x1A8, "BoolProperty"},
        }};
    };

    struct Newton_UserOptionFilterComponent
    {
        static constexpr std::string_view Name = "Newton_UserOptionFilterComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortUserOptionFilterComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CategoriesToHide = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CategoriesToHide", 0x100, "ArrayProperty"},
        }};
    };

}

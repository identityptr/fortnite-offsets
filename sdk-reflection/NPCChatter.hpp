#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::NPCChatter
{
    struct ChatterDialog
    {
        static constexpr std::string_view Name = "ChatterDialog";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimaryDataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t Chatters = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Chatters", 0x28, "ArrayProperty"},
        }};
    };

    struct ChatterDialogSet
    {
        static constexpr std::string_view Name = "ChatterDialogSet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimaryDataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t DialogsByIdentity = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DialogsByIdentity", 0x28, "MapProperty"},
        }};
    };

    struct NPCChatterBaseComponent
    {
        static constexpr std::string_view Name = "NPCChatterBaseComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPawnComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t DialogSet = 0xD0;
            static constexpr std::uintptr_t bSpeechBubbleActive = 0xD8;
            static constexpr std::uintptr_t bSoundActive = 0xD9;
            static constexpr std::uintptr_t bTextMessageActive = 0xDA;
            static constexpr std::uintptr_t TextMessageAudience = 0xDB;
            static constexpr std::uintptr_t DefaultLineDuration = 0xDC;
            static constexpr std::uintptr_t ChatterAudioComponent = 0xE8;
            static constexpr std::uintptr_t ResolvedDialog = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"DialogSet", 0xD0, "ObjectProperty"},
            {"bSpeechBubbleActive", 0xD8, "BoolProperty"},
            {"bSoundActive", 0xD9, "BoolProperty"},
            {"bTextMessageActive", 0xDA, "BoolProperty"},
            {"TextMessageAudience", 0xDB, "EnumProperty"},
            {"DefaultLineDuration", 0xDC, "FloatProperty"},
            {"ChatterAudioComponent", 0xE8, "ObjectProperty"},
            {"ResolvedDialog", 0xF0, "ObjectProperty"},
        }};
    };

    struct NPCChatterBaseUserOptionsComponent
    {
        static constexpr std::string_view Name = "NPCChatterBaseUserOptionsComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortUserOptionContainerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bSpeechBubbleActive = 0x158;
            static constexpr std::uintptr_t bSoundActive = 0x159;
            static constexpr std::uintptr_t bTextMessageActive = 0x15A;
            static constexpr std::uintptr_t bTextMessageToTeamOnly = 0x15B;
            static constexpr std::uintptr_t bInitializeOnSpawn = 0x15C;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"bSpeechBubbleActive", 0x158, "BoolProperty"},
            {"bSoundActive", 0x159, "BoolProperty"},
            {"bTextMessageActive", 0x15A, "BoolProperty"},
            {"bTextMessageToTeamOnly", 0x15B, "BoolProperty"},
            {"bInitializeOnSpawn", 0x15C, "BoolProperty"},
        }};
    };

}

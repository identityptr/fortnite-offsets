#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::JunoRuneForgeUI
{
    struct JunoPlayerEssenceViewModel
    {
        static constexpr std::string_view Name = "JunoPlayerEssenceViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t RuneRollComponent = 0x68;
            static constexpr std::uintptr_t FortPlayerController = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"RuneRollComponent", 0x68, "ObjectProperty"},
            {"FortPlayerController", 0x70, "ObjectProperty"},
        }};
    };

    struct JunoRuneEntry
    {
        static constexpr std::string_view Name = "JunoRuneEntry";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t bDisplayInActionBar = 0x308;
            static constexpr std::uintptr_t bConsumePointerInput = 0x309;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bDisplayInActionBar", 0x308, "BoolProperty"},
            {"bConsumePointerInput", 0x309, "BoolProperty"},
        }};
    };

    struct JunoRuneForgeScreen
    {
        static constexpr std::string_view Name = "JunoRuneForgeScreen";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t JunoCraftingObjectBGA = 0x4A8;
            static constexpr std::uintptr_t WBP_Juno_CloseButton_Touch = 0x4B0;
            static constexpr std::uintptr_t SelectedSlotViewModel = 0x4B8;
            static constexpr std::uintptr_t RuneForgeViewModel = 0x4C0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"JunoCraftingObjectBGA", 0x4A8, "ObjectProperty"},
            {"WBP_Juno_CloseButton_Touch", 0x4B0, "ObjectProperty"},
            {"SelectedSlotViewModel", 0x4B8, "ObjectProperty"},
            {"RuneForgeViewModel", 0x4C0, "ObjectProperty"},
        }};
    };

    struct JunoRuneForgeViewModel
    {
        static constexpr std::string_view Name = "JunoRuneForgeViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t ItemViewModel = 0x80;
            static constexpr std::uintptr_t PlayerEssenceViewModel = 0x88;
            static constexpr std::uintptr_t SelectedRuneToForgeViewModel = 0x90;
            static constexpr std::uintptr_t SelectedRuneToForgeIndex = 0x98;
            static constexpr std::uintptr_t RuneForgeState = 0x9C;
            static constexpr std::uintptr_t FortPC = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"ItemViewModel", 0x80, "ObjectProperty"},
            {"PlayerEssenceViewModel", 0x88, "ObjectProperty"},
            {"SelectedRuneToForgeViewModel", 0x90, "ObjectProperty"},
            {"SelectedRuneToForgeIndex", 0x98, "IntProperty"},
            {"RuneForgeState", 0x9C, "EnumProperty"},
            {"FortPC", 0xA0, "ObjectProperty"},
        }};
    };

}

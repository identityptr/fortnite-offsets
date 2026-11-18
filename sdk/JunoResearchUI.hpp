#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::JunoResearchUI
{
    struct JunoGameStateComponent_ResearchUIData
    {
        static constexpr std::string_view Name = "JunoGameStateComponent_ResearchUIData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoGameStateComponent_DataBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ResearchCategoryUIDataRegistryType = 0xD8;
            static constexpr std::uintptr_t ResearchTagUIDataRegistryType = 0xDC;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ResearchCategoryUIDataRegistryType", 0xD8, "StructProperty"},
            {"ResearchTagUIDataRegistryType", 0xDC, "StructProperty"},
        }};
    };

    struct JunoPlayerResearchAvailableViewModel
    {
        static constexpr std::string_view Name = "JunoPlayerResearchAvailableViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t IsAnyResearchUnlocked = 0x78;
            static constexpr std::uintptr_t HasRecentlyViewed = 0x79;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"IsAnyResearchUnlocked", 0x78, "BoolProperty"},
            {"HasRecentlyViewed", 0x79, "BoolProperty"},
        }};
    };

    struct JunoPlayerResearchViewModel
    {
        static constexpr std::string_view Name = "JunoPlayerResearchViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t OnResearchChanged = 0x78;
            static constexpr std::uintptr_t ThemeEntryType = 0x88;
            static constexpr std::uintptr_t CategoryEntryType = 0x8C;
            static constexpr std::uintptr_t GroupEntryType = 0x90;
            static constexpr std::uintptr_t ResearchEntryType = 0x94;
            static constexpr std::uintptr_t ResearchCategories = 0x98;
            static constexpr std::uintptr_t ResearchEntries = 0xA8;
            static constexpr std::uintptr_t SelectedThemeTag = 0xB8;
            static constexpr std::uintptr_t SelectedThemeViewModel = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"OnResearchChanged", 0x78, "MulticastInlineDelegateProperty"},
            {"ThemeEntryType", 0x88, "NameProperty"},
            {"CategoryEntryType", 0x8C, "NameProperty"},
            {"GroupEntryType", 0x90, "NameProperty"},
            {"ResearchEntryType", 0x94, "NameProperty"},
            {"ResearchCategories", 0x98, "ArrayProperty"},
            {"ResearchEntries", 0xA8, "ArrayProperty"},
            {"SelectedThemeTag", 0xB8, "StructProperty"},
            {"SelectedThemeViewModel", 0xC0, "ObjectProperty"},
        }};
    };

    struct JunoResearchCategoryViewModel
    {
        static constexpr std::string_view Name = "JunoResearchCategoryViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t DisplayName = 0x68;
            static constexpr std::uintptr_t DisplayImage = 0x78;
            static constexpr std::uintptr_t DisplayDescription = 0x98;
            static constexpr std::uintptr_t ResearchCategoryTag = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"DisplayName", 0x68, "TextProperty"},
            {"DisplayImage", 0x78, "SoftObjectProperty"},
            {"DisplayDescription", 0x98, "TextProperty"},
            {"ResearchCategoryTag", 0xA8, "StructProperty"},
        }};
    };

    struct JunoResearchEntryViewModel
    {
        static constexpr std::string_view Name = "JunoResearchEntryViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t OnPlayerResearched = 0x70;
            static constexpr std::uintptr_t OnPlayerUpgradedResearch = 0x80;
            static constexpr std::uintptr_t IdTag = 0x94;
            static constexpr std::uintptr_t DisplayName = 0x98;
            static constexpr std::uintptr_t DisplayImage = 0xA8;
            static constexpr std::uintptr_t DisplayIcon = 0xC8;
            static constexpr std::uintptr_t Description = 0xE8;
            static constexpr std::uintptr_t StyleTag = 0xF8;
            static constexpr std::uintptr_t NumPurchaseableEntries = 0xFC;
            static constexpr std::uintptr_t NumPurchasedEntries = 0x100;
            static constexpr std::uintptr_t NumTotalEntries = 0x104;
            static constexpr std::uintptr_t ItemDefinition = 0x138;
            static constexpr std::uintptr_t RequiredPrerequisiteResearch = 0x140;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"OnPlayerResearched", 0x70, "MulticastInlineDelegateProperty"},
            {"OnPlayerUpgradedResearch", 0x80, "MulticastInlineDelegateProperty"},
            {"IdTag", 0x94, "StructProperty"},
            {"DisplayName", 0x98, "TextProperty"},
            {"DisplayImage", 0xA8, "SoftObjectProperty"},
            {"DisplayIcon", 0xC8, "SoftObjectProperty"},
            {"Description", 0xE8, "TextProperty"},
            {"StyleTag", 0xF8, "StructProperty"},
            {"NumPurchaseableEntries", 0xFC, "IntProperty"},
            {"NumPurchasedEntries", 0x100, "IntProperty"},
            {"NumTotalEntries", 0x104, "IntProperty"},
            {"ItemDefinition", 0x138, "ObjectProperty"},
            {"RequiredPrerequisiteResearch", 0x140, "ArrayProperty"},
        }};
    };

}

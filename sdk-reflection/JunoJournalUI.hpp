#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::JunoJournalUI
{
    struct JunoJournalCategoryVM
    {
        static constexpr std::string_view Name = "JunoJournalCategoryVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoJournalEntryBaseVM";
        struct Offsets
        {
            static constexpr std::uintptr_t AllTasks = 0x80;
            static constexpr std::uintptr_t Title = 0x90;
            static constexpr std::uintptr_t FoundInBiome = 0xA0;
            static constexpr std::uintptr_t Description = 0xB0;
            static constexpr std::uintptr_t Icon = 0xC0;
            static constexpr std::uintptr_t LargeImage = 0xE0;
            static constexpr std::uintptr_t AreAllTasksComplete = 0x100;
            static constexpr std::uintptr_t IsTracked = 0x101;
            static constexpr std::uintptr_t IsNew = 0x102;
            static constexpr std::uintptr_t bIsNewBadgeAllowed = 0x103;
            static constexpr std::uintptr_t IsCollapsed = 0x104;
            static constexpr std::uintptr_t SortOrder = 0x108;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"AllTasks", 0x80, "ArrayProperty"},
            {"Title", 0x90, "TextProperty"},
            {"FoundInBiome", 0xA0, "TextProperty"},
            {"Description", 0xB0, "TextProperty"},
            {"Icon", 0xC0, "SoftObjectProperty"},
            {"LargeImage", 0xE0, "SoftObjectProperty"},
            {"AreAllTasksComplete", 0x100, "BoolProperty"},
            {"IsTracked", 0x101, "BoolProperty"},
            {"IsNew", 0x102, "BoolProperty"},
            {"bIsNewBadgeAllowed", 0x103, "BoolProperty"},
            {"IsCollapsed", 0x104, "BoolProperty"},
            {"SortOrder", 0x108, "IntProperty"},
        }};
    };

    struct JunoJournalEntryBaseVM
    {
        static constexpr std::string_view Name = "JunoJournalEntryBaseVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoJournalNotificationBatchData
    {
        static constexpr std::string_view Name = "JunoJournalNotificationBatchData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t NotificationVMs = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"NotificationVMs", 0x28, "ArrayProperty"},
        }};
    };

    struct JunoJournalNotificationVM
    {
        static constexpr std::string_view Name = "JunoJournalNotificationVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t EntryRowName = 0x78;
            static constexpr std::uintptr_t IsCategory = 0x7C;
            static constexpr std::uintptr_t Title = 0x80;
            static constexpr std::uintptr_t Subtitle = 0x90;
            static constexpr std::uintptr_t Icon = 0xA0;
            static constexpr std::uintptr_t State = 0xC0;
            static constexpr std::uintptr_t IsPerPlayer = 0xC1;
            static constexpr std::uintptr_t Rewards = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"EntryRowName", 0x78, "NameProperty"},
            {"IsCategory", 0x7C, "BoolProperty"},
            {"Title", 0x80, "TextProperty"},
            {"Subtitle", 0x90, "TextProperty"},
            {"Icon", 0xA0, "SoftObjectProperty"},
            {"State", 0xC0, "EnumProperty"},
            {"IsPerPlayer", 0xC1, "BoolProperty"},
            {"Rewards", 0xC8, "ObjectProperty"},
        }};
    };

    struct JunoJournalPrerequisiteVM
    {
        static constexpr std::string_view Name = "JunoJournalPrerequisiteVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t Title = 0x78;
            static constexpr std::uintptr_t IsComplete = 0x88;
            static constexpr std::uintptr_t ProgressCurrent = 0x8C;
            static constexpr std::uintptr_t ProgressTotal = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Title", 0x78, "TextProperty"},
            {"IsComplete", 0x88, "BoolProperty"},
            {"ProgressCurrent", 0x8C, "IntProperty"},
            {"ProgressTotal", 0x90, "IntProperty"},
        }};
    };

    struct JunoJournalRewardsVM
    {
        static constexpr std::string_view Name = "JunoJournalRewardsVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoRewardsBaseVM";
        struct Offsets
        {
            static constexpr std::uintptr_t IndividualRewards = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"IndividualRewards", 0x78, "ArrayProperty"},
        }};
    };

    struct JunoJournalScreen
    {
        static constexpr std::string_view Name = "JunoJournalScreen";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t Button_Back = 0x4C8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Button_Back", 0x4C8, "ObjectProperty"},
        }};
    };

    struct JunoJournalTaskVM
    {
        static constexpr std::string_view Name = "JunoJournalTaskVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoJournalEntryBaseVM";
        struct Offsets
        {
            static constexpr std::uintptr_t Category = 0x80;
            static constexpr std::uintptr_t Prerequisites = 0x88;
            static constexpr std::uintptr_t Title = 0x98;
            static constexpr std::uintptr_t Subtitle = 0xA8;
            static constexpr std::uintptr_t ShortDescription = 0xB8;
            static constexpr std::uintptr_t Description = 0xC8;
            static constexpr std::uintptr_t LargeImage = 0xD8;
            static constexpr std::uintptr_t CustomIcon = 0xF8;
            static constexpr std::uintptr_t Rewards = 0x118;
            static constexpr std::uintptr_t IsComplete = 0x120;
            static constexpr std::uintptr_t IsTracked = 0x121;
            static constexpr std::uintptr_t IsNew = 0x122;
            static constexpr std::uintptr_t HidePrereqs = 0x123;
            static constexpr std::uintptr_t IsPerPlayer = 0x124;
            static constexpr std::uintptr_t HideWhenComplete = 0x125;
            static constexpr std::uintptr_t CanAbandon = 0x126;
            static constexpr std::uintptr_t WasAutoTracked = 0x127;
        };

        inline static constexpr std::array<PropertyInfo, 17> Properties{{
            {"Category", 0x80, "ObjectProperty"},
            {"Prerequisites", 0x88, "ArrayProperty"},
            {"Title", 0x98, "TextProperty"},
            {"Subtitle", 0xA8, "TextProperty"},
            {"ShortDescription", 0xB8, "TextProperty"},
            {"Description", 0xC8, "TextProperty"},
            {"LargeImage", 0xD8, "SoftObjectProperty"},
            {"CustomIcon", 0xF8, "SoftObjectProperty"},
            {"Rewards", 0x118, "ObjectProperty"},
            {"IsComplete", 0x120, "BoolProperty"},
            {"IsTracked", 0x121, "BoolProperty"},
            {"IsNew", 0x122, "BoolProperty"},
            {"HidePrereqs", 0x123, "BoolProperty"},
            {"IsPerPlayer", 0x124, "BoolProperty"},
            {"HideWhenComplete", 0x125, "BoolProperty"},
            {"CanAbandon", 0x126, "BoolProperty"},
            {"WasAutoTracked", 0x127, "BoolProperty"},
        }};
    };

    struct JunoJournalTrackTaskVM
    {
        static constexpr std::string_view Name = "JunoJournalTrackTaskVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t IncomingTaskVM = 0x78;
            static constexpr std::uintptr_t TaskVM = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"IncomingTaskVM", 0x78, "ObjectProperty"},
            {"TaskVM", 0x80, "ObjectProperty"},
        }};
    };

    struct JunoJournalTreeView
    {
        static constexpr std::string_view Name = "JunoJournalTreeView";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonTreeView";
        struct Offsets
        {
            static constexpr std::uintptr_t BP_OnGetItemChildren = 0xFF0;
            static constexpr std::uintptr_t BP_OnItemExpansionChanged = 0x1000;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"BP_OnGetItemChildren", 0xFF0, "DelegateProperty"},
            {"BP_OnItemExpansionChanged", 0x1000, "MulticastInlineDelegateProperty"},
        }};
    };

    struct JunoJournalVM
    {
        static constexpr std::string_view Name = "JunoJournalVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t AllCategories = 0x78;
            static constexpr std::uintptr_t bAutoTrackingEnabled = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"AllCategories", 0x78, "ArrayProperty"},
            {"bAutoTrackingEnabled", 0x88, "BoolProperty"},
        }};
    };

    struct JunoPlayerStateComponent_JournalUI
    {
        static constexpr std::string_view Name = "JunoPlayerStateComponent_JournalUI";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PlayerStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t JournalCategoryRegistryType = 0xC0;
            static constexpr std::uintptr_t TaskRevealedNotificationTag = 0xC4;
            static constexpr std::uintptr_t TaskCompletedNotificationTag = 0xC8;
            static constexpr std::uintptr_t CategoryRevealedNotificationTag = 0xCC;
            static constexpr std::uintptr_t CategoryCompletedNotificationTag = 0xD0;
            static constexpr std::uintptr_t JournalNotificationWidgetClass = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"JournalCategoryRegistryType", 0xC0, "StructProperty"},
            {"TaskRevealedNotificationTag", 0xC4, "StructProperty"},
            {"TaskCompletedNotificationTag", 0xC8, "StructProperty"},
            {"CategoryRevealedNotificationTag", 0xCC, "StructProperty"},
            {"CategoryCompletedNotificationTag", 0xD0, "StructProperty"},
            {"JournalNotificationWidgetClass", 0xD8, "SoftClassProperty"},
        }};
    };

}

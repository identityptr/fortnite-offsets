#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::MatchObjectivesUI
{
    struct FortMobileButtonBehaviorComponent_MatchObjectivePicker
    {
        static constexpr std::string_view Name = "FortMobileButtonBehaviorComponent_MatchObjectivePicker";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMobileActionButtonBehavior";
        struct Offsets
        {
            static constexpr std::uintptr_t SkydiveFeedbackComp = 0x2A0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SkydiveFeedbackComp", 0x2A0, "ObjectProperty"},
        }};
    };

    struct FortMobileHUDElement_ObjectiveSelectorWrapper
    {
        static constexpr std::string_view Name = "FortMobileHUDElement_ObjectiveSelectorWrapper";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMobileHUDElement";
        struct Offsets
        {
            static constexpr std::uintptr_t Overlay_WrapperContents = 0x3E0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Overlay_WrapperContents", 0x3E0, "ObjectProperty"},
        }};
    };

    struct MatchObjectivesBonusEntryWidget
    {
        static constexpr std::string_view Name = "MatchObjectivesBonusEntryWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t Text_Reward = 0x310;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Text_Reward", 0x310, "ObjectProperty"},
        }};
    };

    struct MatchObjectivesBonusPunchWidget
    {
        static constexpr std::string_view Name = "MatchObjectivesBonusPunchWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t TextExpiredQuest = 0x320;
            static constexpr std::uintptr_t InclusiveFilterTags = 0x348;
            static constexpr std::uintptr_t ExclusiveFilterTags = 0x368;
            static constexpr std::uintptr_t Text_ResetTimer = 0x388;
            static constexpr std::uintptr_t DynamicEntryBox_DailyBonusPips = 0x390;
            static constexpr std::uintptr_t WidgetsPips = 0x398;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"TextExpiredQuest", 0x320, "TextProperty"},
            {"InclusiveFilterTags", 0x348, "StructProperty"},
            {"ExclusiveFilterTags", 0x368, "StructProperty"},
            {"Text_ResetTimer", 0x388, "ObjectProperty"},
            {"DynamicEntryBox_DailyBonusPips", 0x390, "ObjectProperty"},
            {"WidgetsPips", 0x398, "ArrayProperty"},
        }};
    };

    struct MatchObjectivesOptionEntryWidget
    {
        static constexpr std::string_view Name = "MatchObjectivesOptionEntryWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsOptionSelected = 0x308;
            static constexpr std::uintptr_t bIsOptionFocused = 0x309;
            static constexpr std::uintptr_t Button_TapSelect = 0x328;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bIsOptionSelected", 0x308, "BoolProperty"},
            {"bIsOptionFocused", 0x309, "BoolProperty"},
            {"Button_TapSelect", 0x328, "ObjectProperty"},
        }};
    };

    struct MatchObjectivesSelectorWidget
    {
        static constexpr std::string_view Name = "MatchObjectivesSelectorWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortHUDElementWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t Quests_BonusPunchcard = 0x370;
            static constexpr std::uintptr_t DynamicEntryBox_OptionEntries = 0x378;
            static constexpr std::uintptr_t GroupMatches = 0x380;
            static constexpr std::uintptr_t WidgetSelectorState = 0x390;
            static constexpr std::uintptr_t MatchObjectivesInputComponent = 0x398;
            static constexpr std::uintptr_t Button_MobileToggle_Header = 0x3A0;
            static constexpr std::uintptr_t Button_MobileToggle_List = 0x3A8;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Quests_BonusPunchcard", 0x370, "ObjectProperty"},
            {"DynamicEntryBox_OptionEntries", 0x378, "ObjectProperty"},
            {"GroupMatches", 0x380, "ArrayProperty"},
            {"WidgetSelectorState", 0x390, "EnumProperty"},
            {"MatchObjectivesInputComponent", 0x398, "ObjectProperty"},
            {"Button_MobileToggle_Header", 0x3A0, "ObjectProperty"},
            {"Button_MobileToggle_List", 0x3A8, "ObjectProperty"},
        }};
    };

    struct MatchObjectivesSocialAvatar
    {
        static constexpr std::string_view Name = "MatchObjectivesSocialAvatar";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t Icon_SocialAvatar = 0x308;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Icon_SocialAvatar", 0x308, "ObjectProperty"},
        }};
    };

    struct MatchObjectivesUIDirectorBase
    {
        static constexpr std::string_view Name = "MatchObjectivesUIDirectorBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DynamicUIDirectorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultScenes = 0x278;
            static constexpr std::uintptr_t OwningLocalPlayer = 0x288;
            static constexpr std::uintptr_t bEnabledDuringReplay = 0x290;
            static constexpr std::uintptr_t ScenesManuallyAdded = 0x298;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"DefaultScenes", 0x278, "ArrayProperty"},
            {"OwningLocalPlayer", 0x288, "WeakObjectProperty"},
            {"bEnabledDuringReplay", 0x290, "BoolProperty"},
            {"ScenesManuallyAdded", 0x298, "ArrayProperty"},
        }};
    };

}

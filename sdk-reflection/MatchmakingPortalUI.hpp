#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::MatchmakingPortalUI
{
    struct FortControllerComponent_CreativeMatchmaking
    {
        static constexpr std::string_view Name = "FortControllerComponent_CreativeMatchmaking";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedGameActivity = 0xC8;
            static constexpr std::uintptr_t CreativeMatchmakingFeedbackClass = 0xD0;
            static constexpr std::uintptr_t IslandModal = 0xD8;
            static constexpr std::uintptr_t CreativeMatchmakingFeedbackWidget = 0xE0;
            static constexpr std::uintptr_t MatchmakingPortalModalWidget = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"CachedGameActivity", 0xC8, "ObjectProperty"},
            {"CreativeMatchmakingFeedbackClass", 0xD0, "ClassProperty"},
            {"IslandModal", 0xD8, "ClassProperty"},
            {"CreativeMatchmakingFeedbackWidget", 0xE0, "ObjectProperty"},
            {"MatchmakingPortalModalWidget", 0xE8, "ObjectProperty"},
        }};
    };

    struct FortCreativeMatchmakingFeedback
    {
        static constexpr std::string_view Name = "FortCreativeMatchmakingFeedback";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t Text_IslandName = 0x340;
            static constexpr std::uintptr_t Text_MatchmakingStatus = 0x348;
            static constexpr std::uintptr_t bIsCancelingMatchmaking = 0x358;
            static constexpr std::uintptr_t bIsLocalPartyMemberReady = 0x359;
            static constexpr std::uintptr_t bHasPushedInputComponent = 0x35A;
            static constexpr std::uintptr_t CachedGameActivity = 0x378;
            static constexpr std::uintptr_t bHasError = 0x380;
            static constexpr std::uintptr_t MatchmakingStatusText = 0x388;
            static constexpr std::uintptr_t Action_HoldKeybindWidget = 0x398;
            static constexpr std::uintptr_t Action_MobileButton = 0x3A0;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"Text_IslandName", 0x340, "ObjectProperty"},
            {"Text_MatchmakingStatus", 0x348, "ObjectProperty"},
            {"bIsCancelingMatchmaking", 0x358, "BoolProperty"},
            {"bIsLocalPartyMemberReady", 0x359, "BoolProperty"},
            {"bHasPushedInputComponent", 0x35A, "BoolProperty"},
            {"CachedGameActivity", 0x378, "ObjectProperty"},
            {"bHasError", 0x380, "BoolProperty"},
            {"MatchmakingStatusText", 0x388, "TextProperty"},
            {"Action_HoldKeybindWidget", 0x398, "ObjectProperty"},
            {"Action_MobileButton", 0x3A0, "ObjectProperty"},
        }};
    };

    struct FortMatchmakingPortalCountdown
    {
        static constexpr std::string_view Name = "FortMatchmakingPortalCountdown";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t MatchmakingPortalInputComponent = 0x4A8;
            static constexpr std::uintptr_t Text_IslandName = 0x4B0;
            static constexpr std::uintptr_t CountdownTime = 0x4B8;
            static constexpr std::uintptr_t OnFinishedCountdown = 0x4C0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"MatchmakingPortalInputComponent", 0x4A8, "ObjectProperty"},
            {"Text_IslandName", 0x4B0, "ObjectProperty"},
            {"CountdownTime", 0x4B8, "FloatProperty"},
            {"OnFinishedCountdown", 0x4C0, "MulticastInlineDelegateProperty"},
        }};
    };

    struct FortMatchmakingPortalPopup
    {
        static constexpr std::string_view Name = "FortMatchmakingPortalPopup";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPortalHUDDetails";
        struct Offsets
        {
            static constexpr std::uintptr_t WorldPointerLocation = 0x520;
            static constexpr std::uintptr_t CreatorNameTextFormat = 0x538;
            static constexpr std::uintptr_t CachedHUDComponent = 0x548;
            static constexpr std::uintptr_t IslandModal = 0x550;
            static constexpr std::uintptr_t ActivityDetailsModalClassV2 = 0x558;
            static constexpr std::uintptr_t CachedIslandData = 0x560;
            static constexpr std::uintptr_t InvalidLinkCodeWarningText = 0x5A8;
            static constexpr std::uintptr_t MatchmakingFeedbackDelayTime = 0x5B8;
            static constexpr std::uintptr_t bIsWithinPortalRange = 0x5BC;
            static constexpr std::uintptr_t RichText_CreatorName = 0x5C0;
            static constexpr std::uintptr_t Text_IslandName = 0x5C8;
            static constexpr std::uintptr_t EntryBox_ActivityTags = 0x5D0;
            static constexpr std::uintptr_t GlobalActionKeybindWidget = 0x5D8;
            static constexpr std::uintptr_t PlayerPageViewClass = 0x5E0;
            static constexpr std::uintptr_t AttributionsModalClass = 0x5E8;
            static constexpr std::uintptr_t CachedGameActivity = 0x5F0;
            static constexpr std::uintptr_t InteractionMessage = 0x608;
            static constexpr std::uintptr_t InteractionMessage_Cancel = 0x618;
            static constexpr std::uintptr_t InteractionMessage_Disabled = 0x628;
            static constexpr std::uintptr_t InteractionMessage_PartyLeadOnly = 0x638;
        };

        inline static constexpr std::array<PropertyInfo, 20> Properties{{
            {"WorldPointerLocation", 0x520, "StructProperty"},
            {"CreatorNameTextFormat", 0x538, "TextProperty"},
            {"CachedHUDComponent", 0x548, "WeakObjectProperty"},
            {"IslandModal", 0x550, "ClassProperty"},
            {"ActivityDetailsModalClassV2", 0x558, "ClassProperty"},
            {"CachedIslandData", 0x560, "StructProperty"},
            {"InvalidLinkCodeWarningText", 0x5A8, "TextProperty"},
            {"MatchmakingFeedbackDelayTime", 0x5B8, "FloatProperty"},
            {"bIsWithinPortalRange", 0x5BC, "BoolProperty"},
            {"RichText_CreatorName", 0x5C0, "ObjectProperty"},
            {"Text_IslandName", 0x5C8, "ObjectProperty"},
            {"EntryBox_ActivityTags", 0x5D0, "ObjectProperty"},
            {"GlobalActionKeybindWidget", 0x5D8, "ObjectProperty"},
            {"PlayerPageViewClass", 0x5E0, "ClassProperty"},
            {"AttributionsModalClass", 0x5E8, "ClassProperty"},
            {"CachedGameActivity", 0x5F0, "ObjectProperty"},
            {"InteractionMessage", 0x608, "TextProperty"},
            {"InteractionMessage_Cancel", 0x618, "TextProperty"},
            {"InteractionMessage_Disabled", 0x628, "TextProperty"},
            {"InteractionMessage_PartyLeadOnly", 0x638, "TextProperty"},
        }};
    };

    struct FortModalBackground
    {
        static constexpr std::string_view Name = "FortModalBackground";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t Button_Back = 0x4C0;
            static constexpr std::uintptr_t Button_BackBoard = 0x4C8;
            static constexpr std::uintptr_t Button_CloseTouch = 0x4D0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Button_Back", 0x4C0, "ObjectProperty"},
            {"Button_BackBoard", 0x4C8, "ObjectProperty"},
            {"Button_CloseTouch", 0x4D0, "ObjectProperty"},
        }};
    };

    struct FortUIGameFeatureAction_OverridePortalHUDDetails
    {
        static constexpr std::string_view Name = "FortUIGameFeatureAction_OverridePortalHUDDetails";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortUIGameFeatureAction";
        struct Offsets
        {
            static constexpr std::uintptr_t SoftPortalHUDDetailsClass = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SoftPortalHUDDetailsClass", 0x28, "SoftClassProperty"},
        }};
    };

}

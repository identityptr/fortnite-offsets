#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SpecialEventGameplayUI
{
    struct FortGameplayCinematicHostWidget
    {
        static constexpr std::string_view Name = "FortGameplayCinematicHostWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortHUDElementWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t IntroWidgetEntryName = 0x370;
            static constexpr std::uintptr_t WidgetEntries = 0x378;
            static constexpr std::uintptr_t LoadingScreenDefinition = 0x388;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"IntroWidgetEntryName", 0x370, "NameProperty"},
            {"WidgetEntries", 0x378, "ArrayProperty"},
            {"LoadingScreenDefinition", 0x388, "ObjectProperty"},
        }};
    };

    struct FortGameplayCinematicWidget
    {
        static constexpr std::string_view Name = "FortGameplayCinematicWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t bSkipCinematics = 0x4A8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bSkipCinematics", 0x4A8, "BoolProperty"},
        }};
    };

    struct FortGameplayIntroPanelWidget
    {
        static constexpr std::string_view Name = "FortGameplayIntroPanelWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsBackHandler = 0x330;
            static constexpr std::uintptr_t bIsBackActionDisplayedInActionBar = 0x331;
            static constexpr std::uintptr_t OverrideBackActionDisplayName = 0x338;
            static constexpr std::uintptr_t bAutoActivate = 0x348;
            static constexpr std::uintptr_t bSupportsActivationFocus = 0x349;
            static constexpr std::uintptr_t bIsModal = 0x34A;
            static constexpr std::uintptr_t bAutoRestoreFocus = 0x34B;
            static constexpr std::uintptr_t bOverrideActionDomain = 0x34C;
            static constexpr std::uintptr_t InputMapping = 0x350;
            static constexpr std::uintptr_t InputMappingPriority = 0x358;
            static constexpr std::uintptr_t InputModeTagsToAdd = 0x360;
            static constexpr std::uintptr_t InputModeTagsToRemove = 0x380;
            static constexpr std::uintptr_t ActionDomainOverride = 0x3A0;
            static constexpr std::uintptr_t BP_OnWidgetActivated = 0x3C0;
            static constexpr std::uintptr_t BP_OnWidgetDeactivated = 0x3D0;
            static constexpr std::uintptr_t bIsActive = 0x3E0;
            static constexpr std::uintptr_t VisibilityBoundWidgets = 0x3E8;
            static constexpr std::uintptr_t bSetVisibilityOnActivated = 0x498;
            static constexpr std::uintptr_t ActivatedVisibility = 0x499;
            static constexpr std::uintptr_t bSetVisibilityOnDeactivated = 0x49A;
            static constexpr std::uintptr_t DeactivatedVisibility = 0x49B;
        };

        inline static constexpr std::array<PropertyInfo, 21> Properties{{
            {"bIsBackHandler", 0x330, "BoolProperty"},
            {"bIsBackActionDisplayedInActionBar", 0x331, "BoolProperty"},
            {"OverrideBackActionDisplayName", 0x338, "TextProperty"},
            {"bAutoActivate", 0x348, "BoolProperty"},
            {"bSupportsActivationFocus", 0x349, "BoolProperty"},
            {"bIsModal", 0x34A, "BoolProperty"},
            {"bAutoRestoreFocus", 0x34B, "BoolProperty"},
            {"bOverrideActionDomain", 0x34C, "BoolProperty"},
            {"InputMapping", 0x350, "ObjectProperty"},
            {"InputMappingPriority", 0x358, "IntProperty"},
            {"InputModeTagsToAdd", 0x360, "StructProperty"},
            {"InputModeTagsToRemove", 0x380, "StructProperty"},
            {"ActionDomainOverride", 0x3A0, "SoftObjectProperty"},
            {"BP_OnWidgetActivated", 0x3C0, "MulticastInlineDelegateProperty"},
            {"BP_OnWidgetDeactivated", 0x3D0, "MulticastInlineDelegateProperty"},
            {"bIsActive", 0x3E0, "BoolProperty"},
            {"VisibilityBoundWidgets", 0x3E8, "ArrayProperty"},
            {"bSetVisibilityOnActivated", 0x498, "BoolProperty"},
            {"ActivatedVisibility", 0x499, "EnumProperty"},
            {"bSetVisibilityOnDeactivated", 0x49A, "BoolProperty"},
            {"DeactivatedVisibility", 0x49B, "EnumProperty"},
        }};
    };

    struct SpecialEventCursorWidget
    {
        static constexpr std::string_view Name = "SpecialEventCursorWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t bAutomaticallyChangeVisibility = 0x310;
            static constexpr std::uintptr_t CursorPawnComponent = 0x318;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bAutomaticallyChangeVisibility", 0x310, "BoolProperty"},
            {"CursorPawnComponent", 0x318, "ObjectProperty"},
        }};
    };

    struct SpecialEventLeaderboardInputComponent
    {
        static constexpr std::string_view Name = "SpecialEventLeaderboardInputComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ScoreboardInputMappingContext = 0xC8;
            static constexpr std::uintptr_t InputAction_ToggleLeaderboard = 0xD0;
            static constexpr std::uintptr_t Priority = 0xD8;
            static constexpr std::uintptr_t LeaderboardUIScene = 0xE0;
            static constexpr std::uintptr_t bLeaderboardUIEnabled = 0xE8;
            static constexpr std::uintptr_t OpenLeaderboardDisplayText = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"ScoreboardInputMappingContext", 0xC8, "ObjectProperty"},
            {"InputAction_ToggleLeaderboard", 0xD0, "ObjectProperty"},
            {"Priority", 0xD8, "IntProperty"},
            {"LeaderboardUIScene", 0xE0, "ObjectProperty"},
            {"bLeaderboardUIEnabled", 0xE8, "BoolProperty"},
            {"OpenLeaderboardDisplayText", 0xF0, "TextProperty"},
        }};
    };

    struct SpecialEventMeshLeaderboardEntryVM
    {
        static constexpr std::string_view Name = "SpecialEventMeshLeaderboardEntryVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayerName = 0x78;
            static constexpr std::uintptr_t PlayerScore = 0x88;
            static constexpr std::uintptr_t PlayerPosition = 0x8C;
            static constexpr std::uintptr_t IsLocalPlayer = 0x90;
            static constexpr std::uintptr_t bIsEven = 0x91;
            static constexpr std::uintptr_t bIsOdd = 0x92;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"PlayerName", 0x78, "StrProperty"},
            {"PlayerScore", 0x88, "IntProperty"},
            {"PlayerPosition", 0x8C, "IntProperty"},
            {"IsLocalPlayer", 0x90, "BoolProperty"},
            {"bIsEven", 0x91, "BoolProperty"},
            {"bIsOdd", 0x92, "BoolProperty"},
        }};
    };

    struct SpecialEventMeshLeaderboardInstanceVM
    {
        static constexpr std::string_view Name = "SpecialEventMeshLeaderboardInstanceVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t EntryVMs = 0x78;
            static constexpr std::uintptr_t LeaderboardEnabled = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"EntryVMs", 0x78, "ArrayProperty"},
            {"LeaderboardEnabled", 0x88, "BoolProperty"},
        }};
    };

    struct SpecialEventMeshLeaderboardVM
    {
        static constexpr std::string_view Name = "SpecialEventMeshLeaderboardVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t LocalPlayerScore = 0x78;
            static constexpr std::uintptr_t bIsMeshLeaderboardFeatureEnabled = 0x7C;
            static constexpr std::uintptr_t GlobalLeaderboard = 0x88;
            static constexpr std::uintptr_t LocalLeaderboard = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"LocalPlayerScore", 0x78, "IntProperty"},
            {"bIsMeshLeaderboardFeatureEnabled", 0x7C, "BoolProperty"},
            {"GlobalLeaderboard", 0x88, "ObjectProperty"},
            {"LocalLeaderboard", 0x90, "ObjectProperty"},
        }};
    };

    struct SpecialEventPlayerInfoWidget
    {
        static constexpr std::string_view Name = "SpecialEventPlayerInfoWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortHUDElementWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t OnRepresentedPlayerStateChanged = 0x378;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OnRepresentedPlayerStateChanged", 0x378, "MulticastInlineDelegateProperty"},
        }};
    };

    struct SpecialEventUILibrary
    {
        static constexpr std::string_view Name = "SpecialEventUILibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}

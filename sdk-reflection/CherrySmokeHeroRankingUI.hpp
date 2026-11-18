#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::CherrySmokeHeroRankingUI
{
    struct CherrySmokeHeroRankingPlayerInfoWidget
    {
        static constexpr std::string_view Name = "CherrySmokeHeroRankingPlayerInfoWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortHUDElementWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t HLTDependentWidgetTag = 0x338;
            static constexpr std::uintptr_t ElementTag = 0x33C;
            static constexpr std::uintptr_t HUDElementTag = 0x340;
            static constexpr std::uintptr_t HiddenVisibility = 0x360;
            static constexpr std::uintptr_t TutorialHighlight = 0x368;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"HLTDependentWidgetTag", 0x338, "StructProperty"},
            {"ElementTag", 0x33C, "StructProperty"},
            {"HUDElementTag", 0x340, "StructProperty"},
            {"HiddenVisibility", 0x360, "EnumProperty"},
            {"TutorialHighlight", 0x368, "ObjectProperty"},
        }};
    };

    struct CherrySmokeHeroRankingVM
    {
        static constexpr std::string_view Name = "CherrySmokeHeroRankingVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsNewPlayerState = 0x80;
            static constexpr std::uintptr_t bIsValidPlayerState = 0x81;
            static constexpr std::uintptr_t CurrentRankTag = 0x84;
            static constexpr std::uintptr_t CurrentTotalHeroPoints = 0x88;
            static constexpr std::uintptr_t CurrentHeroPointsMax = 0x8C;
            static constexpr std::uintptr_t CurrentRankPercentage = 0x90;
            static constexpr std::uintptr_t RecentPointsEarnedData = 0x94;
            static constexpr std::uintptr_t CurrentMultiplierData = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"bIsNewPlayerState", 0x80, "BoolProperty"},
            {"bIsValidPlayerState", 0x81, "BoolProperty"},
            {"CurrentRankTag", 0x84, "StructProperty"},
            {"CurrentTotalHeroPoints", 0x88, "FloatProperty"},
            {"CurrentHeroPointsMax", 0x8C, "FloatProperty"},
            {"CurrentRankPercentage", 0x90, "FloatProperty"},
            {"RecentPointsEarnedData", 0x94, "StructProperty"},
            {"CurrentMultiplierData", 0xA0, "StructProperty"},
        }};
    };

    struct CherrySmokeLastKillerHeroRankingInfo
    {
        static constexpr std::string_view Name = "CherrySmokeLastKillerHeroRankingInfo";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t ColorAndOpacity = 0x1A0;
            static constexpr std::uintptr_t ColorAndOpacityDelegate = 0x1B0;
            static constexpr std::uintptr_t ForegroundColor = 0x1BC;
            static constexpr std::uintptr_t ForegroundColorDelegate = 0x1D0;
            static constexpr std::uintptr_t OnVisibilityChanged = 0x1E0;
            static constexpr std::uintptr_t Padding = 0x220;
            static constexpr std::uintptr_t Priority = 0x230;
            static constexpr std::uintptr_t bAutomaticallyRegisterInputOnConstruction = 0x234;
            static constexpr std::uintptr_t bIsFocusable = 0x234;
            static constexpr std::uintptr_t bStopAction = 0x234;
            static constexpr std::uintptr_t QueuedWidgetAnimationTransitions = 0x238;
            static constexpr std::uintptr_t ActiveSequencePlayers = 0x248;
            static constexpr std::uintptr_t AnimationTickManager = 0x258;
            static constexpr std::uintptr_t StoppedSequencePlayers = 0x260;
            static constexpr std::uintptr_t NamedSlotBindings = 0x288;
            static constexpr std::uintptr_t Extensions = 0x298;
            static constexpr std::uintptr_t WidgetTree = 0x2A8;
            static constexpr std::uintptr_t bHasScriptImplementedPaint = 0x2B0;
            static constexpr std::uintptr_t bHasScriptImplementedTick = 0x2B0;
            static constexpr std::uintptr_t TickFrequency = 0x2C8;
            static constexpr std::uintptr_t DesiredFocusWidget = 0x2CC;
            static constexpr std::uintptr_t InputComponent = 0x2D8;
            static constexpr std::uintptr_t AnimationCallbacks = 0x2E0;
        };

        inline static constexpr std::array<PropertyInfo, 23> Properties{{
            {"ColorAndOpacity", 0x1A0, "StructProperty"},
            {"ColorAndOpacityDelegate", 0x1B0, "DelegateProperty"},
            {"ForegroundColor", 0x1BC, "StructProperty"},
            {"ForegroundColorDelegate", 0x1D0, "DelegateProperty"},
            {"OnVisibilityChanged", 0x1E0, "MulticastInlineDelegateProperty"},
            {"Padding", 0x220, "StructProperty"},
            {"Priority", 0x230, "IntProperty"},
            {"bAutomaticallyRegisterInputOnConstruction", 0x234, "BoolProperty"},
            {"bIsFocusable", 0x234, "BoolProperty"},
            {"bStopAction", 0x234, "BoolProperty"},
            {"QueuedWidgetAnimationTransitions", 0x238, "ArrayProperty"},
            {"ActiveSequencePlayers", 0x248, "ArrayProperty"},
            {"AnimationTickManager", 0x258, "ObjectProperty"},
            {"StoppedSequencePlayers", 0x260, "ArrayProperty"},
            {"NamedSlotBindings", 0x288, "ArrayProperty"},
            {"Extensions", 0x298, "ArrayProperty"},
            {"WidgetTree", 0x2A8, "ObjectProperty"},
            {"bHasScriptImplementedPaint", 0x2B0, "BoolProperty"},
            {"bHasScriptImplementedTick", 0x2B0, "BoolProperty"},
            {"TickFrequency", 0x2C8, "EnumProperty"},
            {"DesiredFocusWidget", 0x2CC, "StructProperty"},
            {"InputComponent", 0x2D8, "ObjectProperty"},
            {"AnimationCallbacks", 0x2E0, "ArrayProperty"},
        }};
    };

    struct CherrySmokeViewerHeroRankingVM
    {
        static constexpr std::string_view Name = "CherrySmokeViewerHeroRankingVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CherrySmokeHeroRankingVM";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsNewPlayerState = 0x80;
            static constexpr std::uintptr_t bIsValidPlayerState = 0x81;
            static constexpr std::uintptr_t CurrentRankTag = 0x84;
            static constexpr std::uintptr_t CurrentTotalHeroPoints = 0x88;
            static constexpr std::uintptr_t CurrentHeroPointsMax = 0x8C;
            static constexpr std::uintptr_t CurrentRankPercentage = 0x90;
            static constexpr std::uintptr_t RecentPointsEarnedData = 0x94;
            static constexpr std::uintptr_t CurrentMultiplierData = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"bIsNewPlayerState", 0x80, "BoolProperty"},
            {"bIsValidPlayerState", 0x81, "BoolProperty"},
            {"CurrentRankTag", 0x84, "StructProperty"},
            {"CurrentTotalHeroPoints", 0x88, "FloatProperty"},
            {"CurrentHeroPointsMax", 0x8C, "FloatProperty"},
            {"CurrentRankPercentage", 0x90, "FloatProperty"},
            {"RecentPointsEarnedData", 0x94, "StructProperty"},
            {"CurrentMultiplierData", 0xA0, "StructProperty"},
        }};
    };

}

#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::BlastBerryUIRuntime
{
    struct BlastBerryDeathLocationIndicator
    {
        static constexpr std::string_view Name = "BlastBerryDeathLocationIndicator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AthenaEliminationIndicator";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsAiming = 0x4E1;
            static constexpr std::uintptr_t bIsAnchored = 0x4E2;
            static constexpr std::uintptr_t MarkerData = 0x508;
            static constexpr std::uintptr_t MarkerDisplay = 0x5E8;
            static constexpr std::uintptr_t DetailsTable = 0x698;
            static constexpr std::uintptr_t FreshLargeItemShowTime = 0x6A0;
            static constexpr std::uintptr_t IndicatorDotSizeThreshold = 0x6A4;
            static constexpr std::uintptr_t MarkerConfirmationSound = 0x6A8;
            static constexpr std::uintptr_t bIsBelowLookThreshold = 0x6B0;
            static constexpr std::uintptr_t MinimumDistanceDeltaToFireOnDistanceUpdated = 0x6B4;
            static constexpr std::uintptr_t Switcher_IndicatorSize = 0x6B8;
            static constexpr std::uintptr_t Panel_SmallIndicator = 0x6C0;
            static constexpr std::uintptr_t Panel_LargeIndicator = 0x6C8;
            static constexpr std::uintptr_t Text_Distance = 0x6D0;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"bIsAiming", 0x4E1, "BoolProperty"},
            {"bIsAnchored", 0x4E2, "BoolProperty"},
            {"MarkerData", 0x508, "StructProperty"},
            {"MarkerDisplay", 0x5E8, "StructProperty"},
            {"DetailsTable", 0x698, "ObjectProperty"},
            {"FreshLargeItemShowTime", 0x6A0, "FloatProperty"},
            {"IndicatorDotSizeThreshold", 0x6A4, "FloatProperty"},
            {"MarkerConfirmationSound", 0x6A8, "ObjectProperty"},
            {"bIsBelowLookThreshold", 0x6B0, "BoolProperty"},
            {"MinimumDistanceDeltaToFireOnDistanceUpdated", 0x6B4, "FloatProperty"},
            {"Switcher_IndicatorSize", 0x6B8, "ObjectProperty"},
            {"Panel_SmallIndicator", 0x6C0, "ObjectProperty"},
            {"Panel_LargeIndicator", 0x6C8, "ObjectProperty"},
            {"Text_Distance", 0x6D0, "ObjectProperty"},
        }};
    };

    struct BlastBerryInstantRebootWidget
    {
        static constexpr std::string_view Name = "BlastBerryInstantRebootWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortHUDElementWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t HoldDuration = 0x370;
            static constexpr std::uintptr_t InvulnerabilityRespawnDisplayDelay = 0x374;
            static constexpr std::uintptr_t InvulnerabilityGameplayTag = 0x378;
            static constexpr std::uintptr_t KeyBindWidget = 0x380;
            static constexpr std::uintptr_t BlastBerryInstantRebootInputComponent = 0x3B0;
            static constexpr std::uintptr_t OwnerASC = 0x3BC;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"HoldDuration", 0x370, "FloatProperty"},
            {"InvulnerabilityRespawnDisplayDelay", 0x374, "FloatProperty"},
            {"InvulnerabilityGameplayTag", 0x378, "StructProperty"},
            {"KeyBindWidget", 0x380, "ObjectProperty"},
            {"BlastBerryInstantRebootInputComponent", 0x3B0, "ObjectProperty"},
            {"OwnerASC", 0x3BC, "WeakObjectProperty"},
        }};
    };

    struct BlastBerryIntroSplashSettings
    {
        static constexpr std::string_view Name = "BlastBerryIntroSplashSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t UpdateSnippetTitle = 0x28;
            static constexpr std::uintptr_t UpdateSnippetLine1 = 0x38;
            static constexpr std::uintptr_t UpdateSnippetLine2 = 0x48;
            static constexpr std::uintptr_t UpdateSnippetLine3 = 0x58;
            static constexpr std::uintptr_t UpdateSnippetImageUrl = 0x68;
            static constexpr std::uintptr_t UpdateSnippetImageUrlsByLocale = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"UpdateSnippetTitle", 0x28, "TextProperty"},
            {"UpdateSnippetLine1", 0x38, "TextProperty"},
            {"UpdateSnippetLine2", 0x48, "TextProperty"},
            {"UpdateSnippetLine3", 0x58, "TextProperty"},
            {"UpdateSnippetImageUrl", 0x68, "StrProperty"},
            {"UpdateSnippetImageUrlsByLocale", 0x78, "StrProperty"},
        }};
    };

    struct BlastBerryIntroSplashWidget
    {
        static constexpr std::string_view Name = "BlastBerryIntroSplashWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortHUDElementWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t HeaderTitleOverlay = 0x370;
            static constexpr std::uintptr_t SizeBox_UpdateSnippetHero = 0x378;
            static constexpr std::uintptr_t UpdateSnippetHeroImage = 0x380;
            static constexpr std::uintptr_t RichText_TitleB = 0x388;
            static constexpr std::uintptr_t Border_Line01 = 0x390;
            static constexpr std::uintptr_t Border_Line02 = 0x398;
            static constexpr std::uintptr_t Border_Line03 = 0x3A0;
            static constexpr std::uintptr_t RichTextBlock_Description = 0x3A8;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"HeaderTitleOverlay", 0x370, "ObjectProperty"},
            {"SizeBox_UpdateSnippetHero", 0x378, "ObjectProperty"},
            {"UpdateSnippetHeroImage", 0x380, "ObjectProperty"},
            {"RichText_TitleB", 0x388, "ObjectProperty"},
            {"Border_Line01", 0x390, "ObjectProperty"},
            {"Border_Line02", 0x398, "ObjectProperty"},
            {"Border_Line03", 0x3A0, "ObjectProperty"},
            {"RichTextBlock_Description", 0x3A8, "ObjectProperty"},
        }};
    };

    struct BlastBerryPlayerInfoRespawn
    {
        static constexpr std::string_view Name = "BlastBerryPlayerInfoRespawn";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortHUDElementWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t WeakPlayerStateAthena_RepresentedPlayer = 0x378;
            static constexpr std::uintptr_t Text_Time = 0x380;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"WeakPlayerStateAthena_RepresentedPlayer", 0x378, "WeakObjectProperty"},
            {"Text_Time", 0x380, "ObjectProperty"},
        }};
    };

    struct FortMobileActionButtonBehaviorExtension_Reboot
    {
        static constexpr std::string_view Name = "FortMobileActionButtonBehaviorExtension_Reboot";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMobileActionButtonBehaviorExtension";
        struct Offsets
        {
            static constexpr std::uintptr_t ActionNames = 0x70;
            static constexpr std::uintptr_t ButtonBehaviorComponentsCached = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ActionNames", 0x70, "ArrayProperty"},
            {"ButtonBehaviorComponentsCached", 0x80, "ArrayProperty"},
        }};
    };

    struct ReloadDuelRewardVM
    {
        static constexpr std::string_view Name = "ReloadDuelRewardVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t AssignedReward = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AssignedReward", 0x78, "ObjectProperty"},
        }};
    };

    struct ReloadDynamicUIDirector
    {
        static constexpr std::string_view Name = "ReloadDynamicUIDirector";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DynamicUIDirectorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t PrefetchedUpdateSnippetImage = 0x2A8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PrefetchedUpdateSnippetImage", 0x2A8, "ObjectProperty"},
        }};
    };

    struct ReloadRespawnVM
    {
        static constexpr std::string_view Name = "ReloadRespawnVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ReloadTeamLivesVM
    {
        static constexpr std::string_view Name = "ReloadTeamLivesVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t OnRespawnRewardReceived = 0x78;
            static constexpr std::uintptr_t bLastRespawn = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OnRespawnRewardReceived", 0x78, "MulticastInlineDelegateProperty"},
            {"bLastRespawn", 0x88, "BoolProperty"},
        }};
    };

}

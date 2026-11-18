#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::XpEverywhereUI
{
    struct XpBoosterListVM
    {
        static constexpr std::string_view Name = "XpBoosterListVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t XpBoosters = 0x78;
            static constexpr std::uintptr_t TotalBonusMultiplier = 0x88;
            static constexpr std::uintptr_t bSuperchargeActive = 0x8C;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"XpBoosters", 0x78, "ArrayProperty"},
            {"TotalBonusMultiplier", 0x88, "FloatProperty"},
            {"bSuperchargeActive", 0x8C, "BoolProperty"},
        }};
    };

    struct XpBoosterVM
    {
        static constexpr std::string_view Name = "XpBoosterVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ItemID = 0x68;
            static constexpr std::uintptr_t DisplayName = 0x78;
            static constexpr std::uintptr_t XpBonusMultiplier = 0x88;
            static constexpr std::uintptr_t ExpireDateTime = 0x90;
            static constexpr std::uintptr_t Definition = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"ItemID", 0x68, "StrProperty"},
            {"DisplayName", 0x78, "TextProperty"},
            {"XpBonusMultiplier", 0x88, "FloatProperty"},
            {"ExpireDateTime", 0x90, "StructProperty"},
            {"Definition", 0x98, "ObjectProperty"},
        }};
    };

    struct XpEverywhereAccoladesWidget
    {
        static constexpr std::string_view Name = "XpEverywhereAccoladesWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortHUDElementWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t PrioritizationData = 0x3E0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PrioritizationData", 0x3E0, "StructProperty"},
        }};
    };

    struct XpEverywhereBar
    {
        static constexpr std::string_view Name = "XpEverywhereBar";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t bXpBarAlwaysActive = 0x370;
            static constexpr std::uintptr_t bIsXpBarManuallyUpdated = 0x371;
            static constexpr std::uintptr_t SocialAvatarIcon = 0x378;
            static constexpr std::uintptr_t PrioritizationData = 0x380;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bXpBarAlwaysActive", 0x370, "BoolProperty"},
            {"bIsXpBarManuallyUpdated", 0x371, "BoolProperty"},
            {"SocialAvatarIcon", 0x378, "ObjectProperty"},
            {"PrioritizationData", 0x380, "StructProperty"},
        }};
    };

    struct XpEverywhereLevelUpWidget
    {
        static constexpr std::string_view Name = "XpEverywhereLevelUpWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t PrioritizationData = 0x370;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PrioritizationData", 0x370, "StructProperty"},
        }};
    };

    struct XpEverywhereReticleWidget
    {
        static constexpr std::string_view Name = "XpEverywhereReticleWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortHUDElementWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t QueuedEvents = 0x370;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"QueuedEvents", 0x370, "ArrayProperty"},
        }};
    };

    struct XpEverywhereRewardWidget
    {
        static constexpr std::string_view Name = "XpEverywhereRewardWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortHUDElementWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultEntryClass = 0x3B8;
            static constexpr std::uintptr_t bHasPrioritizedWidgetFocus = 0x3C0;
            static constexpr std::uintptr_t ActiveWidget = 0x3C8;
            static constexpr std::uintptr_t WidgetQueue = 0x3D0;
            static constexpr std::uintptr_t NotificationUpdatesBox = 0x3E0;
            static constexpr std::uintptr_t NotificationClassPoolData = 0x3E8;
            static constexpr std::uintptr_t PrioritizationData = 0x3F8;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"DefaultEntryClass", 0x3B8, "ClassProperty"},
            {"bHasPrioritizedWidgetFocus", 0x3C0, "BoolProperty"},
            {"ActiveWidget", 0x3C8, "ObjectProperty"},
            {"WidgetQueue", 0x3D0, "ArrayProperty"},
            {"NotificationUpdatesBox", 0x3E0, "ObjectProperty"},
            {"NotificationClassPoolData", 0x3E8, "ArrayProperty"},
            {"PrioritizationData", 0x3F8, "StructProperty"},
        }};
    };

    struct XpEverywhereUIComponent
    {
        static constexpr std::string_view Name = "XpEverywhereUIComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t XpEverywhereHiddenElementTags = 0x180;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"XpEverywhereHiddenElementTags", 0x180, "StructProperty"},
        }};
    };

}

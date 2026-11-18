#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SeasonPassData
{
    struct SeasonPassCategoryDataBase
    {
        static constexpr std::string_view Name = "SeasonPassCategoryDataBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimaryDataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t Pages = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Pages", 0x28, "ArrayProperty"},
        }};
    };

    struct SeasonPassCommonDataBase
    {
        static constexpr std::string_view Name = "SeasonPassCommonDataBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimaryDataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t CurrencyDefinition = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CurrencyDefinition", 0x28, "SoftObjectProperty"},
        }};
    };

    struct SeasonPassDataBase
    {
        static constexpr std::string_view Name = "SeasonPassDataBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimaryDataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t Product = 0x28;
            static constexpr std::uintptr_t SeasonStorefront = 0x30;
            static constexpr std::uintptr_t SeasonPassOfferId = 0x40;
            static constexpr std::uintptr_t SeasonPassBundleOfferId = 0x50;
            static constexpr std::uintptr_t SeasonPassLevelOfferId = 0x60;
            static constexpr std::uintptr_t SeasonPassLevelBundleOfferId = 0x70;
            static constexpr std::uintptr_t RefundAmountForGiftToken = 0x80;
            static constexpr std::uintptr_t bLegacyPass = 0x84;
            static constexpr std::uintptr_t PremiumTrackPurchasedToken = 0x88;
            static constexpr std::uintptr_t PaidRewards = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"Product", 0x28, "StructProperty"},
            {"SeasonStorefront", 0x30, "StrProperty"},
            {"SeasonPassOfferId", 0x40, "StrProperty"},
            {"SeasonPassBundleOfferId", 0x50, "StrProperty"},
            {"SeasonPassLevelOfferId", 0x60, "StrProperty"},
            {"SeasonPassLevelBundleOfferId", 0x70, "StrProperty"},
            {"RefundAmountForGiftToken", 0x80, "IntProperty"},
            {"bLegacyPass", 0x84, "BoolProperty"},
            {"PremiumTrackPurchasedToken", 0x88, "ObjectProperty"},
            {"PaidRewards", 0x90, "ArrayProperty"},
        }};
    };

    struct SeasonPassDeveloperSettings
    {
        static constexpr std::string_view Name = "SeasonPassDeveloperSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeveloperSettings";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SeasonPassItemDefinition
    {
        static constexpr std::string_view Name = "SeasonPassItemDefinition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortSeasonItemDefinition";
        struct Offsets
        {
            static constexpr std::uintptr_t CommonData = 0x138;
            static constexpr std::uintptr_t PassData = 0x158;
            static constexpr std::uintptr_t LevelData = 0x178;
            static constexpr std::uintptr_t Categories = 0x198;
            static constexpr std::uintptr_t CategoryLinkBehavior = 0x1A8;
            static constexpr std::uintptr_t PRMPassId = 0x1B0;
            static constexpr std::uintptr_t SeasonPassOfferItemRewardsMap = 0x1C0;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"CommonData", 0x138, "SoftObjectProperty"},
            {"PassData", 0x158, "SoftObjectProperty"},
            {"LevelData", 0x178, "SoftObjectProperty"},
            {"Categories", 0x198, "ArrayProperty"},
            {"CategoryLinkBehavior", 0x1A8, "EnumProperty"},
            {"PRMPassId", 0x1B0, "StrProperty"},
            {"SeasonPassOfferItemRewardsMap", 0x1C0, "MapProperty"},
        }};
    };

    struct SeasonPassLevelData
    {
        static constexpr std::string_view Name = "SeasonPassLevelData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimaryDataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t CurrencyPerLevel = 0x28;
            static constexpr std::uintptr_t LevelPurchaseType = 0x2C;
            static constexpr std::uintptr_t SeasonLevelPurchaseLimit = 0x30;
            static constexpr std::uintptr_t SeasonLevelPurchaseBundleLimit = 0x34;
            static constexpr std::uintptr_t LevelDataDynamicConfigs = 0x38;
            static constexpr std::uintptr_t CachedSortedSeasonLevelRewards = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"CurrencyPerLevel", 0x28, "IntProperty"},
            {"LevelPurchaseType", 0x2C, "EnumProperty"},
            {"SeasonLevelPurchaseLimit", 0x30, "IntProperty"},
            {"SeasonLevelPurchaseBundleLimit", 0x34, "IntProperty"},
            {"LevelDataDynamicConfigs", 0x38, "MapProperty"},
            {"CachedSortedSeasonLevelRewards", 0x48, "ArrayProperty"},
        }};
    };

    struct SeasonPassNonOwnerUpsellData
    {
        static constexpr std::string_view Name = "SeasonPassNonOwnerUpsellData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimaryDataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t Characters = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Characters", 0x28, "ObjectProperty"},
        }};
    };

    struct SeasonPassPageData
    {
        static constexpr std::string_view Name = "SeasonPassPageData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimaryDataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t PageGrid = 0x28;
            static constexpr std::uintptr_t Extensions = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PageGrid", 0x28, "StructProperty"},
            {"Extensions", 0x110, "ArrayProperty"},
        }};
    };

    struct SeasonPassPageDataExtension
    {
        static constexpr std::string_view Name = "SeasonPassPageDataExtension";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t ElementTags = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ElementTags", 0x28, "StructProperty"},
        }};
    };

    struct SeasonPassPagePropertyHotfixHandler
    {
        static constexpr std::string_view Name = "SeasonPassPagePropertyHotfixHandler";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PropertyHotfixHandler";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}

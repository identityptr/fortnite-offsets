#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::DelilahTreasureHuntSharedRuntime
{
    struct DelilahPrizeItemDefinition
    {
        static constexpr std::string_view Name = "DelilahPrizeItemDefinition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAccountItemDefinition";
        struct Offsets
        {
            static constexpr std::uintptr_t PrizeRow = 0x128;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PrizeRow", 0x128, "StructProperty"},
        }};
    };

    struct DelilahTreasureHuntCloverControllerBase
    {
        static constexpr std::string_view Name = "DelilahTreasureHuntCloverControllerBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelilahTreasureHuntControllerBase";
        struct Offsets
        {
            static constexpr std::uintptr_t OnPoolsReady = 0xC0;
            static constexpr std::uintptr_t OnPrizeCatalogChanged = 0xD0;
            static constexpr std::uintptr_t CachedPrizePools = 0xE0;
            static constexpr std::uintptr_t LocalPrizesDataTable = 0xF0;
            static constexpr std::uintptr_t PendingPoolInitializations = 0x110;
            static constexpr std::uintptr_t LoadedPrizesDataTable = 0x120;
            static constexpr std::uintptr_t PrizeIdTableRemap = 0x128;
            static constexpr std::uintptr_t PendingPrizeIdRequests = 0x138;
            static constexpr std::uintptr_t bIsLoadingCatalog = 0x148;
            static constexpr std::uintptr_t bIsCatalogInitialized = 0x149;
            static constexpr std::uintptr_t bIsEndingPlay = 0x14A;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"OnPoolsReady", 0xC0, "MulticastInlineDelegateProperty"},
            {"OnPrizeCatalogChanged", 0xD0, "MulticastInlineDelegateProperty"},
            {"CachedPrizePools", 0xE0, "ArrayProperty"},
            {"LocalPrizesDataTable", 0xF0, "SoftObjectProperty"},
            {"PendingPoolInitializations", 0x110, "ArrayProperty"},
            {"LoadedPrizesDataTable", 0x120, "ObjectProperty"},
            {"PrizeIdTableRemap", 0x128, "MapProperty"},
            {"PendingPrizeIdRequests", 0x138, "ArrayProperty"},
            {"bIsLoadingCatalog", 0x148, "BoolProperty"},
            {"bIsCatalogInitialized", 0x149, "BoolProperty"},
            {"bIsEndingPlay", 0x14A, "BoolProperty"},
        }};
    };

    struct DelilahTreasureHuntCloverRewardGrant
    {
        static constexpr std::string_view Name = "DelilahTreasureHuntCloverRewardGrant";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelilahTreasureHuntPrizeGranter";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DelilahTreasureHuntControllerBase
    {
        static constexpr std::string_view Name = "DelilahTreasureHuntControllerBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnPoolsReady = 0xC0;
            static constexpr std::uintptr_t OnPrizeCatalogChanged = 0xD0;
            static constexpr std::uintptr_t CachedPrizePools = 0xE0;
            static constexpr std::uintptr_t LocalPrizesDataTable = 0xF0;
            static constexpr std::uintptr_t PendingPoolInitializations = 0x110;
            static constexpr std::uintptr_t LoadedPrizesDataTable = 0x120;
            static constexpr std::uintptr_t PrizeIdTableRemap = 0x128;
            static constexpr std::uintptr_t PendingPrizeIdRequests = 0x138;
            static constexpr std::uintptr_t bIsLoadingCatalog = 0x148;
            static constexpr std::uintptr_t bIsCatalogInitialized = 0x149;
            static constexpr std::uintptr_t bIsEndingPlay = 0x14A;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"OnPoolsReady", 0xC0, "MulticastInlineDelegateProperty"},
            {"OnPrizeCatalogChanged", 0xD0, "MulticastInlineDelegateProperty"},
            {"CachedPrizePools", 0xE0, "ArrayProperty"},
            {"LocalPrizesDataTable", 0xF0, "SoftObjectProperty"},
            {"PendingPoolInitializations", 0x110, "ArrayProperty"},
            {"LoadedPrizesDataTable", 0x120, "ObjectProperty"},
            {"PrizeIdTableRemap", 0x128, "MapProperty"},
            {"PendingPrizeIdRequests", 0x138, "ArrayProperty"},
            {"bIsLoadingCatalog", 0x148, "BoolProperty"},
            {"bIsCatalogInitialized", 0x149, "BoolProperty"},
            {"bIsEndingPlay", 0x14A, "BoolProperty"},
        }};
    };

    struct DelilahTreasureHuntIconCookList
    {
        static constexpr std::string_view Name = "DelilahTreasureHuntIconCookList";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimaryDataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t Icons = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Icons", 0x28, "ArrayProperty"},
        }};
    };

    struct DelilahTreasureHuntInGameItemGranter
    {
        static constexpr std::string_view Name = "DelilahTreasureHuntInGameItemGranter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelilahTreasureHuntPrizeGranter";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DelilahTreasureHuntMagpieRewardConfig
    {
        static constexpr std::string_view Name = "DelilahTreasureHuntMagpieRewardConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t PrizeEntitlements = 0x28;
            static constexpr std::uintptr_t RankedPlaylistTags = 0x38;
            static constexpr std::uintptr_t RankedSuppressedPrizeIds = 0x48;
            static constexpr std::uintptr_t RankedDisabledPrizeIds = 0x58;
            static constexpr std::uintptr_t ModuleId = 0x68;
            static constexpr std::uintptr_t ModuleVersion = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"PrizeEntitlements", 0x28, "ArrayProperty"},
            {"RankedPlaylistTags", 0x38, "ArrayProperty"},
            {"RankedSuppressedPrizeIds", 0x48, "ArrayProperty"},
            {"RankedDisabledPrizeIds", 0x58, "ArrayProperty"},
            {"ModuleId", 0x68, "StrProperty"},
            {"ModuleVersion", 0x78, "IntProperty"},
        }};
    };

    struct DelilahTreasureHuntPrizeContext
    {
        static constexpr std::string_view Name = "DelilahTreasureHuntPrizeContext";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t PrizeId = 0x28;
            static constexpr std::uintptr_t Container = 0x30;
            static constexpr std::uintptr_t ContainerLocation = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"PrizeId", 0x28, "NameProperty"},
            {"Container", 0x30, "SoftObjectProperty"},
            {"ContainerLocation", 0x50, "StructProperty"},
        }};
    };

    struct DelilahTreasureHuntPrizeGranter
    {
        static constexpr std::string_view Name = "DelilahTreasureHuntPrizeGranter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DelilahTreasureHunt_MagpieModuleProvider
    {
        static constexpr std::string_view Name = "DelilahTreasureHunt_MagpieModuleProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}

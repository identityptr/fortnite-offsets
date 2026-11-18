#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::DelilahTreasureHuntFrontendUI
{
    struct DelilahPowerHourVM
    {
        static constexpr std::string_view Name = "DelilahPowerHourVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Prizes = 0x68;
            static constexpr std::uintptr_t WeekRow = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Prizes", 0x68, "ArrayProperty"},
            {"WeekRow", 0x78, "StructProperty"},
        }};
    };

    struct DelilahTreasureHuntCloverController_Frontend
    {
        static constexpr std::string_view Name = "DelilahTreasureHuntCloverController_Frontend";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelilahTreasureHuntCloverControllerBase";
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

    struct DelilahTreasureHuntVM
    {
        static constexpr std::string_view Name = "DelilahTreasureHuntVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t WeeksDataTable = 0x80;
            static constexpr std::uintptr_t Weeks = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"WeeksDataTable", 0x80, "SoftObjectProperty"},
            {"Weeks", 0xA0, "ArrayProperty"},
        }};
    };

    struct DelilahTreasurePrizeVM
    {
        static constexpr std::string_view Name = "DelilahTreasurePrizeVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t PrizeRow = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PrizeRow", 0x68, "StructProperty"},
        }};
    };

    struct DelilahTreasureWeekVM
    {
        static constexpr std::string_view Name = "DelilahTreasureWeekVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t WeekRow = 0x68;
            static constexpr std::uintptr_t Prizes = 0x78;
            static constexpr std::uintptr_t PowerHour = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"WeekRow", 0x68, "StructProperty"},
            {"Prizes", 0x78, "ArrayProperty"},
            {"PowerHour", 0x88, "ObjectProperty"},
        }};
    };

}

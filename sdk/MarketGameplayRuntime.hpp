#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::MarketGameplayRuntime
{
    struct AthenaMarketItemVM
    {
        static constexpr std::string_view Name = "AthenaMarketItemVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t CurrentStock = 0x68;
            static constexpr std::uintptr_t bIsOutOfStock = 0x6C;
            static constexpr std::uintptr_t bIsLimitReached = 0x6D;
            static constexpr std::uintptr_t ItemDefinition = 0x70;
            static constexpr std::uintptr_t CostData = 0x78;
            static constexpr std::uintptr_t bCanPlayerAfford = 0x88;
            static constexpr std::uintptr_t bIsPlayerAllowedToBuy = 0x89;
            static constexpr std::uintptr_t ItemDefinitionChangedReason = 0x8A;
            static constexpr std::uintptr_t DisplayIcon = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"CurrentStock", 0x68, "IntProperty"},
            {"bIsOutOfStock", 0x6C, "BoolProperty"},
            {"bIsLimitReached", 0x6D, "BoolProperty"},
            {"ItemDefinition", 0x70, "ObjectProperty"},
            {"CostData", 0x78, "StructProperty"},
            {"bCanPlayerAfford", 0x88, "BoolProperty"},
            {"bIsPlayerAllowedToBuy", 0x89, "BoolProperty"},
            {"ItemDefinitionChangedReason", 0x8A, "EnumProperty"},
            {"DisplayIcon", 0x90, "SoftObjectProperty"},
        }};
    };

    struct BuildingGameplayActorMarketItem
    {
        static constexpr std::string_view Name = "BuildingGameplayActorMarketItem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BuildingGameplayActor";
        struct Offsets
        {
            static constexpr std::uintptr_t bAutoSelectPurchaseData = 0x940;
            static constexpr std::uintptr_t MarketGroupTag = 0x944;
            static constexpr std::uintptr_t PurchaseGroupName = 0x948;
            static constexpr std::uintptr_t GSC_MarketGameplayClass = 0x950;
            static constexpr std::uintptr_t PurchaseData = 0x960;
            static constexpr std::uintptr_t OnPurchaseDataReady = 0xA80;
            static constexpr std::uintptr_t OnSelectPurchaseDataFailed = 0xA90;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"bAutoSelectPurchaseData", 0x940, "BoolProperty"},
            {"MarketGroupTag", 0x944, "StructProperty"},
            {"PurchaseGroupName", 0x948, "NameProperty"},
            {"GSC_MarketGameplayClass", 0x950, "ClassProperty"},
            {"PurchaseData", 0x960, "StructProperty"},
            {"OnPurchaseDataReady", 0xA80, "MulticastInlineDelegateProperty"},
            {"OnSelectPurchaseDataFailed", 0xA90, "MulticastInlineDelegateProperty"},
        }};
    };

    struct FortGameStateComponent_MarketGameplay
    {
        static constexpr std::string_view Name = "FortGameStateComponent_MarketGameplay";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PurchaseGroupDataTable = 0xC0;
            static constexpr std::uintptr_t PurchaseListDataTable = 0xC8;
            static constexpr std::uintptr_t CashPricingTables = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"PurchaseGroupDataTable", 0xC0, "ObjectProperty"},
            {"PurchaseListDataTable", 0xC8, "ObjectProperty"},
            {"CashPricingTables", 0xD0, "ArrayProperty"},
        }};
    };

}

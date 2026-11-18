#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::AuroraFortniteUI
{
    struct AuroraFortniteTransitionableWidget
    {
        static constexpr std::string_view Name = "AuroraFortniteTransitionableWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsTransitioning = 0x310;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bIsTransitioning", 0x310, "BoolProperty"},
        }};
    };

    struct AuroraFortniteUIDirector
    {
        static constexpr std::string_view Name = "AuroraFortniteUIDirector";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DynamicUIDirectorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t AuroraShopVM = 0x2A8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AuroraShopVM", 0x2A8, "ObjectProperty"},
        }};
    };

    struct FortAuroraBundleOfferVM
    {
        static constexpr std::string_view Name = "FortAuroraBundleOfferVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAuroraOfferVM";
        struct Offsets
        {
            static constexpr std::uintptr_t Products = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Products", 0xF0, "ArrayProperty"},
        }};
    };

    struct FortAuroraOfferVM
    {
        static constexpr std::string_view Name = "FortAuroraOfferVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortBaseOfferVM";
        struct Offsets
        {
            static constexpr std::uintptr_t OfferId = 0x68;
            static constexpr std::uintptr_t Invoice = 0x78;
            static constexpr std::uintptr_t ShortDescription = 0x88;
            static constexpr std::uintptr_t Description = 0x98;
            static constexpr std::uintptr_t Icon = 0xA8;
            static constexpr std::uintptr_t OfferType = 0xC8;
            static constexpr std::uintptr_t OwnedState = 0xC9;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"OfferId", 0x68, "StructProperty"},
            {"Invoice", 0x78, "StructProperty"},
            {"ShortDescription", 0x88, "TextProperty"},
            {"Description", 0x98, "TextProperty"},
            {"Icon", 0xA8, "SoftObjectProperty"},
            {"OfferType", 0xC8, "EnumProperty"},
            {"OwnedState", 0xC9, "EnumProperty"},
        }};
    };

    struct FortAuroraProductOfferVM
    {
        static constexpr std::string_view Name = "FortAuroraProductOfferVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAuroraOfferVM";
        struct Offsets
        {
            static constexpr std::uintptr_t Product = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Product", 0xF0, "ObjectProperty"},
        }};
    };

    struct FortAuroraProductVM
    {
        static constexpr std::string_view Name = "FortAuroraProductVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ProductId = 0x68;
            static constexpr std::uintptr_t Name = 0x78;
            static constexpr std::uintptr_t ShortDescription = 0x88;
            static constexpr std::uintptr_t Description = 0x98;
            static constexpr std::uintptr_t Icon = 0xA8;
            static constexpr std::uintptr_t Count = 0xC8;
            static constexpr std::uintptr_t MaxCount = 0xD0;
            static constexpr std::uintptr_t OwnedCount = 0xD8;
            static constexpr std::uintptr_t OwnedState = 0xE0;
            static constexpr std::uintptr_t bConsumable = 0xE1;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"ProductId", 0x68, "StrProperty"},
            {"Name", 0x78, "TextProperty"},
            {"ShortDescription", 0x88, "TextProperty"},
            {"Description", 0x98, "TextProperty"},
            {"Icon", 0xA8, "SoftObjectProperty"},
            {"Count", 0xC8, "Int64Property"},
            {"MaxCount", 0xD0, "Int64Property"},
            {"OwnedCount", 0xD8, "Int64Property"},
            {"OwnedState", 0xE0, "EnumProperty"},
            {"bConsumable", 0xE1, "BoolProperty"},
        }};
    };

    struct FortAuroraShopVM
    {
        static constexpr std::string_view Name = "FortAuroraShopVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t CatalogId = 0x78;
            static constexpr std::uintptr_t CatalogOffers = 0x88;
            static constexpr std::uintptr_t CatalogTitle = 0x98;
            static constexpr std::uintptr_t InspectedOffer = 0xA8;
            static constexpr std::uintptr_t LastPurchasedOffer = 0xB0;
            static constexpr std::uintptr_t InspectionState = 0xB8;
            static constexpr std::uintptr_t PurchaseState = 0xB9;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"CatalogId", 0x78, "StructProperty"},
            {"CatalogOffers", 0x88, "ArrayProperty"},
            {"CatalogTitle", 0x98, "TextProperty"},
            {"InspectedOffer", 0xA8, "ObjectProperty"},
            {"LastPurchasedOffer", 0xB0, "ObjectProperty"},
            {"InspectionState", 0xB8, "EnumProperty"},
            {"PurchaseState", 0xB9, "EnumProperty"},
        }};
    };

}

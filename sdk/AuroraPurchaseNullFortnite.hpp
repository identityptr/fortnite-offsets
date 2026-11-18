#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::AuroraPurchaseNullFortnite
{
    struct AuroraPurchaseNullFortnite
    {
        static constexpr std::string_view Name = "AuroraPurchaseNullFortnite";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AuroraPurchaseNull";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxEntitlementMaxCount = 0xE0;
            static constexpr std::uintptr_t OfferMaxEntitlementQuantity = 0xE8;
            static constexpr std::uintptr_t MaxOfferMinAge = 0xF0;
            static constexpr std::uintptr_t MaxOfferDepth = 0xF8;
            static constexpr std::uintptr_t MaxOfferOffers = 0xFC;
            static constexpr std::uintptr_t MaxOfferEntitlements = 0x100;
            static constexpr std::uintptr_t OfferPriceMultiple = 0x104;
            static constexpr std::uintptr_t MinOfferPrice = 0x108;
            static constexpr std::uintptr_t MaxOfferPrice = 0x10C;
            static constexpr std::uintptr_t MinSubOfferPrice = 0x110;
            static constexpr std::uintptr_t MaxSubOfferPrice = 0x114;
            static constexpr std::uintptr_t MaxSubstitutionDepth = 0x118;
            static constexpr std::uintptr_t bAllowMessageInSubstitution = 0x11C;
            static constexpr std::uintptr_t NameMaxLength = 0x120;
            static constexpr std::uintptr_t NameMinLength = 0x124;
            static constexpr std::uintptr_t OfferDescriptionMaxLength = 0x12C;
            static constexpr std::uintptr_t DescriptionMinLength = 0x130;
            static constexpr std::uintptr_t ShortDescriptionMaxLength = 0x134;
            static constexpr std::uintptr_t ShortDescriptionMinLength = 0x138;
        };

        inline static constexpr std::array<PropertyInfo, 19> Properties{{
            {"MaxEntitlementMaxCount", 0xE0, "Int64Property"},
            {"OfferMaxEntitlementQuantity", 0xE8, "Int64Property"},
            {"MaxOfferMinAge", 0xF0, "Int64Property"},
            {"MaxOfferDepth", 0xF8, "IntProperty"},
            {"MaxOfferOffers", 0xFC, "IntProperty"},
            {"MaxOfferEntitlements", 0x100, "IntProperty"},
            {"OfferPriceMultiple", 0x104, "IntProperty"},
            {"MinOfferPrice", 0x108, "IntProperty"},
            {"MaxOfferPrice", 0x10C, "IntProperty"},
            {"MinSubOfferPrice", 0x110, "IntProperty"},
            {"MaxSubOfferPrice", 0x114, "IntProperty"},
            {"MaxSubstitutionDepth", 0x118, "IntProperty"},
            {"bAllowMessageInSubstitution", 0x11C, "BoolProperty"},
            {"NameMaxLength", 0x120, "IntProperty"},
            {"NameMinLength", 0x124, "IntProperty"},
            {"OfferDescriptionMaxLength", 0x12C, "IntProperty"},
            {"DescriptionMinLength", 0x130, "IntProperty"},
            {"ShortDescriptionMaxLength", 0x134, "IntProperty"},
            {"ShortDescriptionMinLength", 0x138, "IntProperty"},
        }};
    };

}

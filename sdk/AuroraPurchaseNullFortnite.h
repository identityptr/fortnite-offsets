/**
 * decamp dumper generated SDK
 * Package: /Script/AuroraPurchaseNullFortnite
 */
#pragma once
#include "Basic.h"

// /Script/AuroraPurchaseNullFortnite.AuroraPurchaseNullFortnite
// Kind: Class; super: AuroraPurchaseNull
class UAuroraPurchaseNullFortnite
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::int64_t MaxEntitlementMaxCount; // 0x00E0 (Size: 0x8, Type: Int64Property)
    std::int64_t OfferMaxEntitlementQuantity; // 0x00E8 (Size: 0x8, Type: Int64Property)
    std::int64_t MaxOfferMinAge; // 0x00F0 (Size: 0x8, Type: Int64Property)
    std::int32_t MaxOfferDepth; // 0x00F8 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxOfferOffers; // 0x00FC (Size: 0x4, Type: IntProperty)
    std::int32_t MaxOfferEntitlements; // 0x0100 (Size: 0x4, Type: IntProperty)
    std::int32_t OfferPriceMultiple; // 0x0104 (Size: 0x4, Type: IntProperty)
    std::int32_t MinOfferPrice; // 0x0108 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxOfferPrice; // 0x010C (Size: 0x4, Type: IntProperty)
    std::int32_t MinSubOfferPrice; // 0x0110 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxSubOfferPrice; // 0x0114 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxSubstitutionDepth; // 0x0118 (Size: 0x4, Type: IntProperty)
    std::uint8_t bAllowMessageInSubstitution; // 0x011C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x011D
    std::int32_t NameMaxLength; // 0x0120 (Size: 0x4, Type: IntProperty)
    std::int32_t NameMinLength; // 0x0124 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0128
    std::int32_t DescriptionMinLength; // 0x012C (Size: 0x4, Type: IntProperty)
    std::int32_t ShortDescriptionMaxLength; // 0x0130 (Size: 0x4, Type: IntProperty)
    std::int32_t ShortDescriptionMinLength; // 0x0134 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UAuroraPurchaseNullFortnite, MaxEntitlementMaxCount) == 224, "Offset mismatch for UAuroraPurchaseNullFortnite::MaxEntitlementMaxCount");
static_assert(offsetof(UAuroraPurchaseNullFortnite, OfferMaxEntitlementQuantity) == 232, "Offset mismatch for UAuroraPurchaseNullFortnite::OfferMaxEntitlementQuantity");
static_assert(offsetof(UAuroraPurchaseNullFortnite, MaxOfferMinAge) == 240, "Offset mismatch for UAuroraPurchaseNullFortnite::MaxOfferMinAge");
static_assert(offsetof(UAuroraPurchaseNullFortnite, MaxOfferDepth) == 248, "Offset mismatch for UAuroraPurchaseNullFortnite::MaxOfferDepth");
static_assert(offsetof(UAuroraPurchaseNullFortnite, MaxOfferOffers) == 252, "Offset mismatch for UAuroraPurchaseNullFortnite::MaxOfferOffers");
static_assert(offsetof(UAuroraPurchaseNullFortnite, MaxOfferEntitlements) == 256, "Offset mismatch for UAuroraPurchaseNullFortnite::MaxOfferEntitlements");
static_assert(offsetof(UAuroraPurchaseNullFortnite, OfferPriceMultiple) == 260, "Offset mismatch for UAuroraPurchaseNullFortnite::OfferPriceMultiple");
static_assert(offsetof(UAuroraPurchaseNullFortnite, MinOfferPrice) == 264, "Offset mismatch for UAuroraPurchaseNullFortnite::MinOfferPrice");
static_assert(offsetof(UAuroraPurchaseNullFortnite, MaxOfferPrice) == 268, "Offset mismatch for UAuroraPurchaseNullFortnite::MaxOfferPrice");
static_assert(offsetof(UAuroraPurchaseNullFortnite, MinSubOfferPrice) == 272, "Offset mismatch for UAuroraPurchaseNullFortnite::MinSubOfferPrice");
static_assert(offsetof(UAuroraPurchaseNullFortnite, MaxSubOfferPrice) == 276, "Offset mismatch for UAuroraPurchaseNullFortnite::MaxSubOfferPrice");
static_assert(offsetof(UAuroraPurchaseNullFortnite, MaxSubstitutionDepth) == 280, "Offset mismatch for UAuroraPurchaseNullFortnite::MaxSubstitutionDepth");
static_assert(offsetof(UAuroraPurchaseNullFortnite, bAllowMessageInSubstitution) == 284, "Offset mismatch for UAuroraPurchaseNullFortnite::bAllowMessageInSubstitution");
static_assert(offsetof(UAuroraPurchaseNullFortnite, NameMaxLength) == 288, "Offset mismatch for UAuroraPurchaseNullFortnite::NameMaxLength");
static_assert(offsetof(UAuroraPurchaseNullFortnite, NameMinLength) == 292, "Offset mismatch for UAuroraPurchaseNullFortnite::NameMinLength");
static_assert(offsetof(UAuroraPurchaseNullFortnite, DescriptionMinLength) == 300, "Offset mismatch for UAuroraPurchaseNullFortnite::DescriptionMinLength");
static_assert(offsetof(UAuroraPurchaseNullFortnite, ShortDescriptionMaxLength) == 304, "Offset mismatch for UAuroraPurchaseNullFortnite::ShortDescriptionMaxLength");
static_assert(offsetof(UAuroraPurchaseNullFortnite, ShortDescriptionMinLength) == 308, "Offset mismatch for UAuroraPurchaseNullFortnite::ShortDescriptionMinLength");

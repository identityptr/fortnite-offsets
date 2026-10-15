/**
 * decamp dumper generated SDK
 * Package: /Script/POIBannerUI
 */
#pragma once
#include "Basic.h"

// /Script/POIBannerUI.POIBannerToastSocialAvatar
// Kind: Class; super: FortHUDElementWidget
class UPOIBannerToastSocialAvatar
{
public:
    std::uint8_t Pad_0000[0x370]; // 0x0000
    void* Icon_SocialAvatar; // 0x0370 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPOIBannerToastSocialAvatar, Icon_SocialAvatar) == 880, "Offset mismatch for UPOIBannerToastSocialAvatar::Icon_SocialAvatar");

// /Script/POIBannerUI.POIBannerToastWidgetBase
// Kind: Class; super: FortHUDElementWidget
class UPOIBannerToastWidgetBase
{
public:
    std::uint8_t Pad_0000[0x3B0]; // 0x0000
    std::uint8_t PrioritizationData[0x1]; // 0x03B0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPOIBannerToastWidgetBase, PrioritizationData) == 944, "Offset mismatch for UPOIBannerToastWidgetBase::PrioritizationData");

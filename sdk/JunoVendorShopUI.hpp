#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::JunoVendorShopUI
{
    struct JunoDynamicUIDirectorComponent_Vendor
    {
        static constexpr std::string_view Name = "JunoDynamicUIDirectorComponent_Vendor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoDynamicUIDirectorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t TaggedWidgetSceneData = 0xC8;
            static constexpr std::uintptr_t HudLayoutScenes = 0xD0;
            static constexpr std::uintptr_t WidgetPoolInitData = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"TaggedWidgetSceneData", 0xC8, "ObjectProperty"},
            {"HudLayoutScenes", 0xD0, "MapProperty"},
            {"WidgetPoolInitData", 0xE0, "ArrayProperty"},
        }};
    };

    struct JunoVendorOfferViewModel
    {
        static constexpr std::string_view Name = "JunoVendorOfferViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ItemIcon = 0x68;
            static constexpr std::uintptr_t ItemName = 0x88;
            static constexpr std::uintptr_t ItemDescription = 0x98;
            static constexpr std::uintptr_t ExpiryDate = 0xA8;
            static constexpr std::uintptr_t Price = 0xB0;
            static constexpr std::uintptr_t CurrentStock = 0xB4;
            static constexpr std::uintptr_t MaxStock = 0xB8;
            static constexpr std::uintptr_t RequiredTrustTier = 0xBC;
            static constexpr std::uintptr_t ItemType = 0xC0;
            static constexpr std::uintptr_t bCanExpire = 0xC1;
            static constexpr std::uintptr_t bFeatured = 0xC2;
            static constexpr std::uintptr_t bIsAffordable = 0xC3;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"ItemIcon", 0x68, "SoftObjectProperty"},
            {"ItemName", 0x88, "TextProperty"},
            {"ItemDescription", 0x98, "TextProperty"},
            {"ExpiryDate", 0xA8, "StructProperty"},
            {"Price", 0xB0, "IntProperty"},
            {"CurrentStock", 0xB4, "IntProperty"},
            {"MaxStock", 0xB8, "IntProperty"},
            {"RequiredTrustTier", 0xBC, "IntProperty"},
            {"ItemType", 0xC0, "EnumProperty"},
            {"bCanExpire", 0xC1, "BoolProperty"},
            {"bFeatured", 0xC2, "BoolProperty"},
            {"bIsAffordable", 0xC3, "BoolProperty"},
        }};
    };

    struct JunoVendorShopCheatManager
    {
        static constexpr std::string_view Name = "JunoVendorShopCheatManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChildCheatManager";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoVendorShopData
    {
        static constexpr std::string_view Name = "JunoVendorShopData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t BuyVendorOffers = 0x30;
            static constexpr std::uintptr_t SellVendorOffers = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"BuyVendorOffers", 0x30, "StructProperty"},
            {"SellVendorOffers", 0x50, "StructProperty"},
        }};
    };

    struct JunoVendorShopMockData
    {
        static constexpr std::string_view Name = "JunoVendorShopMockData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoMockDataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t VendorName = 0x50;
            static constexpr std::uintptr_t BuyVendorOffers = 0x60;
            static constexpr std::uintptr_t SellVendorOffers = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"VendorName", 0x50, "TextProperty"},
            {"BuyVendorOffers", 0x60, "StructProperty"},
            {"SellVendorOffers", 0x80, "StructProperty"},
        }};
    };

    struct JunoVendorShopScreen
    {
        static constexpr std::string_view Name = "JunoVendorShopScreen";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsBackHandler = 0x330;
            static constexpr std::uintptr_t bIsBackActionDisplayedInActionBar = 0x331;
            static constexpr std::uintptr_t OverrideBackActionDisplayName = 0x338;
            static constexpr std::uintptr_t bAutoActivate = 0x348;
            static constexpr std::uintptr_t bSupportsActivationFocus = 0x349;
            static constexpr std::uintptr_t bIsModal = 0x34A;
            static constexpr std::uintptr_t bAutoRestoreFocus = 0x34B;
            static constexpr std::uintptr_t bOverrideActionDomain = 0x34C;
            static constexpr std::uintptr_t InputMapping = 0x350;
            static constexpr std::uintptr_t InputMappingPriority = 0x358;
            static constexpr std::uintptr_t InputModeTagsToAdd = 0x360;
            static constexpr std::uintptr_t InputModeTagsToRemove = 0x380;
            static constexpr std::uintptr_t ActionDomainOverride = 0x3A0;
            static constexpr std::uintptr_t BP_OnWidgetActivated = 0x3C0;
            static constexpr std::uintptr_t BP_OnWidgetDeactivated = 0x3D0;
            static constexpr std::uintptr_t bIsActive = 0x3E0;
            static constexpr std::uintptr_t VisibilityBoundWidgets = 0x3E8;
            static constexpr std::uintptr_t bSetVisibilityOnActivated = 0x498;
            static constexpr std::uintptr_t ActivatedVisibility = 0x499;
            static constexpr std::uintptr_t bSetVisibilityOnDeactivated = 0x49A;
            static constexpr std::uintptr_t DeactivatedVisibility = 0x49B;
        };

        inline static constexpr std::array<PropertyInfo, 21> Properties{{
            {"bIsBackHandler", 0x330, "BoolProperty"},
            {"bIsBackActionDisplayedInActionBar", 0x331, "BoolProperty"},
            {"OverrideBackActionDisplayName", 0x338, "TextProperty"},
            {"bAutoActivate", 0x348, "BoolProperty"},
            {"bSupportsActivationFocus", 0x349, "BoolProperty"},
            {"bIsModal", 0x34A, "BoolProperty"},
            {"bAutoRestoreFocus", 0x34B, "BoolProperty"},
            {"bOverrideActionDomain", 0x34C, "BoolProperty"},
            {"InputMapping", 0x350, "ObjectProperty"},
            {"InputMappingPriority", 0x358, "IntProperty"},
            {"InputModeTagsToAdd", 0x360, "StructProperty"},
            {"InputModeTagsToRemove", 0x380, "StructProperty"},
            {"ActionDomainOverride", 0x3A0, "SoftObjectProperty"},
            {"BP_OnWidgetActivated", 0x3C0, "MulticastInlineDelegateProperty"},
            {"BP_OnWidgetDeactivated", 0x3D0, "MulticastInlineDelegateProperty"},
            {"bIsActive", 0x3E0, "BoolProperty"},
            {"VisibilityBoundWidgets", 0x3E8, "ArrayProperty"},
            {"bSetVisibilityOnActivated", 0x498, "BoolProperty"},
            {"ActivatedVisibility", 0x499, "EnumProperty"},
            {"bSetVisibilityOnDeactivated", 0x49A, "BoolProperty"},
            {"DeactivatedVisibility", 0x49B, "EnumProperty"},
        }};
    };

    struct JunoVendorShopViewModel
    {
        static constexpr std::string_view Name = "JunoVendorShopViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t BuyVendorOfferViewModels = 0x70;
            static constexpr std::uintptr_t SellVendorOfferViewModels = 0x80;
            static constexpr std::uintptr_t VendorName = 0x90;
            static constexpr std::uintptr_t RestockCountdown = 0xA0;
            static constexpr std::uintptr_t SelectedVendorOffer = 0xB0;
            static constexpr std::uintptr_t ShopMode = 0xB8;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"BuyVendorOfferViewModels", 0x70, "ArrayProperty"},
            {"SellVendorOfferViewModels", 0x80, "ArrayProperty"},
            {"VendorName", 0x90, "TextProperty"},
            {"RestockCountdown", 0xA0, "TextProperty"},
            {"SelectedVendorOffer", 0xB0, "ObjectProperty"},
            {"ShopMode", 0xB8, "EnumProperty"},
        }};
    };

}

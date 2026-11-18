#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::GiftingUI
{
    struct AthenaGiftConfirmedPanel
    {
        static constexpr std::string_view Name = "AthenaGiftConfirmedPanel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t Text_RecipientInfo = 0x4B8;
            static constexpr std::uintptr_t Button_Back = 0x4C0;
            static constexpr std::uintptr_t Button_CloseTouch = 0x4C8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Text_RecipientInfo", 0x4B8, "ObjectProperty"},
            {"Button_Back", 0x4C0, "ObjectProperty"},
            {"Button_CloseTouch", 0x4C8, "ObjectProperty"},
        }};
    };

    struct AthenaGiftingConfirmationScreen
    {
        static constexpr std::string_view Name = "AthenaGiftingConfirmationScreen";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t PresentedGiftableOfferInfo = 0x4D0;
            static constexpr std::uintptr_t PresentedOptionalTokenOfferInfo = 0x4D8;
            static constexpr std::uintptr_t MinGiftSubmissionDelay = 0x5BC;
            static constexpr std::uintptr_t MaxGiftSubmissionDelay = 0x5C0;
            static constexpr std::uintptr_t Button_WrapOptions = 0x5D8;
            static constexpr std::uintptr_t Button_Back = 0x5E0;
            static constexpr std::uintptr_t Button_CloseTouch = 0x5E8;
            static constexpr std::uintptr_t Button_MtxWallet = 0x5F0;
            static constexpr std::uintptr_t Panel_GiftingPurchase = 0x5F8;
            static constexpr std::uintptr_t Panel_WrapOptions = 0x600;
            static constexpr std::uintptr_t Panel_GiftConfirmed = 0x608;
            static constexpr std::uintptr_t Panel_GiftingErrors = 0x610;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"PresentedGiftableOfferInfo", 0x4D0, "ObjectProperty"},
            {"PresentedOptionalTokenOfferInfo", 0x4D8, "ObjectProperty"},
            {"MinGiftSubmissionDelay", 0x5BC, "FloatProperty"},
            {"MaxGiftSubmissionDelay", 0x5C0, "FloatProperty"},
            {"Button_WrapOptions", 0x5D8, "ObjectProperty"},
            {"Button_Back", 0x5E0, "ObjectProperty"},
            {"Button_CloseTouch", 0x5E8, "ObjectProperty"},
            {"Button_MtxWallet", 0x5F0, "ObjectProperty"},
            {"Panel_GiftingPurchase", 0x5F8, "ObjectProperty"},
            {"Panel_WrapOptions", 0x600, "ObjectProperty"},
            {"Panel_GiftConfirmed", 0x608, "ObjectProperty"},
            {"Panel_GiftingErrors", 0x610, "ObjectProperty"},
        }};
    };

    struct AthenaGiftingErrorsPanel
    {
        static constexpr std::string_view Name = "AthenaGiftingErrorsPanel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t Text_RecipientInfo = 0x4D0;
            static constexpr std::uintptr_t Text_Title = 0x4D8;
            static constexpr std::uintptr_t Button_CloseTouch = 0x4E0;
            static constexpr std::uintptr_t Button_Back = 0x4E8;
            static constexpr std::uintptr_t Button_Continue = 0x4F0;
            static constexpr std::uintptr_t TileView_Items = 0x4F8;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Text_RecipientInfo", 0x4D0, "ObjectProperty"},
            {"Text_Title", 0x4D8, "ObjectProperty"},
            {"Button_CloseTouch", 0x4E0, "ObjectProperty"},
            {"Button_Back", 0x4E8, "ObjectProperty"},
            {"Button_Continue", 0x4F0, "ObjectProperty"},
            {"TileView_Items", 0x4F8, "ObjectProperty"},
        }};
    };

    struct AthenaGiftingPriceWidget
    {
        static constexpr std::string_view Name = "AthenaGiftingPriceWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t Text_RealMoneyPrice = 0x4A0;
            static constexpr std::uintptr_t Text_FinalPrice = 0x4A8;
            static constexpr std::uintptr_t Text_RegularPrice = 0x4B0;
            static constexpr std::uintptr_t Overlay_SalePrice = 0x4B8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Text_RealMoneyPrice", 0x4A0, "ObjectProperty"},
            {"Text_FinalPrice", 0x4A8, "ObjectProperty"},
            {"Text_RegularPrice", 0x4B0, "ObjectProperty"},
            {"Overlay_SalePrice", 0x4B8, "ObjectProperty"},
        }};
    };

    struct AthenaGiftingPurchaseButton
    {
        static constexpr std::string_view Name = "AthenaGiftingPurchaseButton";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortHoldableButton";
        struct Offsets
        {
            static constexpr std::uintptr_t Widget_Price = 0x1670;
            static constexpr std::uintptr_t Text_Title = 0x1678;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Widget_Price", 0x1670, "ObjectProperty"},
            {"Text_Title", 0x1678, "ObjectProperty"},
        }};
    };

    struct AthenaGiftingPurchasePanel
    {
        static constexpr std::string_view Name = "AthenaGiftingPurchasePanel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t Button_PurchaseGift = 0x4B8;
            static constexpr std::uintptr_t Avatar_MemberIcon = 0x4C0;
            static constexpr std::uintptr_t Text_SocialNameInfo = 0x4C8;
            static constexpr std::uintptr_t Text_ItemsCount = 0x4D0;
            static constexpr std::uintptr_t Text_OfferName = 0x4D8;
            static constexpr std::uintptr_t TileView_Items = 0x4E0;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Button_PurchaseGift", 0x4B8, "ObjectProperty"},
            {"Avatar_MemberIcon", 0x4C0, "ObjectProperty"},
            {"Text_SocialNameInfo", 0x4C8, "ObjectProperty"},
            {"Text_ItemsCount", 0x4D0, "ObjectProperty"},
            {"Text_OfferName", 0x4D8, "ObjectProperty"},
            {"TileView_Items", 0x4E0, "ObjectProperty"},
        }};
    };

    struct AthenaGiftingScreen
    {
        static constexpr std::string_view Name = "AthenaGiftingScreen";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortItemPreviewScreen";
        struct Offsets
        {
            static constexpr std::uintptr_t UpsellModalClass = 0x8A0;
            static constexpr std::uintptr_t SearchWidget_SocialSearchWidget = 0x8D0;
            static constexpr std::uintptr_t ListView_Recipients = 0x8D8;
            static constexpr std::uintptr_t TileView_Items = 0x8E0;
            static constexpr std::uintptr_t Button_Back = 0x8E8;
            static constexpr std::uintptr_t Button_CloseTouch = 0x8F0;
            static constexpr std::uintptr_t Button_GiftingPolicy = 0x8F8;
            static constexpr std::uintptr_t Button_CameraControl = 0x900;
            static constexpr std::uintptr_t Text_OfferName = 0x908;
            static constexpr std::uintptr_t Text_VBucksOffCount = 0x910;
            static constexpr std::uintptr_t Text_ShownItemIndex = 0x918;
            static constexpr std::uintptr_t Text_NoContent = 0x920;
            static constexpr std::uintptr_t RichText_OfferItemOwnedCount = 0x928;
            static constexpr std::uintptr_t Container_VBucksOffViolator = 0x930;
            static constexpr std::uintptr_t RichText_GiftCount = 0x938;
            static constexpr std::uintptr_t Widget_Price = 0x940;
            static constexpr std::uintptr_t Widget_ItemInfo = 0x948;
            static constexpr std::uintptr_t EntryBox_FilterTabs = 0x950;
            static constexpr std::uintptr_t ActionWidget_FilterTabsPrevious = 0x958;
            static constexpr std::uintptr_t ActionWidget_FilterTabsNext = 0x960;
            static constexpr std::uintptr_t ActivatableWidget_GiftingConfirmation = 0x968;
            static constexpr std::uintptr_t ItemCyclingInterval = 0x970;
            static constexpr std::uintptr_t FilterTabsPreviousAction = 0x978;
            static constexpr std::uintptr_t FilterTabsNextAction = 0x988;
            static constexpr std::uintptr_t RegularGiftingPolicy = 0x998;
            static constexpr std::uintptr_t BattlePassGiftingPolicy = 0x9A8;
            static constexpr std::uintptr_t FilterMap = 0xA18;
            static constexpr std::uintptr_t FilterGroup = 0xA28;
            static constexpr std::uintptr_t GiftableItems = 0xA30;
            static constexpr std::uintptr_t PresentedItemDefinition = 0xA40;
            static constexpr std::uintptr_t GiftableOfferInfo = 0xA48;
            static constexpr std::uintptr_t OptionalTokenOfferInfo = 0xA50;
            static constexpr std::uintptr_t OfferVM = 0xA60;
        };

        inline static constexpr std::array<PropertyInfo, 33> Properties{{
            {"UpsellModalClass", 0x8A0, "SoftClassProperty"},
            {"SearchWidget_SocialSearchWidget", 0x8D0, "ObjectProperty"},
            {"ListView_Recipients", 0x8D8, "ObjectProperty"},
            {"TileView_Items", 0x8E0, "ObjectProperty"},
            {"Button_Back", 0x8E8, "ObjectProperty"},
            {"Button_CloseTouch", 0x8F0, "ObjectProperty"},
            {"Button_GiftingPolicy", 0x8F8, "ObjectProperty"},
            {"Button_CameraControl", 0x900, "ObjectProperty"},
            {"Text_OfferName", 0x908, "ObjectProperty"},
            {"Text_VBucksOffCount", 0x910, "ObjectProperty"},
            {"Text_ShownItemIndex", 0x918, "ObjectProperty"},
            {"Text_NoContent", 0x920, "ObjectProperty"},
            {"RichText_OfferItemOwnedCount", 0x928, "ObjectProperty"},
            {"Container_VBucksOffViolator", 0x930, "ObjectProperty"},
            {"RichText_GiftCount", 0x938, "ObjectProperty"},
            {"Widget_Price", 0x940, "ObjectProperty"},
            {"Widget_ItemInfo", 0x948, "ObjectProperty"},
            {"EntryBox_FilterTabs", 0x950, "ObjectProperty"},
            {"ActionWidget_FilterTabsPrevious", 0x958, "ObjectProperty"},
            {"ActionWidget_FilterTabsNext", 0x960, "ObjectProperty"},
            {"ActivatableWidget_GiftingConfirmation", 0x968, "ObjectProperty"},
            {"ItemCyclingInterval", 0x970, "FloatProperty"},
            {"FilterTabsPreviousAction", 0x978, "StructProperty"},
            {"FilterTabsNextAction", 0x988, "StructProperty"},
            {"RegularGiftingPolicy", 0x998, "TextProperty"},
            {"BattlePassGiftingPolicy", 0x9A8, "TextProperty"},
            {"FilterMap", 0xA18, "MapProperty"},
            {"FilterGroup", 0xA28, "ObjectProperty"},
            {"GiftableItems", 0xA30, "ArrayProperty"},
            {"PresentedItemDefinition", 0xA40, "ObjectProperty"},
            {"GiftableOfferInfo", 0xA48, "ObjectProperty"},
            {"OptionalTokenOfferInfo", 0xA50, "ObjectProperty"},
            {"OfferVM", 0xA60, "ObjectProperty"},
        }};
    };

    struct AthenaGiftingUpsellModal
    {
        static constexpr std::string_view Name = "AthenaGiftingUpsellModal";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t RecipientDisplayName = 0x4A0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RecipientDisplayName", 0x4A0, "TextProperty"},
        }};
    };

    struct AthenaGiftingWrapOptionsPanel
    {
        static constexpr std::string_view Name = "AthenaGiftingWrapOptionsPanel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t GiftBoxes = 0x4C8;
            static constexpr std::uintptr_t GiftBoxItemDefs = 0x4D8;
            static constexpr std::uintptr_t Button_ConfirmWrap = 0x4F8;
            static constexpr std::uintptr_t TileView_WrapOptions = 0x500;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"GiftBoxes", 0x4C8, "ArrayProperty"},
            {"GiftBoxItemDefs", 0x4D8, "ArrayProperty"},
            {"Button_ConfirmWrap", 0x4F8, "ObjectProperty"},
            {"TileView_WrapOptions", 0x500, "ObjectProperty"},
        }};
    };

    struct FortGiftingData
    {
        static constexpr std::string_view Name = "FortGiftingData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameFeatureData";
        struct Offsets
        {
            static constexpr std::uintptr_t GiftingScreenClass = 0x448;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"GiftingScreenClass", 0x448, "SoftClassProperty"},
        }};
    };

    struct FortGiftingSocialUserListEntry
    {
        static constexpr std::string_view Name = "FortGiftingSocialUserListEntry";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SocialListEntryBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Avatar_MemberIcon = 0x1718;
            static constexpr std::uintptr_t Text_SocialName = 0x1720;
            static constexpr std::uintptr_t RichText_EligibilityStatus = 0x1728;
            static constexpr std::uintptr_t RichText_OwnedItems = 0x1730;
            static constexpr std::uintptr_t Widget_Price = 0x1738;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Avatar_MemberIcon", 0x1718, "ObjectProperty"},
            {"Text_SocialName", 0x1720, "ObjectProperty"},
            {"RichText_EligibilityStatus", 0x1728, "ObjectProperty"},
            {"RichText_OwnedItems", 0x1730, "ObjectProperty"},
            {"Widget_Price", 0x1738, "ObjectProperty"},
        }};
    };

    struct FortGiftingSocialUserListView
    {
        static constexpr std::string_view Name = "FortGiftingSocialUserListView";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SocialUserListViewBase";
        struct Offsets
        {
            static constexpr std::uintptr_t RefreshRecipientStatusDelay = 0x480;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RefreshRecipientStatusDelay", 0x480, "FloatProperty"},
        }};
    };

    struct FortGiftingUserSearchWidget
    {
        static constexpr std::string_view Name = "FortGiftingUserSearchWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t EditableText_SearchFriends = 0x330;
            static constexpr std::uintptr_t Button_ClearQuery = 0x338;
            static constexpr std::uintptr_t Button_SubmitQuery = 0x340;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"EditableText_SearchFriends", 0x330, "ObjectProperty"},
            {"Button_ClearQuery", 0x338, "ObjectProperty"},
            {"Button_SubmitQuery", 0x340, "ObjectProperty"},
        }};
    };

    struct FortGiftingWrapOptionListEntry
    {
        static constexpr std::string_view Name = "FortGiftingWrapOptionListEntry";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonButtonLegacy";
        struct Offsets
        {
            static constexpr std::uintptr_t GiftBoxDefinition = 0x1628;
            static constexpr std::uintptr_t Image_Gift = 0x1630;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"GiftBoxDefinition", 0x1628, "ObjectProperty"},
            {"Image_Gift", 0x1630, "ObjectProperty"},
        }};
    };

    struct GiftingCheatManager
    {
        static constexpr std::string_view Name = "GiftingCheatManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CheatManagerExtension";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}

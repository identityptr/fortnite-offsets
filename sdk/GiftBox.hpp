#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::GiftBox
{
    struct AthenaGiftingFlowConfirmationScreen
    {
        static constexpr std::string_view Name = "AthenaGiftingFlowConfirmationScreen";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t PresentedGiftableOfferInfo = 0x4B8;
            static constexpr std::uintptr_t PresentedOptionalTokenOfferInfo = 0x4C0;
            static constexpr std::uintptr_t PresentedGiftRecipientVM = 0x4C8;
            static constexpr std::uintptr_t SelectedGiftBoxId = 0x560;
            static constexpr std::uintptr_t Button_WrapOptions = 0x578;
            static constexpr std::uintptr_t Button_Back = 0x580;
            static constexpr std::uintptr_t Button_CloseTouch = 0x588;
            static constexpr std::uintptr_t Button_MtxWallet = 0x590;
            static constexpr std::uintptr_t Panel_GiftingPurchase = 0x598;
            static constexpr std::uintptr_t Panel_GiftingErrors = 0x5A0;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"PresentedGiftableOfferInfo", 0x4B8, "ObjectProperty"},
            {"PresentedOptionalTokenOfferInfo", 0x4C0, "ObjectProperty"},
            {"PresentedGiftRecipientVM", 0x4C8, "ObjectProperty"},
            {"SelectedGiftBoxId", 0x560, "StrProperty"},
            {"Button_WrapOptions", 0x578, "ObjectProperty"},
            {"Button_Back", 0x580, "ObjectProperty"},
            {"Button_CloseTouch", 0x588, "ObjectProperty"},
            {"Button_MtxWallet", 0x590, "ObjectProperty"},
            {"Panel_GiftingPurchase", 0x598, "ObjectProperty"},
            {"Panel_GiftingErrors", 0x5A0, "ObjectProperty"},
        }};
    };

    struct AthenaGiftingFlowErrorsPanel
    {
        static constexpr std::string_view Name = "AthenaGiftingFlowErrorsPanel";
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

    struct AthenaGiftingFlowPurchasePanel
    {
        static constexpr std::string_view Name = "AthenaGiftingFlowPurchasePanel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t Avatar_MemberIcon = 0x4A0;
            static constexpr std::uintptr_t Text_SocialNameInfo = 0x4A8;
            static constexpr std::uintptr_t Text_ItemsCount = 0x4B0;
            static constexpr std::uintptr_t Text_OfferName = 0x4B8;
            static constexpr std::uintptr_t TileView_Items = 0x4C0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Avatar_MemberIcon", 0x4A0, "ObjectProperty"},
            {"Text_SocialNameInfo", 0x4A8, "ObjectProperty"},
            {"Text_ItemsCount", 0x4B0, "ObjectProperty"},
            {"Text_OfferName", 0x4B8, "ObjectProperty"},
            {"TileView_Items", 0x4C0, "ObjectProperty"},
        }};
    };

    struct AthenaGiftingFlowScreen
    {
        static constexpr std::string_view Name = "AthenaGiftingFlowScreen";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortItemPreviewScreen";
        struct Offsets
        {
            static constexpr std::uintptr_t SearchWidget_SocialSearchWidget = 0x7D8;
            static constexpr std::uintptr_t TileView_Items = 0x7E0;
            static constexpr std::uintptr_t Button_Back = 0x7E8;
            static constexpr std::uintptr_t Button_CloseTouch = 0x7F0;
            static constexpr std::uintptr_t Button_GiftingPolicy = 0x7F8;
            static constexpr std::uintptr_t Button_CameraControl = 0x800;
            static constexpr std::uintptr_t Text_OfferName = 0x808;
            static constexpr std::uintptr_t Text_VBucksOffCount = 0x810;
            static constexpr std::uintptr_t Text_ShownItemIndex = 0x818;
            static constexpr std::uintptr_t Text_NoContent = 0x820;
            static constexpr std::uintptr_t RichText_OfferItemOwnedCount = 0x828;
            static constexpr std::uintptr_t Container_VBucksOffViolator = 0x830;
            static constexpr std::uintptr_t RichText_GiftCount = 0x838;
            static constexpr std::uintptr_t Widget_ItemInfo = 0x840;
            static constexpr std::uintptr_t EntryBox_FilterTabs = 0x848;
            static constexpr std::uintptr_t ActionWidget_FilterTabsPrevious = 0x850;
            static constexpr std::uintptr_t ActionWidget_FilterTabsNext = 0x858;
            static constexpr std::uintptr_t ActivatableWidget_GiftingConfirmation = 0x860;
            static constexpr std::uintptr_t ItemCyclingInterval = 0x868;
            static constexpr std::uintptr_t FilterTabsPreviousAction = 0x870;
            static constexpr std::uintptr_t FilterTabsNextAction = 0x880;
            static constexpr std::uintptr_t RegularGiftingPolicy = 0x890;
            static constexpr std::uintptr_t BattlePassGiftingPolicy = 0x8A0;
            static constexpr std::uintptr_t FilterMap = 0x8E8;
            static constexpr std::uintptr_t FilterGroup = 0x8F8;
            static constexpr std::uintptr_t GiftableItems = 0x900;
            static constexpr std::uintptr_t PresentedItemDefinition = 0x910;
            static constexpr std::uintptr_t GiftBoxPurchaseVMInner = 0x918;
        };

        inline static constexpr std::array<PropertyInfo, 28> Properties{{
            {"SearchWidget_SocialSearchWidget", 0x7D8, "ObjectProperty"},
            {"TileView_Items", 0x7E0, "ObjectProperty"},
            {"Button_Back", 0x7E8, "ObjectProperty"},
            {"Button_CloseTouch", 0x7F0, "ObjectProperty"},
            {"Button_GiftingPolicy", 0x7F8, "ObjectProperty"},
            {"Button_CameraControl", 0x800, "ObjectProperty"},
            {"Text_OfferName", 0x808, "ObjectProperty"},
            {"Text_VBucksOffCount", 0x810, "ObjectProperty"},
            {"Text_ShownItemIndex", 0x818, "ObjectProperty"},
            {"Text_NoContent", 0x820, "ObjectProperty"},
            {"RichText_OfferItemOwnedCount", 0x828, "ObjectProperty"},
            {"Container_VBucksOffViolator", 0x830, "ObjectProperty"},
            {"RichText_GiftCount", 0x838, "ObjectProperty"},
            {"Widget_ItemInfo", 0x840, "ObjectProperty"},
            {"EntryBox_FilterTabs", 0x848, "ObjectProperty"},
            {"ActionWidget_FilterTabsPrevious", 0x850, "ObjectProperty"},
            {"ActionWidget_FilterTabsNext", 0x858, "ObjectProperty"},
            {"ActivatableWidget_GiftingConfirmation", 0x860, "ObjectProperty"},
            {"ItemCyclingInterval", 0x868, "FloatProperty"},
            {"FilterTabsPreviousAction", 0x870, "StructProperty"},
            {"FilterTabsNextAction", 0x880, "StructProperty"},
            {"RegularGiftingPolicy", 0x890, "TextProperty"},
            {"BattlePassGiftingPolicy", 0x8A0, "TextProperty"},
            {"FilterMap", 0x8E8, "MapProperty"},
            {"FilterGroup", 0x8F8, "ObjectProperty"},
            {"GiftableItems", 0x900, "ArrayProperty"},
            {"PresentedItemDefinition", 0x910, "ObjectProperty"},
            {"GiftBoxPurchaseVMInner", 0x918, "ObjectProperty"},
        }};
    };

    struct FortAsyncAction_GiftboxOperations
    {
        static constexpr std::string_view Name = "FortAsyncAction_GiftboxOperations";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAsyncAction_FromFunctionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t OnOperationCompleted = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OnOperationCompleted", 0x30, "MulticastInlineDelegateProperty"},
        }};
    };

    struct FortAsyncAction_GiftboxPurchaseOperation
    {
        static constexpr std::string_view Name = "FortAsyncAction_GiftboxPurchaseOperation";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAsyncAction_FromFunctionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t OnOperationCompleted = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OnOperationCompleted", 0x30, "MulticastInlineDelegateProperty"},
        }};
    };

    struct GiftBoxAnalyticsBlueprintLibrary
    {
        static constexpr std::string_view Name = "GiftBoxAnalyticsBlueprintLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GiftBoxGameFeatureAction_SetGiftBoxData
    {
        static constexpr std::string_view Name = "GiftBoxGameFeatureAction_SetGiftBoxData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortUIGameFeatureAction_SetGiftBoxData";
        struct Offsets
        {
            static constexpr std::uintptr_t GiftBoxScreenClass = 0x28;
            static constexpr std::uintptr_t UngiftMessageScreen = 0x48;
            static constexpr std::uintptr_t GiftReceivedMessage = 0x68;
            static constexpr std::uintptr_t GiftPurchaseScreenClass = 0x88;
            static constexpr std::uintptr_t AssetTypeOrder = 0xA8;
            static constexpr std::uintptr_t bShowUnknownItemsFirst = 0xB8;
            static constexpr std::uintptr_t DefaultGiftBoxWrappingOptions = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"GiftBoxScreenClass", 0x28, "SoftClassProperty"},
            {"UngiftMessageScreen", 0x48, "SoftClassProperty"},
            {"GiftReceivedMessage", 0x68, "SoftClassProperty"},
            {"GiftPurchaseScreenClass", 0x88, "SoftClassProperty"},
            {"AssetTypeOrder", 0xA8, "ArrayProperty"},
            {"bShowUnknownItemsFirst", 0xB8, "BoolProperty"},
            {"DefaultGiftBoxWrappingOptions", 0xC0, "ArrayProperty"},
        }};
    };

    struct GiftBoxGroupVM
    {
        static constexpr std::string_view Name = "GiftBoxGroupVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t GiftBoxes = 0x68;
            static constexpr std::uintptr_t ActivateSound = 0x78;
            static constexpr std::uintptr_t HoveredSoundOverride = 0x80;
            static constexpr std::uintptr_t PressedSoundOverride = 0x88;
            static constexpr std::uintptr_t PreMessageScreen = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"GiftBoxes", 0x68, "ArrayProperty"},
            {"ActivateSound", 0x78, "ObjectProperty"},
            {"HoveredSoundOverride", 0x80, "ObjectProperty"},
            {"PressedSoundOverride", 0x88, "ObjectProperty"},
            {"PreMessageScreen", 0x90, "SoftClassProperty"},
        }};
    };

    struct GiftBoxItemVM
    {
        static constexpr std::string_view Name = "GiftBoxItemVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ItemVM = 0x68;
            static constexpr std::uintptr_t HeaderImage = 0x70;
            static constexpr std::uintptr_t HeaderText = 0x90;
            static constexpr std::uintptr_t BannerText = 0xA0;
            static constexpr std::uintptr_t BannerIcon = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"ItemVM", 0x68, "ObjectProperty"},
            {"HeaderImage", 0x70, "SoftObjectProperty"},
            {"HeaderText", 0x90, "TextProperty"},
            {"BannerText", 0xA0, "TextProperty"},
            {"BannerIcon", 0xB0, "SoftObjectProperty"},
        }};
    };

    struct GiftBoxPurchaseRecipientVM
    {
        static constexpr std::string_view Name = "GiftBoxPurchaseRecipientVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t SocialItemVM = 0x78;
            static constexpr std::uintptr_t RecipientState = 0x80;
            static constexpr std::uintptr_t SocialDisplayName = 0x88;
            static constexpr std::uintptr_t ItemsCount = 0x98;
            static constexpr std::uintptr_t DisplayOfferVM = 0xA0;
            static constexpr std::uintptr_t EligibilityStatus = 0xA8;
            static constexpr std::uintptr_t GiftingStateText = 0xB0;
            static constexpr std::uintptr_t IsItemsOwned = 0xC0;
            static constexpr std::uintptr_t OwnedItemsText = 0xC8;
            static constexpr std::uintptr_t GiftingCooldownDays = 0xD8;
            static constexpr std::uintptr_t LastPurchaseErrorText = 0xE0;
            static constexpr std::uintptr_t GiftBoxPurchase = 0xF0;
            static constexpr std::uintptr_t NewIneligibleItems = 0x120;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"SocialItemVM", 0x78, "ObjectProperty"},
            {"RecipientState", 0x80, "EnumProperty"},
            {"SocialDisplayName", 0x88, "TextProperty"},
            {"ItemsCount", 0x98, "IntProperty"},
            {"DisplayOfferVM", 0xA0, "ObjectProperty"},
            {"EligibilityStatus", 0xA8, "EnumProperty"},
            {"GiftingStateText", 0xB0, "TextProperty"},
            {"IsItemsOwned", 0xC0, "BoolProperty"},
            {"OwnedItemsText", 0xC8, "TextProperty"},
            {"GiftingCooldownDays", 0xD8, "IntProperty"},
            {"LastPurchaseErrorText", 0xE0, "StrProperty"},
            {"GiftBoxPurchase", 0xF0, "ObjectProperty"},
            {"NewIneligibleItems", 0x120, "ArrayProperty"},
        }};
    };

    struct GiftBoxPurchaseVM
    {
        static constexpr std::string_view Name = "GiftBoxPurchaseVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t bShowCameraControlButton = 0x78;
            static constexpr std::uintptr_t GiftableOfferVM = 0x80;
            static constexpr std::uintptr_t GiftableOfferInfo = 0x88;
            static constexpr std::uintptr_t OptionalTokenOfferInfo = 0x90;
            static constexpr std::uintptr_t IsLoadingGiftBoxWrappingOptions = 0x98;
            static constexpr std::uintptr_t GiftBoxWrappingOptions = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"bShowCameraControlButton", 0x78, "BoolProperty"},
            {"GiftableOfferVM", 0x80, "ObjectProperty"},
            {"GiftableOfferInfo", 0x88, "ObjectProperty"},
            {"OptionalTokenOfferInfo", 0x90, "ObjectProperty"},
            {"IsLoadingGiftBoxWrappingOptions", 0x98, "BoolProperty"},
            {"GiftBoxWrappingOptions", 0xA0, "ArrayProperty"},
        }};
    };

    struct GiftBoxSystemVM
    {
        static constexpr std::string_view Name = "GiftBoxSystemVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t GiftBoxGroups = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"GiftBoxGroups", 0x78, "ArrayProperty"},
        }};
    };

    struct GiftBoxTestData
    {
        static constexpr std::string_view Name = "GiftBoxTestData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameFeatureActionSingletonAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t TestGiftBoxGroups = 0x28;
            static constexpr std::uintptr_t TestPurchases = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"TestGiftBoxGroups", 0x28, "ArrayProperty"},
            {"TestPurchases", 0x38, "ArrayProperty"},
        }};
    };

    struct GiftBoxVM
    {
        static constexpr std::string_view Name = "GiftBoxVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t GiftBoxItem = 0x68;
            static constexpr std::uintptr_t Items = 0x70;
            static constexpr std::uintptr_t TabText = 0x80;
            static constexpr std::uintptr_t HeaderText = 0x90;
            static constexpr std::uintptr_t SubHeaderText = 0xA0;
            static constexpr std::uintptr_t HeaderBodyText = 0xB0;
            static constexpr std::uintptr_t BadgeText = 0xC0;
            static constexpr std::uintptr_t RewardImage = 0xD0;
            static constexpr std::uintptr_t HeaderImage = 0xF0;
            static constexpr std::uintptr_t TabIcon = 0x110;
            static constexpr std::uintptr_t HeaderImageSize = 0x130;
            static constexpr std::uintptr_t CustomHeaderWidget = 0x140;
            static constexpr std::uintptr_t CurrencyData = 0x160;
            static constexpr std::uintptr_t ColorOverride = 0x170;
            static constexpr std::uintptr_t VaultWorldOverrideTag = 0x184;
            static constexpr std::uintptr_t VaultWorldMaterialIndex = 0x188;
            static constexpr std::uintptr_t bShowVaultWorldPedestals = 0x18C;
            static constexpr std::uintptr_t bFromSelf = 0x18D;
            static constexpr std::uintptr_t bOverrideColor = 0x18E;
            static constexpr std::uintptr_t VaultBackgroundMaterial = 0x190;
        };

        inline static constexpr std::array<PropertyInfo, 20> Properties{{
            {"GiftBoxItem", 0x68, "ObjectProperty"},
            {"Items", 0x70, "ArrayProperty"},
            {"TabText", 0x80, "TextProperty"},
            {"HeaderText", 0x90, "TextProperty"},
            {"SubHeaderText", 0xA0, "TextProperty"},
            {"HeaderBodyText", 0xB0, "TextProperty"},
            {"BadgeText", 0xC0, "TextProperty"},
            {"RewardImage", 0xD0, "SoftObjectProperty"},
            {"HeaderImage", 0xF0, "SoftObjectProperty"},
            {"TabIcon", 0x110, "SoftObjectProperty"},
            {"HeaderImageSize", 0x130, "StructProperty"},
            {"CustomHeaderWidget", 0x140, "SoftClassProperty"},
            {"CurrencyData", 0x160, "ArrayProperty"},
            {"ColorOverride", 0x170, "StructProperty"},
            {"VaultWorldOverrideTag", 0x184, "StructProperty"},
            {"VaultWorldMaterialIndex", 0x188, "IntProperty"},
            {"bShowVaultWorldPedestals", 0x18C, "BoolProperty"},
            {"bFromSelf", 0x18D, "BoolProperty"},
            {"bOverrideColor", 0x18E, "BoolProperty"},
            {"VaultBackgroundMaterial", 0x190, "SoftObjectProperty"},
        }};
    };

}

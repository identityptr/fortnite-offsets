#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::CrewUI
{
    struct CrewAsyncActions
    {
        static constexpr std::string_view Name = "CrewAsyncActions";
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

    struct CrewBenefitVM
    {
        static constexpr std::string_view Name = "CrewBenefitVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t CrewPackItems = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CrewPackItems", 0x100, "ArrayProperty"},
        }};
    };

    struct CrewBenefitsGroupVM
    {
        static constexpr std::string_view Name = "CrewBenefitsGroupVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t Label = 0x78;
            static constexpr std::uintptr_t Benefits = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Label", 0x78, "TextProperty"},
            {"Benefits", 0x88, "ArrayProperty"},
        }};
    };

    struct CrewCancellationInfoVM
    {
        static constexpr std::string_view Name = "CrewCancellationInfoVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t BulletPoints = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"BulletPoints", 0x68, "ArrayProperty"},
        }};
    };

    struct CrewItemShopDataVM
    {
        static constexpr std::string_view Name = "CrewItemShopDataVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t HighlightText = 0x68;
            static constexpr std::uintptr_t HighlightIntensity = 0x78;
            static constexpr std::uintptr_t TileImageURL = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"HighlightText", 0x68, "TextProperty"},
            {"HighlightIntensity", 0x78, "EnumProperty"},
            {"TileImageURL", 0x80, "StrProperty"},
        }};
    };

    struct CrewPlatformAndCountriesNotificationVM
    {
        static constexpr std::string_view Name = "CrewPlatformAndCountriesNotificationVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t Title = 0x88;
            static constexpr std::uintptr_t BodyText = 0x98;
            static constexpr std::uintptr_t CheckboxText = 0xA8;
            static constexpr std::uintptr_t ConfirmButtonText = 0xB8;
            static constexpr std::uintptr_t CancelSubscriptionButtonText = 0xC8;
            static constexpr std::uintptr_t MoreInfoText = 0xD8;
            static constexpr std::uintptr_t MoreInfoUrl = 0xE8;
            static constexpr std::uintptr_t TableRows = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"Title", 0x88, "TextProperty"},
            {"BodyText", 0x98, "TextProperty"},
            {"CheckboxText", 0xA8, "TextProperty"},
            {"ConfirmButtonText", 0xB8, "TextProperty"},
            {"CancelSubscriptionButtonText", 0xC8, "TextProperty"},
            {"MoreInfoText", 0xD8, "TextProperty"},
            {"MoreInfoUrl", 0xE8, "TextProperty"},
            {"TableRows", 0xF8, "ArrayProperty"},
        }};
    };

    struct CrewProgressiveItemsVM
    {
        static constexpr std::string_view Name = "CrewProgressiveItemsVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t AllSets = 0x78;
            static constexpr std::uintptr_t VisibleSets = 0x88;
            static constexpr std::uintptr_t PreviewData = 0x98;
            static constexpr std::uintptr_t bAllSetsComplete = 0xA8;
            static constexpr std::uintptr_t RegisteredMcpProfile = 0xAC;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"AllSets", 0x78, "ArrayProperty"},
            {"VisibleSets", 0x88, "ArrayProperty"},
            {"PreviewData", 0x98, "ArrayProperty"},
            {"bAllSetsComplete", 0xA8, "BoolProperty"},
            {"RegisteredMcpProfile", 0xAC, "WeakObjectProperty"},
        }};
    };

    struct CrewProgressiveRewardVM
    {
        static constexpr std::string_view Name = "CrewProgressiveRewardVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x68;
            static constexpr std::uintptr_t TileMaterial = 0x78;
            static constexpr std::uintptr_t TileMaterialItemTextureProvider = 0x98;
            static constexpr std::uintptr_t Items = 0xB8;
            static constexpr std::uintptr_t PreviewVariants = 0xC8;
            static constexpr std::uintptr_t bAllowPreviewStyles = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Name", 0x68, "TextProperty"},
            {"TileMaterial", 0x78, "SoftObjectProperty"},
            {"TileMaterialItemTextureProvider", 0x98, "SoftObjectProperty"},
            {"Items", 0xB8, "ArrayProperty"},
            {"PreviewVariants", 0xC8, "ArrayProperty"},
            {"bAllowPreviewStyles", 0xD8, "BoolProperty"},
        }};
    };

    struct CrewProgressiveSelectionVM
    {
        static constexpr std::string_view Name = "CrewProgressiveSelectionVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t SelectedReward = 0x78;
            static constexpr std::uintptr_t SelectedStage = 0x80;
            static constexpr std::uintptr_t SelectedSet = 0x88;
            static constexpr std::uintptr_t PreviewItem = 0x90;
            static constexpr std::uintptr_t PreviewData = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"SelectedReward", 0x78, "ObjectProperty"},
            {"SelectedStage", 0x80, "ObjectProperty"},
            {"SelectedSet", 0x88, "ObjectProperty"},
            {"PreviewItem", 0x90, "ObjectProperty"},
            {"PreviewData", 0x98, "StructProperty"},
        }};
    };

    struct CrewProgressiveSetVM
    {
        static constexpr std::string_view Name = "CrewProgressiveSetVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t FulfillmentId = 0x68;
            static constexpr std::uintptr_t Name = 0x78;
            static constexpr std::uintptr_t TileMaterial = 0x88;
            static constexpr std::uintptr_t TileMaterialItemTextureProvider = 0xA8;
            static constexpr std::uintptr_t Stages = 0xC8;
            static constexpr std::uintptr_t CutoffDate = 0xD8;
            static constexpr std::uintptr_t AcquisitionCutoffDate = 0xE0;
            static constexpr std::uintptr_t AcquireStartDate = 0xE8;
            static constexpr std::uintptr_t AcquisitionCutoffDateText = 0xF0;
            static constexpr std::uintptr_t UnlockedStages = 0x100;
            static constexpr std::uintptr_t Progress = 0x104;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"FulfillmentId", 0x68, "StrProperty"},
            {"Name", 0x78, "TextProperty"},
            {"TileMaterial", 0x88, "SoftObjectProperty"},
            {"TileMaterialItemTextureProvider", 0xA8, "SoftObjectProperty"},
            {"Stages", 0xC8, "ArrayProperty"},
            {"CutoffDate", 0xD8, "StructProperty"},
            {"AcquisitionCutoffDate", 0xE0, "StructProperty"},
            {"AcquireStartDate", 0xE8, "StructProperty"},
            {"AcquisitionCutoffDateText", 0xF0, "TextProperty"},
            {"UnlockedStages", 0x100, "IntProperty"},
            {"Progress", 0x104, "EnumProperty"},
        }};
    };

    struct CrewProgressiveStageVM
    {
        static constexpr std::string_view Name = "CrewProgressiveStageVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Rewards = 0x68;
            static constexpr std::uintptr_t UnlockCriteria = 0x78;
            static constexpr std::uintptr_t StageIndex = 0x88;
            static constexpr std::uintptr_t RemainingMonths = 0x8C;
            static constexpr std::uintptr_t bIsOwned = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Rewards", 0x68, "ArrayProperty"},
            {"UnlockCriteria", 0x78, "TextProperty"},
            {"StageIndex", 0x88, "IntProperty"},
            {"RemainingMonths", 0x8C, "IntProperty"},
            {"bIsOwned", 0x90, "BoolProperty"},
        }};
    };

    struct CrewSelectionVM
    {
        static constexpr std::string_view Name = "CrewSelectionVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t HoveredBenefit = 0x78;
            static constexpr std::uintptr_t SelectedBenefit = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"HoveredBenefit", 0x78, "ObjectProperty"},
            {"SelectedBenefit", 0x80, "ObjectProperty"},
        }};
    };

    struct CrewShopOfferOverride
    {
        static constexpr std::string_view Name = "CrewShopOfferOverride";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortItemShopOfferInspectionScreenWidgetOverrideBase";
        struct Offsets
        {
            static constexpr std::uintptr_t WidgetToShow = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"WidgetToShow", 0x28, "SoftClassProperty"},
        }};
    };

    struct CrewStandaloneSubscriptionContentContainer
    {
        static constexpr std::string_view Name = "CrewStandaloneSubscriptionContentContainer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortStandaloneFrontend";
        struct Offsets
        {
            static constexpr std::uintptr_t Widget_CrewContentContainer = 0x598;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Widget_CrewContentContainer", 0x598, "ObjectProperty"},
        }};
    };

    struct CrewSubscriptionContentContainer
    {
        static constexpr std::string_view Name = "CrewSubscriptionContentContainer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t TabsData = 0x4D0;
            static constexpr std::uintptr_t NextTabInputAction = 0x4E0;
            static constexpr std::uintptr_t PreviousTabInputAction = 0x4F0;
            static constexpr std::uintptr_t EntryBox_Tabs = 0x500;
            static constexpr std::uintptr_t ButtonGroup_Tabs = 0x508;
            static constexpr std::uintptr_t Switcher_Tabs = 0x510;
            static constexpr std::uintptr_t Widget_TabsContainer = 0x518;
            static constexpr std::uintptr_t SpacingAdjustmentForTabs = 0x520;
            static constexpr std::uintptr_t ContentSetup = 0x524;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"TabsData", 0x4D0, "ArrayProperty"},
            {"NextTabInputAction", 0x4E0, "StructProperty"},
            {"PreviousTabInputAction", 0x4F0, "StructProperty"},
            {"EntryBox_Tabs", 0x500, "ObjectProperty"},
            {"ButtonGroup_Tabs", 0x508, "ObjectProperty"},
            {"Switcher_Tabs", 0x510, "ObjectProperty"},
            {"Widget_TabsContainer", 0x518, "ObjectProperty"},
            {"SpacingAdjustmentForTabs", 0x520, "FloatProperty"},
            {"ContentSetup", 0x524, "StructProperty"},
        }};
    };

    struct CrewSubscriptionModalInfoVM
    {
        static constexpr std::string_view Name = "CrewSubscriptionModalInfoVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ModalId = 0x68;
            static constexpr std::uintptr_t Entries = 0x78;
            static constexpr std::uintptr_t QrCodeImageUrl = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ModalId", 0x68, "StrProperty"},
            {"Entries", 0x78, "ArrayProperty"},
            {"QrCodeImageUrl", 0x88, "StrProperty"},
        }};
    };

    struct CrewUIGameFeatureAction
    {
        static constexpr std::string_view Name = "CrewUIGameFeatureAction";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortUIGameFeatureAction";
        struct Offsets
        {
            static constexpr std::uintptr_t CrewContentContainerClass = 0x28;
            static constexpr std::uintptr_t CrewStandaloneContentContainerClass = 0x48;
            static constexpr std::uintptr_t ProgressionScreenClass = 0x68;
            static constexpr std::uintptr_t CrewPriceChangeAcknowledgeModalClass = 0x88;
            static constexpr std::uintptr_t MultiSubAlertModalClass = 0xA8;
            static constexpr std::uintptr_t ProgressiveCosmeticSets = 0xC8;
            static constexpr std::uintptr_t CustomCrewPreviewData = 0xD8;
            static constexpr std::uintptr_t ProgressiveSetVariantLookup = 0xE8;
            static constexpr std::uintptr_t ProgressiveSetVariantLookupHotfix = 0xF8;
            static constexpr std::uintptr_t HeaderImage = 0x108;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"CrewContentContainerClass", 0x28, "SoftClassProperty"},
            {"CrewStandaloneContentContainerClass", 0x48, "SoftClassProperty"},
            {"ProgressionScreenClass", 0x68, "SoftClassProperty"},
            {"CrewPriceChangeAcknowledgeModalClass", 0x88, "SoftClassProperty"},
            {"MultiSubAlertModalClass", 0xA8, "SoftClassProperty"},
            {"ProgressiveCosmeticSets", 0xC8, "ArrayProperty"},
            {"CustomCrewPreviewData", 0xD8, "ArrayProperty"},
            {"ProgressiveSetVariantLookup", 0xE8, "MapProperty"},
            {"ProgressiveSetVariantLookupHotfix", 0xF8, "ArrayProperty"},
            {"HeaderImage", 0x108, "SoftObjectProperty"},
        }};
    };

    struct CrewUIGameFeatureDataAction
    {
        static constexpr std::string_view Name = "CrewUIGameFeatureDataAction";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortUIGameFeatureAction";
        struct Offsets
        {
            static constexpr std::uintptr_t StandaloneCrewUpsellScreen = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"StandaloneCrewUpsellScreen", 0x28, "SoftClassProperty"},
        }};
    };

    struct CrewVM
    {
        static constexpr std::string_view Name = "CrewVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t SubscriptionState = 0x78;
            static constexpr std::uintptr_t bIsLegacySubscription = 0x79;
            static constexpr std::uintptr_t bCanPurchaseSubscription = 0x7A;
            static constexpr std::uintptr_t SubscriptionStartDate = 0x80;
            static constexpr std::uintptr_t SubscriptionPlatforms = 0x88;
            static constexpr std::uintptr_t NumAutoRenewSubscriptions = 0x98;
            static constexpr std::uintptr_t Title = 0xA0;
            static constexpr std::uintptr_t Description = 0xB0;
            static constexpr std::uintptr_t ShortDescription = 0xC0;
            static constexpr std::uintptr_t Notice = 0xD0;
            static constexpr std::uintptr_t BackgroundURL = 0xE0;
            static constexpr std::uintptr_t SubscribedBackgroundURL = 0xF0;
            static constexpr std::uintptr_t TileImageURL = 0x100;
            static constexpr std::uintptr_t ImageReferenceTable = 0x110;
            static constexpr std::uintptr_t OverrideUpsellPass = 0x120;
            static constexpr std::uintptr_t bCrewOnRightInUpsell = 0x130;
            static constexpr std::uintptr_t bCrewOnlyInUpsell = 0x131;
            static constexpr std::uintptr_t bPassOnlyInUpsell = 0x132;
            static constexpr std::uintptr_t CMSUpsellConfig = 0x138;
            static constexpr std::uintptr_t ExperimentUpsellConfig = 0x188;
            static constexpr std::uintptr_t Disclaimer = 0x1D8;
            static constexpr std::uintptr_t SubscriptionButtonText = 0x1E8;
            static constexpr std::uintptr_t PriceText = 0x1F8;
            static constexpr std::uintptr_t UserInformationTextPrimary = 0x208;
            static constexpr std::uintptr_t UserInformationTextSecondary = 0x218;
            static constexpr std::uintptr_t PaymentLegalText = 0x228;
            static constexpr std::uintptr_t ProgressiveInfoNewStagesUnlockFinePrint = 0x238;
            static constexpr std::uintptr_t CrewPackItems = 0x248;
            static constexpr std::uintptr_t CancellationInfo = 0x258;
            static constexpr std::uintptr_t SubscriptionShopData = 0x260;
            static constexpr std::uintptr_t CrewShopData = 0x268;
            static constexpr std::uintptr_t CrewOffer = 0x270;
            static constexpr std::uintptr_t BenefitsGroups = 0x278;
            static constexpr std::uintptr_t AltBenefitsGroups = 0x288;
            static constexpr std::uintptr_t BenefitSetsByName = 0x298;
            static constexpr std::uintptr_t SubscriptionModals = 0x2A8;
            static constexpr std::uintptr_t UpsellBenefits = 0x2B8;
            static constexpr std::uintptr_t PreviewBenefit = 0x328;
            static constexpr std::uintptr_t RegisteredMcpProfile = 0x330;
        };

        inline static constexpr std::array<PropertyInfo, 39> Properties{{
            {"SubscriptionState", 0x78, "EnumProperty"},
            {"bIsLegacySubscription", 0x79, "BoolProperty"},
            {"bCanPurchaseSubscription", 0x7A, "BoolProperty"},
            {"SubscriptionStartDate", 0x80, "StructProperty"},
            {"SubscriptionPlatforms", 0x88, "ArrayProperty"},
            {"NumAutoRenewSubscriptions", 0x98, "IntProperty"},
            {"Title", 0xA0, "TextProperty"},
            {"Description", 0xB0, "TextProperty"},
            {"ShortDescription", 0xC0, "TextProperty"},
            {"Notice", 0xD0, "TextProperty"},
            {"BackgroundURL", 0xE0, "StrProperty"},
            {"SubscribedBackgroundURL", 0xF0, "StrProperty"},
            {"TileImageURL", 0x100, "StrProperty"},
            {"ImageReferenceTable", 0x110, "StructProperty"},
            {"OverrideUpsellPass", 0x120, "StrProperty"},
            {"bCrewOnRightInUpsell", 0x130, "BoolProperty"},
            {"bCrewOnlyInUpsell", 0x131, "BoolProperty"},
            {"bPassOnlyInUpsell", 0x132, "BoolProperty"},
            {"CMSUpsellConfig", 0x138, "StructProperty"},
            {"ExperimentUpsellConfig", 0x188, "StructProperty"},
            {"Disclaimer", 0x1D8, "TextProperty"},
            {"SubscriptionButtonText", 0x1E8, "TextProperty"},
            {"PriceText", 0x1F8, "TextProperty"},
            {"UserInformationTextPrimary", 0x208, "TextProperty"},
            {"UserInformationTextSecondary", 0x218, "TextProperty"},
            {"PaymentLegalText", 0x228, "TextProperty"},
            {"ProgressiveInfoNewStagesUnlockFinePrint", 0x238, "TextProperty"},
            {"CrewPackItems", 0x248, "ArrayProperty"},
            {"CancellationInfo", 0x258, "ObjectProperty"},
            {"SubscriptionShopData", 0x260, "ObjectProperty"},
            {"CrewShopData", 0x268, "ObjectProperty"},
            {"CrewOffer", 0x270, "ObjectProperty"},
            {"BenefitsGroups", 0x278, "ArrayProperty"},
            {"AltBenefitsGroups", 0x288, "ArrayProperty"},
            {"BenefitSetsByName", 0x298, "MapProperty"},
            {"SubscriptionModals", 0x2A8, "ArrayProperty"},
            {"UpsellBenefits", 0x2B8, "StructProperty"},
            {"PreviewBenefit", 0x328, "ObjectProperty"},
            {"RegisteredMcpProfile", 0x330, "WeakObjectProperty"},
        }};
    };

    struct FortAsyncAction_CrewCancelSubscription
    {
        static constexpr std::string_view Name = "FortAsyncAction_CrewCancelSubscription";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintAsyncActionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t OnOperationCompleted = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OnOperationCompleted", 0x30, "MulticastInlineDelegateProperty"},
        }};
    };

    struct FortProgressiveContentContainer
    {
        static constexpr std::string_view Name = "FortProgressiveContentContainer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortSubscriptionContentBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Switcher_PrimaryContent = 0x4D0;
            static constexpr std::uintptr_t Widget_ProgressiveTableOfContentsScreen = 0x4D8;
            static constexpr std::uintptr_t Widget_ProgressiveItemScreen = 0x4E0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Switcher_PrimaryContent", 0x4D0, "ObjectProperty"},
            {"Widget_ProgressiveTableOfContentsScreen", 0x4D8, "ObjectProperty"},
            {"Widget_ProgressiveItemScreen", 0x4E0, "ObjectProperty"},
        }};
    };

    struct FortProgressiveContentInterface
    {
        static constexpr std::string_view Name = "FortProgressiveContentInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortProgressiveItemScreen
    {
        static constexpr std::string_view Name = "FortProgressiveItemScreen";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortProgressiveScreenBase";
        struct Offsets
        {
            static constexpr std::uintptr_t MoreInfoModalClass = 0x4F8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MoreInfoModalClass", 0x4F8, "SoftClassProperty"},
        }};
    };

    struct FortProgressiveScreenBase
    {
        static constexpr std::string_view Name = "FortProgressiveScreenBase";
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

    struct FortProgressiveTableOfContentsScreen
    {
        static constexpr std::string_view Name = "FortProgressiveTableOfContentsScreen";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortProgressiveScreenBase";
        struct Offsets
        {
            static constexpr std::uintptr_t MoreInfoModalClass = 0x4F8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MoreInfoModalClass", 0x4F8, "SoftClassProperty"},
        }};
    };

}

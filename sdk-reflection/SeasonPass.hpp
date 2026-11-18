#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SeasonPass
{
    struct FortAsyncAction_SeasonPassBuyLevelsAndClaim
    {
        static constexpr std::string_view Name = "FortAsyncAction_SeasonPassBuyLevelsAndClaim";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAsyncAction_SeasonPassOperation";
        struct Offsets
        {
            static constexpr std::uintptr_t GiftBoxToDisplay = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"GiftBoxToDisplay", 0x78, "ObjectProperty"},
        }};
    };

    struct FortAsyncAction_SeasonPassOperation
    {
        static constexpr std::string_view Name = "FortAsyncAction_SeasonPassOperation";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAsyncAction_FromFunctionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t GiftBoxToDisplay = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"GiftBoxToDisplay", 0x78, "ObjectProperty"},
        }};
    };

    struct MSEEWalletVM
    {
        static constexpr std::string_view Name = "MSEEWalletVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t CurrentCurrency = 0x78;
            static constexpr std::uintptr_t SecondCurrentCurrency = 0x7C;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CurrentCurrency", 0x78, "IntProperty"},
            {"SecondCurrentCurrency", 0x7C, "IntProperty"},
        }};
    };

    struct SeasonPassBundleOfferVM
    {
        static constexpr std::string_view Name = "SeasonPassBundleOfferVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortSimpleOfferVM";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsOwned = 0x8C;
            static constexpr std::uintptr_t InDate = 0x90;
            static constexpr std::uintptr_t OutDate = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bIsOwned", 0x8C, "BoolProperty"},
            {"InDate", 0x90, "StructProperty"},
            {"OutDate", 0x98, "StructProperty"},
        }};
    };

    struct SeasonPassBuyLevelsVM
    {
        static constexpr std::string_view Name = "SeasonPassBuyLevelsVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t Pass = 0x78;
            static constexpr std::uintptr_t SelectedCategories = 0x80;
            static constexpr std::uintptr_t ChosenCategories = 0x90;
            static constexpr std::uintptr_t Action = 0xA0;
            static constexpr std::uintptr_t LevelsToBuy = 0xA4;
            static constexpr std::uintptr_t CurrentLevel = 0xA8;
            static constexpr std::uintptr_t FinalLevel = 0xAC;
            static constexpr std::uintptr_t Price = 0xB0;
            static constexpr std::uintptr_t FullPrice = 0xB4;
            static constexpr std::uintptr_t RewardsToClaim = 0xB8;
            static constexpr std::uintptr_t bShowBundle = 0xC8;
            static constexpr std::uintptr_t bBundleForced = 0xC9;
            static constexpr std::uintptr_t bBundleApplied = 0xCA;
            static constexpr std::uintptr_t BundleLevels = 0xCC;
            static constexpr std::uintptr_t BundlePrice = 0xD0;
            static constexpr std::uintptr_t BundleFullPrice = 0xD4;
            static constexpr std::uintptr_t LockedBySelectionCategories = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 17> Properties{{
            {"Pass", 0x78, "ObjectProperty"},
            {"SelectedCategories", 0x80, "ArrayProperty"},
            {"ChosenCategories", 0x90, "ArrayProperty"},
            {"Action", 0xA0, "EnumProperty"},
            {"LevelsToBuy", 0xA4, "IntProperty"},
            {"CurrentLevel", 0xA8, "IntProperty"},
            {"FinalLevel", 0xAC, "IntProperty"},
            {"Price", 0xB0, "IntProperty"},
            {"FullPrice", 0xB4, "IntProperty"},
            {"RewardsToClaim", 0xB8, "ArrayProperty"},
            {"bShowBundle", 0xC8, "BoolProperty"},
            {"bBundleForced", 0xC9, "BoolProperty"},
            {"bBundleApplied", 0xCA, "BoolProperty"},
            {"BundleLevels", 0xCC, "IntProperty"},
            {"BundlePrice", 0xD0, "IntProperty"},
            {"BundleFullPrice", 0xD4, "IntProperty"},
            {"LockedBySelectionCategories", 0xD8, "ArrayProperty"},
        }};
    };

    struct SeasonPassCategoryData
    {
        static constexpr std::string_view Name = "SeasonPassCategoryData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SeasonPassCategoryDataBase";
        struct Offsets
        {
            static constexpr std::uintptr_t GroupName = 0x38;
            static constexpr std::uintptr_t Title = 0x48;
            static constexpr std::uintptr_t Subtitle = 0x58;
            static constexpr std::uintptr_t PageTitle = 0x68;
            static constexpr std::uintptr_t Image = 0x78;
            static constexpr std::uintptr_t Icon = 0x98;
            static constexpr std::uintptr_t PreviewData = 0xB8;
            static constexpr std::uintptr_t ClaimSetsPreviewData = 0xC8;
            static constexpr std::uintptr_t bCanBuyLevels = 0xD8;
            static constexpr std::uintptr_t bHideProgressBar = 0xD9;
            static constexpr std::uintptr_t bShouldShowStatusBar = 0xDA;
            static constexpr std::uintptr_t bShouldShowNavigationTabs = 0xDB;
            static constexpr std::uintptr_t DependentCategory = 0xE0;
            static constexpr std::uintptr_t Requirements = 0xE8;
            static constexpr std::uintptr_t ThemeData = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"GroupName", 0x38, "StrProperty"},
            {"Title", 0x48, "TextProperty"},
            {"Subtitle", 0x58, "TextProperty"},
            {"PageTitle", 0x68, "TextProperty"},
            {"Image", 0x78, "SoftObjectProperty"},
            {"Icon", 0x98, "SoftObjectProperty"},
            {"PreviewData", 0xB8, "ArrayProperty"},
            {"ClaimSetsPreviewData", 0xC8, "ArrayProperty"},
            {"bCanBuyLevels", 0xD8, "BoolProperty"},
            {"bHideProgressBar", 0xD9, "BoolProperty"},
            {"bShouldShowStatusBar", 0xDA, "BoolProperty"},
            {"bShouldShowNavigationTabs", 0xDB, "BoolProperty"},
            {"DependentCategory", 0xE0, "ObjectProperty"},
            {"Requirements", 0xE8, "ObjectProperty"},
            {"ThemeData", 0xF0, "StructProperty"},
        }};
    };

    struct SeasonPassCategoryVM
    {
        static constexpr std::string_view Name = "SeasonPassCategoryVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SeasonPassElementBaseVM";
        struct Offsets
        {
            static constexpr std::uintptr_t Category = 0x128;
            static constexpr std::uintptr_t Pages = 0x130;
            static constexpr std::uintptr_t Title = 0x150;
            static constexpr std::uintptr_t bIsLevelRewardLocked = 0x160;
            static constexpr std::uintptr_t bIsDependentCategoryLocked = 0x161;
            static constexpr std::uintptr_t bIsFullyClaimed = 0x162;
            static constexpr std::uintptr_t CompletionOwnedCount = 0x164;
            static constexpr std::uintptr_t CompletionTotalCount = 0x168;
            static constexpr std::uintptr_t StatusText = 0x170;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"Category", 0x128, "ObjectProperty"},
            {"Pages", 0x130, "ArrayProperty"},
            {"Title", 0x150, "TextProperty"},
            {"bIsLevelRewardLocked", 0x160, "BoolProperty"},
            {"bIsDependentCategoryLocked", 0x161, "BoolProperty"},
            {"bIsFullyClaimed", 0x162, "BoolProperty"},
            {"CompletionOwnedCount", 0x164, "IntProperty"},
            {"CompletionTotalCount", 0x168, "IntProperty"},
            {"StatusText", 0x170, "TextProperty"},
        }};
    };

    struct SeasonPassCommonData
    {
        static constexpr std::string_view Name = "SeasonPassCommonData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SeasonPassCommonDataBase";
        struct Offsets
        {
            static constexpr std::uintptr_t PlaylistTagQuery = 0x48;
            static constexpr std::uintptr_t PassTabFeature = 0x4C;
            static constexpr std::uintptr_t CMSPage = 0x50;
            static constexpr std::uintptr_t SeasonPassGiftStorefront = 0x60;
            static constexpr std::uintptr_t SeasonPassGiftToken = 0x70;
            static constexpr std::uintptr_t SeasonPassGiftMetakey = 0x90;
            static constexpr std::uintptr_t SeasonPassTypeId = 0xA0;
            static constexpr std::uintptr_t PurchasePreMessageMaterial = 0xB0;
            static constexpr std::uintptr_t AutoSpendGiftBoxDefinition = 0xD0;
            static constexpr std::uintptr_t LongName = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"PlaylistTagQuery", 0x48, "StructProperty"},
            {"PassTabFeature", 0x4C, "OptionalProperty"},
            {"CMSPage", 0x50, "StrProperty"},
            {"SeasonPassGiftStorefront", 0x60, "StrProperty"},
            {"SeasonPassGiftToken", 0x70, "SoftObjectProperty"},
            {"SeasonPassGiftMetakey", 0x90, "StrProperty"},
            {"SeasonPassTypeId", 0xA0, "StrProperty"},
            {"PurchasePreMessageMaterial", 0xB0, "SoftObjectProperty"},
            {"AutoSpendGiftBoxDefinition", 0xD0, "SoftObjectProperty"},
            {"LongName", 0xF0, "TextProperty"},
        }};
    };

    struct SeasonPassCustomizableItemLockQueries
    {
        static constexpr std::string_view Name = "SeasonPassCustomizableItemLockQueries";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SeasonPassCustomizableItemRewardExtension
    {
        static constexpr std::string_view Name = "SeasonPassCustomizableItemRewardExtension";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SeasonPassRewardTileExtension";
        struct Offsets
        {
            static constexpr std::uintptr_t Label = 0x50;
            static constexpr std::uintptr_t ItemDefinitionOverride = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Label", 0x50, "TextProperty"},
            {"ItemDefinitionOverride", 0x60, "SoftObjectProperty"},
        }};
    };

    struct SeasonPassCustomizableItemRewardVM
    {
        static constexpr std::string_view Name = "SeasonPassCustomizableItemRewardVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SeasonPassElementBaseVM";
        struct Offsets
        {
            static constexpr std::uintptr_t Label = 0x128;
            static constexpr std::uintptr_t ItemVM = 0x138;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Label", 0x128, "TextProperty"},
            {"ItemVM", 0x138, "ObjectProperty"},
        }};
    };

    struct SeasonPassData
    {
        static constexpr std::string_view Name = "SeasonPassData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SeasonPassDataBase";
        struct Offsets
        {
            static constexpr std::uintptr_t LargeIcon = 0xA0;
            static constexpr std::uintptr_t SmallIcon = 0xC0;
            static constexpr std::uintptr_t SeasonName = 0xE0;
            static constexpr std::uintptr_t SeasonEndText = 0xF0;
            static constexpr std::uintptr_t BuyPassButtonName = 0x100;
            static constexpr std::uintptr_t ThemeData = 0x110;
            static constexpr std::uintptr_t PreviewData = 0x2E0;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"LargeIcon", 0xA0, "SoftObjectProperty"},
            {"SmallIcon", 0xC0, "SoftObjectProperty"},
            {"SeasonName", 0xE0, "TextProperty"},
            {"SeasonEndText", 0xF0, "TextProperty"},
            {"BuyPassButtonName", 0x100, "TextProperty"},
            {"ThemeData", 0x110, "StructProperty"},
            {"PreviewData", 0x2E0, "ArrayProperty"},
        }};
    };

    struct SeasonPassElementBaseVM
    {
        static constexpr std::string_view Name = "SeasonPassElementBaseVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsLocked = 0x68;
            static constexpr std::uintptr_t bIsTimeLocked = 0x69;
            static constexpr std::uintptr_t bCanUnlock = 0x6A;
            static constexpr std::uintptr_t bIsUnlockable = 0x6B;
            static constexpr std::uintptr_t LockStatusText = 0x70;
            static constexpr std::uintptr_t ShortLockStatusText = 0x80;
            static constexpr std::uintptr_t PrerequisiteHeaders = 0x90;
            static constexpr std::uintptr_t ElementTags = 0x98;
            static constexpr std::uintptr_t ExtensionVMs = 0xB8;
            static constexpr std::uintptr_t ChildGroupNames = 0xC8;
            static constexpr std::uintptr_t LinkedElements = 0xF8;
            static constexpr std::uintptr_t bDoesRequireProgressForUnlock = 0x108;
            static constexpr std::uintptr_t ProgressForUnlock = 0x10C;
            static constexpr std::uintptr_t ProgressCountForUnlock = 0x110;
            static constexpr std::uintptr_t ChildStorage = 0x118;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"bIsLocked", 0x68, "BoolProperty"},
            {"bIsTimeLocked", 0x69, "BoolProperty"},
            {"bCanUnlock", 0x6A, "BoolProperty"},
            {"bIsUnlockable", 0x6B, "BoolProperty"},
            {"LockStatusText", 0x70, "TextProperty"},
            {"ShortLockStatusText", 0x80, "TextProperty"},
            {"PrerequisiteHeaders", 0x90, "IntProperty"},
            {"ElementTags", 0x98, "StructProperty"},
            {"ExtensionVMs", 0xB8, "ArrayProperty"},
            {"ChildGroupNames", 0xC8, "ArrayProperty"},
            {"LinkedElements", 0xF8, "ArrayProperty"},
            {"bDoesRequireProgressForUnlock", 0x108, "BoolProperty"},
            {"ProgressForUnlock", 0x10C, "IntProperty"},
            {"ProgressCountForUnlock", 0x110, "IntProperty"},
            {"ChildStorage", 0x118, "ArrayProperty"},
        }};
    };

    struct SeasonPassEntitlementUtilityLibrary
    {
        static constexpr std::string_view Name = "SeasonPassEntitlementUtilityLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SeasonPassNextRewardVM
    {
        static constexpr std::string_view Name = "SeasonPassNextRewardVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t SeasonPass = 0x68;
            static constexpr std::uintptr_t NonOwnerUpsellData = 0x90;
            static constexpr std::uintptr_t NonOwnerCharacters = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SeasonPass", 0x68, "ObjectProperty"},
            {"NonOwnerUpsellData", 0x90, "SoftObjectProperty"},
            {"NonOwnerCharacters", 0xB0, "ObjectProperty"},
        }};
    };

    struct SeasonPassOfferRewardVM
    {
        static constexpr std::string_view Name = "SeasonPassOfferRewardVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SeasonPassRewardVM";
        struct Offsets
        {
            static constexpr std::uintptr_t Reward = 0x128;
            static constexpr std::uintptr_t ItemVMs = 0x130;
            static constexpr std::uintptr_t bIsRewardOwned = 0x140;
            static constexpr std::uintptr_t bShouldShowClaimButton = 0x141;
            static constexpr std::uintptr_t bShouldShowBuyRewardsButton = 0x142;
            static constexpr std::uintptr_t bShouldShowGetBattlePassButton = 0x143;
            static constexpr std::uintptr_t bShouldShowQuestButton = 0x144;
            static constexpr std::uintptr_t bShouldHideAllYellowButtons = 0x145;
            static constexpr std::uintptr_t bShouldShowEquipButton = 0x146;
            static constexpr std::uintptr_t bIsEquipped = 0x147;
            static constexpr std::uintptr_t bIsQuestDriven = 0x148;
            static constexpr std::uintptr_t bIsFreeRewardClaimableByReachingLevel = 0x149;
            static constexpr std::uintptr_t ProgressPercent = 0x14C;
            static constexpr std::uintptr_t bIsInitialized = 0x150;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"Reward", 0x128, "ObjectProperty"},
            {"ItemVMs", 0x130, "ArrayProperty"},
            {"bIsRewardOwned", 0x140, "BoolProperty"},
            {"bShouldShowClaimButton", 0x141, "BoolProperty"},
            {"bShouldShowBuyRewardsButton", 0x142, "BoolProperty"},
            {"bShouldShowGetBattlePassButton", 0x143, "BoolProperty"},
            {"bShouldShowQuestButton", 0x144, "BoolProperty"},
            {"bShouldHideAllYellowButtons", 0x145, "BoolProperty"},
            {"bShouldShowEquipButton", 0x146, "BoolProperty"},
            {"bIsEquipped", 0x147, "BoolProperty"},
            {"bIsQuestDriven", 0x148, "BoolProperty"},
            {"bIsFreeRewardClaimableByReachingLevel", 0x149, "BoolProperty"},
            {"ProgressPercent", 0x14C, "FloatProperty"},
            {"bIsInitialized", 0x150, "BoolProperty"},
        }};
    };

    struct SeasonPassPageVM
    {
        static constexpr std::string_view Name = "SeasonPassPageVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SeasonPassElementBaseVM";
        struct Offsets
        {
            static constexpr std::uintptr_t PageData = 0x128;
            static constexpr std::uintptr_t Tracks = 0x130;
            static constexpr std::uintptr_t PreviewItem = 0x140;
            static constexpr std::uintptr_t BackgroundData = 0x148;
            static constexpr std::uintptr_t bIsRewardLevelLocked = 0x1A0;
            static constexpr std::uintptr_t bIsDependentCategoryLocked = 0x1A1;
            static constexpr std::uintptr_t bShouldShowStatusText = 0x1A2;
            static constexpr std::uintptr_t bIsPageCompleted = 0x1A3;
            static constexpr std::uintptr_t StatusText = 0x1A8;
            static constexpr std::uintptr_t RewardsNeededToUnlock = 0x1B8;
            static constexpr std::uintptr_t LevelsNeededToUnlock = 0x1BC;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"PageData", 0x128, "ObjectProperty"},
            {"Tracks", 0x130, "ArrayProperty"},
            {"PreviewItem", 0x140, "ObjectProperty"},
            {"BackgroundData", 0x148, "StructProperty"},
            {"bIsRewardLevelLocked", 0x1A0, "BoolProperty"},
            {"bIsDependentCategoryLocked", 0x1A1, "BoolProperty"},
            {"bShouldShowStatusText", 0x1A2, "BoolProperty"},
            {"bIsPageCompleted", 0x1A3, "BoolProperty"},
            {"StatusText", 0x1A8, "TextProperty"},
            {"RewardsNeededToUnlock", 0x1B8, "IntProperty"},
            {"LevelsNeededToUnlock", 0x1BC, "IntProperty"},
        }};
    };

    struct SeasonPassQuestRewardVM
    {
        static constexpr std::string_view Name = "SeasonPassQuestRewardVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SeasonPassRewardVM";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsMysteryQuest = 0x158;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bIsMysteryQuest", 0x158, "BoolProperty"},
        }};
    };

    struct SeasonPassRequirement_Level
    {
        static constexpr std::string_view Name = "SeasonPassRequirement_Level";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SeasonPassRequirementBase";
        struct Offsets
        {
            static constexpr std::uintptr_t RequiredLevel = 0x28;
            static constexpr std::uintptr_t LockTextOverride = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"RequiredLevel", 0x28, "IntProperty"},
            {"LockTextOverride", 0x30, "TextProperty"},
        }};
    };

    struct SeasonPassRequirement_Offer
    {
        static constexpr std::string_view Name = "SeasonPassRequirement_Offer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SeasonPassRequirementBase";
        struct Offsets
        {
            static constexpr std::uintptr_t offer = 0x28;
            static constexpr std::uintptr_t bIsFreePassOffer = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"offer", 0x28, "StructProperty"},
            {"bIsFreePassOffer", 0xB0, "BoolProperty"},
        }};
    };

    struct SeasonPassRequirement_PassCategoryGroupComplete
    {
        static constexpr std::string_view Name = "SeasonPassRequirement_PassCategoryGroupComplete";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SeasonPassRequirementBase";
        struct Offsets
        {
            static constexpr std::uintptr_t GroupName = 0x28;
            static constexpr std::uintptr_t DisplayName = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"GroupName", 0x28, "StrProperty"},
            {"DisplayName", 0x38, "TextProperty"},
        }};
    };

    struct SeasonPassRequirement_PassOwned
    {
        static constexpr std::string_view Name = "SeasonPassRequirement_PassOwned";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SeasonPassRequirementBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SeasonPassRequirement_ReleaseVersion
    {
        static constexpr std::string_view Name = "SeasonPassRequirement_ReleaseVersion";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SeasonPassRequirementBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Version = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Version", 0x28, "StructProperty"},
        }};
    };

    struct SeasonPassRequirement_RewardsOwned
    {
        static constexpr std::string_view Name = "SeasonPassRequirement_RewardsOwned";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SeasonPassRequirementBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Scope = 0x28;
            static constexpr std::uintptr_t RequiredCount = 0x2C;
            static constexpr std::uintptr_t bRequireAllOthers = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Scope", 0x28, "EnumProperty"},
            {"RequiredCount", 0x2C, "IntProperty"},
            {"bRequireAllOthers", 0x30, "BoolProperty"},
        }};
    };

    struct SeasonPassRequirement_Timed
    {
        static constexpr std::string_view Name = "SeasonPassRequirement_Timed";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SeasonPassRequirementBase";
        struct Offsets
        {
            static constexpr std::uintptr_t EventFlagName = 0x28;
            static constexpr std::uintptr_t LockingChallengeScheduleSoftObjPtr = 0x38;
            static constexpr std::uintptr_t LockingChallengeBundleSoftObjPtr = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"EventFlagName", 0x28, "StrProperty"},
            {"LockingChallengeScheduleSoftObjPtr", 0x38, "SoftObjectProperty"},
            {"LockingChallengeBundleSoftObjPtr", 0x58, "SoftObjectProperty"},
        }};
    };

    struct SeasonPassRewardTileExtension
    {
        static constexpr std::string_view Name = "SeasonPassRewardTileExtension";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SeasonPassPageDataExtension";
        struct Offsets
        {
            static constexpr std::uintptr_t TrackIndex = 0x48;
            static constexpr std::uintptr_t RewardIndex = 0x4C;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"TrackIndex", 0x48, "IntProperty"},
            {"RewardIndex", 0x4C, "IntProperty"},
        }};
    };

    struct SeasonPassRewardTileTagsExtension
    {
        static constexpr std::string_view Name = "SeasonPassRewardTileTagsExtension";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SeasonPassRewardTileExtension";
        struct Offsets
        {
            static constexpr std::uintptr_t TrackIndex = 0x48;
            static constexpr std::uintptr_t RewardIndex = 0x4C;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"TrackIndex", 0x48, "IntProperty"},
            {"RewardIndex", 0x4C, "IntProperty"},
        }};
    };

    struct SeasonPassRewardVM
    {
        static constexpr std::string_view Name = "SeasonPassRewardVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SeasonPassElementBaseVM";
        struct Offsets
        {
            static constexpr std::uintptr_t Reward = 0x128;
            static constexpr std::uintptr_t ItemVMs = 0x130;
            static constexpr std::uintptr_t bIsRewardOwned = 0x140;
            static constexpr std::uintptr_t bShouldShowClaimButton = 0x141;
            static constexpr std::uintptr_t bShouldShowBuyRewardsButton = 0x142;
            static constexpr std::uintptr_t bShouldShowGetBattlePassButton = 0x143;
            static constexpr std::uintptr_t bShouldShowQuestButton = 0x144;
            static constexpr std::uintptr_t bShouldHideAllYellowButtons = 0x145;
            static constexpr std::uintptr_t bShouldShowEquipButton = 0x146;
            static constexpr std::uintptr_t bIsEquipped = 0x147;
            static constexpr std::uintptr_t bIsQuestDriven = 0x148;
            static constexpr std::uintptr_t bIsFreeRewardClaimableByReachingLevel = 0x149;
            static constexpr std::uintptr_t ProgressPercent = 0x14C;
            static constexpr std::uintptr_t bIsInitialized = 0x150;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"Reward", 0x128, "ObjectProperty"},
            {"ItemVMs", 0x130, "ArrayProperty"},
            {"bIsRewardOwned", 0x140, "BoolProperty"},
            {"bShouldShowClaimButton", 0x141, "BoolProperty"},
            {"bShouldShowBuyRewardsButton", 0x142, "BoolProperty"},
            {"bShouldShowGetBattlePassButton", 0x143, "BoolProperty"},
            {"bShouldShowQuestButton", 0x144, "BoolProperty"},
            {"bShouldHideAllYellowButtons", 0x145, "BoolProperty"},
            {"bShouldShowEquipButton", 0x146, "BoolProperty"},
            {"bIsEquipped", 0x147, "BoolProperty"},
            {"bIsQuestDriven", 0x148, "BoolProperty"},
            {"bIsFreeRewardClaimableByReachingLevel", 0x149, "BoolProperty"},
            {"ProgressPercent", 0x14C, "FloatProperty"},
            {"bIsInitialized", 0x150, "BoolProperty"},
        }};
    };

    struct SeasonPassSelectionVM
    {
        static constexpr std::string_view Name = "SeasonPassSelectionVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t SelectedPass = 0x78;
            static constexpr std::uintptr_t SelectedCategory = 0x80;
            static constexpr std::uintptr_t SelectedClaimSetsCategory = 0x88;
            static constexpr std::uintptr_t SelectedPage = 0x90;
            static constexpr std::uintptr_t SelectedReward = 0x98;
            static constexpr std::uintptr_t OfferInspection = 0xA0;
            static constexpr std::uintptr_t OfferPurchaseHoldProgress = 0xA8;
            static constexpr std::uintptr_t IsClaimingAll = 0xAC;
            static constexpr std::uintptr_t bIsNavigateToPurchaseExternal = 0xAD;
            static constexpr std::uintptr_t bIsNavigateToRewardExternal = 0xAE;
            static constexpr std::uintptr_t bIsNavigateToCrewExternal = 0xAF;
            static constexpr std::uintptr_t PreviewData = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"SelectedPass", 0x78, "ObjectProperty"},
            {"SelectedCategory", 0x80, "ObjectProperty"},
            {"SelectedClaimSetsCategory", 0x88, "ObjectProperty"},
            {"SelectedPage", 0x90, "ObjectProperty"},
            {"SelectedReward", 0x98, "ObjectProperty"},
            {"OfferInspection", 0xA0, "ObjectProperty"},
            {"OfferPurchaseHoldProgress", 0xA8, "FloatProperty"},
            {"IsClaimingAll", 0xAC, "BoolProperty"},
            {"bIsNavigateToPurchaseExternal", 0xAD, "BoolProperty"},
            {"bIsNavigateToRewardExternal", 0xAE, "BoolProperty"},
            {"bIsNavigateToCrewExternal", 0xAF, "BoolProperty"},
            {"PreviewData", 0xB0, "ArrayProperty"},
        }};
    };

    struct SeasonPassSharedRequirementExtension
    {
        static constexpr std::string_view Name = "SeasonPassSharedRequirementExtension";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SeasonPassPageDataExtension";
        struct Offsets
        {
            static constexpr std::uintptr_t SharedRequirements = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SharedRequirements", 0x48, "ArrayProperty"},
        }};
    };

    struct SeasonPassSharedRequirementVM
    {
        static constexpr std::string_view Name = "SeasonPassSharedRequirementVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SeasonPassElementBaseVM";
        struct Offsets
        {
            static constexpr std::uintptr_t SharedRunLength = 0x128;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SharedRunLength", 0x128, "IntProperty"},
        }};
    };

    struct SeasonPassShopOfferOverride
    {
        static constexpr std::string_view Name = "SeasonPassShopOfferOverride";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortItemShopOfferInspectionScreenWidgetOverrideBase";
        struct Offsets
        {
            static constexpr std::uintptr_t PurchasePassWidget = 0x28;
            static constexpr std::uintptr_t PurchaseBundleWidget = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PurchasePassWidget", 0x28, "SoftClassProperty"},
            {"PurchaseBundleWidget", 0x48, "SoftClassProperty"},
        }};
    };

    struct SeasonPassSystemVM
    {
        static constexpr std::string_view Name = "SeasonPassSystemVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t SeasonPasses = 0x80;
            static constexpr std::uintptr_t NumPurchaseableRewards = 0x90;
            static constexpr std::uintptr_t PendingSeasonPasses = 0xA0;
            static constexpr std::uintptr_t bWaitingForPassesToLoad = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"SeasonPasses", 0x80, "ArrayProperty"},
            {"NumPurchaseableRewards", 0x90, "IntProperty"},
            {"PendingSeasonPasses", 0xA0, "ArrayProperty"},
            {"bWaitingForPassesToLoad", 0x110, "BoolProperty"},
        }};
    };

    struct SeasonPassTagsExtensionVM
    {
        static constexpr std::string_view Name = "SeasonPassTagsExtensionVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SeasonPassElementBaseVM";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsLocked = 0x68;
            static constexpr std::uintptr_t bIsTimeLocked = 0x69;
            static constexpr std::uintptr_t bCanUnlock = 0x6A;
            static constexpr std::uintptr_t bIsUnlockable = 0x6B;
            static constexpr std::uintptr_t LockStatusText = 0x70;
            static constexpr std::uintptr_t ShortLockStatusText = 0x80;
            static constexpr std::uintptr_t PrerequisiteHeaders = 0x90;
            static constexpr std::uintptr_t ElementTags = 0x98;
            static constexpr std::uintptr_t ExtensionVMs = 0xB8;
            static constexpr std::uintptr_t ChildGroupNames = 0xC8;
            static constexpr std::uintptr_t LinkedElements = 0xF8;
            static constexpr std::uintptr_t bDoesRequireProgressForUnlock = 0x108;
            static constexpr std::uintptr_t ProgressForUnlock = 0x10C;
            static constexpr std::uintptr_t ProgressCountForUnlock = 0x110;
            static constexpr std::uintptr_t ChildStorage = 0x118;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"bIsLocked", 0x68, "BoolProperty"},
            {"bIsTimeLocked", 0x69, "BoolProperty"},
            {"bCanUnlock", 0x6A, "BoolProperty"},
            {"bIsUnlockable", 0x6B, "BoolProperty"},
            {"LockStatusText", 0x70, "TextProperty"},
            {"ShortLockStatusText", 0x80, "TextProperty"},
            {"PrerequisiteHeaders", 0x90, "IntProperty"},
            {"ElementTags", 0x98, "StructProperty"},
            {"ExtensionVMs", 0xB8, "ArrayProperty"},
            {"ChildGroupNames", 0xC8, "ArrayProperty"},
            {"LinkedElements", 0xF8, "ArrayProperty"},
            {"bDoesRequireProgressForUnlock", 0x108, "BoolProperty"},
            {"ProgressForUnlock", 0x10C, "IntProperty"},
            {"ProgressCountForUnlock", 0x110, "IntProperty"},
            {"ChildStorage", 0x118, "ArrayProperty"},
        }};
    };

    struct SeasonPassTrackVM
    {
        static constexpr std::string_view Name = "SeasonPassTrackVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SeasonPassElementBaseVM";
        struct Offsets
        {
            static constexpr std::uintptr_t Rewards = 0x128;
            static constexpr std::uintptr_t RewardsNeededForUnlock = 0x138;
            static constexpr std::uintptr_t LevelsNeededForUnlock = 0x13C;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Rewards", 0x128, "ArrayProperty"},
            {"RewardsNeededForUnlock", 0x138, "IntProperty"},
            {"LevelsNeededForUnlock", 0x13C, "IntProperty"},
        }};
    };

    struct SeasonPassVM
    {
        static constexpr std::string_view Name = "SeasonPassVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SeasonPassElementBaseVM";
        struct Offsets
        {
            static constexpr std::uintptr_t SeasonPass = 0x128;
            static constexpr std::uintptr_t SeasonPassDefinition = 0x130;
            static constexpr std::uintptr_t SeasonPassData = 0x138;
            static constexpr std::uintptr_t SeasonPassCommonData = 0x140;
            static constexpr std::uintptr_t SeasonPassLevelData = 0x148;
            static constexpr std::uintptr_t PlayerController = 0x150;
            static constexpr std::uintptr_t SeasonPassCMSData = 0x168;
            static constexpr std::uintptr_t Categories = 0x260;
            static constexpr std::uintptr_t BuyLevelsCategory = 0x270;
            static constexpr std::uintptr_t PurchaseContext = 0x278;
            static constexpr std::uintptr_t bCanBuyPass = 0x279;
            static constexpr std::uintptr_t bDoesOwnsPass = 0x27A;
            static constexpr std::uintptr_t bIsPassCompleted = 0x27B;
            static constexpr std::uintptr_t bCanGiftPass = 0x27C;
            static constexpr std::uintptr_t bCanBuyLevels = 0x27D;
            static constexpr std::uintptr_t bIsCmsDataAvailable = 0x27E;
            static constexpr std::uintptr_t bIsDevPass = 0x27F;
            static constexpr std::uintptr_t PassOffer = 0x280;
            static constexpr std::uintptr_t PassBundleOffer = 0x288;
            static constexpr std::uintptr_t LevelOffer = 0x290;
            static constexpr std::uintptr_t LevelBundleOffer = 0x298;
        };

        inline static constexpr std::array<PropertyInfo, 21> Properties{{
            {"SeasonPass", 0x128, "ObjectProperty"},
            {"SeasonPassDefinition", 0x130, "ObjectProperty"},
            {"SeasonPassData", 0x138, "ObjectProperty"},
            {"SeasonPassCommonData", 0x140, "ObjectProperty"},
            {"SeasonPassLevelData", 0x148, "ObjectProperty"},
            {"PlayerController", 0x150, "WeakObjectProperty"},
            {"SeasonPassCMSData", 0x168, "StructProperty"},
            {"Categories", 0x260, "ArrayProperty"},
            {"BuyLevelsCategory", 0x270, "ObjectProperty"},
            {"PurchaseContext", 0x278, "EnumProperty"},
            {"bCanBuyPass", 0x279, "BoolProperty"},
            {"bDoesOwnsPass", 0x27A, "BoolProperty"},
            {"bIsPassCompleted", 0x27B, "BoolProperty"},
            {"bCanGiftPass", 0x27C, "BoolProperty"},
            {"bCanBuyLevels", 0x27D, "BoolProperty"},
            {"bIsCmsDataAvailable", 0x27E, "BoolProperty"},
            {"bIsDevPass", 0x27F, "BoolProperty"},
            {"PassOffer", 0x280, "ObjectProperty"},
            {"PassBundleOffer", 0x288, "ObjectProperty"},
            {"LevelOffer", 0x290, "ObjectProperty"},
            {"LevelBundleOffer", 0x298, "ObjectProperty"},
        }};
    };

}

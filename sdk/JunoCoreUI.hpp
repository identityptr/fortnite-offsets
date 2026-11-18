#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::JunoCoreUI
{
    struct JunoContextMenu
    {
        static constexpr std::string_view Name = "JunoContextMenu";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t MenuActionToDisplayText = 0x4E0;
            static constexpr std::uintptr_t Widget_QuantitySelector = 0x4F0;
            static constexpr std::uintptr_t BackAction = 0x4F8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"MenuActionToDisplayText", 0x4E0, "MapProperty"},
            {"Widget_QuantitySelector", 0x4F0, "ObjectProperty"},
            {"BackAction", 0x4F8, "StructProperty"},
        }};
    };

    struct JunoCoreUIFunctionLibrary
    {
        static constexpr std::string_view Name = "JunoCoreUIFunctionLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoDropSplitModal
    {
        static constexpr std::string_view Name = "JunoDropSplitModal";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t Button_Confirm = 0x4C0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Button_Confirm", 0x4C0, "ObjectProperty"},
        }};
    };

    struct JunoGenericContextMenu
    {
        static constexpr std::string_view Name = "JunoGenericContextMenu";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t Switcher_MenuState = 0x4A0;
            static constexpr std::uintptr_t ButtonContainer = 0x4A8;
            static constexpr std::uintptr_t Widget_QuantitySelector = 0x4B0;
            static constexpr std::uintptr_t ContextMenuEntries = 0x4B8;
            static constexpr std::uintptr_t ContextMenuButtons = 0x4C8;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Switcher_MenuState", 0x4A0, "ObjectProperty"},
            {"ButtonContainer", 0x4A8, "ObjectProperty"},
            {"Widget_QuantitySelector", 0x4B0, "ObjectProperty"},
            {"ContextMenuEntries", 0x4B8, "MapProperty"},
            {"ContextMenuButtons", 0x4C8, "MapProperty"},
        }};
    };

    struct JunoIndexedWidgetInterface
    {
        static constexpr std::string_view Name = "JunoIndexedWidgetInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoPlayerAvatarContainer
    {
        static constexpr std::string_view Name = "JunoPlayerAvatarContainer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortHUDElementWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayerAvatarViewModel = 0x370;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PlayerAvatarViewModel", 0x370, "ObjectProperty"},
        }};
    };

    struct JunoPlayerCardViewModel
    {
        static constexpr std::string_view Name = "JunoPlayerCardViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayerName = 0x68;
            static constexpr std::uintptr_t PlayerRole = 0x78;
            static constexpr std::uintptr_t PlayerStatus = 0x79;
            static constexpr std::uintptr_t IsInParty = 0x7A;
            static constexpr std::uintptr_t IsViewOnly = 0x7B;
            static constexpr std::uintptr_t IsFriendsWithWorldOwner = 0x7C;
            static constexpr std::uintptr_t IsEliminated = 0x7D;
            static constexpr std::uintptr_t NumKeysLeft = 0x80;
            static constexpr std::uintptr_t IsLocalSplitscreenPlayer = 0x84;
            static constexpr std::uintptr_t UniqueNetId = 0x88;
            static constexpr std::uintptr_t OwningPlayerController = 0xB8;
            static constexpr std::uintptr_t OpenProfileActionMenuClass = 0xC0;
            static constexpr std::uintptr_t OnWorldKeyGranted = 0xE8;
            static constexpr std::uintptr_t OnWorldKeyRevoked = 0xF8;
            static constexpr std::uintptr_t OnWorldBanGranted = 0x108;
            static constexpr std::uintptr_t OnWorldBanRevoked = 0x118;
        };

        inline static constexpr std::array<PropertyInfo, 16> Properties{{
            {"PlayerName", 0x68, "TextProperty"},
            {"PlayerRole", 0x78, "EnumProperty"},
            {"PlayerStatus", 0x79, "EnumProperty"},
            {"IsInParty", 0x7A, "BoolProperty"},
            {"IsViewOnly", 0x7B, "BoolProperty"},
            {"IsFriendsWithWorldOwner", 0x7C, "BoolProperty"},
            {"IsEliminated", 0x7D, "BoolProperty"},
            {"NumKeysLeft", 0x80, "IntProperty"},
            {"IsLocalSplitscreenPlayer", 0x84, "BoolProperty"},
            {"UniqueNetId", 0x88, "StructProperty"},
            {"OwningPlayerController", 0xB8, "ObjectProperty"},
            {"OpenProfileActionMenuClass", 0xC0, "ClassProperty"},
            {"OnWorldKeyGranted", 0xE8, "MulticastInlineDelegateProperty"},
            {"OnWorldKeyRevoked", 0xF8, "MulticastInlineDelegateProperty"},
            {"OnWorldBanGranted", 0x108, "MulticastInlineDelegateProperty"},
            {"OnWorldBanRevoked", 0x118, "MulticastInlineDelegateProperty"},
        }};
    };

    struct JunoPlayerManagementViewModel
    {
        static constexpr std::string_view Name = "JunoPlayerManagementViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t NeedsInvitePlayerCards = 0x68;
            static constexpr std::uintptr_t InWorldPlayerCards = 0x78;
            static constexpr std::uintptr_t NotInWorldPlayerCards = 0x88;
            static constexpr std::uintptr_t BannedPlayerCards = 0x98;
            static constexpr std::uintptr_t SelectedPlayerCard = 0xA8;
            static constexpr std::uintptr_t WorldSanctionType = 0xB0;
            static constexpr std::uintptr_t NumKeysLeft = 0xB4;
            static constexpr std::uintptr_t NumSpotsLeft = 0xB8;
            static constexpr std::uintptr_t WorldName = 0xC0;
            static constexpr std::uintptr_t OwnerName = 0xD0;
            static constexpr std::uintptr_t IsWorldOwner = 0xE0;
            static constexpr std::uintptr_t IsViewOnly = 0xE1;
            static constexpr std::uintptr_t NumSurvivingKeyholders = 0xE4;
            static constexpr std::uintptr_t MaxNumOfPlayers = 0xE8;
            static constexpr std::uintptr_t MaxNumOfKeys = 0xEC;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"NeedsInvitePlayerCards", 0x68, "ArrayProperty"},
            {"InWorldPlayerCards", 0x78, "ArrayProperty"},
            {"NotInWorldPlayerCards", 0x88, "ArrayProperty"},
            {"BannedPlayerCards", 0x98, "ArrayProperty"},
            {"SelectedPlayerCard", 0xA8, "ObjectProperty"},
            {"WorldSanctionType", 0xB0, "EnumProperty"},
            {"NumKeysLeft", 0xB4, "IntProperty"},
            {"NumSpotsLeft", 0xB8, "IntProperty"},
            {"WorldName", 0xC0, "TextProperty"},
            {"OwnerName", 0xD0, "TextProperty"},
            {"IsWorldOwner", 0xE0, "BoolProperty"},
            {"IsViewOnly", 0xE1, "BoolProperty"},
            {"NumSurvivingKeyholders", 0xE4, "IntProperty"},
            {"MaxNumOfPlayers", 0xE8, "IntProperty"},
            {"MaxNumOfKeys", 0xEC, "IntProperty"},
        }};
    };

    struct JunoSanitizedEditableText
    {
        static constexpr std::string_view Name = "JunoSanitizedEditableText";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EditableTextBox";
        struct Offsets
        {
            static constexpr std::uintptr_t OnCharacterLimitReached = 0xEA0;
            static constexpr std::uintptr_t OnInvalidCharacterUsed = 0xEB0;
            static constexpr std::uintptr_t OnProfanityDetected = 0xEC0;
            static constexpr std::uintptr_t OnTextIsValid = 0xED0;
            static constexpr std::uintptr_t CharacterLimit = 0xEE0;
            static constexpr std::uintptr_t CharacterCount = 0xEE4;
            static constexpr std::uintptr_t ContextId = 0xEE8;
            static constexpr std::uintptr_t ContextEntity = 0xEF8;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"OnCharacterLimitReached", 0xEA0, "MulticastInlineDelegateProperty"},
            {"OnInvalidCharacterUsed", 0xEB0, "MulticastInlineDelegateProperty"},
            {"OnProfanityDetected", 0xEC0, "MulticastInlineDelegateProperty"},
            {"OnTextIsValid", 0xED0, "MulticastInlineDelegateProperty"},
            {"CharacterLimit", 0xEE0, "IntProperty"},
            {"CharacterCount", 0xEE4, "IntProperty"},
            {"ContextId", 0xEE8, "StrProperty"},
            {"ContextEntity", 0xEF8, "StrProperty"},
        }};
    };

    struct JunoSettingRotator
    {
        static constexpr std::string_view Name = "JunoSettingRotator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonRotator";
        struct Offsets
        {
            static constexpr std::uintptr_t OnRotatedWithDirection = 0x15E0;
            static constexpr std::uintptr_t OnRotated = 0x15F0;
            static constexpr std::uintptr_t MyText = 0x1618;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"OnRotatedWithDirection", 0x15E0, "MulticastInlineDelegateProperty"},
            {"OnRotated", 0x15F0, "MulticastInlineDelegateProperty"},
            {"MyText", 0x1618, "ObjectProperty"},
        }};
    };

    struct JunoUGCViewModel
    {
        static constexpr std::string_view Name = "JunoUGCViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ContextId = 0x68;
            static constexpr std::uintptr_t ContextEntity = 0x78;
            static constexpr std::uintptr_t CurrentText = 0x88;
            static constexpr std::uintptr_t DefaultText = 0x98;
            static constexpr std::uintptr_t bPendingSave = 0xA8;
            static constexpr std::uintptr_t bCharLimitReached = 0xA9;
            static constexpr std::uintptr_t bContainsSpecialChar = 0xAA;
            static constexpr std::uintptr_t bContainsProfanity = 0xAB;
            static constexpr std::uintptr_t bCustomValidationFailed = 0xAC;
            static constexpr std::uintptr_t bTextIsValid = 0xAD;
            static constexpr std::uintptr_t bGenericErrorOccurred = 0xAE;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"ContextId", 0x68, "StrProperty"},
            {"ContextEntity", 0x78, "StrProperty"},
            {"CurrentText", 0x88, "TextProperty"},
            {"DefaultText", 0x98, "TextProperty"},
            {"bPendingSave", 0xA8, "BoolProperty"},
            {"bCharLimitReached", 0xA9, "BoolProperty"},
            {"bContainsSpecialChar", 0xAA, "BoolProperty"},
            {"bContainsProfanity", 0xAB, "BoolProperty"},
            {"bCustomValidationFailed", 0xAC, "BoolProperty"},
            {"bTextIsValid", 0xAD, "BoolProperty"},
            {"bGenericErrorOccurred", 0xAE, "BoolProperty"},
        }};
    };

    struct JunoVirtualKeyboardViewModel
    {
        static constexpr std::string_view Name = "JunoVirtualKeyboardViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t VirtualKeyboardState = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"VirtualKeyboardState", 0x68, "StructProperty"},
        }};
    };

    struct JunoWorldCheckpointViewModel
    {
        static constexpr std::string_view Name = "JunoWorldCheckpointViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bMarkedAsPreserved = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bMarkedAsPreserved", 0x80, "BoolProperty"},
        }};
    };

    struct JunoWorldDataViewModel
    {
        static constexpr std::string_view Name = "JunoWorldDataViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t WorldName = 0x68;
            static constexpr std::uintptr_t WorldSlotNumber = 0x78;
            static constexpr std::uintptr_t WorldOwner = 0x80;
            static constexpr std::uintptr_t WorldOwnerId = 0x90;
            static constexpr std::uintptr_t CreationDate = 0xC0;
            static constexpr std::uintptr_t LastPlayed = 0xC8;
            static constexpr std::uintptr_t TimePlayed = 0xD0;
            static constexpr std::uintptr_t bIsEliminated = 0xE0;
            static constexpr std::uintptr_t NumSurvivingKeyholders = 0xE4;
            static constexpr std::uintptr_t bIsCreateFlow = 0xE8;
            static constexpr std::uintptr_t bIsRestoreFlow = 0xE9;
            static constexpr std::uintptr_t bIsEmptyWorldSlot = 0xEA;
            static constexpr std::uintptr_t bIsNewInvitation = 0xEB;
            static constexpr std::uintptr_t WorldImageObj = 0xF0;
            static constexpr std::uintptr_t ActivePlayers = 0xF8;
            static constexpr std::uintptr_t GrantedKeys = 0xFC;
            static constexpr std::uintptr_t NameVM = 0x100;
            static constexpr std::uintptr_t ModeVM = 0x108;
            static constexpr std::uintptr_t ImageVM = 0x110;
            static constexpr std::uintptr_t SeedVM = 0x118;
            static constexpr std::uintptr_t bSettingsLocked = 0x120;
            static constexpr std::uintptr_t bSettingsChangedAfterGeneration = 0x121;
            static constexpr std::uintptr_t MaxPlayersInWorld = 0x124;
            static constexpr std::uintptr_t MatchmakingError = 0x128;
            static constexpr std::uintptr_t SanctionType = 0x129;
            static constexpr std::uintptr_t RestoreBlockedReason = 0x12A;
            static constexpr std::uintptr_t NextRestoreAllowedAt = 0x130;
            static constexpr std::uintptr_t bIsSharedWorld = 0x138;
            static constexpr std::uintptr_t bIsCustom = 0x139;
            static constexpr std::uintptr_t bCanBeSaved = 0x13A;
            static constexpr std::uintptr_t bAllowWorldUGCCreation = 0x13B;
            static constexpr std::uintptr_t bIsInCabinMode = 0x13C;
            static constexpr std::uintptr_t AdvancedSettingsList = 0x160;
            static constexpr std::uintptr_t WorldImageList = 0x170;
            static constexpr std::uintptr_t WorldId = 0x190;
            static constexpr std::uintptr_t OriginalData = 0x1A0;
            static constexpr std::uintptr_t WidgetOwnerPC = 0x1A8;
            static constexpr std::uintptr_t WorldVersions = 0x1B0;
        };

        inline static constexpr std::array<PropertyInfo, 38> Properties{{
            {"WorldName", 0x68, "TextProperty"},
            {"WorldSlotNumber", 0x78, "IntProperty"},
            {"WorldOwner", 0x80, "TextProperty"},
            {"WorldOwnerId", 0x90, "StructProperty"},
            {"CreationDate", 0xC0, "StructProperty"},
            {"LastPlayed", 0xC8, "StructProperty"},
            {"TimePlayed", 0xD0, "TextProperty"},
            {"bIsEliminated", 0xE0, "BoolProperty"},
            {"NumSurvivingKeyholders", 0xE4, "IntProperty"},
            {"bIsCreateFlow", 0xE8, "BoolProperty"},
            {"bIsRestoreFlow", 0xE9, "BoolProperty"},
            {"bIsEmptyWorldSlot", 0xEA, "BoolProperty"},
            {"bIsNewInvitation", 0xEB, "BoolProperty"},
            {"WorldImageObj", 0xF0, "ObjectProperty"},
            {"ActivePlayers", 0xF8, "IntProperty"},
            {"GrantedKeys", 0xFC, "IntProperty"},
            {"NameVM", 0x100, "ObjectProperty"},
            {"ModeVM", 0x108, "ObjectProperty"},
            {"ImageVM", 0x110, "ObjectProperty"},
            {"SeedVM", 0x118, "ObjectProperty"},
            {"bSettingsLocked", 0x120, "BoolProperty"},
            {"bSettingsChangedAfterGeneration", 0x121, "BoolProperty"},
            {"MaxPlayersInWorld", 0x124, "IntProperty"},
            {"MatchmakingError", 0x128, "EnumProperty"},
            {"SanctionType", 0x129, "EnumProperty"},
            {"RestoreBlockedReason", 0x12A, "EnumProperty"},
            {"NextRestoreAllowedAt", 0x130, "StructProperty"},
            {"bIsSharedWorld", 0x138, "BoolProperty"},
            {"bIsCustom", 0x139, "BoolProperty"},
            {"bCanBeSaved", 0x13A, "BoolProperty"},
            {"bAllowWorldUGCCreation", 0x13B, "BoolProperty"},
            {"bIsInCabinMode", 0x13C, "BoolProperty"},
            {"AdvancedSettingsList", 0x160, "ArrayProperty"},
            {"WorldImageList", 0x170, "ArrayProperty"},
            {"WorldId", 0x190, "StrProperty"},
            {"OriginalData", 0x1A0, "ObjectProperty"},
            {"WidgetOwnerPC", 0x1A8, "ObjectProperty"},
            {"WorldVersions", 0x1B0, "ArrayProperty"},
        }};
    };

    struct JunoWorldImageObject
    {
        static constexpr std::string_view Name = "JunoWorldImageObject";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t OnTextureUpdated = 0x28;
            static constexpr std::uintptr_t RowHandle = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OnTextureUpdated", 0x28, "MulticastInlineDelegateProperty"},
            {"RowHandle", 0x38, "StructProperty"},
        }};
    };

    struct JunoWorldSettingViewModel
    {
        static constexpr std::string_view Name = "JunoWorldSettingViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t SettingId = 0x68;
            static constexpr std::uintptr_t SettingName = 0x78;
            static constexpr std::uintptr_t SettingCategory = 0x88;
            static constexpr std::uintptr_t SelectedOption = 0x8C;
            static constexpr std::uintptr_t SelectedModeIndex = 0x90;
            static constexpr std::uintptr_t CanDefaultBeChangedPerMode = 0x98;
            static constexpr std::uintptr_t CanChangePostCreation = 0xA8;
            static constexpr std::uintptr_t DefaultOptionPerMode = 0xB8;
            static constexpr std::uintptr_t NumericValue = 0xC8;
            static constexpr std::uintptr_t UGCViewModel = 0xD0;
            static constexpr std::uintptr_t bIsGameMode = 0xD8;
            static constexpr std::uintptr_t bContainsUGC = 0xD9;
            static constexpr std::uintptr_t OptionList = 0xE0;
            static constexpr std::uintptr_t SettingImage = 0xF0;
            static constexpr std::uintptr_t bShowDefaultTag = 0x110;
            static constexpr std::uintptr_t bIsCustom = 0x111;
            static constexpr std::uintptr_t bIsLocked = 0x112;
            static constexpr std::uintptr_t bCanBeLocked = 0x113;
            static constexpr std::uintptr_t bBlockQuestProgressIfChanged = 0x114;
            static constexpr std::uintptr_t OnSelectedOptionChangedDynamic = 0x128;
        };

        inline static constexpr std::array<PropertyInfo, 20> Properties{{
            {"SettingId", 0x68, "StrProperty"},
            {"SettingName", 0x78, "TextProperty"},
            {"SettingCategory", 0x88, "EnumProperty"},
            {"SelectedOption", 0x8C, "IntProperty"},
            {"SelectedModeIndex", 0x90, "IntProperty"},
            {"CanDefaultBeChangedPerMode", 0x98, "ArrayProperty"},
            {"CanChangePostCreation", 0xA8, "ArrayProperty"},
            {"DefaultOptionPerMode", 0xB8, "ArrayProperty"},
            {"NumericValue", 0xC8, "IntProperty"},
            {"UGCViewModel", 0xD0, "ObjectProperty"},
            {"bIsGameMode", 0xD8, "BoolProperty"},
            {"bContainsUGC", 0xD9, "BoolProperty"},
            {"OptionList", 0xE0, "ArrayProperty"},
            {"SettingImage", 0xF0, "SoftObjectProperty"},
            {"bShowDefaultTag", 0x110, "BoolProperty"},
            {"bIsCustom", 0x111, "BoolProperty"},
            {"bIsLocked", 0x112, "BoolProperty"},
            {"bCanBeLocked", 0x113, "BoolProperty"},
            {"bBlockQuestProgressIfChanged", 0x114, "BoolProperty"},
            {"OnSelectedOptionChangedDynamic", 0x128, "MulticastInlineDelegateProperty"},
        }};
    };

    struct JunoWorldSettingsScreenBase
    {
        static constexpr std::string_view Name = "JunoWorldSettingsScreenBase";
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

}

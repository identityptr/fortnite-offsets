#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::PilgrimQuickplayUI
{
    struct FestivalPassTrackingWidget
    {
        static constexpr std::string_view Name = "FestivalPassTrackingWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t CurrentProgress = 0x330;
            static constexpr std::uintptr_t TrackedItem = 0x338;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CurrentProgress", 0x330, "IntProperty"},
            {"TrackedItem", 0x338, "SoftObjectProperty"},
        }};
    };

    struct PilgrimAudioInputDeviceInfoVM
    {
        static constexpr std::string_view Name = "PilgrimAudioInputDeviceInfoVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimEventDrivenVM";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsAvailable = 0x90;
            static constexpr std::uintptr_t bHasMicrophonePermission = 0x91;
            static constexpr std::uintptr_t DisplayName = 0x98;
            static constexpr std::uintptr_t DeviceID = 0xA8;
            static constexpr std::uintptr_t InputVolume = 0xB8;
            static constexpr std::uintptr_t CachedAudioCaptureComponent = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"bIsAvailable", 0x90, "BoolProperty"},
            {"bHasMicrophonePermission", 0x91, "BoolProperty"},
            {"DisplayName", 0x98, "TextProperty"},
            {"DeviceID", 0xA8, "TextProperty"},
            {"InputVolume", 0xB8, "FloatProperty"},
            {"CachedAudioCaptureComponent", 0xD8, "ObjectProperty"},
        }};
    };

    struct PilgrimCommonActivatableWidget
    {
        static constexpr std::string_view Name = "PilgrimCommonActivatableWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t bIgnoreInputRegistration = 0x4A0;
            static constexpr std::uintptr_t bSidebarOpensOnlyWithGamepad = 0x4A1;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bIgnoreInputRegistration", 0x4A0, "BoolProperty"},
            {"bSidebarOpensOnlyWithGamepad", 0x4A1, "BoolProperty"},
        }};
    };

    struct PilgrimCuratedSetlistVM
    {
        static constexpr std::string_view Name = "PilgrimCuratedSetlistVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimEventDrivenVM";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsCuratedSetlist = 0x90;
            static constexpr std::uintptr_t CuratedSetlistName = 0x98;
            static constexpr std::uintptr_t SetlistComp = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bIsCuratedSetlist", 0x90, "BoolProperty"},
            {"CuratedSetlistName", 0x98, "TextProperty"},
            {"SetlistComp", 0xA8, "ObjectProperty"},
        }};
    };

    struct PilgrimDynamicUIDirector
    {
        static constexpr std::string_view Name = "PilgrimDynamicUIDirector";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SparksDynamicUIDirector";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultScenes = 0x278;
            static constexpr std::uintptr_t OwningLocalPlayer = 0x288;
            static constexpr std::uintptr_t bEnabledDuringReplay = 0x290;
            static constexpr std::uintptr_t ScenesManuallyAdded = 0x298;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"DefaultScenes", 0x278, "ArrayProperty"},
            {"OwningLocalPlayer", 0x288, "WeakObjectProperty"},
            {"bEnabledDuringReplay", 0x290, "BoolProperty"},
            {"ScenesManuallyAdded", 0x298, "ArrayProperty"},
        }};
    };

    struct PilgrimFastStartPlayerControllerComponent
    {
        static constexpr std::string_view Name = "PilgrimFastStartPlayerControllerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PrimaryComponentTick = 0x38;
            static constexpr std::uintptr_t ComponentTags = 0x68;
            static constexpr std::uintptr_t AssetUserData = 0x78;
            static constexpr std::uintptr_t UCSSerializationIndex = 0x90;
            static constexpr std::uintptr_t bNetAddressable = 0x98;
            static constexpr std::uintptr_t bReplicateUsingRegisteredSubObjectList = 0x98;
            static constexpr std::uintptr_t bReplicates = 0x98;
            static constexpr std::uintptr_t bAutoActivate = 0x9A;
            static constexpr std::uintptr_t bCanEverAffectNavigation = 0x9A;
            static constexpr std::uintptr_t bEditableWhenInherited = 0x9A;
            static constexpr std::uintptr_t bIsActive = 0x9A;
            static constexpr std::uintptr_t bIsEditorOnly = 0x9B;
            static constexpr std::uintptr_t CreationMethod = 0xB9;
            static constexpr std::uintptr_t OnComponentActivated = 0xBA;
            static constexpr std::uintptr_t OnComponentDeactivated = 0xBB;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"PrimaryComponentTick", 0x38, "StructProperty"},
            {"ComponentTags", 0x68, "ArrayProperty"},
            {"AssetUserData", 0x78, "ArrayProperty"},
            {"UCSSerializationIndex", 0x90, "IntProperty"},
            {"bNetAddressable", 0x98, "BoolProperty"},
            {"bReplicateUsingRegisteredSubObjectList", 0x98, "BoolProperty"},
            {"bReplicates", 0x98, "BoolProperty"},
            {"bAutoActivate", 0x9A, "BoolProperty"},
            {"bCanEverAffectNavigation", 0x9A, "BoolProperty"},
            {"bEditableWhenInherited", 0x9A, "BoolProperty"},
            {"bIsActive", 0x9A, "BoolProperty"},
            {"bIsEditorOnly", 0x9B, "BoolProperty"},
            {"CreationMethod", 0xB9, "EnumProperty"},
            {"OnComponentActivated", 0xBA, "MulticastSparseDelegateProperty"},
            {"OnComponentDeactivated", 0xBB, "MulticastSparseDelegateProperty"},
        }};
    };

    struct PilgrimHUDBase
    {
        static constexpr std::string_view Name = "PilgrimHUDBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortNullHUD";
        struct Offsets
        {
            static constexpr std::uintptr_t OnPrimaryContentStackReady = 0x560;
            static constexpr std::uintptr_t PreventOrientationChangeTag = 0x570;
            static constexpr std::uintptr_t SideBarObjectInputAction = 0x578;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"OnPrimaryContentStackReady", 0x560, "MulticastInlineDelegateProperty"},
            {"PreventOrientationChangeTag", 0x570, "StructProperty"},
            {"SideBarObjectInputAction", 0x578, "StructProperty"},
        }};
    };

    struct PilgrimMicrophoneIssuesVM
    {
        static constexpr std::string_view Name = "PilgrimMicrophoneIssuesVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimEventDrivenVM";
        struct Offsets
        {
            static constexpr std::uintptr_t MicrophoneIssueType = 0x90;
            static constexpr std::uintptr_t bShowIssueNotification = 0x91;
            static constexpr std::uintptr_t bHasMicrophonePermission = 0x92;
            static constexpr std::uintptr_t PlayerStateSelectedInstrument = 0x93;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"MicrophoneIssueType", 0x90, "EnumProperty"},
            {"bShowIssueNotification", 0x91, "BoolProperty"},
            {"bHasMicrophonePermission", 0x92, "BoolProperty"},
            {"PlayerStateSelectedInstrument", 0x93, "EnumProperty"},
        }};
    };

    struct PilgrimNextUpSongVM
    {
        static constexpr std::string_view Name = "PilgrimNextUpSongVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t NextUpSongItemVM = 0x78;
            static constexpr std::uintptr_t NextUpSongItemDetailsVM = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"NextUpSongItemVM", 0x78, "ObjectProperty"},
            {"NextUpSongItemDetailsVM", 0x80, "ObjectProperty"},
        }};
    };

    struct PilgrimPartPickerBaseWidget
    {
        static constexpr std::string_view Name = "PilgrimPartPickerBaseWidget";
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

    struct PilgrimPartPickerNavOverride
    {
        static constexpr std::string_view Name = "PilgrimPartPickerNavOverride";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortNavigationWidgetBase";
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

    struct PilgrimPostGameQuestList
    {
        static constexpr std::string_view Name = "PilgrimPostGameQuestList";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t EntryBox_Quests = 0x330;
            static constexpr std::uintptr_t QuestWidgetMap = 0x338;
            static constexpr std::uintptr_t bShowCompletedQuests = 0x348;
            static constexpr std::uintptr_t bShowUpdatedQuests = 0x349;
            static constexpr std::uintptr_t bShowUnchangedQuests = 0x34A;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"EntryBox_Quests", 0x330, "ObjectProperty"},
            {"QuestWidgetMap", 0x338, "MapProperty"},
            {"bShowCompletedQuests", 0x348, "BoolProperty"},
            {"bShowUpdatedQuests", 0x349, "BoolProperty"},
            {"bShowUnchangedQuests", 0x34A, "BoolProperty"},
        }};
    };

    struct PilgrimQuestNotificationEntry
    {
        static constexpr std::string_view Name = "PilgrimQuestNotificationEntry";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t Text_Description = 0x330;
            static constexpr std::uintptr_t RichText_CategoryDisplay = 0x338;
            static constexpr std::uintptr_t Text_FlavorText = 0x340;
            static constexpr std::uintptr_t RichText_ObjectivesCompleted = 0x348;
            static constexpr std::uintptr_t Image_Completion = 0x350;
            static constexpr std::uintptr_t UserWidget_Rewards = 0x358;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Text_Description", 0x330, "ObjectProperty"},
            {"RichText_CategoryDisplay", 0x338, "ObjectProperty"},
            {"Text_FlavorText", 0x340, "ObjectProperty"},
            {"RichText_ObjectivesCompleted", 0x348, "ObjectProperty"},
            {"Image_Completion", 0x350, "ObjectProperty"},
            {"UserWidget_Rewards", 0x358, "ObjectProperty"},
        }};
    };

    struct PilgrimQuickplayBackstagePlayerLocationVM
    {
        static constexpr std::string_view Name = "PilgrimQuickplayBackstagePlayerLocationVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimEventDrivenVM";
        struct Offsets
        {
            static constexpr std::uintptr_t OrderedPlayers = 0x90;
            static constexpr std::uintptr_t PlayerManager = 0xA0;
            static constexpr std::uintptr_t CountComponent = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"OrderedPlayers", 0x90, "ArrayProperty"},
            {"PlayerManager", 0xA0, "ObjectProperty"},
            {"CountComponent", 0xA8, "WeakObjectProperty"},
        }};
    };

    struct PilgrimQuickplayCVarsVM
    {
        static constexpr std::string_view Name = "PilgrimQuickplayCVarsVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t BackstagePlayerMovementDisabled = 0x78;
            static constexpr std::uintptr_t ShowSeasonalLeaderboardUI = 0x79;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"BackstagePlayerMovementDisabled", 0x78, "BoolProperty"},
            {"ShowSeasonalLeaderboardUI", 0x79, "BoolProperty"},
        }};
    };

    struct PilgrimQuickplayCustomSetlistVM
    {
        static constexpr std::string_view Name = "PilgrimQuickplayCustomSetlistVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimEventDrivenVM";
        struct Offsets
        {
            static constexpr std::uintptr_t SetlistItems = 0x90;
            static constexpr std::uintptr_t SelectedSongDetails = 0xA0;
            static constexpr std::uintptr_t bIsSingleSongPlay = 0xB0;
            static constexpr std::uintptr_t MaxSongsForPlayer = 0xB4;
            static constexpr std::uintptr_t AvailableSongsForPlayer = 0xB8;
            static constexpr std::uintptr_t SelectedSongs = 0xBC;
            static constexpr std::uintptr_t IsSetListValid = 0xC0;
            static constexpr std::uintptr_t DefaultSetlistLength = 0xC4;
            static constexpr std::uintptr_t CustomSetlist = 0xC8;
            static constexpr std::uintptr_t CachedLockerCategory = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"SetlistItems", 0x90, "ArrayProperty"},
            {"SelectedSongDetails", 0xA0, "ArrayProperty"},
            {"bIsSingleSongPlay", 0xB0, "BoolProperty"},
            {"MaxSongsForPlayer", 0xB4, "IntProperty"},
            {"AvailableSongsForPlayer", 0xB8, "IntProperty"},
            {"SelectedSongs", 0xBC, "IntProperty"},
            {"IsSetListValid", 0xC0, "BoolProperty"},
            {"DefaultSetlistLength", 0xC4, "IntProperty"},
            {"CustomSetlist", 0xC8, "ObjectProperty"},
            {"CachedLockerCategory", 0xD0, "ObjectProperty"},
        }};
    };

    struct PilgrimQuickplayInfoModal
    {
        static constexpr std::string_view Name = "PilgrimQuickplayInfoModal";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t Vbox_Panels = 0x4A0;
            static constexpr std::uintptr_t Button_Close = 0x4A8;
            static constexpr std::uintptr_t Button_Close_Alt = 0x4B0;
            static constexpr std::uintptr_t Button_CloseTouch = 0x4B8;
            static constexpr std::uintptr_t ScrollBox_Panels = 0x4C0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Vbox_Panels", 0x4A0, "ObjectProperty"},
            {"Button_Close", 0x4A8, "ObjectProperty"},
            {"Button_Close_Alt", 0x4B0, "ObjectProperty"},
            {"Button_CloseTouch", 0x4B8, "ObjectProperty"},
            {"ScrollBox_Panels", 0x4C0, "ObjectProperty"},
        }};
    };

    struct PilgrimQuickplayLeaderboardActivityItemVM
    {
        static constexpr std::string_view Name = "PilgrimQuickplayLeaderboardActivityItemVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimQuickplayLeaderboardFilterItemVMBase";
        struct Offsets
        {
            static constexpr std::uintptr_t OppositeLabel = 0x80;
            static constexpr std::uintptr_t bIsSelectable = 0x90;
            static constexpr std::uintptr_t TabBinding = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"OppositeLabel", 0x80, "TextProperty"},
            {"bIsSelectable", 0x90, "BoolProperty"},
            {"TabBinding", 0x98, "ObjectProperty"},
        }};
    };

    struct PilgrimQuickplayLeaderboardAudienceItemVM
    {
        static constexpr std::string_view Name = "PilgrimQuickplayLeaderboardAudienceItemVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimQuickplayLeaderboardFilterItemVMBase";
        struct Offsets
        {
            static constexpr std::uintptr_t OppositeLabel = 0x80;
            static constexpr std::uintptr_t bIsSelectable = 0x90;
            static constexpr std::uintptr_t TabBinding = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"OppositeLabel", 0x80, "TextProperty"},
            {"bIsSelectable", 0x90, "BoolProperty"},
            {"TabBinding", 0x98, "ObjectProperty"},
        }};
    };

    struct PilgrimQuickplayLeaderboardBandSizeFilterVM
    {
        static constexpr std::string_view Name = "PilgrimQuickplayLeaderboardBandSizeFilterVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t BandSize = 0x68;
            static constexpr std::uintptr_t TabBinding = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"BandSize", 0x68, "EnumProperty"},
            {"TabBinding", 0x70, "ObjectProperty"},
        }};
    };

    struct PilgrimQuickplayLeaderboardBandSizeTabBinding
    {
        static constexpr std::string_view Name = "PilgrimQuickplayLeaderboardBandSizeTabBinding";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimQuickplayLeaderboardTabBinding";
        struct Offsets
        {
            static constexpr std::uintptr_t BandSizeFilter = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"BandSizeFilter", 0x48, "ObjectProperty"},
        }};
    };

    struct PilgrimQuickplayLeaderboardFilterItemVMBase
    {
        static constexpr std::string_view Name = "PilgrimQuickplayLeaderboardFilterItemVMBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortOptionItemVM";
        struct Offsets
        {
            static constexpr std::uintptr_t OppositeLabel = 0x80;
            static constexpr std::uintptr_t bIsSelectable = 0x90;
            static constexpr std::uintptr_t TabBinding = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"OppositeLabel", 0x80, "TextProperty"},
            {"bIsSelectable", 0x90, "BoolProperty"},
            {"TabBinding", 0x98, "ObjectProperty"},
        }};
    };

    struct PilgrimQuickplayLeaderboardFilterToggleTabBinding
    {
        static constexpr std::string_view Name = "PilgrimQuickplayLeaderboardFilterToggleTabBinding";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimQuickplayLeaderboardTabBinding";
        struct Offsets
        {
            static constexpr std::uintptr_t Filter = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Filter", 0x48, "ObjectProperty"},
        }};
    };

    struct PilgrimQuickplayLeaderboardItemVM
    {
        static constexpr std::string_view Name = "PilgrimQuickplayLeaderboardItemVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Rank = 0x68;
            static constexpr std::uintptr_t FriendOrPlayerRank = 0x6C;
            static constexpr std::uintptr_t Score = 0x70;
            static constexpr std::uintptr_t SeasonNumber = 0x74;
            static constexpr std::uintptr_t bShowSeasonBadge = 0x78;
            static constexpr std::uintptr_t StarsEarned = 0x7C;
            static constexpr std::uintptr_t Accuracy = 0x80;
            static constexpr std::uintptr_t bFullCombo = 0x84;
            static constexpr std::uintptr_t Difficulty = 0x85;
            static constexpr std::uintptr_t bIsLocalPlayer = 0x86;
            static constexpr std::uintptr_t PlayerDisplayNames = 0x88;
            static constexpr std::uintptr_t bIsSoloEntry = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"Rank", 0x68, "IntProperty"},
            {"FriendOrPlayerRank", 0x6C, "IntProperty"},
            {"Score", 0x70, "IntProperty"},
            {"SeasonNumber", 0x74, "IntProperty"},
            {"bShowSeasonBadge", 0x78, "BoolProperty"},
            {"StarsEarned", 0x7C, "IntProperty"},
            {"Accuracy", 0x80, "FloatProperty"},
            {"bFullCombo", 0x84, "BoolProperty"},
            {"Difficulty", 0x85, "EnumProperty"},
            {"bIsLocalPlayer", 0x86, "BoolProperty"},
            {"PlayerDisplayNames", 0x88, "ArrayProperty"},
            {"bIsSoloEntry", 0x98, "BoolProperty"},
        }};
    };

    struct PilgrimQuickplayLeaderboardPreviewVM
    {
        static constexpr std::string_view Name = "PilgrimQuickplayLeaderboardPreviewVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimQuickplayLeaderboardVMBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Items = 0x90;
            static constexpr std::uintptr_t LocalPlayerItem = 0xA0;
            static constexpr std::uintptr_t SongShortName = 0xA8;
            static constexpr std::uintptr_t LeaderboardType = 0xAC;
            static constexpr std::uintptr_t bIsFriendsLeaderboard = 0xAD;
            static constexpr std::uintptr_t bIsAllTimeLeaderboard = 0xAE;
            static constexpr std::uintptr_t bIsLoading = 0xAF;
            static constexpr std::uintptr_t bHasError = 0xB0;
            static constexpr std::uintptr_t bHasItems = 0xB1;
            static constexpr std::uintptr_t bSongHasSelectedPart = 0xB2;
            static constexpr std::uintptr_t ActiveRequest = 0xB8;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"Items", 0x90, "ArrayProperty"},
            {"LocalPlayerItem", 0xA0, "ObjectProperty"},
            {"SongShortName", 0xA8, "NameProperty"},
            {"LeaderboardType", 0xAC, "EnumProperty"},
            {"bIsFriendsLeaderboard", 0xAD, "BoolProperty"},
            {"bIsAllTimeLeaderboard", 0xAE, "BoolProperty"},
            {"bIsLoading", 0xAF, "BoolProperty"},
            {"bHasError", 0xB0, "BoolProperty"},
            {"bHasItems", 0xB1, "BoolProperty"},
            {"bSongHasSelectedPart", 0xB2, "BoolProperty"},
            {"ActiveRequest", 0xB8, "ObjectProperty"},
        }};
    };

    struct PilgrimQuickplayLeaderboardTabBinding
    {
        static constexpr std::string_view Name = "PilgrimQuickplayLeaderboardTabBinding";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t TabList = 0x28;
            static constexpr std::uintptr_t TabIds = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"TabList", 0x28, "WeakObjectProperty"},
            {"TabIds", 0x30, "ArrayProperty"},
        }};
    };

    struct PilgrimQuickplayLeaderboardTimePeriodItemVM
    {
        static constexpr std::string_view Name = "PilgrimQuickplayLeaderboardTimePeriodItemVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimQuickplayLeaderboardFilterItemVMBase";
        struct Offsets
        {
            static constexpr std::uintptr_t OppositeLabel = 0x80;
            static constexpr std::uintptr_t bIsSelectable = 0x90;
            static constexpr std::uintptr_t TabBinding = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"OppositeLabel", 0x80, "TextProperty"},
            {"bIsSelectable", 0x90, "BoolProperty"},
            {"TabBinding", 0x98, "ObjectProperty"},
        }};
    };

    struct PilgrimQuickplayLeaderboardVM
    {
        static constexpr std::string_view Name = "PilgrimQuickplayLeaderboardVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimQuickplayLeaderboardVMBase";
        struct Offsets
        {
            static constexpr std::uintptr_t FilterItems = 0xC8;
            static constexpr std::uintptr_t SelectedInstrument = 0xD8;
            static constexpr std::uintptr_t BandSizeFilter = 0xE0;
            static constexpr std::uintptr_t bIsSoloLeaderboard = 0xE8;
            static constexpr std::uintptr_t bIsBandLeaderboardEnabled = 0xE9;
            static constexpr std::uintptr_t Page = 0xEC;
            static constexpr std::uintptr_t TotalPages = 0xF0;
            static constexpr std::uintptr_t ActivityItem = 0x100;
            static constexpr std::uintptr_t AudienceItem = 0x108;
            static constexpr std::uintptr_t TimePeriodItem = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"FilterItems", 0xC8, "ArrayProperty"},
            {"SelectedInstrument", 0xD8, "EnumProperty"},
            {"BandSizeFilter", 0xE0, "ObjectProperty"},
            {"bIsSoloLeaderboard", 0xE8, "BoolProperty"},
            {"bIsBandLeaderboardEnabled", 0xE9, "BoolProperty"},
            {"Page", 0xEC, "IntProperty"},
            {"TotalPages", 0xF0, "IntProperty"},
            {"ActivityItem", 0x100, "ObjectProperty"},
            {"AudienceItem", 0x108, "ObjectProperty"},
            {"TimePeriodItem", 0x110, "ObjectProperty"},
        }};
    };

    struct PilgrimQuickplayLeaderboardVMBase
    {
        static constexpr std::string_view Name = "PilgrimQuickplayLeaderboardVMBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimEventDrivenVM";
        struct Offsets
        {
            static constexpr std::uintptr_t Items = 0x90;
            static constexpr std::uintptr_t LocalPlayerItem = 0xA0;
            static constexpr std::uintptr_t SongShortName = 0xA8;
            static constexpr std::uintptr_t LeaderboardType = 0xAC;
            static constexpr std::uintptr_t bIsFriendsLeaderboard = 0xAD;
            static constexpr std::uintptr_t bIsAllTimeLeaderboard = 0xAE;
            static constexpr std::uintptr_t bIsLoading = 0xAF;
            static constexpr std::uintptr_t bHasError = 0xB0;
            static constexpr std::uintptr_t bHasItems = 0xB1;
            static constexpr std::uintptr_t bSongHasSelectedPart = 0xB2;
            static constexpr std::uintptr_t ActiveRequest = 0xB8;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"Items", 0x90, "ArrayProperty"},
            {"LocalPlayerItem", 0xA0, "ObjectProperty"},
            {"SongShortName", 0xA8, "NameProperty"},
            {"LeaderboardType", 0xAC, "EnumProperty"},
            {"bIsFriendsLeaderboard", 0xAD, "BoolProperty"},
            {"bIsAllTimeLeaderboard", 0xAE, "BoolProperty"},
            {"bIsLoading", 0xAF, "BoolProperty"},
            {"bHasError", 0xB0, "BoolProperty"},
            {"bHasItems", 0xB1, "BoolProperty"},
            {"bSongHasSelectedPart", 0xB2, "BoolProperty"},
            {"ActiveRequest", 0xB8, "ObjectProperty"},
        }};
    };

    struct PilgrimQuickplaySocialLeaderboardVM
    {
        static constexpr std::string_view Name = "PilgrimQuickplaySocialLeaderboardVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimQuickplayLeaderboardVMBase";
        struct Offsets
        {
            static constexpr std::uintptr_t FriendAvatars = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"FriendAvatars", 0xC8, "ArrayProperty"},
        }};
    };

    struct PilgrimQuickplaySongResultsVM
    {
        static constexpr std::string_view Name = "PilgrimQuickplaySongResultsVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimEventDrivenVM";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsSoloResults = 0x90;
            static constexpr std::uintptr_t BandScore = 0x94;
            static constexpr std::uintptr_t BandStars = 0x98;
            static constexpr std::uintptr_t bShowGoldBandStars = 0x9C;
            static constexpr std::uintptr_t bWholeBandPlayedNoParts = 0x9D;
            static constexpr std::uintptr_t LocalPlayerStars = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"bIsSoloResults", 0x90, "BoolProperty"},
            {"BandScore", 0x94, "IntProperty"},
            {"BandStars", 0x98, "IntProperty"},
            {"bShowGoldBandStars", 0x9C, "BoolProperty"},
            {"bWholeBandPlayedNoParts", 0x9D, "BoolProperty"},
            {"LocalPlayerStars", 0xA0, "IntProperty"},
        }};
    };

    struct PilgrimQuickplaySpotlightEntry
    {
        static constexpr std::string_view Name = "PilgrimQuickplaySpotlightEntry";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t bEmptySpotlight = 0x330;
            static constexpr std::uintptr_t Image_SongArt = 0x338;
            static constexpr std::uintptr_t Text_SongTitle = 0x340;
            static constexpr std::uintptr_t Text_SongArtist = 0x348;
            static constexpr std::uintptr_t Text_Constraints = 0x350;
            static constexpr std::uintptr_t SpotlightData = 0x358;
            static constexpr std::uintptr_t SpotlightSongMetadatas = 0x3C8;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"bEmptySpotlight", 0x330, "BoolProperty"},
            {"Image_SongArt", 0x338, "ObjectProperty"},
            {"Text_SongTitle", 0x340, "ObjectProperty"},
            {"Text_SongArtist", 0x348, "ObjectProperty"},
            {"Text_Constraints", 0x350, "ObjectProperty"},
            {"SpotlightData", 0x358, "StructProperty"},
            {"SpotlightSongMetadatas", 0x3C8, "ArrayProperty"},
        }};
    };

    struct PilgrimQuickplaySpotlightList
    {
        static constexpr std::string_view Name = "PilgrimQuickplaySpotlightList";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t SpotlightCompetitions = 0x330;
            static constexpr std::uintptr_t MaxSpotlights = 0x340;
            static constexpr std::uintptr_t SelectedIndex = 0x344;
            static constexpr std::uintptr_t EntryBox_SpotlightCompetitions = 0x348;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"SpotlightCompetitions", 0x330, "ArrayProperty"},
            {"MaxSpotlights", 0x340, "IntProperty"},
            {"SelectedIndex", 0x344, "IntProperty"},
            {"EntryBox_SpotlightCompetitions", 0x348, "ObjectProperty"},
        }};
    };

    struct PilgrimQuickplayStageTransitionVM
    {
        static constexpr std::string_view Name = "PilgrimQuickplayStageTransitionVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimEventDrivenVM";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsStageTransitionActive = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bIsStageTransitionActive", 0x90, "BoolProperty"},
        }};
    };

    struct PilgrimQuickplay_UIResultBase
    {
        static constexpr std::string_view Name = "PilgrimQuickplay_UIResultBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimCommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t ToggleQuestScreenAction = 0x4B0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ToggleQuestScreenAction", 0x4B0, "StructProperty"},
        }};
    };

    struct PilgrimQuickplay_UIResults_EmoteButton
    {
        static constexpr std::string_view Name = "PilgrimQuickplay_UIResults_EmoteButton";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t Emote_Button = 0x4A0;
            static constexpr std::uintptr_t EnableLocalPlayersEmote = 0x4A8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Emote_Button", 0x4A0, "ObjectProperty"},
            {"EnableLocalPlayersEmote", 0x4A8, "BoolProperty"},
        }};
    };

    struct PilgrimQuickplay_UIResults_PartPicker
    {
        static constexpr std::string_view Name = "PilgrimQuickplay_UIResults_PartPicker";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t SwapDifficultyActionWidget = 0x4A0;
            static constexpr std::uintptr_t SwapInstrumentRightActionWidget = 0x4A8;
            static constexpr std::uintptr_t SwapInstrumentLeftActionWidget = 0x4B0;
            static constexpr std::uintptr_t SwapDifficultyAction = 0x4B8;
            static constexpr std::uintptr_t SwapInstrumentLeftAction = 0x4C8;
            static constexpr std::uintptr_t SwapInstrumentRightAction = 0x4D8;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"SwapDifficultyActionWidget", 0x4A0, "ObjectProperty"},
            {"SwapInstrumentRightActionWidget", 0x4A8, "ObjectProperty"},
            {"SwapInstrumentLeftActionWidget", 0x4B0, "ObjectProperty"},
            {"SwapDifficultyAction", 0x4B8, "StructProperty"},
            {"SwapInstrumentLeftAction", 0x4C8, "StructProperty"},
            {"SwapInstrumentRightAction", 0x4D8, "StructProperty"},
        }};
    };

    struct PilgrimQuickplay_UIResults_UniversalPartPicker
    {
        static constexpr std::string_view Name = "PilgrimQuickplay_UIResults_UniversalPartPicker";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t UniversalPartPickerWidget = 0x4A0;
            static constexpr std::uintptr_t OpenMenuAction = 0x4A8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"UniversalPartPickerWidget", 0x4A0, "ObjectProperty"},
            {"OpenMenuAction", 0x4A8, "StructProperty"},
        }};
    };

    struct PilgrimQuickplay_UISpectatorBase
    {
        static constexpr std::string_view Name = "PilgrimQuickplay_UISpectatorBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimCommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t bIgnoreInputRegistration = 0x4A0;
            static constexpr std::uintptr_t bSidebarOpensOnlyWithGamepad = 0x4A1;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bIgnoreInputRegistration", 0x4A0, "BoolProperty"},
            {"bSidebarOpensOnlyWithGamepad", 0x4A1, "BoolProperty"},
        }};
    };

    struct PilgrimReplayHUDBase
    {
        static constexpr std::string_view Name = "PilgrimReplayHUDBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimHUDBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ReplayWidgetStateChanges = 0x590;
            static constexpr std::uintptr_t ActiveWidgets = 0x5A0;
            static constexpr std::uintptr_t CheckReplayDataTimerHandle = 0x5B0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ReplayWidgetStateChanges", 0x590, "ArrayProperty"},
            {"ActiveWidgets", 0x5A0, "ArrayProperty"},
            {"CheckReplayDataTimerHandle", 0x5B0, "StructProperty"},
        }};
    };

    struct PilgrimSessionPlayerCountVM
    {
        static constexpr std::string_view Name = "PilgrimSessionPlayerCountVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimEventDrivenVM";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsSoloUserSession = 0x90;
            static constexpr std::uintptr_t SessionPlayerCountComp = 0x94;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bIsSoloUserSession", 0x90, "BoolProperty"},
            {"SessionPlayerCountComp", 0x94, "WeakObjectProperty"},
        }};
    };

    struct PilgrimSetlistItemVM
    {
        static constexpr std::string_view Name = "PilgrimSetlistItemVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimSongCatalogItemVM";
        struct Offsets
        {
            static constexpr std::uintptr_t AddedByPlayer = 0x108;
            static constexpr std::uintptr_t ListNumber = 0x128;
            static constexpr std::uintptr_t bIsBlankItem = 0x12C;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"AddedByPlayer", 0x108, "SoftObjectProperty"},
            {"ListNumber", 0x128, "IntProperty"},
            {"bIsBlankItem", 0x12C, "BoolProperty"},
        }};
    };

    struct PilgrimSplitscreenControllerComponent
    {
        static constexpr std::string_view Name = "PilgrimSplitscreenControllerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PrimaryComponentTick = 0x38;
            static constexpr std::uintptr_t ComponentTags = 0x68;
            static constexpr std::uintptr_t AssetUserData = 0x78;
            static constexpr std::uintptr_t UCSSerializationIndex = 0x90;
            static constexpr std::uintptr_t bNetAddressable = 0x98;
            static constexpr std::uintptr_t bReplicateUsingRegisteredSubObjectList = 0x98;
            static constexpr std::uintptr_t bReplicates = 0x98;
            static constexpr std::uintptr_t bAutoActivate = 0x9A;
            static constexpr std::uintptr_t bCanEverAffectNavigation = 0x9A;
            static constexpr std::uintptr_t bEditableWhenInherited = 0x9A;
            static constexpr std::uintptr_t bIsActive = 0x9A;
            static constexpr std::uintptr_t bIsEditorOnly = 0x9B;
            static constexpr std::uintptr_t CreationMethod = 0xB9;
            static constexpr std::uintptr_t OnComponentActivated = 0xBA;
            static constexpr std::uintptr_t OnComponentDeactivated = 0xBB;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"PrimaryComponentTick", 0x38, "StructProperty"},
            {"ComponentTags", 0x68, "ArrayProperty"},
            {"AssetUserData", 0x78, "ArrayProperty"},
            {"UCSSerializationIndex", 0x90, "IntProperty"},
            {"bNetAddressable", 0x98, "BoolProperty"},
            {"bReplicateUsingRegisteredSubObjectList", 0x98, "BoolProperty"},
            {"bReplicates", 0x98, "BoolProperty"},
            {"bAutoActivate", 0x9A, "BoolProperty"},
            {"bCanEverAffectNavigation", 0x9A, "BoolProperty"},
            {"bEditableWhenInherited", 0x9A, "BoolProperty"},
            {"bIsActive", 0x9A, "BoolProperty"},
            {"bIsEditorOnly", 0x9B, "BoolProperty"},
            {"CreationMethod", 0xB9, "EnumProperty"},
            {"OnComponentActivated", 0xBA, "MulticastSparseDelegateProperty"},
            {"OnComponentDeactivated", 0xBB, "MulticastSparseDelegateProperty"},
        }};
    };

    struct PilgrimSplitscreenSettingScreen
    {
        static constexpr std::string_view Name = "PilgrimSplitscreenSettingScreen";
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

    struct UniversalPartsInstrumentVM
    {
        static constexpr std::string_view Name = "UniversalPartsInstrumentVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SparksEventDrivenForBlueprintVM";
        struct Offsets
        {
            static constexpr std::uintptr_t ListenerHelper = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ListenerHelper", 0x88, "StructProperty"},
        }};
    };

}

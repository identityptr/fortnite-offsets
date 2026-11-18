#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FMJamUI
{
    struct FortSettingRegistryExtension_FMJam
    {
        static constexpr std::string_view Name = "FortSettingRegistryExtension_FMJam";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameSettingRegistryExtension";
        struct Offsets
        {
            static constexpr std::uintptr_t MarkupBase = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MarkupBase", 0x28, "ObjectProperty"},
        }};
    };

    struct JamDynamicUIDirector
    {
        static constexpr std::string_view Name = "JamDynamicUIDirector";
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

    struct JamEmoteWheelOverlay
    {
        static constexpr std::string_view Name = "JamEmoteWheelOverlay";
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

    struct JamGlobalStateVM
    {
        static constexpr std::string_view Name = "JamGlobalStateVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Key = 0x68;
            static constexpr std::uintptr_t KeyMode = 0x69;
            static constexpr std::uintptr_t Tempo = 0x6C;
            static constexpr std::uintptr_t PlayerCount = 0x70;
            static constexpr std::uintptr_t PrivacySetting = 0x74;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Key", 0x68, "EnumProperty"},
            {"KeyMode", 0x69, "EnumProperty"},
            {"Tempo", 0x6C, "IntProperty"},
            {"PlayerCount", 0x70, "IntProperty"},
            {"PrivacySetting", 0x74, "EnumProperty"},
        }};
    };

    struct JamHUDBase
    {
        static constexpr std::string_view Name = "JamHUDBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortNullHUD";
        struct Offsets
        {
            static constexpr std::uintptr_t AthenaHudMenu = 0x550;
            static constexpr std::uintptr_t ActionBar_BottomBar = 0x558;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"AthenaHudMenu", 0x550, "ObjectProperty"},
            {"ActionBar_BottomBar", 0x558, "ObjectProperty"},
        }};
    };

    struct JamMusicSlotManagerVM
    {
        static constexpr std::string_view Name = "JamMusicSlotManagerVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t MusicSlots = 0x78;
            static constexpr std::uintptr_t bIsInJamSession = 0x88;
            static constexpr std::uintptr_t bIsJamming = 0x89;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"MusicSlots", 0x78, "ArrayProperty"},
            {"bIsInJamSession", 0x88, "BoolProperty"},
            {"bIsJamming", 0x89, "BoolProperty"},
        }};
    };

    struct JamMusicSlotVM
    {
        static constexpr std::string_view Name = "JamMusicSlotVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t OwningPlayerID = 0x68;
            static constexpr std::uintptr_t Title = 0x98;
            static constexpr std::uintptr_t SongShortName = 0xA8;
            static constexpr std::uintptr_t Artist = 0xB0;
            static constexpr std::uintptr_t TitleAndArtist = 0xC0;
            static constexpr std::uintptr_t UserMode = 0xD0;
            static constexpr std::uintptr_t PlayState = 0xD1;
            static constexpr std::uintptr_t ResolveState = 0xD2;
            static constexpr std::uintptr_t LoopType = 0xD3;
            static constexpr std::uintptr_t FocusState = 0xD4;
            static constexpr std::uintptr_t SlotIndex = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"OwningPlayerID", 0x68, "StructProperty"},
            {"Title", 0x98, "TextProperty"},
            {"SongShortName", 0xA8, "NameProperty"},
            {"Artist", 0xB0, "TextProperty"},
            {"TitleAndArtist", 0xC0, "TextProperty"},
            {"UserMode", 0xD0, "EnumProperty"},
            {"PlayState", 0xD1, "EnumProperty"},
            {"ResolveState", 0xD2, "EnumProperty"},
            {"LoopType", 0xD3, "EnumProperty"},
            {"FocusState", 0xD4, "EnumProperty"},
            {"SlotIndex", 0xD8, "IntProperty"},
        }};
    };

    struct JamPartSwitcherVM
    {
        static constexpr std::string_view Name = "JamPartSwitcherVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JamSettingRotator
    {
        static constexpr std::string_view Name = "JamSettingRotator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortSettingsRotator";
        struct Offsets
        {
            static constexpr std::uintptr_t Button_OptionValue = 0x1650;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Button_OptionValue", 0x1650, "ObjectProperty"},
        }};
    };

    struct JamSongIndicator
    {
        static constexpr std::string_view Name = "JamSongIndicator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortActorIndicatorWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t IndicatedActor = 0x378;
            static constexpr std::uintptr_t IndicatedActorComponent = 0x380;
            static constexpr std::uintptr_t RelativeLocation = 0x388;
            static constexpr std::uintptr_t MaxDistance = 0x3A0;
            static constexpr std::uintptr_t bClampOnScreen = 0x3A4;
            static constexpr std::uintptr_t bShowClampToScreenArrow = 0x3A5;
            static constexpr std::uintptr_t ElevationArrowData = 0x3A8;
            static constexpr std::uintptr_t bUseScreenSpacePosition = 0x3C4;
            static constexpr std::uintptr_t ScreenSpaceRelativeOffset = 0x3C8;
            static constexpr std::uintptr_t ScreenPriority = 0x3D8;
            static constexpr std::uintptr_t TurnToMarkerTouchTarget = 0x4B0;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"IndicatedActor", 0x378, "WeakObjectProperty"},
            {"IndicatedActorComponent", 0x380, "WeakObjectProperty"},
            {"RelativeLocation", 0x388, "StructProperty"},
            {"MaxDistance", 0x3A0, "FloatProperty"},
            {"bClampOnScreen", 0x3A4, "BoolProperty"},
            {"bShowClampToScreenArrow", 0x3A5, "BoolProperty"},
            {"ElevationArrowData", 0x3A8, "StructProperty"},
            {"bUseScreenSpacePosition", 0x3C4, "BoolProperty"},
            {"ScreenSpaceRelativeOffset", 0x3C8, "StructProperty"},
            {"ScreenPriority", 0x3D8, "IntProperty"},
            {"TurnToMarkerTouchTarget", 0x4B0, "ObjectProperty"},
        }};
    };

    struct JamUIManagerComponent_SongIndicators
    {
        static constexpr std::string_view Name = "JamUIManagerComponent_SongIndicators";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t JamSongIndicatorClass = 0xC8;
            static constexpr std::uintptr_t IndicatorPool = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"JamSongIndicatorClass", 0xC8, "ClassProperty"},
            {"IndicatorPool", 0xD0, "StructProperty"},
        }};
    };

    struct SparksSongEmoteWheelCategoryConfig
    {
        static constexpr std::string_view Name = "SparksSongEmoteWheelCategoryConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EmoteWheelLockerCategoryConfig";
        struct Offsets
        {
            static constexpr std::uintptr_t LockerCategoryConfig = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"LockerCategoryConfig", 0xA8, "SoftObjectProperty"},
        }};
    };

    struct SparksSongEmoteWheelCategoryVM
    {
        static constexpr std::string_view Name = "SparksSongEmoteWheelCategoryVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EmoteWheelLockerCategoryVM";
        struct Offsets
        {
            static constexpr std::uintptr_t LockerCategoryVM = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"LockerCategoryVM", 0xB0, "ObjectProperty"},
        }};
    };

    struct SparksSongEmoteWheelItemVM
    {
        static constexpr std::string_view Name = "SparksSongEmoteWheelItemVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EmoteWheelLockerItemVM";
        struct Offsets
        {
            static constexpr std::uintptr_t LockerItemVM = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"LockerItemVM", 0xB0, "ObjectProperty"},
        }};
    };

}

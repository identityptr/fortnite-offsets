#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::CilantroUI
{
    struct FortPlaytimeBlock
    {
        static constexpr std::string_view Name = "FortPlaytimeBlock";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t WidgetStack_Takeover = 0x4A0;
            static constexpr std::uintptr_t FortLegalInfoClass = 0x4A8;
            static constexpr std::uintptr_t ParentalControlsClass = 0x4C8;
            static constexpr std::uintptr_t PlaytimeViewModel = 0x4E8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"WidgetStack_Takeover", 0x4A0, "ObjectProperty"},
            {"FortLegalInfoClass", 0x4A8, "SoftClassProperty"},
            {"ParentalControlsClass", 0x4C8, "SoftClassProperty"},
            {"PlaytimeViewModel", 0x4E8, "ObjectProperty"},
        }};
    };

    struct FortPlaytimeManagementScreen
    {
        static constexpr std::string_view Name = "FortPlaytimeManagementScreen";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPinScreen";
        struct Offsets
        {
            static constexpr std::uintptr_t Switcher_SubViews = 0x570;
            static constexpr std::uintptr_t Panel_PlaytimeSettings = 0x578;
            static constexpr std::uintptr_t Panel_PlaytimeScheduleSettings = 0x580;
            static constexpr std::uintptr_t Details_Settings = 0x588;
            static constexpr std::uintptr_t PlaytimeScheduleWidget = 0x590;
            static constexpr std::uintptr_t AdditionalScheduleWidget = 0x598;
            static constexpr std::uintptr_t AllowCreativeModalClass = 0x5A0;
            static constexpr std::uintptr_t PlaytimeSettingRegistry = 0x5C0;
            static constexpr std::uintptr_t PlaytimeSettingScheduleRegistry = 0x5C8;
            static constexpr std::uintptr_t ActivityPlaySettingScheduleRegistry = 0x5D0;
            static constexpr std::uintptr_t ActivityCreateSettingScheduleRegistry = 0x5D8;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"Switcher_SubViews", 0x570, "ObjectProperty"},
            {"Panel_PlaytimeSettings", 0x578, "ObjectProperty"},
            {"Panel_PlaytimeScheduleSettings", 0x580, "ObjectProperty"},
            {"Details_Settings", 0x588, "ObjectProperty"},
            {"PlaytimeScheduleWidget", 0x590, "ObjectProperty"},
            {"AdditionalScheduleWidget", 0x598, "ObjectProperty"},
            {"AllowCreativeModalClass", 0x5A0, "SoftClassProperty"},
            {"PlaytimeSettingRegistry", 0x5C0, "ObjectProperty"},
            {"PlaytimeSettingScheduleRegistry", 0x5C8, "ObjectProperty"},
            {"ActivityPlaySettingScheduleRegistry", 0x5D0, "ObjectProperty"},
            {"ActivityCreateSettingScheduleRegistry", 0x5D8, "ObjectProperty"},
        }};
    };

    struct FortPlaytimePinActivatableWidget
    {
        static constexpr std::string_view Name = "FortPlaytimePinActivatableWidget";
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

    struct FortPlaytimeReportSettingRegistry
    {
        static constexpr std::string_view Name = "FortPlaytimeReportSettingRegistry";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortSettingRegistry";
        struct Offsets
        {
            static constexpr std::uintptr_t PlaytimeReportSettings = 0x1A8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PlaytimeReportSettings", 0x1A8, "ObjectProperty"},
        }};
    };

    struct FortPlaytimeScheduleSettingRegistry
    {
        static constexpr std::string_view Name = "FortPlaytimeScheduleSettingRegistry";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortSettingRegistry";
        struct Offsets
        {
            static constexpr std::uintptr_t PlaytimeScheduleSettings = 0x1A8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PlaytimeScheduleSettings", 0x1A8, "ObjectProperty"},
        }};
    };

    struct FortPlaytimeScheduleWidget
    {
        static constexpr std::string_view Name = "FortPlaytimeScheduleWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t ColorAndOpacity = 0x1A0;
            static constexpr std::uintptr_t ColorAndOpacityDelegate = 0x1B0;
            static constexpr std::uintptr_t ForegroundColor = 0x1BC;
            static constexpr std::uintptr_t ForegroundColorDelegate = 0x1D0;
            static constexpr std::uintptr_t OnVisibilityChanged = 0x1E0;
            static constexpr std::uintptr_t Padding = 0x220;
            static constexpr std::uintptr_t Priority = 0x230;
            static constexpr std::uintptr_t bAutomaticallyRegisterInputOnConstruction = 0x234;
            static constexpr std::uintptr_t bIsFocusable = 0x234;
            static constexpr std::uintptr_t bStopAction = 0x234;
            static constexpr std::uintptr_t QueuedWidgetAnimationTransitions = 0x238;
            static constexpr std::uintptr_t ActiveSequencePlayers = 0x248;
            static constexpr std::uintptr_t AnimationTickManager = 0x258;
            static constexpr std::uintptr_t StoppedSequencePlayers = 0x260;
            static constexpr std::uintptr_t NamedSlotBindings = 0x288;
            static constexpr std::uintptr_t Extensions = 0x298;
            static constexpr std::uintptr_t WidgetTree = 0x2A8;
            static constexpr std::uintptr_t bHasScriptImplementedPaint = 0x2B0;
            static constexpr std::uintptr_t bHasScriptImplementedTick = 0x2B0;
            static constexpr std::uintptr_t TickFrequency = 0x2C8;
            static constexpr std::uintptr_t DesiredFocusWidget = 0x2CC;
            static constexpr std::uintptr_t InputComponent = 0x2D8;
            static constexpr std::uintptr_t AnimationCallbacks = 0x2E0;
        };

        inline static constexpr std::array<PropertyInfo, 23> Properties{{
            {"ColorAndOpacity", 0x1A0, "StructProperty"},
            {"ColorAndOpacityDelegate", 0x1B0, "DelegateProperty"},
            {"ForegroundColor", 0x1BC, "StructProperty"},
            {"ForegroundColorDelegate", 0x1D0, "DelegateProperty"},
            {"OnVisibilityChanged", 0x1E0, "MulticastInlineDelegateProperty"},
            {"Padding", 0x220, "StructProperty"},
            {"Priority", 0x230, "IntProperty"},
            {"bAutomaticallyRegisterInputOnConstruction", 0x234, "BoolProperty"},
            {"bIsFocusable", 0x234, "BoolProperty"},
            {"bStopAction", 0x234, "BoolProperty"},
            {"QueuedWidgetAnimationTransitions", 0x238, "ArrayProperty"},
            {"ActiveSequencePlayers", 0x248, "ArrayProperty"},
            {"AnimationTickManager", 0x258, "ObjectProperty"},
            {"StoppedSequencePlayers", 0x260, "ArrayProperty"},
            {"NamedSlotBindings", 0x288, "ArrayProperty"},
            {"Extensions", 0x298, "ArrayProperty"},
            {"WidgetTree", 0x2A8, "ObjectProperty"},
            {"bHasScriptImplementedPaint", 0x2B0, "BoolProperty"},
            {"bHasScriptImplementedTick", 0x2B0, "BoolProperty"},
            {"TickFrequency", 0x2C8, "EnumProperty"},
            {"DesiredFocusWidget", 0x2CC, "StructProperty"},
            {"InputComponent", 0x2D8, "ObjectProperty"},
            {"AnimationCallbacks", 0x2E0, "ArrayProperty"},
        }};
    };

    struct FortPlaytimeSettingRegistry
    {
        static constexpr std::string_view Name = "FortPlaytimeSettingRegistry";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortSettingRegistry";
        struct Offsets
        {
            static constexpr std::uintptr_t PlaytimeSettings = 0x1A8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PlaytimeSettings", 0x1A8, "ObjectProperty"},
        }};
    };

    struct FortSettingValueDiscreteSupervisedScheduleToggle
    {
        static constexpr std::string_view Name = "FortSettingValueDiscreteSupervisedScheduleToggle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortSettingValueDiscrete";
        struct Offsets
        {
            static constexpr std::uintptr_t SettingParent = 0x88;
            static constexpr std::uintptr_t OwningRegistry = 0x90;
            static constexpr std::uintptr_t DisplayName = 0xB0;
            static constexpr std::uintptr_t DescriptionRichText = 0xC0;
            static constexpr std::uintptr_t CustomExtensions = 0xF8;
            static constexpr std::uintptr_t EditConditions = 0x130;
            static constexpr std::uintptr_t LocalPlayer = 0x15C;
            static constexpr std::uintptr_t Components = 0x168;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"SettingParent", 0x88, "WeakObjectProperty"},
            {"OwningRegistry", 0x90, "WeakObjectProperty"},
            {"DisplayName", 0xB0, "StructProperty"},
            {"DescriptionRichText", 0xC0, "StructProperty"},
            {"CustomExtensions", 0xF8, "StructProperty"},
            {"EditConditions", 0x130, "ArrayProperty"},
            {"LocalPlayer", 0x15C, "WeakObjectProperty"},
            {"Components", 0x168, "ArrayProperty"},
        }};
    };

    struct FortSettingValueDiscreteThymeToggle
    {
        static constexpr std::string_view Name = "FortSettingValueDiscreteThymeToggle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortSettingValueDiscrete";
        struct Offsets
        {
            static constexpr std::uintptr_t SettingParent = 0x88;
            static constexpr std::uintptr_t OwningRegistry = 0x90;
            static constexpr std::uintptr_t DisplayName = 0xB0;
            static constexpr std::uintptr_t DescriptionRichText = 0xC0;
            static constexpr std::uintptr_t CustomExtensions = 0xF8;
            static constexpr std::uintptr_t EditConditions = 0x130;
            static constexpr std::uintptr_t LocalPlayer = 0x15C;
            static constexpr std::uintptr_t Components = 0x168;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"SettingParent", 0x88, "WeakObjectProperty"},
            {"OwningRegistry", 0x90, "WeakObjectProperty"},
            {"DisplayName", 0xB0, "StructProperty"},
            {"DescriptionRichText", 0xC0, "StructProperty"},
            {"CustomExtensions", 0xF8, "StructProperty"},
            {"EditConditions", 0x130, "ArrayProperty"},
            {"LocalPlayer", 0x15C, "WeakObjectProperty"},
            {"Components", 0x168, "ArrayProperty"},
        }};
    };

    struct FortTimeLimitPanelStw
    {
        static constexpr std::string_view Name = "FortTimeLimitPanelStw";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t ViewTimeLimitPanel = 0x4A0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ViewTimeLimitPanel", 0x4A0, "ObjectProperty"},
        }};
    };

    struct FortViewTimeLimitPanel
    {
        static constexpr std::string_view Name = "FortViewTimeLimitPanel";
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

    struct PlayerPlaytimeVM
    {
        static constexpr std::string_view Name = "PlayerPlaytimeVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t ElapsedSleepTime = 0xD8;
            static constexpr std::uintptr_t PlayState = 0xDC;
            static constexpr std::uintptr_t PreviousPlayState = 0xDD;
            static constexpr std::uintptr_t RequestMoreTimeThresholdMinutes = 0xE0;
            static constexpr std::uintptr_t BP_OnGrantPlaytimeRequestStatusUpdate = 0xE8;
            static constexpr std::uintptr_t BP_OnRequestAdditionalPlaytimeStatusUpdate = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"ElapsedSleepTime", 0xD8, "FloatProperty"},
            {"PlayState", 0xDC, "EnumProperty"},
            {"PreviousPlayState", 0xDD, "EnumProperty"},
            {"RequestMoreTimeThresholdMinutes", 0xE0, "DoubleProperty"},
            {"BP_OnGrantPlaytimeRequestStatusUpdate", 0xE8, "MulticastInlineDelegateProperty"},
            {"BP_OnRequestAdditionalPlaytimeStatusUpdate", 0xF8, "MulticastInlineDelegateProperty"},
        }};
    };

    struct TimeReportsManagementScreen
    {
        static constexpr std::string_view Name = "TimeReportsManagementScreen";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPinScreen";
        struct Offsets
        {
            static constexpr std::uintptr_t Panel_TimeReportSettings = 0x570;
            static constexpr std::uintptr_t Details_Settings = 0x578;
            static constexpr std::uintptr_t PlaytimeReportSettingRegistry = 0x580;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Panel_TimeReportSettings", 0x570, "ObjectProperty"},
            {"Details_Settings", 0x578, "ObjectProperty"},
            {"PlaytimeReportSettingRegistry", 0x580, "ObjectProperty"},
        }};
    };

}

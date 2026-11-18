#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FortDelMarUI
{
    struct FortDelMarCreativeUIDirector
    {
        static constexpr std::string_view Name = "FortDelMarCreativeUIDirector";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DynamicUIDirectorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedFortDelMarVehicle = 0x2A8;
            static constexpr std::uintptr_t CreativeFortDelMarUI = 0x2B0;
            static constexpr std::uintptr_t VehicleInAirTag = 0x2B8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"CachedFortDelMarVehicle", 0x2A8, "ObjectProperty"},
            {"CreativeFortDelMarUI", 0x2B0, "ObjectProperty"},
            {"VehicleInAirTag", 0x2B8, "StructProperty"},
        }};
    };

    struct FortDelMarDialogBase
    {
        static constexpr std::string_view Name = "FortDelMarDialogBase";
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

    struct FortDelMarDialogHelper
    {
        static constexpr std::string_view Name = "FortDelMarDialogHelper";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t DialogMapping = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DialogMapping", 0x28, "MapProperty"},
        }};
    };

    struct FortDelMarUIDirector
    {
        static constexpr std::string_view Name = "FortDelMarUIDirector";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DynamicUIDirectorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t DialogHelperClass = 0x2A8;
            static constexpr std::uintptr_t DialogHelper = 0x2B8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DialogHelperClass", 0x2A8, "ClassProperty"},
            {"DialogHelper", 0x2B8, "ObjectProperty"},
        }};
    };

    struct FortDelMarUserWidget
    {
        static constexpr std::string_view Name = "FortDelMarUserWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortHUDElementWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t InitialTransitionStatus = 0x3C8;
            static constexpr std::uintptr_t TransitionerHiddenVisibility = 0x3C9;
            static constexpr std::uintptr_t bAlwaysReverseInterruptedAnimations = 0x3CA;
            static constexpr std::uintptr_t WidgetTransitioner = 0x3D0;
            static constexpr std::uintptr_t NormalTransitionIn = 0x3D8;
            static constexpr std::uintptr_t NormalTransitionOut = 0x3E0;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"InitialTransitionStatus", 0x3C8, "EnumProperty"},
            {"TransitionerHiddenVisibility", 0x3C9, "EnumProperty"},
            {"bAlwaysReverseInterruptedAnimations", 0x3CA, "BoolProperty"},
            {"WidgetTransitioner", 0x3D0, "ObjectProperty"},
            {"NormalTransitionIn", 0x3D8, "ObjectProperty"},
            {"NormalTransitionOut", 0x3E0, "ObjectProperty"},
        }};
    };

    struct FortDelMarVehicleViewModel
    {
        static constexpr std::string_view Name = "FortDelMarVehicleViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortDelMarViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bHasValidData = 0x78;
            static constexpr std::uintptr_t bIsTurboEnabled = 0x79;
            static constexpr std::uintptr_t bIsDrifting = 0x7C;
            static constexpr std::uintptr_t bIsDriftingRight = 0x7D;
            static constexpr std::uintptr_t bWheelsOnGround = 0x7E;
            static constexpr std::uintptr_t bAnyWheelsOnGround = 0x7F;
            static constexpr std::uintptr_t DriftRanges = 0x80;
            static constexpr std::uintptr_t DriftSlipAngleRatio = 0x90;
            static constexpr std::uintptr_t DriftSteerState = 0x94;
            static constexpr std::uintptr_t PotentialDriftBoostPercent = 0x98;
            static constexpr std::uintptr_t StartlineBoostBonus = 0x9C;
            static constexpr std::uintptr_t SpeedometerState = 0xA0;
            static constexpr std::uintptr_t CurrentSpeed = 0xA4;
            static constexpr std::uintptr_t NumTurboMaxCharges = 0xA8;
            static constexpr std::uintptr_t NumTurboCurrentCharges = 0xAC;
            static constexpr std::uintptr_t TurboBonusZoneState = 0xB0;
            static constexpr std::uintptr_t UnderthrustPercent = 0xB4;
            static constexpr std::uintptr_t MissedCheckpointDemoTimestamp = 0xB8;
            static constexpr std::uintptr_t ReturnToTrackDemoTimestamp = 0xC0;
            static constexpr std::uintptr_t bIsHeadingWrongWay = 0xC8;
            static constexpr std::uintptr_t bToggleThrottle = 0xC9;
            static constexpr std::uintptr_t ThrottleInputValue = 0xCC;
            static constexpr std::uintptr_t bDemolished = 0xD0;
            static constexpr std::uintptr_t DemolishActionPressedPercent = 0xD4;
            static constexpr std::uintptr_t bDemolishActionEnabled = 0xD8;
            static constexpr std::uintptr_t PlayerState = 0xDC;
            static constexpr std::uintptr_t CurrentVehicle = 0xE4;
            static constexpr std::uintptr_t GlobalInputDisabler = 0xEC;
        };

        inline static constexpr std::array<PropertyInfo, 28> Properties{{
            {"bHasValidData", 0x78, "BoolProperty"},
            {"bIsTurboEnabled", 0x79, "BoolProperty"},
            {"bIsDrifting", 0x7C, "BoolProperty"},
            {"bIsDriftingRight", 0x7D, "BoolProperty"},
            {"bWheelsOnGround", 0x7E, "BoolProperty"},
            {"bAnyWheelsOnGround", 0x7F, "BoolProperty"},
            {"DriftRanges", 0x80, "ArrayProperty"},
            {"DriftSlipAngleRatio", 0x90, "FloatProperty"},
            {"DriftSteerState", 0x94, "EnumProperty"},
            {"PotentialDriftBoostPercent", 0x98, "FloatProperty"},
            {"StartlineBoostBonus", 0x9C, "FloatProperty"},
            {"SpeedometerState", 0xA0, "EnumProperty"},
            {"CurrentSpeed", 0xA4, "FloatProperty"},
            {"NumTurboMaxCharges", 0xA8, "FloatProperty"},
            {"NumTurboCurrentCharges", 0xAC, "FloatProperty"},
            {"TurboBonusZoneState", 0xB0, "EnumProperty"},
            {"UnderthrustPercent", 0xB4, "FloatProperty"},
            {"MissedCheckpointDemoTimestamp", 0xB8, "DoubleProperty"},
            {"ReturnToTrackDemoTimestamp", 0xC0, "DoubleProperty"},
            {"bIsHeadingWrongWay", 0xC8, "BoolProperty"},
            {"bToggleThrottle", 0xC9, "BoolProperty"},
            {"ThrottleInputValue", 0xCC, "FloatProperty"},
            {"bDemolished", 0xD0, "BoolProperty"},
            {"DemolishActionPressedPercent", 0xD4, "FloatProperty"},
            {"bDemolishActionEnabled", 0xD8, "BoolProperty"},
            {"PlayerState", 0xDC, "WeakObjectProperty"},
            {"CurrentVehicle", 0xE4, "WeakObjectProperty"},
            {"GlobalInputDisabler", 0xEC, "WeakObjectProperty"},
        }};
    };

    struct FortDelMarViewModelBase
    {
        static constexpr std::string_view Name = "FortDelMarViewModelBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}

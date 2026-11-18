#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::JunoFrontendUI
{
    struct JunoFrontendExperienceFlow
    {
        static constexpr std::string_view Name = "JunoFrontendExperienceFlow";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t VideoPlayerClass = 0x60;
            static constexpr std::uintptr_t FlowStepArray = 0x80;
            static constexpr std::uintptr_t bEnableTrailer = 0x90;
            static constexpr std::uintptr_t CinematicTrailerVUID = 0x98;
            static constexpr std::uintptr_t CinematicTrailerString = 0xA8;
            static constexpr std::uintptr_t CinematicTrailerRating = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"VideoPlayerClass", 0x60, "SoftClassProperty"},
            {"FlowStepArray", 0x80, "ArrayProperty"},
            {"bEnableTrailer", 0x90, "BoolProperty"},
            {"CinematicTrailerVUID", 0x98, "StrProperty"},
            {"CinematicTrailerString", 0xA8, "NameProperty"},
            {"CinematicTrailerRating", 0xB0, "MapProperty"},
        }};
    };

    struct JunoSelectWorldScreen
    {
        static constexpr std::string_view Name = "JunoSelectWorldScreen";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortActivityModeSetSelectionModalBase";
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

    struct JunoTabGroupButtonViewModel
    {
        static constexpr std::string_view Name = "JunoTabGroupButtonViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UIKitTabGroupButtonViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t bEnableTabID = 0x80;
            static constexpr std::uintptr_t TabID = 0x84;
            static constexpr std::uintptr_t bEnableSubGroupID = 0x88;
            static constexpr std::uintptr_t SubGroupID = 0x8C;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bEnableTabID", 0x80, "BoolProperty"},
            {"TabID", 0x84, "NameProperty"},
            {"bEnableSubGroupID", 0x88, "BoolProperty"},
            {"SubGroupID", 0x8C, "NameProperty"},
        }};
    };

    struct JunoWorldManagementViewModel
    {
        static constexpr std::string_view Name = "JunoWorldManagementViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bAllowWorldCreation = 0x68;
            static constexpr std::uintptr_t MaxWorldSlots = 0x6C;
            static constexpr std::uintptr_t bAllowWorldUGCCreation = 0x70;
            static constexpr std::uintptr_t bForceShowDefaultWorldName = 0x71;
            static constexpr std::uintptr_t bIsModeratorModeEnabled = 0x72;
            static constexpr std::uintptr_t bWorldLoadingSuccess = 0x73;
            static constexpr std::uintptr_t bIsInCabinMode = 0x74;
            static constexpr std::uintptr_t OwnerWorlds = 0x78;
            static constexpr std::uintptr_t SharedWorlds = 0x88;
            static constexpr std::uintptr_t WorldSlots = 0x98;
            static constexpr std::uintptr_t SelectedWorld = 0xA8;
            static constexpr std::uintptr_t EmptyWorld = 0xB0;
            static constexpr std::uintptr_t DataRefreshFrequency = 0xD8;
            static constexpr std::uintptr_t SettingDataTable = 0xF0;
            static constexpr std::uintptr_t WorldImageList = 0xF8;
            static constexpr std::uintptr_t InitWorldManagementVM = 0x108;
        };

        inline static constexpr std::array<PropertyInfo, 16> Properties{{
            {"bAllowWorldCreation", 0x68, "BoolProperty"},
            {"MaxWorldSlots", 0x6C, "IntProperty"},
            {"bAllowWorldUGCCreation", 0x70, "BoolProperty"},
            {"bForceShowDefaultWorldName", 0x71, "BoolProperty"},
            {"bIsModeratorModeEnabled", 0x72, "BoolProperty"},
            {"bWorldLoadingSuccess", 0x73, "BoolProperty"},
            {"bIsInCabinMode", 0x74, "BoolProperty"},
            {"OwnerWorlds", 0x78, "ArrayProperty"},
            {"SharedWorlds", 0x88, "ArrayProperty"},
            {"WorldSlots", 0x98, "ArrayProperty"},
            {"SelectedWorld", 0xA8, "ObjectProperty"},
            {"EmptyWorld", 0xB0, "ObjectProperty"},
            {"DataRefreshFrequency", 0xD8, "FloatProperty"},
            {"SettingDataTable", 0xF0, "ObjectProperty"},
            {"WorldImageList", 0xF8, "ArrayProperty"},
            {"InitWorldManagementVM", 0x108, "ObjectProperty"},
        }};
    };

}

#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::MatchmakingSettingsUI
{
    struct GameFeatureAction_CreateMatchmakingSettingsVM
    {
        static constexpr std::string_view Name = "GameFeatureAction_CreateMatchmakingSettingsVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFeatureAction";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MatchmakingSettingsUI
    {
        static constexpr std::string_view Name = "MatchmakingSettingsUI";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MatchmakingSettingsOverrideUI";
        struct Offsets
        {
            static constexpr std::uintptr_t MatchmakingSettingsModal = 0x28;
            static constexpr std::uintptr_t MatchFoundWidgetsForProductTagEntries = 0x48;
            static constexpr std::uintptr_t DefaultMatchFoundWidget = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"MatchmakingSettingsModal", 0x28, "SoftClassProperty"},
            {"MatchFoundWidgetsForProductTagEntries", 0x48, "ArrayProperty"},
            {"DefaultMatchFoundWidget", 0x58, "SoftClassProperty"},
        }};
    };

    struct MatchmakingSettingsVM
    {
        static constexpr std::string_view Name = "MatchmakingSettingsVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t SettingsVMs = 0x68;
            static constexpr std::uintptr_t SettingsVMsByKey = 0x78;
            static constexpr std::uintptr_t BackgroundImageSize = 0x88;
            static constexpr std::uintptr_t LogoImageSize = 0x89;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"SettingsVMs", 0x68, "ArrayProperty"},
            {"SettingsVMsByKey", 0x78, "MapProperty"},
            {"BackgroundImageSize", 0x88, "EnumProperty"},
            {"LogoImageSize", 0x89, "EnumProperty"},
        }};
    };

    struct MatchmakingSettingsWidget
    {
        static constexpr std::string_view Name = "MatchmakingSettingsWidget";
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

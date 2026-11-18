#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::JunoReadyUpErrorsUI
{
    struct JunoNewPlayerErrorUI
    {
        static constexpr std::string_view Name = "JunoNewPlayerErrorUI";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ReadyUpErrorUI";
        struct Offsets
        {
            static constexpr std::uintptr_t NewPlayerWarningPopupWidgetClass = 0xE8;
            static constexpr std::uintptr_t PopupWidget = 0x108;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"NewPlayerWarningPopupWidgetClass", 0xE8, "SoftClassProperty"},
            {"PopupWidget", 0x108, "ObjectProperty"},
        }};
    };

    struct JunoQueryWorldsErrorUI
    {
        static constexpr std::string_view Name = "JunoQueryWorldsErrorUI";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ReadyUpErrorUI";
        struct Offsets
        {
            static constexpr std::uintptr_t ErrorMessage = 0x28;
            static constexpr std::uintptr_t Icon = 0x40;
            static constexpr std::uintptr_t PlayButtonTextOverride = 0x48;
            static constexpr std::uintptr_t PlayButtonSubtitle = 0x58;
            static constexpr std::uintptr_t SecondaryButtonTextOverride = 0x68;
            static constexpr std::uintptr_t bImpliesReadyUp = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"ErrorMessage", 0x28, "StructProperty"},
            {"Icon", 0x40, "ObjectProperty"},
            {"PlayButtonTextOverride", 0x48, "TextProperty"},
            {"PlayButtonSubtitle", 0x58, "TextProperty"},
            {"SecondaryButtonTextOverride", 0x68, "TextProperty"},
            {"bImpliesReadyUp", 0x78, "BoolProperty"},
        }};
    };

    struct Juno_NewPlayerWarningPopupWidget
    {
        static constexpr std::string_view Name = "Juno_NewPlayerWarningPopupWidget";
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

#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::ValetUI
{
    struct FortMobileActionButtonBehavior_ValetBoost
    {
        static constexpr std::string_view Name = "FortMobileActionButtonBehavior_ValetBoost";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMobileActionButtonBehavior";
        struct Offsets
        {
            static constexpr std::uintptr_t ActionNames = 0x148;
            static constexpr std::uintptr_t DefaultTexture = 0x158;
            static constexpr std::uintptr_t Sprite = 0x178;
            static constexpr std::uintptr_t DeferredSprite = 0x180;
            static constexpr std::uintptr_t HUDLayoutToolSaveTag_Legacy = 0x188;
            static constexpr std::uintptr_t ForcedZOrder = 0x1A0;
            static constexpr std::uintptr_t bIsClickthroughMandatory = 0x1B8;
            static constexpr std::uintptr_t TouchButtonViewModel = 0x220;
            static constexpr std::uintptr_t CachedSpriteProxy = 0x228;
            static constexpr std::uintptr_t BangVisibilityRequesters = 0x250;
            static constexpr std::uintptr_t GlowVisibilityRequesters = 0x260;
            static constexpr std::uintptr_t ContinueInjectionOnHideRequesters = 0x270;
            static constexpr std::uintptr_t DynamicInputKey = 0x290;
            static constexpr std::uintptr_t BehaviorInputKey = 0x298;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"ActionNames", 0x148, "ArrayProperty"},
            {"DefaultTexture", 0x158, "SoftObjectProperty"},
            {"Sprite", 0x178, "ObjectProperty"},
            {"DeferredSprite", 0x180, "WeakObjectProperty"},
            {"HUDLayoutToolSaveTag_Legacy", 0x188, "StructProperty"},
            {"ForcedZOrder", 0x1A0, "IntProperty"},
            {"bIsClickthroughMandatory", 0x1B8, "BoolProperty"},
            {"TouchButtonViewModel", 0x220, "ObjectProperty"},
            {"CachedSpriteProxy", 0x228, "ObjectProperty"},
            {"BangVisibilityRequesters", 0x250, "SetProperty"},
            {"GlowVisibilityRequesters", 0x260, "SetProperty"},
            {"ContinueInjectionOnHideRequesters", 0x270, "SetProperty"},
            {"DynamicInputKey", 0x290, "ObjectProperty"},
            {"BehaviorInputKey", 0x298, "ObjectProperty"},
        }};
    };

    struct FortVehicleInteractionWidgetHolder
    {
        static constexpr std::string_view Name = "FortVehicleInteractionWidgetHolder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortInteractContextInfoWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t VerticalBox_WidgetHolder = 0x308;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"VerticalBox_WidgetHolder", 0x308, "ObjectProperty"},
        }};
    };

}

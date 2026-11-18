#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FNE_UILibrary
{
    struct ActionWidget
    {
        static constexpr std::string_view Name = "ActionWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActionWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t DisplayType = 0x450;
            static constexpr std::uintptr_t UEFNKeybindWidget = 0x458;
            static constexpr std::uintptr_t KeybindWidgetClass = 0x460;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"DisplayType", 0x450, "EnumProperty"},
            {"UEFNKeybindWidget", 0x458, "ObjectProperty"},
            {"KeybindWidgetClass", 0x460, "SoftClassProperty"},
        }};
    };

    struct FNE_CTAButton
    {
        static constexpr std::string_view Name = "FNE_CTAButton";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FNE_ModularButton";
        struct Offsets
        {
            static constexpr std::uintptr_t Text = 0x15E0;
            static constexpr std::uintptr_t SecondaryText = 0x15F0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Text", 0x15E0, "TextProperty"},
            {"SecondaryText", 0x15F0, "TextProperty"},
        }};
    };

    struct FNE_ModularButton
    {
        static constexpr std::string_view Name = "FNE_ModularButton";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonButtonBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ModularBlocks = 0x15D0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ModularBlocks", 0x15D0, "ArrayProperty"},
        }};
    };

    struct FNE_StylableButton
    {
        static constexpr std::string_view Name = "FNE_StylableButton";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FNE_ModularButton";
        struct Offsets
        {
            static constexpr std::uintptr_t Text = 0x15E0;
            static constexpr std::uintptr_t SecondaryText = 0x15F0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Text", 0x15E0, "TextProperty"},
            {"SecondaryText", 0x15F0, "TextProperty"},
        }};
    };

    struct FNE_UIBlock
    {
        static constexpr std::string_view Name = "FNE_UIBlock";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t ViewportResizedEvent = 0x308;
            static constexpr std::uintptr_t TransitionTiming = 0x318;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ViewportResizedEvent", 0x308, "MulticastInlineDelegateProperty"},
            {"TransitionTiming", 0x318, "StructProperty"},
        }};
    };

    struct FNE_UIBlueprintFunctionLibrary
    {
        static constexpr std::string_view Name = "FNE_UIBlueprintFunctionLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}

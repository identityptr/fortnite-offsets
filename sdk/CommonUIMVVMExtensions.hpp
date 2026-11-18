#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::CommonUIMVVMExtensions
{
    struct MVVMViewEnhancedInputClassExtension
    {
        static constexpr std::string_view Name = "MVVMViewEnhancedInputClassExtension";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewClassExtension";
        struct Offsets
        {
            static constexpr std::uintptr_t WidgetName = 0x28;
            static constexpr std::uintptr_t EnhancedInputPropertyName = 0x2C;
            static constexpr std::uintptr_t Priority = 0x30;
            static constexpr std::uintptr_t WidgetPath = 0x34;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"WidgetName", 0x28, "NameProperty"},
            {"EnhancedInputPropertyName", 0x2C, "NameProperty"},
            {"Priority", 0x30, "IntProperty"},
            {"WidgetPath", 0x34, "StructProperty"},
        }};
    };

    struct MVVMViewEnhancedInputExtension
    {
        static constexpr std::string_view Name = "MVVMViewEnhancedInputExtension";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewExtension";
        struct Offsets
        {
            static constexpr std::uintptr_t OnEnhancedInputTriggered = 0x28;
            static constexpr std::uintptr_t UIActionBindingHandle = 0x58;
            static constexpr std::uintptr_t PendingWidgetParentAssignmentTimer = 0x60;
            static constexpr std::uintptr_t ActionWidget = 0x70;
            static constexpr std::uintptr_t ClassExtension = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"OnEnhancedInputTriggered", 0x28, "MulticastInlineDelegateProperty"},
            {"UIActionBindingHandle", 0x58, "StructProperty"},
            {"PendingWidgetParentAssignmentTimer", 0x60, "StructProperty"},
            {"ActionWidget", 0x70, "WeakObjectProperty"},
            {"ClassExtension", 0x78, "ObjectProperty"},
        }};
    };

}

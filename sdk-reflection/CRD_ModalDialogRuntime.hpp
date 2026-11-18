#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::CRD_ModalDialogRuntime
{
    struct ModalDialogVariant
    {
        static constexpr std::string_view Name = "ModalDialogVariant";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t BoundAnim_Open = 0x4A0;
            static constexpr std::uintptr_t BoundAnim_Response = 0x4A8;
            static constexpr std::uintptr_t OnResponseAnimationFinished = 0x4B0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"BoundAnim_Open", 0x4A0, "ObjectProperty"},
            {"BoundAnim_Response", 0x4A8, "ObjectProperty"},
            {"OnResponseAnimationFinished", 0x4B0, "MulticastInlineDelegateProperty"},
        }};
    };

}

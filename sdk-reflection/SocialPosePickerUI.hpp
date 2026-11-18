#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SocialPosePickerUI
{
    struct SocialPosePicker
    {
        static constexpr std::string_view Name = "SocialPosePicker";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t PickerOverlay_Poses = 0x4B0;
            static constexpr std::uintptr_t DefaultEmoteCategoryTag = 0x4B8;
            static constexpr std::uintptr_t ExternalEmotes = 0x4C0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"PickerOverlay_Poses", 0x4B0, "ObjectProperty"},
            {"DefaultEmoteCategoryTag", 0x4B8, "StructProperty"},
            {"ExternalEmotes", 0x4C0, "ArrayProperty"},
        }};
    };

}

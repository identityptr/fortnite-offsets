#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FacialAnimSystem
{
    struct FacialLiveLinkRemapAsset
    {
        static constexpr std::string_view Name = "FacialLiveLinkRemapAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LiveLinkRetargetAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t bExtractBoneTransform = 0x28;
            static constexpr std::uintptr_t bExtractCurve = 0x29;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bExtractBoneTransform", 0x28, "BoolProperty"},
            {"bExtractCurve", 0x29, "BoolProperty"},
        }};
    };

}

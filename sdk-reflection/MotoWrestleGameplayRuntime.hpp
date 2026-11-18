#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::MotoWrestleGameplayRuntime
{
    struct MotoWrestleLayerAnimInstance
    {
        static constexpr std::string_view Name = "MotoWrestleLayerAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayerAnimInstanceProxy";
        struct Offsets
        {
            static constexpr std::uintptr_t bApplyLowerBodyCorrective = 0x1180;
            static constexpr std::uintptr_t HipOffsetVertical = 0x1188;
            static constexpr std::uintptr_t IdleAdditiveAlpha = 0x1190;
            static constexpr std::uintptr_t CustomPelvisTwist = 0x1198;
            static constexpr std::uintptr_t bIsBeingEquipped = 0x11A0;
            static constexpr std::uintptr_t LowerBodyAdditiveLoopSlopeDampFactor = 0x11A8;
            static constexpr std::uintptr_t bEquipAdditiveToPassThroughVal = 0x11B0;
            static constexpr std::uintptr_t bEquipAdditiveToCorrectiveAdditiveVal = 0x11B1;
            static constexpr std::uintptr_t bBlendUpperBodySourcePoseVal = 0x11B2;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"bApplyLowerBodyCorrective", 0x1180, "BoolProperty"},
            {"HipOffsetVertical", 0x1188, "DoubleProperty"},
            {"IdleAdditiveAlpha", 0x1190, "DoubleProperty"},
            {"CustomPelvisTwist", 0x1198, "DoubleProperty"},
            {"bIsBeingEquipped", 0x11A0, "BoolProperty"},
            {"LowerBodyAdditiveLoopSlopeDampFactor", 0x11A8, "DoubleProperty"},
            {"bEquipAdditiveToPassThroughVal", 0x11B0, "BoolProperty"},
            {"bEquipAdditiveToCorrectiveAdditiveVal", 0x11B1, "BoolProperty"},
            {"bBlendUpperBodySourcePoseVal", 0x11B2, "BoolProperty"},
        }};
    };

}

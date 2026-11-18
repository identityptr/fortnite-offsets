#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::AnimPresetsCore
{
    struct AnimPreset
    {
        static constexpr std::string_view Name = "AnimPreset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "GetPresetClass",
            "HandleAnimInstance",
        }};
    };

    struct NPCRetargetAnimInstance
    {
        static constexpr std::string_view Name = "NPCRetargetAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t RetargetNode = 0x260;
            static constexpr std::uintptr_t CurveSourceComponent = 0x638;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"RetargetNode", 0x260, "StructProperty"},
            {"CurveSourceComponent", 0x638, "WeakObjectProperty"},
        }};
    };

    struct NPCRetargetAnimInstanceProxy
    {
        static constexpr std::string_view Name = "NPCRetargetAnimInstanceProxy";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimInstanceProxy";
        struct Offsets
        {
            static constexpr std::uintptr_t SlotGroupInertializationRequestDataMap = 0x3F0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SlotGroupInertializationRequestDataMap", 0x3F0, "MapProperty"},
        }};
    };

}

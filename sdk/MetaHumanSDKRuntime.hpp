#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::MetaHumanSDKRuntime
{
    struct MetaHumanComponentBase
    {
        static constexpr std::string_view Name = "MetaHumanComponentBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t BodyComponentName = 0xC0;
            static constexpr std::uintptr_t BodyType = 0xD0;
            static constexpr std::uintptr_t bEnableBodyCorrectives = 0xD1;
            static constexpr std::uintptr_t FaceComponentName = 0xD8;
            static constexpr std::uintptr_t RigLogicLODThreshold = 0xE8;
            static constexpr std::uintptr_t bEnableNeckCorrectives = 0xEC;
            static constexpr std::uintptr_t NeckCorrectivesLODThreshold = 0xF0;
            static constexpr std::uintptr_t bEnableNeckProcControlRig = 0xF4;
            static constexpr std::uintptr_t NeckProcControlRigLODThreshold = 0xF8;
            static constexpr std::uintptr_t Torso = 0x100;
            static constexpr std::uintptr_t Legs = 0x130;
            static constexpr std::uintptr_t Feet = 0x160;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"BodyComponentName", 0xC0, "StrProperty"},
            {"BodyType", 0xD0, "EnumProperty"},
            {"bEnableBodyCorrectives", 0xD1, "BoolProperty"},
            {"FaceComponentName", 0xD8, "StrProperty"},
            {"RigLogicLODThreshold", 0xE8, "IntProperty"},
            {"bEnableNeckCorrectives", 0xEC, "BoolProperty"},
            {"NeckCorrectivesLODThreshold", 0xF0, "IntProperty"},
            {"bEnableNeckProcControlRig", 0xF4, "BoolProperty"},
            {"NeckProcControlRigLODThreshold", 0xF8, "IntProperty"},
            {"Torso", 0x100, "StructProperty"},
            {"Legs", 0x130, "StructProperty"},
            {"Feet", 0x160, "StructProperty"},
        }};
    };

    struct MetaHumanComponentUE
    {
        static constexpr std::string_view Name = "MetaHumanComponentUE";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MetaHumanComponentBase";
        struct Offsets
        {
            static constexpr std::uintptr_t PostProcessAnimBP = 0x190;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PostProcessAnimBP", 0x190, "SoftClassProperty"},
        }};
    };

}

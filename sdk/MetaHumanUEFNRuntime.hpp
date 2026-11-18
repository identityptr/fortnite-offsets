#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::MetaHumanUEFNRuntime
{
    struct GameFeatureAction_MetaHuman
    {
        static constexpr std::string_view Name = "GameFeatureAction_MetaHuman";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFeatureAction";
        struct Offsets
        {
            static constexpr std::uintptr_t BodyPostAnimBPs = 0x28;
            static constexpr std::uintptr_t Face_AnimBP = 0x38;
            static constexpr std::uintptr_t Face_PostAnimBP = 0x58;
            static constexpr std::uintptr_t BlendableBody_Face_PostAnimBP = 0x78;
            static constexpr std::uintptr_t RigidBodyAnimBP = 0x98;
            static constexpr std::uintptr_t ControlRigRigidBodyAnimBP = 0xB8;
            static constexpr std::uintptr_t ControlRigAnimBP = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"BodyPostAnimBPs", 0x28, "MapProperty"},
            {"Face_AnimBP", 0x38, "SoftClassProperty"},
            {"Face_PostAnimBP", 0x58, "SoftClassProperty"},
            {"BlendableBody_Face_PostAnimBP", 0x78, "SoftClassProperty"},
            {"RigidBodyAnimBP", 0x98, "SoftClassProperty"},
            {"ControlRigRigidBodyAnimBP", 0xB8, "SoftClassProperty"},
            {"ControlRigAnimBP", 0xD8, "SoftClassProperty"},
        }};
    };

    struct MetaHumanComponent
    {
        static constexpr std::string_view Name = "MetaHumanComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MetaHumanComponentBase";
        struct Offsets
        {
            static constexpr std::uintptr_t BodyLODThreshold = 0x190;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"BodyLODThreshold", 0x190, "IntProperty"},
        }};
    };

}

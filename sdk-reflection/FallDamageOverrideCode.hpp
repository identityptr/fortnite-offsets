#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FallDamageOverrideCode
{
    struct FortControllerComponent_FallDamageOverride
    {
        static constexpr std::string_view Name = "FortControllerComponent_FallDamageOverride";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent_DamageLanding";
        struct Offsets
        {
            static constexpr std::uintptr_t FallDamageOverrideEnabled = 0x1D0;
            static constexpr std::uintptr_t EventPushFallDamageLandingTag = 0x1F8;
            static constexpr std::uintptr_t GEOverrideGlobalFallDamageNoDeath = 0x200;
            static constexpr std::uintptr_t HF_ApplyGlobalDamageGENoDeath = 0x208;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"FallDamageOverrideEnabled", 0x1D0, "StructProperty"},
            {"EventPushFallDamageLandingTag", 0x1F8, "StructProperty"},
            {"GEOverrideGlobalFallDamageNoDeath", 0x200, "ClassProperty"},
            {"HF_ApplyGlobalDamageGENoDeath", 0x208, "StructProperty"},
        }};
    };

    struct FortMovementMode_ExtFallDamageOverride
    {
        static constexpr std::string_view Name = "FortMovementMode_ExtFallDamageOverride";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_ExtDamageLanding";
        struct Offsets
        {
            static constexpr std::uintptr_t SendEventsPreActivationTags = 0x498;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SendEventsPreActivationTags", 0x498, "StructProperty"},
        }};
    };

    struct FortMovementMode_FallDamageOverrideRuntimeData
    {
        static constexpr std::string_view Name = "FortMovementMode_FallDamageOverrideRuntimeData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_DamageLandingRuntimeData";
        struct Offsets
        {
            static constexpr std::uintptr_t LogicID = 0x28;
            static constexpr std::uintptr_t RuntimeID = 0x2C;
            static constexpr std::uintptr_t bForceManualActivation = 0x2D;
            static constexpr std::uintptr_t bForceManualEnd = 0x2E;
            static constexpr std::uintptr_t bForceManualActivationNetworked = 0x2F;
            static constexpr std::uintptr_t bForceManualEndNetworked = 0x30;
            static constexpr std::uintptr_t EndReasonFlags = 0x31;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"LogicID", 0x28, "StructProperty"},
            {"RuntimeID", 0x2C, "ByteProperty"},
            {"bForceManualActivation", 0x2D, "BoolProperty"},
            {"bForceManualEnd", 0x2E, "BoolProperty"},
            {"bForceManualActivationNetworked", 0x2F, "BoolProperty"},
            {"bForceManualEndNetworked", 0x30, "BoolProperty"},
            {"EndReasonFlags", 0x31, "ByteProperty"},
        }};
    };

}

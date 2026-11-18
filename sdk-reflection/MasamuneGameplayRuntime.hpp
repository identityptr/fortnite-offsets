#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::MasamuneGameplayRuntime
{
    struct FirePetalMasamuneLayerAnimInstance
    {
        static constexpr std::string_view Name = "FirePetalMasamuneLayerAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayerAnimInstanceProxy";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsHovering = 0x1180;
            static constexpr std::uintptr_t bCharging = 0x1181;
            static constexpr std::uintptr_t MeleeTwist = 0x1184;
            static constexpr std::uintptr_t MeleeTwistAlpha = 0x1188;
            static constexpr std::uintptr_t bPlayAirMontage = 0x1190;
            static constexpr std::uintptr_t ReturnValueYPitch = 0x1194;
            static constexpr std::uintptr_t PitchAlpha = 0x1198;
            static constexpr std::uintptr_t BothHandFK = 0x119C;
            static constexpr std::uintptr_t HoverMMEActiveTagName = 0x11A0;
            static constexpr std::uintptr_t ChargingTagName = 0x11A4;
            static constexpr std::uintptr_t PlayAirMontageTags = 0x11A8;
            static constexpr std::uintptr_t PlayUpperBodyTags = 0x11C8;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"bIsHovering", 0x1180, "BoolProperty"},
            {"bCharging", 0x1181, "BoolProperty"},
            {"MeleeTwist", 0x1184, "FloatProperty"},
            {"MeleeTwistAlpha", 0x1188, "DoubleProperty"},
            {"bPlayAirMontage", 0x1190, "BoolProperty"},
            {"ReturnValueYPitch", 0x1194, "FloatProperty"},
            {"PitchAlpha", 0x1198, "FloatProperty"},
            {"BothHandFK", 0x119C, "FloatProperty"},
            {"HoverMMEActiveTagName", 0x11A0, "StructProperty"},
            {"ChargingTagName", 0x11A4, "StructProperty"},
            {"PlayAirMontageTags", 0x11A8, "StructProperty"},
            {"PlayUpperBodyTags", 0x11C8, "StructProperty"},
        }};
    };

    struct FortMovementMode_ExtMasamuneSlowFall
    {
        static constexpr std::string_view Name = "FortMovementMode_ExtMasamuneSlowFall";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_BaseExtLogic";
        struct Offsets
        {
            static constexpr std::uintptr_t SlowFallGravityZ = 0x1B8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SlowFallGravityZ", 0x1B8, "StructProperty"},
        }};
    };

    struct FortMovementMode_ExtMasamuneSlowFallRuntimeData
    {
        static constexpr std::string_view Name = "FortMovementMode_ExtMasamuneSlowFallRuntimeData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_BaseExtRuntimeData";
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

    struct TyphoonBladeCCPAnimInstance
    {
        static constexpr std::string_view Name = "TyphoonBladeCCPAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CustomCharacterPartAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t ClothRotator_01 = 0x640;
            static constexpr std::uintptr_t ClothRotator_02 = 0x658;
            static constexpr std::uintptr_t ClothRotator_03 = 0x670;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ClothRotator_01", 0x640, "StructProperty"},
            {"ClothRotator_02", 0x658, "StructProperty"},
            {"ClothRotator_03", 0x670, "StructProperty"},
        }};
    };

}

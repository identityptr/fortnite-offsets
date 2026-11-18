#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::NanaimoBarRuntime
{
    struct NanaimoBarLayerAnimInstance
    {
        static constexpr std::string_view Name = "NanaimoBarLayerAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayerAnimInstanceProxy";
        struct Offsets
        {
            static constexpr std::uintptr_t CustomMeleeTwist_Alpha = 0x1180;
            static constexpr std::uintptr_t CustomMeleePitch = 0x1184;
            static constexpr std::uintptr_t CustomMeleeRoll = 0x1188;
            static constexpr std::uintptr_t CustomMeleeTwist = 0x118C;
            static constexpr std::uintptr_t bChargeSM_AliasToPassthrough = 0x1190;
            static constexpr std::uintptr_t bChargeSM_PassthroughToCharge1 = 0x1191;
            static constexpr std::uintptr_t bChargeSM_Charge1ToCharge3Intro = 0x1192;
            static constexpr std::uintptr_t bIsCharging = 0x1193;
            static constexpr std::uintptr_t bOnChargeEnd = 0x1194;
            static constexpr std::uintptr_t ChargeStage = 0x1198;
            static constexpr std::uintptr_t AimOffsetWeight = 0x119C;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"CustomMeleeTwist_Alpha", 0x1180, "FloatProperty"},
            {"CustomMeleePitch", 0x1184, "FloatProperty"},
            {"CustomMeleeRoll", 0x1188, "FloatProperty"},
            {"CustomMeleeTwist", 0x118C, "FloatProperty"},
            {"bChargeSM_AliasToPassthrough", 0x1190, "BoolProperty"},
            {"bChargeSM_PassthroughToCharge1", 0x1191, "BoolProperty"},
            {"bChargeSM_Charge1ToCharge3Intro", 0x1192, "BoolProperty"},
            {"bIsCharging", 0x1193, "BoolProperty"},
            {"bOnChargeEnd", 0x1194, "BoolProperty"},
            {"ChargeStage", 0x1198, "IntProperty"},
            {"AimOffsetWeight", 0x119C, "FloatProperty"},
        }};
    };

    struct NanaimoBarWeaponAnimInstance
    {
        static constexpr std::string_view Name = "NanaimoBarWeaponAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortWeaponAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t ChargeStage = 0x370;
            static constexpr std::uintptr_t bChargeSM_IdleToCharge = 0x374;
            static constexpr std::uintptr_t bChargeSM_ChargeAliasToIdle = 0x375;
            static constexpr std::uintptr_t bChargeSM_ChargeLoopToChargeIntro = 0x376;
            static constexpr std::uintptr_t bOnChargeEnd = 0x377;
            static constexpr std::uintptr_t bAllowFireInterrupt = 0x378;
            static constexpr std::uintptr_t bDoFireInterrupt = 0x379;
            static constexpr std::uintptr_t bHideWeaponEquipAnim = 0x37A;
            static constexpr std::uintptr_t bIsTacticalSprinting = 0x37B;
            static constexpr std::uintptr_t bIsInVehicle = 0x37C;
            static constexpr std::uintptr_t bIsOnMotorcycle = 0x37D;
            static constexpr std::uintptr_t InitialChargeStage = 0x380;
            static constexpr std::uintptr_t ChargeShakeAdditiveAlpha = 0x384;
            static constexpr std::uintptr_t TacticalSprintTagName = 0x388;
            static constexpr std::uintptr_t InVehicleTagName = 0x38C;
            static constexpr std::uintptr_t OnMotorcycleTagName = 0x390;
            static constexpr std::uintptr_t NanaimoBarFireNonTargetedWEPAnimSequenceBase = 0x398;
            static constexpr std::uintptr_t NanaimoBarFireStage02WEPAnimSequenceBase = 0x3A0;
            static constexpr std::uintptr_t NanaimoBarFireStage03WEPAnimSequenceBase = 0x3A8;
        };

        inline static constexpr std::array<PropertyInfo, 19> Properties{{
            {"ChargeStage", 0x370, "IntProperty"},
            {"bChargeSM_IdleToCharge", 0x374, "BoolProperty"},
            {"bChargeSM_ChargeAliasToIdle", 0x375, "BoolProperty"},
            {"bChargeSM_ChargeLoopToChargeIntro", 0x376, "BoolProperty"},
            {"bOnChargeEnd", 0x377, "BoolProperty"},
            {"bAllowFireInterrupt", 0x378, "BoolProperty"},
            {"bDoFireInterrupt", 0x379, "BoolProperty"},
            {"bHideWeaponEquipAnim", 0x37A, "BoolProperty"},
            {"bIsTacticalSprinting", 0x37B, "BoolProperty"},
            {"bIsInVehicle", 0x37C, "BoolProperty"},
            {"bIsOnMotorcycle", 0x37D, "BoolProperty"},
            {"InitialChargeStage", 0x380, "IntProperty"},
            {"ChargeShakeAdditiveAlpha", 0x384, "FloatProperty"},
            {"TacticalSprintTagName", 0x388, "StructProperty"},
            {"InVehicleTagName", 0x38C, "StructProperty"},
            {"OnMotorcycleTagName", 0x390, "StructProperty"},
            {"NanaimoBarFireNonTargetedWEPAnimSequenceBase", 0x398, "ObjectProperty"},
            {"NanaimoBarFireStage02WEPAnimSequenceBase", 0x3A0, "ObjectProperty"},
            {"NanaimoBarFireStage03WEPAnimSequenceBase", 0x3A8, "ObjectProperty"},
        }};
    };

    struct NanaimoBarWeaponInterface
    {
        static constexpr std::string_view Name = "NanaimoBarWeaponInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}

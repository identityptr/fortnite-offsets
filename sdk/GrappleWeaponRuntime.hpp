#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::GrappleWeaponRuntime
{
    struct CustomCharacterPartAnimInstance_GrappleHook
    {
        static constexpr std::string_view Name = "CustomCharacterPartAnimInstance_GrappleHook";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CustomCharacterPartAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t IsFired = 0x640;
            static constexpr std::uintptr_t DistanceBucket = 0x644;
            static constexpr std::uintptr_t MantisAttackAir = 0x648;
            static constexpr std::uintptr_t MantisAttack = 0x649;
            static constexpr std::uintptr_t IsAttackFromCast = 0x64D;
            static constexpr std::uintptr_t IsHookFireShort = 0x64E;
            static constexpr std::uintptr_t IsHookFireMid = 0x64F;
            static constexpr std::uintptr_t IsHookFireLong = 0x650;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"IsFired", 0x640, "BoolProperty"},
            {"DistanceBucket", 0x644, "IntProperty"},
            {"MantisAttackAir", 0x648, "BoolProperty"},
            {"MantisAttack", 0x649, "BoolProperty"},
            {"IsAttackFromCast", 0x64D, "BoolProperty"},
            {"IsHookFireShort", 0x64E, "BoolProperty"},
            {"IsHookFireMid", 0x64F, "BoolProperty"},
            {"IsHookFireLong", 0x650, "BoolProperty"},
        }};
    };

    struct GrappleKnifeLayerAnimInstance
    {
        static constexpr std::string_view Name = "GrappleKnifeLayerAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMantisLayerAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsAttached = 0x1190;
            static constexpr std::uintptr_t bIsFired = 0x1191;
            static constexpr std::uintptr_t bAnimStartWallBounce = 0x1192;
            static constexpr std::uintptr_t PawnRotationRateYaw = 0x1194;
            static constexpr std::uintptr_t AnimBounceAngle = 0x1198;
            static constexpr std::uintptr_t bIsFireOnMotorBike = 0x119C;
            static constexpr std::uintptr_t bIsExitUnexpectedly = 0x119D;
            static constexpr std::uintptr_t bIsCastInAir = 0x119E;
            static constexpr std::uintptr_t bIsCastUpperbody = 0x119F;
            static constexpr std::uintptr_t bIsCastGroundIdle = 0x11A0;
            static constexpr std::uintptr_t bIsCastGroundLoco = 0x11A1;
            static constexpr std::uintptr_t bDistanceBucketIs0 = 0x11A2;
            static constexpr std::uintptr_t bDistanceBucketIs2 = 0x11A3;
            static constexpr std::uintptr_t bIsExitGround = 0x11A4;
            static constexpr std::uintptr_t bIsExitWallBounce = 0x11A5;
            static constexpr std::uintptr_t bIsExitZipAirStart = 0x11A6;
        };

        inline static constexpr std::array<PropertyInfo, 16> Properties{{
            {"bIsAttached", 0x1190, "BoolProperty"},
            {"bIsFired", 0x1191, "BoolProperty"},
            {"bAnimStartWallBounce", 0x1192, "BoolProperty"},
            {"PawnRotationRateYaw", 0x1194, "FloatProperty"},
            {"AnimBounceAngle", 0x1198, "FloatProperty"},
            {"bIsFireOnMotorBike", 0x119C, "BoolProperty"},
            {"bIsExitUnexpectedly", 0x119D, "BoolProperty"},
            {"bIsCastInAir", 0x119E, "BoolProperty"},
            {"bIsCastUpperbody", 0x119F, "BoolProperty"},
            {"bIsCastGroundIdle", 0x11A0, "BoolProperty"},
            {"bIsCastGroundLoco", 0x11A1, "BoolProperty"},
            {"bDistanceBucketIs0", 0x11A2, "BoolProperty"},
            {"bDistanceBucketIs2", 0x11A3, "BoolProperty"},
            {"bIsExitGround", 0x11A4, "BoolProperty"},
            {"bIsExitWallBounce", 0x11A5, "BoolProperty"},
            {"bIsExitZipAirStart", 0x11A6, "BoolProperty"},
        }};
    };

    struct GrappleKnifeWeaponAnimInstance
    {
        static constexpr std::string_view Name = "GrappleKnifeWeaponAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMantisAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t MantisAttackAir = 0x350;
            static constexpr std::uintptr_t MantisAttack = 0x351;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"MantisAttackAir", 0x350, "BoolProperty"},
            {"MantisAttack", 0x351, "BoolProperty"},
        }};
    };

    struct GrappleKnifeWeaponInterface
    {
        static constexpr std::string_view Name = "GrappleKnifeWeaponInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GrappleWeaponLibrary
    {
        static constexpr std::string_view Name = "GrappleWeaponLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}

#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::ArmoredBattleBusRuntime
{
    struct FortArmoredBattleBusPassengerAnimInstance
    {
        static constexpr std::string_view Name = "FortArmoredBattleBusPassengerAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayerAnimInstanceProxy";
        struct Offsets
        {
            static constexpr std::uintptr_t PreviousVehicleRotator = 0x1180;
            static constexpr std::uintptr_t SmoothedVehicleYawRate = 0x1198;
            static constexpr std::uintptr_t PawnSeat = 0x119C;
            static constexpr std::uintptr_t bIsFrontTurretPassenger = 0x11A0;
            static constexpr std::uintptr_t bIsRearTurretPassenger = 0x11A1;
            static constexpr std::uintptr_t Speed = 0x11A4;
            static constexpr std::uintptr_t YawDelta = 0x11A8;
            static constexpr std::uintptr_t TurretYaw = 0x11AC;
            static constexpr std::uintptr_t TurretPitch = 0x11B0;
            static constexpr std::uintptr_t TurretYawRotator = 0x11B8;
            static constexpr std::uintptr_t SlopeRollDegreeAngle = 0x11D0;
            static constexpr std::uintptr_t SlopePitchDegreeAngle = 0x11D4;
            static constexpr std::uintptr_t HandAttachL = 0x11D8;
            static constexpr std::uintptr_t HandAttachR = 0x11F0;
            static constexpr std::uintptr_t TransformSpace = 0x1208;
            static constexpr std::uintptr_t UpdateYawDeltaSmoothedLerpRate = 0x120C;
            static constexpr std::uintptr_t TurretPassengerFront = 0x1210;
            static constexpr std::uintptr_t TurretPassengerRear = 0x1214;
            static constexpr std::uintptr_t FrontFootBoneName = 0x1218;
            static constexpr std::uintptr_t RearFootBoneName = 0x121C;
            static constexpr std::uintptr_t GunHandAttachBoneName_FrontLeft = 0x1220;
            static constexpr std::uintptr_t GunHandAttachBoneName_RearLeft = 0x1224;
            static constexpr std::uintptr_t GunHandAttachBoneName_FrontRight = 0x1228;
            static constexpr std::uintptr_t GunHandAttachBoneName_RearRight = 0x122C;
            static constexpr std::uintptr_t PassengerBoneName_Front = 0x1230;
            static constexpr std::uintptr_t PassengerBoneName_Rear = 0x1234;
            static constexpr std::uintptr_t TurretPitchDegMin = 0x1238;
            static constexpr std::uintptr_t TurretPitchDegMax = 0x123C;
            static constexpr std::uintptr_t LocalPlayerTurretPitchEaseRate = 0x1240;
        };

        inline static constexpr std::array<PropertyInfo, 29> Properties{{
            {"PreviousVehicleRotator", 0x1180, "StructProperty"},
            {"SmoothedVehicleYawRate", 0x1198, "FloatProperty"},
            {"PawnSeat", 0x119C, "IntProperty"},
            {"bIsFrontTurretPassenger", 0x11A0, "BoolProperty"},
            {"bIsRearTurretPassenger", 0x11A1, "BoolProperty"},
            {"Speed", 0x11A4, "FloatProperty"},
            {"YawDelta", 0x11A8, "FloatProperty"},
            {"TurretYaw", 0x11AC, "FloatProperty"},
            {"TurretPitch", 0x11B0, "FloatProperty"},
            {"TurretYawRotator", 0x11B8, "StructProperty"},
            {"SlopeRollDegreeAngle", 0x11D0, "FloatProperty"},
            {"SlopePitchDegreeAngle", 0x11D4, "FloatProperty"},
            {"HandAttachL", 0x11D8, "StructProperty"},
            {"HandAttachR", 0x11F0, "StructProperty"},
            {"TransformSpace", 0x1208, "ByteProperty"},
            {"UpdateYawDeltaSmoothedLerpRate", 0x120C, "FloatProperty"},
            {"TurretPassengerFront", 0x1210, "IntProperty"},
            {"TurretPassengerRear", 0x1214, "IntProperty"},
            {"FrontFootBoneName", 0x1218, "NameProperty"},
            {"RearFootBoneName", 0x121C, "NameProperty"},
            {"GunHandAttachBoneName_FrontLeft", 0x1220, "NameProperty"},
            {"GunHandAttachBoneName_RearLeft", 0x1224, "NameProperty"},
            {"GunHandAttachBoneName_FrontRight", 0x1228, "NameProperty"},
            {"GunHandAttachBoneName_RearRight", 0x122C, "NameProperty"},
            {"PassengerBoneName_Front", 0x1230, "NameProperty"},
            {"PassengerBoneName_Rear", 0x1234, "NameProperty"},
            {"TurretPitchDegMin", 0x1238, "FloatProperty"},
            {"TurretPitchDegMax", 0x123C, "FloatProperty"},
            {"LocalPlayerTurretPitchEaseRate", 0x1240, "FloatProperty"},
        }};
    };

    struct FortArmoredBattleBusVehicleAnimInstance
    {
        static constexpr std::string_view Name = "FortArmoredBattleBusVehicleAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortVehicleAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t FrontTurretAimPitch = 0x510;
            static constexpr std::uintptr_t RearTurretAimPitch = 0x514;
            static constexpr std::uintptr_t FrontYawDeltaSmoothed = 0x518;
            static constexpr std::uintptr_t RearYawDeltaSmoothed = 0x51C;
            static constexpr std::uintptr_t SmoothedVehicleYawRate = 0x520;
            static constexpr std::uintptr_t FrontYawDeltaSmoothedAlpha = 0x524;
            static constexpr std::uintptr_t RearYawDeltaSmoothedAlpha = 0x528;
            static constexpr std::uintptr_t FrontWeaponYaw = 0x530;
            static constexpr std::uintptr_t RearWeaponYaw = 0x548;
            static constexpr std::uintptr_t PreviousVehicleRotator = 0x560;
            static constexpr std::uintptr_t bHasFrontTurretPassenger = 0x578;
            static constexpr std::uintptr_t bHasRearTurretPassenger = 0x579;
            static constexpr std::uintptr_t NetworkEaseRate = 0x57C;
            static constexpr std::uintptr_t UpdateYawDeltaSmoothedLerpRate = 0x580;
            static constexpr std::uintptr_t FrontPassengerSeatIndex = 0x584;
            static constexpr std::uintptr_t RearPassengerSeatIndex = 0x588;
            static constexpr std::uintptr_t FrontPassengerYawOffset = 0x58C;
            static constexpr std::uintptr_t RearPassengerYawOffset = 0x590;
            static constexpr std::uintptr_t FrontPassengerBoneName = 0x594;
            static constexpr std::uintptr_t RearPassengerBoneName = 0x598;
        };

        inline static constexpr std::array<PropertyInfo, 20> Properties{{
            {"FrontTurretAimPitch", 0x510, "FloatProperty"},
            {"RearTurretAimPitch", 0x514, "FloatProperty"},
            {"FrontYawDeltaSmoothed", 0x518, "FloatProperty"},
            {"RearYawDeltaSmoothed", 0x51C, "FloatProperty"},
            {"SmoothedVehicleYawRate", 0x520, "FloatProperty"},
            {"FrontYawDeltaSmoothedAlpha", 0x524, "FloatProperty"},
            {"RearYawDeltaSmoothedAlpha", 0x528, "FloatProperty"},
            {"FrontWeaponYaw", 0x530, "StructProperty"},
            {"RearWeaponYaw", 0x548, "StructProperty"},
            {"PreviousVehicleRotator", 0x560, "StructProperty"},
            {"bHasFrontTurretPassenger", 0x578, "BoolProperty"},
            {"bHasRearTurretPassenger", 0x579, "BoolProperty"},
            {"NetworkEaseRate", 0x57C, "FloatProperty"},
            {"UpdateYawDeltaSmoothedLerpRate", 0x580, "FloatProperty"},
            {"FrontPassengerSeatIndex", 0x584, "IntProperty"},
            {"RearPassengerSeatIndex", 0x588, "IntProperty"},
            {"FrontPassengerYawOffset", 0x58C, "FloatProperty"},
            {"RearPassengerYawOffset", 0x590, "FloatProperty"},
            {"FrontPassengerBoneName", 0x594, "NameProperty"},
            {"RearPassengerBoneName", 0x598, "NameProperty"},
        }};
    };

}

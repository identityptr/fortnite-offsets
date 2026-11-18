#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FillerGruntRuntime
{
    struct FillerGruntPistolLayerAnimInstance
    {
        static constexpr std::string_view Name = "FillerGruntPistolLayerAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayerAnimInstanceProxy";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayerAnimAssetsOverride = 0x1180;
            static constexpr std::uintptr_t bInFriendshipBubble = 0x1190;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PlayerAnimAssetsOverride", 0x1180, "StructProperty"},
            {"bInFriendshipBubble", 0x1190, "BoolProperty"},
        }};
    };

    struct FortGameplayAbility_MagThrowTargetingHandler
    {
        static constexpr std::string_view Name = "FortGameplayAbility_MagThrowTargetingHandler";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameplayAbility";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetSelectionApplicationTag = 0xB40;
            static constexpr std::uintptr_t ValidTargetTag = 0xB44;
            static constexpr std::uintptr_t SpawnRightOffset = 0xB48;
            static constexpr std::uintptr_t TargetingRange = 0xB78;
            static constexpr std::uintptr_t TargetingConePitch = 0xBA8;
            static constexpr std::uintptr_t TargetingConeYaw = 0xBD8;
            static constexpr std::uintptr_t SpawnCrouchedOffset = 0xC08;
            static constexpr std::uintptr_t SpawnStandingOffset = 0xC38;
            static constexpr std::uintptr_t SpawnVehicleOffset = 0xC68;
            static constexpr std::uintptr_t LOSCheck_Vehicle_High = 0xC98;
            static constexpr std::uintptr_t LOSCheck_Vehicle_Low = 0xCC8;
            static constexpr std::uintptr_t LOSCheck_Standing_High = 0xCF8;
            static constexpr std::uintptr_t LOSCheck_Standing_Low = 0xD28;
            static constexpr std::uintptr_t LOSCheck_Crouching_High = 0xD58;
            static constexpr std::uintptr_t LOSCheck_Crouching_Low = 0xD88;
            static constexpr std::uintptr_t LOSCheck_DBNO_High = 0xDB8;
            static constexpr std::uintptr_t LOSCheck_DBNO_Low = 0xDE8;
            static constexpr std::uintptr_t SweepChannel = 0xE18;
            static constexpr std::uintptr_t TraceChannel = 0xE19;
            static constexpr std::uintptr_t TargetFilter = 0xE20;
        };

        inline static constexpr std::array<PropertyInfo, 20> Properties{{
            {"TargetSelectionApplicationTag", 0xB40, "StructProperty"},
            {"ValidTargetTag", 0xB44, "StructProperty"},
            {"SpawnRightOffset", 0xB48, "StructProperty"},
            {"TargetingRange", 0xB78, "StructProperty"},
            {"TargetingConePitch", 0xBA8, "StructProperty"},
            {"TargetingConeYaw", 0xBD8, "StructProperty"},
            {"SpawnCrouchedOffset", 0xC08, "StructProperty"},
            {"SpawnStandingOffset", 0xC38, "StructProperty"},
            {"SpawnVehicleOffset", 0xC68, "StructProperty"},
            {"LOSCheck_Vehicle_High", 0xC98, "StructProperty"},
            {"LOSCheck_Vehicle_Low", 0xCC8, "StructProperty"},
            {"LOSCheck_Standing_High", 0xCF8, "StructProperty"},
            {"LOSCheck_Standing_Low", 0xD28, "StructProperty"},
            {"LOSCheck_Crouching_High", 0xD58, "StructProperty"},
            {"LOSCheck_Crouching_Low", 0xD88, "StructProperty"},
            {"LOSCheck_DBNO_High", 0xDB8, "StructProperty"},
            {"LOSCheck_DBNO_Low", 0xDE8, "StructProperty"},
            {"SweepChannel", 0xE18, "ByteProperty"},
            {"TraceChannel", 0xE19, "ByteProperty"},
            {"TargetFilter", 0xE20, "StructProperty"},
        }};
    };

}

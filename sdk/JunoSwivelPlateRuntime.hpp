#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::JunoSwivelPlateRuntime
{
    struct GameplayCueNotifyLoop_SwivelPlate
    {
        static constexpr std::string_view Name = "GameplayCueNotifyLoop_SwivelPlate";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameplayCueNotify_Loop";
        struct Offsets
        {
            static constexpr std::uintptr_t SwivelPlate = 0xC58;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SwivelPlate", 0xC58, "ObjectProperty"},
        }};
    };

    struct JunoSwivelBase
    {
        static constexpr std::string_view Name = "JunoSwivelBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoBuildingParentBase";
        struct Offsets
        {
            static constexpr std::uintptr_t SwivelPlateClass = 0xC70;
            static constexpr std::uintptr_t AngularSwing1Locked = 0xC78;
            static constexpr std::uintptr_t AngularSwing2Locked = 0xC79;
            static constexpr std::uintptr_t bControlledSwivel = 0xC7A;
            static constexpr std::uintptr_t TorqueDamping = 0xC80;
            static constexpr std::uintptr_t TorqueLimit = 0xCA8;
            static constexpr std::uintptr_t AngularBreakThreshold = 0xCD0;
            static constexpr std::uintptr_t LinearBreakThreshold = 0xCF8;
            static constexpr std::uintptr_t VelocityTarget = 0xD20;
            static constexpr std::uintptr_t RelativeSpawnOffset = 0xD50;
            static constexpr std::uintptr_t RelativeConstraintOffset = 0xDB0;
            static constexpr std::uintptr_t ControlChannelComponent = 0xE10;
            static constexpr std::uintptr_t Constraint = 0xE18;
            static constexpr std::uintptr_t SwivelPlateActor = 0xE20;
            static constexpr std::uintptr_t AttachmentData = 0xE28;
            static constexpr std::uintptr_t bReverseControlledRotation = 0xED0;
            static constexpr std::uintptr_t bConstraintStressed = 0xEE0;
        };

        inline static constexpr std::array<PropertyInfo, 17> Properties{{
            {"SwivelPlateClass", 0xC70, "ClassProperty"},
            {"AngularSwing1Locked", 0xC78, "BoolProperty"},
            {"AngularSwing2Locked", 0xC79, "BoolProperty"},
            {"bControlledSwivel", 0xC7A, "BoolProperty"},
            {"TorqueDamping", 0xC80, "StructProperty"},
            {"TorqueLimit", 0xCA8, "StructProperty"},
            {"AngularBreakThreshold", 0xCD0, "StructProperty"},
            {"LinearBreakThreshold", 0xCF8, "StructProperty"},
            {"VelocityTarget", 0xD20, "StructProperty"},
            {"RelativeSpawnOffset", 0xD50, "StructProperty"},
            {"RelativeConstraintOffset", 0xDB0, "StructProperty"},
            {"ControlChannelComponent", 0xE10, "ObjectProperty"},
            {"Constraint", 0xE18, "ObjectProperty"},
            {"SwivelPlateActor", 0xE20, "ObjectProperty"},
            {"AttachmentData", 0xE28, "StructProperty"},
            {"bReverseControlledRotation", 0xED0, "BoolProperty"},
            {"bConstraintStressed", 0xEE0, "BoolProperty"},
        }};
    };

    struct JunoSwivelPlate
    {
        static constexpr std::string_view Name = "JunoSwivelPlate";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoBuildingActor";
        struct Offsets
        {
            static constexpr std::uintptr_t ChannelsForClockwiseRotation = 0xC48;
            static constexpr std::uintptr_t ChannelsForCounterclockwiseRotation = 0xC68;
            static constexpr std::uintptr_t SwivelCueTag = 0xC90;
            static constexpr std::uintptr_t ControlChannelComponent = 0xC98;
            static constexpr std::uintptr_t SwivelBaseActor = 0xCA0;
            static constexpr std::uintptr_t bCurrentlyDriving = 0xCA8;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"ChannelsForClockwiseRotation", 0xC48, "StructProperty"},
            {"ChannelsForCounterclockwiseRotation", 0xC68, "StructProperty"},
            {"SwivelCueTag", 0xC90, "StructProperty"},
            {"ControlChannelComponent", 0xC98, "ObjectProperty"},
            {"SwivelBaseActor", 0xCA0, "ObjectProperty"},
            {"bCurrentlyDriving", 0xCA8, "BoolProperty"},
        }};
    };

}

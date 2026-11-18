#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::JunoWheelsDemoRuntime
{
    struct JunoWheelActor
    {
        static constexpr std::string_view Name = "JunoWheelActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AttachableWheel";
        struct Offsets
        {
            static constexpr std::uintptr_t HealthSet = 0x3F0;
            static constexpr std::uintptr_t AbilitySystemComponent = 0x3F8;
            static constexpr std::uintptr_t WheelGuid = 0x418;
            static constexpr std::uintptr_t AssociatedItem = 0x430;
            static constexpr std::uintptr_t LocalAttachData = 0x438;
            static constexpr std::uintptr_t CurveTableIndexToWheelPresets = 0x490;
            static constexpr std::uintptr_t ControlChannelTags_Steering_Left = 0x498;
            static constexpr std::uintptr_t ControlChannelTags_Steering_Right = 0x4B8;
            static constexpr std::uintptr_t ControlChannelTags_Velocity_Forwards = 0x4D8;
            static constexpr std::uintptr_t ControlChannelTags_Velocity_Backwards = 0x4F8;
            static constexpr std::uintptr_t ControlChannelTags_Brake = 0x518;
            static constexpr std::uintptr_t MaxSteerAngle_Curve = 0x538;
            static constexpr std::uintptr_t MaxSteerAngle = 0x548;
            static constexpr std::uintptr_t MaxAccelerationTorque_Curve = 0x550;
            static constexpr std::uintptr_t MaxAccelerationTorque = 0x560;
            static constexpr std::uintptr_t MaxBrakeTorque_Curve = 0x568;
            static constexpr std::uintptr_t MaxBrakeTorque = 0x578;
            static constexpr std::uintptr_t MaxAngularVelocity_Curve = 0x580;
            static constexpr std::uintptr_t MaxAngularVelocity = 0x590;
            static constexpr std::uintptr_t bControlChannelInvert_Steering = 0x594;
            static constexpr std::uintptr_t bControlChannelInvert_Velocity = 0x595;
            static constexpr std::uintptr_t SteeringMatchRate_Curve = 0x598;
            static constexpr std::uintptr_t SteeringMatchRate = 0x5A8;
            static constexpr std::uintptr_t VelocityMatchRate_Curve = 0x5B0;
            static constexpr std::uintptr_t VelocityMatchRate = 0x5C0;
            static constexpr std::uintptr_t BrakeMatchRate_Curve = 0x5C8;
            static constexpr std::uintptr_t BrakeMatchRate = 0x5D8;
            static constexpr std::uintptr_t AngularVelocityBrakeThreshold_Curve = 0x5E0;
            static constexpr std::uintptr_t AngularVelocityBrakeThreshold = 0x5F0;
            static constexpr std::uintptr_t TEMP_HotfixableWheelMaterial = 0x5F8;
            static constexpr std::uintptr_t ControlChannelComponent = 0x608;
            static constexpr std::uintptr_t PowerConsumerComponent = 0x610;
            static constexpr std::uintptr_t ActorRef = 0x618;
            static constexpr std::uintptr_t DefaultTags = 0x638;
            static constexpr std::uintptr_t bShowSecondInteractPrompt = 0x658;
        };

        inline static constexpr std::array<PropertyInfo, 35> Properties{{
            {"HealthSet", 0x3F0, "ObjectProperty"},
            {"AbilitySystemComponent", 0x3F8, "ObjectProperty"},
            {"WheelGuid", 0x418, "StructProperty"},
            {"AssociatedItem", 0x430, "ObjectProperty"},
            {"LocalAttachData", 0x438, "StructProperty"},
            {"CurveTableIndexToWheelPresets", 0x490, "IntProperty"},
            {"ControlChannelTags_Steering_Left", 0x498, "StructProperty"},
            {"ControlChannelTags_Steering_Right", 0x4B8, "StructProperty"},
            {"ControlChannelTags_Velocity_Forwards", 0x4D8, "StructProperty"},
            {"ControlChannelTags_Velocity_Backwards", 0x4F8, "StructProperty"},
            {"ControlChannelTags_Brake", 0x518, "StructProperty"},
            {"MaxSteerAngle_Curve", 0x538, "StructProperty"},
            {"MaxSteerAngle", 0x548, "FloatProperty"},
            {"MaxAccelerationTorque_Curve", 0x550, "StructProperty"},
            {"MaxAccelerationTorque", 0x560, "FloatProperty"},
            {"MaxBrakeTorque_Curve", 0x568, "StructProperty"},
            {"MaxBrakeTorque", 0x578, "FloatProperty"},
            {"MaxAngularVelocity_Curve", 0x580, "StructProperty"},
            {"MaxAngularVelocity", 0x590, "FloatProperty"},
            {"bControlChannelInvert_Steering", 0x594, "BoolProperty"},
            {"bControlChannelInvert_Velocity", 0x595, "BoolProperty"},
            {"SteeringMatchRate_Curve", 0x598, "StructProperty"},
            {"SteeringMatchRate", 0x5A8, "FloatProperty"},
            {"VelocityMatchRate_Curve", 0x5B0, "StructProperty"},
            {"VelocityMatchRate", 0x5C0, "FloatProperty"},
            {"BrakeMatchRate_Curve", 0x5C8, "StructProperty"},
            {"BrakeMatchRate", 0x5D8, "FloatProperty"},
            {"AngularVelocityBrakeThreshold_Curve", 0x5E0, "StructProperty"},
            {"AngularVelocityBrakeThreshold", 0x5F0, "FloatProperty"},
            {"TEMP_HotfixableWheelMaterial", 0x5F8, "ObjectProperty"},
            {"ControlChannelComponent", 0x608, "ObjectProperty"},
            {"PowerConsumerComponent", 0x610, "ObjectProperty"},
            {"ActorRef", 0x618, "ObjectProperty"},
            {"DefaultTags", 0x638, "StructProperty"},
            {"bShowSecondInteractPrompt", 0x658, "BoolProperty"},
        }};
    };

    struct JunoWheelMount
    {
        static constexpr std::string_view Name = "JunoWheelMount";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoBuildingParentBase";
        struct Offsets
        {
            static constexpr std::uintptr_t WheelClass = 0xC70;
            static constexpr std::uintptr_t RelativeSpawnOffset = 0xC80;
            static constexpr std::uintptr_t ControlChannelComponent = 0xCE0;
            static constexpr std::uintptr_t WheelActor = 0xCE8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"WheelClass", 0xC70, "ClassProperty"},
            {"RelativeSpawnOffset", 0xC80, "StructProperty"},
            {"ControlChannelComponent", 0xCE0, "ObjectProperty"},
            {"WheelActor", 0xCE8, "ObjectProperty"},
        }};
    };

    struct JunoWheelSubsystem
    {
        static constexpr std::string_view Name = "JunoWheelSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TickableWorldSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}

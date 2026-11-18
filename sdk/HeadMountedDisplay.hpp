#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::HeadMountedDisplay
{
    struct HandKeypointConversion
    {
        static constexpr std::string_view Name = "HandKeypointConversion";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "Conv_HandKeypointToInt32",
        }};
    };

    struct MotionControllerComponent
    {
        static constexpr std::string_view Name = "MotionControllerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimitiveComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayerIndex = 0x560;
            static constexpr std::uintptr_t MotionSource = 0x564;
            static constexpr std::uintptr_t bDisableLowLatencyUpdate = 0x568;
            static constexpr std::uintptr_t CurrentTrackingStatus = 0x56C;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"PlayerIndex", 0x560, "IntProperty"},
            {"MotionSource", 0x564, "NameProperty"},
            {"bDisableLowLatencyUpdate", 0x568, "BoolProperty"},
            {"CurrentTrackingStatus", 0x56C, "EnumProperty"},
        }};

        inline static constexpr std::array<std::string_view, 11> FunctionNames{{
            "GetAngularVelocity",
            "GetHandJointPosition",
            "GetLinearAcceleration",
            "GetLinearVelocity",
            "GetParameterValue",
            "GetTrackingSource",
            "IsTracked",
            "OnMotionControllerUpdated",
            "SetAssociatedPlayerIndex",
            "SetTrackingMotionSource",
            "SetTrackingSource",
        }};
    };

    struct XRDeviceId
    {
        static constexpr std::string_view Name = "XRDeviceId";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SystemName = 0x0;
            static constexpr std::uintptr_t DeviceID = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SystemName", 0x0, "NameProperty"},
            {"DeviceID", 0x4, "IntProperty"},
        }};
    };

    struct XRHMDData
    {
        static constexpr std::string_view Name = "XRHMDData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bValid = 0x0;
            static constexpr std::uintptr_t DeviceName = 0x4;
            static constexpr std::uintptr_t ApplicationInstanceID = 0x8;
            static constexpr std::uintptr_t TrackingStatus = 0x18;
            static constexpr std::uintptr_t Position = 0x20;
            static constexpr std::uintptr_t Rotation = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"bValid", 0x0, "BoolProperty"},
            {"DeviceName", 0x4, "NameProperty"},
            {"ApplicationInstanceID", 0x8, "StructProperty"},
            {"TrackingStatus", 0x18, "EnumProperty"},
            {"Position", 0x20, "StructProperty"},
            {"Rotation", 0x40, "StructProperty"},
        }};
    };

    struct XRHandTrackingState
    {
        static constexpr std::string_view Name = "XRHandTrackingState";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bValid = 0x0;
            static constexpr std::uintptr_t DeviceName = 0x4;
            static constexpr std::uintptr_t ApplicationInstanceID = 0x8;
            static constexpr std::uintptr_t XRSpaceType = 0x18;
            static constexpr std::uintptr_t Hand = 0x19;
            static constexpr std::uintptr_t TrackingStatus = 0x1A;
            static constexpr std::uintptr_t HandKeyLocations = 0x20;
            static constexpr std::uintptr_t HandKeyRotations = 0x30;
            static constexpr std::uintptr_t HandKeyRadii = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"bValid", 0x0, "BoolProperty"},
            {"DeviceName", 0x4, "NameProperty"},
            {"ApplicationInstanceID", 0x8, "StructProperty"},
            {"XRSpaceType", 0x18, "EnumProperty"},
            {"Hand", 0x19, "EnumProperty"},
            {"TrackingStatus", 0x1A, "EnumProperty"},
            {"HandKeyLocations", 0x20, "ArrayProperty"},
            {"HandKeyRotations", 0x30, "ArrayProperty"},
            {"HandKeyRadii", 0x40, "ArrayProperty"},
        }};
    };

    struct XRMotionControllerState
    {
        static constexpr std::string_view Name = "XRMotionControllerState";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bValid = 0x0;
            static constexpr std::uintptr_t DeviceName = 0x4;
            static constexpr std::uintptr_t ApplicationInstanceID = 0x8;
            static constexpr std::uintptr_t XRSpaceType = 0x18;
            static constexpr std::uintptr_t Hand = 0x19;
            static constexpr std::uintptr_t TrackingStatus = 0x1A;
            static constexpr std::uintptr_t XRControllerPoseType = 0x1B;
            static constexpr std::uintptr_t ControllerLocation = 0x20;
            static constexpr std::uintptr_t ControllerRotation = 0x40;
            static constexpr std::uintptr_t GripUnrealSpaceLocation = 0x60;
            static constexpr std::uintptr_t GripUnrealSpaceRotation = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"bValid", 0x0, "BoolProperty"},
            {"DeviceName", 0x4, "NameProperty"},
            {"ApplicationInstanceID", 0x8, "StructProperty"},
            {"XRSpaceType", 0x18, "EnumProperty"},
            {"Hand", 0x19, "EnumProperty"},
            {"TrackingStatus", 0x1A, "EnumProperty"},
            {"XRControllerPoseType", 0x1B, "EnumProperty"},
            {"ControllerLocation", 0x20, "StructProperty"},
            {"ControllerRotation", 0x40, "StructProperty"},
            {"GripUnrealSpaceLocation", 0x60, "StructProperty"},
            {"GripUnrealSpaceRotation", 0x80, "StructProperty"},
        }};
    };

}

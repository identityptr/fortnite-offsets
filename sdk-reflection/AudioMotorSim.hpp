#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::AudioMotorSim
{
    struct AudioMotorModelComponent
    {
        static constexpr std::string_view Name = "AudioMotorModelComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t SimComponents = 0xC0;
            static constexpr std::uintptr_t AudioComponents = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SimComponents", 0xC0, "ArrayProperty"},
            {"AudioComponents", 0xD0, "ArrayProperty"},
        }};

        inline static constexpr std::array<std::string_view, 14> FunctionNames{{
            "AddMotorAudioComponent",
            "AddMotorSimComponent",
            "ConfigureMotorSimComponents",
            "GetCachedInputData",
            "GetGear",
            "GetRpm",
            "GetRuntimeInfo",
            "RemoveAllMotorSimComponents",
            "RemoveMotorAudioComponent",
            "RemoveMotorSimComponent",
            "Reset",
            "StartOutput",
            "StopOutput",
            "Update",
        }};
    };

    struct AudioMotorSim
    {
        static constexpr std::string_view Name = "AudioMotorSim";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 3> FunctionNames{{
            "ConfigMotorSim",
            "GetEnabled",
            "Reset",
        }};
    };

    struct AudioMotorSimComponent
    {
        static constexpr std::string_view Name = "AudioMotorSimComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bEnabled = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bEnabled", 0xC8, "BoolProperty"},
        }};

        inline static constexpr std::array<std::string_view, 3> FunctionNames{{
            "BP_Reset",
            "BP_Update",
            "SetEnabled",
        }};
    };

    struct AudioMotorSimConfigData
    {
        static constexpr std::string_view Name = "AudioMotorSimConfigData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AudioMotorSimDebugDataBase
    {
        static constexpr std::string_view Name = "AudioMotorSimDebugDataBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AudioMotorSimInputContext
    {
        static constexpr std::string_view Name = "AudioMotorSimInputContext";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t DeltaTime = 0x0;
            static constexpr std::uintptr_t Speed = 0x4;
            static constexpr std::uintptr_t ForwardSpeed = 0x8;
            static constexpr std::uintptr_t SideSpeed = 0xC;
            static constexpr std::uintptr_t UpSpeed = 0x10;
            static constexpr std::uintptr_t Throttle = 0x14;
            static constexpr std::uintptr_t Brake = 0x18;
            static constexpr std::uintptr_t SurfaceFrictionModifier = 0x1C;
            static constexpr std::uintptr_t MotorFrictionModifier = 0x20;
            static constexpr std::uintptr_t Boost = 0x24;
            static constexpr std::uintptr_t bDriving = 0x28;
            static constexpr std::uintptr_t bGrounded = 0x29;
            static constexpr std::uintptr_t bCanShift = 0x2A;
            static constexpr std::uintptr_t bClutchEngaged = 0x2B;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"DeltaTime", 0x0, "FloatProperty"},
            {"Speed", 0x4, "FloatProperty"},
            {"ForwardSpeed", 0x8, "FloatProperty"},
            {"SideSpeed", 0xC, "FloatProperty"},
            {"UpSpeed", 0x10, "FloatProperty"},
            {"Throttle", 0x14, "FloatProperty"},
            {"Brake", 0x18, "FloatProperty"},
            {"SurfaceFrictionModifier", 0x1C, "FloatProperty"},
            {"MotorFrictionModifier", 0x20, "FloatProperty"},
            {"Boost", 0x24, "FloatProperty"},
            {"bDriving", 0x28, "BoolProperty"},
            {"bGrounded", 0x29, "BoolProperty"},
            {"bCanShift", 0x2A, "BoolProperty"},
            {"bClutchEngaged", 0x2B, "BoolProperty"},
        }};
    };

    struct AudioMotorSimOutput
    {
        static constexpr std::string_view Name = "AudioMotorSimOutput";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AudioMotorSimRuntimeContext
    {
        static constexpr std::string_view Name = "AudioMotorSimRuntimeContext";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bShifting = 0x0;
            static constexpr std::uintptr_t Gear = 0x4;
            static constexpr std::uintptr_t VirtualSpeedKmh = 0x8;
            static constexpr std::uintptr_t RPM = 0xC;
            static constexpr std::uintptr_t Volume = 0x10;
            static constexpr std::uintptr_t Pitch = 0x14;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"bShifting", 0x0, "BoolProperty"},
            {"Gear", 0x4, "IntProperty"},
            {"VirtualSpeedKmh", 0x8, "FloatProperty"},
            {"RPM", 0xC, "FloatProperty"},
            {"Volume", 0x10, "FloatProperty"},
            {"Pitch", 0x14, "FloatProperty"},
        }};
    };

    struct MotorSimEntry
    {
        static constexpr std::string_view Name = "MotorSimEntry";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Sim = 0x0;
            static constexpr std::uintptr_t SortOrder = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Sim", 0x0, "InterfaceProperty"},
            {"SortOrder", 0x10, "IntProperty"},
        }};
    };

}

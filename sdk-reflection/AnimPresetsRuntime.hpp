#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::AnimPresetsRuntime
{
    struct AnimPresetComponent
    {
        static constexpr std::string_view Name = "AnimPresetComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t AnimPreset = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AnimPreset", 0xC0, "SoftClassProperty"},
        }};
    };

    struct AnimPreset_BasicLocomotion
    {
        static constexpr std::string_view Name = "AnimPreset_BasicLocomotion";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimPreset";
        struct Offsets
        {
            static constexpr std::uintptr_t Idle = 0x28;
            static constexpr std::uintptr_t MoveForward = 0x38;
            static constexpr std::uintptr_t MoveBackward = 0x48;
            static constexpr std::uintptr_t MoveLeft = 0x58;
            static constexpr std::uintptr_t MoveRight = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Idle", 0x28, "StructProperty"},
            {"MoveForward", 0x38, "StructProperty"},
            {"MoveBackward", 0x48, "StructProperty"},
            {"MoveLeft", 0x58, "StructProperty"},
            {"MoveRight", 0x68, "StructProperty"},
        }};
    };

    struct AnimPreset_SingleAnimationData
    {
        static constexpr std::string_view Name = "AnimPreset_SingleAnimationData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Animation = 0x0;
            static constexpr std::uintptr_t PlayRate = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Animation", 0x0, "ObjectProperty"},
            {"PlayRate", 0x8, "FloatProperty"},
        }};
    };

    struct GameFeatureAction_AnimPreset
    {
        static constexpr std::string_view Name = "GameFeatureAction_AnimPreset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFeatureAction";
        struct Offsets
        {
            static constexpr std::uintptr_t AnimBP_Preset_BasicLocomotion = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AnimBP_Preset_BasicLocomotion", 0x28, "SoftClassProperty"},
        }};
    };

}

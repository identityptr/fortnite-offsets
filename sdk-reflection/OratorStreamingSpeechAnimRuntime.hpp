#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::OratorStreamingSpeechAnimRuntime
{
    struct OratorSpeechAnimSolverPoolSubsystem
    {
        static constexpr std::string_view Name = "OratorSpeechAnimSolverPoolSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t IdleSolvers = 0x38;
            static constexpr std::uintptr_t StoppingSolvers = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"IdleSolvers", 0x38, "ArrayProperty"},
            {"StoppingSolvers", 0x48, "ArrayProperty"},
        }};
    };

    struct OratorStreamingSpeechAnimProvider
    {
        static constexpr std::string_view Name = "OratorStreamingSpeechAnimProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OratorSpeechAnimationProvider";
        struct Offsets
        {
            static constexpr std::uintptr_t AnimationModelData = 0x48;
            static constexpr std::uintptr_t SolverSettings = 0x68;
            static constexpr std::uintptr_t LoadedAnimationModelData = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"AnimationModelData", 0x48, "SoftObjectProperty"},
            {"SolverSettings", 0x68, "StructProperty"},
            {"LoadedAnimationModelData", 0xD8, "ObjectProperty"},
        }};
    };

}

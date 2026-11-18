#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::AnimationBudgetAllocator
{
    struct AnimationBudgetAllocatorParameters
    {
        static constexpr std::string_view Name = "AnimationBudgetAllocatorParameters";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t BudgetInMs = 0x0;
            static constexpr std::uintptr_t MinQuality = 0x4;
            static constexpr std::uintptr_t MaxTickRate = 0x8;
            static constexpr std::uintptr_t WorkUnitSmoothingSpeed = 0xC;
            static constexpr std::uintptr_t AlwaysTickFalloffAggression = 0x10;
            static constexpr std::uintptr_t InterpolationFalloffAggression = 0x14;
            static constexpr std::uintptr_t InterpolationMaxRate = 0x18;
            static constexpr std::uintptr_t MaxInterpolatedComponents = 0x1C;
            static constexpr std::uintptr_t InterpolationTickMultiplier = 0x20;
            static constexpr std::uintptr_t InitialEstimatedWorkUnitTimeMs = 0x24;
            static constexpr std::uintptr_t MaxTickedOffsreenComponents = 0x28;
            static constexpr std::uintptr_t StateChangeThrottleInFrames = 0x2C;
            static constexpr std::uintptr_t BudgetFactorBeforeReducedWork = 0x30;
            static constexpr std::uintptr_t BudgetFactorBeforeReducedWorkEpsilon = 0x34;
            static constexpr std::uintptr_t BudgetPressureSmoothingSpeed = 0x38;
            static constexpr std::uintptr_t ReducedWorkThrottleMinInFrames = 0x3C;
            static constexpr std::uintptr_t ReducedWorkThrottleMaxInFrames = 0x40;
            static constexpr std::uintptr_t BudgetFactorBeforeAggressiveReducedWork = 0x44;
            static constexpr std::uintptr_t ReducedWorkThrottleMaxPerFrame = 0x48;
            static constexpr std::uintptr_t BudgetPressureBeforeEmergencyReducedWork = 0x4C;
            static constexpr std::uintptr_t AutoCalculatedSignificanceMaxDistance = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 21> Properties{{
            {"BudgetInMs", 0x0, "FloatProperty"},
            {"MinQuality", 0x4, "FloatProperty"},
            {"MaxTickRate", 0x8, "IntProperty"},
            {"WorkUnitSmoothingSpeed", 0xC, "FloatProperty"},
            {"AlwaysTickFalloffAggression", 0x10, "FloatProperty"},
            {"InterpolationFalloffAggression", 0x14, "FloatProperty"},
            {"InterpolationMaxRate", 0x18, "IntProperty"},
            {"MaxInterpolatedComponents", 0x1C, "IntProperty"},
            {"InterpolationTickMultiplier", 0x20, "FloatProperty"},
            {"InitialEstimatedWorkUnitTimeMs", 0x24, "FloatProperty"},
            {"MaxTickedOffsreenComponents", 0x28, "IntProperty"},
            {"StateChangeThrottleInFrames", 0x2C, "IntProperty"},
            {"BudgetFactorBeforeReducedWork", 0x30, "FloatProperty"},
            {"BudgetFactorBeforeReducedWorkEpsilon", 0x34, "FloatProperty"},
            {"BudgetPressureSmoothingSpeed", 0x38, "FloatProperty"},
            {"ReducedWorkThrottleMinInFrames", 0x3C, "IntProperty"},
            {"ReducedWorkThrottleMaxInFrames", 0x40, "IntProperty"},
            {"BudgetFactorBeforeAggressiveReducedWork", 0x44, "FloatProperty"},
            {"ReducedWorkThrottleMaxPerFrame", 0x48, "IntProperty"},
            {"BudgetPressureBeforeEmergencyReducedWork", 0x4C, "FloatProperty"},
            {"AutoCalculatedSignificanceMaxDistance", 0x50, "FloatProperty"},
        }};
    };

    struct AnimationBudgetBlueprintLibrary
    {
        static constexpr std::string_view Name = "AnimationBudgetBlueprintLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "EnableAnimationBudget",
            "SetAnimationBudgetParameters",
        }};
    };

    struct SkeletalMeshComponentBudgeted
    {
        static constexpr std::string_view Name = "SkeletalMeshComponentBudgeted";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SkeletalMeshComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bAutoCalculateSignificance = 0x1010;
            static constexpr std::uintptr_t bAutoRegisterWithBudgetAllocator = 0x1010;
            static constexpr std::uintptr_t bShouldUseActorRenderedFlag = 0x1010;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bAutoCalculateSignificance", 0x1010, "BoolProperty"},
            {"bAutoRegisterWithBudgetAllocator", 0x1010, "BoolProperty"},
            {"bShouldUseActorRenderedFlag", 0x1010, "BoolProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "SetAutoRegisterWithBudgetAllocator",
        }};
    };

}

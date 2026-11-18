#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::HopscotchWeaponsGameplayRuntime
{
    struct FortGameplayAbility_AppleSunSmall_Passive
    {
        static constexpr std::string_view Name = "FortGameplayAbility_AppleSunSmall_Passive";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameplayAbility";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayerPawn = 0xB40;
            static constexpr std::uintptr_t CharacterMovementComponent = 0xB48;
            static constexpr std::uintptr_t UpdateIntervalRow = 0xB50;
            static constexpr std::uintptr_t CanCrashpadGameplayEffectClass = 0xB78;
            static constexpr std::uintptr_t CanCrashpadGameplayTags = 0xB80;
            static constexpr std::uintptr_t GliderRedeployTags = 0xBA0;
            static constexpr std::uintptr_t UpdateInterval = 0xBC0;
            static constexpr std::uintptr_t MaxFallVelocity = 0xBC4;
            static constexpr std::uintptr_t CloseToGroundThreshold = 0xBC8;
            static constexpr std::uintptr_t GroundTraceMaxDistance = 0xBCC;
            static constexpr std::uintptr_t MaxVelocityJumpPromt = 0xBD0;
            static constexpr std::uintptr_t DefaultMinVelocityJumpPromt = 0xBD4;
            static constexpr std::uintptr_t SwimmingMinVelocityJumpPromt = 0xBD8;
            static constexpr std::uintptr_t CurrentMinVelocityJumpPrompt = 0xBDC;
            static constexpr std::uintptr_t DefaultMinTimeSinceGroundedForJumpPrompt = 0xBE0;
            static constexpr std::uintptr_t SwimmingMinTimeSinceGroundedForJumpPrompt = 0xBE4;
            static constexpr std::uintptr_t CurrentMinTimeSinceGroundedForJumpPrompt = 0xBE8;
            static constexpr std::uintptr_t TraceDistanceToGround = 0xBEC;
            static constexpr std::uintptr_t TimeSinceGrounded = 0xBF0;
            static constexpr std::uintptr_t bCanCrashpadByJumping = 0xBF4;
            static constexpr std::uintptr_t bPreviousCanCrashpad = 0xBF5;
            static constexpr std::uintptr_t bIsCloseToGround = 0xBF6;
            static constexpr std::uintptr_t bIsClambering = 0xBF7;
            static constexpr std::uintptr_t bBlockedTag = 0xBF8;
            static constexpr std::uintptr_t bGliderTag = 0xBF9;
        };

        inline static constexpr std::array<PropertyInfo, 25> Properties{{
            {"PlayerPawn", 0xB40, "WeakObjectProperty"},
            {"CharacterMovementComponent", 0xB48, "WeakObjectProperty"},
            {"UpdateIntervalRow", 0xB50, "StructProperty"},
            {"CanCrashpadGameplayEffectClass", 0xB78, "ClassProperty"},
            {"CanCrashpadGameplayTags", 0xB80, "StructProperty"},
            {"GliderRedeployTags", 0xBA0, "StructProperty"},
            {"UpdateInterval", 0xBC0, "FloatProperty"},
            {"MaxFallVelocity", 0xBC4, "FloatProperty"},
            {"CloseToGroundThreshold", 0xBC8, "FloatProperty"},
            {"GroundTraceMaxDistance", 0xBCC, "FloatProperty"},
            {"MaxVelocityJumpPromt", 0xBD0, "FloatProperty"},
            {"DefaultMinVelocityJumpPromt", 0xBD4, "FloatProperty"},
            {"SwimmingMinVelocityJumpPromt", 0xBD8, "FloatProperty"},
            {"CurrentMinVelocityJumpPrompt", 0xBDC, "FloatProperty"},
            {"DefaultMinTimeSinceGroundedForJumpPrompt", 0xBE0, "FloatProperty"},
            {"SwimmingMinTimeSinceGroundedForJumpPrompt", 0xBE4, "FloatProperty"},
            {"CurrentMinTimeSinceGroundedForJumpPrompt", 0xBE8, "FloatProperty"},
            {"TraceDistanceToGround", 0xBEC, "FloatProperty"},
            {"TimeSinceGrounded", 0xBF0, "FloatProperty"},
            {"bCanCrashpadByJumping", 0xBF4, "BoolProperty"},
            {"bPreviousCanCrashpad", 0xBF5, "BoolProperty"},
            {"bIsCloseToGround", 0xBF6, "BoolProperty"},
            {"bIsClambering", 0xBF7, "BoolProperty"},
            {"bBlockedTag", 0xBF8, "BoolProperty"},
            {"bGliderTag", 0xBF9, "BoolProperty"},
        }};
    };

}

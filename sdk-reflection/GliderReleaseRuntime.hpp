#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::GliderReleaseRuntime
{
    struct FortControllerComponent_GliderRelease
    {
        static constexpr std::string_view Name = "FortControllerComponent_GliderRelease";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t DangerDistanceToGroundThreshold = 0xC8;
            static constexpr std::uintptr_t DangerVelocityThreshold = 0xF0;
            static constexpr std::uintptr_t SkydivingMovementModeTag = 0x118;
            static constexpr std::uintptr_t ParachutingMovementModeTag = 0x11C;
            static constexpr std::uintptr_t GroundRushMovementModeExtensionTag = 0x120;
            static constexpr std::uintptr_t PrimaryActionBlockedTags = 0x128;
            static constexpr std::uintptr_t UIPromptBlockedTag = 0x148;
            static constexpr std::uintptr_t PlaylistReadyAction = 0x150;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"DangerDistanceToGroundThreshold", 0xC8, "StructProperty"},
            {"DangerVelocityThreshold", 0xF0, "StructProperty"},
            {"SkydivingMovementModeTag", 0x118, "StructProperty"},
            {"ParachutingMovementModeTag", 0x11C, "StructProperty"},
            {"GroundRushMovementModeExtensionTag", 0x120, "StructProperty"},
            {"PrimaryActionBlockedTags", 0x128, "StructProperty"},
            {"UIPromptBlockedTag", 0x148, "StructProperty"},
            {"PlaylistReadyAction", 0x150, "ObjectProperty"},
        }};
    };

    struct GliderReleaseFunctionLibrary
    {
        static constexpr std::string_view Name = "GliderReleaseFunctionLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}

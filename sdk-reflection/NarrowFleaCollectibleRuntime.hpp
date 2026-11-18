#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::NarrowFleaCollectibleRuntime
{
    struct FortCollectibleRingBurst
    {
        static constexpr std::string_view Name = "FortCollectibleRingBurst";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t Burst = 0x278;
            static constexpr std::uintptr_t LiveRingMask = 0x2F0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Burst", 0x278, "StructProperty"},
            {"LiveRingMask", 0x2F0, "UInt32Property"},
        }};
    };

    struct FortCollectibleRingConfig
    {
        static constexpr std::string_view Name = "FortCollectibleRingConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t RingLayers = 0x28;
            static constexpr std::uintptr_t SpawnSound = 0x38;
            static constexpr std::uintptr_t SparkleSystem = 0x40;
            static constexpr std::uintptr_t bUseMeshSparkle = 0x48;
            static constexpr std::uintptr_t bSparkleFollowsRingSpin = 0x49;
            static constexpr std::uintptr_t CollectGameplayCueTag = 0x4C;
            static constexpr std::uintptr_t CollectGameplayEventTag = 0x50;
            static constexpr std::uintptr_t InitialSpeed = 0x58;
            static constexpr std::uintptr_t Gravity = 0x80;
            static constexpr std::uintptr_t SpinRate = 0xA8;
            static constexpr std::uintptr_t LaunchAngle = 0xB0;
            static constexpr std::uintptr_t SpreadHalfAngle = 0xD8;
            static constexpr std::uintptr_t SpawnRadius = 0x100;
            static constexpr std::uintptr_t OverlapRadius = 0x128;
            static constexpr std::uintptr_t CollectionArmDelay = 0x150;
            static constexpr std::uintptr_t SparkleStartDelay = 0x178;
            static constexpr std::uintptr_t Lifetime = 0x180;
            static constexpr std::uintptr_t BlinkDuration = 0x1A8;
            static constexpr std::uintptr_t BlinkInterval = 0x1AC;
            static constexpr std::uintptr_t bBlinkViaCustomData = 0x1B0;
            static constexpr std::uintptr_t TargetFilter = 0x1B1;
        };

        inline static constexpr std::array<PropertyInfo, 21> Properties{{
            {"RingLayers", 0x28, "ArrayProperty"},
            {"SpawnSound", 0x38, "ObjectProperty"},
            {"SparkleSystem", 0x40, "ObjectProperty"},
            {"bUseMeshSparkle", 0x48, "BoolProperty"},
            {"bSparkleFollowsRingSpin", 0x49, "BoolProperty"},
            {"CollectGameplayCueTag", 0x4C, "StructProperty"},
            {"CollectGameplayEventTag", 0x50, "StructProperty"},
            {"InitialSpeed", 0x58, "StructProperty"},
            {"Gravity", 0x80, "StructProperty"},
            {"SpinRate", 0xA8, "FloatProperty"},
            {"LaunchAngle", 0xB0, "StructProperty"},
            {"SpreadHalfAngle", 0xD8, "StructProperty"},
            {"SpawnRadius", 0x100, "StructProperty"},
            {"OverlapRadius", 0x128, "StructProperty"},
            {"CollectionArmDelay", 0x150, "StructProperty"},
            {"SparkleStartDelay", 0x178, "FloatProperty"},
            {"Lifetime", 0x180, "StructProperty"},
            {"BlinkDuration", 0x1A8, "FloatProperty"},
            {"BlinkInterval", 0x1AC, "FloatProperty"},
            {"bBlinkViaCustomData", 0x1B0, "BoolProperty"},
            {"TargetFilter", 0x1B1, "EnumProperty"},
        }};
    };

    struct FortCollectibleRingLibrary
    {
        static constexpr std::string_view Name = "FortCollectibleRingLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortCollectibleRingManager
    {
        static constexpr std::string_view Name = "FortCollectibleRingManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Info";
        struct Offsets
        {
            static constexpr std::uintptr_t RingRenderComponents = 0x288;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RingRenderComponents", 0x288, "ArrayProperty"},
        }};
    };

    struct FortCollectibleRingWorldSubsystem
    {
        static constexpr std::string_view Name = "FortCollectibleRingWorldSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}

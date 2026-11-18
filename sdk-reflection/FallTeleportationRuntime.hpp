#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FallTeleportationRuntime
{
    struct FortFallTeleportCheatManager
    {
        static constexpr std::string_view Name = "FortFallTeleportCheatManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChildCheatManager";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortFallTeleportComponentBase
    {
        static constexpr std::string_view Name = "FortFallTeleportComponentBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t TeleportEnabled = 0xC0;
            static constexpr std::uintptr_t ContinuousTeleportUpdateEnabled = 0xE8;
            static constexpr std::uintptr_t ForceTeleportZHeight = 0x110;
            static constexpr std::uintptr_t SphereTraceRadius = 0x138;
            static constexpr std::uintptr_t WalkingLocationUpdateRate = 0x160;
            static constexpr std::uintptr_t ZHeightThresholdCheckRate = 0x164;
            static constexpr std::uintptr_t TeleportZModifier = 0x168;
            static constexpr std::uintptr_t DistanceFromPawnToTraceLocation = 0x16C;
            static constexpr std::uintptr_t TeleportOnBlocklist = 0x170;
            static constexpr std::uintptr_t NoTeleportActorTag = 0x180;
            static constexpr std::uintptr_t SafeManualLocation = 0x188;
            static constexpr std::uintptr_t TeleportGEClass = 0x1A0;
            static constexpr std::uintptr_t TeleportLocation = 0x1A8;
            static constexpr std::uintptr_t FallbackLocation = 0x1C0;
            static constexpr std::uintptr_t bValidFallbackLocation = 0x1D8;
            static constexpr std::uintptr_t bTeleporting = 0x1D9;
            static constexpr std::uintptr_t TeleportLimitBeforeFail = 0x1DC;
            static constexpr std::uintptr_t TeleportCount = 0x1E0;
            static constexpr std::uintptr_t OwningPawn = 0x1E8;
        };

        inline static constexpr std::array<PropertyInfo, 19> Properties{{
            {"TeleportEnabled", 0xC0, "StructProperty"},
            {"ContinuousTeleportUpdateEnabled", 0xE8, "StructProperty"},
            {"ForceTeleportZHeight", 0x110, "StructProperty"},
            {"SphereTraceRadius", 0x138, "StructProperty"},
            {"WalkingLocationUpdateRate", 0x160, "FloatProperty"},
            {"ZHeightThresholdCheckRate", 0x164, "FloatProperty"},
            {"TeleportZModifier", 0x168, "FloatProperty"},
            {"DistanceFromPawnToTraceLocation", 0x16C, "FloatProperty"},
            {"TeleportOnBlocklist", 0x170, "ArrayProperty"},
            {"NoTeleportActorTag", 0x180, "NameProperty"},
            {"SafeManualLocation", 0x188, "StructProperty"},
            {"TeleportGEClass", 0x1A0, "ClassProperty"},
            {"TeleportLocation", 0x1A8, "StructProperty"},
            {"FallbackLocation", 0x1C0, "StructProperty"},
            {"bValidFallbackLocation", 0x1D8, "BoolProperty"},
            {"bTeleporting", 0x1D9, "BoolProperty"},
            {"TeleportLimitBeforeFail", 0x1DC, "IntProperty"},
            {"TeleportCount", 0x1E0, "IntProperty"},
            {"OwningPawn", 0x1E8, "ObjectProperty"},
        }};
    };

    struct FortFallTeleportSpawnerComponent
    {
        static constexpr std::string_view Name = "FortFallTeleportSpawnerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayerPawnReceiverClass = 0xC0;
            static constexpr std::uintptr_t ComponentToAddClass = 0xE0;
            static constexpr std::uintptr_t TeleportEnabled = 0xE8;
            static constexpr std::uintptr_t RemoveComponentRequestTimeOffset = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"PlayerPawnReceiverClass", 0xC0, "SoftClassProperty"},
            {"ComponentToAddClass", 0xE0, "ClassProperty"},
            {"TeleportEnabled", 0xE8, "StructProperty"},
            {"RemoveComponentRequestTimeOffset", 0x110, "StructProperty"},
        }};
    };

}

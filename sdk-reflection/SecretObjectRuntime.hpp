#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SecretObjectRuntime
{
    struct FortRevealWallActor
    {
        static constexpr std::string_view Name = "FortRevealWallActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BuildingSMActor";
        struct Offsets
        {
            static constexpr std::uintptr_t DiscoveryMaterials = 0xB08;
            static constexpr std::uintptr_t bSuppressShotDamage = 0xB18;
            static constexpr std::uintptr_t bAllowVehicleDestruction = 0xB19;
            static constexpr std::uintptr_t DiscoveryComponent = 0xB20;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"DiscoveryMaterials", 0xB08, "ArrayProperty"},
            {"bSuppressShotDamage", 0xB18, "BoolProperty"},
            {"bAllowVehicleDestruction", 0xB19, "BoolProperty"},
            {"DiscoveryComponent", 0xB20, "ObjectProperty"},
        }};
    };

    struct FortSecretObjectComponent
    {
        static constexpr std::string_view Name = "FortSecretObjectComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BoxComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnDiscovered = 0x5A0;
            static constexpr std::uintptr_t OnUndiscovered = 0x5B0;
            static constexpr std::uintptr_t bAllowProximityOverlapsOnClient = 0x5C0;
            static constexpr std::uintptr_t bDiscoverOnDamage = 0x5C0;
            static constexpr std::uintptr_t bDiscoverOnProximity = 0x5C0;
            static constexpr std::uintptr_t bDiscovered = 0x5C0;
            static constexpr std::uintptr_t bShowDebugVolume = 0x5C0;
            static constexpr std::uintptr_t bUndiscoverWhenOutOfRange = 0x5C0;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"OnDiscovered", 0x5A0, "MulticastInlineDelegateProperty"},
            {"OnUndiscovered", 0x5B0, "MulticastInlineDelegateProperty"},
            {"bAllowProximityOverlapsOnClient", 0x5C0, "BoolProperty"},
            {"bDiscoverOnDamage", 0x5C0, "BoolProperty"},
            {"bDiscoverOnProximity", 0x5C0, "BoolProperty"},
            {"bDiscovered", 0x5C0, "BoolProperty"},
            {"bShowDebugVolume", 0x5C0, "BoolProperty"},
            {"bUndiscoverWhenOutOfRange", 0x5C0, "BoolProperty"},
        }};
    };

    struct FortSecretWallActor
    {
        static constexpr std::string_view Name = "FortSecretWallActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortRevealWallActor";
        struct Offsets
        {
            static constexpr std::uintptr_t DiscoveryMaterials = 0xB08;
            static constexpr std::uintptr_t bSuppressShotDamage = 0xB18;
            static constexpr std::uintptr_t bAllowVehicleDestruction = 0xB19;
            static constexpr std::uintptr_t DiscoveryComponent = 0xB20;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"DiscoveryMaterials", 0xB08, "ArrayProperty"},
            {"bSuppressShotDamage", 0xB18, "BoolProperty"},
            {"bAllowVehicleDestruction", 0xB19, "BoolProperty"},
            {"DiscoveryComponent", 0xB20, "ObjectProperty"},
        }};
    };

}

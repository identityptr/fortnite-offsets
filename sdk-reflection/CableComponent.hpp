#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::CableComponent
{
    struct CableActor
    {
        static constexpr std::string_view Name = "CableActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t CableComponent = 0x278;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CableComponent", 0x278, "ObjectProperty"},
        }};
    };

    struct CableComponent
    {
        static constexpr std::string_view Name = "CableComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MeshComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bAttachStart = 0x5C0;
            static constexpr std::uintptr_t bAttachEnd = 0x5C1;
            static constexpr std::uintptr_t AttachEndTo = 0x5C8;
            static constexpr std::uintptr_t AttachEndToSocketName = 0x5F0;
            static constexpr std::uintptr_t EndLocation = 0x5F8;
            static constexpr std::uintptr_t CableLength = 0x610;
            static constexpr std::uintptr_t NumSegments = 0x614;
            static constexpr std::uintptr_t SubstepTime = 0x618;
            static constexpr std::uintptr_t SolverIterations = 0x61C;
            static constexpr std::uintptr_t bEnableStiffness = 0x620;
            static constexpr std::uintptr_t bUseSubstepping = 0x621;
            static constexpr std::uintptr_t bSkipCableUpdateWhenNotVisible = 0x622;
            static constexpr std::uintptr_t bSkipCableUpdateWhenNotOwnerRecentlyRendered = 0x623;
            static constexpr std::uintptr_t bEnableCollision = 0x624;
            static constexpr std::uintptr_t CollisionFriction = 0x628;
            static constexpr std::uintptr_t CableForce = 0x630;
            static constexpr std::uintptr_t CableGravityScale = 0x648;
            static constexpr std::uintptr_t CableWidth = 0x64C;
            static constexpr std::uintptr_t NumSides = 0x650;
            static constexpr std::uintptr_t TileMaterial = 0x654;
            static constexpr std::uintptr_t bResetAfterTeleport = 0x658;
            static constexpr std::uintptr_t TeleportDistanceThreshold = 0x65C;
            static constexpr std::uintptr_t TeleportRotationThreshold = 0x660;
            static constexpr std::uintptr_t bTeleportAfterReattach = 0x664;
        };

        inline static constexpr std::array<PropertyInfo, 24> Properties{{
            {"bAttachStart", 0x5C0, "BoolProperty"},
            {"bAttachEnd", 0x5C1, "BoolProperty"},
            {"AttachEndTo", 0x5C8, "StructProperty"},
            {"AttachEndToSocketName", 0x5F0, "NameProperty"},
            {"EndLocation", 0x5F8, "StructProperty"},
            {"CableLength", 0x610, "FloatProperty"},
            {"NumSegments", 0x614, "IntProperty"},
            {"SubstepTime", 0x618, "FloatProperty"},
            {"SolverIterations", 0x61C, "IntProperty"},
            {"bEnableStiffness", 0x620, "BoolProperty"},
            {"bUseSubstepping", 0x621, "BoolProperty"},
            {"bSkipCableUpdateWhenNotVisible", 0x622, "BoolProperty"},
            {"bSkipCableUpdateWhenNotOwnerRecentlyRendered", 0x623, "BoolProperty"},
            {"bEnableCollision", 0x624, "BoolProperty"},
            {"CollisionFriction", 0x628, "FloatProperty"},
            {"CableForce", 0x630, "StructProperty"},
            {"CableGravityScale", 0x648, "FloatProperty"},
            {"CableWidth", 0x64C, "FloatProperty"},
            {"NumSides", 0x650, "IntProperty"},
            {"TileMaterial", 0x654, "FloatProperty"},
            {"bResetAfterTeleport", 0x658, "BoolProperty"},
            {"TeleportDistanceThreshold", 0x65C, "FloatProperty"},
            {"TeleportRotationThreshold", 0x660, "FloatProperty"},
            {"bTeleportAfterReattach", 0x664, "BoolProperty"},
        }};

        inline static constexpr std::array<std::string_view, 5> FunctionNames{{
            "GetAttachedActor",
            "GetAttachedComponent",
            "GetCableParticleLocations",
            "SetAttachEndTo",
            "SetAttachEndToComponent",
        }};
    };

}

#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::MimicRuntime
{
    struct MimicObserver
    {
        static constexpr std::string_view Name = "MimicObserver";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MonologuePawn
    {
        static constexpr std::string_view Name = "MonologuePawn";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Pawn";
        struct Offsets
        {
            static constexpr std::uintptr_t bCanAffectNavigationGeneration = 0x280;
            static constexpr std::uintptr_t bIsLocalViewTarget = 0x280;
            static constexpr std::uintptr_t bUseControllerRotationPitch = 0x280;
            static constexpr std::uintptr_t bUseControllerRotationRoll = 0x280;
            static constexpr std::uintptr_t bUseControllerRotationYaw = 0x280;
            static constexpr std::uintptr_t BaseEyeHeight = 0x284;
            static constexpr std::uintptr_t AutoPossessPlayer = 0x288;
            static constexpr std::uintptr_t AutoPossessAI = 0x289;
            static constexpr std::uintptr_t RemoteViewPitch16 = 0x28A;
            static constexpr std::uintptr_t RemoteViewPitch = 0x28C;
            static constexpr std::uintptr_t AIControllerClass = 0x290;
            static constexpr std::uintptr_t PlayerState = 0x298;
            static constexpr std::uintptr_t LastHitBy = 0x2A0;
            static constexpr std::uintptr_t Controller = 0x2A8;
            static constexpr std::uintptr_t PreviousController = 0x2B0;
            static constexpr std::uintptr_t ReceiveControllerChangedDelegate = 0x2BC;
            static constexpr std::uintptr_t ReceiveRestartedDelegate = 0x2BD;
            static constexpr std::uintptr_t ControlInputVector = 0x2C0;
            static constexpr std::uintptr_t LastControlInputVector = 0x2D8;
            static constexpr std::uintptr_t OverrideInputComponentClass = 0x2F0;
        };

        inline static constexpr std::array<PropertyInfo, 20> Properties{{
            {"bCanAffectNavigationGeneration", 0x280, "BoolProperty"},
            {"bIsLocalViewTarget", 0x280, "BoolProperty"},
            {"bUseControllerRotationPitch", 0x280, "BoolProperty"},
            {"bUseControllerRotationRoll", 0x280, "BoolProperty"},
            {"bUseControllerRotationYaw", 0x280, "BoolProperty"},
            {"BaseEyeHeight", 0x284, "FloatProperty"},
            {"AutoPossessPlayer", 0x288, "ByteProperty"},
            {"AutoPossessAI", 0x289, "EnumProperty"},
            {"RemoteViewPitch16", 0x28A, "UInt16Property"},
            {"RemoteViewPitch", 0x28C, "ByteProperty"},
            {"AIControllerClass", 0x290, "ClassProperty"},
            {"PlayerState", 0x298, "ObjectProperty"},
            {"LastHitBy", 0x2A0, "ObjectProperty"},
            {"Controller", 0x2A8, "ObjectProperty"},
            {"PreviousController", 0x2B0, "ObjectProperty"},
            {"ReceiveControllerChangedDelegate", 0x2BC, "MulticastSparseDelegateProperty"},
            {"ReceiveRestartedDelegate", 0x2BD, "MulticastSparseDelegateProperty"},
            {"ControlInputVector", 0x2C0, "StructProperty"},
            {"LastControlInputVector", 0x2D8, "StructProperty"},
            {"OverrideInputComponentClass", 0x2F0, "ClassProperty"},
        }};
    };

}

#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FortFirstPersonModeRuntime
{
    struct FirstPersonTacticalSprintCameraModifier
    {
        static constexpr std::string_view Name = "FirstPersonTacticalSprintCameraModifier";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CameraModifier";
        struct Offsets
        {
            static constexpr std::uintptr_t FovChange = 0x48;
            static constexpr std::uintptr_t BlendInSeconds = 0x4C;
            static constexpr std::uintptr_t BlendOutSeconds = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"FovChange", 0x48, "FloatProperty"},
            {"BlendInSeconds", 0x4C, "FloatProperty"},
            {"BlendOutSeconds", 0x50, "FloatProperty"},
        }};
    };

    struct FortFirstPersonMode_CameraController
    {
        static constexpr std::string_view Name = "FortFirstPersonMode_CameraController";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortFirstPersonCameraController";
        struct Offsets
        {
            static constexpr std::uintptr_t HeadMotionScalar = 0x470;
            static constexpr std::uintptr_t bDisplayReticleWhileADS = 0x474;
            static constexpr std::uintptr_t bDisplayAmmoCountWhileADS = 0x475;
            static constexpr std::uintptr_t AllowedWeaponClassList = 0x478;
            static constexpr std::uintptr_t MaterialParameterCollection = 0x488;
            static constexpr std::uintptr_t FP_MaterialParameterName = 0x490;
            static constexpr std::uintptr_t DefaultGauntletPart = 0x498;
            static constexpr std::uintptr_t FirstPersonSkeletalMeshComp = 0x4A0;
            static constexpr std::uintptr_t CameraYawClampAngleForStasis = 0x4A8;
            static constexpr std::uintptr_t CachedOutgoingCameraMode = 0x4B0;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"HeadMotionScalar", 0x470, "FloatProperty"},
            {"bDisplayReticleWhileADS", 0x474, "BoolProperty"},
            {"bDisplayAmmoCountWhileADS", 0x475, "BoolProperty"},
            {"AllowedWeaponClassList", 0x478, "ArrayProperty"},
            {"MaterialParameterCollection", 0x488, "ObjectProperty"},
            {"FP_MaterialParameterName", 0x490, "NameProperty"},
            {"DefaultGauntletPart", 0x498, "ObjectProperty"},
            {"FirstPersonSkeletalMeshComp", 0x4A0, "ObjectProperty"},
            {"CameraYawClampAngleForStasis", 0x4A8, "FloatProperty"},
            {"CachedOutgoingCameraMode", 0x4B0, "ClassProperty"},
        }};
    };

    struct FortFirstPersonMode_CheatManager
    {
        static constexpr std::string_view Name = "FortFirstPersonMode_CheatManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChildCheatManager";
        struct Offsets
        {
            static constexpr std::uintptr_t CameraControllerClass = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CameraControllerClass", 0x28, "SoftClassProperty"},
        }};
    };

    struct FortGameplayAbility_InjectFirstPersonCameraController
    {
        static constexpr std::string_view Name = "FortGameplayAbility_InjectFirstPersonCameraController";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameplayAbility";
        struct Offsets
        {
            static constexpr std::uintptr_t CameraControllerClass = 0xB40;
            static constexpr std::uintptr_t CameraControllerPriority = 0xB60;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CameraControllerClass", 0xB40, "SoftClassProperty"},
            {"CameraControllerPriority", 0xB60, "FloatProperty"},
        }};
    };

}

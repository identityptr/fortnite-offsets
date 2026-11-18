#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FortCharacterTemplates
{
    struct FortBoostedJumpMechanicConfig
    {
        static constexpr std::string_view Name = "FortBoostedJumpMechanicConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPawnMechanicConfig";
        struct Offsets
        {
            static constexpr std::uintptr_t VerticalVelocity = 0x90;
            static constexpr std::uintptr_t HorizontalVelocity = 0x94;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VerticalVelocity", 0x90, "FloatProperty"},
            {"HorizontalVelocity", 0x94, "FloatProperty"},
        }};
    };

    struct FortCharacterTemplatesWorldSubsystem
    {
        static constexpr std::string_view Name = "FortCharacterTemplatesWorldSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortCrouchMechanicConfig
    {
        static constexpr std::string_view Name = "FortCrouchMechanicConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPawnMechanicConfig";
        struct Offsets
        {
            static constexpr std::uintptr_t CrouchSpeed = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CrouchSpeed", 0x90, "FloatProperty"},
        }};
    };

    struct FortCrouchStateForwarder
    {
        static constexpr std::string_view Name = "FortCrouchStateForwarder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortDBNOStateForwarder
    {
        static constexpr std::string_view Name = "FortDBNOStateForwarder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortDownButNotOutMechanicConfig
    {
        static constexpr std::string_view Name = "FortDownButNotOutMechanicConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPawnMechanicConfig";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxSpeed = 0x90;
            static constexpr std::uintptr_t Tenacity = 0x94;
            static constexpr std::uintptr_t TenacityDepletionRate = 0x98;
            static constexpr std::uintptr_t PercentageHealthAfterRevive = 0x9C;
            static constexpr std::uintptr_t bRevivable = 0xA0;
            static constexpr std::uintptr_t TimeToRevive = 0xA4;
            static constexpr std::uintptr_t ReviveProgressDecayRate = 0xA8;
            static constexpr std::uintptr_t bHasOverride = 0xAC;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"MaxSpeed", 0x90, "FloatProperty"},
            {"Tenacity", 0x94, "FloatProperty"},
            {"TenacityDepletionRate", 0x98, "FloatProperty"},
            {"PercentageHealthAfterRevive", 0x9C, "FloatProperty"},
            {"bRevivable", 0xA0, "BoolProperty"},
            {"TimeToRevive", 0xA4, "FloatProperty"},
            {"ReviveProgressDecayRate", 0xA8, "FloatProperty"},
            {"bHasOverride", 0xAC, "BoolProperty"},
        }};
    };

    struct FortGlideMechanicConfig
    {
        static constexpr std::string_view Name = "FortGlideMechanicConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPawnMechanicConfig";
        struct Offsets
        {
            static constexpr std::uintptr_t LateralFriction = 0x90;
            static constexpr std::uintptr_t MaxLateralSpeed = 0x94;
            static constexpr std::uintptr_t TerminalVelocity = 0x98;
            static constexpr std::uintptr_t bGliderRedeploy = 0x9C;
            static constexpr std::uintptr_t MinimumDeployHeight = 0xA0;
            static constexpr std::uintptr_t AutoDeployHeight = 0xA4;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"LateralFriction", 0x90, "FloatProperty"},
            {"MaxLateralSpeed", 0x94, "FloatProperty"},
            {"TerminalVelocity", 0x98, "FloatProperty"},
            {"bGliderRedeploy", 0x9C, "BoolProperty"},
            {"MinimumDeployHeight", 0xA0, "FloatProperty"},
            {"AutoDeployHeight", 0xA4, "FloatProperty"},
        }};
    };

    struct FortHurdleMechanicConfig
    {
        static constexpr std::string_view Name = "FortHurdleMechanicConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPawnMechanicConfig";
        struct Offsets
        {
            static constexpr std::uintptr_t bAutoHurdle = 0x90;
            static constexpr std::uintptr_t bHurdleOverJumpableObjects = 0x91;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bAutoHurdle", 0x90, "BoolProperty"},
            {"bHurdleOverJumpableObjects", 0x91, "BoolProperty"},
        }};
    };

    struct FortJumpMechanicConfig
    {
        static constexpr std::string_view Name = "FortJumpMechanicConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPawnMechanicConfig";
        struct Offsets
        {
            static constexpr std::uintptr_t JumpVelocity = 0x90;
            static constexpr std::uintptr_t JumpChainInterval = 0x94;
            static constexpr std::uintptr_t JumpChainVelocityScalars = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"JumpVelocity", 0x90, "FloatProperty"},
            {"JumpChainInterval", 0x94, "FloatProperty"},
            {"JumpChainVelocityScalars", 0x98, "ArrayProperty"},
        }};
    };

    struct FortJumpStateForwarder
    {
        static constexpr std::string_view Name = "FortJumpStateForwarder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortLocomotionMechanicConfig
    {
        static constexpr std::string_view Name = "FortLocomotionMechanicConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPawnMechanicConfig";
        struct Offsets
        {
            static constexpr std::uintptr_t WalkSpeed = 0x90;
            static constexpr std::uintptr_t RunSpeed = 0x94;
            static constexpr std::uintptr_t SprintSpeed = 0x98;
            static constexpr std::uintptr_t Acceleration = 0x9C;
            static constexpr std::uintptr_t AirControl = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"WalkSpeed", 0x90, "FloatProperty"},
            {"RunSpeed", 0x94, "FloatProperty"},
            {"SprintSpeed", 0x98, "FloatProperty"},
            {"Acceleration", 0x9C, "FloatProperty"},
            {"AirControl", 0xA0, "FloatProperty"},
        }};
    };

    struct FortMantleMechanicConfig
    {
        static constexpr std::string_view Name = "FortMantleMechanicConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPawnMechanicConfig";
        struct Offsets
        {
            static constexpr std::uintptr_t MinLedgeHeight = 0x90;
            static constexpr std::uintptr_t MinLedgeHeightInWater = 0x94;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"MinLedgeHeight", 0x90, "FloatProperty"},
            {"MinLedgeHeightInWater", 0x94, "FloatProperty"},
        }};
    };

    struct FortPawnMechanicConfig
    {
        static constexpr std::string_view Name = "FortPawnMechanicConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t SavedCurveTables = 0x28;
            static constexpr std::uintptr_t bEnabled = 0x38;
            static constexpr std::uintptr_t OwningComponent = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SavedCurveTables", 0x28, "ArrayProperty"},
            {"bEnabled", 0x38, "BoolProperty"},
            {"OwningComponent", 0x88, "ObjectProperty"},
        }};
    };

    struct FortPawnMechanicRepComponent
    {
        static constexpr std::string_view Name = "FortPawnMechanicRepComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t MechanicConfigs = 0xC8;
            static constexpr std::uintptr_t MechanicNameKey = 0xD8;
            static constexpr std::uintptr_t StatPreset = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"MechanicConfigs", 0xC8, "ArrayProperty"},
            {"MechanicNameKey", 0xD8, "IntProperty"},
            {"StatPreset", 0xE0, "StructProperty"},
        }};
    };

    struct FortPlayerCharacterPrefabComponent
    {
        static constexpr std::string_view Name = "FortPlayerCharacterPrefabComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorEntityPrefabComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t EntityClass = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"EntityClass", 0xC0, "SoftClassProperty"},
        }};
    };

    struct FortPlayerCharacterTemplateWorldSubsystem
    {
        static constexpr std::string_view Name = "FortPlayerCharacterTemplateWorldSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortSkydiveMechanicConfig
    {
        static constexpr std::string_view Name = "FortSkydiveMechanicConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPawnMechanicConfig";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxAcceleration = 0x90;
            static constexpr std::uintptr_t LateralFriction = 0x94;
            static constexpr std::uintptr_t MaxLateralSpeed = 0x98;
            static constexpr std::uintptr_t TerminalVelocity = 0x9C;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"MaxAcceleration", 0x90, "FloatProperty"},
            {"LateralFriction", 0x94, "FloatProperty"},
            {"MaxLateralSpeed", 0x98, "FloatProperty"},
            {"TerminalVelocity", 0x9C, "FloatProperty"},
        }};
    };

    struct FortSlideMechanicConfig
    {
        static constexpr std::string_view Name = "FortSlideMechanicConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPawnMechanicConfig";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxSlideSpeed = 0x90;
            static constexpr std::uintptr_t bSlideKick = 0x94;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"MaxSlideSpeed", 0x90, "FloatProperty"},
            {"bSlideKick", 0x94, "BoolProperty"},
        }};
    };

    struct FortSwimMechanicConfig
    {
        static constexpr std::string_view Name = "FortSwimMechanicConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPawnMechanicConfig";
        struct Offsets
        {
            static constexpr std::uintptr_t SwimSpeed = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SwimSpeed", 0x90, "FloatProperty"},
        }};
    };

    struct FortTacticalSprintMechanicConfig
    {
        static constexpr std::string_view Name = "FortTacticalSprintMechanicConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPawnMechanicConfig";
        struct Offsets
        {
            static constexpr std::uintptr_t TacticalSprintAcceleration = 0x90;
            static constexpr std::uintptr_t TacticalSprintEnergyCost = 0x94;
            static constexpr std::uintptr_t TacticalSprintJumpEnergyCost = 0x98;
            static constexpr std::uintptr_t bShoulderBash = 0x9C;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"TacticalSprintAcceleration", 0x90, "FloatProperty"},
            {"TacticalSprintEnergyCost", 0x94, "FloatProperty"},
            {"TacticalSprintJumpEnergyCost", 0x98, "FloatProperty"},
            {"bShoulderBash", 0x9C, "BoolProperty"},
        }};
    };

}

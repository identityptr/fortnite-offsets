#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SOMRuntime
{
    struct FortGameStateComponent_ScriptedObjectMovementManager
    {
        static constexpr std::string_view Name = "FortGameStateComponent_ScriptedObjectMovementManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t WorldPhaseSites = 0xC8;
            static constexpr std::uintptr_t RegisteredStaticPaths = 0x130;
            static constexpr std::uintptr_t CurrentlyMovingStaticPath = 0x140;
            static constexpr std::uintptr_t StaticPathCooldownBetweenMoves = 0x178;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"WorldPhaseSites", 0xC8, "ArrayProperty"},
            {"RegisteredStaticPaths", 0x130, "ArrayProperty"},
            {"CurrentlyMovingStaticPath", 0x140, "ObjectProperty"},
            {"StaticPathCooldownBetweenMoves", 0x178, "StructProperty"},
        }};
    };

    struct FortScriptedObjectMovement_GridProviderInterface
    {
        static constexpr std::string_view Name = "FortScriptedObjectMovement_GridProviderInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortScriptedObjectMovement_MovableObjectBase
    {
        static constexpr std::string_view Name = "FortScriptedObjectMovement_MovableObjectBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BuildingGameplayActor";
        struct Offsets
        {
            static constexpr std::uintptr_t Editor_SkipMasterPathIndex = 0x9B0;
            static constexpr std::uintptr_t Editor_SkipSubPathIndex = 0x9B4;
            static constexpr std::uintptr_t Editor_NumStepsPerClick = 0x9B8;
            static constexpr std::uintptr_t AssignedSlotDefinition = 0x9E0;
            static constexpr std::uintptr_t MovementPath = 0x9E8;
            static constexpr std::uintptr_t ScriptedObjectMesh = 0xA28;
            static constexpr std::uintptr_t bDebugStaticMovement = 0xA48;
            static constexpr std::uintptr_t bWaitingForBeginPlaySkip = 0xA49;
            static constexpr std::uintptr_t StaticFollowPath = 0xA50;
            static constexpr std::uintptr_t CurrentStepData = 0xA70;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"Editor_SkipMasterPathIndex", 0x9B0, "IntProperty"},
            {"Editor_SkipSubPathIndex", 0x9B4, "IntProperty"},
            {"Editor_NumStepsPerClick", 0x9B8, "IntProperty"},
            {"AssignedSlotDefinition", 0x9E0, "ObjectProperty"},
            {"MovementPath", 0x9E8, "StructProperty"},
            {"ScriptedObjectMesh", 0xA28, "ObjectProperty"},
            {"bDebugStaticMovement", 0xA48, "BoolProperty"},
            {"bWaitingForBeginPlaySkip", 0xA49, "BoolProperty"},
            {"StaticFollowPath", 0xA50, "ObjectProperty"},
            {"CurrentStepData", 0xA70, "StructProperty"},
        }};
    };

    struct FortScriptedObjectMovement_Slot
    {
        static constexpr std::string_view Name = "FortScriptedObjectMovement_Slot";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "StaticMeshComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t SlotDefinition = 0x6A0;
            static constexpr std::uintptr_t ObjectRemoveOrder = 0x6A8;
            static constexpr std::uintptr_t SlottedObject = 0x6B0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SlotDefinition", 0x6A0, "ObjectProperty"},
            {"ObjectRemoveOrder", 0x6A8, "IntProperty"},
            {"SlottedObject", 0x6B0, "ObjectProperty"},
        }};
    };

    struct FortScriptedObjectMovement_SlotDefinition
    {
        static constexpr std::string_view Name = "FortScriptedObjectMovement_SlotDefinition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimaryDataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t ScriptedObjectClass = 0x28;
            static constexpr std::uintptr_t ObjectScale = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ScriptedObjectClass", 0x28, "ClassProperty"},
            {"ObjectScale", 0x30, "FloatProperty"},
        }};
    };

    struct FortScriptedObjectMovement_Structure
    {
        static constexpr std::string_view Name = "FortScriptedObjectMovement_Structure";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedObjectSlots = 0x278;
            static constexpr std::uintptr_t CachedSlotDefinitions = 0x288;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CachedObjectSlots", 0x278, "ArrayProperty"},
            {"CachedSlotDefinitions", 0x288, "ArrayProperty"},
        }};
    };

    struct FortScriptedObjectMovement_WorldPhaseSite
    {
        static constexpr std::string_view Name = "FortScriptedObjectMovement_WorldPhaseSite";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t Phases = 0x280;
            static constexpr std::uintptr_t NumSimulatenousMovingObjects = 0x290;
            static constexpr std::uintptr_t PhaseIntervalSeconds = 0x2B8;
            static constexpr std::uintptr_t BaseGrid = 0x300;
            static constexpr std::uintptr_t InProgressPath = 0x388;
            static constexpr std::uintptr_t LeavingSlotStack = 0x3C0;
            static constexpr std::uintptr_t DestinationSlotStack = 0x3D0;
            static constexpr std::uintptr_t OverflowSlotStack = 0x3E0;
            static constexpr std::uintptr_t CurrentlyMovingObjects = 0x3F0;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"Phases", 0x280, "ArrayProperty"},
            {"NumSimulatenousMovingObjects", 0x290, "StructProperty"},
            {"PhaseIntervalSeconds", 0x2B8, "StructProperty"},
            {"BaseGrid", 0x300, "StructProperty"},
            {"InProgressPath", 0x388, "StructProperty"},
            {"LeavingSlotStack", 0x3C0, "ArrayProperty"},
            {"DestinationSlotStack", 0x3D0, "ArrayProperty"},
            {"OverflowSlotStack", 0x3E0, "ArrayProperty"},
            {"CurrentlyMovingObjects", 0x3F0, "ArrayProperty"},
        }};
    };

    struct ScriptedObjectMovement_CalendarCheatDefinition
    {
        static constexpr std::string_view Name = "ScriptedObjectMovement_CalendarCheatDefinition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimaryDataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t CheatCalendarEvents = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CheatCalendarEvents", 0x28, "ArrayProperty"},
        }};
    };

    struct ScriptedObjectMovement_StaticPath
    {
        static constexpr std::string_view Name = "ScriptedObjectMovement_StaticPath";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t MasterSplinePath = 0x290;
            static constexpr std::uintptr_t PathTravelers = 0x298;
            static constexpr std::uintptr_t SplineData = 0x2A8;
            static constexpr std::uintptr_t StepSpacingDistance = 0x2B8;
            static constexpr std::uintptr_t CheatCalendarEventDefinition = 0x2C0;
            static constexpr std::uintptr_t MovementStyleTag = 0x2E0;
            static constexpr std::uintptr_t EnterSplineCalendarEvent = 0x370;
            static constexpr std::uintptr_t ExitSplineCalendarEvent = 0x380;
            static constexpr std::uintptr_t OrderedCalendarEventPointGroups = 0x390;
            static constexpr std::uintptr_t CalendarWatcherAction = 0x408;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"MasterSplinePath", 0x290, "ObjectProperty"},
            {"PathTravelers", 0x298, "ArrayProperty"},
            {"SplineData", 0x2A8, "ArrayProperty"},
            {"StepSpacingDistance", 0x2B8, "FloatProperty"},
            {"CheatCalendarEventDefinition", 0x2C0, "SoftObjectProperty"},
            {"MovementStyleTag", 0x2E0, "StructProperty"},
            {"EnterSplineCalendarEvent", 0x370, "StrProperty"},
            {"ExitSplineCalendarEvent", 0x380, "StrProperty"},
            {"OrderedCalendarEventPointGroups", 0x390, "ArrayProperty"},
            {"CalendarWatcherAction", 0x408, "ObjectProperty"},
        }};
    };

}

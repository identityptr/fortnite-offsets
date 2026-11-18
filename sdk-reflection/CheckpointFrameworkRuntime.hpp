#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::CheckpointFrameworkRuntime
{
    struct FortCheckpointAuthoringPreviewComponent
    {
        static constexpr std::string_view Name = "FortCheckpointAuthoringPreviewComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InstancedStaticMeshComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PerInstanceSMData = 0x6A8;
            static constexpr std::uintptr_t PerInstancePrevTransform = 0x6B8;
            static constexpr std::uintptr_t PreviousComponentTransform = 0x6D0;
            static constexpr std::uintptr_t NumCustomDataFloats = 0x730;
            static constexpr std::uintptr_t InstancingRandomSeed = 0x734;
            static constexpr std::uintptr_t PerInstanceSMCustomData = 0x738;
            static constexpr std::uintptr_t AdditionalRandomSeeds = 0x748;
            static constexpr std::uintptr_t InstanceLODDistanceScale = 0x758;
            static constexpr std::uintptr_t InstanceMinDrawDistance = 0x75C;
            static constexpr std::uintptr_t InstanceStartCullDistance = 0x760;
            static constexpr std::uintptr_t InstanceEndCullDistance = 0x764;
            static constexpr std::uintptr_t bDisableCollision = 0x768;
            static constexpr std::uintptr_t bInheritPerInstanceData = 0x768;
            static constexpr std::uintptr_t bUseGpuLodSelection = 0x768;
            static constexpr std::uintptr_t InstanceReorderTable = 0x770;
            static constexpr std::uintptr_t NumPendingLightmaps = 0x7D0;
            static constexpr std::uintptr_t CachedMappings = 0x978;
            static constexpr std::uintptr_t CachedBounds = 0x988;
        };

        inline static constexpr std::array<PropertyInfo, 18> Properties{{
            {"PerInstanceSMData", 0x6A8, "ArrayProperty"},
            {"PerInstancePrevTransform", 0x6B8, "ArrayProperty"},
            {"PreviousComponentTransform", 0x6D0, "StructProperty"},
            {"NumCustomDataFloats", 0x730, "IntProperty"},
            {"InstancingRandomSeed", 0x734, "IntProperty"},
            {"PerInstanceSMCustomData", 0x738, "ArrayProperty"},
            {"AdditionalRandomSeeds", 0x748, "ArrayProperty"},
            {"InstanceLODDistanceScale", 0x758, "FloatProperty"},
            {"InstanceMinDrawDistance", 0x75C, "IntProperty"},
            {"InstanceStartCullDistance", 0x760, "IntProperty"},
            {"InstanceEndCullDistance", 0x764, "IntProperty"},
            {"bDisableCollision", 0x768, "BoolProperty"},
            {"bInheritPerInstanceData", 0x768, "BoolProperty"},
            {"bUseGpuLodSelection", 0x768, "BoolProperty"},
            {"InstanceReorderTable", 0x770, "ArrayProperty"},
            {"NumPendingLightmaps", 0x7D0, "IntProperty"},
            {"CachedMappings", 0x978, "ArrayProperty"},
            {"CachedBounds", 0x988, "StructProperty"},
        }};
    };

    struct FortCheckpointCourse
    {
        static constexpr std::string_view Name = "FortCheckpointCourse";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t Checkpoints = 0x288;
            static constexpr std::uintptr_t Additions = 0x298;
            static constexpr std::uintptr_t AdditionTypes = 0x2A8;
            static constexpr std::uintptr_t AdditionGroups = 0x2B8;
            static constexpr std::uintptr_t Rules = 0x2C8;
            static constexpr std::uintptr_t CourseIdentifier = 0x318;
            static constexpr std::uintptr_t CourseDisplayName = 0x320;
            static constexpr std::uintptr_t CourseTags = 0x330;
            static constexpr std::uintptr_t StartMode = 0x350;
            static constexpr std::uintptr_t StartTagQuery = 0x358;
            static constexpr std::uintptr_t StartCondition = 0x3A0;
            static constexpr std::uintptr_t CheckpointMesh = 0x3B0;
            static constexpr std::uintptr_t CheckpointCustomDataFloatCount = 0x3B8;
            static constexpr std::uintptr_t InactiveMaterial = 0x3C0;
            static constexpr std::uintptr_t ActiveMaterial = 0x3C8;
            static constexpr std::uintptr_t CrossedMaterial = 0x3D0;
            static constexpr std::uintptr_t DefaultActivateEffect = 0x3D8;
            static constexpr std::uintptr_t DefaultCrossedEffect = 0x418;
            static constexpr std::uintptr_t DefaultDeactivateEffect = 0x458;
            static constexpr std::uintptr_t OnCourseStartedReactions = 0x498;
            static constexpr std::uintptr_t OnCourseCompletedReactions = 0x4A8;
            static constexpr std::uintptr_t OnCourseFailedReactions = 0x4B8;
            static constexpr std::uintptr_t StartVolume = 0x4C8;
            static constexpr std::uintptr_t StartMesh = 0x4D0;
            static constexpr std::uintptr_t InteractText = 0x4D8;
            static constexpr std::uintptr_t InteractDuration = 0x4E8;
        };

        inline static constexpr std::array<PropertyInfo, 26> Properties{{
            {"Checkpoints", 0x288, "ArrayProperty"},
            {"Additions", 0x298, "ArrayProperty"},
            {"AdditionTypes", 0x2A8, "ArrayProperty"},
            {"AdditionGroups", 0x2B8, "ArrayProperty"},
            {"Rules", 0x2C8, "StructProperty"},
            {"CourseIdentifier", 0x318, "StructProperty"},
            {"CourseDisplayName", 0x320, "TextProperty"},
            {"CourseTags", 0x330, "StructProperty"},
            {"StartMode", 0x350, "EnumProperty"},
            {"StartTagQuery", 0x358, "StructProperty"},
            {"StartCondition", 0x3A0, "StructProperty"},
            {"CheckpointMesh", 0x3B0, "ObjectProperty"},
            {"CheckpointCustomDataFloatCount", 0x3B8, "IntProperty"},
            {"InactiveMaterial", 0x3C0, "ObjectProperty"},
            {"ActiveMaterial", 0x3C8, "ObjectProperty"},
            {"CrossedMaterial", 0x3D0, "ObjectProperty"},
            {"DefaultActivateEffect", 0x3D8, "StructProperty"},
            {"DefaultCrossedEffect", 0x418, "StructProperty"},
            {"DefaultDeactivateEffect", 0x458, "StructProperty"},
            {"OnCourseStartedReactions", 0x498, "ArrayProperty"},
            {"OnCourseCompletedReactions", 0x4A8, "ArrayProperty"},
            {"OnCourseFailedReactions", 0x4B8, "ArrayProperty"},
            {"StartVolume", 0x4C8, "ObjectProperty"},
            {"StartMesh", 0x4D0, "ObjectProperty"},
            {"InteractText", 0x4D8, "TextProperty"},
            {"InteractDuration", 0x4E8, "FloatProperty"},
        }};
    };

    struct FortCheckpointObjectiveProcessorBase
    {
        static constexpr std::string_view Name = "FortCheckpointObjectiveProcessorBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortObjectiveProcessor";
        struct Offsets
        {
            static constexpr std::uintptr_t VerbListenerHandles = 0x28;
            static constexpr std::uintptr_t OwningProcessorSubsystem = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VerbListenerHandles", 0x28, "ArrayProperty"},
            {"OwningProcessorSubsystem", 0x38, "ObjectProperty"},
        }};
    };

    struct FortCheckpointObjectiveProcessor_AdditionTriggered
    {
        static constexpr std::string_view Name = "FortCheckpointObjectiveProcessor_AdditionTriggered";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCheckpointObjectiveProcessorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t VerbListenerHandles = 0x28;
            static constexpr std::uintptr_t OwningProcessorSubsystem = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VerbListenerHandles", 0x28, "ArrayProperty"},
            {"OwningProcessorSubsystem", 0x38, "ObjectProperty"},
        }};
    };

    struct FortCheckpointObjectiveProcessor_CheckpointReached
    {
        static constexpr std::string_view Name = "FortCheckpointObjectiveProcessor_CheckpointReached";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCheckpointObjectiveProcessorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t VerbListenerHandles = 0x28;
            static constexpr std::uintptr_t OwningProcessorSubsystem = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VerbListenerHandles", 0x28, "ArrayProperty"},
            {"OwningProcessorSubsystem", 0x38, "ObjectProperty"},
        }};
    };

    struct FortCheckpointObjectiveProcessor_CourseFailed
    {
        static constexpr std::string_view Name = "FortCheckpointObjectiveProcessor_CourseFailed";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCheckpointObjectiveProcessorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t VerbListenerHandles = 0x28;
            static constexpr std::uintptr_t OwningProcessorSubsystem = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VerbListenerHandles", 0x28, "ArrayProperty"},
            {"OwningProcessorSubsystem", 0x38, "ObjectProperty"},
        }};
    };

    struct FortCheckpointObjectiveProcessor_CourseFinished
    {
        static constexpr std::string_view Name = "FortCheckpointObjectiveProcessor_CourseFinished";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCheckpointObjectiveProcessorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t VerbListenerHandles = 0x28;
            static constexpr std::uintptr_t OwningProcessorSubsystem = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VerbListenerHandles", 0x28, "ArrayProperty"},
            {"OwningProcessorSubsystem", 0x38, "ObjectProperty"},
        }};
    };

    struct FortCheckpointObjectiveProcessor_CourseStarted
    {
        static constexpr std::string_view Name = "FortCheckpointObjectiveProcessor_CourseStarted";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCheckpointObjectiveProcessorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t VerbListenerHandles = 0x28;
            static constexpr std::uintptr_t OwningProcessorSubsystem = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VerbListenerHandles", 0x28, "ArrayProperty"},
            {"OwningProcessorSubsystem", 0x38, "ObjectProperty"},
        }};
    };

    struct FortCheckpointObjectiveProcessor_LapCompleted
    {
        static constexpr std::string_view Name = "FortCheckpointObjectiveProcessor_LapCompleted";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCheckpointObjectiveProcessorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t VerbListenerHandles = 0x28;
            static constexpr std::uintptr_t OwningProcessorSubsystem = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VerbListenerHandles", 0x28, "ArrayProperty"},
            {"OwningProcessorSubsystem", 0x38, "ObjectProperty"},
        }};
    };

    struct FortCheckpointParticipantComponent
    {
        static constexpr std::string_view Name = "FortCheckpointParticipantComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayerStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ActiveRuns = 0xC0;
            static constexpr std::uintptr_t RunHistory = 0x120;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ActiveRuns", 0xC0, "StructProperty"},
            {"RunHistory", 0x120, "ArrayProperty"},
        }};
    };

    struct FortCheckpointRendererComponent
    {
        static constexpr std::string_view Name = "FortCheckpointRendererComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CourseStates = 0xC0;
            static constexpr std::uintptr_t RenderHost = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CourseStates", 0xC0, "MapProperty"},
            {"RenderHost", 0xF0, "ObjectProperty"},
        }};
    };

    struct FortCourseAdditionPreviewComponent
    {
        static constexpr std::string_view Name = "FortCourseAdditionPreviewComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InstancedStaticMeshComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PreviewedAdditionTypeIndex = 0xA50;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PreviewedAdditionTypeIndex", 0xA50, "IntProperty"},
        }};
    };

}

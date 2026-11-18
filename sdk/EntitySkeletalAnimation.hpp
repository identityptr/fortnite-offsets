#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::EntitySkeletalAnimation
{
    struct EntityAnimationSequenceImpl
    {
        static constexpr std::string_view Name = "EntityAnimationSequenceImpl";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct EntityControlRigBaseImpl
    {
        static constexpr std::string_view Name = "EntityControlRigBaseImpl";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct EntityControlRigBlueprintImpl
    {
        static constexpr std::string_view Name = "EntityControlRigBlueprintImpl";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EntityControlRigBaseImpl";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct EntityControlRigRuntimeAssetImpl
    {
        static constexpr std::string_view Name = "EntityControlRigRuntimeAssetImpl";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EntityControlRigBaseImpl";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct EntityProxySkeletonModifierBase
    {
        static constexpr std::string_view Name = "EntityProxySkeletonModifierBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EntityModifierBase";
        struct Offsets
        {
            static constexpr std::uintptr_t MassEntityHandle = 0x58;
            static constexpr std::uintptr_t Entity = 0x60;
            static constexpr std::uintptr_t WeakWorld = 0x68;
            static constexpr std::uintptr_t CachedImpl = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"MassEntityHandle", 0x58, "StructProperty"},
            {"Entity", 0x60, "ObjectProperty"},
            {"WeakWorld", 0x68, "WeakObjectProperty"},
            {"CachedImpl", 0x70, "ObjectProperty"},
        }};
    };

    struct EntitySkeletalAnimationBase
    {
        static constexpr std::string_view Name = "EntitySkeletalAnimationBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EntityModifierBase";
        struct Offsets
        {
            static constexpr std::uintptr_t CurrentSeconds = 0x120;
            static constexpr std::uintptr_t ProcessedCurrentSecondsGeneration = 0x130;
            static constexpr std::uintptr_t bPerformedInitialSetup = 0x134;
            static constexpr std::uintptr_t bReplicatedCurrentSeconds = 0x134;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"CurrentSeconds", 0x120, "StructProperty"},
            {"ProcessedCurrentSecondsGeneration", 0x130, "UInt32Property"},
            {"bPerformedInitialSetup", 0x134, "BoolProperty"},
            {"bReplicatedCurrentSeconds", 0x134, "BoolProperty"},
        }};
    };

    struct EntitySkeletonEasingModifierImpl
    {
        static constexpr std::string_view Name = "EntitySkeletonEasingModifierImpl";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct EntitySkeletonEasingModifierUAFProcessor
    {
        static constexpr std::string_view Name = "EntitySkeletonEasingModifierUAFProcessor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassProcessor";
        struct Offsets
        {
            static constexpr std::uintptr_t ExecutionOrder = 0x28;
            static constexpr std::uintptr_t ProcessingPhase = 0x50;
            static constexpr std::uintptr_t ExecutionFlags = 0x51;
            static constexpr std::uintptr_t bAggregateRequirements = 0x52;
            static constexpr std::uintptr_t bAutoRegisterWithProcessingPhases = 0x52;
            static constexpr std::uintptr_t bRequiresGameThreadExecution = 0x52;
            static constexpr std::uintptr_t ActivationState = 0x53;
            static constexpr std::uintptr_t ExecutionPriority = 0x54;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"ExecutionOrder", 0x28, "StructProperty"},
            {"ProcessingPhase", 0x50, "EnumProperty"},
            {"ExecutionFlags", 0x51, "ByteProperty"},
            {"bAggregateRequirements", 0x52, "BoolProperty"},
            {"bAutoRegisterWithProcessingPhases", 0x52, "BoolProperty"},
            {"bRequiresGameThreadExecution", 0x52, "BoolProperty"},
            {"ActivationState", 0x53, "EnumProperty"},
            {"ExecutionPriority", 0x54, "Int16Property"},
        }};
    };

    struct EntitySkeletonModifierImplInterface
    {
        static constexpr std::string_view Name = "EntitySkeletonModifierImplInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EntityModifierImplInterface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct EntitySkeletonModifierStackImpl
    {
        static constexpr std::string_view Name = "EntitySkeletonModifierStackImpl";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EntityModifierStackImpl";
        struct Offsets
        {
            static constexpr std::uintptr_t ReplicatedEntries = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ReplicatedEntries", 0x28, "ArrayProperty"},
        }};
    };

    struct EntitySkeletonModifierSystemDestructor
    {
        static constexpr std::string_view Name = "EntitySkeletonModifierSystemDestructor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassObserverProcessor";
        struct Offsets
        {
            static constexpr std::uintptr_t ObservedType = 0x120;
            static constexpr std::uintptr_t ObservedTypes = 0x128;
            static constexpr std::uintptr_t bAutoRegisterWithObserverRegistry = 0x138;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ObservedType", 0x120, "ObjectProperty"},
            {"ObservedTypes", 0x128, "ArrayProperty"},
            {"bAutoRegisterWithObserverRegistry", 0x138, "BoolProperty"},
        }};
    };

    struct EntitySkeletonProxyModifierImpl
    {
        static constexpr std::string_view Name = "EntitySkeletonProxyModifierImpl";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct EntityUAFSystemImpl
    {
        static constexpr std::string_view Name = "EntityUAFSystemImpl";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MeshEntityComponentImpl_SkinnedLODProcessor
    {
        static constexpr std::string_view Name = "MeshEntityComponentImpl_SkinnedLODProcessor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassProcessor";
        struct Offsets
        {
            static constexpr std::uintptr_t ExecutionOrder = 0x28;
            static constexpr std::uintptr_t ProcessingPhase = 0x50;
            static constexpr std::uintptr_t ExecutionFlags = 0x51;
            static constexpr std::uintptr_t bAggregateRequirements = 0x52;
            static constexpr std::uintptr_t bAutoRegisterWithProcessingPhases = 0x52;
            static constexpr std::uintptr_t bRequiresGameThreadExecution = 0x52;
            static constexpr std::uintptr_t ActivationState = 0x53;
            static constexpr std::uintptr_t ExecutionPriority = 0x54;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"ExecutionOrder", 0x28, "StructProperty"},
            {"ProcessingPhase", 0x50, "EnumProperty"},
            {"ExecutionFlags", 0x51, "ByteProperty"},
            {"bAggregateRequirements", 0x52, "BoolProperty"},
            {"bAutoRegisterWithProcessingPhases", 0x52, "BoolProperty"},
            {"bRequiresGameThreadExecution", 0x52, "BoolProperty"},
            {"ActivationState", 0x53, "EnumProperty"},
            {"ExecutionPriority", 0x54, "Int16Property"},
        }};
    };

    struct SkeletalAnimationRetargetMethodBase
    {
        static constexpr std::string_view Name = "SkeletalAnimationRetargetMethodBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SkeletalMeshDefaultModifierStackUserData
    {
        static constexpr std::string_view Name = "SkeletalMeshDefaultModifierStackUserData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AssetUserData";
        struct Offsets
        {
            static constexpr std::uintptr_t PersistedModifiers = 0x28;
            static constexpr std::uintptr_t DefaultModifiers = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PersistedModifiers", 0x28, "ArrayProperty"},
            {"DefaultModifiers", 0x38, "ObjectProperty"},
        }};
    };

}

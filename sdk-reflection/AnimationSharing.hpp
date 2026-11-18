#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::AnimationSharing
{
    struct AnimSharingAdditiveInstance
    {
        static constexpr std::string_view Name = "AnimSharingAdditiveInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t BaseComponent = 0x260;
            static constexpr std::uintptr_t AdditiveAnimation = 0x268;
            static constexpr std::uintptr_t Alpha = 0x270;
            static constexpr std::uintptr_t bStateBool = 0x274;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"BaseComponent", 0x260, "WeakObjectProperty"},
            {"AdditiveAnimation", 0x268, "WeakObjectProperty"},
            {"Alpha", 0x270, "FloatProperty"},
            {"bStateBool", 0x274, "BoolProperty"},
        }};
    };

    struct AnimSharingInstance
    {
        static constexpr std::string_view Name = "AnimSharingInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t RegisteredActors = 0x28;
            static constexpr std::uintptr_t StateProcessor = 0x88;
            static constexpr std::uintptr_t UsedAnimationSequences = 0xD0;
            static constexpr std::uintptr_t StateEnum = 0xF0;
            static constexpr std::uintptr_t SharingActor = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"RegisteredActors", 0x28, "ArrayProperty"},
            {"StateProcessor", 0x88, "ObjectProperty"},
            {"UsedAnimationSequences", 0xD0, "ArrayProperty"},
            {"StateEnum", 0xF0, "ObjectProperty"},
            {"SharingActor", 0xF8, "ObjectProperty"},
        }};
    };

    struct AnimSharingStateInstance
    {
        static constexpr std::string_view Name = "AnimSharingStateInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t AnimationToPlay = 0x260;
            static constexpr std::uintptr_t PermutationTimeOffset = 0x268;
            static constexpr std::uintptr_t PlayRate = 0x26C;
            static constexpr std::uintptr_t bStateBool = 0x270;
            static constexpr std::uintptr_t Instance = 0x278;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"AnimationToPlay", 0x260, "ObjectProperty"},
            {"PermutationTimeOffset", 0x268, "FloatProperty"},
            {"PlayRate", 0x26C, "FloatProperty"},
            {"bStateBool", 0x270, "BoolProperty"},
            {"Instance", 0x278, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "GetInstancedActors",
        }};
    };

    struct AnimSharingTransitionInstance
    {
        static constexpr std::string_view Name = "AnimSharingTransitionInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t FromComponent = 0x260;
            static constexpr std::uintptr_t ToComponent = 0x268;
            static constexpr std::uintptr_t BlendTime = 0x270;
            static constexpr std::uintptr_t bBlendBool = 0x274;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"FromComponent", 0x260, "WeakObjectProperty"},
            {"ToComponent", 0x268, "WeakObjectProperty"},
            {"BlendTime", 0x270, "FloatProperty"},
            {"bBlendBool", 0x274, "BoolProperty"},
        }};
    };

    struct AnimationSetup
    {
        static constexpr std::string_view Name = "AnimationSetup";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t AnimSequence = 0x0;
            static constexpr std::uintptr_t AnimBlueprint = 0x8;
            static constexpr std::uintptr_t NumRandomizedInstances = 0x10;
            static constexpr std::uintptr_t Enabled = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"AnimSequence", 0x0, "ObjectProperty"},
            {"AnimBlueprint", 0x8, "ClassProperty"},
            {"NumRandomizedInstances", 0x10, "StructProperty"},
            {"Enabled", 0x28, "StructProperty"},
        }};
    };

    struct AnimationSharingManager
    {
        static constexpr std::string_view Name = "AnimationSharingManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Skeletons = 0x28;
            static constexpr std::uintptr_t PerSkeletonData = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Skeletons", 0x28, "ArrayProperty"},
            {"PerSkeletonData", 0x38, "ArrayProperty"},
        }};

        inline static constexpr std::array<std::string_view, 4> FunctionNames{{
            "AnimationSharingEnabled",
            "CreateAnimationSharingManager",
            "GetAnimationSharingManager",
            "RegisterActorWithSkeletonBP",
        }};
    };

    struct AnimationSharingScalability
    {
        static constexpr std::string_view Name = "AnimationSharingScalability";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t UseBlendTransitions = 0x0;
            static constexpr std::uintptr_t BlendSignificanceValue = 0x18;
            static constexpr std::uintptr_t MaximumNumberConcurrentBlends = 0x30;
            static constexpr std::uintptr_t TickSignificanceValue = 0x48;
            static constexpr std::uintptr_t RequireCurvesDuringBlends = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"UseBlendTransitions", 0x0, "StructProperty"},
            {"BlendSignificanceValue", 0x18, "StructProperty"},
            {"MaximumNumberConcurrentBlends", 0x30, "StructProperty"},
            {"TickSignificanceValue", 0x48, "StructProperty"},
            {"RequireCurvesDuringBlends", 0x60, "StructProperty"},
        }};
    };

    struct AnimationSharingSetup
    {
        static constexpr std::string_view Name = "AnimationSharingSetup";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t SkeletonSetups = 0x28;
            static constexpr std::uintptr_t ScalabilitySettings = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SkeletonSetups", 0x28, "ArrayProperty"},
            {"ScalabilitySettings", 0x38, "StructProperty"},
        }};
    };

    struct AnimationSharingStateProcessor
    {
        static constexpr std::string_view Name = "AnimationSharingStateProcessor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t AnimationStateEnum = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AnimationStateEnum", 0x28, "SoftObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "GetAnimationStateEnum",
            "ProcessActorState",
        }};
    };

    struct AnimationStateEntry
    {
        static constexpr std::string_view Name = "AnimationStateEntry";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t State = 0x0;
            static constexpr std::uintptr_t AnimationSetups = 0x8;
            static constexpr std::uintptr_t bOnDemand = 0x18;
            static constexpr std::uintptr_t bRandomizeOnDemandAnims = 0x19;
            static constexpr std::uintptr_t bAdditive = 0x1A;
            static constexpr std::uintptr_t BlendTime = 0x1C;
            static constexpr std::uintptr_t bReturnToPreviousState = 0x20;
            static constexpr std::uintptr_t bSetNextState = 0x21;
            static constexpr std::uintptr_t NextState = 0x22;
            static constexpr std::uintptr_t MaximumNumberOfConcurrentInstances = 0x28;
            static constexpr std::uintptr_t WiggleTimePercentage = 0x40;
            static constexpr std::uintptr_t bRequiresCurves = 0x44;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"State", 0x0, "ByteProperty"},
            {"AnimationSetups", 0x8, "ArrayProperty"},
            {"bOnDemand", 0x18, "BoolProperty"},
            {"bRandomizeOnDemandAnims", 0x19, "BoolProperty"},
            {"bAdditive", 0x1A, "BoolProperty"},
            {"BlendTime", 0x1C, "FloatProperty"},
            {"bReturnToPreviousState", 0x20, "BoolProperty"},
            {"bSetNextState", 0x21, "BoolProperty"},
            {"NextState", 0x22, "ByteProperty"},
            {"MaximumNumberOfConcurrentInstances", 0x28, "StructProperty"},
            {"WiggleTimePercentage", 0x40, "FloatProperty"},
            {"bRequiresCurves", 0x44, "BoolProperty"},
        }};
    };

    struct PerSkeletonAnimationSharingSetup
    {
        static constexpr std::string_view Name = "PerSkeletonAnimationSharingSetup";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t skeleton = 0x0;
            static constexpr std::uintptr_t SkeletalMesh = 0x8;
            static constexpr std::uintptr_t BlendAnimBlueprint = 0x10;
            static constexpr std::uintptr_t AdditiveAnimBlueprint = 0x18;
            static constexpr std::uintptr_t StateProcessorClass = 0x20;
            static constexpr std::uintptr_t bEnableMaterialParameterCaching = 0x28;
            static constexpr std::uintptr_t AnimationStates = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"skeleton", 0x0, "ObjectProperty"},
            {"SkeletalMesh", 0x8, "ObjectProperty"},
            {"BlendAnimBlueprint", 0x10, "ClassProperty"},
            {"AdditiveAnimBlueprint", 0x18, "ClassProperty"},
            {"StateProcessorClass", 0x20, "ClassProperty"},
            {"bEnableMaterialParameterCaching", 0x28, "BoolProperty"},
            {"AnimationStates", 0x30, "ArrayProperty"},
        }};
    };

    struct TickAnimationSharingFunction
    {
        static constexpr std::string_view Name = "TickAnimationSharingFunction";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "TickFunction";
        struct Offsets
        {
            static constexpr std::uintptr_t TickGroup = 0x8;
            static constexpr std::uintptr_t EndTickGroup = 0x9;
            static constexpr std::uintptr_t bAllowTickOnDedicatedServer = 0xA;
            static constexpr std::uintptr_t bCanEverTick = 0xA;
            static constexpr std::uintptr_t bStartWithTickEnabled = 0xA;
            static constexpr std::uintptr_t bTickEvenWhenPaused = 0xA;
            static constexpr std::uintptr_t TickInterval = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"TickGroup", 0x8, "ByteProperty"},
            {"EndTickGroup", 0x9, "ByteProperty"},
            {"bAllowTickOnDedicatedServer", 0xA, "BoolProperty"},
            {"bCanEverTick", 0xA, "BoolProperty"},
            {"bStartWithTickEnabled", 0xA, "BoolProperty"},
            {"bTickEvenWhenPaused", 0xA, "BoolProperty"},
            {"TickInterval", 0xC, "FloatProperty"},
        }};
    };

}

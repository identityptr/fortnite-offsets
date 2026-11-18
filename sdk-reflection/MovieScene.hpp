#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::MovieScene
{
    struct ActorForWorldTransforms
    {
        static constexpr std::string_view Name = "ActorForWorldTransforms";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Actor = 0x0;
            static constexpr std::uintptr_t Component = 0x8;
            static constexpr std::uintptr_t SocketName = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Actor", 0x0, "WeakObjectProperty"},
            {"Component", 0x8, "WeakObjectProperty"},
            {"SocketName", 0x10, "NameProperty"},
        }};
    };

    struct BuiltInDynamicBindingResolverLibrary
    {
        static constexpr std::string_view Name = "BuiltInDynamicBindingResolverLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "ResolveToPlayerPawn",
        }};
    };

    struct EasingComponentData
    {
        static constexpr std::string_view Name = "EasingComponentData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Section = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Section", 0x0, "ObjectProperty"},
        }};
    };

    struct GeneratedMovieSceneKeyStruct
    {
        static constexpr std::string_view Name = "GeneratedMovieSceneKeyStruct";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MovieScene
    {
        static constexpr std::string_view Name = "MovieScene";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneDecorationContainerObject";
        struct Offsets
        {
            static constexpr std::uintptr_t Spawnables = 0x90;
            static constexpr std::uintptr_t Possessables = 0xA0;
            static constexpr std::uintptr_t ObjectBindings = 0xB0;
            static constexpr std::uintptr_t BindingGroups = 0xC0;
            static constexpr std::uintptr_t Tracks = 0xD0;
            static constexpr std::uintptr_t CameraCutTrack = 0xE0;
            static constexpr std::uintptr_t CustomClock = 0xE8;
            static constexpr std::uintptr_t SelectionRange = 0xF0;
            static constexpr std::uintptr_t PlaybackRange = 0x100;
            static constexpr std::uintptr_t TickResolution = 0x110;
            static constexpr std::uintptr_t DisplayRate = 0x118;
            static constexpr std::uintptr_t EvaluationType = 0x120;
            static constexpr std::uintptr_t ClockSource = 0x121;
            static constexpr std::uintptr_t MarkedFrames = 0x128;
            static constexpr std::uintptr_t GeneratedConditions = 0x138;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"Spawnables", 0x90, "ArrayProperty"},
            {"Possessables", 0xA0, "ArrayProperty"},
            {"ObjectBindings", 0xB0, "ArrayProperty"},
            {"BindingGroups", 0xC0, "MapProperty"},
            {"Tracks", 0xD0, "ArrayProperty"},
            {"CameraCutTrack", 0xE0, "ObjectProperty"},
            {"CustomClock", 0xE8, "ObjectProperty"},
            {"SelectionRange", 0xF0, "StructProperty"},
            {"PlaybackRange", 0x100, "StructProperty"},
            {"TickResolution", 0x110, "StructProperty"},
            {"DisplayRate", 0x118, "StructProperty"},
            {"EvaluationType", 0x120, "EnumProperty"},
            {"ClockSource", 0x121, "EnumProperty"},
            {"MarkedFrames", 0x128, "ArrayProperty"},
            {"GeneratedConditions", 0x138, "ArrayProperty"},
        }};
    };

    struct MovieSceneAnchorsScalingGroup
    {
        static constexpr std::string_view Name = "MovieSceneAnchorsScalingGroup";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Sections = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Sections", 0x0, "SetProperty"},
        }};
    };

    struct MovieSceneAudioTriggerChannel
    {
        static constexpr std::string_view Name = "MovieSceneAudioTriggerChannel";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MovieSceneChannel";
        struct Offsets
        {
            static constexpr std::uintptr_t Times = 0x50;
            static constexpr std::uintptr_t Values = 0x60;
            static constexpr std::uintptr_t KeyHandles = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Times", 0x50, "ArrayProperty"},
            {"Values", 0x60, "ArrayProperty"},
            {"KeyHandles", 0x70, "StructProperty"},
        }};
    };

    struct MovieSceneBinding
    {
        static constexpr std::string_view Name = "MovieSceneBinding";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MovieSceneDecorationContainer";
        struct Offsets
        {
            static constexpr std::uintptr_t ObjectGuid = 0x10;
            static constexpr std::uintptr_t BindingName = 0x20;
            static constexpr std::uintptr_t Tracks = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ObjectGuid", 0x10, "StructProperty"},
            {"BindingName", 0x20, "StrProperty"},
            {"Tracks", 0x30, "ArrayProperty"},
        }};
    };

    struct MovieSceneBindingEventReceiverInterface
    {
        static constexpr std::string_view Name = "MovieSceneBindingEventReceiverInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "OnObjectBoundBySequencer",
            "OnObjectUnboundBySequencer",
        }};
    };

    struct MovieSceneBindingLifetimeSection
    {
        static constexpr std::string_view Name = "MovieSceneBindingLifetimeSection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneSection";
        struct Offsets
        {
            static constexpr std::uintptr_t EvalOptions = 0x88;
            static constexpr std::uintptr_t Easing = 0x90;
            static constexpr std::uintptr_t SectionRange = 0xC8;
            static constexpr std::uintptr_t TimecodeSource = 0xD8;
            static constexpr std::uintptr_t ConditionContainer = 0xF0;
            static constexpr std::uintptr_t PreRollFrames = 0xF8;
            static constexpr std::uintptr_t PostRollFrames = 0xFC;
            static constexpr std::uintptr_t RowIndex = 0x100;
            static constexpr std::uintptr_t OverlapPriority = 0x104;
            static constexpr std::uintptr_t bIsActive = 0x108;
            static constexpr std::uintptr_t bIsLocked = 0x108;
            static constexpr std::uintptr_t StartTime = 0x10C;
            static constexpr std::uintptr_t EndTime = 0x110;
            static constexpr std::uintptr_t PreRollTime = 0x114;
            static constexpr std::uintptr_t PostRollTime = 0x118;
            static constexpr std::uintptr_t bIsInfinite = 0x11C;
            static constexpr std::uintptr_t bSupportsInfiniteRange = 0x120;
            static constexpr std::uintptr_t BlendType = 0x121;
        };

        inline static constexpr std::array<PropertyInfo, 18> Properties{{
            {"EvalOptions", 0x88, "StructProperty"},
            {"Easing", 0x90, "StructProperty"},
            {"SectionRange", 0xC8, "StructProperty"},
            {"TimecodeSource", 0xD8, "StructProperty"},
            {"ConditionContainer", 0xF0, "StructProperty"},
            {"PreRollFrames", 0xF8, "StructProperty"},
            {"PostRollFrames", 0xFC, "StructProperty"},
            {"RowIndex", 0x100, "IntProperty"},
            {"OverlapPriority", 0x104, "IntProperty"},
            {"bIsActive", 0x108, "BoolProperty"},
            {"bIsLocked", 0x108, "BoolProperty"},
            {"StartTime", 0x10C, "FloatProperty"},
            {"EndTime", 0x110, "FloatProperty"},
            {"PreRollTime", 0x114, "FloatProperty"},
            {"PostRollTime", 0x118, "FloatProperty"},
            {"bIsInfinite", 0x11C, "BoolProperty"},
            {"bSupportsInfiniteRange", 0x120, "BoolProperty"},
            {"BlendType", 0x121, "StructProperty"},
        }};
    };

    struct MovieSceneBindingLifetimeSystem
    {
        static constexpr std::string_view Name = "MovieSceneBindingLifetimeSystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneEntitySystem";
        struct Offsets
        {
            static constexpr std::uintptr_t Linker = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Linker", 0x28, "ObjectProperty"},
        }};
    };

    struct MovieSceneBindingLifetimeTrack
    {
        static constexpr std::string_view Name = "MovieSceneBindingLifetimeTrack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneTrack";
        struct Offsets
        {
            static constexpr std::uintptr_t Sections = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Sections", 0x100, "ArrayProperty"},
        }};
    };

    struct MovieSceneBindingOverrideData
    {
        static constexpr std::string_view Name = "MovieSceneBindingOverrideData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ObjectBindingID = 0x0;
            static constexpr std::uintptr_t Object = 0x18;
            static constexpr std::uintptr_t bOverridesDefault = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ObjectBindingID", 0x0, "StructProperty"},
            {"Object", 0x18, "SoftObjectProperty"},
            {"bOverridesDefault", 0x38, "BoolProperty"},
        }};
    };

    struct MovieSceneBindingOverrides
    {
        static constexpr std::string_view Name = "MovieSceneBindingOverrides";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t BindingData = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"BindingData", 0x28, "ArrayProperty"},
        }};
    };

    struct MovieSceneBindingOwnerInterface
    {
        static constexpr std::string_view Name = "MovieSceneBindingOwnerInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MovieSceneBindingProxy
    {
        static constexpr std::string_view Name = "MovieSceneBindingProxy";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t BindingId = 0x0;
            static constexpr std::uintptr_t Sequence = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"BindingId", 0x0, "StructProperty"},
            {"Sequence", 0x10, "ObjectProperty"},
        }};
    };

    struct MovieSceneBindingReference
    {
        static constexpr std::string_view Name = "MovieSceneBindingReference";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ID = 0x0;
            static constexpr std::uintptr_t Locator = 0x10;
            static constexpr std::uintptr_t ResolveFlags = 0x20;
            static constexpr std::uintptr_t CustomBinding = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ID", 0x0, "StructProperty"},
            {"Locator", 0x10, "StructProperty"},
            {"ResolveFlags", 0x20, "EnumProperty"},
            {"CustomBinding", 0x28, "ObjectProperty"},
        }};
    };

    struct MovieSceneBindingReferences
    {
        static constexpr std::string_view Name = "MovieSceneBindingReferences";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SortedReferences = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SortedReferences", 0x0, "ArrayProperty"},
        }};
    };

    struct MovieSceneBindingResolveContext
    {
        static constexpr std::string_view Name = "MovieSceneBindingResolveContext";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t WorldContext = 0x0;
            static constexpr std::uintptr_t Binding = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"WorldContext", 0x0, "ObjectProperty"},
            {"Binding", 0x8, "StructProperty"},
        }};
    };

    struct MovieSceneBindingResolveParams
    {
        static constexpr std::string_view Name = "MovieSceneBindingResolveParams";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Sequence = 0x0;
            static constexpr std::uintptr_t ObjectBindingID = 0x8;
            static constexpr std::uintptr_t SequenceID = 0x18;
            static constexpr std::uintptr_t Context = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Sequence", 0x0, "ObjectProperty"},
            {"ObjectBindingID", 0x8, "StructProperty"},
            {"SequenceID", 0x18, "StructProperty"},
            {"Context", 0x20, "ObjectProperty"},
        }};
    };

    struct MovieSceneBindingResolveResult
    {
        static constexpr std::string_view Name = "MovieSceneBindingResolveResult";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Objects = 0x0;
            static constexpr std::uintptr_t Object = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Objects", 0x0, "ArrayProperty"},
            {"Object", 0x10, "ObjectProperty"},
        }};
    };

    struct MovieSceneBlenderSystem
    {
        static constexpr std::string_view Name = "MovieSceneBlenderSystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneEntitySystem";
        struct Offsets
        {
            static constexpr std::uintptr_t Linker = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Linker", 0x28, "ObjectProperty"},
        }};
    };

    struct MovieSceneBlenderSystemSupport
    {
        static constexpr std::string_view Name = "MovieSceneBlenderSystemSupport";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MovieSceneBoolChannel
    {
        static constexpr std::string_view Name = "MovieSceneBoolChannel";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MovieSceneChannel";
        struct Offsets
        {
            static constexpr std::uintptr_t PreInfinityExtrap = 0x50;
            static constexpr std::uintptr_t PostInfinityExtrap = 0x51;
            static constexpr std::uintptr_t Times = 0x58;
            static constexpr std::uintptr_t DefaultValue = 0x68;
            static constexpr std::uintptr_t bHasDefaultValue = 0x69;
            static constexpr std::uintptr_t Values = 0x70;
            static constexpr std::uintptr_t KeyHandles = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"PreInfinityExtrap", 0x50, "ByteProperty"},
            {"PostInfinityExtrap", 0x51, "ByteProperty"},
            {"Times", 0x58, "ArrayProperty"},
            {"DefaultValue", 0x68, "BoolProperty"},
            {"bHasDefaultValue", 0x69, "BoolProperty"},
            {"Values", 0x70, "ArrayProperty"},
            {"KeyHandles", 0x80, "StructProperty"},
        }};
    };

    struct MovieSceneBoolSection
    {
        static constexpr std::string_view Name = "MovieSceneBoolSection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneSection";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultValue = 0x140;
            static constexpr std::uintptr_t BoolCurve = 0x148;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DefaultValue", 0x140, "BoolProperty"},
            {"BoolCurve", 0x148, "StructProperty"},
        }};
    };

    struct MovieSceneBoundObjectProxy
    {
        static constexpr std::string_view Name = "MovieSceneBoundObjectProxy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "BP_GetBoundObjectForSequencer",
        }};
    };

    struct MovieSceneBoundSceneComponentInstantiator
    {
        static constexpr std::string_view Name = "MovieSceneBoundSceneComponentInstantiator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneEntityInstantiatorSystem";
        struct Offsets
        {
            static constexpr std::uintptr_t Linker = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Linker", 0x28, "ObjectProperty"},
        }};
    };

    struct MovieSceneBuiltInEasingFunction
    {
        static constexpr std::string_view Name = "MovieSceneBuiltInEasingFunction";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Type = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Type", 0x30, "EnumProperty"},
        }};
    };

    struct MovieSceneByteChannel
    {
        static constexpr std::string_view Name = "MovieSceneByteChannel";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MovieSceneChannel";
        struct Offsets
        {
            static constexpr std::uintptr_t PreInfinityExtrap = 0x50;
            static constexpr std::uintptr_t PostInfinityExtrap = 0x51;
            static constexpr std::uintptr_t Times = 0x58;
            static constexpr std::uintptr_t DefaultValue = 0x68;
            static constexpr std::uintptr_t bHasDefaultValue = 0x69;
            static constexpr std::uintptr_t Values = 0x70;
            static constexpr std::uintptr_t Enum = 0x80;
            static constexpr std::uintptr_t KeyHandles = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"PreInfinityExtrap", 0x50, "ByteProperty"},
            {"PostInfinityExtrap", 0x51, "ByteProperty"},
            {"Times", 0x58, "ArrayProperty"},
            {"DefaultValue", 0x68, "ByteProperty"},
            {"bHasDefaultValue", 0x69, "BoolProperty"},
            {"Values", 0x70, "ArrayProperty"},
            {"Enum", 0x80, "ObjectProperty"},
            {"KeyHandles", 0x88, "StructProperty"},
        }};
    };

    struct MovieSceneCachePreAnimatedStateSystem
    {
        static constexpr std::string_view Name = "MovieSceneCachePreAnimatedStateSystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneEntityInstantiatorSystem";
        struct Offsets
        {
            static constexpr std::uintptr_t Linker = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Linker", 0x28, "ObjectProperty"},
        }};
    };

    struct MovieSceneCachedTrack
    {
        static constexpr std::string_view Name = "MovieSceneCachedTrack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MovieSceneChannel
    {
        static constexpr std::string_view Name = "MovieSceneChannel";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MovieSceneChannelDecoration
    {
        static constexpr std::string_view Name = "MovieSceneChannelDecoration";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MovieSceneChannelOverrideContainer
    {
        static constexpr std::string_view Name = "MovieSceneChannelOverrideContainer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneSignedObject";
        struct Offsets
        {
            static constexpr std::uintptr_t Signature = 0x2C;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Signature", 0x2C, "StructProperty"},
        }};
    };

    struct MovieSceneChannelOverrideProvider
    {
        static constexpr std::string_view Name = "MovieSceneChannelOverrideProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MovieSceneChannelOwner
    {
        static constexpr std::string_view Name = "MovieSceneChannelOwner";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MovieSceneClock
    {
        static constexpr std::string_view Name = "MovieSceneClock";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneSignedObject";
        struct Offsets
        {
            static constexpr std::uintptr_t Signature = 0x2C;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Signature", 0x2C, "StructProperty"},
        }};
    };

    struct MovieSceneCompiledData
    {
        static constexpr std::string_view Name = "MovieSceneCompiledData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t EvaluationTemplate = 0x28;
            static constexpr std::uintptr_t Hierarchy = 0x88;
            static constexpr std::uintptr_t EntityComponentField = 0x148;
            static constexpr std::uintptr_t TrackTemplateField = 0x238;
            static constexpr std::uintptr_t DeterminismFences = 0x268;
            static constexpr std::uintptr_t CompiledSignature = 0x278;
            static constexpr std::uintptr_t CompilerVersion = 0x288;
            static constexpr std::uintptr_t AccumulatedMask = 0x298;
            static constexpr std::uintptr_t AllocatedMask = 0x299;
            static constexpr std::uintptr_t AccumulatedFlags = 0x29A;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"EvaluationTemplate", 0x28, "StructProperty"},
            {"Hierarchy", 0x88, "StructProperty"},
            {"EntityComponentField", 0x148, "StructProperty"},
            {"TrackTemplateField", 0x238, "StructProperty"},
            {"DeterminismFences", 0x268, "ArrayProperty"},
            {"CompiledSignature", 0x278, "StructProperty"},
            {"CompilerVersion", 0x288, "StructProperty"},
            {"AccumulatedMask", 0x298, "EnumProperty"},
            {"AllocatedMask", 0x299, "EnumProperty"},
            {"AccumulatedFlags", 0x29A, "EnumProperty"},
        }};
    };

    struct MovieSceneCompiledDataManager
    {
        static constexpr std::string_view Name = "MovieSceneCompiledDataManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Hierarchies = 0x98;
            static constexpr std::uintptr_t TrackTemplates = 0xA8;
            static constexpr std::uintptr_t TrackTemplateFields = 0xB8;
            static constexpr std::uintptr_t EntityComponentFields = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Hierarchies", 0x98, "MapProperty"},
            {"TrackTemplates", 0xA8, "MapProperty"},
            {"TrackTemplateFields", 0xB8, "MapProperty"},
            {"EntityComponentFields", 0xC8, "MapProperty"},
        }};
    };

    struct MovieSceneCompiledSequenceFlagStruct
    {
        static constexpr std::string_view Name = "MovieSceneCompiledSequenceFlagStruct";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bParentSequenceRequiresLowerFence = 0x0;
            static constexpr std::uintptr_t bParentSequenceRequiresUpperFence = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bParentSequenceRequiresLowerFence", 0x0, "BoolProperty"},
            {"bParentSequenceRequiresUpperFence", 0x0, "BoolProperty"},
        }};
    };

    struct MovieSceneCondition
    {
        static constexpr std::string_view Name = "MovieSceneCondition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneSignedObject";
        struct Offsets
        {
            static constexpr std::uintptr_t bInvert = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bInvert", 0x58, "BoolProperty"},
        }};

        inline static constexpr std::array<std::string_view, 3> FunctionNames{{
            "BP_EvaluateCondition",
            "BP_GetCheckFrequency",
            "BP_GetScope",
        }};
    };

    struct MovieSceneConditionContainer
    {
        static constexpr std::string_view Name = "MovieSceneConditionContainer";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Condition = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Condition", 0x0, "ObjectProperty"},
        }};
    };

    struct MovieSceneConditionContext
    {
        static constexpr std::string_view Name = "MovieSceneConditionContext";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t WorldContext = 0x0;
            static constexpr std::uintptr_t Binding = 0x8;
            static constexpr std::uintptr_t BoundObjects = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"WorldContext", 0x0, "ObjectProperty"},
            {"Binding", 0x8, "StructProperty"},
            {"BoundObjects", 0x20, "ArrayProperty"},
        }};
    };

    struct MovieSceneCustomBinding
    {
        static constexpr std::string_view Name = "MovieSceneCustomBinding";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "GetBaseCustomPriority",
            "GetBaseEnginePriority",
        }};
    };

    struct MovieSceneCustomClockSource
    {
        static constexpr std::string_view Name = "MovieSceneCustomClockSource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 4> FunctionNames{{
            "OnRequestCurrentTime",
            "OnStartPlaying",
            "OnStopPlaying",
            "OnTick",
        }};
    };

    struct MovieSceneCustomTimeWarpGetterStruct
    {
        static constexpr std::string_view Name = "MovieSceneCustomTimeWarpGetterStruct";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Object = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Object", 0x0, "ObjectProperty"},
        }};
    };

    struct MovieSceneDecoration
    {
        static constexpr std::string_view Name = "MovieSceneDecoration";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MovieSceneDecorationContainer
    {
        static constexpr std::string_view Name = "MovieSceneDecorationContainer";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Decorations = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Decorations", 0x0, "ArrayProperty"},
        }};
    };

    struct MovieSceneDecorationContainerObject
    {
        static constexpr std::string_view Name = "MovieSceneDecorationContainerObject";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneSignedObject";
        struct Offsets
        {
            static constexpr std::uintptr_t Decorations = 0x58;
            static constexpr std::uintptr_t MutedDecorations = 0x68;
            static constexpr std::uintptr_t DisabledDecorations = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Decorations", 0x58, "StructProperty"},
            {"MutedDecorations", 0x68, "SetProperty"},
            {"DisabledDecorations", 0x78, "SetProperty"},
        }};
    };

    struct MovieSceneDeterminismData
    {
        static constexpr std::string_view Name = "MovieSceneDeterminismData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Fences = 0x0;
            static constexpr std::uintptr_t bParentSequenceRequiresLowerFence = 0x10;
            static constexpr std::uintptr_t bParentSequenceRequiresUpperFence = 0x11;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Fences", 0x0, "ArrayProperty"},
            {"bParentSequenceRequiresLowerFence", 0x10, "BoolProperty"},
            {"bParentSequenceRequiresUpperFence", 0x11, "BoolProperty"},
        }};
    };

    struct MovieSceneDeterminismFence
    {
        static constexpr std::string_view Name = "MovieSceneDeterminismFence";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t FrameNumber = 0x0;
            static constexpr std::uintptr_t bInclusive = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"FrameNumber", 0x0, "StructProperty"},
            {"bInclusive", 0x4, "BoolProperty"},
        }};
    };

    struct MovieSceneDeterminismSource
    {
        static constexpr std::string_view Name = "MovieSceneDeterminismSource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MovieSceneDoubleChannel
    {
        static constexpr std::string_view Name = "MovieSceneDoubleChannel";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MovieSceneChannel";
        struct Offsets
        {
            static constexpr std::uintptr_t PreInfinityExtrap = 0x50;
            static constexpr std::uintptr_t PostInfinityExtrap = 0x51;
            static constexpr std::uintptr_t Times = 0x58;
            static constexpr std::uintptr_t Values = 0x68;
            static constexpr std::uintptr_t DefaultValue = 0x78;
            static constexpr std::uintptr_t bHasDefaultValue = 0x80;
            static constexpr std::uintptr_t KeyHandles = 0x88;
            static constexpr std::uintptr_t TickResolution = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"PreInfinityExtrap", 0x50, "ByteProperty"},
            {"PostInfinityExtrap", 0x51, "ByteProperty"},
            {"Times", 0x58, "ArrayProperty"},
            {"Values", 0x68, "ArrayProperty"},
            {"DefaultValue", 0x78, "DoubleProperty"},
            {"bHasDefaultValue", 0x80, "BoolProperty"},
            {"KeyHandles", 0x88, "StructProperty"},
            {"TickResolution", 0xD0, "StructProperty"},
        }};
    };

    struct MovieSceneDoubleValue
    {
        static constexpr std::string_view Name = "MovieSceneDoubleValue";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x0;
            static constexpr std::uintptr_t Tangent = 0x8;
            static constexpr std::uintptr_t InterpMode = 0x1C;
            static constexpr std::uintptr_t TangentMode = 0x1D;
            static constexpr std::uintptr_t PaddingByte = 0x1E;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Value", 0x0, "DoubleProperty"},
            {"Tangent", 0x8, "StructProperty"},
            {"InterpMode", 0x1C, "ByteProperty"},
            {"TangentMode", 0x1D, "ByteProperty"},
            {"PaddingByte", 0x1E, "ByteProperty"},
        }};
    };

    struct MovieSceneDynamicBinding
    {
        static constexpr std::string_view Name = "MovieSceneDynamicBinding";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Function = 0x0;
            static constexpr std::uintptr_t ResolveParamsProperty = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Function", 0x0, "ObjectProperty"},
            {"ResolveParamsProperty", 0x8, "FieldPathProperty"},
        }};
    };

    struct MovieSceneDynamicBindingContainer
    {
        static constexpr std::string_view Name = "MovieSceneDynamicBindingContainer";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t DynamicBinding = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DynamicBinding", 0x0, "StructProperty"},
        }};
    };

    struct MovieSceneDynamicBindingPayloadVariable
    {
        static constexpr std::string_view Name = "MovieSceneDynamicBindingPayloadVariable";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ObjectValue = 0x0;
            static constexpr std::uintptr_t Value = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ObjectValue", 0x0, "StructProperty"},
            {"Value", 0x18, "StrProperty"},
        }};
    };

    struct MovieSceneDynamicBindingResolveParams
    {
        static constexpr std::string_view Name = "MovieSceneDynamicBindingResolveParams";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Sequence = 0x0;
            static constexpr std::uintptr_t ObjectBindingID = 0x8;
            static constexpr std::uintptr_t RootSequence = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Sequence", 0x0, "ObjectProperty"},
            {"ObjectBindingID", 0x8, "StructProperty"},
            {"RootSequence", 0x18, "ObjectProperty"},
        }};
    };

    struct MovieSceneDynamicBindingResolveResult
    {
        static constexpr std::string_view Name = "MovieSceneDynamicBindingResolveResult";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Objects = 0x0;
            static constexpr std::uintptr_t Object = 0x10;
            static constexpr std::uintptr_t bIsPossessedObject = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Objects", 0x0, "ArrayProperty"},
            {"Object", 0x10, "ObjectProperty"},
            {"bIsPossessedObject", 0x18, "BoolProperty"},
        }};
    };

    struct MovieSceneEasingExternalCurve
    {
        static constexpr std::string_view Name = "MovieSceneEasingExternalCurve";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Curve = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Curve", 0x30, "ObjectProperty"},
        }};
    };

    struct MovieSceneEasingFunction
    {
        static constexpr std::string_view Name = "MovieSceneEasingFunction";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "OnEvaluate",
        }};
    };

    struct MovieSceneEasingSettings
    {
        static constexpr std::string_view Name = "MovieSceneEasingSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t AutoEaseInDuration = 0x0;
            static constexpr std::uintptr_t AutoEaseOutDuration = 0x4;
            static constexpr std::uintptr_t EaseIn = 0x8;
            static constexpr std::uintptr_t bManualEaseIn = 0x18;
            static constexpr std::uintptr_t ManualEaseInDuration = 0x1C;
            static constexpr std::uintptr_t EaseOut = 0x20;
            static constexpr std::uintptr_t bManualEaseOut = 0x30;
            static constexpr std::uintptr_t ManualEaseOutDuration = 0x34;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"AutoEaseInDuration", 0x0, "IntProperty"},
            {"AutoEaseOutDuration", 0x4, "IntProperty"},
            {"EaseIn", 0x8, "InterfaceProperty"},
            {"bManualEaseIn", 0x18, "BoolProperty"},
            {"ManualEaseInDuration", 0x1C, "IntProperty"},
            {"EaseOut", 0x20, "InterfaceProperty"},
            {"bManualEaseOut", 0x30, "BoolProperty"},
            {"ManualEaseOutDuration", 0x34, "IntProperty"},
        }};
    };

    struct MovieSceneEditorData
    {
        static constexpr std::string_view Name = "MovieSceneEditorData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ExpansionStates = 0x0;
            static constexpr std::uintptr_t PinnedNodes = 0x10;
            static constexpr std::uintptr_t ViewStart = 0x20;
            static constexpr std::uintptr_t ViewEnd = 0x28;
            static constexpr std::uintptr_t WorkStart = 0x30;
            static constexpr std::uintptr_t WorkEnd = 0x38;
            static constexpr std::uintptr_t MarkedFrames = 0x40;
            static constexpr std::uintptr_t WorkingRange = 0x50;
            static constexpr std::uintptr_t ViewRange = 0x60;
            static constexpr std::uintptr_t NavigationToolState = 0x70;
            static constexpr std::uintptr_t SoloNodes = 0xE8;
            static constexpr std::uintptr_t MuteNodes = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"ExpansionStates", 0x0, "MapProperty"},
            {"PinnedNodes", 0x10, "ArrayProperty"},
            {"ViewStart", 0x20, "DoubleProperty"},
            {"ViewEnd", 0x28, "DoubleProperty"},
            {"WorkStart", 0x30, "DoubleProperty"},
            {"WorkEnd", 0x38, "DoubleProperty"},
            {"MarkedFrames", 0x40, "SetProperty"},
            {"WorkingRange", 0x50, "StructProperty"},
            {"ViewRange", 0x60, "StructProperty"},
            {"NavigationToolState", 0x70, "StructProperty"},
            {"SoloNodes", 0xE8, "ArrayProperty"},
            {"MuteNodes", 0xF8, "ArrayProperty"},
        }};
    };

    struct MovieSceneEmptyStruct
    {
        static constexpr std::string_view Name = "MovieSceneEmptyStruct";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MovieSceneEntityComponentField
    {
        static constexpr std::string_view Name = "MovieSceneEntityComponentField";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t PersistentEntityTree = 0x0;
            static constexpr std::uintptr_t OneShotEntityTree = 0x60;
            static constexpr std::uintptr_t Entities = 0xC0;
            static constexpr std::uintptr_t EntityMetaData = 0xD0;
            static constexpr std::uintptr_t SharedMetaData = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"PersistentEntityTree", 0x0, "StructProperty"},
            {"OneShotEntityTree", 0x60, "StructProperty"},
            {"Entities", 0xC0, "ArrayProperty"},
            {"EntityMetaData", 0xD0, "ArrayProperty"},
            {"SharedMetaData", 0xE0, "ArrayProperty"},
        }};
    };

    struct MovieSceneEntityDecorator
    {
        static constexpr std::string_view Name = "MovieSceneEntityDecorator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MovieSceneEntityGroupingSystem
    {
        static constexpr std::string_view Name = "MovieSceneEntityGroupingSystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneEntitySystem";
        struct Offsets
        {
            static constexpr std::uintptr_t Linker = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Linker", 0x28, "ObjectProperty"},
        }};
    };

    struct MovieSceneEntityInstantiatorSystem
    {
        static constexpr std::string_view Name = "MovieSceneEntityInstantiatorSystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneEntitySystem";
        struct Offsets
        {
            static constexpr std::uintptr_t Linker = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Linker", 0x28, "ObjectProperty"},
        }};
    };

    struct MovieSceneEntityProvider
    {
        static constexpr std::string_view Name = "MovieSceneEntityProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MovieSceneEntitySystem
    {
        static constexpr std::string_view Name = "MovieSceneEntitySystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Linker = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Linker", 0x28, "ObjectProperty"},
        }};
    };

    struct MovieSceneEntitySystemGraph
    {
        static constexpr std::string_view Name = "MovieSceneEntitySystemGraph";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Nodes = 0xB8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Nodes", 0xB8, "StructProperty"},
        }};
    };

    struct MovieSceneEntitySystemGraphNode
    {
        static constexpr std::string_view Name = "MovieSceneEntitySystemGraphNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t System = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"System", 0x20, "ObjectProperty"},
        }};
    };

    struct MovieSceneEntitySystemGraphNodes
    {
        static constexpr std::string_view Name = "MovieSceneEntitySystemGraphNodes";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MovieSceneEntitySystemLinker
    {
        static constexpr std::string_view Name = "MovieSceneEntitySystemLinker";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t SystemGraph = 0x250;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SystemGraph", 0x250, "StructProperty"},
        }};
    };

    struct MovieSceneEvalTemplate
    {
        static constexpr std::string_view Name = "MovieSceneEvalTemplate";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MovieSceneEvalTemplateBase";
        struct Offsets
        {
            static constexpr std::uintptr_t CompletionMode = 0x10;
            static constexpr std::uintptr_t SourceSectionPtr = 0x14;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CompletionMode", 0x10, "EnumProperty"},
            {"SourceSectionPtr", 0x14, "WeakObjectProperty"},
        }};
    };

    struct MovieSceneEvalTemplateBase
    {
        static constexpr std::string_view Name = "MovieSceneEvalTemplateBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MovieSceneEvalTemplatePtr
    {
        static constexpr std::string_view Name = "MovieSceneEvalTemplatePtr";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MovieSceneEvalTimeSystem
    {
        static constexpr std::string_view Name = "MovieSceneEvalTimeSystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneEntitySystem";
        struct Offsets
        {
            static constexpr std::uintptr_t Linker = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Linker", 0x28, "ObjectProperty"},
        }};
    };

    struct MovieSceneEvaluationField
    {
        static constexpr std::string_view Name = "MovieSceneEvaluationField";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Ranges = 0x0;
            static constexpr std::uintptr_t Groups = 0x10;
            static constexpr std::uintptr_t MetaData = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Ranges", 0x0, "ArrayProperty"},
            {"Groups", 0x10, "ArrayProperty"},
            {"MetaData", 0x20, "ArrayProperty"},
        }};
    };

    struct MovieSceneEvaluationFieldEntity
    {
        static constexpr std::string_view Name = "MovieSceneEvaluationFieldEntity";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Key = 0x0;
            static constexpr std::uintptr_t SharedMetaDataIndex = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Key", 0x0, "StructProperty"},
            {"SharedMetaDataIndex", 0xC, "IntProperty"},
        }};
    };

    struct MovieSceneEvaluationFieldEntityKey
    {
        static constexpr std::string_view Name = "MovieSceneEvaluationFieldEntityKey";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t EntityOwner = 0x0;
            static constexpr std::uintptr_t EntityID = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"EntityOwner", 0x0, "WeakObjectProperty"},
            {"EntityID", 0x8, "UInt32Property"},
        }};
    };

    struct MovieSceneEvaluationFieldEntityMetaData
    {
        static constexpr std::string_view Name = "MovieSceneEvaluationFieldEntityMetaData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Condition = 0x0;
            static constexpr std::uintptr_t OverrideBoundPropertyPath = 0x20;
            static constexpr std::uintptr_t NotifyFunctionName = 0x30;
            static constexpr std::uintptr_t ForcedTime = 0x34;
            static constexpr std::uintptr_t Flags = 0x38;
            static constexpr std::uintptr_t bEvaluateInSequencePostRoll = 0x39;
            static constexpr std::uintptr_t bEvaluateInSequencePreRoll = 0x39;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Condition", 0x0, "SoftObjectProperty"},
            {"OverrideBoundPropertyPath", 0x20, "StrProperty"},
            {"NotifyFunctionName", 0x30, "NameProperty"},
            {"ForcedTime", 0x34, "StructProperty"},
            {"Flags", 0x38, "EnumProperty"},
            {"bEvaluateInSequencePostRoll", 0x39, "BoolProperty"},
            {"bEvaluateInSequencePreRoll", 0x39, "BoolProperty"},
        }};
    };

    struct MovieSceneEvaluationFieldEntityTree
    {
        static constexpr std::string_view Name = "MovieSceneEvaluationFieldEntityTree";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MovieSceneEvaluationFieldSegmentPtr
    {
        static constexpr std::string_view Name = "MovieSceneEvaluationFieldSegmentPtr";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MovieSceneEvaluationFieldTrackPtr";
        struct Offsets
        {
            static constexpr std::uintptr_t SegmentId = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SegmentId", 0x8, "StructProperty"},
        }};
    };

    struct MovieSceneEvaluationFieldSharedEntityMetaData
    {
        static constexpr std::string_view Name = "MovieSceneEvaluationFieldSharedEntityMetaData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ObjectBindingID = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ObjectBindingID", 0x0, "StructProperty"},
        }};
    };

    struct MovieSceneEvaluationFieldTrackPtr
    {
        static constexpr std::string_view Name = "MovieSceneEvaluationFieldTrackPtr";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SequenceID = 0x0;
            static constexpr std::uintptr_t TrackIdentifier = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SequenceID", 0x0, "StructProperty"},
            {"TrackIdentifier", 0x4, "StructProperty"},
        }};
    };

    struct MovieSceneEvaluationGroup
    {
        static constexpr std::string_view Name = "MovieSceneEvaluationGroup";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t LUTIndices = 0x0;
            static constexpr std::uintptr_t TrackLUT = 0x10;
            static constexpr std::uintptr_t SectionLUT = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"LUTIndices", 0x0, "ArrayProperty"},
            {"TrackLUT", 0x10, "ArrayProperty"},
            {"SectionLUT", 0x20, "ArrayProperty"},
        }};
    };

    struct MovieSceneEvaluationGroupLUTIndex
    {
        static constexpr std::string_view Name = "MovieSceneEvaluationGroupLUTIndex";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t NumInitPtrs = 0x0;
            static constexpr std::uintptr_t NumEvalPtrs = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"NumInitPtrs", 0x0, "IntProperty"},
            {"NumEvalPtrs", 0x4, "IntProperty"},
        }};
    };

    struct MovieSceneEvaluationHook
    {
        static constexpr std::string_view Name = "MovieSceneEvaluationHook";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MovieSceneEvaluationHookComponent
    {
        static constexpr std::string_view Name = "MovieSceneEvaluationHookComponent";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Interface = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Interface", 0x0, "InterfaceProperty"},
        }};
    };

    struct MovieSceneEvaluationHookEvent
    {
        static constexpr std::string_view Name = "MovieSceneEvaluationHookEvent";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Hook = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Hook", 0x0, "StructProperty"},
        }};
    };

    struct MovieSceneEvaluationHookEventContainer
    {
        static constexpr std::string_view Name = "MovieSceneEvaluationHookEventContainer";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Events = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Events", 0x0, "ArrayProperty"},
        }};
    };

    struct MovieSceneEvaluationHookSystem
    {
        static constexpr std::string_view Name = "MovieSceneEvaluationHookSystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneEntitySystem";
        struct Offsets
        {
            static constexpr std::uintptr_t PendingEventsByRootInstance = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PendingEventsByRootInstance", 0x40, "MapProperty"},
        }};
    };

    struct MovieSceneEvaluationInstanceKey
    {
        static constexpr std::string_view Name = "MovieSceneEvaluationInstanceKey";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MovieSceneEvaluationKey
    {
        static constexpr std::string_view Name = "MovieSceneEvaluationKey";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SequenceID = 0x0;
            static constexpr std::uintptr_t TrackIdentifier = 0x4;
            static constexpr std::uintptr_t SectionIndex = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SequenceID", 0x0, "StructProperty"},
            {"TrackIdentifier", 0x4, "StructProperty"},
            {"SectionIndex", 0x8, "UInt32Property"},
        }};
    };

    struct MovieSceneEvaluationMetaData
    {
        static constexpr std::string_view Name = "MovieSceneEvaluationMetaData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ActiveSequences = 0x0;
            static constexpr std::uintptr_t ActiveEntities = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ActiveSequences", 0x0, "ArrayProperty"},
            {"ActiveEntities", 0x10, "ArrayProperty"},
        }};
    };

    struct MovieSceneEvaluationOperand
    {
        static constexpr std::string_view Name = "MovieSceneEvaluationOperand";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ObjectBindingID = 0x0;
            static constexpr std::uintptr_t SequenceID = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ObjectBindingID", 0x0, "StructProperty"},
            {"SequenceID", 0x10, "StructProperty"},
        }};
    };

    struct MovieSceneEvaluationTemplate
    {
        static constexpr std::string_view Name = "MovieSceneEvaluationTemplate";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Tracks = 0x0;
            static constexpr std::uintptr_t SequenceSignature = 0x20;
            static constexpr std::uintptr_t TemplateSerialNumber = 0x30;
            static constexpr std::uintptr_t TemplateLedger = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Tracks", 0x0, "MapProperty"},
            {"SequenceSignature", 0x20, "StructProperty"},
            {"TemplateSerialNumber", 0x30, "StructProperty"},
            {"TemplateLedger", 0x38, "StructProperty"},
        }};
    };

    struct MovieSceneEvaluationTemplateSerialNumber
    {
        static constexpr std::string_view Name = "MovieSceneEvaluationTemplateSerialNumber";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x0, "UInt32Property"},
        }};
    };

    struct MovieSceneEvaluationTrack
    {
        static constexpr std::string_view Name = "MovieSceneEvaluationTrack";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ObjectBindingID = 0x0;
            static constexpr std::uintptr_t EvaluationPriority = 0x10;
            static constexpr std::uintptr_t EvaluationMethod = 0x12;
            static constexpr std::uintptr_t SourceTrack = 0x14;
            static constexpr std::uintptr_t ChildTemplates = 0x20;
            static constexpr std::uintptr_t TrackTemplate = 0x30;
            static constexpr std::uintptr_t EvaluationGroup = 0x68;
            static constexpr std::uintptr_t bEvaluateInPostroll = 0x6C;
            static constexpr std::uintptr_t bEvaluateInPreroll = 0x6C;
            static constexpr std::uintptr_t bTearDownPriority = 0x6C;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"ObjectBindingID", 0x0, "StructProperty"},
            {"EvaluationPriority", 0x10, "UInt16Property"},
            {"EvaluationMethod", 0x12, "EnumProperty"},
            {"SourceTrack", 0x14, "WeakObjectProperty"},
            {"ChildTemplates", 0x20, "ArrayProperty"},
            {"TrackTemplate", 0x30, "StructProperty"},
            {"EvaluationGroup", 0x68, "NameProperty"},
            {"bEvaluateInPostroll", 0x6C, "BoolProperty"},
            {"bEvaluateInPreroll", 0x6C, "BoolProperty"},
            {"bTearDownPriority", 0x6C, "BoolProperty"},
        }};
    };

    struct MovieSceneExpansionState
    {
        static constexpr std::string_view Name = "MovieSceneExpansionState";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bExpanded = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bExpanded", 0x0, "BoolProperty"},
        }};
    };

    struct MovieSceneExternalClock
    {
        static constexpr std::string_view Name = "MovieSceneExternalClock";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneClock";
        struct Offsets
        {
            static constexpr std::uintptr_t CustomClockSourcePath = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CustomClockSourcePath", 0x58, "StructProperty"},
        }};
    };

    struct MovieSceneFieldEntry_ChildTemplate
    {
        static constexpr std::string_view Name = "MovieSceneFieldEntry_ChildTemplate";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ChildIndex = 0x0;
            static constexpr std::uintptr_t Flags = 0x2;
            static constexpr std::uintptr_t ForcedTime = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ChildIndex", 0x0, "UInt16Property"},
            {"Flags", 0x2, "EnumProperty"},
            {"ForcedTime", 0x4, "StructProperty"},
        }};
    };

    struct MovieSceneFieldEntry_EvaluationTrack
    {
        static constexpr std::string_view Name = "MovieSceneFieldEntry_EvaluationTrack";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t TrackPtr = 0x0;
            static constexpr std::uintptr_t NumChildren = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"TrackPtr", 0x0, "StructProperty"},
            {"NumChildren", 0x8, "UInt16Property"},
        }};
    };

    struct MovieSceneFixedPlayRateStruct
    {
        static constexpr std::string_view Name = "MovieSceneFixedPlayRateStruct";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayRate = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PlayRate", 0x0, "DoubleProperty"},
        }};
    };

    struct MovieSceneFloatChannel
    {
        static constexpr std::string_view Name = "MovieSceneFloatChannel";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MovieSceneChannel";
        struct Offsets
        {
            static constexpr std::uintptr_t PreInfinityExtrap = 0x50;
            static constexpr std::uintptr_t PostInfinityExtrap = 0x51;
            static constexpr std::uintptr_t Times = 0x58;
            static constexpr std::uintptr_t Values = 0x68;
            static constexpr std::uintptr_t DefaultValue = 0x78;
            static constexpr std::uintptr_t bHasDefaultValue = 0x7C;
            static constexpr std::uintptr_t KeyHandles = 0x80;
            static constexpr std::uintptr_t TickResolution = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"PreInfinityExtrap", 0x50, "ByteProperty"},
            {"PostInfinityExtrap", 0x51, "ByteProperty"},
            {"Times", 0x58, "ArrayProperty"},
            {"Values", 0x68, "ArrayProperty"},
            {"DefaultValue", 0x78, "FloatProperty"},
            {"bHasDefaultValue", 0x7C, "BoolProperty"},
            {"KeyHandles", 0x80, "StructProperty"},
            {"TickResolution", 0xC8, "StructProperty"},
        }};
    };

    struct MovieSceneFloatValue
    {
        static constexpr std::string_view Name = "MovieSceneFloatValue";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x0;
            static constexpr std::uintptr_t Tangent = 0x4;
            static constexpr std::uintptr_t InterpMode = 0x18;
            static constexpr std::uintptr_t TangentMode = 0x19;
            static constexpr std::uintptr_t PaddingByte = 0x1A;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Value", 0x0, "FloatProperty"},
            {"Tangent", 0x4, "StructProperty"},
            {"InterpMode", 0x18, "ByteProperty"},
            {"TangentMode", 0x19, "ByteProperty"},
            {"PaddingByte", 0x1A, "ByteProperty"},
        }};
    };

    struct MovieSceneFolder
    {
        static constexpr std::string_view Name = "MovieSceneFolder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneDecorationContainerObject";
        struct Offsets
        {
            static constexpr std::uintptr_t FolderName = 0x8C;
            static constexpr std::uintptr_t ChildFolders = 0x90;
            static constexpr std::uintptr_t ChildTracks = 0xA0;
            static constexpr std::uintptr_t ChildObjectBindingStrings = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"FolderName", 0x8C, "NameProperty"},
            {"ChildFolders", 0x90, "ArrayProperty"},
            {"ChildTracks", 0xA0, "ArrayProperty"},
            {"ChildObjectBindingStrings", 0xB0, "ArrayProperty"},
        }};
    };

    struct MovieSceneFrameRange
    {
        static constexpr std::string_view Name = "MovieSceneFrameRange";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MovieSceneGenericBoundObjectInstantiator
    {
        static constexpr std::string_view Name = "MovieSceneGenericBoundObjectInstantiator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneEntityInstantiatorSystem";
        struct Offsets
        {
            static constexpr std::uintptr_t Linker = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Linker", 0x28, "ObjectProperty"},
        }};
    };

    struct MovieSceneGroupCondition
    {
        static constexpr std::string_view Name = "MovieSceneGroupCondition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneCondition";
        struct Offsets
        {
            static constexpr std::uintptr_t Operator = 0x60;
            static constexpr std::uintptr_t SubConditions = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Operator", 0x60, "EnumProperty"},
            {"SubConditions", 0x68, "ArrayProperty"},
        }};
    };

    struct MovieSceneHookSection
    {
        static constexpr std::string_view Name = "MovieSceneHookSection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneSection";
        struct Offsets
        {
            static constexpr std::uintptr_t bRequiresRangedHook = 0x150;
            static constexpr std::uintptr_t bRequiresTriggerHooks = 0x150;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bRequiresRangedHook", 0x150, "BoolProperty"},
            {"bRequiresTriggerHooks", 0x150, "BoolProperty"},
        }};
    };

    struct MovieSceneInitialValueSystem
    {
        static constexpr std::string_view Name = "MovieSceneInitialValueSystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneEntityInstantiatorSystem";
        struct Offsets
        {
            static constexpr std::uintptr_t Linker = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Linker", 0x28, "ObjectProperty"},
        }};
    };

    struct MovieSceneIntegerChannel
    {
        static constexpr std::string_view Name = "MovieSceneIntegerChannel";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MovieSceneChannel";
        struct Offsets
        {
            static constexpr std::uintptr_t PreInfinityExtrap = 0x50;
            static constexpr std::uintptr_t PostInfinityExtrap = 0x51;
            static constexpr std::uintptr_t bInterpolateLinearKeys = 0x52;
            static constexpr std::uintptr_t Times = 0x58;
            static constexpr std::uintptr_t DefaultValue = 0x68;
            static constexpr std::uintptr_t bHasDefaultValue = 0x6C;
            static constexpr std::uintptr_t Values = 0x70;
            static constexpr std::uintptr_t KeyHandles = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"PreInfinityExtrap", 0x50, "ByteProperty"},
            {"PostInfinityExtrap", 0x51, "ByteProperty"},
            {"bInterpolateLinearKeys", 0x52, "BoolProperty"},
            {"Times", 0x58, "ArrayProperty"},
            {"DefaultValue", 0x68, "IntProperty"},
            {"bHasDefaultValue", 0x6C, "BoolProperty"},
            {"Values", 0x70, "ArrayProperty"},
            {"KeyHandles", 0x80, "StructProperty"},
        }};
    };

    struct MovieSceneInverseNestedSequenceTransform
    {
        static constexpr std::string_view Name = "MovieSceneInverseNestedSequenceTransform";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t timescale = 0x0;
            static constexpr std::uintptr_t Offset = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"timescale", 0x0, "StructProperty"},
            {"Offset", 0x8, "StructProperty"},
        }};
    };

    struct MovieSceneInverseSequenceTransform
    {
        static constexpr std::string_view Name = "MovieSceneInverseSequenceTransform";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t LinearTransform = 0x0;
            static constexpr std::uintptr_t NestedTransforms = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"LinearTransform", 0x0, "StructProperty"},
            {"NestedTransforms", 0x10, "ArrayProperty"},
        }};
    };

    struct MovieSceneKeyHandleMap
    {
        static constexpr std::string_view Name = "MovieSceneKeyHandleMap";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "KeyHandleLookupTable";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MovieSceneKeyProxy
    {
        static constexpr std::string_view Name = "MovieSceneKeyProxy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MovieSceneKeyStruct
    {
        static constexpr std::string_view Name = "MovieSceneKeyStruct";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MovieSceneKeyTimeStruct
    {
        static constexpr std::string_view Name = "MovieSceneKeyTimeStruct";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MovieSceneKeyStruct";
        struct Offsets
        {
            static constexpr std::uintptr_t time = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"time", 0x8, "StructProperty"},
        }};
    };

    struct MovieSceneLanguagePreviewDecoration
    {
        static constexpr std::string_view Name = "MovieSceneLanguagePreviewDecoration";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t PreviewLanguage = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PreviewLanguage", 0x28, "StrProperty"},
        }};
    };

    struct MovieSceneLifetimeDecoration
    {
        static constexpr std::string_view Name = "MovieSceneLifetimeDecoration";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MovieSceneMarkedFrame
    {
        static constexpr std::string_view Name = "MovieSceneMarkedFrame";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t FrameNumber = 0x0;
            static constexpr std::uintptr_t Label = 0x8;
            static constexpr std::uintptr_t bIsDeterminismFence = 0x18;
            static constexpr std::uintptr_t bIsInclusiveTime = 0x19;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"FrameNumber", 0x0, "StructProperty"},
            {"Label", 0x8, "StrProperty"},
            {"bIsDeterminismFence", 0x18, "BoolProperty"},
            {"bIsInclusiveTime", 0x19, "BoolProperty"},
        }};
    };

    struct MovieSceneMetaData
    {
        static constexpr std::string_view Name = "MovieSceneMetaData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Author = 0x30;
            static constexpr std::uintptr_t Created = 0x40;
            static constexpr std::uintptr_t Notes = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Author", 0x30, "StrProperty"},
            {"Created", 0x40, "StructProperty"},
            {"Notes", 0x48, "StrProperty"},
        }};

        inline static constexpr std::array<std::string_view, 6> FunctionNames{{
            "GetAuthor",
            "GetCreated",
            "GetNotes",
            "SetAuthor",
            "SetCreated",
            "SetNotes",
        }};
    };

    struct MovieSceneMetaDataInterface
    {
        static constexpr std::string_view Name = "MovieSceneMetaDataInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MovieSceneMuteSoloDecoration
    {
        static constexpr std::string_view Name = "MovieSceneMuteSoloDecoration";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MovieSceneNameableTrack
    {
        static constexpr std::string_view Name = "MovieSceneNameableTrack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneTrack";
        struct Offsets
        {
            static constexpr std::uintptr_t EvalOptions = 0x90;
            static constexpr std::uintptr_t ParentTrack = 0x98;
            static constexpr std::uintptr_t ConditionContainer = 0xA0;
            static constexpr std::uintptr_t bAutoExpandToKeyframes = 0xA8;
            static constexpr std::uintptr_t bIsEvalDisabled = 0xAA;
            static constexpr std::uintptr_t RowsDisabled = 0xB0;
            static constexpr std::uintptr_t EvaluationFieldGuid = 0xC4;
            static constexpr std::uintptr_t EvaluationField = 0xD8;
            static constexpr std::uintptr_t TrackRowMetadata = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"EvalOptions", 0x90, "StructProperty"},
            {"ParentTrack", 0x98, "ObjectProperty"},
            {"ConditionContainer", 0xA0, "StructProperty"},
            {"bAutoExpandToKeyframes", 0xA8, "BoolProperty"},
            {"bIsEvalDisabled", 0xAA, "BoolProperty"},
            {"RowsDisabled", 0xB0, "ArrayProperty"},
            {"EvaluationFieldGuid", 0xC4, "StructProperty"},
            {"EvaluationField", 0xD8, "StructProperty"},
            {"TrackRowMetadata", 0xE8, "MapProperty"},
        }};
    };

    struct MovieSceneNestedSequenceTransform
    {
        static constexpr std::string_view Name = "MovieSceneNestedSequenceTransform";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t timescale = 0x0;
            static constexpr std::uintptr_t Offset = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"timescale", 0x0, "StructProperty"},
            {"Offset", 0x8, "StructProperty"},
        }};
    };

    struct MovieSceneNodeGroup
    {
        static constexpr std::string_view Name = "MovieSceneNodeGroup";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MovieSceneNodeGroupCollection
    {
        static constexpr std::string_view Name = "MovieSceneNodeGroupCollection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MovieSceneNumericVariant
    {
        static constexpr std::string_view Name = "MovieSceneNumericVariant";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MovieSceneNumericVariantGetter
    {
        static constexpr std::string_view Name = "MovieSceneNumericVariantGetter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneSignedObject";
        struct Offsets
        {
            static constexpr std::uintptr_t ReferenceToSelf = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ReferenceToSelf", 0x58, "ObjectProperty"},
        }};
    };

    struct MovieSceneObjectBindingID
    {
        static constexpr std::string_view Name = "MovieSceneObjectBindingID";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Guid = 0x0;
            static constexpr std::uintptr_t SequenceID = 0x10;
            static constexpr std::uintptr_t ResolveParentIndex = 0x14;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Guid", 0x0, "StructProperty"},
            {"SequenceID", 0x10, "IntProperty"},
            {"ResolveParentIndex", 0x14, "IntProperty"},
        }};
    };

    struct MovieSceneObjectBindingIDs
    {
        static constexpr std::string_view Name = "MovieSceneObjectBindingIDs";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t IDs = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"IDs", 0x0, "ArrayProperty"},
        }};
    };

    struct MovieSceneObjectPathChannel
    {
        static constexpr std::string_view Name = "MovieSceneObjectPathChannel";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MovieSceneChannel";
        struct Offsets
        {
            static constexpr std::uintptr_t PropertyClass = 0x50;
            static constexpr std::uintptr_t Times = 0x58;
            static constexpr std::uintptr_t Values = 0x68;
            static constexpr std::uintptr_t DefaultValue = 0x78;
            static constexpr std::uintptr_t KeyHandles = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"PropertyClass", 0x50, "ClassProperty"},
            {"Times", 0x58, "ArrayProperty"},
            {"Values", 0x68, "ArrayProperty"},
            {"DefaultValue", 0x78, "StructProperty"},
            {"KeyHandles", 0xA0, "StructProperty"},
        }};
    };

    struct MovieSceneObjectPathChannelKeyValue
    {
        static constexpr std::string_view Name = "MovieSceneObjectPathChannelKeyValue";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SoftPtr = 0x0;
            static constexpr std::uintptr_t HardPtr = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SoftPtr", 0x0, "SoftObjectProperty"},
            {"HardPtr", 0x20, "ObjectProperty"},
        }};
    };

    struct MovieSceneOrderedEvaluationKey
    {
        static constexpr std::string_view Name = "MovieSceneOrderedEvaluationKey";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Key = 0x0;
            static constexpr std::uintptr_t SetupIndex = 0xC;
            static constexpr std::uintptr_t TearDownIndex = 0xE;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Key", 0x0, "StructProperty"},
            {"SetupIndex", 0xC, "UInt16Property"},
            {"TearDownIndex", 0xE, "UInt16Property"},
        }};
    };

    struct MovieScenePlayRateCurve
    {
        static constexpr std::string_view Name = "MovieScenePlayRateCurve";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneTimeWarpGetter";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayRate = 0x70;
            static constexpr std::uintptr_t PlaybackStartFrame = 0x150;
            static constexpr std::uintptr_t AnchorMode = 0x154;
            static constexpr std::uintptr_t bManualPlaybackStart = 0x155;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"PlayRate", 0x70, "StructProperty"},
            {"PlaybackStartFrame", 0x150, "StructProperty"},
            {"AnchorMode", 0x154, "EnumProperty"},
            {"bManualPlaybackStart", 0x155, "BoolProperty"},
        }};
    };

    struct MovieScenePlaybackClient
    {
        static constexpr std::string_view Name = "MovieScenePlaybackClient";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MovieScenePossessable
    {
        static constexpr std::string_view Name = "MovieScenePossessable";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Tags = 0x0;
            static constexpr std::uintptr_t DynamicBinding = 0x10;
            static constexpr std::uintptr_t Guid = 0x38;
            static constexpr std::uintptr_t Name = 0x48;
            static constexpr std::uintptr_t ParentGuid = 0x58;
            static constexpr std::uintptr_t SpawnableObjectBindingID = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Tags", 0x0, "ArrayProperty"},
            {"DynamicBinding", 0x10, "StructProperty"},
            {"Guid", 0x38, "StructProperty"},
            {"Name", 0x48, "StrProperty"},
            {"ParentGuid", 0x58, "StructProperty"},
            {"SpawnableObjectBindingID", 0x68, "StructProperty"},
        }};
    };

    struct MovieScenePreAnimatedStateSystemInterface
    {
        static constexpr std::string_view Name = "MovieScenePreAnimatedStateSystemInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MovieScenePropertyBinding
    {
        static constexpr std::string_view Name = "MovieScenePropertyBinding";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t PropertyName = 0x0;
            static constexpr std::uintptr_t PropertyPath = 0x4;
            static constexpr std::uintptr_t bCanUseClassLookup = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"PropertyName", 0x0, "NameProperty"},
            {"PropertyPath", 0x4, "NameProperty"},
            {"bCanUseClassLookup", 0x8, "BoolProperty"},
        }};
    };

    struct MovieScenePropertySectionData
    {
        static constexpr std::string_view Name = "MovieScenePropertySectionData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t PropertyName = 0x0;
            static constexpr std::uintptr_t PropertyPath = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PropertyName", 0x0, "NameProperty"},
            {"PropertyPath", 0x8, "StrProperty"},
        }};
    };

    struct MovieScenePropertySectionTemplate
    {
        static constexpr std::string_view Name = "MovieScenePropertySectionTemplate";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MovieSceneEvalTemplate";
        struct Offsets
        {
            static constexpr std::uintptr_t PropertyData = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PropertyData", 0x20, "StructProperty"},
        }};
    };

    struct MovieSceneReplaceableBindingBase
    {
        static constexpr std::string_view Name = "MovieSceneReplaceableBindingBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneCustomBinding";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MovieSceneRestorePreAnimatedStateSystem
    {
        static constexpr std::string_view Name = "MovieSceneRestorePreAnimatedStateSystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneEntityInstantiatorSystem";
        struct Offsets
        {
            static constexpr std::uintptr_t Linker = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Linker", 0x28, "ObjectProperty"},
        }};
    };

    struct MovieSceneRootEvaluationTemplateInstance
    {
        static constexpr std::string_view Name = "MovieSceneRootEvaluationTemplateInstance";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t EntitySystemLinker = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"EntitySystemLinker", 0x0, "ObjectProperty"},
        }};
    };

    struct MovieSceneRootInstantiatorSystem
    {
        static constexpr std::string_view Name = "MovieSceneRootInstantiatorSystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneEntityInstantiatorSystem";
        struct Offsets
        {
            static constexpr std::uintptr_t Linker = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Linker", 0x28, "ObjectProperty"},
        }};
    };

    struct MovieSceneScalingAnchor
    {
        static constexpr std::string_view Name = "MovieSceneScalingAnchor";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Position = 0x0;
            static constexpr std::uintptr_t duration = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Position", 0x0, "StructProperty"},
            {"duration", 0x4, "IntProperty"},
        }};
    };

    struct MovieSceneScalingAnchors
    {
        static constexpr std::string_view Name = "MovieSceneScalingAnchors";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieScenePlayRateCurve";
        struct Offsets
        {
            static constexpr std::uintptr_t ScalingDrivers = 0x180;
            static constexpr std::uintptr_t InitialAnchors = 0x190;
            static constexpr std::uintptr_t ScalingGroups = 0x1A0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ScalingDrivers", 0x180, "ArrayProperty"},
            {"InitialAnchors", 0x190, "MapProperty"},
            {"ScalingGroups", 0x1A0, "MapProperty"},
        }};
    };

    struct MovieSceneScalingDriver
    {
        static constexpr std::string_view Name = "MovieSceneScalingDriver";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MovieSceneSection
    {
        static constexpr std::string_view Name = "MovieSceneSection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneDecorationContainerObject";
        struct Offsets
        {
            static constexpr std::uintptr_t EvalOptions = 0x88;
            static constexpr std::uintptr_t Easing = 0x90;
            static constexpr std::uintptr_t SectionRange = 0xC8;
            static constexpr std::uintptr_t TimecodeSource = 0xD8;
            static constexpr std::uintptr_t ConditionContainer = 0xF0;
            static constexpr std::uintptr_t PreRollFrames = 0xF8;
            static constexpr std::uintptr_t PostRollFrames = 0xFC;
            static constexpr std::uintptr_t RowIndex = 0x100;
            static constexpr std::uintptr_t OverlapPriority = 0x104;
            static constexpr std::uintptr_t bIsActive = 0x108;
            static constexpr std::uintptr_t bIsLocked = 0x108;
            static constexpr std::uintptr_t StartTime = 0x10C;
            static constexpr std::uintptr_t EndTime = 0x110;
            static constexpr std::uintptr_t PreRollTime = 0x114;
            static constexpr std::uintptr_t PostRollTime = 0x118;
            static constexpr std::uintptr_t bIsInfinite = 0x11C;
            static constexpr std::uintptr_t bSupportsInfiniteRange = 0x120;
            static constexpr std::uintptr_t BlendType = 0x121;
        };

        inline static constexpr std::array<PropertyInfo, 18> Properties{{
            {"EvalOptions", 0x88, "StructProperty"},
            {"Easing", 0x90, "StructProperty"},
            {"SectionRange", 0xC8, "StructProperty"},
            {"TimecodeSource", 0xD8, "StructProperty"},
            {"ConditionContainer", 0xF0, "StructProperty"},
            {"PreRollFrames", 0xF8, "StructProperty"},
            {"PostRollFrames", 0xFC, "StructProperty"},
            {"RowIndex", 0x100, "IntProperty"},
            {"OverlapPriority", 0x104, "IntProperty"},
            {"bIsActive", 0x108, "BoolProperty"},
            {"bIsLocked", 0x108, "BoolProperty"},
            {"StartTime", 0x10C, "FloatProperty"},
            {"EndTime", 0x110, "FloatProperty"},
            {"PreRollTime", 0x114, "FloatProperty"},
            {"PostRollTime", 0x118, "FloatProperty"},
            {"bIsInfinite", 0x11C, "BoolProperty"},
            {"bSupportsInfiniteRange", 0x120, "BoolProperty"},
            {"BlendType", 0x121, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 18> FunctionNames{{
            "GetBlendType",
            "GetColorTint",
            "GetCompletionMode",
            "GetOverlapPriority",
            "GetPostRollFrames",
            "GetPreRollFrames",
            "GetRowIndex",
            "IsActive",
            "IsLocked",
            "SetBlendType",
            "SetColorTint",
            "SetCompletionMode",
            "SetIsActive",
            "SetIsLocked",
            "SetOverlapPriority",
            "SetPostRollFrames",
            "SetPreRollFrames",
            "SetRowIndex",
        }};
    };

    struct MovieSceneSectionAnchorsDecoration
    {
        static constexpr std::string_view Name = "MovieSceneSectionAnchorsDecoration";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t StartAnchor = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"StartAnchor", 0x40, "StructProperty"},
        }};
    };

    struct MovieSceneSectionChannelOverrideRegistry
    {
        static constexpr std::string_view Name = "MovieSceneSectionChannelOverrideRegistry";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Overrides = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Overrides", 0x28, "MapProperty"},
        }};
    };

    struct MovieSceneSectionDecoration
    {
        static constexpr std::string_view Name = "MovieSceneSectionDecoration";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MovieSceneSectionEvalOptions
    {
        static constexpr std::string_view Name = "MovieSceneSectionEvalOptions";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bCanEditCompletionMode = 0x0;
            static constexpr std::uintptr_t CompletionMode = 0x1;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bCanEditCompletionMode", 0x0, "BoolProperty"},
            {"CompletionMode", 0x1, "EnumProperty"},
        }};
    };

    struct MovieSceneSectionGroup
    {
        static constexpr std::string_view Name = "MovieSceneSectionGroup";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Sections = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Sections", 0x0, "ArrayProperty"},
        }};
    };

    struct MovieSceneSectionParameters
    {
        static constexpr std::string_view Name = "MovieSceneSectionParameters";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t StartFrameOffset = 0x0;
            static constexpr std::uintptr_t bCanLoop = 0x4;
            static constexpr std::uintptr_t EndFrameOffset = 0x8;
            static constexpr std::uintptr_t FirstLoopStartFrameOffset = 0xC;
            static constexpr std::uintptr_t timescale = 0x10;
            static constexpr std::uintptr_t HierarchicalBias = 0x18;
            static constexpr std::uintptr_t Flags = 0x1C;
            static constexpr std::uintptr_t StartOffset = 0x20;
            static constexpr std::uintptr_t PreRollTime = 0x24;
            static constexpr std::uintptr_t PostRollTime = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"StartFrameOffset", 0x0, "StructProperty"},
            {"bCanLoop", 0x4, "BoolProperty"},
            {"EndFrameOffset", 0x8, "StructProperty"},
            {"FirstLoopStartFrameOffset", 0xC, "StructProperty"},
            {"timescale", 0x10, "StructProperty"},
            {"HierarchicalBias", 0x18, "IntProperty"},
            {"Flags", 0x1C, "EnumProperty"},
            {"StartOffset", 0x20, "FloatProperty"},
            {"PreRollTime", 0x24, "FloatProperty"},
            {"PostRollTime", 0x28, "FloatProperty"},
        }};
    };

    struct MovieSceneSectionProviderDecoration
    {
        static constexpr std::string_view Name = "MovieSceneSectionProviderDecoration";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MovieSceneSectionTimingParametersFrames
    {
        static constexpr std::string_view Name = "MovieSceneSectionTimingParametersFrames";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayRate = 0x0;
            static constexpr std::uintptr_t InnerStartOffset = 0x8;
            static constexpr std::uintptr_t InnerEndOffset = 0xC;
            static constexpr std::uintptr_t FirstLoopStartOffset = 0x10;
            static constexpr std::uintptr_t bClampToInnerRange = 0x14;
            static constexpr std::uintptr_t bClampToOuterRange = 0x14;
            static constexpr std::uintptr_t bLoop = 0x14;
            static constexpr std::uintptr_t bReverse = 0x14;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"PlayRate", 0x0, "StructProperty"},
            {"InnerStartOffset", 0x8, "StructProperty"},
            {"InnerEndOffset", 0xC, "StructProperty"},
            {"FirstLoopStartOffset", 0x10, "StructProperty"},
            {"bClampToInnerRange", 0x14, "BoolProperty"},
            {"bClampToOuterRange", 0x14, "BoolProperty"},
            {"bLoop", 0x14, "BoolProperty"},
            {"bReverse", 0x14, "BoolProperty"},
        }};
    };

    struct MovieSceneSectionTimingParametersSeconds
    {
        static constexpr std::string_view Name = "MovieSceneSectionTimingParametersSeconds";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayRate = 0x0;
            static constexpr std::uintptr_t InnerStartOffset = 0x8;
            static constexpr std::uintptr_t InnerEndOffset = 0xC;
            static constexpr std::uintptr_t FirstLoopStartOffset = 0x10;
            static constexpr std::uintptr_t bClampToInnerRange = 0x14;
            static constexpr std::uintptr_t bClampToOuterRange = 0x14;
            static constexpr std::uintptr_t bLoop = 0x14;
            static constexpr std::uintptr_t bReverse = 0x14;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"PlayRate", 0x0, "StructProperty"},
            {"InnerStartOffset", 0x8, "FloatProperty"},
            {"InnerEndOffset", 0xC, "FloatProperty"},
            {"FirstLoopStartOffset", 0x10, "FloatProperty"},
            {"bClampToInnerRange", 0x14, "BoolProperty"},
            {"bClampToOuterRange", 0x14, "BoolProperty"},
            {"bLoop", 0x14, "BoolProperty"},
            {"bReverse", 0x14, "BoolProperty"},
        }};
    };

    struct MovieSceneSegment
    {
        static constexpr std::string_view Name = "MovieSceneSegment";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MovieSceneSegmentIdentifier
    {
        static constexpr std::string_view Name = "MovieSceneSegmentIdentifier";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t IdentifierIndex = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"IdentifierIndex", 0x0, "IntProperty"},
        }};
    };

    struct MovieSceneSequence
    {
        static constexpr std::string_view Name = "MovieSceneSequence";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneSignedObject";
        struct Offsets
        {
            static constexpr std::uintptr_t CompiledData = 0x58;
            static constexpr std::uintptr_t DefaultCompletionMode = 0x60;
            static constexpr std::uintptr_t bParentContextsAreSignificant = 0x61;
            static constexpr std::uintptr_t bPlayableDirectly = 0x62;
            static constexpr std::uintptr_t SequenceFlags = 0x63;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"CompiledData", 0x58, "ObjectProperty"},
            {"DefaultCompletionMode", 0x60, "EnumProperty"},
            {"bParentContextsAreSignificant", 0x61, "BoolProperty"},
            {"bPlayableDirectly", 0x62, "BoolProperty"},
            {"SequenceFlags", 0x63, "EnumProperty"},
        }};

        inline static constexpr std::array<std::string_view, 3> FunctionNames{{
            "FindBindingByTag",
            "FindBindingsByTag",
            "GetEarliestTimecodeSource",
        }};
    };

    struct MovieSceneSequenceHierarchy
    {
        static constexpr std::string_view Name = "MovieSceneSequenceHierarchy";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t RootNode = 0x0;
            static constexpr std::uintptr_t Tree = 0x18;
            static constexpr std::uintptr_t RootTransform = 0x78;
            static constexpr std::uintptr_t SubSequences = 0x98;
            static constexpr std::uintptr_t Hierarchy = 0xA8;
            static constexpr std::uintptr_t AccumulatedNetworkMask = 0xB8;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"RootNode", 0x0, "StructProperty"},
            {"Tree", 0x18, "StructProperty"},
            {"RootTransform", 0x78, "StructProperty"},
            {"SubSequences", 0x98, "MapProperty"},
            {"Hierarchy", 0xA8, "MapProperty"},
            {"AccumulatedNetworkMask", 0xB8, "EnumProperty"},
        }};
    };

    struct MovieSceneSequenceHierarchyNode
    {
        static constexpr std::string_view Name = "MovieSceneSequenceHierarchyNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ParentId = 0x0;
            static constexpr std::uintptr_t Children = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ParentId", 0x0, "StructProperty"},
            {"Children", 0x8, "ArrayProperty"},
        }};
    };

    struct MovieSceneSequenceID
    {
        static constexpr std::string_view Name = "MovieSceneSequenceID";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x0, "UInt32Property"},
        }};
    };

    struct MovieSceneSequenceInstanceData
    {
        static constexpr std::string_view Name = "MovieSceneSequenceInstanceData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MovieSceneSequenceInstanceDataPtr
    {
        static constexpr std::string_view Name = "MovieSceneSequenceInstanceDataPtr";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MovieSceneSequenceLoopCount
    {
        static constexpr std::string_view Name = "MovieSceneSequenceLoopCount";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x0, "IntProperty"},
        }};
    };

    struct MovieSceneSequencePlayToParams
    {
        static constexpr std::string_view Name = "MovieSceneSequencePlayToParams";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bExclusive = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bExclusive", 0x0, "BoolProperty"},
        }};
    };

    struct MovieSceneSequencePlaybackParams
    {
        static constexpr std::string_view Name = "MovieSceneSequencePlaybackParams";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Frame = 0x0;
            static constexpr std::uintptr_t time = 0x8;
            static constexpr std::uintptr_t MarkedFrame = 0x10;
            static constexpr std::uintptr_t Timecode = 0x20;
            static constexpr std::uintptr_t PositionType = 0x38;
            static constexpr std::uintptr_t UpdateMethod = 0x39;
            static constexpr std::uintptr_t bHasJumped = 0x3A;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Frame", 0x0, "StructProperty"},
            {"time", 0x8, "FloatProperty"},
            {"MarkedFrame", 0x10, "StrProperty"},
            {"Timecode", 0x20, "StructProperty"},
            {"PositionType", 0x38, "EnumProperty"},
            {"UpdateMethod", 0x39, "EnumProperty"},
            {"bHasJumped", 0x3A, "BoolProperty"},
        }};
    };

    struct MovieSceneSequencePlaybackSettings
    {
        static constexpr std::string_view Name = "MovieSceneSequencePlaybackSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bAutoPlay = 0x0;
            static constexpr std::uintptr_t LoopCount = 0x4;
            static constexpr std::uintptr_t TickInterval = 0x8;
            static constexpr std::uintptr_t PlayRate = 0x14;
            static constexpr std::uintptr_t StartTime = 0x18;
            static constexpr std::uintptr_t bDisableCameraCuts = 0x1C;
            static constexpr std::uintptr_t bDisableLookAtInput = 0x1C;
            static constexpr std::uintptr_t bDisableMovementInput = 0x1C;
            static constexpr std::uintptr_t bHideHUD = 0x1C;
            static constexpr std::uintptr_t bHidePlayer = 0x1C;
            static constexpr std::uintptr_t bRandomStartTime = 0x1C;
            static constexpr std::uintptr_t FinishCompletionStateOverride = 0x20;
            static constexpr std::uintptr_t bDynamicWeighting = 0x24;
            static constexpr std::uintptr_t bInheritTickIntervalFromOwner = 0x24;
            static constexpr std::uintptr_t bPauseAtEnd = 0x24;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"bAutoPlay", 0x0, "BoolProperty"},
            {"LoopCount", 0x4, "StructProperty"},
            {"TickInterval", 0x8, "StructProperty"},
            {"PlayRate", 0x14, "FloatProperty"},
            {"StartTime", 0x18, "FloatProperty"},
            {"bDisableCameraCuts", 0x1C, "BoolProperty"},
            {"bDisableLookAtInput", 0x1C, "BoolProperty"},
            {"bDisableMovementInput", 0x1C, "BoolProperty"},
            {"bHideHUD", 0x1C, "BoolProperty"},
            {"bHidePlayer", 0x1C, "BoolProperty"},
            {"bRandomStartTime", 0x1C, "BoolProperty"},
            {"FinishCompletionStateOverride", 0x20, "EnumProperty"},
            {"bDynamicWeighting", 0x24, "BoolProperty"},
            {"bInheritTickIntervalFromOwner", 0x24, "BoolProperty"},
            {"bPauseAtEnd", 0x24, "BoolProperty"},
        }};
    };

    struct MovieSceneSequencePlayer
    {
        static constexpr std::string_view Name = "MovieSceneSequencePlayer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Observer = 0xD8;
            static constexpr std::uintptr_t OnPlay = 0xE8;
            static constexpr std::uintptr_t OnPlayReverse = 0xF8;
            static constexpr std::uintptr_t OnStop = 0x108;
            static constexpr std::uintptr_t OnPause = 0x118;
            static constexpr std::uintptr_t OnFinished = 0x128;
            static constexpr std::uintptr_t Status = 0x148;
            static constexpr std::uintptr_t bReversePlayback = 0x14C;
            static constexpr std::uintptr_t Sequence = 0x158;
            static constexpr std::uintptr_t StartTime = 0x160;
            static constexpr std::uintptr_t DurationFrames = 0x164;
            static constexpr std::uintptr_t DurationSubFrames = 0x168;
            static constexpr std::uintptr_t CurrentNumLoops = 0x16C;
            static constexpr std::uintptr_t SerialNumber = 0x170;
            static constexpr std::uintptr_t PlaybackSettings = 0x174;
            static constexpr std::uintptr_t RootTemplateInstance = 0x1C8;
            static constexpr std::uintptr_t NetSyncProps = 0x274;
            static constexpr std::uintptr_t PlaybackClient = 0x288;
            static constexpr std::uintptr_t TickManager = 0x298;
        };

        inline static constexpr std::array<PropertyInfo, 19> Properties{{
            {"Observer", 0xD8, "InterfaceProperty"},
            {"OnPlay", 0xE8, "MulticastInlineDelegateProperty"},
            {"OnPlayReverse", 0xF8, "MulticastInlineDelegateProperty"},
            {"OnStop", 0x108, "MulticastInlineDelegateProperty"},
            {"OnPause", 0x118, "MulticastInlineDelegateProperty"},
            {"OnFinished", 0x128, "MulticastInlineDelegateProperty"},
            {"Status", 0x148, "ByteProperty"},
            {"bReversePlayback", 0x14C, "BoolProperty"},
            {"Sequence", 0x158, "ObjectProperty"},
            {"StartTime", 0x160, "StructProperty"},
            {"DurationFrames", 0x164, "IntProperty"},
            {"DurationSubFrames", 0x168, "FloatProperty"},
            {"CurrentNumLoops", 0x16C, "IntProperty"},
            {"SerialNumber", 0x170, "IntProperty"},
            {"PlaybackSettings", 0x174, "StructProperty"},
            {"RootTemplateInstance", 0x1C8, "StructProperty"},
            {"NetSyncProps", 0x274, "StructProperty"},
            {"PlaybackClient", 0x288, "InterfaceProperty"},
            {"TickManager", 0x298, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 42> FunctionNames{{
            "ChangePlaybackDirection",
            "GetBoundObjects",
            "GetCompletionModeOverride",
            "GetCurrentTime",
            "GetDisableCameraCuts",
            "GetDuration",
            "GetEndTime",
            "GetFrameDuration",
            "GetFrameRate",
            "GetHideHud",
            "GetObjectBindings",
            "GetPlayRate",
            "GetSequence",
            "GetSequenceName",
            "GetStartTime",
            "GoToEndAndStop",
            "IsPaused",
            "IsPlaying",
            "IsReversed",
            "Pause",
            "Play",
            "PlayLooping",
            "PlayReverse",
            "PlayTo",
            "RPC_ExplicitServerUpdateEvent",
            "RPC_OnFinishPlaybackEvent",
            "RPC_OnStopEvent",
            "RemoveWeight",
            "RequestInvalidateBinding",
            "RestoreState",
            "Scrub",
            "SetCompletionModeOverride",
            "SetDisableCameraCuts",
            "SetFrameRange",
            "SetFrameRate",
            "SetHideHud",
            "SetPlayRate",
            "SetPlaybackPosition",
            "SetTimeRange",
            "SetWeight",
            "Stop",
            "StopAtCurrentTime",
        }};
    };

    struct MovieSceneSequencePlayerObserver
    {
        static constexpr std::string_view Name = "MovieSceneSequencePlayerObserver";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MovieSceneSequenceReplProperties
    {
        static constexpr std::string_view Name = "MovieSceneSequenceReplProperties";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t LastKnownPosition = 0x0;
            static constexpr std::uintptr_t LastKnownStatus = 0x8;
            static constexpr std::uintptr_t LastKnownNumLoops = 0xC;
            static constexpr std::uintptr_t LastKnownSerialNumber = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"LastKnownPosition", 0x0, "StructProperty"},
            {"LastKnownStatus", 0x8, "ByteProperty"},
            {"LastKnownNumLoops", 0xC, "IntProperty"},
            {"LastKnownSerialNumber", 0x10, "IntProperty"},
        }};
    };

    struct MovieSceneSequenceTickInterval
    {
        static constexpr std::string_view Name = "MovieSceneSequenceTickInterval";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t TickIntervalSeconds = 0x0;
            static constexpr std::uintptr_t EvaluationBudgetMicroseconds = 0x4;
            static constexpr std::uintptr_t bTickWhenPaused = 0x8;
            static constexpr std::uintptr_t bAllowRounding = 0x9;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"TickIntervalSeconds", 0x0, "FloatProperty"},
            {"EvaluationBudgetMicroseconds", 0x4, "FloatProperty"},
            {"bTickWhenPaused", 0x8, "BoolProperty"},
            {"bAllowRounding", 0x9, "BoolProperty"},
        }};
    };

    struct MovieSceneSequenceTickManager
    {
        static constexpr std::string_view Name = "MovieSceneSequenceTickManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MovieSceneSequenceTickManagerClient
    {
        static constexpr std::string_view Name = "MovieSceneSequenceTickManagerClient";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MovieSceneSequenceTransform
    {
        static constexpr std::string_view Name = "MovieSceneSequenceTransform";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t LinearTransform = 0x0;
            static constexpr std::uintptr_t NestedTransforms = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"LinearTransform", 0x0, "StructProperty"},
            {"NestedTransforms", 0x10, "ArrayProperty"},
        }};
    };

    struct MovieSceneShotMetaData
    {
        static constexpr std::string_view Name = "MovieSceneShotMetaData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsNoGood = 0x30;
            static constexpr std::uintptr_t bIsFlagged = 0x32;
            static constexpr std::uintptr_t bIsRecorded = 0x34;
            static constexpr std::uintptr_t bIsSubSequence = 0x36;
            static constexpr std::uintptr_t FavoriteRating = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"bIsNoGood", 0x30, "OptionalProperty"},
            {"bIsFlagged", 0x32, "OptionalProperty"},
            {"bIsRecorded", 0x34, "OptionalProperty"},
            {"bIsSubSequence", 0x36, "OptionalProperty"},
            {"FavoriteRating", 0x38, "OptionalProperty"},
        }};
    };

    struct MovieSceneSignedObject
    {
        static constexpr std::string_view Name = "MovieSceneSignedObject";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Signature = 0x2C;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Signature", 0x2C, "StructProperty"},
        }};
    };

    struct MovieSceneSpawnSection
    {
        static constexpr std::string_view Name = "MovieSceneSpawnSection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneBoolSection";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultValue = 0x140;
            static constexpr std::uintptr_t BoolCurve = 0x148;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DefaultValue", 0x140, "BoolProperty"},
            {"BoolCurve", 0x148, "StructProperty"},
        }};
    };

    struct MovieSceneSpawnTrack
    {
        static constexpr std::string_view Name = "MovieSceneSpawnTrack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneTrack";
        struct Offsets
        {
            static constexpr std::uintptr_t Sections = 0xF8;
            static constexpr std::uintptr_t ObjectGuid = 0x108;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Sections", 0xF8, "ArrayProperty"},
            {"ObjectGuid", 0x108, "StructProperty"},
        }};
    };

    struct MovieSceneSpawnable
    {
        static constexpr std::string_view Name = "MovieSceneSpawnable";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SpawnTransform = 0x0;
            static constexpr std::uintptr_t Tags = 0x60;
            static constexpr std::uintptr_t bContinuouslyRespawn = 0x70;
            static constexpr std::uintptr_t bNetAddressableName = 0x71;
            static constexpr std::uintptr_t DynamicBinding = 0x78;
            static constexpr std::uintptr_t Guid = 0xA0;
            static constexpr std::uintptr_t Name = 0xB0;
            static constexpr std::uintptr_t ObjectTemplate = 0xC0;
            static constexpr std::uintptr_t ChildPossessables = 0xC8;
            static constexpr std::uintptr_t Ownership = 0xD8;
            static constexpr std::uintptr_t LevelName = 0xDC;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"SpawnTransform", 0x0, "StructProperty"},
            {"Tags", 0x60, "ArrayProperty"},
            {"bContinuouslyRespawn", 0x70, "BoolProperty"},
            {"bNetAddressableName", 0x71, "BoolProperty"},
            {"DynamicBinding", 0x78, "StructProperty"},
            {"Guid", 0xA0, "StructProperty"},
            {"Name", 0xB0, "StrProperty"},
            {"ObjectTemplate", 0xC0, "ObjectProperty"},
            {"ChildPossessables", 0xC8, "ArrayProperty"},
            {"Ownership", 0xD8, "EnumProperty"},
            {"LevelName", 0xDC, "NameProperty"},
        }};
    };

    struct MovieSceneSpawnableBindingBase
    {
        static constexpr std::string_view Name = "MovieSceneSpawnableBindingBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneCustomBinding";
        struct Offsets
        {
            static constexpr std::uintptr_t SpawnOwnership = 0x28;
            static constexpr std::uintptr_t bContinuouslyRespawn = 0x29;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SpawnOwnership", 0x28, "EnumProperty"},
            {"bContinuouslyRespawn", 0x29, "BoolProperty"},
        }};
    };

    struct MovieSceneSpawnablesSystem
    {
        static constexpr std::string_view Name = "MovieSceneSpawnablesSystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneEntitySystem";
        struct Offsets
        {
            static constexpr std::uintptr_t Linker = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Linker", 0x28, "ObjectProperty"},
        }};
    };

    struct MovieSceneSubSection
    {
        static constexpr std::string_view Name = "MovieSceneSubSection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneSection";
        struct Offsets
        {
            static constexpr std::uintptr_t Parameters = 0x148;
            static constexpr std::uintptr_t StartOffset = 0x178;
            static constexpr std::uintptr_t timescale = 0x17C;
            static constexpr std::uintptr_t PreRollTime = 0x180;
            static constexpr std::uintptr_t NetworkMask = 0x184;
            static constexpr std::uintptr_t OriginOverrideMask = 0x188;
            static constexpr std::uintptr_t Translation = 0x190;
            static constexpr std::uintptr_t Rotation = 0x418;
            static constexpr std::uintptr_t SubSequence = 0x6A0;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"Parameters", 0x148, "StructProperty"},
            {"StartOffset", 0x178, "FloatProperty"},
            {"timescale", 0x17C, "FloatProperty"},
            {"PreRollTime", 0x180, "FloatProperty"},
            {"NetworkMask", 0x184, "ByteProperty"},
            {"OriginOverrideMask", 0x188, "StructProperty"},
            {"Translation", 0x190, "StructProperty"},
            {"Rotation", 0x418, "StructProperty"},
            {"SubSequence", 0x6A0, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "GetSequence",
            "SetSequence",
        }};
    };

    struct MovieSceneSubSectionData
    {
        static constexpr std::string_view Name = "MovieSceneSubSectionData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Section = 0x0;
            static constexpr std::uintptr_t ObjectBindingID = 0x8;
            static constexpr std::uintptr_t Flags = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Section", 0x0, "WeakObjectProperty"},
            {"ObjectBindingID", 0x8, "StructProperty"},
            {"Flags", 0x18, "EnumProperty"},
        }};
    };

    struct MovieSceneSubSectionOriginOverrideMask
    {
        static constexpr std::string_view Name = "MovieSceneSubSectionOriginOverrideMask";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Mask = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Mask", 0x0, "UInt32Property"},
        }};
    };

    struct MovieSceneSubSequenceData
    {
        static constexpr std::string_view Name = "MovieSceneSubSequenceData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Sequence = 0x0;
            static constexpr std::uintptr_t OuterToInnerTransform = 0x18;
            static constexpr std::uintptr_t RootToSequenceTransform = 0x38;
            static constexpr std::uintptr_t TickResolution = 0x58;
            static constexpr std::uintptr_t DeterministicSequenceID = 0x60;
            static constexpr std::uintptr_t PlayRange = 0x64;
            static constexpr std::uintptr_t ParentPlayRange = 0x74;
            static constexpr std::uintptr_t PreRollRange = 0x84;
            static constexpr std::uintptr_t PostRollRange = 0x94;
            static constexpr std::uintptr_t HierarchicalBias = 0xA4;
            static constexpr std::uintptr_t AccumulatedFlags = 0xA6;
            static constexpr std::uintptr_t bCanLoop = 0xA7;
            static constexpr std::uintptr_t InstanceData = 0xA8;
            static constexpr std::uintptr_t SectionPath = 0xC0;
            static constexpr std::uintptr_t WeakCondition = 0xC8;
            static constexpr std::uintptr_t SubSectionSignature = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 16> Properties{{
            {"Sequence", 0x0, "StructProperty"},
            {"OuterToInnerTransform", 0x18, "StructProperty"},
            {"RootToSequenceTransform", 0x38, "StructProperty"},
            {"TickResolution", 0x58, "StructProperty"},
            {"DeterministicSequenceID", 0x60, "StructProperty"},
            {"PlayRange", 0x64, "StructProperty"},
            {"ParentPlayRange", 0x74, "StructProperty"},
            {"PreRollRange", 0x84, "StructProperty"},
            {"PostRollRange", 0x94, "StructProperty"},
            {"HierarchicalBias", 0xA4, "Int16Property"},
            {"AccumulatedFlags", 0xA6, "EnumProperty"},
            {"bCanLoop", 0xA7, "BoolProperty"},
            {"InstanceData", 0xA8, "StructProperty"},
            {"SectionPath", 0xC0, "NameProperty"},
            {"WeakCondition", 0xC8, "SoftObjectProperty"},
            {"SubSectionSignature", 0xF0, "StructProperty"},
        }};
    };

    struct MovieSceneSubSequenceTree
    {
        static constexpr std::string_view Name = "MovieSceneSubSequenceTree";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MovieSceneSubSequenceTreeEntry
    {
        static constexpr std::string_view Name = "MovieSceneSubSequenceTreeEntry";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MovieSceneSubTrack
    {
        static constexpr std::string_view Name = "MovieSceneSubTrack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneNameableTrack";
        struct Offsets
        {
            static constexpr std::uintptr_t Sections = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Sections", 0xF8, "ArrayProperty"},
        }};
    };

    struct MovieSceneTangentData
    {
        static constexpr std::string_view Name = "MovieSceneTangentData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ArriveTangent = 0x0;
            static constexpr std::uintptr_t LeaveTangent = 0x4;
            static constexpr std::uintptr_t ArriveTangentWeight = 0x8;
            static constexpr std::uintptr_t LeaveTangentWeight = 0xC;
            static constexpr std::uintptr_t TangentWeightMode = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"ArriveTangent", 0x0, "FloatProperty"},
            {"LeaveTangent", 0x4, "FloatProperty"},
            {"ArriveTangentWeight", 0x8, "FloatProperty"},
            {"LeaveTangentWeight", 0xC, "FloatProperty"},
            {"TangentWeightMode", 0x10, "ByteProperty"},
        }};
    };

    struct MovieSceneTemplateGenerationLedger
    {
        static constexpr std::string_view Name = "MovieSceneTemplateGenerationLedger";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t LastTrackIdentifier = 0x0;
            static constexpr std::uintptr_t TrackSignatureToTrackIdentifier = 0x8;
            static constexpr std::uintptr_t SubSectionRanges = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"LastTrackIdentifier", 0x0, "StructProperty"},
            {"TrackSignatureToTrackIdentifier", 0x8, "MapProperty"},
            {"SubSectionRanges", 0x18, "MapProperty"},
        }};
    };

    struct MovieSceneTimeTransform
    {
        static constexpr std::string_view Name = "MovieSceneTimeTransform";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t timescale = 0x0;
            static constexpr std::uintptr_t Offset = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"timescale", 0x0, "FloatProperty"},
            {"Offset", 0x4, "StructProperty"},
        }};
    };

    struct MovieSceneTimeWarpChannel
    {
        static constexpr std::string_view Name = "MovieSceneTimeWarpChannel";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MovieSceneDoubleChannel";
        struct Offsets
        {
            static constexpr std::uintptr_t PreInfinityExtrap = 0x50;
            static constexpr std::uintptr_t PostInfinityExtrap = 0x51;
            static constexpr std::uintptr_t Times = 0x58;
            static constexpr std::uintptr_t Values = 0x68;
            static constexpr std::uintptr_t DefaultValue = 0x78;
            static constexpr std::uintptr_t bHasDefaultValue = 0x80;
            static constexpr std::uintptr_t KeyHandles = 0x88;
            static constexpr std::uintptr_t TickResolution = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"PreInfinityExtrap", 0x50, "ByteProperty"},
            {"PostInfinityExtrap", 0x51, "ByteProperty"},
            {"Times", 0x58, "ArrayProperty"},
            {"Values", 0x68, "ArrayProperty"},
            {"DefaultValue", 0x78, "DoubleProperty"},
            {"bHasDefaultValue", 0x80, "BoolProperty"},
            {"KeyHandles", 0x88, "StructProperty"},
            {"TickResolution", 0xD0, "StructProperty"},
        }};
    };

    struct MovieSceneTimeWarpClamp
    {
        static constexpr std::string_view Name = "MovieSceneTimeWarpClamp";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t max = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"max", 0x0, "StructProperty"},
        }};
    };

    struct MovieSceneTimeWarpClampFloat
    {
        static constexpr std::string_view Name = "MovieSceneTimeWarpClampFloat";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t max = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"max", 0x0, "FloatProperty"},
        }};
    };

    struct MovieSceneTimeWarpCurve
    {
        static constexpr std::string_view Name = "MovieSceneTimeWarpCurve";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneTimeWarpGetter";
        struct Offsets
        {
            static constexpr std::uintptr_t Channel = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Channel", 0x70, "StructProperty"},
        }};
    };

    struct MovieSceneTimeWarpDecoration
    {
        static constexpr std::string_view Name = "MovieSceneTimeWarpDecoration";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Sources = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Sources", 0x30, "ArrayProperty"},
        }};
    };

    struct MovieSceneTimeWarpFixedFrame
    {
        static constexpr std::string_view Name = "MovieSceneTimeWarpFixedFrame";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t FrameNumber = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"FrameNumber", 0x0, "StructProperty"},
        }};
    };

    struct MovieSceneTimeWarpFrameRate
    {
        static constexpr std::string_view Name = "MovieSceneTimeWarpFrameRate";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t FrameRateNumerator = 0x0;
            static constexpr std::uintptr_t FrameRateDenominator = 0x3;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"FrameRateNumerator", 0x0, "ByteProperty"},
            {"FrameRateDenominator", 0x3, "ByteProperty"},
        }};
    };

    struct MovieSceneTimeWarpGetter
    {
        static constexpr std::string_view Name = "MovieSceneTimeWarpGetter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneNumericVariantGetter";
        struct Offsets
        {
            static constexpr std::uintptr_t bMuted = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bMuted", 0x68, "BoolProperty"},
        }};
    };

    struct MovieSceneTimeWarpLoop
    {
        static constexpr std::string_view Name = "MovieSceneTimeWarpLoop";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t duration = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"duration", 0x0, "StructProperty"},
        }};
    };

    struct MovieSceneTimeWarpLoopFloat
    {
        static constexpr std::string_view Name = "MovieSceneTimeWarpLoopFloat";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t duration = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"duration", 0x0, "FloatProperty"},
        }};
    };

    struct MovieSceneTimeWarpSection
    {
        static constexpr std::string_view Name = "MovieSceneTimeWarpSection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneSection";
        struct Offsets
        {
            static constexpr std::uintptr_t TimeWarp = 0x140;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TimeWarp", 0x140, "StructProperty"},
        }};
    };

    struct MovieSceneTimeWarpSource
    {
        static constexpr std::string_view Name = "MovieSceneTimeWarpSource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MovieSceneTimeWarpTrack
    {
        static constexpr std::string_view Name = "MovieSceneTimeWarpTrack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneTrack";
        struct Offsets
        {
            static constexpr std::uintptr_t Sections = 0x100;
            static constexpr std::uintptr_t bIsActiveTimeWarp = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Sections", 0x100, "ArrayProperty"},
            {"bIsActiveTimeWarp", 0x110, "BoolProperty"},
        }};
    };

    struct MovieSceneTimeWarpVariant
    {
        static constexpr std::string_view Name = "MovieSceneTimeWarpVariant";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Variant = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Variant", 0x0, "StructProperty"},
        }};
    };

    struct MovieSceneTimeWarping
    {
        static constexpr std::string_view Name = "MovieSceneTimeWarping";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Start = 0x0;
            static constexpr std::uintptr_t End = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Start", 0x0, "StructProperty"},
            {"End", 0x4, "StructProperty"},
        }};
    };

    struct MovieSceneTimecodeSource
    {
        static constexpr std::string_view Name = "MovieSceneTimecodeSource";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Timecode = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Timecode", 0x0, "StructProperty"},
        }};
    };

    struct MovieSceneTrack
    {
        static constexpr std::string_view Name = "MovieSceneTrack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneDecorationContainerObject";
        struct Offsets
        {
            static constexpr std::uintptr_t EvalOptions = 0x90;
            static constexpr std::uintptr_t ParentTrack = 0x98;
            static constexpr std::uintptr_t ConditionContainer = 0xA0;
            static constexpr std::uintptr_t bAutoExpandToKeyframes = 0xA8;
            static constexpr std::uintptr_t bIsEvalDisabled = 0xAA;
            static constexpr std::uintptr_t RowsDisabled = 0xB0;
            static constexpr std::uintptr_t EvaluationFieldGuid = 0xC4;
            static constexpr std::uintptr_t EvaluationField = 0xD8;
            static constexpr std::uintptr_t TrackRowMetadata = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"EvalOptions", 0x90, "StructProperty"},
            {"ParentTrack", 0x98, "ObjectProperty"},
            {"ConditionContainer", 0xA0, "StructProperty"},
            {"bAutoExpandToKeyframes", 0xA8, "BoolProperty"},
            {"bIsEvalDisabled", 0xAA, "BoolProperty"},
            {"RowsDisabled", 0xB0, "ArrayProperty"},
            {"EvaluationFieldGuid", 0xC4, "StructProperty"},
            {"EvaluationField", 0xD8, "StructProperty"},
            {"TrackRowMetadata", 0xE8, "MapProperty"},
        }};
    };

    struct MovieSceneTrackDecoration
    {
        static constexpr std::string_view Name = "MovieSceneTrackDecoration";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MovieSceneTrackDisplayOptions
    {
        static constexpr std::string_view Name = "MovieSceneTrackDisplayOptions";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bShowVerticalFrames = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bShowVerticalFrames", 0x0, "BoolProperty"},
        }};
    };

    struct MovieSceneTrackEvalOptions
    {
        static constexpr std::string_view Name = "MovieSceneTrackEvalOptions";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bCanEvaluateNearestSection = 0x0;
            static constexpr std::uintptr_t bEvalNearestSection = 0x0;
            static constexpr std::uintptr_t bEvaluateInPostroll = 0x0;
            static constexpr std::uintptr_t bEvaluateInPreroll = 0x0;
            static constexpr std::uintptr_t bEvaluateNearestSection = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"bCanEvaluateNearestSection", 0x0, "BoolProperty"},
            {"bEvalNearestSection", 0x0, "BoolProperty"},
            {"bEvaluateInPostroll", 0x0, "BoolProperty"},
            {"bEvaluateInPreroll", 0x0, "BoolProperty"},
            {"bEvaluateNearestSection", 0x0, "BoolProperty"},
        }};
    };

    struct MovieSceneTrackEvaluationField
    {
        static constexpr std::string_view Name = "MovieSceneTrackEvaluationField";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Entries = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Entries", 0x0, "ArrayProperty"},
        }};
    };

    struct MovieSceneTrackEvaluationFieldEntry
    {
        static constexpr std::string_view Name = "MovieSceneTrackEvaluationFieldEntry";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Section = 0x0;
            static constexpr std::uintptr_t Range = 0x8;
            static constexpr std::uintptr_t ForcedTime = 0x18;
            static constexpr std::uintptr_t Flags = 0x1C;
            static constexpr std::uintptr_t LegacySortOrder = 0x1E;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Section", 0x0, "ObjectProperty"},
            {"Range", 0x8, "StructProperty"},
            {"ForcedTime", 0x18, "StructProperty"},
            {"Flags", 0x1C, "EnumProperty"},
            {"LegacySortOrder", 0x1E, "Int16Property"},
        }};
    };

    struct MovieSceneTrackIdentifier
    {
        static constexpr std::string_view Name = "MovieSceneTrackIdentifier";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x0, "UInt32Property"},
        }};
    };

    struct MovieSceneTrackImplementation
    {
        static constexpr std::string_view Name = "MovieSceneTrackImplementation";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MovieSceneEvalTemplateBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MovieSceneTrackImplementationPtr
    {
        static constexpr std::string_view Name = "MovieSceneTrackImplementationPtr";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MovieSceneTrackInstance
    {
        static constexpr std::string_view Name = "MovieSceneTrackInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t WeakAnimatedObject = 0x28;
            static constexpr std::uintptr_t bIsRootTrackInstance = 0x30;
            static constexpr std::uintptr_t PrivateLinker = 0x38;
            static constexpr std::uintptr_t Inputs = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"WeakAnimatedObject", 0x28, "WeakObjectProperty"},
            {"bIsRootTrackInstance", 0x30, "BoolProperty"},
            {"PrivateLinker", 0x38, "ObjectProperty"},
            {"Inputs", 0x40, "ArrayProperty"},
        }};
    };

    struct MovieSceneTrackInstanceComponent
    {
        static constexpr std::string_view Name = "MovieSceneTrackInstanceComponent";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Owner = 0x0;
            static constexpr std::uintptr_t TrackInstanceClass = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Owner", 0x0, "ObjectProperty"},
            {"TrackInstanceClass", 0x8, "ClassProperty"},
        }};
    };

    struct MovieSceneTrackInstanceEntry
    {
        static constexpr std::string_view Name = "MovieSceneTrackInstanceEntry";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t BoundObject = 0x0;
            static constexpr std::uintptr_t TrackInstance = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"BoundObject", 0x0, "ObjectProperty"},
            {"TrackInstance", 0x8, "ObjectProperty"},
        }};
    };

    struct MovieSceneTrackInstanceInput
    {
        static constexpr std::string_view Name = "MovieSceneTrackInstanceInput";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Section = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Section", 0x0, "ObjectProperty"},
        }};
    };

    struct MovieSceneTrackInstanceInstantiator
    {
        static constexpr std::string_view Name = "MovieSceneTrackInstanceInstantiator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneEntityInstantiatorSystem";
        struct Offsets
        {
            static constexpr std::uintptr_t Linker = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Linker", 0x28, "ObjectProperty"},
        }};
    };

    struct MovieSceneTrackInstanceSystem
    {
        static constexpr std::string_view Name = "MovieSceneTrackInstanceSystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneEntitySystem";
        struct Offsets
        {
            static constexpr std::uintptr_t Instantiator = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Instantiator", 0x40, "ObjectProperty"},
        }};
    };

    struct MovieSceneTrackLabels
    {
        static constexpr std::string_view Name = "MovieSceneTrackLabels";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Strings = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Strings", 0x0, "ArrayProperty"},
        }};
    };

    struct MovieSceneTrackRowDecoration
    {
        static constexpr std::string_view Name = "MovieSceneTrackRowDecoration";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MovieSceneTrackRowMetadata
    {
        static constexpr std::string_view Name = "MovieSceneTrackRowMetadata";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ConditionContainer = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ConditionContainer", 0x0, "StructProperty"},
        }};
    };

    struct MovieSceneTrackTemplateProducer
    {
        static constexpr std::string_view Name = "MovieSceneTrackTemplateProducer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MovieSceneTransformBreadcrumbs
    {
        static constexpr std::string_view Name = "MovieSceneTransformBreadcrumbs";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Breadcrumbs = 0x0;
            static constexpr std::uintptr_t Mode = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Breadcrumbs", 0x0, "ArrayProperty"},
            {"Mode", 0x10, "EnumProperty"},
        }};
    };

    struct MovieSceneValueDecomposer
    {
        static constexpr std::string_view Name = "MovieSceneValueDecomposer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MovieSceneWarpCounter
    {
        static constexpr std::string_view Name = "MovieSceneWarpCounter";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MovieSceneTransformBreadcrumbs";
        struct Offsets
        {
            static constexpr std::uintptr_t Breadcrumbs = 0x0;
            static constexpr std::uintptr_t Mode = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Breadcrumbs", 0x0, "ArrayProperty"},
            {"Mode", 0x10, "EnumProperty"},
        }};
    };

    struct NavigationToolSaveState
    {
        static constexpr std::string_view Name = "NavigationToolSaveState";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SerializedTree = 0x0;
            static constexpr std::uintptr_t ItemColorMap = 0x48;
            static constexpr std::uintptr_t ToolViewSaveStates = 0x58;
            static constexpr std::uintptr_t ContextPath = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"SerializedTree", 0x0, "StructProperty"},
            {"ItemColorMap", 0x48, "MapProperty"},
            {"ToolViewSaveStates", 0x58, "ArrayProperty"},
            {"ContextPath", 0x68, "StrProperty"},
        }};
    };

    struct NavigationToolSerializedItem
    {
        static constexpr std::string_view Name = "NavigationToolSerializedItem";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ID = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ID", 0x0, "StrProperty"},
        }};
    };

    struct NavigationToolSerializedTree
    {
        static constexpr std::string_view Name = "NavigationToolSerializedTree";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t RootNode = 0x0;
            static constexpr std::uintptr_t SceneItems = 0x28;
            static constexpr std::uintptr_t ItemTreeMap = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"RootNode", 0x0, "StructProperty"},
            {"SceneItems", 0x28, "ArrayProperty"},
            {"ItemTreeMap", 0x38, "MapProperty"},
        }};
    };

    struct NavigationToolSerializedTreeNode
    {
        static constexpr std::string_view Name = "NavigationToolSerializedTreeNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t LocalIndex = 0x0;
            static constexpr std::uintptr_t GlobalIndex = 0x4;
            static constexpr std::uintptr_t ParentIndex = 0x8;
            static constexpr std::uintptr_t ChildrenIndices = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"LocalIndex", 0x0, "IntProperty"},
            {"GlobalIndex", 0x4, "IntProperty"},
            {"ParentIndex", 0x8, "IntProperty"},
            {"ChildrenIndices", 0x10, "ArrayProperty"},
        }};
    };

    struct NavigationToolViewColumnSaveState
    {
        static constexpr std::string_view Name = "NavigationToolViewColumnSaveState";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bVisible = 0x0;
            static constexpr std::uintptr_t Size = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bVisible", 0x0, "BoolProperty"},
            {"Size", 0x4, "FloatProperty"},
        }};
    };

    struct NavigationToolViewSaveState
    {
        static constexpr std::string_view Name = "NavigationToolViewSaveState";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ViewItemFlags = 0x0;
            static constexpr std::uintptr_t ColumnsState = 0x10;
            static constexpr std::uintptr_t ActiveItemFilters = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ViewItemFlags", 0x0, "MapProperty"},
            {"ColumnsState", 0x10, "MapProperty"},
            {"ActiveItemFilters", 0x20, "SetProperty"},
        }};
    };

    struct NodeAndChannelMappings
    {
        static constexpr std::string_view Name = "NodeAndChannelMappings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptionalMovieSceneBlendType
    {
        static constexpr std::string_view Name = "OptionalMovieSceneBlendType";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t BlendType = 0x0;
            static constexpr std::uintptr_t bIsValid = 0x1;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"BlendType", 0x0, "EnumProperty"},
            {"bIsValid", 0x1, "BoolProperty"},
        }};
    };

    struct SectionEvaluationData
    {
        static constexpr std::string_view Name = "SectionEvaluationData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ImplIndex = 0x0;
            static constexpr std::uintptr_t ForcedTime = 0x4;
            static constexpr std::uintptr_t Flags = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ImplIndex", 0x0, "IntProperty"},
            {"ForcedTime", 0x4, "StructProperty"},
            {"Flags", 0x8, "EnumProperty"},
        }};
    };

    struct TestCascadingLifecycleTrack
    {
        static constexpr std::string_view Name = "TestCascadingLifecycleTrack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TestSectionLifecycleTrack";
        struct Offsets
        {
            static constexpr std::uintptr_t SectionArray = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SectionArray", 0x100, "ArrayProperty"},
        }};
    };

    struct TestMovieSceneArrayPropertiesActor
    {
        static constexpr std::string_view Name = "TestMovieSceneArrayPropertiesActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t TestBool = 0x278;
            static constexpr std::uintptr_t TestEnum = 0x279;
            static constexpr std::uintptr_t TestInt32 = 0x27C;
            static constexpr std::uintptr_t TestObject = 0x280;
            static constexpr std::uintptr_t TestVector = 0x288;
            static constexpr std::uintptr_t MultipleFloats = 0x2A0;
            static constexpr std::uintptr_t SingleStruct = 0x2B0;
            static constexpr std::uintptr_t MultipleStructs = 0x2F8;
            static constexpr std::uintptr_t SingleInstancedStruct = 0x308;
            static constexpr std::uintptr_t MultipleInstancedStructs = 0x318;
            static constexpr std::uintptr_t TestSetterFloat = 0x328;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"TestBool", 0x278, "BoolProperty"},
            {"TestEnum", 0x279, "EnumProperty"},
            {"TestInt32", 0x27C, "IntProperty"},
            {"TestObject", 0x280, "ObjectProperty"},
            {"TestVector", 0x288, "StructProperty"},
            {"MultipleFloats", 0x2A0, "ArrayProperty"},
            {"SingleStruct", 0x2B0, "StructProperty"},
            {"MultipleStructs", 0x2F8, "ArrayProperty"},
            {"SingleInstancedStruct", 0x308, "StructProperty"},
            {"MultipleInstancedStructs", 0x318, "ArrayProperty"},
            {"TestSetterFloat", 0x328, "FloatProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "SetTestSetterFloat",
        }};
    };

    struct TestMovieSceneEvalHookSection
    {
        static constexpr std::string_view Name = "TestMovieSceneEvalHookSection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneHookSection";
        struct Offsets
        {
            static constexpr std::uintptr_t bRequiresRangedHook = 0x150;
            static constexpr std::uintptr_t bRequiresTriggerHooks = 0x150;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bRequiresRangedHook", 0x150, "BoolProperty"},
            {"bRequiresTriggerHooks", 0x150, "BoolProperty"},
        }};
    };

    struct TestMovieSceneEvalHookTrack
    {
        static constexpr std::string_view Name = "TestMovieSceneEvalHookTrack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneTrack";
        struct Offsets
        {
            static constexpr std::uintptr_t SectionArray = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SectionArray", 0xF8, "ArrayProperty"},
        }};
    };

    struct TestMovieSceneEvalTemplate
    {
        static constexpr std::string_view Name = "TestMovieSceneEvalTemplate";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MovieSceneEvalTemplate";
        struct Offsets
        {
            static constexpr std::uintptr_t CompletionMode = 0x10;
            static constexpr std::uintptr_t SourceSectionPtr = 0x14;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CompletionMode", 0x10, "EnumProperty"},
            {"SourceSectionPtr", 0x14, "WeakObjectProperty"},
        }};
    };

    struct TestMovieSceneLifetimeDecoration
    {
        static constexpr std::string_view Name = "TestMovieSceneLifetimeDecoration";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct TestMovieSceneObject
    {
        static constexpr std::string_view Name = "TestMovieSceneObject";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct TestMovieSceneSection
    {
        static constexpr std::string_view Name = "TestMovieSceneSection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneSection";
        struct Offsets
        {
            static constexpr std::uintptr_t EvalOptions = 0x88;
            static constexpr std::uintptr_t Easing = 0x90;
            static constexpr std::uintptr_t SectionRange = 0xC8;
            static constexpr std::uintptr_t TimecodeSource = 0xD8;
            static constexpr std::uintptr_t ConditionContainer = 0xF0;
            static constexpr std::uintptr_t PreRollFrames = 0xF8;
            static constexpr std::uintptr_t PostRollFrames = 0xFC;
            static constexpr std::uintptr_t RowIndex = 0x100;
            static constexpr std::uintptr_t OverlapPriority = 0x104;
            static constexpr std::uintptr_t bIsActive = 0x108;
            static constexpr std::uintptr_t bIsLocked = 0x108;
            static constexpr std::uintptr_t StartTime = 0x10C;
            static constexpr std::uintptr_t EndTime = 0x110;
            static constexpr std::uintptr_t PreRollTime = 0x114;
            static constexpr std::uintptr_t PostRollTime = 0x118;
            static constexpr std::uintptr_t bIsInfinite = 0x11C;
            static constexpr std::uintptr_t bSupportsInfiniteRange = 0x120;
            static constexpr std::uintptr_t BlendType = 0x121;
        };

        inline static constexpr std::array<PropertyInfo, 18> Properties{{
            {"EvalOptions", 0x88, "StructProperty"},
            {"Easing", 0x90, "StructProperty"},
            {"SectionRange", 0xC8, "StructProperty"},
            {"TimecodeSource", 0xD8, "StructProperty"},
            {"ConditionContainer", 0xF0, "StructProperty"},
            {"PreRollFrames", 0xF8, "StructProperty"},
            {"PostRollFrames", 0xFC, "StructProperty"},
            {"RowIndex", 0x100, "IntProperty"},
            {"OverlapPriority", 0x104, "IntProperty"},
            {"bIsActive", 0x108, "BoolProperty"},
            {"bIsLocked", 0x108, "BoolProperty"},
            {"StartTime", 0x10C, "FloatProperty"},
            {"EndTime", 0x110, "FloatProperty"},
            {"PreRollTime", 0x114, "FloatProperty"},
            {"PostRollTime", 0x118, "FloatProperty"},
            {"bIsInfinite", 0x11C, "BoolProperty"},
            {"bSupportsInfiniteRange", 0x120, "BoolProperty"},
            {"BlendType", 0x121, "StructProperty"},
        }};
    };

    struct TestMovieSceneSequence
    {
        static constexpr std::string_view Name = "TestMovieSceneSequence";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneSequence";
        struct Offsets
        {
            static constexpr std::uintptr_t MovieScene = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MovieScene", 0x68, "ObjectProperty"},
        }};
    };

    struct TestMovieSceneStruct
    {
        static constexpr std::string_view Name = "TestMovieSceneStruct";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t First = 0x0;
            static constexpr std::uintptr_t Second = 0x4;
            static constexpr std::uintptr_t Enum = 0x8;
            static constexpr std::uintptr_t Vector = 0x10;
            static constexpr std::uintptr_t MultipleIntegers = 0x28;
            static constexpr std::uintptr_t MultipleVectors = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"First", 0x0, "FloatProperty"},
            {"Second", 0x4, "FloatProperty"},
            {"Enum", 0x8, "EnumProperty"},
            {"Vector", 0x10, "StructProperty"},
            {"MultipleIntegers", 0x28, "ArrayProperty"},
            {"MultipleVectors", 0x38, "ArrayProperty"},
        }};
    };

    struct TestMovieSceneStruct2
    {
        static constexpr std::string_view Name = "TestMovieSceneStruct2";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t First = 0x0;
            static constexpr std::uintptr_t Second = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"First", 0x0, "FloatProperty"},
            {"Second", 0x4, "FloatProperty"},
        }};
    };

    struct TestMovieSceneSubSection
    {
        static constexpr std::string_view Name = "TestMovieSceneSubSection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneSubSection";
        struct Offsets
        {
            static constexpr std::uintptr_t Parameters = 0x148;
            static constexpr std::uintptr_t StartOffset = 0x178;
            static constexpr std::uintptr_t timescale = 0x17C;
            static constexpr std::uintptr_t PreRollTime = 0x180;
            static constexpr std::uintptr_t NetworkMask = 0x184;
            static constexpr std::uintptr_t OriginOverrideMask = 0x188;
            static constexpr std::uintptr_t Translation = 0x190;
            static constexpr std::uintptr_t Rotation = 0x418;
            static constexpr std::uintptr_t SubSequence = 0x6A0;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"Parameters", 0x148, "StructProperty"},
            {"StartOffset", 0x178, "FloatProperty"},
            {"timescale", 0x17C, "FloatProperty"},
            {"PreRollTime", 0x180, "FloatProperty"},
            {"NetworkMask", 0x184, "ByteProperty"},
            {"OriginOverrideMask", 0x188, "StructProperty"},
            {"Translation", 0x190, "StructProperty"},
            {"Rotation", 0x418, "StructProperty"},
            {"SubSequence", 0x6A0, "ObjectProperty"},
        }};
    };

    struct TestMovieSceneSubTrack
    {
        static constexpr std::string_view Name = "TestMovieSceneSubTrack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneSubTrack";
        struct Offsets
        {
            static constexpr std::uintptr_t SectionArray = 0x108;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SectionArray", 0x108, "ArrayProperty"},
        }};
    };

    struct TestMovieSceneTrack
    {
        static constexpr std::string_view Name = "TestMovieSceneTrack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneTrack";
        struct Offsets
        {
            static constexpr std::uintptr_t bHighPassFilter = 0x100;
            static constexpr std::uintptr_t SectionArray = 0x108;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bHighPassFilter", 0x100, "BoolProperty"},
            {"SectionArray", 0x108, "ArrayProperty"},
        }};
    };

    struct TestSectionLifecycleTrack
    {
        static constexpr std::string_view Name = "TestSectionLifecycleTrack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneTrack";
        struct Offsets
        {
            static constexpr std::uintptr_t SectionArray = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SectionArray", 0x100, "ArrayProperty"},
        }};
    };

    struct TestWrapperClearLifecycleTrack
    {
        static constexpr std::string_view Name = "TestWrapperClearLifecycleTrack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TestSectionLifecycleTrack";
        struct Offsets
        {
            static constexpr std::uintptr_t SectionArray = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SectionArray", 0x100, "ArrayProperty"},
        }};
    };

    struct TrackInstanceInputComponent
    {
        static constexpr std::string_view Name = "TrackInstanceInputComponent";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Section = 0x0;
            static constexpr std::uintptr_t OutputIndex = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Section", 0x0, "ObjectProperty"},
            {"OutputIndex", 0x8, "IntProperty"},
        }};
    };

}

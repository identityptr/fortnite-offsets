#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::TemplateSequence
{
    struct CameraAnimationBoundObjectInstantiator
    {
        static constexpr std::string_view Name = "CameraAnimationBoundObjectInstantiator";
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

    struct CameraAnimationEntitySystemLinker
    {
        static constexpr std::string_view Name = "CameraAnimationEntitySystemLinker";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneEntitySystemLinker";
        struct Offsets
        {
            static constexpr std::uintptr_t SystemGraph = 0x250;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SystemGraph", 0x250, "StructProperty"},
        }};
    };

    struct CameraAnimationSequence
    {
        static constexpr std::string_view Name = "CameraAnimationSequence";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TemplateSequence";
        struct Offsets
        {
            static constexpr std::uintptr_t MovieScene = 0x68;
            static constexpr std::uintptr_t BoundActorClass = 0x70;
            static constexpr std::uintptr_t BoundActorComponents = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"MovieScene", 0x68, "ObjectProperty"},
            {"BoundActorClass", 0x70, "SoftClassProperty"},
            {"BoundActorComponents", 0x90, "MapProperty"},
        }};
    };

    struct CameraAnimationSequenceCameraStandIn
    {
        static constexpr std::string_view Name = "CameraAnimationSequenceCameraStandIn";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t FieldOfView = 0x28;
            static constexpr std::uintptr_t bConstrainAspectRatio = 0x2C;
            static constexpr std::uintptr_t AspectRatio = 0x30;
            static constexpr std::uintptr_t PostProcessSettings = 0x40;
            static constexpr std::uintptr_t PostProcessBlendWeight = 0x7F0;
            static constexpr std::uintptr_t Filmback = 0x7F4;
            static constexpr std::uintptr_t LensSettings = 0x808;
            static constexpr std::uintptr_t FocusSettings = 0x828;
            static constexpr std::uintptr_t CurrentFocalLength = 0x880;
            static constexpr std::uintptr_t CurrentAperture = 0x884;
            static constexpr std::uintptr_t CurrentFocusDistance = 0x888;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"FieldOfView", 0x28, "FloatProperty"},
            {"bConstrainAspectRatio", 0x2C, "BoolProperty"},
            {"AspectRatio", 0x30, "FloatProperty"},
            {"PostProcessSettings", 0x40, "StructProperty"},
            {"PostProcessBlendWeight", 0x7F0, "FloatProperty"},
            {"Filmback", 0x7F4, "StructProperty"},
            {"LensSettings", 0x808, "StructProperty"},
            {"FocusSettings", 0x828, "StructProperty"},
            {"CurrentFocalLength", 0x880, "FloatProperty"},
            {"CurrentAperture", 0x884, "FloatProperty"},
            {"CurrentFocusDistance", 0x888, "FloatProperty"},
        }};
    };

    struct CameraAnimationSequencePlayer
    {
        static constexpr std::string_view Name = "CameraAnimationSequencePlayer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t BoundObjectOverride = 0x100;
            static constexpr std::uintptr_t Sequence = 0x108;
            static constexpr std::uintptr_t RootTemplateInstance = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"BoundObjectOverride", 0x100, "ObjectProperty"},
            {"Sequence", 0x108, "ObjectProperty"},
            {"RootTemplateInstance", 0x110, "StructProperty"},
        }};
    };

    struct CameraAnimationSequenceSubsystem
    {
        static constexpr std::string_view Name = "CameraAnimationSequenceSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t Linker = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Linker", 0x38, "ObjectProperty"},
        }};
    };

    struct CameraAnimationSpawnableSystem
    {
        static constexpr std::string_view Name = "CameraAnimationSpawnableSystem";
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

    struct SequenceCameraShakePattern
    {
        static constexpr std::string_view Name = "SequenceCameraShakePattern";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CameraShakePattern";
        struct Offsets
        {
            static constexpr std::uintptr_t Sequence = 0x28;
            static constexpr std::uintptr_t PlayRate = 0x30;
            static constexpr std::uintptr_t Scale = 0x34;
            static constexpr std::uintptr_t BlendInTime = 0x38;
            static constexpr std::uintptr_t BlendOutTime = 0x3C;
            static constexpr std::uintptr_t RandomSegmentDuration = 0x40;
            static constexpr std::uintptr_t bRandomSegment = 0x44;
            static constexpr std::uintptr_t player = 0x48;
            static constexpr std::uintptr_t CameraStandIn = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"Sequence", 0x28, "ObjectProperty"},
            {"PlayRate", 0x30, "FloatProperty"},
            {"Scale", 0x34, "FloatProperty"},
            {"BlendInTime", 0x38, "FloatProperty"},
            {"BlendOutTime", 0x3C, "FloatProperty"},
            {"RandomSegmentDuration", 0x40, "FloatProperty"},
            {"bRandomSegment", 0x44, "BoolProperty"},
            {"player", 0x48, "ObjectProperty"},
            {"CameraStandIn", 0x50, "ObjectProperty"},
        }};
    };

    struct SequenceCameraShakeTestUtil
    {
        static constexpr std::string_view Name = "SequenceCameraShakeTestUtil";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 3> FunctionNames{{
            "GetCameraCachePOV",
            "GetLastFrameCameraCachePOV",
            "GetPostProcessBlendCache",
        }};
    };

    struct TemplateSectionPropertyScale
    {
        static constexpr std::string_view Name = "TemplateSectionPropertyScale";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ObjectBinding = 0x0;
            static constexpr std::uintptr_t PropertyBinding = 0x10;
            static constexpr std::uintptr_t PropertyScaleType = 0x1C;
            static constexpr std::uintptr_t FloatChannel = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ObjectBinding", 0x0, "StructProperty"},
            {"PropertyBinding", 0x10, "StructProperty"},
            {"PropertyScaleType", 0x1C, "EnumProperty"},
            {"FloatChannel", 0x20, "StructProperty"},
        }};
    };

    struct TemplateSequence
    {
        static constexpr std::string_view Name = "TemplateSequence";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneSequence";
        struct Offsets
        {
            static constexpr std::uintptr_t MovieScene = 0x68;
            static constexpr std::uintptr_t BoundActorClass = 0x70;
            static constexpr std::uintptr_t BoundActorComponents = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"MovieScene", 0x68, "ObjectProperty"},
            {"BoundActorClass", 0x70, "SoftClassProperty"},
            {"BoundActorComponents", 0x90, "MapProperty"},
        }};
    };

    struct TemplateSequenceActor
    {
        static constexpr std::string_view Name = "TemplateSequenceActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t PlaybackSettings = 0x280;
            static constexpr std::uintptr_t SequencePlayer = 0x2A8;
            static constexpr std::uintptr_t TemplateSequence = 0x2B0;
            static constexpr std::uintptr_t BindingOverride = 0x2C8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"PlaybackSettings", 0x280, "StructProperty"},
            {"SequencePlayer", 0x2A8, "ObjectProperty"},
            {"TemplateSequence", 0x2B0, "StructProperty"},
            {"BindingOverride", 0x2C8, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 5> FunctionNames{{
            "GetSequence",
            "GetSequencePlayer",
            "LoadSequence",
            "SetBinding",
            "SetSequence",
        }};
    };

    struct TemplateSequenceBindingOverrideData
    {
        static constexpr std::string_view Name = "TemplateSequenceBindingOverrideData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Object = 0x0;
            static constexpr std::uintptr_t bOverridesDefault = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Object", 0x0, "WeakObjectProperty"},
            {"bOverridesDefault", 0x8, "BoolProperty"},
        }};
    };

    struct TemplateSequencePlayer
    {
        static constexpr std::string_view Name = "TemplateSequencePlayer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneSequencePlayer";
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

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "CreateTemplateSequencePlayer",
        }};
    };

    struct TemplateSequencePropertyScalingEvaluatorSystem
    {
        static constexpr std::string_view Name = "TemplateSequencePropertyScalingEvaluatorSystem";
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

    struct TemplateSequencePropertyScalingInstantiatorSystem
    {
        static constexpr std::string_view Name = "TemplateSequencePropertyScalingInstantiatorSystem";
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

    struct TemplateSequenceSection
    {
        static constexpr std::string_view Name = "TemplateSequenceSection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneSubSection";
        struct Offsets
        {
            static constexpr std::uintptr_t PropertyScales = 0x6A8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PropertyScales", 0x6A8, "ArrayProperty"},
        }};
    };

    struct TemplateSequenceSystem
    {
        static constexpr std::string_view Name = "TemplateSequenceSystem";
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

    struct TemplateSequenceTrack
    {
        static constexpr std::string_view Name = "TemplateSequenceTrack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneSubTrack";
        struct Offsets
        {
            static constexpr std::uintptr_t Sections = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Sections", 0xF8, "ArrayProperty"},
        }};
    };

}

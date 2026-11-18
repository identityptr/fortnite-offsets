#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::MovieSceneTracks
{
    struct ActorReferenceChannelEvaluatorSystem
    {
        static constexpr std::string_view Name = "ActorReferenceChannelEvaluatorSystem";
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

    struct BaseParameterNameAndValue
    {
        static constexpr std::string_view Name = "BaseParameterNameAndValue";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ParameterName = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ParameterName", 0x0, "NameProperty"},
        }};
    };

    struct BoolChannelEvaluatorSystem
    {
        static constexpr std::string_view Name = "BoolChannelEvaluatorSystem";
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

    struct BoolParameterNameAndCurve
    {
        static constexpr std::string_view Name = "BoolParameterNameAndCurve";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "BaseParameterNameAndValue";
        struct Offsets
        {
            static constexpr std::uintptr_t ParameterCurve = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ParameterCurve", 0x8, "StructProperty"},
        }};
    };

    struct ByteChannelEvaluatorSystem
    {
        static constexpr std::string_view Name = "ByteChannelEvaluatorSystem";
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

    struct ColorMaterialParameterInfoAndCurves
    {
        static constexpr std::string_view Name = "ColorMaterialParameterInfoAndCurves";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ParameterInfo = 0x0;
            static constexpr std::uintptr_t RedCurve = 0x10;
            static constexpr std::uintptr_t GreenCurve = 0xE0;
            static constexpr std::uintptr_t BlueCurve = 0x1B0;
            static constexpr std::uintptr_t AlphaCurve = 0x280;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"ParameterInfo", 0x0, "StructProperty"},
            {"RedCurve", 0x10, "StructProperty"},
            {"GreenCurve", 0xE0, "StructProperty"},
            {"BlueCurve", 0x1B0, "StructProperty"},
            {"AlphaCurve", 0x280, "StructProperty"},
        }};
    };

    struct ColorParameterNameAndCurves
    {
        static constexpr std::string_view Name = "ColorParameterNameAndCurves";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "BaseParameterNameAndValue";
        struct Offsets
        {
            static constexpr std::uintptr_t RedCurve = 0x8;
            static constexpr std::uintptr_t GreenCurve = 0xD8;
            static constexpr std::uintptr_t BlueCurve = 0x1A8;
            static constexpr std::uintptr_t AlphaCurve = 0x278;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"RedCurve", 0x8, "StructProperty"},
            {"GreenCurve", 0xD8, "StructProperty"},
            {"BlueCurve", 0x1A8, "StructProperty"},
            {"AlphaCurve", 0x278, "StructProperty"},
        }};
    };

    struct ComponentMaterialInfo
    {
        static constexpr std::string_view Name = "ComponentMaterialInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t MaterialSlotName = 0x0;
            static constexpr std::uintptr_t MaterialSlotIndex = 0x4;
            static constexpr std::uintptr_t MaterialType = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"MaterialSlotName", 0x0, "NameProperty"},
            {"MaterialSlotIndex", 0x4, "IntProperty"},
            {"MaterialType", 0x8, "EnumProperty"},
        }};
    };

    struct ConstraintComponentData
    {
        static constexpr std::string_view Name = "ConstraintComponentData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ConstraintId = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ConstraintId", 0x0, "StructProperty"},
        }};
    };

    struct DoubleChannelEvaluatorSystem
    {
        static constexpr std::string_view Name = "DoubleChannelEvaluatorSystem";
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

    struct DoublePerlinNoiseChannelEvaluatorSystem
    {
        static constexpr std::string_view Name = "DoublePerlinNoiseChannelEvaluatorSystem";
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

    struct EventPayload
    {
        static constexpr std::string_view Name = "EventPayload";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t EventName = 0x0;
            static constexpr std::uintptr_t Parameters = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"EventName", 0x0, "NameProperty"},
            {"Parameters", 0x8, "StructProperty"},
        }};
    };

    struct FloatChannelEvaluatorSystem
    {
        static constexpr std::string_view Name = "FloatChannelEvaluatorSystem";
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

    struct FloatPerlinNoiseChannelEvaluatorSystem
    {
        static constexpr std::string_view Name = "FloatPerlinNoiseChannelEvaluatorSystem";
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

    struct IntegerChannelEvaluatorSystem
    {
        static constexpr std::string_view Name = "IntegerChannelEvaluatorSystem";
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

    struct LevelVisibilityComponentData
    {
        static constexpr std::string_view Name = "LevelVisibilityComponentData";
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

    struct MovieScene3DAttachSection
    {
        static constexpr std::string_view Name = "MovieScene3DAttachSection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieScene3DConstraintSection";
        struct Offsets
        {
            static constexpr std::uintptr_t AttachSocketName = 0x170;
            static constexpr std::uintptr_t AttachComponentName = 0x174;
            static constexpr std::uintptr_t AttachmentLocationRule = 0x178;
            static constexpr std::uintptr_t AttachmentRotationRule = 0x179;
            static constexpr std::uintptr_t AttachmentScaleRule = 0x17A;
            static constexpr std::uintptr_t DetachmentLocationRule = 0x17B;
            static constexpr std::uintptr_t DetachmentRotationRule = 0x17C;
            static constexpr std::uintptr_t DetachmentScaleRule = 0x17D;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"AttachSocketName", 0x170, "NameProperty"},
            {"AttachComponentName", 0x174, "NameProperty"},
            {"AttachmentLocationRule", 0x178, "EnumProperty"},
            {"AttachmentRotationRule", 0x179, "EnumProperty"},
            {"AttachmentScaleRule", 0x17A, "EnumProperty"},
            {"DetachmentLocationRule", 0x17B, "EnumProperty"},
            {"DetachmentRotationRule", 0x17C, "EnumProperty"},
            {"DetachmentScaleRule", 0x17D, "EnumProperty"},
        }};
    };

    struct MovieScene3DAttachTrack
    {
        static constexpr std::string_view Name = "MovieScene3DAttachTrack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieScene3DConstraintTrack";
        struct Offsets
        {
            static constexpr std::uintptr_t ConstraintSections = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ConstraintSections", 0xF8, "ArrayProperty"},
        }};
    };

    struct MovieScene3DConstraintSection
    {
        static constexpr std::string_view Name = "MovieScene3DConstraintSection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneSection";
        struct Offsets
        {
            static constexpr std::uintptr_t ConstraintId = 0x140;
            static constexpr std::uintptr_t ConstraintBindingID = 0x150;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ConstraintId", 0x140, "StructProperty"},
            {"ConstraintBindingID", 0x150, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "GetConstraintBindingID",
            "SetConstraintBindingID",
        }};
    };

    struct MovieScene3DConstraintTrack
    {
        static constexpr std::string_view Name = "MovieScene3DConstraintTrack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneTrack";
        struct Offsets
        {
            static constexpr std::uintptr_t ConstraintSections = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ConstraintSections", 0xF8, "ArrayProperty"},
        }};
    };

    struct MovieScene3DLocationKeyStruct
    {
        static constexpr std::string_view Name = "MovieScene3DLocationKeyStruct";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MovieSceneKeyStruct";
        struct Offsets
        {
            static constexpr std::uintptr_t Location = 0x8;
            static constexpr std::uintptr_t time = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Location", 0x8, "StructProperty"},
            {"time", 0x20, "StructProperty"},
        }};
    };

    struct MovieScene3DPathSection
    {
        static constexpr std::string_view Name = "MovieScene3DPathSection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieScene3DConstraintSection";
        struct Offsets
        {
            static constexpr std::uintptr_t TimingCurve = 0x168;
            static constexpr std::uintptr_t FrontAxisEnum = 0x238;
            static constexpr std::uintptr_t UpAxisEnum = 0x239;
            static constexpr std::uintptr_t bFollow = 0x23C;
            static constexpr std::uintptr_t bForceUpright = 0x23C;
            static constexpr std::uintptr_t bReverse = 0x23C;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"TimingCurve", 0x168, "StructProperty"},
            {"FrontAxisEnum", 0x238, "EnumProperty"},
            {"UpAxisEnum", 0x239, "EnumProperty"},
            {"bFollow", 0x23C, "BoolProperty"},
            {"bForceUpright", 0x23C, "BoolProperty"},
            {"bReverse", 0x23C, "BoolProperty"},
        }};
    };

    struct MovieScene3DPathSectionTemplate
    {
        static constexpr std::string_view Name = "MovieScene3DPathSectionTemplate";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MovieSceneEvalTemplate";
        struct Offsets
        {
            static constexpr std::uintptr_t PathBindingID = 0x20;
            static constexpr std::uintptr_t TimingCurve = 0x38;
            static constexpr std::uintptr_t FrontAxisEnum = 0x108;
            static constexpr std::uintptr_t UpAxisEnum = 0x109;
            static constexpr std::uintptr_t bFollow = 0x10C;
            static constexpr std::uintptr_t bForceUpright = 0x10C;
            static constexpr std::uintptr_t bReverse = 0x10C;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"PathBindingID", 0x20, "StructProperty"},
            {"TimingCurve", 0x38, "StructProperty"},
            {"FrontAxisEnum", 0x108, "EnumProperty"},
            {"UpAxisEnum", 0x109, "EnumProperty"},
            {"bFollow", 0x10C, "BoolProperty"},
            {"bForceUpright", 0x10C, "BoolProperty"},
            {"bReverse", 0x10C, "BoolProperty"},
        }};
    };

    struct MovieScene3DPathTrack
    {
        static constexpr std::string_view Name = "MovieScene3DPathTrack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieScene3DConstraintTrack";
        struct Offsets
        {
            static constexpr std::uintptr_t ConstraintSections = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ConstraintSections", 0xF8, "ArrayProperty"},
        }};
    };

    struct MovieScene3DRotationKeyStruct
    {
        static constexpr std::string_view Name = "MovieScene3DRotationKeyStruct";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MovieSceneKeyStruct";
        struct Offsets
        {
            static constexpr std::uintptr_t Rotation = 0x8;
            static constexpr std::uintptr_t time = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Rotation", 0x8, "StructProperty"},
            {"time", 0x20, "StructProperty"},
        }};
    };

    struct MovieScene3DScaleKeyStruct
    {
        static constexpr std::string_view Name = "MovieScene3DScaleKeyStruct";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MovieSceneKeyStruct";
        struct Offsets
        {
            static constexpr std::uintptr_t Scale = 0x8;
            static constexpr std::uintptr_t time = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Scale", 0x8, "StructProperty"},
            {"time", 0x20, "StructProperty"},
        }};
    };

    struct MovieScene3DTransformKeyStruct
    {
        static constexpr std::string_view Name = "MovieScene3DTransformKeyStruct";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MovieSceneKeyStruct";
        struct Offsets
        {
            static constexpr std::uintptr_t Location = 0x8;
            static constexpr std::uintptr_t Rotation = 0x20;
            static constexpr std::uintptr_t Scale = 0x38;
            static constexpr std::uintptr_t time = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Location", 0x8, "StructProperty"},
            {"Rotation", 0x20, "StructProperty"},
            {"Scale", 0x38, "StructProperty"},
            {"time", 0x50, "StructProperty"},
        }};
    };

    struct MovieScene3DTransformPropertySystem
    {
        static constexpr std::string_view Name = "MovieScene3DTransformPropertySystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieScenePropertySystem";
        struct Offsets
        {
            static constexpr std::uintptr_t InstantiatorSystem = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InstantiatorSystem", 0x48, "ObjectProperty"},
        }};
    };

    struct MovieScene3DTransformSection
    {
        static constexpr std::string_view Name = "MovieScene3DTransformSection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneSection";
        struct Offsets
        {
            static constexpr std::uintptr_t TransformMask = 0x188;
            static constexpr std::uintptr_t Translation = 0x190;
            static constexpr std::uintptr_t Rotation = 0x418;
            static constexpr std::uintptr_t Scale = 0x6A0;
            static constexpr std::uintptr_t ManualWeight = 0x928;
            static constexpr std::uintptr_t OverrideRegistry = 0x9F8;
            static constexpr std::uintptr_t Constraints = 0xA00;
            static constexpr std::uintptr_t bUseQuaternionInterpolation = 0xA08;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"TransformMask", 0x188, "StructProperty"},
            {"Translation", 0x190, "StructProperty"},
            {"Rotation", 0x418, "StructProperty"},
            {"Scale", 0x6A0, "StructProperty"},
            {"ManualWeight", 0x928, "StructProperty"},
            {"OverrideRegistry", 0x9F8, "ObjectProperty"},
            {"Constraints", 0xA00, "ObjectProperty"},
            {"bUseQuaternionInterpolation", 0xA08, "BoolProperty"},
        }};
    };

    struct MovieScene3DTransformSectionConstraints
    {
        static constexpr std::string_view Name = "MovieScene3DTransformSectionConstraints";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t ConstraintsChannels = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ConstraintsChannels", 0x28, "ArrayProperty"},
        }};
    };

    struct MovieScene3DTransformTrack
    {
        static constexpr std::string_view Name = "MovieScene3DTransformTrack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieScenePropertyTrack";
        struct Offsets
        {
            static constexpr std::uintptr_t BlenderSystemClass = 0x128;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"BlenderSystemClass", 0x128, "ClassProperty"},
        }};
    };

    struct MovieSceneActorReferenceChannel
    {
        static constexpr std::string_view Name = "MovieSceneActorReferenceChannel";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MovieSceneChannel";
        struct Offsets
        {
            static constexpr std::uintptr_t KeyTimes = 0x50;
            static constexpr std::uintptr_t DefaultValue = 0x60;
            static constexpr std::uintptr_t KeyValues = 0x80;
            static constexpr std::uintptr_t KeyHandles = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"KeyTimes", 0x50, "ArrayProperty"},
            {"DefaultValue", 0x60, "StructProperty"},
            {"KeyValues", 0x80, "ArrayProperty"},
            {"KeyHandles", 0x90, "StructProperty"},
        }};
    };

    struct MovieSceneActorReferenceKey
    {
        static constexpr std::string_view Name = "MovieSceneActorReferenceKey";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Object = 0x0;
            static constexpr std::uintptr_t ComponentName = 0x18;
            static constexpr std::uintptr_t SocketName = 0x1C;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Object", 0x0, "StructProperty"},
            {"ComponentName", 0x18, "NameProperty"},
            {"SocketName", 0x1C, "NameProperty"},
        }};
    };

    struct MovieSceneActorReferencePropertySystem
    {
        static constexpr std::string_view Name = "MovieSceneActorReferencePropertySystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieScenePropertySystem";
        struct Offsets
        {
            static constexpr std::uintptr_t InstantiatorSystem = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InstantiatorSystem", 0x48, "ObjectProperty"},
        }};
    };

    struct MovieSceneActorReferenceSection
    {
        static constexpr std::string_view Name = "MovieSceneActorReferenceSection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneSection";
        struct Offsets
        {
            static constexpr std::uintptr_t ActorReferenceData = 0x148;
            static constexpr std::uintptr_t ActorGuidIndexCurve = 0x220;
            static constexpr std::uintptr_t ActorGuidStrings = 0x260;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ActorReferenceData", 0x148, "StructProperty"},
            {"ActorGuidIndexCurve", 0x220, "StructProperty"},
            {"ActorGuidStrings", 0x260, "ArrayProperty"},
        }};
    };

    struct MovieSceneActorReferenceTrack
    {
        static constexpr std::string_view Name = "MovieSceneActorReferenceTrack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieScenePropertyTrack";
        struct Offsets
        {
            static constexpr std::uintptr_t SectionToKey = 0xF8;
            static constexpr std::uintptr_t PropertyBinding = 0x100;
            static constexpr std::uintptr_t Sections = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SectionToKey", 0xF8, "ObjectProperty"},
            {"PropertyBinding", 0x100, "StructProperty"},
            {"Sections", 0x110, "ArrayProperty"},
        }};
    };

    struct MovieSceneAnimationMixerItemInterface
    {
        static constexpr std::string_view Name = "MovieSceneAnimationMixerItemInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MovieSceneAsyncAction_SequencePrediction
    {
        static constexpr std::string_view Name = "MovieSceneAsyncAction_SequencePrediction";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintAsyncActionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Result = 0x30;
            static constexpr std::uintptr_t Failure = 0x40;
            static constexpr std::uintptr_t SequencePlayer = 0x60;
            static constexpr std::uintptr_t SceneComponent = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Result", 0x30, "MulticastInlineDelegateProperty"},
            {"Failure", 0x40, "MulticastInlineDelegateProperty"},
            {"SequencePlayer", 0x60, "ObjectProperty"},
            {"SceneComponent", 0x68, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 4> FunctionNames{{
            "PredictLocalTransformAtFrame",
            "PredictLocalTransformAtTime",
            "PredictWorldTransformAtFrame",
            "PredictWorldTransformAtTime",
        }};
    };

    struct MovieSceneAudioComponentData
    {
        static constexpr std::string_view Name = "MovieSceneAudioComponentData";
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

    struct MovieSceneAudioInputData
    {
        static constexpr std::string_view Name = "MovieSceneAudioInputData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t FloatInputs = 0x0;
            static constexpr std::uintptr_t StringInput = 0x24;
            static constexpr std::uintptr_t BoolInput = 0x28;
            static constexpr std::uintptr_t IntInput = 0x2C;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"FloatInputs", 0x0, "NameProperty"},
            {"StringInput", 0x24, "NameProperty"},
            {"BoolInput", 0x28, "NameProperty"},
            {"IntInput", 0x2C, "NameProperty"},
        }};
    };

    struct MovieSceneAudioSection
    {
        static constexpr std::string_view Name = "MovieSceneAudioSection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneSection";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedCompletionMode = 0x150;
            static constexpr std::uintptr_t Sound = 0x158;
            static constexpr std::uintptr_t StartFrameOffset = 0x160;
            static constexpr std::uintptr_t StartOffset = 0x164;
            static constexpr std::uintptr_t AudioStartTime = 0x168;
            static constexpr std::uintptr_t AudioDilationFactor = 0x16C;
            static constexpr std::uintptr_t AudioVolume = 0x170;
            static constexpr std::uintptr_t SoundVolume = 0x178;
            static constexpr std::uintptr_t PitchMultiplier = 0x248;
            static constexpr std::uintptr_t Inputs_Float = 0x318;
            static constexpr std::uintptr_t Inputs_String = 0x328;
            static constexpr std::uintptr_t Inputs_Bool = 0x338;
            static constexpr std::uintptr_t Inputs_Int = 0x348;
            static constexpr std::uintptr_t Inputs_Trigger = 0x358;
            static constexpr std::uintptr_t AttachActorData = 0x368;
            static constexpr std::uintptr_t bLooping = 0x440;
            static constexpr std::uintptr_t bRepeating = 0x441;
            static constexpr std::uintptr_t bPlayUntilFinished = 0x442;
            static constexpr std::uintptr_t bSuppressSubtitles = 0x443;
            static constexpr std::uintptr_t bOverrideAttenuation = 0x444;
            static constexpr std::uintptr_t AttenuationSettings = 0x448;
            static constexpr std::uintptr_t OnQueueSubtitles = 0x450;
            static constexpr std::uintptr_t OnAudioFinished = 0x460;
            static constexpr std::uintptr_t OnAudioPlaybackPercent = 0x470;
        };

        inline static constexpr std::array<PropertyInfo, 24> Properties{{
            {"CachedCompletionMode", 0x150, "EnumProperty"},
            {"Sound", 0x158, "ObjectProperty"},
            {"StartFrameOffset", 0x160, "StructProperty"},
            {"StartOffset", 0x164, "FloatProperty"},
            {"AudioStartTime", 0x168, "FloatProperty"},
            {"AudioDilationFactor", 0x16C, "FloatProperty"},
            {"AudioVolume", 0x170, "FloatProperty"},
            {"SoundVolume", 0x178, "StructProperty"},
            {"PitchMultiplier", 0x248, "StructProperty"},
            {"Inputs_Float", 0x318, "MapProperty"},
            {"Inputs_String", 0x328, "MapProperty"},
            {"Inputs_Bool", 0x338, "MapProperty"},
            {"Inputs_Int", 0x348, "MapProperty"},
            {"Inputs_Trigger", 0x358, "MapProperty"},
            {"AttachActorData", 0x368, "StructProperty"},
            {"bLooping", 0x440, "BoolProperty"},
            {"bRepeating", 0x441, "BoolProperty"},
            {"bPlayUntilFinished", 0x442, "BoolProperty"},
            {"bSuppressSubtitles", 0x443, "BoolProperty"},
            {"bOverrideAttenuation", 0x444, "BoolProperty"},
            {"AttenuationSettings", 0x448, "ObjectProperty"},
            {"OnQueueSubtitles", 0x450, "DelegateProperty"},
            {"OnAudioFinished", 0x460, "MulticastInlineDelegateProperty"},
            {"OnAudioPlaybackPercent", 0x470, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 18> FunctionNames{{
            "GetAttenuationSettings",
            "GetLooping",
            "GetOverrideAttenuation",
            "GetPlayUntilFinished",
            "GetPlaybackSound",
            "GetSound",
            "GetStartOffset",
            "GetSuppressSubtitles",
            "IsPlayUntilFinishedEditable",
            "IsRepeatingCVarEnabled",
            "SetAttenuationSettings",
            "SetLooping",
            "SetOverrideAttenuation",
            "SetPlayUntilFinished",
            "SetRepeating",
            "SetSound",
            "SetStartOffset",
            "SetSuppressSubtitles",
        }};
    };

    struct MovieSceneAudioSystem
    {
        static constexpr std::string_view Name = "MovieSceneAudioSystem";
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

    struct MovieSceneAudioTrack
    {
        static constexpr std::string_view Name = "MovieSceneAudioTrack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneNameableTrack";
        struct Offsets
        {
            static constexpr std::uintptr_t AudioSections = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AudioSections", 0xF8, "ArrayProperty"},
        }};
    };

    struct MovieSceneBaseCacheParams
    {
        static constexpr std::string_view Name = "MovieSceneBaseCacheParams";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t FirstLoopStartFrameOffset = 0x8;
            static constexpr std::uintptr_t StartFrameOffset = 0xC;
            static constexpr std::uintptr_t EndFrameOffset = 0x10;
            static constexpr std::uintptr_t PlayRate = 0x14;
            static constexpr std::uintptr_t bReverse = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"FirstLoopStartFrameOffset", 0x8, "StructProperty"},
            {"StartFrameOffset", 0xC, "StructProperty"},
            {"EndFrameOffset", 0x10, "StructProperty"},
            {"PlayRate", 0x14, "FloatProperty"},
            {"bReverse", 0x18, "BoolProperty"},
        }};
    };

    struct MovieSceneBaseCacheSection
    {
        static constexpr std::string_view Name = "MovieSceneBaseCacheSection";
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

    struct MovieSceneBaseCacheSectionTemplateParameters
    {
        static constexpr std::string_view Name = "MovieSceneBaseCacheSectionTemplateParameters";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SectionStartTime = 0x0;
            static constexpr std::uintptr_t SectionEndTime = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SectionStartTime", 0x0, "StructProperty"},
            {"SectionEndTime", 0x4, "StructProperty"},
        }};
    };

    struct MovieSceneBaseValueEvaluatorSystem
    {
        static constexpr std::string_view Name = "MovieSceneBaseValueEvaluatorSystem";
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

    struct MovieSceneBoolPropertySectionTemplate
    {
        static constexpr std::string_view Name = "MovieSceneBoolPropertySectionTemplate";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MovieScenePropertySectionTemplate";
        struct Offsets
        {
            static constexpr std::uintptr_t BoolCurve = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"BoolCurve", 0x38, "StructProperty"},
        }};
    };

    struct MovieSceneBoolPropertySystem
    {
        static constexpr std::string_view Name = "MovieSceneBoolPropertySystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieScenePropertySystem";
        struct Offsets
        {
            static constexpr std::uintptr_t InstantiatorSystem = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InstantiatorSystem", 0x48, "ObjectProperty"},
        }};
    };

    struct MovieSceneBoolTrack
    {
        static constexpr std::string_view Name = "MovieSceneBoolTrack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieScenePropertyTrack";
        struct Offsets
        {
            static constexpr std::uintptr_t SectionToKey = 0xF8;
            static constexpr std::uintptr_t PropertyBinding = 0x100;
            static constexpr std::uintptr_t Sections = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SectionToKey", 0xF8, "ObjectProperty"},
            {"PropertyBinding", 0x100, "StructProperty"},
            {"Sections", 0x110, "ArrayProperty"},
        }};
    };

    struct MovieSceneBytePropertySystem
    {
        static constexpr std::string_view Name = "MovieSceneBytePropertySystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieScenePropertySystem";
        struct Offsets
        {
            static constexpr std::uintptr_t InstantiatorSystem = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InstantiatorSystem", 0x48, "ObjectProperty"},
        }};
    };

    struct MovieSceneByteSection
    {
        static constexpr std::string_view Name = "MovieSceneByteSection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneSection";
        struct Offsets
        {
            static constexpr std::uintptr_t ByteCurve = 0x148;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ByteCurve", 0x148, "StructProperty"},
        }};
    };

    struct MovieSceneByteTrack
    {
        static constexpr std::string_view Name = "MovieSceneByteTrack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieScenePropertyTrack";
        struct Offsets
        {
            static constexpr std::uintptr_t Enum = 0x120;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Enum", 0x120, "ObjectProperty"},
        }};
    };

    struct MovieSceneCVarOverrides
    {
        static constexpr std::string_view Name = "MovieSceneCVarOverrides";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ValuesByCVar = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ValuesByCVar", 0x0, "MapProperty"},
        }};
    };

    struct MovieSceneCVarSection
    {
        static constexpr std::string_view Name = "MovieSceneCVarSection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneSection";
        struct Offsets
        {
            static constexpr std::uintptr_t ConsoleVariableCollections = 0x148;
            static constexpr std::uintptr_t ConsoleVariables = 0x158;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ConsoleVariableCollections", 0x148, "ArrayProperty"},
            {"ConsoleVariables", 0x158, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "GetString",
            "SetFromString",
        }};
    };

    struct MovieSceneCVarTrack
    {
        static constexpr std::string_view Name = "MovieSceneCVarTrack";
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

    struct MovieSceneCVarTrackInstance
    {
        static constexpr std::string_view Name = "MovieSceneCVarTrackInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneTrackInstance";
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

    struct MovieSceneCameraCutSection
    {
        static constexpr std::string_view Name = "MovieSceneCameraCutSection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneSection";
        struct Offsets
        {
            static constexpr std::uintptr_t bLockPreviousCamera = 0x148;
            static constexpr std::uintptr_t CameraGuid = 0x14C;
            static constexpr std::uintptr_t CameraBindingID = 0x15C;
            static constexpr std::uintptr_t InitialCameraCutTransform = 0x180;
            static constexpr std::uintptr_t bHasInitialCameraCutTransform = 0x1E0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"bLockPreviousCamera", 0x148, "BoolProperty"},
            {"CameraGuid", 0x14C, "StructProperty"},
            {"CameraBindingID", 0x15C, "StructProperty"},
            {"InitialCameraCutTransform", 0x180, "StructProperty"},
            {"bHasInitialCameraCutTransform", 0x1E0, "BoolProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "GetCameraBindingID",
            "SetCameraBindingID",
        }};
    };

    struct MovieSceneCameraCutTrack
    {
        static constexpr std::string_view Name = "MovieSceneCameraCutTrack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneNameableTrack";
        struct Offsets
        {
            static constexpr std::uintptr_t bCanBlend = 0xF8;
            static constexpr std::uintptr_t Sections = 0x100;
            static constexpr std::uintptr_t bAutoArrangeSections = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bCanBlend", 0xF8, "BoolProperty"},
            {"Sections", 0x100, "ArrayProperty"},
            {"bAutoArrangeSections", 0x110, "BoolProperty"},
        }};
    };

    struct MovieSceneCameraCutTrackInstance
    {
        static constexpr std::string_view Name = "MovieSceneCameraCutTrackInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneTrackInstance";
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

    struct MovieSceneCameraShakeComponentData
    {
        static constexpr std::string_view Name = "MovieSceneCameraShakeComponentData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SectionData = 0x0;
            static constexpr std::uintptr_t SectionStartTime = 0x28;
            static constexpr std::uintptr_t SectionEndTime = 0x2C;
            static constexpr std::uintptr_t SectionSignature = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"SectionData", 0x0, "StructProperty"},
            {"SectionStartTime", 0x28, "StructProperty"},
            {"SectionEndTime", 0x2C, "StructProperty"},
            {"SectionSignature", 0x30, "StructProperty"},
        }};
    };

    struct MovieSceneCameraShakeEvaluatorSystem
    {
        static constexpr std::string_view Name = "MovieSceneCameraShakeEvaluatorSystem";
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

    struct MovieSceneCameraShakeInstanceData
    {
        static constexpr std::string_view Name = "MovieSceneCameraShakeInstanceData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ShakeInstance = 0x0;
            static constexpr std::uintptr_t SectionSignature = 0x8;
            static constexpr std::uintptr_t bManagedByPreviewer = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ShakeInstance", 0x0, "ObjectProperty"},
            {"SectionSignature", 0x8, "StructProperty"},
            {"bManagedByPreviewer", 0x18, "BoolProperty"},
        }};
    };

    struct MovieSceneCameraShakeInstantiatorSystem
    {
        static constexpr std::string_view Name = "MovieSceneCameraShakeInstantiatorSystem";
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

    struct MovieSceneCameraShakeSection
    {
        static constexpr std::string_view Name = "MovieSceneCameraShakeSection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneSection";
        struct Offsets
        {
            static constexpr std::uintptr_t ShakeData = 0x148;
            static constexpr std::uintptr_t ShakeClass = 0x170;
            static constexpr std::uintptr_t PlayScale = 0x178;
            static constexpr std::uintptr_t Playspace = 0x17C;
            static constexpr std::uintptr_t UserDefinedPlaySpace = 0x180;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"ShakeData", 0x148, "StructProperty"},
            {"ShakeClass", 0x170, "ClassProperty"},
            {"PlayScale", 0x178, "FloatProperty"},
            {"Playspace", 0x17C, "EnumProperty"},
            {"UserDefinedPlaySpace", 0x180, "StructProperty"},
        }};
    };

    struct MovieSceneCameraShakeSectionData
    {
        static constexpr std::string_view Name = "MovieSceneCameraShakeSectionData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ShakeClass = 0x0;
            static constexpr std::uintptr_t PlayScale = 0x8;
            static constexpr std::uintptr_t Playspace = 0xC;
            static constexpr std::uintptr_t UserDefinedPlaySpace = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ShakeClass", 0x0, "ClassProperty"},
            {"PlayScale", 0x8, "FloatProperty"},
            {"Playspace", 0xC, "EnumProperty"},
            {"UserDefinedPlaySpace", 0x10, "StructProperty"},
        }};
    };

    struct MovieSceneCameraShakeSourceShakeSection
    {
        static constexpr std::string_view Name = "MovieSceneCameraShakeSourceShakeSection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneSection";
        struct Offsets
        {
            static constexpr std::uintptr_t ShakeData = 0x148;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ShakeData", 0x148, "StructProperty"},
        }};
    };

    struct MovieSceneCameraShakeSourceShakeTrack
    {
        static constexpr std::string_view Name = "MovieSceneCameraShakeSourceShakeTrack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneNameableTrack";
        struct Offsets
        {
            static constexpr std::uintptr_t CameraShakeSections = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CameraShakeSections", 0xF8, "ArrayProperty"},
        }};
    };

    struct MovieSceneCameraShakeSourceTrigger
    {
        static constexpr std::string_view Name = "MovieSceneCameraShakeSourceTrigger";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ShakeClass = 0x0;
            static constexpr std::uintptr_t PlayScale = 0x8;
            static constexpr std::uintptr_t Playspace = 0xC;
            static constexpr std::uintptr_t UserDefinedPlaySpace = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ShakeClass", 0x0, "ClassProperty"},
            {"PlayScale", 0x8, "FloatProperty"},
            {"Playspace", 0xC, "EnumProperty"},
            {"UserDefinedPlaySpace", 0x10, "StructProperty"},
        }};
    };

    struct MovieSceneCameraShakeSourceTriggerChannel
    {
        static constexpr std::string_view Name = "MovieSceneCameraShakeSourceTriggerChannel";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MovieSceneChannel";
        struct Offsets
        {
            static constexpr std::uintptr_t KeyTimes = 0x50;
            static constexpr std::uintptr_t KeyValues = 0x60;
            static constexpr std::uintptr_t KeyHandles = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"KeyTimes", 0x50, "ArrayProperty"},
            {"KeyValues", 0x60, "ArrayProperty"},
            {"KeyHandles", 0x70, "StructProperty"},
        }};
    };

    struct MovieSceneCameraShakeSourceTriggerSection
    {
        static constexpr std::string_view Name = "MovieSceneCameraShakeSourceTriggerSection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneSection";
        struct Offsets
        {
            static constexpr std::uintptr_t Channel = 0x148;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Channel", 0x148, "StructProperty"},
        }};
    };

    struct MovieSceneCameraShakeSourceTriggerTrack
    {
        static constexpr std::string_view Name = "MovieSceneCameraShakeSourceTriggerTrack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneTrack";
        struct Offsets
        {
            static constexpr std::uintptr_t Sections = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Sections", 0xF8, "ArrayProperty"},
        }};
    };

    struct MovieSceneCameraShakeTrack
    {
        static constexpr std::string_view Name = "MovieSceneCameraShakeTrack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneNameableTrack";
        struct Offsets
        {
            static constexpr std::uintptr_t CameraShakeSections = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CameraShakeSections", 0xF8, "ArrayProperty"},
        }};
    };

    struct MovieSceneCinematicShotSection
    {
        static constexpr std::string_view Name = "MovieSceneCinematicShotSection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneSubSection";
        struct Offsets
        {
            static constexpr std::uintptr_t ShotDisplayName = 0x6A8;
            static constexpr std::uintptr_t DisplayName = 0x6B8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ShotDisplayName", 0x6A8, "StrProperty"},
            {"DisplayName", 0x6B8, "TextProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "GetShotDisplayName",
            "SetShotDisplayName",
        }};
    };

    struct MovieSceneCinematicShotTrack
    {
        static constexpr std::string_view Name = "MovieSceneCinematicShotTrack";
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

    struct MovieSceneColorKeyStruct
    {
        static constexpr std::string_view Name = "MovieSceneColorKeyStruct";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MovieSceneKeyStruct";
        struct Offsets
        {
            static constexpr std::uintptr_t Color = 0x8;
            static constexpr std::uintptr_t time = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Color", 0x8, "StructProperty"},
            {"time", 0x18, "StructProperty"},
        }};
    };

    struct MovieSceneColorPropertySystem
    {
        static constexpr std::string_view Name = "MovieSceneColorPropertySystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieScenePropertySystem";
        struct Offsets
        {
            static constexpr std::uintptr_t InstantiatorSystem = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InstantiatorSystem", 0x48, "ObjectProperty"},
        }};
    };

    struct MovieSceneColorSection
    {
        static constexpr std::string_view Name = "MovieSceneColorSection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneSection";
        struct Offsets
        {
            static constexpr std::uintptr_t RedCurve = 0x148;
            static constexpr std::uintptr_t GreenCurve = 0x218;
            static constexpr std::uintptr_t BlueCurve = 0x2E8;
            static constexpr std::uintptr_t AlphaCurve = 0x3B8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"RedCurve", 0x148, "StructProperty"},
            {"GreenCurve", 0x218, "StructProperty"},
            {"BlueCurve", 0x2E8, "StructProperty"},
            {"AlphaCurve", 0x3B8, "StructProperty"},
        }};
    };

    struct MovieSceneColorTrack
    {
        static constexpr std::string_view Name = "MovieSceneColorTrack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieScenePropertyTrack";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsSlateColor = 0x120;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bIsSlateColor", 0x120, "BoolProperty"},
        }};
    };

    struct MovieSceneCommonAnimationTrack
    {
        static constexpr std::string_view Name = "MovieSceneCommonAnimationTrack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneNameableTrack";
        struct Offsets
        {
            static constexpr std::uintptr_t AnimationSections = 0xF8;
            static constexpr std::uintptr_t RootMotionParams = 0x110;
            static constexpr std::uintptr_t bBlendFirstChildOfRoot = 0x190;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"AnimationSections", 0xF8, "ArrayProperty"},
            {"RootMotionParams", 0x110, "StructProperty"},
            {"bBlendFirstChildOfRoot", 0x190, "BoolProperty"},
        }};
    };

    struct MovieSceneComponentAttachmentInvalidatorSystem
    {
        static constexpr std::string_view Name = "MovieSceneComponentAttachmentInvalidatorSystem";
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

    struct MovieSceneComponentAttachmentSystem
    {
        static constexpr std::string_view Name = "MovieSceneComponentAttachmentSystem";
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

    struct MovieSceneComponentMaterialParameterSection
    {
        static constexpr std::string_view Name = "MovieSceneComponentMaterialParameterSection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneSection";
        struct Offsets
        {
            static constexpr std::uintptr_t ScalarParameterInfosAndCurves = 0x148;
            static constexpr std::uintptr_t ColorParameterInfosAndCurves = 0x158;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ScalarParameterInfosAndCurves", 0x148, "ArrayProperty"},
            {"ColorParameterInfosAndCurves", 0x158, "ArrayProperty"},
        }};

        inline static constexpr std::array<std::string_view, 4> FunctionNames{{
            "AddColorParameterKey",
            "AddScalarParameterKey",
            "RemoveColorParameter",
            "RemoveScalarParameter",
        }};
    };

    struct MovieSceneComponentMaterialSystem
    {
        static constexpr std::string_view Name = "MovieSceneComponentMaterialSystem";
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

    struct MovieSceneComponentMaterialTrack
    {
        static constexpr std::string_view Name = "MovieSceneComponentMaterialTrack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneMaterialTrack";
        struct Offsets
        {
            static constexpr std::uintptr_t MaterialInfo = 0x120;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MaterialInfo", 0x120, "StructProperty"},
        }};
    };

    struct MovieSceneComponentMobilitySystem
    {
        static constexpr std::string_view Name = "MovieSceneComponentMobilitySystem";
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

    struct MovieSceneComponentTransformSystem
    {
        static constexpr std::string_view Name = "MovieSceneComponentTransformSystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieScenePropertySystem";
        struct Offsets
        {
            static constexpr std::uintptr_t InstantiatorSystem = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InstantiatorSystem", 0x48, "ObjectProperty"},
        }};
    };

    struct MovieSceneConsoleVariableCollection
    {
        static constexpr std::string_view Name = "MovieSceneConsoleVariableCollection";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Interface = 0x0;
            static constexpr std::uintptr_t bOnlyIncludeChecked = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Interface", 0x0, "InterfaceProperty"},
            {"bOnlyIncludeChecked", 0x10, "BoolProperty"},
        }};
    };

    struct MovieSceneConsoleVariableTrackInterface
    {
        static constexpr std::string_view Name = "MovieSceneConsoleVariableTrackInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MovieSceneConstrainedSection
    {
        static constexpr std::string_view Name = "MovieSceneConstrainedSection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MovieSceneConstraintSystem
    {
        static constexpr std::string_view Name = "MovieSceneConstraintSystem";
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

    struct MovieSceneCustomPrimitiveDataSection
    {
        static constexpr std::string_view Name = "MovieSceneCustomPrimitiveDataSection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneParameterSection";
        struct Offsets
        {
            static constexpr std::uintptr_t BoolParameterNamesAndCurves = 0x148;
            static constexpr std::uintptr_t ScalarParameterNamesAndCurves = 0x158;
            static constexpr std::uintptr_t Vector2DParameterNamesAndCurves = 0x168;
            static constexpr std::uintptr_t VectorParameterNamesAndCurves = 0x178;
            static constexpr std::uintptr_t ColorParameterNamesAndCurves = 0x188;
            static constexpr std::uintptr_t TransformParameterNamesAndCurves = 0x198;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"BoolParameterNamesAndCurves", 0x148, "ArrayProperty"},
            {"ScalarParameterNamesAndCurves", 0x158, "ArrayProperty"},
            {"Vector2DParameterNamesAndCurves", 0x168, "ArrayProperty"},
            {"VectorParameterNamesAndCurves", 0x178, "ArrayProperty"},
            {"ColorParameterNamesAndCurves", 0x188, "ArrayProperty"},
            {"TransformParameterNamesAndCurves", 0x198, "ArrayProperty"},
        }};
    };

    struct MovieSceneCustomPrimitiveDataSystem
    {
        static constexpr std::string_view Name = "MovieSceneCustomPrimitiveDataSystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneEntitySystem";
        struct Offsets
        {
            static constexpr std::uintptr_t DoubleBlenderSystem = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DoubleBlenderSystem", 0x110, "ObjectProperty"},
        }};
    };

    struct MovieSceneCustomPrimitiveDataTrack
    {
        static constexpr std::string_view Name = "MovieSceneCustomPrimitiveDataTrack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneNameableTrack";
        struct Offsets
        {
            static constexpr std::uintptr_t Sections = 0x108;
            static constexpr std::uintptr_t SectionToKey = 0x118;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Sections", 0x108, "ArrayProperty"},
            {"SectionToKey", 0x118, "ObjectProperty"},
        }};
    };

    struct MovieSceneDataLayerComponentData
    {
        static constexpr std::string_view Name = "MovieSceneDataLayerComponentData";
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

    struct MovieSceneDataLayerSection
    {
        static constexpr std::string_view Name = "MovieSceneDataLayerSection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneSection";
        struct Offsets
        {
            static constexpr std::uintptr_t DataLayerAssets = 0x148;
            static constexpr std::uintptr_t DesiredState = 0x158;
            static constexpr std::uintptr_t PrerollState = 0x159;
            static constexpr std::uintptr_t bFlushOnActivated = 0x15A;
            static constexpr std::uintptr_t bFlushOnUnload = 0x15B;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"DataLayerAssets", 0x148, "ArrayProperty"},
            {"DesiredState", 0x158, "EnumProperty"},
            {"PrerollState", 0x159, "EnumProperty"},
            {"bFlushOnActivated", 0x15A, "BoolProperty"},
            {"bFlushOnUnload", 0x15B, "BoolProperty"},
        }};

        inline static constexpr std::array<std::string_view, 12> FunctionNames{{
            "GetDataLayerAssets",
            "GetDesiredState",
            "GetFlushOnActivated",
            "GetFlushOnUnload",
            "GetPrerollState",
            "HasPreRoll",
            "SetDataLayerAssets",
            "SetDesiredState",
            "SetFlushOnActivated",
            "SetFlushOnUnload",
            "SetPrerollState",
            "ShouldFilterDataLayerAsset",
        }};
    };

    struct MovieSceneDataLayerSystem
    {
        static constexpr std::string_view Name = "MovieSceneDataLayerSystem";
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

    struct MovieSceneDataLayerTrack
    {
        static constexpr std::string_view Name = "MovieSceneDataLayerTrack";
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

    struct MovieSceneDecomposerTestObject
    {
        static constexpr std::string_view Name = "MovieSceneDecomposerTestObject";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t FloatProperty = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"FloatProperty", 0x28, "FloatProperty"},
        }};
    };

    struct MovieSceneDeferredComponentMovementSystem
    {
        static constexpr std::string_view Name = "MovieSceneDeferredComponentMovementSystem";
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

    struct MovieSceneDirectorBlueprintCondition
    {
        static constexpr std::string_view Name = "MovieSceneDirectorBlueprintCondition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneCondition";
        struct Offsets
        {
            static constexpr std::uintptr_t DirectorBlueprintConditionData = 0x60;
            static constexpr std::uintptr_t Scope = 0x88;
            static constexpr std::uintptr_t CheckFrequency = 0x89;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"DirectorBlueprintConditionData", 0x60, "StructProperty"},
            {"Scope", 0x88, "EnumProperty"},
            {"CheckFrequency", 0x89, "EnumProperty"},
        }};
    };

    struct MovieSceneDirectorBlueprintConditionData
    {
        static constexpr std::string_view Name = "MovieSceneDirectorBlueprintConditionData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Function = 0x0;
            static constexpr std::uintptr_t ConditionContextProperty = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Function", 0x0, "ObjectProperty"},
            {"ConditionContextProperty", 0x8, "FieldPathProperty"},
        }};
    };

    struct MovieSceneDirectorBlueprintConditionPayloadVariable
    {
        static constexpr std::string_view Name = "MovieSceneDirectorBlueprintConditionPayloadVariable";
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

    struct MovieSceneDoublePerlinNoiseChannel
    {
        static constexpr std::string_view Name = "MovieSceneDoublePerlinNoiseChannel";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MovieSceneChannel";
        struct Offsets
        {
            static constexpr std::uintptr_t PerlinNoiseParams = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PerlinNoiseParams", 0x50, "StructProperty"},
        }};
    };

    struct MovieSceneDoublePerlinNoiseChannelContainer
    {
        static constexpr std::string_view Name = "MovieSceneDoublePerlinNoiseChannelContainer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneChannelOverrideContainer";
        struct Offsets
        {
            static constexpr std::uintptr_t PerlinNoiseChannel = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PerlinNoiseChannel", 0x58, "StructProperty"},
        }};
    };

    struct MovieSceneDoublePropertySystem
    {
        static constexpr std::string_view Name = "MovieSceneDoublePropertySystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieScenePropertySystem";
        struct Offsets
        {
            static constexpr std::uintptr_t InstantiatorSystem = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InstantiatorSystem", 0x48, "ObjectProperty"},
        }};
    };

    struct MovieSceneDoubleSection
    {
        static constexpr std::string_view Name = "MovieSceneDoubleSection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneSection";
        struct Offsets
        {
            static constexpr std::uintptr_t DoubleCurve = 0x148;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DoubleCurve", 0x148, "StructProperty"},
        }};
    };

    struct MovieSceneDoubleTrack
    {
        static constexpr std::string_view Name = "MovieSceneDoubleTrack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieScenePropertyTrack";
        struct Offsets
        {
            static constexpr std::uintptr_t SectionToKey = 0xF8;
            static constexpr std::uintptr_t PropertyBinding = 0x100;
            static constexpr std::uintptr_t Sections = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SectionToKey", 0xF8, "ObjectProperty"},
            {"PropertyBinding", 0x100, "StructProperty"},
            {"Sections", 0x110, "ArrayProperty"},
        }};
    };

    struct MovieSceneDoubleVectorKeyStructBase
    {
        static constexpr std::string_view Name = "MovieSceneDoubleVectorKeyStructBase";
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

    struct MovieSceneDoubleVectorPropertySystem
    {
        static constexpr std::string_view Name = "MovieSceneDoubleVectorPropertySystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieScenePropertySystem";
        struct Offsets
        {
            static constexpr std::uintptr_t InstantiatorSystem = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InstantiatorSystem", 0x48, "ObjectProperty"},
        }};
    };

    struct MovieSceneDoubleVectorSection
    {
        static constexpr std::string_view Name = "MovieSceneDoubleVectorSection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneSection";
        struct Offsets
        {
            static constexpr std::uintptr_t Curves = 0x148;
            static constexpr std::uintptr_t ChannelsUsed = 0x4A8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Curves", 0x148, "StructProperty"},
            {"ChannelsUsed", 0x4A8, "IntProperty"},
        }};
    };

    struct MovieSceneDoubleVectorTrack
    {
        static constexpr std::string_view Name = "MovieSceneDoubleVectorTrack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieScenePropertyTrack";
        struct Offsets
        {
            static constexpr std::uintptr_t NumChannelsUsed = 0x120;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"NumChannelsUsed", 0x120, "IntProperty"},
        }};
    };

    struct MovieSceneEnumPropertySystem
    {
        static constexpr std::string_view Name = "MovieSceneEnumPropertySystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieScenePropertySystem";
        struct Offsets
        {
            static constexpr std::uintptr_t InstantiatorSystem = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InstantiatorSystem", 0x48, "ObjectProperty"},
        }};
    };

    struct MovieSceneEnumSection
    {
        static constexpr std::string_view Name = "MovieSceneEnumSection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneSection";
        struct Offsets
        {
            static constexpr std::uintptr_t EnumCurve = 0x148;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"EnumCurve", 0x148, "StructProperty"},
        }};
    };

    struct MovieSceneEnumTrack
    {
        static constexpr std::string_view Name = "MovieSceneEnumTrack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieScenePropertyTrack";
        struct Offsets
        {
            static constexpr std::uintptr_t Enum = 0x120;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Enum", 0x120, "ObjectProperty"},
        }};
    };

    struct MovieSceneEulerTransformPropertySystem
    {
        static constexpr std::string_view Name = "MovieSceneEulerTransformPropertySystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieScenePropertySystem";
        struct Offsets
        {
            static constexpr std::uintptr_t InstantiatorSystem = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InstantiatorSystem", 0x48, "ObjectProperty"},
        }};
    };

    struct MovieSceneEulerTransformTrack
    {
        static constexpr std::string_view Name = "MovieSceneEulerTransformTrack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieScenePropertyTrack";
        struct Offsets
        {
            static constexpr std::uintptr_t SectionToKey = 0xF8;
            static constexpr std::uintptr_t PropertyBinding = 0x100;
            static constexpr std::uintptr_t Sections = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SectionToKey", 0xF8, "ObjectProperty"},
            {"PropertyBinding", 0x100, "StructProperty"},
            {"Sections", 0x110, "ArrayProperty"},
        }};
    };

    struct MovieSceneEvent
    {
        static constexpr std::string_view Name = "MovieSceneEvent";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Ptrs = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Ptrs", 0x0, "StructProperty"},
        }};
    };

    struct MovieSceneEventChannel
    {
        static constexpr std::string_view Name = "MovieSceneEventChannel";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MovieSceneChannel";
        struct Offsets
        {
            static constexpr std::uintptr_t KeyTimes = 0x50;
            static constexpr std::uintptr_t KeyValues = 0x60;
            static constexpr std::uintptr_t KeyHandles = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"KeyTimes", 0x50, "ArrayProperty"},
            {"KeyValues", 0x60, "ArrayProperty"},
            {"KeyHandles", 0x70, "StructProperty"},
        }};
    };

    struct MovieSceneEventParameters
    {
        static constexpr std::string_view Name = "MovieSceneEventParameters";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MovieSceneEventPayloadVariable
    {
        static constexpr std::string_view Name = "MovieSceneEventPayloadVariable";
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

    struct MovieSceneEventPtrs
    {
        static constexpr std::string_view Name = "MovieSceneEventPtrs";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Function = 0x0;
            static constexpr std::uintptr_t BoundObjectProperty = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Function", 0x0, "ObjectProperty"},
            {"BoundObjectProperty", 0x8, "FieldPathProperty"},
        }};
    };

    struct MovieSceneEventRepeaterSection
    {
        static constexpr std::string_view Name = "MovieSceneEventRepeaterSection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneEventSectionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Event = 0x148;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Event", 0x148, "StructProperty"},
        }};
    };

    struct MovieSceneEventSection
    {
        static constexpr std::string_view Name = "MovieSceneEventSection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneSection";
        struct Offsets
        {
            static constexpr std::uintptr_t Events = 0x140;
            static constexpr std::uintptr_t EventData = 0x178;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Events", 0x140, "StructProperty"},
            {"EventData", 0x178, "StructProperty"},
        }};
    };

    struct MovieSceneEventSectionBase
    {
        static constexpr std::string_view Name = "MovieSceneEventSectionBase";
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

    struct MovieSceneEventSectionData
    {
        static constexpr std::string_view Name = "MovieSceneEventSectionData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MovieSceneChannel";
        struct Offsets
        {
            static constexpr std::uintptr_t Times = 0x50;
            static constexpr std::uintptr_t KeyValues = 0x60;
            static constexpr std::uintptr_t KeyHandles = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Times", 0x50, "ArrayProperty"},
            {"KeyValues", 0x60, "ArrayProperty"},
            {"KeyHandles", 0x70, "StructProperty"},
        }};
    };

    struct MovieSceneEventSectionTemplate
    {
        static constexpr std::string_view Name = "MovieSceneEventSectionTemplate";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MovieSceneEvalTemplate";
        struct Offsets
        {
            static constexpr std::uintptr_t EventData = 0x20;
            static constexpr std::uintptr_t bFireEventsWhenBackwards = 0xD8;
            static constexpr std::uintptr_t bFireEventsWhenForwards = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"EventData", 0x20, "StructProperty"},
            {"bFireEventsWhenBackwards", 0xD8, "BoolProperty"},
            {"bFireEventsWhenForwards", 0xD8, "BoolProperty"},
        }};
    };

    struct MovieSceneEventSystem
    {
        static constexpr std::string_view Name = "MovieSceneEventSystem";
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

    struct MovieSceneEventTrack
    {
        static constexpr std::string_view Name = "MovieSceneEventTrack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneNameableTrack";
        struct Offsets
        {
            static constexpr std::uintptr_t bFireEventsWhenBackwards = 0x108;
            static constexpr std::uintptr_t bFireEventsWhenForwards = 0x108;
            static constexpr std::uintptr_t EventPosition = 0x10C;
            static constexpr std::uintptr_t Sections = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bFireEventsWhenBackwards", 0x108, "BoolProperty"},
            {"bFireEventsWhenForwards", 0x108, "BoolProperty"},
            {"EventPosition", 0x10C, "EnumProperty"},
            {"Sections", 0x110, "ArrayProperty"},
        }};
    };

    struct MovieSceneEventTriggerData
    {
        static constexpr std::string_view Name = "MovieSceneEventTriggerData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Ptrs = 0x0;
            static constexpr std::uintptr_t ObjectBindingID = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Ptrs", 0x0, "StructProperty"},
            {"ObjectBindingID", 0x28, "StructProperty"},
        }};
    };

    struct MovieSceneEventTriggerSection
    {
        static constexpr std::string_view Name = "MovieSceneEventTriggerSection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneEventSectionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t EventChannel = 0x148;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"EventChannel", 0x148, "StructProperty"},
        }};
    };

    struct MovieSceneFadeSection
    {
        static constexpr std::string_view Name = "MovieSceneFadeSection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneSection";
        struct Offsets
        {
            static constexpr std::uintptr_t FloatCurve = 0x148;
            static constexpr std::uintptr_t FadeColor = 0x218;
            static constexpr std::uintptr_t bFadeAudio = 0x228;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"FloatCurve", 0x148, "StructProperty"},
            {"FadeColor", 0x218, "StructProperty"},
            {"bFadeAudio", 0x228, "BoolProperty"},
        }};
    };

    struct MovieSceneFadeSystem
    {
        static constexpr std::string_view Name = "MovieSceneFadeSystem";
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

    struct MovieSceneFadeTrack
    {
        static constexpr std::string_view Name = "MovieSceneFadeTrack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneFloatTrack";
        struct Offsets
        {
            static constexpr std::uintptr_t SectionToKey = 0xF8;
            static constexpr std::uintptr_t PropertyBinding = 0x100;
            static constexpr std::uintptr_t Sections = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SectionToKey", 0xF8, "ObjectProperty"},
            {"PropertyBinding", 0x100, "StructProperty"},
            {"Sections", 0x110, "ArrayProperty"},
        }};
    };

    struct MovieSceneFadeTrackTestLibrary
    {
        static constexpr std::string_view Name = "MovieSceneFadeTrackTestLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "GetManualFadeAmount",
        }};
    };

    struct MovieSceneFloatPerlinNoiseChannel
    {
        static constexpr std::string_view Name = "MovieSceneFloatPerlinNoiseChannel";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MovieSceneChannel";
        struct Offsets
        {
            static constexpr std::uintptr_t PerlinNoiseParams = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PerlinNoiseParams", 0x50, "StructProperty"},
        }};
    };

    struct MovieSceneFloatPerlinNoiseChannelContainer
    {
        static constexpr std::string_view Name = "MovieSceneFloatPerlinNoiseChannelContainer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneChannelOverrideContainer";
        struct Offsets
        {
            static constexpr std::uintptr_t PerlinNoiseChannel = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PerlinNoiseChannel", 0x58, "StructProperty"},
        }};
    };

    struct MovieSceneFloatPropertySystem
    {
        static constexpr std::string_view Name = "MovieSceneFloatPropertySystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieScenePropertySystem";
        struct Offsets
        {
            static constexpr std::uintptr_t InstantiatorSystem = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InstantiatorSystem", 0x48, "ObjectProperty"},
        }};
    };

    struct MovieSceneFloatSection
    {
        static constexpr std::string_view Name = "MovieSceneFloatSection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneSection";
        struct Offsets
        {
            static constexpr std::uintptr_t FloatCurve = 0x150;
            static constexpr std::uintptr_t OverrideRegistry = 0x220;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"FloatCurve", 0x150, "StructProperty"},
            {"OverrideRegistry", 0x220, "ObjectProperty"},
        }};
    };

    struct MovieSceneFloatTrack
    {
        static constexpr std::string_view Name = "MovieSceneFloatTrack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieScenePropertyTrack";
        struct Offsets
        {
            static constexpr std::uintptr_t SectionToKey = 0xF8;
            static constexpr std::uintptr_t PropertyBinding = 0x100;
            static constexpr std::uintptr_t Sections = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SectionToKey", 0xF8, "ObjectProperty"},
            {"PropertyBinding", 0x100, "StructProperty"},
            {"Sections", 0x110, "ArrayProperty"},
        }};
    };

    struct MovieSceneFloatVectorKeyStructBase
    {
        static constexpr std::string_view Name = "MovieSceneFloatVectorKeyStructBase";
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

    struct MovieSceneFloatVectorPropertySystem
    {
        static constexpr std::string_view Name = "MovieSceneFloatVectorPropertySystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieScenePropertySystem";
        struct Offsets
        {
            static constexpr std::uintptr_t InstantiatorSystem = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InstantiatorSystem", 0x48, "ObjectProperty"},
        }};
    };

    struct MovieSceneFloatVectorSection
    {
        static constexpr std::string_view Name = "MovieSceneFloatVectorSection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneSection";
        struct Offsets
        {
            static constexpr std::uintptr_t Curves = 0x148;
            static constexpr std::uintptr_t ChannelsUsed = 0x488;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Curves", 0x148, "StructProperty"},
            {"ChannelsUsed", 0x488, "IntProperty"},
        }};
    };

    struct MovieSceneFloatVectorTrack
    {
        static constexpr std::string_view Name = "MovieSceneFloatVectorTrack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieScenePropertyTrack";
        struct Offsets
        {
            static constexpr std::uintptr_t NumChannelsUsed = 0x120;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"NumChannelsUsed", 0x120, "IntProperty"},
        }};
    };

    struct MovieSceneHierarchicalBiasSystem
    {
        static constexpr std::string_view Name = "MovieSceneHierarchicalBiasSystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneEntityInstantiatorSystem";
        struct Offsets
        {
            static constexpr std::uintptr_t GroupingSystem = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"GroupingSystem", 0x40, "ObjectProperty"},
        }};
    };

    struct MovieSceneHierarchicalEasingFinalizationSystem
    {
        static constexpr std::string_view Name = "MovieSceneHierarchicalEasingFinalizationSystem";
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

    struct MovieSceneHierarchicalEasingInstantiatorSystem
    {
        static constexpr std::string_view Name = "MovieSceneHierarchicalEasingInstantiatorSystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneEntityInstantiatorSystem";
        struct Offsets
        {
            static constexpr std::uintptr_t EvaluatorSystem = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"EvaluatorSystem", 0x88, "ObjectProperty"},
        }};
    };

    struct MovieSceneIntegerPropertySystem
    {
        static constexpr std::string_view Name = "MovieSceneIntegerPropertySystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieScenePropertySystem";
        struct Offsets
        {
            static constexpr std::uintptr_t InstantiatorSystem = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InstantiatorSystem", 0x48, "ObjectProperty"},
        }};
    };

    struct MovieSceneIntegerSection
    {
        static constexpr std::string_view Name = "MovieSceneIntegerSection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneSection";
        struct Offsets
        {
            static constexpr std::uintptr_t IntegerCurve = 0x148;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"IntegerCurve", 0x148, "StructProperty"},
        }};
    };

    struct MovieSceneIntegerTrack
    {
        static constexpr std::string_view Name = "MovieSceneIntegerTrack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieScenePropertyTrack";
        struct Offsets
        {
            static constexpr std::uintptr_t SectionToKey = 0xF8;
            static constexpr std::uintptr_t PropertyBinding = 0x100;
            static constexpr std::uintptr_t Sections = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SectionToKey", 0xF8, "ObjectProperty"},
            {"PropertyBinding", 0x100, "StructProperty"},
            {"Sections", 0x110, "ArrayProperty"},
        }};
    };

    struct MovieSceneInterrogatedPropertyInstantiatorSystem
    {
        static constexpr std::string_view Name = "MovieSceneInterrogatedPropertyInstantiatorSystem";
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

    struct MovieSceneKeyExemptionsSection
    {
        static constexpr std::string_view Name = "MovieSceneKeyExemptionsSection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MovieSceneLevelVisibilitySection
    {
        static constexpr std::string_view Name = "MovieSceneLevelVisibilitySection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneSection";
        struct Offsets
        {
            static constexpr std::uintptr_t Visibility = 0x148;
            static constexpr std::uintptr_t LevelNames = 0x150;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Visibility", 0x148, "EnumProperty"},
            {"LevelNames", 0x150, "ArrayProperty"},
        }};

        inline static constexpr std::array<std::string_view, 4> FunctionNames{{
            "GetLevelNames",
            "GetVisibility",
            "SetLevelNames",
            "SetVisibility",
        }};
    };

    struct MovieSceneLevelVisibilitySystem
    {
        static constexpr std::string_view Name = "MovieSceneLevelVisibilitySystem";
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

    struct MovieSceneLevelVisibilityTrack
    {
        static constexpr std::string_view Name = "MovieSceneLevelVisibilityTrack";
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

    struct MovieSceneMaterialParameterCollectionSystem
    {
        static constexpr std::string_view Name = "MovieSceneMaterialParameterCollectionSystem";
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

    struct MovieSceneMaterialParameterCollectionTrack
    {
        static constexpr std::string_view Name = "MovieSceneMaterialParameterCollectionTrack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneMaterialTrack";
        struct Offsets
        {
            static constexpr std::uintptr_t MPC = 0x120;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MPC", 0x120, "ObjectProperty"},
        }};
    };

    struct MovieSceneMaterialParameterEvaluationSystem
    {
        static constexpr std::string_view Name = "MovieSceneMaterialParameterEvaluationSystem";
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

    struct MovieSceneMaterialParameterInstantiatorSystem
    {
        static constexpr std::string_view Name = "MovieSceneMaterialParameterInstantiatorSystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneEntityInstantiatorSystem";
        struct Offsets
        {
            static constexpr std::uintptr_t DoubleBlenderSystem = 0x1D0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DoubleBlenderSystem", 0x1D0, "ObjectProperty"},
        }};
    };

    struct MovieSceneMaterialTrack
    {
        static constexpr std::string_view Name = "MovieSceneMaterialTrack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneNameableTrack";
        struct Offsets
        {
            static constexpr std::uintptr_t Sections = 0xF8;
            static constexpr std::uintptr_t SectionToKey = 0x108;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Sections", 0xF8, "ArrayProperty"},
            {"SectionToKey", 0x108, "ObjectProperty"},
        }};
    };

    struct MovieSceneMixedAnimationTarget
    {
        static constexpr std::string_view Name = "MovieSceneMixedAnimationTarget";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MovieSceneMotionVectorSimulationSystem
    {
        static constexpr std::string_view Name = "MovieSceneMotionVectorSimulationSystem";
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

    struct MovieSceneObjectPropertySection
    {
        static constexpr std::string_view Name = "MovieSceneObjectPropertySection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneSection";
        struct Offsets
        {
            static constexpr std::uintptr_t ObjectChannel = 0x148;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ObjectChannel", 0x148, "StructProperty"},
        }};
    };

    struct MovieSceneObjectPropertySystem
    {
        static constexpr std::string_view Name = "MovieSceneObjectPropertySystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieScenePropertySystem";
        struct Offsets
        {
            static constexpr std::uintptr_t InstantiatorSystem = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InstantiatorSystem", 0x48, "ObjectProperty"},
        }};
    };

    struct MovieSceneObjectPropertyTrack
    {
        static constexpr std::string_view Name = "MovieSceneObjectPropertyTrack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieScenePropertyTrack";
        struct Offsets
        {
            static constexpr std::uintptr_t PropertyClass = 0x120;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PropertyClass", 0x120, "ClassProperty"},
        }};
    };

    struct MovieSceneParameterSection
    {
        static constexpr std::string_view Name = "MovieSceneParameterSection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneSection";
        struct Offsets
        {
            static constexpr std::uintptr_t BoolParameterNamesAndCurves = 0x148;
            static constexpr std::uintptr_t ScalarParameterNamesAndCurves = 0x158;
            static constexpr std::uintptr_t Vector2DParameterNamesAndCurves = 0x168;
            static constexpr std::uintptr_t VectorParameterNamesAndCurves = 0x178;
            static constexpr std::uintptr_t ColorParameterNamesAndCurves = 0x188;
            static constexpr std::uintptr_t TransformParameterNamesAndCurves = 0x198;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"BoolParameterNamesAndCurves", 0x148, "ArrayProperty"},
            {"ScalarParameterNamesAndCurves", 0x158, "ArrayProperty"},
            {"Vector2DParameterNamesAndCurves", 0x168, "ArrayProperty"},
            {"VectorParameterNamesAndCurves", 0x178, "ArrayProperty"},
            {"ColorParameterNamesAndCurves", 0x188, "ArrayProperty"},
            {"TransformParameterNamesAndCurves", 0x198, "ArrayProperty"},
        }};

        inline static constexpr std::array<std::string_view, 13> FunctionNames{{
            "AddBoolParameterKey",
            "AddColorParameterKey",
            "AddScalarParameterKey",
            "AddTransformParameterKey",
            "AddVector2DParameterKey",
            "AddVectorParameterKey",
            "GetParameterNames",
            "RemoveBoolParameter",
            "RemoveColorParameter",
            "RemoveScalarParameter",
            "RemoveTransformParameter",
            "RemoveVector2DParameter",
            "RemoveVectorParameter",
        }};
    };

    struct MovieSceneParameterSectionExtender
    {
        static constexpr std::string_view Name = "MovieSceneParameterSectionExtender";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MovieSceneParameterSectionTemplate
    {
        static constexpr std::string_view Name = "MovieSceneParameterSectionTemplate";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MovieSceneEvalTemplate";
        struct Offsets
        {
            static constexpr std::uintptr_t Scalars = 0x20;
            static constexpr std::uintptr_t Bools = 0x30;
            static constexpr std::uintptr_t Vector2Ds = 0x40;
            static constexpr std::uintptr_t Vectors = 0x50;
            static constexpr std::uintptr_t Colors = 0x60;
            static constexpr std::uintptr_t Transforms = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Scalars", 0x20, "ArrayProperty"},
            {"Bools", 0x30, "ArrayProperty"},
            {"Vector2Ds", 0x40, "ArrayProperty"},
            {"Vectors", 0x50, "ArrayProperty"},
            {"Colors", 0x60, "ArrayProperty"},
            {"Transforms", 0x70, "ArrayProperty"},
        }};
    };

    struct MovieScenePartialEvaluationTestObject
    {
        static constexpr std::string_view Name = "MovieScenePartialEvaluationTestObject";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t FloatProperty = 0x28;
            static constexpr std::uintptr_t VectorProperty = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"FloatProperty", 0x28, "FloatProperty"},
            {"VectorProperty", 0x30, "StructProperty"},
        }};
    };

    struct MovieSceneParticleChannel
    {
        static constexpr std::string_view Name = "MovieSceneParticleChannel";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MovieSceneByteChannel";
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

    struct MovieSceneParticleParameterSectionTemplate
    {
        static constexpr std::string_view Name = "MovieSceneParticleParameterSectionTemplate";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MovieSceneParameterSectionTemplate";
        struct Offsets
        {
            static constexpr std::uintptr_t Scalars = 0x20;
            static constexpr std::uintptr_t Bools = 0x30;
            static constexpr std::uintptr_t Vector2Ds = 0x40;
            static constexpr std::uintptr_t Vectors = 0x50;
            static constexpr std::uintptr_t Colors = 0x60;
            static constexpr std::uintptr_t Transforms = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Scalars", 0x20, "ArrayProperty"},
            {"Bools", 0x30, "ArrayProperty"},
            {"Vector2Ds", 0x40, "ArrayProperty"},
            {"Vectors", 0x50, "ArrayProperty"},
            {"Colors", 0x60, "ArrayProperty"},
            {"Transforms", 0x70, "ArrayProperty"},
        }};
    };

    struct MovieSceneParticleParameterTrack
    {
        static constexpr std::string_view Name = "MovieSceneParticleParameterTrack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneNameableTrack";
        struct Offsets
        {
            static constexpr std::uintptr_t Sections = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Sections", 0x100, "ArrayProperty"},
        }};
    };

    struct MovieSceneParticleSection
    {
        static constexpr std::string_view Name = "MovieSceneParticleSection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneSection";
        struct Offsets
        {
            static constexpr std::uintptr_t ParticleKeys = 0x140;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ParticleKeys", 0x140, "StructProperty"},
        }};
    };

    struct MovieSceneParticleSectionTemplate
    {
        static constexpr std::string_view Name = "MovieSceneParticleSectionTemplate";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MovieSceneEvalTemplate";
        struct Offsets
        {
            static constexpr std::uintptr_t ParticleKeys = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ParticleKeys", 0x20, "StructProperty"},
        }};
    };

    struct MovieSceneParticleTrack
    {
        static constexpr std::string_view Name = "MovieSceneParticleTrack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneNameableTrack";
        struct Offsets
        {
            static constexpr std::uintptr_t ParticleSections = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ParticleSections", 0x100, "ArrayProperty"},
        }};
    };

    struct MovieScenePiecewiseBoolBlenderSystem
    {
        static constexpr std::string_view Name = "MovieScenePiecewiseBoolBlenderSystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneBlenderSystem";
        struct Offsets
        {
            static constexpr std::uintptr_t Linker = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Linker", 0x28, "ObjectProperty"},
        }};
    };

    struct MovieScenePiecewiseByteBlenderSystem
    {
        static constexpr std::string_view Name = "MovieScenePiecewiseByteBlenderSystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneBlenderSystem";
        struct Offsets
        {
            static constexpr std::uintptr_t Linker = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Linker", 0x28, "ObjectProperty"},
        }};
    };

    struct MovieScenePiecewiseDoubleBlenderSystem
    {
        static constexpr std::string_view Name = "MovieScenePiecewiseDoubleBlenderSystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneBlenderSystem";
        struct Offsets
        {
            static constexpr std::uintptr_t Linker = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Linker", 0x28, "ObjectProperty"},
        }};
    };

    struct MovieScenePiecewiseEnumBlenderSystem
    {
        static constexpr std::string_view Name = "MovieScenePiecewiseEnumBlenderSystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneBlenderSystem";
        struct Offsets
        {
            static constexpr std::uintptr_t Linker = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Linker", 0x28, "ObjectProperty"},
        }};
    };

    struct MovieScenePiecewiseIntegerBlenderSystem
    {
        static constexpr std::string_view Name = "MovieScenePiecewiseIntegerBlenderSystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneBlenderSystem";
        struct Offsets
        {
            static constexpr std::uintptr_t Linker = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Linker", 0x28, "ObjectProperty"},
        }};
    };

    struct MovieScenePlatformCondition
    {
        static constexpr std::string_view Name = "MovieScenePlatformCondition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneCondition";
        struct Offsets
        {
            static constexpr std::uintptr_t ValidPlatforms = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ValidPlatforms", 0x60, "ArrayProperty"},
        }};
    };

    struct MovieScenePostEvalEventSystem
    {
        static constexpr std::string_view Name = "MovieScenePostEvalEventSystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneEventSystem";
        struct Offsets
        {
            static constexpr std::uintptr_t Linker = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Linker", 0x28, "ObjectProperty"},
        }};
    };

    struct MovieScenePostSpawnEventSystem
    {
        static constexpr std::string_view Name = "MovieScenePostSpawnEventSystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneEventSystem";
        struct Offsets
        {
            static constexpr std::uintptr_t Linker = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Linker", 0x28, "ObjectProperty"},
        }};
    };

    struct MovieScenePreAnimatedMaterialParameters
    {
        static constexpr std::string_view Name = "MovieScenePreAnimatedMaterialParameters";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t PreviousMaterial = 0x0;
            static constexpr std::uintptr_t SoftPreviousMaterial = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PreviousMaterial", 0x0, "ObjectProperty"},
            {"SoftPreviousMaterial", 0x8, "SoftObjectProperty"},
        }};
    };

    struct MovieScenePreSpawnEventSystem
    {
        static constexpr std::string_view Name = "MovieScenePreSpawnEventSystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneEventSystem";
        struct Offsets
        {
            static constexpr std::uintptr_t Linker = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Linker", 0x28, "ObjectProperty"},
        }};
    };

    struct MovieScenePredictionSystem
    {
        static constexpr std::string_view Name = "MovieScenePredictionSystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneEntitySystem";
        struct Offsets
        {
            static constexpr std::uintptr_t PendingPredictions = 0x90;
            static constexpr std::uintptr_t ProcessingPredictions = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PendingPredictions", 0x90, "ArrayProperty"},
            {"ProcessingPredictions", 0xA0, "ArrayProperty"},
        }};
    };

    struct MovieScenePrimitiveMaterialSection
    {
        static constexpr std::string_view Name = "MovieScenePrimitiveMaterialSection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneSection";
        struct Offsets
        {
            static constexpr std::uintptr_t MaterialChannel = 0x148;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MaterialChannel", 0x148, "StructProperty"},
        }};
    };

    struct MovieScenePrimitiveMaterialTrack
    {
        static constexpr std::string_view Name = "MovieScenePrimitiveMaterialTrack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieScenePropertyTrack";
        struct Offsets
        {
            static constexpr std::uintptr_t MaterialInfo = 0x120;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MaterialInfo", 0x120, "StructProperty"},
        }};
    };

    struct MovieScenePropertyInstantiatorSystem
    {
        static constexpr std::string_view Name = "MovieScenePropertyInstantiatorSystem";
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

    struct MovieScenePropertyNotificationSystem
    {
        static constexpr std::string_view Name = "MovieScenePropertyNotificationSystem";
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

    struct MovieScenePropertySystem
    {
        static constexpr std::string_view Name = "MovieScenePropertySystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneEntitySystem";
        struct Offsets
        {
            static constexpr std::uintptr_t InstantiatorSystem = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InstantiatorSystem", 0x48, "ObjectProperty"},
        }};
    };

    struct MovieScenePropertyTrack
    {
        static constexpr std::string_view Name = "MovieScenePropertyTrack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneNameableTrack";
        struct Offsets
        {
            static constexpr std::uintptr_t SectionToKey = 0xF8;
            static constexpr std::uintptr_t PropertyBinding = 0x100;
            static constexpr std::uintptr_t Sections = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SectionToKey", 0xF8, "ObjectProperty"},
            {"PropertyBinding", 0x100, "StructProperty"},
            {"Sections", 0x110, "ArrayProperty"},
        }};
    };

    struct MovieSceneQuaternionBlenderSystem
    {
        static constexpr std::string_view Name = "MovieSceneQuaternionBlenderSystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneBlenderSystem";
        struct Offsets
        {
            static constexpr std::uintptr_t Linker = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Linker", 0x28, "ObjectProperty"},
        }};
    };

    struct MovieSceneQuaternionInterpolationRotationSystem
    {
        static constexpr std::string_view Name = "MovieSceneQuaternionInterpolationRotationSystem";
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

    struct MovieSceneReplaceableActorBinding
    {
        static constexpr std::string_view Name = "MovieSceneReplaceableActorBinding";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneReplaceableBindingBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MovieSceneReplaceableActorBinding_BPBase
    {
        static constexpr std::string_view Name = "MovieSceneReplaceableActorBinding_BPBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneReplaceableBindingBase";
        struct Offsets
        {
            static constexpr std::uintptr_t CustomBindingPriority = 0x28;
            static constexpr std::uintptr_t PreviewSpawnableType = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CustomBindingPriority", 0x28, "IntProperty"},
            {"PreviewSpawnableType", 0x30, "ClassProperty"},
        }};

        inline static constexpr std::array<std::string_view, 3> FunctionNames{{
            "BP_InitReplaceableBinding",
            "BP_ResolveRuntimeBinding",
            "BP_SupportsBindingCreationFromObject",
        }};
    };

    struct MovieSceneReplaceableDirectorBlueprintBinding
    {
        static constexpr std::string_view Name = "MovieSceneReplaceableDirectorBlueprintBinding";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneReplaceableBindingBase";
        struct Offsets
        {
            static constexpr std::uintptr_t DynamicBinding = 0x28;
            static constexpr std::uintptr_t PreviewSpawnableType = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DynamicBinding", 0x28, "StructProperty"},
            {"PreviewSpawnableType", 0x50, "ClassProperty"},
        }};
    };

    struct MovieSceneRotatorPropertySystem
    {
        static constexpr std::string_view Name = "MovieSceneRotatorPropertySystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieScenePropertySystem";
        struct Offsets
        {
            static constexpr std::uintptr_t InstantiatorSystem = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InstantiatorSystem", 0x48, "ObjectProperty"},
        }};
    };

    struct MovieSceneRotatorSection
    {
        static constexpr std::string_view Name = "MovieSceneRotatorSection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneSection";
        struct Offsets
        {
            static constexpr std::uintptr_t Rotation = 0x148;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Rotation", 0x148, "StructProperty"},
        }};
    };

    struct MovieSceneRotatorTrack
    {
        static constexpr std::string_view Name = "MovieSceneRotatorTrack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieScenePropertyTrack";
        struct Offsets
        {
            static constexpr std::uintptr_t SectionToKey = 0xF8;
            static constexpr std::uintptr_t PropertyBinding = 0x100;
            static constexpr std::uintptr_t Sections = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SectionToKey", 0xF8, "ObjectProperty"},
            {"PropertyBinding", 0x100, "StructProperty"},
            {"Sections", 0x110, "ArrayProperty"},
        }};
    };

    struct MovieSceneScalabilityCondition
    {
        static constexpr std::string_view Name = "MovieSceneScalabilityCondition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneCondition";
        struct Offsets
        {
            static constexpr std::uintptr_t Group = 0x60;
            static constexpr std::uintptr_t Operator = 0x61;
            static constexpr std::uintptr_t Level = 0x62;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Group", 0x60, "EnumProperty"},
            {"Operator", 0x61, "EnumProperty"},
            {"Level", 0x62, "EnumProperty"},
        }};
    };

    struct MovieSceneSectionsToKey
    {
        static constexpr std::string_view Name = "MovieSceneSectionsToKey";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MovieSceneSkeletalAnimRootMotionTrackParams
    {
        static constexpr std::string_view Name = "MovieSceneSkeletalAnimRootMotionTrackParams";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MovieSceneSkeletalAnimationComponentData
    {
        static constexpr std::string_view Name = "MovieSceneSkeletalAnimationComponentData";
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

    struct MovieSceneSkeletalAnimationParams
    {
        static constexpr std::string_view Name = "MovieSceneSkeletalAnimationParams";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Animation = 0x0;
            static constexpr std::uintptr_t FirstLoopStartFrameOffset = 0x8;
            static constexpr std::uintptr_t StartFrameOffset = 0xC;
            static constexpr std::uintptr_t EndFrameOffset = 0x10;
            static constexpr std::uintptr_t PlayRate = 0x18;
            static constexpr std::uintptr_t bReverse = 0x20;
            static constexpr std::uintptr_t SlotName = 0x24;
            static constexpr std::uintptr_t MirrorDataTable = 0x28;
            static constexpr std::uintptr_t Weight = 0x30;
            static constexpr std::uintptr_t bSkipAnimNotifiers = 0x100;
            static constexpr std::uintptr_t bForceCustomMode = 0x101;
            static constexpr std::uintptr_t SwapRootBone = 0x102;
            static constexpr std::uintptr_t bLinearPlaybackWhenScaled = 0x103;
            static constexpr std::uintptr_t StartOffset = 0x104;
            static constexpr std::uintptr_t EndOffset = 0x108;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"Animation", 0x0, "ObjectProperty"},
            {"FirstLoopStartFrameOffset", 0x8, "StructProperty"},
            {"StartFrameOffset", 0xC, "StructProperty"},
            {"EndFrameOffset", 0x10, "StructProperty"},
            {"PlayRate", 0x18, "StructProperty"},
            {"bReverse", 0x20, "BoolProperty"},
            {"SlotName", 0x24, "NameProperty"},
            {"MirrorDataTable", 0x28, "ObjectProperty"},
            {"Weight", 0x30, "StructProperty"},
            {"bSkipAnimNotifiers", 0x100, "BoolProperty"},
            {"bForceCustomMode", 0x101, "BoolProperty"},
            {"SwapRootBone", 0x102, "EnumProperty"},
            {"bLinearPlaybackWhenScaled", 0x103, "BoolProperty"},
            {"StartOffset", 0x104, "FloatProperty"},
            {"EndOffset", 0x108, "FloatProperty"},
        }};
    };

    struct MovieSceneSkeletalAnimationSection
    {
        static constexpr std::string_view Name = "MovieSceneSkeletalAnimationSection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneSection";
        struct Offsets
        {
            static constexpr std::uintptr_t Params = 0x148;
            static constexpr std::uintptr_t AnimSequence = 0x258;
            static constexpr std::uintptr_t Animation = 0x260;
            static constexpr std::uintptr_t StartOffset = 0x268;
            static constexpr std::uintptr_t EndOffset = 0x26C;
            static constexpr std::uintptr_t PlayRate = 0x270;
            static constexpr std::uintptr_t bReverse = 0x274;
            static constexpr std::uintptr_t SlotName = 0x278;
            static constexpr std::uintptr_t StartLocationOffset = 0x280;
            static constexpr std::uintptr_t StartRotationOffset = 0x298;
            static constexpr std::uintptr_t MatchedBoneName = 0x2B0;
            static constexpr std::uintptr_t MatchedLocationOffset = 0x2B8;
            static constexpr std::uintptr_t MatchedRotationOffset = 0x2D0;
            static constexpr std::uintptr_t bDebugForceTickPose = 0x2E8;
            static constexpr std::uintptr_t bMatchIncludeZHeight = 0x2E8;
            static constexpr std::uintptr_t bMatchRotationPitch = 0x2E8;
            static constexpr std::uintptr_t bMatchRotationRoll = 0x2E8;
            static constexpr std::uintptr_t bMatchRotationYaw = 0x2E8;
            static constexpr std::uintptr_t bMatchTranslation = 0x2E8;
            static constexpr std::uintptr_t bMatchWithPrevious = 0x2E8;
        };

        inline static constexpr std::array<PropertyInfo, 20> Properties{{
            {"Params", 0x148, "StructProperty"},
            {"AnimSequence", 0x258, "ObjectProperty"},
            {"Animation", 0x260, "ObjectProperty"},
            {"StartOffset", 0x268, "FloatProperty"},
            {"EndOffset", 0x26C, "FloatProperty"},
            {"PlayRate", 0x270, "FloatProperty"},
            {"bReverse", 0x274, "BoolProperty"},
            {"SlotName", 0x278, "NameProperty"},
            {"StartLocationOffset", 0x280, "StructProperty"},
            {"StartRotationOffset", 0x298, "StructProperty"},
            {"MatchedBoneName", 0x2B0, "NameProperty"},
            {"MatchedLocationOffset", 0x2B8, "StructProperty"},
            {"MatchedRotationOffset", 0x2D0, "StructProperty"},
            {"bDebugForceTickPose", 0x2E8, "BoolProperty"},
            {"bMatchIncludeZHeight", 0x2E8, "BoolProperty"},
            {"bMatchRotationPitch", 0x2E8, "BoolProperty"},
            {"bMatchRotationRoll", 0x2E8, "BoolProperty"},
            {"bMatchRotationYaw", 0x2E8, "BoolProperty"},
            {"bMatchTranslation", 0x2E8, "BoolProperty"},
            {"bMatchWithPrevious", 0x2E8, "BoolProperty"},
        }};
    };

    struct MovieSceneSkeletalAnimationSystem
    {
        static constexpr std::string_view Name = "MovieSceneSkeletalAnimationSystem";
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

    struct MovieSceneSkeletalAnimationTrack
    {
        static constexpr std::string_view Name = "MovieSceneSkeletalAnimationTrack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneCommonAnimationTrack";
        struct Offsets
        {
            static constexpr std::uintptr_t bUseLegacySectionIndexBlend = 0x1A0;
            static constexpr std::uintptr_t SwapRootBone = 0x1A1;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bUseLegacySectionIndexBlend", 0x1A0, "BoolProperty"},
            {"SwapRootBone", 0x1A1, "EnumProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "GetSwapRootBone",
            "SetSwapRootBone",
        }};
    };

    struct MovieSceneSlomoSection
    {
        static constexpr std::string_view Name = "MovieSceneSlomoSection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneSection";
        struct Offsets
        {
            static constexpr std::uintptr_t FloatCurve = 0x148;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"FloatCurve", 0x148, "StructProperty"},
        }};
    };

    struct MovieSceneSlomoSystem
    {
        static constexpr std::string_view Name = "MovieSceneSlomoSystem";
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

    struct MovieSceneSlomoTrack
    {
        static constexpr std::string_view Name = "MovieSceneSlomoTrack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneFloatTrack";
        struct Offsets
        {
            static constexpr std::uintptr_t SectionToKey = 0xF8;
            static constexpr std::uintptr_t PropertyBinding = 0x100;
            static constexpr std::uintptr_t Sections = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SectionToKey", 0xF8, "ObjectProperty"},
            {"PropertyBinding", 0x100, "StructProperty"},
            {"Sections", 0x110, "ArrayProperty"},
        }};
    };

    struct MovieSceneSpawnableActorBinding
    {
        static constexpr std::string_view Name = "MovieSceneSpawnableActorBinding";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneSpawnableActorBindingBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ActorTemplate = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ActorTemplate", 0x38, "ObjectProperty"},
        }};
    };

    struct MovieSceneSpawnableActorBindingBase
    {
        static constexpr std::string_view Name = "MovieSceneSpawnableActorBindingBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneSpawnableBindingBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bNetAddressableName = 0x30;
            static constexpr std::uintptr_t LevelName = 0x34;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bNetAddressableName", 0x30, "BoolProperty"},
            {"LevelName", 0x34, "NameProperty"},
        }};
    };

    struct MovieSceneSpawnableDirectorBlueprintBinding
    {
        static constexpr std::string_view Name = "MovieSceneSpawnableDirectorBlueprintBinding";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneSpawnableBindingBase";
        struct Offsets
        {
            static constexpr std::uintptr_t DynamicBinding = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DynamicBinding", 0x30, "StructProperty"},
        }};
    };

    struct MovieSceneStringChannel
    {
        static constexpr std::string_view Name = "MovieSceneStringChannel";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MovieSceneChannel";
        struct Offsets
        {
            static constexpr std::uintptr_t Times = 0x50;
            static constexpr std::uintptr_t Values = 0x60;
            static constexpr std::uintptr_t DefaultValue = 0x70;
            static constexpr std::uintptr_t bHasDefaultValue = 0x80;
            static constexpr std::uintptr_t KeyHandles = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Times", 0x50, "ArrayProperty"},
            {"Values", 0x60, "ArrayProperty"},
            {"DefaultValue", 0x70, "StrProperty"},
            {"bHasDefaultValue", 0x80, "BoolProperty"},
            {"KeyHandles", 0x88, "StructProperty"},
        }};
    };

    struct MovieSceneStringPropertySystem
    {
        static constexpr std::string_view Name = "MovieSceneStringPropertySystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieScenePropertySystem";
        struct Offsets
        {
            static constexpr std::uintptr_t InstantiatorSystem = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InstantiatorSystem", 0x48, "ObjectProperty"},
        }};
    };

    struct MovieSceneStringSection
    {
        static constexpr std::string_view Name = "MovieSceneStringSection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneSection";
        struct Offsets
        {
            static constexpr std::uintptr_t StringCurve = 0x148;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"StringCurve", 0x148, "StructProperty"},
        }};
    };

    struct MovieSceneStringTrack
    {
        static constexpr std::string_view Name = "MovieSceneStringTrack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieScenePropertyTrack";
        struct Offsets
        {
            static constexpr std::uintptr_t SectionToKey = 0xF8;
            static constexpr std::uintptr_t PropertyBinding = 0x100;
            static constexpr std::uintptr_t Sections = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SectionToKey", 0xF8, "ObjectProperty"},
            {"PropertyBinding", 0x100, "StructProperty"},
            {"Sections", 0x110, "ArrayProperty"},
        }};
    };

    struct MovieSceneTestSequence
    {
        static constexpr std::string_view Name = "MovieSceneTestSequence";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneSequence";
        struct Offsets
        {
            static constexpr std::uintptr_t MovieScene = 0x68;
            static constexpr std::uintptr_t BoundObjects = 0x70;
            static constexpr std::uintptr_t BindingGuids = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"MovieScene", 0x68, "ObjectProperty"},
            {"BoundObjects", 0x70, "ArrayProperty"},
            {"BindingGuids", 0x80, "ArrayProperty"},
        }};
    };

    struct MovieSceneTextChannel
    {
        static constexpr std::string_view Name = "MovieSceneTextChannel";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MovieSceneChannel";
        struct Offsets
        {
            static constexpr std::uintptr_t Times = 0x50;
            static constexpr std::uintptr_t Values = 0x60;
            static constexpr std::uintptr_t DefaultValue = 0x70;
            static constexpr std::uintptr_t bHasDefaultValue = 0x80;
            static constexpr std::uintptr_t KeyHandles = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Times", 0x50, "ArrayProperty"},
            {"Values", 0x60, "ArrayProperty"},
            {"DefaultValue", 0x70, "TextProperty"},
            {"bHasDefaultValue", 0x80, "BoolProperty"},
            {"KeyHandles", 0x88, "StructProperty"},
        }};
    };

    struct MovieSceneTextPropertySystem
    {
        static constexpr std::string_view Name = "MovieSceneTextPropertySystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieScenePropertySystem";
        struct Offsets
        {
            static constexpr std::uintptr_t InstantiatorSystem = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InstantiatorSystem", 0x48, "ObjectProperty"},
        }};
    };

    struct MovieSceneTextSection
    {
        static constexpr std::string_view Name = "MovieSceneTextSection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneSection";
        struct Offsets
        {
            static constexpr std::uintptr_t TextChannel = 0x148;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TextChannel", 0x148, "StructProperty"},
        }};
    };

    struct MovieSceneTextTrack
    {
        static constexpr std::string_view Name = "MovieSceneTextTrack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieScenePropertyTrack";
        struct Offsets
        {
            static constexpr std::uintptr_t SectionToKey = 0xF8;
            static constexpr std::uintptr_t PropertyBinding = 0x100;
            static constexpr std::uintptr_t Sections = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SectionToKey", 0xF8, "ObjectProperty"},
            {"PropertyBinding", 0x100, "StructProperty"},
            {"Sections", 0x110, "ArrayProperty"},
        }};
    };

    struct MovieSceneTracksSettings
    {
        static constexpr std::string_view Name = "MovieSceneTracksSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t bPreviewCameraCutsInSimulate = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bPreviewCameraCutsInSimulate", 0x28, "BoolProperty"},
        }};
    };

    struct MovieSceneTransformMask
    {
        static constexpr std::string_view Name = "MovieSceneTransformMask";
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

    struct MovieSceneTransformOrigin
    {
        static constexpr std::string_view Name = "MovieSceneTransformOrigin";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "BP_GetTransformOrigin",
        }};
    };

    struct MovieSceneTransformOriginInstantiatorSystem
    {
        static constexpr std::string_view Name = "MovieSceneTransformOriginInstantiatorSystem";
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

    struct MovieSceneTransformOriginSystem
    {
        static constexpr std::string_view Name = "MovieSceneTransformOriginSystem";
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

    struct MovieSceneTransformTrack
    {
        static constexpr std::string_view Name = "MovieSceneTransformTrack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieScenePropertyTrack";
        struct Offsets
        {
            static constexpr std::uintptr_t SectionToKey = 0xF8;
            static constexpr std::uintptr_t PropertyBinding = 0x100;
            static constexpr std::uintptr_t Sections = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SectionToKey", 0xF8, "ObjectProperty"},
            {"PropertyBinding", 0x100, "StructProperty"},
            {"Sections", 0x110, "ArrayProperty"},
        }};
    };

    struct MovieSceneVector2DKeyStruct
    {
        static constexpr std::string_view Name = "MovieSceneVector2DKeyStruct";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MovieSceneDoubleVectorKeyStructBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Vector = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Vector", 0x28, "StructProperty"},
        }};
    };

    struct MovieSceneVector2fKeyStruct
    {
        static constexpr std::string_view Name = "MovieSceneVector2fKeyStruct";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MovieSceneFloatVectorKeyStructBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Vector = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Vector", 0x28, "StructProperty"},
        }};
    };

    struct MovieSceneVector3dKeyStruct
    {
        static constexpr std::string_view Name = "MovieSceneVector3dKeyStruct";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MovieSceneDoubleVectorKeyStructBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Vector = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Vector", 0x28, "StructProperty"},
        }};
    };

    struct MovieSceneVector3fKeyStruct
    {
        static constexpr std::string_view Name = "MovieSceneVector3fKeyStruct";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MovieSceneFloatVectorKeyStructBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Vector = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Vector", 0x28, "StructProperty"},
        }};
    };

    struct MovieSceneVector4dKeyStruct
    {
        static constexpr std::string_view Name = "MovieSceneVector4dKeyStruct";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MovieSceneDoubleVectorKeyStructBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Vector = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Vector", 0x30, "StructProperty"},
        }};
    };

    struct MovieSceneVector4fKeyStruct
    {
        static constexpr std::string_view Name = "MovieSceneVector4fKeyStruct";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MovieSceneFloatVectorKeyStructBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Vector = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Vector", 0x30, "StructProperty"},
        }};
    };

    struct MovieSceneVisibilitySection
    {
        static constexpr std::string_view Name = "MovieSceneVisibilitySection";
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

    struct MovieSceneVisibilitySystem
    {
        static constexpr std::string_view Name = "MovieSceneVisibilitySystem";
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

    struct MovieSceneVisibilityTrack
    {
        static constexpr std::string_view Name = "MovieSceneVisibilityTrack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieScenePropertyTrack";
        struct Offsets
        {
            static constexpr std::uintptr_t SectionToKey = 0xF8;
            static constexpr std::uintptr_t PropertyBinding = 0x100;
            static constexpr std::uintptr_t Sections = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SectionToKey", 0xF8, "ObjectProperty"},
            {"PropertyBinding", 0x100, "StructProperty"},
            {"Sections", 0x110, "ArrayProperty"},
        }};
    };

    struct ObjectPathChannelEvaluatorSystem
    {
        static constexpr std::string_view Name = "ObjectPathChannelEvaluatorSystem";
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

    struct PerlinNoiseParams
    {
        static constexpr std::string_view Name = "PerlinNoiseParams";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Frequency = 0x0;
            static constexpr std::uintptr_t Amplitude = 0x8;
            static constexpr std::uintptr_t Offset = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Frequency", 0x0, "FloatProperty"},
            {"Amplitude", 0x8, "DoubleProperty"},
            {"Offset", 0x10, "FloatProperty"},
        }};
    };

    struct ScalarMaterialParameterInfoAndCurve
    {
        static constexpr std::string_view Name = "ScalarMaterialParameterInfoAndCurve";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ParameterInfo = 0x0;
            static constexpr std::uintptr_t ParameterCurve = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ParameterInfo", 0x0, "StructProperty"},
            {"ParameterCurve", 0x10, "StructProperty"},
        }};
    };

    struct ScalarParameterNameAndCurve
    {
        static constexpr std::string_view Name = "ScalarParameterNameAndCurve";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "BaseParameterNameAndValue";
        struct Offsets
        {
            static constexpr std::uintptr_t ParameterCurve = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ParameterCurve", 0x8, "StructProperty"},
        }};
    };

    struct StringChannelEvaluatorSystem
    {
        static constexpr std::string_view Name = "StringChannelEvaluatorSystem";
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

    struct TestLifecycleAttachTrack
    {
        static constexpr std::string_view Name = "TestLifecycleAttachTrack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieScene3DAttachTrack";
        struct Offsets
        {
            static constexpr std::uintptr_t ConstraintSections = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ConstraintSections", 0xF8, "ArrayProperty"},
        }};
    };

    struct TestLifecycleComponentMaterialTrack
    {
        static constexpr std::string_view Name = "TestLifecycleComponentMaterialTrack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneComponentMaterialTrack";
        struct Offsets
        {
            static constexpr std::uintptr_t MaterialInfo = 0x120;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MaterialInfo", 0x120, "StructProperty"},
        }};
    };

    struct TestLifecycleCustomPrimitiveDataTrack
    {
        static constexpr std::string_view Name = "TestLifecycleCustomPrimitiveDataTrack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneCustomPrimitiveDataTrack";
        struct Offsets
        {
            static constexpr std::uintptr_t Sections = 0x108;
            static constexpr std::uintptr_t SectionToKey = 0x118;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Sections", 0x108, "ArrayProperty"},
            {"SectionToKey", 0x118, "ObjectProperty"},
        }};
    };

    struct TestLifecycleParticleParameterTrack
    {
        static constexpr std::string_view Name = "TestLifecycleParticleParameterTrack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneParticleParameterTrack";
        struct Offsets
        {
            static constexpr std::uintptr_t Sections = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Sections", 0x100, "ArrayProperty"},
        }};
    };

    struct TestLifecycleParticleTrack
    {
        static constexpr std::string_view Name = "TestLifecycleParticleTrack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneParticleTrack";
        struct Offsets
        {
            static constexpr std::uintptr_t ParticleSections = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ParticleSections", 0x100, "ArrayProperty"},
        }};
    };

    struct TestLifecyclePathTrack
    {
        static constexpr std::string_view Name = "TestLifecyclePathTrack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieScene3DPathTrack";
        struct Offsets
        {
            static constexpr std::uintptr_t ConstraintSections = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ConstraintSections", 0xF8, "ArrayProperty"},
        }};
    };

    struct TestLifecycleSubTrack
    {
        static constexpr std::string_view Name = "TestLifecycleSubTrack";
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

    struct TestTrackLifetimeDecoration
    {
        static constexpr std::string_view Name = "TestTrackLifetimeDecoration";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct TextChannelEvaluatorSystem
    {
        static constexpr std::string_view Name = "TextChannelEvaluatorSystem";
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

    struct TransformParameterNameAndCurves
    {
        static constexpr std::string_view Name = "TransformParameterNameAndCurves";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "BaseParameterNameAndValue";
        struct Offsets
        {
            static constexpr std::uintptr_t Translation = 0x8;
            static constexpr std::uintptr_t Rotation = 0x278;
            static constexpr std::uintptr_t Scale = 0x4E8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Translation", 0x8, "StructProperty"},
            {"Rotation", 0x278, "StructProperty"},
            {"Scale", 0x4E8, "StructProperty"},
        }};
    };

    struct Vector2DParameterNameAndCurves
    {
        static constexpr std::string_view Name = "Vector2DParameterNameAndCurves";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "BaseParameterNameAndValue";
        struct Offsets
        {
            static constexpr std::uintptr_t XCurve = 0x8;
            static constexpr std::uintptr_t YCurve = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"XCurve", 0x8, "StructProperty"},
            {"YCurve", 0xD8, "StructProperty"},
        }};
    };

    struct VectorParameterNameAndCurves
    {
        static constexpr std::string_view Name = "VectorParameterNameAndCurves";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "BaseParameterNameAndValue";
        struct Offsets
        {
            static constexpr std::uintptr_t XCurve = 0x8;
            static constexpr std::uintptr_t YCurve = 0xD8;
            static constexpr std::uintptr_t ZCurve = 0x1A8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"XCurve", 0x8, "StructProperty"},
            {"YCurve", 0xD8, "StructProperty"},
            {"ZCurve", 0x1A8, "StructProperty"},
        }};
    };

    struct WeightAndEasingEvaluatorSystem
    {
        static constexpr std::string_view Name = "WeightAndEasingEvaluatorSystem";
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

}

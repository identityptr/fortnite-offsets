#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::LiveLink
{
    struct LiveLinkAnimationAxisSwitchPreProcessor
    {
        static constexpr std::string_view Name = "LiveLinkAnimationAxisSwitchPreProcessor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LiveLinkTransformAxisSwitchPreProcessor";
        struct Offsets
        {
            static constexpr std::uintptr_t FrontAxis = 0x28;
            static constexpr std::uintptr_t RightAxis = 0x29;
            static constexpr std::uintptr_t UpAxis = 0x2A;
            static constexpr std::uintptr_t bUseOffsetPosition = 0x2B;
            static constexpr std::uintptr_t bUseOffsetOrientation = 0x2C;
            static constexpr std::uintptr_t OffsetPosition = 0x30;
            static constexpr std::uintptr_t OffsetOrientation = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"FrontAxis", 0x28, "EnumProperty"},
            {"RightAxis", 0x29, "EnumProperty"},
            {"UpAxis", 0x2A, "EnumProperty"},
            {"bUseOffsetPosition", 0x2B, "BoolProperty"},
            {"bUseOffsetOrientation", 0x2C, "BoolProperty"},
            {"OffsetPosition", 0x30, "StructProperty"},
            {"OffsetOrientation", 0x48, "StructProperty"},
        }};
    };

    struct LiveLinkAnimationFrameInterpolationProcessor
    {
        static constexpr std::string_view Name = "LiveLinkAnimationFrameInterpolationProcessor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LiveLinkBasicFrameInterpolationProcessor";
        struct Offsets
        {
            static constexpr std::uintptr_t bInterpolatePropertyValues = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bInterpolatePropertyValues", 0x28, "BoolProperty"},
        }};
    };

    struct LiveLinkAnimationRoleToTransform
    {
        static constexpr std::string_view Name = "LiveLinkAnimationRoleToTransform";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LiveLinkFrameTranslator";
        struct Offsets
        {
            static constexpr std::uintptr_t BoneName = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"BoneName", 0x28, "NameProperty"},
        }};
    };

    struct LiveLinkAnimationVirtualSubject
    {
        static constexpr std::string_view Name = "LiveLinkAnimationVirtualSubject";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LiveLinkVirtualSubject";
        struct Offsets
        {
            static constexpr std::uintptr_t Attachments = 0x180;
            static constexpr std::uintptr_t LocationBehavior = 0x190;
            static constexpr std::uintptr_t RotationBehavior = 0x194;
            static constexpr std::uintptr_t bAppendSubjectNameToBones = 0x198;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Attachments", 0x180, "ArrayProperty"},
            {"LocationBehavior", 0x190, "EnumProperty"},
            {"RotationBehavior", 0x194, "EnumProperty"},
            {"bAppendSubjectNameToBones", 0x198, "BoolProperty"},
        }};
    };

    struct LiveLinkBasicFrameInterpolationProcessor
    {
        static constexpr std::string_view Name = "LiveLinkBasicFrameInterpolationProcessor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LiveLinkFrameInterpolationProcessor";
        struct Offsets
        {
            static constexpr std::uintptr_t bInterpolatePropertyValues = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bInterpolatePropertyValues", 0x28, "BoolProperty"},
        }};
    };

    struct LiveLinkBlueprintLibrary
    {
        static constexpr std::string_view Name = "LiveLinkBlueprintLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct LiveLinkBlueprintVirtualSubject
    {
        static constexpr std::string_view Name = "LiveLinkBlueprintVirtualSubject";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LiveLinkVirtualSubject";
        struct Offsets
        {
            static constexpr std::uintptr_t SyncSubject = 0x30;
            static constexpr std::uintptr_t Role = 0x38;
            static constexpr std::uintptr_t Subjects = 0x40;
            static constexpr std::uintptr_t FrameTranslators = 0x50;
            static constexpr std::uintptr_t bRebroadcastSubject = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"SyncSubject", 0x30, "StructProperty"},
            {"Role", 0x38, "ClassProperty"},
            {"Subjects", 0x40, "ArrayProperty"},
            {"FrameTranslators", 0x50, "ArrayProperty"},
            {"bRebroadcastSubject", 0x60, "BoolProperty"},
        }};
    };

    struct LiveLinkBroadcastComponent
    {
        static constexpr std::string_view Name = "LiveLinkBroadcastComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bEnable = 0xC0;
            static constexpr std::uintptr_t SubjectName = 0xC4;
            static constexpr std::uintptr_t Role = 0xC8;
            static constexpr std::uintptr_t SourceMesh = 0xD0;
            static constexpr std::uintptr_t AllowedBoneNames = 0xF8;
            static constexpr std::uintptr_t AllowedCurveNames = 0x108;
            static constexpr std::uintptr_t bRemoveSubjectWhenDisabled = 0x118;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"bEnable", 0xC0, "BoolProperty"},
            {"SubjectName", 0xC4, "NameProperty"},
            {"Role", 0xC8, "ClassProperty"},
            {"SourceMesh", 0xD0, "StructProperty"},
            {"AllowedBoneNames", 0xF8, "ArrayProperty"},
            {"AllowedCurveNames", 0x108, "ArrayProperty"},
            {"bRemoveSubjectWhenDisabled", 0x118, "BoolProperty"},
        }};
    };

    struct LiveLinkBroadcastSubsystem
    {
        static constexpr std::string_view Name = "LiveLinkBroadcastSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EngineSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct LiveLinkComponent
    {
        static constexpr std::string_view Name = "LiveLinkComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnLiveLinkUpdated = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OnLiveLinkUpdated", 0xC0, "MulticastInlineDelegateProperty"},
        }};
    };

    struct LiveLinkCustomTimeStep
    {
        static constexpr std::string_view Name = "LiveLinkCustomTimeStep";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GenlockedCustomTimeStep";
        struct Offsets
        {
            static constexpr std::uintptr_t LiveLinkDataRate = 0x30;
            static constexpr std::uintptr_t SubjectKey = 0x38;
            static constexpr std::uintptr_t bLockStepMode = 0x4C;
            static constexpr std::uintptr_t FrameRateDivider = 0x50;
            static constexpr std::uintptr_t TimeoutInSeconds = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"LiveLinkDataRate", 0x30, "StructProperty"},
            {"SubjectKey", 0x38, "StructProperty"},
            {"bLockStepMode", 0x4C, "BoolProperty"},
            {"FrameRateDivider", 0x50, "UInt32Property"},
            {"TimeoutInSeconds", 0x58, "DoubleProperty"},
        }};
    };

    struct LiveLinkDataPreview
    {
        static constexpr std::string_view Name = "LiveLinkDataPreview";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t Subjects = 0x278;
            static constexpr std::uintptr_t bDrawLabels = 0x368;
            static constexpr std::uintptr_t bEvaluateLiveLink = 0x369;
            static constexpr std::uintptr_t BillboardComponent = 0x370;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Subjects", 0x278, "ArrayProperty"},
            {"bDrawLabels", 0x368, "BoolProperty"},
            {"bEvaluateLiveLink", 0x369, "BoolProperty"},
            {"BillboardComponent", 0x370, "ObjectProperty"},
        }};
    };

    struct LiveLinkDataPreviewComponent
    {
        static constexpr std::string_view Name = "LiveLinkDataPreviewComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InstancedStaticMeshComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t SubjectName = 0xA50;
            static constexpr std::uintptr_t bEvaluateLiveLink = 0xA54;
            static constexpr std::uintptr_t bDrawLabels = 0xA55;
            static constexpr std::uintptr_t BoneVisualType = 0xA56;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"SubjectName", 0xA50, "StructProperty"},
            {"bEvaluateLiveLink", 0xA54, "BoolProperty"},
            {"bDrawLabels", 0xA55, "BoolProperty"},
            {"BoneVisualType", 0xA56, "EnumProperty"},
        }};
    };

    struct LiveLinkDrivenComponent
    {
        static constexpr std::string_view Name = "LiveLinkDrivenComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t SubjectName = 0xC0;
            static constexpr std::uintptr_t ActorTransformBone = 0xC4;
            static constexpr std::uintptr_t bModifyActorTransform = 0xC8;
            static constexpr std::uintptr_t bSetRelativeLocation = 0xC9;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"SubjectName", 0xC0, "StructProperty"},
            {"ActorTransformBone", 0xC4, "NameProperty"},
            {"bModifyActorTransform", 0xC8, "BoolProperty"},
            {"bSetRelativeLocation", 0xC9, "BoolProperty"},
        }};
    };

    struct LiveLinkHubSubjectSettings
    {
        static constexpr std::string_view Name = "LiveLinkHubSubjectSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LiveLinkSubjectSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t SubjectName = 0x98;
            static constexpr std::uintptr_t OutboundName = 0xA8;
            static constexpr std::uintptr_t Source = 0xB8;
            static constexpr std::uintptr_t TranslatorsProxy = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"SubjectName", 0x98, "StrProperty"},
            {"OutboundName", 0xA8, "StrProperty"},
            {"Source", 0xB8, "StrProperty"},
            {"TranslatorsProxy", 0xC8, "ObjectProperty"},
        }};
    };

    struct LiveLinkLocatorAxisSwitchPreProcessor
    {
        static constexpr std::string_view Name = "LiveLinkLocatorAxisSwitchPreProcessor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LiveLinkTransformAxisSwitchPreProcessor";
        struct Offsets
        {
            static constexpr std::uintptr_t FrontAxis = 0x28;
            static constexpr std::uintptr_t RightAxis = 0x29;
            static constexpr std::uintptr_t UpAxis = 0x2A;
            static constexpr std::uintptr_t bUseOffsetPosition = 0x2B;
            static constexpr std::uintptr_t bUseOffsetOrientation = 0x2C;
            static constexpr std::uintptr_t OffsetPosition = 0x30;
            static constexpr std::uintptr_t OffsetOrientation = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"FrontAxis", 0x28, "EnumProperty"},
            {"RightAxis", 0x29, "EnumProperty"},
            {"UpAxis", 0x2A, "EnumProperty"},
            {"bUseOffsetPosition", 0x2B, "BoolProperty"},
            {"bUseOffsetOrientation", 0x2C, "BoolProperty"},
            {"OffsetPosition", 0x30, "StructProperty"},
            {"OffsetOrientation", 0x48, "StructProperty"},
        }};
    };

    struct LiveLinkMarkerVisualizer
    {
        static constexpr std::string_view Name = "LiveLinkMarkerVisualizer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InstancedStaticMeshComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t DynamicMaterial = 0xA50;
            static constexpr std::uintptr_t LiveLinkSubject = 0xA58;
            static constexpr std::uintptr_t bEvaluateLiveLink = 0xA5C;
            static constexpr std::uintptr_t bDrawLabels = 0xA5D;
            static constexpr std::uintptr_t XAxisSign = 0xA5E;
            static constexpr std::uintptr_t YAxisSign = 0xA5F;
            static constexpr std::uintptr_t MarkerLocations = 0xA60;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"DynamicMaterial", 0xA50, "ObjectProperty"},
            {"LiveLinkSubject", 0xA58, "StructProperty"},
            {"bEvaluateLiveLink", 0xA5C, "BoolProperty"},
            {"bDrawLabels", 0xA5D, "BoolProperty"},
            {"XAxisSign", 0xA5E, "EnumProperty"},
            {"YAxisSign", 0xA5F, "EnumProperty"},
            {"MarkerLocations", 0xA60, "ArrayProperty"},
        }};
    };

    struct LiveLinkMessageBusFinder
    {
        static constexpr std::string_view Name = "LiveLinkMessageBusFinder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct LiveLinkMessageBusSourceFactory
    {
        static constexpr std::string_view Name = "LiveLinkMessageBusSourceFactory";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LiveLinkSourceFactory";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct LiveLinkMessageBusSourceSettings
    {
        static constexpr std::string_view Name = "LiveLinkMessageBusSourceSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LiveLinkSourceSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t bEnableFrameResequencing = 0xB8;
            static constexpr std::uintptr_t ResequencerMaxBufferSize = 0xBC;
            static constexpr std::uintptr_t ResequencerMaxWaitTimeSeconds = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bEnableFrameResequencing", 0xB8, "BoolProperty"},
            {"ResequencerMaxBufferSize", 0xBC, "IntProperty"},
            {"ResequencerMaxWaitTimeSeconds", 0xC0, "FloatProperty"},
        }};
    };

    struct LiveLinkPreset
    {
        static constexpr std::string_view Name = "LiveLinkPreset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Sources = 0x28;
            static constexpr std::uintptr_t Subjects = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Sources", 0x28, "ArrayProperty"},
            {"Subjects", 0x38, "ArrayProperty"},
        }};
    };

    struct LiveLinkSettings
    {
        static constexpr std::string_view Name = "LiveLinkSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultRoleSettings = 0x28;
            static constexpr std::uintptr_t DefaultSettingsClass = 0x38;
            static constexpr std::uintptr_t FrameInterpolationProcessor = 0x50;
            static constexpr std::uintptr_t DefaultLiveLinkPreset = 0x58;
            static constexpr std::uintptr_t DefaultVirtualSubjectClass = 0x78;
            static constexpr std::uintptr_t ClockOffsetCorrectionStep = 0x80;
            static constexpr std::uintptr_t DefaultMessageBusSourceMode = 0x84;
            static constexpr std::uintptr_t MessageBusPingRequestFrequency = 0x88;
            static constexpr std::uintptr_t MessageBusHeartbeatFrequency = 0x90;
            static constexpr std::uintptr_t MessageBusHeartbeatTimeout = 0x98;
            static constexpr std::uintptr_t MessageBusTimeBeforeRemovingInactiveSource = 0xA0;
            static constexpr std::uintptr_t bReEnableSubjectOnRemoval = 0xA8;
            static constexpr std::uintptr_t bPreProcessRebroadcastFrames = 0xA9;
            static constexpr std::uintptr_t bTranslateRebroadcastFrames = 0xAA;
            static constexpr std::uintptr_t TimeWithoutFrameToBeConsiderAsInvalid = 0xB0;
            static constexpr std::uintptr_t ValidColor = 0xB8;
            static constexpr std::uintptr_t InvalidColor = 0xC8;
            static constexpr std::uintptr_t TextSizeSource = 0xD8;
            static constexpr std::uintptr_t TextSizeSubject = 0xD9;
        };

        inline static constexpr std::array<PropertyInfo, 19> Properties{{
            {"DefaultRoleSettings", 0x28, "ArrayProperty"},
            {"DefaultSettingsClass", 0x38, "StructProperty"},
            {"FrameInterpolationProcessor", 0x50, "ClassProperty"},
            {"DefaultLiveLinkPreset", 0x58, "SoftObjectProperty"},
            {"DefaultVirtualSubjectClass", 0x78, "ClassProperty"},
            {"ClockOffsetCorrectionStep", 0x80, "FloatProperty"},
            {"DefaultMessageBusSourceMode", 0x84, "EnumProperty"},
            {"MessageBusPingRequestFrequency", 0x88, "DoubleProperty"},
            {"MessageBusHeartbeatFrequency", 0x90, "DoubleProperty"},
            {"MessageBusHeartbeatTimeout", 0x98, "DoubleProperty"},
            {"MessageBusTimeBeforeRemovingInactiveSource", 0xA0, "DoubleProperty"},
            {"bReEnableSubjectOnRemoval", 0xA8, "BoolProperty"},
            {"bPreProcessRebroadcastFrames", 0xA9, "BoolProperty"},
            {"bTranslateRebroadcastFrames", 0xAA, "BoolProperty"},
            {"TimeWithoutFrameToBeConsiderAsInvalid", 0xB0, "DoubleProperty"},
            {"ValidColor", 0xB8, "StructProperty"},
            {"InvalidColor", 0xC8, "StructProperty"},
            {"TextSizeSource", 0xD8, "ByteProperty"},
            {"TextSizeSubject", 0xD9, "ByteProperty"},
        }};
    };

    struct LiveLinkSkeletonRemapper
    {
        static constexpr std::string_view Name = "LiveLinkSkeletonRemapper";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LiveLinkSubjectRemapper";
        struct Offsets
        {
            static constexpr std::uintptr_t ReferenceSkeleton = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ReferenceSkeleton", 0x40, "SoftObjectProperty"},
        }};
    };

    struct LiveLinkTimeSynchronizationSource
    {
        static constexpr std::string_view Name = "LiveLinkTimeSynchronizationSource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TimeSynchronizationSource";
        struct Offsets
        {
            static constexpr std::uintptr_t SubjectName = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SubjectName", 0x30, "StructProperty"},
        }};
    };

    struct LiveLinkTimecodeProvider
    {
        static constexpr std::string_view Name = "LiveLinkTimecodeProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TimecodeProvider";
        struct Offsets
        {
            static constexpr std::uintptr_t SubjectKey = 0x30;
            static constexpr std::uintptr_t Evaluation = 0x44;
            static constexpr std::uintptr_t bOverrideFrameRate = 0x48;
            static constexpr std::uintptr_t OverrideFrameRate = 0x4C;
            static constexpr std::uintptr_t BufferSize = 0x54;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"SubjectKey", 0x30, "StructProperty"},
            {"Evaluation", 0x44, "EnumProperty"},
            {"bOverrideFrameRate", 0x48, "BoolProperty"},
            {"OverrideFrameRate", 0x4C, "StructProperty"},
            {"BufferSize", 0x54, "IntProperty"},
        }};
    };

    struct LiveLinkTransformAxisSwitchPreProcessor
    {
        static constexpr std::string_view Name = "LiveLinkTransformAxisSwitchPreProcessor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LiveLinkFramePreProcessor";
        struct Offsets
        {
            static constexpr std::uintptr_t FrontAxis = 0x28;
            static constexpr std::uintptr_t RightAxis = 0x29;
            static constexpr std::uintptr_t UpAxis = 0x2A;
            static constexpr std::uintptr_t bUseOffsetPosition = 0x2B;
            static constexpr std::uintptr_t bUseOffsetOrientation = 0x2C;
            static constexpr std::uintptr_t OffsetPosition = 0x30;
            static constexpr std::uintptr_t OffsetOrientation = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"FrontAxis", 0x28, "EnumProperty"},
            {"RightAxis", 0x29, "EnumProperty"},
            {"UpAxis", 0x2A, "EnumProperty"},
            {"bUseOffsetPosition", 0x2B, "BoolProperty"},
            {"bUseOffsetOrientation", 0x2C, "BoolProperty"},
            {"OffsetPosition", 0x30, "StructProperty"},
            {"OffsetOrientation", 0x48, "StructProperty"},
        }};
    };

    struct LiveLinkTransformDeadbandPreProcessor
    {
        static constexpr std::string_view Name = "LiveLinkTransformDeadbandPreProcessor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LiveLinkFramePreProcessor";
        struct Offsets
        {
            static constexpr std::uintptr_t bEnableDeadband = 0x28;
            static constexpr std::uintptr_t TranslationDeadband = 0x2C;
            static constexpr std::uintptr_t RotationDeadbandInDegrees = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bEnableDeadband", 0x28, "BoolProperty"},
            {"TranslationDeadband", 0x2C, "FloatProperty"},
            {"RotationDeadbandInDegrees", 0x30, "FloatProperty"},
        }};
    };

    struct LiveLinkTransformRoleToAnimation
    {
        static constexpr std::string_view Name = "LiveLinkTransformRoleToAnimation";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LiveLinkFrameTranslator";
        struct Offsets
        {
            static constexpr std::uintptr_t OutputBoneName = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OutputBoneName", 0x28, "NameProperty"},
        }};
    };

    struct LiveLinkUserSettings
    {
        static constexpr std::string_view Name = "LiveLinkUserSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t PresetSaveDir = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PresetSaveDir", 0x28, "StructProperty"},
        }};
    };

    struct LiveLinkVirtualSubjectSourceSettings
    {
        static constexpr std::string_view Name = "LiveLinkVirtualSubjectSourceSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LiveLinkSourceSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t SourceName = 0xB8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SourceName", 0xB8, "NameProperty"},
        }};
    };

}

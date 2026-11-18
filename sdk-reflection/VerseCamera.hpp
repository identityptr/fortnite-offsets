#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::VerseCamera
{
    struct ApplyServerStateCameraNode
    {
        static constexpr std::string_view Name = "ApplyServerStateCameraNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CameraNode";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsEnabled = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bIsEnabled", 0x30, "BoolProperty"},
        }};
    };

    struct AttachToSceneGraphEntityCameraNode
    {
        static constexpr std::string_view Name = "AttachToSceneGraphEntityCameraNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CameraNode";
        struct Offsets
        {
            static constexpr std::uintptr_t Attachment = 0x38;
            static constexpr std::uintptr_t AttachmentDataID = 0x48;
            static constexpr std::uintptr_t AttachToLocation = 0x50;
            static constexpr std::uintptr_t AttachToRotation = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Attachment", 0x38, "StructProperty"},
            {"AttachmentDataID", 0x48, "StructProperty"},
            {"AttachToLocation", 0x50, "StructProperty"},
            {"AttachToRotation", 0x60, "StructProperty"},
        }};
    };

    struct CacheServerStateCameraNode
    {
        static constexpr std::string_view Name = "CacheServerStateCameraNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CameraNode";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsEnabled = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bIsEnabled", 0x30, "BoolProperty"},
        }};
    };

    struct CameraEntityProxyActor
    {
        static constexpr std::string_view Name = "CameraEntityProxyActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t ProxyMeshComponent = 0x280;
            static constexpr std::uintptr_t DrawFrustum = 0x288;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ProxyMeshComponent", 0x280, "ObjectProperty"},
            {"DrawFrustum", 0x288, "ObjectProperty"},
        }};
    };

    struct CollisionPushSceneGraphEntityCameraNode
    {
        static constexpr std::string_view Name = "CollisionPushSceneGraphEntityCameraNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CollisionPushCameraNode";
        struct Offsets
        {
            static constexpr std::uintptr_t IgnoredEntities = 0xC0;
            static constexpr std::uintptr_t IgnoredEntitiesDataID = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"IgnoredEntities", 0xC0, "ArrayProperty"},
            {"IgnoredEntitiesDataID", 0xD0, "StructProperty"},
        }};
    };

    struct DollyFramingSceneGraphEntityCameraNode
    {
        static constexpr std::string_view Name = "DollyFramingSceneGraphEntityCameraNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DollyFramingCameraNode";
        struct Offsets
        {
            static constexpr std::uintptr_t EntityTargetInfos = 0x1A0;
            static constexpr std::uintptr_t EntityTargetInfosDataID = 0x1B0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"EntityTargetInfos", 0x1A0, "ArrayProperty"},
            {"EntityTargetInfosDataID", 0x1B0, "StructProperty"},
        }};
    };

    struct NativeCameraRigCameraModifierNode
    {
        static constexpr std::string_view Name = "NativeCameraRigCameraModifierNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CameraNode";
        struct Offsets
        {
            static constexpr std::uintptr_t InnerNode = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InnerNode", 0x38, "ObjectProperty"},
        }};
    };

    struct PanningFramingSceneGraphEntityCameraNode
    {
        static constexpr std::string_view Name = "PanningFramingSceneGraphEntityCameraNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PanningFramingCameraNode";
        struct Offsets
        {
            static constexpr std::uintptr_t EntityTargetInfos = 0x1A0;
            static constexpr std::uintptr_t EntityTargetInfosDataID = 0x1B0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"EntityTargetInfos", 0x1A0, "ArrayProperty"},
            {"EntityTargetInfosDataID", 0x1B0, "StructProperty"},
        }};
    };

    struct SceneGraphCameraDirectorLocatorComponent
    {
        static constexpr std::string_view Name = "SceneGraphCameraDirectorLocatorComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CameraDirector = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CameraDirector", 0xC0, "ObjectProperty"},
        }};
    };

    struct VerseAttachToEntityWrapperCameraNode
    {
        static constexpr std::string_view Name = "VerseAttachToEntityWrapperCameraNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NativeCameraRigCameraModifierNode";
        struct Offsets
        {
            static constexpr std::uintptr_t InnerNode = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InnerNode", 0x38, "ObjectProperty"},
        }};
    };

    struct VerseBaseFramingWrapperCameraNode
    {
        static constexpr std::string_view Name = "VerseBaseFramingWrapperCameraNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NativeCameraRigCameraModifierNode";
        struct Offsets
        {
            static constexpr std::uintptr_t InnerNode = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InnerNode", 0x38, "ObjectProperty"},
        }};
    };

    struct VerseBoomArmWrapperCameraNode
    {
        static constexpr std::string_view Name = "VerseBoomArmWrapperCameraNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NativeCameraRigCameraModifierNode";
        struct Offsets
        {
            static constexpr std::uintptr_t InnerNode = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InnerNode", 0x38, "ObjectProperty"},
        }};
    };

    struct VerseCameraDirector
    {
        static constexpr std::string_view Name = "VerseCameraDirector";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CameraDirector";
        struct Offsets
        {
            static constexpr std::uintptr_t CameraRigProxyRedirectTable = 0x28;
            static constexpr std::uintptr_t bRunInEditor = 0x38;
            static constexpr std::uintptr_t CameraRigProxyTable = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"CameraRigProxyRedirectTable", 0x28, "StructProperty"},
            {"bRunInEditor", 0x38, "BoolProperty"},
            {"CameraRigProxyTable", 0x40, "ObjectProperty"},
        }};
    };

    struct VerseCameraModifierNode
    {
        static constexpr std::string_view Name = "VerseCameraModifierNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CameraNode";
        struct Offsets
        {
            static constexpr std::uintptr_t NativeCameraRigNode = 0x38;
            static constexpr std::uintptr_t CameraModifier = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"NativeCameraRigNode", 0x38, "ObjectProperty"},
            {"CameraModifier", 0x40, "WeakObjectProperty"},
        }};
    };

    struct VerseCameraModifierStackImpl
    {
        static constexpr std::string_view Name = "VerseCameraModifierStackImpl";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "VerseModifierStackImpl";
        struct Offsets
        {
            static constexpr std::uintptr_t ReplicatedEntries = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ReplicatedEntries", 0x28, "ArrayProperty"},
        }};
    };

    struct VerseCameraPreviewComponent
    {
        static constexpr std::string_view Name = "VerseCameraPreviewComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SceneComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PhysicsVolume = 0xC8;
            static constexpr std::uintptr_t AttachParent = 0xD0;
            static constexpr std::uintptr_t AttachSocketName = 0xD8;
            static constexpr std::uintptr_t AttachChildren = 0xE0;
            static constexpr std::uintptr_t ClientAttachedChildren = 0xF0;
            static constexpr std::uintptr_t RelativeLocation = 0x140;
            static constexpr std::uintptr_t RelativeRotation = 0x158;
            static constexpr std::uintptr_t RelativeScale3D = 0x170;
            static constexpr std::uintptr_t ComponentVelocity = 0x188;
            static constexpr std::uintptr_t bAbsoluteLocation = 0x1A0;
            static constexpr std::uintptr_t bAbsoluteRotation = 0x1A0;
            static constexpr std::uintptr_t bAbsoluteScale = 0x1A0;
            static constexpr std::uintptr_t bComponentToWorldUpdated = 0x1A0;
            static constexpr std::uintptr_t bShouldBeAttached = 0x1A0;
            static constexpr std::uintptr_t bShouldSnapLocationWhenAttached = 0x1A0;
            static constexpr std::uintptr_t bVisible = 0x1A0;
            static constexpr std::uintptr_t bBoundsChangeTriggersStreamingDataRebuild = 0x1A1;
            static constexpr std::uintptr_t bComputeBoundsOnceForGame = 0x1A1;
            static constexpr std::uintptr_t bComputeFastLocalBounds = 0x1A1;
            static constexpr std::uintptr_t bHiddenInGame = 0x1A1;
            static constexpr std::uintptr_t bShouldSnapRotationWhenAttached = 0x1A1;
            static constexpr std::uintptr_t bShouldSnapScaleWhenAttached = 0x1A1;
            static constexpr std::uintptr_t bShouldUpdatePhysicsVolume = 0x1A1;
            static constexpr std::uintptr_t bUseAttachParentBound = 0x1A1;
            static constexpr std::uintptr_t bComputedBoundsOnceForGame = 0x1A2;
            static constexpr std::uintptr_t bIsNotRenderAttachmentRoot = 0x1A2;
            static constexpr std::uintptr_t Mobility = 0x1A3;
            static constexpr std::uintptr_t DetailMode = 0x1A4;
            static constexpr std::uintptr_t PhysicsVolumeChangedDelegate = 0x1A5;
        };

        inline static constexpr std::array<PropertyInfo, 29> Properties{{
            {"PhysicsVolume", 0xC8, "WeakObjectProperty"},
            {"AttachParent", 0xD0, "ObjectProperty"},
            {"AttachSocketName", 0xD8, "NameProperty"},
            {"AttachChildren", 0xE0, "ArrayProperty"},
            {"ClientAttachedChildren", 0xF0, "ArrayProperty"},
            {"RelativeLocation", 0x140, "StructProperty"},
            {"RelativeRotation", 0x158, "StructProperty"},
            {"RelativeScale3D", 0x170, "StructProperty"},
            {"ComponentVelocity", 0x188, "StructProperty"},
            {"bAbsoluteLocation", 0x1A0, "BoolProperty"},
            {"bAbsoluteRotation", 0x1A0, "BoolProperty"},
            {"bAbsoluteScale", 0x1A0, "BoolProperty"},
            {"bComponentToWorldUpdated", 0x1A0, "BoolProperty"},
            {"bShouldBeAttached", 0x1A0, "BoolProperty"},
            {"bShouldSnapLocationWhenAttached", 0x1A0, "BoolProperty"},
            {"bVisible", 0x1A0, "BoolProperty"},
            {"bBoundsChangeTriggersStreamingDataRebuild", 0x1A1, "BoolProperty"},
            {"bComputeBoundsOnceForGame", 0x1A1, "BoolProperty"},
            {"bComputeFastLocalBounds", 0x1A1, "BoolProperty"},
            {"bHiddenInGame", 0x1A1, "BoolProperty"},
            {"bShouldSnapRotationWhenAttached", 0x1A1, "BoolProperty"},
            {"bShouldSnapScaleWhenAttached", 0x1A1, "BoolProperty"},
            {"bShouldUpdatePhysicsVolume", 0x1A1, "BoolProperty"},
            {"bUseAttachParentBound", 0x1A1, "BoolProperty"},
            {"bComputedBoundsOnceForGame", 0x1A2, "BoolProperty"},
            {"bIsNotRenderAttachmentRoot", 0x1A2, "BoolProperty"},
            {"Mobility", 0x1A3, "ByteProperty"},
            {"DetailMode", 0x1A4, "ByteProperty"},
            {"PhysicsVolumeChangedDelegate", 0x1A5, "MulticastSparseDelegateProperty"},
        }};
    };

    struct VerseCollisionPushWrapperCameraNode
    {
        static constexpr std::string_view Name = "VerseCollisionPushWrapperCameraNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NativeCameraRigCameraModifierNode";
        struct Offsets
        {
            static constexpr std::uintptr_t InnerNode = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InnerNode", 0x38, "ObjectProperty"},
        }};
    };

    struct VerseDampenRotationWrapperCameraNode
    {
        static constexpr std::string_view Name = "VerseDampenRotationWrapperCameraNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NativeCameraRigCameraModifierNode";
        struct Offsets
        {
            static constexpr std::uintptr_t InnerNode = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InnerNode", 0x38, "ObjectProperty"},
        }};
    };

    struct VerseDampenTranslationWrapperCameraNode
    {
        static constexpr std::string_view Name = "VerseDampenTranslationWrapperCameraNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NativeCameraRigCameraModifierNode";
        struct Offsets
        {
            static constexpr std::uintptr_t InnerNode = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InnerNode", 0x38, "ObjectProperty"},
        }};
    };

    struct VerseDefaultCameraNode
    {
        static constexpr std::string_view Name = "VerseDefaultCameraNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CameraNode";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsEnabled = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bIsEnabled", 0x30, "BoolProperty"},
        }};
    };

    struct VerseDollyFramingWrapperCameraNode
    {
        static constexpr std::string_view Name = "VerseDollyFramingWrapperCameraNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "VerseBaseFramingWrapperCameraNode";
        struct Offsets
        {
            static constexpr std::uintptr_t InnerNode = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InnerNode", 0x38, "ObjectProperty"},
        }};
    };

    struct VerseOffsetWrapperCameraNode
    {
        static constexpr std::string_view Name = "VerseOffsetWrapperCameraNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NativeCameraRigCameraModifierNode";
        struct Offsets
        {
            static constexpr std::uintptr_t InnerNode = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InnerNode", 0x38, "ObjectProperty"},
        }};
    };

    struct VersePanningFramingWrapperCameraNode
    {
        static constexpr std::string_view Name = "VersePanningFramingWrapperCameraNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "VerseBaseFramingWrapperCameraNode";
        struct Offsets
        {
            static constexpr std::uintptr_t InnerNode = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InnerNode", 0x38, "ObjectProperty"},
        }};
    };

    struct VerseSetRotationWrapperCameraNode
    {
        static constexpr std::string_view Name = "VerseSetRotationWrapperCameraNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NativeCameraRigCameraModifierNode";
        struct Offsets
        {
            static constexpr std::uintptr_t InnerNode = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InnerNode", 0x38, "ObjectProperty"},
        }};
    };

    struct VerseSetTranslationWrapperCameraNode
    {
        static constexpr std::string_view Name = "VerseSetTranslationWrapperCameraNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NativeCameraRigCameraModifierNode";
        struct Offsets
        {
            static constexpr std::uintptr_t InnerNode = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InnerNode", 0x38, "ObjectProperty"},
        }};
    };

    struct VerseSingleCameraDirector
    {
        static constexpr std::string_view Name = "VerseSingleCameraDirector";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CameraDirector";
        struct Offsets
        {
            static constexpr std::uintptr_t CameraRig = 0x48;
            static constexpr std::uintptr_t CameraRigLayer = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CameraRig", 0x48, "ObjectProperty"},
            {"CameraRigLayer", 0x50, "OptionalProperty"},
        }};
    };

}

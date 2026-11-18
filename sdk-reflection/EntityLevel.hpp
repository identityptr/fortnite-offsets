#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::EntityLevel
{
    struct EntityProxyActor
    {
        static constexpr std::string_view Name = "EntityProxyActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t Entity = 0x280;
            static constexpr std::uintptr_t LevelEntity = 0x290;
            static constexpr std::uintptr_t TransformComponent = 0x298;
            static constexpr std::uintptr_t DuplicatedEntity = 0x2B8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Entity", 0x280, "ObjectProperty"},
            {"LevelEntity", 0x290, "ObjectProperty"},
            {"TransformComponent", 0x298, "ObjectProperty"},
            {"DuplicatedEntity", 0x2B8, "ObjectProperty"},
        }};
    };

    struct EntityProxyActorComponent
    {
        static constexpr std::string_view Name = "EntityProxyActorComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t Entity = 0xC0;
            static constexpr std::uintptr_t EntityComponent = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Entity", 0xC0, "ObjectProperty"},
            {"EntityComponent", 0xC8, "ObjectProperty"},
        }};
    };

    struct EntitySceneComponent
    {
        static constexpr std::string_view Name = "EntitySceneComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimitiveComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t LevelEntity = 0x560;
            static constexpr std::uintptr_t bIgnoreAttachmentUponPaste = 0x568;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"LevelEntity", 0x560, "ObjectProperty"},
            {"bIgnoreAttachmentUponPaste", 0x568, "BoolProperty"},
        }};
    };

    struct LevelEntity
    {
        static constexpr std::string_view Name = "LevelEntity";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t LevelEntity = 0x288;
            static constexpr std::uintptr_t NotificationForwardingComponent = 0x298;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"LevelEntity", 0x288, "ObjectProperty"},
            {"NotificationForwardingComponent", 0x298, "ObjectProperty"},
        }};
    };

    struct LevelEntityForwardNotificationComponent
    {
        static constexpr std::string_view Name = "LevelEntityForwardNotificationComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PrimaryComponentTick = 0x38;
            static constexpr std::uintptr_t ComponentTags = 0x68;
            static constexpr std::uintptr_t AssetUserData = 0x78;
            static constexpr std::uintptr_t UCSSerializationIndex = 0x90;
            static constexpr std::uintptr_t bNetAddressable = 0x98;
            static constexpr std::uintptr_t bReplicateUsingRegisteredSubObjectList = 0x98;
            static constexpr std::uintptr_t bReplicates = 0x98;
            static constexpr std::uintptr_t bAutoActivate = 0x9A;
            static constexpr std::uintptr_t bCanEverAffectNavigation = 0x9A;
            static constexpr std::uintptr_t bEditableWhenInherited = 0x9A;
            static constexpr std::uintptr_t bIsActive = 0x9A;
            static constexpr std::uintptr_t bIsEditorOnly = 0x9B;
            static constexpr std::uintptr_t CreationMethod = 0xB9;
            static constexpr std::uintptr_t OnComponentActivated = 0xBA;
            static constexpr std::uintptr_t OnComponentDeactivated = 0xBB;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"PrimaryComponentTick", 0x38, "StructProperty"},
            {"ComponentTags", 0x68, "ArrayProperty"},
            {"AssetUserData", 0x78, "ArrayProperty"},
            {"UCSSerializationIndex", 0x90, "IntProperty"},
            {"bNetAddressable", 0x98, "BoolProperty"},
            {"bReplicateUsingRegisteredSubObjectList", 0x98, "BoolProperty"},
            {"bReplicates", 0x98, "BoolProperty"},
            {"bAutoActivate", 0x9A, "BoolProperty"},
            {"bCanEverAffectNavigation", 0x9A, "BoolProperty"},
            {"bEditableWhenInherited", 0x9A, "BoolProperty"},
            {"bIsActive", 0x9A, "BoolProperty"},
            {"bIsEditorOnly", 0x9B, "BoolProperty"},
            {"CreationMethod", 0xB9, "EnumProperty"},
            {"OnComponentActivated", 0xBA, "MulticastSparseDelegateProperty"},
            {"OnComponentDeactivated", 0xBB, "MulticastSparseDelegateProperty"},
        }};
    };

    struct LevelEntitySceneComponent
    {
        static constexpr std::string_view Name = "LevelEntitySceneComponent";
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

    struct SceneGraphSettings
    {
        static constexpr std::string_view Name = "SceneGraphSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t AllowedSceneGraphDomainsForAnalytics = 0x28;
            static constexpr std::uintptr_t SkipSceneGraphEntitiesForAnalytics = 0x38;
            static constexpr std::uintptr_t SkipSceneGraphComponentsForAnalytics = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"AllowedSceneGraphDomainsForAnalytics", 0x28, "ArrayProperty"},
            {"SkipSceneGraphEntitiesForAnalytics", 0x38, "ArrayProperty"},
            {"SkipSceneGraphComponentsForAnalytics", 0x48, "ArrayProperty"},
        }};
    };

}

#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::ISMPool
{
    struct ISMPoolActor
    {
        static constexpr std::string_view Name = "ISMPoolActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t ISMPoolComp = 0x278;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ISMPoolComp", 0x278, "ObjectProperty"},
        }};
    };

    struct ISMPoolComponent
    {
        static constexpr std::string_view Name = "ISMPoolComponent";
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

    struct ISMPoolDebugDrawComponent
    {
        static constexpr std::string_view Name = "ISMPoolDebugDrawComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DebugDrawComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bShowGlobalStats = 0x5C0;
            static constexpr std::uintptr_t bShowStats = 0x5C1;
            static constexpr std::uintptr_t bShowBounds = 0x5C2;
            static constexpr std::uintptr_t SelectedComponent = 0x5C8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bShowGlobalStats", 0x5C0, "BoolProperty"},
            {"bShowStats", 0x5C1, "BoolProperty"},
            {"bShowBounds", 0x5C2, "BoolProperty"},
            {"SelectedComponent", 0x5C8, "ObjectProperty"},
        }};
    };

    struct ISMPoolSubSystem
    {
        static constexpr std::string_view Name = "ISMPoolSubSystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "OnActorEndPlay",
        }};
    };

}

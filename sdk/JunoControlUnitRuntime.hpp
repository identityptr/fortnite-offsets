#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::JunoControlUnitRuntime
{
    struct JunoControlUnitAnalytics
    {
        static constexpr std::string_view Name = "JunoControlUnitAnalytics";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoControlUnitAnimInstance
    {
        static constexpr std::string_view Name = "JunoControlUnitAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t CurrentSkeleton = 0x28;
            static constexpr std::uintptr_t RootMotionMode = 0x30;
            static constexpr std::uintptr_t bPropagateNotifiesToLinkedInstances = 0x31;
            static constexpr std::uintptr_t bReceiveNotifiesFromLinkedInstances = 0x31;
            static constexpr std::uintptr_t bUseMainInstanceMontageEvaluationData = 0x31;
            static constexpr std::uintptr_t bUseMultiThreadedAnimationUpdate = 0x31;
            static constexpr std::uintptr_t bUsingCopyPoseFromMesh = 0x31;
            static constexpr std::uintptr_t bQueueMontageEvents = 0x32;
            static constexpr std::uintptr_t OnMontageBlendingOut = 0x38;
            static constexpr std::uintptr_t OnMontageBlendedIn = 0x48;
            static constexpr std::uintptr_t OnMontageStarted = 0x58;
            static constexpr std::uintptr_t OnMontageEnded = 0x68;
            static constexpr std::uintptr_t OnAllMontageInstancesEnded = 0x78;
            static constexpr std::uintptr_t OnMontageSectionChanged = 0x88;
            static constexpr std::uintptr_t SlotGroupInertializationRequestDataMap = 0xB8;
            static constexpr std::uintptr_t NotifyQueue = 0x110;
            static constexpr std::uintptr_t ActiveAnimNotifyState = 0x148;
            static constexpr std::uintptr_t ActiveAnimNotifyEventReference = 0x158;
        };

        inline static constexpr std::array<PropertyInfo, 18> Properties{{
            {"CurrentSkeleton", 0x28, "ObjectProperty"},
            {"RootMotionMode", 0x30, "ByteProperty"},
            {"bPropagateNotifiesToLinkedInstances", 0x31, "BoolProperty"},
            {"bReceiveNotifiesFromLinkedInstances", 0x31, "BoolProperty"},
            {"bUseMainInstanceMontageEvaluationData", 0x31, "BoolProperty"},
            {"bUseMultiThreadedAnimationUpdate", 0x31, "BoolProperty"},
            {"bUsingCopyPoseFromMesh", 0x31, "BoolProperty"},
            {"bQueueMontageEvents", 0x32, "BoolProperty"},
            {"OnMontageBlendingOut", 0x38, "MulticastInlineDelegateProperty"},
            {"OnMontageBlendedIn", 0x48, "MulticastInlineDelegateProperty"},
            {"OnMontageStarted", 0x58, "MulticastInlineDelegateProperty"},
            {"OnMontageEnded", 0x68, "MulticastInlineDelegateProperty"},
            {"OnAllMontageInstancesEnded", 0x78, "MulticastInlineDelegateProperty"},
            {"OnMontageSectionChanged", 0x88, "MulticastInlineDelegateProperty"},
            {"SlotGroupInertializationRequestDataMap", 0xB8, "MapProperty"},
            {"NotifyQueue", 0x110, "StructProperty"},
            {"ActiveAnimNotifyState", 0x148, "ArrayProperty"},
            {"ActiveAnimNotifyEventReference", 0x158, "ArrayProperty"},
        }};
    };

    struct JunoControlUnitBlueprintLibrary
    {
        static constexpr std::string_view Name = "JunoControlUnitBlueprintLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoPlayerControllerComponent_ControlUnitAnalytics
    {
        static constexpr std::string_view Name = "JunoPlayerControllerComponent_ControlUnitAnalytics";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ControlUnitSessionData = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ControlUnitSessionData", 0xC0, "StructProperty"},
        }};
    };

}

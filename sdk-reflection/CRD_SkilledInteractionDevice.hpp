#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::CRD_SkilledInteractionDevice
{
    struct FortSkilledInteractContainerBase
    {
        static constexpr std::string_view Name = "FortSkilledInteractContainerBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t OnInputPressed = 0x4A0;
            static constexpr std::uintptr_t OnInputReleased = 0x4B0;
            static constexpr std::uintptr_t TriggeringActions = 0x4C0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"OnInputPressed", 0x4A0, "MulticastInlineDelegateProperty"},
            {"OnInputReleased", 0x4B0, "MulticastInlineDelegateProperty"},
            {"TriggeringActions", 0x4C0, "ArrayProperty"},
        }};
    };

    struct FortSkilledInteractionPlayerComponent
    {
        static constexpr std::string_view Name = "FortSkilledInteractionPlayerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PlayerStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ViewModelClass = 0xC0;
            static constexpr std::uintptr_t ViewModel = 0xC8;
            static constexpr std::uintptr_t InteractionDevice = 0xD0;
            static constexpr std::uintptr_t InteractionState = 0xD8;
            static constexpr std::uintptr_t SuccessCount = 0xDC;
            static constexpr std::uintptr_t FailureCount = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"ViewModelClass", 0xC0, "ClassProperty"},
            {"ViewModel", 0xC8, "ObjectProperty"},
            {"InteractionDevice", 0xD0, "WeakObjectProperty"},
            {"InteractionState", 0xD8, "EnumProperty"},
            {"SuccessCount", 0xDC, "IntProperty"},
            {"FailureCount", 0xE0, "IntProperty"},
        }};
    };

    struct FortSkilledInteractionPlayerListComponent
    {
        static constexpr std::string_view Name = "FortSkilledInteractionPlayerListComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ViewModelClass = 0xC0;
            static constexpr std::uintptr_t ViewModel = 0xC8;
            static constexpr std::uintptr_t SuccessTarget = 0xD0;
            static constexpr std::uintptr_t FailureLimit = 0xD4;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ViewModelClass", 0xC0, "ClassProperty"},
            {"ViewModel", 0xC8, "ObjectProperty"},
            {"SuccessTarget", 0xD0, "IntProperty"},
            {"FailureLimit", 0xD4, "IntProperty"},
        }};
    };

    struct FortSkilledInteractionPlayerListViewModel
    {
        static constexpr std::string_view Name = "FortSkilledInteractionPlayerListViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Players = 0x68;
            static constexpr std::uintptr_t SuccessTarget = 0x78;
            static constexpr std::uintptr_t FailureLimit = 0x7C;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Players", 0x68, "ArrayProperty"},
            {"SuccessTarget", 0x78, "IntProperty"},
            {"FailureLimit", 0x7C, "IntProperty"},
        }};
    };

    struct FortSkilledInteractionPlayerQueueComponent
    {
        static constexpr std::string_view Name = "FortSkilledInteractionPlayerQueueComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t QueueType = 0xC0;
            static constexpr std::uintptr_t SynchronousExecutionAmount = 0xC4;
            static constexpr std::uintptr_t bAllowDuplicateControllerEntries = 0xC8;
            static constexpr std::uintptr_t QueueSizeMax = 0xCC;
            static constexpr std::uintptr_t ControllerQueue = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"QueueType", 0xC0, "EnumProperty"},
            {"SynchronousExecutionAmount", 0xC4, "IntProperty"},
            {"bAllowDuplicateControllerEntries", 0xC8, "BoolProperty"},
            {"QueueSizeMax", 0xCC, "IntProperty"},
            {"ControllerQueue", 0xD0, "ArrayProperty"},
        }};
    };

    struct FortSkilledInteractionPlayerViewModel
    {
        static constexpr std::string_view Name = "FortSkilledInteractionPlayerViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayerState = 0x68;
            static constexpr std::uintptr_t InteractionState = 0x70;
            static constexpr std::uintptr_t SuccessCount = 0x74;
            static constexpr std::uintptr_t FailureCount = 0x78;
            static constexpr std::uintptr_t CleanupDate = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"PlayerState", 0x68, "ObjectProperty"},
            {"InteractionState", 0x70, "EnumProperty"},
            {"SuccessCount", 0x74, "IntProperty"},
            {"FailureCount", 0x78, "IntProperty"},
            {"CleanupDate", 0x80, "OptionalProperty"},
        }};
    };

    struct FortSkilledInteractionViewModelResolver
    {
        static constexpr std::string_view Name = "FortSkilledInteractionViewModelResolver";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelContextResolver";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}

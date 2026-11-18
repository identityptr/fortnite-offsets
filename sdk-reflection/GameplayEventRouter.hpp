#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::GameplayEventRouter
{
    struct AsyncAction_StartListeningToEvent
    {
        static constexpr std::string_view Name = "AsyncAction_StartListeningToEvent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CancellableAsyncAction";
        struct Offsets
        {
            static constexpr std::uintptr_t OnEventReceived = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OnEventReceived", 0x30, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 4> FunctionNames{{
            "GetPayload",
            "StartListeningToEvent",
            "StartListeningToEventBackwardCompatible",
            "StopListeningToEvent",
        }};
    };

    struct AsyncAction_StartListeningToStatefulEvent
    {
        static constexpr std::string_view Name = "AsyncAction_StartListeningToStatefulEvent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CancellableAsyncAction";
        struct Offsets
        {
            static constexpr std::uintptr_t OnEventReceived = 0x30;
            static constexpr std::uintptr_t OnSavedEventStateExists = 0x40;
            static constexpr std::uintptr_t OnEventStateCleared = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"OnEventReceived", 0x30, "MulticastInlineDelegateProperty"},
            {"OnSavedEventStateExists", 0x40, "MulticastInlineDelegateProperty"},
            {"OnEventStateCleared", 0x50, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 4> FunctionNames{{
            "GetPayload",
            "StartListeningToStatefulEvent",
            "StartListeningToStatefulEventBackwardsCompatible",
            "StopListeningToStatefulEvent",
        }};
    };

    struct AsyncAction_WaitForGlobalEventRouter
    {
        static constexpr std::string_view Name = "AsyncAction_WaitForGlobalEventRouter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CancellableAsyncAction";
        struct Offsets
        {
            static constexpr std::uintptr_t OnEventRouterAvailable = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OnEventRouterAvailable", 0x30, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "HandleContextActorEndPlay",
            "WaitForGlobalEventRouter",
        }};
    };

    struct GameplayEventGlobalRouterPendingListenerData
    {
        static constexpr std::string_view Name = "GameplayEventGlobalRouterPendingListenerData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t EventType = 0xB0;
            static constexpr std::uintptr_t EventContext = 0xB8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"EventType", 0xB0, "ObjectProperty"},
            {"EventContext", 0xB8, "ObjectProperty"},
        }};
    };

    struct GameplayEventId
    {
        static constexpr std::string_view Name = "GameplayEventId";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GameplayEventListenerBackwardCompatibleHandle
    {
        static constexpr std::string_view Name = "GameplayEventListenerBackwardCompatibleHandle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GameplayEventListenerData
    {
        static constexpr std::string_view Name = "GameplayEventListenerData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t EventType = 0x90;
            static constexpr std::uintptr_t EventContext = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"EventType", 0x90, "WeakObjectProperty"},
            {"EventContext", 0x98, "ObjectProperty"},
        }};
    };

    struct GameplayEventListenerHandle
    {
        static constexpr std::string_view Name = "GameplayEventListenerHandle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Handle = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Handle", 0x10, "IntProperty"},
        }};
    };

    struct GameplayEventListenerList
    {
        static constexpr std::string_view Name = "GameplayEventListenerList";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GameplayEventRouterComponent
    {
        static constexpr std::string_view Name = "GameplayEventRouterComponent";
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

        inline static constexpr std::array<std::string_view, 6> FunctionNames{{
            "ClearEventState",
            "ClearEventStateByContext",
            "HasValidEventState",
            "K2_BroadcastEvent",
            "K2_BroadcastStatefulEvent",
            "StopListeningToEvent",
        }};
    };

    struct GameplayEventRouterOwnerInterface
    {
        static constexpr std::string_view Name = "GameplayEventRouterOwnerInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "GetEventRouterClass",
        }};
    };

    struct GameplayEventRouterSubsystem
    {
        static constexpr std::string_view Name = "GameplayEventRouterSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameInstanceSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t PendingGlobalRouterListenerDatas = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PendingGlobalRouterListenerDatas", 0x88, "ArrayProperty"},
        }};

        inline static constexpr std::array<std::string_view, 6> FunctionNames{{
            "ClearEventStateBackwardCompatible",
            "ClearEventStateByContextBackwardCompatible",
            "GetEventRouter",
            "GetGlobalEventRouter",
            "K2_BroadcastEventBackwardCompatible",
            "K2_BroadcastStatefulEventBackwardCompatible",
        }};
    };

}

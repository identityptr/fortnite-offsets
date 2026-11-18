#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::GameplayTasks
{
    struct GameplayResourceSet
    {
        static constexpr std::string_view Name = "GameplayResourceSet";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GameplayTask
    {
        static constexpr std::string_view Name = "GameplayTask";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t InstanceName = 0x30;
            static constexpr std::uintptr_t ResourceOverlapPolicy = 0x36;
            static constexpr std::uintptr_t ChildTask = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"InstanceName", 0x30, "NameProperty"},
            {"ResourceOverlapPolicy", 0x36, "EnumProperty"},
            {"ChildTask", 0x58, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "EndTask",
            "ReadyForActivation",
        }};
    };

    struct GameplayTaskOwnerInterface
    {
        static constexpr std::string_view Name = "GameplayTaskOwnerInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GameplayTaskResource
    {
        static constexpr std::string_view Name = "GameplayTaskResource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t ManualResourceID = 0x28;
            static constexpr std::uintptr_t AutoResourceID = 0x2C;
            static constexpr std::uintptr_t bManuallySetID = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ManualResourceID", 0x28, "IntProperty"},
            {"AutoResourceID", 0x2C, "Int8Property"},
            {"bManuallySetID", 0x30, "BoolProperty"},
        }};
    };

    struct GameplayTask_ClaimResource
    {
        static constexpr std::string_view Name = "GameplayTask_ClaimResource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameplayTask";
        struct Offsets
        {
            static constexpr std::uintptr_t InstanceName = 0x30;
            static constexpr std::uintptr_t ResourceOverlapPolicy = 0x36;
            static constexpr std::uintptr_t ChildTask = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"InstanceName", 0x30, "NameProperty"},
            {"ResourceOverlapPolicy", 0x36, "EnumProperty"},
            {"ChildTask", 0x58, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "ClaimResource",
            "ClaimResources",
        }};
    };

    struct GameplayTask_SpawnActor
    {
        static constexpr std::string_view Name = "GameplayTask_SpawnActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameplayTask";
        struct Offsets
        {
            static constexpr std::uintptr_t Success = 0x60;
            static constexpr std::uintptr_t DidNotSpawn = 0x70;
            static constexpr std::uintptr_t ClassToSpawn = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Success", 0x60, "MulticastInlineDelegateProperty"},
            {"DidNotSpawn", 0x70, "MulticastInlineDelegateProperty"},
            {"ClassToSpawn", 0xB0, "ClassProperty"},
        }};

        inline static constexpr std::array<std::string_view, 3> FunctionNames{{
            "BeginSpawningActor",
            "FinishSpawningActor",
            "SpawnActor",
        }};
    };

    struct GameplayTask_TimeLimitedExecution
    {
        static constexpr std::string_view Name = "GameplayTask_TimeLimitedExecution";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameplayTask";
        struct Offsets
        {
            static constexpr std::uintptr_t OnFinished = 0x60;
            static constexpr std::uintptr_t OnTimeExpired = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OnFinished", 0x60, "MulticastInlineDelegateProperty"},
            {"OnTimeExpired", 0x70, "MulticastInlineDelegateProperty"},
        }};
    };

    struct GameplayTask_WaitDelay
    {
        static constexpr std::string_view Name = "GameplayTask_WaitDelay";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameplayTask";
        struct Offsets
        {
            static constexpr std::uintptr_t OnFinish = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OnFinish", 0x60, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "TaskWaitDelay",
        }};
    };

    struct GameplayTasksComponent
    {
        static constexpr std::string_view Name = "GameplayTasksComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t TaskPriorityQueue = 0xD8;
            static constexpr std::uintptr_t TickingTasks = 0xF8;
            static constexpr std::uintptr_t KnownTasks = 0x108;
            static constexpr std::uintptr_t OnClaimedResourcesChange = 0x118;
            static constexpr std::uintptr_t SimulatedTasks = 0x128;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"TaskPriorityQueue", 0xD8, "ArrayProperty"},
            {"TickingTasks", 0xF8, "ArrayProperty"},
            {"KnownTasks", 0x108, "ArrayProperty"},
            {"OnClaimedResourcesChange", 0x118, "MulticastInlineDelegateProperty"},
            {"SimulatedTasks", 0x128, "ArrayProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "K2_RunGameplayTask",
            "OnRep_SimulatedTasks",
        }};
    };

}

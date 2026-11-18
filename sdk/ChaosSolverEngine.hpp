#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::ChaosSolverEngine
{
    struct BreakEventCallbackWrapper
    {
        static constexpr std::string_view Name = "BreakEventCallbackWrapper";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ChaosDebugDrawComponent
    {
        static constexpr std::string_view Name = "ChaosDebugDrawComponent";
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

    struct ChaosDebugDrawSubsystem
    {
        static constexpr std::string_view Name = "ChaosDebugDrawSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ChaosDebugSubstepControl
    {
        static constexpr std::string_view Name = "ChaosDebugSubstepControl";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bPause = 0x0;
            static constexpr std::uintptr_t bSubstep = 0x1;
            static constexpr std::uintptr_t bStep = 0x2;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bPause", 0x0, "BoolProperty"},
            {"bSubstep", 0x1, "BoolProperty"},
            {"bStep", 0x2, "BoolProperty"},
        }};
    };

    struct ChaosEventListenerComponent
    {
        static constexpr std::string_view Name = "ChaosEventListenerComponent";
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

    struct ChaosGameplayEventDispatcher
    {
        static constexpr std::string_view Name = "ChaosGameplayEventDispatcher";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChaosEventListenerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CollisionEventRegistrations = 0x108;
            static constexpr std::uintptr_t BreakEventRegistrations = 0x118;
            static constexpr std::uintptr_t RemovalEventRegistrations = 0x128;
            static constexpr std::uintptr_t CrumblingEventRegistrations = 0x138;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"CollisionEventRegistrations", 0x108, "MapProperty"},
            {"BreakEventRegistrations", 0x118, "MapProperty"},
            {"RemovalEventRegistrations", 0x128, "MapProperty"},
            {"CrumblingEventRegistrations", 0x138, "MapProperty"},
        }};
    };

    struct ChaosHandlerSet
    {
        static constexpr std::string_view Name = "ChaosHandlerSet";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ChaosHandlers = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ChaosHandlers", 0x8, "SetProperty"},
        }};
    };

    struct ChaosNotifyHandlerInterface
    {
        static constexpr std::string_view Name = "ChaosNotifyHandlerInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ChaosPhysicsCollisionInfo
    {
        static constexpr std::string_view Name = "ChaosPhysicsCollisionInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Component = 0x0;
            static constexpr std::uintptr_t OtherComponent = 0x8;
            static constexpr std::uintptr_t Location = 0x10;
            static constexpr std::uintptr_t Normal = 0x28;
            static constexpr std::uintptr_t AccumulatedImpulse = 0x40;
            static constexpr std::uintptr_t Velocity = 0x58;
            static constexpr std::uintptr_t OtherVelocity = 0x70;
            static constexpr std::uintptr_t AngularVelocity = 0x88;
            static constexpr std::uintptr_t OtherAngularVelocity = 0xA0;
            static constexpr std::uintptr_t Mass = 0xB8;
            static constexpr std::uintptr_t OtherMass = 0xBC;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"Component", 0x0, "ObjectProperty"},
            {"OtherComponent", 0x8, "ObjectProperty"},
            {"Location", 0x10, "StructProperty"},
            {"Normal", 0x28, "StructProperty"},
            {"AccumulatedImpulse", 0x40, "StructProperty"},
            {"Velocity", 0x58, "StructProperty"},
            {"OtherVelocity", 0x70, "StructProperty"},
            {"AngularVelocity", 0x88, "StructProperty"},
            {"OtherAngularVelocity", 0xA0, "StructProperty"},
            {"Mass", 0xB8, "FloatProperty"},
            {"OtherMass", 0xBC, "FloatProperty"},
        }};
    };

    struct ChaosSolver
    {
        static constexpr std::string_view Name = "ChaosSolver";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ChaosSolverActor
    {
        static constexpr std::string_view Name = "ChaosSolverActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t Properties = 0x280;
            static constexpr std::uintptr_t TimeStepMultiplier = 0x304;
            static constexpr std::uintptr_t CollisionIterations = 0x308;
            static constexpr std::uintptr_t PushOutIterations = 0x30C;
            static constexpr std::uintptr_t PushOutPairIterations = 0x310;
            static constexpr std::uintptr_t ClusterConnectionFactor = 0x314;
            static constexpr std::uintptr_t ClusterUnionConnectionType = 0x318;
            static constexpr std::uintptr_t DoGenerateCollisionData = 0x319;
            static constexpr std::uintptr_t CollisionFilterSettings = 0x31C;
            static constexpr std::uintptr_t DoGenerateBreakingData = 0x32C;
            static constexpr std::uintptr_t BreakingFilterSettings = 0x330;
            static constexpr std::uintptr_t DoGenerateTrailingData = 0x340;
            static constexpr std::uintptr_t TrailingFilterSettings = 0x344;
            static constexpr std::uintptr_t MassScale = 0x354;
            static constexpr std::uintptr_t bHasFloor = 0x358;
            static constexpr std::uintptr_t FloorHeight = 0x35C;
            static constexpr std::uintptr_t ChaosDebugSubstepControl = 0x360;
            static constexpr std::uintptr_t SpriteComponent = 0x368;
            static constexpr std::uintptr_t SimulationAsset = 0x370;
            static constexpr std::uintptr_t GameplayEventDispatcherComponent = 0x3E8;
        };

        inline static constexpr std::array<PropertyInfo, 20> Properties{{
            {"Properties", 0x280, "StructProperty"},
            {"TimeStepMultiplier", 0x304, "FloatProperty"},
            {"CollisionIterations", 0x308, "IntProperty"},
            {"PushOutIterations", 0x30C, "IntProperty"},
            {"PushOutPairIterations", 0x310, "IntProperty"},
            {"ClusterConnectionFactor", 0x314, "FloatProperty"},
            {"ClusterUnionConnectionType", 0x318, "EnumProperty"},
            {"DoGenerateCollisionData", 0x319, "BoolProperty"},
            {"CollisionFilterSettings", 0x31C, "StructProperty"},
            {"DoGenerateBreakingData", 0x32C, "BoolProperty"},
            {"BreakingFilterSettings", 0x330, "StructProperty"},
            {"DoGenerateTrailingData", 0x340, "BoolProperty"},
            {"TrailingFilterSettings", 0x344, "StructProperty"},
            {"MassScale", 0x354, "FloatProperty"},
            {"bHasFloor", 0x358, "BoolProperty"},
            {"FloorHeight", 0x35C, "FloatProperty"},
            {"ChaosDebugSubstepControl", 0x360, "StructProperty"},
            {"SpriteComponent", 0x368, "ObjectProperty"},
            {"SimulationAsset", 0x370, "StructProperty"},
            {"GameplayEventDispatcherComponent", 0x3E8, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "SetAsCurrentWorldSolver",
            "SetSolverActive",
        }};
    };

    struct ChaosSolverEngineBlueprintLibrary
    {
        static constexpr std::string_view Name = "ChaosSolverEngineBlueprintLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "ConvertPhysicsCollisionToHitResult",
        }};
    };

    struct ChaosSolverSettings
    {
        static constexpr std::string_view Name = "ChaosSolverSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeveloperSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultChaosSolverActorClass = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DefaultChaosSolverActorClass", 0x38, "StructProperty"},
        }};
    };

    struct ChaosVDChannelStateChangeCommandMessage
    {
        static constexpr std::string_view Name = "ChaosVDChannelStateChangeCommandMessage";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t NewState = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"NewState", 0x0, "StructProperty"},
        }};
    };

    struct ChaosVDChannelStateChangeResponseMessage
    {
        static constexpr std::string_view Name = "ChaosVDChannelStateChangeResponseMessage";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t InstanceID = 0x0;
            static constexpr std::uintptr_t NewState = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"InstanceID", 0x0, "StructProperty"},
            {"NewState", 0x10, "StructProperty"},
        }};
    };

    struct ChaosVDDataChannelState
    {
        static constexpr std::string_view Name = "ChaosVDDataChannelState";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ChannelName = 0x0;
            static constexpr std::uintptr_t bIsEnabled = 0x10;
            static constexpr std::uintptr_t bCanChangeChannelState = 0x11;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ChannelName", 0x0, "StrProperty"},
            {"bIsEnabled", 0x10, "BoolProperty"},
            {"bCanChangeChannelState", 0x11, "BoolProperty"},
        }};
    };

    struct ChaosVDFullSessionInfoResponseData
    {
        static constexpr std::string_view Name = "ChaosVDFullSessionInfoResponseData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t DataChannelsStates = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DataChannelsStates", 0x0, "ArrayProperty"},
        }};
    };

    struct ChaosVDRelayTraceDataMessage
    {
        static constexpr std::string_view Name = "ChaosVDRelayTraceDataMessage";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t InstanceID = 0x0;
            static constexpr std::uintptr_t DataBuffer = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"InstanceID", 0x0, "StructProperty"},
            {"DataBuffer", 0x10, "ArrayProperty"},
        }};
    };

    struct ChaosVDRelayTraceStatusMessage
    {
        static constexpr std::string_view Name = "ChaosVDRelayTraceStatusMessage";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t InstanceID = 0x0;
            static constexpr std::uintptr_t QueuedDataBytesNum = 0x10;
            static constexpr std::uintptr_t ThrottlingState = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"InstanceID", 0x0, "StructProperty"},
            {"QueuedDataBytesNum", 0x10, "Int64Property"},
            {"ThrottlingState", 0x18, "EnumProperty"},
        }};
    };

    struct ChaosVDSessionData
    {
        static constexpr std::string_view Name = "ChaosVDSessionData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ChaosVDStopRecordingCommandMessage
    {
        static constexpr std::string_view Name = "ChaosVDStopRecordingCommandMessage";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "StopRecordingCommandMessage";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct CrumblingEventCallbackWrapper
    {
        static constexpr std::string_view Name = "CrumblingEventCallbackWrapper";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DataflowRigidSolverProxy
    {
        static constexpr std::string_view Name = "DataflowRigidSolverProxy";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowPhysicsSolverProxy";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RemovalEventCallbackWrapper
    {
        static constexpr std::string_view Name = "RemovalEventCallbackWrapper";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}

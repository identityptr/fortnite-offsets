#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::ChaosModularVehicleEngine
{
    struct ClusterUnionVehicleComponent
    {
        static constexpr std::string_view Name = "ClusterUnionVehicleComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ClusterUnionComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t Sockets = 0x6B0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Sockets", 0x6B0, "ArrayProperty"},
        }};
    };

    struct InputModifier_ModularVehicleSmooth
    {
        static constexpr std::string_view Name = "InputModifier_ModularVehicleSmooth";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InputModifier";
        struct Offsets
        {
            static constexpr std::uintptr_t RiseRate = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RiseRate", 0x28, "FloatProperty"},
        }};
    };

    struct ModularVehicleAnimationInstance
    {
        static constexpr std::string_view Name = "ModularVehicleAnimationInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t ModularVehicleComponent = 0x700;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ModularVehicleComponent", 0x700, "ObjectProperty"},
        }};
    };

    struct ModularVehicleAsset
    {
        static constexpr std::string_view Name = "ModularVehicleAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ModularVehicleBaseComponent
    {
        static constexpr std::string_view Name = "ModularVehicleBaseComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PawnMovementComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnModuleAddedEvent = 0x1D0;
            static constexpr std::uintptr_t OnModuleRemovedEvent = 0x1E0;
            static constexpr std::uintptr_t LinearDamping = 0x1F0;
            static constexpr std::uintptr_t AngularDamping = 0x1F4;
            static constexpr std::uintptr_t SuspensionTraceCollisionResponses = 0x1F8;
            static constexpr std::uintptr_t SuspensionCollisionChannel = 0x238;
            static constexpr std::uintptr_t bSuspensionTraceComplex = 0x239;
            static constexpr std::uintptr_t TraceType = 0x23A;
            static constexpr std::uintptr_t bKeepVehicleAwake = 0x23B;
            static constexpr std::uintptr_t InputProducerClass = 0x240;
            static constexpr std::uintptr_t InputQuantizationType = 0x248;
            static constexpr std::uintptr_t bRequiresControllerForInputs = 0x249;
            static constexpr std::uintptr_t bAutoAddComponentsFromWorld = 0x24A;
            static constexpr std::uintptr_t AutoAddOverlappingBoxSize = 0x250;
            static constexpr std::uintptr_t DelayClusteringCount = 0x268;
            static constexpr std::uintptr_t ComponentToPhysicsObjects = 0x270;
            static constexpr std::uintptr_t ReplicatedState = 0x298;
            static constexpr std::uintptr_t GearInput = 0x2B0;
            static constexpr std::uintptr_t CurrentGear = 0x2B4;
            static constexpr std::uintptr_t EngineRPM = 0x2B8;
            static constexpr std::uintptr_t EngineTorque = 0x2BC;
            static constexpr std::uintptr_t NetworkPhysicsComponent = 0x2C0;
            static constexpr std::uintptr_t InputConfig = 0x2C8;
            static constexpr std::uintptr_t StateInputConfiguration = 0x2D8;
            static constexpr std::uintptr_t TreeProcessingOrder = 0x2E8;
            static constexpr std::uintptr_t ConstructionDatas = 0x2F0;
            static constexpr std::uintptr_t InputProducer = 0x3C8;
        };

        inline static constexpr std::array<PropertyInfo, 27> Properties{{
            {"OnModuleAddedEvent", 0x1D0, "MulticastInlineDelegateProperty"},
            {"OnModuleRemovedEvent", 0x1E0, "MulticastInlineDelegateProperty"},
            {"LinearDamping", 0x1F0, "FloatProperty"},
            {"AngularDamping", 0x1F4, "FloatProperty"},
            {"SuspensionTraceCollisionResponses", 0x1F8, "StructProperty"},
            {"SuspensionCollisionChannel", 0x238, "ByteProperty"},
            {"bSuspensionTraceComplex", 0x239, "BoolProperty"},
            {"TraceType", 0x23A, "EnumProperty"},
            {"bKeepVehicleAwake", 0x23B, "BoolProperty"},
            {"InputProducerClass", 0x240, "ClassProperty"},
            {"InputQuantizationType", 0x248, "EnumProperty"},
            {"bRequiresControllerForInputs", 0x249, "BoolProperty"},
            {"bAutoAddComponentsFromWorld", 0x24A, "BoolProperty"},
            {"AutoAddOverlappingBoxSize", 0x250, "StructProperty"},
            {"DelayClusteringCount", 0x268, "IntProperty"},
            {"ComponentToPhysicsObjects", 0x270, "MapProperty"},
            {"ReplicatedState", 0x298, "StructProperty"},
            {"GearInput", 0x2B0, "IntProperty"},
            {"CurrentGear", 0x2B4, "IntProperty"},
            {"EngineRPM", 0x2B8, "FloatProperty"},
            {"EngineTorque", 0x2BC, "FloatProperty"},
            {"NetworkPhysicsComponent", 0x2C0, "ObjectProperty"},
            {"InputConfig", 0x2C8, "ArrayProperty"},
            {"StateInputConfiguration", 0x2D8, "ArrayProperty"},
            {"TreeProcessingOrder", 0x2E8, "ByteProperty"},
            {"ConstructionDatas", 0x2F0, "ArrayProperty"},
            {"InputProducer", 0x3C8, "ObjectProperty"},
        }};
    };

    struct ModularVehicleClusterActor
    {
        static constexpr std::string_view Name = "ModularVehicleClusterActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t ClusterUnionVehicleComponent = 0x278;
            static constexpr std::uintptr_t VehicleSimComponent = 0x280;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ClusterUnionVehicleComponent", 0x278, "ObjectProperty"},
            {"VehicleSimComponent", 0x280, "ObjectProperty"},
        }};
    };

    struct ModularVehicleClusterPawn
    {
        static constexpr std::string_view Name = "ModularVehicleClusterPawn";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Pawn";
        struct Offsets
        {
            static constexpr std::uintptr_t ClusterUnionVehicleComponent = 0x2F8;
            static constexpr std::uintptr_t VehicleSimComponent = 0x300;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ClusterUnionVehicleComponent", 0x2F8, "ObjectProperty"},
            {"VehicleSimComponent", 0x300, "ObjectProperty"},
        }};
    };

    struct ModularVehicleSkeletalPawn
    {
        static constexpr std::string_view Name = "ModularVehicleSkeletalPawn";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Pawn";
        struct Offsets
        {
            static constexpr std::uintptr_t SkeletalMeshComponent = 0x2F8;
            static constexpr std::uintptr_t VehicleSimComponent = 0x300;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SkeletalMeshComponent", 0x2F8, "ObjectProperty"},
            {"VehicleSimComponent", 0x300, "ObjectProperty"},
        }};
    };

    struct SimModuleActor
    {
        static constexpr std::string_view Name = "SimModuleActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t MeshComp = 0x278;
            static constexpr std::uintptr_t SimComponent = 0x280;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"MeshComp", 0x278, "ObjectProperty"},
            {"SimComponent", 0x280, "ObjectProperty"},
        }};
    };

    struct VehicleDefaultInputProducer
    {
        static constexpr std::string_view Name = "VehicleDefaultInputProducer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "VehicleInputProducerBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct VehiclePlaybackInputProducer
    {
        static constexpr std::string_view Name = "VehiclePlaybackInputProducer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "VehicleInputProducerBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct VehicleRandomInputProducer
    {
        static constexpr std::string_view Name = "VehicleRandomInputProducer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "VehicleInputProducerBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct VehicleSimAerofoilComponent
    {
        static constexpr std::string_view Name = "VehicleSimAerofoilComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "VehicleSimBaseComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t Offset = 0x5B0;
            static constexpr std::uintptr_t ForceAxis = 0x5C8;
            static constexpr std::uintptr_t ControlRotationAxis = 0x5E0;
            static constexpr std::uintptr_t Area = 0x5F8;
            static constexpr std::uintptr_t Camber = 0x5FC;
            static constexpr std::uintptr_t MaxControlAngle = 0x600;
            static constexpr std::uintptr_t StallAngle = 0x604;
            static constexpr std::uintptr_t Type = 0x608;
            static constexpr std::uintptr_t LiftMultiplier = 0x60C;
            static constexpr std::uintptr_t DragMultiplier = 0x610;
            static constexpr std::uintptr_t AnimationMagnitudeMultiplier = 0x614;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"Offset", 0x5B0, "StructProperty"},
            {"ForceAxis", 0x5C8, "StructProperty"},
            {"ControlRotationAxis", 0x5E0, "StructProperty"},
            {"Area", 0x5F8, "FloatProperty"},
            {"Camber", 0x5FC, "FloatProperty"},
            {"MaxControlAngle", 0x600, "FloatProperty"},
            {"StallAngle", 0x604, "FloatProperty"},
            {"Type", 0x608, "EnumProperty"},
            {"LiftMultiplier", 0x60C, "FloatProperty"},
            {"DragMultiplier", 0x610, "FloatProperty"},
            {"AnimationMagnitudeMultiplier", 0x614, "FloatProperty"},
        }};
    };

    struct VehicleSimBaseComponent
    {
        static constexpr std::string_view Name = "VehicleSimBaseComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimitiveComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t BoneName = 0x568;
            static constexpr std::uintptr_t AnimationOffset = 0x570;
            static constexpr std::uintptr_t bAnimationEnabled = 0x588;
            static constexpr std::uintptr_t InputConfig = 0x590;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"BoneName", 0x568, "NameProperty"},
            {"AnimationOffset", 0x570, "StructProperty"},
            {"bAnimationEnabled", 0x588, "BoolProperty"},
            {"InputConfig", 0x590, "ArrayProperty"},
        }};
    };

    struct VehicleSimBaseComponentInterface
    {
        static constexpr std::string_view Name = "VehicleSimBaseComponentInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct VehicleSimBaseSceneComponent
    {
        static constexpr std::string_view Name = "VehicleSimBaseSceneComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SceneComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t InputConfig = 0x248;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InputConfig", 0x248, "ArrayProperty"},
        }};
    };

    struct VehicleSimChassisComponent
    {
        static constexpr std::string_view Name = "VehicleSimChassisComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "VehicleSimBaseComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t AreaMetresSquared = 0x5B0;
            static constexpr std::uintptr_t DragCoefficient = 0x5B4;
            static constexpr std::uintptr_t DensityOfMedium = 0x5B8;
            static constexpr std::uintptr_t XAxisMultiplier = 0x5BC;
            static constexpr std::uintptr_t YAxisMultiplier = 0x5C0;
            static constexpr std::uintptr_t AngularDamping = 0x5C4;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"AreaMetresSquared", 0x5B0, "FloatProperty"},
            {"DragCoefficient", 0x5B4, "FloatProperty"},
            {"DensityOfMedium", 0x5B8, "FloatProperty"},
            {"XAxisMultiplier", 0x5BC, "FloatProperty"},
            {"YAxisMultiplier", 0x5C0, "FloatProperty"},
            {"AngularDamping", 0x5C4, "FloatProperty"},
        }};
    };

    struct VehicleSimClutchComponent
    {
        static constexpr std::string_view Name = "VehicleSimClutchComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "VehicleSimBaseComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ClutchStrength = 0x5B0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ClutchStrength", 0x5B0, "FloatProperty"},
        }};
    };

    struct VehicleSimEngineComponent
    {
        static constexpr std::string_view Name = "VehicleSimEngineComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "VehicleSimBaseComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t TorqueCurve = 0x5B0;
            static constexpr std::uintptr_t MaxTorque = 0x5F8;
            static constexpr std::uintptr_t MaxRPM = 0x5FC;
            static constexpr std::uintptr_t EngineIdleRPM = 0x600;
            static constexpr std::uintptr_t EngineBrakeEffect = 0x604;
            static constexpr std::uintptr_t EngineInertia = 0x608;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"TorqueCurve", 0x5B0, "StructProperty"},
            {"MaxTorque", 0x5F8, "FloatProperty"},
            {"MaxRPM", 0x5FC, "IntProperty"},
            {"EngineIdleRPM", 0x600, "IntProperty"},
            {"EngineBrakeEffect", 0x604, "FloatProperty"},
            {"EngineInertia", 0x608, "FloatProperty"},
        }};
    };

    struct VehicleSimSuspensionComponent
    {
        static constexpr std::string_view Name = "VehicleSimSuspensionComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "VehicleSimBaseComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t SuspensionAxis = 0x5B0;
            static constexpr std::uintptr_t SuspensionMaxRaise = 0x5C8;
            static constexpr std::uintptr_t SuspensionMaxDrop = 0x5CC;
            static constexpr std::uintptr_t SpringRate = 0x5D0;
            static constexpr std::uintptr_t SpringPreload = 0x5D4;
            static constexpr std::uintptr_t SpringDamping = 0x5D8;
            static constexpr std::uintptr_t SuspensionForceEffect = 0x5DC;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"SuspensionAxis", 0x5B0, "StructProperty"},
            {"SuspensionMaxRaise", 0x5C8, "FloatProperty"},
            {"SuspensionMaxDrop", 0x5CC, "FloatProperty"},
            {"SpringRate", 0x5D0, "FloatProperty"},
            {"SpringPreload", 0x5D4, "FloatProperty"},
            {"SpringDamping", 0x5D8, "FloatProperty"},
            {"SuspensionForceEffect", 0x5DC, "FloatProperty"},
        }};
    };

    struct VehicleSimThrusterComponent
    {
        static constexpr std::string_view Name = "VehicleSimThrusterComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "VehicleSimBaseComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxThrustForce = 0x5B0;
            static constexpr std::uintptr_t ForceAxis = 0x5B8;
            static constexpr std::uintptr_t ForceOffset = 0x5D0;
            static constexpr std::uintptr_t bSteeringEnabled = 0x5E8;
            static constexpr std::uintptr_t SteeringAxis = 0x5F0;
            static constexpr std::uintptr_t MaxSteeringAngle = 0x608;
            static constexpr std::uintptr_t SteeringForceEffect = 0x60C;
            static constexpr std::uintptr_t BoostMultiplierEffect = 0x610;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"MaxThrustForce", 0x5B0, "FloatProperty"},
            {"ForceAxis", 0x5B8, "StructProperty"},
            {"ForceOffset", 0x5D0, "StructProperty"},
            {"bSteeringEnabled", 0x5E8, "BoolProperty"},
            {"SteeringAxis", 0x5F0, "StructProperty"},
            {"MaxSteeringAngle", 0x608, "FloatProperty"},
            {"SteeringForceEffect", 0x60C, "FloatProperty"},
            {"BoostMultiplierEffect", 0x610, "FloatProperty"},
        }};
    };

    struct VehicleSimTransmissionComponent
    {
        static constexpr std::string_view Name = "VehicleSimTransmissionComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "VehicleSimBaseComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnGearChangeEvent = 0x5C8;
            static constexpr std::uintptr_t ForwardRatios = 0x5D8;
            static constexpr std::uintptr_t ReverseRatios = 0x5E8;
            static constexpr std::uintptr_t FinalDriveRatio = 0x5F8;
            static constexpr std::uintptr_t ChangeUpRPM = 0x5FC;
            static constexpr std::uintptr_t ChangeDownRPM = 0x600;
            static constexpr std::uintptr_t GearChangeTime = 0x604;
            static constexpr std::uintptr_t GearHysteresisTime = 0x608;
            static constexpr std::uintptr_t TransmissionEfficiency = 0x60C;
            static constexpr std::uintptr_t TransmissionType = 0x610;
            static constexpr std::uintptr_t AutoReverse = 0x611;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"OnGearChangeEvent", 0x5C8, "MulticastInlineDelegateProperty"},
            {"ForwardRatios", 0x5D8, "ArrayProperty"},
            {"ReverseRatios", 0x5E8, "ArrayProperty"},
            {"FinalDriveRatio", 0x5F8, "FloatProperty"},
            {"ChangeUpRPM", 0x5FC, "IntProperty"},
            {"ChangeDownRPM", 0x600, "IntProperty"},
            {"GearChangeTime", 0x604, "FloatProperty"},
            {"GearHysteresisTime", 0x608, "FloatProperty"},
            {"TransmissionEfficiency", 0x60C, "FloatProperty"},
            {"TransmissionType", 0x610, "EnumProperty"},
            {"AutoReverse", 0x611, "BoolProperty"},
        }};
    };

    struct VehicleSimWheelComponent
    {
        static constexpr std::string_view Name = "VehicleSimWheelComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "VehicleSimBaseComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnWheelTouchChangeEvent = 0x5C8;
            static constexpr std::uintptr_t WheelRadius = 0x5D8;
            static constexpr std::uintptr_t WheelWidth = 0x5DC;
            static constexpr std::uintptr_t WheelInertia = 0x5E0;
            static constexpr std::uintptr_t FrictionMultiplier = 0x5E4;
            static constexpr std::uintptr_t CorneringStiffness = 0x5E8;
            static constexpr std::uintptr_t SlipAngleLimit = 0x5EC;
            static constexpr std::uintptr_t MaxBrakeTorque = 0x5F0;
            static constexpr std::uintptr_t bHandbrakeEnabled = 0x5F4;
            static constexpr std::uintptr_t HandbrakeTorque = 0x5F8;
            static constexpr std::uintptr_t bSteeringEnabled = 0x5FC;
            static constexpr std::uintptr_t MaxSteeringAngle = 0x600;
            static constexpr std::uintptr_t bABSEnabled = 0x604;
            static constexpr std::uintptr_t bTractionControlEnabled = 0x605;
            static constexpr std::uintptr_t AxisType = 0x606;
            static constexpr std::uintptr_t ForceOffset = 0x608;
            static constexpr std::uintptr_t ReverseDirection = 0x620;
        };

        inline static constexpr std::array<PropertyInfo, 17> Properties{{
            {"OnWheelTouchChangeEvent", 0x5C8, "MulticastInlineDelegateProperty"},
            {"WheelRadius", 0x5D8, "FloatProperty"},
            {"WheelWidth", 0x5DC, "FloatProperty"},
            {"WheelInertia", 0x5E0, "FloatProperty"},
            {"FrictionMultiplier", 0x5E4, "FloatProperty"},
            {"CorneringStiffness", 0x5E8, "FloatProperty"},
            {"SlipAngleLimit", 0x5EC, "FloatProperty"},
            {"MaxBrakeTorque", 0x5F0, "FloatProperty"},
            {"bHandbrakeEnabled", 0x5F4, "BoolProperty"},
            {"HandbrakeTorque", 0x5F8, "FloatProperty"},
            {"bSteeringEnabled", 0x5FC, "BoolProperty"},
            {"MaxSteeringAngle", 0x600, "FloatProperty"},
            {"bABSEnabled", 0x604, "BoolProperty"},
            {"bTractionControlEnabled", 0x605, "BoolProperty"},
            {"AxisType", 0x606, "EnumProperty"},
            {"ForceOffset", 0x608, "StructProperty"},
            {"ReverseDirection", 0x620, "BoolProperty"},
        }};
    };

}

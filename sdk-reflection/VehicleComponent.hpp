#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::VehicleComponent
{
    struct ModularVehicleGraphComponent
    {
        static constexpr std::string_view Name = "ModularVehicleGraphComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ModularVehicleBaseComponent";
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

    struct ModularVehicleSceneGraphPawn
    {
        static constexpr std::string_view Name = "ModularVehicleSceneGraphPawn";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Pawn";
        struct Offsets
        {
            static constexpr std::uintptr_t EntityPtr = 0x2F8;
            static constexpr std::uintptr_t EntityOwnerPtr = 0x300;
            static constexpr std::uintptr_t StaticMeshComponent = 0x308;
            static constexpr std::uintptr_t VehicleSimComponent = 0x310;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"EntityPtr", 0x2F8, "ObjectProperty"},
            {"EntityOwnerPtr", 0x300, "ObjectProperty"},
            {"StaticMeshComponent", 0x308, "ObjectProperty"},
            {"VehicleSimComponent", 0x310, "ObjectProperty"},
        }};
    };

}

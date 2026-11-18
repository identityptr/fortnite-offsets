#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::CharacterDynamicsControlCore
{
    struct BinaryDecisionTree
    {
        static constexpr std::string_view Name = "BinaryDecisionTree";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t TreeStructure = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TreeStructure", 0x0, "ArrayProperty"},
        }};
    };

    struct BinaryDecisionTreeElement
    {
        static constexpr std::string_view Name = "BinaryDecisionTreeElement";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x0;
            static constexpr std::uintptr_t Bitmask = 0x8;
            static constexpr std::uintptr_t BitSet = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Value", 0x0, "IntProperty"},
            {"Bitmask", 0x8, "Int64Property"},
            {"BitSet", 0x10, "Int64Property"},
        }};
    };

    struct BitArrayBinaryDecisionTree
    {
        static constexpr std::string_view Name = "BitArrayBinaryDecisionTree";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t TreeStructure = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TreeStructure", 0x0, "ArrayProperty"},
        }};
    };

    struct BitArrayBinaryDecisionTreeElement
    {
        static constexpr std::string_view Name = "BitArrayBinaryDecisionTreeElement";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x0;
            static constexpr std::uintptr_t BitArrayMask = 0x8;
            static constexpr std::uintptr_t BitArraySet = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Value", 0x0, "IntProperty"},
            {"BitArrayMask", 0x8, "StructProperty"},
            {"BitArraySet", 0x28, "StructProperty"},
        }};
    };

    struct BitArrayWrapper
    {
        static constexpr std::string_view Name = "BitArrayWrapper";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ClothAssetControllerParameterModifiers
    {
        static constexpr std::string_view Name = "ClothAssetControllerParameterModifiers";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t StateName = 0x0;
            static constexpr std::uintptr_t GravityOverrideMultiplier = 0x8;
            static constexpr std::uintptr_t GravityOverrideOffset = 0x20;
            static constexpr std::uintptr_t WindVelocityMultiplier = 0x38;
            static constexpr std::uintptr_t WindVelocityOffset = 0x50;
            static constexpr std::uintptr_t AngularSpeedScaleMultiplier = 0x68;
            static constexpr std::uintptr_t AngularSpeedScaleOffset = 0x6C;
            static constexpr std::uintptr_t MaxAngularSpeedMultiplier = 0x70;
            static constexpr std::uintptr_t MaxAngularSpeedOffset = 0x74;
            static constexpr std::uintptr_t LinearVelocityScaleMultiplier = 0x78;
            static constexpr std::uintptr_t LinearVelocityScaleOffset = 0x90;
            static constexpr std::uintptr_t MaxLinearVelocityMultiplier = 0xA8;
            static constexpr std::uintptr_t MaxLinearVelocityOffset = 0xC0;
            static constexpr std::uintptr_t FictitiousAngularScaleMultiplier = 0xD8;
            static constexpr std::uintptr_t FictitiousAngularScaleOffset = 0xDC;
            static constexpr std::uintptr_t WeightAngularVelocityMappingMin = 0xE0;
            static constexpr std::uintptr_t WeightAngularVelocityMappingMax = 0xE4;
            static constexpr std::uintptr_t WeightLinearVelocityMappingMin = 0xE8;
            static constexpr std::uintptr_t WeightLinearVelocityMappingMax = 0xEC;
            static constexpr std::uintptr_t WeightAngularVelocityMappingAxis = 0xF0;
            static constexpr std::uintptr_t bWeightAngularVelocityMappingUseAbs = 0xF1;
            static constexpr std::uintptr_t WeightLinearVelocityMappingAxis = 0xF2;
            static constexpr std::uintptr_t bWeightLinearVelocityMappingUseAbs = 0xF3;
            static constexpr std::uintptr_t WeightOrientationType = 0xF4;
            static constexpr std::uintptr_t WeightOrientationMappingMin = 0xF8;
            static constexpr std::uintptr_t WeightOrientationMappingMax = 0xFC;
            static constexpr std::uintptr_t WeightOrientationForwardAxis = 0x100;
            static constexpr std::uintptr_t WeightOrientationUpAxis = 0x101;
            static constexpr std::uintptr_t bIgnoreWindVelocityWhenJumping = 0x102;
        };

        inline static constexpr std::array<PropertyInfo, 29> Properties{{
            {"StateName", 0x0, "NameProperty"},
            {"GravityOverrideMultiplier", 0x8, "StructProperty"},
            {"GravityOverrideOffset", 0x20, "StructProperty"},
            {"WindVelocityMultiplier", 0x38, "StructProperty"},
            {"WindVelocityOffset", 0x50, "StructProperty"},
            {"AngularSpeedScaleMultiplier", 0x68, "FloatProperty"},
            {"AngularSpeedScaleOffset", 0x6C, "FloatProperty"},
            {"MaxAngularSpeedMultiplier", 0x70, "FloatProperty"},
            {"MaxAngularSpeedOffset", 0x74, "FloatProperty"},
            {"LinearVelocityScaleMultiplier", 0x78, "StructProperty"},
            {"LinearVelocityScaleOffset", 0x90, "StructProperty"},
            {"MaxLinearVelocityMultiplier", 0xA8, "StructProperty"},
            {"MaxLinearVelocityOffset", 0xC0, "StructProperty"},
            {"FictitiousAngularScaleMultiplier", 0xD8, "FloatProperty"},
            {"FictitiousAngularScaleOffset", 0xDC, "FloatProperty"},
            {"WeightAngularVelocityMappingMin", 0xE0, "FloatProperty"},
            {"WeightAngularVelocityMappingMax", 0xE4, "FloatProperty"},
            {"WeightLinearVelocityMappingMin", 0xE8, "FloatProperty"},
            {"WeightLinearVelocityMappingMax", 0xEC, "FloatProperty"},
            {"WeightAngularVelocityMappingAxis", 0xF0, "EnumProperty"},
            {"bWeightAngularVelocityMappingUseAbs", 0xF1, "BoolProperty"},
            {"WeightLinearVelocityMappingAxis", 0xF2, "EnumProperty"},
            {"bWeightLinearVelocityMappingUseAbs", 0xF3, "BoolProperty"},
            {"WeightOrientationType", 0xF4, "EnumProperty"},
            {"WeightOrientationMappingMin", 0xF8, "FloatProperty"},
            {"WeightOrientationMappingMax", 0xFC, "FloatProperty"},
            {"WeightOrientationForwardAxis", 0x100, "ByteProperty"},
            {"WeightOrientationUpAxis", 0x101, "ByteProperty"},
            {"bIgnoreWindVelocityWhenJumping", 0x102, "BoolProperty"},
        }};
    };

    struct ClothAssetControllerParameters
    {
        static constexpr std::string_view Name = "ClothAssetControllerParameters";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t GravityOverride = 0x0;
            static constexpr std::uintptr_t WindVelocity = 0x18;
            static constexpr std::uintptr_t AngularSpeedScale = 0x30;
            static constexpr std::uintptr_t MaxAngularSpeed = 0x34;
            static constexpr std::uintptr_t LinearVelocityScale = 0x38;
            static constexpr std::uintptr_t MaxLinearVelocity = 0x50;
            static constexpr std::uintptr_t FictitiousAngularScale = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"GravityOverride", 0x0, "StructProperty"},
            {"WindVelocity", 0x18, "StructProperty"},
            {"AngularSpeedScale", 0x30, "FloatProperty"},
            {"MaxAngularSpeed", 0x34, "FloatProperty"},
            {"LinearVelocityScale", 0x38, "StructProperty"},
            {"MaxLinearVelocity", 0x50, "StructProperty"},
            {"FictitiousAngularScale", 0x68, "FloatProperty"},
        }};
    };

    struct ClothControllerClothParameterMap
    {
        static constexpr std::string_view Name = "ClothControllerClothParameterMap";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Map = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Map", 0x0, "MapProperty"},
        }};
    };

    struct ClothControllerPropertiesMap
    {
        static constexpr std::string_view Name = "ClothControllerPropertiesMap";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Map = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Map", 0x0, "MapProperty"},
        }};
    };

    struct ClothControllerWindParameterMap
    {
        static constexpr std::string_view Name = "ClothControllerWindParameterMap";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Map = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Map", 0x0, "MapProperty"},
        }};
    };

    struct ClothCoreSettings
    {
        static constexpr std::string_view Name = "ClothCoreSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t EdgeStiffness = 0x0;
            static constexpr std::uintptr_t BendingStiffness = 0x10;
            static constexpr std::uintptr_t AreaStiffness = 0x20;
            static constexpr std::uintptr_t TetherStiffness = 0x30;
            static constexpr std::uintptr_t CollisionThickness = 0x40;
            static constexpr std::uintptr_t FrictionCoefficient = 0x44;
            static constexpr std::uintptr_t SelfCollisionThickness = 0x48;
            static constexpr std::uintptr_t DampingCoefficient = 0x4C;
            static constexpr std::uintptr_t LocalDampingCoefficient = 0x50;
            static constexpr std::uintptr_t AnimDriveStiffness = 0x58;
            static constexpr std::uintptr_t AnimDriveDamping = 0x68;
            static constexpr std::uintptr_t NumberIterations = 0x78;
            static constexpr std::uintptr_t NumberSubsteps = 0x7C;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"EdgeStiffness", 0x0, "StructProperty"},
            {"BendingStiffness", 0x10, "StructProperty"},
            {"AreaStiffness", 0x20, "StructProperty"},
            {"TetherStiffness", 0x30, "StructProperty"},
            {"CollisionThickness", 0x40, "FloatProperty"},
            {"FrictionCoefficient", 0x44, "FloatProperty"},
            {"SelfCollisionThickness", 0x48, "FloatProperty"},
            {"DampingCoefficient", 0x4C, "FloatProperty"},
            {"LocalDampingCoefficient", 0x50, "FloatProperty"},
            {"AnimDriveStiffness", 0x58, "StructProperty"},
            {"AnimDriveDamping", 0x68, "StructProperty"},
            {"NumberIterations", 0x78, "IntProperty"},
            {"NumberSubsteps", 0x7C, "IntProperty"},
        }};
    };

    struct ClothParameters
    {
        static constexpr std::string_view Name = "ClothParameters";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t LinearVelocityScale = 0x0;
            static constexpr std::uintptr_t AngularVelocityScale = 0x18;
            static constexpr std::uintptr_t FictitiousAngularScale = 0x1C;
            static constexpr std::uintptr_t GravityOverride = 0x20;
            static constexpr std::uintptr_t DragCoefficient = 0x38;
            static constexpr std::uintptr_t LiftCoefficient = 0x48;
            static constexpr std::uintptr_t OuterDrag = 0x58;
            static constexpr std::uintptr_t OuterLift = 0x68;
            static constexpr std::uintptr_t MaxLinearVelocity = 0x78;
            static constexpr std::uintptr_t MaxLinearAcceleration = 0x90;
            static constexpr std::uintptr_t MaxAngularVelocity = 0xA8;
            static constexpr std::uintptr_t MaxAngularAcceleration = 0xAC;
            static constexpr std::uintptr_t bEnableLinearVelocityClamping = 0xB0;
            static constexpr std::uintptr_t bEnableLinearAccelerationClamping = 0xB1;
            static constexpr std::uintptr_t bEnableAngularVelocityClamping = 0xB2;
            static constexpr std::uintptr_t bEnableAngularAccelerationClamping = 0xB3;
            static constexpr std::uintptr_t JointName = 0xB4;
        };

        inline static constexpr std::array<PropertyInfo, 17> Properties{{
            {"LinearVelocityScale", 0x0, "StructProperty"},
            {"AngularVelocityScale", 0x18, "FloatProperty"},
            {"FictitiousAngularScale", 0x1C, "FloatProperty"},
            {"GravityOverride", 0x20, "StructProperty"},
            {"DragCoefficient", 0x38, "StructProperty"},
            {"LiftCoefficient", 0x48, "StructProperty"},
            {"OuterDrag", 0x58, "StructProperty"},
            {"OuterLift", 0x68, "StructProperty"},
            {"MaxLinearVelocity", 0x78, "StructProperty"},
            {"MaxLinearAcceleration", 0x90, "StructProperty"},
            {"MaxAngularVelocity", 0xA8, "FloatProperty"},
            {"MaxAngularAcceleration", 0xAC, "FloatProperty"},
            {"bEnableLinearVelocityClamping", 0xB0, "BoolProperty"},
            {"bEnableLinearAccelerationClamping", 0xB1, "BoolProperty"},
            {"bEnableAngularVelocityClamping", 0xB2, "BoolProperty"},
            {"bEnableAngularAccelerationClamping", 0xB3, "BoolProperty"},
            {"JointName", 0xB4, "NameProperty"},
        }};
    };

    struct ClothStateLogicTree
    {
        static constexpr std::string_view Name = "ClothStateLogicTree";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t PropertyNameToBitFlagMap = 0x0;
            static constexpr std::uintptr_t PropertyFlagsToStateNameTable = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PropertyNameToBitFlagMap", 0x0, "MapProperty"},
            {"PropertyFlagsToStateNameTable", 0x10, "ArrayProperty"},
        }};
    };

    struct FortCharacterDynamicsComponentInterface
    {
        static constexpr std::string_view Name = "FortCharacterDynamicsComponentInterface";
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

        inline static constexpr std::array<std::string_view, 20> FunctionNames{{
            "CurrentStateName",
            "CurrentStateNameForLayer",
            "GetFloatProperty",
            "GetProperty",
            "GetPropertyForLayer",
            "GetStructProperty",
            "GetTimeInCurrentStateSeconds",
            "GetTimeInCurrentStateSecondsForLayer",
            "HasLayer",
            "PreviousStateName",
            "PreviousStateNameForLayer",
            "RemoveFloatProperty",
            "RemoveLayer",
            "RemoveProperty",
            "RemoveStructProperty",
            "RequestResumeClothingSimulation",
            "RequestSuspendClothingSimulation",
            "SetFloatProperty",
            "SetProperty",
            "SetStructProperty",
        }};
    };

    struct FortCharacterDynamicsControlParameterSet
    {
        static constexpr std::string_view Name = "FortCharacterDynamicsControlParameterSet";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t StateNames = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"StateNames", 0x0, "ArrayProperty"},
        }};
    };

    struct FortCharacterDynamicsParameters
    {
        static constexpr std::string_view Name = "FortCharacterDynamicsParameters";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimaryDataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t StateNames = 0x28;
            static constexpr std::uintptr_t ClothParameters = 0x38;
            static constexpr std::uintptr_t WindGustParameters = 0x48;
            static constexpr std::uintptr_t RBWCControlAndModifierParameters = 0x58;
            static constexpr std::uintptr_t RBWCTransitionParameters = 0x68;
            static constexpr std::uintptr_t GravityOverrideParameters = 0x78;
            static constexpr std::uintptr_t RigidBodyAnimNodeParameters = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"StateNames", 0x28, "ArrayProperty"},
            {"ClothParameters", 0x38, "ArrayProperty"},
            {"WindGustParameters", 0x48, "ArrayProperty"},
            {"RBWCControlAndModifierParameters", 0x58, "ArrayProperty"},
            {"RBWCTransitionParameters", 0x68, "ArrayProperty"},
            {"GravityOverrideParameters", 0x78, "ArrayProperty"},
            {"RigidBodyAnimNodeParameters", 0x88, "ArrayProperty"},
        }};
    };

    struct FortCharacterDynamicsStateLogic
    {
        static constexpr std::string_view Name = "FortCharacterDynamicsStateLogic";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimaryDataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t BlueprintCharacterPropertyNames = 0x28;
            static constexpr std::uintptr_t ActivityStateNames = 0x38;
            static constexpr std::uintptr_t ActivityStateBinaryDecisionTree = 0x48;
            static constexpr std::uintptr_t DecisionTree = 0x58;
            static constexpr std::uintptr_t ProxyPropertyCollection = 0x68;
            static constexpr std::uintptr_t NativePropertyCount = 0x78;
            static constexpr std::uintptr_t MinMovementSpeed = 0x7C;
            static constexpr std::uintptr_t MinRidingMovementSpeed = 0x80;
            static constexpr std::uintptr_t MinUpwardVelocityThreshold = 0x84;
            static constexpr std::uintptr_t MaxFallingThreshold = 0x88;
            static constexpr std::uintptr_t HighRevolutionsPerSecondThreshold = 0x8C;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"BlueprintCharacterPropertyNames", 0x28, "ArrayProperty"},
            {"ActivityStateNames", 0x38, "ArrayProperty"},
            {"ActivityStateBinaryDecisionTree", 0x48, "StructProperty"},
            {"DecisionTree", 0x58, "StructProperty"},
            {"ProxyPropertyCollection", 0x68, "ArrayProperty"},
            {"NativePropertyCount", 0x78, "IntProperty"},
            {"MinMovementSpeed", 0x7C, "FloatProperty"},
            {"MinRidingMovementSpeed", 0x80, "FloatProperty"},
            {"MinUpwardVelocityThreshold", 0x84, "FloatProperty"},
            {"MaxFallingThreshold", 0x88, "FloatProperty"},
            {"HighRevolutionsPerSecondThreshold", 0x8C, "FloatProperty"},
        }};
    };

    struct FortClothAssetControllerStateParameterModifiers
    {
        static constexpr std::string_view Name = "FortClothAssetControllerStateParameterModifiers";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimaryDataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t Parameters = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Parameters", 0x28, "ArrayProperty"},
        }};
    };

    struct FortClothParameterSet
    {
        static constexpr std::string_view Name = "FortClothParameterSet";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "FortCharacterDynamicsControlParameterSet";
        struct Offsets
        {
            static constexpr std::uintptr_t Parameters = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Parameters", 0x10, "ArrayProperty"},
        }};
    };

    struct FortGravityOverrideParameterSet
    {
        static constexpr std::string_view Name = "FortGravityOverrideParameterSet";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "FortCharacterDynamicsControlParameterSet";
        struct Offsets
        {
            static constexpr std::uintptr_t Parameters = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Parameters", 0x10, "ArrayProperty"},
        }};
    };

    struct FortGravityOverrideParameters
    {
        static constexpr std::string_view Name = "FortGravityOverrideParameters";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t WindFrequency = 0x0;
            static constexpr std::uintptr_t WindAmplitude = 0x18;
            static constexpr std::uintptr_t WindOffset = 0x30;
            static constexpr std::uintptr_t GravityOverride = 0x48;
            static constexpr std::uintptr_t JointName = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"WindFrequency", 0x0, "StructProperty"},
            {"WindAmplitude", 0x18, "StructProperty"},
            {"WindOffset", 0x30, "StructProperty"},
            {"GravityOverride", 0x48, "StructProperty"},
            {"JointName", 0x60, "NameProperty"},
        }};
    };

    struct FortRigidBodyAnimNodeParameterSet
    {
        static constexpr std::string_view Name = "FortRigidBodyAnimNodeParameterSet";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "FortCharacterDynamicsControlParameterSet";
        struct Offsets
        {
            static constexpr std::uintptr_t Parameters = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Parameters", 0x10, "ArrayProperty"},
        }};
    };

    struct FortRigidBodyAnimNodeParameters
    {
        static constexpr std::string_view Name = "FortRigidBodyAnimNodeParameters";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ComponentLinearAccScale = 0x0;
            static constexpr std::uintptr_t ComponentLinearVelScale = 0x18;
            static constexpr std::uintptr_t SimSpaceSettings = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ComponentLinearAccScale", 0x0, "StructProperty"},
            {"ComponentLinearVelScale", 0x18, "StructProperty"},
            {"SimSpaceSettings", 0x30, "StructProperty"},
        }};
    };

    struct FortRigidBodyWithControlStateTransitionParameters
    {
        static constexpr std::string_view Name = "FortRigidBodyWithControlStateTransitionParameters";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ControlAndModifierParameters = 0x0;
            static constexpr std::uintptr_t TransitionTimeSeconds = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ControlAndModifierParameters", 0x0, "StructProperty"},
            {"TransitionTimeSeconds", 0x30, "FloatProperty"},
        }};
    };

    struct FortWindGustParameterSet
    {
        static constexpr std::string_view Name = "FortWindGustParameterSet";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "FortCharacterDynamicsControlParameterSet";
        struct Offsets
        {
            static constexpr std::uintptr_t Parameters = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Parameters", 0x10, "ArrayProperty"},
        }};
    };

    struct PropertyStatePair
    {
        static constexpr std::string_view Name = "PropertyStatePair";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t StateName = 0x0;
            static constexpr std::uintptr_t BitSet = 0x4;
            static constexpr std::uintptr_t Bitmask = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"StateName", 0x0, "NameProperty"},
            {"BitSet", 0x4, "IntProperty"},
            {"Bitmask", 0x8, "IntProperty"},
        }};
    };

    struct ProxyProperty
    {
        static constexpr std::string_view Name = "ProxyProperty";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Operator = 0x0;
            static constexpr std::uintptr_t BitArrayMask = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Operator", 0x0, "UInt32Property"},
            {"BitArrayMask", 0x8, "StructProperty"},
        }};
    };

    struct ProxyPropertyOrderingEditorData
    {
        static constexpr std::string_view Name = "ProxyPropertyOrderingEditorData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ReversePropertyOrder = 0x0;
            static constexpr std::uintptr_t ProxyPropertyIndex = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ReversePropertyOrder", 0x0, "ArrayProperty"},
            {"ProxyPropertyIndex", 0x10, "IntProperty"},
        }};
    };

    struct WindGustParameters
    {
        static constexpr std::string_view Name = "WindGustParameters";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t MinTimeBetweenGusts = 0x0;
            static constexpr std::uintptr_t MaxTimeBetweenGusts = 0x4;
            static constexpr std::uintptr_t MinGustStrength = 0x8;
            static constexpr std::uintptr_t MaxGustStrength = 0xC;
            static constexpr std::uintptr_t MinGustDuration = 0x10;
            static constexpr std::uintptr_t MaxGustDuration = 0x14;
            static constexpr std::uintptr_t WindTurbulenceScalarA = 0x18;
            static constexpr std::uintptr_t WindTurbulenceScalarB = 0x1C;
            static constexpr std::uintptr_t MinUpInterpSpeed = 0x20;
            static constexpr std::uintptr_t MaxUpInterpSpeed = 0x24;
            static constexpr std::uintptr_t MinDownInterpSpeed = 0x28;
            static constexpr std::uintptr_t MaxDownInterpSpeed = 0x2C;
            static constexpr std::uintptr_t WindFrequency = 0x30;
            static constexpr std::uintptr_t WindAmplitude = 0x48;
            static constexpr std::uintptr_t WindOffset = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"MinTimeBetweenGusts", 0x0, "FloatProperty"},
            {"MaxTimeBetweenGusts", 0x4, "FloatProperty"},
            {"MinGustStrength", 0x8, "FloatProperty"},
            {"MaxGustStrength", 0xC, "FloatProperty"},
            {"MinGustDuration", 0x10, "FloatProperty"},
            {"MaxGustDuration", 0x14, "FloatProperty"},
            {"WindTurbulenceScalarA", 0x18, "FloatProperty"},
            {"WindTurbulenceScalarB", 0x1C, "FloatProperty"},
            {"MinUpInterpSpeed", 0x20, "FloatProperty"},
            {"MaxUpInterpSpeed", 0x24, "FloatProperty"},
            {"MinDownInterpSpeed", 0x28, "FloatProperty"},
            {"MaxDownInterpSpeed", 0x2C, "FloatProperty"},
            {"WindFrequency", 0x30, "StructProperty"},
            {"WindAmplitude", 0x48, "StructProperty"},
            {"WindOffset", 0x60, "StructProperty"},
        }};
    };

    struct WindGustSettings
    {
        static constexpr std::string_view Name = "WindGustSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ElapsedTime = 0x0;
            static constexpr std::uintptr_t TimeBetweenGusts = 0x4;
            static constexpr std::uintptr_t GustStrength = 0x8;
            static constexpr std::uintptr_t GustDuration = 0xC;
            static constexpr std::uintptr_t FinalGustStrengthLocal = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"ElapsedTime", 0x0, "FloatProperty"},
            {"TimeBetweenGusts", 0x4, "FloatProperty"},
            {"GustStrength", 0x8, "FloatProperty"},
            {"GustDuration", 0xC, "FloatProperty"},
            {"FinalGustStrengthLocal", 0x10, "FloatProperty"},
        }};
    };

}

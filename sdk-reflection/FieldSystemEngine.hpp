#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FieldSystemEngine
{
    struct BoxFalloff
    {
        static constexpr std::string_view Name = "BoxFalloff";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FieldNodeFloat";
        struct Offsets
        {
            static constexpr std::uintptr_t Magnitude = 0xC0;
            static constexpr std::uintptr_t MinRange = 0xC4;
            static constexpr std::uintptr_t MaxRange = 0xC8;
            static constexpr std::uintptr_t Default = 0xCC;
            static constexpr std::uintptr_t Transform = 0xD0;
            static constexpr std::uintptr_t Falloff = 0x130;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Magnitude", 0xC0, "FloatProperty"},
            {"MinRange", 0xC4, "FloatProperty"},
            {"MaxRange", 0xC8, "FloatProperty"},
            {"Default", 0xCC, "FloatProperty"},
            {"Transform", 0xD0, "StructProperty"},
            {"Falloff", 0x130, "ByteProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "SetBoxFalloff",
        }};
    };

    struct CullingField
    {
        static constexpr std::string_view Name = "CullingField";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FieldNodeBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Culling = 0xC0;
            static constexpr std::uintptr_t Field = 0xC8;
            static constexpr std::uintptr_t Operation = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Culling", 0xC0, "ObjectProperty"},
            {"Field", 0xC8, "ObjectProperty"},
            {"Operation", 0xD0, "ByteProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "SetCullingField",
        }};
    };

    struct FieldNodeBase
    {
        static constexpr std::string_view Name = "FieldNodeBase";
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

    struct FieldNodeFloat
    {
        static constexpr std::string_view Name = "FieldNodeFloat";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FieldNodeBase";
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

    struct FieldNodeInt
    {
        static constexpr std::string_view Name = "FieldNodeInt";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FieldNodeBase";
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

    struct FieldNodeVector
    {
        static constexpr std::string_view Name = "FieldNodeVector";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FieldNodeBase";
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

    struct FieldObjectCommands
    {
        static constexpr std::string_view Name = "FieldObjectCommands";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetNames = 0x0;
            static constexpr std::uintptr_t RootNodes = 0x10;
            static constexpr std::uintptr_t MetaDatas = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"TargetNames", 0x0, "ArrayProperty"},
            {"RootNodes", 0x10, "ArrayProperty"},
            {"MetaDatas", 0x20, "ArrayProperty"},
        }};
    };

    struct FieldSystem
    {
        static constexpr std::string_view Name = "FieldSystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FieldSystemActor
    {
        static constexpr std::string_view Name = "FieldSystemActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t FieldSystemComponent = 0x278;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"FieldSystemComponent", 0x278, "ObjectProperty"},
        }};
    };

    struct FieldSystemComponent
    {
        static constexpr std::string_view Name = "FieldSystemComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimitiveComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t FieldSystem = 0x560;
            static constexpr std::uintptr_t bIsWorldField = 0x568;
            static constexpr std::uintptr_t bIsChaosField = 0x569;
            static constexpr std::uintptr_t SupportedSolvers = 0x570;
            static constexpr std::uintptr_t ConstructionCommands = 0x580;
            static constexpr std::uintptr_t BufferCommands = 0x5B0;
            static constexpr std::uintptr_t bEnableInEditorWorlds = 0x5E0;
            static constexpr std::uintptr_t bEnableInPreviewWorlds = 0x5E1;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"FieldSystem", 0x560, "ObjectProperty"},
            {"bIsWorldField", 0x568, "BoolProperty"},
            {"bIsChaosField", 0x569, "BoolProperty"},
            {"SupportedSolvers", 0x570, "ArrayProperty"},
            {"ConstructionCommands", 0x580, "StructProperty"},
            {"BufferCommands", 0x5B0, "StructProperty"},
            {"bEnableInEditorWorlds", 0x5E0, "BoolProperty"},
            {"bEnableInPreviewWorlds", 0x5E1, "BoolProperty"},
        }};

        inline static constexpr std::array<std::string_view, 11> FunctionNames{{
            "AddFieldCommand",
            "AddPersistentField",
            "ApplyLinearForce",
            "ApplyPhysicsField",
            "ApplyRadialForce",
            "ApplyRadialVectorFalloffForce",
            "ApplyStayDynamicField",
            "ApplyStrainField",
            "ApplyUniformVectorFalloffForce",
            "RemovePersistentFields",
            "ResetFieldSystem",
        }};
    };

    struct FieldSystemMetaData
    {
        static constexpr std::string_view Name = "FieldSystemMetaData";
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

    struct FieldSystemMetaDataFilter
    {
        static constexpr std::string_view Name = "FieldSystemMetaDataFilter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FieldSystemMetaData";
        struct Offsets
        {
            static constexpr std::uintptr_t FilterType = 0xC0;
            static constexpr std::uintptr_t ObjectType = 0xC1;
            static constexpr std::uintptr_t PositionType = 0xC2;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"FilterType", 0xC0, "ByteProperty"},
            {"ObjectType", 0xC1, "ByteProperty"},
            {"PositionType", 0xC2, "ByteProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "SetMetaDataFilterType",
        }};
    };

    struct FieldSystemMetaDataIteration
    {
        static constexpr std::string_view Name = "FieldSystemMetaDataIteration";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FieldSystemMetaData";
        struct Offsets
        {
            static constexpr std::uintptr_t Iterations = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Iterations", 0xC0, "IntProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "SetMetaDataIteration",
        }};
    };

    struct FieldSystemMetaDataProcessingResolution
    {
        static constexpr std::string_view Name = "FieldSystemMetaDataProcessingResolution";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FieldSystemMetaData";
        struct Offsets
        {
            static constexpr std::uintptr_t ResolutionType = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ResolutionType", 0xC0, "ByteProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "SetMetaDataaProcessingResolutionType",
        }};
    };

    struct NoiseField
    {
        static constexpr std::string_view Name = "NoiseField";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FieldNodeFloat";
        struct Offsets
        {
            static constexpr std::uintptr_t MinRange = 0xC0;
            static constexpr std::uintptr_t MaxRange = 0xC4;
            static constexpr std::uintptr_t Transform = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"MinRange", 0xC0, "FloatProperty"},
            {"MaxRange", 0xC4, "FloatProperty"},
            {"Transform", 0xD0, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "SetNoiseField",
        }};
    };

    struct OperatorField
    {
        static constexpr std::string_view Name = "OperatorField";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FieldNodeBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Magnitude = 0xC0;
            static constexpr std::uintptr_t RightField = 0xC8;
            static constexpr std::uintptr_t LeftField = 0xD0;
            static constexpr std::uintptr_t Operation = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Magnitude", 0xC0, "FloatProperty"},
            {"RightField", 0xC8, "ObjectProperty"},
            {"LeftField", 0xD0, "ObjectProperty"},
            {"Operation", 0xD8, "ByteProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "SetOperatorField",
        }};
    };

    struct PlaneFalloff
    {
        static constexpr std::string_view Name = "PlaneFalloff";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FieldNodeFloat";
        struct Offsets
        {
            static constexpr std::uintptr_t Magnitude = 0xC0;
            static constexpr std::uintptr_t MinRange = 0xC4;
            static constexpr std::uintptr_t MaxRange = 0xC8;
            static constexpr std::uintptr_t Default = 0xCC;
            static constexpr std::uintptr_t Distance = 0xD0;
            static constexpr std::uintptr_t Position = 0xD8;
            static constexpr std::uintptr_t Normal = 0xF0;
            static constexpr std::uintptr_t Falloff = 0x108;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"Magnitude", 0xC0, "FloatProperty"},
            {"MinRange", 0xC4, "FloatProperty"},
            {"MaxRange", 0xC8, "FloatProperty"},
            {"Default", 0xCC, "FloatProperty"},
            {"Distance", 0xD0, "FloatProperty"},
            {"Position", 0xD8, "StructProperty"},
            {"Normal", 0xF0, "StructProperty"},
            {"Falloff", 0x108, "ByteProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "SetPlaneFalloff",
        }};
    };

    struct RadialFalloff
    {
        static constexpr std::string_view Name = "RadialFalloff";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FieldNodeFloat";
        struct Offsets
        {
            static constexpr std::uintptr_t Magnitude = 0xC0;
            static constexpr std::uintptr_t MinRange = 0xC4;
            static constexpr std::uintptr_t MaxRange = 0xC8;
            static constexpr std::uintptr_t Default = 0xCC;
            static constexpr std::uintptr_t Radius = 0xD0;
            static constexpr std::uintptr_t Position = 0xD8;
            static constexpr std::uintptr_t Falloff = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Magnitude", 0xC0, "FloatProperty"},
            {"MinRange", 0xC4, "FloatProperty"},
            {"MaxRange", 0xC8, "FloatProperty"},
            {"Default", 0xCC, "FloatProperty"},
            {"Radius", 0xD0, "FloatProperty"},
            {"Position", 0xD8, "StructProperty"},
            {"Falloff", 0xF0, "ByteProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "SetRadialFalloff",
        }};
    };

    struct RadialIntMask
    {
        static constexpr std::string_view Name = "RadialIntMask";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FieldNodeInt";
        struct Offsets
        {
            static constexpr std::uintptr_t Radius = 0xC0;
            static constexpr std::uintptr_t Position = 0xC8;
            static constexpr std::uintptr_t InteriorValue = 0xE0;
            static constexpr std::uintptr_t ExteriorValue = 0xE4;
            static constexpr std::uintptr_t SetMaskCondition = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Radius", 0xC0, "FloatProperty"},
            {"Position", 0xC8, "StructProperty"},
            {"InteriorValue", 0xE0, "IntProperty"},
            {"ExteriorValue", 0xE4, "IntProperty"},
            {"SetMaskCondition", 0xE8, "ByteProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "SetRadialIntMask",
        }};
    };

    struct RadialVector
    {
        static constexpr std::string_view Name = "RadialVector";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FieldNodeVector";
        struct Offsets
        {
            static constexpr std::uintptr_t Magnitude = 0xC0;
            static constexpr std::uintptr_t Position = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Magnitude", 0xC0, "FloatProperty"},
            {"Position", 0xC8, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "SetRadialVector",
        }};
    };

    struct RandomVector
    {
        static constexpr std::string_view Name = "RandomVector";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FieldNodeVector";
        struct Offsets
        {
            static constexpr std::uintptr_t Magnitude = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Magnitude", 0xC0, "FloatProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "SetRandomVector",
        }};
    };

    struct ReturnResultsTerminal
    {
        static constexpr std::string_view Name = "ReturnResultsTerminal";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FieldNodeBase";
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

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "SetReturnResultsTerminal",
        }};
    };

    struct RotatedRadialVector
    {
        static constexpr std::string_view Name = "RotatedRadialVector";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FieldNodeVector";
        struct Offsets
        {
            static constexpr std::uintptr_t Magnitude = 0xC0;
            static constexpr std::uintptr_t Position = 0xC8;
            static constexpr std::uintptr_t Angle = 0xE0;
            static constexpr std::uintptr_t Axis = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Magnitude", 0xC0, "FloatProperty"},
            {"Position", 0xC8, "StructProperty"},
            {"Angle", 0xE0, "FloatProperty"},
            {"Axis", 0xE8, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "SetRotatedRadialVector",
        }};
    };

    struct ToFloatField
    {
        static constexpr std::string_view Name = "ToFloatField";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FieldNodeFloat";
        struct Offsets
        {
            static constexpr std::uintptr_t IntField = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"IntField", 0xC0, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "SetToFloatField",
        }};
    };

    struct ToIntegerField
    {
        static constexpr std::string_view Name = "ToIntegerField";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FieldNodeInt";
        struct Offsets
        {
            static constexpr std::uintptr_t FloatField = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"FloatField", 0xC0, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "SetToIntegerField",
        }};
    };

    struct UniformInteger
    {
        static constexpr std::string_view Name = "UniformInteger";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FieldNodeInt";
        struct Offsets
        {
            static constexpr std::uintptr_t Magnitude = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Magnitude", 0xC0, "IntProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "SetUniformInteger",
        }};
    };

    struct UniformScalar
    {
        static constexpr std::string_view Name = "UniformScalar";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FieldNodeFloat";
        struct Offsets
        {
            static constexpr std::uintptr_t Magnitude = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Magnitude", 0xC0, "FloatProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "SetUniformScalar",
        }};
    };

    struct UniformVector
    {
        static constexpr std::string_view Name = "UniformVector";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FieldNodeVector";
        struct Offsets
        {
            static constexpr std::uintptr_t Magnitude = 0xC0;
            static constexpr std::uintptr_t Direction = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Magnitude", 0xC0, "FloatProperty"},
            {"Direction", 0xC8, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "SetUniformVector",
        }};
    };

    struct WaveScalar
    {
        static constexpr std::string_view Name = "WaveScalar";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FieldNodeFloat";
        struct Offsets
        {
            static constexpr std::uintptr_t Magnitude = 0xC0;
            static constexpr std::uintptr_t Position = 0xC8;
            static constexpr std::uintptr_t Wavelength = 0xE0;
            static constexpr std::uintptr_t Period = 0xE4;
            static constexpr std::uintptr_t Function = 0xE8;
            static constexpr std::uintptr_t Falloff = 0xE9;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Magnitude", 0xC0, "FloatProperty"},
            {"Position", 0xC8, "StructProperty"},
            {"Wavelength", 0xE0, "FloatProperty"},
            {"Period", 0xE4, "FloatProperty"},
            {"Function", 0xE8, "ByteProperty"},
            {"Falloff", 0xE9, "ByteProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "SetWaveScalar",
        }};
    };

}

#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::CoreUObject
{
    struct ARFilter
    {
        static constexpr std::string_view Name = "ARFilter";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t PackageNames = 0x0;
            static constexpr std::uintptr_t PackagePaths = 0x10;
            static constexpr std::uintptr_t SoftObjectPaths = 0x20;
            static constexpr std::uintptr_t ClassNames = 0x30;
            static constexpr std::uintptr_t ClassPaths = 0x40;
            static constexpr std::uintptr_t RecursiveClassesExclusionSet = 0x60;
            static constexpr std::uintptr_t RecursiveClassPathsExclusionSet = 0x70;
            static constexpr std::uintptr_t bRecursivePaths = 0x80;
            static constexpr std::uintptr_t bRecursiveClasses = 0x81;
            static constexpr std::uintptr_t bIncludeOnlyOnDiskAssets = 0x82;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"PackageNames", 0x0, "ArrayProperty"},
            {"PackagePaths", 0x10, "ArrayProperty"},
            {"SoftObjectPaths", 0x20, "ArrayProperty"},
            {"ClassNames", 0x30, "ArrayProperty"},
            {"ClassPaths", 0x40, "ArrayProperty"},
            {"RecursiveClassesExclusionSet", 0x60, "SetProperty"},
            {"RecursiveClassPathsExclusionSet", 0x70, "SetProperty"},
            {"bRecursivePaths", 0x80, "BoolProperty"},
            {"bRecursiveClasses", 0x81, "BoolProperty"},
            {"bIncludeOnlyOnDiskAssets", 0x82, "BoolProperty"},
        }};
    };

    struct ArrayProperty
    {
        static constexpr std::string_view Name = "ArrayProperty";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Property";
        struct Offsets
        {
            static constexpr std::uintptr_t Inner = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Inner", 0x70, "ObjectProperty"},
        }};
    };

    struct AssetBundleData
    {
        static constexpr std::string_view Name = "AssetBundleData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Bundles = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Bundles", 0x0, "ArrayProperty"},
        }};
    };

    struct AssetBundleEntry
    {
        static constexpr std::string_view Name = "AssetBundleEntry";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t BundleName = 0x0;
            static constexpr std::uintptr_t AssetPaths = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"BundleName", 0x0, "NameProperty"},
            {"AssetPaths", 0x8, "ArrayProperty"},
        }};
    };

    struct AssetData
    {
        static constexpr std::string_view Name = "AssetData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t PackageName = 0x0;
            static constexpr std::uintptr_t PackagePath = 0x4;
            static constexpr std::uintptr_t AssetName = 0x8;
            static constexpr std::uintptr_t AssetClassPath = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"PackageName", 0x0, "NameProperty"},
            {"PackagePath", 0x4, "NameProperty"},
            {"AssetName", 0x8, "NameProperty"},
            {"AssetClassPath", 0xC, "StructProperty"},
        }};
    };

    struct AutomationEvent
    {
        static constexpr std::string_view Name = "AutomationEvent";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Type = 0x0;
            static constexpr std::uintptr_t Message = 0x8;
            static constexpr std::uintptr_t Context = 0x18;
            static constexpr std::uintptr_t Artifact = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Type", 0x0, "EnumProperty"},
            {"Message", 0x8, "StrProperty"},
            {"Context", 0x18, "StrProperty"},
            {"Artifact", 0x28, "StructProperty"},
        }};
    };

    struct AutomationExecutionEntry
    {
        static constexpr std::string_view Name = "AutomationExecutionEntry";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Event = 0x0;
            static constexpr std::uintptr_t Filename = 0x38;
            static constexpr std::uintptr_t LineNumber = 0x48;
            static constexpr std::uintptr_t Timestamp = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Event", 0x0, "StructProperty"},
            {"Filename", 0x38, "StrProperty"},
            {"LineNumber", 0x48, "IntProperty"},
            {"Timestamp", 0x50, "StructProperty"},
        }};
    };

    struct BaseVerseSubobject
    {
        static constexpr std::string_view Name = "BaseVerseSubobject";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t VerseAccessibility = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"VerseAccessibility", 0x28, "StructProperty"},
        }};
    };

    struct BoolProperty
    {
        static constexpr std::string_view Name = "BoolProperty";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Property";
        struct Offsets
        {
            static constexpr std::uintptr_t Next = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Next", 0x28, "ObjectProperty"},
        }};
    };

    struct Box
    {
        static constexpr std::string_view Name = "Box";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t min = 0x0;
            static constexpr std::uintptr_t max = 0x18;
            static constexpr std::uintptr_t IsValid = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"min", 0x0, "StructProperty"},
            {"max", 0x18, "StructProperty"},
            {"IsValid", 0x30, "BoolProperty"},
        }};
    };

    struct Box2D
    {
        static constexpr std::string_view Name = "Box2D";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t min = 0x0;
            static constexpr std::uintptr_t max = 0x10;
            static constexpr std::uintptr_t bIsValid = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"min", 0x0, "StructProperty"},
            {"max", 0x10, "StructProperty"},
            {"bIsValid", 0x20, "BoolProperty"},
        }};
    };

    struct Box2f
    {
        static constexpr std::string_view Name = "Box2f";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t min = 0x0;
            static constexpr std::uintptr_t max = 0x8;
            static constexpr std::uintptr_t bIsValid = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"min", 0x0, "StructProperty"},
            {"max", 0x8, "StructProperty"},
            {"bIsValid", 0x10, "BoolProperty"},
        }};
    };

    struct Box3d
    {
        static constexpr std::string_view Name = "Box3d";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t min = 0x0;
            static constexpr std::uintptr_t max = 0x18;
            static constexpr std::uintptr_t IsValid = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"min", 0x0, "StructProperty"},
            {"max", 0x18, "StructProperty"},
            {"IsValid", 0x30, "BoolProperty"},
        }};
    };

    struct Box3f
    {
        static constexpr std::string_view Name = "Box3f";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t min = 0x0;
            static constexpr std::uintptr_t max = 0xC;
            static constexpr std::uintptr_t IsValid = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"min", 0x0, "StructProperty"},
            {"max", 0xC, "StructProperty"},
            {"IsValid", 0x18, "BoolProperty"},
        }};
    };

    struct BoxSphereBounds
    {
        static constexpr std::string_view Name = "BoxSphereBounds";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t origin = 0x0;
            static constexpr std::uintptr_t BoxExtent = 0x18;
            static constexpr std::uintptr_t SphereRadius = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"origin", 0x0, "StructProperty"},
            {"BoxExtent", 0x18, "StructProperty"},
            {"SphereRadius", 0x30, "DoubleProperty"},
        }};
    };

    struct BoxSphereBounds3d
    {
        static constexpr std::string_view Name = "BoxSphereBounds3d";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t origin = 0x0;
            static constexpr std::uintptr_t BoxExtent = 0x18;
            static constexpr std::uintptr_t SphereRadius = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"origin", 0x0, "StructProperty"},
            {"BoxExtent", 0x18, "StructProperty"},
            {"SphereRadius", 0x30, "DoubleProperty"},
        }};
    };

    struct BoxSphereBounds3f
    {
        static constexpr std::string_view Name = "BoxSphereBounds3f";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t origin = 0x0;
            static constexpr std::uintptr_t BoxExtent = 0xC;
            static constexpr std::uintptr_t SphereRadius = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"origin", 0x0, "StructProperty"},
            {"BoxExtent", 0xC, "StructProperty"},
            {"SphereRadius", 0x18, "FloatProperty"},
        }};
    };

    struct ByteProperty
    {
        static constexpr std::string_view Name = "ByteProperty";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NumericProperty";
        struct Offsets
        {
            static constexpr std::uintptr_t Enum = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Enum", 0x70, "ObjectProperty"},
        }};
    };

    struct ChunkDependency
    {
        static constexpr std::string_view Name = "ChunkDependency";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ChunkId = 0x0;
            static constexpr std::uintptr_t ParentChunkID = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ChunkId", 0x0, "IntProperty"},
            {"ParentChunkID", 0x4, "IntProperty"},
        }};
    };

    struct ChunkDependencyInfo
    {
        static constexpr std::string_view Name = "ChunkDependencyInfo";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t DependencyArray = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DependencyArray", 0x28, "ArrayProperty"},
        }};
    };

    struct Class
    {
        static constexpr std::string_view Name = "Class";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Struct";
        struct Offsets
        {
            static constexpr std::uintptr_t NetFields = 0xF8;
            static constexpr std::uintptr_t ClassDefaultObject = 0x110;
            static constexpr std::uintptr_t ClassWithin = 0x118;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"NetFields", 0xF8, "ArrayProperty"},
            {"ClassDefaultObject", 0x110, "ObjectProperty"},
            {"ClassWithin", 0x118, "ClassProperty"},
        }};
    };

    struct ClassCookedMetaData
    {
        static constexpr std::string_view Name = "ClassCookedMetaData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CookedMetaDataBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ClassMetaData = 0x28;
            static constexpr std::uintptr_t FunctionsMetaData = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ClassMetaData", 0x28, "StructProperty"},
            {"FunctionsMetaData", 0x48, "MapProperty"},
        }};
    };

    struct ClassProperty
    {
        static constexpr std::string_view Name = "ClassProperty";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ObjectProperty";
        struct Offsets
        {
            static constexpr std::uintptr_t MetaClass = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MetaClass", 0x78, "ClassProperty"},
        }};
    };

    struct Color
    {
        static constexpr std::string_view Name = "Color";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t B = 0x0;
            static constexpr std::uintptr_t G = 0x1;
            static constexpr std::uintptr_t R = 0x2;
            static constexpr std::uintptr_t A = 0x3;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"B", 0x0, "ByteProperty"},
            {"G", 0x1, "ByteProperty"},
            {"R", 0x2, "ByteProperty"},
            {"A", 0x3, "ByteProperty"},
        }};
    };

    struct ConstSharedStruct
    {
        static constexpr std::string_view Name = "ConstSharedStruct";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct CookedMetaDataBase
    {
        static constexpr std::string_view Name = "CookedMetaDataBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DateTime
    {
        static constexpr std::string_view Name = "DateTime";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Ticks = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Ticks", 0x0, "Int64Property"},
        }};
    };

    struct Default__Class
    {
        static constexpr std::string_view Name = "Default__Class";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct Default__ScriptStruct
    {
        static constexpr std::string_view Name = "Default__ScriptStruct";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DelegateFunction
    {
        static constexpr std::string_view Name = "DelegateFunction";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Function";
        struct Offsets
        {
            static constexpr std::uintptr_t SuperStruct = 0x40;
            static constexpr std::uintptr_t ScriptAndPropertyObjectReferences = 0x98;
            static constexpr std::uintptr_t Children = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SuperStruct", 0x40, "ObjectProperty"},
            {"ScriptAndPropertyObjectReferences", 0x98, "ArrayProperty"},
            {"Children", 0xA8, "ObjectProperty"},
        }};
    };

    struct DelegateProperty
    {
        static constexpr std::string_view Name = "DelegateProperty";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Property";
        struct Offsets
        {
            static constexpr std::uintptr_t SignatureFunction = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SignatureFunction", 0x70, "ObjectProperty"},
        }};
    };

    struct DirectoryPath
    {
        static constexpr std::string_view Name = "DirectoryPath";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Path = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Path", 0x0, "StrProperty"},
        }};
    };

    struct DoubleInterval
    {
        static constexpr std::string_view Name = "DoubleInterval";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t min = 0x0;
            static constexpr std::uintptr_t max = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"min", 0x0, "DoubleProperty"},
            {"max", 0x8, "DoubleProperty"},
        }};
    };

    struct DoubleProperty
    {
        static constexpr std::string_view Name = "DoubleProperty";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NumericProperty";
        struct Offsets
        {
            static constexpr std::uintptr_t Next = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Next", 0x28, "ObjectProperty"},
        }};
    };

    struct DoubleRange
    {
        static constexpr std::string_view Name = "DoubleRange";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t LowerBound = 0x0;
            static constexpr std::uintptr_t UpperBound = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"LowerBound", 0x0, "StructProperty"},
            {"UpperBound", 0x10, "StructProperty"},
        }};
    };

    struct DoubleRangeBound
    {
        static constexpr std::string_view Name = "DoubleRangeBound";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Type = 0x0;
            static constexpr std::uintptr_t Value = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Type", 0x0, "ByteProperty"},
            {"Value", 0x8, "DoubleProperty"},
        }};
    };

    struct EditorPathObjectInterface
    {
        static constexpr std::string_view Name = "EditorPathObjectInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct Enum
    {
        static constexpr std::string_view Name = "Enum";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Field";
        struct Offsets
        {
            static constexpr std::uintptr_t Next = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Next", 0x28, "ObjectProperty"},
        }};
    };

    struct EnumCookedMetaData
    {
        static constexpr std::string_view Name = "EnumCookedMetaData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CookedMetaDataBase";
        struct Offsets
        {
            static constexpr std::uintptr_t EnumMetaData = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"EnumMetaData", 0x28, "StructProperty"},
        }};
    };

    struct EnumProperty
    {
        static constexpr std::string_view Name = "EnumProperty";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Property";
        struct Offsets
        {
            static constexpr std::uintptr_t UnderlyingProp = 0x70;
            static constexpr std::uintptr_t Enum = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"UnderlyingProp", 0x70, "ObjectProperty"},
            {"Enum", 0x78, "ObjectProperty"},
        }};
    };

    struct FallbackStruct
    {
        static constexpr std::string_view Name = "FallbackStruct";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct Field
    {
        static constexpr std::string_view Name = "Field";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Next = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Next", 0x28, "ObjectProperty"},
        }};
    };

    struct FieldCookedMetaDataKey
    {
        static constexpr std::string_view Name = "FieldCookedMetaDataKey";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t FieldPath = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"FieldPath", 0x0, "ArrayProperty"},
        }};
    };

    struct FieldCookedMetaDataStore
    {
        static constexpr std::string_view Name = "FieldCookedMetaDataStore";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t FieldMetaData = 0x0;
            static constexpr std::uintptr_t SubFieldMetaData = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"FieldMetaData", 0x0, "MapProperty"},
            {"SubFieldMetaData", 0x10, "MapProperty"},
        }};
    };

    struct FieldCookedMetaDataValue
    {
        static constexpr std::string_view Name = "FieldCookedMetaDataValue";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t MetaData = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MetaData", 0x0, "MapProperty"},
        }};
    };

    struct FilePath
    {
        static constexpr std::string_view Name = "FilePath";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t FilePath = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"FilePath", 0x0, "StrProperty"},
        }};
    };

    struct FloatInterval
    {
        static constexpr std::string_view Name = "FloatInterval";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t min = 0x0;
            static constexpr std::uintptr_t max = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"min", 0x0, "FloatProperty"},
            {"max", 0x4, "FloatProperty"},
        }};
    };

    struct FloatProperty
    {
        static constexpr std::string_view Name = "FloatProperty";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NumericProperty";
        struct Offsets
        {
            static constexpr std::uintptr_t Next = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Next", 0x28, "ObjectProperty"},
        }};
    };

    struct FloatRange
    {
        static constexpr std::string_view Name = "FloatRange";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t LowerBound = 0x0;
            static constexpr std::uintptr_t UpperBound = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"LowerBound", 0x0, "StructProperty"},
            {"UpperBound", 0x8, "StructProperty"},
        }};
    };

    struct FloatRangeBound
    {
        static constexpr std::string_view Name = "FloatRangeBound";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Type = 0x0;
            static constexpr std::uintptr_t Value = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Type", 0x0, "ByteProperty"},
            {"Value", 0x4, "FloatProperty"},
        }};
    };

    struct FrameNumber
    {
        static constexpr std::string_view Name = "FrameNumber";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x0, "IntProperty"},
        }};
    };

    struct FrameNumberRange
    {
        static constexpr std::string_view Name = "FrameNumberRange";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t LowerBound = 0x0;
            static constexpr std::uintptr_t UpperBound = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"LowerBound", 0x0, "StructProperty"},
            {"UpperBound", 0x8, "StructProperty"},
        }};
    };

    struct FrameNumberRangeBound
    {
        static constexpr std::string_view Name = "FrameNumberRangeBound";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Type = 0x0;
            static constexpr std::uintptr_t Value = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Type", 0x0, "ByteProperty"},
            {"Value", 0x4, "StructProperty"},
        }};
    };

    struct FrameRate
    {
        static constexpr std::string_view Name = "FrameRate";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Numerator = 0x0;
            static constexpr std::uintptr_t Denominator = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Numerator", 0x0, "IntProperty"},
            {"Denominator", 0x4, "IntProperty"},
        }};
    };

    struct FrameTime
    {
        static constexpr std::string_view Name = "FrameTime";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t FrameNumber = 0x0;
            static constexpr std::uintptr_t SubFrame = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"FrameNumber", 0x0, "StructProperty"},
            {"SubFrame", 0x4, "FloatProperty"},
        }};
    };

    struct Function
    {
        static constexpr std::string_view Name = "Function";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Struct";
        struct Offsets
        {
            static constexpr std::uintptr_t SuperStruct = 0x40;
            static constexpr std::uintptr_t ScriptAndPropertyObjectReferences = 0x98;
            static constexpr std::uintptr_t Children = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SuperStruct", 0x40, "ObjectProperty"},
            {"ScriptAndPropertyObjectReferences", 0x98, "ArrayProperty"},
            {"Children", 0xA8, "ObjectProperty"},
        }};
    };

    struct GCBarrier
    {
        static constexpr std::string_view Name = "GCBarrier";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GCObjectReferencer
    {
        static constexpr std::string_view Name = "GCObjectReferencer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GloballyUniqueHandleBase
    {
        static constexpr std::string_view Name = "GloballyUniqueHandleBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t HandleValue = 0x0;
            static constexpr std::uintptr_t GeneratedByServerId = 0x8;
            static constexpr std::uintptr_t bIsValid = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"HandleValue", 0x0, "UInt64Property"},
            {"GeneratedByServerId", 0x8, "StructProperty"},
            {"bIsValid", 0xC, "BoolProperty"},
        }};
    };

    struct Guid
    {
        static constexpr std::string_view Name = "Guid";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x0;
            static constexpr std::uintptr_t B = 0x4;
            static constexpr std::uintptr_t C = 0x8;
            static constexpr std::uintptr_t D = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"A", 0x0, "IntProperty"},
            {"B", 0x4, "IntProperty"},
            {"C", 0x8, "IntProperty"},
            {"D", 0xC, "IntProperty"},
        }};
    };

    struct InputDeviceId
    {
        static constexpr std::string_view Name = "InputDeviceId";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t InternalId = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InternalId", 0x0, "IntProperty"},
        }};
    };

    struct InstancedPropertyBag
    {
        static constexpr std::string_view Name = "InstancedPropertyBag";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x0, "StructProperty"},
        }};
    };

    struct InstancedStruct
    {
        static constexpr std::string_view Name = "InstancedStruct";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InstancedStructArray
    {
        static constexpr std::string_view Name = "InstancedStructArray";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Values = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Values", 0x0, "ArrayProperty"},
        }};
    };

    struct InstancedStructBaseStructQueryParams
    {
        static constexpr std::string_view Name = "InstancedStructBaseStructQueryParams";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InstancedStructContainer
    {
        static constexpr std::string_view Name = "InstancedStructContainer";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct Int16Property
    {
        static constexpr std::string_view Name = "Int16Property";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NumericProperty";
        struct Offsets
        {
            static constexpr std::uintptr_t Next = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Next", 0x28, "ObjectProperty"},
        }};
    };

    struct Int32Interval
    {
        static constexpr std::string_view Name = "Int32Interval";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t min = 0x0;
            static constexpr std::uintptr_t max = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"min", 0x0, "IntProperty"},
            {"max", 0x4, "IntProperty"},
        }};
    };

    struct Int32Point
    {
        static constexpr std::string_view Name = "Int32Point";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t X = 0x0;
            static constexpr std::uintptr_t Y = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"X", 0x0, "IntProperty"},
            {"Y", 0x4, "IntProperty"},
        }};
    };

    struct Int32Range
    {
        static constexpr std::string_view Name = "Int32Range";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t LowerBound = 0x0;
            static constexpr std::uintptr_t UpperBound = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"LowerBound", 0x0, "StructProperty"},
            {"UpperBound", 0x8, "StructProperty"},
        }};
    };

    struct Int32RangeBound
    {
        static constexpr std::string_view Name = "Int32RangeBound";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Type = 0x0;
            static constexpr std::uintptr_t Value = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Type", 0x0, "ByteProperty"},
            {"Value", 0x4, "IntProperty"},
        }};
    };

    struct Int32Rect
    {
        static constexpr std::string_view Name = "Int32Rect";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t min = 0x0;
            static constexpr std::uintptr_t max = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"min", 0x0, "StructProperty"},
            {"max", 0x8, "StructProperty"},
        }};
    };

    struct Int32Vector
    {
        static constexpr std::string_view Name = "Int32Vector";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t X = 0x0;
            static constexpr std::uintptr_t Y = 0x4;
            static constexpr std::uintptr_t Z = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"X", 0x0, "IntProperty"},
            {"Y", 0x4, "IntProperty"},
            {"Z", 0x8, "IntProperty"},
        }};
    };

    struct Int32Vector2
    {
        static constexpr std::string_view Name = "Int32Vector2";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t X = 0x0;
            static constexpr std::uintptr_t Y = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"X", 0x0, "IntProperty"},
            {"Y", 0x4, "IntProperty"},
        }};
    };

    struct Int32Vector4
    {
        static constexpr std::string_view Name = "Int32Vector4";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t X = 0x0;
            static constexpr std::uintptr_t Y = 0x4;
            static constexpr std::uintptr_t Z = 0x8;
            static constexpr std::uintptr_t W = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"X", 0x0, "IntProperty"},
            {"Y", 0x4, "IntProperty"},
            {"Z", 0x8, "IntProperty"},
            {"W", 0xC, "IntProperty"},
        }};
    };

    struct Int64Point
    {
        static constexpr std::string_view Name = "Int64Point";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t X = 0x0;
            static constexpr std::uintptr_t Y = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"X", 0x0, "Int64Property"},
            {"Y", 0x8, "Int64Property"},
        }};
    };

    struct Int64Property
    {
        static constexpr std::string_view Name = "Int64Property";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NumericProperty";
        struct Offsets
        {
            static constexpr std::uintptr_t Next = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Next", 0x28, "ObjectProperty"},
        }};
    };

    struct Int64Rect
    {
        static constexpr std::string_view Name = "Int64Rect";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t min = 0x0;
            static constexpr std::uintptr_t max = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"min", 0x0, "StructProperty"},
            {"max", 0x10, "StructProperty"},
        }};
    };

    struct Int64Vector
    {
        static constexpr std::string_view Name = "Int64Vector";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t X = 0x0;
            static constexpr std::uintptr_t Y = 0x8;
            static constexpr std::uintptr_t Z = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"X", 0x0, "Int64Property"},
            {"Y", 0x8, "Int64Property"},
            {"Z", 0x10, "Int64Property"},
        }};
    };

    struct Int64Vector2
    {
        static constexpr std::string_view Name = "Int64Vector2";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t X = 0x0;
            static constexpr std::uintptr_t Y = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"X", 0x0, "Int64Property"},
            {"Y", 0x8, "Int64Property"},
        }};
    };

    struct Int64Vector4
    {
        static constexpr std::string_view Name = "Int64Vector4";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t X = 0x0;
            static constexpr std::uintptr_t Y = 0x8;
            static constexpr std::uintptr_t Z = 0x10;
            static constexpr std::uintptr_t W = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"X", 0x0, "Int64Property"},
            {"Y", 0x8, "Int64Property"},
            {"Z", 0x10, "Int64Property"},
            {"W", 0x18, "Int64Property"},
        }};
    };

    struct Int8Property
    {
        static constexpr std::string_view Name = "Int8Property";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NumericProperty";
        struct Offsets
        {
            static constexpr std::uintptr_t Next = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Next", 0x28, "ObjectProperty"},
        }};
    };

    struct IntPoint
    {
        static constexpr std::string_view Name = "IntPoint";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t X = 0x0;
            static constexpr std::uintptr_t Y = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"X", 0x0, "IntProperty"},
            {"Y", 0x4, "IntProperty"},
        }};
    };

    struct IntProperty
    {
        static constexpr std::string_view Name = "IntProperty";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NumericProperty";
        struct Offsets
        {
            static constexpr std::uintptr_t Next = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Next", 0x28, "ObjectProperty"},
        }};
    };

    struct IntRect
    {
        static constexpr std::string_view Name = "IntRect";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t min = 0x0;
            static constexpr std::uintptr_t max = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"min", 0x0, "StructProperty"},
            {"max", 0x8, "StructProperty"},
        }};
    };

    struct IntVector
    {
        static constexpr std::string_view Name = "IntVector";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t X = 0x0;
            static constexpr std::uintptr_t Y = 0x4;
            static constexpr std::uintptr_t Z = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"X", 0x0, "IntProperty"},
            {"Y", 0x4, "IntProperty"},
            {"Z", 0x8, "IntProperty"},
        }};
    };

    struct IntVector2
    {
        static constexpr std::string_view Name = "IntVector2";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t X = 0x0;
            static constexpr std::uintptr_t Y = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"X", 0x0, "IntProperty"},
            {"Y", 0x4, "IntProperty"},
        }};
    };

    struct IntVector4
    {
        static constexpr std::string_view Name = "IntVector4";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t X = 0x0;
            static constexpr std::uintptr_t Y = 0x4;
            static constexpr std::uintptr_t Z = 0x8;
            static constexpr std::uintptr_t W = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"X", 0x0, "IntProperty"},
            {"Y", 0x4, "IntProperty"},
            {"Z", 0x8, "IntProperty"},
            {"W", 0xC, "IntProperty"},
        }};
    };

    struct Interface
    {
        static constexpr std::string_view Name = "Interface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InterfaceProperty
    {
        static constexpr std::string_view Name = "InterfaceProperty";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Property";
        struct Offsets
        {
            static constexpr std::uintptr_t InterfaceClass = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InterfaceClass", 0x70, "ClassProperty"},
        }};
    };

    struct InterpCurveFloat
    {
        static constexpr std::string_view Name = "InterpCurveFloat";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Points = 0x0;
            static constexpr std::uintptr_t bIsLooped = 0x10;
            static constexpr std::uintptr_t LoopKeyOffset = 0x14;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Points", 0x0, "ArrayProperty"},
            {"bIsLooped", 0x10, "BoolProperty"},
            {"LoopKeyOffset", 0x14, "FloatProperty"},
        }};
    };

    struct InterpCurveLinearColor
    {
        static constexpr std::string_view Name = "InterpCurveLinearColor";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Points = 0x0;
            static constexpr std::uintptr_t bIsLooped = 0x10;
            static constexpr std::uintptr_t LoopKeyOffset = 0x14;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Points", 0x0, "ArrayProperty"},
            {"bIsLooped", 0x10, "BoolProperty"},
            {"LoopKeyOffset", 0x14, "FloatProperty"},
        }};
    };

    struct InterpCurvePointFloat
    {
        static constexpr std::string_view Name = "InterpCurvePointFloat";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t InVal = 0x0;
            static constexpr std::uintptr_t OutVal = 0x4;
            static constexpr std::uintptr_t ArriveTangent = 0x8;
            static constexpr std::uintptr_t LeaveTangent = 0xC;
            static constexpr std::uintptr_t InterpMode = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"InVal", 0x0, "FloatProperty"},
            {"OutVal", 0x4, "FloatProperty"},
            {"ArriveTangent", 0x8, "FloatProperty"},
            {"LeaveTangent", 0xC, "FloatProperty"},
            {"InterpMode", 0x10, "ByteProperty"},
        }};
    };

    struct InterpCurvePointLinearColor
    {
        static constexpr std::string_view Name = "InterpCurvePointLinearColor";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t InVal = 0x0;
            static constexpr std::uintptr_t OutVal = 0x4;
            static constexpr std::uintptr_t ArriveTangent = 0x14;
            static constexpr std::uintptr_t LeaveTangent = 0x24;
            static constexpr std::uintptr_t InterpMode = 0x34;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"InVal", 0x0, "FloatProperty"},
            {"OutVal", 0x4, "StructProperty"},
            {"ArriveTangent", 0x14, "StructProperty"},
            {"LeaveTangent", 0x24, "StructProperty"},
            {"InterpMode", 0x34, "ByteProperty"},
        }};
    };

    struct InterpCurvePointQuat
    {
        static constexpr std::string_view Name = "InterpCurvePointQuat";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t InVal = 0x0;
            static constexpr std::uintptr_t OutVal = 0x10;
            static constexpr std::uintptr_t ArriveTangent = 0x30;
            static constexpr std::uintptr_t LeaveTangent = 0x50;
            static constexpr std::uintptr_t InterpMode = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"InVal", 0x0, "FloatProperty"},
            {"OutVal", 0x10, "StructProperty"},
            {"ArriveTangent", 0x30, "StructProperty"},
            {"LeaveTangent", 0x50, "StructProperty"},
            {"InterpMode", 0x70, "ByteProperty"},
        }};
    };

    struct InterpCurvePointTwoVectors
    {
        static constexpr std::string_view Name = "InterpCurvePointTwoVectors";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t InVal = 0x0;
            static constexpr std::uintptr_t OutVal = 0x8;
            static constexpr std::uintptr_t ArriveTangent = 0x38;
            static constexpr std::uintptr_t LeaveTangent = 0x68;
            static constexpr std::uintptr_t InterpMode = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"InVal", 0x0, "FloatProperty"},
            {"OutVal", 0x8, "StructProperty"},
            {"ArriveTangent", 0x38, "StructProperty"},
            {"LeaveTangent", 0x68, "StructProperty"},
            {"InterpMode", 0x98, "ByteProperty"},
        }};
    };

    struct InterpCurvePointVector
    {
        static constexpr std::string_view Name = "InterpCurvePointVector";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t InVal = 0x0;
            static constexpr std::uintptr_t OutVal = 0x8;
            static constexpr std::uintptr_t ArriveTangent = 0x20;
            static constexpr std::uintptr_t LeaveTangent = 0x38;
            static constexpr std::uintptr_t InterpMode = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"InVal", 0x0, "FloatProperty"},
            {"OutVal", 0x8, "StructProperty"},
            {"ArriveTangent", 0x20, "StructProperty"},
            {"LeaveTangent", 0x38, "StructProperty"},
            {"InterpMode", 0x50, "ByteProperty"},
        }};
    };

    struct InterpCurvePointVector2D
    {
        static constexpr std::string_view Name = "InterpCurvePointVector2D";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t InVal = 0x0;
            static constexpr std::uintptr_t OutVal = 0x8;
            static constexpr std::uintptr_t ArriveTangent = 0x18;
            static constexpr std::uintptr_t LeaveTangent = 0x28;
            static constexpr std::uintptr_t InterpMode = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"InVal", 0x0, "FloatProperty"},
            {"OutVal", 0x8, "StructProperty"},
            {"ArriveTangent", 0x18, "StructProperty"},
            {"LeaveTangent", 0x28, "StructProperty"},
            {"InterpMode", 0x38, "ByteProperty"},
        }};
    };

    struct InterpCurveQuat
    {
        static constexpr std::string_view Name = "InterpCurveQuat";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Points = 0x0;
            static constexpr std::uintptr_t bIsLooped = 0x10;
            static constexpr std::uintptr_t LoopKeyOffset = 0x14;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Points", 0x0, "ArrayProperty"},
            {"bIsLooped", 0x10, "BoolProperty"},
            {"LoopKeyOffset", 0x14, "FloatProperty"},
        }};
    };

    struct InterpCurveTwoVectors
    {
        static constexpr std::string_view Name = "InterpCurveTwoVectors";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Points = 0x0;
            static constexpr std::uintptr_t bIsLooped = 0x10;
            static constexpr std::uintptr_t LoopKeyOffset = 0x14;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Points", 0x0, "ArrayProperty"},
            {"bIsLooped", 0x10, "BoolProperty"},
            {"LoopKeyOffset", 0x14, "FloatProperty"},
        }};
    };

    struct InterpCurveVector
    {
        static constexpr std::string_view Name = "InterpCurveVector";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Points = 0x0;
            static constexpr std::uintptr_t bIsLooped = 0x10;
            static constexpr std::uintptr_t LoopKeyOffset = 0x14;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Points", 0x0, "ArrayProperty"},
            {"bIsLooped", 0x10, "BoolProperty"},
            {"LoopKeyOffset", 0x14, "FloatProperty"},
        }};
    };

    struct InterpCurveVector2D
    {
        static constexpr std::string_view Name = "InterpCurveVector2D";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Points = 0x0;
            static constexpr std::uintptr_t bIsLooped = 0x10;
            static constexpr std::uintptr_t LoopKeyOffset = 0x14;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Points", 0x0, "ArrayProperty"},
            {"bIsLooped", 0x10, "BoolProperty"},
            {"LoopKeyOffset", 0x14, "FloatProperty"},
        }};
    };

    struct LazyObjectProperty
    {
        static constexpr std::string_view Name = "LazyObjectProperty";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ObjectPropertyBase";
        struct Offsets
        {
            static constexpr std::uintptr_t PropertyClass = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PropertyClass", 0x70, "ClassProperty"},
        }};
    };

    struct LinearColor
    {
        static constexpr std::string_view Name = "LinearColor";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t R = 0x0;
            static constexpr std::uintptr_t G = 0x4;
            static constexpr std::uintptr_t B = 0x8;
            static constexpr std::uintptr_t A = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"R", 0x0, "FloatProperty"},
            {"G", 0x4, "FloatProperty"},
            {"B", 0x8, "FloatProperty"},
            {"A", 0xC, "FloatProperty"},
        }};
    };

    struct LinkerPlaceholderClass
    {
        static constexpr std::string_view Name = "LinkerPlaceholderClass";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Class";
        struct Offsets
        {
            static constexpr std::uintptr_t NetFields = 0xF8;
            static constexpr std::uintptr_t ClassDefaultObject = 0x110;
            static constexpr std::uintptr_t ClassWithin = 0x118;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"NetFields", 0xF8, "ArrayProperty"},
            {"ClassDefaultObject", 0x110, "ObjectProperty"},
            {"ClassWithin", 0x118, "ClassProperty"},
        }};
    };

    struct LinkerPlaceholderExportObject
    {
        static constexpr std::string_view Name = "LinkerPlaceholderExportObject";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct LinkerPlaceholderFunction
    {
        static constexpr std::string_view Name = "LinkerPlaceholderFunction";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Function";
        struct Offsets
        {
            static constexpr std::uintptr_t SuperStruct = 0x40;
            static constexpr std::uintptr_t ScriptAndPropertyObjectReferences = 0x98;
            static constexpr std::uintptr_t Children = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SuperStruct", 0x40, "ObjectProperty"},
            {"ScriptAndPropertyObjectReferences", 0x98, "ArrayProperty"},
            {"Children", 0xA8, "ObjectProperty"},
        }};
    };

    struct MapProperty
    {
        static constexpr std::string_view Name = "MapProperty";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Property";
        struct Offsets
        {
            static constexpr std::uintptr_t KeyProp = 0x70;
            static constexpr std::uintptr_t ValueProp = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"KeyProp", 0x70, "ObjectProperty"},
            {"ValueProp", 0x78, "ObjectProperty"},
        }};
    };

    struct Matrix
    {
        static constexpr std::string_view Name = "Matrix";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t XPlane = 0x0;
            static constexpr std::uintptr_t YPlane = 0x20;
            static constexpr std::uintptr_t ZPlane = 0x40;
            static constexpr std::uintptr_t WPlane = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"XPlane", 0x0, "StructProperty"},
            {"YPlane", 0x20, "StructProperty"},
            {"ZPlane", 0x40, "StructProperty"},
            {"WPlane", 0x60, "StructProperty"},
        }};
    };

    struct Matrix44d
    {
        static constexpr std::string_view Name = "Matrix44d";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t XPlane = 0x0;
            static constexpr std::uintptr_t YPlane = 0x20;
            static constexpr std::uintptr_t ZPlane = 0x40;
            static constexpr std::uintptr_t WPlane = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"XPlane", 0x0, "StructProperty"},
            {"YPlane", 0x20, "StructProperty"},
            {"ZPlane", 0x40, "StructProperty"},
            {"WPlane", 0x60, "StructProperty"},
        }};
    };

    struct Matrix44f
    {
        static constexpr std::string_view Name = "Matrix44f";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t XPlane = 0x0;
            static constexpr std::uintptr_t YPlane = 0x10;
            static constexpr std::uintptr_t ZPlane = 0x20;
            static constexpr std::uintptr_t WPlane = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"XPlane", 0x0, "StructProperty"},
            {"YPlane", 0x10, "StructProperty"},
            {"ZPlane", 0x20, "StructProperty"},
            {"WPlane", 0x30, "StructProperty"},
        }};
    };

    struct MetaData
    {
        static constexpr std::string_view Name = "MetaData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MulticastDelegateProperty
    {
        static constexpr std::string_view Name = "MulticastDelegateProperty";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Property";
        struct Offsets
        {
            static constexpr std::uintptr_t SignatureFunction = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SignatureFunction", 0x70, "ObjectProperty"},
        }};
    };

    struct MulticastDelegatePropertyWrapper
    {
        static constexpr std::string_view Name = "MulticastDelegatePropertyWrapper";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PropertyWrapper";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MulticastInlineDelegateProperty
    {
        static constexpr std::string_view Name = "MulticastInlineDelegateProperty";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MulticastDelegateProperty";
        struct Offsets
        {
            static constexpr std::uintptr_t SignatureFunction = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SignatureFunction", 0x70, "ObjectProperty"},
        }};
    };

    struct MulticastInlineDelegatePropertyWrapper
    {
        static constexpr std::string_view Name = "MulticastInlineDelegatePropertyWrapper";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MulticastDelegatePropertyWrapper";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MulticastSparseDelegateProperty
    {
        static constexpr std::string_view Name = "MulticastSparseDelegateProperty";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MulticastDelegateProperty";
        struct Offsets
        {
            static constexpr std::uintptr_t SignatureFunction = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SignatureFunction", 0x70, "ObjectProperty"},
        }};
    };

    struct MusicalTime
    {
        static constexpr std::string_view Name = "MusicalTime";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Bar = 0x0;
            static constexpr std::uintptr_t TickInBar = 0x4;
            static constexpr std::uintptr_t TicksPerBar = 0x8;
            static constexpr std::uintptr_t TicksPerBeat = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Bar", 0x0, "IntProperty"},
            {"TickInBar", 0x4, "IntProperty"},
            {"TicksPerBar", 0x8, "IntProperty"},
            {"TicksPerBeat", 0xC, "IntProperty"},
        }};
    };

    struct NameProperty
    {
        static constexpr std::string_view Name = "NameProperty";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Property";
        struct Offsets
        {
            static constexpr std::uintptr_t Next = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Next", 0x28, "ObjectProperty"},
        }};
    };

    struct NeutralizedStructSentinel
    {
        static constexpr std::string_view Name = "NeutralizedStructSentinel";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct NumericProperty
    {
        static constexpr std::string_view Name = "NumericProperty";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Property";
        struct Offsets
        {
            static constexpr std::uintptr_t Next = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Next", 0x28, "ObjectProperty"},
        }};
    };

    struct Object
    {
        static constexpr std::string_view Name = "Object";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "ExecuteUbergraph",
        }};
    };

    struct ObjectCookedMetaDataStore
    {
        static constexpr std::string_view Name = "ObjectCookedMetaDataStore";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ObjectMetaData = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ObjectMetaData", 0x0, "MapProperty"},
        }};
    };

    struct ObjectProperty
    {
        static constexpr std::string_view Name = "ObjectProperty";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ObjectPropertyBase";
        struct Offsets
        {
            static constexpr std::uintptr_t PropertyClass = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PropertyClass", 0x70, "ClassProperty"},
        }};
    };

    struct ObjectPropertyBase
    {
        static constexpr std::string_view Name = "ObjectPropertyBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Property";
        struct Offsets
        {
            static constexpr std::uintptr_t PropertyClass = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PropertyClass", 0x70, "ClassProperty"},
        }};
    };

    struct ObjectReachabilityStressData
    {
        static constexpr std::string_view Name = "ObjectReachabilityStressData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Children = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Children", 0x28, "ArrayProperty"},
        }};
    };

    struct ObjectRedirector
    {
        static constexpr std::string_view Name = "ObjectRedirector";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OrientedBox
    {
        static constexpr std::string_view Name = "OrientedBox";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Center = 0x0;
            static constexpr std::uintptr_t AxisX = 0x18;
            static constexpr std::uintptr_t AxisY = 0x30;
            static constexpr std::uintptr_t AxisZ = 0x48;
            static constexpr std::uintptr_t ExtentX = 0x60;
            static constexpr std::uintptr_t ExtentY = 0x68;
            static constexpr std::uintptr_t ExtentZ = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Center", 0x0, "StructProperty"},
            {"AxisX", 0x18, "StructProperty"},
            {"AxisY", 0x30, "StructProperty"},
            {"AxisZ", 0x48, "StructProperty"},
            {"ExtentX", 0x60, "DoubleProperty"},
            {"ExtentY", 0x68, "DoubleProperty"},
            {"ExtentZ", 0x70, "DoubleProperty"},
        }};
    };

    struct OverriddenPropertyNode
    {
        static constexpr std::string_view Name = "OverriddenPropertyNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t NodeId = 0x0;
            static constexpr std::uintptr_t Operation = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"NodeId", 0x0, "StructProperty"},
            {"Operation", 0x20, "EnumProperty"},
        }};
    };

    struct OverriddenPropertyNodeID
    {
        static constexpr std::string_view Name = "OverriddenPropertyNodeID";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Path = 0x0;
            static constexpr std::uintptr_t Object = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Path", 0x0, "StructProperty"},
            {"Object", 0x18, "WeakObjectProperty"},
        }};
    };

    struct OverriddenPropertyPath
    {
        static constexpr std::string_view Name = "OverriddenPropertyPath";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Path = 0x0;
            static constexpr std::uintptr_t CachedHash = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Path", 0x0, "ArrayProperty"},
            {"CachedHash", 0x10, "UInt64Property"},
        }};
    };

    struct OverriddenPropertySet
    {
        static constexpr std::string_view Name = "OverriddenPropertySet";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Owner = 0x0;
            static constexpr std::uintptr_t bWasAdded = 0x8;
            static constexpr std::uintptr_t RootNode = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Owner", 0x0, "ObjectProperty"},
            {"bWasAdded", 0x8, "BoolProperty"},
            {"RootNode", 0x10, "StructProperty"},
        }};
    };

    struct Package
    {
        static constexpr std::string_view Name = "Package";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PackageMap
    {
        static constexpr std::string_view Name = "PackageMap";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PackedNormal
    {
        static constexpr std::string_view Name = "PackedNormal";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t X = 0x0;
            static constexpr std::uintptr_t Y = 0x1;
            static constexpr std::uintptr_t Z = 0x2;
            static constexpr std::uintptr_t W = 0x3;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"X", 0x0, "ByteProperty"},
            {"Y", 0x1, "ByteProperty"},
            {"Z", 0x2, "ByteProperty"},
            {"W", 0x3, "ByteProperty"},
        }};
    };

    struct PackedRGB10A2N
    {
        static constexpr std::string_view Name = "PackedRGB10A2N";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Packed = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Packed", 0x0, "IntProperty"},
        }};
    };

    struct PackedRGBA16N
    {
        static constexpr std::string_view Name = "PackedRGBA16N";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t XY = 0x0;
            static constexpr std::uintptr_t ZW = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"XY", 0x0, "IntProperty"},
            {"ZW", 0x4, "IntProperty"},
        }};
    };

    struct PackedRemoteObjectHeader
    {
        static constexpr std::string_view Name = "PackedRemoteObjectHeader";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t NameIndex = 0x0;
            static constexpr std::uintptr_t IdIndex = 0x2;
            static constexpr std::uintptr_t OuterIdIndex = 0x4;
            static constexpr std::uintptr_t ClassIndex = 0x6;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"NameIndex", 0x0, "UInt16Property"},
            {"IdIndex", 0x2, "UInt16Property"},
            {"OuterIdIndex", 0x4, "UInt16Property"},
            {"ClassIndex", 0x6, "UInt16Property"},
        }};
    };

    struct PackedRemoteObjectPathName
    {
        static constexpr std::string_view Name = "PackedRemoteObjectPathName";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t RemoteIds = 0x0;
            static constexpr std::uintptr_t Names = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"RemoteIds", 0x0, "ArrayProperty"},
            {"Names", 0x10, "ArrayProperty"},
        }};
    };

    struct PerPlatformBool
    {
        static constexpr std::string_view Name = "PerPlatformBool";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Default = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Default", 0x0, "BoolProperty"},
        }};
    };

    struct PerPlatformFloat
    {
        static constexpr std::string_view Name = "PerPlatformFloat";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Default = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Default", 0x0, "FloatProperty"},
        }};
    };

    struct PerPlatformFrameRate
    {
        static constexpr std::string_view Name = "PerPlatformFrameRate";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Default = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Default", 0x0, "StructProperty"},
        }};
    };

    struct PerPlatformInt
    {
        static constexpr std::string_view Name = "PerPlatformInt";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Default = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Default", 0x0, "IntProperty"},
        }};
    };

    struct Plane
    {
        static constexpr std::string_view Name = "Plane";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "Vector";
        struct Offsets
        {
            static constexpr std::uintptr_t W = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"W", 0x18, "DoubleProperty"},
        }};
    };

    struct Plane4d
    {
        static constexpr std::string_view Name = "Plane4d";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "Vector3d";
        struct Offsets
        {
            static constexpr std::uintptr_t W = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"W", 0x18, "DoubleProperty"},
        }};
    };

    struct Plane4f
    {
        static constexpr std::string_view Name = "Plane4f";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "Vector3f";
        struct Offsets
        {
            static constexpr std::uintptr_t W = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"W", 0xC, "FloatProperty"},
        }};
    };

    struct PlatformInputDeviceState
    {
        static constexpr std::string_view Name = "PlatformInputDeviceState";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t OwningPlatformUser = 0x0;
            static constexpr std::uintptr_t ConnectionState = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OwningPlatformUser", 0x0, "StructProperty"},
            {"ConnectionState", 0x4, "EnumProperty"},
        }};
    };

    struct PlatformUserId
    {
        static constexpr std::string_view Name = "PlatformUserId";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t InternalId = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InternalId", 0x0, "IntProperty"},
        }};
    };

    struct PolyglotTextData
    {
        static constexpr std::string_view Name = "PolyglotTextData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Category = 0x0;
            static constexpr std::uintptr_t NativeCulture = 0x8;
            static constexpr std::uintptr_t Namespace = 0x18;
            static constexpr std::uintptr_t Key = 0x28;
            static constexpr std::uintptr_t NativeString = 0x38;
            static constexpr std::uintptr_t LocalizedStrings = 0x48;
            static constexpr std::uintptr_t bIsMinimalPatch = 0x58;
            static constexpr std::uintptr_t CachedText = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"Category", 0x0, "EnumProperty"},
            {"NativeCulture", 0x8, "StrProperty"},
            {"Namespace", 0x18, "StrProperty"},
            {"Key", 0x28, "StrProperty"},
            {"NativeString", 0x38, "StrProperty"},
            {"LocalizedStrings", 0x48, "MapProperty"},
            {"bIsMinimalPatch", 0x58, "BoolProperty"},
            {"CachedText", 0x60, "TextProperty"},
        }};
    };

    struct PredictsVarInfo
    {
        static constexpr std::string_view Name = "PredictsVarInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t PropertyName = 0x0;
            static constexpr std::uintptr_t bExtern = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PropertyName", 0x0, "NameProperty"},
            {"bExtern", 0x4, "BoolProperty"},
        }};
    };

    struct PrimaryAssetId
    {
        static constexpr std::string_view Name = "PrimaryAssetId";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t PrimaryAssetType = 0x0;
            static constexpr std::uintptr_t PrimaryAssetName = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PrimaryAssetType", 0x0, "StructProperty"},
            {"PrimaryAssetName", 0x4, "NameProperty"},
        }};
    };

    struct PrimaryAssetType
    {
        static constexpr std::string_view Name = "PrimaryAssetType";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Name", 0x0, "NameProperty"},
        }};
    };

    struct ProfileLocus
    {
        static constexpr std::string_view Name = "ProfileLocus";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct Property
    {
        static constexpr std::string_view Name = "Property";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Field";
        struct Offsets
        {
            static constexpr std::uintptr_t Next = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Next", 0x28, "ObjectProperty"},
        }};
    };

    struct PropertyBag
    {
        static constexpr std::string_view Name = "PropertyBag";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ScriptStruct";
        struct Offsets
        {
            static constexpr std::uintptr_t PropertyDescs = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PropertyDescs", 0xC8, "ArrayProperty"},
        }};
    };

    struct PropertyBagContainerTypes
    {
        static constexpr std::string_view Name = "PropertyBagContainerTypes";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PropertyBagMissingObject
    {
        static constexpr std::string_view Name = "PropertyBagMissingObject";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PropertyBagMissingStruct
    {
        static constexpr std::string_view Name = "PropertyBagMissingStruct";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PropertyBagPropertyDesc
    {
        static constexpr std::string_view Name = "PropertyBagPropertyDesc";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ValueTypeObject = 0x0;
            static constexpr std::uintptr_t ID = 0x8;
            static constexpr std::uintptr_t Name = 0x18;
            static constexpr std::uintptr_t ValueType = 0x1C;
            static constexpr std::uintptr_t ContainerTypes = 0x1D;
            static constexpr std::uintptr_t PropertyFlags = 0x20;
            static constexpr std::uintptr_t KeyType = 0x28;
            static constexpr std::uintptr_t KeyTypeObject = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"ValueTypeObject", 0x0, "ObjectProperty"},
            {"ID", 0x8, "StructProperty"},
            {"Name", 0x18, "NameProperty"},
            {"ValueType", 0x1C, "EnumProperty"},
            {"ContainerTypes", 0x1D, "StructProperty"},
            {"PropertyFlags", 0x20, "UInt64Property"},
            {"KeyType", 0x28, "EnumProperty"},
            {"KeyTypeObject", 0x30, "ObjectProperty"},
        }};
    };

    struct PropertyBagPropertyDescMetaData
    {
        static constexpr std::string_view Name = "PropertyBagPropertyDescMetaData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Key = 0x0;
            static constexpr std::uintptr_t Value = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Key", 0x0, "NameProperty"},
            {"Value", 0x8, "StrProperty"},
        }};
    };

    struct PropertyTextFName
    {
        static constexpr std::string_view Name = "PropertyTextFName";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PropertyTextString
    {
        static constexpr std::string_view Name = "PropertyTextString";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PropertyWrapper
    {
        static constexpr std::string_view Name = "PropertyWrapper";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct QualifiedFrameTime
    {
        static constexpr std::string_view Name = "QualifiedFrameTime";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t time = 0x0;
            static constexpr std::uintptr_t Rate = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"time", 0x0, "StructProperty"},
            {"Rate", 0x8, "StructProperty"},
        }};
    };

    struct Quat
    {
        static constexpr std::string_view Name = "Quat";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t X = 0x0;
            static constexpr std::uintptr_t Y = 0x8;
            static constexpr std::uintptr_t Z = 0x10;
            static constexpr std::uintptr_t W = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"X", 0x0, "DoubleProperty"},
            {"Y", 0x8, "DoubleProperty"},
            {"Z", 0x10, "DoubleProperty"},
            {"W", 0x18, "DoubleProperty"},
        }};
    };

    struct Quat4d
    {
        static constexpr std::string_view Name = "Quat4d";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t X = 0x0;
            static constexpr std::uintptr_t Y = 0x8;
            static constexpr std::uintptr_t Z = 0x10;
            static constexpr std::uintptr_t W = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"X", 0x0, "DoubleProperty"},
            {"Y", 0x8, "DoubleProperty"},
            {"Z", 0x10, "DoubleProperty"},
            {"W", 0x18, "DoubleProperty"},
        }};
    };

    struct Quat4f
    {
        static constexpr std::string_view Name = "Quat4f";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t X = 0x0;
            static constexpr std::uintptr_t Y = 0x4;
            static constexpr std::uintptr_t Z = 0x8;
            static constexpr std::uintptr_t W = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"X", 0x0, "FloatProperty"},
            {"Y", 0x4, "FloatProperty"},
            {"Z", 0x8, "FloatProperty"},
            {"W", 0xC, "FloatProperty"},
        }};
    };

    struct RandomStream
    {
        static constexpr std::string_view Name = "RandomStream";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t InitialSeed = 0x0;
            static constexpr std::uintptr_t Seed = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"InitialSeed", 0x0, "IntProperty"},
            {"Seed", 0x4, "IntProperty"},
        }};
    };

    struct Ray
    {
        static constexpr std::string_view Name = "Ray";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t origin = 0x0;
            static constexpr std::uintptr_t Direction = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"origin", 0x0, "StructProperty"},
            {"Direction", 0x18, "StructProperty"},
        }};
    };

    struct Ray3d
    {
        static constexpr std::string_view Name = "Ray3d";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t origin = 0x0;
            static constexpr std::uintptr_t Direction = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"origin", 0x0, "StructProperty"},
            {"Direction", 0x18, "StructProperty"},
        }};
    };

    struct Ray3f
    {
        static constexpr std::string_view Name = "Ray3f";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t origin = 0x0;
            static constexpr std::uintptr_t Direction = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"origin", 0x0, "StructProperty"},
            {"Direction", 0xC, "StructProperty"},
        }};
    };

    struct RemoteObjectBytes
    {
        static constexpr std::string_view Name = "RemoteObjectBytes";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Bytes = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Bytes", 0x0, "ArrayProperty"},
        }};
    };

    struct RemoteObjectData
    {
        static constexpr std::string_view Name = "RemoteObjectData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t MigrationId = 0x0;
            static constexpr std::uintptr_t Tables = 0x8;
            static constexpr std::uintptr_t SerializedObjectHeaders = 0x38;
            static constexpr std::uintptr_t Bytes = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"MigrationId", 0x0, "StructProperty"},
            {"Tables", 0x8, "StructProperty"},
            {"SerializedObjectHeaders", 0x38, "ArrayProperty"},
            {"Bytes", 0x48, "ArrayProperty"},
        }};
    };

    struct RemoteObjectId
    {
        static constexpr std::string_view Name = "RemoteObjectId";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ID = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ID", 0x0, "UInt64Property"},
        }};
    };

    struct RemoteObjectNameTables
    {
        static constexpr std::string_view Name = "RemoteObjectNameTables";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Names = 0x0;
            static constexpr std::uintptr_t RemoteIds = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Names", 0x0, "ArrayProperty"},
            {"RemoteIds", 0x10, "ArrayProperty"},
        }};
    };

    struct RemoteObjectPathName
    {
        static constexpr std::string_view Name = "RemoteObjectPathName";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RemoteObjectNameTables";
        struct Offsets
        {
            static constexpr std::uintptr_t Names = 0x0;
            static constexpr std::uintptr_t RemoteIds = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Names", 0x0, "ArrayProperty"},
            {"RemoteIds", 0x10, "ArrayProperty"},
        }};
    };

    struct RemoteObjectReference
    {
        static constexpr std::string_view Name = "RemoteObjectReference";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ObjectID = 0x0;
            static constexpr std::uintptr_t ServerID = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ObjectID", 0x0, "StructProperty"},
            {"ServerID", 0x8, "StructProperty"},
        }};
    };

    struct RemoteObjectTables
    {
        static constexpr std::string_view Name = "RemoteObjectTables";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RemoteObjectNameTables";
        struct Offsets
        {
            static constexpr std::uintptr_t PathNames = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PathNames", 0x20, "ArrayProperty"},
        }};
    };

    struct RemoteServerId
    {
        static constexpr std::string_view Name = "RemoteServerId";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ID = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ID", 0x0, "UInt32Property"},
        }};
    };

    struct RemoteTransactionId
    {
        static constexpr std::string_view Name = "RemoteTransactionId";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ID = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ID", 0x0, "UInt32Property"},
        }};
    };

    struct RemoteWorkPriority
    {
        static constexpr std::string_view Name = "RemoteWorkPriority";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t PackedData = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PackedData", 0x0, "UInt64Property"},
        }};
    };

    struct Rotator
    {
        static constexpr std::string_view Name = "Rotator";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Pitch = 0x0;
            static constexpr std::uintptr_t Yaw = 0x8;
            static constexpr std::uintptr_t Roll = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Pitch", 0x0, "DoubleProperty"},
            {"Yaw", 0x8, "DoubleProperty"},
            {"Roll", 0x10, "DoubleProperty"},
        }};
    };

    struct Rotator3d
    {
        static constexpr std::string_view Name = "Rotator3d";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Pitch = 0x0;
            static constexpr std::uintptr_t Yaw = 0x8;
            static constexpr std::uintptr_t Roll = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Pitch", 0x0, "DoubleProperty"},
            {"Yaw", 0x8, "DoubleProperty"},
            {"Roll", 0x10, "DoubleProperty"},
        }};
    };

    struct Rotator3f
    {
        static constexpr std::string_view Name = "Rotator3f";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Pitch = 0x0;
            static constexpr std::uintptr_t Yaw = 0x4;
            static constexpr std::uintptr_t Roll = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Pitch", 0x0, "FloatProperty"},
            {"Yaw", 0x4, "FloatProperty"},
            {"Roll", 0x8, "FloatProperty"},
        }};
    };

    struct ScriptExceptionCaptureScope
    {
        static constexpr std::string_view Name = "ScriptExceptionCaptureScope";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "CallFunctionInternal",
        }};
    };

    struct ScriptStruct
    {
        static constexpr std::string_view Name = "ScriptStruct";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Struct";
        struct Offsets
        {
            static constexpr std::uintptr_t SuperStruct = 0x40;
            static constexpr std::uintptr_t ScriptAndPropertyObjectReferences = 0x98;
            static constexpr std::uintptr_t Children = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SuperStruct", 0x40, "ObjectProperty"},
            {"ScriptAndPropertyObjectReferences", 0x98, "ArrayProperty"},
            {"Children", 0xA8, "ObjectProperty"},
        }};
    };

    struct SetProperty
    {
        static constexpr std::string_view Name = "SetProperty";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Property";
        struct Offsets
        {
            static constexpr std::uintptr_t ElementProp = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ElementProp", 0x70, "ObjectProperty"},
        }};
    };

    struct SharedStruct
    {
        static constexpr std::string_view Name = "SharedStruct";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SoftClassPath
    {
        static constexpr std::string_view Name = "SoftClassPath";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "SoftObjectPath";
        struct Offsets
        {
            static constexpr std::uintptr_t AssetPath = 0x0;
            static constexpr std::uintptr_t SubPathString = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"AssetPath", 0x0, "StructProperty"},
            {"SubPathString", 0x8, "Utf8StrProperty"},
        }};
    };

    struct SoftClassProperty
    {
        static constexpr std::string_view Name = "SoftClassProperty";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SoftObjectProperty";
        struct Offsets
        {
            static constexpr std::uintptr_t MetaClass = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MetaClass", 0x78, "ClassProperty"},
        }};
    };

    struct SoftObjectPath
    {
        static constexpr std::string_view Name = "SoftObjectPath";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t AssetPath = 0x0;
            static constexpr std::uintptr_t SubPathString = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"AssetPath", 0x0, "StructProperty"},
            {"SubPathString", 0x8, "Utf8StrProperty"},
        }};
    };

    struct SoftObjectProperty
    {
        static constexpr std::string_view Name = "SoftObjectProperty";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ObjectPropertyBase";
        struct Offsets
        {
            static constexpr std::uintptr_t PropertyClass = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PropertyClass", 0x70, "ClassProperty"},
        }};
    };

    struct SolarisProfilingData
    {
        static constexpr std::string_view Name = "SolarisProfilingData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SparseDelegateFunction
    {
        static constexpr std::string_view Name = "SparseDelegateFunction";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelegateFunction";
        struct Offsets
        {
            static constexpr std::uintptr_t SuperStruct = 0x40;
            static constexpr std::uintptr_t ScriptAndPropertyObjectReferences = 0x98;
            static constexpr std::uintptr_t Children = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SuperStruct", 0x40, "ObjectProperty"},
            {"ScriptAndPropertyObjectReferences", 0x98, "ArrayProperty"},
            {"Children", 0xA8, "ObjectProperty"},
        }};
    };

    struct Sphere
    {
        static constexpr std::string_view Name = "Sphere";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Center = 0x0;
            static constexpr std::uintptr_t W = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Center", 0x0, "StructProperty"},
            {"W", 0x18, "DoubleProperty"},
        }};
    };

    struct Sphere3d
    {
        static constexpr std::string_view Name = "Sphere3d";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Center = 0x0;
            static constexpr std::uintptr_t W = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Center", 0x0, "StructProperty"},
            {"W", 0x18, "DoubleProperty"},
        }};
    };

    struct Sphere3f
    {
        static constexpr std::string_view Name = "Sphere3f";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Center = 0x0;
            static constexpr std::uintptr_t W = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Center", 0x0, "StructProperty"},
            {"W", 0xC, "FloatProperty"},
        }};
    };

    struct StrProperty
    {
        static constexpr std::string_view Name = "StrProperty";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Property";
        struct Offsets
        {
            static constexpr std::uintptr_t Next = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Next", 0x28, "ObjectProperty"},
        }};
    };

    struct Struct
    {
        static constexpr std::string_view Name = "Struct";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Field";
        struct Offsets
        {
            static constexpr std::uintptr_t SuperStruct = 0x40;
            static constexpr std::uintptr_t ScriptAndPropertyObjectReferences = 0x98;
            static constexpr std::uintptr_t Children = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SuperStruct", 0x40, "ObjectProperty"},
            {"ScriptAndPropertyObjectReferences", 0x98, "ArrayProperty"},
            {"Children", 0xA8, "ObjectProperty"},
        }};
    };

    struct StructCookedMetaData
    {
        static constexpr std::string_view Name = "StructCookedMetaData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CookedMetaDataBase";
        struct Offsets
        {
            static constexpr std::uintptr_t StructMetaData = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"StructMetaData", 0x28, "StructProperty"},
        }};
    };

    struct StructCookedMetaDataStore
    {
        static constexpr std::string_view Name = "StructCookedMetaDataStore";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ObjectMetaData = 0x0;
            static constexpr std::uintptr_t PropertiesMetaData = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ObjectMetaData", 0x0, "StructProperty"},
            {"PropertiesMetaData", 0x10, "MapProperty"},
        }};
    };

    struct StructProperty
    {
        static constexpr std::string_view Name = "StructProperty";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Property";
        struct Offsets
        {
            static constexpr std::uintptr_t Struct = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Struct", 0x70, "ObjectProperty"},
        }};
    };

    struct SubScriptStructOf
    {
        static constexpr std::string_view Name = "SubScriptStructOf";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ScriptStruct = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ScriptStruct", 0x0, "ObjectProperty"},
        }};
    };

    struct TemplateString
    {
        static constexpr std::string_view Name = "TemplateString";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Template = 0x0;
            static constexpr std::uintptr_t Resolved = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Template", 0x0, "StrProperty"},
            {"Resolved", 0x10, "TextProperty"},
        }};
    };

    struct TestUndeclaredScriptStructObjectReferencesTest
    {
        static constexpr std::string_view Name = "TestUndeclaredScriptStructObjectReferencesTest";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t StrongObjectPointer = 0x0;
            static constexpr std::uintptr_t SoftObjectPointer = 0x8;
            static constexpr std::uintptr_t SoftObjectPath = 0x28;
            static constexpr std::uintptr_t WeakObjectPointer = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"StrongObjectPointer", 0x0, "ObjectProperty"},
            {"SoftObjectPointer", 0x8, "SoftObjectProperty"},
            {"SoftObjectPath", 0x28, "StructProperty"},
            {"WeakObjectPointer", 0x40, "WeakObjectProperty"},
        }};
    };

    struct TestUninitializedScriptStructMembersTest
    {
        static constexpr std::string_view Name = "TestUninitializedScriptStructMembersTest";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t UninitializedObjectReference = 0x0;
            static constexpr std::uintptr_t InitializedObjectReference = 0x8;
            static constexpr std::uintptr_t UnusedValue = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"UninitializedObjectReference", 0x0, "ObjectProperty"},
            {"InitializedObjectReference", 0x8, "ObjectProperty"},
            {"UnusedValue", 0x10, "FloatProperty"},
        }};
    };

    struct TextBuffer
    {
        static constexpr std::string_view Name = "TextBuffer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct TextProperty
    {
        static constexpr std::string_view Name = "TextProperty";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Property";
        struct Offsets
        {
            static constexpr std::uintptr_t Next = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Next", 0x28, "ObjectProperty"},
        }};
    };

    struct Timecode
    {
        static constexpr std::string_view Name = "Timecode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Hours = 0x0;
            static constexpr std::uintptr_t Minutes = 0x4;
            static constexpr std::uintptr_t Seconds = 0x8;
            static constexpr std::uintptr_t Frames = 0xC;
            static constexpr std::uintptr_t SubFrame = 0x10;
            static constexpr std::uintptr_t bDropFrameFormat = 0x14;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Hours", 0x0, "IntProperty"},
            {"Minutes", 0x4, "IntProperty"},
            {"Seconds", 0x8, "IntProperty"},
            {"Frames", 0xC, "IntProperty"},
            {"SubFrame", 0x10, "FloatProperty"},
            {"bDropFrameFormat", 0x14, "BoolProperty"},
        }};
    };

    struct Timespan
    {
        static constexpr std::string_view Name = "Timespan";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Ticks = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Ticks", 0x0, "Int64Property"},
        }};
    };

    struct TopLevelAssetPath
    {
        static constexpr std::string_view Name = "TopLevelAssetPath";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t PackageName = 0x0;
            static constexpr std::uintptr_t AssetName = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PackageName", 0x0, "NameProperty"},
            {"AssetName", 0x4, "NameProperty"},
        }};
    };

    struct Transform
    {
        static constexpr std::string_view Name = "Transform";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Rotation = 0x0;
            static constexpr std::uintptr_t Translation = 0x20;
            static constexpr std::uintptr_t Scale3D = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Rotation", 0x0, "StructProperty"},
            {"Translation", 0x20, "StructProperty"},
            {"Scale3D", 0x40, "StructProperty"},
        }};
    };

    struct Transform3d
    {
        static constexpr std::string_view Name = "Transform3d";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Rotation = 0x0;
            static constexpr std::uintptr_t Translation = 0x20;
            static constexpr std::uintptr_t Scale3D = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Rotation", 0x0, "StructProperty"},
            {"Translation", 0x20, "StructProperty"},
            {"Scale3D", 0x40, "StructProperty"},
        }};
    };

    struct Transform3f
    {
        static constexpr std::string_view Name = "Transform3f";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Rotation = 0x0;
            static constexpr std::uintptr_t Translation = 0x10;
            static constexpr std::uintptr_t Scale3D = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Rotation", 0x0, "StructProperty"},
            {"Translation", 0x10, "StructProperty"},
            {"Scale3D", 0x20, "StructProperty"},
        }};
    };

    struct TwoVectors
    {
        static constexpr std::string_view Name = "TwoVectors";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t V1 = 0x0;
            static constexpr std::uintptr_t V2 = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"V1", 0x0, "StructProperty"},
            {"V2", 0x18, "StructProperty"},
        }};
    };

    struct UInt16Property
    {
        static constexpr std::string_view Name = "UInt16Property";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NumericProperty";
        struct Offsets
        {
            static constexpr std::uintptr_t Next = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Next", 0x28, "ObjectProperty"},
        }};
    };

    struct UInt32Property
    {
        static constexpr std::string_view Name = "UInt32Property";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NumericProperty";
        struct Offsets
        {
            static constexpr std::uintptr_t Next = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Next", 0x28, "ObjectProperty"},
        }};
    };

    struct UInt64Property
    {
        static constexpr std::string_view Name = "UInt64Property";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NumericProperty";
        struct Offsets
        {
            static constexpr std::uintptr_t Next = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Next", 0x28, "ObjectProperty"},
        }};
    };

    struct Uint32Point
    {
        static constexpr std::string_view Name = "Uint32Point";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t X = 0x0;
            static constexpr std::uintptr_t Y = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"X", 0x0, "IntProperty"},
            {"Y", 0x4, "IntProperty"},
        }};
    };

    struct Uint32Rect
    {
        static constexpr std::string_view Name = "Uint32Rect";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t min = 0x0;
            static constexpr std::uintptr_t max = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"min", 0x0, "StructProperty"},
            {"max", 0x8, "StructProperty"},
        }};
    };

    struct Uint32Vector
    {
        static constexpr std::string_view Name = "Uint32Vector";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t X = 0x0;
            static constexpr std::uintptr_t Y = 0x4;
            static constexpr std::uintptr_t Z = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"X", 0x0, "UInt32Property"},
            {"Y", 0x4, "UInt32Property"},
            {"Z", 0x8, "UInt32Property"},
        }};
    };

    struct Uint32Vector2
    {
        static constexpr std::string_view Name = "Uint32Vector2";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t X = 0x0;
            static constexpr std::uintptr_t Y = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"X", 0x0, "UInt32Property"},
            {"Y", 0x4, "UInt32Property"},
        }};
    };

    struct Uint32Vector4
    {
        static constexpr std::string_view Name = "Uint32Vector4";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t X = 0x0;
            static constexpr std::uintptr_t Y = 0x4;
            static constexpr std::uintptr_t Z = 0x8;
            static constexpr std::uintptr_t W = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"X", 0x0, "UInt32Property"},
            {"Y", 0x4, "UInt32Property"},
            {"Z", 0x8, "UInt32Property"},
            {"W", 0xC, "UInt32Property"},
        }};
    };

    struct Uint64Point
    {
        static constexpr std::string_view Name = "Uint64Point";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t X = 0x0;
            static constexpr std::uintptr_t Y = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"X", 0x0, "Int64Property"},
            {"Y", 0x8, "Int64Property"},
        }};
    };

    struct Uint64Rect
    {
        static constexpr std::string_view Name = "Uint64Rect";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t min = 0x0;
            static constexpr std::uintptr_t max = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"min", 0x0, "StructProperty"},
            {"max", 0x10, "StructProperty"},
        }};
    };

    struct Uint64Vector
    {
        static constexpr std::string_view Name = "Uint64Vector";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t X = 0x0;
            static constexpr std::uintptr_t Y = 0x8;
            static constexpr std::uintptr_t Z = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"X", 0x0, "UInt64Property"},
            {"Y", 0x8, "UInt64Property"},
            {"Z", 0x10, "UInt64Property"},
        }};
    };

    struct Uint64Vector2
    {
        static constexpr std::string_view Name = "Uint64Vector2";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t X = 0x0;
            static constexpr std::uintptr_t Y = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"X", 0x0, "UInt64Property"},
            {"Y", 0x8, "UInt64Property"},
        }};
    };

    struct Uint64Vector4
    {
        static constexpr std::string_view Name = "Uint64Vector4";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t X = 0x0;
            static constexpr std::uintptr_t Y = 0x8;
            static constexpr std::uintptr_t Z = 0x10;
            static constexpr std::uintptr_t W = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"X", 0x0, "UInt64Property"},
            {"Y", 0x8, "UInt64Property"},
            {"Z", 0x10, "UInt64Property"},
            {"W", 0x18, "UInt64Property"},
        }};
    };

    struct UintPoint
    {
        static constexpr std::string_view Name = "UintPoint";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t X = 0x0;
            static constexpr std::uintptr_t Y = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"X", 0x0, "IntProperty"},
            {"Y", 0x4, "IntProperty"},
        }};
    };

    struct UintRect
    {
        static constexpr std::string_view Name = "UintRect";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t min = 0x0;
            static constexpr std::uintptr_t max = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"min", 0x0, "StructProperty"},
            {"max", 0x8, "StructProperty"},
        }};
    };

    struct UintVector
    {
        static constexpr std::string_view Name = "UintVector";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t X = 0x0;
            static constexpr std::uintptr_t Y = 0x4;
            static constexpr std::uintptr_t Z = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"X", 0x0, "UInt32Property"},
            {"Y", 0x4, "UInt32Property"},
            {"Z", 0x8, "UInt32Property"},
        }};
    };

    struct UintVector2
    {
        static constexpr std::string_view Name = "UintVector2";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t X = 0x0;
            static constexpr std::uintptr_t Y = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"X", 0x0, "UInt32Property"},
            {"Y", 0x4, "UInt32Property"},
        }};
    };

    struct UintVector4
    {
        static constexpr std::string_view Name = "UintVector4";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t X = 0x0;
            static constexpr std::uintptr_t Y = 0x4;
            static constexpr std::uintptr_t Z = 0x8;
            static constexpr std::uintptr_t W = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"X", 0x0, "UInt32Property"},
            {"Y", 0x4, "UInt32Property"},
            {"Z", 0x8, "UInt32Property"},
            {"W", 0xC, "UInt32Property"},
        }};
    };

    struct UserDefinedPropertyID
    {
        static constexpr std::string_view Name = "UserDefinedPropertyID";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ID = 0x0;
            static constexpr std::uintptr_t Name = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ID", 0x0, "StructProperty"},
            {"Name", 0x10, "NameProperty"},
        }};
    };

    struct UserDefinedStruct
    {
        static constexpr std::string_view Name = "UserDefinedStruct";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ScriptStruct";
        struct Offsets
        {
            static constexpr std::uintptr_t Status = 0xC8;
            static constexpr std::uintptr_t Guid = 0xCC;
            static constexpr std::uintptr_t PropertyIDs = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Status", 0xC8, "ByteProperty"},
            {"Guid", 0xCC, "StructProperty"},
            {"PropertyIDs", 0xE0, "ArrayProperty"},
        }};
    };

    struct UserDefinedStructEditorDataBase
    {
        static constexpr std::string_view Name = "UserDefinedStructEditorDataBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct Vector
    {
        static constexpr std::string_view Name = "Vector";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t X = 0x0;
            static constexpr std::uintptr_t Y = 0x8;
            static constexpr std::uintptr_t Z = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"X", 0x0, "DoubleProperty"},
            {"Y", 0x8, "DoubleProperty"},
            {"Z", 0x10, "DoubleProperty"},
        }};
    };

    struct Vector2D
    {
        static constexpr std::string_view Name = "Vector2D";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t X = 0x0;
            static constexpr std::uintptr_t Y = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"X", 0x0, "DoubleProperty"},
            {"Y", 0x8, "DoubleProperty"},
        }};
    };

    struct Vector2f
    {
        static constexpr std::string_view Name = "Vector2f";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t X = 0x0;
            static constexpr std::uintptr_t Y = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"X", 0x0, "FloatProperty"},
            {"Y", 0x4, "FloatProperty"},
        }};
    };

    struct Vector3d
    {
        static constexpr std::string_view Name = "Vector3d";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t X = 0x0;
            static constexpr std::uintptr_t Y = 0x8;
            static constexpr std::uintptr_t Z = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"X", 0x0, "DoubleProperty"},
            {"Y", 0x8, "DoubleProperty"},
            {"Z", 0x10, "DoubleProperty"},
        }};
    };

    struct Vector3f
    {
        static constexpr std::string_view Name = "Vector3f";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t X = 0x0;
            static constexpr std::uintptr_t Y = 0x4;
            static constexpr std::uintptr_t Z = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"X", 0x0, "FloatProperty"},
            {"Y", 0x4, "FloatProperty"},
            {"Z", 0x8, "FloatProperty"},
        }};
    };

    struct Vector4
    {
        static constexpr std::string_view Name = "Vector4";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t X = 0x0;
            static constexpr std::uintptr_t Y = 0x8;
            static constexpr std::uintptr_t Z = 0x10;
            static constexpr std::uintptr_t W = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"X", 0x0, "DoubleProperty"},
            {"Y", 0x8, "DoubleProperty"},
            {"Z", 0x10, "DoubleProperty"},
            {"W", 0x18, "DoubleProperty"},
        }};
    };

    struct Vector4d
    {
        static constexpr std::string_view Name = "Vector4d";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t X = 0x0;
            static constexpr std::uintptr_t Y = 0x8;
            static constexpr std::uintptr_t Z = 0x10;
            static constexpr std::uintptr_t W = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"X", 0x0, "DoubleProperty"},
            {"Y", 0x8, "DoubleProperty"},
            {"Z", 0x10, "DoubleProperty"},
            {"W", 0x18, "DoubleProperty"},
        }};
    };

    struct Vector4f
    {
        static constexpr std::string_view Name = "Vector4f";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t X = 0x0;
            static constexpr std::uintptr_t Y = 0x4;
            static constexpr std::uintptr_t Z = 0x8;
            static constexpr std::uintptr_t W = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"X", 0x0, "FloatProperty"},
            {"Y", 0x4, "FloatProperty"},
            {"Z", 0x8, "FloatProperty"},
            {"W", 0xC, "FloatProperty"},
        }};
    };

    struct VerseAccessSpecifier
    {
        static constexpr std::string_view Name = "VerseAccessSpecifier";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Kind = 0x0;
            static constexpr std::uintptr_t ScopeModulePaths = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Kind", 0x0, "OptionalProperty"},
            {"ScopeModulePaths", 0x8, "ArrayProperty"},
        }};
    };

    struct VerseClass
    {
        static constexpr std::string_view Name = "VerseClass";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Class";
        struct Offsets
        {
            static constexpr std::uintptr_t SolClassFlags = 0x1A0;
            static constexpr std::uintptr_t TaskClasses = 0x1A8;
            static constexpr std::uintptr_t InitInstanceFunction = 0x1B8;
            static constexpr std::uintptr_t PersistentVars = 0x1C0;
            static constexpr std::uintptr_t SessionVars = 0x1D0;
            static constexpr std::uintptr_t VarAccessors = 0x1E0;
            static constexpr std::uintptr_t ConstructorEffects = 0x1F0;
            static constexpr std::uintptr_t MangledPackageVersePath = 0x1F4;
            static constexpr std::uintptr_t PackageRelativeVersePath = 0x200;
            static constexpr std::uintptr_t DisplayNameToUENameFunctionMap = 0x210;
            static constexpr std::uintptr_t DirectInterfaces = 0x220;
            static constexpr std::uintptr_t PropertiesWrittenByInitCDO = 0x230;
            static constexpr std::uintptr_t FunctionMangledNames = 0x240;
            static constexpr std::uintptr_t PredictsFunctionNames = 0x250;
            static constexpr std::uintptr_t PredictsVars = 0x260;
            static constexpr std::uintptr_t PropertyMetaData = 0x270;
            static constexpr std::uintptr_t VerseFields = 0x280;
        };

        inline static constexpr std::array<PropertyInfo, 17> Properties{{
            {"SolClassFlags", 0x1A0, "UInt32Property"},
            {"TaskClasses", 0x1A8, "ArrayProperty"},
            {"InitInstanceFunction", 0x1B8, "ObjectProperty"},
            {"PersistentVars", 0x1C0, "ArrayProperty"},
            {"SessionVars", 0x1D0, "ArrayProperty"},
            {"VarAccessors", 0x1E0, "MapProperty"},
            {"ConstructorEffects", 0x1F0, "EnumProperty"},
            {"MangledPackageVersePath", 0x1F4, "NameProperty"},
            {"PackageRelativeVersePath", 0x200, "StrProperty"},
            {"DisplayNameToUENameFunctionMap", 0x210, "MapProperty"},
            {"DirectInterfaces", 0x220, "ArrayProperty"},
            {"PropertiesWrittenByInitCDO", 0x230, "ArrayProperty"},
            {"FunctionMangledNames", 0x240, "MapProperty"},
            {"PredictsFunctionNames", 0x250, "ArrayProperty"},
            {"PredictsVars", 0x260, "MapProperty"},
            {"PropertyMetaData", 0x270, "MapProperty"},
            {"VerseFields", 0x280, "MapProperty"},
        }};
    };

    struct VerseClassVarAccessor
    {
        static constexpr std::string_view Name = "VerseClassVarAccessor";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Func = 0x0;
            static constexpr std::uintptr_t bIsInstanceMember = 0x8;
            static constexpr std::uintptr_t bIsFallible = 0x9;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Func", 0x0, "ObjectProperty"},
            {"bIsInstanceMember", 0x8, "BoolProperty"},
            {"bIsFallible", 0x9, "BoolProperty"},
        }};
    };

    struct VerseClassVarAccessors
    {
        static constexpr std::string_view Name = "VerseClassVarAccessors";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Getters = 0x0;
            static constexpr std::uintptr_t Setters = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Getters", 0x0, "MapProperty"},
            {"Setters", 0x10, "MapProperty"},
        }};
    };

    struct VerseDoubleConstraints
    {
        static constexpr std::string_view Name = "VerseDoubleConstraints";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ClampMin = 0x0;
            static constexpr std::uintptr_t ClampMax = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ClampMin", 0x0, "DoubleProperty"},
            {"ClampMax", 0x8, "DoubleProperty"},
        }};
    };

    struct VerseEnum
    {
        static constexpr std::string_view Name = "VerseEnum";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Enum";
        struct Offsets
        {
            static constexpr std::uintptr_t VerseEnumFlags = 0x70;
            static constexpr std::uintptr_t QualifiedName = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VerseEnumFlags", 0x70, "EnumProperty"},
            {"QualifiedName", 0x78, "Utf8StrProperty"},
        }};
    };

    struct VerseFunction
    {
        static constexpr std::string_view Name = "VerseFunction";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Function";
        struct Offsets
        {
            static constexpr std::uintptr_t PathRegistryPayload = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PathRegistryPayload", 0xF8, "ObjectProperty"},
        }};
    };

    struct VerseIntConstraints
    {
        static constexpr std::string_view Name = "VerseIntConstraints";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ClampMin = 0x0;
            static constexpr std::uintptr_t ClampMax = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ClampMin", 0x0, "OptionalProperty"},
            {"ClampMax", 0x10, "OptionalProperty"},
        }};
    };

    struct VerseModuleClass
    {
        static constexpr std::string_view Name = "VerseModuleClass";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Class";
        struct Offsets
        {
            static constexpr std::uintptr_t bHasPersistentMaps = 0x198;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bHasPersistentMaps", 0x198, "BoolProperty"},
        }};
    };

    struct VersePathRegistryPayload
    {
        static constexpr std::string_view Name = "VersePathRegistryPayload";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct VersePersistentVar
    {
        static constexpr std::string_view Name = "VersePersistentVar";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Path = 0x0;
            static constexpr std::uintptr_t RelativePath = 0x10;
            static constexpr std::uintptr_t ExternalAccess = 0x20;
            static constexpr std::uintptr_t Property = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Path", 0x0, "StrProperty"},
            {"RelativePath", 0x10, "StrProperty"},
            {"ExternalAccess", 0x20, "EnumProperty"},
            {"Property", 0x28, "FieldPathProperty"},
        }};
    };

    struct VersePropertyMetadata
    {
        static constexpr std::string_view Name = "VersePropertyMetadata";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t IntConstraints = 0x0;
            static constexpr std::uintptr_t DoubleConstraints = 0x20;
            static constexpr std::uintptr_t AccessSpecifier = 0x30;
            static constexpr std::uintptr_t AIDescription = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"IntConstraints", 0x0, "StructProperty"},
            {"DoubleConstraints", 0x20, "StructProperty"},
            {"AccessSpecifier", 0x30, "StructProperty"},
            {"AIDescription", 0x48, "StrProperty"},
        }};
    };

    struct VerseRational
    {
        static constexpr std::string_view Name = "VerseRational";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Numerator = 0x0;
            static constexpr std::uintptr_t Denominator = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Numerator", 0x0, "Int64Property"},
            {"Denominator", 0x8, "Int64Property"},
        }};
    };

    struct VerseSessionVar
    {
        static constexpr std::string_view Name = "VerseSessionVar";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Property = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Property", 0x0, "FieldPathProperty"},
        }};
    };

    struct VerseStruct
    {
        static constexpr std::string_view Name = "VerseStruct";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ScriptStruct";
        struct Offsets
        {
            static constexpr std::uintptr_t VerseClassFlags = 0xD0;
            static constexpr std::uintptr_t QualifiedName = 0xD8;
            static constexpr std::uintptr_t InitFunction = 0xE8;
            static constexpr std::uintptr_t ModuleClass = 0xF0;
            static constexpr std::uintptr_t Guid = 0xF8;
            static constexpr std::uintptr_t FactoryFunction = 0x108;
            static constexpr std::uintptr_t OverrideFactoryFunction = 0x110;
            static constexpr std::uintptr_t ConstructorEffects = 0x118;
            static constexpr std::uintptr_t PropertyMetaData = 0x120;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"VerseClassFlags", 0xD0, "UInt32Property"},
            {"QualifiedName", 0xD8, "Utf8StrProperty"},
            {"InitFunction", 0xE8, "ObjectProperty"},
            {"ModuleClass", 0xF0, "ClassProperty"},
            {"Guid", 0xF8, "StructProperty"},
            {"FactoryFunction", 0x108, "ObjectProperty"},
            {"OverrideFactoryFunction", 0x110, "ObjectProperty"},
            {"ConstructorEffects", 0x118, "EnumProperty"},
            {"PropertyMetaData", 0x120, "MapProperty"},
        }};
    };

    struct WeakObjectProperty
    {
        static constexpr std::string_view Name = "WeakObjectProperty";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ObjectPropertyBase";
        struct Offsets
        {
            static constexpr std::uintptr_t PropertyClass = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PropertyClass", 0x70, "ClassProperty"},
        }};
    };

}

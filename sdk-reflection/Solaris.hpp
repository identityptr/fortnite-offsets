#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::Solaris
{
    struct GenericElementType
    {
        static constexpr std::string_view Name = "GenericElementType";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GenericKeyType
    {
        static constexpr std::string_view Name = "GenericKeyType";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GenericValueType
    {
        static constexpr std::string_view Name = "GenericValueType";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SolarisAllowlistedAsset
    {
        static constexpr std::string_view Name = "SolarisAllowlistedAsset";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t AssetPath = 0x0;
            static constexpr std::uintptr_t MinUploadedAtFNVersion = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"AssetPath", 0x0, "StructProperty"},
            {"MinUploadedAtFNVersion", 0x18, "IntProperty"},
        }};
    };

    struct SolarisArrayLibrary
    {
        static constexpr std::string_view Name = "SolarisArrayLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 9> FunctionNames{{
            "Add",
            "Call",
            "Concat",
            "ConcatEquals",
            "Empty",
            "Length",
            "Move",
            "RefCall",
            "UnsafeCall",
        }};
    };

    struct SolarisCoroutineLibrary
    {
        static constexpr std::string_view Name = "SolarisCoroutineLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 5> FunctionNames{{
            "TaskCancel",
            "TaskComplete",
            "TaskGetReturnProperty",
            "TaskGetState",
            "TaskMake",
        }};
    };

    struct SolarisGameFeatureObserver
    {
        static constexpr std::string_view Name = "SolarisGameFeatureObserver";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SolarisGameSettings
    {
        static constexpr std::string_view Name = "SolarisGameSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Blacklist = 0x28;
            static constexpr std::uintptr_t MaxAllowedSize = 0x38;
            static constexpr std::uintptr_t ReflectionAllowlist = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Blacklist", 0x28, "ArrayProperty"},
            {"MaxAllowedSize", 0x38, "IntProperty"},
            {"ReflectionAllowlist", 0x40, "ArrayProperty"},
        }};
    };

    struct SolarisMapLibrary
    {
        static constexpr std::string_view Name = "SolarisMapLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 8> FunctionNames{{
            "Add",
            "Concat",
            "GetKeyByIndex",
            "GetNextValidIndex",
            "GetValueByIndex",
            "InitMap",
            "Length",
            "Move",
        }};
    };

    struct SolarisMathLibrary_Bool
    {
        static constexpr std::string_view Name = "SolarisMathLibrary_Bool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "Query",
        }};
    };

    struct SolarisMathLibrary_Float
    {
        static constexpr std::string_view Name = "SolarisMathLibrary_Float";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 17> FunctionNames{{
            "Add",
            "AddEquals",
            "CheckConstrainedFloat",
            "Divide",
            "DivideEquals",
            "Greater",
            "GreaterEqual",
            "Less",
            "LessEqual",
            "Multiply",
            "MultiplyEquals",
            "MultiplyFloatInt",
            "MultiplyIntFloat",
            "Negate",
            "Subtract",
            "SubtractEquals",
            "abs",
        }};
    };

    struct SolarisMathLibrary_Int
    {
        static constexpr std::string_view Name = "SolarisMathLibrary_Int";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 25> FunctionNames{{
            "Add",
            "AddEquals",
            "BitAnd",
            "BitNot",
            "BitOr",
            "BitXor",
            "CheckConstrainedInt",
            "Divide",
            "Greater",
            "GreaterEqual",
            "Less",
            "LessEqual",
            "Multiply",
            "MultiplyEquals",
            "Negate",
            "PredicateEqual",
            "PredicateGreater",
            "PredicateGreaterEqual",
            "PredicateLess",
            "PredicateLessEqual",
            "PredicateNotEqual",
            "Subtract",
            "SubtractEquals",
            "UncheckedConvertI32I64",
            "abs",
        }};
    };

    struct SolarisMathLibrary_Option
    {
        static constexpr std::string_view Name = "SolarisMathLibrary_Option";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "Make",
            "Query",
        }};
    };

    struct SolarisMathLibrary_Rational
    {
        static constexpr std::string_view Name = "SolarisMathLibrary_Rational";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 3> FunctionNames{{
            "MakeRationalFromInt",
            "ceil",
            "floor",
        }};
    };

    struct SolarisMathLibrary_String
    {
        static constexpr std::string_view Name = "SolarisMathLibrary_String";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 10> FunctionNames{{
            "Add",
            "Call",
            "Concat",
            "ConcatEquals",
            "Length",
            "Make",
            "MakeLiteral",
            "Move",
            "RefCall",
            "UncheckedCall",
        }};
    };

    struct SolarisUtilLibrary
    {
        static constexpr std::string_view Name = "SolarisUtilLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 34> FunctionNames{{
            "AccessStructMemberViaClassVarProxy",
            "AddPropertyToSubobjectExclusionList",
            "Addressof",
            "CallBlockFunctions",
            "CallClassVarProxyGetter",
            "CallClassVarProxySetter",
            "CallFinalFunctionWithContext",
            "CallFunction",
            "CheckAllocateVar",
            "CheckFunctionReportCVar",
            "CheckNativeInitializerConflict",
            "DebugReportFunction",
            "Dereference",
            "DestroyClassVarProxy",
            "DidClassVarProxyCallSucceed",
            "DynamicCastClassOrInterfaceType",
            "GetCurrentlyInstantiatedObject",
            "GetOptionValue",
            "HasInterface",
            "InstanceFunction",
            "InstantiateObject",
            "IsNonNullObject",
            "IsOptionSet",
            "MakeClassVarProxy",
            "MakeOptionFromValue",
            "MakeUnsetOption",
            "ObjectHasNoFlags",
            "PredictsGetVarRef",
            "PredictsGetVarValue",
            "ReferenceIsValid",
            "ReplaceOptionValue",
            "UnsafeCast",
            "Validate",
            "WriteClassVar",
        }};
    };

    struct SolarisWeakMapLibrary
    {
        static constexpr std::string_view Name = "SolarisWeakMapLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 8> FunctionNames{{
            "Call",
            "CompletelyAssignedPersistentVarRefCall",
            "CompletelyAssignedRefCall",
            "FitsInPlayerMap",
            "PersistentVarCall",
            "PersistentVarRefCall",
            "RefCall",
            "Type",
        }};
    };

    struct VerseAssetConfig
    {
        static constexpr std::string_view Name = "VerseAssetConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t AssetType = 0x0;
            static constexpr std::uintptr_t PublicVersion = 0x10;
            static constexpr std::uintptr_t ParameterizedVersion = 0x14;
            static constexpr std::uintptr_t ParameterConfigs = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"AssetType", 0x0, "StrProperty"},
            {"PublicVersion", 0x10, "UInt32Property"},
            {"ParameterizedVersion", 0x14, "UInt32Property"},
            {"ParameterConfigs", 0x18, "ArrayProperty"},
        }};
    };

    struct VerseAssetParameterConfig
    {
        static constexpr std::string_view Name = "VerseAssetParameterConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ParameterType = 0x0;
            static constexpr std::uintptr_t PublicVersion = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ParameterType", 0x0, "StrProperty"},
            {"PublicVersion", 0x10, "UInt32Property"},
        }};
    };

    struct VerseAssetsConfig
    {
        static constexpr std::string_view Name = "VerseAssetsConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t AssetConfigs = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AssetConfigs", 0x28, "ArrayProperty"},
        }};
    };

    struct VerseDebugData
    {
        static constexpr std::string_view Name = "VerseDebugData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct VerseDigest
    {
        static constexpr std::string_view Name = "VerseDigest";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t ProjectName = 0x28;
            static constexpr std::uintptr_t Variant = 0x38;
            static constexpr std::uintptr_t VerseVersion = 0x3C;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ProjectName", 0x28, "StrProperty"},
            {"Variant", 0x38, "EnumProperty"},
            {"VerseVersion", 0x3C, "UInt32Property"},
        }};
    };

    struct VerseDigestEditorOptionalData
    {
        static constexpr std::string_view Name = "VerseDigestEditorOptionalData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct VerseDynamicallyTypedValueLibrary
    {
        static constexpr std::string_view Name = "VerseDynamicallyTypedValueLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 23> FunctionNames{{
            "ConvertFromDynamicallyTypedValue",
            "ConvertToDynamicallyTypedValue",
            "DataOfDynamicallyTypedValue",
            "Equal",
            "MakeRuntimeTypeArray",
            "MakeRuntimeTypeChar32",
            "MakeRuntimeTypeChar8",
            "MakeRuntimeTypeClass",
            "MakeRuntimeTypeDynamic",
            "MakeRuntimeTypeEnum",
            "MakeRuntimeTypeFloat",
            "MakeRuntimeTypeFunction",
            "MakeRuntimeTypeInt64",
            "MakeRuntimeTypeLogic",
            "MakeRuntimeTypeMap",
            "MakeRuntimeTypeObject",
            "MakeRuntimeTypeOption",
            "MakeRuntimeTypeRational",
            "MakeRuntimeTypeReference",
            "MakeRuntimeTypeString",
            "MakeRuntimeTypeStruct",
            "MakeRuntimeTypeTuple",
            "NotEqual",
        }};
    };

    struct VersePackageContainer
    {
        static constexpr std::string_view Name = "VersePackageContainer";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
            static constexpr std::uintptr_t DirPath = 0x10;
            static constexpr std::uintptr_t PackageType = 0x20;
            static constexpr std::uintptr_t bEnableVerseAssetReflection = 0x21;
            static constexpr std::uintptr_t Settings = 0x28;
            static constexpr std::uintptr_t SourceFiles = 0x70;
            static constexpr std::uintptr_t AssetDigest = 0x80;
            static constexpr std::uintptr_t AssetDependencies = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"Name", 0x0, "StrProperty"},
            {"DirPath", 0x10, "StrProperty"},
            {"PackageType", 0x20, "EnumProperty"},
            {"bEnableVerseAssetReflection", 0x21, "BoolProperty"},
            {"Settings", 0x28, "StructProperty"},
            {"SourceFiles", 0x70, "ArrayProperty"},
            {"AssetDigest", 0x80, "OptionalProperty"},
            {"AssetDependencies", 0xC0, "ArrayProperty"},
        }};
    };

    struct VersePackageContainerSettings
    {
        static constexpr std::string_view Name = "VersePackageContainerSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t VersePath = 0x0;
            static constexpr std::uintptr_t VerseScope = 0x10;
            static constexpr std::uintptr_t VerseRole = 0x11;
            static constexpr std::uintptr_t VerseVersion = 0x14;
            static constexpr std::uintptr_t DependencyPackages = 0x20;
            static constexpr std::uintptr_t VniDestDir = 0x30;
            static constexpr std::uintptr_t bAllowExperimental = 0x40;
            static constexpr std::uintptr_t bEnableSceneGraph = 0x41;
            static constexpr std::uintptr_t bEnableSceneGraphAnimation = 0x42;
            static constexpr std::uintptr_t bEnableAssetRedirectorReflection = 0x43;
            static constexpr std::uintptr_t DefaultAssetAccessSpecifier = 0x44;
            static constexpr std::uintptr_t bEnableVNI = 0x45;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"VersePath", 0x0, "StrProperty"},
            {"VerseScope", 0x10, "EnumProperty"},
            {"VerseRole", 0x11, "EnumProperty"},
            {"VerseVersion", 0x14, "OptionalProperty"},
            {"DependencyPackages", 0x20, "ArrayProperty"},
            {"VniDestDir", 0x30, "StrProperty"},
            {"bAllowExperimental", 0x40, "BoolProperty"},
            {"bEnableSceneGraph", 0x41, "BoolProperty"},
            {"bEnableSceneGraphAnimation", 0x42, "BoolProperty"},
            {"bEnableAssetRedirectorReflection", 0x43, "BoolProperty"},
            {"DefaultAssetAccessSpecifier", 0x44, "EnumProperty"},
            {"bEnableVNI", 0x45, "BoolProperty"},
        }};
    };

    struct VerseProjectContainer
    {
        static constexpr std::string_view Name = "VerseProjectContainer";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Packages = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Packages", 0x0, "ArrayProperty"},
        }};
    };

    struct VerseSourceCode
    {
        static constexpr std::string_view Name = "VerseSourceCode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Code = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Code", 0x0, "ArrayProperty"},
        }};
    };

    struct VerseSourceFile
    {
        static constexpr std::string_view Name = "VerseSourceFile";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Filename = 0x0;
            static constexpr std::uintptr_t CodeChunks = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Filename", 0x0, "StrProperty"},
            {"CodeChunks", 0x10, "ArrayProperty"},
        }};
    };

}

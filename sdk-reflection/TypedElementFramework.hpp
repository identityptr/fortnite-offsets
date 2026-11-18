#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::TypedElementFramework
{
    struct DataStorageScopeDataTag
    {
        static constexpr std::string_view Name = "DataStorageScopeDataTag";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EditorDataStorageTag";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DescriptionColumn
    {
        static constexpr std::string_view Name = "DescriptionColumn";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EditorDataStorageColumn";
        struct Offsets
        {
            static constexpr std::uintptr_t Description = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Description", 0x0, "TextProperty"},
        }};
    };

    struct DisplayNameColumn
    {
        static constexpr std::string_view Name = "DisplayNameColumn";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EditorDataStorageColumn";
        struct Offsets
        {
            static constexpr std::uintptr_t DisplayName = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DisplayName", 0x0, "TextProperty"},
        }};
    };

    struct EditingVerseScopeEntry
    {
        static constexpr std::string_view Name = "EditingVerseScopeEntry";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t VersePath = 0x0;
            static constexpr std::uintptr_t RootRow = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VersePath", 0x0, "StrProperty"},
            {"RootRow", 0x10, "StructProperty"},
        }};
    };

    struct EditingVerseScopeStack
    {
        static constexpr std::string_view Name = "EditingVerseScopeStack";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EditorDataStorageColumn";
        struct Offsets
        {
            static constexpr std::uintptr_t Stack = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Stack", 0x0, "ArrayProperty"},
        }};
    };

    struct EditorDataStorageColumn
    {
        static constexpr std::string_view Name = "EditorDataStorageColumn";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct EditorDataStorageFactory
    {
        static constexpr std::string_view Name = "EditorDataStorageFactory";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct EditorDataStorageGuidColumn
    {
        static constexpr std::string_view Name = "EditorDataStorageGuidColumn";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EditorDataStorageColumn";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct EditorDataStorageLevelTag
    {
        static constexpr std::string_view Name = "EditorDataStorageLevelTag";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EditorDataStorageTag";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct EditorDataStoragePieObjectTag
    {
        static constexpr std::string_view Name = "EditorDataStoragePieObjectTag";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EditorDataStorageTag";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct EditorDataStorageTag
    {
        static constexpr std::string_view Name = "EditorDataStorageTag";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct EditorDataStorageUObjectIdNameColumn
    {
        static constexpr std::string_view Name = "EditorDataStorageUObjectIdNameColumn";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EditorDataStorageColumn";
        struct Offsets
        {
            static constexpr std::uintptr_t IdName = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"IdName", 0x0, "NameProperty"},
        }};
    };

    struct EditorDataStorageUiDecoratorWidgetFactoryTag
    {
        static constexpr std::string_view Name = "EditorDataStorageUiDecoratorWidgetFactoryTag";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EditorDataStorageTag";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct EditorDataStorageUrlColumn
    {
        static constexpr std::string_view Name = "EditorDataStorageUrlColumn";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EditorDataStorageColumn";
        struct Offsets
        {
            static constexpr std::uintptr_t UrlString = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"UrlString", 0x0, "StrProperty"},
        }};
    };

    struct EditorDataStorageWebImageColumn
    {
        static constexpr std::string_view Name = "EditorDataStorageWebImageColumn";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EditorDataStorageColumn";
        struct Offsets
        {
            static constexpr std::uintptr_t UrlString = 0x0;
            static constexpr std::uintptr_t Width = 0x10;
            static constexpr std::uintptr_t Height = 0x12;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"UrlString", 0x0, "StrProperty"},
            {"Width", 0x10, "UInt16Property"},
            {"Height", 0x12, "UInt16Property"},
        }};
    };

    struct EditorDataStorageWorldTag
    {
        static constexpr std::string_view Name = "EditorDataStorageWorldTag";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EditorDataStorageTag";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct EditorModeToolsScope
    {
        static constexpr std::string_view Name = "EditorModeToolsScope";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EditorDataStorageColumn";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ExpandedInUITag
    {
        static constexpr std::string_view Name = "ExpandedInUITag";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EditorDataStorageTag";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FavoriteTag
    {
        static constexpr std::string_view Name = "FavoriteTag";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EditorDataStorageTag";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FolderTag
    {
        static constexpr std::string_view Name = "FolderTag";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EditorDataStorageTag";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct HideRowFromUITag
    {
        static constexpr std::string_view Name = "HideRowFromUITag";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EditorDataStorageTag";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct HighlightTextColumn
    {
        static constexpr std::string_view Name = "HighlightTextColumn";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EditorDataStorageColumn";
        struct Offsets
        {
            static constexpr std::uintptr_t HighlightText = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"HighlightText", 0x0, "TextProperty"},
        }};
    };

    struct IsInEditingModeTag
    {
        static constexpr std::string_view Name = "IsInEditingModeTag";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EditorDataStorageTag";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct NameColumn
    {
        static constexpr std::string_view Name = "NameColumn";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EditorDataStorageColumn";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Name", 0x0, "NameProperty"},
        }};
    };

    struct ObjectOverrideColumn
    {
        static constexpr std::string_view Name = "ObjectOverrideColumn";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EditorDataStorageColumn";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SCCStatusUpdateEndedTag
    {
        static constexpr std::string_view Name = "SCCStatusUpdateEndedTag";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EditorDataStorageTag";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SCCStatusUpdateRequiredTag
    {
        static constexpr std::string_view Name = "SCCStatusUpdateRequiredTag";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EditorDataStorageTag";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SccStateColumn
    {
        static constexpr std::string_view Name = "SccStateColumn";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EditorDataStorageColumn";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SccStateDirtyTag
    {
        static constexpr std::string_view Name = "SccStateDirtyTag";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EditorDataStorageTag";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SccWidgetTag
    {
        static constexpr std::string_view Name = "SccWidgetTag";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EditorDataStorageTag";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ScopeDataVersionColumn
    {
        static constexpr std::string_view Name = "ScopeDataVersionColumn";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EditorDataStorageColumn";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ScopeRowSourceInfo
    {
        static constexpr std::string_view Name = "ScopeRowSourceInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EditorDataStorageColumn";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ScriptTypedElementHandle
    {
        static constexpr std::string_view Name = "ScriptTypedElementHandle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ScriptTypedElementListProxy
    {
        static constexpr std::string_view Name = "ScriptTypedElementListProxy";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SimpleWidgetConstructor
    {
        static constexpr std::string_view Name = "SimpleWidgetConstructor";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "TypedElementWidgetConstructor";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SlateColorColumn
    {
        static constexpr std::string_view Name = "SlateColorColumn";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EditorDataStorageColumn";
        struct Offsets
        {
            static constexpr std::uintptr_t Color = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Color", 0x0, "StructProperty"},
        }};
    };

    struct TEDSProcessorTestsReferenceColumn
    {
        static constexpr std::string_view Name = "TEDSProcessorTestsReferenceColumn";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EditorDataStorageColumn";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct TEDSProcessorTests_Linked
    {
        static constexpr std::string_view Name = "TEDSProcessorTests_Linked";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EditorDataStorageTag";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct TEDSProcessorTests_PrimaryTag
    {
        static constexpr std::string_view Name = "TEDSProcessorTests_PrimaryTag";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EditorDataStorageTag";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct TEDSProcessorTests_SecondaryTag
    {
        static constexpr std::string_view Name = "TEDSProcessorTests_SecondaryTag";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EditorDataStorageTag";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct TableRowParentColumn
    {
        static constexpr std::string_view Name = "TableRowParentColumn";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EditorDataStorageColumn";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct TedsDecoratorWidgetConstructor
    {
        static constexpr std::string_view Name = "TedsDecoratorWidgetConstructor";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "TedsWidgetConstructorBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct TedsDynamicColumn
    {
        static constexpr std::string_view Name = "TedsDynamicColumn";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ScriptStruct";
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

    struct TedsPackageDirtyTag
    {
        static constexpr std::string_view Name = "TedsPackageDirtyTag";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EditorDataStorageTag";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct TedsPrimaryPackageObjectTag
    {
        static constexpr std::string_view Name = "TedsPrimaryPackageObjectTag";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EditorDataStorageTag";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct TedsRowHandle
    {
        static constexpr std::string_view Name = "TedsRowHandle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t RowHandle = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RowHandle", 0x0, "UInt64Property"},
        }};
    };

    struct TedsTableHandle
    {
        static constexpr std::string_view Name = "TedsTableHandle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t TableHandle = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TableHandle", 0x0, "UInt64Property"},
        }};
    };

    struct TedsTypedElementColumn
    {
        static constexpr std::string_view Name = "TedsTypedElementColumn";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EditorDataStorageColumn";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct TedsWidgetConstructorBase
    {
        static constexpr std::string_view Name = "TedsWidgetConstructorBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct TedsWidgetDataColumn
    {
        static constexpr std::string_view Name = "TedsWidgetDataColumn";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EditorDataStorageColumn";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct TestColumnA
    {
        static constexpr std::string_view Name = "TestColumnA";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EditorDataStorageColumn";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct TestColumnB
    {
        static constexpr std::string_view Name = "TestColumnB";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EditorDataStorageColumn";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct TestColumnC
    {
        static constexpr std::string_view Name = "TestColumnC";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EditorDataStorageColumn";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct TestColumnD
    {
        static constexpr std::string_view Name = "TestColumnD";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EditorDataStorageColumn";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct TestColumnDynamic
    {
        static constexpr std::string_view Name = "TestColumnDynamic";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EditorDataStorageColumn";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct TestColumnE
    {
        static constexpr std::string_view Name = "TestColumnE";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EditorDataStorageColumn";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct TestColumnF
    {
        static constexpr std::string_view Name = "TestColumnF";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EditorDataStorageColumn";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct TestColumnG
    {
        static constexpr std::string_view Name = "TestColumnG";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EditorDataStorageColumn";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct TestColumnInt
    {
        static constexpr std::string_view Name = "TestColumnInt";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EditorDataStorageColumn";
        struct Offsets
        {
            static constexpr std::uintptr_t TestInt = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TestInt", 0x0, "IntProperty"},
        }};
    };

    struct TestColumnString
    {
        static constexpr std::string_view Name = "TestColumnString";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EditorDataStorageColumn";
        struct Offsets
        {
            static constexpr std::uintptr_t TestString = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TestString", 0x0, "StrProperty"},
        }};
    };

    struct TestTagColumnA
    {
        static constexpr std::string_view Name = "TestTagColumnA";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EditorDataStorageTag";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct TestTagColumnB
    {
        static constexpr std::string_view Name = "TestTagColumnB";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EditorDataStorageTag";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct TestTagColumnC
    {
        static constexpr std::string_view Name = "TestTagColumnC";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EditorDataStorageTag";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct TestTagColumnD
    {
        static constexpr std::string_view Name = "TestTagColumnD";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EditorDataStorageTag";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct TestTypedElementInterfaceA
    {
        static constexpr std::string_view Name = "TestTypedElementInterfaceA";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "GetDisplayName",
            "SetDisplayName",
        }};
    };

    struct TestTypedElementInterfaceA_ImplTyped
    {
        static constexpr std::string_view Name = "TestTypedElementInterfaceA_ImplTyped";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct TestTypedElementInterfaceA_ImplUntyped
    {
        static constexpr std::string_view Name = "TestTypedElementInterfaceA_ImplUntyped";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct TestTypedElementInterfaceB
    {
        static constexpr std::string_view Name = "TestTypedElementInterfaceB";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "MarkAsTested",
        }};
    };

    struct TestTypedElementInterfaceBAndC_Typed
    {
        static constexpr std::string_view Name = "TestTypedElementInterfaceBAndC_Typed";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct TestTypedElementInterfaceC
    {
        static constexpr std::string_view Name = "TestTypedElementInterfaceC";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "GetIsTested",
        }};
    };

    struct Test_PingPongBetweenPhaseFactory
    {
        static constexpr std::string_view Name = "Test_PingPongBetweenPhaseFactory";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EditorDataStorageFactory";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct Test_PingPongDurPhys
    {
        static constexpr std::string_view Name = "Test_PingPongDurPhys";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EditorDataStorageColumn";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x0, "UInt64Property"},
        }};
    };

    struct Test_PingPongPostPhys
    {
        static constexpr std::string_view Name = "Test_PingPongPostPhys";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EditorDataStorageColumn";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x0, "UInt64Property"},
        }};
    };

    struct Test_PingPongPrePhys
    {
        static constexpr std::string_view Name = "Test_PingPongPrePhys";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EditorDataStorageColumn";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x0, "UInt64Property"},
        }};
    };

    struct TypedElementActorTag
    {
        static constexpr std::string_view Name = "TypedElementActorTag";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EditorDataStorageTag";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct TypedElementClassDefaultObjectTag
    {
        static constexpr std::string_view Name = "TypedElementClassDefaultObjectTag";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EditorDataStorageTag";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct TypedElementClassTypeInfoColumn
    {
        static constexpr std::string_view Name = "TypedElementClassTypeInfoColumn";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EditorDataStorageColumn";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct TypedElementCounterInterface
    {
        static constexpr std::string_view Name = "TypedElementCounterInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct TypedElementExternalObjectColumn
    {
        static constexpr std::string_view Name = "TypedElementExternalObjectColumn";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EditorDataStorageColumn";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct TypedElementFloatValueCacheColumn
    {
        static constexpr std::string_view Name = "TypedElementFloatValueCacheColumn";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EditorDataStorageColumn";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x0, "FloatProperty"},
        }};
    };

    struct TypedElementHandleLibrary
    {
        static constexpr std::string_view Name = "TypedElementHandleLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 4> FunctionNames{{
            "Equal",
            "IsSet",
            "NotEqual",
            "Release",
        }};
    };

    struct TypedElementI32IntValueCacheColumn
    {
        static constexpr std::string_view Name = "TypedElementI32IntValueCacheColumn";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EditorDataStorageColumn";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x0, "IntProperty"},
        }};
    };

    struct TypedElementI64IntValueCacheColumn
    {
        static constexpr std::string_view Name = "TypedElementI64IntValueCacheColumn";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EditorDataStorageColumn";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x0, "Int64Property"},
        }};
    };

    struct TypedElementIconOverrideColumn
    {
        static constexpr std::string_view Name = "TypedElementIconOverrideColumn";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EditorDataStorageColumn";
        struct Offsets
        {
            static constexpr std::uintptr_t IconName = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"IconName", 0x0, "NameProperty"},
        }};
    };

    struct TypedElementLabelColumn
    {
        static constexpr std::string_view Name = "TypedElementLabelColumn";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EditorDataStorageColumn";
        struct Offsets
        {
            static constexpr std::uintptr_t Label = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Label", 0x0, "StrProperty"},
        }};
    };

    struct TypedElementLabelHashColumn
    {
        static constexpr std::string_view Name = "TypedElementLabelHashColumn";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EditorDataStorageColumn";
        struct Offsets
        {
            static constexpr std::uintptr_t LabelHash = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"LabelHash", 0x0, "UInt64Property"},
        }};
    };

    struct TypedElementLevelColumn
    {
        static constexpr std::string_view Name = "TypedElementLevelColumn";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EditorDataStorageColumn";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct TypedElementListLibrary
    {
        static constexpr std::string_view Name = "TypedElementListLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 20> FunctionNames{{
            "Add",
            "Append",
            "AppendList",
            "Clone",
            "Contains",
            "CountElements",
            "CountElementsOfType",
            "CreateScriptElementList",
            "Empty",
            "GetElementHandleAt",
            "GetElementHandles",
            "GetElementInterface",
            "HasElements",
            "HasElementsOfType",
            "IsValidIndex",
            "Num",
            "Remove",
            "Reserve",
            "Reset",
            "Shrink",
        }};
    };

    struct TypedElementLocalTransformColumn
    {
        static constexpr std::string_view Name = "TypedElementLocalTransformColumn";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EditorDataStorageColumn";
        struct Offsets
        {
            static constexpr std::uintptr_t Transform = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Transform", 0x0, "StructProperty"},
        }};
    };

    struct TypedElementLockTransformTag
    {
        static constexpr std::string_view Name = "TypedElementLockTransformTag";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EditorDataStorageTag";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct TypedElementLoosePropertyTag
    {
        static constexpr std::string_view Name = "TypedElementLoosePropertyTag";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EditorDataStorageTag";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct TypedElementPackageFilePathOnDiskColumn
    {
        static constexpr std::string_view Name = "TypedElementPackageFilePathOnDiskColumn";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EditorDataStorageColumn";
        struct Offsets
        {
            static constexpr std::uintptr_t FilePathOnDisk = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"FilePathOnDisk", 0x0, "StrProperty"},
        }};
    };

    struct TypedElementPackageLoadedPathColumn
    {
        static constexpr std::string_view Name = "TypedElementPackageLoadedPathColumn";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EditorDataStorageColumn";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct TypedElementPackagePathColumn
    {
        static constexpr std::string_view Name = "TypedElementPackagePathColumn";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EditorDataStorageColumn";
        struct Offsets
        {
            static constexpr std::uintptr_t Path = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Path", 0x0, "StrProperty"},
        }};
    };

    struct TypedElementPackageReference
    {
        static constexpr std::string_view Name = "TypedElementPackageReference";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EditorDataStorageColumn";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct TypedElementPackageUnresolvedReference
    {
        static constexpr std::string_view Name = "TypedElementPackageUnresolvedReference";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EditorDataStorageColumn";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct TypedElementPackageUpdatedTag
    {
        static constexpr std::string_view Name = "TypedElementPackageUpdatedTag";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EditorDataStorageTag";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct TypedElementPivotOffset
    {
        static constexpr std::string_view Name = "TypedElementPivotOffset";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EditorDataStorageColumn";
        struct Offsets
        {
            static constexpr std::uintptr_t Offset = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Offset", 0x0, "StructProperty"},
        }};
    };

    struct TypedElementPropertyBagPlaceholderTag
    {
        static constexpr std::string_view Name = "TypedElementPropertyBagPlaceholderTag";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EditorDataStorageTag";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct TypedElementRegistry
    {
        static constexpr std::string_view Name = "TypedElementRegistry";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "GetElementInterface",
            "GetInstance",
        }};
    };

    struct TypedElementRowReferenceColumn
    {
        static constexpr std::string_view Name = "TypedElementRowReferenceColumn";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EditorDataStorageColumn";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct TypedElementScriptStructTypeInfoColumn
    {
        static constexpr std::string_view Name = "TypedElementScriptStructTypeInfoColumn";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EditorDataStorageColumn";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct TypedElementSelectionColumn
    {
        static constexpr std::string_view Name = "TypedElementSelectionColumn";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EditorDataStorageColumn";
        struct Offsets
        {
            static constexpr std::uintptr_t SelectionSet = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SelectionSet", 0x0, "NameProperty"},
        }};
    };

    struct TypedElementSlateWidgetReferenceColumn
    {
        static constexpr std::string_view Name = "TypedElementSlateWidgetReferenceColumn";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EditorDataStorageColumn";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct TypedElementSlateWidgetReferenceDeletesRowTag
    {
        static constexpr std::string_view Name = "TypedElementSlateWidgetReferenceDeletesRowTag";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EditorDataStorageTag";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct TypedElementSyncBackToWorldTag
    {
        static constexpr std::string_view Name = "TypedElementSyncBackToWorldTag";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EditorDataStorageTag";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct TypedElementSyncFromWorldInteractiveTag
    {
        static constexpr std::string_view Name = "TypedElementSyncFromWorldInteractiveTag";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EditorDataStorageTag";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct TypedElementSyncFromWorldTag
    {
        static constexpr std::string_view Name = "TypedElementSyncFromWorldTag";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EditorDataStorageTag";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct TypedElementTypeInfoDisplayOverrideColumn
    {
        static constexpr std::string_view Name = "TypedElementTypeInfoDisplayOverrideColumn";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EditorDataStorageColumn";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct TypedElementU32IntValueCacheColumn
    {
        static constexpr std::string_view Name = "TypedElementU32IntValueCacheColumn";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EditorDataStorageColumn";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x0, "UInt32Property"},
        }};
    };

    struct TypedElementU64IntValueCacheColumn
    {
        static constexpr std::string_view Name = "TypedElementU64IntValueCacheColumn";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EditorDataStorageColumn";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x0, "UInt64Property"},
        }};
    };

    struct TypedElementUObjectColumn
    {
        static constexpr std::string_view Name = "TypedElementUObjectColumn";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EditorDataStorageColumn";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct TypedElementUObjectIdColumn
    {
        static constexpr std::string_view Name = "TypedElementUObjectIdColumn";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EditorDataStorageColumn";
        struct Offsets
        {
            static constexpr std::uintptr_t ID = 0x0;
            static constexpr std::uintptr_t SerialNumber = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ID", 0x0, "UInt32Property"},
            {"SerialNumber", 0x4, "IntProperty"},
        }};
    };

    struct TypedElementViewportOutlineColorColumn
    {
        static constexpr std::string_view Name = "TypedElementViewportOutlineColorColumn";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EditorDataStorageColumn";
        struct Offsets
        {
            static constexpr std::uintptr_t SelectionOutlineColorIndex = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SelectionOutlineColorIndex", 0x0, "ByteProperty"},
        }};
    };

    struct TypedElementViewportOverlayColorColumn
    {
        static constexpr std::string_view Name = "TypedElementViewportOverlayColorColumn";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EditorDataStorageColumn";
        struct Offsets
        {
            static constexpr std::uintptr_t OverlayColor = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OverlayColor", 0x0, "StructProperty"},
        }};
    };

    struct TypedElementViewportOverlayColorDirtyFlag
    {
        static constexpr std::string_view Name = "TypedElementViewportOverlayColorDirtyFlag";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EditorDataStorageTag";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct TypedElementWidgetConstructor
    {
        static constexpr std::string_view Name = "TypedElementWidgetConstructor";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "TedsWidgetConstructorBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct TypedElementWorldColumn
    {
        static constexpr std::string_view Name = "TypedElementWorldColumn";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EditorDataStorageColumn";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct UnresolvedTableRowParentColumn
    {
        static constexpr std::string_view Name = "UnresolvedTableRowParentColumn";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EditorDataStorageColumn";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct VisibilityChangedTag
    {
        static constexpr std::string_view Name = "VisibilityChangedTag";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EditorDataStorageTag";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct VisibleInEditorColumn
    {
        static constexpr std::string_view Name = "VisibleInEditorColumn";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EditorDataStorageColumn";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsVisibleInEditor = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bIsVisibleInEditor", 0x0, "BoolProperty"},
        }};
    };

    struct WidgetConstructorNameColumn
    {
        static constexpr std::string_view Name = "WidgetConstructorNameColumn";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EditorDataStorageColumn";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Name", 0x0, "NameProperty"},
        }};
    };

    struct WidgetFactoryColumn
    {
        static constexpr std::string_view Name = "WidgetFactoryColumn";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EditorDataStorageColumn";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct WidgetFactoryConditionsColumn
    {
        static constexpr std::string_view Name = "WidgetFactoryConditionsColumn";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EditorDataStorageColumn";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct WidgetFactoryConstructorColumn
    {
        static constexpr std::string_view Name = "WidgetFactoryConstructorColumn";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EditorDataStorageColumn";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct WidgetFactoryConstructorTypeInfoColumn
    {
        static constexpr std::string_view Name = "WidgetFactoryConstructorTypeInfoColumn";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EditorDataStorageColumn";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct WidgetPurposeColumn
    {
        static constexpr std::string_view Name = "WidgetPurposeColumn";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EditorDataStorageColumn";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct WidgetPurposeNameColumn
    {
        static constexpr std::string_view Name = "WidgetPurposeNameColumn";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EditorDataStorageColumn";
        struct Offsets
        {
            static constexpr std::uintptr_t Namespace = 0x0;
            static constexpr std::uintptr_t Name = 0x4;
            static constexpr std::uintptr_t Frame = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Namespace", 0x0, "NameProperty"},
            {"Name", 0x4, "NameProperty"},
            {"Frame", 0x8, "NameProperty"},
        }};
    };

    struct WidgetPurposeReferenceColumn
    {
        static constexpr std::string_view Name = "WidgetPurposeReferenceColumn";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EditorDataStorageColumn";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}

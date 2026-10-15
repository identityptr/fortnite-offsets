/**
 * decamp dumper generated SDK
 * Package: /Script/TypedElementFramework
 */
#pragma once
#include "Basic.h"

// /Script/TypedElementFramework.DataStorageScopeDataTag
// Kind: ScriptStruct; super: EditorDataStorageTag
struct FDataStorageScopeDataTag
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TypedElementFramework.DescriptionColumn
// Kind: ScriptStruct; super: EditorDataStorageColumn
struct FDescriptionColumn
{
public:
    FText Description; // 0x0000 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(FDescriptionColumn, Description) == 0, "Offset mismatch for FDescriptionColumn::Description");

// /Script/TypedElementFramework.DisplayNameColumn
// Kind: ScriptStruct; super: EditorDataStorageColumn
struct FDisplayNameColumn
{
public:
    FText DisplayName; // 0x0000 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(FDisplayNameColumn, DisplayName) == 0, "Offset mismatch for FDisplayNameColumn::DisplayName");

// /Script/TypedElementFramework.EditingVerseScope
// Kind: ScriptStruct; super: EditorDataStorageColumn
struct FEditingVerseScope
{
public:
    FString EditingScopeVersePath; // 0x0000 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FEditingVerseScope, EditingScopeVersePath) == 0, "Offset mismatch for FEditingVerseScope::EditingScopeVersePath");

// /Script/TypedElementFramework.EditorDataStorageColumn
// Kind: ScriptStruct; super: none
struct FEditorDataStorageColumn
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TypedElementFramework.EditorDataStorageGuidColumn
// Kind: ScriptStruct; super: EditorDataStorageColumn
struct FEditorDataStorageGuidColumn
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TypedElementFramework.EditorDataStorageLevelTag
// Kind: ScriptStruct; super: EditorDataStorageTag
struct FEditorDataStorageLevelTag
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TypedElementFramework.EditorDataStoragePieObjectTag
// Kind: ScriptStruct; super: EditorDataStorageTag
struct FEditorDataStoragePieObjectTag
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TypedElementFramework.EditorDataStorageTag
// Kind: ScriptStruct; super: none
struct FEditorDataStorageTag
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TypedElementFramework.EditorDataStorageUObjectIdNameColumn
// Kind: ScriptStruct; super: EditorDataStorageColumn
struct FEditorDataStorageUObjectIdNameColumn
{
public:
    FName IdName; // 0x0000 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FEditorDataStorageUObjectIdNameColumn, IdName) == 0, "Offset mismatch for FEditorDataStorageUObjectIdNameColumn::IdName");

// /Script/TypedElementFramework.EditorDataStorageUiDecoratorWidgetFactoryTag
// Kind: ScriptStruct; super: EditorDataStorageTag
struct FEditorDataStorageUiDecoratorWidgetFactoryTag
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TypedElementFramework.EditorDataStorageUrlColumn
// Kind: ScriptStruct; super: EditorDataStorageColumn
struct FEditorDataStorageUrlColumn
{
public:
    FString UrlString; // 0x0000 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FEditorDataStorageUrlColumn, UrlString) == 0, "Offset mismatch for FEditorDataStorageUrlColumn::UrlString");

// /Script/TypedElementFramework.EditorDataStorageWebImageColumn
// Kind: ScriptStruct; super: EditorDataStorageColumn
struct FEditorDataStorageWebImageColumn
{
public:
    FString UrlString; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint16_t Width; // 0x0010 (Size: 0x2, Type: UInt16Property)
    std::uint16_t Height; // 0x0012 (Size: 0x2, Type: UInt16Property)
};

static_assert(offsetof(FEditorDataStorageWebImageColumn, UrlString) == 0, "Offset mismatch for FEditorDataStorageWebImageColumn::UrlString");
static_assert(offsetof(FEditorDataStorageWebImageColumn, Width) == 16, "Offset mismatch for FEditorDataStorageWebImageColumn::Width");
static_assert(offsetof(FEditorDataStorageWebImageColumn, Height) == 18, "Offset mismatch for FEditorDataStorageWebImageColumn::Height");

// /Script/TypedElementFramework.EditorDataStorageWorldTag
// Kind: ScriptStruct; super: EditorDataStorageTag
struct FEditorDataStorageWorldTag
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TypedElementFramework.ExpandedInUITag
// Kind: ScriptStruct; super: EditorDataStorageTag
struct FExpandedInUITag
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TypedElementFramework.FavoriteTag
// Kind: ScriptStruct; super: EditorDataStorageTag
struct FFavoriteTag
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TypedElementFramework.FolderTag
// Kind: ScriptStruct; super: EditorDataStorageTag
struct FFolderTag
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TypedElementFramework.HideRowFromUITag
// Kind: ScriptStruct; super: EditorDataStorageTag
struct FHideRowFromUITag
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TypedElementFramework.HighlightTextColumn
// Kind: ScriptStruct; super: EditorDataStorageColumn
struct FHighlightTextColumn
{
public:
    FText HighlightText; // 0x0000 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(FHighlightTextColumn, HighlightText) == 0, "Offset mismatch for FHighlightTextColumn::HighlightText");

// /Script/TypedElementFramework.IsInEditingModeTag
// Kind: ScriptStruct; super: EditorDataStorageTag
struct FIsInEditingModeTag
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TypedElementFramework.NameColumn
// Kind: ScriptStruct; super: EditorDataStorageColumn
struct FNameColumn
{
public:
    FName Name; // 0x0000 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FNameColumn, Name) == 0, "Offset mismatch for FNameColumn::Name");

// /Script/TypedElementFramework.ObjectOverrideColumn
// Kind: ScriptStruct; super: EditorDataStorageColumn
struct FObjectOverrideColumn
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TypedElementFramework.SCCStatusUpdateEndedTag
// Kind: ScriptStruct; super: EditorDataStorageTag
struct FSCCStatusUpdateEndedTag
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TypedElementFramework.SCCStatusUpdateRequiredTag
// Kind: ScriptStruct; super: EditorDataStorageTag
struct FSCCStatusUpdateRequiredTag
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TypedElementFramework.SccStateColumn
// Kind: ScriptStruct; super: EditorDataStorageColumn
struct FSccStateColumn
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TypedElementFramework.SccStateDirtyTag
// Kind: ScriptStruct; super: EditorDataStorageTag
struct FSccStateDirtyTag
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TypedElementFramework.ScopeDataVersionColumn
// Kind: ScriptStruct; super: EditorDataStorageColumn
struct FScopeDataVersionColumn
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TypedElementFramework.ScopeRowSourceInfo
// Kind: ScriptStruct; super: EditorDataStorageColumn
struct FScopeRowSourceInfo
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TypedElementFramework.ScriptTypedElementHandle
// Kind: ScriptStruct; super: none
struct FScriptTypedElementHandle
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TypedElementFramework.ScriptTypedElementListProxy
// Kind: ScriptStruct; super: none
struct FScriptTypedElementListProxy
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TypedElementFramework.SimpleWidgetConstructor
// Kind: ScriptStruct; super: TypedElementWidgetConstructor
struct FSimpleWidgetConstructor
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TypedElementFramework.SlateColorColumn
// Kind: ScriptStruct; super: EditorDataStorageColumn
struct FSlateColorColumn
{
public:
    std::uint8_t Color[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSlateColorColumn, Color) == 0, "Offset mismatch for FSlateColorColumn::Color");

// /Script/TypedElementFramework.TEDSProcessorTestsReferenceColumn
// Kind: ScriptStruct; super: EditorDataStorageColumn
struct FTEDSProcessorTestsReferenceColumn
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TypedElementFramework.TEDSProcessorTests_Linked
// Kind: ScriptStruct; super: EditorDataStorageTag
struct FTEDSProcessorTests_Linked
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TypedElementFramework.TEDSProcessorTests_PrimaryTag
// Kind: ScriptStruct; super: EditorDataStorageTag
struct FTEDSProcessorTests_PrimaryTag
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TypedElementFramework.TEDSProcessorTests_SecondaryTag
// Kind: ScriptStruct; super: EditorDataStorageTag
struct FTEDSProcessorTests_SecondaryTag
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TypedElementFramework.TableRowParentColumn
// Kind: ScriptStruct; super: EditorDataStorageColumn
struct FTableRowParentColumn
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TypedElementFramework.TedsDecoratorWidgetConstructor
// Kind: ScriptStruct; super: TedsWidgetConstructorBase
struct FTedsDecoratorWidgetConstructor
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TypedElementFramework.TedsPackageDirtyTag
// Kind: ScriptStruct; super: EditorDataStorageTag
struct FTedsPackageDirtyTag
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TypedElementFramework.TedsPrimaryPackageObjectTag
// Kind: ScriptStruct; super: EditorDataStorageTag
struct FTedsPrimaryPackageObjectTag
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TypedElementFramework.TedsRowHandle
// Kind: ScriptStruct; super: none
struct FTedsRowHandle
{
public:
    std::uint64_t RowHandle; // 0x0000 (Size: 0x8, Type: UInt64Property)
};

static_assert(offsetof(FTedsRowHandle, RowHandle) == 0, "Offset mismatch for FTedsRowHandle::RowHandle");

// /Script/TypedElementFramework.TedsTableHandle
// Kind: ScriptStruct; super: none
struct FTedsTableHandle
{
public:
    std::uint64_t TableHandle; // 0x0000 (Size: 0x8, Type: UInt64Property)
};

static_assert(offsetof(FTedsTableHandle, TableHandle) == 0, "Offset mismatch for FTedsTableHandle::TableHandle");

// /Script/TypedElementFramework.TedsTypedElementColumn
// Kind: ScriptStruct; super: EditorDataStorageColumn
struct FTedsTypedElementColumn
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TypedElementFramework.TedsWidgetConstructorBase
// Kind: ScriptStruct; super: none
struct FTedsWidgetConstructorBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TypedElementFramework.TestColumnA
// Kind: ScriptStruct; super: EditorDataStorageColumn
struct FTestColumnA
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TypedElementFramework.TestColumnB
// Kind: ScriptStruct; super: EditorDataStorageColumn
struct FTestColumnB
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TypedElementFramework.TestColumnC
// Kind: ScriptStruct; super: EditorDataStorageColumn
struct FTestColumnC
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TypedElementFramework.TestColumnD
// Kind: ScriptStruct; super: EditorDataStorageColumn
struct FTestColumnD
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TypedElementFramework.TestColumnDynamic
// Kind: ScriptStruct; super: EditorDataStorageColumn
struct FTestColumnDynamic
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TypedElementFramework.TestColumnE
// Kind: ScriptStruct; super: EditorDataStorageColumn
struct FTestColumnE
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TypedElementFramework.TestColumnF
// Kind: ScriptStruct; super: EditorDataStorageColumn
struct FTestColumnF
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TypedElementFramework.TestColumnG
// Kind: ScriptStruct; super: EditorDataStorageColumn
struct FTestColumnG
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TypedElementFramework.TestColumnInt
// Kind: ScriptStruct; super: EditorDataStorageColumn
struct FTestColumnInt
{
public:
    std::int32_t TestInt; // 0x0000 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FTestColumnInt, TestInt) == 0, "Offset mismatch for FTestColumnInt::TestInt");

// /Script/TypedElementFramework.TestColumnString
// Kind: ScriptStruct; super: EditorDataStorageColumn
struct FTestColumnString
{
public:
    FString TestString; // 0x0000 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FTestColumnString, TestString) == 0, "Offset mismatch for FTestColumnString::TestString");

// /Script/TypedElementFramework.TestTagColumnA
// Kind: ScriptStruct; super: EditorDataStorageTag
struct FTestTagColumnA
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TypedElementFramework.TestTagColumnB
// Kind: ScriptStruct; super: EditorDataStorageTag
struct FTestTagColumnB
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TypedElementFramework.TestTagColumnC
// Kind: ScriptStruct; super: EditorDataStorageTag
struct FTestTagColumnC
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TypedElementFramework.TestTagColumnD
// Kind: ScriptStruct; super: EditorDataStorageTag
struct FTestTagColumnD
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TypedElementFramework.Test_PingPongDurPhys
// Kind: ScriptStruct; super: EditorDataStorageColumn
struct FTest_PingPongDurPhys
{
public:
    std::uint64_t Value; // 0x0000 (Size: 0x8, Type: UInt64Property)
};

static_assert(offsetof(FTest_PingPongDurPhys, Value) == 0, "Offset mismatch for FTest_PingPongDurPhys::Value");

// /Script/TypedElementFramework.Test_PingPongPostPhys
// Kind: ScriptStruct; super: EditorDataStorageColumn
struct FTest_PingPongPostPhys
{
public:
    std::uint64_t Value; // 0x0000 (Size: 0x8, Type: UInt64Property)
};

static_assert(offsetof(FTest_PingPongPostPhys, Value) == 0, "Offset mismatch for FTest_PingPongPostPhys::Value");

// /Script/TypedElementFramework.Test_PingPongPrePhys
// Kind: ScriptStruct; super: EditorDataStorageColumn
struct FTest_PingPongPrePhys
{
public:
    std::uint64_t Value; // 0x0000 (Size: 0x8, Type: UInt64Property)
};

static_assert(offsetof(FTest_PingPongPrePhys, Value) == 0, "Offset mismatch for FTest_PingPongPrePhys::Value");

// /Script/TypedElementFramework.TypedElementActorTag
// Kind: ScriptStruct; super: EditorDataStorageTag
struct FTypedElementActorTag
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TypedElementFramework.TypedElementClassDefaultObjectTag
// Kind: ScriptStruct; super: EditorDataStorageTag
struct FTypedElementClassDefaultObjectTag
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TypedElementFramework.TypedElementClassTypeInfoColumn
// Kind: ScriptStruct; super: EditorDataStorageColumn
struct FTypedElementClassTypeInfoColumn
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TypedElementFramework.TypedElementExternalObjectColumn
// Kind: ScriptStruct; super: EditorDataStorageColumn
struct FTypedElementExternalObjectColumn
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TypedElementFramework.TypedElementFloatValueCacheColumn
// Kind: ScriptStruct; super: EditorDataStorageColumn
struct FTypedElementFloatValueCacheColumn
{
public:
    float Value; // 0x0000 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FTypedElementFloatValueCacheColumn, Value) == 0, "Offset mismatch for FTypedElementFloatValueCacheColumn::Value");

// /Script/TypedElementFramework.TypedElementI32IntValueCacheColumn
// Kind: ScriptStruct; super: EditorDataStorageColumn
struct FTypedElementI32IntValueCacheColumn
{
public:
    std::int32_t Value; // 0x0000 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FTypedElementI32IntValueCacheColumn, Value) == 0, "Offset mismatch for FTypedElementI32IntValueCacheColumn::Value");

// /Script/TypedElementFramework.TypedElementI64IntValueCacheColumn
// Kind: ScriptStruct; super: EditorDataStorageColumn
struct FTypedElementI64IntValueCacheColumn
{
public:
    std::int64_t Value; // 0x0000 (Size: 0x8, Type: Int64Property)
};

static_assert(offsetof(FTypedElementI64IntValueCacheColumn, Value) == 0, "Offset mismatch for FTypedElementI64IntValueCacheColumn::Value");

// /Script/TypedElementFramework.TypedElementIconOverrideColumn
// Kind: ScriptStruct; super: EditorDataStorageColumn
struct FTypedElementIconOverrideColumn
{
public:
    FName IconName; // 0x0000 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FTypedElementIconOverrideColumn, IconName) == 0, "Offset mismatch for FTypedElementIconOverrideColumn::IconName");

// /Script/TypedElementFramework.TypedElementLabelColumn
// Kind: ScriptStruct; super: EditorDataStorageColumn
struct FTypedElementLabelColumn
{
public:
    FString Label; // 0x0000 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FTypedElementLabelColumn, Label) == 0, "Offset mismatch for FTypedElementLabelColumn::Label");

// /Script/TypedElementFramework.TypedElementLabelHashColumn
// Kind: ScriptStruct; super: EditorDataStorageColumn
struct FTypedElementLabelHashColumn
{
public:
    std::uint64_t LabelHash; // 0x0000 (Size: 0x8, Type: UInt64Property)
};

static_assert(offsetof(FTypedElementLabelHashColumn, LabelHash) == 0, "Offset mismatch for FTypedElementLabelHashColumn::LabelHash");

// /Script/TypedElementFramework.TypedElementLevelColumn
// Kind: ScriptStruct; super: EditorDataStorageColumn
struct FTypedElementLevelColumn
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TypedElementFramework.TypedElementLocalTransformColumn
// Kind: ScriptStruct; super: EditorDataStorageColumn
struct FTypedElementLocalTransformColumn
{
public:
    std::uint8_t Transform[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FTypedElementLocalTransformColumn, Transform) == 0, "Offset mismatch for FTypedElementLocalTransformColumn::Transform");

// /Script/TypedElementFramework.TypedElementLockTransformTag
// Kind: ScriptStruct; super: EditorDataStorageTag
struct FTypedElementLockTransformTag
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TypedElementFramework.TypedElementLoosePropertyTag
// Kind: ScriptStruct; super: EditorDataStorageTag
struct FTypedElementLoosePropertyTag
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TypedElementFramework.TypedElementPackageFilePathOnDiskColumn
// Kind: ScriptStruct; super: EditorDataStorageColumn
struct FTypedElementPackageFilePathOnDiskColumn
{
public:
    FString FilePathOnDisk; // 0x0000 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FTypedElementPackageFilePathOnDiskColumn, FilePathOnDisk) == 0, "Offset mismatch for FTypedElementPackageFilePathOnDiskColumn::FilePathOnDisk");

// /Script/TypedElementFramework.TypedElementPackageLoadedPathColumn
// Kind: ScriptStruct; super: EditorDataStorageColumn
struct FTypedElementPackageLoadedPathColumn
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TypedElementFramework.TypedElementPackagePathColumn
// Kind: ScriptStruct; super: EditorDataStorageColumn
struct FTypedElementPackagePathColumn
{
public:
    FString Path; // 0x0000 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FTypedElementPackagePathColumn, Path) == 0, "Offset mismatch for FTypedElementPackagePathColumn::Path");

// /Script/TypedElementFramework.TypedElementPackageReference
// Kind: ScriptStruct; super: EditorDataStorageColumn
struct FTypedElementPackageReference
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TypedElementFramework.TypedElementPackageUnresolvedReference
// Kind: ScriptStruct; super: EditorDataStorageColumn
struct FTypedElementPackageUnresolvedReference
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TypedElementFramework.TypedElementPackageUpdatedTag
// Kind: ScriptStruct; super: EditorDataStorageTag
struct FTypedElementPackageUpdatedTag
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TypedElementFramework.TypedElementPivotOffset
// Kind: ScriptStruct; super: EditorDataStorageColumn
struct FTypedElementPivotOffset
{
public:
    std::uint8_t Offset[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FTypedElementPivotOffset, Offset) == 0, "Offset mismatch for FTypedElementPivotOffset::Offset");

// /Script/TypedElementFramework.TypedElementPropertyBagPlaceholderTag
// Kind: ScriptStruct; super: EditorDataStorageTag
struct FTypedElementPropertyBagPlaceholderTag
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TypedElementFramework.TypedElementRowReferenceColumn
// Kind: ScriptStruct; super: EditorDataStorageColumn
struct FTypedElementRowReferenceColumn
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TypedElementFramework.TypedElementScriptStructTypeInfoColumn
// Kind: ScriptStruct; super: EditorDataStorageColumn
struct FTypedElementScriptStructTypeInfoColumn
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TypedElementFramework.TypedElementSelectionColumn
// Kind: ScriptStruct; super: EditorDataStorageColumn
struct FTypedElementSelectionColumn
{
public:
    FName SelectionSet; // 0x0000 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FTypedElementSelectionColumn, SelectionSet) == 0, "Offset mismatch for FTypedElementSelectionColumn::SelectionSet");

// /Script/TypedElementFramework.TypedElementSlateWidgetReferenceColumn
// Kind: ScriptStruct; super: EditorDataStorageColumn
struct FTypedElementSlateWidgetReferenceColumn
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TypedElementFramework.TypedElementSlateWidgetReferenceDeletesRowTag
// Kind: ScriptStruct; super: EditorDataStorageTag
struct FTypedElementSlateWidgetReferenceDeletesRowTag
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TypedElementFramework.TypedElementSyncBackToWorldTag
// Kind: ScriptStruct; super: EditorDataStorageTag
struct FTypedElementSyncBackToWorldTag
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TypedElementFramework.TypedElementSyncFromWorldInteractiveTag
// Kind: ScriptStruct; super: EditorDataStorageTag
struct FTypedElementSyncFromWorldInteractiveTag
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TypedElementFramework.TypedElementSyncFromWorldTag
// Kind: ScriptStruct; super: EditorDataStorageTag
struct FTypedElementSyncFromWorldTag
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TypedElementFramework.TypedElementTypeInfoDisplayOverrideColumn
// Kind: ScriptStruct; super: EditorDataStorageColumn
struct FTypedElementTypeInfoDisplayOverrideColumn
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TypedElementFramework.TypedElementU32IntValueCacheColumn
// Kind: ScriptStruct; super: EditorDataStorageColumn
struct FTypedElementU32IntValueCacheColumn
{
public:
    std::uint32_t Value; // 0x0000 (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(FTypedElementU32IntValueCacheColumn, Value) == 0, "Offset mismatch for FTypedElementU32IntValueCacheColumn::Value");

// /Script/TypedElementFramework.TypedElementU64IntValueCacheColumn
// Kind: ScriptStruct; super: EditorDataStorageColumn
struct FTypedElementU64IntValueCacheColumn
{
public:
    std::uint64_t Value; // 0x0000 (Size: 0x8, Type: UInt64Property)
};

static_assert(offsetof(FTypedElementU64IntValueCacheColumn, Value) == 0, "Offset mismatch for FTypedElementU64IntValueCacheColumn::Value");

// /Script/TypedElementFramework.TypedElementUObjectColumn
// Kind: ScriptStruct; super: EditorDataStorageColumn
struct FTypedElementUObjectColumn
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TypedElementFramework.TypedElementUObjectIdColumn
// Kind: ScriptStruct; super: EditorDataStorageColumn
struct FTypedElementUObjectIdColumn
{
public:
    std::uint32_t ID; // 0x0000 (Size: 0x4, Type: UInt32Property)
    std::int32_t SerialNumber; // 0x0004 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FTypedElementUObjectIdColumn, ID) == 0, "Offset mismatch for FTypedElementUObjectIdColumn::ID");
static_assert(offsetof(FTypedElementUObjectIdColumn, SerialNumber) == 4, "Offset mismatch for FTypedElementUObjectIdColumn::SerialNumber");

// /Script/TypedElementFramework.TypedElementViewportOutlineColorColumn
// Kind: ScriptStruct; super: EditorDataStorageColumn
struct FTypedElementViewportOutlineColorColumn
{
public:
    std::uint8_t SelectionOutlineColorIndex; // 0x0000 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FTypedElementViewportOutlineColorColumn, SelectionOutlineColorIndex) == 0, "Offset mismatch for FTypedElementViewportOutlineColorColumn::SelectionOutlineColorIndex");

// /Script/TypedElementFramework.TypedElementViewportOverlayColorColumn
// Kind: ScriptStruct; super: EditorDataStorageColumn
struct FTypedElementViewportOverlayColorColumn
{
public:
    std::uint8_t OverlayColor[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FTypedElementViewportOverlayColorColumn, OverlayColor) == 0, "Offset mismatch for FTypedElementViewportOverlayColorColumn::OverlayColor");

// /Script/TypedElementFramework.TypedElementViewportOverlayColorDirtyFlag
// Kind: ScriptStruct; super: EditorDataStorageTag
struct FTypedElementViewportOverlayColorDirtyFlag
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TypedElementFramework.TypedElementWidgetConstructor
// Kind: ScriptStruct; super: TedsWidgetConstructorBase
struct FTypedElementWidgetConstructor
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TypedElementFramework.TypedElementWorldColumn
// Kind: ScriptStruct; super: EditorDataStorageColumn
struct FTypedElementWorldColumn
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TypedElementFramework.UnresolvedTableRowParentColumn
// Kind: ScriptStruct; super: EditorDataStorageColumn
struct FUnresolvedTableRowParentColumn
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TypedElementFramework.VisibilityChangedTag
// Kind: ScriptStruct; super: EditorDataStorageTag
struct FVisibilityChangedTag
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TypedElementFramework.VisibleInEditorColumn
// Kind: ScriptStruct; super: EditorDataStorageColumn
struct FVisibleInEditorColumn
{
public:
    std::uint8_t bIsVisibleInEditor; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FVisibleInEditorColumn, bIsVisibleInEditor) == 0, "Offset mismatch for FVisibleInEditorColumn::bIsVisibleInEditor");

// /Script/TypedElementFramework.WidgetConstructorNameColumn
// Kind: ScriptStruct; super: EditorDataStorageColumn
struct FWidgetConstructorNameColumn
{
public:
    FName Name; // 0x0000 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FWidgetConstructorNameColumn, Name) == 0, "Offset mismatch for FWidgetConstructorNameColumn::Name");

// /Script/TypedElementFramework.WidgetFactoryColumn
// Kind: ScriptStruct; super: EditorDataStorageColumn
struct FWidgetFactoryColumn
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TypedElementFramework.WidgetFactoryConditionsColumn
// Kind: ScriptStruct; super: EditorDataStorageColumn
struct FWidgetFactoryConditionsColumn
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TypedElementFramework.WidgetFactoryConstructorColumn
// Kind: ScriptStruct; super: EditorDataStorageColumn
struct FWidgetFactoryConstructorColumn
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TypedElementFramework.WidgetFactoryConstructorTypeInfoColumn
// Kind: ScriptStruct; super: EditorDataStorageColumn
struct FWidgetFactoryConstructorTypeInfoColumn
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TypedElementFramework.WidgetPurposeColumn
// Kind: ScriptStruct; super: EditorDataStorageColumn
struct FWidgetPurposeColumn
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TypedElementFramework.WidgetPurposeNameColumn
// Kind: ScriptStruct; super: EditorDataStorageColumn
struct FWidgetPurposeNameColumn
{
public:
    std::uint8_t Namespace[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t Name[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    FName Frame; // 0x0008 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FWidgetPurposeNameColumn, Namespace) == 0, "Offset mismatch for FWidgetPurposeNameColumn::Namespace");
static_assert(offsetof(FWidgetPurposeNameColumn, Name) == 4, "Offset mismatch for FWidgetPurposeNameColumn::Name");
static_assert(offsetof(FWidgetPurposeNameColumn, Frame) == 8, "Offset mismatch for FWidgetPurposeNameColumn::Frame");

// /Script/TypedElementFramework.WidgetPurposeReferenceColumn
// Kind: ScriptStruct; super: EditorDataStorageColumn
struct FWidgetPurposeReferenceColumn
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TypedElementFramework.EditorDataStorageFactory
// Kind: Class; super: Object
class UEditorDataStorageFactory
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TypedElementFramework.TestTypedElementInterfaceA
// Kind: Class; super: Interface
class UTestTypedElementInterfaceA
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TypedElementFramework.TestTypedElementInterfaceA_ImplTyped
// Kind: Class; super: Object
class UTestTypedElementInterfaceA_ImplTyped
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TypedElementFramework.TestTypedElementInterfaceA_ImplUntyped
// Kind: Class; super: Object
class UTestTypedElementInterfaceA_ImplUntyped
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TypedElementFramework.TestTypedElementInterfaceB
// Kind: Class; super: Interface
class UTestTypedElementInterfaceB
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TypedElementFramework.TestTypedElementInterfaceBAndC_Typed
// Kind: Class; super: Object
class UTestTypedElementInterfaceBAndC_Typed
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TypedElementFramework.TestTypedElementInterfaceC
// Kind: Class; super: Interface
class UTestTypedElementInterfaceC
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TypedElementFramework.Test_PingPongBetweenPhaseFactory
// Kind: Class; super: EditorDataStorageFactory
class UTest_PingPongBetweenPhaseFactory
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TypedElementFramework.TypedElementCounterInterface
// Kind: Class; super: Interface
class UTypedElementCounterInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TypedElementFramework.TypedElementHandleLibrary
// Kind: Class; super: Object
class UTypedElementHandleLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TypedElementFramework.TypedElementListLibrary
// Kind: Class; super: Object
class UTypedElementListLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TypedElementFramework.TypedElementRegistry
// Kind: Class; super: Object
class UTypedElementRegistry
{
public:
    std::uint8_t Opaque[1];
};

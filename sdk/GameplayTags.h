/**
 * decamp dumper generated SDK
 * Package: /Script/GameplayTags
 */
#pragma once
#include "Basic.h"

// /Script/GameplayTags.GameplayTag
// Kind: ScriptStruct; super: none
struct FGameplayTag
{
public:
    FName TagName; // 0x0000 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FGameplayTag, TagName) == 0, "Offset mismatch for FGameplayTag::TagName");

// /Script/GameplayTags.GameplayTagCategoryRemap
// Kind: ScriptStruct; super: none
struct FGameplayTagCategoryRemap
{
public:
    FString BaseCategory; // 0x0000 (Size: 0x10, Type: StrProperty)
    TArray<void*> RemapCategories; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FGameplayTagCategoryRemap, BaseCategory) == 0, "Offset mismatch for FGameplayTagCategoryRemap::BaseCategory");
static_assert(offsetof(FGameplayTagCategoryRemap, RemapCategories) == 16, "Offset mismatch for FGameplayTagCategoryRemap::RemapCategories");

// /Script/GameplayTags.GameplayTagContainer
// Kind: ScriptStruct; super: none
struct FGameplayTagContainer
{
public:
    TArray<void*> GameplayTags; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ParentTags; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FGameplayTagContainer, GameplayTags) == 0, "Offset mismatch for FGameplayTagContainer::GameplayTags");
static_assert(offsetof(FGameplayTagContainer, ParentTags) == 16, "Offset mismatch for FGameplayTagContainer::ParentTags");

// /Script/GameplayTags.GameplayTagContainerNetSerializerConfig
// Kind: ScriptStruct; super: NetSerializerConfig
struct FGameplayTagContainerNetSerializerConfig
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameplayTags.GameplayTagContainerNetSerializerSerializationHelper
// Kind: ScriptStruct; super: none
struct FGameplayTagContainerNetSerializerSerializationHelper
{
public:
    TArray<void*> GameplayTags; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FGameplayTagContainerNetSerializerSerializationHelper, GameplayTags) == 0, "Offset mismatch for FGameplayTagContainerNetSerializerSerializationHelper::GameplayTags");

// /Script/GameplayTags.GameplayTagCreationWidgetHelper
// Kind: ScriptStruct; super: none
struct FGameplayTagCreationWidgetHelper
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameplayTags.GameplayTagNetSerializerConfig
// Kind: ScriptStruct; super: NetSerializerConfig
struct FGameplayTagNetSerializerConfig
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameplayTags.GameplayTagNode
// Kind: ScriptStruct; super: none
struct FGameplayTagNode
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameplayTags.GameplayTagQuery
// Kind: ScriptStruct; super: none
struct FGameplayTagQuery
{
public:
    std::int32_t TokenStreamVersion; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    TArray<void*> TagDictionary; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> QueryTokenStream; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    FString UserDescription; // 0x0028 (Size: 0x10, Type: StrProperty)
    FString AutoDescription; // 0x0038 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FGameplayTagQuery, TokenStreamVersion) == 0, "Offset mismatch for FGameplayTagQuery::TokenStreamVersion");
static_assert(offsetof(FGameplayTagQuery, TagDictionary) == 8, "Offset mismatch for FGameplayTagQuery::TagDictionary");
static_assert(offsetof(FGameplayTagQuery, QueryTokenStream) == 24, "Offset mismatch for FGameplayTagQuery::QueryTokenStream");
static_assert(offsetof(FGameplayTagQuery, UserDescription) == 40, "Offset mismatch for FGameplayTagQuery::UserDescription");
static_assert(offsetof(FGameplayTagQuery, AutoDescription) == 56, "Offset mismatch for FGameplayTagQuery::AutoDescription");

// /Script/GameplayTags.GameplayTagRedirect
// Kind: ScriptStruct; super: none
struct FGameplayTagRedirect
{
public:
    std::uint8_t OldTagName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    FName NewTagName; // 0x0004 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FGameplayTagRedirect, OldTagName) == 0, "Offset mismatch for FGameplayTagRedirect::OldTagName");
static_assert(offsetof(FGameplayTagRedirect, NewTagName) == 4, "Offset mismatch for FGameplayTagRedirect::NewTagName");

// /Script/GameplayTags.GameplayTagSource
// Kind: ScriptStruct; super: none
struct FGameplayTagSource
{
public:
    std::uint8_t SourceName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t SourceType; // 0x0004 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    void* SourceTagList; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    void* SourceRestrictedTagList; // 0x0010 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FGameplayTagSource, SourceName) == 0, "Offset mismatch for FGameplayTagSource::SourceName");
static_assert(offsetof(FGameplayTagSource, SourceType) == 4, "Offset mismatch for FGameplayTagSource::SourceType");
static_assert(offsetof(FGameplayTagSource, SourceTagList) == 8, "Offset mismatch for FGameplayTagSource::SourceTagList");
static_assert(offsetof(FGameplayTagSource, SourceRestrictedTagList) == 16, "Offset mismatch for FGameplayTagSource::SourceRestrictedTagList");

// /Script/GameplayTags.GameplayTagTableRow
// Kind: ScriptStruct; super: TableRowBase
struct FGameplayTagTableRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    FName Tag; // 0x0008 (Size: 0x8, Type: NameProperty)
    FString DevComment; // 0x0010 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FGameplayTagTableRow, Tag) == 8, "Offset mismatch for FGameplayTagTableRow::Tag");
static_assert(offsetof(FGameplayTagTableRow, DevComment) == 16, "Offset mismatch for FGameplayTagTableRow::DevComment");

// /Script/GameplayTags.RestrictedConfigInfo
// Kind: ScriptStruct; super: none
struct FRestrictedConfigInfo
{
public:
    FString RestrictedConfigName; // 0x0000 (Size: 0x10, Type: StrProperty)
    TArray<void*> Owners; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRestrictedConfigInfo, RestrictedConfigName) == 0, "Offset mismatch for FRestrictedConfigInfo::RestrictedConfigName");
static_assert(offsetof(FRestrictedConfigInfo, Owners) == 16, "Offset mismatch for FRestrictedConfigInfo::Owners");

// /Script/GameplayTags.RestrictedGameplayTagTableRow
// Kind: ScriptStruct; super: GameplayTagTableRow
struct FRestrictedGameplayTagTableRow
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bAllowNonRestrictedChildren; // 0x0020 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRestrictedGameplayTagTableRow, bAllowNonRestrictedChildren) == 32, "Offset mismatch for FRestrictedGameplayTagTableRow::bAllowNonRestrictedChildren");

// /Script/GameplayTags.BlueprintGameplayTagLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UBlueprintGameplayTagLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameplayTags.EditableGameplayTagQuery
// Kind: Class; super: Object
class UEditableGameplayTagQuery
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FString UserDescription; // 0x0028 (Size: 0x10, Type: StrProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0038
    void* RootExpression; // 0x0048 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t TagQueryExportText_Helper[0x1]; // 0x0050 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UEditableGameplayTagQuery, UserDescription) == 40, "Offset mismatch for UEditableGameplayTagQuery::UserDescription");
static_assert(offsetof(UEditableGameplayTagQuery, RootExpression) == 72, "Offset mismatch for UEditableGameplayTagQuery::RootExpression");
static_assert(offsetof(UEditableGameplayTagQuery, TagQueryExportText_Helper) == 80, "Offset mismatch for UEditableGameplayTagQuery::TagQueryExportText_Helper");

// /Script/GameplayTags.EditableGameplayTagQueryExpression
// Kind: Class; super: Object
class UEditableGameplayTagQueryExpression
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameplayTags.EditableGameplayTagQueryExpression_AllExprMatch
// Kind: Class; super: EditableGameplayTagQueryExpression
class UEditableGameplayTagQueryExpression_AllExprMatch
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> Expressions; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UEditableGameplayTagQueryExpression_AllExprMatch, Expressions) == 40, "Offset mismatch for UEditableGameplayTagQueryExpression_AllExprMatch::Expressions");

// /Script/GameplayTags.EditableGameplayTagQueryExpression_AllTagsExactMatch
// Kind: Class; super: EditableGameplayTagQueryExpression
class UEditableGameplayTagQueryExpression_AllTagsExactMatch
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Tags[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UEditableGameplayTagQueryExpression_AllTagsExactMatch, Tags) == 40, "Offset mismatch for UEditableGameplayTagQueryExpression_AllTagsExactMatch::Tags");

// /Script/GameplayTags.EditableGameplayTagQueryExpression_AllTagsMatch
// Kind: Class; super: EditableGameplayTagQueryExpression
class UEditableGameplayTagQueryExpression_AllTagsMatch
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Tags[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UEditableGameplayTagQueryExpression_AllTagsMatch, Tags) == 40, "Offset mismatch for UEditableGameplayTagQueryExpression_AllTagsMatch::Tags");

// /Script/GameplayTags.EditableGameplayTagQueryExpression_AnyExprMatch
// Kind: Class; super: EditableGameplayTagQueryExpression
class UEditableGameplayTagQueryExpression_AnyExprMatch
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> Expressions; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UEditableGameplayTagQueryExpression_AnyExprMatch, Expressions) == 40, "Offset mismatch for UEditableGameplayTagQueryExpression_AnyExprMatch::Expressions");

// /Script/GameplayTags.EditableGameplayTagQueryExpression_AnyTagsExactMatch
// Kind: Class; super: EditableGameplayTagQueryExpression
class UEditableGameplayTagQueryExpression_AnyTagsExactMatch
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Tags[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UEditableGameplayTagQueryExpression_AnyTagsExactMatch, Tags) == 40, "Offset mismatch for UEditableGameplayTagQueryExpression_AnyTagsExactMatch::Tags");

// /Script/GameplayTags.EditableGameplayTagQueryExpression_AnyTagsMatch
// Kind: Class; super: EditableGameplayTagQueryExpression
class UEditableGameplayTagQueryExpression_AnyTagsMatch
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Tags[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UEditableGameplayTagQueryExpression_AnyTagsMatch, Tags) == 40, "Offset mismatch for UEditableGameplayTagQueryExpression_AnyTagsMatch::Tags");

// /Script/GameplayTags.EditableGameplayTagQueryExpression_NoExprMatch
// Kind: Class; super: EditableGameplayTagQueryExpression
class UEditableGameplayTagQueryExpression_NoExprMatch
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> Expressions; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UEditableGameplayTagQueryExpression_NoExprMatch, Expressions) == 40, "Offset mismatch for UEditableGameplayTagQueryExpression_NoExprMatch::Expressions");

// /Script/GameplayTags.EditableGameplayTagQueryExpression_NoTagsMatch
// Kind: Class; super: EditableGameplayTagQueryExpression
class UEditableGameplayTagQueryExpression_NoTagsMatch
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Tags[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UEditableGameplayTagQueryExpression_NoTagsMatch, Tags) == 40, "Offset mismatch for UEditableGameplayTagQueryExpression_NoTagsMatch::Tags");

// /Script/GameplayTags.GameplayTagAssetInterface
// Kind: Class; super: Interface
class UGameplayTagAssetInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameplayTags.GameplayTagsDeveloperSettings
// Kind: Class; super: DeveloperSettings
class UGameplayTagsDeveloperSettings
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    FString DeveloperConfigName; // 0x0030 (Size: 0x10, Type: StrProperty)
    FName FavoriteTagSource; // 0x0040 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UGameplayTagsDeveloperSettings, DeveloperConfigName) == 48, "Offset mismatch for UGameplayTagsDeveloperSettings::DeveloperConfigName");
static_assert(offsetof(UGameplayTagsDeveloperSettings, FavoriteTagSource) == 64, "Offset mismatch for UGameplayTagsDeveloperSettings::FavoriteTagSource");

// /Script/GameplayTags.GameplayTagsList
// Kind: Class; super: Object
class UGameplayTagsList
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FString ConfigFileName; // 0x0028 (Size: 0x10, Type: StrProperty)
    TArray<void*> GameplayTagRedirects; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> GameplayTagList; // 0x0048 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UGameplayTagsList, ConfigFileName) == 40, "Offset mismatch for UGameplayTagsList::ConfigFileName");
static_assert(offsetof(UGameplayTagsList, GameplayTagRedirects) == 56, "Offset mismatch for UGameplayTagsList::GameplayTagRedirects");
static_assert(offsetof(UGameplayTagsList, GameplayTagList) == 72, "Offset mismatch for UGameplayTagsList::GameplayTagList");

// /Script/GameplayTags.GameplayTagsManager
// Kind: Class; super: Object
class UGameplayTagsManager
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    TMap<void*, void*> TagSources; // 0x00C8 (Size: 0x10, Type: MapProperty)
    std::uint8_t Pad_0001[0x90]; // 0x00D8
    TArray<void*> GameplayTagTables; // 0x0168 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UGameplayTagsManager, TagSources) == 200, "Offset mismatch for UGameplayTagsManager::TagSources");
static_assert(offsetof(UGameplayTagsManager, GameplayTagTables) == 360, "Offset mismatch for UGameplayTagsManager::GameplayTagTables");

// /Script/GameplayTags.GameplayTagsSettings
// Kind: Class; super: GameplayTagsList
class UGameplayTagsSettings
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    std::uint8_t ImportTagsFromConfig; // 0x0058 (Size: 0x1, Type: BoolProperty)
    std::uint8_t WarnOnInvalidTags; // 0x0059 (Size: 0x1, Type: BoolProperty)
    std::uint8_t ClearInvalidTags; // 0x005A (Size: 0x1, Type: BoolProperty)
    std::uint8_t AllowEditorTagUnloading; // 0x005B (Size: 0x1, Type: BoolProperty)
    std::uint8_t AllowGameTagUnloading; // 0x005C (Size: 0x1, Type: BoolProperty)
    std::uint8_t FastReplication; // 0x005D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDynamicReplication; // 0x005E (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x005F
    FString InvalidTagCharacters; // 0x0060 (Size: 0x10, Type: StrProperty)
    TArray<void*> CategoryRemapping; // 0x0070 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> GameplayTagTableList; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CommonlyReplicatedTags; // 0x0090 (Size: 0x10, Type: ArrayProperty)
    std::int32_t NumBitsForContainerSize; // 0x00A0 (Size: 0x4, Type: IntProperty)
    std::int32_t NetIndexFirstBitSegment; // 0x00A4 (Size: 0x4, Type: IntProperty)
    TArray<void*> RestrictedConfigFiles; // 0x00A8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UGameplayTagsSettings, ImportTagsFromConfig) == 88, "Offset mismatch for UGameplayTagsSettings::ImportTagsFromConfig");
static_assert(offsetof(UGameplayTagsSettings, WarnOnInvalidTags) == 89, "Offset mismatch for UGameplayTagsSettings::WarnOnInvalidTags");
static_assert(offsetof(UGameplayTagsSettings, ClearInvalidTags) == 90, "Offset mismatch for UGameplayTagsSettings::ClearInvalidTags");
static_assert(offsetof(UGameplayTagsSettings, AllowEditorTagUnloading) == 91, "Offset mismatch for UGameplayTagsSettings::AllowEditorTagUnloading");
static_assert(offsetof(UGameplayTagsSettings, AllowGameTagUnloading) == 92, "Offset mismatch for UGameplayTagsSettings::AllowGameTagUnloading");
static_assert(offsetof(UGameplayTagsSettings, FastReplication) == 93, "Offset mismatch for UGameplayTagsSettings::FastReplication");
static_assert(offsetof(UGameplayTagsSettings, bDynamicReplication) == 94, "Offset mismatch for UGameplayTagsSettings::bDynamicReplication");
static_assert(offsetof(UGameplayTagsSettings, InvalidTagCharacters) == 96, "Offset mismatch for UGameplayTagsSettings::InvalidTagCharacters");
static_assert(offsetof(UGameplayTagsSettings, CategoryRemapping) == 112, "Offset mismatch for UGameplayTagsSettings::CategoryRemapping");
static_assert(offsetof(UGameplayTagsSettings, GameplayTagTableList) == 128, "Offset mismatch for UGameplayTagsSettings::GameplayTagTableList");
static_assert(offsetof(UGameplayTagsSettings, CommonlyReplicatedTags) == 144, "Offset mismatch for UGameplayTagsSettings::CommonlyReplicatedTags");
static_assert(offsetof(UGameplayTagsSettings, NumBitsForContainerSize) == 160, "Offset mismatch for UGameplayTagsSettings::NumBitsForContainerSize");
static_assert(offsetof(UGameplayTagsSettings, NetIndexFirstBitSegment) == 164, "Offset mismatch for UGameplayTagsSettings::NetIndexFirstBitSegment");
static_assert(offsetof(UGameplayTagsSettings, RestrictedConfigFiles) == 168, "Offset mismatch for UGameplayTagsSettings::RestrictedConfigFiles");

// /Script/GameplayTags.RestrictedGameplayTagsList
// Kind: Class; super: Object
class URestrictedGameplayTagsList
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FString ConfigFileName; // 0x0028 (Size: 0x10, Type: StrProperty)
    TArray<void*> RestrictedGameplayTagList; // 0x0038 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(URestrictedGameplayTagsList, ConfigFileName) == 40, "Offset mismatch for URestrictedGameplayTagsList::ConfigFileName");
static_assert(offsetof(URestrictedGameplayTagsList, RestrictedGameplayTagList) == 56, "Offset mismatch for URestrictedGameplayTagsList::RestrictedGameplayTagList");

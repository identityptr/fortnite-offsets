#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::GameplayTags
{
    struct BlueprintGameplayTagLibrary
    {
        static constexpr std::string_view Name = "BlueprintGameplayTagLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 37> FunctionNames{{
            "AddGameplayTag",
            "AppendGameplayTagContainers",
            "BreakGameplayTagContainer",
            "Conv_ObjectToGameplayTagAssetInterface",
            "DoesContainerMatchTagQuery",
            "DoesTagAssetInterfaceHaveTag",
            "EqualEqual_GameplayTag",
            "EqualEqual_GameplayTagContainer",
            "Filter",
            "GetAllActorsOfClassMatchingTagQuery",
            "GetDebugStringFromGameplayTag",
            "GetDebugStringFromGameplayTagContainer",
            "GetNumGameplayTagsInContainer",
            "GetOwnedGameplayTags",
            "GetTagName",
            "HasAllMatchingGameplayTags",
            "HasAllTags",
            "HasAnyMatchingGameplayTags",
            "HasAnyTags",
            "HasTag",
            "IsGameplayTagValid",
            "IsTagQueryEmpty",
            "MakeGameplayTagContainerFromArray",
            "MakeGameplayTagContainerFromTag",
            "MakeGameplayTagQuery",
            "MakeGameplayTagQuery_MatchAllTags",
            "MakeGameplayTagQuery_MatchAnyTags",
            "MakeGameplayTagQuery_MatchNoTags",
            "MakeLiteralGameplayTag",
            "MakeLiteralGameplayTagContainer",
            "MatchesAnyTags",
            "MatchesTag",
            "NotEqual_GameplayTag",
            "NotEqual_GameplayTagContainer",
            "NotEqual_TagContainerTagContainer",
            "NotEqual_TagTag",
            "RemoveGameplayTag",
        }};
    };

    struct EditableGameplayTagQuery
    {
        static constexpr std::string_view Name = "EditableGameplayTagQuery";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t UserDescription = 0x28;
            static constexpr std::uintptr_t RootExpression = 0x48;
            static constexpr std::uintptr_t TagQueryExportText_Helper = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"UserDescription", 0x28, "StrProperty"},
            {"RootExpression", 0x48, "ObjectProperty"},
            {"TagQueryExportText_Helper", 0x50, "StructProperty"},
        }};
    };

    struct EditableGameplayTagQueryExpression
    {
        static constexpr std::string_view Name = "EditableGameplayTagQueryExpression";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct EditableGameplayTagQueryExpression_AllExprMatch
    {
        static constexpr std::string_view Name = "EditableGameplayTagQueryExpression_AllExprMatch";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EditableGameplayTagQueryExpression";
        struct Offsets
        {
            static constexpr std::uintptr_t Expressions = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Expressions", 0x28, "ArrayProperty"},
        }};
    };

    struct EditableGameplayTagQueryExpression_AllTagsExactMatch
    {
        static constexpr std::string_view Name = "EditableGameplayTagQueryExpression_AllTagsExactMatch";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EditableGameplayTagQueryExpression";
        struct Offsets
        {
            static constexpr std::uintptr_t Tags = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Tags", 0x28, "StructProperty"},
        }};
    };

    struct EditableGameplayTagQueryExpression_AllTagsMatch
    {
        static constexpr std::string_view Name = "EditableGameplayTagQueryExpression_AllTagsMatch";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EditableGameplayTagQueryExpression";
        struct Offsets
        {
            static constexpr std::uintptr_t Tags = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Tags", 0x28, "StructProperty"},
        }};
    };

    struct EditableGameplayTagQueryExpression_AnyExprMatch
    {
        static constexpr std::string_view Name = "EditableGameplayTagQueryExpression_AnyExprMatch";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EditableGameplayTagQueryExpression";
        struct Offsets
        {
            static constexpr std::uintptr_t Expressions = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Expressions", 0x28, "ArrayProperty"},
        }};
    };

    struct EditableGameplayTagQueryExpression_AnyTagsExactMatch
    {
        static constexpr std::string_view Name = "EditableGameplayTagQueryExpression_AnyTagsExactMatch";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EditableGameplayTagQueryExpression";
        struct Offsets
        {
            static constexpr std::uintptr_t Tags = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Tags", 0x28, "StructProperty"},
        }};
    };

    struct EditableGameplayTagQueryExpression_AnyTagsMatch
    {
        static constexpr std::string_view Name = "EditableGameplayTagQueryExpression_AnyTagsMatch";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EditableGameplayTagQueryExpression";
        struct Offsets
        {
            static constexpr std::uintptr_t Tags = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Tags", 0x28, "StructProperty"},
        }};
    };

    struct EditableGameplayTagQueryExpression_NoExprMatch
    {
        static constexpr std::string_view Name = "EditableGameplayTagQueryExpression_NoExprMatch";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EditableGameplayTagQueryExpression";
        struct Offsets
        {
            static constexpr std::uintptr_t Expressions = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Expressions", 0x28, "ArrayProperty"},
        }};
    };

    struct EditableGameplayTagQueryExpression_NoTagsMatch
    {
        static constexpr std::string_view Name = "EditableGameplayTagQueryExpression_NoTagsMatch";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EditableGameplayTagQueryExpression";
        struct Offsets
        {
            static constexpr std::uintptr_t Tags = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Tags", 0x28, "StructProperty"},
        }};
    };

    struct GameplayTag
    {
        static constexpr std::string_view Name = "GameplayTag";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t TagName = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TagName", 0x0, "NameProperty"},
        }};
    };

    struct GameplayTagAssetInterface
    {
        static constexpr std::string_view Name = "GameplayTagAssetInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 4> FunctionNames{{
            "BP_GetOwnedGameplayTags",
            "HasAllMatchingGameplayTags",
            "HasAnyMatchingGameplayTags",
            "HasMatchingGameplayTag",
        }};
    };

    struct GameplayTagCategoryRemap
    {
        static constexpr std::string_view Name = "GameplayTagCategoryRemap";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t BaseCategory = 0x0;
            static constexpr std::uintptr_t RemapCategories = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"BaseCategory", 0x0, "StrProperty"},
            {"RemapCategories", 0x10, "ArrayProperty"},
        }};
    };

    struct GameplayTagContainer
    {
        static constexpr std::string_view Name = "GameplayTagContainer";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t GameplayTags = 0x0;
            static constexpr std::uintptr_t ParentTags = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"GameplayTags", 0x0, "ArrayProperty"},
            {"ParentTags", 0x10, "ArrayProperty"},
        }};
    };

    struct GameplayTagContainerNetSerializerConfig
    {
        static constexpr std::string_view Name = "GameplayTagContainerNetSerializerConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NetSerializerConfig";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GameplayTagContainerNetSerializerSerializationHelper
    {
        static constexpr std::string_view Name = "GameplayTagContainerNetSerializerSerializationHelper";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t GameplayTags = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"GameplayTags", 0x0, "ArrayProperty"},
        }};
    };

    struct GameplayTagCreationWidgetHelper
    {
        static constexpr std::string_view Name = "GameplayTagCreationWidgetHelper";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GameplayTagNetSerializerConfig
    {
        static constexpr std::string_view Name = "GameplayTagNetSerializerConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NetSerializerConfig";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GameplayTagNode
    {
        static constexpr std::string_view Name = "GameplayTagNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GameplayTagQuery
    {
        static constexpr std::string_view Name = "GameplayTagQuery";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t TokenStreamVersion = 0x0;
            static constexpr std::uintptr_t TagDictionary = 0x8;
            static constexpr std::uintptr_t QueryTokenStream = 0x18;
            static constexpr std::uintptr_t UserDescription = 0x28;
            static constexpr std::uintptr_t AutoDescription = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"TokenStreamVersion", 0x0, "IntProperty"},
            {"TagDictionary", 0x8, "ArrayProperty"},
            {"QueryTokenStream", 0x18, "ArrayProperty"},
            {"UserDescription", 0x28, "StrProperty"},
            {"AutoDescription", 0x38, "StrProperty"},
        }};
    };

    struct GameplayTagRedirect
    {
        static constexpr std::string_view Name = "GameplayTagRedirect";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t OldTagName = 0x0;
            static constexpr std::uintptr_t NewTagName = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OldTagName", 0x0, "NameProperty"},
            {"NewTagName", 0x4, "NameProperty"},
        }};
    };

    struct GameplayTagSource
    {
        static constexpr std::string_view Name = "GameplayTagSource";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SourceName = 0x0;
            static constexpr std::uintptr_t SourceType = 0x4;
            static constexpr std::uintptr_t SourceTagList = 0x8;
            static constexpr std::uintptr_t SourceRestrictedTagList = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"SourceName", 0x0, "NameProperty"},
            {"SourceType", 0x4, "EnumProperty"},
            {"SourceTagList", 0x8, "ObjectProperty"},
            {"SourceRestrictedTagList", 0x10, "ObjectProperty"},
        }};
    };

    struct GameplayTagTableRow
    {
        static constexpr std::string_view Name = "GameplayTagTableRow";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "TableRowBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Tag = 0x8;
            static constexpr std::uintptr_t DevComment = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Tag", 0x8, "NameProperty"},
            {"DevComment", 0x10, "StrProperty"},
        }};
    };

    struct GameplayTagsDeveloperSettings
    {
        static constexpr std::string_view Name = "GameplayTagsDeveloperSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeveloperSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t DeveloperConfigName = 0x30;
            static constexpr std::uintptr_t FavoriteTagSource = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DeveloperConfigName", 0x30, "StrProperty"},
            {"FavoriteTagSource", 0x40, "NameProperty"},
        }};
    };

    struct GameplayTagsList
    {
        static constexpr std::string_view Name = "GameplayTagsList";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t ConfigFileName = 0x28;
            static constexpr std::uintptr_t GameplayTagRedirects = 0x38;
            static constexpr std::uintptr_t GameplayTagList = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ConfigFileName", 0x28, "StrProperty"},
            {"GameplayTagRedirects", 0x38, "ArrayProperty"},
            {"GameplayTagList", 0x48, "ArrayProperty"},
        }};
    };

    struct GameplayTagsManager
    {
        static constexpr std::string_view Name = "GameplayTagsManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t TagSources = 0xC8;
            static constexpr std::uintptr_t GameplayTagTables = 0x168;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"TagSources", 0xC8, "MapProperty"},
            {"GameplayTagTables", 0x168, "ArrayProperty"},
        }};
    };

    struct GameplayTagsSettings
    {
        static constexpr std::string_view Name = "GameplayTagsSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameplayTagsList";
        struct Offsets
        {
            static constexpr std::uintptr_t ImportTagsFromConfig = 0x58;
            static constexpr std::uintptr_t WarnOnInvalidTags = 0x59;
            static constexpr std::uintptr_t ClearInvalidTags = 0x5A;
            static constexpr std::uintptr_t AllowEditorTagUnloading = 0x5B;
            static constexpr std::uintptr_t AllowGameTagUnloading = 0x5C;
            static constexpr std::uintptr_t FastReplication = 0x5D;
            static constexpr std::uintptr_t bDynamicReplication = 0x5E;
            static constexpr std::uintptr_t InvalidTagCharacters = 0x60;
            static constexpr std::uintptr_t CategoryRemapping = 0x70;
            static constexpr std::uintptr_t GameplayTagTableList = 0x80;
            static constexpr std::uintptr_t CommonlyReplicatedTags = 0x90;
            static constexpr std::uintptr_t NumBitsForContainerSize = 0xA0;
            static constexpr std::uintptr_t NetIndexFirstBitSegment = 0xA4;
            static constexpr std::uintptr_t RestrictedConfigFiles = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"ImportTagsFromConfig", 0x58, "BoolProperty"},
            {"WarnOnInvalidTags", 0x59, "BoolProperty"},
            {"ClearInvalidTags", 0x5A, "BoolProperty"},
            {"AllowEditorTagUnloading", 0x5B, "BoolProperty"},
            {"AllowGameTagUnloading", 0x5C, "BoolProperty"},
            {"FastReplication", 0x5D, "BoolProperty"},
            {"bDynamicReplication", 0x5E, "BoolProperty"},
            {"InvalidTagCharacters", 0x60, "StrProperty"},
            {"CategoryRemapping", 0x70, "ArrayProperty"},
            {"GameplayTagTableList", 0x80, "ArrayProperty"},
            {"CommonlyReplicatedTags", 0x90, "ArrayProperty"},
            {"NumBitsForContainerSize", 0xA0, "IntProperty"},
            {"NetIndexFirstBitSegment", 0xA4, "IntProperty"},
            {"RestrictedConfigFiles", 0xA8, "ArrayProperty"},
        }};
    };

    struct RestrictedConfigInfo
    {
        static constexpr std::string_view Name = "RestrictedConfigInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t RestrictedConfigName = 0x0;
            static constexpr std::uintptr_t Owners = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"RestrictedConfigName", 0x0, "StrProperty"},
            {"Owners", 0x10, "ArrayProperty"},
        }};
    };

    struct RestrictedGameplayTagTableRow
    {
        static constexpr std::string_view Name = "RestrictedGameplayTagTableRow";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "GameplayTagTableRow";
        struct Offsets
        {
            static constexpr std::uintptr_t bAllowNonRestrictedChildren = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bAllowNonRestrictedChildren", 0x20, "BoolProperty"},
        }};
    };

    struct RestrictedGameplayTagsList
    {
        static constexpr std::string_view Name = "RestrictedGameplayTagsList";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t ConfigFileName = 0x28;
            static constexpr std::uintptr_t RestrictedGameplayTagList = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ConfigFileName", 0x28, "StrProperty"},
            {"RestrictedGameplayTagList", 0x38, "ArrayProperty"},
        }};
    };

}

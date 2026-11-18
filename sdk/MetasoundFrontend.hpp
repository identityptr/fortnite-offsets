#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::MetasoundFrontend
{
    struct CatCompositeDataSchema
    {
        static constexpr std::string_view Name = "CatCompositeDataSchema";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "CatDataTypeSchema";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
            static constexpr std::uintptr_t BaseType = 0x4;
            static constexpr std::uintptr_t FamilyType = 0x8;
            static constexpr std::uintptr_t FriendlyName = 0x10;
            static constexpr std::uintptr_t bIsAbstract = 0x20;
            static constexpr std::uintptr_t bIsParentsDefault = 0x21;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Name", 0x0, "NameProperty"},
            {"BaseType", 0x4, "NameProperty"},
            {"FamilyType", 0x8, "NameProperty"},
            {"FriendlyName", 0x10, "TextProperty"},
            {"bIsAbstract", 0x20, "BoolProperty"},
            {"bIsParentsDefault", 0x21, "BoolProperty"},
        }};
    };

    struct CatDataTypeSchema
    {
        static constexpr std::string_view Name = "CatDataTypeSchema";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
            static constexpr std::uintptr_t BaseType = 0x4;
            static constexpr std::uintptr_t FamilyType = 0x8;
            static constexpr std::uintptr_t FriendlyName = 0x10;
            static constexpr std::uintptr_t bIsAbstract = 0x20;
            static constexpr std::uintptr_t bIsParentsDefault = 0x21;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Name", 0x0, "NameProperty"},
            {"BaseType", 0x4, "NameProperty"},
            {"FamilyType", 0x8, "NameProperty"},
            {"FriendlyName", 0x10, "TextProperty"},
            {"bIsAbstract", 0x20, "BoolProperty"},
            {"bIsParentsDefault", 0x21, "BoolProperty"},
        }};
    };

    struct CatDiscreteChannel
    {
        static constexpr std::string_view Name = "CatDiscreteChannel";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ElevationDegrees = 0x0;
            static constexpr std::uintptr_t AzimuthDegrees = 0x4;
            static constexpr std::uintptr_t ID = 0x8;
            static constexpr std::uintptr_t bIsSpatialized = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ElevationDegrees", 0x0, "FloatProperty"},
            {"AzimuthDegrees", 0x4, "FloatProperty"},
            {"ID", 0x8, "NameProperty"},
            {"bIsSpatialized", 0xC, "BoolProperty"},
        }};
    };

    struct CatDiscreteDataSchema
    {
        static constexpr std::string_view Name = "CatDiscreteDataSchema";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "CatDataTypeSchema";
        struct Offsets
        {
            static constexpr std::uintptr_t OrderPolicy = 0x28;
            static constexpr std::uintptr_t Order = 0x30;
            static constexpr std::uintptr_t Speakers = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"OrderPolicy", 0x28, "EnumProperty"},
            {"Order", 0x30, "ArrayProperty"},
            {"Speakers", 0x40, "ArrayProperty"},
        }};
    };

    struct CatSoundfieldDataSchema
    {
        static constexpr std::string_view Name = "CatSoundfieldDataSchema";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "CatDataTypeSchema";
        struct Offsets
        {
            static constexpr std::uintptr_t NumOrders = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"NumOrders", 0x28, "IntProperty"},
        }};
    };

    struct MetaSoundAssetKey
    {
        static constexpr std::string_view Name = "MetaSoundAssetKey";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ClassName = 0x0;
            static constexpr std::uintptr_t Version = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ClassName", 0x0, "StructProperty"},
            {"Version", 0xC, "StructProperty"},
        }};
    };

    struct MetaSoundAssetTagClassCollections
    {
        static constexpr std::string_view Name = "MetaSoundAssetTagClassCollections";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MetaSoundAssetTagCollections
    {
        static constexpr std::string_view Name = "MetaSoundAssetTagCollections";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MetaSoundBuilderDocument
    {
        static constexpr std::string_view Name = "MetaSoundBuilderDocument";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Document = 0x30;
            static constexpr std::uintptr_t MetaSoundUClass = 0x128;
            static constexpr std::uintptr_t BuilderUClass = 0x130;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Document", 0x30, "StructProperty"},
            {"MetaSoundUClass", 0x128, "ClassProperty"},
            {"BuilderUClass", 0x130, "ClassProperty"},
        }};
    };

    struct MetaSoundClassInterfaceInfo
    {
        static constexpr std::string_view Name = "MetaSoundClassInterfaceInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t DefinedInterfaces = 0x0;
            static constexpr std::uintptr_t SearchInfo = 0x10;
            static constexpr std::uintptr_t Inputs = 0x50;
            static constexpr std::uintptr_t Outputs = 0x60;
            static constexpr std::uintptr_t InheritedInterfaces = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"DefinedInterfaces", 0x0, "ArrayProperty"},
            {"SearchInfo", 0x10, "StructProperty"},
            {"Inputs", 0x50, "ArrayProperty"},
            {"Outputs", 0x60, "ArrayProperty"},
            {"InheritedInterfaces", 0x70, "ArrayProperty"},
        }};
    };

    struct MetaSoundClassSearchInfo
    {
        static constexpr std::string_view Name = "MetaSoundClassSearchInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ClassDisplayName = 0x0;
            static constexpr std::uintptr_t ClassDescription = 0x10;
            static constexpr std::uintptr_t Hierarchy = 0x20;
            static constexpr std::uintptr_t Keywords = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ClassDisplayName", 0x0, "TextProperty"},
            {"ClassDescription", 0x10, "TextProperty"},
            {"Hierarchy", 0x20, "ArrayProperty"},
            {"Keywords", 0x30, "ArrayProperty"},
        }};
    };

    struct MetaSoundClassVertexCollectionInfo
    {
        static constexpr std::string_view Name = "MetaSoundClassVertexCollectionInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ClassVertexInfo = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ClassVertexInfo", 0x0, "ArrayProperty"},
        }};
    };

    struct MetaSoundClassVertexInfo
    {
        static constexpr std::string_view Name = "MetaSoundClassVertexInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
            static constexpr std::uintptr_t TypeName = 0x4;
            static constexpr std::uintptr_t AccessType = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Name", 0x0, "NameProperty"},
            {"TypeName", 0x4, "NameProperty"},
            {"AccessType", 0x8, "EnumProperty"},
        }};
    };

    struct MetaSoundDocumentInfo
    {
        static constexpr std::string_view Name = "MetaSoundDocumentInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t DocumentVersion = 0x0;
            static constexpr std::uintptr_t ReferencedAssetKeys = 0x8;
            static constexpr std::uintptr_t bIsPreset = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"DocumentVersion", 0x0, "StructProperty"},
            {"ReferencedAssetKeys", 0x8, "ArrayProperty"},
            {"bIsPreset", 0x18, "BoolProperty"},
        }};
    };

    struct MetaSoundDocumentInterface
    {
        static constexpr std::string_view Name = "MetaSoundDocumentInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MetaSoundDynamicInterfaceNodeConfiguration
    {
        static constexpr std::string_view Name = "MetaSoundDynamicInterfaceNodeConfiguration";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MetaSoundFrontendNodeConfiguration";
        struct Offsets
        {
            static constexpr std::uintptr_t SubInterfaceCounts = 0x8;
            static constexpr std::uintptr_t VariantSelections = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SubInterfaceCounts", 0x8, "MapProperty"},
            {"VariantSelections", 0x18, "MapProperty"},
        }};
    };

    struct MetaSoundFrontendDocumentBuilder
    {
        static constexpr std::string_view Name = "MetaSoundFrontendDocumentBuilder";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t DocumentInterface = 0x10;
            static constexpr std::uintptr_t BuildPageID = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DocumentInterface", 0x10, "InterfaceProperty"},
            {"BuildPageID", 0x20, "StructProperty"},
        }};
    };

    struct MetaSoundFrontendDocumentTemplate
    {
        static constexpr std::string_view Name = "MetaSoundFrontendDocumentTemplate";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MetaSoundFrontendDocumentTemplateVertexMetadata
    {
        static constexpr std::string_view Name = "MetaSoundFrontendDocumentTemplateVertexMetadata";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MetaSoundFrontendDocumentVertexTemplate
    {
        static constexpr std::string_view Name = "MetaSoundFrontendDocumentVertexTemplate";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MetaSoundFrontendDocumentTemplate";
        struct Offsets
        {
            static constexpr std::uintptr_t VertexMetadata = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"VertexMetadata", 0x8, "MapProperty"},
        }};
    };

    struct MetaSoundFrontendGraphComment
    {
        static constexpr std::string_view Name = "MetaSoundFrontendGraphComment";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MetaSoundFrontendMemberMetadata
    {
        static constexpr std::string_view Name = "MetaSoundFrontendMemberMetadata";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MetaSoundFrontendNodeConfiguration
    {
        static constexpr std::string_view Name = "MetaSoundFrontendNodeConfiguration";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MetaSoundFrontendPresetTemplate
    {
        static constexpr std::string_view Name = "MetaSoundFrontendPresetTemplate";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MetaSoundFrontendDocumentVertexTemplate";
        struct Offsets
        {
            static constexpr std::uintptr_t Parent = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Parent", 0x18, "InterfaceProperty"},
        }};
    };

    struct MetaSoundFrontendPresetVertexMetadata
    {
        static constexpr std::string_view Name = "MetaSoundFrontendPresetVertexMetadata";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MetaSoundFrontendDocumentTemplateVertexMetadata";
        struct Offsets
        {
            static constexpr std::uintptr_t bOverrideInheritedDefault = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bOverrideInheritedDefault", 0x8, "BoolProperty"},
        }};
    };

    struct MetaSoundFrontendTemplateNodeConfiguration
    {
        static constexpr std::string_view Name = "MetaSoundFrontendTemplateNodeConfiguration";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MetaSoundFrontendNodeConfiguration";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MetasoundCommentNodeIntVector
    {
        static constexpr std::string_view Name = "MetasoundCommentNodeIntVector";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "IntVector2";
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

    struct MetasoundFrontendClass
    {
        static constexpr std::string_view Name = "MetasoundFrontendClass";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ID = 0x8;
            static constexpr std::uintptr_t MetaData = 0x18;
            static constexpr std::uintptr_t Interface = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ID", 0x8, "StructProperty"},
            {"MetaData", 0x18, "StructProperty"},
            {"Interface", 0x40, "StructProperty"},
        }};
    };

    struct MetasoundFrontendClassEnvironmentVariable
    {
        static constexpr std::string_view Name = "MetasoundFrontendClassEnvironmentVariable";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
            static constexpr std::uintptr_t TypeName = 0x4;
            static constexpr std::uintptr_t bIsRequired = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Name", 0x0, "NameProperty"},
            {"TypeName", 0x4, "NameProperty"},
            {"bIsRequired", 0x8, "BoolProperty"},
        }};
    };

    struct MetasoundFrontendClassInput
    {
        static constexpr std::string_view Name = "MetasoundFrontendClassInput";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MetasoundFrontendClassVertex";
        struct Offsets
        {
            static constexpr std::uintptr_t Defaults = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Defaults", 0x30, "ArrayProperty"},
        }};
    };

    struct MetasoundFrontendClassInputDefault
    {
        static constexpr std::string_view Name = "MetasoundFrontendClassInputDefault";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Literal = 0x0;
            static constexpr std::uintptr_t PageId = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Literal", 0x0, "StructProperty"},
            {"PageId", 0x58, "StructProperty"},
        }};
    };

    struct MetasoundFrontendClassInterface
    {
        static constexpr std::string_view Name = "MetasoundFrontendClassInterface";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Inputs = 0x0;
            static constexpr std::uintptr_t Outputs = 0x10;
            static constexpr std::uintptr_t Environment = 0x20;
            static constexpr std::uintptr_t ChangeID = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Inputs", 0x0, "ArrayProperty"},
            {"Outputs", 0x10, "ArrayProperty"},
            {"Environment", 0x20, "ArrayProperty"},
            {"ChangeID", 0x30, "StructProperty"},
        }};
    };

    struct MetasoundFrontendClassMetadata
    {
        static constexpr std::string_view Name = "MetasoundFrontendClassMetadata";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ClassName = 0x0;
            static constexpr std::uintptr_t Version = 0xC;
            static constexpr std::uintptr_t Type = 0x14;
            static constexpr std::uintptr_t AccessFlags = 0x16;
            static constexpr std::uintptr_t ChangeID = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"ClassName", 0x0, "StructProperty"},
            {"Version", 0xC, "StructProperty"},
            {"Type", 0x14, "EnumProperty"},
            {"AccessFlags", 0x16, "UInt16Property"},
            {"ChangeID", 0x18, "StructProperty"},
        }};
    };

    struct MetasoundFrontendClassName
    {
        static constexpr std::string_view Name = "MetasoundFrontendClassName";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Namespace = 0x0;
            static constexpr std::uintptr_t Name = 0x4;
            static constexpr std::uintptr_t Variant = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Namespace", 0x0, "NameProperty"},
            {"Name", 0x4, "NameProperty"},
            {"Variant", 0x8, "NameProperty"},
        }};
    };

    struct MetasoundFrontendClassOutput
    {
        static constexpr std::string_view Name = "MetasoundFrontendClassOutput";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MetasoundFrontendClassVertex";
        struct Offsets
        {
            static constexpr std::uintptr_t NodeId = 0x18;
            static constexpr std::uintptr_t AccessType = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"NodeId", 0x18, "StructProperty"},
            {"AccessType", 0x28, "EnumProperty"},
        }};
    };

    struct MetasoundFrontendClassStyle
    {
        static constexpr std::string_view Name = "MetasoundFrontendClassStyle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MetasoundFrontendClassStyleDisplay
    {
        static constexpr std::string_view Name = "MetasoundFrontendClassStyleDisplay";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MetasoundFrontendClassVariable
    {
        static constexpr std::string_view Name = "MetasoundFrontendClassVariable";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MetasoundFrontendClassVertex";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultLiteral = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DefaultLiteral", 0x30, "StructProperty"},
        }};
    };

    struct MetasoundFrontendClassVertex
    {
        static constexpr std::string_view Name = "MetasoundFrontendClassVertex";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MetasoundFrontendVertex";
        struct Offsets
        {
            static constexpr std::uintptr_t NodeId = 0x18;
            static constexpr std::uintptr_t AccessType = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"NodeId", 0x18, "StructProperty"},
            {"AccessType", 0x28, "EnumProperty"},
        }};
    };

    struct MetasoundFrontendDocument
    {
        static constexpr std::string_view Name = "MetasoundFrontendDocument";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t MetaData = 0x10;
            static constexpr std::uintptr_t Interfaces = 0x20;
            static constexpr std::uintptr_t RootGraph = 0x30;
            static constexpr std::uintptr_t SubGraphs = 0xC0;
            static constexpr std::uintptr_t Dependencies = 0xD0;
            static constexpr std::uintptr_t Template = 0xE0;
            static constexpr std::uintptr_t IdCounter = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"MetaData", 0x10, "StructProperty"},
            {"Interfaces", 0x20, "SetProperty"},
            {"RootGraph", 0x30, "StructProperty"},
            {"SubGraphs", 0xC0, "ArrayProperty"},
            {"Dependencies", 0xD0, "ArrayProperty"},
            {"Template", 0xE0, "StructProperty"},
            {"IdCounter", 0xF0, "UInt32Property"},
        }};
    };

    struct MetasoundFrontendDocumentMetadata
    {
        static constexpr std::string_view Name = "MetasoundFrontendDocumentMetadata";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Version = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Version", 0x0, "StructProperty"},
        }};
    };

    struct MetasoundFrontendEdge
    {
        static constexpr std::string_view Name = "MetasoundFrontendEdge";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t FromNodeID = 0x0;
            static constexpr std::uintptr_t FromVertexID = 0x10;
            static constexpr std::uintptr_t ToNodeID = 0x20;
            static constexpr std::uintptr_t ToVertexID = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"FromNodeID", 0x0, "StructProperty"},
            {"FromVertexID", 0x10, "StructProperty"},
            {"ToNodeID", 0x20, "StructProperty"},
            {"ToVertexID", 0x30, "StructProperty"},
        }};
    };

    struct MetasoundFrontendEdgeStyle
    {
        static constexpr std::string_view Name = "MetasoundFrontendEdgeStyle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t NodeId = 0x0;
            static constexpr std::uintptr_t OutputName = 0x10;
            static constexpr std::uintptr_t LiteralColorPairs = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"NodeId", 0x0, "StructProperty"},
            {"OutputName", 0x10, "NameProperty"},
            {"LiteralColorPairs", 0x18, "ArrayProperty"},
        }};
    };

    struct MetasoundFrontendEdgeStyleLiteralColorPair
    {
        static constexpr std::string_view Name = "MetasoundFrontendEdgeStyleLiteralColorPair";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x0;
            static constexpr std::uintptr_t Color = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Value", 0x0, "StructProperty"},
            {"Color", 0x58, "StructProperty"},
        }};
    };

    struct MetasoundFrontendGraph
    {
        static constexpr std::string_view Name = "MetasoundFrontendGraph";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Nodes = 0x0;
            static constexpr std::uintptr_t Edges = 0x10;
            static constexpr std::uintptr_t Variables = 0x20;
            static constexpr std::uintptr_t PageId = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Nodes", 0x0, "ArrayProperty"},
            {"Edges", 0x10, "ArrayProperty"},
            {"Variables", 0x20, "ArrayProperty"},
            {"PageId", 0x30, "StructProperty"},
        }};
    };

    struct MetasoundFrontendGraphClass
    {
        static constexpr std::string_view Name = "MetasoundFrontendGraphClass";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MetasoundFrontendClass";
        struct Offsets
        {
            static constexpr std::uintptr_t PagedGraphs = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PagedGraphs", 0x80, "ArrayProperty"},
        }};
    };

    struct MetasoundFrontendGraphClassPresetOptions
    {
        static constexpr std::string_view Name = "MetasoundFrontendGraphClassPresetOptions";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MetasoundFrontendGraphLayer
    {
        static constexpr std::string_view Name = "MetasoundFrontendGraphLayer";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Dependencies = 0x0;
            static constexpr std::uintptr_t Graph = 0x10;
            static constexpr std::uintptr_t Inputs = 0x50;
            static constexpr std::uintptr_t Outputs = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Dependencies", 0x0, "ArrayProperty"},
            {"Graph", 0x10, "StructProperty"},
            {"Inputs", 0x50, "ArrayProperty"},
            {"Outputs", 0x60, "ArrayProperty"},
        }};
    };

    struct MetasoundFrontendGraphStyle
    {
        static constexpr std::string_view Name = "MetasoundFrontendGraphStyle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MetasoundFrontendInterface
    {
        static constexpr std::string_view Name = "MetasoundFrontendInterface";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MetasoundFrontendClassInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t MetaData = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MetaData", 0x40, "StructProperty"},
        }};
    };

    struct MetasoundFrontendInterfaceBinding
    {
        static constexpr std::string_view Name = "MetasoundFrontendInterfaceBinding";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t OutputInterfaceVersion = 0x0;
            static constexpr std::uintptr_t InputInterfaceVersion = 0xC;
            static constexpr std::uintptr_t BindingPriority = 0x18;
            static constexpr std::uintptr_t VertexBindings = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"OutputInterfaceVersion", 0x0, "StructProperty"},
            {"InputInterfaceVersion", 0xC, "StructProperty"},
            {"BindingPriority", 0x18, "IntProperty"},
            {"VertexBindings", 0x20, "ArrayProperty"},
        }};
    };

    struct MetasoundFrontendInterfaceMetadata
    {
        static constexpr std::string_view Name = "MetasoundFrontendInterfaceMetadata";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Version = 0x0;
            static constexpr std::uintptr_t UClassOptions = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Version", 0x0, "StructProperty"},
            {"UClassOptions", 0x10, "ArrayProperty"},
        }};
    };

    struct MetasoundFrontendInterfaceStyle
    {
        static constexpr std::string_view Name = "MetasoundFrontendInterfaceStyle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MetasoundFrontendInterfaceUClassOptions
    {
        static constexpr std::string_view Name = "MetasoundFrontendInterfaceUClassOptions";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ClassPath = 0x0;
            static constexpr std::uintptr_t bIsModifiable = 0x8;
            static constexpr std::uintptr_t bIsDefault = 0x9;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ClassPath", 0x0, "StructProperty"},
            {"bIsModifiable", 0x8, "BoolProperty"},
            {"bIsDefault", 0x9, "BoolProperty"},
        }};
    };

    struct MetasoundFrontendInterfaceVertexBinding
    {
        static constexpr std::string_view Name = "MetasoundFrontendInterfaceVertexBinding";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t OutputName = 0x0;
            static constexpr std::uintptr_t InputName = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OutputName", 0x0, "NameProperty"},
            {"InputName", 0x4, "NameProperty"},
        }};
    };

    struct MetasoundFrontendLiteral
    {
        static constexpr std::string_view Name = "MetasoundFrontendLiteral";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Type = 0x0;
            static constexpr std::uintptr_t AsNumDefault = 0x4;
            static constexpr std::uintptr_t AsBoolean = 0x8;
            static constexpr std::uintptr_t AsInteger = 0x18;
            static constexpr std::uintptr_t AsFloat = 0x28;
            static constexpr std::uintptr_t AsString = 0x38;
            static constexpr std::uintptr_t AsUObject = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Type", 0x0, "EnumProperty"},
            {"AsNumDefault", 0x4, "IntProperty"},
            {"AsBoolean", 0x8, "ArrayProperty"},
            {"AsInteger", 0x18, "ArrayProperty"},
            {"AsFloat", 0x28, "ArrayProperty"},
            {"AsString", 0x38, "ArrayProperty"},
            {"AsUObject", 0x48, "ArrayProperty"},
        }};
    };

    struct MetasoundFrontendNode
    {
        static constexpr std::string_view Name = "MetasoundFrontendNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ID = 0x0;
            static constexpr std::uintptr_t ClassID = 0x10;
            static constexpr std::uintptr_t Name = 0x20;
            static constexpr std::uintptr_t Interface = 0x28;
            static constexpr std::uintptr_t InputLiterals = 0x58;
            static constexpr std::uintptr_t Configuration = 0x68;
            static constexpr std::uintptr_t ClassInterfaceOverride = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"ID", 0x0, "StructProperty"},
            {"ClassID", 0x10, "StructProperty"},
            {"Name", 0x20, "NameProperty"},
            {"Interface", 0x28, "StructProperty"},
            {"InputLiterals", 0x58, "ArrayProperty"},
            {"Configuration", 0x68, "StructProperty"},
            {"ClassInterfaceOverride", 0x78, "StructProperty"},
        }};
    };

    struct MetasoundFrontendNodeInterface
    {
        static constexpr std::string_view Name = "MetasoundFrontendNodeInterface";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Inputs = 0x0;
            static constexpr std::uintptr_t Outputs = 0x10;
            static constexpr std::uintptr_t Environment = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Inputs", 0x0, "ArrayProperty"},
            {"Outputs", 0x10, "ArrayProperty"},
            {"Environment", 0x20, "ArrayProperty"},
        }};
    };

    struct MetasoundFrontendNodeStyle
    {
        static constexpr std::string_view Name = "MetasoundFrontendNodeStyle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MetasoundFrontendNodeStyleDisplay
    {
        static constexpr std::string_view Name = "MetasoundFrontendNodeStyleDisplay";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MetasoundFrontendVariable
    {
        static constexpr std::string_view Name = "MetasoundFrontendVariable";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
            static constexpr std::uintptr_t TypeName = 0x4;
            static constexpr std::uintptr_t Literal = 0x8;
            static constexpr std::uintptr_t ID = 0x60;
            static constexpr std::uintptr_t VariableNodeID = 0x70;
            static constexpr std::uintptr_t MutatorNodeID = 0x80;
            static constexpr std::uintptr_t AccessorNodeIDs = 0x90;
            static constexpr std::uintptr_t DeferredAccessorNodeIDs = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"Name", 0x0, "NameProperty"},
            {"TypeName", 0x4, "NameProperty"},
            {"Literal", 0x8, "StructProperty"},
            {"ID", 0x60, "StructProperty"},
            {"VariableNodeID", 0x70, "StructProperty"},
            {"MutatorNodeID", 0x80, "StructProperty"},
            {"AccessorNodeIDs", 0x90, "ArrayProperty"},
            {"DeferredAccessorNodeIDs", 0xA0, "ArrayProperty"},
        }};
    };

    struct MetasoundFrontendVersion
    {
        static constexpr std::string_view Name = "MetasoundFrontendVersion";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
            static constexpr std::uintptr_t Number = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Name", 0x0, "NameProperty"},
            {"Number", 0x4, "StructProperty"},
        }};
    };

    struct MetasoundFrontendVersionNumber
    {
        static constexpr std::string_view Name = "MetasoundFrontendVersionNumber";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Major = 0x0;
            static constexpr std::uintptr_t Minor = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Major", 0x0, "IntProperty"},
            {"Minor", 0x4, "IntProperty"},
        }};
    };

    struct MetasoundFrontendVertex
    {
        static constexpr std::string_view Name = "MetasoundFrontendVertex";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
            static constexpr std::uintptr_t TypeName = 0x4;
            static constexpr std::uintptr_t VertexID = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Name", 0x0, "NameProperty"},
            {"TypeName", 0x4, "NameProperty"},
            {"VertexID", 0x8, "StructProperty"},
        }};
    };

    struct MetasoundFrontendVertexHandle
    {
        static constexpr std::string_view Name = "MetasoundFrontendVertexHandle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t NodeId = 0x0;
            static constexpr std::uintptr_t VertexID = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"NodeId", 0x0, "StructProperty"},
            {"VertexID", 0x10, "StructProperty"},
        }};
    };

    struct MetasoundFrontendVertexLiteral
    {
        static constexpr std::string_view Name = "MetasoundFrontendVertexLiteral";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t VertexID = 0x0;
            static constexpr std::uintptr_t Value = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VertexID", 0x0, "StructProperty"},
            {"Value", 0x10, "StructProperty"},
        }};
    };

    struct MetasoundFrontendVertexMetadata
    {
        static constexpr std::string_view Name = "MetasoundFrontendVertexMetadata";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MetasoundParameterPack
    {
        static constexpr std::string_view Name = "MetasoundParameterPack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 16> FunctionNames{{
            "GetBool",
            "GetFloat",
            "GetInt",
            "GetString",
            "GetTrigger",
            "HasBool",
            "HasFloat",
            "HasInt",
            "HasString",
            "HasTrigger",
            "MakeMetasoundParameterPack",
            "SetBool",
            "SetFloat",
            "SetInt",
            "SetString",
            "SetTrigger",
        }};
    };

    struct NodeTemplateGenerateInterfaceParams
    {
        static constexpr std::string_view Name = "NodeTemplateGenerateInterfaceParams";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t InputsToConnect = 0x0;
            static constexpr std::uintptr_t OutputsToConnect = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"InputsToConnect", 0x0, "ArrayProperty"},
            {"OutputsToConnect", 0x10, "ArrayProperty"},
        }};
    };

}

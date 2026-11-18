#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::AssembledMeshSystem
{
    struct AssembledComponentReferences
    {
        static constexpr std::string_view Name = "AssembledComponentReferences";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SkeletalMeshComponent = 0x0;
            static constexpr std::uintptr_t CustomizableObjectInstanceUsage = 0x8;
            static constexpr std::uintptr_t AssembledMeshSchemaTag = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SkeletalMeshComponent", 0x0, "ObjectProperty"},
            {"CustomizableObjectInstanceUsage", 0x8, "ObjectProperty"},
            {"AssembledMeshSchemaTag", 0x10, "StructProperty"},
        }};
    };

    struct AssembledMaterialsOverride
    {
        static constexpr std::string_view Name = "AssembledMaterialsOverride";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Materials = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Materials", 0x0, "ArrayProperty"},
        }};
    };

    struct AssembledMeshAttachmentRules
    {
        static constexpr std::string_view Name = "AssembledMeshAttachmentRules";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t AttachSocketName = 0x0;
            static constexpr std::uintptr_t AttachOffset = 0x8;
            static constexpr std::uintptr_t AttachRotation = 0x20;
            static constexpr std::uintptr_t AttachScale = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"AttachSocketName", 0x0, "NameProperty"},
            {"AttachOffset", 0x8, "StructProperty"},
            {"AttachRotation", 0x20, "StructProperty"},
            {"AttachScale", 0x38, "StructProperty"},
        }};
    };

    struct AssembledMeshSchema
    {
        static constexpr std::string_view Name = "AssembledMeshSchema";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimaryDataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t MeshSchemaTag = 0x28;
            static constexpr std::uintptr_t CustomizableObjectInstance = 0x30;
            static constexpr std::uintptr_t CustomizableObject = 0x50;
            static constexpr std::uintptr_t ComponentIndex = 0x70;
            static constexpr std::uintptr_t ComponentName = 0x74;
            static constexpr std::uintptr_t SkeletalMesh = 0x78;
            static constexpr std::uintptr_t SkeletalMeshes = 0x98;
            static constexpr std::uintptr_t OverrideMaterialsPerMesh = 0xA8;
            static constexpr std::uintptr_t OverrideTextures = 0xB8;
            static constexpr std::uintptr_t SelectedIntParams = 0xC8;
            static constexpr std::uintptr_t SelectedFloatParams = 0xD8;
            static constexpr std::uintptr_t AttachmentRules = 0xE8;
            static constexpr std::uintptr_t AnimClass = 0x138;
            static constexpr std::uintptr_t SoundLibraryTags = 0x158;
            static constexpr std::uintptr_t AdditionalData = 0x178;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"MeshSchemaTag", 0x28, "StructProperty"},
            {"CustomizableObjectInstance", 0x30, "SoftObjectProperty"},
            {"CustomizableObject", 0x50, "SoftObjectProperty"},
            {"ComponentIndex", 0x70, "IntProperty"},
            {"ComponentName", 0x74, "NameProperty"},
            {"SkeletalMesh", 0x78, "SoftObjectProperty"},
            {"SkeletalMeshes", 0x98, "ArrayProperty"},
            {"OverrideMaterialsPerMesh", 0xA8, "ArrayProperty"},
            {"OverrideTextures", 0xB8, "ArrayProperty"},
            {"SelectedIntParams", 0xC8, "MapProperty"},
            {"SelectedFloatParams", 0xD8, "MapProperty"},
            {"AttachmentRules", 0xE8, "StructProperty"},
            {"AnimClass", 0x138, "SoftClassProperty"},
            {"SoundLibraryTags", 0x158, "StructProperty"},
            {"AdditionalData", 0x178, "ArrayProperty"},
        }};
    };

    struct AssembledMeshSchemaData
    {
        static constexpr std::string_view Name = "AssembledMeshSchemaData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AssembledMeshSchemaData_Icons
    {
        static constexpr std::string_view Name = "AssembledMeshSchemaData_Icons";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AssembledMeshSchemaData";
        struct Offsets
        {
            static constexpr std::uintptr_t WidePreviewImage = 0x0;
            static constexpr std::uintptr_t SmallPreviewImage = 0x20;
            static constexpr std::uintptr_t LargePreviewImage = 0x40;
            static constexpr std::uintptr_t FullScreenImage = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"WidePreviewImage", 0x0, "SoftObjectProperty"},
            {"SmallPreviewImage", 0x20, "SoftObjectProperty"},
            {"LargePreviewImage", 0x40, "SoftObjectProperty"},
            {"FullScreenImage", 0x60, "SoftObjectProperty"},
        }};
    };

    struct AssembledMeshUserComponent
    {
        static constexpr std::string_view Name = "AssembledMeshUserComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t LoadedAssets = 0xC0;
            static constexpr std::uintptr_t MeshParts = 0x100;
            static constexpr std::uintptr_t MeshPartSoftRefs = 0x110;
            static constexpr std::uintptr_t MeshPartComponents = 0x130;
            static constexpr std::uintptr_t bDuplicateCOIs = 0x140;
            static constexpr std::uintptr_t bAssignMeshPartsOnBeginPlay = 0x141;
            static constexpr std::uintptr_t bSetRootMeshOnAttachComponent = 0x141;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"LoadedAssets", 0xC0, "ArrayProperty"},
            {"MeshParts", 0x100, "ArrayProperty"},
            {"MeshPartSoftRefs", 0x110, "ArrayProperty"},
            {"MeshPartComponents", 0x130, "ArrayProperty"},
            {"bDuplicateCOIs", 0x140, "BoolProperty"},
            {"bAssignMeshPartsOnBeginPlay", 0x141, "BoolProperty"},
            {"bSetRootMeshOnAttachComponent", 0x141, "BoolProperty"},
        }};

        inline static constexpr std::array<std::string_view, 9> FunctionNames{{
            "CustomizationCompleted",
            "GatherAndAssignAssembledMeshParts",
            "GetAttachToComponent",
            "GetMeshPart",
            "GetMeshPartByIndex",
            "GetNumMeshParts",
            "OnRep_MeshParts",
            "SetMeshPart",
            "SetMeshParts",
        }};
    };

    struct AssembledMeshUser_AttachToComponentSpecifier
    {
        static constexpr std::string_view Name = "AssembledMeshUser_AttachToComponentSpecifier";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AssembledTextureOverrideData
    {
        static constexpr std::string_view Name = "AssembledTextureOverrideData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ParamName = 0x0;
            static constexpr std::uintptr_t Texture = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ParamName", 0x0, "NameProperty"},
            {"Texture", 0x8, "SoftObjectProperty"},
        }};
    };

    struct BaseParamData
    {
        static constexpr std::string_view Name = "BaseParamData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ParamName = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ParamName", 0x0, "StrProperty"},
        }};
    };

    struct FloatParamData
    {
        static constexpr std::string_view Name = "FloatParamData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "BaseParamData";
        struct Offsets
        {
            static constexpr std::uintptr_t FloatValue = 0x10;
            static constexpr std::uintptr_t MinFloatValue = 0x14;
            static constexpr std::uintptr_t MaxFloatValue = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"FloatValue", 0x10, "FloatProperty"},
            {"MinFloatValue", 0x14, "FloatProperty"},
            {"MaxFloatValue", 0x18, "FloatProperty"},
        }};
    };

    struct HeadAccDataAssetLink
    {
        static constexpr std::string_view Name = "HeadAccDataAssetLink";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAssetLink";
        struct Offsets
        {
            static constexpr std::uintptr_t DataAsset = 0x80;
            static constexpr std::uintptr_t DataAssetCached = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DataAsset", 0x80, "SoftObjectProperty"},
            {"DataAssetCached", 0xA0, "ObjectProperty"},
        }};
    };

    struct HipAccDataAssetLink
    {
        static constexpr std::string_view Name = "HipAccDataAssetLink";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAssetLink";
        struct Offsets
        {
            static constexpr std::uintptr_t DataAsset = 0x80;
            static constexpr std::uintptr_t DataAssetCached = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DataAsset", 0x80, "SoftObjectProperty"},
            {"DataAssetCached", 0xA0, "ObjectProperty"},
        }};
    };

    struct IntParamData
    {
        static constexpr std::string_view Name = "IntParamData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "BaseParamData";
        struct Offsets
        {
            static constexpr std::uintptr_t ParamOptions = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ParamOptions", 0x10, "ArrayProperty"},
        }};
    };

    struct NeckAccDataAssetLink
    {
        static constexpr std::string_view Name = "NeckAccDataAssetLink";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAssetLink";
        struct Offsets
        {
            static constexpr std::uintptr_t DataAsset = 0x80;
            static constexpr std::uintptr_t DataAssetCached = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DataAsset", 0x80, "SoftObjectProperty"},
            {"DataAssetCached", 0xA0, "ObjectProperty"},
        }};
    };

}

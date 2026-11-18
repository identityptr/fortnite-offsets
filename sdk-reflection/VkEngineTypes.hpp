#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::VkEngineTypes
{
    struct AuroraEntitlementValidationMessage
    {
        static constexpr std::string_view Name = "AuroraEntitlementValidationMessage";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Type = 0x0;
            static constexpr std::uintptr_t At = 0x10;
            static constexpr std::uintptr_t Message = 0x20;
            static constexpr std::uintptr_t Code = 0x30;
            static constexpr std::uintptr_t Detail = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Type", 0x0, "StrProperty"},
            {"At", 0x10, "StrProperty"},
            {"Message", 0x20, "StrProperty"},
            {"Code", 0x30, "StrProperty"},
            {"Detail", 0x40, "StructProperty"},
        }};
    };

    struct AuroraEntitlementValidationResponse
    {
        static constexpr std::string_view Name = "AuroraEntitlementValidationResponse";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Success = 0x0;
            static constexpr std::uintptr_t Messages = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Success", 0x0, "BoolProperty"},
            {"Messages", 0x8, "ArrayProperty"},
        }};
    };

    struct GameFeaturePluginDescriptor
    {
        static constexpr std::string_view Name = "GameFeaturePluginDescriptor";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t BuiltInAutoActivate = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"BuiltInAutoActivate", 0x0, "BoolProperty"},
        }};
    };

    struct VKModuleVersion
    {
        static constexpr std::string_view Name = "VKModuleVersion";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ModuleId = 0x0;
            static constexpr std::uintptr_t Version = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ModuleId", 0x0, "StructProperty"},
            {"Version", 0x10, "IntProperty"},
        }};
    };

    struct VKProjectMetadataValidateResponse
    {
        static constexpr std::string_view Name = "VKProjectMetadataValidateResponse";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t IsValid = 0x0;
            static constexpr std::uintptr_t InvalidProperties = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"IsValid", 0x0, "BoolProperty"},
            {"InvalidProperties", 0x8, "ArrayProperty"},
        }};
    };

    struct VKProjectMetadataValidationError
    {
        static constexpr std::string_view Name = "VKProjectMetadataValidationError";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Property = 0x0;
            static constexpr std::uintptr_t ErrorCode = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Property", 0x0, "StrProperty"},
            {"ErrorCode", 0x10, "StrProperty"},
        }};
    };

    struct ValkyriePluginDescriptor
    {
        static constexpr std::string_view Name = "ValkyriePluginDescriptor";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ValkyrieSettings = 0x0;
            static constexpr std::uintptr_t GameFeaturePluginDescriptor = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ValkyrieSettings", 0x0, "StructProperty"},
            {"GameFeaturePluginDescriptor", 0x18, "StructProperty"},
        }};
    };

    struct ValkyriePluginReferenceDescriptor
    {
        static constexpr std::string_view Name = "ValkyriePluginReferenceDescriptor";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
            static constexpr std::uintptr_t bIsRoot = 0x10;
            static constexpr std::uintptr_t bIsPublic = 0x11;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Name", 0x0, "StrProperty"},
            {"bIsRoot", 0x10, "BoolProperty"},
            {"bIsPublic", 0x11, "BoolProperty"},
        }};
    };

    struct ValkyriePluginSettings
    {
        static constexpr std::string_view Name = "ValkyriePluginSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t LibraryFolderMode = 0x0;
            static constexpr std::uintptr_t LibraryCustomPath = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"LibraryFolderMode", 0x0, "EnumProperty"},
            {"LibraryCustomPath", 0x8, "StrProperty"},
        }};
    };

    struct ValkyrieProjectBindingsDescriptor
    {
        static constexpr std::string_view Name = "ValkyrieProjectBindingsDescriptor";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ProjectID = 0x0;
            static constexpr std::uintptr_t Modules = 0x10;
            static constexpr std::uintptr_t bSuppressAutomaticVersePathAssignment = 0x20;
            static constexpr std::uintptr_t ProjectVersePath = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ProjectID", 0x0, "StructProperty"},
            {"Modules", 0x10, "MapProperty"},
            {"bSuppressAutomaticVersePathAssignment", 0x20, "BoolProperty"},
            {"ProjectVersePath", 0x28, "StrProperty"},
        }};
    };

    struct ValkyrieProjectDescriptor
    {
        static constexpr std::string_view Name = "ValkyrieProjectDescriptor";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t FileVersion = 0x0;
            static constexpr std::uintptr_t Title = 0x8;
            static constexpr std::uintptr_t Description = 0x18;
            static constexpr std::uintptr_t KeyArt = 0x28;
            static constexpr std::uintptr_t DocsUrl = 0x38;
            static constexpr std::uintptr_t ApiAccess = 0x48;
            static constexpr std::uintptr_t DefaultAssetAccessSpecifier = 0x4C;
            static constexpr std::uintptr_t CompatibilityVersion = 0x50;
            static constexpr std::uintptr_t RequiredRedirectorStartingVersion = 0x60;
            static constexpr std::uintptr_t EditorPermissions = 0x70;
            static constexpr std::uintptr_t EpicApp = 0x80;
            static constexpr std::uintptr_t SortPriority = 0x90;
            static constexpr std::uintptr_t FeatureSet = 0x98;
            static constexpr std::uintptr_t Plugins = 0xA8;
            static constexpr std::uintptr_t DataSets = 0xB8;
            static constexpr std::uintptr_t Bindings = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 16> Properties{{
            {"FileVersion", 0x0, "ByteProperty"},
            {"Title", 0x8, "StrProperty"},
            {"Description", 0x18, "StrProperty"},
            {"KeyArt", 0x28, "StrProperty"},
            {"DocsUrl", 0x38, "StrProperty"},
            {"ApiAccess", 0x48, "EnumProperty"},
            {"DefaultAssetAccessSpecifier", 0x4C, "EnumProperty"},
            {"CompatibilityVersion", 0x50, "StrProperty"},
            {"RequiredRedirectorStartingVersion", 0x60, "StrProperty"},
            {"EditorPermissions", 0x70, "SetProperty"},
            {"EpicApp", 0x80, "StrProperty"},
            {"SortPriority", 0x90, "FloatProperty"},
            {"FeatureSet", 0x98, "StrProperty"},
            {"Plugins", 0xA8, "ArrayProperty"},
            {"DataSets", 0xB8, "MapProperty"},
            {"Bindings", 0x110, "StructProperty"},
        }};
    };

    struct ValkyrieProjectDescriptorIOContext
    {
        static constexpr std::string_view Name = "ValkyrieProjectDescriptorIOContext";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ValkyrieProjectReferenceDescriptor
    {
        static constexpr std::string_view Name = "ValkyrieProjectReferenceDescriptor";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t FileVersion = 0x0;
            static constexpr std::uintptr_t ID = 0x8;
            static constexpr std::uintptr_t ProjectID = 0x28;
            static constexpr std::uintptr_t bEnabled = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"FileVersion", 0x0, "ByteProperty"},
            {"ID", 0x8, "StrProperty"},
            {"ProjectID", 0x28, "StructProperty"},
            {"bEnabled", 0x38, "BoolProperty"},
        }};
    };

    struct VkAccessCheckRequest
    {
        static constexpr std::string_view Name = "VkAccessCheckRequest";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t AccountIds = 0x0;
            static constexpr std::uintptr_t PlaytestGroupId = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"AccountIds", 0x0, "ArrayProperty"},
            {"PlaytestGroupId", 0x10, "StrProperty"},
        }};
    };

    struct VkAccessCheckResult
    {
        static constexpr std::string_view Name = "VkAccessCheckResult";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ProjectID = 0x0;
            static constexpr std::uintptr_t ForkId = 0x10;
            static constexpr std::uintptr_t Results = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ProjectID", 0x0, "StrProperty"},
            {"ForkId", 0x10, "StrProperty"},
            {"Results", 0x20, "ArrayProperty"},
        }};
    };

    struct VkAccessControl
    {
        static constexpr std::string_view Name = "VkAccessControl";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Admin = 0x0;
            static constexpr std::uintptr_t Edit = 0x1;
            static constexpr std::uintptr_t Operate = 0x2;
            static constexpr std::uintptr_t Publish = 0x3;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Admin", 0x0, "BoolProperty"},
            {"Edit", 0x1, "BoolProperty"},
            {"Operate", 0x2, "BoolProperty"},
            {"Publish", 0x3, "BoolProperty"},
        }};
    };

    struct VkAccountAccessResult
    {
        static constexpr std::string_view Name = "VkAccountAccessResult";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t AccountID = 0x0;
            static constexpr std::uintptr_t ResourceAccess = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"AccountID", 0x0, "StrProperty"},
            {"ResourceAccess", 0x10, "StructProperty"},
        }};
    };

    struct VkArtifactOption
    {
        static constexpr std::string_view Name = "VkArtifactOption";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ArtifactId = 0x0;
            static constexpr std::uintptr_t Role = 0x10;
            static constexpr std::uintptr_t Filter = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ArtifactId", 0x0, "StrProperty"},
            {"Role", 0x10, "EnumProperty"},
            {"Filter", 0x18, "StructProperty"},
        }};
    };

    struct VkAutoLocalizationJobInput
    {
        static constexpr std::string_view Name = "VkAutoLocalizationJobInput";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SourceLanguage = 0x0;
            static constexpr std::uintptr_t LocalizedLanguages = 0x10;
            static constexpr std::uintptr_t SourceStrings = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SourceLanguage", 0x0, "StrProperty"},
            {"LocalizedLanguages", 0x10, "ArrayProperty"},
            {"SourceStrings", 0x20, "ArrayProperty"},
        }};
    };

    struct VkAutoLocalizationJobResultString
    {
        static constexpr std::string_view Name = "VkAutoLocalizationJobResultString";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Source = 0x0;
            static constexpr std::uintptr_t Translations = 0x10;
            static constexpr std::uintptr_t Signatures = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Source", 0x0, "StrProperty"},
            {"Translations", 0x10, "MapProperty"},
            {"Signatures", 0x20, "MapProperty"},
        }};
    };

    struct VkAutoLocalizationJobSourceString
    {
        static constexpr std::string_view Name = "VkAutoLocalizationJobSourceString";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Source = 0x0;
            static constexpr std::uintptr_t LocalizedLanguages = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Source", 0x0, "StrProperty"},
            {"LocalizedLanguages", 0x10, "ArrayProperty"},
        }};
    };

    struct VkAutoLocalizationJobStatusInfo
    {
        static constexpr std::string_view Name = "VkAutoLocalizationJobStatusInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ExecutionId = 0x0;
            static constexpr std::uintptr_t SourceLanguage = 0x10;
            static constexpr std::uintptr_t KeyId = 0x20;
            static constexpr std::uintptr_t Status = 0x30;
            static constexpr std::uintptr_t Result = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"ExecutionId", 0x0, "StrProperty"},
            {"SourceLanguage", 0x10, "StrProperty"},
            {"KeyId", 0x20, "StrProperty"},
            {"Status", 0x30, "EnumProperty"},
            {"Result", 0x38, "ArrayProperty"},
        }};
    };

    struct VkBuildCode
    {
        static constexpr std::string_view Name = "VkBuildCode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t LinkCode = 0x0;
            static constexpr std::uintptr_t LinkVersion = 0x10;
            static constexpr std::uintptr_t LastPublished = 0x18;
            static constexpr std::uintptr_t PublishedBy = 0x20;
            static constexpr std::uintptr_t base = 0x38;
            static constexpr std::uintptr_t CommitMessage = 0x48;
            static constexpr std::uintptr_t ProfileResult = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"LinkCode", 0x0, "StrProperty"},
            {"LinkVersion", 0x10, "IntProperty"},
            {"LastPublished", 0x18, "StructProperty"},
            {"PublishedBy", 0x20, "StructProperty"},
            {"base", 0x38, "StrProperty"},
            {"CommitMessage", 0x48, "StrProperty"},
            {"ProfileResult", 0x58, "StructProperty"},
        }};
    };

    struct VkBuildVersion
    {
        static constexpr std::string_view Name = "VkBuildVersion";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Major = 0x0;
            static constexpr std::uintptr_t Minor = 0x10;
            static constexpr std::uintptr_t Patch = 0x14;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Major", 0x0, "StrProperty"},
            {"Minor", 0x10, "IntProperty"},
            {"Patch", 0x14, "IntProperty"},
        }};
    };

    struct VkCommitInfo
    {
        static constexpr std::string_view Name = "VkCommitInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t UefnVersion = 0x0;
            static constexpr std::uintptr_t Change = 0x10;
            static constexpr std::uintptr_t BuiltLocalization = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"UefnVersion", 0x0, "OptionalProperty"},
            {"Change", 0x10, "OptionalProperty"},
            {"BuiltLocalization", 0x20, "OptionalProperty"},
        }};
    };

    struct VkContentFilter
    {
        static constexpr std::string_view Name = "VkContentFilter";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Platform = 0x0;
            static constexpr std::uintptr_t BuildVersion = 0x10;
            static constexpr std::uintptr_t ShaderFormat = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Platform", 0x0, "StrProperty"},
            {"BuildVersion", 0x10, "StrProperty"},
            {"ShaderFormat", 0x20, "StrProperty"},
        }};
    };

    struct VkContentManifest
    {
        static constexpr std::string_view Name = "VkContentManifest";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Content = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Content", 0x0, "ArrayProperty"},
        }};
    };

    struct VkContentPackage
    {
        static constexpr std::string_view Name = "VkContentPackage";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ProjectID = 0x0;
            static constexpr std::uintptr_t ProjectFlags = 0x10;
            static constexpr std::uintptr_t Content = 0x20;
            static constexpr std::uintptr_t Resolved = 0x30;
            static constexpr std::uintptr_t ResolutionId = 0x68;
            static constexpr std::uintptr_t IsEncrypted = 0x78;
            static constexpr std::uintptr_t ModuleExtensions = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"ProjectID", 0x0, "StructProperty"},
            {"ProjectFlags", 0x10, "MapProperty"},
            {"Content", 0x20, "ArrayProperty"},
            {"Resolved", 0x30, "StructProperty"},
            {"ResolutionId", 0x68, "StructProperty"},
            {"IsEncrypted", 0x78, "BoolProperty"},
            {"ModuleExtensions", 0x80, "MapProperty"},
        }};
    };

    struct VkContentPackageModuleExtension
    {
        static constexpr std::string_view Name = "VkContentPackageModuleExtension";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ForkId = 0x0;
            static constexpr std::uintptr_t ProjectID = 0x10;
            static constexpr std::uintptr_t DirectDeps = 0x20;
            static constexpr std::uintptr_t StaticDeps = 0x30;
            static constexpr std::uintptr_t PublishInfo = 0x40;
            static constexpr std::uintptr_t PublishMetadata = 0x90;
            static constexpr std::uintptr_t Access = 0xD8;
            static constexpr std::uintptr_t Created = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"ForkId", 0x0, "StructProperty"},
            {"ProjectID", 0x10, "StructProperty"},
            {"DirectDeps", 0x20, "ArrayProperty"},
            {"StaticDeps", 0x30, "ArrayProperty"},
            {"PublishInfo", 0x40, "StructProperty"},
            {"PublishMetadata", 0x90, "StructProperty"},
            {"Access", 0xD8, "EnumProperty"},
            {"Created", 0xE0, "StructProperty"},
        }};
    };

    struct VkContentPackageRequest
    {
        static constexpr std::string_view Name = "VkContentPackageRequest";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "VkResolvedContent";
        struct Offsets
        {
            static constexpr std::uintptr_t ProjectID = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ProjectID", 0x38, "StructProperty"},
        }};
    };

    struct VkContentResolutionId
    {
        static constexpr std::string_view Name = "VkContentResolutionId";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "VkContentServiceId";
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

    struct VkContentServiceId
    {
        static constexpr std::string_view Name = "VkContentServiceId";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "Guid";
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

    struct VkCookedContentPackage
    {
        static constexpr std::string_view Name = "VkCookedContentPackage";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ProjectID = 0x0;
            static constexpr std::uintptr_t Content = 0x10;
            static constexpr std::uintptr_t Resolved = 0x20;
            static constexpr std::uintptr_t ResolutionPolicyToken = 0x58;
            static constexpr std::uintptr_t IsEncrypted = 0x68;
            static constexpr std::uintptr_t ModuleExtensions = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"ProjectID", 0x0, "StructProperty"},
            {"Content", 0x10, "ArrayProperty"},
            {"Resolved", 0x20, "StructProperty"},
            {"ResolutionPolicyToken", 0x58, "StrProperty"},
            {"IsEncrypted", 0x68, "BoolProperty"},
            {"ModuleExtensions", 0x70, "MapProperty"},
        }};
    };

    struct VkCookedContentUpdate
    {
        static constexpr std::string_view Name = "VkCookedContentUpdate";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t PendingCookRequests = 0x0;
            static constexpr std::uintptr_t Resolved = 0x8;
            static constexpr std::uintptr_t Modules = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"PendingCookRequests", 0x0, "IntProperty"},
            {"Resolved", 0x8, "StructProperty"},
            {"Modules", 0x40, "ArrayProperty"},
        }};
    };

    struct VkCookedModuleUpdate
    {
        static constexpr std::string_view Name = "VkCookedModuleUpdate";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "VKModuleVersion";
        struct Offsets
        {
            static constexpr std::uintptr_t ArtifactId = 0x18;
            static constexpr std::uintptr_t CookJobId = 0x28;
            static constexpr std::uintptr_t IsComplete = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ArtifactId", 0x18, "StrProperty"},
            {"CookJobId", 0x28, "StrProperty"},
            {"IsComplete", 0x38, "BoolProperty"},
        }};
    };

    struct VkCreateForkRequest
    {
        static constexpr std::string_view Name = "VkCreateForkRequest";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
            static constexpr std::uintptr_t Notes = 0x10;
            static constexpr std::uintptr_t Owner = 0x20;
            static constexpr std::uintptr_t ParentId = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Name", 0x0, "StrProperty"},
            {"Notes", 0x10, "StrProperty"},
            {"Owner", 0x20, "StructProperty"},
            {"ParentId", 0x38, "StructProperty"},
        }};
    };

    struct VkCreateModuleRequest
    {
        static constexpr std::string_view Name = "VkCreateModuleRequest";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ModuleName = 0x0;
            static constexpr std::uintptr_t Meta = 0x10;
            static constexpr std::uintptr_t ContentType = 0x30;
            static constexpr std::uintptr_t Relevance = 0x40;
            static constexpr std::uintptr_t DesiredModuleId = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"ModuleName", 0x0, "StrProperty"},
            {"Meta", 0x10, "StructProperty"},
            {"ContentType", 0x30, "StrProperty"},
            {"Relevance", 0x40, "MapProperty"},
            {"DesiredModuleId", 0x50, "StructProperty"},
        }};
    };

    struct VkCreateModuleVersionRequest
    {
        static constexpr std::string_view Name = "VkCreateModuleVersionRequest";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t RawFiles = 0x0;
            static constexpr std::uintptr_t InputRepositories = 0x10;
            static constexpr std::uintptr_t Dependencies = 0x20;
            static constexpr std::uintptr_t StaticDependencies = 0x30;
            static constexpr std::uintptr_t Meta = 0x40;
            static constexpr std::uintptr_t Checksum = 0x60;
            static constexpr std::uintptr_t ManifestLink = 0x70;
            static constexpr std::uintptr_t GameFeaturesets = 0x80;
            static constexpr std::uintptr_t Universe = 0x90;
            static constexpr std::uintptr_t IPProgram = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"RawFiles", 0x0, "MapProperty"},
            {"InputRepositories", 0x10, "ArrayProperty"},
            {"Dependencies", 0x20, "ArrayProperty"},
            {"StaticDependencies", 0x30, "ArrayProperty"},
            {"Meta", 0x40, "StructProperty"},
            {"Checksum", 0x60, "StrProperty"},
            {"ManifestLink", 0x70, "StrProperty"},
            {"GameFeaturesets", 0x80, "ArrayProperty"},
            {"Universe", 0x90, "OptionalProperty"},
            {"IPProgram", 0xA0, "OptionalProperty"},
        }};
    };

    struct VkCreateProjectRequest
    {
        static constexpr std::string_view Name = "VkCreateProjectRequest";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t DesiredProjectId = 0x0;
            static constexpr std::uintptr_t TeamId = 0x10;
            static constexpr std::uintptr_t RequiredRedirectorStartingVersion = 0x20;
            static constexpr std::uintptr_t Meta = 0x30;
            static constexpr std::uintptr_t GameFeaturesets = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"DesiredProjectId", 0x0, "StructProperty"},
            {"TeamId", 0x10, "StrProperty"},
            {"RequiredRedirectorStartingVersion", 0x20, "StrProperty"},
            {"Meta", 0x30, "StructProperty"},
            {"GameFeaturesets", 0x50, "ArrayProperty"},
        }};
    };

    struct VkCreateValidationSessionRequest
    {
        static constexpr std::string_view Name = "VkCreateValidationSessionRequest";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Candidates = 0x0;
            static constexpr std::uintptr_t ForkId = 0x10;
            static constexpr std::uintptr_t Resolutions = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Candidates", 0x0, "ArrayProperty"},
            {"ForkId", 0x10, "StructProperty"},
            {"Resolutions", 0x20, "MapProperty"},
        }};
    };

    struct VkCreateValidationSessionResponse
    {
        static constexpr std::string_view Name = "VkCreateValidationSessionResponse";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SessionID = 0x0;
            static constexpr std::uintptr_t Limits = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SessionID", 0x0, "StrProperty"},
            {"Limits", 0x10, "StructProperty"},
        }};
    };

    struct VkEncryptionKey
    {
        static constexpr std::string_view Name = "VkEncryptionKey";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Guid = 0x0;
            static constexpr std::uintptr_t Key = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Guid", 0x0, "StrProperty"},
            {"Key", 0x10, "StrProperty"},
        }};
    };

    struct VkEncryptionKeyBatchResponseItem
    {
        static constexpr std::string_view Name = "VkEncryptionKeyBatchResponseItem";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "VkEncryptionKeyResponse";
        struct Offsets
        {
            static constexpr std::uintptr_t ModuleId = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ModuleId", 0x30, "StructProperty"},
        }};
    };

    struct VkEncryptionKeyResponse
    {
        static constexpr std::string_view Name = "VkEncryptionKeyResponse";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Type = 0x0;
            static constexpr std::uintptr_t Key = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Type", 0x0, "StrProperty"},
            {"Key", 0x10, "StructProperty"},
        }};
    };

    struct VkExportedMetadataEntry
    {
        static constexpr std::string_view Name = "VkExportedMetadataEntry";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Category = 0x0;
            static constexpr std::uintptr_t Key = 0x10;
            static constexpr std::uintptr_t Value = 0x20;
            static constexpr std::uintptr_t SourceFilePath = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Category", 0x0, "StrProperty"},
            {"Key", 0x10, "StrProperty"},
            {"Value", 0x20, "StrProperty"},
            {"SourceFilePath", 0x30, "StrProperty"},
        }};
    };

    struct VkExtendedError
    {
        static constexpr std::string_view Name = "VkExtendedError";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t FormatKey = 0x0;
            static constexpr std::uintptr_t FormatNs = 0x10;
            static constexpr std::uintptr_t Message = 0x20;
            static constexpr std::uintptr_t MessageNoVerbosityOrCategory = 0x30;
            static constexpr std::uintptr_t Params = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"FormatKey", 0x0, "StrProperty"},
            {"FormatNs", 0x10, "StrProperty"},
            {"Message", 0x20, "StrProperty"},
            {"MessageNoVerbosityOrCategory", 0x30, "StrProperty"},
            {"Params", 0x40, "ArrayProperty"},
        }};
    };

    struct VkExtendedErrorInformation
    {
        static constexpr std::string_view Name = "VkExtendedErrorInformation";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ErrorCode = 0x0;
            static constexpr std::uintptr_t ErrorMessage = 0x10;
            static constexpr std::uintptr_t AdditionalErrors = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ErrorCode", 0x0, "StrProperty"},
            {"ErrorMessage", 0x10, "StrProperty"},
            {"AdditionalErrors", 0x20, "ArrayProperty"},
        }};
    };

    struct VkExtendedErrorParam
    {
        static constexpr std::string_view Name = "VkExtendedErrorParam";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Key = 0x0;
            static constexpr std::uintptr_t Value = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Key", 0x0, "StrProperty"},
            {"Value", 0x10, "StrProperty"},
        }};
    };

    struct VkFileSize
    {
        static constexpr std::string_view Name = "VkFileSize";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Types = 0x0;
            static constexpr std::uintptr_t SourceSize = 0x10;
            static constexpr std::uintptr_t UncompressedSize = 0x18;
            static constexpr std::uintptr_t CompressedSize = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Types", 0x0, "ArrayProperty"},
            {"SourceSize", 0x10, "Int64Property"},
            {"UncompressedSize", 0x18, "Int64Property"},
            {"CompressedSize", 0x20, "Int64Property"},
        }};
    };

    struct VkFileSizes
    {
        static constexpr std::string_view Name = "VkFileSizes";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t FileSizeMap = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"FileSizeMap", 0x0, "MapProperty"},
        }};
    };

    struct VkForkId
    {
        static constexpr std::string_view Name = "VkForkId";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "VkContentServiceId";
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

    struct VkForkInfo
    {
        static constexpr std::string_view Name = "VkForkInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ForkId = 0x0;
            static constexpr std::uintptr_t ParentId = 0x10;
            static constexpr std::uintptr_t Name = 0x20;
            static constexpr std::uintptr_t Owner = 0x30;
            static constexpr std::uintptr_t OwnerName = 0x48;
            static constexpr std::uintptr_t Created = 0x58;
            static constexpr std::uintptr_t Creator = 0x60;
            static constexpr std::uintptr_t Modified = 0x78;
            static constexpr std::uintptr_t Notes = 0x80;
            static constexpr std::uintptr_t Unlisted = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"ForkId", 0x0, "StructProperty"},
            {"ParentId", 0x10, "StructProperty"},
            {"Name", 0x20, "StrProperty"},
            {"Owner", 0x30, "StructProperty"},
            {"OwnerName", 0x48, "StrProperty"},
            {"Created", 0x58, "StructProperty"},
            {"Creator", 0x60, "StructProperty"},
            {"Modified", 0x78, "StructProperty"},
            {"Notes", 0x80, "StrProperty"},
            {"Unlisted", 0x90, "StrProperty"},
        }};
    };

    struct VkForkPublishRecord
    {
        static constexpr std::string_view Name = "VkForkPublishRecord";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ForkId = 0x0;
            static constexpr std::uintptr_t ProjectID = 0x10;
            static constexpr std::uintptr_t VersePath = 0x20;
            static constexpr std::uintptr_t Content = 0x30;
            static constexpr std::uintptr_t Publishing = 0x68;
            static constexpr std::uintptr_t MetaData = 0xB8;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"ForkId", 0x0, "StructProperty"},
            {"ProjectID", 0x10, "StructProperty"},
            {"VersePath", 0x20, "StrProperty"},
            {"Content", 0x30, "StructProperty"},
            {"Publishing", 0x68, "StructProperty"},
            {"MetaData", 0xB8, "StructProperty"},
        }};
    };

    struct VkForkPublishRecordContent
    {
        static constexpr std::string_view Name = "VkForkPublishRecordContent";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Root = 0x0;
            static constexpr std::uintptr_t Public_Modules = 0x18;
            static constexpr std::uintptr_t Project_Modules = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Root", 0x0, "StructProperty"},
            {"Public_Modules", 0x18, "MapProperty"},
            {"Project_Modules", 0x28, "MapProperty"},
        }};
    };

    struct VkFoundMatchingArtifact
    {
        static constexpr std::string_view Name = "VkFoundMatchingArtifact";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ArtifactId = 0x0;
            static constexpr std::uintptr_t Name = 0x10;
            static constexpr std::uintptr_t Filter = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ArtifactId", 0x0, "StrProperty"},
            {"Name", 0x10, "StrProperty"},
            {"Filter", 0x20, "StructProperty"},
        }};
    };

    struct VkGenerateBuildCodeRequest
    {
        static constexpr std::string_view Name = "VkGenerateBuildCodeRequest";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Content = 0x0;
            static constexpr std::uintptr_t CommitMessage = 0x38;
            static constexpr std::uintptr_t CommitInfo = 0x48;
            static constexpr std::uintptr_t MatchmakingConfig = 0x78;
            static constexpr std::uintptr_t SourceControlBase = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Content", 0x0, "StructProperty"},
            {"CommitMessage", 0x38, "StrProperty"},
            {"CommitInfo", 0x48, "OptionalProperty"},
            {"MatchmakingConfig", 0x78, "StructProperty"},
            {"SourceControlBase", 0x98, "StrProperty"},
        }};
    };

    struct VkGeneratedModuleInfo
    {
        static constexpr std::string_view Name = "VkGeneratedModuleInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Dependencies = 0x0;
            static constexpr std::uintptr_t StaticDependencies = 0x10;
            static constexpr std::uintptr_t GameFeaturesets = 0x20;
            static constexpr std::uintptr_t Universe = 0x30;
            static constexpr std::uintptr_t IPProgram = 0x40;
            static constexpr std::uintptr_t CandidateDependencies = 0x50;
            static constexpr std::uintptr_t ModuleIdToPluginURLs = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Dependencies", 0x0, "ArrayProperty"},
            {"StaticDependencies", 0x10, "ArrayProperty"},
            {"GameFeaturesets", 0x20, "ArrayProperty"},
            {"Universe", 0x30, "OptionalProperty"},
            {"IPProgram", 0x40, "OptionalProperty"},
            {"CandidateDependencies", 0x50, "ArrayProperty"},
            {"ModuleIdToPluginURLs", 0x60, "ArrayProperty"},
        }};
    };

    struct VkInstallMetadata
    {
        static constexpr std::string_view Name = "VkInstallMetadata";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t PluginName = 0x0;
            static constexpr std::uintptr_t GameFeaturePluginUri = 0x10;
            static constexpr std::uintptr_t VerseDiagnostics = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"PluginName", 0x0, "StrProperty"},
            {"GameFeaturePluginUri", 0x10, "StrProperty"},
            {"VerseDiagnostics", 0x20, "StructProperty"},
        }};
    };

    struct VkJobErrorDetail
    {
        static constexpr std::string_view Name = "VkJobErrorDetail";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t JobID = 0x0;
            static constexpr std::uintptr_t ModuleId = 0x10;
            static constexpr std::uintptr_t ModuleVersion = 0x20;
            static constexpr std::uintptr_t ArtifactId = 0x28;
            static constexpr std::uintptr_t ErrorCode = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"JobID", 0x0, "StrProperty"},
            {"ModuleId", 0x10, "StructProperty"},
            {"ModuleVersion", 0x20, "IntProperty"},
            {"ArtifactId", 0x28, "StrProperty"},
            {"ErrorCode", 0x38, "StrProperty"},
        }};
    };

    struct VkJobErrorDetails
    {
        static constexpr std::string_view Name = "VkJobErrorDetails";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t JobErrors = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"JobErrors", 0x0, "ArrayProperty"},
        }};
    };

    struct VkJobOutput
    {
        static constexpr std::string_view Name = "VkJobOutput";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t BaseUrl = 0x0;
            static constexpr std::uintptr_t TotalSizeKb = 0x10;
            static constexpr std::uintptr_t UserContentTotalSizeKb = 0x18;
            static constexpr std::uintptr_t Files = 0x20;
            static constexpr std::uintptr_t Manifest = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"BaseUrl", 0x0, "StrProperty"},
            {"TotalSizeKb", 0x10, "DoubleProperty"},
            {"UserContentTotalSizeKb", 0x18, "DoubleProperty"},
            {"Files", 0x20, "ArrayProperty"},
            {"Manifest", 0x30, "StrProperty"},
        }};
    };

    struct VkLaunchData_JoinIPAddress
    {
        static constexpr std::string_view Name = "VkLaunchData_JoinIPAddress";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t IpAddress = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"IpAddress", 0x0, "StrProperty"},
        }};
    };

    struct VkLaunchData_JoinMatchmakingSession
    {
        static constexpr std::string_view Name = "VkLaunchData_JoinMatchmakingSession";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SessionID = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SessionID", 0x0, "StrProperty"},
        }};
    };

    struct VkLaunchData_Link
    {
        static constexpr std::string_view Name = "VkLaunchData_Link";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t LinkCode = 0x0;
            static constexpr std::uintptr_t Version = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"LinkCode", 0x0, "StrProperty"},
            {"Version", 0x10, "IntProperty"},
        }};
    };

    struct VkLinkActivationHistoryEntry
    {
        static constexpr std::string_view Name = "VkLinkActivationHistoryEntry";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Mnemonic = 0x0;
            static constexpr std::uintptr_t Version = 0x10;
            static constexpr std::uintptr_t Activated = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Mnemonic", 0x0, "StrProperty"},
            {"Version", 0x10, "IntProperty"},
            {"Activated", 0x18, "StructProperty"},
        }};
    };

    struct VkLinkCodeInfo
    {
        static constexpr std::string_view Name = "VkLinkCodeInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t LinkCode = 0x0;
            static constexpr std::uintptr_t Version = 0x10;
            static constexpr std::uintptr_t Type = 0x18;
            static constexpr std::uintptr_t IsActive = 0x28;
            static constexpr std::uintptr_t ProjectID = 0x2C;
            static constexpr std::uintptr_t CreatorName = 0x40;
            static constexpr std::uintptr_t MetaData = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"LinkCode", 0x0, "StrProperty"},
            {"Version", 0x10, "IntProperty"},
            {"Type", 0x18, "StrProperty"},
            {"IsActive", 0x28, "BoolProperty"},
            {"ProjectID", 0x2C, "StructProperty"},
            {"CreatorName", 0x40, "StrProperty"},
            {"MetaData", 0x50, "StructProperty"},
        }};
    };

    struct VkLinkCodeMnemonicPluginName
    {
        static constexpr std::string_view Name = "VkLinkCodeMnemonicPluginName";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t LinkCodeMnemonic = 0x0;
            static constexpr std::uintptr_t PluginName = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"LinkCodeMnemonic", 0x0, "StrProperty"},
            {"PluginName", 0x10, "StrProperty"},
        }};
    };

    struct VkLinkCodeMnemonicPluginNameMapping
    {
        static constexpr std::string_view Name = "VkLinkCodeMnemonicPluginNameMapping";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t LinkCodeMnemonicToPluginName = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"LinkCodeMnemonicToPluginName", 0x0, "ArrayProperty"},
        }};
    };

    struct VkMetaDataFlags
    {
        static constexpr std::string_view Name = "VkMetaDataFlags";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t _validation_flags = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"_validation_flags", 0x0, "MapProperty"},
        }};
    };

    struct VkModuleBinaries
    {
        static constexpr std::string_view Name = "VkModuleBinaries";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t BaseUrl = 0x0;
            static constexpr std::uintptr_t Manifest = 0x10;
            static constexpr std::uintptr_t Files = 0x20;
            static constexpr std::uintptr_t TotalSizeKb = 0x30;
            static constexpr std::uintptr_t ManifestSizeKb = 0x38;
            static constexpr std::uintptr_t ManifestDiskSizeKb = 0x40;
            static constexpr std::uintptr_t ManifestDownloadSizeKb = 0x48;
            static constexpr std::uintptr_t IoStoreOnDemandManifestSizeKb = 0x50;
            static constexpr std::uintptr_t IoStoreOnDemandInstalledTotalChunksSizeKb = 0x58;
            static constexpr std::uintptr_t IoStoreOnDemandStreamingTotalChunksSizeKb = 0x60;
            static constexpr std::uintptr_t InstallMetadata = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"BaseUrl", 0x0, "StrProperty"},
            {"Manifest", 0x10, "StrProperty"},
            {"Files", 0x20, "ArrayProperty"},
            {"TotalSizeKb", 0x30, "DoubleProperty"},
            {"ManifestSizeKb", 0x38, "DoubleProperty"},
            {"ManifestDiskSizeKb", 0x40, "DoubleProperty"},
            {"ManifestDownloadSizeKb", 0x48, "DoubleProperty"},
            {"IoStoreOnDemandManifestSizeKb", 0x50, "DoubleProperty"},
            {"IoStoreOnDemandInstalledTotalChunksSizeKb", 0x58, "DoubleProperty"},
            {"IoStoreOnDemandStreamingTotalChunksSizeKb", 0x60, "DoubleProperty"},
            {"InstallMetadata", 0x68, "ArrayProperty"},
        }};
    };

    struct VkModuleDoc
    {
        static constexpr std::string_view Name = "VkModuleDoc";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ModuleId = 0x0;
            static constexpr std::uintptr_t Created = 0x10;
            static constexpr std::uintptr_t Updated = 0x18;
            static constexpr std::uintptr_t Author = 0x20;
            static constexpr std::uintptr_t ProjectID = 0x38;
            static constexpr std::uintptr_t ModuleName = 0x48;
            static constexpr std::uintptr_t ContentType = 0x58;
            static constexpr std::uintptr_t Relevance = 0x68;
            static constexpr std::uintptr_t AliasForModuleId = 0x78;
            static constexpr std::uintptr_t Meta = 0x88;
            static constexpr std::uintptr_t LatestVersion = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"ModuleId", 0x0, "StructProperty"},
            {"Created", 0x10, "StructProperty"},
            {"Updated", 0x18, "StructProperty"},
            {"Author", 0x20, "StructProperty"},
            {"ProjectID", 0x38, "StructProperty"},
            {"ModuleName", 0x48, "StrProperty"},
            {"ContentType", 0x58, "StrProperty"},
            {"Relevance", 0x68, "MapProperty"},
            {"AliasForModuleId", 0x78, "StrProperty"},
            {"Meta", 0x88, "StructProperty"},
            {"LatestVersion", 0xA8, "IntProperty"},
        }};
    };

    struct VkModuleId
    {
        static constexpr std::string_view Name = "VkModuleId";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "VkContentServiceId";
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

    struct VkModuleIdToPluginURL
    {
        static constexpr std::string_view Name = "VkModuleIdToPluginURL";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ModuleId = 0x0;
            static constexpr std::uintptr_t PluginURL = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ModuleId", 0x0, "StructProperty"},
            {"PluginURL", 0x10, "StrProperty"},
        }};
    };

    struct VkModuleVersionDependency
    {
        static constexpr std::string_view Name = "VkModuleVersionDependency";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "VKModuleVersion";
        struct Offsets
        {
            static constexpr std::uintptr_t ModuleId = 0x0;
            static constexpr std::uintptr_t Version = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ModuleId", 0x0, "StructProperty"},
            {"Version", 0x10, "IntProperty"},
        }};
    };

    struct VkModuleVersionDoc
    {
        static constexpr std::string_view Name = "VkModuleVersionDoc";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ModuleId = 0x0;
            static constexpr std::uintptr_t Version = 0x10;
            static constexpr std::uintptr_t ProjectID = 0x14;
            static constexpr std::uintptr_t Access = 0x24;
            static constexpr std::uintptr_t Created = 0x28;
            static constexpr std::uintptr_t Author = 0x30;
            static constexpr std::uintptr_t Meta = 0x48;
            static constexpr std::uintptr_t SysMeta = 0x68;
            static constexpr std::uintptr_t Dependencies = 0x88;
            static constexpr std::uintptr_t StagedFiles = 0x98;
            static constexpr std::uintptr_t SourceVersion = 0xD8;
            static constexpr std::uintptr_t ContentType = 0xF0;
            static constexpr std::uintptr_t Relevance = 0x100;
            static constexpr std::uintptr_t ArtifactKey = 0x110;
            static constexpr std::uintptr_t Checksum = 0x120;
            static constexpr std::uintptr_t Artifacts = 0x130;
            static constexpr std::uintptr_t UserRevisionControl = 0x140;
        };

        inline static constexpr std::array<PropertyInfo, 17> Properties{{
            {"ModuleId", 0x0, "StructProperty"},
            {"Version", 0x10, "IntProperty"},
            {"ProjectID", 0x14, "StructProperty"},
            {"Access", 0x24, "EnumProperty"},
            {"Created", 0x28, "StructProperty"},
            {"Author", 0x30, "StructProperty"},
            {"Meta", 0x48, "StructProperty"},
            {"SysMeta", 0x68, "StructProperty"},
            {"Dependencies", 0x88, "ArrayProperty"},
            {"StagedFiles", 0x98, "StructProperty"},
            {"SourceVersion", 0xD8, "StructProperty"},
            {"ContentType", 0xF0, "StrProperty"},
            {"Relevance", 0x100, "MapProperty"},
            {"ArtifactKey", 0x110, "StrProperty"},
            {"Checksum", 0x120, "StrProperty"},
            {"Artifacts", 0x130, "ArrayProperty"},
            {"UserRevisionControl", 0x140, "OptionalProperty"},
        }};
    };

    struct VkModuleVersionModerationStatus
    {
        static constexpr std::string_view Name = "VkModuleVersionModerationStatus";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ModuleId = 0x0;
            static constexpr std::uintptr_t Version = 0x10;
            static constexpr std::uintptr_t MoreInfoUrl = 0x18;
            static constexpr std::uintptr_t PublishStatus = 0x28;
            static constexpr std::uintptr_t SafetyStatus = 0x29;
            static constexpr std::uintptr_t ModerationSource = 0x2A;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"ModuleId", 0x0, "StructProperty"},
            {"Version", 0x10, "IntProperty"},
            {"MoreInfoUrl", 0x18, "StrProperty"},
            {"PublishStatus", 0x28, "EnumProperty"},
            {"SafetyStatus", 0x29, "EnumProperty"},
            {"ModerationSource", 0x2A, "EnumProperty"},
        }};
    };

    struct VkModuleVersionWithArtifacts
    {
        static constexpr std::string_view Name = "VkModuleVersionWithArtifacts";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "VKModuleVersion";
        struct Offsets
        {
            static constexpr std::uintptr_t Artifacts = 0x18;
            static constexpr std::uintptr_t VersePath = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Artifacts", 0x18, "ArrayProperty"},
            {"VersePath", 0x28, "StrProperty"},
        }};
    };

    struct VkModuleVersionWithDiagnostics
    {
        static constexpr std::string_view Name = "VkModuleVersionWithDiagnostics";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Version = 0x0;
            static constexpr std::uintptr_t Diagnostics = 0x14;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Version", 0x0, "StructProperty"},
            {"Diagnostics", 0x14, "StructProperty"},
        }};
    };

    struct VkModuleViolation
    {
        static constexpr std::string_view Name = "VkModuleViolation";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t AssetPath = 0x0;
            static constexpr std::uintptr_t AssetHash = 0x10;
            static constexpr std::uintptr_t Type = 0x20;
            static constexpr std::uintptr_t TosReference = 0x30;
            static constexpr std::uintptr_t PolicyUrl = 0x40;
            static constexpr std::uintptr_t PolicySummary = 0x50;
            static constexpr std::uintptr_t PolicyDescription = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"AssetPath", 0x0, "StrProperty"},
            {"AssetHash", 0x10, "StrProperty"},
            {"Type", 0x20, "StrProperty"},
            {"TosReference", 0x30, "StrProperty"},
            {"PolicyUrl", 0x40, "StrProperty"},
            {"PolicySummary", 0x50, "StrProperty"},
            {"PolicyDescription", 0x60, "StrProperty"},
        }};
    };

    struct VkNamedId
    {
        static constexpr std::string_view Name = "VkNamedId";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
            static constexpr std::uintptr_t ID = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Name", 0x0, "StrProperty"},
            {"ID", 0x10, "StrProperty"},
        }};
    };

    struct VkOrganizationId
    {
        static constexpr std::string_view Name = "VkOrganizationId";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "VkContentServiceId";
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

    struct VkOrganizationInfo
    {
        static constexpr std::string_view Name = "VkOrganizationInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ID = 0x0;
            static constexpr std::uintptr_t Name = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ID", 0x0, "StructProperty"},
            {"Name", 0x10, "StrProperty"},
        }};
    };

    struct VkOwnerId
    {
        static constexpr std::string_view Name = "VkOwnerId";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Type = 0x0;
            static constexpr std::uintptr_t ID = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Type", 0x0, "EnumProperty"},
            {"ID", 0x8, "StrProperty"},
        }};
    };

    struct VkOwnerInfo
    {
        static constexpr std::string_view Name = "VkOwnerInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Owner = 0x0;
            static constexpr std::uintptr_t Brand = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Owner", 0x0, "StrProperty"},
            {"Brand", 0x10, "StrProperty"},
        }};
    };

    struct VkPendingModuleVersion
    {
        static constexpr std::string_view Name = "VkPendingModuleVersion";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ModuleId = 0x0;
            static constexpr std::uintptr_t TicketId = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ModuleId", 0x0, "StructProperty"},
            {"TicketId", 0x10, "StrProperty"},
        }};
    };

    struct VkProfileBuildResult
    {
        static constexpr std::string_view Name = "VkProfileBuildResult";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Score = 0x0;
            static constexpr std::uintptr_t SessionID = 0x8;
            static constexpr std::uintptr_t duration = 0x18;
            static constexpr std::uintptr_t Server = 0x28;
            static constexpr std::uintptr_t Clients = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Score", 0x0, "FloatProperty"},
            {"SessionID", 0x8, "StrProperty"},
            {"duration", 0x18, "StructProperty"},
            {"Server", 0x28, "StructProperty"},
            {"Clients", 0x58, "ArrayProperty"},
        }};
    };

    struct VkProfileBuildResult_Client
    {
        static constexpr std::string_view Name = "VkProfileBuildResult_Client";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t AccountID = 0x0;
            static constexpr std::uintptr_t BuildID = 0x10;
            static constexpr std::uintptr_t Platform = 0x20;
            static constexpr std::uintptr_t Stat = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"AccountID", 0x0, "StrProperty"},
            {"BuildID", 0x10, "StrProperty"},
            {"Platform", 0x20, "StrProperty"},
            {"Stat", 0x30, "MapProperty"},
        }};
    };

    struct VkProfileBuildResult_Duration
    {
        static constexpr std::string_view Name = "VkProfileBuildResult_Duration";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Start = 0x0;
            static constexpr std::uintptr_t End = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Start", 0x0, "StructProperty"},
            {"End", 0x8, "StructProperty"},
        }};
    };

    struct VkProfileBuildResult_Server
    {
        static constexpr std::string_view Name = "VkProfileBuildResult_Server";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t BuildID = 0x0;
            static constexpr std::uintptr_t Platform = 0x10;
            static constexpr std::uintptr_t Stat = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"BuildID", 0x0, "StrProperty"},
            {"Platform", 0x10, "StrProperty"},
            {"Stat", 0x20, "MapProperty"},
        }};
    };

    struct VkProjectDoc
    {
        static constexpr std::string_view Name = "VkProjectDoc";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ProjectID = 0x0;
            static constexpr std::uintptr_t Created = 0x10;
            static constexpr std::uintptr_t Author = 0x18;
            static constexpr std::uintptr_t Owner = 0x30;
            static constexpr std::uintptr_t Meta = 0x48;
            static constexpr std::uintptr_t SysMeta = 0x68;
            static constexpr std::uintptr_t LiveLink = 0x88;
            static constexpr std::uintptr_t ReservedLink = 0x148;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"ProjectID", 0x0, "StructProperty"},
            {"Created", 0x10, "StructProperty"},
            {"Author", 0x18, "StructProperty"},
            {"Owner", 0x30, "StructProperty"},
            {"Meta", 0x48, "StructProperty"},
            {"SysMeta", 0x68, "StructProperty"},
            {"LiveLink", 0x88, "StructProperty"},
            {"ReservedLink", 0x148, "StructProperty"},
        }};
    };

    struct VkProjectId
    {
        static constexpr std::string_view Name = "VkProjectId";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "VkContentServiceId";
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

    struct VkProjectInfoSlim
    {
        static constexpr std::string_view Name = "VkProjectInfoSlim";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Owner = 0x0;
            static constexpr std::uintptr_t Title = 0x18;
            static constexpr std::uintptr_t Description = 0x28;
            static constexpr std::uintptr_t LinkCode = 0x38;
            static constexpr std::uintptr_t RcsProvider = 0x48;
            static constexpr std::uintptr_t SysMeta = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Owner", 0x0, "StructProperty"},
            {"Title", 0x18, "StrProperty"},
            {"Description", 0x28, "StrProperty"},
            {"LinkCode", 0x38, "StrProperty"},
            {"RcsProvider", 0x48, "StrProperty"},
            {"SysMeta", 0x58, "StructProperty"},
        }};
    };

    struct VkProjectLimitsDoc
    {
        static constexpr std::string_view Name = "VkProjectLimitsDoc";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t PublishingMemorySize = 0x0;
            static constexpr std::uintptr_t PublishingDownloadSize = 0x8;
            static constexpr std::uintptr_t ProjectUploadSize = 0x10;
            static constexpr std::uintptr_t ModuleUploadConcurrencyLimit = 0x18;
            static constexpr std::uintptr_t FileCount = 0x20;
            static constexpr std::uintptr_t IndividualFileSizeKb = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"PublishingMemorySize", 0x0, "Int64Property"},
            {"PublishingDownloadSize", 0x8, "Int64Property"},
            {"ProjectUploadSize", 0x10, "Int64Property"},
            {"ModuleUploadConcurrencyLimit", 0x18, "IntProperty"},
            {"FileCount", 0x20, "Int64Property"},
            {"IndividualFileSizeKb", 0x28, "Int64Property"},
        }};
    };

    struct VkProjectPlaytestAccessRequest
    {
        static constexpr std::string_view Name = "VkProjectPlaytestAccessRequest";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Users = 0x0;
            static constexpr std::uintptr_t PlaytestGroupId = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Users", 0x0, "ArrayProperty"},
            {"PlaytestGroupId", 0x10, "StrProperty"},
        }};
    };

    struct VkProjectPlaytestAccessResult
    {
        static constexpr std::string_view Name = "VkProjectPlaytestAccessResult";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Playtesters = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Playtesters", 0x0, "MapProperty"},
        }};
    };

    struct VkProjectSearchResult
    {
        static constexpr std::string_view Name = "VkProjectSearchResult";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ProjectID = 0x0;
            static constexpr std::uintptr_t Created = 0x10;
            static constexpr std::uintptr_t Accessed = 0x18;
            static constexpr std::uintptr_t Meta = 0x20;
            static constexpr std::uintptr_t SysMeta = 0x40;
            static constexpr std::uintptr_t LinkCode = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"ProjectID", 0x0, "StructProperty"},
            {"Created", 0x10, "StructProperty"},
            {"Accessed", 0x18, "StructProperty"},
            {"Meta", 0x20, "StructProperty"},
            {"SysMeta", 0x40, "StructProperty"},
            {"LinkCode", 0x60, "StrProperty"},
        }};
    };

    struct VkProjectSearchResultSlim
    {
        static constexpr std::string_view Name = "VkProjectSearchResultSlim";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ProjectID = 0x0;
            static constexpr std::uintptr_t Date = 0x10;
            static constexpr std::uintptr_t Info = 0x18;
            static constexpr std::uintptr_t is_starred = 0x90;
            static constexpr std::uintptr_t is_new = 0x91;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"ProjectID", 0x0, "StructProperty"},
            {"Date", 0x10, "StructProperty"},
            {"Info", 0x18, "StructProperty"},
            {"is_starred", 0x90, "BoolProperty"},
            {"is_new", 0x91, "BoolProperty"},
        }};
    };

    struct VkProjectSnapshot
    {
        static constexpr std::string_view Name = "VkProjectSnapshot";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t UniqueID = 0x0;
            static constexpr std::uintptr_t ProjectID = 0x10;
            static constexpr std::uintptr_t AccountID = 0x20;
            static constexpr std::uintptr_t CreatedAt = 0x30;
            static constexpr std::uintptr_t DeltaFileIndex = 0x38;
            static constexpr std::uintptr_t Content = 0x40;
            static constexpr std::uintptr_t MapPath = 0x78;
            static constexpr std::uintptr_t MatchmakingConfig = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"UniqueID", 0x0, "StrProperty"},
            {"ProjectID", 0x10, "StructProperty"},
            {"AccountID", 0x20, "StrProperty"},
            {"CreatedAt", 0x30, "StructProperty"},
            {"DeltaFileIndex", 0x38, "IntProperty"},
            {"Content", 0x40, "StructProperty"},
            {"MapPath", 0x78, "StrProperty"},
            {"MatchmakingConfig", 0x88, "StructProperty"},
        }};
    };

    struct VkProjectUserInfo
    {
        static constexpr std::string_view Name = "VkProjectUserInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ProjectID = 0x0;
            static constexpr std::uintptr_t AccountID = 0x10;
            static constexpr std::uintptr_t Title = 0x20;
            static constexpr std::uintptr_t HasStar = 0x30;
            static constexpr std::uintptr_t IsNew = 0x31;
            static constexpr std::uintptr_t Access = 0x32;
            static constexpr std::uintptr_t permissions = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"ProjectID", 0x0, "StructProperty"},
            {"AccountID", 0x10, "StrProperty"},
            {"Title", 0x20, "StrProperty"},
            {"HasStar", 0x30, "BoolProperty"},
            {"IsNew", 0x31, "BoolProperty"},
            {"Access", 0x32, "StructProperty"},
            {"permissions", 0x38, "ArrayProperty"},
        }};
    };

    struct VkProjectUserInfoAccessControl
    {
        static constexpr std::string_view Name = "VkProjectUserInfoAccessControl";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "VkAccessControl";
        struct Offsets
        {
            static constexpr std::uintptr_t Read = 0x4;
            static constexpr std::uintptr_t Owner = 0x5;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Read", 0x4, "BoolProperty"},
            {"Owner", 0x5, "BoolProperty"},
        }};
    };

    struct VkPublicLinkCodeData
    {
        static constexpr std::string_view Name = "VkPublicLinkCodeData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t LinkCode = 0x0;
            static constexpr std::uintptr_t Version = 0x10;
            static constexpr std::uintptr_t Type = 0x18;
            static constexpr std::uintptr_t Category = 0x28;
            static constexpr std::uintptr_t OwnerID = 0x38;
            static constexpr std::uintptr_t CreatorName = 0x48;
            static constexpr std::uintptr_t IsActive = 0x58;
            static constexpr std::uintptr_t Disabled = 0x59;
            static constexpr std::uintptr_t ModerationApproved = 0x5A;
            static constexpr std::uintptr_t LinkState = 0x60;
            static constexpr std::uintptr_t DiscoveryIntent = 0x70;
            static constexpr std::uintptr_t DescriptionTags = 0x80;
            static constexpr std::uintptr_t UniverseId = 0x90;
            static constexpr std::uintptr_t Published = 0xA0;
            static constexpr std::uintptr_t Created = 0xA8;
            static constexpr std::uintptr_t Updated = 0xB0;
            static constexpr std::uintptr_t LastActivatedDate = 0xB8;
            static constexpr std::uintptr_t ActivationHistory = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 18> Properties{{
            {"LinkCode", 0x0, "StrProperty"},
            {"Version", 0x10, "IntProperty"},
            {"Type", 0x18, "StrProperty"},
            {"Category", 0x28, "StrProperty"},
            {"OwnerID", 0x38, "StrProperty"},
            {"CreatorName", 0x48, "StrProperty"},
            {"IsActive", 0x58, "BoolProperty"},
            {"Disabled", 0x59, "BoolProperty"},
            {"ModerationApproved", 0x5A, "BoolProperty"},
            {"LinkState", 0x60, "StrProperty"},
            {"DiscoveryIntent", 0x70, "StrProperty"},
            {"DescriptionTags", 0x80, "ArrayProperty"},
            {"UniverseId", 0x90, "StrProperty"},
            {"Published", 0xA0, "StructProperty"},
            {"Created", 0xA8, "StructProperty"},
            {"Updated", 0xB0, "StructProperty"},
            {"LastActivatedDate", 0xB8, "StructProperty"},
            {"ActivationHistory", 0xC0, "ArrayProperty"},
        }};
    };

    struct VkPublishInfo
    {
        static constexpr std::string_view Name = "VkPublishInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Title = 0x0;
            static constexpr std::uintptr_t Description = 0x10;
            static constexpr std::uintptr_t ImageSmall = 0x20;
            static constexpr std::uintptr_t ImageMedium = 0x30;
            static constexpr std::uintptr_t ImageLarge = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Title", 0x0, "StrProperty"},
            {"Description", 0x10, "StrProperty"},
            {"ImageSmall", 0x20, "StrProperty"},
            {"ImageMedium", 0x30, "StrProperty"},
            {"ImageLarge", 0x40, "StrProperty"},
        }};
    };

    struct VkPublishMetadata
    {
        static constexpr std::string_view Name = "VkPublishMetadata";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t PublisherAccountId = 0x0;
            static constexpr std::uintptr_t PublisherName = 0x10;
            static constexpr std::uintptr_t AddedTime = 0x20;
            static constexpr std::uintptr_t SystemComment = 0x28;
            static constexpr std::uintptr_t UserComment = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"PublisherAccountId", 0x0, "StrProperty"},
            {"PublisherName", 0x10, "StrProperty"},
            {"AddedTime", 0x20, "StructProperty"},
            {"SystemComment", 0x28, "StrProperty"},
            {"UserComment", 0x38, "StrProperty"},
        }};
    };

    struct VkPublishToForkItem
    {
        static constexpr std::string_view Name = "VkPublishToForkItem";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Root = 0x0;
            static constexpr std::uintptr_t Publishing = 0x18;
            static constexpr std::uintptr_t CommitMessage = 0x68;
            static constexpr std::uintptr_t SystemComment = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Root", 0x0, "StructProperty"},
            {"Publishing", 0x18, "StructProperty"},
            {"CommitMessage", 0x68, "StrProperty"},
            {"SystemComment", 0x78, "StrProperty"},
        }};
    };

    struct VkPublishToForkItemResult
    {
        static constexpr std::string_view Name = "VkPublishToForkItemResult";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ModuleId = 0x0;
            static constexpr std::uintptr_t ProjectID = 0x10;
            static constexpr std::uintptr_t Status = 0x20;
            static constexpr std::uintptr_t ErrorCode = 0x30;
            static constexpr std::uintptr_t Message = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"ModuleId", 0x0, "StructProperty"},
            {"ProjectID", 0x10, "StructProperty"},
            {"Status", 0x20, "StrProperty"},
            {"ErrorCode", 0x30, "StrProperty"},
            {"Message", 0x40, "StrProperty"},
        }};
    };

    struct VkPublishToForkLimits
    {
        static constexpr std::string_view Name = "VkPublishToForkLimits";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxItemsPerBatch = 0x0;
            static constexpr std::uintptr_t MaxTransactionItems = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"MaxItemsPerBatch", 0x0, "IntProperty"},
            {"MaxTransactionItems", 0x4, "IntProperty"},
        }};
    };

    struct VkPublishToForkRequest
    {
        static constexpr std::string_view Name = "VkPublishToForkRequest";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Items = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Items", 0x0, "ArrayProperty"},
        }};
    };

    struct VkPublishingMutatorClaim
    {
        static constexpr std::string_view Name = "VkPublishingMutatorClaim";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t MutatorId = 0x0;
            static constexpr std::uintptr_t Args = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"MutatorId", 0x0, "StrProperty"},
            {"Args", 0x10, "StructProperty"},
        }};
    };

    struct VkRedirectResolution
    {
        static constexpr std::string_view Name = "VkRedirectResolution";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Paths = 0x0;
            static constexpr std::uintptr_t Dependencies = 0x10;
            static constexpr std::uintptr_t LatestSnapshotVersion = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Paths", 0x0, "MapProperty"},
            {"Dependencies", 0x10, "ArrayProperty"},
            {"LatestSnapshotVersion", 0x20, "StrProperty"},
        }};
    };

    struct VkRedirectResolutionDependency
    {
        static constexpr std::string_view Name = "VkRedirectResolutionDependency";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t VersePath = 0x0;
            static constexpr std::uintptr_t MountPoint = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VersePath", 0x0, "StrProperty"},
            {"MountPoint", 0x10, "StrProperty"},
        }};
    };

    struct VkRedirectResolutionOptions
    {
        static constexpr std::string_view Name = "VkRedirectResolutionOptions";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bCollapse = 0x0;
            static constexpr std::uintptr_t bInclusiveMinVersion = 0x1;
            static constexpr std::uintptr_t bExclusiveMaxVersion = 0x2;
            static constexpr std::uintptr_t SourceObjectPathFilter = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bCollapse", 0x0, "BoolProperty"},
            {"bInclusiveMinVersion", 0x1, "BoolProperty"},
            {"bExclusiveMaxVersion", 0x2, "BoolProperty"},
            {"SourceObjectPathFilter", 0x8, "ArrayProperty"},
        }};
    };

    struct VkRedirectResolutionResult
    {
        static constexpr std::string_view Name = "VkRedirectResolutionResult";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Url = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Url", 0x0, "StrProperty"},
        }};
    };

    struct VkResolvedContent
    {
        static constexpr std::string_view Name = "VkResolvedContent";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Root = 0x0;
            static constexpr std::uintptr_t Resolutions = 0x18;
            static constexpr std::uintptr_t DependencyOrderedResolutions = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Root", 0x0, "StructProperty"},
            {"Resolutions", 0x18, "MapProperty"},
            {"DependencyOrderedResolutions", 0x28, "ArrayProperty"},
        }};
    };

    struct VkResolvedModule
    {
        static constexpr std::string_view Name = "VkResolvedModule";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ModuleId = 0x0;
            static constexpr std::uintptr_t Version = 0x10;
            static constexpr std::uintptr_t BinaryVersion = 0x18;
            static constexpr std::uintptr_t ArtifactId = 0x28;
            static constexpr std::uintptr_t CookJobId = 0x38;
            static constexpr std::uintptr_t Binaries = 0x48;
            static constexpr std::uintptr_t IsOpaqueContent = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"ModuleId", 0x0, "StructProperty"},
            {"Version", 0x10, "IntProperty"},
            {"BinaryVersion", 0x18, "StrProperty"},
            {"ArtifactId", 0x28, "StrProperty"},
            {"CookJobId", 0x38, "StrProperty"},
            {"Binaries", 0x48, "StructProperty"},
            {"IsOpaqueContent", 0xC0, "BoolProperty"},
        }};
    };

    struct VkResolvedVersePath
    {
        static constexpr std::string_view Name = "VkResolvedVersePath";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "VkVersePath";
        struct Offsets
        {
            static constexpr std::uintptr_t ProjectID = 0x28;
            static constexpr std::uintptr_t PrimaryVersePath = 0x38;
            static constexpr std::uintptr_t Reference = 0x48;
            static constexpr std::uintptr_t Fork = 0x88;
            static constexpr std::uintptr_t DependencyVerdicts = 0x128;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"ProjectID", 0x28, "StructProperty"},
            {"PrimaryVersePath", 0x38, "StrProperty"},
            {"Reference", 0x48, "StructProperty"},
            {"Fork", 0x88, "StructProperty"},
            {"DependencyVerdicts", 0x128, "MapProperty"},
        }};
    };

    struct VkResolvedVersePathFork
    {
        static constexpr std::string_view Name = "VkResolvedVersePathFork";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ID = 0x0;
            static constexpr std::uintptr_t Content = 0x10;
            static constexpr std::uintptr_t Publishing = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ID", 0x0, "StrProperty"},
            {"Content", 0x10, "StructProperty"},
            {"Publishing", 0x48, "StructProperty"},
        }};
    };

    struct VkResolvedVersePathForkContent
    {
        static constexpr std::string_view Name = "VkResolvedVersePathForkContent";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Root = 0x0;
            static constexpr std::uintptr_t PublicModules = 0x18;
            static constexpr std::uintptr_t PublicModuleAccess = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Root", 0x0, "StructProperty"},
            {"PublicModules", 0x18, "MapProperty"},
            {"PublicModuleAccess", 0x28, "MapProperty"},
        }};
    };

    struct VkResolvedVersePathReference
    {
        static constexpr std::string_view Name = "VkResolvedVersePathReference";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Owner = 0x0;
            static constexpr std::uintptr_t Domain = 0x10;
            static constexpr std::uintptr_t ProjectName = 0x20;
            static constexpr std::uintptr_t Resource = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Owner", 0x0, "StrProperty"},
            {"Domain", 0x10, "StrProperty"},
            {"ProjectName", 0x20, "StrProperty"},
            {"Resource", 0x30, "StrProperty"},
        }};
    };

    struct VkResourceAccessControl
    {
        static constexpr std::string_view Name = "VkResourceAccessControl";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Read = 0x0;
            static constexpr std::uintptr_t Edit = 0x1;
            static constexpr std::uintptr_t Operate = 0x2;
            static constexpr std::uintptr_t Publish = 0x3;
            static constexpr std::uintptr_t Admin = 0x4;
            static constexpr std::uintptr_t Play = 0x5;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Read", 0x0, "BoolProperty"},
            {"Edit", 0x1, "BoolProperty"},
            {"Operate", 0x2, "BoolProperty"},
            {"Publish", 0x3, "BoolProperty"},
            {"Admin", 0x4, "BoolProperty"},
            {"Play", 0x5, "BoolProperty"},
        }};
    };

    struct VkResourceAccessPair
    {
        static constexpr std::string_view Name = "VkResourceAccessPair";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Project = 0x0;
            static constexpr std::uintptr_t Fork = 0x6;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Project", 0x0, "StructProperty"},
            {"Fork", 0x6, "StructProperty"},
        }};
    };

    struct VkRevisionControlLocation
    {
        static constexpr std::string_view Name = "VkRevisionControlLocation";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Type = 0x0;
            static constexpr std::uintptr_t BaseUrl = 0x10;
            static constexpr std::uintptr_t Path = 0x20;
            static constexpr std::uintptr_t Revision = 0x30;
            static constexpr std::uintptr_t Branch = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Type", 0x0, "StrProperty"},
            {"BaseUrl", 0x10, "StrProperty"},
            {"Path", 0x20, "StrProperty"},
            {"Revision", 0x30, "StrProperty"},
            {"Branch", 0x40, "OptionalProperty"},
        }};
    };

    struct VkScopedEncryptionKeyResponse
    {
        static constexpr std::string_view Name = "VkScopedEncryptionKeyResponse";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t EncryptionKeys = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"EncryptionKeys", 0x0, "ArrayProperty"},
        }};
    };

    struct VkScratchRepositoryRef
    {
        static constexpr std::string_view Name = "VkScratchRepositoryRef";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Path = 0x0;
            static constexpr std::uintptr_t Revision = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Path", 0x0, "StrProperty"},
            {"Revision", 0x10, "StrProperty"},
        }};
    };

    struct VkSnapshotDeltaFiles
    {
        static constexpr std::string_view Name = "VkSnapshotDeltaFiles";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SnapshotId = 0x0;
            static constexpr std::uintptr_t DeltaFileLinks = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SnapshotId", 0x0, "StrProperty"},
            {"DeltaFileLinks", 0x10, "MapProperty"},
        }};
    };

    struct VkSnapshotSaveRequest
    {
        static constexpr std::string_view Name = "VkSnapshotSaveRequest";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Content = 0x0;
            static constexpr std::uintptr_t MapPath = 0x38;
            static constexpr std::uintptr_t MatchmakingConfig = 0x48;
            static constexpr std::uintptr_t ForkId = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Content", 0x0, "StructProperty"},
            {"MapPath", 0x38, "StrProperty"},
            {"MatchmakingConfig", 0x48, "StructProperty"},
            {"ForkId", 0x68, "StructProperty"},
        }};
    };

    struct VkStagedFileEntry
    {
        static constexpr std::string_view Name = "VkStagedFileEntry";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Path = 0x0;
            static constexpr std::uintptr_t Size = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Path", 0x0, "StrProperty"},
            {"Size", 0x10, "Int64Property"},
        }};
    };

    struct VkStagedFilesPage
    {
        static constexpr std::string_view Name = "VkStagedFilesPage";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t PathPrefix = 0x0;
            static constexpr std::uintptr_t Files = 0x10;
            static constexpr std::uintptr_t NextCursor = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"PathPrefix", 0x0, "StrProperty"},
            {"Files", 0x10, "ArrayProperty"},
            {"NextCursor", 0x20, "StrProperty"},
        }};
    };

    struct VkStartPublishToForkRequest
    {
        static constexpr std::string_view Name = "VkStartPublishToForkRequest";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t CommitMessage = 0x0;
            static constexpr std::uintptr_t SystemComment = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CommitMessage", 0x0, "StrProperty"},
            {"SystemComment", 0x10, "StrProperty"},
        }};
    };

    struct VkTeamAccessControl
    {
        static constexpr std::string_view Name = "VkTeamAccessControl";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "VkAccessControl";
        struct Offsets
        {
            static constexpr std::uintptr_t Admin = 0x0;
            static constexpr std::uintptr_t Edit = 0x1;
            static constexpr std::uintptr_t Operate = 0x2;
            static constexpr std::uintptr_t Publish = 0x3;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Admin", 0x0, "BoolProperty"},
            {"Edit", 0x1, "BoolProperty"},
            {"Operate", 0x2, "BoolProperty"},
            {"Publish", 0x3, "BoolProperty"},
        }};
    };

    struct VkTeamAuthorizedEmailDomain
    {
        static constexpr std::string_view Name = "VkTeamAuthorizedEmailDomain";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Domain = 0x0;
            static constexpr std::uintptr_t Access = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Domain", 0x0, "StrProperty"},
            {"Access", 0x10, "StructProperty"},
        }};
    };

    struct VkTeamDoc
    {
        static constexpr std::string_view Name = "VkTeamDoc";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t TeamId = 0x0;
            static constexpr std::uintptr_t Created = 0x10;
            static constexpr std::uintptr_t Updated = 0x18;
            static constexpr std::uintptr_t Owner = 0x20;
            static constexpr std::uintptr_t PublicProps = 0x38;
            static constexpr std::uintptr_t MemberCount = 0x68;
            static constexpr std::uintptr_t SysMeta = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"TeamId", 0x0, "StrProperty"},
            {"Created", 0x10, "StructProperty"},
            {"Updated", 0x18, "StructProperty"},
            {"Owner", 0x20, "StructProperty"},
            {"PublicProps", 0x38, "StructProperty"},
            {"MemberCount", 0x68, "IntProperty"},
            {"SysMeta", 0x70, "StructProperty"},
        }};
    };

    struct VkTeamInvitation
    {
        static constexpr std::string_view Name = "VkTeamInvitation";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t TeamId = 0x0;
            static constexpr std::uintptr_t Owner = 0x10;
            static constexpr std::uintptr_t PublicProps = 0x28;
            static constexpr std::uintptr_t Resources = 0x58;
            static constexpr std::uintptr_t Team = 0x78;
            static constexpr std::uintptr_t Membership = 0x108;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"TeamId", 0x0, "StrProperty"},
            {"Owner", 0x10, "StructProperty"},
            {"PublicProps", 0x28, "StructProperty"},
            {"Resources", 0x58, "StructProperty"},
            {"Team", 0x78, "StructProperty"},
            {"Membership", 0x108, "StructProperty"},
        }};
    };

    struct VkTeamInvitationResource
    {
        static constexpr std::string_view Name = "VkTeamInvitationResource";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Count = 0x0;
            static constexpr std::uintptr_t Limit = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Count", 0x0, "IntProperty"},
            {"Limit", 0x4, "IntProperty"},
        }};
    };

    struct VkTeamInvitationResources
    {
        static constexpr std::string_view Name = "VkTeamInvitationResources";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Members = 0x0;
            static constexpr std::uintptr_t Playtesters = 0x8;
            static constexpr std::uintptr_t Playtest_Groups = 0x10;
            static constexpr std::uintptr_t Join_Codes = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Members", 0x0, "StructProperty"},
            {"Playtesters", 0x8, "StructProperty"},
            {"Playtest_Groups", 0x10, "StructProperty"},
            {"Join_Codes", 0x18, "StructProperty"},
        }};
    };

    struct VkTeamMemberAccessControl
    {
        static constexpr std::string_view Name = "VkTeamMemberAccessControl";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "VkAccessControl";
        struct Offsets
        {
            static constexpr std::uintptr_t Owner = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Owner", 0x4, "BoolProperty"},
        }};
    };

    struct VkTeamMemberPrefs
    {
        static constexpr std::string_view Name = "VkTeamMemberPrefs";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t WatchTeam = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"WatchTeam", 0x0, "BoolProperty"},
        }};
    };

    struct VkTeamMembershipResult
    {
        static constexpr std::string_view Name = "VkTeamMembershipResult";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
            static constexpr std::uintptr_t Access = 0x10;
            static constexpr std::uintptr_t Status = 0x15;
            static constexpr std::uintptr_t MembershipId = 0x18;
            static constexpr std::uintptr_t TeamId = 0x28;
            static constexpr std::uintptr_t AccountID = 0x38;
            static constexpr std::uintptr_t Updated = 0x48;
            static constexpr std::uintptr_t Created = 0x50;
            static constexpr std::uintptr_t Prefs = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"Name", 0x0, "StrProperty"},
            {"Access", 0x10, "StructProperty"},
            {"Status", 0x15, "EnumProperty"},
            {"MembershipId", 0x18, "StrProperty"},
            {"TeamId", 0x28, "StrProperty"},
            {"AccountID", 0x38, "StrProperty"},
            {"Updated", 0x48, "StructProperty"},
            {"Created", 0x50, "StructProperty"},
            {"Prefs", 0x58, "StructProperty"},
        }};
    };

    struct VkTeamPublicProperties
    {
        static constexpr std::string_view Name = "VkTeamPublicProperties";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
            static constexpr std::uintptr_t Description = 0x10;
            static constexpr std::uintptr_t EmailDomains = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Name", 0x0, "StrProperty"},
            {"Description", 0x10, "StrProperty"},
            {"EmailDomains", 0x20, "ArrayProperty"},
        }};
    };

    struct VkTicketDetails
    {
        static constexpr std::string_view Name = "VkTicketDetails";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Status = 0x0;
            static constexpr std::uintptr_t StartDate = 0x8;
            static constexpr std::uintptr_t EndDate = 0x10;
            static constexpr std::uintptr_t CorrelationId = 0x18;
            static constexpr std::uintptr_t Error = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Status", 0x0, "EnumProperty"},
            {"StartDate", 0x8, "StructProperty"},
            {"EndDate", 0x10, "StructProperty"},
            {"CorrelationId", 0x18, "StrProperty"},
            {"Error", 0x28, "StructProperty"},
        }};
    };

    struct VkTransferProjectRequest
    {
        static constexpr std::string_view Name = "VkTransferProjectRequest";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t TeamId = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TeamId", 0x0, "StrProperty"},
        }};
    };

    struct VkTriggerValidationSessionCandidateRequest
    {
        static constexpr std::string_view Name = "VkTriggerValidationSessionCandidateRequest";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "VkCreateModuleVersionRequest";
        struct Offsets
        {
            static constexpr std::uintptr_t CandidateDependencies = 0xB0;
            static constexpr std::uintptr_t IgnoreExternalAssetLooseFiles = 0xC0;
            static constexpr std::uintptr_t Untrusted = 0xC8;
            static constexpr std::uintptr_t UserRevisionControl = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"CandidateDependencies", 0xB0, "ArrayProperty"},
            {"IgnoreExternalAssetLooseFiles", 0xC0, "BoolProperty"},
            {"Untrusted", 0xC8, "OptionalProperty"},
            {"UserRevisionControl", 0xF0, "OptionalProperty"},
        }};
    };

    struct VkUntrustedClaims
    {
        static constexpr std::string_view Name = "VkUntrustedClaims";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t MutatorsV1 = 0x0;
            static constexpr std::uintptr_t MutatorsV2 = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"MutatorsV1", 0x0, "OptionalProperty"},
            {"MutatorsV2", 0x10, "OptionalProperty"},
        }};
    };

    struct VkUpdateForkInfoRequest
    {
        static constexpr std::string_view Name = "VkUpdateForkInfoRequest";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
            static constexpr std::uintptr_t Notes = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Name", 0x0, "OptionalProperty"},
            {"Notes", 0x10, "OptionalProperty"},
        }};
    };

    struct VkValidationSessionCandidate
    {
        static constexpr std::string_view Name = "VkValidationSessionCandidate";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ModuleId = 0x0;
            static constexpr std::uintptr_t PluginName = 0x10;
            static constexpr std::uintptr_t ApiUrl = 0x20;
            static constexpr std::uintptr_t InternalApiUrl = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ModuleId", 0x0, "StructProperty"},
            {"PluginName", 0x10, "StrProperty"},
            {"ApiUrl", 0x20, "StrProperty"},
            {"InternalApiUrl", 0x30, "StrProperty"},
        }};
    };

    struct VkValidationSessionCandidateFailure
    {
        static constexpr std::string_view Name = "VkValidationSessionCandidateFailure";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ModuleId = 0x0;
            static constexpr std::uintptr_t ErrorCode = 0x10;
            static constexpr std::uintptr_t ErrorMessage = 0x20;
            static constexpr std::uintptr_t TicketId = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ModuleId", 0x0, "StructProperty"},
            {"ErrorCode", 0x10, "StrProperty"},
            {"ErrorMessage", 0x20, "StrProperty"},
            {"TicketId", 0x30, "StrProperty"},
        }};
    };

    struct VkValidationSessionCandidateResults
    {
        static constexpr std::string_view Name = "VkValidationSessionCandidateResults";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Created = 0x0;
            static constexpr std::uintptr_t Failed = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Created", 0x0, "ArrayProperty"},
            {"Failed", 0x10, "ArrayProperty"},
        }};
    };

    struct VkValidationSessionCandidateStatus
    {
        static constexpr std::string_view Name = "VkValidationSessionCandidateStatus";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SessionID = 0x0;
            static constexpr std::uintptr_t Candidate = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SessionID", 0x0, "StrProperty"},
            {"Candidate", 0x10, "StructProperty"},
        }};
    };

    struct VkValidationSessionCandidateSuccess
    {
        static constexpr std::string_view Name = "VkValidationSessionCandidateSuccess";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ModuleId = 0x0;
            static constexpr std::uintptr_t Doc = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ModuleId", 0x0, "StructProperty"},
            {"Doc", 0x10, "StructProperty"},
        }};
    };

    struct VkValidationSessionLimits
    {
        static constexpr std::string_view Name = "VkValidationSessionLimits";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ConcurrencyLimit = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ConcurrencyLimit", 0x0, "IntProperty"},
        }};
    };

    struct VkValidationSessionResult
    {
        static constexpr std::string_view Name = "VkValidationSessionResult";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Success = 0x0;
            static constexpr std::uintptr_t SessionID = 0x8;
            static constexpr std::uintptr_t OwnerAccountId = 0x18;
            static constexpr std::uintptr_t Results = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Success", 0x0, "BoolProperty"},
            {"SessionID", 0x8, "StrProperty"},
            {"OwnerAccountId", 0x18, "StrProperty"},
            {"Results", 0x28, "StructProperty"},
        }};
    };

    struct VkVerseDiagnostics
    {
        static constexpr std::string_view Name = "VkVerseDiagnostics";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t NumPersistentWeakMaps = 0x0;
            static constexpr std::uintptr_t NumPersistentExternalWriteWeakMaps = 0x4;
            static constexpr std::uintptr_t NumMarketplaceEntitlements = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"NumPersistentWeakMaps", 0x0, "IntProperty"},
            {"NumPersistentExternalWriteWeakMaps", 0x4, "IntProperty"},
            {"NumMarketplaceEntitlements", 0x8, "IntProperty"},
        }};
    };

    struct VkVersePath
    {
        static constexpr std::string_view Name = "VkVersePath";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t VersePath = 0x0;
            static constexpr std::uintptr_t Url = 0x10;
            static constexpr std::uintptr_t Primary = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"VersePath", 0x0, "StrProperty"},
            {"Url", 0x10, "StrProperty"},
            {"Primary", 0x20, "BoolProperty"},
        }};
    };

    struct VkVersionedLinkCode
    {
        static constexpr std::string_view Name = "VkVersionedLinkCode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Mnemonic = 0x0;
            static constexpr std::uintptr_t Version = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Mnemonic", 0x0, "StrProperty"},
            {"Version", 0x10, "IntProperty"},
        }};
    };

}

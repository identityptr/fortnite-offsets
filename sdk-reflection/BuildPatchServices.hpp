#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::BuildPatchServices
{
    struct BuildPatchManifest
    {
        static constexpr std::string_view Name = "BuildPatchManifest";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t ManifestFileVersion = 0x28;
            static constexpr std::uintptr_t bIsFileData = 0x29;
            static constexpr std::uintptr_t AppID = 0x2C;
            static constexpr std::uintptr_t AppName = 0x30;
            static constexpr std::uintptr_t BuildVersion = 0x40;
            static constexpr std::uintptr_t LaunchExe = 0x50;
            static constexpr std::uintptr_t LaunchCommand = 0x60;
            static constexpr std::uintptr_t PrereqIds = 0x70;
            static constexpr std::uintptr_t PrereqName = 0x80;
            static constexpr std::uintptr_t PrereqPath = 0x90;
            static constexpr std::uintptr_t PrereqArgs = 0xA0;
            static constexpr std::uintptr_t FileManifestList = 0xB0;
            static constexpr std::uintptr_t ChunkList = 0xC0;
            static constexpr std::uintptr_t CustomFields = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"ManifestFileVersion", 0x28, "ByteProperty"},
            {"bIsFileData", 0x29, "BoolProperty"},
            {"AppID", 0x2C, "UInt32Property"},
            {"AppName", 0x30, "StrProperty"},
            {"BuildVersion", 0x40, "StrProperty"},
            {"LaunchExe", 0x50, "StrProperty"},
            {"LaunchCommand", 0x60, "StrProperty"},
            {"PrereqIds", 0x70, "SetProperty"},
            {"PrereqName", 0x80, "StrProperty"},
            {"PrereqPath", 0x90, "StrProperty"},
            {"PrereqArgs", 0xA0, "StrProperty"},
            {"FileManifestList", 0xB0, "ArrayProperty"},
            {"ChunkList", 0xC0, "ArrayProperty"},
            {"CustomFields", 0xD0, "ArrayProperty"},
        }};
    };

    struct ChunkInfoData
    {
        static constexpr std::string_view Name = "ChunkInfoData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Guid = 0x0;
            static constexpr std::uintptr_t Hash = 0x10;
            static constexpr std::uintptr_t ShaHash = 0x18;
            static constexpr std::uintptr_t FileSize = 0x30;
            static constexpr std::uintptr_t GroupNumber = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Guid", 0x0, "StructProperty"},
            {"Hash", 0x10, "UInt64Property"},
            {"ShaHash", 0x18, "StructProperty"},
            {"FileSize", 0x30, "Int64Property"},
            {"GroupNumber", 0x38, "ByteProperty"},
        }};
    };

    struct ChunkPartData
    {
        static constexpr std::string_view Name = "ChunkPartData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Guid = 0x0;
            static constexpr std::uintptr_t Offset = 0x10;
            static constexpr std::uintptr_t Size = 0x14;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Guid", 0x0, "StructProperty"},
            {"Offset", 0x10, "UInt32Property"},
            {"Size", 0x14, "UInt32Property"},
        }};
    };

    struct CustomFieldData
    {
        static constexpr std::string_view Name = "CustomFieldData";
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

    struct FileManifestData
    {
        static constexpr std::string_view Name = "FileManifestData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Filename = 0x0;
            static constexpr std::uintptr_t FileHash = 0x10;
            static constexpr std::uintptr_t FileChunkParts = 0x28;
            static constexpr std::uintptr_t InstallTags = 0x38;
            static constexpr std::uintptr_t bIsUnixExecutable = 0x48;
            static constexpr std::uintptr_t SymlinkTarget = 0x50;
            static constexpr std::uintptr_t bIsReadOnly = 0x60;
            static constexpr std::uintptr_t bIsCompressed = 0x61;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"Filename", 0x0, "StrProperty"},
            {"FileHash", 0x10, "StructProperty"},
            {"FileChunkParts", 0x28, "ArrayProperty"},
            {"InstallTags", 0x38, "ArrayProperty"},
            {"bIsUnixExecutable", 0x48, "BoolProperty"},
            {"SymlinkTarget", 0x50, "StrProperty"},
            {"bIsReadOnly", 0x60, "BoolProperty"},
            {"bIsCompressed", 0x61, "BoolProperty"},
        }};
    };

    struct SHAHashData
    {
        static constexpr std::string_view Name = "SHAHashData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Hash = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Hash", 0x0, "ByteProperty"},
        }};
    };

}

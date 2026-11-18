#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::JunoWorldManagement
{
    struct JunoPersistenceFeatureWorldMetadataCorrespondentInterface
    {
        static constexpr std::string_view Name = "JunoPersistenceFeatureWorldMetadataCorrespondentInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoUserWorldView
    {
        static constexpr std::string_view Name = "JunoUserWorldView";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoWorld";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoWorld
    {
        static constexpr std::string_view Name = "JunoWorld";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoWorldManagementHandler
    {
        static constexpr std::string_view Name = "JunoWorldManagementHandler";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoWorldManagementHandler_WorldArbitrationService
    {
        static constexpr std::string_view Name = "JunoWorldManagementHandler_WorldArbitrationService";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoWorldManagementHandler";
        struct Offsets
        {
            static constexpr std::uintptr_t WorldViewMap = 0x28;
            static constexpr std::uintptr_t GetAllAccessibleWorldsCacheTime = 0x48;
            static constexpr std::uintptr_t GetAllAccessibleWorldsErrorCacheTime = 0x4C;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"WorldViewMap", 0x28, "MapProperty"},
            {"GetAllAccessibleWorldsCacheTime", 0x48, "UInt32Property"},
            {"GetAllAccessibleWorldsErrorCacheTime", 0x4C, "UInt32Property"},
        }};
    };

    struct JunoWorldManagerSubsystem
    {
        static constexpr std::string_view Name = "JunoWorldManagerSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t bEnableWorldManager = 0x38;
            static constexpr std::uintptr_t bEnableWorldManagerInPIE = 0x39;
            static constexpr std::uintptr_t WorldPersistenceCompatibilityVersion = 0x3C;
            static constexpr std::uintptr_t DeviceProfileSuffix = 0x40;
            static constexpr std::uintptr_t WorldManagementHandler = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"bEnableWorldManager", 0x38, "BoolProperty"},
            {"bEnableWorldManagerInPIE", 0x39, "BoolProperty"},
            {"WorldPersistenceCompatibilityVersion", 0x3C, "IntProperty"},
            {"DeviceProfileSuffix", 0x40, "StrProperty"},
            {"WorldManagementHandler", 0x78, "ObjectProperty"},
        }};
    };

    struct JunoWorldManagerSubsystemData
    {
        static constexpr std::string_view Name = "JunoWorldManagerSubsystemData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimaryDataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t AvailableWorldManagementHandlerClasses = 0x28;
            static constexpr std::uintptr_t DefaultWorldManagementHandlerClass = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"AvailableWorldManagementHandlerClasses", 0x28, "ArrayProperty"},
            {"DefaultWorldManagementHandlerClass", 0x38, "ClassProperty"},
        }};
    };

}

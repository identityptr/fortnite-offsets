#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FortLevelInjectingRuntime
{
    struct FortDynamicPOIInjectionManager
    {
        static constexpr std::string_view Name = "FortDynamicPOIInjectionManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortLevelInjectionManager";
        struct Offsets
        {
            static constexpr std::uintptr_t LevelRevealDuration = 0x118;
            static constexpr std::uintptr_t LevelPreInjectionDuration = 0x140;
            static constexpr std::uintptr_t TeleportLocationUpOffset = 0x168;
            static constexpr std::uintptr_t LocationMetadataTable = 0x190;
            static constexpr std::uintptr_t GeoOffsetFromSpawnPoint = 0x198;
            static constexpr std::uintptr_t ObstaclePreset = 0x1B0;
            static constexpr std::uintptr_t ChosenInjectTransform = 0x1E0;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"LevelRevealDuration", 0x118, "StructProperty"},
            {"LevelPreInjectionDuration", 0x140, "StructProperty"},
            {"TeleportLocationUpOffset", 0x168, "StructProperty"},
            {"LocationMetadataTable", 0x190, "ObjectProperty"},
            {"GeoOffsetFromSpawnPoint", 0x198, "StructProperty"},
            {"ObstaclePreset", 0x1B0, "ObjectProperty"},
            {"ChosenInjectTransform", 0x1E0, "StructProperty"},
        }};
    };

    struct FortLevelInjectionCheatManager
    {
        static constexpr std::string_view Name = "FortLevelInjectionCheatManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChildCheatManager";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortLevelInjectionData
    {
        static constexpr std::string_view Name = "FortLevelInjectionData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortLevelInjectionDataBase";
        struct Offsets
        {
            static constexpr std::uintptr_t LimitedInjectableLocationsEQS = 0xC8;
            static constexpr std::uintptr_t QueryParams = 0xD0;
            static constexpr std::uintptr_t InjectableLocationsLimit = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"LimitedInjectableLocationsEQS", 0xC8, "ObjectProperty"},
            {"QueryParams", 0xD0, "ArrayProperty"},
            {"InjectableLocationsLimit", 0xE0, "StructProperty"},
        }};
    };

    struct FortLevelInjectionDataBase
    {
        static constexpr std::string_view Name = "FortLevelInjectionDataBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t BaseLevelAssetData = 0x28;
            static constexpr std::uintptr_t HLODData = 0x50;
            static constexpr std::uintptr_t BoundsExtent = 0x60;
            static constexpr std::uintptr_t InjectedLevelCellSuffix = 0x78;
            static constexpr std::uintptr_t InjectionRequestPriority = 0x88;
            static constexpr std::uintptr_t Enabled = 0x90;
            static constexpr std::uintptr_t DebugName = 0xB8;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"BaseLevelAssetData", 0x28, "StructProperty"},
            {"HLODData", 0x50, "ArrayProperty"},
            {"BoundsExtent", 0x60, "StructProperty"},
            {"InjectedLevelCellSuffix", 0x78, "StrProperty"},
            {"InjectionRequestPriority", 0x88, "IntProperty"},
            {"Enabled", 0x90, "StructProperty"},
            {"DebugName", 0xB8, "StrProperty"},
        }};
    };

    struct FortLevelInjectionLocation
    {
        static constexpr std::string_view Name = "FortLevelInjectionLocation";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BuildingLevelInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t InstanceTags = 0x748;
            static constexpr std::uintptr_t LocationMetadata = 0x768;
            static constexpr std::uintptr_t NoWorldAsset = 0x778;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"InstanceTags", 0x748, "StructProperty"},
            {"LocationMetadata", 0x768, "StructProperty"},
            {"NoWorldAsset", 0x778, "SoftObjectProperty"},
        }};
    };

    struct FortLevelInjectionManager
    {
        static constexpr std::string_view Name = "FortLevelInjectionManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t InjectionData = 0xC0;
            static constexpr std::uintptr_t EventTagDensityData = 0xC8;
            static constexpr std::uintptr_t InjectedLevels = 0xD8;
            static constexpr std::uintptr_t EQSHandle = 0xE8;
            static constexpr std::uintptr_t bPendingRequest = 0x100;
            static constexpr std::uintptr_t bReadyToInject = 0x101;
            static constexpr std::uintptr_t ReservedInjectionLocations = 0x108;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"InjectionData", 0xC0, "ObjectProperty"},
            {"EventTagDensityData", 0xC8, "ArrayProperty"},
            {"InjectedLevels", 0xD8, "ArrayProperty"},
            {"EQSHandle", 0xE8, "IntProperty"},
            {"bPendingRequest", 0x100, "BoolProperty"},
            {"bReadyToInject", 0x101, "BoolProperty"},
            {"ReservedInjectionLocations", 0x108, "ArrayProperty"},
        }};
    };

    struct FortLevelInjectionManagerBase
    {
        static constexpr std::string_view Name = "FortLevelInjectionManagerBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t InjectedLevels = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InjectedLevels", 0xC0, "StructProperty"},
        }};
    };

}

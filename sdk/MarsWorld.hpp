#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::MarsWorld
{
    struct MarsInstancedActorsSubsystem
    {
        static constexpr std::string_view Name = "MarsInstancedActorsSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoInstancedActorSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t ProjectSettings = 0x68;
            static constexpr std::uintptr_t DataRegistrySubsystem = 0x70;
            static constexpr std::uintptr_t ActorPartitionSubsystem = 0x78;
            static constexpr std::uintptr_t InstancedActorsManagerClass = 0x80;
            static constexpr std::uintptr_t ExemplarActorWorld = 0x250;
            static constexpr std::uintptr_t SettingsType = 0x268;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"ProjectSettings", 0x68, "ObjectProperty"},
            {"DataRegistrySubsystem", 0x70, "ObjectProperty"},
            {"ActorPartitionSubsystem", 0x78, "ObjectProperty"},
            {"InstancedActorsManagerClass", 0x80, "ClassProperty"},
            {"ExemplarActorWorld", 0x250, "ObjectProperty"},
            {"SettingsType", 0x268, "ObjectProperty"},
        }};
    };

    struct MarsProfileGo
    {
        static constexpr std::string_view Name = "MarsProfileGo";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LFNProfileGo";
        struct Offsets
        {
            static constexpr std::uintptr_t CsvNonPersistentMetadata = 0xB8;
            static constexpr std::uintptr_t CsvMetadata = 0xC8;
            static constexpr std::uintptr_t DefaultSettleTime = 0xD8;
            static constexpr std::uintptr_t ProfileGoScenarios = 0x450;
            static constexpr std::uintptr_t ProfileGoGeneratedScenarios = 0x460;
            static constexpr std::uintptr_t ProfileGoCollections = 0x470;
            static constexpr std::uintptr_t ProfileGoCommands = 0x480;
            static constexpr std::uintptr_t AnimProfilingAssetsBlacklist = 0x490;
            static constexpr std::uintptr_t AnimProfilingCosmeticsWhitelist = 0x4A0;
            static constexpr std::uintptr_t CachedAthenaCosmeticItemDefinitions = 0x4B0;
            static constexpr std::uintptr_t CachedAthenaCosmeticVariantTokens = 0x4C0;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"CsvNonPersistentMetadata", 0xB8, "MapProperty"},
            {"CsvMetadata", 0xC8, "MapProperty"},
            {"DefaultSettleTime", 0xD8, "FloatProperty"},
            {"ProfileGoScenarios", 0x450, "ArrayProperty"},
            {"ProfileGoGeneratedScenarios", 0x460, "ArrayProperty"},
            {"ProfileGoCollections", 0x470, "ArrayProperty"},
            {"ProfileGoCommands", 0x480, "ArrayProperty"},
            {"AnimProfilingAssetsBlacklist", 0x490, "ArrayProperty"},
            {"AnimProfilingCosmeticsWhitelist", 0x4A0, "ArrayProperty"},
            {"CachedAthenaCosmeticItemDefinitions", 0x4B0, "ArrayProperty"},
            {"CachedAthenaCosmeticVariantTokens", 0x4C0, "ArrayProperty"},
        }};
    };

    struct MarsWorldTileSelection
    {
        static constexpr std::string_view Name = "MarsWorldTileSelection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoWorldTileSelectionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ProceduralWorldSettings = 0x28;
            static constexpr std::uintptr_t TileExtent = 0x30;
            static constexpr std::uintptr_t WorldGridCount = 0x34;
            static constexpr std::uintptr_t WorldSize = 0x38;
            static constexpr std::uintptr_t BaseTileset = 0x40;
            static constexpr std::uintptr_t bRequiresDebugArea = 0x44;
            static constexpr std::uintptr_t bEnableBiomeSwaps = 0x45;
            static constexpr std::uintptr_t bEnableBorderPermutations = 0x46;
            static constexpr std::uintptr_t WaterTileName = 0x48;
            static constexpr std::uintptr_t JunoWorldTileLayoutInterface = 0x50;
            static constexpr std::uintptr_t RandomStreamGenerator = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"ProceduralWorldSettings", 0x28, "WeakObjectProperty"},
            {"TileExtent", 0x30, "FloatProperty"},
            {"WorldGridCount", 0x34, "IntProperty"},
            {"WorldSize", 0x38, "Int64Property"},
            {"BaseTileset", 0x40, "StructProperty"},
            {"bRequiresDebugArea", 0x44, "BoolProperty"},
            {"bEnableBiomeSwaps", 0x45, "BoolProperty"},
            {"bEnableBorderPermutations", 0x46, "BoolProperty"},
            {"WaterTileName", 0x48, "NameProperty"},
            {"JunoWorldTileLayoutInterface", 0x50, "ObjectProperty"},
            {"RandomStreamGenerator", 0x58, "ObjectProperty"},
        }};
    };

}

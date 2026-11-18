#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FortNPCCharacterMovieSceneBindings
{
    struct FortGameFeatureAction_SetSeqNPCClasses
    {
        static constexpr std::string_view Name = "FortGameFeatureAction_SetSeqNPCClasses";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFeatureAction";
        struct Offsets
        {
            static constexpr std::uintptr_t MannequinClass = 0x28;
            static constexpr std::uintptr_t MannequinAnimInstanceClass = 0x48;
            static constexpr std::uintptr_t ActorPreviewClass = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"MannequinClass", 0x28, "SoftClassProperty"},
            {"MannequinAnimInstanceClass", 0x48, "SoftClassProperty"},
            {"ActorPreviewClass", 0x68, "SoftClassProperty"},
        }};
    };

    struct FortNPCCharacterMovieSceneReplaceableBinding
    {
        static constexpr std::string_view Name = "FortNPCCharacterMovieSceneReplaceableBinding";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneReplaceableActorBinding";
        struct Offsets
        {
            static constexpr std::uintptr_t CharacterDefinition = 0x28;
            static constexpr std::uintptr_t LoadedObjects = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CharacterDefinition", 0x28, "SoftObjectProperty"},
            {"LoadedObjects", 0x48, "ArrayProperty"},
        }};
    };

    struct FortNPCCharacterMovieSceneSpawnableBinding
    {
        static constexpr std::string_view Name = "FortNPCCharacterMovieSceneSpawnableBinding";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneSpawnableActorBindingBase";
        struct Offsets
        {
            static constexpr std::uintptr_t CharacterDefinition = 0x38;
            static constexpr std::uintptr_t SpawnableActorClass = 0x58;
            static constexpr std::uintptr_t ItemDefinition = 0x60;
            static constexpr std::uintptr_t LoadedObjects = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"CharacterDefinition", 0x38, "SoftObjectProperty"},
            {"SpawnableActorClass", 0x58, "ClassProperty"},
            {"ItemDefinition", 0x60, "ObjectProperty"},
            {"LoadedObjects", 0x68, "ArrayProperty"},
        }};
    };

}

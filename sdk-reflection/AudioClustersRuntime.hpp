#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::AudioClustersRuntime
{
    struct AudioClusterBehavior
    {
        static constexpr std::string_view Name = "AudioClusterBehavior";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t ClusterData = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ClusterData", 0x28, "StructProperty"},
        }};
    };

    struct AudioClusterConfigurations
    {
        static constexpr std::string_view Name = "AudioClusterConfigurations";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t ClusterConfigs = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ClusterConfigs", 0x28, "ArrayProperty"},
        }};
    };

    struct AudioClusterFunctionLibrary
    {
        static constexpr std::string_view Name = "AudioClusterFunctionLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AudioClustersSubsystem
    {
        static constexpr std::string_view Name = "AudioClustersSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GameFeatureAction_ConfigureAudioClusters
    {
        static constexpr std::string_view Name = "GameFeatureAction_ConfigureAudioClusters";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFeatureAction";
        struct Offsets
        {
            static constexpr std::uintptr_t Configurations = 0x28;
            static constexpr std::uintptr_t LoadedConfigurations = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Configurations", 0x28, "SoftObjectProperty"},
            {"LoadedConfigurations", 0x48, "ObjectProperty"},
        }};
    };

}

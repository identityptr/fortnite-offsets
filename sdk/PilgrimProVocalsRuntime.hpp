#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::PilgrimProVocalsRuntime
{
    struct PilgrimAudioCaptureComponent
    {
        static constexpr std::string_view Name = "PilgrimAudioCaptureComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SparksAudioCaptureComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t WaitForEventRouterAction = 0x1E0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"WaitForEventRouterAction", 0x1E0, "ObjectProperty"},
        }};
    };

    struct PilgrimProVocalEvaluator
    {
        static constexpr std::string_view Name = "PilgrimProVocalEvaluator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t SectionPerformances = 0x58;
            static constexpr std::uintptr_t ScoringModel = 0xB0;
            static constexpr std::uintptr_t SongMetadata = 0xB8;
            static constexpr std::uintptr_t SongData = 0xC0;
            static constexpr std::uintptr_t OwningPlayerState = 0xC8;
            static constexpr std::uintptr_t CachedEventRouter = 0xD0;
            static constexpr std::uintptr_t GameConfig = 0xD8;
            static constexpr std::uintptr_t WeightCurve = 0xE0;
            static constexpr std::uintptr_t ScoringWindowMilliseconds = 0x11C;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"SectionPerformances", 0x58, "ArrayProperty"},
            {"ScoringModel", 0xB0, "ObjectProperty"},
            {"SongMetadata", 0xB8, "ObjectProperty"},
            {"SongData", 0xC0, "ObjectProperty"},
            {"OwningPlayerState", 0xC8, "ObjectProperty"},
            {"CachedEventRouter", 0xD0, "ObjectProperty"},
            {"GameConfig", 0xD8, "ObjectProperty"},
            {"WeightCurve", 0xE0, "ObjectProperty"},
            {"ScoringWindowMilliseconds", 0x11C, "IntProperty"},
        }};
    };

    struct PilgrimProVocalScoringModel
    {
        static constexpr std::string_view Name = "PilgrimProVocalScoringModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t GameProgress = 0x28;
            static constexpr std::uintptr_t ClientGameProgress = 0xC8;
            static constexpr std::uintptr_t OwningPlayerState = 0x168;
            static constexpr std::uintptr_t CachedEventRouter = 0x170;
            static constexpr std::uintptr_t SongData = 0x188;
            static constexpr std::uintptr_t PilgrimGameConfig = 0x190;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"GameProgress", 0x28, "StructProperty"},
            {"ClientGameProgress", 0xC8, "StructProperty"},
            {"OwningPlayerState", 0x168, "ObjectProperty"},
            {"CachedEventRouter", 0x170, "ObjectProperty"},
            {"SongData", 0x188, "ObjectProperty"},
            {"PilgrimGameConfig", 0x190, "ObjectProperty"},
        }};
    };

    struct PilgrimProVocalsBlueprintLibrary
    {
        static constexpr std::string_view Name = "PilgrimProVocalsBlueprintLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PilgrimProVocalsInputConfig
    {
        static constexpr std::string_view Name = "PilgrimProVocalsInputConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameFeatureActionSingletonAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t GameplayIMC = 0x28;
            static constexpr std::uintptr_t IA_DeployOverdrive = 0x30;
            static constexpr std::uintptr_t InputPriority = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"GameplayIMC", 0x28, "ObjectProperty"},
            {"IA_DeployOverdrive", 0x30, "ObjectProperty"},
            {"InputPriority", 0x38, "IntProperty"},
        }};
    };

    struct PilgrimProVocalsMBIComponent
    {
        static constexpr std::string_view Name = "PilgrimProVocalsMBIComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PilgrimSongPlayerComponent = 0xC8;
            static constexpr std::uintptr_t PlayerToEvaluatorMap = 0xD0;
            static constexpr std::uintptr_t EventRouter = 0xE0;
            static constexpr std::uintptr_t WaitForEventRouterAction = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"PilgrimSongPlayerComponent", 0xC8, "ObjectProperty"},
            {"PlayerToEvaluatorMap", 0xD0, "MapProperty"},
            {"EventRouter", 0xE0, "ObjectProperty"},
            {"WaitForEventRouterAction", 0xE8, "ObjectProperty"},
        }};
    };

    struct PilgrimProVocalsPlayerControllerComponent
    {
        static constexpr std::string_view Name = "PilgrimProVocalsPlayerControllerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnPitchesReceived = 0xC8;
            static constexpr std::uintptr_t OnPitchesReceivedClient = 0xD8;
            static constexpr std::uintptr_t OnHeartbeatReceived = 0xE8;
            static constexpr std::uintptr_t OnOverdriveDeployReceived = 0xF8;
            static constexpr std::uintptr_t OnClientOverdriveInput = 0x108;
            static constexpr std::uintptr_t AudioCaptureComponent = 0x118;
            static constexpr std::uintptr_t ClientTimerIntervalSeconds = 0x128;
            static constexpr std::uintptr_t MaxPitchArraySize = 0x12C;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"OnPitchesReceived", 0xC8, "MulticastInlineDelegateProperty"},
            {"OnPitchesReceivedClient", 0xD8, "MulticastInlineDelegateProperty"},
            {"OnHeartbeatReceived", 0xE8, "MulticastInlineDelegateProperty"},
            {"OnOverdriveDeployReceived", 0xF8, "MulticastInlineDelegateProperty"},
            {"OnClientOverdriveInput", 0x108, "MulticastInlineDelegateProperty"},
            {"AudioCaptureComponent", 0x118, "ObjectProperty"},
            {"ClientTimerIntervalSeconds", 0x128, "FloatProperty"},
            {"MaxPitchArraySize", 0x12C, "IntProperty"},
        }};
    };

}

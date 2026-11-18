#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SidewaysCodeRuntime
{
    struct FortControllerComponent_Sideways
    {
        static constexpr std::string_view Name = "FortControllerComponent_Sideways";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t UpdateClosestSidewaysHandle = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"UpdateClosestSidewaysHandle", 0xC8, "StructProperty"},
        }};
    };

    struct PlayspaceComponent_SidewaysDimension
    {
        static constexpr std::string_view Name = "PlayspaceComponent_SidewaysDimension";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayspaceComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedAIServiceLoot = 0x1F0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CachedAIServiceLoot", 0x1F0, "ObjectProperty"},
        }};
    };

    struct PlayspaceComponent_SidewaysEncounter
    {
        static constexpr std::string_view Name = "PlayspaceComponent_SidewaysEncounter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayspaceComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnMeshNetworkReady_BP = 0xC0;
            static constexpr std::uintptr_t OnMeshNetworkEventBurst_BP = 0xD0;
            static constexpr std::uintptr_t OnMeshNetworkEventStart_BP = 0xE0;
            static constexpr std::uintptr_t OnMeshNetworkEventChange_BP = 0xF0;
            static constexpr std::uintptr_t OnMeshNetworkEventEnd_BP = 0x100;
            static constexpr std::uintptr_t bSubscribeToMeshNetwork = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"OnMeshNetworkReady_BP", 0xC0, "MulticastInlineDelegateProperty"},
            {"OnMeshNetworkEventBurst_BP", 0xD0, "MulticastInlineDelegateProperty"},
            {"OnMeshNetworkEventStart_BP", 0xE0, "MulticastInlineDelegateProperty"},
            {"OnMeshNetworkEventChange_BP", 0xF0, "MulticastInlineDelegateProperty"},
            {"OnMeshNetworkEventEnd_BP", 0x100, "MulticastInlineDelegateProperty"},
            {"bSubscribeToMeshNetwork", 0x110, "BoolProperty"},
        }};
    };

    struct SidewaysCheatManager
    {
        static constexpr std::string_view Name = "SidewaysCheatManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChildCheatManager";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SidewaysFeatureAction_HoldGlobalData
    {
        static constexpr std::string_view Name = "SidewaysFeatureAction_HoldGlobalData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFeatureAction";
        struct Offsets
        {
            static constexpr std::uintptr_t SidewaysMaterialParameterCollection = 0x28;
            static constexpr std::uintptr_t SidewaysBubbleLocationParameterNamesForLocalPlayers = 0x48;
            static constexpr std::uintptr_t SidewaysBubbleRadiusParameterNamesForLocalPlayers = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SidewaysMaterialParameterCollection", 0x28, "SoftObjectProperty"},
            {"SidewaysBubbleLocationParameterNamesForLocalPlayers", 0x48, "NameProperty"},
            {"SidewaysBubbleRadiusParameterNamesForLocalPlayers", 0x50, "NameProperty"},
        }};
    };

    struct SidewaysLibrary
    {
        static constexpr std::string_view Name = "SidewaysLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SidewaysPlayspace
    {
        static constexpr std::string_view Name = "SidewaysPlayspace";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayspace";
        struct Offsets
        {
            static constexpr std::uintptr_t NotifyInactivePlayspaceUserAdded = 0x538;
            static constexpr std::uintptr_t NotifyInactivePlayspaceUserRemoved = 0x560;
            static constexpr std::uintptr_t InactivePlayspaceUsers = 0x588;
            static constexpr std::uintptr_t bSubscribeToMeshNetwork = 0x600;
            static constexpr std::uintptr_t UserAcceptanceType = 0x603;
            static constexpr std::uintptr_t MatchmakingSettings = 0x608;
            static constexpr std::uintptr_t ReplicatedStateClass = 0x630;
            static constexpr std::uintptr_t ReplicatedState = 0x638;
            static constexpr std::uintptr_t EventRouter = 0x640;
            static constexpr std::uintptr_t bShouldCreateEventRouter = 0x648;
            static constexpr std::uintptr_t InactivePendingUsers = 0x650;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"NotifyInactivePlayspaceUserAdded", 0x538, "MulticastInlineDelegateProperty"},
            {"NotifyInactivePlayspaceUserRemoved", 0x560, "MulticastInlineDelegateProperty"},
            {"InactivePlayspaceUsers", 0x588, "StructProperty"},
            {"bSubscribeToMeshNetwork", 0x600, "BoolProperty"},
            {"UserAcceptanceType", 0x603, "EnumProperty"},
            {"MatchmakingSettings", 0x608, "StructProperty"},
            {"ReplicatedStateClass", 0x630, "ClassProperty"},
            {"ReplicatedState", 0x638, "ObjectProperty"},
            {"EventRouter", 0x640, "ObjectProperty"},
            {"bShouldCreateEventRouter", 0x648, "BoolProperty"},
            {"InactivePendingUsers", 0x650, "ArrayProperty"},
        }};
    };

    struct SidewaysStateComponent
    {
        static constexpr std::string_view Name = "SidewaysStateComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFrameworkComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t SidewaysState = 0xC0;
            static constexpr std::uintptr_t SidewaysPlayspace = 0xC8;
            static constexpr std::uintptr_t OnSidewaysStateChangedDelegate = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SidewaysState", 0xC0, "EnumProperty"},
            {"SidewaysPlayspace", 0xC8, "ObjectProperty"},
            {"OnSidewaysStateChangedDelegate", 0xD0, "MulticastInlineDelegateProperty"},
        }};
    };

    struct SidewaysStateComponent_Player
    {
        static constexpr std::string_view Name = "SidewaysStateComponent_Player";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SidewaysStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t SidewaysMaterialParameterCollection = 0xE8;
            static constexpr std::uintptr_t SidewaysBubbleLocationParameterNamesForLocalPlayers = 0x108;
            static constexpr std::uintptr_t SidewaysBubbleRadiusParameterNamesForLocalPlayers = 0x110;
            static constexpr std::uintptr_t ExtraCorruptionRadius = 0x118;
            static constexpr std::uintptr_t MinRadiusToHaveAnyCorruption = 0x11C;
            static constexpr std::uintptr_t MaxRadiusForScalingExtraCorruptionRadius = 0x120;
            static constexpr std::uintptr_t UpdateFrequency = 0x124;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"SidewaysMaterialParameterCollection", 0xE8, "SoftObjectProperty"},
            {"SidewaysBubbleLocationParameterNamesForLocalPlayers", 0x108, "NameProperty"},
            {"SidewaysBubbleRadiusParameterNamesForLocalPlayers", 0x110, "NameProperty"},
            {"ExtraCorruptionRadius", 0x118, "FloatProperty"},
            {"MinRadiusToHaveAnyCorruption", 0x11C, "FloatProperty"},
            {"MaxRadiusForScalingExtraCorruptionRadius", 0x120, "FloatProperty"},
            {"UpdateFrequency", 0x124, "FloatProperty"},
        }};
    };

    struct SidewaysVolume
    {
        static constexpr std::string_view Name = "SidewaysVolume";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameplayVolume";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayspaceSetEvent = 0x278;
            static constexpr std::uintptr_t PlayspaceClassTemplate = 0x2A0;
            static constexpr std::uintptr_t PlayspaceCreationType = 0x2C0;
            static constexpr std::uintptr_t PlayspaceClass = 0x2C8;
            static constexpr std::uintptr_t bDestroyPlayspaceOnEndPlay = 0x2D0;
            static constexpr std::uintptr_t bSpawnPlayspaceAtGameplayVolumeLocation = 0x2D1;
            static constexpr std::uintptr_t Playspace = 0x2D8;
            static constexpr std::uintptr_t VolumeTags = 0x2E0;
            static constexpr std::uintptr_t BoundsComponent = 0x300;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"PlayspaceSetEvent", 0x278, "MulticastInlineDelegateProperty"},
            {"PlayspaceClassTemplate", 0x2A0, "SoftClassProperty"},
            {"PlayspaceCreationType", 0x2C0, "EnumProperty"},
            {"PlayspaceClass", 0x2C8, "ClassProperty"},
            {"bDestroyPlayspaceOnEndPlay", 0x2D0, "BoolProperty"},
            {"bSpawnPlayspaceAtGameplayVolumeLocation", 0x2D1, "BoolProperty"},
            {"Playspace", 0x2D8, "ObjectProperty"},
            {"VolumeTags", 0x2E0, "StructProperty"},
            {"BoundsComponent", 0x300, "ObjectProperty"},
        }};
    };

}

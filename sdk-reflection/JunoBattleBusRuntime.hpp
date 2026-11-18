#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::JunoBattleBusRuntime
{
    struct JunoBattleBusAnalytics
    {
        static constexpr std::string_view Name = "JunoBattleBusAnalytics";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoBattleBusBlueprintLibrary
    {
        static constexpr std::string_view Name = "JunoBattleBusBlueprintLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoBattleBusCheatManager
    {
        static constexpr std::string_view Name = "JunoBattleBusCheatManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChildCheatManager";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoBattleBusStop
    {
        static constexpr std::string_view Name = "JunoBattleBusStop";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoBuildingGameplayActor";
        struct Offsets
        {
            static constexpr std::uintptr_t PickDestination_InteractText = 0xA20;
            static constexpr std::uintptr_t EnterQueue_InteractText = 0xA30;
            static constexpr std::uintptr_t ExitQueue_InteractText = 0xA40;
            static constexpr std::uintptr_t OpenMap_InteractText = 0xA50;
            static constexpr std::uintptr_t GameTravel_InteractText = 0xA60;
            static constexpr std::uintptr_t ReplicatedSavedActorGuid = 0xA70;
            static constexpr std::uintptr_t bIsBusStopDiscovered = 0xA80;
            static constexpr std::uintptr_t GameTravelInfoChangedEventHandle = 0xA84;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"PickDestination_InteractText", 0xA20, "TextProperty"},
            {"EnterQueue_InteractText", 0xA30, "TextProperty"},
            {"ExitQueue_InteractText", 0xA40, "TextProperty"},
            {"OpenMap_InteractText", 0xA50, "TextProperty"},
            {"GameTravel_InteractText", 0xA60, "TextProperty"},
            {"ReplicatedSavedActorGuid", 0xA70, "StructProperty"},
            {"bIsBusStopDiscovered", 0xA80, "BoolProperty"},
            {"GameTravelInfoChangedEventHandle", 0xA84, "StructProperty"},
        }};
    };

    struct JunoBattleBusStopDiscoveredContext
    {
        static constexpr std::string_view Name = "JunoBattleBusStopDiscoveredContext";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t DiscoveredBusStop = 0x28;
            static constexpr std::uintptr_t DiscoveringPlayerState = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DiscoveredBusStop", 0x28, "StructProperty"},
            {"DiscoveringPlayerState", 0xA8, "ObjectProperty"},
        }};
    };

    struct JunoBattleBusStopLimitGetter
    {
        static constexpr std::string_view Name = "JunoBattleBusStopLimitGetter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoBuildLimitGetter";
        struct Offsets
        {
            static constexpr std::uintptr_t PhysicalMarkerSettingName = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PhysicalMarkerSettingName", 0x28, "NameProperty"},
        }};
    };

    struct JunoBusManagerComponent
    {
        static constexpr std::string_view Name = "JunoBusManagerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayspaceComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t BattleBusFlightInfo = 0x150;
            static constexpr std::uintptr_t BusStopActorTypeTag = 0x198;
            static constexpr std::uintptr_t SpecialBusStopLocationTag = 0x19C;
            static constexpr std::uintptr_t BattleBusClass = 0x1A0;
            static constexpr std::uintptr_t TimeToReadyBus = 0x1A8;
            static constexpr std::uintptr_t SpawnDistanceFromTargetLocation = 0x1D0;
            static constexpr std::uintptr_t BusSpawnHeightAboveBusStop = 0x1F8;
            static constexpr std::uintptr_t MinBusSpawnHeight = 0x220;
            static constexpr std::uintptr_t MaxBusSpawnHeight = 0x248;
            static constexpr std::uintptr_t ForceEndFlightAfterTime = 0x270;
            static constexpr std::uintptr_t MultiplayerBusQueueTimeInSeconds = 0x298;
            static constexpr std::uintptr_t SingleplayerBusQueueTimeInSeconds = 0x29C;
            static constexpr std::uintptr_t SpecialCaseBusStopPOILayerNames = 0x2A0;
            static constexpr std::uintptr_t DefaultBusStopPOILayerName = 0x2B0;
            static constexpr std::uintptr_t BusStopPOIRegistryKey = 0x2B4;
            static constexpr std::uintptr_t JunoMarker = 0x2B8;
            static constexpr std::uintptr_t MarkerSettingsByStopType = 0x3C8;
            static constexpr std::uintptr_t MarkerSettingsByGameplayTag = 0x3D8;
            static constexpr std::uintptr_t DiscoveredBusStops = 0x3E8;
            static constexpr std::uintptr_t QueuedPlayersData = 0x3F8;
            static constexpr std::uintptr_t QueueTimeRemaining = 0x430;
            static constexpr std::uintptr_t LastBusTeleportUseTime = 0x478;
            static constexpr std::uintptr_t OriginBusStop = 0x4A0;
            static constexpr std::uintptr_t JunoBusTravelTelemetryData = 0x528;
        };

        inline static constexpr std::array<PropertyInfo, 24> Properties{{
            {"BattleBusFlightInfo", 0x150, "StructProperty"},
            {"BusStopActorTypeTag", 0x198, "StructProperty"},
            {"SpecialBusStopLocationTag", 0x19C, "StructProperty"},
            {"BattleBusClass", 0x1A0, "ClassProperty"},
            {"TimeToReadyBus", 0x1A8, "StructProperty"},
            {"SpawnDistanceFromTargetLocation", 0x1D0, "StructProperty"},
            {"BusSpawnHeightAboveBusStop", 0x1F8, "StructProperty"},
            {"MinBusSpawnHeight", 0x220, "StructProperty"},
            {"MaxBusSpawnHeight", 0x248, "StructProperty"},
            {"ForceEndFlightAfterTime", 0x270, "StructProperty"},
            {"MultiplayerBusQueueTimeInSeconds", 0x298, "IntProperty"},
            {"SingleplayerBusQueueTimeInSeconds", 0x29C, "IntProperty"},
            {"SpecialCaseBusStopPOILayerNames", 0x2A0, "MapProperty"},
            {"DefaultBusStopPOILayerName", 0x2B0, "NameProperty"},
            {"BusStopPOIRegistryKey", 0x2B4, "NameProperty"},
            {"JunoMarker", 0x2B8, "StructProperty"},
            {"MarkerSettingsByStopType", 0x3C8, "MapProperty"},
            {"MarkerSettingsByGameplayTag", 0x3D8, "MapProperty"},
            {"DiscoveredBusStops", 0x3E8, "ArrayProperty"},
            {"QueuedPlayersData", 0x3F8, "StructProperty"},
            {"QueueTimeRemaining", 0x430, "IntProperty"},
            {"LastBusTeleportUseTime", 0x478, "StructProperty"},
            {"OriginBusStop", 0x4A0, "WeakObjectProperty"},
            {"JunoBusTravelTelemetryData", 0x528, "StructProperty"},
        }};
    };

    struct JunoControllerComponent_BusTeleport
    {
        static constexpr std::string_view Name = "JunoControllerComponent_BusTeleport";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnPlayerEnterBattleBus = 0xC8;
            static constexpr std::uintptr_t OnPlayerExitBattleBus = 0xD8;
            static constexpr std::uintptr_t BusInputMapping = 0xE8;
            static constexpr std::uintptr_t JumpAction = 0xF0;
            static constexpr std::uintptr_t UpInputAction = 0xF8;
            static constexpr std::uintptr_t DownInputAction = 0x100;
            static constexpr std::uintptr_t BusAttachOffset = 0x108;
            static constexpr std::uintptr_t CurrentBattleBus = 0x120;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"OnPlayerEnterBattleBus", 0xC8, "MulticastInlineDelegateProperty"},
            {"OnPlayerExitBattleBus", 0xD8, "MulticastInlineDelegateProperty"},
            {"BusInputMapping", 0xE8, "ObjectProperty"},
            {"JumpAction", 0xF0, "ObjectProperty"},
            {"UpInputAction", 0xF8, "ObjectProperty"},
            {"DownInputAction", 0x100, "ObjectProperty"},
            {"BusAttachOffset", 0x108, "StructProperty"},
            {"CurrentBattleBus", 0x120, "WeakObjectProperty"},
        }};
    };

    struct JunoObjectiveProcessor_GameTravelComplete
    {
        static constexpr std::string_view Name = "JunoObjectiveProcessor_GameTravelComplete";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortObjectiveProcessor";
        struct Offsets
        {
            static constexpr std::uintptr_t VerbListenerHandles = 0x28;
            static constexpr std::uintptr_t OwningProcessorSubsystem = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VerbListenerHandles", 0x28, "ArrayProperty"},
            {"OwningProcessorSubsystem", 0x38, "ObjectProperty"},
        }};
    };

}

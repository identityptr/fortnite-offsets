#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::DynamicVolume
{
    struct FortAutomationRpcManager_DynamicVolume
    {
        static constexpr std::string_view Name = "FortAutomationRpcManager_DynamicVolume";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAutomationRpcManager";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortDynamicVolume
    {
        static constexpr std::string_view Name = "FortDynamicVolume";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortDynamicVolumeClientStatusComponent
    {
        static constexpr std::string_view Name = "FortDynamicVolumeClientStatusComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t LoadingDynamicVolumes = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"LoadingDynamicVolumes", 0xC0, "SetProperty"},
        }};
    };

    struct FortDynamicVolumeComponent
    {
        static constexpr std::string_view Name = "FortDynamicVolumeComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bAutoLoad = 0x138;
            static constexpr std::uintptr_t DefaultLinkCode = 0x140;
            static constexpr std::uintptr_t bAutoStartMinigameOnContentLoad = 0x150;
            static constexpr std::uintptr_t UnloadedProxyEntityClass = 0x158;
            static constexpr std::uintptr_t UnloadedProxyActorClass = 0x178;
            static constexpr std::uintptr_t LoadingStateEntity = 0x180;
            static constexpr std::uintptr_t LoadingStateActor = 0x220;
            static constexpr std::uintptr_t LoadedStateEntities = 0x290;
            static constexpr std::uintptr_t LoadedStateActors = 0x2A0;
            static constexpr std::uintptr_t RuntimeSettings = 0x2B0;
            static constexpr std::uintptr_t bAdoptParentPlayspaceUsers = 0x2DC;
            static constexpr std::uintptr_t bCancelRequestOnContentFailure = 0x2DD;
            static constexpr std::uintptr_t bQueryLinkMetadata = 0x2DE;
            static constexpr std::uintptr_t LoadState = 0x3A8;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"bAutoLoad", 0x138, "BoolProperty"},
            {"DefaultLinkCode", 0x140, "StrProperty"},
            {"bAutoStartMinigameOnContentLoad", 0x150, "BoolProperty"},
            {"UnloadedProxyEntityClass", 0x158, "SoftClassProperty"},
            {"UnloadedProxyActorClass", 0x178, "ClassProperty"},
            {"LoadingStateEntity", 0x180, "StructProperty"},
            {"LoadingStateActor", 0x220, "StructProperty"},
            {"LoadedStateEntities", 0x290, "ArrayProperty"},
            {"LoadedStateActors", 0x2A0, "ArrayProperty"},
            {"RuntimeSettings", 0x2B0, "StructProperty"},
            {"bAdoptParentPlayspaceUsers", 0x2DC, "BoolProperty"},
            {"bCancelRequestOnContentFailure", 0x2DD, "BoolProperty"},
            {"bQueryLinkMetadata", 0x2DE, "BoolProperty"},
            {"LoadState", 0x3A8, "EnumProperty"},
        }};
    };

    struct FortDynamicVolumePlayspaceComponent
    {
        static constexpr std::string_view Name = "FortDynamicVolumePlayspaceComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayspaceComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t AllActorsBounds = 0x1B8;
            static constexpr std::uintptr_t LevelBoundsActorBounds = 0x1F0;
            static constexpr std::uintptr_t CurrentLinkId = 0x228;
            static constexpr std::uintptr_t bScaleVolumeBounds = 0x240;
            static constexpr std::uintptr_t ProhibitedTags = 0x248;
            static constexpr std::uintptr_t ProhibitedGameplayTags = 0x258;
            static constexpr std::uintptr_t RuntimeSettings = 0x278;
            static constexpr std::uintptr_t BoundsScale = 0x2A8;
            static constexpr std::uintptr_t EstimatedGameplayBounds = 0x2C0;
            static constexpr std::uintptr_t ServerVerseRuntimeErrorEncountered = 0x2F8;
            static constexpr std::uintptr_t UnrecoverableErrorMessage = 0x300;
            static constexpr std::uintptr_t bLevelShownOnServer = 0x328;
            static constexpr std::uintptr_t bWaitForAssetPreloadOnAllClientsBeforeStartingLevel = 0x329;
            static constexpr std::uintptr_t LevelStreamComponentOverride = 0x32C;
            static constexpr std::uintptr_t TargetLinkId = 0x388;
            static constexpr std::uintptr_t ReceivedLoadedPlayerStates = 0x420;
        };

        inline static constexpr std::array<PropertyInfo, 16> Properties{{
            {"AllActorsBounds", 0x1B8, "StructProperty"},
            {"LevelBoundsActorBounds", 0x1F0, "StructProperty"},
            {"CurrentLinkId", 0x228, "StructProperty"},
            {"bScaleVolumeBounds", 0x240, "BoolProperty"},
            {"ProhibitedTags", 0x248, "StructProperty"},
            {"ProhibitedGameplayTags", 0x258, "StructProperty"},
            {"RuntimeSettings", 0x278, "StructProperty"},
            {"BoundsScale", 0x2A8, "StructProperty"},
            {"EstimatedGameplayBounds", 0x2C0, "StructProperty"},
            {"ServerVerseRuntimeErrorEncountered", 0x2F8, "BoolProperty"},
            {"UnrecoverableErrorMessage", 0x300, "StructProperty"},
            {"bLevelShownOnServer", 0x328, "BoolProperty"},
            {"bWaitForAssetPreloadOnAllClientsBeforeStartingLevel", 0x329, "BoolProperty"},
            {"LevelStreamComponentOverride", 0x32C, "WeakObjectProperty"},
            {"TargetLinkId", 0x388, "StructProperty"},
            {"ReceivedLoadedPlayerStates", 0x420, "ArrayProperty"},
        }};
    };

    struct FortDynamicVolumeWorldSubsystem
    {
        static constexpr std::string_view Name = "FortDynamicVolumeWorldSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t ActorEntitySubsystem = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ActorEntitySubsystem", 0x38, "WeakObjectProperty"},
        }};
    };

}

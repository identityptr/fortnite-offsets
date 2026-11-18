#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::VKEditGameplay
{
    struct FortVKEditGameFeatureAction_RegisterContentErrorHandler
    {
        static constexpr std::string_view Name = "FortVKEditGameFeatureAction_RegisterContentErrorHandler";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFeatureAction";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortVKEditGameFeatureAction_SetWaterRestriction
    {
        static constexpr std::string_view Name = "FortVKEditGameFeatureAction_SetWaterRestriction";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFeatureAction";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PlayspaceComponent_EditConnectionManager
    {
        static constexpr std::string_view Name = "PlayspaceComponent_EditConnectionManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayspaceComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t EditConnections = 0x220;
            static constexpr std::uintptr_t VkEditStatus = 0x224;
            static constexpr std::uintptr_t bPerformanceWarning = 0x225;
            static constexpr std::uintptr_t UITagsToHide = 0x228;
            static constexpr std::uintptr_t bVerseDebuggerAttached = 0x248;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"EditConnections", 0x220, "IntProperty"},
            {"VkEditStatus", 0x224, "EnumProperty"},
            {"bPerformanceWarning", 0x225, "BoolProperty"},
            {"UITagsToHide", 0x228, "StructProperty"},
            {"bVerseDebuggerAttached", 0x248, "BoolProperty"},
        }};
    };

    struct PlayspaceComponent_PlaysetRootSpawner
    {
        static constexpr std::string_view Name = "PlayspaceComponent_PlaysetRootSpawner";
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

    struct PlayspaceComponent_VKEditCreativeToolsPermission
    {
        static constexpr std::string_view Name = "PlayspaceComponent_VKEditCreativeToolsPermission";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PlayspaceComponent_CreativeToolsPermission";
        struct Offsets
        {
            static constexpr std::uintptr_t AccountIdOfOwner = 0x160;
            static constexpr std::uintptr_t PlotPermissions = 0x190;
            static constexpr std::uintptr_t bPermissionsSaveInProgress = 0x1A8;
            static constexpr std::uintptr_t bAllowUnrestrictedPhoneControls = 0x1A9;
            static constexpr std::uintptr_t bSkipPermissionsRequirement = 0x1AA;
            static constexpr std::uintptr_t bShouldRestrictMoveToolToInteractionCollection = 0x1AB;
            static constexpr std::uintptr_t MoveToolInteractionCollection = 0x1B0;
            static constexpr std::uintptr_t OldPermissions = 0x1B8;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"AccountIdOfOwner", 0x160, "StructProperty"},
            {"PlotPermissions", 0x190, "StructProperty"},
            {"bPermissionsSaveInProgress", 0x1A8, "BoolProperty"},
            {"bAllowUnrestrictedPhoneControls", 0x1A9, "BoolProperty"},
            {"bSkipPermissionsRequirement", 0x1AA, "BoolProperty"},
            {"bShouldRestrictMoveToolToInteractionCollection", 0x1AB, "BoolProperty"},
            {"MoveToolInteractionCollection", 0x1B0, "ObjectProperty"},
            {"OldPermissions", 0x1B8, "StructProperty"},
        }};
    };

    struct VKEditGameplayAssetsToCook
    {
        static constexpr std::string_view Name = "VKEditGameplayAssetsToCook";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimaryDataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t Assets = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Assets", 0x28, "ArrayProperty"},
        }};
    };

    struct VKEditPlayspace
    {
        static constexpr std::string_view Name = "VKEditPlayspace";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayspace";
        struct Offsets
        {
            static constexpr std::uintptr_t EditorOnlyMinigameSettingsMachineClassToSpawn = 0x6C0;
            static constexpr std::uintptr_t EditorOnlyWorldManagerClassToSpawn = 0x6E0;
            static constexpr std::uintptr_t LevelStreamComponent = 0x700;
            static constexpr std::uintptr_t ProjectEditComponent = 0x708;
            static constexpr std::uintptr_t PlayStopPauseManager = 0x710;
            static constexpr std::uintptr_t EditConnectionManager = 0x718;
            static constexpr std::uintptr_t LiveEditComponent = 0x720;
            static constexpr std::uintptr_t CreativeToolsPermission = 0x728;
            static constexpr std::uintptr_t CreativeLoadingStateProxy = 0x730;
            static constexpr std::uintptr_t SpatialGameplayComponent = 0x738;
            static constexpr std::uintptr_t ObjectTrackingComponent = 0x740;
            static constexpr std::uintptr_t DeviceTrackerComponent = 0x748;
            static constexpr std::uintptr_t CreativeInventoryComponent = 0x750;
            static constexpr std::uintptr_t ActorMemoryTrackerComponent = 0x758;
            static constexpr std::uintptr_t GlobalMemoryTrackerComponent = 0x760;
            static constexpr std::uintptr_t FortCreativeDynamicXp = 0x768;
            static constexpr std::uintptr_t CreativeModifyEmotesComponent = 0x770;
            static constexpr std::uintptr_t WorldTimeOfDayOverrideComponent = 0x778;
            static constexpr std::uintptr_t NaniteSettingsOverrideComponent = 0x780;
            static constexpr std::uintptr_t TeamManagementComponent = 0x788;
            static constexpr std::uintptr_t PlaysetRootSpawnerComponent = 0x790;
            static constexpr std::uintptr_t PlayerPawnOverridesComponent = 0x798;
            static constexpr std::uintptr_t LiveTraceComponent = 0x7A0;
        };

        inline static constexpr std::array<PropertyInfo, 23> Properties{{
            {"EditorOnlyMinigameSettingsMachineClassToSpawn", 0x6C0, "SoftClassProperty"},
            {"EditorOnlyWorldManagerClassToSpawn", 0x6E0, "SoftClassProperty"},
            {"LevelStreamComponent", 0x700, "ObjectProperty"},
            {"ProjectEditComponent", 0x708, "ObjectProperty"},
            {"PlayStopPauseManager", 0x710, "ObjectProperty"},
            {"EditConnectionManager", 0x718, "ObjectProperty"},
            {"LiveEditComponent", 0x720, "ObjectProperty"},
            {"CreativeToolsPermission", 0x728, "ObjectProperty"},
            {"CreativeLoadingStateProxy", 0x730, "ObjectProperty"},
            {"SpatialGameplayComponent", 0x738, "ObjectProperty"},
            {"ObjectTrackingComponent", 0x740, "ObjectProperty"},
            {"DeviceTrackerComponent", 0x748, "ObjectProperty"},
            {"CreativeInventoryComponent", 0x750, "ObjectProperty"},
            {"ActorMemoryTrackerComponent", 0x758, "ObjectProperty"},
            {"GlobalMemoryTrackerComponent", 0x760, "ObjectProperty"},
            {"FortCreativeDynamicXp", 0x768, "ObjectProperty"},
            {"CreativeModifyEmotesComponent", 0x770, "ObjectProperty"},
            {"WorldTimeOfDayOverrideComponent", 0x778, "ObjectProperty"},
            {"NaniteSettingsOverrideComponent", 0x780, "ObjectProperty"},
            {"TeamManagementComponent", 0x788, "ObjectProperty"},
            {"PlaysetRootSpawnerComponent", 0x790, "ObjectProperty"},
            {"PlayerPawnOverridesComponent", 0x798, "ObjectProperty"},
            {"LiveTraceComponent", 0x7A0, "ObjectProperty"},
        }};
    };

}

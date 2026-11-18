#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FMJamPlayspaceRuntime
{
    struct AddAbilitySetToOverlappingActorsComponent
    {
        static constexpr std::string_view Name = "AddAbilitySetToOverlappingActorsComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t AbilitySetsToAdd = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AbilitySetsToAdd", 0xC0, "ArrayProperty"},
        }};
    };

    struct FortGameFeatureAction_AddAbilitiesToPlayspaceUsers
    {
        static constexpr std::string_view Name = "FortGameFeatureAction_AddAbilitiesToPlayspaceUsers";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFeatureAction";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayspaceTagQuery = 0x28;
            static constexpr std::uintptr_t PlayspaceClass = 0x70;
            static constexpr std::uintptr_t AbilitySetsToAdd = 0x90;
            static constexpr std::uintptr_t CVarCondition = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"PlayspaceTagQuery", 0x28, "StructProperty"},
            {"PlayspaceClass", 0x70, "SoftClassProperty"},
            {"AbilitySetsToAdd", 0x90, "ArrayProperty"},
            {"CVarCondition", 0xA0, "OptionalProperty"},
        }};
    };

    struct JamPlayspace
    {
        static constexpr std::string_view Name = "JamPlayspace";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SparksMusicPlayspace";
        struct Offsets
        {
            static constexpr std::uintptr_t JamPlayerManager = 0x728;
            static constexpr std::uintptr_t MusicClock_Looped = 0x730;
            static constexpr std::uintptr_t AudioState = 0x738;
            static constexpr std::uintptr_t MusicManager = 0x740;
            static constexpr std::uintptr_t ReactiveFXComponent = 0x748;
            static constexpr std::uintptr_t ExternalReachabilityComponent = 0x750;
            static constexpr std::uintptr_t NetSyncComponent = 0x758;
            static constexpr std::uintptr_t JamSessionGuid = 0x760;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"JamPlayerManager", 0x728, "ObjectProperty"},
            {"MusicClock_Looped", 0x730, "ObjectProperty"},
            {"AudioState", 0x738, "ObjectProperty"},
            {"MusicManager", 0x740, "ObjectProperty"},
            {"ReactiveFXComponent", 0x748, "ObjectProperty"},
            {"ExternalReachabilityComponent", 0x750, "ObjectProperty"},
            {"NetSyncComponent", 0x758, "ObjectProperty"},
            {"JamSessionGuid", 0x760, "StructProperty"},
        }};
    };

    struct JamPlayspaceBlockerInterface
    {
        static constexpr std::string_view Name = "JamPlayspaceBlockerInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JamPlayspaceComponent_JamCompanion
    {
        static constexpr std::string_view Name = "JamPlayspaceComponent_JamCompanion";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PlayspaceComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bOverrideShouldPlaySongAlone = 0xD8;
            static constexpr std::uintptr_t bForceShouldPlaySongAlone = 0xD9;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bOverrideShouldPlaySongAlone", 0xD8, "BoolProperty"},
            {"bForceShouldPlaySongAlone", 0xD9, "BoolProperty"},
        }};
    };

    struct JamPlayspaceComponent_PlayerManager
    {
        static constexpr std::string_view Name = "JamPlayspaceComponent_PlayerManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PlayspaceComponent_SparksPlayerManager";
        struct Offsets
        {
            static constexpr std::uintptr_t Interactors = 0x120;
            static constexpr std::uintptr_t PlayerPawnCache = 0x130;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Interactors", 0x120, "ArrayProperty"},
            {"PlayerPawnCache", 0x130, "MapProperty"},
        }};
    };

    struct JamPlayspaceVolume
    {
        static constexpr std::string_view Name = "JamPlayspaceVolume";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameplayVolume";
        struct Offsets
        {
            static constexpr std::uintptr_t AutoJammerProfilePic = 0x348;
            static constexpr std::uintptr_t JamCompanionSong = 0x368;
            static constexpr std::uintptr_t bShouldJamCompanionStaggerAutoJammers = 0x36C;
            static constexpr std::uintptr_t TooCloseToJamErrorMessage = 0x370;
            static constexpr std::uintptr_t SpecialLocationMarkerManager = 0x378;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"AutoJammerProfilePic", 0x348, "SoftObjectProperty"},
            {"JamCompanionSong", 0x368, "NameProperty"},
            {"bShouldJamCompanionStaggerAutoJammers", 0x36C, "BoolProperty"},
            {"TooCloseToJamErrorMessage", 0x370, "StructProperty"},
            {"SpecialLocationMarkerManager", 0x378, "ObjectProperty"},
        }};
    };

    struct JamPlayspaceVolumeComponent_ProvideTransforms
    {
        static constexpr std::string_view Name = "JamPlayspaceVolumeComponent_ProvideTransforms";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t TransformsBaseComponent = 0xC0;
            static constexpr std::uintptr_t SignificantTransforms = 0xE8;
            static constexpr std::uintptr_t ProviderTags = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"TransformsBaseComponent", 0xC0, "StructProperty"},
            {"SignificantTransforms", 0xE8, "ArrayProperty"},
            {"ProviderTags", 0xF8, "StructProperty"},
        }};
    };

    struct JamQuickplayPlayerSpawningComponent
    {
        static constexpr std::string_view Name = "JamQuickplayPlayerSpawningComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PlayspaceComponent_PlayerSpawning";
        struct Offsets
        {
            static constexpr std::uintptr_t PregameSpawnTags = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PregameSpawnTags", 0xD0, "StructProperty"},
        }};
    };

    struct PlayspaceComponent_AddGameFeatureAbilitiesToUsers
    {
        static constexpr std::string_view Name = "PlayspaceComponent_AddGameFeatureAbilitiesToUsers";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PlayspaceComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PrimaryComponentTick = 0x38;
            static constexpr std::uintptr_t ComponentTags = 0x68;
            static constexpr std::uintptr_t AssetUserData = 0x78;
            static constexpr std::uintptr_t UCSSerializationIndex = 0x90;
            static constexpr std::uintptr_t bNetAddressable = 0x98;
            static constexpr std::uintptr_t bReplicateUsingRegisteredSubObjectList = 0x98;
            static constexpr std::uintptr_t bReplicates = 0x98;
            static constexpr std::uintptr_t bAutoActivate = 0x9A;
            static constexpr std::uintptr_t bCanEverAffectNavigation = 0x9A;
            static constexpr std::uintptr_t bEditableWhenInherited = 0x9A;
            static constexpr std::uintptr_t bIsActive = 0x9A;
            static constexpr std::uintptr_t bIsEditorOnly = 0x9B;
            static constexpr std::uintptr_t CreationMethod = 0xB9;
            static constexpr std::uintptr_t OnComponentActivated = 0xBA;
            static constexpr std::uintptr_t OnComponentDeactivated = 0xBB;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"PrimaryComponentTick", 0x38, "StructProperty"},
            {"ComponentTags", 0x68, "ArrayProperty"},
            {"AssetUserData", 0x78, "ArrayProperty"},
            {"UCSSerializationIndex", 0x90, "IntProperty"},
            {"bNetAddressable", 0x98, "BoolProperty"},
            {"bReplicateUsingRegisteredSubObjectList", 0x98, "BoolProperty"},
            {"bReplicates", 0x98, "BoolProperty"},
            {"bAutoActivate", 0x9A, "BoolProperty"},
            {"bCanEverAffectNavigation", 0x9A, "BoolProperty"},
            {"bEditableWhenInherited", 0x9A, "BoolProperty"},
            {"bIsActive", 0x9A, "BoolProperty"},
            {"bIsEditorOnly", 0x9B, "BoolProperty"},
            {"CreationMethod", 0xB9, "EnumProperty"},
            {"OnComponentActivated", 0xBA, "MulticastSparseDelegateProperty"},
            {"OnComponentDeactivated", 0xBB, "MulticastSparseDelegateProperty"},
        }};
    };

}

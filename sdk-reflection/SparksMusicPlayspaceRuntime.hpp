#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SparksMusicPlayspaceRuntime
{
    struct PlayspaceComponent_LipSyncAssetManager
    {
        static constexpr std::string_view Name = "PlayspaceComponent_LipSyncAssetManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent_LipSyncAssetManager";
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

    struct PlayspaceComponent_MidiEventDataManager
    {
        static constexpr std::string_view Name = "PlayspaceComponent_MidiEventDataManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent_MidiEventDataManager";
        struct Offsets
        {
            static constexpr std::uintptr_t OnMidiEventDriverChanged = 0xC0;
            static constexpr std::uintptr_t OnMidiEventDataParsed = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OnMidiEventDriverChanged", 0xC0, "MulticastInlineDelegateProperty"},
            {"OnMidiEventDataParsed", 0xE8, "MulticastInlineDelegateProperty"},
        }};
    };

    struct PlayspaceComponent_SparksPerfMem
    {
        static constexpr std::string_view Name = "PlayspaceComponent_SparksPerfMem";
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

    struct PlayspaceComponent_SparksPlayerManager
    {
        static constexpr std::string_view Name = "PlayspaceComponent_SparksPlayerManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PlayspaceComponent_PlayerManager";
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

    struct SparksMusicPlayspace
    {
        static constexpr std::string_view Name = "SparksMusicPlayspace";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayspace";
        struct Offsets
        {
            static constexpr std::uintptr_t OnMusicClockChanged = 0x670;
            static constexpr std::uintptr_t bAutoPlayMetasound = 0x698;
            static constexpr std::uintptr_t MetasoundPlayer = 0x6A0;
            static constexpr std::uintptr_t MusicClock = 0x6A8;
            static constexpr std::uintptr_t CameraDirector = 0x6B0;
            static constexpr std::uintptr_t PlayerManagerComp = 0x6B8;
            static constexpr std::uintptr_t LipSyncManager = 0x6C0;
            static constexpr std::uintptr_t MidiEventDataManager = 0x6C8;
            static constexpr std::uintptr_t PerfMemComp = 0x6D0;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"OnMusicClockChanged", 0x670, "MulticastInlineDelegateProperty"},
            {"bAutoPlayMetasound", 0x698, "BoolProperty"},
            {"MetasoundPlayer", 0x6A0, "ObjectProperty"},
            {"MusicClock", 0x6A8, "ObjectProperty"},
            {"CameraDirector", 0x6B0, "ObjectProperty"},
            {"PlayerManagerComp", 0x6B8, "ObjectProperty"},
            {"LipSyncManager", 0x6C0, "ObjectProperty"},
            {"MidiEventDataManager", 0x6C8, "ObjectProperty"},
            {"PerfMemComp", 0x6D0, "ObjectProperty"},
        }};
    };

    struct SparksMusicPlayspaceInteractorInterface
    {
        static constexpr std::string_view Name = "SparksMusicPlayspaceInteractorInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}

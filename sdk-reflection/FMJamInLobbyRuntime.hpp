#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FMJamInLobbyRuntime
{
    struct FortGameStateComponent_JamInLobbyPlayspaceManager
    {
        static constexpr std::string_view Name = "FortGameStateComponent_JamInLobbyPlayspaceManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayspaceClassToSpawn = 0xC8;
            static constexpr std::uintptr_t JamInLobbyConfig = 0x108;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PlayspaceClassToSpawn", 0xC8, "SoftClassProperty"},
            {"JamInLobbyConfig", 0x108, "ObjectProperty"},
        }};
    };

    struct JamInLobbyConfig
    {
        static constexpr std::string_view Name = "JamInLobbyConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimaryDataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t JamInLobbyEnabledConditions = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"JamInLobbyEnabledConditions", 0x28, "ArrayProperty"},
        }};
    };

    struct JamInLobbyControllerComponent_LoopOptions
    {
        static constexpr std::string_view Name = "JamInLobbyControllerComponent_LoopOptions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SparksControllerComponent_SparksSongsEmoteOptions";
        struct Offsets
        {
            static constexpr std::uintptr_t CategoryNameLocker = 0xC0;
            static constexpr std::uintptr_t CategoryNameAll = 0xC4;
            static constexpr std::uintptr_t CategoryTitleLocker = 0xC8;
            static constexpr std::uintptr_t CategoryTitleAll = 0xD8;
            static constexpr std::uintptr_t EmoteWheelOverlay = 0xE8;
            static constexpr std::uintptr_t LoopTypeToIndexMapping = 0x108;
            static constexpr std::uintptr_t CategoryTagLocker = 0x118;
            static constexpr std::uintptr_t CategoryTagAll = 0x11C;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"CategoryNameLocker", 0xC0, "NameProperty"},
            {"CategoryNameAll", 0xC4, "NameProperty"},
            {"CategoryTitleLocker", 0xC8, "TextProperty"},
            {"CategoryTitleAll", 0xD8, "TextProperty"},
            {"EmoteWheelOverlay", 0xE8, "SoftClassProperty"},
            {"LoopTypeToIndexMapping", 0x108, "ArrayProperty"},
            {"CategoryTagLocker", 0x118, "StructProperty"},
            {"CategoryTagAll", 0x11C, "StructProperty"},
        }};
    };

    struct JamInLobbyPlayspace
    {
        static constexpr std::string_view Name = "JamInLobbyPlayspace";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JamPlayspace";
        struct Offsets
        {
            static constexpr std::uintptr_t JamAudioSource = 0x7B8;
            static constexpr std::uintptr_t OnKeyChangedEventHandle = 0x7E0;
            static constexpr std::uintptr_t OnModeChangedEventHandle = 0x7FC;
            static constexpr std::uintptr_t OnTempoChangedEventHandle = 0x818;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"JamAudioSource", 0x7B8, "ObjectProperty"},
            {"OnKeyChangedEventHandle", 0x7E0, "StructProperty"},
            {"OnModeChangedEventHandle", 0x7FC, "StructProperty"},
            {"OnTempoChangedEventHandle", 0x818, "StructProperty"},
        }};
    };

    struct JamSessionComponent_MusicManager_Frontend
    {
        static constexpr std::string_view Name = "JamSessionComponent_MusicManager_Frontend";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JamSessionComponent_MusicManager";
        struct Offsets
        {
            static constexpr std::uintptr_t OnLoopStarted = 0xF8;
            static constexpr std::uintptr_t OnLoopStopped = 0x108;
            static constexpr std::uintptr_t OnJamAudioSourceActiveStateChange = 0x118;
            static constexpr std::uintptr_t OnEmoteMusicSettingChanged = 0x198;
            static constexpr std::uintptr_t MusicSlots = 0x1D0;
            static constexpr std::uintptr_t KeyChangedEventHandle = 0x1E0;
            static constexpr std::uintptr_t ModeChangedEventHandle = 0x1FC;
            static constexpr std::uintptr_t TempoChangedEventHandle = 0x218;
            static constexpr std::uintptr_t ControlChangeEventHandle = 0x234;
            static constexpr std::uintptr_t LocalPlayerGainParam = 0x2C0;
            static constexpr std::uintptr_t StandardGainParam = 0x2C4;
            static constexpr std::uintptr_t CurrentJamPrivacy = 0x2C8;
            static constexpr std::uintptr_t MetasoundPlayer = 0x2D0;
            static constexpr std::uintptr_t CurrentMusicClock = 0x2D8;
            static constexpr std::uintptr_t LoopedMusicClock = 0x2E0;
            static constexpr std::uintptr_t MutingTags = 0x360;
            static constexpr std::uintptr_t MetasoundStoppingTags = 0x380;
            static constexpr std::uintptr_t MusicTimeNetSyncHandler = 0x3B8;
        };

        inline static constexpr std::array<PropertyInfo, 18> Properties{{
            {"OnLoopStarted", 0xF8, "MulticastInlineDelegateProperty"},
            {"OnLoopStopped", 0x108, "MulticastInlineDelegateProperty"},
            {"OnJamAudioSourceActiveStateChange", 0x118, "MulticastInlineDelegateProperty"},
            {"OnEmoteMusicSettingChanged", 0x198, "MulticastInlineDelegateProperty"},
            {"MusicSlots", 0x1D0, "ArrayProperty"},
            {"KeyChangedEventHandle", 0x1E0, "StructProperty"},
            {"ModeChangedEventHandle", 0x1FC, "StructProperty"},
            {"TempoChangedEventHandle", 0x218, "StructProperty"},
            {"ControlChangeEventHandle", 0x234, "StructProperty"},
            {"LocalPlayerGainParam", 0x2C0, "FloatProperty"},
            {"StandardGainParam", 0x2C4, "FloatProperty"},
            {"CurrentJamPrivacy", 0x2C8, "EnumProperty"},
            {"MetasoundPlayer", 0x2D0, "ObjectProperty"},
            {"CurrentMusicClock", 0x2D8, "ObjectProperty"},
            {"LoopedMusicClock", 0x2E0, "ObjectProperty"},
            {"MutingTags", 0x360, "StructProperty"},
            {"MetasoundStoppingTags", 0x380, "StructProperty"},
            {"MusicTimeNetSyncHandler", 0x3B8, "ObjectProperty"},
        }};
    };

    struct JamSessionComponent_PlayerManager_Frontend
    {
        static constexpr std::string_view Name = "JamSessionComponent_PlayerManager_Frontend";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JamSessionComponent_PlayerManager";
        struct Offsets
        {
            static constexpr std::uintptr_t OnPersistentPartyChanged = 0xC0;
            static constexpr std::uintptr_t GameplayTagsToAdd_Server = 0xE0;
            static constexpr std::uintptr_t GameplayTagsToAdd_Clients = 0x100;
            static constexpr std::uintptr_t GameplayEffectsToApply = 0x120;
            static constexpr std::uintptr_t SpawnableComponents = 0x130;
            static constexpr std::uintptr_t PawnsInSession = 0x140;
            static constexpr std::uintptr_t OtherActorsInSession = 0x150;
            static constexpr std::uintptr_t ServerOnlySpawnedComponents = 0x160;
            static constexpr std::uintptr_t ControllerChangedPawnDelegateListeners = 0x190;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"OnPersistentPartyChanged", 0xC0, "MulticastInlineDelegateProperty"},
            {"GameplayTagsToAdd_Server", 0xE0, "StructProperty"},
            {"GameplayTagsToAdd_Clients", 0x100, "StructProperty"},
            {"GameplayEffectsToApply", 0x120, "ArrayProperty"},
            {"SpawnableComponents", 0x130, "ArrayProperty"},
            {"PawnsInSession", 0x140, "ArrayProperty"},
            {"OtherActorsInSession", 0x150, "ArrayProperty"},
            {"ServerOnlySpawnedComponents", 0x160, "ArrayProperty"},
            {"ControllerChangedPawnDelegateListeners", 0x190, "ArrayProperty"},
        }};
    };

}

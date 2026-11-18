#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SparksCharacterCommonRuntime
{
    struct FortGameFeatureAction_SetSparksAnimsOverride
    {
        static constexpr std::string_view Name = "FortGameFeatureAction_SetSparksAnimsOverride";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFeatureAction";
        struct Offsets
        {
            static constexpr std::uintptr_t AnimsOverride = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AnimsOverride", 0x40, "StructProperty"},
        }};
    };

    struct SparksAnimIntensitySet
    {
        static constexpr std::string_view Name = "SparksAnimIntensitySet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t Intensities = 0x28;
            static constexpr std::uintptr_t Bpm = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Intensities", 0x28, "ArrayProperty"},
            {"Bpm", 0x38, "FloatProperty"},
        }};
    };

    struct SparksAnimationSubsystem
    {
        static constexpr std::string_view Name = "SparksAnimationSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t Anims_Stationary = 0x38;
            static constexpr std::uintptr_t Anims_Traversal = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Anims_Stationary", 0x38, "SoftObjectProperty"},
            {"Anims_Traversal", 0x58, "SoftObjectProperty"},
        }};
    };

    struct SparksBaseLayerAnimInstance
    {
        static constexpr std::string_view Name = "SparksBaseLayerAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortBaseLayerAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t InstrumentPSC = 0x350;
            static constexpr std::uintptr_t Instrument = 0x358;
            static constexpr std::uintptr_t bIsNotAnimatable = 0x359;
            static constexpr std::uintptr_t InstrumentSlotTag = 0x35C;
            static constexpr std::uintptr_t InstrumentUpperBodySlotTag = 0x360;
            static constexpr std::uintptr_t bUseUpperBodyLayer = 0x364;
            static constexpr std::uintptr_t AnimatableState = 0x365;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"InstrumentPSC", 0x350, "ObjectProperty"},
            {"Instrument", 0x358, "EnumProperty"},
            {"bIsNotAnimatable", 0x359, "BoolProperty"},
            {"InstrumentSlotTag", 0x35C, "NameProperty"},
            {"InstrumentUpperBodySlotTag", 0x360, "NameProperty"},
            {"bUseUpperBodyLayer", 0x364, "BoolProperty"},
            {"AnimatableState", 0x365, "EnumProperty"},
        }};
    };

    struct SparksBassAnimInstance
    {
        static constexpr std::string_view Name = "SparksBassAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SparksGuitarAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t FretNumber = 0x410;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"FretNumber", 0x410, "IntProperty"},
        }};
    };

    struct SparksDrumsAnimInstance
    {
        static constexpr std::string_view Name = "SparksDrumsAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SparksInstrumentAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t InstrumentPSC = 0x260;
            static constexpr std::uintptr_t MusicClock = 0x268;
            static constexpr std::uintptr_t MidiEventDriver = 0x270;
            static constexpr std::uintptr_t Instrument = 0x280;
            static constexpr std::uintptr_t LipSyncAsset = 0x288;
            static constexpr std::uintptr_t bAllowLipSyncAnimations = 0x290;
            static constexpr std::uintptr_t HomebaseBPMs = 0x298;
            static constexpr std::uintptr_t PlayBPMs = 0x2D8;
            static constexpr std::uintptr_t SoloBPMs = 0x318;
            static constexpr std::uintptr_t IdleBPMs = 0x358;
            static constexpr std::uintptr_t TransitionBPMs = 0x398;
            static constexpr std::uintptr_t SongGenre = 0x3D8;
            static constexpr std::uintptr_t SongIntensity = 0x3DC;
            static constexpr std::uintptr_t DesiredSongIntensity = 0x3E0;
            static constexpr std::uintptr_t bCanPlayMidiAnimations = 0x3E4;
            static constexpr std::uintptr_t bMusicBeatIsActive = 0x3E5;
            static constexpr std::uintptr_t bUseUpperBodyLayer = 0x3E6;
            static constexpr std::uintptr_t bForceHandIK = 0x3E7;
        };

        inline static constexpr std::array<PropertyInfo, 18> Properties{{
            {"InstrumentPSC", 0x260, "ObjectProperty"},
            {"MusicClock", 0x268, "ObjectProperty"},
            {"MidiEventDriver", 0x270, "InterfaceProperty"},
            {"Instrument", 0x280, "EnumProperty"},
            {"LipSyncAsset", 0x288, "ObjectProperty"},
            {"bAllowLipSyncAnimations", 0x290, "BoolProperty"},
            {"HomebaseBPMs", 0x298, "StructProperty"},
            {"PlayBPMs", 0x2D8, "StructProperty"},
            {"SoloBPMs", 0x318, "StructProperty"},
            {"IdleBPMs", 0x358, "StructProperty"},
            {"TransitionBPMs", 0x398, "StructProperty"},
            {"SongGenre", 0x3D8, "StructProperty"},
            {"SongIntensity", 0x3DC, "StructProperty"},
            {"DesiredSongIntensity", 0x3E0, "StructProperty"},
            {"bCanPlayMidiAnimations", 0x3E4, "BoolProperty"},
            {"bMusicBeatIsActive", 0x3E5, "BoolProperty"},
            {"bUseUpperBodyLayer", 0x3E6, "BoolProperty"},
            {"bForceHandIK", 0x3E7, "BoolProperty"},
        }};
    };

    struct SparksGuitarAnimInstance
    {
        static constexpr std::string_view Name = "SparksGuitarAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SparksInstrumentAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t FretNumber = 0x410;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"FretNumber", 0x410, "IntProperty"},
        }};
    };

    struct SparksInstrumentAnimInstance
    {
        static constexpr std::string_view Name = "SparksInstrumentAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t InstrumentPSC = 0x260;
            static constexpr std::uintptr_t MusicClock = 0x268;
            static constexpr std::uintptr_t MidiEventDriver = 0x270;
            static constexpr std::uintptr_t Instrument = 0x280;
            static constexpr std::uintptr_t LipSyncAsset = 0x288;
            static constexpr std::uintptr_t bAllowLipSyncAnimations = 0x290;
            static constexpr std::uintptr_t HomebaseBPMs = 0x298;
            static constexpr std::uintptr_t PlayBPMs = 0x2D8;
            static constexpr std::uintptr_t SoloBPMs = 0x318;
            static constexpr std::uintptr_t IdleBPMs = 0x358;
            static constexpr std::uintptr_t TransitionBPMs = 0x398;
            static constexpr std::uintptr_t SongGenre = 0x3D8;
            static constexpr std::uintptr_t SongIntensity = 0x3DC;
            static constexpr std::uintptr_t DesiredSongIntensity = 0x3E0;
            static constexpr std::uintptr_t bCanPlayMidiAnimations = 0x3E4;
            static constexpr std::uintptr_t bMusicBeatIsActive = 0x3E5;
            static constexpr std::uintptr_t bUseUpperBodyLayer = 0x3E6;
            static constexpr std::uintptr_t bForceHandIK = 0x3E7;
        };

        inline static constexpr std::array<PropertyInfo, 18> Properties{{
            {"InstrumentPSC", 0x260, "ObjectProperty"},
            {"MusicClock", 0x268, "ObjectProperty"},
            {"MidiEventDriver", 0x270, "InterfaceProperty"},
            {"Instrument", 0x280, "EnumProperty"},
            {"LipSyncAsset", 0x288, "ObjectProperty"},
            {"bAllowLipSyncAnimations", 0x290, "BoolProperty"},
            {"HomebaseBPMs", 0x298, "StructProperty"},
            {"PlayBPMs", 0x2D8, "StructProperty"},
            {"SoloBPMs", 0x318, "StructProperty"},
            {"IdleBPMs", 0x358, "StructProperty"},
            {"TransitionBPMs", 0x398, "StructProperty"},
            {"SongGenre", 0x3D8, "StructProperty"},
            {"SongIntensity", 0x3DC, "StructProperty"},
            {"DesiredSongIntensity", 0x3E0, "StructProperty"},
            {"bCanPlayMidiAnimations", 0x3E4, "BoolProperty"},
            {"bMusicBeatIsActive", 0x3E5, "BoolProperty"},
            {"bUseUpperBodyLayer", 0x3E6, "BoolProperty"},
            {"bForceHandIK", 0x3E7, "BoolProperty"},
        }};
    };

    struct SparksInstrumentAnimPawnComponent
    {
        static constexpr std::string_view Name = "SparksInstrumentAnimPawnComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PawnComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t InstrumentAnimations = 0xC0;
            static constexpr std::uintptr_t MusicClock = 0xD0;
            static constexpr std::uintptr_t MidiEventDriver = 0xD8;
            static constexpr std::uintptr_t CosmeticInstrumentType = 0xE8;
            static constexpr std::uintptr_t AnimatableState = 0xE9;
            static constexpr std::uintptr_t bCanPlayMidiAnimations = 0xEA;
            static constexpr std::uintptr_t StagePropActor = 0xF0;
            static constexpr std::uintptr_t BP_OnPlayerMusicClockChanged = 0x128;
            static constexpr std::uintptr_t BP_OnPlayerMidiEventDriverChanged = 0x150;
            static constexpr std::uintptr_t BP_OnPlayerCosmeticInstrumentTypeChanged = 0x178;
            static constexpr std::uintptr_t BP_OnPlayerAnimatableStateChanged = 0x1A0;
            static constexpr std::uintptr_t BP_OnStagePropActorChanged = 0x1C8;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"InstrumentAnimations", 0xC0, "ObjectProperty"},
            {"MusicClock", 0xD0, "ObjectProperty"},
            {"MidiEventDriver", 0xD8, "InterfaceProperty"},
            {"CosmeticInstrumentType", 0xE8, "EnumProperty"},
            {"AnimatableState", 0xE9, "EnumProperty"},
            {"bCanPlayMidiAnimations", 0xEA, "BoolProperty"},
            {"StagePropActor", 0xF0, "ObjectProperty"},
            {"BP_OnPlayerMusicClockChanged", 0x128, "MulticastInlineDelegateProperty"},
            {"BP_OnPlayerMidiEventDriverChanged", 0x150, "MulticastInlineDelegateProperty"},
            {"BP_OnPlayerCosmeticInstrumentTypeChanged", 0x178, "MulticastInlineDelegateProperty"},
            {"BP_OnPlayerAnimatableStateChanged", 0x1A0, "MulticastInlineDelegateProperty"},
            {"BP_OnStagePropActorChanged", 0x1C8, "MulticastInlineDelegateProperty"},
        }};
    };

    struct SparksInstrumentAnimations
    {
        static constexpr std::string_view Name = "SparksInstrumentAnimations";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t BandPlayAnimBP = 0x28;
            static constexpr std::uintptr_t InstrumentAnimBPs = 0x30;
            static constexpr std::uintptr_t InstrumentsUsingUpperBodyLayer = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"BandPlayAnimBP", 0x28, "ClassProperty"},
            {"InstrumentAnimBPs", 0x30, "ClassProperty"},
            {"InstrumentsUsingUpperBodyLayer", 0x58, "SetProperty"},
        }};
    };

    struct SparksMicAnimInstance
    {
        static constexpr std::string_view Name = "SparksMicAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SparksInstrumentAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t InstrumentPSC = 0x260;
            static constexpr std::uintptr_t MusicClock = 0x268;
            static constexpr std::uintptr_t MidiEventDriver = 0x270;
            static constexpr std::uintptr_t Instrument = 0x280;
            static constexpr std::uintptr_t LipSyncAsset = 0x288;
            static constexpr std::uintptr_t bAllowLipSyncAnimations = 0x290;
            static constexpr std::uintptr_t HomebaseBPMs = 0x298;
            static constexpr std::uintptr_t PlayBPMs = 0x2D8;
            static constexpr std::uintptr_t SoloBPMs = 0x318;
            static constexpr std::uintptr_t IdleBPMs = 0x358;
            static constexpr std::uintptr_t TransitionBPMs = 0x398;
            static constexpr std::uintptr_t SongGenre = 0x3D8;
            static constexpr std::uintptr_t SongIntensity = 0x3DC;
            static constexpr std::uintptr_t DesiredSongIntensity = 0x3E0;
            static constexpr std::uintptr_t bCanPlayMidiAnimations = 0x3E4;
            static constexpr std::uintptr_t bMusicBeatIsActive = 0x3E5;
            static constexpr std::uintptr_t bUseUpperBodyLayer = 0x3E6;
            static constexpr std::uintptr_t bForceHandIK = 0x3E7;
        };

        inline static constexpr std::array<PropertyInfo, 18> Properties{{
            {"InstrumentPSC", 0x260, "ObjectProperty"},
            {"MusicClock", 0x268, "ObjectProperty"},
            {"MidiEventDriver", 0x270, "InterfaceProperty"},
            {"Instrument", 0x280, "EnumProperty"},
            {"LipSyncAsset", 0x288, "ObjectProperty"},
            {"bAllowLipSyncAnimations", 0x290, "BoolProperty"},
            {"HomebaseBPMs", 0x298, "StructProperty"},
            {"PlayBPMs", 0x2D8, "StructProperty"},
            {"SoloBPMs", 0x318, "StructProperty"},
            {"IdleBPMs", 0x358, "StructProperty"},
            {"TransitionBPMs", 0x398, "StructProperty"},
            {"SongGenre", 0x3D8, "StructProperty"},
            {"SongIntensity", 0x3DC, "StructProperty"},
            {"DesiredSongIntensity", 0x3E0, "StructProperty"},
            {"bCanPlayMidiAnimations", 0x3E4, "BoolProperty"},
            {"bMusicBeatIsActive", 0x3E5, "BoolProperty"},
            {"bUseUpperBodyLayer", 0x3E6, "BoolProperty"},
            {"bForceHandIK", 0x3E7, "BoolProperty"},
        }};
    };

}

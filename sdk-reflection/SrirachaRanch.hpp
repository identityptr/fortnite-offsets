#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SrirachaRanch
{
    struct FakeRadioPlayerComponent
    {
        static constexpr std::string_view Name = "FakeRadioPlayerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPawnComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnFakeRadioStart = 0xD0;
            static constexpr std::uintptr_t OnFakeRadioStop = 0xE0;
            static constexpr std::uintptr_t bReplicatedRadioIsActive = 0xF0;
            static constexpr std::uintptr_t InputMappingData = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"OnFakeRadioStart", 0xD0, "MulticastInlineDelegateProperty"},
            {"OnFakeRadioStop", 0xE0, "MulticastInlineDelegateProperty"},
            {"bReplicatedRadioIsActive", 0xF0, "BoolProperty"},
            {"InputMappingData", 0xF8, "MapProperty"},
        }};
    };

    struct RadioContentSourceItemDefinition
    {
        static constexpr std::string_view Name = "RadioContentSourceItemDefinition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAccountItemDefinition";
        struct Offsets
        {
            static constexpr std::uintptr_t ResourceID = 0x128;
            static constexpr std::uintptr_t MediaSource = 0x138;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ResourceID", 0x128, "StrProperty"},
            {"MediaSource", 0x138, "ObjectProperty"},
        }};
    };

    struct SrirachaRanchComponentTemplateWrapper
    {
        static constexpr std::string_view Name = "SrirachaRanchComponentTemplateWrapper";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t MediaSoundPlayerTemplate = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MediaSoundPlayerTemplate", 0x28, "ObjectProperty"},
        }};
    };

    struct StreamingRadioAudioShapeComponent
    {
        static constexpr std::string_view Name = "StreamingRadioAudioShapeComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AudioShapeComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t Radius = 0x120;
            static constexpr std::uintptr_t RadioPlayer = 0x124;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Radius", 0x120, "FloatProperty"},
            {"RadioPlayer", 0x124, "WeakObjectProperty"},
        }};
    };

    struct StreamingRadioPlayerComponent
    {
        static constexpr std::string_view Name = "StreamingRadioPlayerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPawnComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t InputMappingData = 0xD8;
            static constexpr std::uintptr_t RadialMenuInputMappingData = 0xE8;
            static constexpr std::uintptr_t OnSourceLoading = 0xF8;
            static constexpr std::uintptr_t OnSourcePlayed = 0x108;
            static constexpr std::uintptr_t OnSourceStopped = 0x118;
            static constexpr std::uintptr_t OnSourceFailed = 0x128;
            static constexpr std::uintptr_t OnMetadataChanged = 0x138;
            static constexpr std::uintptr_t OnRadioExplicitStop = 0x148;
            static constexpr std::uintptr_t PercentAutostartRadio = 0x158;
            static constexpr std::uintptr_t DisabledVehicleList = 0x160;
            static constexpr std::uintptr_t ExteriorVolumeMultiplierMap = 0x170;
            static constexpr std::uintptr_t InteriorVolumeMultiplierMap = 0x180;
            static constexpr std::uintptr_t bMinimalStateOnPlatform = 0x190;
            static constexpr std::uintptr_t DisabledStationList = 0x198;
            static constexpr std::uintptr_t bAutostartOnEntry = 0x1A8;
            static constexpr std::uintptr_t bDisabledForCurrentPlayerState = 0x1A9;
            static constexpr std::uintptr_t ReplicatedRadioSourceData = 0x1B0;
            static constexpr std::uintptr_t OnReplicatedStateChangedDelegate = 0x218;
            static constexpr std::uintptr_t SoundComponent = 0x228;
            static constexpr std::uintptr_t AudioShape = 0x230;
            static constexpr std::uintptr_t SoundCompTemplateSource = 0x238;
            static constexpr std::uintptr_t LastSource = 0x240;
            static constexpr std::uintptr_t LastMetadata = 0x298;
            static constexpr std::uintptr_t Sources = 0x328;
            static constexpr std::uintptr_t FallbackSource = 0x338;
            static constexpr std::uintptr_t SpecialSeatList = 0x390;
            static constexpr std::uintptr_t BasePlayerInstance = 0x3A0;
            static constexpr std::uintptr_t DefaultSoundSubmix = 0x3A8;
            static constexpr std::uintptr_t LicensedSoundSubmix = 0x3B0;
            static constexpr std::uintptr_t CurrentMode = 0x3B8;
            static constexpr std::uintptr_t MaximumRetries = 0x3BC;
            static constexpr std::uintptr_t FadeoutWhenUnpoweredInMS = 0x3C0;
            static constexpr std::uintptr_t FadeoutWhenOwnerBeingDestroyedInMS = 0x3C4;
            static constexpr std::uintptr_t MaxFadeoutTimeMS = 0x3C8;
            static constexpr std::uintptr_t DefaultPlayingIndex = 0x3CC;
            static constexpr std::uintptr_t bForceAutoStartOnInit = 0x3D0;
            static constexpr std::uintptr_t bTryStopRadioOnSeatChanges = 0x3D1;
            static constexpr std::uintptr_t bStopRadioOnNetConnectionLost = 0x3D2;
            static constexpr std::uintptr_t SoundMixInside = 0x3D8;
            static constexpr std::uintptr_t SoundMixOutside = 0x3E0;
            static constexpr std::uintptr_t ActivationRadius = 0x3EC;
            static constexpr std::uintptr_t ComponentToAttachTo = 0x3F0;
            static constexpr std::uintptr_t ComponentSocketAttachTo = 0x3F4;
            static constexpr std::uintptr_t MediaSource = 0x3F8;
            static constexpr std::uintptr_t CMSSuffix = 0x400;
            static constexpr std::uintptr_t RadioStationList = 0x410;
            static constexpr std::uintptr_t MockedRadioStationList = 0x420;
            static constexpr std::uintptr_t DelegateContextObject = 0x430;
            static constexpr std::uintptr_t MediaStartTimeFromInit = 0x43C;
            static constexpr std::uintptr_t CachedDriverLocalPlayer = 0x468;
        };

        inline static constexpr std::array<PropertyInfo, 50> Properties{{
            {"InputMappingData", 0xD8, "MapProperty"},
            {"RadialMenuInputMappingData", 0xE8, "MapProperty"},
            {"OnSourceLoading", 0xF8, "MulticastInlineDelegateProperty"},
            {"OnSourcePlayed", 0x108, "MulticastInlineDelegateProperty"},
            {"OnSourceStopped", 0x118, "MulticastInlineDelegateProperty"},
            {"OnSourceFailed", 0x128, "MulticastInlineDelegateProperty"},
            {"OnMetadataChanged", 0x138, "MulticastInlineDelegateProperty"},
            {"OnRadioExplicitStop", 0x148, "MulticastInlineDelegateProperty"},
            {"PercentAutostartRadio", 0x158, "FloatProperty"},
            {"DisabledVehicleList", 0x160, "ArrayProperty"},
            {"ExteriorVolumeMultiplierMap", 0x170, "MapProperty"},
            {"InteriorVolumeMultiplierMap", 0x180, "MapProperty"},
            {"bMinimalStateOnPlatform", 0x190, "BoolProperty"},
            {"DisabledStationList", 0x198, "ArrayProperty"},
            {"bAutostartOnEntry", 0x1A8, "BoolProperty"},
            {"bDisabledForCurrentPlayerState", 0x1A9, "BoolProperty"},
            {"ReplicatedRadioSourceData", 0x1B0, "StructProperty"},
            {"OnReplicatedStateChangedDelegate", 0x218, "MulticastInlineDelegateProperty"},
            {"SoundComponent", 0x228, "ObjectProperty"},
            {"AudioShape", 0x230, "ObjectProperty"},
            {"SoundCompTemplateSource", 0x238, "ObjectProperty"},
            {"LastSource", 0x240, "StructProperty"},
            {"LastMetadata", 0x298, "StructProperty"},
            {"Sources", 0x328, "ArrayProperty"},
            {"FallbackSource", 0x338, "StructProperty"},
            {"SpecialSeatList", 0x390, "MapProperty"},
            {"BasePlayerInstance", 0x3A0, "ObjectProperty"},
            {"DefaultSoundSubmix", 0x3A8, "ObjectProperty"},
            {"LicensedSoundSubmix", 0x3B0, "ObjectProperty"},
            {"CurrentMode", 0x3B8, "EnumProperty"},
            {"MaximumRetries", 0x3BC, "IntProperty"},
            {"FadeoutWhenUnpoweredInMS", 0x3C0, "IntProperty"},
            {"FadeoutWhenOwnerBeingDestroyedInMS", 0x3C4, "IntProperty"},
            {"MaxFadeoutTimeMS", 0x3C8, "IntProperty"},
            {"DefaultPlayingIndex", 0x3CC, "IntProperty"},
            {"bForceAutoStartOnInit", 0x3D0, "BoolProperty"},
            {"bTryStopRadioOnSeatChanges", 0x3D1, "BoolProperty"},
            {"bStopRadioOnNetConnectionLost", 0x3D2, "BoolProperty"},
            {"SoundMixInside", 0x3D8, "ObjectProperty"},
            {"SoundMixOutside", 0x3E0, "ObjectProperty"},
            {"ActivationRadius", 0x3EC, "FloatProperty"},
            {"ComponentToAttachTo", 0x3F0, "NameProperty"},
            {"ComponentSocketAttachTo", 0x3F4, "NameProperty"},
            {"MediaSource", 0x3F8, "ObjectProperty"},
            {"CMSSuffix", 0x400, "StrProperty"},
            {"RadioStationList", 0x410, "ArrayProperty"},
            {"MockedRadioStationList", 0x420, "ArrayProperty"},
            {"DelegateContextObject", 0x430, "ObjectProperty"},
            {"MediaStartTimeFromInit", 0x43C, "FloatProperty"},
            {"CachedDriverLocalPlayer", 0x468, "ObjectProperty"},
        }};
    };

    struct StreamingRadioPlayerInsideState
    {
        static constexpr std::string_view Name = "StreamingRadioPlayerInsideState";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsPlayerTargeting = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bIsPlayerTargeting", 0x28, "BoolProperty"},
        }};
    };

    struct StreamingRadioPlayerSettings
    {
        static constexpr std::string_view Name = "StreamingRadioPlayerSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeveloperSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t InsideControlBus = 0x30;
            static constexpr std::uintptr_t OutsideControlBus = 0x50;
            static constexpr std::uintptr_t InsideMixData = 0x70;
            static constexpr std::uintptr_t OutsideMixData = 0x78;
            static constexpr std::uintptr_t SpecialSeatList = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"InsideControlBus", 0x30, "SoftObjectProperty"},
            {"OutsideControlBus", 0x50, "SoftObjectProperty"},
            {"InsideMixData", 0x70, "StructProperty"},
            {"OutsideMixData", 0x78, "StructProperty"},
            {"SpecialSeatList", 0x80, "MapProperty"},
        }};
    };

    struct StreamingRadioPlayerSubsystem
    {
        static constexpr std::string_view Name = "StreamingRadioPlayerSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t RadioMix = 0x38;
            static constexpr std::uintptr_t PlayingRadioPlayerComponents = 0x40;
            static constexpr std::uintptr_t InsideControlBus = 0x58;
            static constexpr std::uintptr_t OutsideControlBus = 0x60;
            static constexpr std::uintptr_t PlayerInsideStates = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"RadioMix", 0x38, "ObjectProperty"},
            {"PlayingRadioPlayerComponents", 0x40, "ArrayProperty"},
            {"InsideControlBus", 0x58, "ObjectProperty"},
            {"OutsideControlBus", 0x60, "ObjectProperty"},
            {"PlayerInsideStates", 0x68, "MapProperty"},
        }};
    };

}

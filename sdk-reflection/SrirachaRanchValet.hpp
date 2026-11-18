#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SrirachaRanchValet
{
    struct StreamingRadioPlayerComponent_Valet
    {
        static constexpr std::string_view Name = "StreamingRadioPlayerComponent_Valet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "StreamingRadioPlayerComponent";
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

}

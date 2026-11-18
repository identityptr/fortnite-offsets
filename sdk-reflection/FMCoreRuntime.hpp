#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FMCoreRuntime
{
    struct FMCoreDeveloperSettings
    {
        static constexpr std::string_view Name = "FMCoreDeveloperSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeveloperSettings";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FMCoreMusicFunctionLibrary
    {
        static constexpr std::string_view Name = "FMCoreMusicFunctionLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FMCoreMusicManagerComponent
    {
        static constexpr std::string_view Name = "FMCoreMusicManagerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnTempoChangedDelegate = 0xC0;
            static constexpr std::uintptr_t OnSpeedChangedDelegate = 0xD0;
            static constexpr std::uintptr_t OnKeyChangedDelegate = 0xE0;
            static constexpr std::uintptr_t OnModeChangedDelegate = 0xF0;
            static constexpr std::uintptr_t OnTimeSignatureChanged = 0x100;
            static constexpr std::uintptr_t StartingKey = 0x110;
            static constexpr std::uintptr_t StartingMode = 0x111;
            static constexpr std::uintptr_t StartingTempo = 0x114;
            static constexpr std::uintptr_t StartingSpeed = 0x118;
            static constexpr std::uintptr_t StartingTimeSignatureNumerator = 0x11C;
            static constexpr std::uintptr_t StartingTimeSignatureDenominator = 0x120;
            static constexpr std::uintptr_t CurrentKey = 0x124;
            static constexpr std::uintptr_t CurrentMode = 0x125;
            static constexpr std::uintptr_t CurrentTempo = 0x128;
            static constexpr std::uintptr_t CurrentSpeed = 0x12C;
            static constexpr std::uintptr_t CurrentTimeSignature = 0x130;
            static constexpr std::uintptr_t ServerKey = 0x138;
            static constexpr std::uintptr_t ServerMode = 0x139;
            static constexpr std::uintptr_t ServerTempo = 0x13C;
            static constexpr std::uintptr_t ServerSpeed = 0x140;
            static constexpr std::uintptr_t ServerTimeSignature = 0x144;
        };

        inline static constexpr std::array<PropertyInfo, 21> Properties{{
            {"OnTempoChangedDelegate", 0xC0, "MulticastInlineDelegateProperty"},
            {"OnSpeedChangedDelegate", 0xD0, "MulticastInlineDelegateProperty"},
            {"OnKeyChangedDelegate", 0xE0, "MulticastInlineDelegateProperty"},
            {"OnModeChangedDelegate", 0xF0, "MulticastInlineDelegateProperty"},
            {"OnTimeSignatureChanged", 0x100, "MulticastInlineDelegateProperty"},
            {"StartingKey", 0x110, "EnumProperty"},
            {"StartingMode", 0x111, "EnumProperty"},
            {"StartingTempo", 0x114, "FloatProperty"},
            {"StartingSpeed", 0x118, "FloatProperty"},
            {"StartingTimeSignatureNumerator", 0x11C, "IntProperty"},
            {"StartingTimeSignatureDenominator", 0x120, "IntProperty"},
            {"CurrentKey", 0x124, "EnumProperty"},
            {"CurrentMode", 0x125, "EnumProperty"},
            {"CurrentTempo", 0x128, "FloatProperty"},
            {"CurrentSpeed", 0x12C, "FloatProperty"},
            {"CurrentTimeSignature", 0x130, "StructProperty"},
            {"ServerKey", 0x138, "EnumProperty"},
            {"ServerMode", 0x139, "EnumProperty"},
            {"ServerTempo", 0x13C, "FloatProperty"},
            {"ServerSpeed", 0x140, "FloatProperty"},
            {"ServerTimeSignature", 0x144, "StructProperty"},
        }};
    };

    struct FMPlayerInputDeviceManagerComponent
    {
        static constexpr std::string_view Name = "FMPlayerInputDeviceManagerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bHasConnectedInputDevice = 0xC0;
            static constexpr std::uintptr_t bIsPeripheralDeviceConnected_AnyUser = 0xC1;
            static constexpr std::uintptr_t bIsPeripheralDeviceConnected_OwningUser = 0xC2;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bHasConnectedInputDevice", 0xC0, "BoolProperty"},
            {"bIsPeripheralDeviceConnected_AnyUser", 0xC1, "BoolProperty"},
            {"bIsPeripheralDeviceConnected_OwningUser", 0xC2, "BoolProperty"},
        }};
    };

    struct FMPlayerMonitorComponent
    {
        static constexpr std::string_view Name = "FMPlayerMonitorComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFrameworkComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayerEnteredHandle = 0xC0;
            static constexpr std::uintptr_t PlayerExitedHandle = 0x108;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PlayerEnteredHandle", 0xC0, "StructProperty"},
            {"PlayerExitedHandle", 0x108, "StructProperty"},
        }};
    };

    struct FMPlayspaceScopedSystemComponent
    {
        static constexpr std::string_view Name = "FMPlayspaceScopedSystemComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnAddedToPlayspaceSystemManager = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OnAddedToPlayspaceSystemManager", 0xC0, "MulticastInlineDelegateProperty"},
        }};
    };

    struct FMPlayspaceScopedSystemManager
    {
        static constexpr std::string_view Name = "FMPlayspaceScopedSystemManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t VKClassRedirects = 0xC0;
            static constexpr std::uintptr_t VKClassDenyList = 0xD0;
            static constexpr std::uintptr_t UEFNNotableActors = 0xE0;
            static constexpr std::uintptr_t PlayspacesSystemInfo = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"VKClassRedirects", 0xC0, "MapProperty"},
            {"VKClassDenyList", 0xD0, "ArrayProperty"},
            {"UEFNNotableActors", 0xE0, "ArrayProperty"},
            {"PlayspacesSystemInfo", 0xF0, "MapProperty"},
        }};
    };

    struct MusicTimeNetSyncComponent
    {
        static constexpr std::string_view Name = "MusicTimeNetSyncComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ThresholdForSeekMS = 0xD8;
            static constexpr std::uintptr_t ThresholdForStartSpeedAdjustMS = 0xDC;
            static constexpr std::uintptr_t ThresholdForEndOfSpeedAdjustMS = 0xE0;
            static constexpr std::uintptr_t SpeedAdjustFactor = 0xE4;
            static constexpr std::uintptr_t MinSpeedAdjustFactor = 0xE8;
            static constexpr std::uintptr_t Weak_CachedMusicClock = 0x100;
            static constexpr std::uintptr_t ServerTimelineSyncServerSongPosition = 0x108;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"ThresholdForSeekMS", 0xD8, "FloatProperty"},
            {"ThresholdForStartSpeedAdjustMS", 0xDC, "FloatProperty"},
            {"ThresholdForEndOfSpeedAdjustMS", 0xE0, "FloatProperty"},
            {"SpeedAdjustFactor", 0xE4, "FloatProperty"},
            {"MinSpeedAdjustFactor", 0xE8, "FloatProperty"},
            {"Weak_CachedMusicClock", 0x100, "WeakObjectProperty"},
            {"ServerTimelineSyncServerSongPosition", 0x108, "StructProperty"},
        }};
    };

    struct MusicTimeNetSyncHandler
    {
        static constexpr std::string_view Name = "MusicTimeNetSyncHandler";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MusicTimeNetSyncHandler_Metasound
    {
        static constexpr std::string_view Name = "MusicTimeNetSyncHandler_Metasound";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t MetasoundGeneratorHandle = 0x30;
            static constexpr std::uintptr_t SeekMetasoundParameterPack = 0x38;
            static constexpr std::uintptr_t SpeedMetasoundParameterPack = 0x40;
            static constexpr std::uintptr_t Weak_AudioComponent = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"MetasoundGeneratorHandle", 0x30, "ObjectProperty"},
            {"SeekMetasoundParameterPack", 0x38, "ObjectProperty"},
            {"SpeedMetasoundParameterPack", 0x40, "ObjectProperty"},
            {"Weak_AudioComponent", 0x48, "WeakObjectProperty"},
        }};
    };

    struct MusicTimeNetSyncState
    {
        static constexpr std::string_view Name = "MusicTimeNetSyncState";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}

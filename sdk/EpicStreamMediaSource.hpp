#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::EpicStreamMediaSource
{
    struct EpicStreamMediaSource
    {
        static constexpr std::string_view Name = "EpicStreamMediaSource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "StreamMediaSource";
        struct Offsets
        {
            static constexpr std::uintptr_t VideoStreamSource = 0x58;
            static constexpr std::uintptr_t VideoStreamSourceAB = 0x68;
            static constexpr std::uintptr_t VideoID = 0x70;
            static constexpr std::uintptr_t bIsLive = 0x80;
            static constexpr std::uintptr_t bBlurlLive = 0x81;
            static constexpr std::uintptr_t MaxResolution = 0x84;
            static constexpr std::uintptr_t MaxBandwidth = 0x88;
            static constexpr std::uintptr_t AspectRatio = 0x8C;
            static constexpr std::uintptr_t bShareLock = 0x90;
            static constexpr std::uintptr_t bAudioOnly = 0x91;
            static constexpr std::uintptr_t bPartySync = 0x92;
            static constexpr std::uintptr_t MediaDuration = 0x94;
            static constexpr std::uintptr_t mimetype = 0x98;
            static constexpr std::uintptr_t StreamDenyHTTPCode = 0xA8;
            static constexpr std::uintptr_t CDNHostNames = 0xB8;
            static constexpr std::uintptr_t bEnableCDNFailureRetries = 0xC0;
            static constexpr std::uintptr_t bEnableBLURLRetries = 0xC1;
            static constexpr std::uintptr_t MaxBLURLRetryAttempts = 0xC4;
            static constexpr std::uintptr_t bEnableScrubOptimization = 0xC8;
            static constexpr std::uintptr_t SeekBitrate = 0xCC;
            static constexpr std::uintptr_t CacheSizeKiB = 0xD0;
            static constexpr std::uintptr_t TimeToCacheMilliseconds = 0xD4;
            static constexpr std::uintptr_t OnVideoUrlSuccess = 0x3F0;
            static constexpr std::uintptr_t OnVideoUrlFailed = 0x400;
            static constexpr std::uintptr_t OnMetaDataFailure = 0x410;
            static constexpr std::uintptr_t OnMediaLicensedAudioTreatmentChanged = 0x420;
            static constexpr std::uintptr_t EpicMediaDownloadLocalizedOverlays = 0x440;
            static constexpr std::uintptr_t ProtectUserFromAVSettings = 0x448;
            static constexpr std::uintptr_t OutputProtectionTypeVideo = 0x458;
            static constexpr std::uintptr_t OutputProtectionTypeAudio = 0x459;
            static constexpr std::uintptr_t StreamID = 0x460;
            static constexpr std::uintptr_t StreamID_Development = 0x470;
            static constexpr std::uintptr_t StreamLabel = 0x480;
            static constexpr std::uintptr_t LocalFilePlaybackAsset = 0x490;
            static constexpr std::uintptr_t HighestFramerate = 0x498;
            static constexpr std::uintptr_t RetryAttempts = 0x4B8;
            static constexpr std::uintptr_t RetryErrorCodes = 0x4C8;
            static constexpr std::uintptr_t SwitchCDNErrorCodes = 0x4D8;
            static constexpr std::uintptr_t RetryDelayMS = 0x4E8;
            static constexpr std::uintptr_t MetadataResolver = 0x510;
        };

        inline static constexpr std::array<PropertyInfo, 40> Properties{{
            {"VideoStreamSource", 0x58, "StrProperty"},
            {"VideoStreamSourceAB", 0x68, "FloatProperty"},
            {"VideoID", 0x70, "MapProperty"},
            {"bIsLive", 0x80, "BoolProperty"},
            {"bBlurlLive", 0x81, "BoolProperty"},
            {"MaxResolution", 0x84, "IntProperty"},
            {"MaxBandwidth", 0x88, "IntProperty"},
            {"AspectRatio", 0x8C, "FloatProperty"},
            {"bShareLock", 0x90, "BoolProperty"},
            {"bAudioOnly", 0x91, "BoolProperty"},
            {"bPartySync", 0x92, "BoolProperty"},
            {"MediaDuration", 0x94, "FloatProperty"},
            {"mimetype", 0x98, "StrProperty"},
            {"StreamDenyHTTPCode", 0xA8, "StrProperty"},
            {"CDNHostNames", 0xB8, "ObjectProperty"},
            {"bEnableCDNFailureRetries", 0xC0, "BoolProperty"},
            {"bEnableBLURLRetries", 0xC1, "BoolProperty"},
            {"MaxBLURLRetryAttempts", 0xC4, "IntProperty"},
            {"bEnableScrubOptimization", 0xC8, "BoolProperty"},
            {"SeekBitrate", 0xCC, "IntProperty"},
            {"CacheSizeKiB", 0xD0, "IntProperty"},
            {"TimeToCacheMilliseconds", 0xD4, "IntProperty"},
            {"OnVideoUrlSuccess", 0x3F0, "MulticastInlineDelegateProperty"},
            {"OnVideoUrlFailed", 0x400, "MulticastInlineDelegateProperty"},
            {"OnMetaDataFailure", 0x410, "MulticastInlineDelegateProperty"},
            {"OnMediaLicensedAudioTreatmentChanged", 0x420, "MulticastInlineDelegateProperty"},
            {"EpicMediaDownloadLocalizedOverlays", 0x440, "ObjectProperty"},
            {"ProtectUserFromAVSettings", 0x448, "StrProperty"},
            {"OutputProtectionTypeVideo", 0x458, "EnumProperty"},
            {"OutputProtectionTypeAudio", 0x459, "EnumProperty"},
            {"StreamID", 0x460, "StrProperty"},
            {"StreamID_Development", 0x470, "StrProperty"},
            {"StreamLabel", 0x480, "StrProperty"},
            {"LocalFilePlaybackAsset", 0x490, "ObjectProperty"},
            {"HighestFramerate", 0x498, "DoubleProperty"},
            {"RetryAttempts", 0x4B8, "MapProperty"},
            {"RetryErrorCodes", 0x4C8, "ArrayProperty"},
            {"SwitchCDNErrorCodes", 0x4D8, "ArrayProperty"},
            {"RetryDelayMS", 0x4E8, "ArrayProperty"},
            {"MetadataResolver", 0x510, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 21> FunctionNames{{
            "CancelVideoUrlRequest",
            "ClearSyncTimes",
            "ClearTimeWindowTimes",
            "DisableSharing",
            "ForceSegmentCaching",
            "HasLocalFilePlayback",
            "IsScreenRecordingInProgress",
            "IsSyncTimeSet",
            "IsTimeWindowSet",
            "MetadataResultHandler",
            "ReinstateSharing",
            "RequestVideoUrl",
            "SetLocalizedOverlaysV2",
            "SetMediaTimeWindowSeconds",
            "SetPlaybackStartTime",
            "SetSyncTimes",
            "SetURL",
            "ShouldProtectPlayerFromContent",
            "ShouldStreamBePlaying",
            "UpdatePlayerOptions",
            "UpdateStreamUrlArguments",
        }};
    };

    struct RetryRequestResponse
    {
        static constexpr std::string_view Name = "RetryRequestResponse";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t RetryDelay = 0x0;
            static constexpr std::uintptr_t ErrorCode = 0x4;
            static constexpr std::uintptr_t RetryAttempt = 0x8;
            static constexpr std::uintptr_t ShouldRetry = 0xC;
            static constexpr std::uintptr_t SwitchCDN = 0xD;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"RetryDelay", 0x0, "FloatProperty"},
            {"ErrorCode", 0x4, "IntProperty"},
            {"RetryAttempt", 0x8, "IntProperty"},
            {"ShouldRetry", 0xC, "BoolProperty"},
            {"SwitchCDN", 0xD, "BoolProperty"},
        }};
    };

}

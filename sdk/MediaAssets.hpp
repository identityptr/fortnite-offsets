#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::MediaAssets
{
    struct BaseMediaSource
    {
        static constexpr std::string_view Name = "BaseMediaSource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MediaSource";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayerName = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PlayerName", 0x40, "NameProperty"},
        }};
    };

    struct FileMediaSource
    {
        static constexpr std::string_view Name = "FileMediaSource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BaseMediaSource";
        struct Offsets
        {
            static constexpr std::uintptr_t FilePath = 0x48;
            static constexpr std::uintptr_t PrecacheFile = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"FilePath", 0x48, "StrProperty"},
            {"PrecacheFile", 0x58, "BoolProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "SetFilePath",
        }};
    };

    struct MediaBlueprintFunctionLibrary
    {
        static constexpr std::string_view Name = "MediaBlueprintFunctionLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 3> FunctionNames{{
            "EnumerateAudioCaptureDevices",
            "EnumerateVideoCaptureDevices",
            "EnumerateWebcamCaptureDevices",
        }};
    };

    struct MediaCaptureDevice
    {
        static constexpr std::string_view Name = "MediaCaptureDevice";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t DisplayName = 0x0;
            static constexpr std::uintptr_t Url = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DisplayName", 0x0, "TextProperty"},
            {"Url", 0x10, "StrProperty"},
        }};
    };

    struct MediaComponent
    {
        static constexpr std::string_view Name = "MediaComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t MediaTexture = 0xC0;
            static constexpr std::uintptr_t MediaPlayer = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"MediaTexture", 0xC0, "ObjectProperty"},
            {"MediaPlayer", 0xC8, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "GetMediaPlayer",
            "GetMediaTexture",
        }};
    };

    struct MediaMetadataItemBPT
    {
        static constexpr std::string_view Name = "MediaMetadataItemBPT";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t LanguageCode = 0x0;
            static constexpr std::uintptr_t mimetype = 0x10;
            static constexpr std::uintptr_t StringData = 0x20;
            static constexpr std::uintptr_t BinaryData = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"LanguageCode", 0x0, "StrProperty"},
            {"mimetype", 0x10, "StrProperty"},
            {"StringData", 0x20, "StrProperty"},
            {"BinaryData", 0x30, "ArrayProperty"},
        }};
    };

    struct MediaMetadataItemsBPT
    {
        static constexpr std::string_view Name = "MediaMetadataItemsBPT";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Items = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Items", 0x0, "ArrayProperty"},
        }};
    };

    struct MediaPlayer
    {
        static constexpr std::string_view Name = "MediaPlayer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t OnEndReached = 0x30;
            static constexpr std::uintptr_t OnMediaClosed = 0x40;
            static constexpr std::uintptr_t OnMediaOpened = 0x50;
            static constexpr std::uintptr_t OnMediaOpenFailed = 0x60;
            static constexpr std::uintptr_t OnPlaybackResumed = 0x70;
            static constexpr std::uintptr_t OnPlaybackSuspended = 0x80;
            static constexpr std::uintptr_t OnSeekCompleted = 0x90;
            static constexpr std::uintptr_t OnTracksChanged = 0xA0;
            static constexpr std::uintptr_t OnMetadataChanged = 0xB0;
            static constexpr std::uintptr_t OnBufferingStart = 0xC0;
            static constexpr std::uintptr_t OnBufferingCompleted = 0xD0;
            static constexpr std::uintptr_t CacheAhead = 0xE0;
            static constexpr std::uintptr_t CacheBehind = 0xE8;
            static constexpr std::uintptr_t CacheBehindGame = 0xF0;
            static constexpr std::uintptr_t NativeAudioOut = 0xF8;
            static constexpr std::uintptr_t PlayOnOpen = 0xF9;
            static constexpr std::uintptr_t Loop = 0xFC;
            static constexpr std::uintptr_t Shuffle = 0xFC;
            static constexpr std::uintptr_t Playlist = 0x100;
            static constexpr std::uintptr_t PlaylistIndex = 0x108;
            static constexpr std::uintptr_t TimeDelay = 0x110;
            static constexpr std::uintptr_t HorizontalFieldOfView = 0x118;
            static constexpr std::uintptr_t VerticalFieldOfView = 0x11C;
            static constexpr std::uintptr_t ViewRotation = 0x120;
            static constexpr std::uintptr_t PlayerGuid = 0x160;
        };

        inline static constexpr std::array<PropertyInfo, 25> Properties{{
            {"OnEndReached", 0x30, "MulticastInlineDelegateProperty"},
            {"OnMediaClosed", 0x40, "MulticastInlineDelegateProperty"},
            {"OnMediaOpened", 0x50, "MulticastInlineDelegateProperty"},
            {"OnMediaOpenFailed", 0x60, "MulticastInlineDelegateProperty"},
            {"OnPlaybackResumed", 0x70, "MulticastInlineDelegateProperty"},
            {"OnPlaybackSuspended", 0x80, "MulticastInlineDelegateProperty"},
            {"OnSeekCompleted", 0x90, "MulticastInlineDelegateProperty"},
            {"OnTracksChanged", 0xA0, "MulticastInlineDelegateProperty"},
            {"OnMetadataChanged", 0xB0, "MulticastInlineDelegateProperty"},
            {"OnBufferingStart", 0xC0, "MulticastInlineDelegateProperty"},
            {"OnBufferingCompleted", 0xD0, "MulticastInlineDelegateProperty"},
            {"CacheAhead", 0xE0, "StructProperty"},
            {"CacheBehind", 0xE8, "StructProperty"},
            {"CacheBehindGame", 0xF0, "StructProperty"},
            {"NativeAudioOut", 0xF8, "BoolProperty"},
            {"PlayOnOpen", 0xF9, "BoolProperty"},
            {"Loop", 0xFC, "BoolProperty"},
            {"Shuffle", 0xFC, "BoolProperty"},
            {"Playlist", 0x100, "ObjectProperty"},
            {"PlaylistIndex", 0x108, "IntProperty"},
            {"TimeDelay", 0x110, "StructProperty"},
            {"HorizontalFieldOfView", 0x118, "FloatProperty"},
            {"VerticalFieldOfView", 0x11C, "FloatProperty"},
            {"ViewRotation", 0x120, "StructProperty"},
            {"PlayerGuid", 0x160, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 79> FunctionNames{{
            "CanPause",
            "CanPlaySource",
            "CanPlayUrl",
            "Close",
            "GetAudioTrackChannels",
            "GetAudioTrackSampleRate",
            "GetAudioTrackType",
            "GetDesiredPlayerName",
            "GetDisplayTime",
            "GetDisplayTimeStamp",
            "GetDuration",
            "GetHorizontalFieldOfView",
            "GetMediaMetadataItems",
            "GetMediaName",
            "GetNumTrackFormats",
            "GetNumTracks",
            "GetPlaybackTimeRange",
            "GetPlayerName",
            "GetPlaylist",
            "GetPlaylistIndex",
            "GetRate",
            "GetSelectedTrack",
            "GetSupportedRates",
            "GetTime",
            "GetTimeDelay",
            "GetTimestamp",
            "GetTrackDisplayName",
            "GetTrackFormat",
            "GetTrackLanguage",
            "GetUrl",
            "GetVerticalFieldOfView",
            "GetVideoTrackAspectRatio",
            "GetVideoTrackDimensions",
            "GetVideoTrackFrameRate",
            "GetVideoTrackFrameRates",
            "GetVideoTrackType",
            "GetViewRotation",
            "HasError",
            "IsBuffering",
            "IsConnecting",
            "IsLooping",
            "IsPaused",
            "IsPlaying",
            "IsPreparing",
            "IsReady",
            "Next",
            "OpenFile",
            "OpenPlaylist",
            "OpenPlaylistIndex",
            "OpenSource",
            "OpenSourceLatent",
            "OpenSourceWithOptions",
            "OpenUrl",
            "Pause",
            "Play",
            "PlayAndSeek",
            "Previous",
            "Reopen",
            "Rewind",
            "Scrub",
            "Seek",
            "SelectTrack",
            "SetBlockOnTime",
            "SetDesiredPlayerName",
            "SetLooping",
            "SetMediaOptions",
            "SetNativeVolume",
            "SetPlaybackTimeRange",
            "SetRate",
            "SetTimeDelay",
            "SetTrackFormat",
            "SetVideoTrackFrameRate",
            "SetViewField",
            "SetViewRotation",
            "SupportsPlaybackTimeRange",
            "SupportsRate",
            "SupportsScrubbing",
            "SupportsSeeking",
            "isClosed",
        }};
    };

    struct MediaPlayerProxyInterface
    {
        static constexpr std::string_view Name = "MediaPlayerProxyInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MediaPlaylist
    {
        static constexpr std::string_view Name = "MediaPlaylist";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Items = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Items", 0x28, "ArrayProperty"},
        }};

        inline static constexpr std::array<std::string_view, 12> FunctionNames{{
            "Add",
            "AddFile",
            "AddUrl",
            "Get",
            "GetNext",
            "GetPrevious",
            "GetRandom",
            "Insert",
            "Num",
            "Remove",
            "RemoveAt",
            "Replace",
        }};
    };

    struct MediaSoundComponent
    {
        static constexpr std::string_view Name = "MediaSoundComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SynthComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t Channels = 0x620;
            static constexpr std::uintptr_t DynamicRateAdjustment = 0x624;
            static constexpr std::uintptr_t RateAdjustmentFactor = 0x628;
            static constexpr std::uintptr_t RateAdjustmentRange = 0x62C;
            static constexpr std::uintptr_t MediaPlayer = 0x640;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Channels", 0x620, "EnumProperty"},
            {"DynamicRateAdjustment", 0x624, "BoolProperty"},
            {"RateAdjustmentFactor", 0x628, "FloatProperty"},
            {"RateAdjustmentRange", 0x62C, "StructProperty"},
            {"MediaPlayer", 0x640, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 10> FunctionNames{{
            "BP_GetAttenuationSettingsToApply",
            "GetEnvelopeValue",
            "GetMediaPlayer",
            "GetNormalizedSpectralData",
            "GetSpectralData",
            "SetEnableEnvelopeFollowing",
            "SetEnableSpectralAnalysis",
            "SetEnvelopeFollowingsettings",
            "SetMediaPlayer",
            "SetSpectralAnalysisSettings",
        }};
    };

    struct MediaSoundComponentSpectralData
    {
        static constexpr std::string_view Name = "MediaSoundComponentSpectralData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t FrequencyHz = 0x0;
            static constexpr std::uintptr_t Magnitude = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"FrequencyHz", 0x0, "FloatProperty"},
            {"Magnitude", 0x4, "FloatProperty"},
        }};
    };

    struct MediaSource
    {
        static constexpr std::string_view Name = "MediaSource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 6> FunctionNames{{
            "GetUrl",
            "SetMediaOptionBool",
            "SetMediaOptionFloat",
            "SetMediaOptionInt64",
            "SetMediaOptionString",
            "Validate",
        }};
    };

    struct MediaSourceCacheSettings
    {
        static constexpr std::string_view Name = "MediaSourceCacheSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bOverride = 0x0;
            static constexpr std::uintptr_t TimeToLookAhead = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bOverride", 0x0, "BoolProperty"},
            {"TimeToLookAhead", 0x4, "FloatProperty"},
        }};
    };

    struct MediaSourceColorSettings
    {
        static constexpr std::string_view Name = "MediaSourceColorSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t EncodingOverride = 0x0;
            static constexpr std::uintptr_t ColorSpaceOverride = 0x1;
            static constexpr std::uintptr_t RedChromaticityCoordinate = 0x8;
            static constexpr std::uintptr_t GreenChromaticityCoordinate = 0x18;
            static constexpr std::uintptr_t BlueChromaticityCoordinate = 0x28;
            static constexpr std::uintptr_t WhiteChromaticityCoordinate = 0x38;
            static constexpr std::uintptr_t ChromaticAdaptationMethod = 0x48;
            static constexpr std::uintptr_t ReferenceWhiteOverride = 0x49;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"EncodingOverride", 0x0, "EnumProperty"},
            {"ColorSpaceOverride", 0x1, "EnumProperty"},
            {"RedChromaticityCoordinate", 0x8, "StructProperty"},
            {"GreenChromaticityCoordinate", 0x18, "StructProperty"},
            {"BlueChromaticityCoordinate", 0x28, "StructProperty"},
            {"WhiteChromaticityCoordinate", 0x38, "StructProperty"},
            {"ChromaticAdaptationMethod", 0x48, "EnumProperty"},
            {"ReferenceWhiteOverride", 0x49, "EnumProperty"},
        }};
    };

    struct MediaSourceRendererInterface
    {
        static constexpr std::string_view Name = "MediaSourceRendererInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MediaTexture
    {
        static constexpr std::string_view Name = "MediaTexture";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Texture";
        struct Offsets
        {
            static constexpr std::uintptr_t AddressX = 0x120;
            static constexpr std::uintptr_t AddressY = 0x121;
            static constexpr std::uintptr_t AutoClear = 0x122;
            static constexpr std::uintptr_t ClearColor = 0x124;
            static constexpr std::uintptr_t EnableGenMips = 0x134;
            static constexpr std::uintptr_t NewStyleOutput = 0x135;
            static constexpr std::uintptr_t CurrentAspectRatio = 0x138;
            static constexpr std::uintptr_t CurrentOrientation = 0x13C;
            static constexpr std::uintptr_t MediaPlayer = 0x140;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"AddressX", 0x120, "ByteProperty"},
            {"AddressY", 0x121, "ByteProperty"},
            {"AutoClear", 0x122, "BoolProperty"},
            {"ClearColor", 0x124, "StructProperty"},
            {"EnableGenMips", 0x134, "BoolProperty"},
            {"NewStyleOutput", 0x135, "BoolProperty"},
            {"CurrentAspectRatio", 0x138, "FloatProperty"},
            {"CurrentOrientation", 0x13C, "ByteProperty"},
            {"MediaPlayer", 0x140, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 7> FunctionNames{{
            "GetAspectRatio",
            "GetHeight",
            "GetMediaPlayer",
            "GetTextureNumMips",
            "GetWidth",
            "SetMediaPlayer",
            "UpdateResource",
        }};
    };

    struct MediaTimeStampInfo
    {
        static constexpr std::string_view Name = "MediaTimeStampInfo";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t time = 0x28;
            static constexpr std::uintptr_t SequenceIndex = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"time", 0x28, "StructProperty"},
            {"SequenceIndex", 0x30, "Int64Property"},
        }};
    };

    struct PlatformMediaSource
    {
        static constexpr std::string_view Name = "PlatformMediaSource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MediaSource";
        struct Offsets
        {
            static constexpr std::uintptr_t MediaSource = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MediaSource", 0x40, "ObjectProperty"},
        }};
    };

    struct StreamMediaSource
    {
        static constexpr std::string_view Name = "StreamMediaSource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BaseMediaSource";
        struct Offsets
        {
            static constexpr std::uintptr_t StreamUrl = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"StreamUrl", 0x48, "StrProperty"},
        }};
    };

    struct TimeSynchronizableMediaSource
    {
        static constexpr std::string_view Name = "TimeSynchronizableMediaSource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BaseMediaSource";
        struct Offsets
        {
            static constexpr std::uintptr_t bUseTimeSynchronization = 0x48;
            static constexpr std::uintptr_t FrameDelay = 0x4C;
            static constexpr std::uintptr_t TimeDelay = 0x50;
            static constexpr std::uintptr_t bAutoDetectInput = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bUseTimeSynchronization", 0x48, "BoolProperty"},
            {"FrameDelay", 0x4C, "IntProperty"},
            {"TimeDelay", 0x50, "DoubleProperty"},
            {"bAutoDetectInput", 0x58, "BoolProperty"},
        }};
    };

}

#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::MusicEnvironment
{
    struct AsyncAction_FindOrWaitForGlobalMusicClockAuthority
    {
        static constexpr std::string_view Name = "AsyncAction_FindOrWaitForGlobalMusicClockAuthority";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MusicClockAsyncAction";
        struct Offsets
        {
            static constexpr std::uintptr_t Found = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Found", 0x40, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "FindOrWaitForGlobalMusicClockAuthority",
        }};
    };

    struct AsyncAction_WaitForMusicClocksMatchingTag
    {
        static constexpr std::string_view Name = "AsyncAction_WaitForMusicClocksMatchingTag";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MusicClockAsyncAction";
        struct Offsets
        {
            static constexpr std::uintptr_t Found = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Found", 0x40, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "WaitForMusicClocksMatchingTag",
        }};
    };

    struct FrameBasedMusicMap
    {
        static constexpr std::string_view Name = "FrameBasedMusicMap";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t TempoMap = 0x28;
            static constexpr std::uintptr_t BarMap = 0x38;
            static constexpr std::uintptr_t FrameResolution = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"TempoMap", 0x28, "ArrayProperty"},
            {"BarMap", 0x38, "ArrayProperty"},
            {"FrameResolution", 0x48, "StructProperty"},
        }};
    };

    struct FrameBasedTempoPoint
    {
        static constexpr std::string_view Name = "FrameBasedTempoPoint";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t MicrosecondsPerQuarterNote = 0x0;
            static constexpr std::uintptr_t OnTick = 0x4;
            static constexpr std::uintptr_t OnMs = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"MicrosecondsPerQuarterNote", 0x0, "IntProperty"},
            {"OnTick", 0x4, "IntProperty"},
            {"OnMs", 0x8, "FloatProperty"},
        }};
    };

    struct FrameBasedTimeSignature
    {
        static constexpr std::string_view Name = "FrameBasedTimeSignature";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Numerator = 0x0;
            static constexpr std::uintptr_t Denominator = 0x2;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Numerator", 0x0, "Int16Property"},
            {"Denominator", 0x2, "Int16Property"},
        }};
    };

    struct FrameBasedTimeSignaturePoint
    {
        static constexpr std::string_view Name = "FrameBasedTimeSignaturePoint";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t TimeSignature = 0x0;
            static constexpr std::uintptr_t OnBar = 0x4;
            static constexpr std::uintptr_t OnTick = 0x8;
            static constexpr std::uintptr_t OnFrame = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"TimeSignature", 0x0, "StructProperty"},
            {"OnBar", 0x4, "IntProperty"},
            {"OnTick", 0x8, "IntProperty"},
            {"OnFrame", 0x10, "DoubleProperty"},
        }};
    };

    struct MarkerProviderResults
    {
        static constexpr std::string_view Name = "MarkerProviderResults";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MusicClockAsyncAction
    {
        static constexpr std::string_view Name = "MusicClockAsyncAction";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CancellableAsyncAction";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MusicClockSourceManager
    {
        static constexpr std::string_view Name = "MusicClockSourceManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 8> FunctionNames{{
            "AddTaggedClock",
            "FindClock",
            "GetGlobalMusicClockAuthority",
            "PopMusicClockAuthority",
            "PushGlobalMusicClockAuthority",
            "RemoveClockWithTag",
            "RemoveGlobalClockAuthority",
            "RemoveTaggedClock",
        }};
    };

    struct MusicClockWorldSubsystem
    {
        static constexpr std::string_view Name = "MusicClockWorldSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TickableWorldSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t OnTaggedClockAddedBP = 0x78;
            static constexpr std::uintptr_t OnTaggedClockRemovedBP = 0x88;
            static constexpr std::uintptr_t OnAuthorityChangedBP = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"OnTaggedClockAddedBP", 0x78, "MulticastInlineDelegateProperty"},
            {"OnTaggedClockRemovedBP", 0x88, "MulticastInlineDelegateProperty"},
            {"OnAuthorityChangedBP", 0x98, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 9> FunctionNames{{
            "AddTaggedClock",
            "FindClocksMatching",
            "GetAllTaggedClocks",
            "GetGlobalMusicClockAuthority",
            "PopMusicClockAuthority",
            "PushGlobalMusicClockAuthority",
            "RemoveClockWithTag",
            "RemoveGlobalClockAuthority",
            "RemoveTaggedClock",
        }};
    };

    struct MusicEnvironmentClockSource
    {
        static constexpr std::string_view Name = "MusicEnvironmentClockSource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "GetCurrentBarBeat",
        }};
    };

    struct MusicEnvironmentMetronome
    {
        static constexpr std::string_view Name = "MusicEnvironmentMetronome";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MusicEnvironmentClockSource";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MusicEnvironmentSubsystem
    {
        static constexpr std::string_view Name = "MusicEnvironmentSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EngineSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t ClockSourceManager = 0x30;
            static constexpr std::uintptr_t MetronomeType = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ClockSourceManager", 0x30, "ObjectProperty"},
            {"MetronomeType", 0x38, "SoftClassProperty"},
        }};

        inline static constexpr std::array<std::string_view, 3> FunctionNames{{
            "CanSpawnMetronome",
            "GetClockSourceManager",
            "SpawnMetronome",
        }};
    };

    struct MusicHandle
    {
        static constexpr std::string_view Name = "MusicHandle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 16> FunctionNames{{
            "BecomeGlobalMusicClockAuthority",
            "BranchOnTransportState",
            "Continue",
            "GetCurrentBarBeat",
            "GetMusicClockSource",
            "GetTransportState",
            "IsReadyToPlay",
            "IsUsingAsset",
            "IsValid",
            "Kill",
            "Pause",
            "Play",
            "RegisterAsTaggedClock",
            "RelinquishGlobalMusicClockAuthority",
            "Stop",
            "UnregisterAsTaggedClock",
        }};
    };

    struct MusicHandleBlueprintHelpers
    {
        static constexpr std::string_view Name = "MusicHandleBlueprintHelpers";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "BranchOnTransportState",
            "GetTransportState",
        }};
    };

    struct MusicMapSource
    {
        static constexpr std::string_view Name = "MusicMapSource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 3> FunctionNames{{
            "CreateFrameBasedMusicMap",
            "GatherMarkers",
            "GetSongLengthSeconds",
        }};
    };

    struct MusicalAsset
    {
        static constexpr std::string_view Name = "MusicalAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MusicMapSource";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "Play",
            "PrepareToPlay",
        }};
    };

    struct TaggedMusicClock
    {
        static constexpr std::string_view Name = "TaggedMusicClock";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Tag = 0x0;
            static constexpr std::uintptr_t Clock = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Tag", 0x0, "StructProperty"},
            {"Clock", 0x8, "InterfaceProperty"},
        }};
    };

    struct TempoTimeSignatureMarker
    {
        static constexpr std::string_view Name = "TempoTimeSignatureMarker";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t TimeSigPoint = 0x0;
            static constexpr std::uintptr_t TempoPoint = 0x20;
            static constexpr std::uintptr_t Seconds = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"TimeSigPoint", 0x0, "OptionalProperty"},
            {"TempoPoint", 0x20, "OptionalProperty"},
            {"Seconds", 0x30, "FloatProperty"},
        }};
    };

}

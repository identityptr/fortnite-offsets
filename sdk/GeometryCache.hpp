#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::GeometryCache
{
    struct GeometryCache
    {
        static constexpr std::string_view Name = "GeometryCache";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Materials = 0x30;
            static constexpr std::uintptr_t MaterialSlotNames = 0x40;
            static constexpr std::uintptr_t Tracks = 0x50;
            static constexpr std::uintptr_t AssetUserData = 0x60;
            static constexpr std::uintptr_t StartFrame = 0x88;
            static constexpr std::uintptr_t EndFrame = 0x8C;
            static constexpr std::uintptr_t Hash = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Materials", 0x30, "ArrayProperty"},
            {"MaterialSlotNames", 0x40, "ArrayProperty"},
            {"Tracks", 0x50, "ArrayProperty"},
            {"AssetUserData", 0x60, "ArrayProperty"},
            {"StartFrame", 0x88, "IntProperty"},
            {"EndFrame", 0x8C, "IntProperty"},
            {"Hash", 0x90, "UInt64Property"},
        }};
    };

    struct GeometryCacheActor
    {
        static constexpr std::string_view Name = "GeometryCacheActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t GeometryCacheComponent = 0x278;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"GeometryCacheComponent", 0x278, "ObjectProperty"},
        }};
    };

    struct GeometryCacheCodecBase
    {
        static constexpr std::string_view Name = "GeometryCacheCodecBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t TopologyRanges = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TopologyRanges", 0x28, "ArrayProperty"},
        }};
    };

    struct GeometryCacheCodecRaw
    {
        static constexpr std::string_view Name = "GeometryCacheCodecRaw";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GeometryCacheCodecBase";
        struct Offsets
        {
            static constexpr std::uintptr_t DummyProperty = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DummyProperty", 0x38, "IntProperty"},
        }};
    };

    struct GeometryCacheCodecV1
    {
        static constexpr std::string_view Name = "GeometryCacheCodecV1";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GeometryCacheCodecBase";
        struct Offsets
        {
            static constexpr std::uintptr_t TopologyRanges = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TopologyRanges", 0x28, "ArrayProperty"},
        }};
    };

    struct GeometryCacheComponent
    {
        static constexpr std::string_view Name = "GeometryCacheComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MeshComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t GeometryCache = 0x5C0;
            static constexpr std::uintptr_t bRunning = 0x5C8;
            static constexpr std::uintptr_t bLooping = 0x5C9;
            static constexpr std::uintptr_t bInterpolateFrames = 0x5CA;
            static constexpr std::uintptr_t bExtrapolateFrames = 0x5CB;
            static constexpr std::uintptr_t StartTimeOffset = 0x5CC;
            static constexpr std::uintptr_t PlaybackSpeed = 0x5D0;
            static constexpr std::uintptr_t MotionVectorScale = 0x5D4;
            static constexpr std::uintptr_t NumTracks = 0x5D8;
            static constexpr std::uintptr_t ElapsedTime = 0x5DC;
            static constexpr std::uintptr_t duration = 0x62C;
            static constexpr std::uintptr_t bManualTick = 0x630;
            static constexpr std::uintptr_t bOverrideWireframeColor = 0x631;
            static constexpr std::uintptr_t WireframeOverrideColor = 0x634;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"GeometryCache", 0x5C0, "ObjectProperty"},
            {"bRunning", 0x5C8, "BoolProperty"},
            {"bLooping", 0x5C9, "BoolProperty"},
            {"bInterpolateFrames", 0x5CA, "BoolProperty"},
            {"bExtrapolateFrames", 0x5CB, "BoolProperty"},
            {"StartTimeOffset", 0x5CC, "FloatProperty"},
            {"PlaybackSpeed", 0x5D0, "FloatProperty"},
            {"MotionVectorScale", 0x5D4, "FloatProperty"},
            {"NumTracks", 0x5D8, "IntProperty"},
            {"ElapsedTime", 0x5DC, "FloatProperty"},
            {"duration", 0x62C, "FloatProperty"},
            {"bManualTick", 0x630, "BoolProperty"},
            {"bOverrideWireframeColor", 0x631, "BoolProperty"},
            {"WireframeOverrideColor", 0x634, "StructProperty"},
        }};
    };

    struct GeometryCacheTrack
    {
        static constexpr std::string_view Name = "GeometryCacheTrack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t duration = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"duration", 0x28, "FloatProperty"},
        }};
    };

    struct GeometryCacheTrackStreamable
    {
        static constexpr std::string_view Name = "GeometryCacheTrackStreamable";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GeometryCacheTrack";
        struct Offsets
        {
            static constexpr std::uintptr_t Codec = 0x58;
            static constexpr std::uintptr_t StartSampleTime = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Codec", 0x58, "ObjectProperty"},
            {"StartSampleTime", 0xC0, "FloatProperty"},
        }};
    };

    struct GeometryCacheTrack_FlipbookAnimation
    {
        static constexpr std::string_view Name = "GeometryCacheTrack_FlipbookAnimation";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GeometryCacheTrack";
        struct Offsets
        {
            static constexpr std::uintptr_t NumMeshSamples = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"NumMeshSamples", 0x58, "UInt32Property"},
        }};
    };

    struct GeometryCacheTrack_TransformAnimation
    {
        static constexpr std::string_view Name = "GeometryCacheTrack_TransformAnimation";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GeometryCacheTrack";
        struct Offsets
        {
            static constexpr std::uintptr_t duration = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"duration", 0x28, "FloatProperty"},
        }};
    };

    struct GeometryCacheTrack_TransformGroupAnimation
    {
        static constexpr std::string_view Name = "GeometryCacheTrack_TransformGroupAnimation";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GeometryCacheTrack";
        struct Offsets
        {
            static constexpr std::uintptr_t duration = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"duration", 0x28, "FloatProperty"},
        }};
    };

    struct NiagaraGeometryCacheRendererProperties
    {
        static constexpr std::string_view Name = "NiagaraGeometryCacheRendererProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraRendererProperties";
        struct Offsets
        {
            static constexpr std::uintptr_t GeometryCaches = 0x98;
            static constexpr std::uintptr_t SourceMode = 0xA8;
            static constexpr std::uintptr_t bIsLooping = 0xA9;
            static constexpr std::uintptr_t ComponentCountLimit = 0xAC;
            static constexpr std::uintptr_t PositionBinding = 0xB0;
            static constexpr std::uintptr_t RotationBinding = 0xC4;
            static constexpr std::uintptr_t ScaleBinding = 0xD8;
            static constexpr std::uintptr_t ElapsedTimeBinding = 0xEC;
            static constexpr std::uintptr_t EnabledBinding = 0x100;
            static constexpr std::uintptr_t ArrayIndexBinding = 0x114;
            static constexpr std::uintptr_t RendererVisibilityTagBinding = 0x128;
            static constexpr std::uintptr_t RendererVisibility = 0x13C;
            static constexpr std::uintptr_t bAssignComponentsOnParticleID = 0x140;
            static constexpr std::uintptr_t EnableCollision = 0x141;
            static constexpr std::uintptr_t bAffectsNavigation = 0x142;
            static constexpr std::uintptr_t MaterialParameters = 0x148;
        };

        inline static constexpr std::array<PropertyInfo, 16> Properties{{
            {"GeometryCaches", 0x98, "ArrayProperty"},
            {"SourceMode", 0xA8, "EnumProperty"},
            {"bIsLooping", 0xA9, "BoolProperty"},
            {"ComponentCountLimit", 0xAC, "UInt32Property"},
            {"PositionBinding", 0xB0, "StructProperty"},
            {"RotationBinding", 0xC4, "StructProperty"},
            {"ScaleBinding", 0xD8, "StructProperty"},
            {"ElapsedTimeBinding", 0xEC, "StructProperty"},
            {"EnabledBinding", 0x100, "StructProperty"},
            {"ArrayIndexBinding", 0x114, "StructProperty"},
            {"RendererVisibilityTagBinding", 0x128, "StructProperty"},
            {"RendererVisibility", 0x13C, "IntProperty"},
            {"bAssignComponentsOnParticleID", 0x140, "BoolProperty"},
            {"EnableCollision", 0x141, "ByteProperty"},
            {"bAffectsNavigation", 0x142, "BoolProperty"},
            {"MaterialParameters", 0x148, "StructProperty"},
        }};
    };

}

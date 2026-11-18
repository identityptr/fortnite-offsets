#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::AudioShapes
{
    struct AudioShapeBoxComponent
    {
        static constexpr std::string_view Name = "AudioShapeBoxComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AudioShapePrimitiveComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t BoxTransform = 0x1E0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"BoxTransform", 0x1E0, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "SetBoxTransform",
        }};
    };

    struct AudioShapeComponent
    {
        static constexpr std::string_view Name = "AudioShapeComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AudioGameplayComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxDistanceOffset = 0xD0;
            static constexpr std::uintptr_t SmoothingDistance = 0xD4;
            static constexpr std::uintptr_t FadeInTime = 0xD8;
            static constexpr std::uintptr_t FadeOutTime = 0xDC;
            static constexpr std::uintptr_t OnAudibleStateChanged = 0xE0;
            static constexpr std::uintptr_t AudioComponents = 0xF0;
            static constexpr std::uintptr_t LocalControllers = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"MaxDistanceOffset", 0xD0, "FloatProperty"},
            {"SmoothingDistance", 0xD4, "FloatProperty"},
            {"FadeInTime", 0xD8, "FloatProperty"},
            {"FadeOutTime", 0xDC, "FloatProperty"},
            {"OnAudibleStateChanged", 0xE0, "MulticastInlineDelegateProperty"},
            {"AudioComponents", 0xF0, "MapProperty"},
            {"LocalControllers", 0x100, "ArrayProperty"},
        }};

        inline static constexpr std::array<std::string_view, 5> FunctionNames{{
            "Disable",
            "Enable",
            "IsAudioShapeReady",
            "IsShapeActive",
            "UpdateAudioShape",
        }};
    };

    struct AudioShapeCylinderComponent
    {
        static constexpr std::string_view Name = "AudioShapeCylinderComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AudioShapePrimitiveComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t HalfHeight = 0x1E0;
            static constexpr std::uintptr_t Radius = 0x1E4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"HalfHeight", 0x1E0, "FloatProperty"},
            {"Radius", 0x1E4, "FloatProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "SetHalfHeight",
            "SetRadius",
        }};
    };

    struct AudioShapeLineComponent
    {
        static constexpr std::string_view Name = "AudioShapeLineComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AudioShapePrimitiveComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t StartPoint = 0x1E0;
            static constexpr std::uintptr_t Endpoint = 0x1F8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"StartPoint", 0x1E0, "StructProperty"},
            {"Endpoint", 0x1F8, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "SetEndPoint",
            "SetStartPoint",
        }};
    };

    struct AudioShapeLineListComponent
    {
        static constexpr std::string_view Name = "AudioShapeLineListComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AudioShapePrimitiveComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PointList = 0x1E0;
            static constexpr std::uintptr_t bClosedLoop = 0x1F0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PointList", 0x1E0, "ArrayProperty"},
            {"bClosedLoop", 0x1F0, "BoolProperty"},
        }};

        inline static constexpr std::array<std::string_view, 4> FunctionNames{{
            "AddPoint",
            "GetPoints",
            "RemovePoint",
            "UpdatePoint",
        }};
    };

    struct AudioShapePrimitiveComponent
    {
        static constexpr std::string_view Name = "AudioShapePrimitiveComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AudioShapeComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t SoundOnEdge = 0x120;
            static constexpr std::uintptr_t SoundOnInside = 0x128;
            static constexpr std::uintptr_t OnInsideStateChanged = 0x130;
            static constexpr std::uintptr_t bUseOwningActorTransform = 0x140;
            static constexpr std::uintptr_t bAutoRefreshShape = 0x141;
            static constexpr std::uintptr_t ActorTransformScale = 0x148;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"SoundOnEdge", 0x120, "ObjectProperty"},
            {"SoundOnInside", 0x128, "ObjectProperty"},
            {"OnInsideStateChanged", 0x130, "MulticastInlineDelegateProperty"},
            {"bUseOwningActorTransform", 0x140, "BoolProperty"},
            {"bAutoRefreshShape", 0x141, "BoolProperty"},
            {"ActorTransformScale", 0x148, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 3> FunctionNames{{
            "GetEdgeAudioComponent",
            "GetInsideAudioComponent",
            "GetIsPlayerInside",
        }};
    };

    struct AudioShapeSphereComponent
    {
        static constexpr std::string_view Name = "AudioShapeSphereComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AudioShapePrimitiveComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t Radius = 0x1E0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Radius", 0x1E0, "FloatProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "SetRadius",
        }};
    };

    struct AudioShapeSplineComponent
    {
        static constexpr std::string_view Name = "AudioShapeSplineComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AudioShapeComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t TravelDistanceCrossfadeThreshold = 0x120;
            static constexpr std::uintptr_t TravelDistanceCrossfadeTime = 0x124;
            static constexpr std::uintptr_t ClosestPointSound = 0x128;
            static constexpr std::uintptr_t OnAudioUpdateInAudibleRange = 0x130;
            static constexpr std::uintptr_t SplineAABB = 0x198;
            static constexpr std::uintptr_t FadingComponents = 0x1D0;
            static constexpr std::uintptr_t Spline = 0x1E0;
            static constexpr std::uintptr_t SplineSegments = 0x1E8;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"TravelDistanceCrossfadeThreshold", 0x120, "FloatProperty"},
            {"TravelDistanceCrossfadeTime", 0x124, "FloatProperty"},
            {"ClosestPointSound", 0x128, "ObjectProperty"},
            {"OnAudioUpdateInAudibleRange", 0x130, "MulticastInlineDelegateProperty"},
            {"SplineAABB", 0x198, "StructProperty"},
            {"FadingComponents", 0x1D0, "ArrayProperty"},
            {"Spline", 0x1E0, "WeakObjectProperty"},
            {"SplineSegments", 0x1E8, "ArrayProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "GetAudioComponent",
            "SetSpline",
        }};
    };

    struct AudioShapeSubsystem
    {
        static constexpr std::string_view Name = "AudioShapeSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t PendingAudioShapes = 0x60;
            static constexpr std::uintptr_t AudioShapes = 0x70;
            static constexpr std::uintptr_t LocalControllers = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"PendingAudioShapes", 0x60, "ArrayProperty"},
            {"AudioShapes", 0x70, "ArrayProperty"},
            {"LocalControllers", 0x80, "ArrayProperty"},
        }};
    };

    struct SplineSegmentData
    {
        static constexpr std::string_view Name = "SplineSegmentData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Bounds = 0x0;
            static constexpr std::uintptr_t PointIndex = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Bounds", 0x0, "StructProperty"},
            {"PointIndex", 0x38, "IntProperty"},
        }};
    };

}

#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FortDelMarTrackRuntime
{
    struct FortDelMarTrack
    {
        static constexpr std::string_view Name = "FortDelMarTrack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortDelMarTrackBase";
        struct Offsets
        {
            static constexpr std::uintptr_t TrackType = 0xBA8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TrackType", 0xBA8, "EnumProperty"},
        }};
    };

    struct FortDelMarTrackBase
    {
        static constexpr std::string_view Name = "FortDelMarTrackBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCreativeDeviceProp";
        struct Offsets
        {
            static constexpr std::uintptr_t TrackPalette = 0xB60;
            static constexpr std::uintptr_t TrackSplinePointData = 0xB68;
            static constexpr std::uintptr_t Spline = 0xB70;
            static constexpr std::uintptr_t TrackPropData = 0xB78;
            static constexpr std::uintptr_t SegmentCollections = 0xB88;
            static constexpr std::uintptr_t DefaultMaxTrackWidth = 0xB98;
            static constexpr std::uintptr_t TotalSegmentActors = 0xB9C;
            static constexpr std::uintptr_t TrackLength = 0xBA0;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"TrackPalette", 0xB60, "ObjectProperty"},
            {"TrackSplinePointData", 0xB68, "ObjectProperty"},
            {"Spline", 0xB70, "ObjectProperty"},
            {"TrackPropData", 0xB78, "ArrayProperty"},
            {"SegmentCollections", 0xB88, "ArrayProperty"},
            {"DefaultMaxTrackWidth", 0xB98, "FloatProperty"},
            {"TotalSegmentActors", 0xB9C, "IntProperty"},
            {"TrackLength", 0xBA0, "FloatProperty"},
        }};
    };

    struct FortDelMarTrackCustomizationInterface
    {
        static constexpr std::string_view Name = "FortDelMarTrackCustomizationInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortDelMarTrackManager
    {
        static constexpr std::string_view Name = "FortDelMarTrackManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t DelMarTracks = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DelMarTracks", 0x68, "ArrayProperty"},
        }};
    };

    struct FortDelMarTrackMatLayerComponent
    {
        static constexpr std::string_view Name = "FortDelMarTrackMatLayerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t RoadMesh = 0xC0;
            static constexpr std::uintptr_t Track = 0xC8;
            static constexpr std::uintptr_t MaterialCollection = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"RoadMesh", 0xC0, "WeakObjectProperty"},
            {"Track", 0xC8, "WeakObjectProperty"},
            {"MaterialCollection", 0xD0, "ObjectProperty"},
        }};
    };

    struct FortDelMarTrackMaterialCollection
    {
        static constexpr std::string_view Name = "FortDelMarTrackMaterialCollection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t SelectedIndex = 0x28;
            static constexpr std::uintptr_t Materials = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SelectedIndex", 0x28, "UInt32Property"},
            {"Materials", 0x30, "ArrayProperty"},
        }};
    };

    struct FortDelMarTrackPaletteTheme
    {
        static constexpr std::string_view Name = "FortDelMarTrackPaletteTheme";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t ThemeName = 0x30;
            static constexpr std::uintptr_t ThemeDescription = 0x38;
            static constexpr std::uintptr_t Tracks = 0x48;
            static constexpr std::uintptr_t Transitions = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ThemeName", 0x30, "NameProperty"},
            {"ThemeDescription", 0x38, "StrProperty"},
            {"Tracks", 0x48, "ArrayProperty"},
            {"Transitions", 0x58, "ObjectProperty"},
        }};
    };

    struct FortDelMarTrackPaletteTrackType
    {
        static constexpr std::string_view Name = "FortDelMarTrackPaletteTrackType";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t StyleArray = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"StyleArray", 0x28, "ArrayProperty"},
        }};
    };

    struct FortDelMarTrackPaletteTransitions
    {
        static constexpr std::string_view Name = "FortDelMarTrackPaletteTransitions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t TransitionArray = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TransitionArray", 0x28, "ArrayProperty"},
        }};
    };

    struct FortDelMarTrackPointData
    {
        static constexpr std::string_view Name = "FortDelMarTrackPointData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SplineMetadata";
        struct Offsets
        {
            static constexpr std::uintptr_t MetaData = 0x28;
            static constexpr std::uintptr_t Spline = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"MetaData", 0x28, "ArrayProperty"},
            {"Spline", 0x38, "ObjectProperty"},
        }};
    };

    struct FortDelMarTrackSegmentBase
    {
        static constexpr std::string_view Name = "FortDelMarTrackSegmentBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t bIgnoreSplineLength = 0x280;
            static constexpr std::uintptr_t Track = 0x284;
            static constexpr std::uintptr_t MaterialLayerComponent = 0x290;
            static constexpr std::uintptr_t Info = 0x298;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bIgnoreSplineLength", 0x280, "BoolProperty"},
            {"Track", 0x284, "WeakObjectProperty"},
            {"MaterialLayerComponent", 0x290, "ObjectProperty"},
            {"Info", 0x298, "StructProperty"},
        }};
    };

    struct FortDelMarTrackSegmentCollectionSpawnDataProvider
    {
        static constexpr std::string_view Name = "FortDelMarTrackSegmentCollectionSpawnDataProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortDelMarTrackSegmentInterface
    {
        static constexpr std::string_view Name = "FortDelMarTrackSegmentInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortDelMarTrackSettings
    {
        static constexpr std::string_view Name = "FortDelMarTrackSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeveloperSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t RootTrackTag = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RootTrackTag", 0x30, "StructProperty"},
        }};
    };

    struct FortDelMarTrackSnapToComponent
    {
        static constexpr std::string_view Name = "FortDelMarTrackSnapToComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SceneComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OffsetToOwnerActor = 0x240;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OffsetToOwnerActor", 0x240, "StructProperty"},
        }};
    };

    struct FortDelMarTrackSnapToSplinePointComponent
    {
        static constexpr std::string_view Name = "FortDelMarTrackSnapToSplinePointComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortDelMarTrackSnapToComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t SplineToSnapTo = 0x270;
            static constexpr std::uintptr_t SplinePointSnapMode = 0x278;
            static constexpr std::uintptr_t SplinePointIndexToSnapTo = 0x27C;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SplineToSnapTo", 0x270, "ObjectProperty"},
            {"SplinePointSnapMode", 0x278, "EnumProperty"},
            {"SplinePointIndexToSnapTo", 0x27C, "IntProperty"},
        }};
    };

    struct FortDelMarTrackSplineComponent
    {
        static constexpr std::string_view Name = "FortDelMarTrackSplineComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SplineComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t WorldPlaneLookupSubsteps = 0x6C0;
            static constexpr std::uintptr_t RotationalMinimalFrameNormals = 0x758;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"WorldPlaneLookupSubsteps", 0x6C0, "IntProperty"},
            {"RotationalMinimalFrameNormals", 0x758, "ArrayProperty"},
        }};
    };

    struct FortDelMarTrackSplineMeshSegment
    {
        static constexpr std::string_view Name = "FortDelMarTrackSplineMeshSegment";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortDelMarTrackSegmentBase";
        struct Offsets
        {
            static constexpr std::uintptr_t SplineMesh = 0x360;
            static constexpr std::uintptr_t SegmentLengthScaler = 0x368;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SplineMesh", 0x360, "ObjectProperty"},
            {"SegmentLengthScaler", 0x368, "FloatProperty"},
        }};
    };

    struct FortDelMarTrackStaticMeshSegment
    {
        static constexpr std::string_view Name = "FortDelMarTrackStaticMeshSegment";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortDelMarTrackSegmentBase";
        struct Offsets
        {
            static constexpr std::uintptr_t StaticMeshComponent = 0x360;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"StaticMeshComponent", 0x360, "ObjectProperty"},
        }};
    };

}

#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::DelMarTrackRuntime
{
    struct DelMarTrack
    {
        static constexpr std::string_view Name = "DelMarTrack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarTrackBase";
        struct Offsets
        {
            static constexpr std::uintptr_t TrackType = 0xBD8;
            static constexpr std::uintptr_t bIsIndependent = 0xBD9;
            static constexpr std::uintptr_t bUserSelectedStartTrack = 0xBDA;
            static constexpr std::uintptr_t StartTrackConnection = 0xBE0;
            static constexpr std::uintptr_t bUserSelectedEndTrack = 0xBE8;
            static constexpr std::uintptr_t EndTrackConnection = 0xBF0;
            static constexpr std::uintptr_t ParentStartDistance = 0xBF8;
            static constexpr std::uintptr_t ParentEndDistance = 0xBFC;
            static constexpr std::uintptr_t PrimaryStartDistance = 0xC00;
            static constexpr std::uintptr_t PrimaryEndDistance = 0xC04;
            static constexpr std::uintptr_t PrimarySegmentLength = 0xC08;
            static constexpr std::uintptr_t OobTubeClass = 0xC10;
            static constexpr std::uintptr_t AttachedOobTube = 0xC18;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"TrackType", 0xBD8, "EnumProperty"},
            {"bIsIndependent", 0xBD9, "BoolProperty"},
            {"bUserSelectedStartTrack", 0xBDA, "BoolProperty"},
            {"StartTrackConnection", 0xBE0, "ObjectProperty"},
            {"bUserSelectedEndTrack", 0xBE8, "BoolProperty"},
            {"EndTrackConnection", 0xBF0, "ObjectProperty"},
            {"ParentStartDistance", 0xBF8, "FloatProperty"},
            {"ParentEndDistance", 0xBFC, "FloatProperty"},
            {"PrimaryStartDistance", 0xC00, "FloatProperty"},
            {"PrimaryEndDistance", 0xC04, "FloatProperty"},
            {"PrimarySegmentLength", 0xC08, "FloatProperty"},
            {"OobTubeClass", 0xC10, "ClassProperty"},
            {"AttachedOobTube", 0xC18, "WeakObjectProperty"},
        }};
    };

    struct DelMarTrackBase
    {
        static constexpr std::string_view Name = "DelMarTrackBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCreativeDeviceProp";
        struct Offsets
        {
            static constexpr std::uintptr_t TrackPalette_V2 = 0xB78;
            static constexpr std::uintptr_t TrackSplinePointData = 0xB80;
            static constexpr std::uintptr_t Spline = 0xB88;
            static constexpr std::uintptr_t TrackPropData = 0xB90;
            static constexpr std::uintptr_t SegmentCollections = 0xBA0;
            static constexpr std::uintptr_t DefaultMaxTrackWidth = 0xBB0;
            static constexpr std::uintptr_t TotalSegmentActors = 0xBB4;
            static constexpr std::uintptr_t TrackLength = 0xBB8;
            static constexpr std::uintptr_t TrackPalette = 0xBC0;
            static constexpr std::uintptr_t bEnableGlobalMaterialCollectionIndex = 0xBC8;
            static constexpr std::uintptr_t GlobalMaterialCollectionIndex = 0xBCC;
            static constexpr std::uintptr_t bForceValidOOBTube = 0xBD0;
            static constexpr std::uintptr_t bForceValidTrack = 0xBD1;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"TrackPalette_V2", 0xB78, "ObjectProperty"},
            {"TrackSplinePointData", 0xB80, "ObjectProperty"},
            {"Spline", 0xB88, "ObjectProperty"},
            {"TrackPropData", 0xB90, "ArrayProperty"},
            {"SegmentCollections", 0xBA0, "ArrayProperty"},
            {"DefaultMaxTrackWidth", 0xBB0, "FloatProperty"},
            {"TotalSegmentActors", 0xBB4, "IntProperty"},
            {"TrackLength", 0xBB8, "FloatProperty"},
            {"TrackPalette", 0xBC0, "ObjectProperty"},
            {"bEnableGlobalMaterialCollectionIndex", 0xBC8, "BoolProperty"},
            {"GlobalMaterialCollectionIndex", 0xBCC, "UInt32Property"},
            {"bForceValidOOBTube", 0xBD0, "BoolProperty"},
            {"bForceValidTrack", 0xBD1, "BoolProperty"},
        }};
    };

    struct DelMarTrackBlueprintFunctionLibrary
    {
        static constexpr std::string_view Name = "DelMarTrackBlueprintFunctionLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DelMarTrackCustomSegment
    {
        static constexpr std::string_view Name = "DelMarTrackCustomSegment";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarTrackSegmentBase";
        struct Offsets
        {
            static constexpr std::uintptr_t SegmentLength = 0x2A8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SegmentLength", 0x2A8, "FloatProperty"},
        }};
    };

    struct DelMarTrackCustomizationInterface
    {
        static constexpr std::string_view Name = "DelMarTrackCustomizationInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DelMarTrackManager
    {
        static constexpr std::string_view Name = "DelMarTrackManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t DelMarTracks = 0x68;
            static constexpr std::uintptr_t PrimaryTrack = 0x78;
            static constexpr std::uintptr_t LowestTrack = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"DelMarTracks", 0x68, "ArrayProperty"},
            {"PrimaryTrack", 0x78, "ObjectProperty"},
            {"LowestTrack", 0x80, "ObjectProperty"},
        }};
    };

    struct DelMarTrackMatLayerComponent
    {
        static constexpr std::string_view Name = "DelMarTrackMatLayerComponent";
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

    struct DelMarTrackMaterialCollection
    {
        static constexpr std::string_view Name = "DelMarTrackMaterialCollection";
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

    struct DelMarTrackMeshCustomization
    {
        static constexpr std::string_view Name = "DelMarTrackMeshCustomization";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SplineMeshComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsADefaultCustomization = 0x7D9;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bIsADefaultCustomization", 0x7D9, "BoolProperty"},
        }};
    };

    struct DelMarTrackOobTube
    {
        static constexpr std::string_view Name = "DelMarTrackOobTube";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t AttachedTrack = 0x278;
            static constexpr std::uintptr_t Spline = 0x280;
            static constexpr std::uintptr_t SplinePointData = 0x288;
            static constexpr std::uintptr_t TubeMeshComponentClass = 0x290;
            static constexpr std::uintptr_t OobTubeMeshSections = 0x2B0;
            static constexpr std::uintptr_t TubeMesh = 0x2C0;
            static constexpr std::uintptr_t TransitionMeshes = 0x2E0;
            static constexpr std::uintptr_t DefaultTransitionMeshLength = 0x2F0;
            static constexpr std::uintptr_t DefaultNumSubsections = 0x2F4;
            static constexpr std::uintptr_t SmallestSubsectionLength = 0x2F8;
            static constexpr std::uintptr_t MinimumMeshScale = 0x2FC;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"AttachedTrack", 0x278, "ObjectProperty"},
            {"Spline", 0x280, "ObjectProperty"},
            {"SplinePointData", 0x288, "ObjectProperty"},
            {"TubeMeshComponentClass", 0x290, "SoftClassProperty"},
            {"OobTubeMeshSections", 0x2B0, "ArrayProperty"},
            {"TubeMesh", 0x2C0, "SoftObjectProperty"},
            {"TransitionMeshes", 0x2E0, "MapProperty"},
            {"DefaultTransitionMeshLength", 0x2F0, "FloatProperty"},
            {"DefaultNumSubsections", 0x2F4, "IntProperty"},
            {"SmallestSubsectionLength", 0x2F8, "FloatProperty"},
            {"MinimumMeshScale", 0x2FC, "FloatProperty"},
        }};
    };

    struct DelMarTrackOobTubeCollectionProxy
    {
        static constexpr std::string_view Name = "DelMarTrackOobTubeCollectionProxy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t OobTubeClass = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OobTubeClass", 0x28, "ClassProperty"},
        }};
    };

    struct DelMarTrackOobTubePointData
    {
        static constexpr std::string_view Name = "DelMarTrackOobTubePointData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SplineMetadata";
        struct Offsets
        {
            static constexpr std::uintptr_t MetaData = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MetaData", 0x28, "ArrayProperty"},
        }};
    };

    struct DelMarTrackOobTubePositionalRenderingComponent
    {
        static constexpr std::string_view Name = "DelMarTrackOobTubePositionalRenderingComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayerPositionComponent = 0xC0;
            static constexpr std::uintptr_t ActiveOOBTubeMeshes = 0xC8;
            static constexpr std::uintptr_t ActiveOOBTube = 0xD8;
            static constexpr std::uintptr_t RenderDistanceInFrontOfPlayer = 0xE0;
            static constexpr std::uintptr_t RenderDistanceBehindPlayer = 0xE4;
            static constexpr std::uintptr_t UpdateIntervalInSeconds = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"PlayerPositionComponent", 0xC0, "WeakObjectProperty"},
            {"ActiveOOBTubeMeshes", 0xC8, "SetProperty"},
            {"ActiveOOBTube", 0xD8, "ObjectProperty"},
            {"RenderDistanceInFrontOfPlayer", 0xE0, "FloatProperty"},
            {"RenderDistanceBehindPlayer", 0xE4, "FloatProperty"},
            {"UpdateIntervalInSeconds", 0xE8, "FloatProperty"},
        }};
    };

    struct DelMarTrackOobTubeProxy
    {
        static constexpr std::string_view Name = "DelMarTrackOobTubeProxy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DelMarTrackPalette
    {
        static constexpr std::string_view Name = "DelMarTrackPalette";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t Palette = 0x28;
            static constexpr std::uintptr_t Transitions = 0x38;
            static constexpr std::uintptr_t Caps = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Palette", 0x28, "ArrayProperty"},
            {"Transitions", 0x38, "ArrayProperty"},
            {"Caps", 0x48, "ArrayProperty"},
        }};
    };

    struct DelMarTrackPaletteTheme
    {
        static constexpr std::string_view Name = "DelMarTrackPaletteTheme";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t ThemeName = 0x30;
            static constexpr std::uintptr_t ThemeDescription = 0x38;
            static constexpr std::uintptr_t Tracks = 0x48;
            static constexpr std::uintptr_t Transitions = 0x58;
            static constexpr std::uintptr_t OOBTubeMesh = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"ThemeName", 0x30, "NameProperty"},
            {"ThemeDescription", 0x38, "StrProperty"},
            {"Tracks", 0x48, "ArrayProperty"},
            {"Transitions", 0x58, "ObjectProperty"},
            {"OOBTubeMesh", 0x60, "ObjectProperty"},
        }};
    };

    struct DelMarTrackPaletteTrackType
    {
        static constexpr std::string_view Name = "DelMarTrackPaletteTrackType";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t StyleArray = 0x28;
            static constexpr std::uintptr_t bShouldOOBTubeFunnel = 0x38;
            static constexpr std::uintptr_t OOBTubeMeshOverride = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"StyleArray", 0x28, "ArrayProperty"},
            {"bShouldOOBTubeFunnel", 0x38, "BoolProperty"},
            {"OOBTubeMeshOverride", 0x40, "ObjectProperty"},
        }};
    };

    struct DelMarTrackPaletteTransitions
    {
        static constexpr std::string_view Name = "DelMarTrackPaletteTransitions";
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

    struct DelMarTrackPerformanceScrubber
    {
        static constexpr std::string_view Name = "DelMarTrackPerformanceScrubber";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t Camera = 0x278;
            static constexpr std::uintptr_t Spline = 0x280;
            static constexpr std::uintptr_t SplineSelection = 0x288;
            static constexpr std::uintptr_t ScrubUnits = 0x298;
            static constexpr std::uintptr_t CameraHeightOffset = 0x29C;
            static constexpr std::uintptr_t FloatCurve = 0x2A0;
            static constexpr std::uintptr_t RuntimeSpeed = 0x2A8;
            static constexpr std::uintptr_t bRunCsvProfilerDuringScrub = 0x2AC;
            static constexpr std::uintptr_t ScrubUnitMax = 0x2C8;
            static constexpr std::uintptr_t bRuntimeEnabled = 0x2CC;
            static constexpr std::uintptr_t StringToSplineMap = 0x2D0;
            static constexpr std::uintptr_t Timeline = 0x2E0;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"Camera", 0x278, "ObjectProperty"},
            {"Spline", 0x280, "WeakObjectProperty"},
            {"SplineSelection", 0x288, "StrProperty"},
            {"ScrubUnits", 0x298, "IntProperty"},
            {"CameraHeightOffset", 0x29C, "FloatProperty"},
            {"FloatCurve", 0x2A0, "ObjectProperty"},
            {"RuntimeSpeed", 0x2A8, "IntProperty"},
            {"bRunCsvProfilerDuringScrub", 0x2AC, "BoolProperty"},
            {"ScrubUnitMax", 0x2C8, "IntProperty"},
            {"bRuntimeEnabled", 0x2CC, "BoolProperty"},
            {"StringToSplineMap", 0x2D0, "MapProperty"},
            {"Timeline", 0x2E0, "ObjectProperty"},
        }};
    };

    struct DelMarTrackPointData
    {
        static constexpr std::string_view Name = "DelMarTrackPointData";
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

    struct DelMarTrackPositionComponent
    {
        static constexpr std::string_view Name = "DelMarTrackPositionComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SceneComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ActiveTrackPosition = 0x270;
            static constexpr std::uintptr_t TrackRadius = 0x290;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ActiveTrackPosition", 0x270, "StructProperty"},
            {"TrackRadius", 0x290, "FloatProperty"},
        }};
    };

    struct DelMarTrackPrefabSegment
    {
        static constexpr std::string_view Name = "DelMarTrackPrefabSegment";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarTrackSegmentBase";
        struct Offsets
        {
            static constexpr std::uintptr_t TangentLength = 0x2A8;
            static constexpr std::uintptr_t PrefabStaticMesh = 0x2B0;
            static constexpr std::uintptr_t StartSocketName = 0x2B8;
            static constexpr std::uintptr_t EndSocketName = 0x2BC;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"TangentLength", 0x2A8, "FloatProperty"},
            {"PrefabStaticMesh", 0x2B0, "ObjectProperty"},
            {"StartSocketName", 0x2B8, "NameProperty"},
            {"EndSocketName", 0x2BC, "NameProperty"},
        }};
    };

    struct DelMarTrackRoadProp
    {
        static constexpr std::string_view Name = "DelMarTrackRoadProp";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BuildingProp";
        struct Offsets
        {
            static constexpr std::uintptr_t RoadPropType = 0xB48;
            static constexpr std::uintptr_t SnapToComponent = 0xB50;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"RoadPropType", 0xB48, "EnumProperty"},
            {"SnapToComponent", 0xB50, "ObjectProperty"},
        }};
    };

    struct DelMarTrackSegmentBase
    {
        static constexpr std::string_view Name = "DelMarTrackSegmentBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t bIgnoreSplineLength = 0x280;
            static constexpr std::uintptr_t Track = 0x284;
            static constexpr std::uintptr_t MaterialLayerComponent = 0x290;
            static constexpr std::uintptr_t BeginDistanceAlongSpline = 0x298;
            static constexpr std::uintptr_t EndDistanceAlongSpline = 0x29C;
            static constexpr std::uintptr_t TrackSegmentIndex = 0x2A0;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"bIgnoreSplineLength", 0x280, "BoolProperty"},
            {"Track", 0x284, "WeakObjectProperty"},
            {"MaterialLayerComponent", 0x290, "ObjectProperty"},
            {"BeginDistanceAlongSpline", 0x298, "FloatProperty"},
            {"EndDistanceAlongSpline", 0x29C, "FloatProperty"},
            {"TrackSegmentIndex", 0x2A0, "IntProperty"},
        }};
    };

    struct DelMarTrackSegmentCollectionSpawnDataProvider
    {
        static constexpr std::string_view Name = "DelMarTrackSegmentCollectionSpawnDataProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DelMarTrackSegmentInterface
    {
        static constexpr std::string_view Name = "DelMarTrackSegmentInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DelMarTrackSettings
    {
        static constexpr std::string_view Name = "DelMarTrackSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeveloperSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t RootTrackTag = 0x30;
            static constexpr std::uintptr_t TagConverterData = 0x38;
            static constexpr std::uintptr_t DefaultConverterTag = 0x48;
            static constexpr std::uintptr_t HiddenTrackTag = 0x4C;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"RootTrackTag", 0x30, "StructProperty"},
            {"TagConverterData", 0x38, "ArrayProperty"},
            {"DefaultConverterTag", 0x48, "StructProperty"},
            {"HiddenTrackTag", 0x4C, "StructProperty"},
        }};
    };

    struct DelMarTrackSnapToComponent
    {
        static constexpr std::string_view Name = "DelMarTrackSnapToComponent";
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

    struct DelMarTrackSnapToSplinePointComponent
    {
        static constexpr std::string_view Name = "DelMarTrackSnapToSplinePointComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarTrackSnapToComponent";
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

    struct DelMarTrackSplineComponent
    {
        static constexpr std::string_view Name = "DelMarTrackSplineComponent";
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

    struct DelMarTrackSplineMeshSegment
    {
        static constexpr std::string_view Name = "DelMarTrackSplineMeshSegment";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarTrackSegmentBase";
        struct Offsets
        {
            static constexpr std::uintptr_t SplineMesh = 0x2A8;
            static constexpr std::uintptr_t SegmentLengthScaler = 0x2B0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SplineMesh", 0x2A8, "ObjectProperty"},
            {"SegmentLengthScaler", 0x2B0, "FloatProperty"},
        }};
    };

    struct DelMarTrackStaticMeshSegment
    {
        static constexpr std::string_view Name = "DelMarTrackStaticMeshSegment";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarTrackSegmentBase";
        struct Offsets
        {
            static constexpr std::uintptr_t StaticMeshComponent = 0x2A8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"StaticMeshComponent", 0x2A8, "ObjectProperty"},
        }};
    };

    struct DelMarTrackTubeAudioComponent
    {
        static constexpr std::string_view Name = "DelMarTrackTubeAudioComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AudioShapePrimitiveComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t Radius = 0x1E0;
            static constexpr std::uintptr_t SplineAABB = 0x1E8;
            static constexpr std::uintptr_t Spline = 0x220;
            static constexpr std::uintptr_t ParentOobTube = 0x228;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Radius", 0x1E0, "FloatProperty"},
            {"SplineAABB", 0x1E8, "StructProperty"},
            {"Spline", 0x220, "ObjectProperty"},
            {"ParentOobTube", 0x228, "ObjectProperty"},
        }};
    };

    struct DelMarTrackVariableSplineMeshSegment
    {
        static constexpr std::string_view Name = "DelMarTrackVariableSplineMeshSegment";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarTrackSplineMeshSegment";
        struct Offsets
        {
            static constexpr std::uintptr_t VariableStaticMeshes = 0x2B8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"VariableStaticMeshes", 0x2B8, "MapProperty"},
        }};
    };

    struct DelMarTrackVehiclePositionComponent
    {
        static constexpr std::string_view Name = "DelMarTrackVehiclePositionComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarTrackPositionComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t Vehicle = 0x310;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Vehicle", 0x310, "ObjectProperty"},
        }};
    };

}

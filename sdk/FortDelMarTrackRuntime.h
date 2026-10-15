/**
 * decamp dumper generated SDK
 * Package: /Script/FortDelMarTrackRuntime
 */
#pragma once
#include "Basic.h"

// /Script/FortDelMarTrackRuntime.FortDelMarClosestLocationToWorldPlaneResult
// Kind: ScriptStruct; super: none
struct FFortDelMarClosestLocationToWorldPlaneResult
{
public:
    std::uint8_t Location[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    float Key; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float DistanceToPlane; // 0x001C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortDelMarClosestLocationToWorldPlaneResult, Location) == 0, "Offset mismatch for FFortDelMarClosestLocationToWorldPlaneResult::Location");
static_assert(offsetof(FFortDelMarClosestLocationToWorldPlaneResult, Key) == 24, "Offset mismatch for FFortDelMarClosestLocationToWorldPlaneResult::Key");
static_assert(offsetof(FFortDelMarClosestLocationToWorldPlaneResult, DistanceToPlane) == 28, "Offset mismatch for FFortDelMarClosestLocationToWorldPlaneResult::DistanceToPlane");

// /Script/FortDelMarTrackRuntime.FortDelMarRotationalMinimalFrame
// Kind: ScriptStruct; super: none
struct FFortDelMarRotationalMinimalFrame
{
public:
    float InputKey; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    std::uint8_t origin[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t Tangent[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    std::uint8_t RotationAxis[0x18]; // 0x0038 (Size: 0x18, Type: StructProperty)
    std::uint8_t Normal[0x1]; // 0x0050 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortDelMarRotationalMinimalFrame, InputKey) == 0, "Offset mismatch for FFortDelMarRotationalMinimalFrame::InputKey");
static_assert(offsetof(FFortDelMarRotationalMinimalFrame, origin) == 8, "Offset mismatch for FFortDelMarRotationalMinimalFrame::origin");
static_assert(offsetof(FFortDelMarRotationalMinimalFrame, Tangent) == 32, "Offset mismatch for FFortDelMarRotationalMinimalFrame::Tangent");
static_assert(offsetof(FFortDelMarRotationalMinimalFrame, RotationAxis) == 56, "Offset mismatch for FFortDelMarRotationalMinimalFrame::RotationAxis");
static_assert(offsetof(FFortDelMarRotationalMinimalFrame, Normal) == 80, "Offset mismatch for FFortDelMarRotationalMinimalFrame::Normal");

// /Script/FortDelMarTrackRuntime.FortDelMarSegmentActorCollection
// Kind: ScriptStruct; super: none
struct FFortDelMarSegmentActorCollection
{
public:
    TArray<void*> Segments; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    void* Track; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> PropComponents; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFortDelMarSegmentActorCollection, Segments) == 0, "Offset mismatch for FFortDelMarSegmentActorCollection::Segments");
static_assert(offsetof(FFortDelMarSegmentActorCollection, Track) == 16, "Offset mismatch for FFortDelMarSegmentActorCollection::Track");
static_assert(offsetof(FFortDelMarSegmentActorCollection, PropComponents) == 24, "Offset mismatch for FFortDelMarSegmentActorCollection::PropComponents");

// /Script/FortDelMarTrackRuntime.FortDelMarSplinePointMetaData
// Kind: ScriptStruct; super: none
struct FFortDelMarSplinePointMetaData
{
public:
    std::uint8_t TrackTypeTag[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::uint8_t bUseStableRoll; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseFrontEndcap; // 0x0005 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseBackEndcap; // 0x0006 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFortDelMarSplinePointMetaData, TrackTypeTag) == 0, "Offset mismatch for FFortDelMarSplinePointMetaData::TrackTypeTag");
static_assert(offsetof(FFortDelMarSplinePointMetaData, bUseStableRoll) == 4, "Offset mismatch for FFortDelMarSplinePointMetaData::bUseStableRoll");
static_assert(offsetof(FFortDelMarSplinePointMetaData, bUseFrontEndcap) == 5, "Offset mismatch for FFortDelMarSplinePointMetaData::bUseFrontEndcap");
static_assert(offsetof(FFortDelMarSplinePointMetaData, bUseBackEndcap) == 6, "Offset mismatch for FFortDelMarSplinePointMetaData::bUseBackEndcap");

// /Script/FortDelMarTrackRuntime.FortDelMarSplineSegmentInfo
// Kind: ScriptStruct; super: none
struct FFortDelMarSplineSegmentInfo
{
public:
    std::uint8_t StartLoc[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t EndLoc[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t StartTangent[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    std::uint8_t EndTangent[0x18]; // 0x0048 (Size: 0x18, Type: StructProperty)
    std::uint8_t StartScale[0x18]; // 0x0060 (Size: 0x18, Type: StructProperty)
    std::uint8_t EndScale[0x18]; // 0x0078 (Size: 0x18, Type: StructProperty)
    std::uint8_t UpVector[0x18]; // 0x0090 (Size: 0x18, Type: StructProperty)
    float StartRoll; // 0x00A8 (Size: 0x4, Type: FloatProperty)
    float EndRoll; // 0x00AC (Size: 0x4, Type: FloatProperty)
    float StartDistance; // 0x00B0 (Size: 0x4, Type: FloatProperty)
    float EndDistance; // 0x00B4 (Size: 0x4, Type: FloatProperty)
    std::int32_t SplineIndex; // 0x00B8 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsReversed; // 0x00BC (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFortDelMarSplineSegmentInfo, StartLoc) == 0, "Offset mismatch for FFortDelMarSplineSegmentInfo::StartLoc");
static_assert(offsetof(FFortDelMarSplineSegmentInfo, EndLoc) == 24, "Offset mismatch for FFortDelMarSplineSegmentInfo::EndLoc");
static_assert(offsetof(FFortDelMarSplineSegmentInfo, StartTangent) == 48, "Offset mismatch for FFortDelMarSplineSegmentInfo::StartTangent");
static_assert(offsetof(FFortDelMarSplineSegmentInfo, EndTangent) == 72, "Offset mismatch for FFortDelMarSplineSegmentInfo::EndTangent");
static_assert(offsetof(FFortDelMarSplineSegmentInfo, StartScale) == 96, "Offset mismatch for FFortDelMarSplineSegmentInfo::StartScale");
static_assert(offsetof(FFortDelMarSplineSegmentInfo, EndScale) == 120, "Offset mismatch for FFortDelMarSplineSegmentInfo::EndScale");
static_assert(offsetof(FFortDelMarSplineSegmentInfo, UpVector) == 144, "Offset mismatch for FFortDelMarSplineSegmentInfo::UpVector");
static_assert(offsetof(FFortDelMarSplineSegmentInfo, StartRoll) == 168, "Offset mismatch for FFortDelMarSplineSegmentInfo::StartRoll");
static_assert(offsetof(FFortDelMarSplineSegmentInfo, EndRoll) == 172, "Offset mismatch for FFortDelMarSplineSegmentInfo::EndRoll");
static_assert(offsetof(FFortDelMarSplineSegmentInfo, StartDistance) == 176, "Offset mismatch for FFortDelMarSplineSegmentInfo::StartDistance");
static_assert(offsetof(FFortDelMarSplineSegmentInfo, EndDistance) == 180, "Offset mismatch for FFortDelMarSplineSegmentInfo::EndDistance");
static_assert(offsetof(FFortDelMarSplineSegmentInfo, SplineIndex) == 184, "Offset mismatch for FFortDelMarSplineSegmentInfo::SplineIndex");
static_assert(offsetof(FFortDelMarSplineSegmentInfo, bIsReversed) == 188, "Offset mismatch for FFortDelMarSplineSegmentInfo::bIsReversed");

// /Script/FortDelMarTrackRuntime.FortDelMarTrackAddedEvent
// Kind: ScriptStruct; super: none
struct FFortDelMarTrackAddedEvent
{
public:
    TWeakObjectPtr<void> Track; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FFortDelMarTrackAddedEvent, Track) == 0, "Offset mismatch for FFortDelMarTrackAddedEvent::Track");

// /Script/FortDelMarTrackRuntime.FortDelMarTrackMaterialCollectionEntry
// Kind: ScriptStruct; super: none
struct FFortDelMarTrackMaterialCollectionEntry
{
public:
    TArray<void*> MICs; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFortDelMarTrackMaterialCollectionEntry, MICs) == 0, "Offset mismatch for FFortDelMarTrackMaterialCollectionEntry::MICs");

// /Script/FortDelMarTrackRuntime.FortDelMarTrackPaletteTrackTypeEntry
// Kind: ScriptStruct; super: none
struct FFortDelMarTrackPaletteTrackTypeEntry
{
public:
    std::uint8_t StyleTag[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    TArray<void*> SegmentActors; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    void* FrontEndcap; // 0x0018 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bIsFrontEndcapReversable; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0021
    void* BackEndcap; // 0x0028 (Size: 0x8, Type: ClassProperty)
    void* WidgetImage; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FFortDelMarTrackPaletteTrackTypeEntry, StyleTag) == 0, "Offset mismatch for FFortDelMarTrackPaletteTrackTypeEntry::StyleTag");
static_assert(offsetof(FFortDelMarTrackPaletteTrackTypeEntry, SegmentActors) == 8, "Offset mismatch for FFortDelMarTrackPaletteTrackTypeEntry::SegmentActors");
static_assert(offsetof(FFortDelMarTrackPaletteTrackTypeEntry, FrontEndcap) == 24, "Offset mismatch for FFortDelMarTrackPaletteTrackTypeEntry::FrontEndcap");
static_assert(offsetof(FFortDelMarTrackPaletteTrackTypeEntry, bIsFrontEndcapReversable) == 32, "Offset mismatch for FFortDelMarTrackPaletteTrackTypeEntry::bIsFrontEndcapReversable");
static_assert(offsetof(FFortDelMarTrackPaletteTrackTypeEntry, BackEndcap) == 40, "Offset mismatch for FFortDelMarTrackPaletteTrackTypeEntry::BackEndcap");
static_assert(offsetof(FFortDelMarTrackPaletteTrackTypeEntry, WidgetImage) == 48, "Offset mismatch for FFortDelMarTrackPaletteTrackTypeEntry::WidgetImage");

// /Script/FortDelMarTrackRuntime.FortDelMarTrackPaletteTransitionEntry
// Kind: ScriptStruct; super: none
struct FFortDelMarTrackPaletteTransitionEntry
{
public:
    std::uint8_t TagA[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::uint8_t TagB[0x4]; // 0x0004 (Size: 0x4, Type: StructProperty)
    void* TRANSITION; // 0x0008 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bUseReverse; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0011
    void* Reverse; // 0x0018 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(FFortDelMarTrackPaletteTransitionEntry, TagA) == 0, "Offset mismatch for FFortDelMarTrackPaletteTransitionEntry::TagA");
static_assert(offsetof(FFortDelMarTrackPaletteTransitionEntry, TagB) == 4, "Offset mismatch for FFortDelMarTrackPaletteTransitionEntry::TagB");
static_assert(offsetof(FFortDelMarTrackPaletteTransitionEntry, TRANSITION) == 8, "Offset mismatch for FFortDelMarTrackPaletteTransitionEntry::TRANSITION");
static_assert(offsetof(FFortDelMarTrackPaletteTransitionEntry, bUseReverse) == 16, "Offset mismatch for FFortDelMarTrackPaletteTransitionEntry::bUseReverse");
static_assert(offsetof(FFortDelMarTrackPaletteTransitionEntry, Reverse) == 24, "Offset mismatch for FFortDelMarTrackPaletteTransitionEntry::Reverse");

// /Script/FortDelMarTrackRuntime.FortDelMarTrackPointDistanceRange
// Kind: ScriptStruct; super: none
struct FFortDelMarTrackPointDistanceRange
{
public:
    float BeginDistanceAlongSpline; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float EndDistanceAlongSpline; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortDelMarTrackPointDistanceRange, BeginDistanceAlongSpline) == 0, "Offset mismatch for FFortDelMarTrackPointDistanceRange::BeginDistanceAlongSpline");
static_assert(offsetof(FFortDelMarTrackPointDistanceRange, EndDistanceAlongSpline) == 4, "Offset mismatch for FFortDelMarTrackPointDistanceRange::EndDistanceAlongSpline");

// /Script/FortDelMarTrackRuntime.FortDelMarTrackPointIndexRange
// Kind: ScriptStruct; super: none
struct FFortDelMarTrackPointIndexRange
{
public:
    std::int32_t BeginPointIndex; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t EndPointIndex; // 0x0004 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FFortDelMarTrackPointIndexRange, BeginPointIndex) == 0, "Offset mismatch for FFortDelMarTrackPointIndexRange::BeginPointIndex");
static_assert(offsetof(FFortDelMarTrackPointIndexRange, EndPointIndex) == 4, "Offset mismatch for FFortDelMarTrackPointIndexRange::EndPointIndex");

// /Script/FortDelMarTrackRuntime.FortDelMarTrackProp
// Kind: ScriptStruct; super: none
struct FFortDelMarTrackProp
{
public:
    std::uint8_t SkeletalMesh[0x20]; // 0x0000 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t StaticMesh[0x20]; // 0x0020 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t Blueprint[0x20]; // 0x0040 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t PropType; // 0x0060 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FFortDelMarTrackProp, SkeletalMesh) == 0, "Offset mismatch for FFortDelMarTrackProp::SkeletalMesh");
static_assert(offsetof(FFortDelMarTrackProp, StaticMesh) == 32, "Offset mismatch for FFortDelMarTrackProp::StaticMesh");
static_assert(offsetof(FFortDelMarTrackProp, Blueprint) == 64, "Offset mismatch for FFortDelMarTrackProp::Blueprint");
static_assert(offsetof(FFortDelMarTrackProp, PropType) == 96, "Offset mismatch for FFortDelMarTrackProp::PropType");

// /Script/FortDelMarTrackRuntime.FortDelMarTrackPropSection
// Kind: ScriptStruct; super: none
struct FFortDelMarTrackPropSection
{
public:
    TArray<void*> RangesToApplyTo; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t PropToPlace[0x68]; // 0x0010 (Size: 0x68, Type: StructProperty)
    std::int32_t NumPropsToPlace; // 0x0078 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x007C
    double DistanceBetweenProps; // 0x0080 (Size: 0x8, Type: DoubleProperty)
    FName CustomizationPlacementBase; // 0x0088 (Size: 0x8, Type: NameProperty)
    double PlacementBeginPadding; // 0x0090 (Size: 0x8, Type: DoubleProperty)
    double PlacementEndPadding; // 0x0098 (Size: 0x8, Type: DoubleProperty)
    double PlacementDistanceOffset; // 0x00A0 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t PlacementScale[0x18]; // 0x00A8 (Size: 0x18, Type: StructProperty)
    std::uint8_t PlacementRotationOffset[0x18]; // 0x00C0 (Size: 0x18, Type: StructProperty)
    std::uint8_t SupportedTrackSide; // 0x00D8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t PlacementPosition; // 0x00D9 (Size: 0x1, Type: EnumProperty)
    std::uint8_t PlacementSpread; // 0x00DA (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x5]; // 0x00DB
    FString RangesToApplyToEditorString; // 0x00E0 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FFortDelMarTrackPropSection, RangesToApplyTo) == 0, "Offset mismatch for FFortDelMarTrackPropSection::RangesToApplyTo");
static_assert(offsetof(FFortDelMarTrackPropSection, PropToPlace) == 16, "Offset mismatch for FFortDelMarTrackPropSection::PropToPlace");
static_assert(offsetof(FFortDelMarTrackPropSection, NumPropsToPlace) == 120, "Offset mismatch for FFortDelMarTrackPropSection::NumPropsToPlace");
static_assert(offsetof(FFortDelMarTrackPropSection, DistanceBetweenProps) == 128, "Offset mismatch for FFortDelMarTrackPropSection::DistanceBetweenProps");
static_assert(offsetof(FFortDelMarTrackPropSection, CustomizationPlacementBase) == 136, "Offset mismatch for FFortDelMarTrackPropSection::CustomizationPlacementBase");
static_assert(offsetof(FFortDelMarTrackPropSection, PlacementBeginPadding) == 144, "Offset mismatch for FFortDelMarTrackPropSection::PlacementBeginPadding");
static_assert(offsetof(FFortDelMarTrackPropSection, PlacementEndPadding) == 152, "Offset mismatch for FFortDelMarTrackPropSection::PlacementEndPadding");
static_assert(offsetof(FFortDelMarTrackPropSection, PlacementDistanceOffset) == 160, "Offset mismatch for FFortDelMarTrackPropSection::PlacementDistanceOffset");
static_assert(offsetof(FFortDelMarTrackPropSection, PlacementScale) == 168, "Offset mismatch for FFortDelMarTrackPropSection::PlacementScale");
static_assert(offsetof(FFortDelMarTrackPropSection, PlacementRotationOffset) == 192, "Offset mismatch for FFortDelMarTrackPropSection::PlacementRotationOffset");
static_assert(offsetof(FFortDelMarTrackPropSection, SupportedTrackSide) == 216, "Offset mismatch for FFortDelMarTrackPropSection::SupportedTrackSide");
static_assert(offsetof(FFortDelMarTrackPropSection, PlacementPosition) == 217, "Offset mismatch for FFortDelMarTrackPropSection::PlacementPosition");
static_assert(offsetof(FFortDelMarTrackPropSection, PlacementSpread) == 218, "Offset mismatch for FFortDelMarTrackPropSection::PlacementSpread");
static_assert(offsetof(FFortDelMarTrackPropSection, RangesToApplyToEditorString) == 224, "Offset mismatch for FFortDelMarTrackPropSection::RangesToApplyToEditorString");

// /Script/FortDelMarTrackRuntime.FortDelMarTrackSegmentCollectionProxyData
// Kind: ScriptStruct; super: none
struct FFortDelMarTrackSegmentCollectionProxyData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortDelMarTrackRuntime.FortDelMarTrackSegmentSpawnInfo
// Kind: ScriptStruct; super: none
struct FFortDelMarTrackSegmentSpawnInfo
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortDelMarTrackRuntime.FortDelMarTrackTransformData
// Kind: ScriptStruct; super: none
struct FFortDelMarTrackTransformData
{
public:
    TWeakObjectPtr<void> Track; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0000[0x8]; // 0x0008
    std::uint8_t TrackTransform[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortDelMarTrackTransformData, Track) == 0, "Offset mismatch for FFortDelMarTrackTransformData::Track");
static_assert(offsetof(FFortDelMarTrackTransformData, TrackTransform) == 16, "Offset mismatch for FFortDelMarTrackTransformData::TrackTransform");

// /Script/FortDelMarTrackRuntime.FortDelMarTrack
// Kind: Class; super: FortDelMarTrackBase
class UFortDelMarTrack
{
public:
    std::uint8_t Pad_0000[0xB78]; // 0x0000
    std::uint8_t TrackType; // 0x0B78 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UFortDelMarTrack, TrackType) == 2936, "Offset mismatch for UFortDelMarTrack::TrackType");

// /Script/FortDelMarTrackRuntime.FortDelMarTrackBase
// Kind: Class; super: FortCreativeDeviceProp
class UFortDelMarTrackBase
{
public:
    std::uint8_t Pad_0000[0xB30]; // 0x0000
    void* TrackPalette; // 0x0B30 (Size: 0x8, Type: ObjectProperty)
    void* TrackSplinePointData; // 0x0B38 (Size: 0x8, Type: ObjectProperty)
    void* Spline; // 0x0B40 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> TrackPropData; // 0x0B48 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SegmentCollections; // 0x0B58 (Size: 0x10, Type: ArrayProperty)
    float DefaultMaxTrackWidth; // 0x0B68 (Size: 0x4, Type: FloatProperty)
    std::int32_t TotalSegmentActors; // 0x0B6C (Size: 0x4, Type: IntProperty)
    float TrackLength; // 0x0B70 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortDelMarTrackBase, TrackPalette) == 2864, "Offset mismatch for UFortDelMarTrackBase::TrackPalette");
static_assert(offsetof(UFortDelMarTrackBase, TrackSplinePointData) == 2872, "Offset mismatch for UFortDelMarTrackBase::TrackSplinePointData");
static_assert(offsetof(UFortDelMarTrackBase, Spline) == 2880, "Offset mismatch for UFortDelMarTrackBase::Spline");
static_assert(offsetof(UFortDelMarTrackBase, TrackPropData) == 2888, "Offset mismatch for UFortDelMarTrackBase::TrackPropData");
static_assert(offsetof(UFortDelMarTrackBase, SegmentCollections) == 2904, "Offset mismatch for UFortDelMarTrackBase::SegmentCollections");
static_assert(offsetof(UFortDelMarTrackBase, DefaultMaxTrackWidth) == 2920, "Offset mismatch for UFortDelMarTrackBase::DefaultMaxTrackWidth");
static_assert(offsetof(UFortDelMarTrackBase, TotalSegmentActors) == 2924, "Offset mismatch for UFortDelMarTrackBase::TotalSegmentActors");
static_assert(offsetof(UFortDelMarTrackBase, TrackLength) == 2928, "Offset mismatch for UFortDelMarTrackBase::TrackLength");

// /Script/FortDelMarTrackRuntime.FortDelMarTrackCustomizationInterface
// Kind: Class; super: Interface
class UFortDelMarTrackCustomizationInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortDelMarTrackRuntime.FortDelMarTrackManager
// Kind: Class; super: WorldSubsystem
class UFortDelMarTrackManager
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    TArray<void*> DelMarTracks; // 0x0068 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortDelMarTrackManager, DelMarTracks) == 104, "Offset mismatch for UFortDelMarTrackManager::DelMarTracks");

// /Script/FortDelMarTrackRuntime.FortDelMarTrackMatLayerComponent
// Kind: Class; super: ActorComponent
class UFortDelMarTrackMatLayerComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TWeakObjectPtr<void> RoadMesh; // 0x00C0 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> Track; // 0x00C8 (Size: 0x8, Type: WeakObjectProperty)
    void* MaterialCollection; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortDelMarTrackMatLayerComponent, RoadMesh) == 192, "Offset mismatch for UFortDelMarTrackMatLayerComponent::RoadMesh");
static_assert(offsetof(UFortDelMarTrackMatLayerComponent, Track) == 200, "Offset mismatch for UFortDelMarTrackMatLayerComponent::Track");
static_assert(offsetof(UFortDelMarTrackMatLayerComponent, MaterialCollection) == 208, "Offset mismatch for UFortDelMarTrackMatLayerComponent::MaterialCollection");

// /Script/FortDelMarTrackRuntime.FortDelMarTrackMaterialCollection
// Kind: Class; super: DataAsset
class UFortDelMarTrackMaterialCollection
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint32_t SelectedIndex; // 0x0028 (Size: 0x4, Type: UInt32Property)
    std::uint8_t Pad_0001[0x4]; // 0x002C
    TArray<void*> Materials; // 0x0030 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortDelMarTrackMaterialCollection, SelectedIndex) == 40, "Offset mismatch for UFortDelMarTrackMaterialCollection::SelectedIndex");
static_assert(offsetof(UFortDelMarTrackMaterialCollection, Materials) == 48, "Offset mismatch for UFortDelMarTrackMaterialCollection::Materials");

// /Script/FortDelMarTrackRuntime.FortDelMarTrackPaletteTheme
// Kind: Class; super: DataAsset
class UFortDelMarTrackPaletteTheme
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    FName ThemeName; // 0x0030 (Size: 0x8, Type: NameProperty)
    FString ThemeDescription; // 0x0038 (Size: 0x10, Type: StrProperty)
    TArray<void*> Tracks; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    void* Transitions; // 0x0058 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortDelMarTrackPaletteTheme, ThemeName) == 48, "Offset mismatch for UFortDelMarTrackPaletteTheme::ThemeName");
static_assert(offsetof(UFortDelMarTrackPaletteTheme, ThemeDescription) == 56, "Offset mismatch for UFortDelMarTrackPaletteTheme::ThemeDescription");
static_assert(offsetof(UFortDelMarTrackPaletteTheme, Tracks) == 72, "Offset mismatch for UFortDelMarTrackPaletteTheme::Tracks");
static_assert(offsetof(UFortDelMarTrackPaletteTheme, Transitions) == 88, "Offset mismatch for UFortDelMarTrackPaletteTheme::Transitions");

// /Script/FortDelMarTrackRuntime.FortDelMarTrackPaletteTrackType
// Kind: Class; super: DataAsset
class UFortDelMarTrackPaletteTrackType
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> StyleArray; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortDelMarTrackPaletteTrackType, StyleArray) == 40, "Offset mismatch for UFortDelMarTrackPaletteTrackType::StyleArray");

// /Script/FortDelMarTrackRuntime.FortDelMarTrackPaletteTransitions
// Kind: Class; super: DataAsset
class UFortDelMarTrackPaletteTransitions
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> TransitionArray; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortDelMarTrackPaletteTransitions, TransitionArray) == 40, "Offset mismatch for UFortDelMarTrackPaletteTransitions::TransitionArray");

// /Script/FortDelMarTrackRuntime.FortDelMarTrackPointData
// Kind: Class; super: SplineMetadata
class UFortDelMarTrackPointData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> MetaData; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    void* Spline; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortDelMarTrackPointData, MetaData) == 40, "Offset mismatch for UFortDelMarTrackPointData::MetaData");
static_assert(offsetof(UFortDelMarTrackPointData, Spline) == 56, "Offset mismatch for UFortDelMarTrackPointData::Spline");

// /Script/FortDelMarTrackRuntime.FortDelMarTrackSegmentBase
// Kind: Class; super: Actor
class UFortDelMarTrackSegmentBase
{
public:
    std::uint8_t Pad_0000[0x278]; // 0x0000
    std::uint8_t bIgnoreSplineLength; // 0x0278 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0279
    TWeakObjectPtr<void> Track; // 0x027C (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0284
    void* MaterialLayerComponent; // 0x0288 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Info[0x1]; // 0x0290 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortDelMarTrackSegmentBase, bIgnoreSplineLength) == 632, "Offset mismatch for UFortDelMarTrackSegmentBase::bIgnoreSplineLength");
static_assert(offsetof(UFortDelMarTrackSegmentBase, Track) == 636, "Offset mismatch for UFortDelMarTrackSegmentBase::Track");
static_assert(offsetof(UFortDelMarTrackSegmentBase, MaterialLayerComponent) == 648, "Offset mismatch for UFortDelMarTrackSegmentBase::MaterialLayerComponent");
static_assert(offsetof(UFortDelMarTrackSegmentBase, Info) == 656, "Offset mismatch for UFortDelMarTrackSegmentBase::Info");

// /Script/FortDelMarTrackRuntime.FortDelMarTrackSegmentCollectionSpawnDataProvider
// Kind: Class; super: Interface
class UFortDelMarTrackSegmentCollectionSpawnDataProvider
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortDelMarTrackRuntime.FortDelMarTrackSegmentInterface
// Kind: Class; super: Interface
class UFortDelMarTrackSegmentInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortDelMarTrackRuntime.FortDelMarTrackSettings
// Kind: Class; super: DeveloperSettings
class UFortDelMarTrackSettings
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t RootTrackTag[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortDelMarTrackSettings, RootTrackTag) == 48, "Offset mismatch for UFortDelMarTrackSettings::RootTrackTag");

// /Script/FortDelMarTrackRuntime.FortDelMarTrackSnapToComponent
// Kind: Class; super: SceneComponent
class UFortDelMarTrackSnapToComponent
{
public:
    std::uint8_t Pad_0000[0x240]; // 0x0000
    std::uint8_t OffsetToOwnerActor[0x1]; // 0x0240 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortDelMarTrackSnapToComponent, OffsetToOwnerActor) == 576, "Offset mismatch for UFortDelMarTrackSnapToComponent::OffsetToOwnerActor");

// /Script/FortDelMarTrackRuntime.FortDelMarTrackSnapToSplinePointComponent
// Kind: Class; super: FortDelMarTrackSnapToComponent
class UFortDelMarTrackSnapToSplinePointComponent
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    void* SplineToSnapTo; // 0x0270 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t SplinePointSnapMode; // 0x0278 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0279
    std::int32_t SplinePointIndexToSnapTo; // 0x027C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UFortDelMarTrackSnapToSplinePointComponent, SplineToSnapTo) == 624, "Offset mismatch for UFortDelMarTrackSnapToSplinePointComponent::SplineToSnapTo");
static_assert(offsetof(UFortDelMarTrackSnapToSplinePointComponent, SplinePointSnapMode) == 632, "Offset mismatch for UFortDelMarTrackSnapToSplinePointComponent::SplinePointSnapMode");
static_assert(offsetof(UFortDelMarTrackSnapToSplinePointComponent, SplinePointIndexToSnapTo) == 636, "Offset mismatch for UFortDelMarTrackSnapToSplinePointComponent::SplinePointIndexToSnapTo");

// /Script/FortDelMarTrackRuntime.FortDelMarTrackSplineComponent
// Kind: Class; super: SplineComponent
class UFortDelMarTrackSplineComponent
{
public:
    std::uint8_t Pad_0000[0x6D0]; // 0x0000
    std::int32_t WorldPlaneLookupSubsteps; // 0x06D0 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x94]; // 0x06D4
    TArray<void*> RotationalMinimalFrameNormals; // 0x0768 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortDelMarTrackSplineComponent, WorldPlaneLookupSubsteps) == 1744, "Offset mismatch for UFortDelMarTrackSplineComponent::WorldPlaneLookupSubsteps");
static_assert(offsetof(UFortDelMarTrackSplineComponent, RotationalMinimalFrameNormals) == 1896, "Offset mismatch for UFortDelMarTrackSplineComponent::RotationalMinimalFrameNormals");

// /Script/FortDelMarTrackRuntime.FortDelMarTrackSplineMeshSegment
// Kind: Class; super: FortDelMarTrackSegmentBase
class UFortDelMarTrackSplineMeshSegment
{
public:
    std::uint8_t Pad_0000[0x358]; // 0x0000
    void* SplineMesh; // 0x0358 (Size: 0x8, Type: ObjectProperty)
    float SegmentLengthScaler; // 0x0360 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortDelMarTrackSplineMeshSegment, SplineMesh) == 856, "Offset mismatch for UFortDelMarTrackSplineMeshSegment::SplineMesh");
static_assert(offsetof(UFortDelMarTrackSplineMeshSegment, SegmentLengthScaler) == 864, "Offset mismatch for UFortDelMarTrackSplineMeshSegment::SegmentLengthScaler");

// /Script/FortDelMarTrackRuntime.FortDelMarTrackStaticMeshSegment
// Kind: Class; super: FortDelMarTrackSegmentBase
class UFortDelMarTrackStaticMeshSegment
{
public:
    std::uint8_t Pad_0000[0x358]; // 0x0000
    void* StaticMeshComponent; // 0x0358 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortDelMarTrackStaticMeshSegment, StaticMeshComponent) == 856, "Offset mismatch for UFortDelMarTrackStaticMeshSegment::StaticMeshComponent");

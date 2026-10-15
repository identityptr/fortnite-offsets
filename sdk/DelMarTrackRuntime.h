/**
 * decamp dumper generated SDK
 * Package: /Script/DelMarTrackRuntime
 */
#pragma once
#include "Basic.h"

// /Script/DelMarTrackRuntime.ClosestLocationToWorldPlaneResult
// Kind: ScriptStruct; super: none
struct FClosestLocationToWorldPlaneResult
{
public:
    std::uint8_t Location[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    float Key; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float DistanceToPlane; // 0x001C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FClosestLocationToWorldPlaneResult, Location) == 0, "Offset mismatch for FClosestLocationToWorldPlaneResult::Location");
static_assert(offsetof(FClosestLocationToWorldPlaneResult, Key) == 24, "Offset mismatch for FClosestLocationToWorldPlaneResult::Key");
static_assert(offsetof(FClosestLocationToWorldPlaneResult, DistanceToPlane) == 28, "Offset mismatch for FClosestLocationToWorldPlaneResult::DistanceToPlane");

// /Script/DelMarTrackRuntime.DelMarRotationalMinimalFrame
// Kind: ScriptStruct; super: none
struct FDelMarRotationalMinimalFrame
{
public:
    float InputKey; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    std::uint8_t origin[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t Tangent[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    std::uint8_t RotationAxis[0x18]; // 0x0038 (Size: 0x18, Type: StructProperty)
    std::uint8_t Normal[0x1]; // 0x0050 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDelMarRotationalMinimalFrame, InputKey) == 0, "Offset mismatch for FDelMarRotationalMinimalFrame::InputKey");
static_assert(offsetof(FDelMarRotationalMinimalFrame, origin) == 8, "Offset mismatch for FDelMarRotationalMinimalFrame::origin");
static_assert(offsetof(FDelMarRotationalMinimalFrame, Tangent) == 32, "Offset mismatch for FDelMarRotationalMinimalFrame::Tangent");
static_assert(offsetof(FDelMarRotationalMinimalFrame, RotationAxis) == 56, "Offset mismatch for FDelMarRotationalMinimalFrame::RotationAxis");
static_assert(offsetof(FDelMarRotationalMinimalFrame, Normal) == 80, "Offset mismatch for FDelMarRotationalMinimalFrame::Normal");

// /Script/DelMarTrackRuntime.DelMarSegmentActorCollection
// Kind: ScriptStruct; super: none
struct FDelMarSegmentActorCollection
{
public:
    TArray<void*> Segments; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    void* Track; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> PropComponents; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FDelMarSegmentActorCollection, Segments) == 0, "Offset mismatch for FDelMarSegmentActorCollection::Segments");
static_assert(offsetof(FDelMarSegmentActorCollection, Track) == 16, "Offset mismatch for FDelMarSegmentActorCollection::Track");
static_assert(offsetof(FDelMarSegmentActorCollection, PropComponents) == 24, "Offset mismatch for FDelMarSegmentActorCollection::PropComponents");

// /Script/DelMarTrackRuntime.DelMarSplinePointMetaData
// Kind: ScriptStruct; super: none
struct FDelMarSplinePointMetaData
{
public:
    std::uint8_t TrackTypeTag[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    float TrackRadius; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bForceValidTrack; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseStableRoll; // 0x0009 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseFrontEndcap; // 0x000A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseBackEndcap; // 0x000B (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x4]; // 0x000C
    std::uint8_t SegmentClass[0x20]; // 0x0010 (Size: 0x20, Type: SoftClassProperty)
    TMap<void*, void*> EnabledMeshCustomizations; // 0x0030 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FDelMarSplinePointMetaData, TrackTypeTag) == 0, "Offset mismatch for FDelMarSplinePointMetaData::TrackTypeTag");
static_assert(offsetof(FDelMarSplinePointMetaData, TrackRadius) == 4, "Offset mismatch for FDelMarSplinePointMetaData::TrackRadius");
static_assert(offsetof(FDelMarSplinePointMetaData, bForceValidTrack) == 8, "Offset mismatch for FDelMarSplinePointMetaData::bForceValidTrack");
static_assert(offsetof(FDelMarSplinePointMetaData, bUseStableRoll) == 9, "Offset mismatch for FDelMarSplinePointMetaData::bUseStableRoll");
static_assert(offsetof(FDelMarSplinePointMetaData, bUseFrontEndcap) == 10, "Offset mismatch for FDelMarSplinePointMetaData::bUseFrontEndcap");
static_assert(offsetof(FDelMarSplinePointMetaData, bUseBackEndcap) == 11, "Offset mismatch for FDelMarSplinePointMetaData::bUseBackEndcap");
static_assert(offsetof(FDelMarSplinePointMetaData, SegmentClass) == 16, "Offset mismatch for FDelMarSplinePointMetaData::SegmentClass");
static_assert(offsetof(FDelMarSplinePointMetaData, EnabledMeshCustomizations) == 48, "Offset mismatch for FDelMarSplinePointMetaData::EnabledMeshCustomizations");

// /Script/DelMarTrackRuntime.DelMarSplineSegmentInfo
// Kind: ScriptStruct; super: none
struct FDelMarSplineSegmentInfo
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DelMarTrackRuntime.DelMarTrackAddedEvent
// Kind: ScriptStruct; super: none
struct FDelMarTrackAddedEvent
{
public:
    TWeakObjectPtr<void> Track; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FDelMarTrackAddedEvent, Track) == 0, "Offset mismatch for FDelMarTrackAddedEvent::Track");

// /Script/DelMarTrackRuntime.DelMarTrackCapEntry
// Kind: ScriptStruct; super: none
struct FDelMarTrackCapEntry
{
public:
    std::uint8_t Tag[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t StartCap[0x20]; // 0x0008 (Size: 0x20, Type: SoftClassProperty)
    TSoftClassPtr<void> EndCap; // 0x0028 (Size: 0x28, Type: SoftClassProperty)
};

static_assert(offsetof(FDelMarTrackCapEntry, Tag) == 0, "Offset mismatch for FDelMarTrackCapEntry::Tag");
static_assert(offsetof(FDelMarTrackCapEntry, StartCap) == 8, "Offset mismatch for FDelMarTrackCapEntry::StartCap");
static_assert(offsetof(FDelMarTrackCapEntry, EndCap) == 40, "Offset mismatch for FDelMarTrackCapEntry::EndCap");

// /Script/DelMarTrackRuntime.DelMarTrackMaterialCollectionEntry
// Kind: ScriptStruct; super: none
struct FDelMarTrackMaterialCollectionEntry
{
public:
    TArray<void*> MICs; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FDelMarTrackMaterialCollectionEntry, MICs) == 0, "Offset mismatch for FDelMarTrackMaterialCollectionEntry::MICs");

// /Script/DelMarTrackRuntime.DelMarTrackOobTubeMeshSection
// Kind: ScriptStruct; super: none
struct FDelMarTrackOobTubeMeshSection
{
public:
    void* TubeMesh; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::int32_t PointIndex; // 0x0008 (Size: 0x4, Type: IntProperty)
    float StartDistanceAlongSpline; // 0x000C (Size: 0x4, Type: FloatProperty)
    float EndDistanceAlongSpline; // 0x0010 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDelMarTrackOobTubeMeshSection, TubeMesh) == 0, "Offset mismatch for FDelMarTrackOobTubeMeshSection::TubeMesh");
static_assert(offsetof(FDelMarTrackOobTubeMeshSection, PointIndex) == 8, "Offset mismatch for FDelMarTrackOobTubeMeshSection::PointIndex");
static_assert(offsetof(FDelMarTrackOobTubeMeshSection, StartDistanceAlongSpline) == 12, "Offset mismatch for FDelMarTrackOobTubeMeshSection::StartDistanceAlongSpline");
static_assert(offsetof(FDelMarTrackOobTubeMeshSection, EndDistanceAlongSpline) == 16, "Offset mismatch for FDelMarTrackOobTubeMeshSection::EndDistanceAlongSpline");

// /Script/DelMarTrackRuntime.DelMarTrackOobTubePointMetaData
// Kind: ScriptStruct; super: none
struct FDelMarTrackOobTubePointMetaData
{
public:
    std::uint8_t LocationOffset[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t ScaleOffset[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::int32_t NumSubsections; // 0x0020 (Size: 0x4, Type: IntProperty)
    std::uint8_t bShouldGenerateTube; // 0x0024 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldMirrorAttachedTrackPoint; // 0x0025 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIgnoreAutoTransitionScaling; // 0x0026 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FDelMarTrackOobTubePointMetaData, LocationOffset) == 0, "Offset mismatch for FDelMarTrackOobTubePointMetaData::LocationOffset");
static_assert(offsetof(FDelMarTrackOobTubePointMetaData, ScaleOffset) == 16, "Offset mismatch for FDelMarTrackOobTubePointMetaData::ScaleOffset");
static_assert(offsetof(FDelMarTrackOobTubePointMetaData, NumSubsections) == 32, "Offset mismatch for FDelMarTrackOobTubePointMetaData::NumSubsections");
static_assert(offsetof(FDelMarTrackOobTubePointMetaData, bShouldGenerateTube) == 36, "Offset mismatch for FDelMarTrackOobTubePointMetaData::bShouldGenerateTube");
static_assert(offsetof(FDelMarTrackOobTubePointMetaData, bShouldMirrorAttachedTrackPoint) == 37, "Offset mismatch for FDelMarTrackOobTubePointMetaData::bShouldMirrorAttachedTrackPoint");
static_assert(offsetof(FDelMarTrackOobTubePointMetaData, bIgnoreAutoTransitionScaling) == 38, "Offset mismatch for FDelMarTrackOobTubePointMetaData::bIgnoreAutoTransitionScaling");

// /Script/DelMarTrackRuntime.DelMarTrackPaletteEntry
// Kind: ScriptStruct; super: none
struct FDelMarTrackPaletteEntry
{
public:
    std::uint8_t TrackTypeTag[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t TrackSegmentClass[0x20]; // 0x0008 (Size: 0x20, Type: SoftClassProperty)
    TArray<void*> MeshCustomizations; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    FString Title; // 0x0038 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FDelMarTrackPaletteEntry, TrackTypeTag) == 0, "Offset mismatch for FDelMarTrackPaletteEntry::TrackTypeTag");
static_assert(offsetof(FDelMarTrackPaletteEntry, TrackSegmentClass) == 8, "Offset mismatch for FDelMarTrackPaletteEntry::TrackSegmentClass");
static_assert(offsetof(FDelMarTrackPaletteEntry, MeshCustomizations) == 40, "Offset mismatch for FDelMarTrackPaletteEntry::MeshCustomizations");
static_assert(offsetof(FDelMarTrackPaletteEntry, Title) == 56, "Offset mismatch for FDelMarTrackPaletteEntry::Title");

// /Script/DelMarTrackRuntime.DelMarTrackPaletteTrackTypeEntry
// Kind: ScriptStruct; super: none
struct FDelMarTrackPaletteTrackTypeEntry
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

static_assert(offsetof(FDelMarTrackPaletteTrackTypeEntry, StyleTag) == 0, "Offset mismatch for FDelMarTrackPaletteTrackTypeEntry::StyleTag");
static_assert(offsetof(FDelMarTrackPaletteTrackTypeEntry, SegmentActors) == 8, "Offset mismatch for FDelMarTrackPaletteTrackTypeEntry::SegmentActors");
static_assert(offsetof(FDelMarTrackPaletteTrackTypeEntry, FrontEndcap) == 24, "Offset mismatch for FDelMarTrackPaletteTrackTypeEntry::FrontEndcap");
static_assert(offsetof(FDelMarTrackPaletteTrackTypeEntry, bIsFrontEndcapReversable) == 32, "Offset mismatch for FDelMarTrackPaletteTrackTypeEntry::bIsFrontEndcapReversable");
static_assert(offsetof(FDelMarTrackPaletteTrackTypeEntry, BackEndcap) == 40, "Offset mismatch for FDelMarTrackPaletteTrackTypeEntry::BackEndcap");
static_assert(offsetof(FDelMarTrackPaletteTrackTypeEntry, WidgetImage) == 48, "Offset mismatch for FDelMarTrackPaletteTrackTypeEntry::WidgetImage");

// /Script/DelMarTrackRuntime.DelMarTrackPaletteTransitionEntry
// Kind: ScriptStruct; super: none
struct FDelMarTrackPaletteTransitionEntry
{
public:
    std::uint8_t TypeA[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::uint8_t TypeB[0x4]; // 0x0004 (Size: 0x4, Type: StructProperty)
    std::uint8_t AtoB[0x20]; // 0x0008 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t BtoA[0x20]; // 0x0028 (Size: 0x20, Type: SoftClassProperty)
    FString Title; // 0x0048 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FDelMarTrackPaletteTransitionEntry, TypeA) == 0, "Offset mismatch for FDelMarTrackPaletteTransitionEntry::TypeA");
static_assert(offsetof(FDelMarTrackPaletteTransitionEntry, TypeB) == 4, "Offset mismatch for FDelMarTrackPaletteTransitionEntry::TypeB");
static_assert(offsetof(FDelMarTrackPaletteTransitionEntry, AtoB) == 8, "Offset mismatch for FDelMarTrackPaletteTransitionEntry::AtoB");
static_assert(offsetof(FDelMarTrackPaletteTransitionEntry, BtoA) == 40, "Offset mismatch for FDelMarTrackPaletteTransitionEntry::BtoA");
static_assert(offsetof(FDelMarTrackPaletteTransitionEntry, Title) == 72, "Offset mismatch for FDelMarTrackPaletteTransitionEntry::Title");

// /Script/DelMarTrackRuntime.DelMarTrackPaletteTransitionEntry_v2
// Kind: ScriptStruct; super: none
struct FDelMarTrackPaletteTransitionEntry_v2
{
public:
    std::uint8_t TagA[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::uint8_t TagB[0x4]; // 0x0004 (Size: 0x4, Type: StructProperty)
    void* TRANSITION; // 0x0008 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bUseReverse; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0011
    void* Reverse; // 0x0018 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bEnableOOBTubeTransitions; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0021
    void* OOBTubeTransitionMesh; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bOverrideReverseOOBTubeMesh; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0031
    void* ReverseOOBTubeTransitionMesh; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FDelMarTrackPaletteTransitionEntry_v2, TagA) == 0, "Offset mismatch for FDelMarTrackPaletteTransitionEntry_v2::TagA");
static_assert(offsetof(FDelMarTrackPaletteTransitionEntry_v2, TagB) == 4, "Offset mismatch for FDelMarTrackPaletteTransitionEntry_v2::TagB");
static_assert(offsetof(FDelMarTrackPaletteTransitionEntry_v2, TRANSITION) == 8, "Offset mismatch for FDelMarTrackPaletteTransitionEntry_v2::TRANSITION");
static_assert(offsetof(FDelMarTrackPaletteTransitionEntry_v2, bUseReverse) == 16, "Offset mismatch for FDelMarTrackPaletteTransitionEntry_v2::bUseReverse");
static_assert(offsetof(FDelMarTrackPaletteTransitionEntry_v2, Reverse) == 24, "Offset mismatch for FDelMarTrackPaletteTransitionEntry_v2::Reverse");
static_assert(offsetof(FDelMarTrackPaletteTransitionEntry_v2, bEnableOOBTubeTransitions) == 32, "Offset mismatch for FDelMarTrackPaletteTransitionEntry_v2::bEnableOOBTubeTransitions");
static_assert(offsetof(FDelMarTrackPaletteTransitionEntry_v2, OOBTubeTransitionMesh) == 40, "Offset mismatch for FDelMarTrackPaletteTransitionEntry_v2::OOBTubeTransitionMesh");
static_assert(offsetof(FDelMarTrackPaletteTransitionEntry_v2, bOverrideReverseOOBTubeMesh) == 48, "Offset mismatch for FDelMarTrackPaletteTransitionEntry_v2::bOverrideReverseOOBTubeMesh");
static_assert(offsetof(FDelMarTrackPaletteTransitionEntry_v2, ReverseOOBTubeTransitionMesh) == 56, "Offset mismatch for FDelMarTrackPaletteTransitionEntry_v2::ReverseOOBTubeTransitionMesh");

// /Script/DelMarTrackRuntime.DelMarTrackPointDistanceRange
// Kind: ScriptStruct; super: none
struct FDelMarTrackPointDistanceRange
{
public:
    float BeginDistanceAlongSpline; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float EndDistanceAlongSpline; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDelMarTrackPointDistanceRange, BeginDistanceAlongSpline) == 0, "Offset mismatch for FDelMarTrackPointDistanceRange::BeginDistanceAlongSpline");
static_assert(offsetof(FDelMarTrackPointDistanceRange, EndDistanceAlongSpline) == 4, "Offset mismatch for FDelMarTrackPointDistanceRange::EndDistanceAlongSpline");

// /Script/DelMarTrackRuntime.DelMarTrackPointIndexRange
// Kind: ScriptStruct; super: none
struct FDelMarTrackPointIndexRange
{
public:
    std::int32_t BeginPointIndex; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t EndPointIndex; // 0x0004 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FDelMarTrackPointIndexRange, BeginPointIndex) == 0, "Offset mismatch for FDelMarTrackPointIndexRange::BeginPointIndex");
static_assert(offsetof(FDelMarTrackPointIndexRange, EndPointIndex) == 4, "Offset mismatch for FDelMarTrackPointIndexRange::EndPointIndex");

// /Script/DelMarTrackRuntime.DelMarTrackProp
// Kind: ScriptStruct; super: none
struct FDelMarTrackProp
{
public:
    std::uint8_t SkeletalMesh[0x20]; // 0x0000 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t StaticMesh[0x20]; // 0x0020 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t Blueprint[0x20]; // 0x0040 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t PropType; // 0x0060 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FDelMarTrackProp, SkeletalMesh) == 0, "Offset mismatch for FDelMarTrackProp::SkeletalMesh");
static_assert(offsetof(FDelMarTrackProp, StaticMesh) == 32, "Offset mismatch for FDelMarTrackProp::StaticMesh");
static_assert(offsetof(FDelMarTrackProp, Blueprint) == 64, "Offset mismatch for FDelMarTrackProp::Blueprint");
static_assert(offsetof(FDelMarTrackProp, PropType) == 96, "Offset mismatch for FDelMarTrackProp::PropType");

// /Script/DelMarTrackRuntime.DelMarTrackPropSection
// Kind: ScriptStruct; super: none
struct FDelMarTrackPropSection
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

static_assert(offsetof(FDelMarTrackPropSection, RangesToApplyTo) == 0, "Offset mismatch for FDelMarTrackPropSection::RangesToApplyTo");
static_assert(offsetof(FDelMarTrackPropSection, PropToPlace) == 16, "Offset mismatch for FDelMarTrackPropSection::PropToPlace");
static_assert(offsetof(FDelMarTrackPropSection, NumPropsToPlace) == 120, "Offset mismatch for FDelMarTrackPropSection::NumPropsToPlace");
static_assert(offsetof(FDelMarTrackPropSection, DistanceBetweenProps) == 128, "Offset mismatch for FDelMarTrackPropSection::DistanceBetweenProps");
static_assert(offsetof(FDelMarTrackPropSection, CustomizationPlacementBase) == 136, "Offset mismatch for FDelMarTrackPropSection::CustomizationPlacementBase");
static_assert(offsetof(FDelMarTrackPropSection, PlacementBeginPadding) == 144, "Offset mismatch for FDelMarTrackPropSection::PlacementBeginPadding");
static_assert(offsetof(FDelMarTrackPropSection, PlacementEndPadding) == 152, "Offset mismatch for FDelMarTrackPropSection::PlacementEndPadding");
static_assert(offsetof(FDelMarTrackPropSection, PlacementDistanceOffset) == 160, "Offset mismatch for FDelMarTrackPropSection::PlacementDistanceOffset");
static_assert(offsetof(FDelMarTrackPropSection, PlacementScale) == 168, "Offset mismatch for FDelMarTrackPropSection::PlacementScale");
static_assert(offsetof(FDelMarTrackPropSection, PlacementRotationOffset) == 192, "Offset mismatch for FDelMarTrackPropSection::PlacementRotationOffset");
static_assert(offsetof(FDelMarTrackPropSection, SupportedTrackSide) == 216, "Offset mismatch for FDelMarTrackPropSection::SupportedTrackSide");
static_assert(offsetof(FDelMarTrackPropSection, PlacementPosition) == 217, "Offset mismatch for FDelMarTrackPropSection::PlacementPosition");
static_assert(offsetof(FDelMarTrackPropSection, PlacementSpread) == 218, "Offset mismatch for FDelMarTrackPropSection::PlacementSpread");
static_assert(offsetof(FDelMarTrackPropSection, RangesToApplyToEditorString) == 224, "Offset mismatch for FDelMarTrackPropSection::RangesToApplyToEditorString");

// /Script/DelMarTrackRuntime.DelMarTrackSegmentCollectionProxyData
// Kind: ScriptStruct; super: none
struct FDelMarTrackSegmentCollectionProxyData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DelMarTrackRuntime.DelMarTrackSegmentSpawnInfo
// Kind: ScriptStruct; super: none
struct FDelMarTrackSegmentSpawnInfo
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DelMarTrackRuntime.DelMarTrackTagConverterData
// Kind: ScriptStruct; super: none
struct FDelMarTrackTagConverterData
{
public:
    std::uint8_t v1Tag[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::uint8_t bCheckCustomizations; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bNeedRightRail; // 0x0005 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bNeedLeftRail; // 0x0006 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x1]; // 0x0007
    std::uint8_t v2Tag[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDelMarTrackTagConverterData, v1Tag) == 0, "Offset mismatch for FDelMarTrackTagConverterData::v1Tag");
static_assert(offsetof(FDelMarTrackTagConverterData, bCheckCustomizations) == 4, "Offset mismatch for FDelMarTrackTagConverterData::bCheckCustomizations");
static_assert(offsetof(FDelMarTrackTagConverterData, bNeedRightRail) == 5, "Offset mismatch for FDelMarTrackTagConverterData::bNeedRightRail");
static_assert(offsetof(FDelMarTrackTagConverterData, bNeedLeftRail) == 6, "Offset mismatch for FDelMarTrackTagConverterData::bNeedLeftRail");
static_assert(offsetof(FDelMarTrackTagConverterData, v2Tag) == 8, "Offset mismatch for FDelMarTrackTagConverterData::v2Tag");

// /Script/DelMarTrackRuntime.DelMarTrackTransformData
// Kind: ScriptStruct; super: none
struct FDelMarTrackTransformData
{
public:
    TWeakObjectPtr<void> Track; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0000[0x8]; // 0x0008
    std::uint8_t TrackTransform[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDelMarTrackTransformData, Track) == 0, "Offset mismatch for FDelMarTrackTransformData::Track");
static_assert(offsetof(FDelMarTrackTransformData, TrackTransform) == 16, "Offset mismatch for FDelMarTrackTransformData::TrackTransform");

// /Script/DelMarTrackRuntime.TrackPosition
// Kind: ScriptStruct; super: none
struct FTrackPosition
{
public:
    void* Track; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    float DistanceAlongSpline; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float RawDistanceAlongSpline; // 0x000C (Size: 0x4, Type: FloatProperty)
    float DistanceToVehicleSquared; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float LastKnownGoodDistance; // 0x0014 (Size: 0x4, Type: FloatProperty)
    std::int32_t SegmentIndex; // 0x0018 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsValid; // 0x001C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FTrackPosition, Track) == 0, "Offset mismatch for FTrackPosition::Track");
static_assert(offsetof(FTrackPosition, DistanceAlongSpline) == 8, "Offset mismatch for FTrackPosition::DistanceAlongSpline");
static_assert(offsetof(FTrackPosition, RawDistanceAlongSpline) == 12, "Offset mismatch for FTrackPosition::RawDistanceAlongSpline");
static_assert(offsetof(FTrackPosition, DistanceToVehicleSquared) == 16, "Offset mismatch for FTrackPosition::DistanceToVehicleSquared");
static_assert(offsetof(FTrackPosition, LastKnownGoodDistance) == 20, "Offset mismatch for FTrackPosition::LastKnownGoodDistance");
static_assert(offsetof(FTrackPosition, SegmentIndex) == 24, "Offset mismatch for FTrackPosition::SegmentIndex");
static_assert(offsetof(FTrackPosition, bIsValid) == 28, "Offset mismatch for FTrackPosition::bIsValid");

// /Script/DelMarTrackRuntime.DelMarTrack
// Kind: Class; super: DelMarTrackBase
class UDelMarTrack
{
public:
    std::uint8_t Pad_0000[0xBA8]; // 0x0000
    std::uint8_t TrackType; // 0x0BA8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bIsIndependent; // 0x0BA9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUserSelectedStartTrack; // 0x0BAA (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x5]; // 0x0BAB
    void* StartTrackConnection; // 0x0BB0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bUserSelectedEndTrack; // 0x0BB8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0BB9
    void* EndTrackConnection; // 0x0BC0 (Size: 0x8, Type: ObjectProperty)
    float ParentStartDistance; // 0x0BC8 (Size: 0x4, Type: FloatProperty)
    float ParentEndDistance; // 0x0BCC (Size: 0x4, Type: FloatProperty)
    float PrimaryStartDistance; // 0x0BD0 (Size: 0x4, Type: FloatProperty)
    float PrimaryEndDistance; // 0x0BD4 (Size: 0x4, Type: FloatProperty)
    float PrimarySegmentLength; // 0x0BD8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0003[0x4]; // 0x0BDC
    void* OobTubeClass; // 0x0BE0 (Size: 0x8, Type: ClassProperty)
    TWeakObjectPtr<void> AttachedOobTube; // 0x0BE8 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UDelMarTrack, TrackType) == 2984, "Offset mismatch for UDelMarTrack::TrackType");
static_assert(offsetof(UDelMarTrack, bIsIndependent) == 2985, "Offset mismatch for UDelMarTrack::bIsIndependent");
static_assert(offsetof(UDelMarTrack, bUserSelectedStartTrack) == 2986, "Offset mismatch for UDelMarTrack::bUserSelectedStartTrack");
static_assert(offsetof(UDelMarTrack, StartTrackConnection) == 2992, "Offset mismatch for UDelMarTrack::StartTrackConnection");
static_assert(offsetof(UDelMarTrack, bUserSelectedEndTrack) == 3000, "Offset mismatch for UDelMarTrack::bUserSelectedEndTrack");
static_assert(offsetof(UDelMarTrack, EndTrackConnection) == 3008, "Offset mismatch for UDelMarTrack::EndTrackConnection");
static_assert(offsetof(UDelMarTrack, ParentStartDistance) == 3016, "Offset mismatch for UDelMarTrack::ParentStartDistance");
static_assert(offsetof(UDelMarTrack, ParentEndDistance) == 3020, "Offset mismatch for UDelMarTrack::ParentEndDistance");
static_assert(offsetof(UDelMarTrack, PrimaryStartDistance) == 3024, "Offset mismatch for UDelMarTrack::PrimaryStartDistance");
static_assert(offsetof(UDelMarTrack, PrimaryEndDistance) == 3028, "Offset mismatch for UDelMarTrack::PrimaryEndDistance");
static_assert(offsetof(UDelMarTrack, PrimarySegmentLength) == 3032, "Offset mismatch for UDelMarTrack::PrimarySegmentLength");
static_assert(offsetof(UDelMarTrack, OobTubeClass) == 3040, "Offset mismatch for UDelMarTrack::OobTubeClass");
static_assert(offsetof(UDelMarTrack, AttachedOobTube) == 3048, "Offset mismatch for UDelMarTrack::AttachedOobTube");

// /Script/DelMarTrackRuntime.DelMarTrackBase
// Kind: Class; super: FortCreativeDeviceProp
class UDelMarTrackBase
{
public:
    std::uint8_t Pad_0000[0xB48]; // 0x0000
    void* TrackPalette_V2; // 0x0B48 (Size: 0x8, Type: ObjectProperty)
    void* TrackSplinePointData; // 0x0B50 (Size: 0x8, Type: ObjectProperty)
    void* Spline; // 0x0B58 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> TrackPropData; // 0x0B60 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SegmentCollections; // 0x0B70 (Size: 0x10, Type: ArrayProperty)
    float DefaultMaxTrackWidth; // 0x0B80 (Size: 0x4, Type: FloatProperty)
    std::int32_t TotalSegmentActors; // 0x0B84 (Size: 0x4, Type: IntProperty)
    float TrackLength; // 0x0B88 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0B8C
    void* TrackPalette; // 0x0B90 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bEnableGlobalMaterialCollectionIndex; // 0x0B98 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0B99
    std::uint32_t GlobalMaterialCollectionIndex; // 0x0B9C (Size: 0x4, Type: UInt32Property)
    std::uint8_t bForceValidOOBTube; // 0x0BA0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bForceValidTrack; // 0x0BA1 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UDelMarTrackBase, TrackPalette_V2) == 2888, "Offset mismatch for UDelMarTrackBase::TrackPalette_V2");
static_assert(offsetof(UDelMarTrackBase, TrackSplinePointData) == 2896, "Offset mismatch for UDelMarTrackBase::TrackSplinePointData");
static_assert(offsetof(UDelMarTrackBase, Spline) == 2904, "Offset mismatch for UDelMarTrackBase::Spline");
static_assert(offsetof(UDelMarTrackBase, TrackPropData) == 2912, "Offset mismatch for UDelMarTrackBase::TrackPropData");
static_assert(offsetof(UDelMarTrackBase, SegmentCollections) == 2928, "Offset mismatch for UDelMarTrackBase::SegmentCollections");
static_assert(offsetof(UDelMarTrackBase, DefaultMaxTrackWidth) == 2944, "Offset mismatch for UDelMarTrackBase::DefaultMaxTrackWidth");
static_assert(offsetof(UDelMarTrackBase, TotalSegmentActors) == 2948, "Offset mismatch for UDelMarTrackBase::TotalSegmentActors");
static_assert(offsetof(UDelMarTrackBase, TrackLength) == 2952, "Offset mismatch for UDelMarTrackBase::TrackLength");
static_assert(offsetof(UDelMarTrackBase, TrackPalette) == 2960, "Offset mismatch for UDelMarTrackBase::TrackPalette");
static_assert(offsetof(UDelMarTrackBase, bEnableGlobalMaterialCollectionIndex) == 2968, "Offset mismatch for UDelMarTrackBase::bEnableGlobalMaterialCollectionIndex");
static_assert(offsetof(UDelMarTrackBase, GlobalMaterialCollectionIndex) == 2972, "Offset mismatch for UDelMarTrackBase::GlobalMaterialCollectionIndex");
static_assert(offsetof(UDelMarTrackBase, bForceValidOOBTube) == 2976, "Offset mismatch for UDelMarTrackBase::bForceValidOOBTube");
static_assert(offsetof(UDelMarTrackBase, bForceValidTrack) == 2977, "Offset mismatch for UDelMarTrackBase::bForceValidTrack");

// /Script/DelMarTrackRuntime.DelMarTrackBlueprintFunctionLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UDelMarTrackBlueprintFunctionLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DelMarTrackRuntime.DelMarTrackCustomSegment
// Kind: Class; super: DelMarTrackSegmentBase
class UDelMarTrackCustomSegment
{
public:
    std::uint8_t Pad_0000[0x2A0]; // 0x0000
    float SegmentLength; // 0x02A0 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UDelMarTrackCustomSegment, SegmentLength) == 672, "Offset mismatch for UDelMarTrackCustomSegment::SegmentLength");

// /Script/DelMarTrackRuntime.DelMarTrackCustomizationInterface
// Kind: Class; super: Interface
class UDelMarTrackCustomizationInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DelMarTrackRuntime.DelMarTrackManager
// Kind: Class; super: WorldSubsystem
class UDelMarTrackManager
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    TArray<void*> DelMarTracks; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    void* PrimaryTrack; // 0x0078 (Size: 0x8, Type: ObjectProperty)
    void* LowestTrack; // 0x0080 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDelMarTrackManager, DelMarTracks) == 104, "Offset mismatch for UDelMarTrackManager::DelMarTracks");
static_assert(offsetof(UDelMarTrackManager, PrimaryTrack) == 120, "Offset mismatch for UDelMarTrackManager::PrimaryTrack");
static_assert(offsetof(UDelMarTrackManager, LowestTrack) == 128, "Offset mismatch for UDelMarTrackManager::LowestTrack");

// /Script/DelMarTrackRuntime.DelMarTrackMatLayerComponent
// Kind: Class; super: ActorComponent
class UDelMarTrackMatLayerComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TWeakObjectPtr<void> RoadMesh; // 0x00C0 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> Track; // 0x00C8 (Size: 0x8, Type: WeakObjectProperty)
    void* MaterialCollection; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDelMarTrackMatLayerComponent, RoadMesh) == 192, "Offset mismatch for UDelMarTrackMatLayerComponent::RoadMesh");
static_assert(offsetof(UDelMarTrackMatLayerComponent, Track) == 200, "Offset mismatch for UDelMarTrackMatLayerComponent::Track");
static_assert(offsetof(UDelMarTrackMatLayerComponent, MaterialCollection) == 208, "Offset mismatch for UDelMarTrackMatLayerComponent::MaterialCollection");

// /Script/DelMarTrackRuntime.DelMarTrackMaterialCollection
// Kind: Class; super: DataAsset
class UDelMarTrackMaterialCollection
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint32_t SelectedIndex; // 0x0028 (Size: 0x4, Type: UInt32Property)
    std::uint8_t Pad_0001[0x4]; // 0x002C
    TArray<void*> Materials; // 0x0030 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UDelMarTrackMaterialCollection, SelectedIndex) == 40, "Offset mismatch for UDelMarTrackMaterialCollection::SelectedIndex");
static_assert(offsetof(UDelMarTrackMaterialCollection, Materials) == 48, "Offset mismatch for UDelMarTrackMaterialCollection::Materials");

// /Script/DelMarTrackRuntime.DelMarTrackMeshCustomization
// Kind: Class; super: SplineMeshComponent
class UDelMarTrackMeshCustomization
{
public:
    std::uint8_t Pad_0000[0x7E9]; // 0x0000
    std::uint8_t bIsADefaultCustomization; // 0x07E9 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UDelMarTrackMeshCustomization, bIsADefaultCustomization) == 2025, "Offset mismatch for UDelMarTrackMeshCustomization::bIsADefaultCustomization");

// /Script/DelMarTrackRuntime.DelMarTrackOobTube
// Kind: Class; super: Actor
class UDelMarTrackOobTube
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    void* AttachedTrack; // 0x0270 (Size: 0x8, Type: ObjectProperty)
    void* Spline; // 0x0278 (Size: 0x8, Type: ObjectProperty)
    void* SplinePointData; // 0x0280 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t TubeMeshComponentClass[0x20]; // 0x0288 (Size: 0x20, Type: SoftClassProperty)
    TArray<void*> OobTubeMeshSections; // 0x02A8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t TubeMesh[0x20]; // 0x02B8 (Size: 0x20, Type: SoftObjectProperty)
    TMap<void*, void*> TransitionMeshes; // 0x02D8 (Size: 0x10, Type: MapProperty)
    float DefaultTransitionMeshLength; // 0x02E8 (Size: 0x4, Type: FloatProperty)
    std::int32_t DefaultNumSubsections; // 0x02EC (Size: 0x4, Type: IntProperty)
    float SmallestSubsectionLength; // 0x02F0 (Size: 0x4, Type: FloatProperty)
    float MinimumMeshScale; // 0x02F4 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UDelMarTrackOobTube, AttachedTrack) == 624, "Offset mismatch for UDelMarTrackOobTube::AttachedTrack");
static_assert(offsetof(UDelMarTrackOobTube, Spline) == 632, "Offset mismatch for UDelMarTrackOobTube::Spline");
static_assert(offsetof(UDelMarTrackOobTube, SplinePointData) == 640, "Offset mismatch for UDelMarTrackOobTube::SplinePointData");
static_assert(offsetof(UDelMarTrackOobTube, TubeMeshComponentClass) == 648, "Offset mismatch for UDelMarTrackOobTube::TubeMeshComponentClass");
static_assert(offsetof(UDelMarTrackOobTube, OobTubeMeshSections) == 680, "Offset mismatch for UDelMarTrackOobTube::OobTubeMeshSections");
static_assert(offsetof(UDelMarTrackOobTube, TubeMesh) == 696, "Offset mismatch for UDelMarTrackOobTube::TubeMesh");
static_assert(offsetof(UDelMarTrackOobTube, TransitionMeshes) == 728, "Offset mismatch for UDelMarTrackOobTube::TransitionMeshes");
static_assert(offsetof(UDelMarTrackOobTube, DefaultTransitionMeshLength) == 744, "Offset mismatch for UDelMarTrackOobTube::DefaultTransitionMeshLength");
static_assert(offsetof(UDelMarTrackOobTube, DefaultNumSubsections) == 748, "Offset mismatch for UDelMarTrackOobTube::DefaultNumSubsections");
static_assert(offsetof(UDelMarTrackOobTube, SmallestSubsectionLength) == 752, "Offset mismatch for UDelMarTrackOobTube::SmallestSubsectionLength");
static_assert(offsetof(UDelMarTrackOobTube, MinimumMeshScale) == 756, "Offset mismatch for UDelMarTrackOobTube::MinimumMeshScale");

// /Script/DelMarTrackRuntime.DelMarTrackOobTubeCollectionProxy
// Kind: Class; super: Object
class UDelMarTrackOobTubeCollectionProxy
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* OobTubeClass; // 0x0028 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UDelMarTrackOobTubeCollectionProxy, OobTubeClass) == 40, "Offset mismatch for UDelMarTrackOobTubeCollectionProxy::OobTubeClass");

// /Script/DelMarTrackRuntime.DelMarTrackOobTubePointData
// Kind: Class; super: SplineMetadata
class UDelMarTrackOobTubePointData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> MetaData; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UDelMarTrackOobTubePointData, MetaData) == 40, "Offset mismatch for UDelMarTrackOobTubePointData::MetaData");

// /Script/DelMarTrackRuntime.DelMarTrackOobTubePositionalRenderingComponent
// Kind: Class; super: ControllerComponent
class UDelMarTrackOobTubePositionalRenderingComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TWeakObjectPtr<void> PlayerPositionComponent; // 0x00C0 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t ActiveOOBTubeMeshes[0x10]; // 0x00C8 (Size: 0x10, Type: SetProperty)
    void* ActiveOOBTube; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
    float RenderDistanceInFrontOfPlayer; // 0x00E0 (Size: 0x4, Type: FloatProperty)
    float RenderDistanceBehindPlayer; // 0x00E4 (Size: 0x4, Type: FloatProperty)
    float UpdateIntervalInSeconds; // 0x00E8 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UDelMarTrackOobTubePositionalRenderingComponent, PlayerPositionComponent) == 192, "Offset mismatch for UDelMarTrackOobTubePositionalRenderingComponent::PlayerPositionComponent");
static_assert(offsetof(UDelMarTrackOobTubePositionalRenderingComponent, ActiveOOBTubeMeshes) == 200, "Offset mismatch for UDelMarTrackOobTubePositionalRenderingComponent::ActiveOOBTubeMeshes");
static_assert(offsetof(UDelMarTrackOobTubePositionalRenderingComponent, ActiveOOBTube) == 216, "Offset mismatch for UDelMarTrackOobTubePositionalRenderingComponent::ActiveOOBTube");
static_assert(offsetof(UDelMarTrackOobTubePositionalRenderingComponent, RenderDistanceInFrontOfPlayer) == 224, "Offset mismatch for UDelMarTrackOobTubePositionalRenderingComponent::RenderDistanceInFrontOfPlayer");
static_assert(offsetof(UDelMarTrackOobTubePositionalRenderingComponent, RenderDistanceBehindPlayer) == 228, "Offset mismatch for UDelMarTrackOobTubePositionalRenderingComponent::RenderDistanceBehindPlayer");
static_assert(offsetof(UDelMarTrackOobTubePositionalRenderingComponent, UpdateIntervalInSeconds) == 232, "Offset mismatch for UDelMarTrackOobTubePositionalRenderingComponent::UpdateIntervalInSeconds");

// /Script/DelMarTrackRuntime.DelMarTrackOobTubeProxy
// Kind: Class; super: Object
class UDelMarTrackOobTubeProxy
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DelMarTrackRuntime.DelMarTrackPalette
// Kind: Class; super: DataAsset
class UDelMarTrackPalette
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> Palette; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Transitions; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Caps; // 0x0048 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UDelMarTrackPalette, Palette) == 40, "Offset mismatch for UDelMarTrackPalette::Palette");
static_assert(offsetof(UDelMarTrackPalette, Transitions) == 56, "Offset mismatch for UDelMarTrackPalette::Transitions");
static_assert(offsetof(UDelMarTrackPalette, Caps) == 72, "Offset mismatch for UDelMarTrackPalette::Caps");

// /Script/DelMarTrackRuntime.DelMarTrackPaletteTheme
// Kind: Class; super: DataAsset
class UDelMarTrackPaletteTheme
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    FName ThemeName; // 0x0030 (Size: 0x8, Type: NameProperty)
    FString ThemeDescription; // 0x0038 (Size: 0x10, Type: StrProperty)
    TArray<void*> Tracks; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    void* Transitions; // 0x0058 (Size: 0x8, Type: ObjectProperty)
    void* OOBTubeMesh; // 0x0060 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDelMarTrackPaletteTheme, ThemeName) == 48, "Offset mismatch for UDelMarTrackPaletteTheme::ThemeName");
static_assert(offsetof(UDelMarTrackPaletteTheme, ThemeDescription) == 56, "Offset mismatch for UDelMarTrackPaletteTheme::ThemeDescription");
static_assert(offsetof(UDelMarTrackPaletteTheme, Tracks) == 72, "Offset mismatch for UDelMarTrackPaletteTheme::Tracks");
static_assert(offsetof(UDelMarTrackPaletteTheme, Transitions) == 88, "Offset mismatch for UDelMarTrackPaletteTheme::Transitions");
static_assert(offsetof(UDelMarTrackPaletteTheme, OOBTubeMesh) == 96, "Offset mismatch for UDelMarTrackPaletteTheme::OOBTubeMesh");

// /Script/DelMarTrackRuntime.DelMarTrackPaletteTrackType
// Kind: Class; super: DataAsset
class UDelMarTrackPaletteTrackType
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> StyleArray; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bShouldOOBTubeFunnel; // 0x0038 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0039
    void* OOBTubeMeshOverride; // 0x0040 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDelMarTrackPaletteTrackType, StyleArray) == 40, "Offset mismatch for UDelMarTrackPaletteTrackType::StyleArray");
static_assert(offsetof(UDelMarTrackPaletteTrackType, bShouldOOBTubeFunnel) == 56, "Offset mismatch for UDelMarTrackPaletteTrackType::bShouldOOBTubeFunnel");
static_assert(offsetof(UDelMarTrackPaletteTrackType, OOBTubeMeshOverride) == 64, "Offset mismatch for UDelMarTrackPaletteTrackType::OOBTubeMeshOverride");

// /Script/DelMarTrackRuntime.DelMarTrackPaletteTransitions
// Kind: Class; super: DataAsset
class UDelMarTrackPaletteTransitions
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> TransitionArray; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UDelMarTrackPaletteTransitions, TransitionArray) == 40, "Offset mismatch for UDelMarTrackPaletteTransitions::TransitionArray");

// /Script/DelMarTrackRuntime.DelMarTrackPerformanceScrubber
// Kind: Class; super: Actor
class UDelMarTrackPerformanceScrubber
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    void* Camera; // 0x0270 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> Spline; // 0x0278 (Size: 0x8, Type: WeakObjectProperty)
    FString SplineSelection; // 0x0280 (Size: 0x10, Type: StrProperty)
    std::int32_t ScrubUnits; // 0x0290 (Size: 0x4, Type: IntProperty)
    float CameraHeightOffset; // 0x0294 (Size: 0x4, Type: FloatProperty)
    void* FloatCurve; // 0x0298 (Size: 0x8, Type: ObjectProperty)
    std::int32_t RuntimeSpeed; // 0x02A0 (Size: 0x4, Type: IntProperty)
    std::uint8_t bRunCsvProfilerDuringScrub; // 0x02A4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1B]; // 0x02A5
    std::int32_t ScrubUnitMax; // 0x02C0 (Size: 0x4, Type: IntProperty)
    std::uint8_t bRuntimeEnabled; // 0x02C4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x02C5
    TMap<void*, void*> StringToSplineMap; // 0x02C8 (Size: 0x10, Type: MapProperty)
    void* Timeline; // 0x02D8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDelMarTrackPerformanceScrubber, Camera) == 624, "Offset mismatch for UDelMarTrackPerformanceScrubber::Camera");
static_assert(offsetof(UDelMarTrackPerformanceScrubber, Spline) == 632, "Offset mismatch for UDelMarTrackPerformanceScrubber::Spline");
static_assert(offsetof(UDelMarTrackPerformanceScrubber, SplineSelection) == 640, "Offset mismatch for UDelMarTrackPerformanceScrubber::SplineSelection");
static_assert(offsetof(UDelMarTrackPerformanceScrubber, ScrubUnits) == 656, "Offset mismatch for UDelMarTrackPerformanceScrubber::ScrubUnits");
static_assert(offsetof(UDelMarTrackPerformanceScrubber, CameraHeightOffset) == 660, "Offset mismatch for UDelMarTrackPerformanceScrubber::CameraHeightOffset");
static_assert(offsetof(UDelMarTrackPerformanceScrubber, FloatCurve) == 664, "Offset mismatch for UDelMarTrackPerformanceScrubber::FloatCurve");
static_assert(offsetof(UDelMarTrackPerformanceScrubber, RuntimeSpeed) == 672, "Offset mismatch for UDelMarTrackPerformanceScrubber::RuntimeSpeed");
static_assert(offsetof(UDelMarTrackPerformanceScrubber, bRunCsvProfilerDuringScrub) == 676, "Offset mismatch for UDelMarTrackPerformanceScrubber::bRunCsvProfilerDuringScrub");
static_assert(offsetof(UDelMarTrackPerformanceScrubber, ScrubUnitMax) == 704, "Offset mismatch for UDelMarTrackPerformanceScrubber::ScrubUnitMax");
static_assert(offsetof(UDelMarTrackPerformanceScrubber, bRuntimeEnabled) == 708, "Offset mismatch for UDelMarTrackPerformanceScrubber::bRuntimeEnabled");
static_assert(offsetof(UDelMarTrackPerformanceScrubber, StringToSplineMap) == 712, "Offset mismatch for UDelMarTrackPerformanceScrubber::StringToSplineMap");
static_assert(offsetof(UDelMarTrackPerformanceScrubber, Timeline) == 728, "Offset mismatch for UDelMarTrackPerformanceScrubber::Timeline");

// /Script/DelMarTrackRuntime.DelMarTrackPointData
// Kind: Class; super: SplineMetadata
class UDelMarTrackPointData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> MetaData; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    void* Spline; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDelMarTrackPointData, MetaData) == 40, "Offset mismatch for UDelMarTrackPointData::MetaData");
static_assert(offsetof(UDelMarTrackPointData, Spline) == 56, "Offset mismatch for UDelMarTrackPointData::Spline");

// /Script/DelMarTrackRuntime.DelMarTrackPositionComponent
// Kind: Class; super: SceneComponent
class UDelMarTrackPositionComponent
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    std::uint8_t ActiveTrackPosition[0x20]; // 0x0270 (Size: 0x20, Type: StructProperty)
    float TrackRadius; // 0x0290 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UDelMarTrackPositionComponent, ActiveTrackPosition) == 624, "Offset mismatch for UDelMarTrackPositionComponent::ActiveTrackPosition");
static_assert(offsetof(UDelMarTrackPositionComponent, TrackRadius) == 656, "Offset mismatch for UDelMarTrackPositionComponent::TrackRadius");

// /Script/DelMarTrackRuntime.DelMarTrackPrefabSegment
// Kind: Class; super: DelMarTrackSegmentBase
class UDelMarTrackPrefabSegment
{
public:
    std::uint8_t Pad_0000[0x2A0]; // 0x0000
    float TangentLength; // 0x02A0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x02A4
    void* PrefabStaticMesh; // 0x02A8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t StartSocketName[0x4]; // 0x02B0 (Size: 0x4, Type: NameProperty)
    FName EndSocketName; // 0x02B4 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UDelMarTrackPrefabSegment, TangentLength) == 672, "Offset mismatch for UDelMarTrackPrefabSegment::TangentLength");
static_assert(offsetof(UDelMarTrackPrefabSegment, PrefabStaticMesh) == 680, "Offset mismatch for UDelMarTrackPrefabSegment::PrefabStaticMesh");
static_assert(offsetof(UDelMarTrackPrefabSegment, StartSocketName) == 688, "Offset mismatch for UDelMarTrackPrefabSegment::StartSocketName");
static_assert(offsetof(UDelMarTrackPrefabSegment, EndSocketName) == 692, "Offset mismatch for UDelMarTrackPrefabSegment::EndSocketName");

// /Script/DelMarTrackRuntime.DelMarTrackRoadProp
// Kind: Class; super: BuildingProp
class UDelMarTrackRoadProp
{
public:
    std::uint8_t Pad_0000[0xB18]; // 0x0000
    std::uint8_t RoadPropType; // 0x0B18 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0B19
    void* SnapToComponent; // 0x0B20 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDelMarTrackRoadProp, RoadPropType) == 2840, "Offset mismatch for UDelMarTrackRoadProp::RoadPropType");
static_assert(offsetof(UDelMarTrackRoadProp, SnapToComponent) == 2848, "Offset mismatch for UDelMarTrackRoadProp::SnapToComponent");

// /Script/DelMarTrackRuntime.DelMarTrackSegmentBase
// Kind: Class; super: Actor
class UDelMarTrackSegmentBase
{
public:
    std::uint8_t Pad_0000[0x278]; // 0x0000
    std::uint8_t bIgnoreSplineLength; // 0x0278 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0279
    TWeakObjectPtr<void> Track; // 0x027C (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0284
    void* MaterialLayerComponent; // 0x0288 (Size: 0x8, Type: ObjectProperty)
    float BeginDistanceAlongSpline; // 0x0290 (Size: 0x4, Type: FloatProperty)
    float EndDistanceAlongSpline; // 0x0294 (Size: 0x4, Type: FloatProperty)
    std::int32_t TrackSegmentIndex; // 0x0298 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UDelMarTrackSegmentBase, bIgnoreSplineLength) == 632, "Offset mismatch for UDelMarTrackSegmentBase::bIgnoreSplineLength");
static_assert(offsetof(UDelMarTrackSegmentBase, Track) == 636, "Offset mismatch for UDelMarTrackSegmentBase::Track");
static_assert(offsetof(UDelMarTrackSegmentBase, MaterialLayerComponent) == 648, "Offset mismatch for UDelMarTrackSegmentBase::MaterialLayerComponent");
static_assert(offsetof(UDelMarTrackSegmentBase, BeginDistanceAlongSpline) == 656, "Offset mismatch for UDelMarTrackSegmentBase::BeginDistanceAlongSpline");
static_assert(offsetof(UDelMarTrackSegmentBase, EndDistanceAlongSpline) == 660, "Offset mismatch for UDelMarTrackSegmentBase::EndDistanceAlongSpline");
static_assert(offsetof(UDelMarTrackSegmentBase, TrackSegmentIndex) == 664, "Offset mismatch for UDelMarTrackSegmentBase::TrackSegmentIndex");

// /Script/DelMarTrackRuntime.DelMarTrackSegmentCollectionSpawnDataProvider
// Kind: Class; super: Interface
class UDelMarTrackSegmentCollectionSpawnDataProvider
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DelMarTrackRuntime.DelMarTrackSegmentInterface
// Kind: Class; super: Interface
class UDelMarTrackSegmentInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DelMarTrackRuntime.DelMarTrackSettings
// Kind: Class; super: DeveloperSettings
class UDelMarTrackSettings
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t RootTrackTag[0x8]; // 0x0030 (Size: 0x8, Type: StructProperty)
    TArray<void*> TagConverterData; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t DefaultConverterTag[0x4]; // 0x0048 (Size: 0x4, Type: StructProperty)
    std::uint8_t HiddenTrackTag[0x1]; // 0x004C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UDelMarTrackSettings, RootTrackTag) == 48, "Offset mismatch for UDelMarTrackSettings::RootTrackTag");
static_assert(offsetof(UDelMarTrackSettings, TagConverterData) == 56, "Offset mismatch for UDelMarTrackSettings::TagConverterData");
static_assert(offsetof(UDelMarTrackSettings, DefaultConverterTag) == 72, "Offset mismatch for UDelMarTrackSettings::DefaultConverterTag");
static_assert(offsetof(UDelMarTrackSettings, HiddenTrackTag) == 76, "Offset mismatch for UDelMarTrackSettings::HiddenTrackTag");

// /Script/DelMarTrackRuntime.DelMarTrackSnapToComponent
// Kind: Class; super: SceneComponent
class UDelMarTrackSnapToComponent
{
public:
    std::uint8_t Pad_0000[0x240]; // 0x0000
    std::uint8_t OffsetToOwnerActor[0x1]; // 0x0240 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UDelMarTrackSnapToComponent, OffsetToOwnerActor) == 576, "Offset mismatch for UDelMarTrackSnapToComponent::OffsetToOwnerActor");

// /Script/DelMarTrackRuntime.DelMarTrackSnapToSplinePointComponent
// Kind: Class; super: DelMarTrackSnapToComponent
class UDelMarTrackSnapToSplinePointComponent
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    void* SplineToSnapTo; // 0x0270 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t SplinePointSnapMode; // 0x0278 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0279
    std::int32_t SplinePointIndexToSnapTo; // 0x027C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UDelMarTrackSnapToSplinePointComponent, SplineToSnapTo) == 624, "Offset mismatch for UDelMarTrackSnapToSplinePointComponent::SplineToSnapTo");
static_assert(offsetof(UDelMarTrackSnapToSplinePointComponent, SplinePointSnapMode) == 632, "Offset mismatch for UDelMarTrackSnapToSplinePointComponent::SplinePointSnapMode");
static_assert(offsetof(UDelMarTrackSnapToSplinePointComponent, SplinePointIndexToSnapTo) == 636, "Offset mismatch for UDelMarTrackSnapToSplinePointComponent::SplinePointIndexToSnapTo");

// /Script/DelMarTrackRuntime.DelMarTrackSplineComponent
// Kind: Class; super: SplineComponent
class UDelMarTrackSplineComponent
{
public:
    std::uint8_t Pad_0000[0x6D0]; // 0x0000
    std::int32_t WorldPlaneLookupSubsteps; // 0x06D0 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x94]; // 0x06D4
    TArray<void*> RotationalMinimalFrameNormals; // 0x0768 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UDelMarTrackSplineComponent, WorldPlaneLookupSubsteps) == 1744, "Offset mismatch for UDelMarTrackSplineComponent::WorldPlaneLookupSubsteps");
static_assert(offsetof(UDelMarTrackSplineComponent, RotationalMinimalFrameNormals) == 1896, "Offset mismatch for UDelMarTrackSplineComponent::RotationalMinimalFrameNormals");

// /Script/DelMarTrackRuntime.DelMarTrackSplineMeshSegment
// Kind: Class; super: DelMarTrackSegmentBase
class UDelMarTrackSplineMeshSegment
{
public:
    std::uint8_t Pad_0000[0x2A0]; // 0x0000
    void* SplineMesh; // 0x02A0 (Size: 0x8, Type: ObjectProperty)
    float SegmentLengthScaler; // 0x02A8 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UDelMarTrackSplineMeshSegment, SplineMesh) == 672, "Offset mismatch for UDelMarTrackSplineMeshSegment::SplineMesh");
static_assert(offsetof(UDelMarTrackSplineMeshSegment, SegmentLengthScaler) == 680, "Offset mismatch for UDelMarTrackSplineMeshSegment::SegmentLengthScaler");

// /Script/DelMarTrackRuntime.DelMarTrackStaticMeshSegment
// Kind: Class; super: DelMarTrackSegmentBase
class UDelMarTrackStaticMeshSegment
{
public:
    std::uint8_t Pad_0000[0x2A0]; // 0x0000
    void* StaticMeshComponent; // 0x02A0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDelMarTrackStaticMeshSegment, StaticMeshComponent) == 672, "Offset mismatch for UDelMarTrackStaticMeshSegment::StaticMeshComponent");

// /Script/DelMarTrackRuntime.DelMarTrackTubeAudioComponent
// Kind: Class; super: AudioShapePrimitiveComponent
class UDelMarTrackTubeAudioComponent
{
public:
    std::uint8_t Pad_0000[0x1E0]; // 0x0000
    float Radius; // 0x01E0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x01E4
    std::uint8_t SplineAABB[0x38]; // 0x01E8 (Size: 0x38, Type: StructProperty)
    void* Spline; // 0x0220 (Size: 0x8, Type: ObjectProperty)
    void* ParentOobTube; // 0x0228 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDelMarTrackTubeAudioComponent, Radius) == 480, "Offset mismatch for UDelMarTrackTubeAudioComponent::Radius");
static_assert(offsetof(UDelMarTrackTubeAudioComponent, SplineAABB) == 488, "Offset mismatch for UDelMarTrackTubeAudioComponent::SplineAABB");
static_assert(offsetof(UDelMarTrackTubeAudioComponent, Spline) == 544, "Offset mismatch for UDelMarTrackTubeAudioComponent::Spline");
static_assert(offsetof(UDelMarTrackTubeAudioComponent, ParentOobTube) == 552, "Offset mismatch for UDelMarTrackTubeAudioComponent::ParentOobTube");

// /Script/DelMarTrackRuntime.DelMarTrackVariableSplineMeshSegment
// Kind: Class; super: DelMarTrackSplineMeshSegment
class UDelMarTrackVariableSplineMeshSegment
{
public:
    std::uint8_t Pad_0000[0x2B0]; // 0x0000
    TMap<void*, void*> VariableStaticMeshes; // 0x02B0 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UDelMarTrackVariableSplineMeshSegment, VariableStaticMeshes) == 688, "Offset mismatch for UDelMarTrackVariableSplineMeshSegment::VariableStaticMeshes");

// /Script/DelMarTrackRuntime.DelMarTrackVehiclePositionComponent
// Kind: Class; super: DelMarTrackPositionComponent
class UDelMarTrackVehiclePositionComponent
{
public:
    std::uint8_t Pad_0000[0x310]; // 0x0000
    void* Vehicle; // 0x0310 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDelMarTrackVehiclePositionComponent, Vehicle) == 784, "Offset mismatch for UDelMarTrackVehiclePositionComponent::Vehicle");

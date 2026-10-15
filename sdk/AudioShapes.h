/**
 * decamp dumper generated SDK
 * Package: /Script/AudioShapes
 */
#pragma once
#include "Basic.h"

// /Script/AudioShapes.SplineSegmentData
// Kind: ScriptStruct; super: none
struct FSplineSegmentData
{
public:
    std::uint8_t Bounds[0x38]; // 0x0000 (Size: 0x38, Type: StructProperty)
    std::int32_t PointIndex; // 0x0038 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FSplineSegmentData, Bounds) == 0, "Offset mismatch for FSplineSegmentData::Bounds");
static_assert(offsetof(FSplineSegmentData, PointIndex) == 56, "Offset mismatch for FSplineSegmentData::PointIndex");

// /Script/AudioShapes.AudioShapeBoxComponent
// Kind: Class; super: AudioShapePrimitiveComponent
class UAudioShapeBoxComponent
{
public:
    std::uint8_t Pad_0000[0x1E0]; // 0x0000
    std::uint8_t BoxTransform[0x1]; // 0x01E0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UAudioShapeBoxComponent, BoxTransform) == 480, "Offset mismatch for UAudioShapeBoxComponent::BoxTransform");

// /Script/AudioShapes.AudioShapeComponent
// Kind: Class; super: AudioGameplayComponent
class UAudioShapeComponent
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    float MaxDistanceOffset; // 0x00D0 (Size: 0x4, Type: FloatProperty)
    float SmoothingDistance; // 0x00D4 (Size: 0x4, Type: FloatProperty)
    float FadeInTime; // 0x00D8 (Size: 0x4, Type: FloatProperty)
    float FadeOutTime; // 0x00DC (Size: 0x4, Type: FloatProperty)
    FMulticastInlineDelegate OnAudibleStateChanged; // 0x00E0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    TMap<void*, void*> AudioComponents; // 0x00F0 (Size: 0x10, Type: MapProperty)
    TArray<void*> LocalControllers; // 0x0100 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UAudioShapeComponent, MaxDistanceOffset) == 208, "Offset mismatch for UAudioShapeComponent::MaxDistanceOffset");
static_assert(offsetof(UAudioShapeComponent, SmoothingDistance) == 212, "Offset mismatch for UAudioShapeComponent::SmoothingDistance");
static_assert(offsetof(UAudioShapeComponent, FadeInTime) == 216, "Offset mismatch for UAudioShapeComponent::FadeInTime");
static_assert(offsetof(UAudioShapeComponent, FadeOutTime) == 220, "Offset mismatch for UAudioShapeComponent::FadeOutTime");
static_assert(offsetof(UAudioShapeComponent, OnAudibleStateChanged) == 224, "Offset mismatch for UAudioShapeComponent::OnAudibleStateChanged");
static_assert(offsetof(UAudioShapeComponent, AudioComponents) == 240, "Offset mismatch for UAudioShapeComponent::AudioComponents");
static_assert(offsetof(UAudioShapeComponent, LocalControllers) == 256, "Offset mismatch for UAudioShapeComponent::LocalControllers");

// /Script/AudioShapes.AudioShapeCylinderComponent
// Kind: Class; super: AudioShapePrimitiveComponent
class UAudioShapeCylinderComponent
{
public:
    std::uint8_t Pad_0000[0x1E0]; // 0x0000
    float HalfHeight; // 0x01E0 (Size: 0x4, Type: FloatProperty)
    float Radius; // 0x01E4 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UAudioShapeCylinderComponent, HalfHeight) == 480, "Offset mismatch for UAudioShapeCylinderComponent::HalfHeight");
static_assert(offsetof(UAudioShapeCylinderComponent, Radius) == 484, "Offset mismatch for UAudioShapeCylinderComponent::Radius");

// /Script/AudioShapes.AudioShapeLineComponent
// Kind: Class; super: AudioShapePrimitiveComponent
class UAudioShapeLineComponent
{
public:
    std::uint8_t Pad_0000[0x1E0]; // 0x0000
    std::uint8_t StartPoint[0x18]; // 0x01E0 (Size: 0x18, Type: StructProperty)
    std::uint8_t Endpoint[0x1]; // 0x01F8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UAudioShapeLineComponent, StartPoint) == 480, "Offset mismatch for UAudioShapeLineComponent::StartPoint");
static_assert(offsetof(UAudioShapeLineComponent, Endpoint) == 504, "Offset mismatch for UAudioShapeLineComponent::Endpoint");

// /Script/AudioShapes.AudioShapeLineListComponent
// Kind: Class; super: AudioShapePrimitiveComponent
class UAudioShapeLineListComponent
{
public:
    std::uint8_t Pad_0000[0x1E0]; // 0x0000
    TArray<void*> PointList; // 0x01E0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bClosedLoop; // 0x01F0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UAudioShapeLineListComponent, PointList) == 480, "Offset mismatch for UAudioShapeLineListComponent::PointList");
static_assert(offsetof(UAudioShapeLineListComponent, bClosedLoop) == 496, "Offset mismatch for UAudioShapeLineListComponent::bClosedLoop");

// /Script/AudioShapes.AudioShapePrimitiveComponent
// Kind: Class; super: AudioShapeComponent
class UAudioShapePrimitiveComponent
{
public:
    std::uint8_t Pad_0000[0x120]; // 0x0000
    void* SoundOnEdge; // 0x0120 (Size: 0x8, Type: ObjectProperty)
    void* SoundOnInside; // 0x0128 (Size: 0x8, Type: ObjectProperty)
    FMulticastInlineDelegate OnInsideStateChanged; // 0x0130 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t bUseOwningActorTransform; // 0x0140 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAutoRefreshShape; // 0x0141 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x0142
    std::uint8_t ActorTransformScale[0x1]; // 0x0148 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UAudioShapePrimitiveComponent, SoundOnEdge) == 288, "Offset mismatch for UAudioShapePrimitiveComponent::SoundOnEdge");
static_assert(offsetof(UAudioShapePrimitiveComponent, SoundOnInside) == 296, "Offset mismatch for UAudioShapePrimitiveComponent::SoundOnInside");
static_assert(offsetof(UAudioShapePrimitiveComponent, OnInsideStateChanged) == 304, "Offset mismatch for UAudioShapePrimitiveComponent::OnInsideStateChanged");
static_assert(offsetof(UAudioShapePrimitiveComponent, bUseOwningActorTransform) == 320, "Offset mismatch for UAudioShapePrimitiveComponent::bUseOwningActorTransform");
static_assert(offsetof(UAudioShapePrimitiveComponent, bAutoRefreshShape) == 321, "Offset mismatch for UAudioShapePrimitiveComponent::bAutoRefreshShape");
static_assert(offsetof(UAudioShapePrimitiveComponent, ActorTransformScale) == 328, "Offset mismatch for UAudioShapePrimitiveComponent::ActorTransformScale");

// /Script/AudioShapes.AudioShapeSphereComponent
// Kind: Class; super: AudioShapePrimitiveComponent
class UAudioShapeSphereComponent
{
public:
    std::uint8_t Pad_0000[0x1E0]; // 0x0000
    float Radius; // 0x01E0 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UAudioShapeSphereComponent, Radius) == 480, "Offset mismatch for UAudioShapeSphereComponent::Radius");

// /Script/AudioShapes.AudioShapeSplineComponent
// Kind: Class; super: AudioShapeComponent
class UAudioShapeSplineComponent
{
public:
    std::uint8_t Pad_0000[0x120]; // 0x0000
    float TravelDistanceCrossfadeThreshold; // 0x0120 (Size: 0x4, Type: FloatProperty)
    float TravelDistanceCrossfadeTime; // 0x0124 (Size: 0x4, Type: FloatProperty)
    void* ClosestPointSound; // 0x0128 (Size: 0x8, Type: ObjectProperty)
    FMulticastInlineDelegate OnAudioUpdateInAudibleRange; // 0x0130 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x58]; // 0x0140
    std::uint8_t SplineAABB[0x38]; // 0x0198 (Size: 0x38, Type: StructProperty)
    TArray<void*> FadingComponents; // 0x01D0 (Size: 0x10, Type: ArrayProperty)
    TWeakObjectPtr<void> Spline; // 0x01E0 (Size: 0x8, Type: WeakObjectProperty)
    TArray<void*> SplineSegments; // 0x01E8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UAudioShapeSplineComponent, TravelDistanceCrossfadeThreshold) == 288, "Offset mismatch for UAudioShapeSplineComponent::TravelDistanceCrossfadeThreshold");
static_assert(offsetof(UAudioShapeSplineComponent, TravelDistanceCrossfadeTime) == 292, "Offset mismatch for UAudioShapeSplineComponent::TravelDistanceCrossfadeTime");
static_assert(offsetof(UAudioShapeSplineComponent, ClosestPointSound) == 296, "Offset mismatch for UAudioShapeSplineComponent::ClosestPointSound");
static_assert(offsetof(UAudioShapeSplineComponent, OnAudioUpdateInAudibleRange) == 304, "Offset mismatch for UAudioShapeSplineComponent::OnAudioUpdateInAudibleRange");
static_assert(offsetof(UAudioShapeSplineComponent, SplineAABB) == 408, "Offset mismatch for UAudioShapeSplineComponent::SplineAABB");
static_assert(offsetof(UAudioShapeSplineComponent, FadingComponents) == 464, "Offset mismatch for UAudioShapeSplineComponent::FadingComponents");
static_assert(offsetof(UAudioShapeSplineComponent, Spline) == 480, "Offset mismatch for UAudioShapeSplineComponent::Spline");
static_assert(offsetof(UAudioShapeSplineComponent, SplineSegments) == 488, "Offset mismatch for UAudioShapeSplineComponent::SplineSegments");

// /Script/AudioShapes.AudioShapeSubsystem
// Kind: Class; super: WorldSubsystem
class UAudioShapeSubsystem
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    TArray<void*> PendingAudioShapes; // 0x0060 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AudioShapes; // 0x0070 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> LocalControllers; // 0x0080 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UAudioShapeSubsystem, PendingAudioShapes) == 96, "Offset mismatch for UAudioShapeSubsystem::PendingAudioShapes");
static_assert(offsetof(UAudioShapeSubsystem, AudioShapes) == 112, "Offset mismatch for UAudioShapeSubsystem::AudioShapes");
static_assert(offsetof(UAudioShapeSubsystem, LocalControllers) == 128, "Offset mismatch for UAudioShapeSubsystem::LocalControllers");

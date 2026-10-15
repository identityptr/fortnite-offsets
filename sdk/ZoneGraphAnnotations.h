/**
 * decamp dumper generated SDK
 * Package: /Script/ZoneGraphAnnotations
 */
#pragma once
#include "Basic.h"

// /Script/ZoneGraphAnnotations.RegisteredZoneGraphAnnotation
// Kind: ScriptStruct; super: none
struct FRegisteredZoneGraphAnnotation
{
public:
    void* AnnotationComponent; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FRegisteredZoneGraphAnnotation, AnnotationComponent) == 0, "Offset mismatch for FRegisteredZoneGraphAnnotation::AnnotationComponent");

// /Script/ZoneGraphAnnotations.ZoneGraphAnnotationEventBase
// Kind: ScriptStruct; super: none
struct FZoneGraphAnnotationEventBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ZoneGraphAnnotations.ZoneGraphDisturbanceArea
// Kind: ScriptStruct; super: ZoneGraphAnnotationEventBase
struct FZoneGraphDisturbanceArea
{
public:
    std::uint8_t Position[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    float Radius; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float duration; // 0x001C (Size: 0x4, Type: FloatProperty)
    std::uint32_t InstigatorID; // 0x0020 (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(FZoneGraphDisturbanceArea, Position) == 0, "Offset mismatch for FZoneGraphDisturbanceArea::Position");
static_assert(offsetof(FZoneGraphDisturbanceArea, Radius) == 24, "Offset mismatch for FZoneGraphDisturbanceArea::Radius");
static_assert(offsetof(FZoneGraphDisturbanceArea, duration) == 28, "Offset mismatch for FZoneGraphDisturbanceArea::duration");
static_assert(offsetof(FZoneGraphDisturbanceArea, InstigatorID) == 32, "Offset mismatch for FZoneGraphDisturbanceArea::InstigatorID");

// /Script/ZoneGraphAnnotations.ZoneGraphObstacleDisturbanceArea
// Kind: ScriptStruct; super: ZoneGraphAnnotationEventBase
struct FZoneGraphObstacleDisturbanceArea
{
public:
    std::uint8_t Position[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    float Radius; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float ObstacleRadius; // 0x001C (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x8]; // 0x0020
    std::uint8_t Action; // 0x0028 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FZoneGraphObstacleDisturbanceArea, Position) == 0, "Offset mismatch for FZoneGraphObstacleDisturbanceArea::Position");
static_assert(offsetof(FZoneGraphObstacleDisturbanceArea, Radius) == 24, "Offset mismatch for FZoneGraphObstacleDisturbanceArea::Radius");
static_assert(offsetof(FZoneGraphObstacleDisturbanceArea, ObstacleRadius) == 28, "Offset mismatch for FZoneGraphObstacleDisturbanceArea::ObstacleRadius");
static_assert(offsetof(FZoneGraphObstacleDisturbanceArea, Action) == 40, "Offset mismatch for FZoneGraphObstacleDisturbanceArea::Action");

// /Script/ZoneGraphAnnotations.ZoneGraphAnnotationComponent
// Kind: Class; super: DebugDrawComponent
class UZoneGraphAnnotationComponent
{
public:
    std::uint8_t Pad_0000[0x5E8]; // 0x0000
    std::uint8_t bEnableDebugDrawing; // 0x05E8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UZoneGraphAnnotationComponent, bEnableDebugDrawing) == 1512, "Offset mismatch for UZoneGraphAnnotationComponent::bEnableDebugDrawing");

// /Script/ZoneGraphAnnotations.ZoneGraphAnnotationSubsystem
// Kind: Class; super: TickableWorldSubsystem
class UZoneGraphAnnotationSubsystem
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    TArray<void*> RegisteredComponents; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Events[0x28]; // 0x0058 (Size: 0x28, Type: StructProperty)
    TArray<void*> TagToAnnotationLookup; // 0x0080 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UZoneGraphAnnotationSubsystem, RegisteredComponents) == 72, "Offset mismatch for UZoneGraphAnnotationSubsystem::RegisteredComponents");
static_assert(offsetof(UZoneGraphAnnotationSubsystem, Events) == 88, "Offset mismatch for UZoneGraphAnnotationSubsystem::Events");
static_assert(offsetof(UZoneGraphAnnotationSubsystem, TagToAnnotationLookup) == 128, "Offset mismatch for UZoneGraphAnnotationSubsystem::TagToAnnotationLookup");

// /Script/ZoneGraphAnnotations.ZoneGraphAnnotationTest
// Kind: Class; super: Object
class UZoneGraphAnnotationTest
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* OwnerComponent; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UZoneGraphAnnotationTest, OwnerComponent) == 40, "Offset mismatch for UZoneGraphAnnotationTest::OwnerComponent");

// /Script/ZoneGraphAnnotations.ZoneGraphAnnotationTestingActor
// Kind: Class; super: Actor
class UZoneGraphAnnotationTestingActor
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    void* TestingComp; // 0x0270 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UZoneGraphAnnotationTestingActor, TestingComp) == 624, "Offset mismatch for UZoneGraphAnnotationTestingActor::TestingComp");

// /Script/ZoneGraphAnnotations.ZoneGraphAnnotationTestingComponent
// Kind: Class; super: DebugDrawComponent
class UZoneGraphAnnotationTestingComponent
{
public:
    std::uint8_t Pad_0000[0x5D0]; // 0x0000
    TArray<void*> Tests; // 0x05D0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UZoneGraphAnnotationTestingComponent, Tests) == 1488, "Offset mismatch for UZoneGraphAnnotationTestingComponent::Tests");

// /Script/ZoneGraphAnnotations.ZoneGraphDisturbanceAnnotation
// Kind: Class; super: ZoneGraphAnnotationComponent
class UZoneGraphDisturbanceAnnotation
{
public:
    std::uint8_t Pad_0000[0x5F0]; // 0x0000
    std::uint8_t DangerAnnotationTag[0x1]; // 0x05F0 (Size: 0x1, Type: StructProperty)
    std::uint8_t ObstacleAnnotationTag[0x3]; // 0x05F1 (Size: 0x3, Type: StructProperty)
    std::uint8_t AffectedLaneTags[0xC]; // 0x05F4 (Size: 0xC, Type: StructProperty)
    std::uint8_t EscapeLaneTags[0xC]; // 0x0600 (Size: 0xC, Type: StructProperty)
    float IdealSpanLength; // 0x060C (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x40]; // 0x0610
    void* ZoneGraphSubsystem; // 0x0650 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UZoneGraphDisturbanceAnnotation, DangerAnnotationTag) == 1520, "Offset mismatch for UZoneGraphDisturbanceAnnotation::DangerAnnotationTag");
static_assert(offsetof(UZoneGraphDisturbanceAnnotation, ObstacleAnnotationTag) == 1521, "Offset mismatch for UZoneGraphDisturbanceAnnotation::ObstacleAnnotationTag");
static_assert(offsetof(UZoneGraphDisturbanceAnnotation, AffectedLaneTags) == 1524, "Offset mismatch for UZoneGraphDisturbanceAnnotation::AffectedLaneTags");
static_assert(offsetof(UZoneGraphDisturbanceAnnotation, EscapeLaneTags) == 1536, "Offset mismatch for UZoneGraphDisturbanceAnnotation::EscapeLaneTags");
static_assert(offsetof(UZoneGraphDisturbanceAnnotation, IdealSpanLength) == 1548, "Offset mismatch for UZoneGraphDisturbanceAnnotation::IdealSpanLength");
static_assert(offsetof(UZoneGraphDisturbanceAnnotation, ZoneGraphSubsystem) == 1616, "Offset mismatch for UZoneGraphDisturbanceAnnotation::ZoneGraphSubsystem");

// /Script/ZoneGraphAnnotations.ZoneGraphDisturbanceAnnotationBPLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UZoneGraphDisturbanceAnnotationBPLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ZoneGraphAnnotations.ZoneGraphDisturbanceAnnotationTest
// Kind: Class; super: ZoneGraphAnnotationTest
class UZoneGraphDisturbanceAnnotationTest
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t Offset[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    float duration; // 0x0048 (Size: 0x4, Type: FloatProperty)
    float DangerRadius; // 0x004C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UZoneGraphDisturbanceAnnotationTest, Offset) == 48, "Offset mismatch for UZoneGraphDisturbanceAnnotationTest::Offset");
static_assert(offsetof(UZoneGraphDisturbanceAnnotationTest, duration) == 72, "Offset mismatch for UZoneGraphDisturbanceAnnotationTest::duration");
static_assert(offsetof(UZoneGraphDisturbanceAnnotationTest, DangerRadius) == 76, "Offset mismatch for UZoneGraphDisturbanceAnnotationTest::DangerRadius");

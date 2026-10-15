/**
 * decamp dumper generated SDK
 * Package: /Script/MassZoneGraphNavigation
 */
#pragma once
#include "Basic.h"

// /Script/MassZoneGraphNavigation.MassLaneCacheBoundaryFragment
// Kind: ScriptStruct; super: MassFragment
struct FMassLaneCacheBoundaryFragment
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassZoneGraphNavigation.MassZoneGraphCachedLaneFragment
// Kind: ScriptStruct; super: MassFragment
struct FMassZoneGraphCachedLaneFragment
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassZoneGraphNavigation.MassZoneGraphLaneLocationFragment
// Kind: ScriptStruct; super: MassFragment
struct FMassZoneGraphLaneLocationFragment
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassZoneGraphNavigation.MassZoneGraphNavigationParameters
// Kind: ScriptStruct; super: MassConstSharedFragment
struct FMassZoneGraphNavigationParameters
{
public:
    std::uint8_t LaneFilter[0xC]; // 0x0000 (Size: 0xC, Type: StructProperty)
    float QueryRadius; // 0x000C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FMassZoneGraphNavigationParameters, LaneFilter) == 0, "Offset mismatch for FMassZoneGraphNavigationParameters::LaneFilter");
static_assert(offsetof(FMassZoneGraphNavigationParameters, QueryRadius) == 12, "Offset mismatch for FMassZoneGraphNavigationParameters::QueryRadius");

// /Script/MassZoneGraphNavigation.MassZoneGraphPathPoint
// Kind: ScriptStruct; super: none
struct FMassZoneGraphPathPoint
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassZoneGraphNavigation.MassZoneGraphPathRequestFragment
// Kind: ScriptStruct; super: MassFragment
struct FMassZoneGraphPathRequestFragment
{
public:
    std::uint8_t PathRequest[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMassZoneGraphPathRequestFragment, PathRequest) == 0, "Offset mismatch for FMassZoneGraphPathRequestFragment::PathRequest");

// /Script/MassZoneGraphNavigation.MassZoneGraphShortPathFragment
// Kind: ScriptStruct; super: MassFragment
struct FMassZoneGraphShortPathFragment
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassZoneGraphNavigation.ZoneGraphShortPathRequest
// Kind: ScriptStruct; super: none
struct FZoneGraphShortPathRequest
{
public:
    std::uint8_t StartPosition[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t EndOfPathPosition[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t NextLaneHandle[0x8]; // 0x0030 (Size: 0x8, Type: StructProperty)
    float TargetDistance; // 0x0038 (Size: 0x4, Type: FloatProperty)
    std::uint8_t EndOfPathDirection[0x4]; // 0x003C (Size: 0x4, Type: StructProperty)
    std::uint8_t AnticipationDistance[0x2]; // 0x0040 (Size: 0x2, Type: StructProperty)
    std::uint8_t EndOfPathOffset[0x2]; // 0x0042 (Size: 0x2, Type: StructProperty)
    std::uint8_t EndOfPathIntent; // 0x0044 (Size: 0x1, Type: EnumProperty)
    std::uint8_t NextExitLinkType; // 0x0045 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bIsEndOfPathDirectionSet; // 0x0046 (Size: 0x1, Type: BoolProperty)
    // 0x0046 BoolProperty bIsEndOfPathPositionSet (shared storage)
    // 0x0046 BoolProperty bMoveReverse (shared storage)
};

static_assert(offsetof(FZoneGraphShortPathRequest, StartPosition) == 0, "Offset mismatch for FZoneGraphShortPathRequest::StartPosition");
static_assert(offsetof(FZoneGraphShortPathRequest, EndOfPathPosition) == 24, "Offset mismatch for FZoneGraphShortPathRequest::EndOfPathPosition");
static_assert(offsetof(FZoneGraphShortPathRequest, NextLaneHandle) == 48, "Offset mismatch for FZoneGraphShortPathRequest::NextLaneHandle");
static_assert(offsetof(FZoneGraphShortPathRequest, TargetDistance) == 56, "Offset mismatch for FZoneGraphShortPathRequest::TargetDistance");
static_assert(offsetof(FZoneGraphShortPathRequest, EndOfPathDirection) == 60, "Offset mismatch for FZoneGraphShortPathRequest::EndOfPathDirection");
static_assert(offsetof(FZoneGraphShortPathRequest, AnticipationDistance) == 64, "Offset mismatch for FZoneGraphShortPathRequest::AnticipationDistance");
static_assert(offsetof(FZoneGraphShortPathRequest, EndOfPathOffset) == 66, "Offset mismatch for FZoneGraphShortPathRequest::EndOfPathOffset");
static_assert(offsetof(FZoneGraphShortPathRequest, EndOfPathIntent) == 68, "Offset mismatch for FZoneGraphShortPathRequest::EndOfPathIntent");
static_assert(offsetof(FZoneGraphShortPathRequest, NextExitLinkType) == 69, "Offset mismatch for FZoneGraphShortPathRequest::NextExitLinkType");
static_assert(offsetof(FZoneGraphShortPathRequest, bIsEndOfPathDirectionSet) == 70, "Offset mismatch for FZoneGraphShortPathRequest::bIsEndOfPathDirectionSet");

// /Script/MassZoneGraphNavigation.MassZoneGraphLaneCacheBoundaryProcessor
// Kind: Class; super: MassProcessor
class UMassZoneGraphLaneCacheBoundaryProcessor
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t ExecutionOrder[0x28]; // 0x0028 (Size: 0x28, Type: StructProperty)
    std::uint8_t ProcessingPhase; // 0x0050 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ExecutionFlags; // 0x0051 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bAggregateRequirements; // 0x0052 (Size: 0x1, Type: BoolProperty)
    // 0x0052 BoolProperty bAutoRegisterWithProcessingPhases (shared storage)
    // 0x0052 BoolProperty bRequiresGameThreadExecution (shared storage)
    std::uint8_t ActivationState; // 0x0053 (Size: 0x1, Type: EnumProperty)
    std::int16_t ExecutionPriority; // 0x0054 (Size: 0x2, Type: Int16Property)
};

static_assert(offsetof(UMassZoneGraphLaneCacheBoundaryProcessor, ExecutionOrder) == 40, "Offset mismatch for UMassZoneGraphLaneCacheBoundaryProcessor::ExecutionOrder");
static_assert(offsetof(UMassZoneGraphLaneCacheBoundaryProcessor, ProcessingPhase) == 80, "Offset mismatch for UMassZoneGraphLaneCacheBoundaryProcessor::ProcessingPhase");
static_assert(offsetof(UMassZoneGraphLaneCacheBoundaryProcessor, ExecutionFlags) == 81, "Offset mismatch for UMassZoneGraphLaneCacheBoundaryProcessor::ExecutionFlags");
static_assert(offsetof(UMassZoneGraphLaneCacheBoundaryProcessor, bAggregateRequirements) == 82, "Offset mismatch for UMassZoneGraphLaneCacheBoundaryProcessor::bAggregateRequirements");
static_assert(offsetof(UMassZoneGraphLaneCacheBoundaryProcessor, ActivationState) == 83, "Offset mismatch for UMassZoneGraphLaneCacheBoundaryProcessor::ActivationState");
static_assert(offsetof(UMassZoneGraphLaneCacheBoundaryProcessor, ExecutionPriority) == 84, "Offset mismatch for UMassZoneGraphLaneCacheBoundaryProcessor::ExecutionPriority");

// /Script/MassZoneGraphNavigation.MassZoneGraphLocationInitializer
// Kind: Class; super: MassObserverProcessor
class UMassZoneGraphLocationInitializer
{
public:
    std::uint8_t Pad_0000[0x100]; // 0x0000
    void* ObservedType; // 0x0100 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ObservedTypes; // 0x0108 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bAutoRegisterWithObserverRegistry; // 0x0118 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMassZoneGraphLocationInitializer, ObservedType) == 256, "Offset mismatch for UMassZoneGraphLocationInitializer::ObservedType");
static_assert(offsetof(UMassZoneGraphLocationInitializer, ObservedTypes) == 264, "Offset mismatch for UMassZoneGraphLocationInitializer::ObservedTypes");
static_assert(offsetof(UMassZoneGraphLocationInitializer, bAutoRegisterWithObserverRegistry) == 280, "Offset mismatch for UMassZoneGraphLocationInitializer::bAutoRegisterWithObserverRegistry");

// /Script/MassZoneGraphNavigation.MassZoneGraphNavigationTrait
// Kind: Class; super: MassEntityTraitBase
class UMassZoneGraphNavigationTrait
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t NavigationParameters[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMassZoneGraphNavigationTrait, NavigationParameters) == 48, "Offset mismatch for UMassZoneGraphNavigationTrait::NavigationParameters");

// /Script/MassZoneGraphNavigation.MassZoneGraphPathFollowProcessor
// Kind: Class; super: MassProcessor
class UMassZoneGraphPathFollowProcessor
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t ExecutionOrder[0x28]; // 0x0028 (Size: 0x28, Type: StructProperty)
    std::uint8_t ProcessingPhase; // 0x0050 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ExecutionFlags; // 0x0051 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bAggregateRequirements; // 0x0052 (Size: 0x1, Type: BoolProperty)
    // 0x0052 BoolProperty bAutoRegisterWithProcessingPhases (shared storage)
    // 0x0052 BoolProperty bRequiresGameThreadExecution (shared storage)
    std::uint8_t ActivationState; // 0x0053 (Size: 0x1, Type: EnumProperty)
    std::int16_t ExecutionPriority; // 0x0054 (Size: 0x2, Type: Int16Property)
};

static_assert(offsetof(UMassZoneGraphPathFollowProcessor, ExecutionOrder) == 40, "Offset mismatch for UMassZoneGraphPathFollowProcessor::ExecutionOrder");
static_assert(offsetof(UMassZoneGraphPathFollowProcessor, ProcessingPhase) == 80, "Offset mismatch for UMassZoneGraphPathFollowProcessor::ProcessingPhase");
static_assert(offsetof(UMassZoneGraphPathFollowProcessor, ExecutionFlags) == 81, "Offset mismatch for UMassZoneGraphPathFollowProcessor::ExecutionFlags");
static_assert(offsetof(UMassZoneGraphPathFollowProcessor, bAggregateRequirements) == 82, "Offset mismatch for UMassZoneGraphPathFollowProcessor::bAggregateRequirements");
static_assert(offsetof(UMassZoneGraphPathFollowProcessor, ActivationState) == 83, "Offset mismatch for UMassZoneGraphPathFollowProcessor::ActivationState");
static_assert(offsetof(UMassZoneGraphPathFollowProcessor, ExecutionPriority) == 84, "Offset mismatch for UMassZoneGraphPathFollowProcessor::ExecutionPriority");

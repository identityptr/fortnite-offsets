/**
 * decamp dumper generated SDK
 * Package: /Script/OratorStreamingSpeechAnimRuntime
 */
#pragma once
#include "Basic.h"

// /Script/OratorStreamingSpeechAnimRuntime.OratorSpeechAnimSolverPoolSlot
// Kind: ScriptStruct; super: none
struct FOratorSpeechAnimSolverPoolSlot
{
public:
    void* Handle; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FOratorSpeechAnimSolverPoolSlot, Handle) == 0, "Offset mismatch for FOratorSpeechAnimSolverPoolSlot::Handle");

// /Script/OratorStreamingSpeechAnimRuntime.OratorSpeechAnimStoppingSolver
// Kind: ScriptStruct; super: none
struct FOratorSpeechAnimStoppingSolver
{
public:
    void* Handle; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FOratorSpeechAnimStoppingSolver, Handle) == 0, "Offset mismatch for FOratorSpeechAnimStoppingSolver::Handle");

// /Script/OratorStreamingSpeechAnimRuntime.OratorSpeechAnimSolverPoolSubsystem
// Kind: Class; super: WorldSubsystem
class UOratorSpeechAnimSolverPoolSubsystem
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    TArray<void*> IdleSolvers; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> StoppingSolvers; // 0x0048 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UOratorSpeechAnimSolverPoolSubsystem, IdleSolvers) == 56, "Offset mismatch for UOratorSpeechAnimSolverPoolSubsystem::IdleSolvers");
static_assert(offsetof(UOratorSpeechAnimSolverPoolSubsystem, StoppingSolvers) == 72, "Offset mismatch for UOratorSpeechAnimSolverPoolSubsystem::StoppingSolvers");

// /Script/OratorStreamingSpeechAnimRuntime.OratorStreamingSpeechAnimProvider
// Kind: Class; super: OratorSpeechAnimationProvider
class UOratorStreamingSpeechAnimProvider
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    std::uint8_t AnimationModelData[0x20]; // 0x0048 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t SolverSettings[0x70]; // 0x0068 (Size: 0x70, Type: StructProperty)
    void* LoadedAnimationModelData; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UOratorStreamingSpeechAnimProvider, AnimationModelData) == 72, "Offset mismatch for UOratorStreamingSpeechAnimProvider::AnimationModelData");
static_assert(offsetof(UOratorStreamingSpeechAnimProvider, SolverSettings) == 104, "Offset mismatch for UOratorStreamingSpeechAnimProvider::SolverSettings");
static_assert(offsetof(UOratorStreamingSpeechAnimProvider, LoadedAnimationModelData) == 216, "Offset mismatch for UOratorStreamingSpeechAnimProvider::LoadedAnimationModelData");

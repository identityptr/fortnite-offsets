/**
 * decamp dumper generated SDK
 * Package: /Script/FortNPCCharacterMovieSceneBindings
 */
#pragma once
#include "Basic.h"

// /Script/FortNPCCharacterMovieSceneBindings.FortGameFeatureAction_SetSeqNPCClasses
// Kind: Class; super: GameFeatureAction
class UFortGameFeatureAction_SetSeqNPCClasses
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t MannequinClass[0x20]; // 0x0028 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t MannequinAnimInstanceClass[0x20]; // 0x0048 (Size: 0x20, Type: SoftClassProperty)
    TSoftClassPtr<void> ActorPreviewClass; // 0x0068 (Size: 0x28, Type: SoftClassProperty)
};

static_assert(offsetof(UFortGameFeatureAction_SetSeqNPCClasses, MannequinClass) == 40, "Offset mismatch for UFortGameFeatureAction_SetSeqNPCClasses::MannequinClass");
static_assert(offsetof(UFortGameFeatureAction_SetSeqNPCClasses, MannequinAnimInstanceClass) == 72, "Offset mismatch for UFortGameFeatureAction_SetSeqNPCClasses::MannequinAnimInstanceClass");
static_assert(offsetof(UFortGameFeatureAction_SetSeqNPCClasses, ActorPreviewClass) == 104, "Offset mismatch for UFortGameFeatureAction_SetSeqNPCClasses::ActorPreviewClass");

// /Script/FortNPCCharacterMovieSceneBindings.FortNPCCharacterMovieSceneReplaceableBinding
// Kind: Class; super: MovieSceneReplaceableActorBinding
class UFortNPCCharacterMovieSceneReplaceableBinding
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t CharacterDefinition[0x20]; // 0x0028 (Size: 0x20, Type: SoftObjectProperty)
    TArray<void*> LoadedObjects; // 0x0048 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortNPCCharacterMovieSceneReplaceableBinding, CharacterDefinition) == 40, "Offset mismatch for UFortNPCCharacterMovieSceneReplaceableBinding::CharacterDefinition");
static_assert(offsetof(UFortNPCCharacterMovieSceneReplaceableBinding, LoadedObjects) == 72, "Offset mismatch for UFortNPCCharacterMovieSceneReplaceableBinding::LoadedObjects");

// /Script/FortNPCCharacterMovieSceneBindings.FortNPCCharacterMovieSceneSpawnableBinding
// Kind: Class; super: MovieSceneSpawnableActorBindingBase
class UFortNPCCharacterMovieSceneSpawnableBinding
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t CharacterDefinition[0x20]; // 0x0038 (Size: 0x20, Type: SoftObjectProperty)
    void* SpawnableActorClass; // 0x0058 (Size: 0x8, Type: ClassProperty)
    void* ItemDefinition; // 0x0060 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> LoadedObjects; // 0x0068 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortNPCCharacterMovieSceneSpawnableBinding, CharacterDefinition) == 56, "Offset mismatch for UFortNPCCharacterMovieSceneSpawnableBinding::CharacterDefinition");
static_assert(offsetof(UFortNPCCharacterMovieSceneSpawnableBinding, SpawnableActorClass) == 88, "Offset mismatch for UFortNPCCharacterMovieSceneSpawnableBinding::SpawnableActorClass");
static_assert(offsetof(UFortNPCCharacterMovieSceneSpawnableBinding, ItemDefinition) == 96, "Offset mismatch for UFortNPCCharacterMovieSceneSpawnableBinding::ItemDefinition");
static_assert(offsetof(UFortNPCCharacterMovieSceneSpawnableBinding, LoadedObjects) == 104, "Offset mismatch for UFortNPCCharacterMovieSceneSpawnableBinding::LoadedObjects");

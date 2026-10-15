/**
 * decamp dumper generated SDK
 * Package: /Script/CreativeVideoPlayerRuntime
 */
#pragma once
#include "Basic.h"

// /Script/CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenOptions
// Kind: ScriptStruct; super: none
struct FCreativeVideoPlayerFullscreenOptions
{
public:
    std::uint8_t GameplayEffects; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bPromptFirst; // 0x0001 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FCreativeVideoPlayerFullscreenOptions, GameplayEffects) == 0, "Offset mismatch for FCreativeVideoPlayerFullscreenOptions::GameplayEffects");
static_assert(offsetof(FCreativeVideoPlayerFullscreenOptions, bPromptFirst) == 1, "Offset mismatch for FCreativeVideoPlayerFullscreenOptions::bPromptFirst");

// /Script/CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility
// Kind: Class; super: FortGameplayAbility
class UCreativeVideoPlayerFullscreenGameplayAbility
{
public:
    std::uint8_t Pad_0000[0xB20]; // 0x0000
    void* NoCollisionGameplayEffectClass; // 0x0B20 (Size: 0x8, Type: ClassProperty)
    void* NoDamageGameplayEffectClass; // 0x0B28 (Size: 0x8, Type: ClassProperty)
    TArray<void*> AnimationStateGameplayEffectClasses; // 0x0B30 (Size: 0x10, Type: ArrayProperty)
    void* FullscreenWidgetClass; // 0x0B40 (Size: 0x8, Type: ClassProperty)
    std::uint8_t FullscreenEffects; // 0x0B48 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0B49
    void* FullscreenMappingContext; // 0x0B50 (Size: 0x8, Type: ObjectProperty)
    void* FullscreenInputAction; // 0x0B58 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bPromptToConfirmFullscreen; // 0x0B60 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsDismissable; // 0x0B61 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x6]; // 0x0B62
    void* OverrideMovementInputComponent; // 0x0B68 (Size: 0x8, Type: ObjectProperty)
    void* SelectFullscreenModeInputComponent; // 0x0B70 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ActiveGameplayEffects; // 0x0B78 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t RequestedFullscreenEffects; // 0x0B88 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x7]; // 0x0B89
    void* VideoPlayerWidget; // 0x0B90 (Size: 0x8, Type: ObjectProperty)
    void* ExtMediaTextureCached; // 0x0B98 (Size: 0x8, Type: ObjectProperty)
    void* ExtSourceBusCached; // 0x0BA0 (Size: 0x8, Type: ObjectProperty)
    void* ExtMediaSoundComponentCached; // 0x0BA8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bExtComponentsSet; // 0x0BB0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bActivatedFullscreen; // 0x0BB1 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UCreativeVideoPlayerFullscreenGameplayAbility, NoCollisionGameplayEffectClass) == 2848, "Offset mismatch for UCreativeVideoPlayerFullscreenGameplayAbility::NoCollisionGameplayEffectClass");
static_assert(offsetof(UCreativeVideoPlayerFullscreenGameplayAbility, NoDamageGameplayEffectClass) == 2856, "Offset mismatch for UCreativeVideoPlayerFullscreenGameplayAbility::NoDamageGameplayEffectClass");
static_assert(offsetof(UCreativeVideoPlayerFullscreenGameplayAbility, AnimationStateGameplayEffectClasses) == 2864, "Offset mismatch for UCreativeVideoPlayerFullscreenGameplayAbility::AnimationStateGameplayEffectClasses");
static_assert(offsetof(UCreativeVideoPlayerFullscreenGameplayAbility, FullscreenWidgetClass) == 2880, "Offset mismatch for UCreativeVideoPlayerFullscreenGameplayAbility::FullscreenWidgetClass");
static_assert(offsetof(UCreativeVideoPlayerFullscreenGameplayAbility, FullscreenEffects) == 2888, "Offset mismatch for UCreativeVideoPlayerFullscreenGameplayAbility::FullscreenEffects");
static_assert(offsetof(UCreativeVideoPlayerFullscreenGameplayAbility, FullscreenMappingContext) == 2896, "Offset mismatch for UCreativeVideoPlayerFullscreenGameplayAbility::FullscreenMappingContext");
static_assert(offsetof(UCreativeVideoPlayerFullscreenGameplayAbility, FullscreenInputAction) == 2904, "Offset mismatch for UCreativeVideoPlayerFullscreenGameplayAbility::FullscreenInputAction");
static_assert(offsetof(UCreativeVideoPlayerFullscreenGameplayAbility, bPromptToConfirmFullscreen) == 2912, "Offset mismatch for UCreativeVideoPlayerFullscreenGameplayAbility::bPromptToConfirmFullscreen");
static_assert(offsetof(UCreativeVideoPlayerFullscreenGameplayAbility, bIsDismissable) == 2913, "Offset mismatch for UCreativeVideoPlayerFullscreenGameplayAbility::bIsDismissable");
static_assert(offsetof(UCreativeVideoPlayerFullscreenGameplayAbility, OverrideMovementInputComponent) == 2920, "Offset mismatch for UCreativeVideoPlayerFullscreenGameplayAbility::OverrideMovementInputComponent");
static_assert(offsetof(UCreativeVideoPlayerFullscreenGameplayAbility, SelectFullscreenModeInputComponent) == 2928, "Offset mismatch for UCreativeVideoPlayerFullscreenGameplayAbility::SelectFullscreenModeInputComponent");
static_assert(offsetof(UCreativeVideoPlayerFullscreenGameplayAbility, ActiveGameplayEffects) == 2936, "Offset mismatch for UCreativeVideoPlayerFullscreenGameplayAbility::ActiveGameplayEffects");
static_assert(offsetof(UCreativeVideoPlayerFullscreenGameplayAbility, RequestedFullscreenEffects) == 2952, "Offset mismatch for UCreativeVideoPlayerFullscreenGameplayAbility::RequestedFullscreenEffects");
static_assert(offsetof(UCreativeVideoPlayerFullscreenGameplayAbility, VideoPlayerWidget) == 2960, "Offset mismatch for UCreativeVideoPlayerFullscreenGameplayAbility::VideoPlayerWidget");
static_assert(offsetof(UCreativeVideoPlayerFullscreenGameplayAbility, ExtMediaTextureCached) == 2968, "Offset mismatch for UCreativeVideoPlayerFullscreenGameplayAbility::ExtMediaTextureCached");
static_assert(offsetof(UCreativeVideoPlayerFullscreenGameplayAbility, ExtSourceBusCached) == 2976, "Offset mismatch for UCreativeVideoPlayerFullscreenGameplayAbility::ExtSourceBusCached");
static_assert(offsetof(UCreativeVideoPlayerFullscreenGameplayAbility, ExtMediaSoundComponentCached) == 2984, "Offset mismatch for UCreativeVideoPlayerFullscreenGameplayAbility::ExtMediaSoundComponentCached");
static_assert(offsetof(UCreativeVideoPlayerFullscreenGameplayAbility, bExtComponentsSet) == 2992, "Offset mismatch for UCreativeVideoPlayerFullscreenGameplayAbility::bExtComponentsSet");
static_assert(offsetof(UCreativeVideoPlayerFullscreenGameplayAbility, bActivatedFullscreen) == 2993, "Offset mismatch for UCreativeVideoPlayerFullscreenGameplayAbility::bActivatedFullscreen");

// /Script/CreativeVideoPlayerRuntime.CreativeVideoPlayerFunctionLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UCreativeVideoPlayerFunctionLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CreativeVideoPlayerRuntime.CreativeVideoPlayerWorldSubsystem
// Kind: Class; super: WorldSubsystem
class UCreativeVideoPlayerWorldSubsystem
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    FMulticastInlineDelegate OnNotifyFullscreenChange; // 0x0038 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UCreativeVideoPlayerWorldSubsystem, OnNotifyFullscreenChange) == 56, "Offset mismatch for UCreativeVideoPlayerWorldSubsystem::OnNotifyFullscreenChange");

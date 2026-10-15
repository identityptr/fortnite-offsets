/**
 * decamp dumper generated SDK
 * Package: /Script/AudioGameplayBehavior
 */
#pragma once
#include "Basic.h"

// /Script/AudioGameplayBehavior.ActiveVoice
// Kind: ScriptStruct; super: none
struct FActiveVoice
{
public:
    void* Sound; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* Component; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ID[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FActiveVoice, Sound) == 0, "Offset mismatch for FActiveVoice::Sound");
static_assert(offsetof(FActiveVoice, Component) == 8, "Offset mismatch for FActiveVoice::Component");
static_assert(offsetof(FActiveVoice, ID) == 16, "Offset mismatch for FActiveVoice::ID");

// /Script/AudioGameplayBehavior.AudioGameplayBehaviorInstance
// Kind: ScriptStruct; super: none
struct FAudioGameplayBehaviorInstance
{
public:
    void* Sound; // 0x0000 (Size: 0x8, Type: ClassProperty)
    void* Instance; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FAudioGameplayBehaviorInstance, Sound) == 0, "Offset mismatch for FAudioGameplayBehaviorInstance::Sound");
static_assert(offsetof(FAudioGameplayBehaviorInstance, Instance) == 8, "Offset mismatch for FAudioGameplayBehaviorInstance::Instance");

// /Script/AudioGameplayBehavior.PlayingId
// Kind: ScriptStruct; super: none
struct FPlayingId
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AudioGameplayBehavior.AudioGameplayBehavior
// Kind: Class; super: ActorComponent
class UAudioGameplayBehavior
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    std::uint8_t bKillOnSoundsFinished; // 0x00C8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTickWhileStopped; // 0x00C9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x00CA
    FMulticastInlineDelegate OnAllSoundsFinished; // 0x00D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnSoundFinished; // 0x00E0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    TArray<void*> PlayingSounds; // 0x00F0 (Size: 0x10, Type: ArrayProperty)
    void* ComponentGroupOwner; // 0x0100 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bReleaseActiveVoicesOnFadeOut; // 0x0108 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UAudioGameplayBehavior, bKillOnSoundsFinished) == 200, "Offset mismatch for UAudioGameplayBehavior::bKillOnSoundsFinished");
static_assert(offsetof(UAudioGameplayBehavior, bTickWhileStopped) == 201, "Offset mismatch for UAudioGameplayBehavior::bTickWhileStopped");
static_assert(offsetof(UAudioGameplayBehavior, OnAllSoundsFinished) == 208, "Offset mismatch for UAudioGameplayBehavior::OnAllSoundsFinished");
static_assert(offsetof(UAudioGameplayBehavior, OnSoundFinished) == 224, "Offset mismatch for UAudioGameplayBehavior::OnSoundFinished");
static_assert(offsetof(UAudioGameplayBehavior, PlayingSounds) == 240, "Offset mismatch for UAudioGameplayBehavior::PlayingSounds");
static_assert(offsetof(UAudioGameplayBehavior, ComponentGroupOwner) == 256, "Offset mismatch for UAudioGameplayBehavior::ComponentGroupOwner");
static_assert(offsetof(UAudioGameplayBehavior, bReleaseActiveVoicesOnFadeOut) == 264, "Offset mismatch for UAudioGameplayBehavior::bReleaseActiveVoicesOnFadeOut");

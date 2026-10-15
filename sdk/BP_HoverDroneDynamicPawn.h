/**
 * decamp dumper generated SDK
 * Package: /Game/Spectating/BP_HoverDroneDynamicPawn
 */
#pragma once
#include "Basic.h"

// /Game/Spectating/BP_HoverDroneDynamicPawn.BP_HoverDroneDynamicPawn_C
// Kind: BlueprintGeneratedClass; super: HoverDroneDynamicPawn
class UBP_HoverDroneDynamicPawn_C
{
public:
    std::uint8_t Pad_0000[0x4B0]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x04B0 (Size: 0x8, Type: StructProperty)
    std::uint8_t WindAudioEnabled; // 0x04B8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x04B9
    void* AltitudeWindAudioComp; // 0x04C0 (Size: 0x8, Type: ObjectProperty)
    double WindAudioAltMin; // 0x04C8 (Size: 0x8, Type: DoubleProperty)
    double WindAudioAltMax; // 0x04D0 (Size: 0x8, Type: DoubleProperty)
    double WindAudioVolMin; // 0x04D8 (Size: 0x8, Type: DoubleProperty)
    double WindAudioVolMax; // 0x04E0 (Size: 0x8, Type: DoubleProperty)
    void* SoundWindMovementLoop; // 0x04E8 (Size: 0x8, Type: ObjectProperty)
    void* SoundWindAltitudeLoop; // 0x04F0 (Size: 0x8, Type: ObjectProperty)
    double CurrentAltitudeWindVolume; // 0x04F8 (Size: 0x8, Type: DoubleProperty)
    double Speed; // 0x0500 (Size: 0x8, Type: DoubleProperty)
    void* MovementWindAudioComp; // 0x0508 (Size: 0x8, Type: ObjectProperty)
    double CurrentMovementWindVolume; // 0x0510 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(UBP_HoverDroneDynamicPawn_C, UberGraphFrame) == 1200, "Offset mismatch for UBP_HoverDroneDynamicPawn_C::UberGraphFrame");
static_assert(offsetof(UBP_HoverDroneDynamicPawn_C, WindAudioEnabled) == 1208, "Offset mismatch for UBP_HoverDroneDynamicPawn_C::WindAudioEnabled");
static_assert(offsetof(UBP_HoverDroneDynamicPawn_C, AltitudeWindAudioComp) == 1216, "Offset mismatch for UBP_HoverDroneDynamicPawn_C::AltitudeWindAudioComp");
static_assert(offsetof(UBP_HoverDroneDynamicPawn_C, WindAudioAltMin) == 1224, "Offset mismatch for UBP_HoverDroneDynamicPawn_C::WindAudioAltMin");
static_assert(offsetof(UBP_HoverDroneDynamicPawn_C, WindAudioAltMax) == 1232, "Offset mismatch for UBP_HoverDroneDynamicPawn_C::WindAudioAltMax");
static_assert(offsetof(UBP_HoverDroneDynamicPawn_C, WindAudioVolMin) == 1240, "Offset mismatch for UBP_HoverDroneDynamicPawn_C::WindAudioVolMin");
static_assert(offsetof(UBP_HoverDroneDynamicPawn_C, WindAudioVolMax) == 1248, "Offset mismatch for UBP_HoverDroneDynamicPawn_C::WindAudioVolMax");
static_assert(offsetof(UBP_HoverDroneDynamicPawn_C, SoundWindMovementLoop) == 1256, "Offset mismatch for UBP_HoverDroneDynamicPawn_C::SoundWindMovementLoop");
static_assert(offsetof(UBP_HoverDroneDynamicPawn_C, SoundWindAltitudeLoop) == 1264, "Offset mismatch for UBP_HoverDroneDynamicPawn_C::SoundWindAltitudeLoop");
static_assert(offsetof(UBP_HoverDroneDynamicPawn_C, CurrentAltitudeWindVolume) == 1272, "Offset mismatch for UBP_HoverDroneDynamicPawn_C::CurrentAltitudeWindVolume");
static_assert(offsetof(UBP_HoverDroneDynamicPawn_C, Speed) == 1280, "Offset mismatch for UBP_HoverDroneDynamicPawn_C::Speed");
static_assert(offsetof(UBP_HoverDroneDynamicPawn_C, MovementWindAudioComp) == 1288, "Offset mismatch for UBP_HoverDroneDynamicPawn_C::MovementWindAudioComp");
static_assert(offsetof(UBP_HoverDroneDynamicPawn_C, CurrentMovementWindVolume) == 1296, "Offset mismatch for UBP_HoverDroneDynamicPawn_C::CurrentMovementWindVolume");

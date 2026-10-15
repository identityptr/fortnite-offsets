/**
 * decamp dumper generated SDK
 * Package: /FortNPCMusic/Audio/NPCMusicComponent
 */
#pragma once
#include "Basic.h"

// /FortNPCMusic/Audio/NPCMusicComponent.NPCMusicComponent_C
// Kind: BlueprintGeneratedClass; super: ActorComponent
class UNPCMusicComponent_C
{
public:
    std::uint8_t None[0xC0]; // 0x0000 (Size: 0xC0, Type: UnknownProperty)
    std::uint8_t UberGraphFrame[0x8]; // 0x00C0 (Size: 0x8, Type: StructProperty)
    void* AGV; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
    void* AGVClass; // 0x00D0 (Size: 0x8, Type: ClassProperty)
    void* Metasound; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
    double FadeInTime; // 0x00E0 (Size: 0x8, Type: DoubleProperty)
    double FadeOutTime; // 0x00E8 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t MultiplePawnsValid; // 0x00F0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x00F1
    std::uint8_t VolumeRadiusName[0x4]; // 0x00F4 (Size: 0x4, Type: NameProperty)
    float VolumeRadius; // 0x00F8 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UNPCMusicComponent_C, None) == 0, "Offset mismatch for UNPCMusicComponent_C::None");
static_assert(offsetof(UNPCMusicComponent_C, UberGraphFrame) == 192, "Offset mismatch for UNPCMusicComponent_C::UberGraphFrame");
static_assert(offsetof(UNPCMusicComponent_C, AGV) == 200, "Offset mismatch for UNPCMusicComponent_C::AGV");
static_assert(offsetof(UNPCMusicComponent_C, AGVClass) == 208, "Offset mismatch for UNPCMusicComponent_C::AGVClass");
static_assert(offsetof(UNPCMusicComponent_C, Metasound) == 216, "Offset mismatch for UNPCMusicComponent_C::Metasound");
static_assert(offsetof(UNPCMusicComponent_C, FadeInTime) == 224, "Offset mismatch for UNPCMusicComponent_C::FadeInTime");
static_assert(offsetof(UNPCMusicComponent_C, FadeOutTime) == 232, "Offset mismatch for UNPCMusicComponent_C::FadeOutTime");
static_assert(offsetof(UNPCMusicComponent_C, MultiplePawnsValid) == 240, "Offset mismatch for UNPCMusicComponent_C::MultiplePawnsValid");
static_assert(offsetof(UNPCMusicComponent_C, VolumeRadiusName) == 244, "Offset mismatch for UNPCMusicComponent_C::VolumeRadiusName");
static_assert(offsetof(UNPCMusicComponent_C, VolumeRadius) == 248, "Offset mismatch for UNPCMusicComponent_C::VolumeRadius");

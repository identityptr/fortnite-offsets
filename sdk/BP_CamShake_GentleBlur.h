/**
 * decamp dumper generated SDK
 * Package: /FNGameplayCues/Athena/Environments/Blueprints/SkyTube/FX/BP_CamShake_GentleBlur
 */
#pragma once
#include "Basic.h"

// /FNGameplayCues/Athena/Environments/Blueprints/SkyTube/FX/BP_CamShake_GentleBlur.BP_CamShake_GentleBlur_C
// Kind: BlueprintGeneratedClass; super: LegacyCameraShake
class UBP_CamShake_GentleBlur_C
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    float OscillationDuration; // 0x00E0 (Size: 0x4, Type: FloatProperty)
    float OscillationBlendInTime; // 0x00E4 (Size: 0x4, Type: FloatProperty)
    float OscillationBlendOutTime; // 0x00E8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t RotOscillation[0x24]; // 0x00EC (Size: 0x24, Type: StructProperty)
    std::uint8_t LocOscillation[0x24]; // 0x0110 (Size: 0x24, Type: StructProperty)
    std::uint8_t FOVOscillation[0xC]; // 0x0134 (Size: 0xC, Type: StructProperty)
    float AnimPlayRate; // 0x0140 (Size: 0x4, Type: FloatProperty)
    float AnimScale; // 0x0144 (Size: 0x4, Type: FloatProperty)
    float AnimBlendInTime; // 0x0148 (Size: 0x4, Type: FloatProperty)
    float AnimBlendOutTime; // 0x014C (Size: 0x4, Type: FloatProperty)
    float RandomAnimSegmentDuration; // 0x0150 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0154
    void* AnimSequence; // 0x0158 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bRandomAnimSegment; // 0x0160 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0161
    float OscillatorTimeRemaining; // 0x0164 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0003[0x78]; // 0x0168
    void* SequenceShakePattern; // 0x01E0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UBP_CamShake_GentleBlur_C, OscillationDuration) == 224, "Offset mismatch for UBP_CamShake_GentleBlur_C::OscillationDuration");
static_assert(offsetof(UBP_CamShake_GentleBlur_C, OscillationBlendInTime) == 228, "Offset mismatch for UBP_CamShake_GentleBlur_C::OscillationBlendInTime");
static_assert(offsetof(UBP_CamShake_GentleBlur_C, OscillationBlendOutTime) == 232, "Offset mismatch for UBP_CamShake_GentleBlur_C::OscillationBlendOutTime");
static_assert(offsetof(UBP_CamShake_GentleBlur_C, RotOscillation) == 236, "Offset mismatch for UBP_CamShake_GentleBlur_C::RotOscillation");
static_assert(offsetof(UBP_CamShake_GentleBlur_C, LocOscillation) == 272, "Offset mismatch for UBP_CamShake_GentleBlur_C::LocOscillation");
static_assert(offsetof(UBP_CamShake_GentleBlur_C, FOVOscillation) == 308, "Offset mismatch for UBP_CamShake_GentleBlur_C::FOVOscillation");
static_assert(offsetof(UBP_CamShake_GentleBlur_C, AnimPlayRate) == 320, "Offset mismatch for UBP_CamShake_GentleBlur_C::AnimPlayRate");
static_assert(offsetof(UBP_CamShake_GentleBlur_C, AnimScale) == 324, "Offset mismatch for UBP_CamShake_GentleBlur_C::AnimScale");
static_assert(offsetof(UBP_CamShake_GentleBlur_C, AnimBlendInTime) == 328, "Offset mismatch for UBP_CamShake_GentleBlur_C::AnimBlendInTime");
static_assert(offsetof(UBP_CamShake_GentleBlur_C, AnimBlendOutTime) == 332, "Offset mismatch for UBP_CamShake_GentleBlur_C::AnimBlendOutTime");
static_assert(offsetof(UBP_CamShake_GentleBlur_C, RandomAnimSegmentDuration) == 336, "Offset mismatch for UBP_CamShake_GentleBlur_C::RandomAnimSegmentDuration");
static_assert(offsetof(UBP_CamShake_GentleBlur_C, AnimSequence) == 344, "Offset mismatch for UBP_CamShake_GentleBlur_C::AnimSequence");
static_assert(offsetof(UBP_CamShake_GentleBlur_C, bRandomAnimSegment) == 352, "Offset mismatch for UBP_CamShake_GentleBlur_C::bRandomAnimSegment");
static_assert(offsetof(UBP_CamShake_GentleBlur_C, OscillatorTimeRemaining) == 356, "Offset mismatch for UBP_CamShake_GentleBlur_C::OscillatorTimeRemaining");
static_assert(offsetof(UBP_CamShake_GentleBlur_C, SequenceShakePattern) == 480, "Offset mismatch for UBP_CamShake_GentleBlur_C::SequenceShakePattern");

/**
 * decamp dumper generated SDK
 * Package: /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender
 */
#pragma once
#include "Basic.h"

// /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C
// Kind: BlueprintGeneratedClass; super: FortAscenderZipline
class UB_Athena_Zipline_Ascender_C
{
public:
    std::uint8_t None[0xFD0]; // 0x0000 (Size: 0xFD0, Type: UnknownProperty)
    std::uint8_t UberGraphFrame[0x8]; // 0x0FD0 (Size: 0x8, Type: StructProperty)
    void* AudioParameter; // 0x0FD8 (Size: 0x8, Type: ObjectProperty)
    void* Capsule; // 0x0FE0 (Size: 0x8, Type: ObjectProperty)
    void* Ascender_End_Cap; // 0x0FE8 (Size: 0x8, Type: ObjectProperty)
    void* PoleMotorSFX; // 0x0FF0 (Size: 0x8, Type: ObjectProperty)
    void* HandleVFX; // 0x0FF8 (Size: 0x8, Type: ObjectProperty)
    void* PoleMotorVFX; // 0x1000 (Size: 0x8, Type: ObjectProperty)
    void* HandleAscendingSFX; // 0x1008 (Size: 0x8, Type: ObjectProperty)
    void* HandleDescendingSFX; // 0x1010 (Size: 0x8, Type: ObjectProperty)
    void* HandleInteractVolume; // 0x1018 (Size: 0x8, Type: ObjectProperty)
    void* Handle; // 0x1020 (Size: 0x8, Type: ObjectProperty)
    void* Top; // 0x1028 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Hotfix[0x28]; // 0x1030 (Size: 0x28, Type: StructProperty)
    void* StartHandleSound; // 0x1058 (Size: 0x8, Type: ObjectProperty)
    void* StopHandleSound; // 0x1060 (Size: 0x8, Type: ObjectProperty)
    void* StopPoleMotorSoundSkid; // 0x1068 (Size: 0x8, Type: ObjectProperty)
    void* SplineMeshMaterialOverride; // 0x1070 (Size: 0x8, Type: ObjectProperty)
    void* AscendingHandleVFX; // 0x1078 (Size: 0x8, Type: ObjectProperty)
    void* DescendingHandleVFX; // 0x1080 (Size: 0x8, Type: ObjectProperty)
    void* SplineThickenMeshMaterialOverride; // 0x1088 (Size: 0x8, Type: ObjectProperty)
    double MaxWobbleAnimationLength; // 0x1090 (Size: 0x8, Type: DoubleProperty)
    double LastWobbleActivationTime; // 0x1098 (Size: 0x8, Type: DoubleProperty)
    double TilingDivisor; // 0x10A0 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t HandleAnimOffset[0x18]; // 0x10A8 (Size: 0x18, Type: StructProperty)
    std::uint8_t SlideAnimOffset[0x18]; // 0x10C0 (Size: 0x18, Type: StructProperty)
    void* PlayerGrabBeginDecentSound; // 0x10D8 (Size: 0x8, Type: ObjectProperty)
    void* HandleStart; // 0x10E0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t EndCapRelativeScale[0x1]; // 0x10E8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UB_Athena_Zipline_Ascender_C, None) == 0, "Offset mismatch for UB_Athena_Zipline_Ascender_C::None");
static_assert(offsetof(UB_Athena_Zipline_Ascender_C, UberGraphFrame) == 4048, "Offset mismatch for UB_Athena_Zipline_Ascender_C::UberGraphFrame");
static_assert(offsetof(UB_Athena_Zipline_Ascender_C, AudioParameter) == 4056, "Offset mismatch for UB_Athena_Zipline_Ascender_C::AudioParameter");
static_assert(offsetof(UB_Athena_Zipline_Ascender_C, Capsule) == 4064, "Offset mismatch for UB_Athena_Zipline_Ascender_C::Capsule");
static_assert(offsetof(UB_Athena_Zipline_Ascender_C, Ascender_End_Cap) == 4072, "Offset mismatch for UB_Athena_Zipline_Ascender_C::Ascender_End_Cap");
static_assert(offsetof(UB_Athena_Zipline_Ascender_C, PoleMotorSFX) == 4080, "Offset mismatch for UB_Athena_Zipline_Ascender_C::PoleMotorSFX");
static_assert(offsetof(UB_Athena_Zipline_Ascender_C, HandleVFX) == 4088, "Offset mismatch for UB_Athena_Zipline_Ascender_C::HandleVFX");
static_assert(offsetof(UB_Athena_Zipline_Ascender_C, PoleMotorVFX) == 4096, "Offset mismatch for UB_Athena_Zipline_Ascender_C::PoleMotorVFX");
static_assert(offsetof(UB_Athena_Zipline_Ascender_C, HandleAscendingSFX) == 4104, "Offset mismatch for UB_Athena_Zipline_Ascender_C::HandleAscendingSFX");
static_assert(offsetof(UB_Athena_Zipline_Ascender_C, HandleDescendingSFX) == 4112, "Offset mismatch for UB_Athena_Zipline_Ascender_C::HandleDescendingSFX");
static_assert(offsetof(UB_Athena_Zipline_Ascender_C, HandleInteractVolume) == 4120, "Offset mismatch for UB_Athena_Zipline_Ascender_C::HandleInteractVolume");
static_assert(offsetof(UB_Athena_Zipline_Ascender_C, Handle) == 4128, "Offset mismatch for UB_Athena_Zipline_Ascender_C::Handle");
static_assert(offsetof(UB_Athena_Zipline_Ascender_C, Top) == 4136, "Offset mismatch for UB_Athena_Zipline_Ascender_C::Top");
static_assert(offsetof(UB_Athena_Zipline_Ascender_C, Hotfix) == 4144, "Offset mismatch for UB_Athena_Zipline_Ascender_C::Hotfix");
static_assert(offsetof(UB_Athena_Zipline_Ascender_C, StartHandleSound) == 4184, "Offset mismatch for UB_Athena_Zipline_Ascender_C::StartHandleSound");
static_assert(offsetof(UB_Athena_Zipline_Ascender_C, StopHandleSound) == 4192, "Offset mismatch for UB_Athena_Zipline_Ascender_C::StopHandleSound");
static_assert(offsetof(UB_Athena_Zipline_Ascender_C, StopPoleMotorSoundSkid) == 4200, "Offset mismatch for UB_Athena_Zipline_Ascender_C::StopPoleMotorSoundSkid");
static_assert(offsetof(UB_Athena_Zipline_Ascender_C, SplineMeshMaterialOverride) == 4208, "Offset mismatch for UB_Athena_Zipline_Ascender_C::SplineMeshMaterialOverride");
static_assert(offsetof(UB_Athena_Zipline_Ascender_C, AscendingHandleVFX) == 4216, "Offset mismatch for UB_Athena_Zipline_Ascender_C::AscendingHandleVFX");
static_assert(offsetof(UB_Athena_Zipline_Ascender_C, DescendingHandleVFX) == 4224, "Offset mismatch for UB_Athena_Zipline_Ascender_C::DescendingHandleVFX");
static_assert(offsetof(UB_Athena_Zipline_Ascender_C, SplineThickenMeshMaterialOverride) == 4232, "Offset mismatch for UB_Athena_Zipline_Ascender_C::SplineThickenMeshMaterialOverride");
static_assert(offsetof(UB_Athena_Zipline_Ascender_C, MaxWobbleAnimationLength) == 4240, "Offset mismatch for UB_Athena_Zipline_Ascender_C::MaxWobbleAnimationLength");
static_assert(offsetof(UB_Athena_Zipline_Ascender_C, LastWobbleActivationTime) == 4248, "Offset mismatch for UB_Athena_Zipline_Ascender_C::LastWobbleActivationTime");
static_assert(offsetof(UB_Athena_Zipline_Ascender_C, TilingDivisor) == 4256, "Offset mismatch for UB_Athena_Zipline_Ascender_C::TilingDivisor");
static_assert(offsetof(UB_Athena_Zipline_Ascender_C, HandleAnimOffset) == 4264, "Offset mismatch for UB_Athena_Zipline_Ascender_C::HandleAnimOffset");
static_assert(offsetof(UB_Athena_Zipline_Ascender_C, SlideAnimOffset) == 4288, "Offset mismatch for UB_Athena_Zipline_Ascender_C::SlideAnimOffset");
static_assert(offsetof(UB_Athena_Zipline_Ascender_C, PlayerGrabBeginDecentSound) == 4312, "Offset mismatch for UB_Athena_Zipline_Ascender_C::PlayerGrabBeginDecentSound");
static_assert(offsetof(UB_Athena_Zipline_Ascender_C, HandleStart) == 4320, "Offset mismatch for UB_Athena_Zipline_Ascender_C::HandleStart");
static_assert(offsetof(UB_Athena_Zipline_Ascender_C, EndCapRelativeScale) == 4328, "Offset mismatch for UB_Athena_Zipline_Ascender_C::EndCapRelativeScale");

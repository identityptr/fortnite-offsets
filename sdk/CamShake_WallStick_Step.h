/**
 * decamp dumper generated SDK
 * Package: /WallStick/Camera/CamShake_WallStick_Step
 */
#pragma once
#include "Basic.h"

// /WallStick/Camera/CamShake_WallStick_Step.CamShake_WallStick_Step_C
// Kind: BlueprintGeneratedClass; super: DefaultCameraShakeBase
class UCamShake_WallStick_Step_C
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bSingleInstance; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0029
    float ShakeScale; // 0x002C (Size: 0x4, Type: FloatProperty)
    void* RootShakePattern; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    void* CameraManager; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UCamShake_WallStick_Step_C, bSingleInstance) == 40, "Offset mismatch for UCamShake_WallStick_Step_C::bSingleInstance");
static_assert(offsetof(UCamShake_WallStick_Step_C, ShakeScale) == 44, "Offset mismatch for UCamShake_WallStick_Step_C::ShakeScale");
static_assert(offsetof(UCamShake_WallStick_Step_C, RootShakePattern) == 48, "Offset mismatch for UCamShake_WallStick_Step_C::RootShakePattern");
static_assert(offsetof(UCamShake_WallStick_Step_C, CameraManager) == 56, "Offset mismatch for UCamShake_WallStick_Step_C::CameraManager");

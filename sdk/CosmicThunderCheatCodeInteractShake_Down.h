/**
 * decamp dumper generated SDK
 * Package: /CosmicThunderCheatCodesGameplay/Gameplay/Camera/CosmicThunderCheatCodeInteractShake_Down
 */
#pragma once
#include "Basic.h"

// /CosmicThunderCheatCodesGameplay/Gameplay/Camera/CosmicThunderCheatCodeInteractShake_Down.CosmicThunderCheatCodeInteractShake_Down_C
// Kind: BlueprintGeneratedClass; super: DefaultCameraShakeBase
class UCosmicThunderCheatCodeInteractShake_Down_C
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bSingleInstance; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0029
    float ShakeScale; // 0x002C (Size: 0x4, Type: FloatProperty)
    void* RootShakePattern; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    void* CameraManager; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UCosmicThunderCheatCodeInteractShake_Down_C, bSingleInstance) == 40, "Offset mismatch for UCosmicThunderCheatCodeInteractShake_Down_C::bSingleInstance");
static_assert(offsetof(UCosmicThunderCheatCodeInteractShake_Down_C, ShakeScale) == 44, "Offset mismatch for UCosmicThunderCheatCodeInteractShake_Down_C::ShakeScale");
static_assert(offsetof(UCosmicThunderCheatCodeInteractShake_Down_C, RootShakePattern) == 48, "Offset mismatch for UCosmicThunderCheatCodeInteractShake_Down_C::RootShakePattern");
static_assert(offsetof(UCosmicThunderCheatCodeInteractShake_Down_C, CameraManager) == 56, "Offset mismatch for UCosmicThunderCheatCodeInteractShake_Down_C::CameraManager");

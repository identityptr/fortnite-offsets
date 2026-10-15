/**
 * decamp dumper generated SDK
 * Package: /Script/CreativeEditCameraModeRuntime
 */
#pragma once
#include "Basic.h"

// /Script/CreativeEditCameraModeRuntime.FortCreativeEditCameraController
// Kind: Class; super: FortFirstPersonCameraController
class UFortCreativeEditCameraController
{
public:
    std::uint8_t Pad_0000[0x468]; // 0x0000
    std::uint8_t WantsToImmersiveEdit[0x1]; // 0x0468 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortCreativeEditCameraController, WantsToImmersiveEdit) == 1128, "Offset mismatch for UFortCreativeEditCameraController::WantsToImmersiveEdit");

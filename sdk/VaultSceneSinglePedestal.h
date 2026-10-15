/**
 * decamp dumper generated SDK
 * Package: /Game/Environments/FrontEnd/Blueprints/ItemPreview/VaultSceneSinglePedestal
 */
#pragma once
#include "Basic.h"

// /Game/Environments/FrontEnd/Blueprints/ItemPreview/VaultSceneSinglePedestal.VaultSceneSinglePedestal_C
// Kind: BlueprintGeneratedClass; super: ItemPreviewScene
class UVaultSceneSinglePedestal_C
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    void* FocusCameraTargetComponent; // 0x0270 (Size: 0x8, Type: ObjectProperty)
    void* FocusCameraTargetPedestal; // 0x0278 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> BackgroundCameraTargetPedestals; // 0x0280 (Size: 0x10, Type: ArrayProperty)
    void* PreviewCameraComponent; // 0x0290 (Size: 0x8, Type: ObjectProperty)
    void* PreviewRigComponent; // 0x0298 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ItemViewSettings[0x50]; // 0x02A0 (Size: 0x50, Type: StructProperty)
    TArray<void*> PedestalsLoading; // 0x02F0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UVaultSceneSinglePedestal_C, FocusCameraTargetComponent) == 624, "Offset mismatch for UVaultSceneSinglePedestal_C::FocusCameraTargetComponent");
static_assert(offsetof(UVaultSceneSinglePedestal_C, FocusCameraTargetPedestal) == 632, "Offset mismatch for UVaultSceneSinglePedestal_C::FocusCameraTargetPedestal");
static_assert(offsetof(UVaultSceneSinglePedestal_C, BackgroundCameraTargetPedestals) == 640, "Offset mismatch for UVaultSceneSinglePedestal_C::BackgroundCameraTargetPedestals");
static_assert(offsetof(UVaultSceneSinglePedestal_C, PreviewCameraComponent) == 656, "Offset mismatch for UVaultSceneSinglePedestal_C::PreviewCameraComponent");
static_assert(offsetof(UVaultSceneSinglePedestal_C, PreviewRigComponent) == 664, "Offset mismatch for UVaultSceneSinglePedestal_C::PreviewRigComponent");
static_assert(offsetof(UVaultSceneSinglePedestal_C, ItemViewSettings) == 672, "Offset mismatch for UVaultSceneSinglePedestal_C::ItemViewSettings");
static_assert(offsetof(UVaultSceneSinglePedestal_C, PedestalsLoading) == 752, "Offset mismatch for UVaultSceneSinglePedestal_C::PedestalsLoading");

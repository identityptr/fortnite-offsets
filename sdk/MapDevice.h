/**
 * decamp dumper generated SDK
 * Package: /Script/MapDevice
 */
#pragma once
#include "Basic.h"

// /Script/MapDevice.CRDMapCustomizationComponent
// Kind: Class; super: ActorComponent
class UCRDMapCustomizationComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t TextureToLoad[0x20]; // 0x00C0 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t MaterialToLoad[0x20]; // 0x00E0 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t MapMaskMaterialToLoad[0x20]; // 0x0100 (Size: 0x20, Type: SoftObjectProperty)
    void* LoadedTexture; // 0x0120 (Size: 0x8, Type: ObjectProperty)
    void* LoadedMapMaterial; // 0x0128 (Size: 0x8, Type: ObjectProperty)
    void* LoadedMapMaskMaterial; // 0x0130 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UCRDMapCustomizationComponent, TextureToLoad) == 192, "Offset mismatch for UCRDMapCustomizationComponent::TextureToLoad");
static_assert(offsetof(UCRDMapCustomizationComponent, MaterialToLoad) == 224, "Offset mismatch for UCRDMapCustomizationComponent::MaterialToLoad");
static_assert(offsetof(UCRDMapCustomizationComponent, MapMaskMaterialToLoad) == 256, "Offset mismatch for UCRDMapCustomizationComponent::MapMaskMaterialToLoad");
static_assert(offsetof(UCRDMapCustomizationComponent, LoadedTexture) == 288, "Offset mismatch for UCRDMapCustomizationComponent::LoadedTexture");
static_assert(offsetof(UCRDMapCustomizationComponent, LoadedMapMaterial) == 296, "Offset mismatch for UCRDMapCustomizationComponent::LoadedMapMaterial");
static_assert(offsetof(UCRDMapCustomizationComponent, LoadedMapMaskMaterial) == 304, "Offset mismatch for UCRDMapCustomizationComponent::LoadedMapMaskMaterial");

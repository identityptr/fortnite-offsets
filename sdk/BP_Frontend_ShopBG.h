/**
 * decamp dumper generated SDK
 * Package: /Game/Athena/UI/Frontend/Art/BP_Frontend_ShopBG
 */
#pragma once
#include "Basic.h"

// /Game/Athena/UI/Frontend/Art/BP_Frontend_ShopBG.BP_Frontend_ShopBG_C
// Kind: BlueprintGeneratedClass; super: Actor
class UBP_Frontend_ShopBG_C
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x0270 (Size: 0x8, Type: StructProperty)
    void* StandardBackgroundPlane1; // 0x0278 (Size: 0x8, Type: ObjectProperty)
    void* StandardBackgroundPlane; // 0x0280 (Size: 0x8, Type: ObjectProperty)
    void* Cone; // 0x0288 (Size: 0x8, Type: ObjectProperty)
    void* Plane; // 0x0290 (Size: 0x8, Type: ObjectProperty)
    void* Scene; // 0x0298 (Size: 0x8, Type: ObjectProperty)
    void* BackgroundTexturePlane; // 0x02A0 (Size: 0x8, Type: ObjectProperty)
    void* VeryLargeBackgroundPlane; // 0x02A8 (Size: 0x8, Type: ObjectProperty)
    void* Scene_Signal; // 0x02B0 (Size: 0x8, Type: ObjectProperty)
    void* DefaultSceneRoot; // 0x02B8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x60]; // 0x02C0
    double PlayRate; // 0x0320 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t Pad_0002[0x30]; // 0x0328
    void* MID; // 0x0358 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UBP_Frontend_ShopBG_C, UberGraphFrame) == 624, "Offset mismatch for UBP_Frontend_ShopBG_C::UberGraphFrame");
static_assert(offsetof(UBP_Frontend_ShopBG_C, StandardBackgroundPlane1) == 632, "Offset mismatch for UBP_Frontend_ShopBG_C::StandardBackgroundPlane1");
static_assert(offsetof(UBP_Frontend_ShopBG_C, StandardBackgroundPlane) == 640, "Offset mismatch for UBP_Frontend_ShopBG_C::StandardBackgroundPlane");
static_assert(offsetof(UBP_Frontend_ShopBG_C, Cone) == 648, "Offset mismatch for UBP_Frontend_ShopBG_C::Cone");
static_assert(offsetof(UBP_Frontend_ShopBG_C, Plane) == 656, "Offset mismatch for UBP_Frontend_ShopBG_C::Plane");
static_assert(offsetof(UBP_Frontend_ShopBG_C, Scene) == 664, "Offset mismatch for UBP_Frontend_ShopBG_C::Scene");
static_assert(offsetof(UBP_Frontend_ShopBG_C, BackgroundTexturePlane) == 672, "Offset mismatch for UBP_Frontend_ShopBG_C::BackgroundTexturePlane");
static_assert(offsetof(UBP_Frontend_ShopBG_C, VeryLargeBackgroundPlane) == 680, "Offset mismatch for UBP_Frontend_ShopBG_C::VeryLargeBackgroundPlane");
static_assert(offsetof(UBP_Frontend_ShopBG_C, Scene_Signal) == 688, "Offset mismatch for UBP_Frontend_ShopBG_C::Scene_Signal");
static_assert(offsetof(UBP_Frontend_ShopBG_C, DefaultSceneRoot) == 696, "Offset mismatch for UBP_Frontend_ShopBG_C::DefaultSceneRoot");
static_assert(offsetof(UBP_Frontend_ShopBG_C, PlayRate) == 800, "Offset mismatch for UBP_Frontend_ShopBG_C::PlayRate");
static_assert(offsetof(UBP_Frontend_ShopBG_C, MID) == 856, "Offset mismatch for UBP_Frontend_ShopBG_C::MID");

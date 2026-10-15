/**
 * decamp dumper generated SDK
 * Package: /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemOnPawnPreview
 */
#pragma once
#include "Basic.h"

// /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemOnPawnPreview.ItemOnPawnPreview_C
// Kind: BlueprintGeneratedClass; super: FortItemPreviewOnPawnActor
class UItemOnPawnPreview_C
{
public:
    std::uint8_t Pad_0000[0x820]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x0820 (Size: 0x8, Type: StructProperty)
    void* Temp_IASDerezAbsorbPoint; // 0x0828 (Size: 0x8, Type: ObjectProperty)
    void* Arrow1; // 0x0830 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0838
    void* SkyLightPC; // 0x0840 (Size: 0x8, Type: ObjectProperty)
    void* Arrow; // 0x0848 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x8]; // 0x0850
    void* DirectionalLightMobile; // 0x0858 (Size: 0x8, Type: ObjectProperty)
    void* KeyLight_StandaloneForSwitch; // 0x0860 (Size: 0x8, Type: ObjectProperty)
    void* KeyLight5; // 0x0868 (Size: 0x8, Type: ObjectProperty)
    void* KeyLight6; // 0x0870 (Size: 0x8, Type: ObjectProperty)
    void* KeyLigh3; // 0x0878 (Size: 0x8, Type: ObjectProperty)
    void* KeyLight2; // 0x0880 (Size: 0x8, Type: ObjectProperty)
    void* BounceRear1; // 0x0888 (Size: 0x8, Type: ObjectProperty)
    void* RimLowerRight1; // 0x0890 (Size: 0x8, Type: ObjectProperty)
    void* RimLeft1; // 0x0898 (Size: 0x8, Type: ObjectProperty)
    void* RimTopRight1; // 0x08A0 (Size: 0x8, Type: ObjectProperty)
    void* RimBottomLeft1; // 0x08A8 (Size: 0x8, Type: ObjectProperty)
    void* Bounce1; // 0x08B0 (Size: 0x8, Type: ObjectProperty)
    void* LightTransform; // 0x08B8 (Size: 0x8, Type: ObjectProperty)
    void* Plane; // 0x08C0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0003[0x8]; // 0x08C8
    float RezInMaterialEffectTimeLine2_NewTrack_0_FBE08AE14EC4BA399756F0BBFA6ABC31; // 0x08D0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t RezInMaterialEffectTimeLine2_Direction_FBE08AE14EC4BA399756F0BBFA6ABC31; // 0x08D4 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0004[0x3]; // 0x08D5
    void* RezInMaterialEffectTimeLine2; // 0x08D8 (Size: 0x8, Type: ObjectProperty)
    float RezInMaterialEffectTimeLine_NewTrack_0_963A663B4B1DFB2954D581893C8ACFD8; // 0x08E0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t RezInMaterialEffectTimeLine_Direction_963A663B4B1DFB2954D581893C8ACFD8; // 0x08E4 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0005[0x3]; // 0x08E5
    void* RezInMaterialEffectTimeLine; // 0x08E8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0006[0x1]; // 0x08F0
    std::uint8_t IsActive; // 0x08F1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t debugConstructionLighting; // 0x08F2 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0007[0x5]; // 0x08F3
    void* ObscuringLoopEmitter; // 0x08F8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ToonLightRotatio[0x18]; // 0x0900 (Size: 0x18, Type: StructProperty)
    std::uint8_t bIsBattlePassReward; // 0x0918 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0008[0x7]; // 0x0919
    std::uint8_t LOD_StreamingSafetyTimer[0x10]; // 0x0920 (Size: 0x10, Type: StructProperty)
    void* CustomFloorMaterial; // 0x0930 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ItemsPendingTransitionOutHandle[0x18]; // 0x0938 (Size: 0x18, Type: StructProperty)
    std::uint8_t IASResInDelayTimer[0x8]; // 0x0950 (Size: 0x8, Type: StructProperty)
    TArray<void*> PawnMaterialOverrideGuids; // 0x0958 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UItemOnPawnPreview_C, UberGraphFrame) == 2080, "Offset mismatch for UItemOnPawnPreview_C::UberGraphFrame");
static_assert(offsetof(UItemOnPawnPreview_C, Temp_IASDerezAbsorbPoint) == 2088, "Offset mismatch for UItemOnPawnPreview_C::Temp_IASDerezAbsorbPoint");
static_assert(offsetof(UItemOnPawnPreview_C, Arrow1) == 2096, "Offset mismatch for UItemOnPawnPreview_C::Arrow1");
static_assert(offsetof(UItemOnPawnPreview_C, SkyLightPC) == 2112, "Offset mismatch for UItemOnPawnPreview_C::SkyLightPC");
static_assert(offsetof(UItemOnPawnPreview_C, Arrow) == 2120, "Offset mismatch for UItemOnPawnPreview_C::Arrow");
static_assert(offsetof(UItemOnPawnPreview_C, DirectionalLightMobile) == 2136, "Offset mismatch for UItemOnPawnPreview_C::DirectionalLightMobile");
static_assert(offsetof(UItemOnPawnPreview_C, KeyLight_StandaloneForSwitch) == 2144, "Offset mismatch for UItemOnPawnPreview_C::KeyLight_StandaloneForSwitch");
static_assert(offsetof(UItemOnPawnPreview_C, KeyLight5) == 2152, "Offset mismatch for UItemOnPawnPreview_C::KeyLight5");
static_assert(offsetof(UItemOnPawnPreview_C, KeyLight6) == 2160, "Offset mismatch for UItemOnPawnPreview_C::KeyLight6");
static_assert(offsetof(UItemOnPawnPreview_C, KeyLigh3) == 2168, "Offset mismatch for UItemOnPawnPreview_C::KeyLigh3");
static_assert(offsetof(UItemOnPawnPreview_C, KeyLight2) == 2176, "Offset mismatch for UItemOnPawnPreview_C::KeyLight2");
static_assert(offsetof(UItemOnPawnPreview_C, BounceRear1) == 2184, "Offset mismatch for UItemOnPawnPreview_C::BounceRear1");
static_assert(offsetof(UItemOnPawnPreview_C, RimLowerRight1) == 2192, "Offset mismatch for UItemOnPawnPreview_C::RimLowerRight1");
static_assert(offsetof(UItemOnPawnPreview_C, RimLeft1) == 2200, "Offset mismatch for UItemOnPawnPreview_C::RimLeft1");
static_assert(offsetof(UItemOnPawnPreview_C, RimTopRight1) == 2208, "Offset mismatch for UItemOnPawnPreview_C::RimTopRight1");
static_assert(offsetof(UItemOnPawnPreview_C, RimBottomLeft1) == 2216, "Offset mismatch for UItemOnPawnPreview_C::RimBottomLeft1");
static_assert(offsetof(UItemOnPawnPreview_C, Bounce1) == 2224, "Offset mismatch for UItemOnPawnPreview_C::Bounce1");
static_assert(offsetof(UItemOnPawnPreview_C, LightTransform) == 2232, "Offset mismatch for UItemOnPawnPreview_C::LightTransform");
static_assert(offsetof(UItemOnPawnPreview_C, Plane) == 2240, "Offset mismatch for UItemOnPawnPreview_C::Plane");
static_assert(offsetof(UItemOnPawnPreview_C, RezInMaterialEffectTimeLine2_NewTrack_0_FBE08AE14EC4BA399756F0BBFA6ABC31) == 2256, "Offset mismatch for UItemOnPawnPreview_C::RezInMaterialEffectTimeLine2_NewTrack_0_FBE08AE14EC4BA399756F0BBFA6ABC31");
static_assert(offsetof(UItemOnPawnPreview_C, RezInMaterialEffectTimeLine2_Direction_FBE08AE14EC4BA399756F0BBFA6ABC31) == 2260, "Offset mismatch for UItemOnPawnPreview_C::RezInMaterialEffectTimeLine2_Direction_FBE08AE14EC4BA399756F0BBFA6ABC31");
static_assert(offsetof(UItemOnPawnPreview_C, RezInMaterialEffectTimeLine2) == 2264, "Offset mismatch for UItemOnPawnPreview_C::RezInMaterialEffectTimeLine2");
static_assert(offsetof(UItemOnPawnPreview_C, RezInMaterialEffectTimeLine_NewTrack_0_963A663B4B1DFB2954D581893C8ACFD8) == 2272, "Offset mismatch for UItemOnPawnPreview_C::RezInMaterialEffectTimeLine_NewTrack_0_963A663B4B1DFB2954D581893C8ACFD8");
static_assert(offsetof(UItemOnPawnPreview_C, RezInMaterialEffectTimeLine_Direction_963A663B4B1DFB2954D581893C8ACFD8) == 2276, "Offset mismatch for UItemOnPawnPreview_C::RezInMaterialEffectTimeLine_Direction_963A663B4B1DFB2954D581893C8ACFD8");
static_assert(offsetof(UItemOnPawnPreview_C, RezInMaterialEffectTimeLine) == 2280, "Offset mismatch for UItemOnPawnPreview_C::RezInMaterialEffectTimeLine");
static_assert(offsetof(UItemOnPawnPreview_C, IsActive) == 2289, "Offset mismatch for UItemOnPawnPreview_C::IsActive");
static_assert(offsetof(UItemOnPawnPreview_C, debugConstructionLighting) == 2290, "Offset mismatch for UItemOnPawnPreview_C::debugConstructionLighting");
static_assert(offsetof(UItemOnPawnPreview_C, ObscuringLoopEmitter) == 2296, "Offset mismatch for UItemOnPawnPreview_C::ObscuringLoopEmitter");
static_assert(offsetof(UItemOnPawnPreview_C, ToonLightRotatio) == 2304, "Offset mismatch for UItemOnPawnPreview_C::ToonLightRotatio");
static_assert(offsetof(UItemOnPawnPreview_C, bIsBattlePassReward) == 2328, "Offset mismatch for UItemOnPawnPreview_C::bIsBattlePassReward");
static_assert(offsetof(UItemOnPawnPreview_C, LOD_StreamingSafetyTimer) == 2336, "Offset mismatch for UItemOnPawnPreview_C::LOD_StreamingSafetyTimer");
static_assert(offsetof(UItemOnPawnPreview_C, CustomFloorMaterial) == 2352, "Offset mismatch for UItemOnPawnPreview_C::CustomFloorMaterial");
static_assert(offsetof(UItemOnPawnPreview_C, ItemsPendingTransitionOutHandle) == 2360, "Offset mismatch for UItemOnPawnPreview_C::ItemsPendingTransitionOutHandle");
static_assert(offsetof(UItemOnPawnPreview_C, IASResInDelayTimer) == 2384, "Offset mismatch for UItemOnPawnPreview_C::IASResInDelayTimer");
static_assert(offsetof(UItemOnPawnPreview_C, PawnMaterialOverrideGuids) == 2392, "Offset mismatch for UItemOnPawnPreview_C::PawnMaterialOverrideGuids");

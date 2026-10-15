/**
 * decamp dumper generated SDK
 * Package: /FortUILibrary/Systems/Items/WBP_UIKit_ItemCard_Base
 */
#pragma once
#include "Basic.h"

// /FortUILibrary/Systems/Items/WBP_UIKit_ItemCard_Base.WBP_UIKit_ItemCard_Base_C
// Kind: WidgetBlueprintGeneratedClass; super: UIKitHoldableModularButton
class UWBP_UIKit_ItemCard_Base_C
{
public:
    std::uint8_t Pad_0000[0x16C0]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x16C0 (Size: 0x8, Type: StructProperty)
    void* UIKit_Transference; // 0x16C8 (Size: 0x8, Type: ObjectProperty)
    void* Slot_Main; // 0x16D0 (Size: 0x8, Type: ObjectProperty)
    void* Slot_Custom; // 0x16D8 (Size: 0x8, Type: ObjectProperty)
    void* Slot_BelowImage; // 0x16E0 (Size: 0x8, Type: ObjectProperty)
    void* Slot_Background; // 0x16E8 (Size: 0x8, Type: ObjectProperty)
    void* SizeBox; // 0x16F0 (Size: 0x8, Type: ObjectProperty)
    void* Root; // 0x16F8 (Size: 0x8, Type: ObjectProperty)
    void* RightIndicators; // 0x1700 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x1708
    void* LazyImage_Item; // 0x1710 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x8]; // 0x1718
    void* EquippedState_Outline; // 0x1720 (Size: 0x8, Type: ObjectProperty)
    void* CosmeticGating_Icon; // 0x1728 (Size: 0x8, Type: ObjectProperty)
    void* Compatibility_Icon; // 0x1730 (Size: 0x8, Type: ObjectProperty)
    void* BottomLeftIndicators; // 0x1738 (Size: 0x8, Type: ObjectProperty)
    void* Block_Outline; // 0x1740 (Size: 0x8, Type: ObjectProperty)
    void* Background; // 0x1748 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0003[0x8]; // 0x1750
    std::uint8_t ItemCardSize[0x10]; // 0x1758 (Size: 0x10, Type: StructProperty)
    void* ItemMaterial; // 0x1768 (Size: 0x8, Type: ObjectProperty)
    TSoftObjectPtr<void> ItemImage; // 0x1770 (Size: 0x28, Type: SoftObjectProperty)
    std::uint8_t Pad_0004[0x10]; // 0x1798
    std::uint8_t MobileRewardItemSize[0x10]; // 0x17A8 (Size: 0x10, Type: StructProperty)
    double ItemScaleDelta; // 0x17B8 (Size: 0x8, Type: DoubleProperty)
    void* HoveredSound; // 0x17C0 (Size: 0x8, Type: ObjectProperty)
    void* PressedSound; // 0x17C8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0005[0x1]; // 0x17D0
    std::uint8_t IsLockedStateSet; // 0x17D1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x1]; // 0x17D2
    std::uint8_t IsArchiveStateSet; // 0x17D3 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0007[0x24]; // 0x17D4
    FMulticastInlineDelegate OnCardPressed; // 0x17F8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnCardHovered; // 0x1808 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnCardUnhovered; // 0x1818 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t IsConflictStateSet; // 0x1828 (Size: 0x1, Type: BoolProperty)
    std::uint8_t IsNewStateSet; // 0x1829 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0008[0x6]; // 0x182A
    void* BackgroundDynamicMaterial; // 0x1830 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0009[0x15]; // 0x1838
    std::uint8_t UseAdaptiveBackground; // 0x184D (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000A[0x32]; // 0x184E
    TMap<void*, void*> StatusIndicatorCache; // 0x1880 (Size: 0x10, Type: MapProperty)
    std::uint8_t Pad_000B[0x20]; // 0x1890
    std::uint8_t IsButtonFocused; // 0x18B0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000C[0x27]; // 0x18B1
    double CurrentHoldProgress; // 0x18D8 (Size: 0x8, Type: DoubleProperty)
    void* HoldPressedSound; // 0x18E0 (Size: 0x8, Type: ObjectProperty)
    void* HoldSound; // 0x18E8 (Size: 0x8, Type: ObjectProperty)
    void* HoldSoundAudioComponent; // 0x18F0 (Size: 0x8, Type: ObjectProperty)
    void* PressedSoundAudioComponent; // 0x18F8 (Size: 0x8, Type: ObjectProperty)
    double FadeOutTime; // 0x1900 (Size: 0x8, Type: DoubleProperty)
    void* HoldReleasedSound; // 0x1908 (Size: 0x8, Type: ObjectProperty)
    void* HoldCompletedSound; // 0x1910 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t OverrideCornerRadius; // 0x1918 (Size: 0x1, Type: BoolProperty)
    std::uint8_t RadiusInPixels; // 0x1919 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000D[0xE]; // 0x191A
    double CornerRadius_TopRight; // 0x1928 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t Pad_000E[0x8]; // 0x1930
    double CornerRadius_BottomRight; // 0x1938 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t Pad_000F[0x28]; // 0x1940
    std::uint8_t ItemReference[0x38]; // 0x1968 (Size: 0x38, Type: StructProperty)
    std::uint8_t HoldTimer[0x8]; // 0x19A0 (Size: 0x8, Type: StructProperty)
    FMulticastInlineDelegate OnItemCardSelected; // 0x19A8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UWBP_UIKit_ItemCard_Base_C, UberGraphFrame) == 5824, "Offset mismatch for UWBP_UIKit_ItemCard_Base_C::UberGraphFrame");
static_assert(offsetof(UWBP_UIKit_ItemCard_Base_C, UIKit_Transference) == 5832, "Offset mismatch for UWBP_UIKit_ItemCard_Base_C::UIKit_Transference");
static_assert(offsetof(UWBP_UIKit_ItemCard_Base_C, Slot_Main) == 5840, "Offset mismatch for UWBP_UIKit_ItemCard_Base_C::Slot_Main");
static_assert(offsetof(UWBP_UIKit_ItemCard_Base_C, Slot_Custom) == 5848, "Offset mismatch for UWBP_UIKit_ItemCard_Base_C::Slot_Custom");
static_assert(offsetof(UWBP_UIKit_ItemCard_Base_C, Slot_BelowImage) == 5856, "Offset mismatch for UWBP_UIKit_ItemCard_Base_C::Slot_BelowImage");
static_assert(offsetof(UWBP_UIKit_ItemCard_Base_C, Slot_Background) == 5864, "Offset mismatch for UWBP_UIKit_ItemCard_Base_C::Slot_Background");
static_assert(offsetof(UWBP_UIKit_ItemCard_Base_C, SizeBox) == 5872, "Offset mismatch for UWBP_UIKit_ItemCard_Base_C::SizeBox");
static_assert(offsetof(UWBP_UIKit_ItemCard_Base_C, Root) == 5880, "Offset mismatch for UWBP_UIKit_ItemCard_Base_C::Root");
static_assert(offsetof(UWBP_UIKit_ItemCard_Base_C, RightIndicators) == 5888, "Offset mismatch for UWBP_UIKit_ItemCard_Base_C::RightIndicators");
static_assert(offsetof(UWBP_UIKit_ItemCard_Base_C, LazyImage_Item) == 5904, "Offset mismatch for UWBP_UIKit_ItemCard_Base_C::LazyImage_Item");
static_assert(offsetof(UWBP_UIKit_ItemCard_Base_C, EquippedState_Outline) == 5920, "Offset mismatch for UWBP_UIKit_ItemCard_Base_C::EquippedState_Outline");
static_assert(offsetof(UWBP_UIKit_ItemCard_Base_C, CosmeticGating_Icon) == 5928, "Offset mismatch for UWBP_UIKit_ItemCard_Base_C::CosmeticGating_Icon");
static_assert(offsetof(UWBP_UIKit_ItemCard_Base_C, Compatibility_Icon) == 5936, "Offset mismatch for UWBP_UIKit_ItemCard_Base_C::Compatibility_Icon");
static_assert(offsetof(UWBP_UIKit_ItemCard_Base_C, BottomLeftIndicators) == 5944, "Offset mismatch for UWBP_UIKit_ItemCard_Base_C::BottomLeftIndicators");
static_assert(offsetof(UWBP_UIKit_ItemCard_Base_C, Block_Outline) == 5952, "Offset mismatch for UWBP_UIKit_ItemCard_Base_C::Block_Outline");
static_assert(offsetof(UWBP_UIKit_ItemCard_Base_C, Background) == 5960, "Offset mismatch for UWBP_UIKit_ItemCard_Base_C::Background");
static_assert(offsetof(UWBP_UIKit_ItemCard_Base_C, ItemCardSize) == 5976, "Offset mismatch for UWBP_UIKit_ItemCard_Base_C::ItemCardSize");
static_assert(offsetof(UWBP_UIKit_ItemCard_Base_C, ItemMaterial) == 5992, "Offset mismatch for UWBP_UIKit_ItemCard_Base_C::ItemMaterial");
static_assert(offsetof(UWBP_UIKit_ItemCard_Base_C, ItemImage) == 6000, "Offset mismatch for UWBP_UIKit_ItemCard_Base_C::ItemImage");
static_assert(offsetof(UWBP_UIKit_ItemCard_Base_C, MobileRewardItemSize) == 6056, "Offset mismatch for UWBP_UIKit_ItemCard_Base_C::MobileRewardItemSize");
static_assert(offsetof(UWBP_UIKit_ItemCard_Base_C, ItemScaleDelta) == 6072, "Offset mismatch for UWBP_UIKit_ItemCard_Base_C::ItemScaleDelta");
static_assert(offsetof(UWBP_UIKit_ItemCard_Base_C, HoveredSound) == 6080, "Offset mismatch for UWBP_UIKit_ItemCard_Base_C::HoveredSound");
static_assert(offsetof(UWBP_UIKit_ItemCard_Base_C, PressedSound) == 6088, "Offset mismatch for UWBP_UIKit_ItemCard_Base_C::PressedSound");
static_assert(offsetof(UWBP_UIKit_ItemCard_Base_C, IsLockedStateSet) == 6097, "Offset mismatch for UWBP_UIKit_ItemCard_Base_C::IsLockedStateSet");
static_assert(offsetof(UWBP_UIKit_ItemCard_Base_C, IsArchiveStateSet) == 6099, "Offset mismatch for UWBP_UIKit_ItemCard_Base_C::IsArchiveStateSet");
static_assert(offsetof(UWBP_UIKit_ItemCard_Base_C, OnCardPressed) == 6136, "Offset mismatch for UWBP_UIKit_ItemCard_Base_C::OnCardPressed");
static_assert(offsetof(UWBP_UIKit_ItemCard_Base_C, OnCardHovered) == 6152, "Offset mismatch for UWBP_UIKit_ItemCard_Base_C::OnCardHovered");
static_assert(offsetof(UWBP_UIKit_ItemCard_Base_C, OnCardUnhovered) == 6168, "Offset mismatch for UWBP_UIKit_ItemCard_Base_C::OnCardUnhovered");
static_assert(offsetof(UWBP_UIKit_ItemCard_Base_C, IsConflictStateSet) == 6184, "Offset mismatch for UWBP_UIKit_ItemCard_Base_C::IsConflictStateSet");
static_assert(offsetof(UWBP_UIKit_ItemCard_Base_C, IsNewStateSet) == 6185, "Offset mismatch for UWBP_UIKit_ItemCard_Base_C::IsNewStateSet");
static_assert(offsetof(UWBP_UIKit_ItemCard_Base_C, BackgroundDynamicMaterial) == 6192, "Offset mismatch for UWBP_UIKit_ItemCard_Base_C::BackgroundDynamicMaterial");
static_assert(offsetof(UWBP_UIKit_ItemCard_Base_C, UseAdaptiveBackground) == 6221, "Offset mismatch for UWBP_UIKit_ItemCard_Base_C::UseAdaptiveBackground");
static_assert(offsetof(UWBP_UIKit_ItemCard_Base_C, StatusIndicatorCache) == 6272, "Offset mismatch for UWBP_UIKit_ItemCard_Base_C::StatusIndicatorCache");
static_assert(offsetof(UWBP_UIKit_ItemCard_Base_C, IsButtonFocused) == 6320, "Offset mismatch for UWBP_UIKit_ItemCard_Base_C::IsButtonFocused");
static_assert(offsetof(UWBP_UIKit_ItemCard_Base_C, CurrentHoldProgress) == 6360, "Offset mismatch for UWBP_UIKit_ItemCard_Base_C::CurrentHoldProgress");
static_assert(offsetof(UWBP_UIKit_ItemCard_Base_C, HoldPressedSound) == 6368, "Offset mismatch for UWBP_UIKit_ItemCard_Base_C::HoldPressedSound");
static_assert(offsetof(UWBP_UIKit_ItemCard_Base_C, HoldSound) == 6376, "Offset mismatch for UWBP_UIKit_ItemCard_Base_C::HoldSound");
static_assert(offsetof(UWBP_UIKit_ItemCard_Base_C, HoldSoundAudioComponent) == 6384, "Offset mismatch for UWBP_UIKit_ItemCard_Base_C::HoldSoundAudioComponent");
static_assert(offsetof(UWBP_UIKit_ItemCard_Base_C, PressedSoundAudioComponent) == 6392, "Offset mismatch for UWBP_UIKit_ItemCard_Base_C::PressedSoundAudioComponent");
static_assert(offsetof(UWBP_UIKit_ItemCard_Base_C, FadeOutTime) == 6400, "Offset mismatch for UWBP_UIKit_ItemCard_Base_C::FadeOutTime");
static_assert(offsetof(UWBP_UIKit_ItemCard_Base_C, HoldReleasedSound) == 6408, "Offset mismatch for UWBP_UIKit_ItemCard_Base_C::HoldReleasedSound");
static_assert(offsetof(UWBP_UIKit_ItemCard_Base_C, HoldCompletedSound) == 6416, "Offset mismatch for UWBP_UIKit_ItemCard_Base_C::HoldCompletedSound");
static_assert(offsetof(UWBP_UIKit_ItemCard_Base_C, OverrideCornerRadius) == 6424, "Offset mismatch for UWBP_UIKit_ItemCard_Base_C::OverrideCornerRadius");
static_assert(offsetof(UWBP_UIKit_ItemCard_Base_C, RadiusInPixels) == 6425, "Offset mismatch for UWBP_UIKit_ItemCard_Base_C::RadiusInPixels");
static_assert(offsetof(UWBP_UIKit_ItemCard_Base_C, CornerRadius_TopRight) == 6440, "Offset mismatch for UWBP_UIKit_ItemCard_Base_C::CornerRadius_TopRight");
static_assert(offsetof(UWBP_UIKit_ItemCard_Base_C, CornerRadius_BottomRight) == 6456, "Offset mismatch for UWBP_UIKit_ItemCard_Base_C::CornerRadius_BottomRight");
static_assert(offsetof(UWBP_UIKit_ItemCard_Base_C, ItemReference) == 6504, "Offset mismatch for UWBP_UIKit_ItemCard_Base_C::ItemReference");
static_assert(offsetof(UWBP_UIKit_ItemCard_Base_C, HoldTimer) == 6560, "Offset mismatch for UWBP_UIKit_ItemCard_Base_C::HoldTimer");
static_assert(offsetof(UWBP_UIKit_ItemCard_Base_C, OnItemCardSelected) == 6568, "Offset mismatch for UWBP_UIKit_ItemCard_Base_C::OnItemCardSelected");

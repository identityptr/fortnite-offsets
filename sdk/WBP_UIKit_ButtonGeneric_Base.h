/**
 * decamp dumper generated SDK
 * Package: /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonGeneric_Base
 */
#pragma once
#include "Basic.h"

// /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonGeneric_Base.WBP_UIKit_ButtonGeneric_Base_C
// Kind: WidgetBlueprintGeneratedClass; super: UIKitModularButton
class UWBP_UIKit_ButtonGeneric_Base_C
{
public:
    std::uint8_t Pad_0000[0x15D0]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x15D0 (Size: 0x8, Type: StructProperty)
    void* VisualAttachment; // 0x15D8 (Size: 0x8, Type: ObjectProperty)
    void* Slot_Main; // 0x15E0 (Size: 0x8, Type: ObjectProperty)
    void* Slot_Background; // 0x15E8 (Size: 0x8, Type: ObjectProperty)
    void* Root; // 0x15F0 (Size: 0x8, Type: ObjectProperty)
    void* Prompt; // 0x15F8 (Size: 0x8, Type: ObjectProperty)
    void* Main_StackSize; // 0x1600 (Size: 0x8, Type: ObjectProperty)
    void* Main_Stack; // 0x1608 (Size: 0x8, Type: ObjectProperty)
    void* Main; // 0x1610 (Size: 0x8, Type: ObjectProperty)
    void* HoldProgressBar; // 0x1618 (Size: 0x8, Type: ObjectProperty)
    void* HoldIcon; // 0x1620 (Size: 0x8, Type: ObjectProperty)
    void* Anim_Focused_Base; // 0x1628 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ContentHorizontalAlignment; // 0x1630 (Size: 0x1, Type: ByteProperty)
    std::uint8_t ContentVerticalAlignment; // 0x1631 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x2]; // 0x1632
    std::uint8_t ButtonPadding[0x14]; // 0x1634 (Size: 0x14, Type: StructProperty)
    double FadeInTime; // 0x1648 (Size: 0x8, Type: DoubleProperty)
    double FadeOutTime; // 0x1650 (Size: 0x8, Type: DoubleProperty)
    void* PressedSound; // 0x1658 (Size: 0x8, Type: ObjectProperty)
    void* ClickedSound; // 0x1660 (Size: 0x8, Type: ObjectProperty)
    void* HoveredSound; // 0x1668 (Size: 0x8, Type: ObjectProperty)
    void* HoldPressedSound; // 0x1670 (Size: 0x8, Type: ObjectProperty)
    void* HoldSound; // 0x1678 (Size: 0x8, Type: ObjectProperty)
    void* HoldReleasedSound; // 0x1680 (Size: 0x8, Type: ObjectProperty)
    void* HoldCompletedSound; // 0x1688 (Size: 0x8, Type: ObjectProperty)
    void* HoldSoundAudioComponent; // 0x1690 (Size: 0x8, Type: ObjectProperty)
    void* PressedSoundAudioComponent; // 0x1698 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Text[0x10]; // 0x16A0 (Size: 0x10, Type: TextProperty)
    std::uint8_t UseIconBlock; // 0x16B0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x16B1
    void* IconClass; // 0x16B8 (Size: 0x8, Type: ClassProperty)
    void* IconMaterial; // 0x16C0 (Size: 0x8, Type: ObjectProperty)
    void* Icon; // 0x16C8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t IconSize[0x10]; // 0x16D0 (Size: 0x10, Type: StructProperty)
    std::uint8_t IconHorizontalAlignment; // 0x16E0 (Size: 0x1, Type: ByteProperty)
    std::uint8_t IconVerticalAlignment; // 0x16E1 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0003[0x2]; // 0x16E2
    std::uint8_t IconPadding[0x10]; // 0x16E4 (Size: 0x10, Type: StructProperty)
    std::uint8_t UseBackgroundBlock; // 0x16F4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x16F5
    void* BackgroundClass; // 0x16F8 (Size: 0x8, Type: ClassProperty)
    void* BackgroundMaterial; // 0x1700 (Size: 0x8, Type: ObjectProperty)
    void* OutlineMaterial; // 0x1708 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t PromptHorizontalAlignment; // 0x1710 (Size: 0x1, Type: ByteProperty)
    std::uint8_t PromptVerticalAlignment; // 0x1711 (Size: 0x1, Type: ByteProperty)
    std::uint8_t ShouldPromptImpactLayout; // 0x1712 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x1]; // 0x1713
    std::uint8_t PromptPadding[0x14]; // 0x1714 (Size: 0x14, Type: StructProperty)
    std::uint8_t PromptNudge[0x10]; // 0x1728 (Size: 0x10, Type: StructProperty)
    double MobileFontSizeMultiplier; // 0x1738 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t OverrideDefaultMobileFontSizeMultiplier; // 0x1740 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x7]; // 0x1741
    double MobileFontSizeMultiplierOverride; // 0x1748 (Size: 0x8, Type: DoubleProperty)
    std::int32_t MobileMinWidth; // 0x1750 (Size: 0x4, Type: IntProperty)
    std::int32_t MobileMinHeight; // 0x1754 (Size: 0x4, Type: IntProperty)
    FMulticastInlineDelegate OnHoldCompleted; // 0x1758 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* InputActionProgressMaterial; // 0x1768 (Size: 0x8, Type: ObjectProperty)
    void* Block_Background; // 0x1770 (Size: 0x8, Type: ObjectProperty)
    void* Block_Text; // 0x1778 (Size: 0x8, Type: ObjectProperty)
    void* Block_SecondText; // 0x1780 (Size: 0x8, Type: ObjectProperty)
    void* Block_Icon; // 0x1788 (Size: 0x8, Type: ObjectProperty)
    void* StatusIndicator; // 0x1790 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t CurrentInputType; // 0x1798 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0007[0x7]; // 0x1799
    double CurrentHoldProgress; // 0x17A0 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t UseTextBlock; // 0x17A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0008[0x7]; // 0x17A9
    void* TextClass; // 0x17B0 (Size: 0x8, Type: ClassProperty)
    std::uint8_t Font[0x58]; // 0x17B8 (Size: 0x58, Type: StructProperty)
    std::uint8_t TextBlockAlignment; // 0x1810 (Size: 0x1, Type: ByteProperty)
    std::uint8_t IsTextOutsideBackground; // 0x1811 (Size: 0x1, Type: BoolProperty)
    std::uint8_t ShouldTextImpactLayout; // 0x1812 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TextTransformPolicy; // 0x1813 (Size: 0x1, Type: EnumProperty)
    std::uint8_t TextPadding[0x14]; // 0x1814 (Size: 0x14, Type: StructProperty)
    std::uint8_t TextNudge[0x10]; // 0x1828 (Size: 0x10, Type: StructProperty)
    std::uint8_t MobileButtonPadding[0x10]; // 0x1838 (Size: 0x10, Type: StructProperty)
    std::uint8_t IsInstantSelection; // 0x1848 (Size: 0x1, Type: BoolProperty)
    std::uint8_t LastEnabledEvent; // 0x1849 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0009[0x6]; // 0x184A
    FMulticastInlineDelegate OnHoldActionProgress; // 0x1850 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnReleased; // 0x1860 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t EnableFocusedSelectedState; // 0x1870 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000A[0x7]; // 0x1871
    std::uint8_t VisualAttachmentContentAnchor[0x10]; // 0x1878 (Size: 0x10, Type: StructProperty)
    std::uint8_t UseStatusIndicator; // 0x1888 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000B[0x7]; // 0x1889
    void* StatusIndicatorClass; // 0x1890 (Size: 0x8, Type: ClassProperty)
    std::uint8_t Configuration; // 0x1898 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Type; // 0x1899 (Size: 0x1, Type: ByteProperty)
    std::uint8_t StatusIndicatorHorizontalAlignment; // 0x189A (Size: 0x1, Type: ByteProperty)
    std::uint8_t StatusIndicatorVerticalAlignment; // 0x189B (Size: 0x1, Type: ByteProperty)
    std::uint8_t StatusIndicatorPadding[0x14]; // 0x189C (Size: 0x14, Type: StructProperty)
    std::uint8_t StatusIndicatorNudge[0x10]; // 0x18B0 (Size: 0x10, Type: StructProperty)
    std::uint8_t UseSecondTextBlock; // 0x18C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000C[0x7]; // 0x18C1
    void* SecondTextClass; // 0x18C8 (Size: 0x8, Type: ClassProperty)
    std::uint8_t SecondText[0x10]; // 0x18D0 (Size: 0x10, Type: TextProperty)
    std::uint8_t SecondFont[0x58]; // 0x18E0 (Size: 0x58, Type: StructProperty)
    std::uint8_t SecondTextBlockAlignment; // 0x1938 (Size: 0x1, Type: ByteProperty)
    std::uint8_t SecondTextTransformPolicy; // 0x1939 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_000D[0x2]; // 0x193A
    std::uint8_t SecondTextPadding[0x10]; // 0x193C (Size: 0x10, Type: StructProperty)
    std::uint8_t TextJustification; // 0x194C (Size: 0x1, Type: ByteProperty)
    std::uint8_t TextSecondJustification; // 0x194D (Size: 0x1, Type: ByteProperty)
    std::uint8_t VisualAttachmentHorizontalAlignment; // 0x194E (Size: 0x1, Type: ByteProperty)
    std::uint8_t VisualAttachmentVerticalAlignment; // 0x194F (Size: 0x1, Type: ByteProperty)
    std::uint8_t UseDisabledVisualsOnLocked; // 0x1950 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000E[0x1]; // 0x1951
    std::uint8_t UseDarkInputIcon; // 0x1952 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000F[0x5]; // 0x1953
    FMulticastInlineDelegate OnBlockTextSet; // 0x1958 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t TextOverflowPolicy; // 0x1968 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ShouldPromptDirectionFollowCulture; // 0x1969 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0010[0x2]; // 0x196A
    std::int32_t MinWidthOverride; // 0x196C (Size: 0x4, Type: IntProperty)
    std::int32_t MinHeightOverride; // 0x1970 (Size: 0x4, Type: IntProperty)
    std::uint8_t IsStatusIndicatorInsideMainGrid; // 0x1974 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UWBP_UIKit_ButtonGeneric_Base_C, UberGraphFrame) == 5584, "Offset mismatch for UWBP_UIKit_ButtonGeneric_Base_C::UberGraphFrame");
static_assert(offsetof(UWBP_UIKit_ButtonGeneric_Base_C, VisualAttachment) == 5592, "Offset mismatch for UWBP_UIKit_ButtonGeneric_Base_C::VisualAttachment");
static_assert(offsetof(UWBP_UIKit_ButtonGeneric_Base_C, Slot_Main) == 5600, "Offset mismatch for UWBP_UIKit_ButtonGeneric_Base_C::Slot_Main");
static_assert(offsetof(UWBP_UIKit_ButtonGeneric_Base_C, Slot_Background) == 5608, "Offset mismatch for UWBP_UIKit_ButtonGeneric_Base_C::Slot_Background");
static_assert(offsetof(UWBP_UIKit_ButtonGeneric_Base_C, Root) == 5616, "Offset mismatch for UWBP_UIKit_ButtonGeneric_Base_C::Root");
static_assert(offsetof(UWBP_UIKit_ButtonGeneric_Base_C, Prompt) == 5624, "Offset mismatch for UWBP_UIKit_ButtonGeneric_Base_C::Prompt");
static_assert(offsetof(UWBP_UIKit_ButtonGeneric_Base_C, Main_StackSize) == 5632, "Offset mismatch for UWBP_UIKit_ButtonGeneric_Base_C::Main_StackSize");
static_assert(offsetof(UWBP_UIKit_ButtonGeneric_Base_C, Main_Stack) == 5640, "Offset mismatch for UWBP_UIKit_ButtonGeneric_Base_C::Main_Stack");
static_assert(offsetof(UWBP_UIKit_ButtonGeneric_Base_C, Main) == 5648, "Offset mismatch for UWBP_UIKit_ButtonGeneric_Base_C::Main");
static_assert(offsetof(UWBP_UIKit_ButtonGeneric_Base_C, HoldProgressBar) == 5656, "Offset mismatch for UWBP_UIKit_ButtonGeneric_Base_C::HoldProgressBar");
static_assert(offsetof(UWBP_UIKit_ButtonGeneric_Base_C, HoldIcon) == 5664, "Offset mismatch for UWBP_UIKit_ButtonGeneric_Base_C::HoldIcon");
static_assert(offsetof(UWBP_UIKit_ButtonGeneric_Base_C, Anim_Focused_Base) == 5672, "Offset mismatch for UWBP_UIKit_ButtonGeneric_Base_C::Anim_Focused_Base");
static_assert(offsetof(UWBP_UIKit_ButtonGeneric_Base_C, ContentHorizontalAlignment) == 5680, "Offset mismatch for UWBP_UIKit_ButtonGeneric_Base_C::ContentHorizontalAlignment");
static_assert(offsetof(UWBP_UIKit_ButtonGeneric_Base_C, ContentVerticalAlignment) == 5681, "Offset mismatch for UWBP_UIKit_ButtonGeneric_Base_C::ContentVerticalAlignment");
static_assert(offsetof(UWBP_UIKit_ButtonGeneric_Base_C, ButtonPadding) == 5684, "Offset mismatch for UWBP_UIKit_ButtonGeneric_Base_C::ButtonPadding");
static_assert(offsetof(UWBP_UIKit_ButtonGeneric_Base_C, FadeInTime) == 5704, "Offset mismatch for UWBP_UIKit_ButtonGeneric_Base_C::FadeInTime");
static_assert(offsetof(UWBP_UIKit_ButtonGeneric_Base_C, FadeOutTime) == 5712, "Offset mismatch for UWBP_UIKit_ButtonGeneric_Base_C::FadeOutTime");
static_assert(offsetof(UWBP_UIKit_ButtonGeneric_Base_C, PressedSound) == 5720, "Offset mismatch for UWBP_UIKit_ButtonGeneric_Base_C::PressedSound");
static_assert(offsetof(UWBP_UIKit_ButtonGeneric_Base_C, ClickedSound) == 5728, "Offset mismatch for UWBP_UIKit_ButtonGeneric_Base_C::ClickedSound");
static_assert(offsetof(UWBP_UIKit_ButtonGeneric_Base_C, HoveredSound) == 5736, "Offset mismatch for UWBP_UIKit_ButtonGeneric_Base_C::HoveredSound");
static_assert(offsetof(UWBP_UIKit_ButtonGeneric_Base_C, HoldPressedSound) == 5744, "Offset mismatch for UWBP_UIKit_ButtonGeneric_Base_C::HoldPressedSound");
static_assert(offsetof(UWBP_UIKit_ButtonGeneric_Base_C, HoldSound) == 5752, "Offset mismatch for UWBP_UIKit_ButtonGeneric_Base_C::HoldSound");
static_assert(offsetof(UWBP_UIKit_ButtonGeneric_Base_C, HoldReleasedSound) == 5760, "Offset mismatch for UWBP_UIKit_ButtonGeneric_Base_C::HoldReleasedSound");
static_assert(offsetof(UWBP_UIKit_ButtonGeneric_Base_C, HoldCompletedSound) == 5768, "Offset mismatch for UWBP_UIKit_ButtonGeneric_Base_C::HoldCompletedSound");
static_assert(offsetof(UWBP_UIKit_ButtonGeneric_Base_C, HoldSoundAudioComponent) == 5776, "Offset mismatch for UWBP_UIKit_ButtonGeneric_Base_C::HoldSoundAudioComponent");
static_assert(offsetof(UWBP_UIKit_ButtonGeneric_Base_C, PressedSoundAudioComponent) == 5784, "Offset mismatch for UWBP_UIKit_ButtonGeneric_Base_C::PressedSoundAudioComponent");
static_assert(offsetof(UWBP_UIKit_ButtonGeneric_Base_C, Text) == 5792, "Offset mismatch for UWBP_UIKit_ButtonGeneric_Base_C::Text");
static_assert(offsetof(UWBP_UIKit_ButtonGeneric_Base_C, UseIconBlock) == 5808, "Offset mismatch for UWBP_UIKit_ButtonGeneric_Base_C::UseIconBlock");
static_assert(offsetof(UWBP_UIKit_ButtonGeneric_Base_C, IconClass) == 5816, "Offset mismatch for UWBP_UIKit_ButtonGeneric_Base_C::IconClass");
static_assert(offsetof(UWBP_UIKit_ButtonGeneric_Base_C, IconMaterial) == 5824, "Offset mismatch for UWBP_UIKit_ButtonGeneric_Base_C::IconMaterial");
static_assert(offsetof(UWBP_UIKit_ButtonGeneric_Base_C, Icon) == 5832, "Offset mismatch for UWBP_UIKit_ButtonGeneric_Base_C::Icon");
static_assert(offsetof(UWBP_UIKit_ButtonGeneric_Base_C, IconSize) == 5840, "Offset mismatch for UWBP_UIKit_ButtonGeneric_Base_C::IconSize");
static_assert(offsetof(UWBP_UIKit_ButtonGeneric_Base_C, IconHorizontalAlignment) == 5856, "Offset mismatch for UWBP_UIKit_ButtonGeneric_Base_C::IconHorizontalAlignment");
static_assert(offsetof(UWBP_UIKit_ButtonGeneric_Base_C, IconVerticalAlignment) == 5857, "Offset mismatch for UWBP_UIKit_ButtonGeneric_Base_C::IconVerticalAlignment");
static_assert(offsetof(UWBP_UIKit_ButtonGeneric_Base_C, IconPadding) == 5860, "Offset mismatch for UWBP_UIKit_ButtonGeneric_Base_C::IconPadding");
static_assert(offsetof(UWBP_UIKit_ButtonGeneric_Base_C, UseBackgroundBlock) == 5876, "Offset mismatch for UWBP_UIKit_ButtonGeneric_Base_C::UseBackgroundBlock");
static_assert(offsetof(UWBP_UIKit_ButtonGeneric_Base_C, BackgroundClass) == 5880, "Offset mismatch for UWBP_UIKit_ButtonGeneric_Base_C::BackgroundClass");
static_assert(offsetof(UWBP_UIKit_ButtonGeneric_Base_C, BackgroundMaterial) == 5888, "Offset mismatch for UWBP_UIKit_ButtonGeneric_Base_C::BackgroundMaterial");
static_assert(offsetof(UWBP_UIKit_ButtonGeneric_Base_C, OutlineMaterial) == 5896, "Offset mismatch for UWBP_UIKit_ButtonGeneric_Base_C::OutlineMaterial");
static_assert(offsetof(UWBP_UIKit_ButtonGeneric_Base_C, PromptHorizontalAlignment) == 5904, "Offset mismatch for UWBP_UIKit_ButtonGeneric_Base_C::PromptHorizontalAlignment");
static_assert(offsetof(UWBP_UIKit_ButtonGeneric_Base_C, PromptVerticalAlignment) == 5905, "Offset mismatch for UWBP_UIKit_ButtonGeneric_Base_C::PromptVerticalAlignment");
static_assert(offsetof(UWBP_UIKit_ButtonGeneric_Base_C, ShouldPromptImpactLayout) == 5906, "Offset mismatch for UWBP_UIKit_ButtonGeneric_Base_C::ShouldPromptImpactLayout");
static_assert(offsetof(UWBP_UIKit_ButtonGeneric_Base_C, PromptPadding) == 5908, "Offset mismatch for UWBP_UIKit_ButtonGeneric_Base_C::PromptPadding");
static_assert(offsetof(UWBP_UIKit_ButtonGeneric_Base_C, PromptNudge) == 5928, "Offset mismatch for UWBP_UIKit_ButtonGeneric_Base_C::PromptNudge");
static_assert(offsetof(UWBP_UIKit_ButtonGeneric_Base_C, MobileFontSizeMultiplier) == 5944, "Offset mismatch for UWBP_UIKit_ButtonGeneric_Base_C::MobileFontSizeMultiplier");
static_assert(offsetof(UWBP_UIKit_ButtonGeneric_Base_C, OverrideDefaultMobileFontSizeMultiplier) == 5952, "Offset mismatch for UWBP_UIKit_ButtonGeneric_Base_C::OverrideDefaultMobileFontSizeMultiplier");
static_assert(offsetof(UWBP_UIKit_ButtonGeneric_Base_C, MobileFontSizeMultiplierOverride) == 5960, "Offset mismatch for UWBP_UIKit_ButtonGeneric_Base_C::MobileFontSizeMultiplierOverride");
static_assert(offsetof(UWBP_UIKit_ButtonGeneric_Base_C, MobileMinWidth) == 5968, "Offset mismatch for UWBP_UIKit_ButtonGeneric_Base_C::MobileMinWidth");
static_assert(offsetof(UWBP_UIKit_ButtonGeneric_Base_C, MobileMinHeight) == 5972, "Offset mismatch for UWBP_UIKit_ButtonGeneric_Base_C::MobileMinHeight");
static_assert(offsetof(UWBP_UIKit_ButtonGeneric_Base_C, OnHoldCompleted) == 5976, "Offset mismatch for UWBP_UIKit_ButtonGeneric_Base_C::OnHoldCompleted");
static_assert(offsetof(UWBP_UIKit_ButtonGeneric_Base_C, InputActionProgressMaterial) == 5992, "Offset mismatch for UWBP_UIKit_ButtonGeneric_Base_C::InputActionProgressMaterial");
static_assert(offsetof(UWBP_UIKit_ButtonGeneric_Base_C, Block_Background) == 6000, "Offset mismatch for UWBP_UIKit_ButtonGeneric_Base_C::Block_Background");
static_assert(offsetof(UWBP_UIKit_ButtonGeneric_Base_C, Block_Text) == 6008, "Offset mismatch for UWBP_UIKit_ButtonGeneric_Base_C::Block_Text");
static_assert(offsetof(UWBP_UIKit_ButtonGeneric_Base_C, Block_SecondText) == 6016, "Offset mismatch for UWBP_UIKit_ButtonGeneric_Base_C::Block_SecondText");
static_assert(offsetof(UWBP_UIKit_ButtonGeneric_Base_C, Block_Icon) == 6024, "Offset mismatch for UWBP_UIKit_ButtonGeneric_Base_C::Block_Icon");
static_assert(offsetof(UWBP_UIKit_ButtonGeneric_Base_C, StatusIndicator) == 6032, "Offset mismatch for UWBP_UIKit_ButtonGeneric_Base_C::StatusIndicator");
static_assert(offsetof(UWBP_UIKit_ButtonGeneric_Base_C, CurrentInputType) == 6040, "Offset mismatch for UWBP_UIKit_ButtonGeneric_Base_C::CurrentInputType");
static_assert(offsetof(UWBP_UIKit_ButtonGeneric_Base_C, CurrentHoldProgress) == 6048, "Offset mismatch for UWBP_UIKit_ButtonGeneric_Base_C::CurrentHoldProgress");
static_assert(offsetof(UWBP_UIKit_ButtonGeneric_Base_C, UseTextBlock) == 6056, "Offset mismatch for UWBP_UIKit_ButtonGeneric_Base_C::UseTextBlock");
static_assert(offsetof(UWBP_UIKit_ButtonGeneric_Base_C, TextClass) == 6064, "Offset mismatch for UWBP_UIKit_ButtonGeneric_Base_C::TextClass");
static_assert(offsetof(UWBP_UIKit_ButtonGeneric_Base_C, Font) == 6072, "Offset mismatch for UWBP_UIKit_ButtonGeneric_Base_C::Font");
static_assert(offsetof(UWBP_UIKit_ButtonGeneric_Base_C, TextBlockAlignment) == 6160, "Offset mismatch for UWBP_UIKit_ButtonGeneric_Base_C::TextBlockAlignment");
static_assert(offsetof(UWBP_UIKit_ButtonGeneric_Base_C, IsTextOutsideBackground) == 6161, "Offset mismatch for UWBP_UIKit_ButtonGeneric_Base_C::IsTextOutsideBackground");
static_assert(offsetof(UWBP_UIKit_ButtonGeneric_Base_C, ShouldTextImpactLayout) == 6162, "Offset mismatch for UWBP_UIKit_ButtonGeneric_Base_C::ShouldTextImpactLayout");
static_assert(offsetof(UWBP_UIKit_ButtonGeneric_Base_C, TextTransformPolicy) == 6163, "Offset mismatch for UWBP_UIKit_ButtonGeneric_Base_C::TextTransformPolicy");
static_assert(offsetof(UWBP_UIKit_ButtonGeneric_Base_C, TextPadding) == 6164, "Offset mismatch for UWBP_UIKit_ButtonGeneric_Base_C::TextPadding");
static_assert(offsetof(UWBP_UIKit_ButtonGeneric_Base_C, TextNudge) == 6184, "Offset mismatch for UWBP_UIKit_ButtonGeneric_Base_C::TextNudge");
static_assert(offsetof(UWBP_UIKit_ButtonGeneric_Base_C, MobileButtonPadding) == 6200, "Offset mismatch for UWBP_UIKit_ButtonGeneric_Base_C::MobileButtonPadding");
static_assert(offsetof(UWBP_UIKit_ButtonGeneric_Base_C, IsInstantSelection) == 6216, "Offset mismatch for UWBP_UIKit_ButtonGeneric_Base_C::IsInstantSelection");
static_assert(offsetof(UWBP_UIKit_ButtonGeneric_Base_C, LastEnabledEvent) == 6217, "Offset mismatch for UWBP_UIKit_ButtonGeneric_Base_C::LastEnabledEvent");
static_assert(offsetof(UWBP_UIKit_ButtonGeneric_Base_C, OnHoldActionProgress) == 6224, "Offset mismatch for UWBP_UIKit_ButtonGeneric_Base_C::OnHoldActionProgress");
static_assert(offsetof(UWBP_UIKit_ButtonGeneric_Base_C, OnReleased) == 6240, "Offset mismatch for UWBP_UIKit_ButtonGeneric_Base_C::OnReleased");
static_assert(offsetof(UWBP_UIKit_ButtonGeneric_Base_C, EnableFocusedSelectedState) == 6256, "Offset mismatch for UWBP_UIKit_ButtonGeneric_Base_C::EnableFocusedSelectedState");
static_assert(offsetof(UWBP_UIKit_ButtonGeneric_Base_C, VisualAttachmentContentAnchor) == 6264, "Offset mismatch for UWBP_UIKit_ButtonGeneric_Base_C::VisualAttachmentContentAnchor");
static_assert(offsetof(UWBP_UIKit_ButtonGeneric_Base_C, UseStatusIndicator) == 6280, "Offset mismatch for UWBP_UIKit_ButtonGeneric_Base_C::UseStatusIndicator");
static_assert(offsetof(UWBP_UIKit_ButtonGeneric_Base_C, StatusIndicatorClass) == 6288, "Offset mismatch for UWBP_UIKit_ButtonGeneric_Base_C::StatusIndicatorClass");
static_assert(offsetof(UWBP_UIKit_ButtonGeneric_Base_C, Configuration) == 6296, "Offset mismatch for UWBP_UIKit_ButtonGeneric_Base_C::Configuration");
static_assert(offsetof(UWBP_UIKit_ButtonGeneric_Base_C, Type) == 6297, "Offset mismatch for UWBP_UIKit_ButtonGeneric_Base_C::Type");
static_assert(offsetof(UWBP_UIKit_ButtonGeneric_Base_C, StatusIndicatorHorizontalAlignment) == 6298, "Offset mismatch for UWBP_UIKit_ButtonGeneric_Base_C::StatusIndicatorHorizontalAlignment");
static_assert(offsetof(UWBP_UIKit_ButtonGeneric_Base_C, StatusIndicatorVerticalAlignment) == 6299, "Offset mismatch for UWBP_UIKit_ButtonGeneric_Base_C::StatusIndicatorVerticalAlignment");
static_assert(offsetof(UWBP_UIKit_ButtonGeneric_Base_C, StatusIndicatorPadding) == 6300, "Offset mismatch for UWBP_UIKit_ButtonGeneric_Base_C::StatusIndicatorPadding");
static_assert(offsetof(UWBP_UIKit_ButtonGeneric_Base_C, StatusIndicatorNudge) == 6320, "Offset mismatch for UWBP_UIKit_ButtonGeneric_Base_C::StatusIndicatorNudge");
static_assert(offsetof(UWBP_UIKit_ButtonGeneric_Base_C, UseSecondTextBlock) == 6336, "Offset mismatch for UWBP_UIKit_ButtonGeneric_Base_C::UseSecondTextBlock");
static_assert(offsetof(UWBP_UIKit_ButtonGeneric_Base_C, SecondTextClass) == 6344, "Offset mismatch for UWBP_UIKit_ButtonGeneric_Base_C::SecondTextClass");
static_assert(offsetof(UWBP_UIKit_ButtonGeneric_Base_C, SecondText) == 6352, "Offset mismatch for UWBP_UIKit_ButtonGeneric_Base_C::SecondText");
static_assert(offsetof(UWBP_UIKit_ButtonGeneric_Base_C, SecondFont) == 6368, "Offset mismatch for UWBP_UIKit_ButtonGeneric_Base_C::SecondFont");
static_assert(offsetof(UWBP_UIKit_ButtonGeneric_Base_C, SecondTextBlockAlignment) == 6456, "Offset mismatch for UWBP_UIKit_ButtonGeneric_Base_C::SecondTextBlockAlignment");
static_assert(offsetof(UWBP_UIKit_ButtonGeneric_Base_C, SecondTextTransformPolicy) == 6457, "Offset mismatch for UWBP_UIKit_ButtonGeneric_Base_C::SecondTextTransformPolicy");
static_assert(offsetof(UWBP_UIKit_ButtonGeneric_Base_C, SecondTextPadding) == 6460, "Offset mismatch for UWBP_UIKit_ButtonGeneric_Base_C::SecondTextPadding");
static_assert(offsetof(UWBP_UIKit_ButtonGeneric_Base_C, TextJustification) == 6476, "Offset mismatch for UWBP_UIKit_ButtonGeneric_Base_C::TextJustification");
static_assert(offsetof(UWBP_UIKit_ButtonGeneric_Base_C, TextSecondJustification) == 6477, "Offset mismatch for UWBP_UIKit_ButtonGeneric_Base_C::TextSecondJustification");
static_assert(offsetof(UWBP_UIKit_ButtonGeneric_Base_C, VisualAttachmentHorizontalAlignment) == 6478, "Offset mismatch for UWBP_UIKit_ButtonGeneric_Base_C::VisualAttachmentHorizontalAlignment");
static_assert(offsetof(UWBP_UIKit_ButtonGeneric_Base_C, VisualAttachmentVerticalAlignment) == 6479, "Offset mismatch for UWBP_UIKit_ButtonGeneric_Base_C::VisualAttachmentVerticalAlignment");
static_assert(offsetof(UWBP_UIKit_ButtonGeneric_Base_C, UseDisabledVisualsOnLocked) == 6480, "Offset mismatch for UWBP_UIKit_ButtonGeneric_Base_C::UseDisabledVisualsOnLocked");
static_assert(offsetof(UWBP_UIKit_ButtonGeneric_Base_C, UseDarkInputIcon) == 6482, "Offset mismatch for UWBP_UIKit_ButtonGeneric_Base_C::UseDarkInputIcon");
static_assert(offsetof(UWBP_UIKit_ButtonGeneric_Base_C, OnBlockTextSet) == 6488, "Offset mismatch for UWBP_UIKit_ButtonGeneric_Base_C::OnBlockTextSet");
static_assert(offsetof(UWBP_UIKit_ButtonGeneric_Base_C, TextOverflowPolicy) == 6504, "Offset mismatch for UWBP_UIKit_ButtonGeneric_Base_C::TextOverflowPolicy");
static_assert(offsetof(UWBP_UIKit_ButtonGeneric_Base_C, ShouldPromptDirectionFollowCulture) == 6505, "Offset mismatch for UWBP_UIKit_ButtonGeneric_Base_C::ShouldPromptDirectionFollowCulture");
static_assert(offsetof(UWBP_UIKit_ButtonGeneric_Base_C, MinWidthOverride) == 6508, "Offset mismatch for UWBP_UIKit_ButtonGeneric_Base_C::MinWidthOverride");
static_assert(offsetof(UWBP_UIKit_ButtonGeneric_Base_C, MinHeightOverride) == 6512, "Offset mismatch for UWBP_UIKit_ButtonGeneric_Base_C::MinHeightOverride");
static_assert(offsetof(UWBP_UIKit_ButtonGeneric_Base_C, IsStatusIndicatorInsideMainGrid) == 6516, "Offset mismatch for UWBP_UIKit_ButtonGeneric_Base_C::IsStatusIndicatorInsideMainGrid");

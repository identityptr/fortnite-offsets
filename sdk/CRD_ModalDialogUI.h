/**
 * decamp dumper generated SDK
 * Package: /Script/CRD_ModalDialogUI
 */
#pragma once
#include "Basic.h"

// /Script/CRD_ModalDialogUI.CreativeModalDialogAllowedConversionFunction
// Kind: Class; super: BlueprintFunctionLibrary
class UCreativeModalDialogAllowedConversionFunction
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CRD_ModalDialogUI.CreativeModalDialogConversionFunction
// Kind: Class; super: CreativeModalDialogAllowedConversionFunction
class UCreativeModalDialogConversionFunction
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel
// Kind: Class; super: MVVMViewModelBase
class UCreativeModalDialogViewmodel
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t Title[0x10]; // 0x0068 (Size: 0x10, Type: TextProperty)
    std::uint8_t Body[0x10]; // 0x0078 (Size: 0x10, Type: TextProperty)
    void* TextStyleSet; // 0x0088 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Button01_MainText[0x10]; // 0x0090 (Size: 0x10, Type: TextProperty)
    std::uint8_t Button02_MainText[0x10]; // 0x00A0 (Size: 0x10, Type: TextProperty)
    std::uint8_t Button03_MainText[0x10]; // 0x00B0 (Size: 0x10, Type: TextProperty)
    std::uint8_t Button04_MainText[0x10]; // 0x00C0 (Size: 0x10, Type: TextProperty)
    std::uint8_t Button05_MainText[0x10]; // 0x00D0 (Size: 0x10, Type: TextProperty)
    std::uint8_t Button06_MainText[0x10]; // 0x00E0 (Size: 0x10, Type: TextProperty)
    std::uint8_t Button07_MainText[0x10]; // 0x00F0 (Size: 0x10, Type: TextProperty)
    std::uint8_t Button08_MainText[0x10]; // 0x0100 (Size: 0x10, Type: TextProperty)
    std::uint8_t Button09_MainText[0x10]; // 0x0110 (Size: 0x10, Type: TextProperty)
    std::uint8_t Button10_MainText[0x10]; // 0x0120 (Size: 0x10, Type: TextProperty)
    std::uint8_t Button11_MainText[0x10]; // 0x0130 (Size: 0x10, Type: TextProperty)
    std::uint8_t Button12_MainText[0x10]; // 0x0140 (Size: 0x10, Type: TextProperty)
    std::uint8_t Button01_SubText[0x10]; // 0x0150 (Size: 0x10, Type: TextProperty)
    std::uint8_t Button02_SubText[0x10]; // 0x0160 (Size: 0x10, Type: TextProperty)
    std::uint8_t Button03_SubText[0x10]; // 0x0170 (Size: 0x10, Type: TextProperty)
    std::uint8_t Button04_SubText[0x10]; // 0x0180 (Size: 0x10, Type: TextProperty)
    std::uint8_t Button05_SubText[0x10]; // 0x0190 (Size: 0x10, Type: TextProperty)
    std::uint8_t Button06_SubText[0x10]; // 0x01A0 (Size: 0x10, Type: TextProperty)
    std::uint8_t Button07_SubText[0x10]; // 0x01B0 (Size: 0x10, Type: TextProperty)
    std::uint8_t Button08_SubText[0x10]; // 0x01C0 (Size: 0x10, Type: TextProperty)
    std::uint8_t Button09_SubText[0x10]; // 0x01D0 (Size: 0x10, Type: TextProperty)
    std::uint8_t Button10_SubText[0x10]; // 0x01E0 (Size: 0x10, Type: TextProperty)
    std::uint8_t Button11_SubText[0x10]; // 0x01F0 (Size: 0x10, Type: TextProperty)
    std::uint8_t Button12_SubText[0x10]; // 0x0200 (Size: 0x10, Type: TextProperty)
    void* Art01_Image; // 0x0210 (Size: 0x8, Type: ObjectProperty)
    void* Art02_Image; // 0x0218 (Size: 0x8, Type: ObjectProperty)
    void* Art01_Material; // 0x0220 (Size: 0x8, Type: ObjectProperty)
    void* Art02_Material; // 0x0228 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ContentAlignment; // 0x0230 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bShowBackground; // 0x0231 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0232
    float DialogBackgroundAlpha; // 0x0234 (Size: 0x4, Type: FloatProperty)
    std::uint8_t TimerOption; // 0x0238 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0239
    float Timeout; // 0x023C (Size: 0x4, Type: FloatProperty)
    float RemainingTimeForTimeout; // 0x0240 (Size: 0x4, Type: FloatProperty)
    float Progress; // 0x0244 (Size: 0x4, Type: FloatProperty)
    std::int64_t NumberOfButtons; // 0x0248 (Size: 0x8, Type: Int64Property)
    std::uint8_t BackActionBoundButton; // 0x0250 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Response; // 0x0251 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Button01_Visibility; // 0x0252 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Button02_Visibility; // 0x0253 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Button03_Visibility; // 0x0254 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Button04_Visibility; // 0x0255 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Button05_Visibility; // 0x0256 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Button06_Visibility; // 0x0257 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Button07_Visibility; // 0x0258 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Button08_Visibility; // 0x0259 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Button09_Visibility; // 0x025A (Size: 0x1, Type: EnumProperty)
    std::uint8_t Button10_Visibility; // 0x025B (Size: 0x1, Type: EnumProperty)
    std::uint8_t Button11_Visibility; // 0x025C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Button12_Visibility; // 0x025D (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x2]; // 0x025E
    void* HoveredSound; // 0x0260 (Size: 0x8, Type: ObjectProperty)
    void* PressedSound; // 0x0268 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UCreativeModalDialogViewmodel, Title) == 104, "Offset mismatch for UCreativeModalDialogViewmodel::Title");
static_assert(offsetof(UCreativeModalDialogViewmodel, Body) == 120, "Offset mismatch for UCreativeModalDialogViewmodel::Body");
static_assert(offsetof(UCreativeModalDialogViewmodel, TextStyleSet) == 136, "Offset mismatch for UCreativeModalDialogViewmodel::TextStyleSet");
static_assert(offsetof(UCreativeModalDialogViewmodel, Button01_MainText) == 144, "Offset mismatch for UCreativeModalDialogViewmodel::Button01_MainText");
static_assert(offsetof(UCreativeModalDialogViewmodel, Button02_MainText) == 160, "Offset mismatch for UCreativeModalDialogViewmodel::Button02_MainText");
static_assert(offsetof(UCreativeModalDialogViewmodel, Button03_MainText) == 176, "Offset mismatch for UCreativeModalDialogViewmodel::Button03_MainText");
static_assert(offsetof(UCreativeModalDialogViewmodel, Button04_MainText) == 192, "Offset mismatch for UCreativeModalDialogViewmodel::Button04_MainText");
static_assert(offsetof(UCreativeModalDialogViewmodel, Button05_MainText) == 208, "Offset mismatch for UCreativeModalDialogViewmodel::Button05_MainText");
static_assert(offsetof(UCreativeModalDialogViewmodel, Button06_MainText) == 224, "Offset mismatch for UCreativeModalDialogViewmodel::Button06_MainText");
static_assert(offsetof(UCreativeModalDialogViewmodel, Button07_MainText) == 240, "Offset mismatch for UCreativeModalDialogViewmodel::Button07_MainText");
static_assert(offsetof(UCreativeModalDialogViewmodel, Button08_MainText) == 256, "Offset mismatch for UCreativeModalDialogViewmodel::Button08_MainText");
static_assert(offsetof(UCreativeModalDialogViewmodel, Button09_MainText) == 272, "Offset mismatch for UCreativeModalDialogViewmodel::Button09_MainText");
static_assert(offsetof(UCreativeModalDialogViewmodel, Button10_MainText) == 288, "Offset mismatch for UCreativeModalDialogViewmodel::Button10_MainText");
static_assert(offsetof(UCreativeModalDialogViewmodel, Button11_MainText) == 304, "Offset mismatch for UCreativeModalDialogViewmodel::Button11_MainText");
static_assert(offsetof(UCreativeModalDialogViewmodel, Button12_MainText) == 320, "Offset mismatch for UCreativeModalDialogViewmodel::Button12_MainText");
static_assert(offsetof(UCreativeModalDialogViewmodel, Button01_SubText) == 336, "Offset mismatch for UCreativeModalDialogViewmodel::Button01_SubText");
static_assert(offsetof(UCreativeModalDialogViewmodel, Button02_SubText) == 352, "Offset mismatch for UCreativeModalDialogViewmodel::Button02_SubText");
static_assert(offsetof(UCreativeModalDialogViewmodel, Button03_SubText) == 368, "Offset mismatch for UCreativeModalDialogViewmodel::Button03_SubText");
static_assert(offsetof(UCreativeModalDialogViewmodel, Button04_SubText) == 384, "Offset mismatch for UCreativeModalDialogViewmodel::Button04_SubText");
static_assert(offsetof(UCreativeModalDialogViewmodel, Button05_SubText) == 400, "Offset mismatch for UCreativeModalDialogViewmodel::Button05_SubText");
static_assert(offsetof(UCreativeModalDialogViewmodel, Button06_SubText) == 416, "Offset mismatch for UCreativeModalDialogViewmodel::Button06_SubText");
static_assert(offsetof(UCreativeModalDialogViewmodel, Button07_SubText) == 432, "Offset mismatch for UCreativeModalDialogViewmodel::Button07_SubText");
static_assert(offsetof(UCreativeModalDialogViewmodel, Button08_SubText) == 448, "Offset mismatch for UCreativeModalDialogViewmodel::Button08_SubText");
static_assert(offsetof(UCreativeModalDialogViewmodel, Button09_SubText) == 464, "Offset mismatch for UCreativeModalDialogViewmodel::Button09_SubText");
static_assert(offsetof(UCreativeModalDialogViewmodel, Button10_SubText) == 480, "Offset mismatch for UCreativeModalDialogViewmodel::Button10_SubText");
static_assert(offsetof(UCreativeModalDialogViewmodel, Button11_SubText) == 496, "Offset mismatch for UCreativeModalDialogViewmodel::Button11_SubText");
static_assert(offsetof(UCreativeModalDialogViewmodel, Button12_SubText) == 512, "Offset mismatch for UCreativeModalDialogViewmodel::Button12_SubText");
static_assert(offsetof(UCreativeModalDialogViewmodel, Art01_Image) == 528, "Offset mismatch for UCreativeModalDialogViewmodel::Art01_Image");
static_assert(offsetof(UCreativeModalDialogViewmodel, Art02_Image) == 536, "Offset mismatch for UCreativeModalDialogViewmodel::Art02_Image");
static_assert(offsetof(UCreativeModalDialogViewmodel, Art01_Material) == 544, "Offset mismatch for UCreativeModalDialogViewmodel::Art01_Material");
static_assert(offsetof(UCreativeModalDialogViewmodel, Art02_Material) == 552, "Offset mismatch for UCreativeModalDialogViewmodel::Art02_Material");
static_assert(offsetof(UCreativeModalDialogViewmodel, ContentAlignment) == 560, "Offset mismatch for UCreativeModalDialogViewmodel::ContentAlignment");
static_assert(offsetof(UCreativeModalDialogViewmodel, bShowBackground) == 561, "Offset mismatch for UCreativeModalDialogViewmodel::bShowBackground");
static_assert(offsetof(UCreativeModalDialogViewmodel, DialogBackgroundAlpha) == 564, "Offset mismatch for UCreativeModalDialogViewmodel::DialogBackgroundAlpha");
static_assert(offsetof(UCreativeModalDialogViewmodel, TimerOption) == 568, "Offset mismatch for UCreativeModalDialogViewmodel::TimerOption");
static_assert(offsetof(UCreativeModalDialogViewmodel, Timeout) == 572, "Offset mismatch for UCreativeModalDialogViewmodel::Timeout");
static_assert(offsetof(UCreativeModalDialogViewmodel, RemainingTimeForTimeout) == 576, "Offset mismatch for UCreativeModalDialogViewmodel::RemainingTimeForTimeout");
static_assert(offsetof(UCreativeModalDialogViewmodel, Progress) == 580, "Offset mismatch for UCreativeModalDialogViewmodel::Progress");
static_assert(offsetof(UCreativeModalDialogViewmodel, NumberOfButtons) == 584, "Offset mismatch for UCreativeModalDialogViewmodel::NumberOfButtons");
static_assert(offsetof(UCreativeModalDialogViewmodel, BackActionBoundButton) == 592, "Offset mismatch for UCreativeModalDialogViewmodel::BackActionBoundButton");
static_assert(offsetof(UCreativeModalDialogViewmodel, Response) == 593, "Offset mismatch for UCreativeModalDialogViewmodel::Response");
static_assert(offsetof(UCreativeModalDialogViewmodel, Button01_Visibility) == 594, "Offset mismatch for UCreativeModalDialogViewmodel::Button01_Visibility");
static_assert(offsetof(UCreativeModalDialogViewmodel, Button02_Visibility) == 595, "Offset mismatch for UCreativeModalDialogViewmodel::Button02_Visibility");
static_assert(offsetof(UCreativeModalDialogViewmodel, Button03_Visibility) == 596, "Offset mismatch for UCreativeModalDialogViewmodel::Button03_Visibility");
static_assert(offsetof(UCreativeModalDialogViewmodel, Button04_Visibility) == 597, "Offset mismatch for UCreativeModalDialogViewmodel::Button04_Visibility");
static_assert(offsetof(UCreativeModalDialogViewmodel, Button05_Visibility) == 598, "Offset mismatch for UCreativeModalDialogViewmodel::Button05_Visibility");
static_assert(offsetof(UCreativeModalDialogViewmodel, Button06_Visibility) == 599, "Offset mismatch for UCreativeModalDialogViewmodel::Button06_Visibility");
static_assert(offsetof(UCreativeModalDialogViewmodel, Button07_Visibility) == 600, "Offset mismatch for UCreativeModalDialogViewmodel::Button07_Visibility");
static_assert(offsetof(UCreativeModalDialogViewmodel, Button08_Visibility) == 601, "Offset mismatch for UCreativeModalDialogViewmodel::Button08_Visibility");
static_assert(offsetof(UCreativeModalDialogViewmodel, Button09_Visibility) == 602, "Offset mismatch for UCreativeModalDialogViewmodel::Button09_Visibility");
static_assert(offsetof(UCreativeModalDialogViewmodel, Button10_Visibility) == 603, "Offset mismatch for UCreativeModalDialogViewmodel::Button10_Visibility");
static_assert(offsetof(UCreativeModalDialogViewmodel, Button11_Visibility) == 604, "Offset mismatch for UCreativeModalDialogViewmodel::Button11_Visibility");
static_assert(offsetof(UCreativeModalDialogViewmodel, Button12_Visibility) == 605, "Offset mismatch for UCreativeModalDialogViewmodel::Button12_Visibility");
static_assert(offsetof(UCreativeModalDialogViewmodel, HoveredSound) == 608, "Offset mismatch for UCreativeModalDialogViewmodel::HoveredSound");
static_assert(offsetof(UCreativeModalDialogViewmodel, PressedSound) == 616, "Offset mismatch for UCreativeModalDialogViewmodel::PressedSound");

// /Script/CRD_ModalDialogUI.CreativeModalDialogWidget
// Kind: Class; super: CommonActivatableWidget
class UCreativeModalDialogWidget
{
public:
    std::uint8_t Pad_0000[0x4A0]; // 0x0000
    std::uint8_t MainMenuInputRowHandle[0x1]; // 0x04A0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UCreativeModalDialogWidget, MainMenuInputRowHandle) == 1184, "Offset mismatch for UCreativeModalDialogWidget::MainMenuInputRowHandle");

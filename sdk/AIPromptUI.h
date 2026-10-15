/**
 * decamp dumper generated SDK
 * Package: /Script/AIPromptUI
 */
#pragma once
#include "Basic.h"

// /Script/AIPromptUI.PersonaPermissionButtonVM
// Kind: Class; super: UIKitDialogButtonViewModel
class UPersonaPermissionButtonVM
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t Text[0x10]; // 0x0068 (Size: 0x10, Type: TextProperty)
    std::uint8_t ActionType; // 0x0078 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0079
    std::uint8_t DataTable[0x20]; // 0x0080 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t InputAction[0x4]; // 0x00A0 (Size: 0x4, Type: NameProperty)
    std::uint8_t bAutoDeactivate; // 0x00A4 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPersonaPermissionButtonVM, Text) == 104, "Offset mismatch for UPersonaPermissionButtonVM::Text");
static_assert(offsetof(UPersonaPermissionButtonVM, ActionType) == 120, "Offset mismatch for UPersonaPermissionButtonVM::ActionType");
static_assert(offsetof(UPersonaPermissionButtonVM, DataTable) == 128, "Offset mismatch for UPersonaPermissionButtonVM::DataTable");
static_assert(offsetof(UPersonaPermissionButtonVM, InputAction) == 160, "Offset mismatch for UPersonaPermissionButtonVM::InputAction");
static_assert(offsetof(UPersonaPermissionButtonVM, bAutoDeactivate) == 164, "Offset mismatch for UPersonaPermissionButtonVM::bAutoDeactivate");

// /Script/AIPromptUI.PersonaPermissionVM
// Kind: Class; super: FortPerUserViewModel
class UPersonaPermissionVM
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    FMulticastInlineDelegate OnConsentRequestedInProgressEvent; // 0x0078 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnConsentRequestedSuccessEvent; // 0x0088 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnConsentRequestedFailureEvent; // 0x0098 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPermissionGranted; // 0x00A8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x8]; // 0x00B8
    std::uint8_t Title[0x10]; // 0x00C0 (Size: 0x10, Type: TextProperty)
    std::uint8_t Description[0x10]; // 0x00D0 (Size: 0x10, Type: TextProperty)
    std::uint8_t DescriptionParentalControl[0x10]; // 0x00E0 (Size: 0x10, Type: TextProperty)
    std::uint8_t DescriptionCabined[0x10]; // 0x00F0 (Size: 0x10, Type: TextProperty)
    std::uint8_t RequestText[0x10]; // 0x0100 (Size: 0x10, Type: TextProperty)
    std::uint8_t PINText[0x10]; // 0x0110 (Size: 0x10, Type: TextProperty)
    std::uint8_t Back[0x10]; // 0x0120 (Size: 0x10, Type: TextProperty)
    std::uint8_t ConsentRequestInProgressText[0x10]; // 0x0130 (Size: 0x10, Type: TextProperty)
    std::uint8_t ConsentRequestSuccessText[0x10]; // 0x0140 (Size: 0x10, Type: TextProperty)
    std::uint8_t ConsentRequestFailureText[0x10]; // 0x0150 (Size: 0x10, Type: TextProperty)
    TArray<void*> Buttons; // 0x0160 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0002[0x8]; // 0x0170
    void* PINModalHelper; // 0x0178 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPersonaPermissionVM, OnConsentRequestedInProgressEvent) == 120, "Offset mismatch for UPersonaPermissionVM::OnConsentRequestedInProgressEvent");
static_assert(offsetof(UPersonaPermissionVM, OnConsentRequestedSuccessEvent) == 136, "Offset mismatch for UPersonaPermissionVM::OnConsentRequestedSuccessEvent");
static_assert(offsetof(UPersonaPermissionVM, OnConsentRequestedFailureEvent) == 152, "Offset mismatch for UPersonaPermissionVM::OnConsentRequestedFailureEvent");
static_assert(offsetof(UPersonaPermissionVM, OnPermissionGranted) == 168, "Offset mismatch for UPersonaPermissionVM::OnPermissionGranted");
static_assert(offsetof(UPersonaPermissionVM, Title) == 192, "Offset mismatch for UPersonaPermissionVM::Title");
static_assert(offsetof(UPersonaPermissionVM, Description) == 208, "Offset mismatch for UPersonaPermissionVM::Description");
static_assert(offsetof(UPersonaPermissionVM, DescriptionParentalControl) == 224, "Offset mismatch for UPersonaPermissionVM::DescriptionParentalControl");
static_assert(offsetof(UPersonaPermissionVM, DescriptionCabined) == 240, "Offset mismatch for UPersonaPermissionVM::DescriptionCabined");
static_assert(offsetof(UPersonaPermissionVM, RequestText) == 256, "Offset mismatch for UPersonaPermissionVM::RequestText");
static_assert(offsetof(UPersonaPermissionVM, PINText) == 272, "Offset mismatch for UPersonaPermissionVM::PINText");
static_assert(offsetof(UPersonaPermissionVM, Back) == 288, "Offset mismatch for UPersonaPermissionVM::Back");
static_assert(offsetof(UPersonaPermissionVM, ConsentRequestInProgressText) == 304, "Offset mismatch for UPersonaPermissionVM::ConsentRequestInProgressText");
static_assert(offsetof(UPersonaPermissionVM, ConsentRequestSuccessText) == 320, "Offset mismatch for UPersonaPermissionVM::ConsentRequestSuccessText");
static_assert(offsetof(UPersonaPermissionVM, ConsentRequestFailureText) == 336, "Offset mismatch for UPersonaPermissionVM::ConsentRequestFailureText");
static_assert(offsetof(UPersonaPermissionVM, Buttons) == 352, "Offset mismatch for UPersonaPermissionVM::Buttons");
static_assert(offsetof(UPersonaPermissionVM, PINModalHelper) == 376, "Offset mismatch for UPersonaPermissionVM::PINModalHelper");

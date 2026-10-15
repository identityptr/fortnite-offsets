/**
 * decamp dumper generated SDK
 * Package: /Script/JunoFTUEModalUI
 */
#pragma once
#include "Basic.h"

// /Script/JunoFTUEModalUI.JunoEvent_FTUEModal_OnClosed
// Kind: ScriptStruct; super: none
struct FJunoEvent_FTUEModal_OnClosed
{
public:
    std::int32_t ModalVersion; // 0x0000 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FJunoEvent_FTUEModal_OnClosed, ModalVersion) == 0, "Offset mismatch for FJunoEvent_FTUEModal_OnClosed::ModalVersion");

// /Script/JunoFTUEModalUI.JunoEvent_FTUEModal_RequestOpen
// Kind: ScriptStruct; super: none
struct FJunoEvent_FTUEModal_RequestOpen
{
public:
    std::int32_t ModalVersion; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    void* ModalViewModel; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FJunoEvent_FTUEModal_RequestOpen, ModalVersion) == 0, "Offset mismatch for FJunoEvent_FTUEModal_RequestOpen::ModalVersion");
static_assert(offsetof(FJunoEvent_FTUEModal_RequestOpen, ModalViewModel) == 8, "Offset mismatch for FJunoEvent_FTUEModal_RequestOpen::ModalViewModel");

// /Script/JunoFTUEModalUI.Juno_FTUEModal_DataRow
// Kind: ScriptStruct; super: TableRowBase
struct FJuno_FTUEModal_DataRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t ReleaseVersionRange[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t FilterGameModes[0x20]; // 0x0018 (Size: 0x20, Type: StructProperty)
    std::uint8_t WidgetOverride[0x20]; // 0x0038 (Size: 0x20, Type: SoftClassProperty)
    TArray<void*> ContentPages; // 0x0058 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJuno_FTUEModal_DataRow, ReleaseVersionRange) == 8, "Offset mismatch for FJuno_FTUEModal_DataRow::ReleaseVersionRange");
static_assert(offsetof(FJuno_FTUEModal_DataRow, FilterGameModes) == 24, "Offset mismatch for FJuno_FTUEModal_DataRow::FilterGameModes");
static_assert(offsetof(FJuno_FTUEModal_DataRow, WidgetOverride) == 56, "Offset mismatch for FJuno_FTUEModal_DataRow::WidgetOverride");
static_assert(offsetof(FJuno_FTUEModal_DataRow, ContentPages) == 88, "Offset mismatch for FJuno_FTUEModal_DataRow::ContentPages");

// /Script/JunoFTUEModalUI.Juno_FTUEModal_PageData
// Kind: ScriptStruct; super: none
struct FJuno_FTUEModal_PageData
{
public:
    std::uint8_t HeaderText[0x10]; // 0x0000 (Size: 0x10, Type: TextProperty)
    std::uint8_t BodyText[0x10]; // 0x0010 (Size: 0x10, Type: TextProperty)
    float BodyTextFontSizeScale; // 0x0020 (Size: 0x4, Type: FloatProperty)
    float BodyTextFontSizeScaleMobile; // 0x0024 (Size: 0x4, Type: FloatProperty)
    TSoftObjectPtr<void> KeyArt; // 0x0028 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FJuno_FTUEModal_PageData, HeaderText) == 0, "Offset mismatch for FJuno_FTUEModal_PageData::HeaderText");
static_assert(offsetof(FJuno_FTUEModal_PageData, BodyText) == 16, "Offset mismatch for FJuno_FTUEModal_PageData::BodyText");
static_assert(offsetof(FJuno_FTUEModal_PageData, BodyTextFontSizeScale) == 32, "Offset mismatch for FJuno_FTUEModal_PageData::BodyTextFontSizeScale");
static_assert(offsetof(FJuno_FTUEModal_PageData, BodyTextFontSizeScaleMobile) == 36, "Offset mismatch for FJuno_FTUEModal_PageData::BodyTextFontSizeScaleMobile");
static_assert(offsetof(FJuno_FTUEModal_PageData, KeyArt) == 40, "Offset mismatch for FJuno_FTUEModal_PageData::KeyArt");

// /Script/JunoFTUEModalUI.JunoControllerComponent_FTUEModal
// Kind: Class; super: FortControllerComponent
class UJunoControllerComponent_FTUEModal
{
public:
    std::uint8_t Pad_0000[0xEC]; // 0x0000
    float CurrentReleaseModalDelaySeconds; // 0x00EC (Size: 0x4, Type: FloatProperty)
    void* CurrentFTUEModalViewModel; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoControllerComponent_FTUEModal, CurrentReleaseModalDelaySeconds) == 236, "Offset mismatch for UJunoControllerComponent_FTUEModal::CurrentReleaseModalDelaySeconds");
static_assert(offsetof(UJunoControllerComponent_FTUEModal, CurrentFTUEModalViewModel) == 240, "Offset mismatch for UJunoControllerComponent_FTUEModal::CurrentFTUEModalViewModel");

// /Script/JunoFTUEModalUI.JunoFTUEModalCheatManager
// Kind: Class; super: ChildCheatManager
class UJunoFTUEModalCheatManager
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoFTUEModalUI.JunoFTUEModalViewModel
// Kind: Class; super: FortPerUserViewModel
class UJunoFTUEModalViewModel
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t WidgetOverride[0x20]; // 0x0078 (Size: 0x20, Type: SoftClassProperty)
    TArray<void*> ContentPages; // 0x0098 (Size: 0x10, Type: ArrayProperty)
    std::int32_t ModalVersion; // 0x00A8 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UJunoFTUEModalViewModel, WidgetOverride) == 120, "Offset mismatch for UJunoFTUEModalViewModel::WidgetOverride");
static_assert(offsetof(UJunoFTUEModalViewModel, ContentPages) == 152, "Offset mismatch for UJunoFTUEModalViewModel::ContentPages");
static_assert(offsetof(UJunoFTUEModalViewModel, ModalVersion) == 168, "Offset mismatch for UJunoFTUEModalViewModel::ModalVersion");

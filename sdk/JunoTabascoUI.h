/**
 * decamp dumper generated SDK
 * Package: /Script/JunoTabascoUI
 */
#pragma once
#include "Basic.h"

// /Script/JunoTabascoUI.JunoTabascoPOIAnnouncementRow
// Kind: ScriptStruct; super: TableRowBase
struct FJunoTabascoPOIAnnouncementRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    FName ID; // 0x0008 (Size: 0x8, Type: NameProperty)
    std::uint8_t POIName[0x10]; // 0x0010 (Size: 0x10, Type: TextProperty)
    std::uint8_t POISubtitle[0x10]; // 0x0020 (Size: 0x10, Type: TextProperty)
    std::uint8_t POIImageMaterial[0x20]; // 0x0030 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t POIBadgeTexture[0x20]; // 0x0050 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t POIBadgeColor[0x4]; // 0x0070 (Size: 0x4, Type: StructProperty)
    std::uint8_t IdTag[0x4]; // 0x0074 (Size: 0x4, Type: StructProperty)
    TSoftObjectPtr<void> POIHUDBadgeIconImageMaterial; // 0x0078 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FJunoTabascoPOIAnnouncementRow, ID) == 8, "Offset mismatch for FJunoTabascoPOIAnnouncementRow::ID");
static_assert(offsetof(FJunoTabascoPOIAnnouncementRow, POIName) == 16, "Offset mismatch for FJunoTabascoPOIAnnouncementRow::POIName");
static_assert(offsetof(FJunoTabascoPOIAnnouncementRow, POISubtitle) == 32, "Offset mismatch for FJunoTabascoPOIAnnouncementRow::POISubtitle");
static_assert(offsetof(FJunoTabascoPOIAnnouncementRow, POIImageMaterial) == 48, "Offset mismatch for FJunoTabascoPOIAnnouncementRow::POIImageMaterial");
static_assert(offsetof(FJunoTabascoPOIAnnouncementRow, POIBadgeTexture) == 80, "Offset mismatch for FJunoTabascoPOIAnnouncementRow::POIBadgeTexture");
static_assert(offsetof(FJunoTabascoPOIAnnouncementRow, POIBadgeColor) == 112, "Offset mismatch for FJunoTabascoPOIAnnouncementRow::POIBadgeColor");
static_assert(offsetof(FJunoTabascoPOIAnnouncementRow, IdTag) == 116, "Offset mismatch for FJunoTabascoPOIAnnouncementRow::IdTag");
static_assert(offsetof(FJunoTabascoPOIAnnouncementRow, POIHUDBadgeIconImageMaterial) == 120, "Offset mismatch for FJunoTabascoPOIAnnouncementRow::POIHUDBadgeIconImageMaterial");

// /Script/JunoTabascoUI.JunoTabascoPOIAnnouncementViewModel
// Kind: Class; super: FortPerUserViewModel
class UJunoTabascoPOIAnnouncementViewModel
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    std::int32_t Level; // 0x0080 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0084
    std::uint8_t Material[0x20]; // 0x0088 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t Name[0x10]; // 0x00A8 (Size: 0x10, Type: TextProperty)
    std::uint8_t SubtitleText[0x10]; // 0x00B8 (Size: 0x10, Type: TextProperty)
    std::uint8_t BadgeTexture[0x20]; // 0x00C8 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t BadgeColor[0x4]; // 0x00E8 (Size: 0x4, Type: StructProperty)
    std::uint8_t TypeTag[0x4]; // 0x00EC (Size: 0x4, Type: StructProperty)
    TSoftObjectPtr<void> HUDBadgeIconMaterial; // 0x00F0 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UJunoTabascoPOIAnnouncementViewModel, Level) == 128, "Offset mismatch for UJunoTabascoPOIAnnouncementViewModel::Level");
static_assert(offsetof(UJunoTabascoPOIAnnouncementViewModel, Material) == 136, "Offset mismatch for UJunoTabascoPOIAnnouncementViewModel::Material");
static_assert(offsetof(UJunoTabascoPOIAnnouncementViewModel, Name) == 168, "Offset mismatch for UJunoTabascoPOIAnnouncementViewModel::Name");
static_assert(offsetof(UJunoTabascoPOIAnnouncementViewModel, SubtitleText) == 184, "Offset mismatch for UJunoTabascoPOIAnnouncementViewModel::SubtitleText");
static_assert(offsetof(UJunoTabascoPOIAnnouncementViewModel, BadgeTexture) == 200, "Offset mismatch for UJunoTabascoPOIAnnouncementViewModel::BadgeTexture");
static_assert(offsetof(UJunoTabascoPOIAnnouncementViewModel, BadgeColor) == 232, "Offset mismatch for UJunoTabascoPOIAnnouncementViewModel::BadgeColor");
static_assert(offsetof(UJunoTabascoPOIAnnouncementViewModel, TypeTag) == 236, "Offset mismatch for UJunoTabascoPOIAnnouncementViewModel::TypeTag");
static_assert(offsetof(UJunoTabascoPOIAnnouncementViewModel, HUDBadgeIconMaterial) == 240, "Offset mismatch for UJunoTabascoPOIAnnouncementViewModel::HUDBadgeIconMaterial");

// /Script/JunoTabascoUI.JunoTabascoUICheatManager
// Kind: Class; super: ChildCheatManager
class UJunoTabascoUICheatManager
{
public:
    std::uint8_t Opaque[1];
};

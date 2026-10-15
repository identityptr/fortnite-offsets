/**
 * decamp dumper generated SDK
 * Package: /DiscoveryBrowser/Tiles/Islands/WBP_IslandTile_Minimal
 */
#pragma once
#include "Basic.h"

// /DiscoveryBrowser/Tiles/Islands/WBP_IslandTile_Minimal.WBP_IslandTile_Minimal_C
// Kind: WidgetBlueprintGeneratedClass; super: FortActivityTileDetailsDisplay
class UWBP_IslandTile_Minimal_C
{
public:
    std::uint8_t Pad_0000[0x1840]; // 0x0000
    std::uint8_t UberGraphFrame[0x18]; // 0x1840 (Size: 0x18, Type: StructProperty)
    void* TileThumbnail; // 0x1858 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x1860
    void* StatusIndicator_Favorite; // 0x1868 (Size: 0x8, Type: ObjectProperty)
    void* StatusIndicator_DownloadProgress; // 0x1870 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x10]; // 0x1878
    void* Slot_OutsideContent; // 0x1888 (Size: 0x8, Type: ObjectProperty)
    void* Slot_CompactTitle; // 0x1890 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0003[0x8]; // 0x1898
    void* Overlay; // 0x18A0 (Size: 0x8, Type: ObjectProperty)
    void* NamedSlot_Title; // 0x18A8 (Size: 0x8, Type: ObjectProperty)
    void* Img_Logo; // 0x18B0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0004[0x18]; // 0x18B8
    void* Highlight_Label; // 0x18D0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0005[0x8]; // 0x18D8
    void* FriendsPlaying; // 0x18E0 (Size: 0x8, Type: ObjectProperty)
    void* ErrorIcon; // 0x18E8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0006[0x28]; // 0x18F0
    void* Anim_OnLoadedImage; // 0x1918 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0007[0x10]; // 0x1920
    void* FortActivityViewModel; // 0x1930 (Size: 0x8, Type: ObjectProperty)
    void* FortCountdownTimerVM; // 0x1938 (Size: 0x8, Type: ObjectProperty)
    void* FortNestedButtonGroupSelectionVM; // 0x1940 (Size: 0x8, Type: ObjectProperty)
    void* PlayerPlaytimeStateVM; // 0x1948 (Size: 0x8, Type: ObjectProperty)
    FName TextureParam; // 0x1950 (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0008[0xC]; // 0x1958
    FName ContextMenuFavoriteName; // 0x1964 (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0009[0x4]; // 0x196C
    FMulticastInlineDelegate OnFocusGained; // 0x1970 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_000A[0x3C]; // 0x1980
    std::uint8_t ContextMenuViewCreatorName[0x4]; // 0x19BC (Size: 0x4, Type: NameProperty)
    std::uint8_t ContextMenuGoToLobbyName[0x4]; // 0x19C0 (Size: 0x4, Type: NameProperty)
    std::uint8_t IsTileActive; // 0x19C4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000B[0x3]; // 0x19C5
    FName ContextMenuNotInterestedName; // 0x19C8 (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_000C[0x10]; // 0x19D0
    std::uint8_t ContextMenuDownloadFirstName[0x4]; // 0x19E0 (Size: 0x4, Type: NameProperty)
    FName ContextMenuCancelDownloadName; // 0x19E4 (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_000D[0x18]; // 0x19EC
    FName ContextMenuViewDetails; // 0x1A04 (Size: 0x8, Type: NameProperty)
    std::uint8_t TilePadding[0x10]; // 0x1A0C (Size: 0x10, Type: StructProperty)
    std::uint8_t IsMasked; // 0x1A1C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UWBP_IslandTile_Minimal_C, UberGraphFrame) == 6208, "Offset mismatch for UWBP_IslandTile_Minimal_C::UberGraphFrame");
static_assert(offsetof(UWBP_IslandTile_Minimal_C, TileThumbnail) == 6232, "Offset mismatch for UWBP_IslandTile_Minimal_C::TileThumbnail");
static_assert(offsetof(UWBP_IslandTile_Minimal_C, StatusIndicator_Favorite) == 6248, "Offset mismatch for UWBP_IslandTile_Minimal_C::StatusIndicator_Favorite");
static_assert(offsetof(UWBP_IslandTile_Minimal_C, StatusIndicator_DownloadProgress) == 6256, "Offset mismatch for UWBP_IslandTile_Minimal_C::StatusIndicator_DownloadProgress");
static_assert(offsetof(UWBP_IslandTile_Minimal_C, Slot_OutsideContent) == 6280, "Offset mismatch for UWBP_IslandTile_Minimal_C::Slot_OutsideContent");
static_assert(offsetof(UWBP_IslandTile_Minimal_C, Slot_CompactTitle) == 6288, "Offset mismatch for UWBP_IslandTile_Minimal_C::Slot_CompactTitle");
static_assert(offsetof(UWBP_IslandTile_Minimal_C, Overlay) == 6304, "Offset mismatch for UWBP_IslandTile_Minimal_C::Overlay");
static_assert(offsetof(UWBP_IslandTile_Minimal_C, NamedSlot_Title) == 6312, "Offset mismatch for UWBP_IslandTile_Minimal_C::NamedSlot_Title");
static_assert(offsetof(UWBP_IslandTile_Minimal_C, Img_Logo) == 6320, "Offset mismatch for UWBP_IslandTile_Minimal_C::Img_Logo");
static_assert(offsetof(UWBP_IslandTile_Minimal_C, Highlight_Label) == 6352, "Offset mismatch for UWBP_IslandTile_Minimal_C::Highlight_Label");
static_assert(offsetof(UWBP_IslandTile_Minimal_C, FriendsPlaying) == 6368, "Offset mismatch for UWBP_IslandTile_Minimal_C::FriendsPlaying");
static_assert(offsetof(UWBP_IslandTile_Minimal_C, ErrorIcon) == 6376, "Offset mismatch for UWBP_IslandTile_Minimal_C::ErrorIcon");
static_assert(offsetof(UWBP_IslandTile_Minimal_C, Anim_OnLoadedImage) == 6424, "Offset mismatch for UWBP_IslandTile_Minimal_C::Anim_OnLoadedImage");
static_assert(offsetof(UWBP_IslandTile_Minimal_C, FortActivityViewModel) == 6448, "Offset mismatch for UWBP_IslandTile_Minimal_C::FortActivityViewModel");
static_assert(offsetof(UWBP_IslandTile_Minimal_C, FortCountdownTimerVM) == 6456, "Offset mismatch for UWBP_IslandTile_Minimal_C::FortCountdownTimerVM");
static_assert(offsetof(UWBP_IslandTile_Minimal_C, FortNestedButtonGroupSelectionVM) == 6464, "Offset mismatch for UWBP_IslandTile_Minimal_C::FortNestedButtonGroupSelectionVM");
static_assert(offsetof(UWBP_IslandTile_Minimal_C, PlayerPlaytimeStateVM) == 6472, "Offset mismatch for UWBP_IslandTile_Minimal_C::PlayerPlaytimeStateVM");
static_assert(offsetof(UWBP_IslandTile_Minimal_C, TextureParam) == 6480, "Offset mismatch for UWBP_IslandTile_Minimal_C::TextureParam");
static_assert(offsetof(UWBP_IslandTile_Minimal_C, ContextMenuFavoriteName) == 6500, "Offset mismatch for UWBP_IslandTile_Minimal_C::ContextMenuFavoriteName");
static_assert(offsetof(UWBP_IslandTile_Minimal_C, OnFocusGained) == 6512, "Offset mismatch for UWBP_IslandTile_Minimal_C::OnFocusGained");
static_assert(offsetof(UWBP_IslandTile_Minimal_C, ContextMenuViewCreatorName) == 6588, "Offset mismatch for UWBP_IslandTile_Minimal_C::ContextMenuViewCreatorName");
static_assert(offsetof(UWBP_IslandTile_Minimal_C, ContextMenuGoToLobbyName) == 6592, "Offset mismatch for UWBP_IslandTile_Minimal_C::ContextMenuGoToLobbyName");
static_assert(offsetof(UWBP_IslandTile_Minimal_C, IsTileActive) == 6596, "Offset mismatch for UWBP_IslandTile_Minimal_C::IsTileActive");
static_assert(offsetof(UWBP_IslandTile_Minimal_C, ContextMenuNotInterestedName) == 6600, "Offset mismatch for UWBP_IslandTile_Minimal_C::ContextMenuNotInterestedName");
static_assert(offsetof(UWBP_IslandTile_Minimal_C, ContextMenuDownloadFirstName) == 6624, "Offset mismatch for UWBP_IslandTile_Minimal_C::ContextMenuDownloadFirstName");
static_assert(offsetof(UWBP_IslandTile_Minimal_C, ContextMenuCancelDownloadName) == 6628, "Offset mismatch for UWBP_IslandTile_Minimal_C::ContextMenuCancelDownloadName");
static_assert(offsetof(UWBP_IslandTile_Minimal_C, ContextMenuViewDetails) == 6660, "Offset mismatch for UWBP_IslandTile_Minimal_C::ContextMenuViewDetails");
static_assert(offsetof(UWBP_IslandTile_Minimal_C, TilePadding) == 6668, "Offset mismatch for UWBP_IslandTile_Minimal_C::TilePadding");
static_assert(offsetof(UWBP_IslandTile_Minimal_C, IsMasked) == 6684, "Offset mismatch for UWBP_IslandTile_Minimal_C::IsMasked");

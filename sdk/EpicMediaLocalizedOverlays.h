/**
 * decamp dumper generated SDK
 * Package: /Script/EpicMediaLocalizedOverlays
 */
#pragma once
#include "Basic.h"

// /Script/EpicMediaLocalizedOverlays.EpicMediaDownloadLocalizedOverlays
// Kind: Class; super: LocalizedOverlays
class UEpicMediaDownloadLocalizedOverlays
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    void* MediaPlayer; // 0x0040 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UEpicMediaDownloadLocalizedOverlays, MediaPlayer) == 64, "Offset mismatch for UEpicMediaDownloadLocalizedOverlays::MediaPlayer");

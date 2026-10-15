/**
 * decamp dumper generated SDK
 * Package: /Script/VKDownloadOnDemandGameplay
 */
#pragma once
#include "Basic.h"

// /Script/VKDownloadOnDemandGameplay.DownloadOnDemandComponent
// Kind: Class; super: ControllerComponent
class UDownloadOnDemandComponent
{
public:
    std::uint8_t Pad_0000[0x228]; // 0x0000
    void* Plot; // 0x0228 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> UserOwnedProjects; // 0x0230 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ShelvedContents; // 0x0240 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UDownloadOnDemandComponent, Plot) == 552, "Offset mismatch for UDownloadOnDemandComponent::Plot");
static_assert(offsetof(UDownloadOnDemandComponent, UserOwnedProjects) == 560, "Offset mismatch for UDownloadOnDemandComponent::UserOwnedProjects");
static_assert(offsetof(UDownloadOnDemandComponent, ShelvedContents) == 576, "Offset mismatch for UDownloadOnDemandComponent::ShelvedContents");

// /Script/VKDownloadOnDemandGameplay.DownloadOnDemandPlot
// Kind: Class; super: Object
class UDownloadOnDemandPlot
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    TArray<void*> ActiveProjects; // 0x00A0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PendingProjects; // 0x00B0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UDownloadOnDemandPlot, ActiveProjects) == 160, "Offset mismatch for UDownloadOnDemandPlot::ActiveProjects");
static_assert(offsetof(UDownloadOnDemandPlot, PendingProjects) == 176, "Offset mismatch for UDownloadOnDemandPlot::PendingProjects");

// /Script/VKDownloadOnDemandGameplay.DownloadOnDemandProject
// Kind: Class; super: Object
class UDownloadOnDemandProject
{
public:
    std::uint8_t Pad_0000[0xB8]; // 0x0000
    void* Descriptor; // 0x00B8 (Size: 0x8, Type: ObjectProperty)
    TMap<void*, void*> Contents; // 0x00C0 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UDownloadOnDemandProject, Descriptor) == 184, "Offset mismatch for UDownloadOnDemandProject::Descriptor");
static_assert(offsetof(UDownloadOnDemandProject, Contents) == 192, "Offset mismatch for UDownloadOnDemandProject::Contents");

// /Script/VKDownloadOnDemandGameplay.DownloadOnDemandProjectContent
// Kind: Class; super: Object
class UDownloadOnDemandProjectContent
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    TArray<void*> ContentItemDefinitions; // 0x0070 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ContentSoftObjectPaths; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> LoadFailedContentObjectPaths; // 0x0090 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UDownloadOnDemandProjectContent, ContentItemDefinitions) == 112, "Offset mismatch for UDownloadOnDemandProjectContent::ContentItemDefinitions");
static_assert(offsetof(UDownloadOnDemandProjectContent, ContentSoftObjectPaths) == 128, "Offset mismatch for UDownloadOnDemandProjectContent::ContentSoftObjectPaths");
static_assert(offsetof(UDownloadOnDemandProjectContent, LoadFailedContentObjectPaths) == 144, "Offset mismatch for UDownloadOnDemandProjectContent::LoadFailedContentObjectPaths");

// /Script/VKDownloadOnDemandGameplay.DownloadOnDemandProjectDescriptor
// Kind: Class; super: Object
class UDownloadOnDemandProjectDescriptor
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    void* Image; // 0x0070 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDownloadOnDemandProjectDescriptor, Image) == 112, "Offset mismatch for UDownloadOnDemandProjectDescriptor::Image");

// /Script/VKDownloadOnDemandGameplay.DownloadOnDemandProjectImage
// Kind: Class; super: Object
class UDownloadOnDemandProjectImage
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    void* PreviewTexture; // 0x0058 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDownloadOnDemandProjectImage, PreviewTexture) == 88, "Offset mismatch for UDownloadOnDemandProjectImage::PreviewTexture");

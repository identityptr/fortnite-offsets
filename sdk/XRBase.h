/**
 * decamp dumper generated SDK
 * Package: /Script/XRBase
 */
#pragma once
#include "Basic.h"

// /Script/XRBase.AsyncTask_LoadXRDeviceVisComponent
// Kind: Class; super: BlueprintAsyncActionBase
class UAsyncTask_LoadXRDeviceVisComponent
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    FMulticastInlineDelegate OnModelLoaded; // 0x0030 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnLoadFailure; // 0x0040 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0050
    void* SpawnedComponent; // 0x0058 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UAsyncTask_LoadXRDeviceVisComponent, OnModelLoaded) == 48, "Offset mismatch for UAsyncTask_LoadXRDeviceVisComponent::OnModelLoaded");
static_assert(offsetof(UAsyncTask_LoadXRDeviceVisComponent, OnLoadFailure) == 64, "Offset mismatch for UAsyncTask_LoadXRDeviceVisComponent::OnLoadFailure");
static_assert(offsetof(UAsyncTask_LoadXRDeviceVisComponent, SpawnedComponent) == 88, "Offset mismatch for UAsyncTask_LoadXRDeviceVisComponent::SpawnedComponent");

// /Script/XRBase.HeadMountedDisplayFunctionLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UHeadMountedDisplayFunctionLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/XRBase.MotionTrackedDeviceFunctionLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UMotionTrackedDeviceFunctionLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/XRBase.VRNotificationsComponent
// Kind: Class; super: ActorComponent
class UVRNotificationsComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate HMDTrackingInitializedDelegate; // 0x00D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate HMDRecenteredDelegate; // 0x00E0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate HMDLostDelegate; // 0x00F0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate HMDReconnectedDelegate; // 0x0100 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate HMDConnectCanceledDelegate; // 0x0110 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate HMDPutOnHeadDelegate; // 0x0120 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate HMDRemovedFromHeadDelegate; // 0x0130 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate VRControllerRecenteredDelegate; // 0x0140 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate XRTrackingOriginChangedDelegate; // 0x0150 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate XRPlayAreaChangedDelegate; // 0x0160 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate XRInteractionProfileChangedDelegate; // 0x0170 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UVRNotificationsComponent, HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate) == 192, "Offset mismatch for UVRNotificationsComponent::HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate");
static_assert(offsetof(UVRNotificationsComponent, HMDTrackingInitializedDelegate) == 208, "Offset mismatch for UVRNotificationsComponent::HMDTrackingInitializedDelegate");
static_assert(offsetof(UVRNotificationsComponent, HMDRecenteredDelegate) == 224, "Offset mismatch for UVRNotificationsComponent::HMDRecenteredDelegate");
static_assert(offsetof(UVRNotificationsComponent, HMDLostDelegate) == 240, "Offset mismatch for UVRNotificationsComponent::HMDLostDelegate");
static_assert(offsetof(UVRNotificationsComponent, HMDReconnectedDelegate) == 256, "Offset mismatch for UVRNotificationsComponent::HMDReconnectedDelegate");
static_assert(offsetof(UVRNotificationsComponent, HMDConnectCanceledDelegate) == 272, "Offset mismatch for UVRNotificationsComponent::HMDConnectCanceledDelegate");
static_assert(offsetof(UVRNotificationsComponent, HMDPutOnHeadDelegate) == 288, "Offset mismatch for UVRNotificationsComponent::HMDPutOnHeadDelegate");
static_assert(offsetof(UVRNotificationsComponent, HMDRemovedFromHeadDelegate) == 304, "Offset mismatch for UVRNotificationsComponent::HMDRemovedFromHeadDelegate");
static_assert(offsetof(UVRNotificationsComponent, VRControllerRecenteredDelegate) == 320, "Offset mismatch for UVRNotificationsComponent::VRControllerRecenteredDelegate");
static_assert(offsetof(UVRNotificationsComponent, XRTrackingOriginChangedDelegate) == 336, "Offset mismatch for UVRNotificationsComponent::XRTrackingOriginChangedDelegate");
static_assert(offsetof(UVRNotificationsComponent, XRPlayAreaChangedDelegate) == 352, "Offset mismatch for UVRNotificationsComponent::XRPlayAreaChangedDelegate");
static_assert(offsetof(UVRNotificationsComponent, XRInteractionProfileChangedDelegate) == 368, "Offset mismatch for UVRNotificationsComponent::XRInteractionProfileChangedDelegate");

// /Script/XRBase.XRAssetFunctionLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UXRAssetFunctionLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/XRBase.XRDeviceVisualizationComponent
// Kind: Class; super: StaticMeshComponent
class UXRDeviceVisualizationComponent
{
public:
    std::uint8_t Pad_0000[0x6B0]; // 0x0000
    std::uint8_t bIsVisualizationActive; // 0x06B0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x06B1
    std::uint8_t DisplayModelSource[0x4]; // 0x06B4 (Size: 0x4, Type: NameProperty)
    void* CustomDisplayMesh; // 0x06B8 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> DisplayMeshMaterialOverrides; // 0x06C0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UXRDeviceVisualizationComponent, bIsVisualizationActive) == 1712, "Offset mismatch for UXRDeviceVisualizationComponent::bIsVisualizationActive");
static_assert(offsetof(UXRDeviceVisualizationComponent, DisplayModelSource) == 1716, "Offset mismatch for UXRDeviceVisualizationComponent::DisplayModelSource");
static_assert(offsetof(UXRDeviceVisualizationComponent, CustomDisplayMesh) == 1720, "Offset mismatch for UXRDeviceVisualizationComponent::CustomDisplayMesh");
static_assert(offsetof(UXRDeviceVisualizationComponent, DisplayMeshMaterialOverrides) == 1728, "Offset mismatch for UXRDeviceVisualizationComponent::DisplayMeshMaterialOverrides");

// /Script/XRBase.XRLoadingScreenFunctionLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UXRLoadingScreenFunctionLibrary
{
public:
    std::uint8_t Opaque[1];
};

/**
 * decamp dumper generated SDK
 * Package: /Script/LiveLinkComponents
 */
#pragma once
#include "Basic.h"

// /Script/LiveLinkComponents.LiveLinkTransformControllerData
// Kind: ScriptStruct; super: none
struct FLiveLinkTransformControllerData
{
public:
    std::uint8_t bWorldTransform; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseLocation; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseRotation; // 0x0002 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseScale; // 0x0003 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSweep; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTeleport; // 0x0005 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FLiveLinkTransformControllerData, bWorldTransform) == 0, "Offset mismatch for FLiveLinkTransformControllerData::bWorldTransform");
static_assert(offsetof(FLiveLinkTransformControllerData, bUseLocation) == 1, "Offset mismatch for FLiveLinkTransformControllerData::bUseLocation");
static_assert(offsetof(FLiveLinkTransformControllerData, bUseRotation) == 2, "Offset mismatch for FLiveLinkTransformControllerData::bUseRotation");
static_assert(offsetof(FLiveLinkTransformControllerData, bUseScale) == 3, "Offset mismatch for FLiveLinkTransformControllerData::bUseScale");
static_assert(offsetof(FLiveLinkTransformControllerData, bSweep) == 4, "Offset mismatch for FLiveLinkTransformControllerData::bSweep");
static_assert(offsetof(FLiveLinkTransformControllerData, bTeleport) == 5, "Offset mismatch for FLiveLinkTransformControllerData::bTeleport");

// /Script/LiveLinkComponents.LiveLinkCharacterController
// Kind: Class; super: LiveLinkTransformController
class ULiveLinkCharacterController
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    std::uint8_t TransformData[0x10]; // 0x0060 (Size: 0x10, Type: StructProperty)
    std::uint8_t OffsetTransform[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(ULiveLinkCharacterController, TransformData) == 96, "Offset mismatch for ULiveLinkCharacterController::TransformData");
static_assert(offsetof(ULiveLinkCharacterController, OffsetTransform) == 112, "Offset mismatch for ULiveLinkCharacterController::OffsetTransform");

// /Script/LiveLinkComponents.LiveLinkComponentController
// Kind: Class; super: ActorComponent
class ULiveLinkComponentController
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t SubjectRepresentation[0x10]; // 0x00C0 (Size: 0x10, Type: StructProperty)
    TMap<void*, void*> ControllerMap; // 0x00D0 (Size: 0x10, Type: MapProperty)
    std::uint8_t bUpdateInEditor; // 0x00E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00E1
    FMulticastInlineDelegate OnLiveLinkUpdated; // 0x00E8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnControllerMapUpdatedDelegate; // 0x00F8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t bDisableEvaluateLiveLinkWhenSpawnable; // 0x0108 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEvaluateLiveLink; // 0x0109 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUpdateInPreviewEditor; // 0x010A (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(ULiveLinkComponentController, SubjectRepresentation) == 192, "Offset mismatch for ULiveLinkComponentController::SubjectRepresentation");
static_assert(offsetof(ULiveLinkComponentController, ControllerMap) == 208, "Offset mismatch for ULiveLinkComponentController::ControllerMap");
static_assert(offsetof(ULiveLinkComponentController, bUpdateInEditor) == 224, "Offset mismatch for ULiveLinkComponentController::bUpdateInEditor");
static_assert(offsetof(ULiveLinkComponentController, OnLiveLinkUpdated) == 232, "Offset mismatch for ULiveLinkComponentController::OnLiveLinkUpdated");
static_assert(offsetof(ULiveLinkComponentController, OnControllerMapUpdatedDelegate) == 248, "Offset mismatch for ULiveLinkComponentController::OnControllerMapUpdatedDelegate");
static_assert(offsetof(ULiveLinkComponentController, bDisableEvaluateLiveLinkWhenSpawnable) == 264, "Offset mismatch for ULiveLinkComponentController::bDisableEvaluateLiveLinkWhenSpawnable");
static_assert(offsetof(ULiveLinkComponentController, bEvaluateLiveLink) == 265, "Offset mismatch for ULiveLinkComponentController::bEvaluateLiveLink");
static_assert(offsetof(ULiveLinkComponentController, bUpdateInPreviewEditor) == 266, "Offset mismatch for ULiveLinkComponentController::bUpdateInPreviewEditor");

// /Script/LiveLinkComponents.LiveLinkComponentSettings
// Kind: Class; super: Object
class ULiveLinkComponentSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TMap<void*, void*> DefaultControllerForRole; // 0x0028 (Size: 0x10, Type: MapProperty)
    std::uint8_t bUpdateSubjectsImmediatelyInPIE; // 0x0038 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(ULiveLinkComponentSettings, DefaultControllerForRole) == 40, "Offset mismatch for ULiveLinkComponentSettings::DefaultControllerForRole");
static_assert(offsetof(ULiveLinkComponentSettings, bUpdateSubjectsImmediatelyInPIE) == 56, "Offset mismatch for ULiveLinkComponentSettings::bUpdateSubjectsImmediatelyInPIE");

// /Script/LiveLinkComponents.LiveLinkControllerBase
// Kind: Class; super: Object
class ULiveLinkControllerBase
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t ComponentPicker[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(ULiveLinkControllerBase, ComponentPicker) == 40, "Offset mismatch for ULiveLinkControllerBase::ComponentPicker");

// /Script/LiveLinkComponents.LiveLinkLightController
// Kind: Class; super: LiveLinkControllerBase
class ULiveLinkLightController
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t ComponentPicker[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(ULiveLinkLightController, ComponentPicker) == 40, "Offset mismatch for ULiveLinkLightController::ComponentPicker");

// /Script/LiveLinkComponents.LiveLinkTransformController
// Kind: Class; super: LiveLinkControllerBase
class ULiveLinkTransformController
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    std::uint8_t TransformData[0x10]; // 0x0060 (Size: 0x10, Type: StructProperty)
    std::uint8_t OffsetTransform[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(ULiveLinkTransformController, TransformData) == 96, "Offset mismatch for ULiveLinkTransformController::TransformData");
static_assert(offsetof(ULiveLinkTransformController, OffsetTransform) == 112, "Offset mismatch for ULiveLinkTransformController::OffsetTransform");

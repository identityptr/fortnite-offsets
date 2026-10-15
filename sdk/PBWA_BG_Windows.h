/**
 * decamp dumper generated SDK
 * Package: /Game/Building/ActorBlueprints/Player/BuildingGuides/PBWA_BG_Windows
 */
#pragma once
#include "Basic.h"

// /Game/Building/ActorBlueprints/Player/BuildingGuides/PBWA_BG_Windows.PBWA_BG_Windows_C
// Kind: BlueprintGeneratedClass; super: BuildingWall
class UPBWA_BG_Windows_C
{
public:
    std::uint8_t Pad_0000[0xB20]; // 0x0000
    std::uint8_t DoorObstacleClass[0x20]; // 0x0B20 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t ClimbLink[0x30]; // 0x0B40 (Size: 0x30, Type: StructProperty)
    std::uint8_t DoorScale[0xC]; // 0x0B70 (Size: 0xC, Type: StructProperty)
    std::uint8_t DoorOffset[0xC]; // 0x0B7C (Size: 0xC, Type: StructProperty)
    std::uint8_t SlidingDoorOffset[0xC]; // 0x0B88 (Size: 0xC, Type: StructProperty)
    std::uint8_t DoorTargetRotationOffset[0xC]; // 0x0B94 (Size: 0xC, Type: StructProperty)
    std::uint8_t SlidingDoorTargetRotationOffset[0xC]; // 0x0BA0 (Size: 0xC, Type: StructProperty)
    std::uint8_t DoorRotationOffset[0xC]; // 0x0BAC (Size: 0xC, Type: StructProperty)
    std::uint8_t SlidingDoorRotationOffset[0xC]; // 0x0BB8 (Size: 0xC, Type: StructProperty)
    std::uint8_t AutomaticSlidingDoorBoxExtent[0xC]; // 0x0BC4 (Size: 0xC, Type: StructProperty)
    std::uint8_t AutomaticSlidingDoorBoxOffset[0xC]; // 0x0BD0 (Size: 0xC, Type: StructProperty)
    std::uint8_t SlamOpenDoorBoxExtent[0xC]; // 0x0BDC (Size: 0xC, Type: StructProperty)
    float SlidingTranslation; // 0x0BE8 (Size: 0x4, Type: FloatProperty)
    float SlidingOpenTime; // 0x0BEC (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0BF0
    void* DoorAnimatingMaterial; // 0x0BF8 (Size: 0x8, Type: ObjectProperty)
    void* DoorSoundIndicatorComponent; // 0x0C00 (Size: 0x8, Type: ObjectProperty)
    void* DoorMesh; // 0x0C08 (Size: 0x8, Type: ObjectProperty)
    void* DoubleDoorMesh; // 0x0C10 (Size: 0x8, Type: ObjectProperty)
    void* DoorComponent; // 0x0C18 (Size: 0x8, Type: ObjectProperty)
    void* SlidingDoorComponent; // 0x0C20 (Size: 0x8, Type: ObjectProperty)
    void* DoubleDoorComponent; // 0x0C28 (Size: 0x8, Type: ObjectProperty)
    void* DoorBoxComponent; // 0x0C30 (Size: 0x8, Type: ObjectProperty)
    TMap<void*, void*> InteractBoxToDoorComponentMap; // 0x0C38 (Size: 0x10, Type: MapProperty)
    std::uint8_t DoorLinkOffset[0x10]; // 0x0C48 (Size: 0x10, Type: StructProperty)
    void* DoorSmartLinkComp; // 0x0C58 (Size: 0x8, Type: ObjectProperty)
    void* DoorBlueprintMeshComp; // 0x0C60 (Size: 0x8, Type: ObjectProperty)
    void* SlidingDoorBlueprintMeshComp; // 0x0C68 (Size: 0x8, Type: ObjectProperty)
    void* DoubleDoorBlueprintMeshComp; // 0x0C70 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0xC]; // 0x0C78
    std::uint8_t AreaPatternOverride[0x4]; // 0x0C84 (Size: 0x4, Type: StructProperty)
    float AreaWidthOverride; // 0x0C88 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0003[0x4]; // 0x0C8C
    std::uint8_t AreaShapeType; // 0x0C90 (Size: 0x1, Type: ByteProperty)
    std::uint8_t DoorOpenStyle; // 0x0C91 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bAutomaticSlidingDoor; // 0x0C92 (Size: 0x1, Type: BoolProperty)
    // 0x0C92 BoolProperty bCreateDoorLink (shared storage)
    // 0x0C92 BoolProperty bCreateInteractBoxUsingDoorBounds (shared storage)
    // 0x0C92 BoolProperty bDoorOpen (shared storage)
    // 0x0C92 BoolProperty bDoubleDoor (shared storage)
    // 0x0C92 BoolProperty bSlidingDoor (shared storage)
    // 0x0C92 BoolProperty bSwingingDoor (shared storage)
    std::uint8_t bCreateClimbLink; // 0x0C93 (Size: 0x1, Type: BoolProperty)
    // 0x0C93 BoolProperty bDoorCollisionDisabled (shared storage)
    // 0x0C93 BoolProperty bFastOpenCloseRequested (shared storage)
    // 0x0C93 BoolProperty bLocalDoorCollisionDisabled (shared storage)
    // 0x0C93 BoolProperty bLocalDoorOpen (shared storage)
    // 0x0C93 BoolProperty bOverrideAreaWidth (shared storage)
    // 0x0C93 BoolProperty bProhibitPassOverLowEndOfTriangleWall (shared storage)
};

static_assert(offsetof(UPBWA_BG_Windows_C, DoorObstacleClass) == 2848, "Offset mismatch for UPBWA_BG_Windows_C::DoorObstacleClass");
static_assert(offsetof(UPBWA_BG_Windows_C, ClimbLink) == 2880, "Offset mismatch for UPBWA_BG_Windows_C::ClimbLink");
static_assert(offsetof(UPBWA_BG_Windows_C, DoorScale) == 2928, "Offset mismatch for UPBWA_BG_Windows_C::DoorScale");
static_assert(offsetof(UPBWA_BG_Windows_C, DoorOffset) == 2940, "Offset mismatch for UPBWA_BG_Windows_C::DoorOffset");
static_assert(offsetof(UPBWA_BG_Windows_C, SlidingDoorOffset) == 2952, "Offset mismatch for UPBWA_BG_Windows_C::SlidingDoorOffset");
static_assert(offsetof(UPBWA_BG_Windows_C, DoorTargetRotationOffset) == 2964, "Offset mismatch for UPBWA_BG_Windows_C::DoorTargetRotationOffset");
static_assert(offsetof(UPBWA_BG_Windows_C, SlidingDoorTargetRotationOffset) == 2976, "Offset mismatch for UPBWA_BG_Windows_C::SlidingDoorTargetRotationOffset");
static_assert(offsetof(UPBWA_BG_Windows_C, DoorRotationOffset) == 2988, "Offset mismatch for UPBWA_BG_Windows_C::DoorRotationOffset");
static_assert(offsetof(UPBWA_BG_Windows_C, SlidingDoorRotationOffset) == 3000, "Offset mismatch for UPBWA_BG_Windows_C::SlidingDoorRotationOffset");
static_assert(offsetof(UPBWA_BG_Windows_C, AutomaticSlidingDoorBoxExtent) == 3012, "Offset mismatch for UPBWA_BG_Windows_C::AutomaticSlidingDoorBoxExtent");
static_assert(offsetof(UPBWA_BG_Windows_C, AutomaticSlidingDoorBoxOffset) == 3024, "Offset mismatch for UPBWA_BG_Windows_C::AutomaticSlidingDoorBoxOffset");
static_assert(offsetof(UPBWA_BG_Windows_C, SlamOpenDoorBoxExtent) == 3036, "Offset mismatch for UPBWA_BG_Windows_C::SlamOpenDoorBoxExtent");
static_assert(offsetof(UPBWA_BG_Windows_C, SlidingTranslation) == 3048, "Offset mismatch for UPBWA_BG_Windows_C::SlidingTranslation");
static_assert(offsetof(UPBWA_BG_Windows_C, SlidingOpenTime) == 3052, "Offset mismatch for UPBWA_BG_Windows_C::SlidingOpenTime");
static_assert(offsetof(UPBWA_BG_Windows_C, DoorAnimatingMaterial) == 3064, "Offset mismatch for UPBWA_BG_Windows_C::DoorAnimatingMaterial");
static_assert(offsetof(UPBWA_BG_Windows_C, DoorSoundIndicatorComponent) == 3072, "Offset mismatch for UPBWA_BG_Windows_C::DoorSoundIndicatorComponent");
static_assert(offsetof(UPBWA_BG_Windows_C, DoorMesh) == 3080, "Offset mismatch for UPBWA_BG_Windows_C::DoorMesh");
static_assert(offsetof(UPBWA_BG_Windows_C, DoubleDoorMesh) == 3088, "Offset mismatch for UPBWA_BG_Windows_C::DoubleDoorMesh");
static_assert(offsetof(UPBWA_BG_Windows_C, DoorComponent) == 3096, "Offset mismatch for UPBWA_BG_Windows_C::DoorComponent");
static_assert(offsetof(UPBWA_BG_Windows_C, SlidingDoorComponent) == 3104, "Offset mismatch for UPBWA_BG_Windows_C::SlidingDoorComponent");
static_assert(offsetof(UPBWA_BG_Windows_C, DoubleDoorComponent) == 3112, "Offset mismatch for UPBWA_BG_Windows_C::DoubleDoorComponent");
static_assert(offsetof(UPBWA_BG_Windows_C, DoorBoxComponent) == 3120, "Offset mismatch for UPBWA_BG_Windows_C::DoorBoxComponent");
static_assert(offsetof(UPBWA_BG_Windows_C, InteractBoxToDoorComponentMap) == 3128, "Offset mismatch for UPBWA_BG_Windows_C::InteractBoxToDoorComponentMap");
static_assert(offsetof(UPBWA_BG_Windows_C, DoorLinkOffset) == 3144, "Offset mismatch for UPBWA_BG_Windows_C::DoorLinkOffset");
static_assert(offsetof(UPBWA_BG_Windows_C, DoorSmartLinkComp) == 3160, "Offset mismatch for UPBWA_BG_Windows_C::DoorSmartLinkComp");
static_assert(offsetof(UPBWA_BG_Windows_C, DoorBlueprintMeshComp) == 3168, "Offset mismatch for UPBWA_BG_Windows_C::DoorBlueprintMeshComp");
static_assert(offsetof(UPBWA_BG_Windows_C, SlidingDoorBlueprintMeshComp) == 3176, "Offset mismatch for UPBWA_BG_Windows_C::SlidingDoorBlueprintMeshComp");
static_assert(offsetof(UPBWA_BG_Windows_C, DoubleDoorBlueprintMeshComp) == 3184, "Offset mismatch for UPBWA_BG_Windows_C::DoubleDoorBlueprintMeshComp");
static_assert(offsetof(UPBWA_BG_Windows_C, AreaPatternOverride) == 3204, "Offset mismatch for UPBWA_BG_Windows_C::AreaPatternOverride");
static_assert(offsetof(UPBWA_BG_Windows_C, AreaWidthOverride) == 3208, "Offset mismatch for UPBWA_BG_Windows_C::AreaWidthOverride");
static_assert(offsetof(UPBWA_BG_Windows_C, AreaShapeType) == 3216, "Offset mismatch for UPBWA_BG_Windows_C::AreaShapeType");
static_assert(offsetof(UPBWA_BG_Windows_C, DoorOpenStyle) == 3217, "Offset mismatch for UPBWA_BG_Windows_C::DoorOpenStyle");
static_assert(offsetof(UPBWA_BG_Windows_C, bAutomaticSlidingDoor) == 3218, "Offset mismatch for UPBWA_BG_Windows_C::bAutomaticSlidingDoor");
static_assert(offsetof(UPBWA_BG_Windows_C, bCreateClimbLink) == 3219, "Offset mismatch for UPBWA_BG_Windows_C::bCreateClimbLink");

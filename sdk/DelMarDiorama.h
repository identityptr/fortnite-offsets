/**
 * decamp dumper generated SDK
 * Package: /Script/DelMarDiorama
 */
#pragma once
#include "Basic.h"

// /Script/DelMarDiorama.DelMarDriverSequenceDataList
// Kind: ScriptStruct; super: none
struct FDelMarDriverSequenceDataList
{
public:
    TArray<void*> SequenceDataList; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    float Cooldown; // 0x0010 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDelMarDriverSequenceDataList, SequenceDataList) == 0, "Offset mismatch for FDelMarDriverSequenceDataList::SequenceDataList");
static_assert(offsetof(FDelMarDriverSequenceDataList, Cooldown) == 16, "Offset mismatch for FDelMarDriverSequenceDataList::Cooldown");

// /Script/DelMarDiorama.DelMarEvent_DioramaControllerAdded
// Kind: ScriptStruct; super: none
struct FDelMarEvent_DioramaControllerAdded
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DelMarDiorama.DelMarEvent_DriverChannelOpened
// Kind: ScriptStruct; super: none
struct FDelMarEvent_DriverChannelOpened
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DelMarDiorama.DelMarInteractionTagData
// Kind: ScriptStruct; super: none
struct FDelMarInteractionTagData
{
public:
    std::uint8_t InstigatorReactionTag[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::uint8_t ReceiverReactionTag[0x1]; // 0x0004 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDelMarInteractionTagData, InstigatorReactionTag) == 0, "Offset mismatch for FDelMarInteractionTagData::InstigatorReactionTag");
static_assert(offsetof(FDelMarInteractionTagData, ReceiverReactionTag) == 4, "Offset mismatch for FDelMarInteractionTagData::ReceiverReactionTag");

// /Script/DelMarDiorama.DelMarCockpitActor
// Kind: Class; super: Actor
class UDelMarCockpitActor
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    void* CockpitMeshComponent; // 0x0270 (Size: 0x8, Type: ObjectProperty)
    void* BoundVehicle; // 0x0278 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDelMarCockpitActor, CockpitMeshComponent) == 624, "Offset mismatch for UDelMarCockpitActor::CockpitMeshComponent");
static_assert(offsetof(UDelMarCockpitActor, BoundVehicle) == 632, "Offset mismatch for UDelMarCockpitActor::BoundVehicle");

// /Script/DelMarDiorama.DelMarCockpitAnimInstance
// Kind: Class; super: DelMarDriverAnimInstance
class UDelMarCockpitAnimInstance
{
public:
    std::uint8_t Pad_0000[0x350]; // 0x0000
    float DefaultCameraShakeIntensity; // 0x0350 (Size: 0x4, Type: FloatProperty)
    float DefaultTerrainAccMultiplier; // 0x0354 (Size: 0x4, Type: FloatProperty)
    float DefaultTerrainMaxForwardSpeedPercentage; // 0x0358 (Size: 0x4, Type: FloatProperty)
    float CameraShakeIntensity; // 0x035C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UDelMarCockpitAnimInstance, DefaultCameraShakeIntensity) == 848, "Offset mismatch for UDelMarCockpitAnimInstance::DefaultCameraShakeIntensity");
static_assert(offsetof(UDelMarCockpitAnimInstance, DefaultTerrainAccMultiplier) == 852, "Offset mismatch for UDelMarCockpitAnimInstance::DefaultTerrainAccMultiplier");
static_assert(offsetof(UDelMarCockpitAnimInstance, DefaultTerrainMaxForwardSpeedPercentage) == 856, "Offset mismatch for UDelMarCockpitAnimInstance::DefaultTerrainMaxForwardSpeedPercentage");
static_assert(offsetof(UDelMarCockpitAnimInstance, CameraShakeIntensity) == 860, "Offset mismatch for UDelMarCockpitAnimInstance::CameraShakeIntensity");

// /Script/DelMarDiorama.DelMarDioramaActor
// Kind: Class; super: Actor
class UDelMarDioramaActor
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    void* VehicleInteriorMeshComponent; // 0x0270 (Size: 0x8, Type: ObjectProperty)
    TMap<void*, void*> CustomSequenceListTable; // 0x0278 (Size: 0x10, Type: MapProperty)
    std::uint8_t Pad_0001[0x18]; // 0x0288
    void* DriverMannequinClass; // 0x02A0 (Size: 0x8, Type: ClassProperty)
    void* LevelSequenceActorClass; // 0x02A8 (Size: 0x8, Type: ClassProperty)
    void* CineCameraClass; // 0x02B0 (Size: 0x8, Type: ClassProperty)
    void* CockpitClass; // 0x02B8 (Size: 0x8, Type: ClassProperty)
    void* ConfigData; // 0x02C0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t DefaultCameraOffset[0x18]; // 0x02C8 (Size: 0x18, Type: StructProperty)
    std::uint8_t DefaultCameraRotation[0x18]; // 0x02E0 (Size: 0x18, Type: StructProperty)
    void* SequenceActor; // 0x02F8 (Size: 0x8, Type: ObjectProperty)
    void* CameraActor; // 0x0300 (Size: 0x8, Type: ObjectProperty)
    void* DriverMannequin; // 0x0308 (Size: 0x8, Type: ObjectProperty)
    void* CockpitActor; // 0x0310 (Size: 0x8, Type: ObjectProperty)
    void* BoundPlayer; // 0x0318 (Size: 0x8, Type: ObjectProperty)
    void* LastPlayedSequenceData; // 0x0320 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t BoundSequencesTables[0x14]; // 0x0328 (Size: 0x14, Type: SetProperty)
    std::int32_t DefaultCameraSocketIndex; // 0x033C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UDelMarDioramaActor, VehicleInteriorMeshComponent) == 624, "Offset mismatch for UDelMarDioramaActor::VehicleInteriorMeshComponent");
static_assert(offsetof(UDelMarDioramaActor, CustomSequenceListTable) == 632, "Offset mismatch for UDelMarDioramaActor::CustomSequenceListTable");
static_assert(offsetof(UDelMarDioramaActor, DriverMannequinClass) == 672, "Offset mismatch for UDelMarDioramaActor::DriverMannequinClass");
static_assert(offsetof(UDelMarDioramaActor, LevelSequenceActorClass) == 680, "Offset mismatch for UDelMarDioramaActor::LevelSequenceActorClass");
static_assert(offsetof(UDelMarDioramaActor, CineCameraClass) == 688, "Offset mismatch for UDelMarDioramaActor::CineCameraClass");
static_assert(offsetof(UDelMarDioramaActor, CockpitClass) == 696, "Offset mismatch for UDelMarDioramaActor::CockpitClass");
static_assert(offsetof(UDelMarDioramaActor, ConfigData) == 704, "Offset mismatch for UDelMarDioramaActor::ConfigData");
static_assert(offsetof(UDelMarDioramaActor, DefaultCameraOffset) == 712, "Offset mismatch for UDelMarDioramaActor::DefaultCameraOffset");
static_assert(offsetof(UDelMarDioramaActor, DefaultCameraRotation) == 736, "Offset mismatch for UDelMarDioramaActor::DefaultCameraRotation");
static_assert(offsetof(UDelMarDioramaActor, SequenceActor) == 760, "Offset mismatch for UDelMarDioramaActor::SequenceActor");
static_assert(offsetof(UDelMarDioramaActor, CameraActor) == 768, "Offset mismatch for UDelMarDioramaActor::CameraActor");
static_assert(offsetof(UDelMarDioramaActor, DriverMannequin) == 776, "Offset mismatch for UDelMarDioramaActor::DriverMannequin");
static_assert(offsetof(UDelMarDioramaActor, CockpitActor) == 784, "Offset mismatch for UDelMarDioramaActor::CockpitActor");
static_assert(offsetof(UDelMarDioramaActor, BoundPlayer) == 792, "Offset mismatch for UDelMarDioramaActor::BoundPlayer");
static_assert(offsetof(UDelMarDioramaActor, LastPlayedSequenceData) == 800, "Offset mismatch for UDelMarDioramaActor::LastPlayedSequenceData");
static_assert(offsetof(UDelMarDioramaActor, BoundSequencesTables) == 808, "Offset mismatch for UDelMarDioramaActor::BoundSequencesTables");
static_assert(offsetof(UDelMarDioramaActor, DefaultCameraSocketIndex) == 828, "Offset mismatch for UDelMarDioramaActor::DefaultCameraSocketIndex");

// /Script/DelMarDiorama.DelMarDioramaConfigData
// Kind: Class; super: DataAsset
class UDelMarDioramaConfigData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t CameraActorTag[0x4]; // 0x0028 (Size: 0x4, Type: NameProperty)
    std::uint8_t DriverMannequinTag[0x4]; // 0x002C (Size: 0x4, Type: NameProperty)
    FName CockpitActorTag; // 0x0030 (Size: 0x8, Type: NameProperty)
    TArray<void*> CockpitCameraCutSockets; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    FName CockpitCameraIdleSocket; // 0x0048 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UDelMarDioramaConfigData, CameraActorTag) == 40, "Offset mismatch for UDelMarDioramaConfigData::CameraActorTag");
static_assert(offsetof(UDelMarDioramaConfigData, DriverMannequinTag) == 44, "Offset mismatch for UDelMarDioramaConfigData::DriverMannequinTag");
static_assert(offsetof(UDelMarDioramaConfigData, CockpitActorTag) == 48, "Offset mismatch for UDelMarDioramaConfigData::CockpitActorTag");
static_assert(offsetof(UDelMarDioramaConfigData, CockpitCameraCutSockets) == 56, "Offset mismatch for UDelMarDioramaConfigData::CockpitCameraCutSockets");
static_assert(offsetof(UDelMarDioramaConfigData, CockpitCameraIdleSocket) == 72, "Offset mismatch for UDelMarDioramaConfigData::CockpitCameraIdleSocket");

// /Script/DelMarDiorama.DelMarDioramaControllerComponent
// Kind: Class; super: ControllerComponent
class UDelMarDioramaControllerComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t DioramaOffset[0x18]; // 0x00C0 (Size: 0x18, Type: StructProperty)
    void* DioramaClass; // 0x00D8 (Size: 0x8, Type: ClassProperty)
    void* CustomizedSequencesTable; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x00E8
    std::uint8_t DioramaInitialTransform[0x60]; // 0x00F0 (Size: 0x60, Type: StructProperty)
    void* MainChannelClass; // 0x0150 (Size: 0x8, Type: ClassProperty)
    void* MainChannel; // 0x0158 (Size: 0x8, Type: ObjectProperty)
    void* PostRaceChannelClass; // 0x0160 (Size: 0x8, Type: ClassProperty)
    TArray<void*> PostRaceChannels; // 0x0168 (Size: 0x10, Type: ArrayProperty)
    void* CachedOwningPlayerState; // 0x0178 (Size: 0x8, Type: ObjectProperty)
    void* ViewTargetPlayer; // 0x0180 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> ViewTargetVehicle; // 0x0188 (Size: 0x8, Type: WeakObjectProperty)
    TMap<void*, void*> PlayerDioramaTable; // 0x0190 (Size: 0x10, Type: MapProperty)
    std::int32_t NumPostRaceChannel; // 0x01A0 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UDelMarDioramaControllerComponent, DioramaOffset) == 192, "Offset mismatch for UDelMarDioramaControllerComponent::DioramaOffset");
static_assert(offsetof(UDelMarDioramaControllerComponent, DioramaClass) == 216, "Offset mismatch for UDelMarDioramaControllerComponent::DioramaClass");
static_assert(offsetof(UDelMarDioramaControllerComponent, CustomizedSequencesTable) == 224, "Offset mismatch for UDelMarDioramaControllerComponent::CustomizedSequencesTable");
static_assert(offsetof(UDelMarDioramaControllerComponent, DioramaInitialTransform) == 240, "Offset mismatch for UDelMarDioramaControllerComponent::DioramaInitialTransform");
static_assert(offsetof(UDelMarDioramaControllerComponent, MainChannelClass) == 336, "Offset mismatch for UDelMarDioramaControllerComponent::MainChannelClass");
static_assert(offsetof(UDelMarDioramaControllerComponent, MainChannel) == 344, "Offset mismatch for UDelMarDioramaControllerComponent::MainChannel");
static_assert(offsetof(UDelMarDioramaControllerComponent, PostRaceChannelClass) == 352, "Offset mismatch for UDelMarDioramaControllerComponent::PostRaceChannelClass");
static_assert(offsetof(UDelMarDioramaControllerComponent, PostRaceChannels) == 360, "Offset mismatch for UDelMarDioramaControllerComponent::PostRaceChannels");
static_assert(offsetof(UDelMarDioramaControllerComponent, CachedOwningPlayerState) == 376, "Offset mismatch for UDelMarDioramaControllerComponent::CachedOwningPlayerState");
static_assert(offsetof(UDelMarDioramaControllerComponent, ViewTargetPlayer) == 384, "Offset mismatch for UDelMarDioramaControllerComponent::ViewTargetPlayer");
static_assert(offsetof(UDelMarDioramaControllerComponent, ViewTargetVehicle) == 392, "Offset mismatch for UDelMarDioramaControllerComponent::ViewTargetVehicle");
static_assert(offsetof(UDelMarDioramaControllerComponent, PlayerDioramaTable) == 400, "Offset mismatch for UDelMarDioramaControllerComponent::PlayerDioramaTable");
static_assert(offsetof(UDelMarDioramaControllerComponent, NumPostRaceChannel) == 416, "Offset mismatch for UDelMarDioramaControllerComponent::NumPostRaceChannel");

// /Script/DelMarDiorama.DelMarDriverAnimInstance
// Kind: Class; super: FortBaseAnimInstance
class UDelMarDriverAnimInstance
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    void* BoundVehicle; // 0x0330 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bDrifting; // 0x0338 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTurboing; // 0x0339 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x033A
    float SteeringAngle; // 0x033C (Size: 0x4, Type: FloatProperty)
    float SlipAngle; // 0x0340 (Size: 0x4, Type: FloatProperty)
    float StableSpeed; // 0x0344 (Size: 0x4, Type: FloatProperty)
    float DrivingSpeedThreshold; // 0x0348 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UDelMarDriverAnimInstance, BoundVehicle) == 816, "Offset mismatch for UDelMarDriverAnimInstance::BoundVehicle");
static_assert(offsetof(UDelMarDriverAnimInstance, bDrifting) == 824, "Offset mismatch for UDelMarDriverAnimInstance::bDrifting");
static_assert(offsetof(UDelMarDriverAnimInstance, bTurboing) == 825, "Offset mismatch for UDelMarDriverAnimInstance::bTurboing");
static_assert(offsetof(UDelMarDriverAnimInstance, SteeringAngle) == 828, "Offset mismatch for UDelMarDriverAnimInstance::SteeringAngle");
static_assert(offsetof(UDelMarDriverAnimInstance, SlipAngle) == 832, "Offset mismatch for UDelMarDriverAnimInstance::SlipAngle");
static_assert(offsetof(UDelMarDriverAnimInstance, StableSpeed) == 836, "Offset mismatch for UDelMarDriverAnimInstance::StableSpeed");
static_assert(offsetof(UDelMarDriverAnimInstance, DrivingSpeedThreshold) == 840, "Offset mismatch for UDelMarDriverAnimInstance::DrivingSpeedThreshold");

// /Script/DelMarDiorama.DelMarDriverCameraActor
// Kind: Class; super: CineCameraActor
class UDelMarDriverCameraActor
{
public:
    std::uint8_t Pad_0000[0xAD0]; // 0x0000
    void* CaptureComponent; // 0x0AD0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDelMarDriverCameraActor, CaptureComponent) == 2768, "Offset mismatch for UDelMarDriverCameraActor::CaptureComponent");

// /Script/DelMarDiorama.DelMarDriverChannel
// Kind: Class; super: DelMarDriverChannelBase
class UDelMarDriverChannel
{
public:
    std::uint8_t Pad_0000[0x88]; // 0x0000
    void* ViewVehicle; // 0x0088 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> QueueReactions; // 0x0090 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> SequenceListTableInstance; // 0x00A0 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> ReactionCoolDownTimeStamp; // 0x00B0 (Size: 0x10, Type: MapProperty)
    float LandingForceThreshold; // 0x00C0 (Size: 0x4, Type: FloatProperty)
    float SlowDownImpactSpeedThreshold; // 0x00C4 (Size: 0x4, Type: FloatProperty)
    float HitWallImpactThreshold; // 0x00C8 (Size: 0x4, Type: FloatProperty)
    float HitWallImpactHardThreshold; // 0x00CC (Size: 0x4, Type: FloatProperty)
    float DraftBonusPercentageThreshold; // 0x00D0 (Size: 0x4, Type: FloatProperty)
    float StartlineBoostPercentageEarnedThreshold; // 0x00D4 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UDelMarDriverChannel, ViewVehicle) == 136, "Offset mismatch for UDelMarDriverChannel::ViewVehicle");
static_assert(offsetof(UDelMarDriverChannel, QueueReactions) == 144, "Offset mismatch for UDelMarDriverChannel::QueueReactions");
static_assert(offsetof(UDelMarDriverChannel, SequenceListTableInstance) == 160, "Offset mismatch for UDelMarDriverChannel::SequenceListTableInstance");
static_assert(offsetof(UDelMarDriverChannel, ReactionCoolDownTimeStamp) == 176, "Offset mismatch for UDelMarDriverChannel::ReactionCoolDownTimeStamp");
static_assert(offsetof(UDelMarDriverChannel, LandingForceThreshold) == 192, "Offset mismatch for UDelMarDriverChannel::LandingForceThreshold");
static_assert(offsetof(UDelMarDriverChannel, SlowDownImpactSpeedThreshold) == 196, "Offset mismatch for UDelMarDriverChannel::SlowDownImpactSpeedThreshold");
static_assert(offsetof(UDelMarDriverChannel, HitWallImpactThreshold) == 200, "Offset mismatch for UDelMarDriverChannel::HitWallImpactThreshold");
static_assert(offsetof(UDelMarDriverChannel, HitWallImpactHardThreshold) == 204, "Offset mismatch for UDelMarDriverChannel::HitWallImpactHardThreshold");
static_assert(offsetof(UDelMarDriverChannel, DraftBonusPercentageThreshold) == 208, "Offset mismatch for UDelMarDriverChannel::DraftBonusPercentageThreshold");
static_assert(offsetof(UDelMarDriverChannel, StartlineBoostPercentageEarnedThreshold) == 212, "Offset mismatch for UDelMarDriverChannel::StartlineBoostPercentageEarnedThreshold");

// /Script/DelMarDiorama.DelMarDriverChannelBase
// Kind: Class; super: Object
class UDelMarDriverChannelBase
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* ViewRenderTarget; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t RenderTargetDim[0x38]; // 0x0030 (Size: 0x38, Type: StructProperty)
    void* SequencesTable; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    void* ViewPlayer; // 0x0070 (Size: 0x8, Type: ObjectProperty)
    void* ViewDiorama; // 0x0078 (Size: 0x8, Type: ObjectProperty)
    void* SequencePlayer; // 0x0080 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDelMarDriverChannelBase, ViewRenderTarget) == 40, "Offset mismatch for UDelMarDriverChannelBase::ViewRenderTarget");
static_assert(offsetof(UDelMarDriverChannelBase, RenderTargetDim) == 48, "Offset mismatch for UDelMarDriverChannelBase::RenderTargetDim");
static_assert(offsetof(UDelMarDriverChannelBase, SequencesTable) == 104, "Offset mismatch for UDelMarDriverChannelBase::SequencesTable");
static_assert(offsetof(UDelMarDriverChannelBase, ViewPlayer) == 112, "Offset mismatch for UDelMarDriverChannelBase::ViewPlayer");
static_assert(offsetof(UDelMarDriverChannelBase, ViewDiorama) == 120, "Offset mismatch for UDelMarDriverChannelBase::ViewDiorama");
static_assert(offsetof(UDelMarDriverChannelBase, SequencePlayer) == 128, "Offset mismatch for UDelMarDriverChannelBase::SequencePlayer");

// /Script/DelMarDiorama.DelMarDriverCheatManager
// Kind: Class; super: ChildCheatManager
class UDelMarDriverCheatManager
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DelMarDiorama.DelMarDriverMannequin
// Kind: Class; super: FortPlayerMannequin
class UDelMarDriverMannequin
{
public:
    std::uint8_t Pad_0000[0x3A0]; // 0x0000
    void* AthenaCharacter; // 0x03A0 (Size: 0x8, Type: ObjectProperty)
    void* AthenaBackBling; // 0x03A8 (Size: 0x8, Type: ObjectProperty)
    void* ExtraPart; // 0x03B0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x20]; // 0x03B8
    std::uint8_t MannequinLightingChannels[0x4]; // 0x03D8 (Size: 0x4, Type: StructProperty)
    float MannequinBoundsScale; // 0x03DC (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsMannequinVisible; // 0x03E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bMannequinCastsHiddenShadow; // 0x03E1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x6]; // 0x03E2
    TArray<void*> AppliedCosmeticParts; // 0x03E8 (Size: 0x10, Type: ArrayProperty)
    void* CharacterPartList; // 0x03F8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0003[0x40]; // 0x0400
    TSoftObjectPtr<void> SoftCharacterPartList; // 0x0440 (Size: 0x28, Type: SoftObjectProperty)
    std::uint8_t Pad_0004[0xF8]; // 0x0468
    TSoftObjectPtr<void> BackupCharacterPartList; // 0x0560 (Size: 0x28, Type: SoftObjectProperty)
    std::uint8_t Pad_0005[0x130]; // 0x0588
    TArray<void*> OverrideVariants; // 0x06B8 (Size: 0x10, Type: ArrayProperty)
    void* ColorSwatches; // 0x06C8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0006[0x8]; // 0x06D0
    void* WeaponSkeletalMesh; // 0x06D8 (Size: 0x8, Type: ObjectProperty)
    FName WeaponAttachSocket; // 0x06E0 (Size: 0x8, Type: NameProperty)
    void* WeaponSkeletalMeshComponent; // 0x06E8 (Size: 0x8, Type: ObjectProperty)
    void* CosmeticDataComponent; // 0x06F0 (Size: 0x8, Type: ObjectProperty)
    void* MannequinPartSkeletalMeshComponents; // 0x06F8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0007[0x40]; // 0x0700
    void* MannequinPartChaosClothComponents; // 0x0740 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0008[0x40]; // 0x0748
    TArray<void*> MorphTargets; // 0x0788 (Size: 0x10, Type: ArrayProperty)
    void* CosmeticApplicatorComponent; // 0x0798 (Size: 0x8, Type: ObjectProperty)
    void* ContextualAnimSceneActorComponent; // 0x07A0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bInitialized; // 0x07A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bLimitTick; // 0x07A9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHighPriorityRBAN; // 0x07AA (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAutoRegisterMannequinWithBudgetAllocator; // 0x07AB (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAutoCalculateMannequinSignificance; // 0x07AC (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0009[0x3]; // 0x07AD
    void* CustomizationAssetLoader; // 0x07B0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t LoadingMode; // 0x07B8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_000A[0x6F]; // 0x07B9
    FMulticastInlineDelegate OnMaterialsUpdated; // 0x0828 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t UsageContext; // 0x0838 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_000B[0x7]; // 0x0839
    void* PartModifiers; // 0x0840 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_000C[0x48]; // 0x0848
    void* PlaceholderPartsList; // 0x0890 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDelMarDriverMannequin, AthenaCharacter) == 928, "Offset mismatch for UDelMarDriverMannequin::AthenaCharacter");
static_assert(offsetof(UDelMarDriverMannequin, AthenaBackBling) == 936, "Offset mismatch for UDelMarDriverMannequin::AthenaBackBling");
static_assert(offsetof(UDelMarDriverMannequin, ExtraPart) == 944, "Offset mismatch for UDelMarDriverMannequin::ExtraPart");
static_assert(offsetof(UDelMarDriverMannequin, MannequinLightingChannels) == 984, "Offset mismatch for UDelMarDriverMannequin::MannequinLightingChannels");
static_assert(offsetof(UDelMarDriverMannequin, MannequinBoundsScale) == 988, "Offset mismatch for UDelMarDriverMannequin::MannequinBoundsScale");
static_assert(offsetof(UDelMarDriverMannequin, bIsMannequinVisible) == 992, "Offset mismatch for UDelMarDriverMannequin::bIsMannequinVisible");
static_assert(offsetof(UDelMarDriverMannequin, bMannequinCastsHiddenShadow) == 993, "Offset mismatch for UDelMarDriverMannequin::bMannequinCastsHiddenShadow");
static_assert(offsetof(UDelMarDriverMannequin, AppliedCosmeticParts) == 1000, "Offset mismatch for UDelMarDriverMannequin::AppliedCosmeticParts");
static_assert(offsetof(UDelMarDriverMannequin, CharacterPartList) == 1016, "Offset mismatch for UDelMarDriverMannequin::CharacterPartList");
static_assert(offsetof(UDelMarDriverMannequin, SoftCharacterPartList) == 1088, "Offset mismatch for UDelMarDriverMannequin::SoftCharacterPartList");
static_assert(offsetof(UDelMarDriverMannequin, BackupCharacterPartList) == 1376, "Offset mismatch for UDelMarDriverMannequin::BackupCharacterPartList");
static_assert(offsetof(UDelMarDriverMannequin, OverrideVariants) == 1720, "Offset mismatch for UDelMarDriverMannequin::OverrideVariants");
static_assert(offsetof(UDelMarDriverMannequin, ColorSwatches) == 1736, "Offset mismatch for UDelMarDriverMannequin::ColorSwatches");
static_assert(offsetof(UDelMarDriverMannequin, WeaponSkeletalMesh) == 1752, "Offset mismatch for UDelMarDriverMannequin::WeaponSkeletalMesh");
static_assert(offsetof(UDelMarDriverMannequin, WeaponAttachSocket) == 1760, "Offset mismatch for UDelMarDriverMannequin::WeaponAttachSocket");
static_assert(offsetof(UDelMarDriverMannequin, WeaponSkeletalMeshComponent) == 1768, "Offset mismatch for UDelMarDriverMannequin::WeaponSkeletalMeshComponent");
static_assert(offsetof(UDelMarDriverMannequin, CosmeticDataComponent) == 1776, "Offset mismatch for UDelMarDriverMannequin::CosmeticDataComponent");
static_assert(offsetof(UDelMarDriverMannequin, MannequinPartSkeletalMeshComponents) == 1784, "Offset mismatch for UDelMarDriverMannequin::MannequinPartSkeletalMeshComponents");
static_assert(offsetof(UDelMarDriverMannequin, MannequinPartChaosClothComponents) == 1856, "Offset mismatch for UDelMarDriverMannequin::MannequinPartChaosClothComponents");
static_assert(offsetof(UDelMarDriverMannequin, MorphTargets) == 1928, "Offset mismatch for UDelMarDriverMannequin::MorphTargets");
static_assert(offsetof(UDelMarDriverMannequin, CosmeticApplicatorComponent) == 1944, "Offset mismatch for UDelMarDriverMannequin::CosmeticApplicatorComponent");
static_assert(offsetof(UDelMarDriverMannequin, ContextualAnimSceneActorComponent) == 1952, "Offset mismatch for UDelMarDriverMannequin::ContextualAnimSceneActorComponent");
static_assert(offsetof(UDelMarDriverMannequin, bInitialized) == 1960, "Offset mismatch for UDelMarDriverMannequin::bInitialized");
static_assert(offsetof(UDelMarDriverMannequin, bLimitTick) == 1961, "Offset mismatch for UDelMarDriverMannequin::bLimitTick");
static_assert(offsetof(UDelMarDriverMannequin, bHighPriorityRBAN) == 1962, "Offset mismatch for UDelMarDriverMannequin::bHighPriorityRBAN");
static_assert(offsetof(UDelMarDriverMannequin, bAutoRegisterMannequinWithBudgetAllocator) == 1963, "Offset mismatch for UDelMarDriverMannequin::bAutoRegisterMannequinWithBudgetAllocator");
static_assert(offsetof(UDelMarDriverMannequin, bAutoCalculateMannequinSignificance) == 1964, "Offset mismatch for UDelMarDriverMannequin::bAutoCalculateMannequinSignificance");
static_assert(offsetof(UDelMarDriverMannequin, CustomizationAssetLoader) == 1968, "Offset mismatch for UDelMarDriverMannequin::CustomizationAssetLoader");
static_assert(offsetof(UDelMarDriverMannequin, LoadingMode) == 1976, "Offset mismatch for UDelMarDriverMannequin::LoadingMode");
static_assert(offsetof(UDelMarDriverMannequin, OnMaterialsUpdated) == 2088, "Offset mismatch for UDelMarDriverMannequin::OnMaterialsUpdated");
static_assert(offsetof(UDelMarDriverMannequin, UsageContext) == 2104, "Offset mismatch for UDelMarDriverMannequin::UsageContext");
static_assert(offsetof(UDelMarDriverMannequin, PartModifiers) == 2112, "Offset mismatch for UDelMarDriverMannequin::PartModifiers");
static_assert(offsetof(UDelMarDriverMannequin, PlaceholderPartsList) == 2192, "Offset mismatch for UDelMarDriverMannequin::PlaceholderPartsList");

// /Script/DelMarDiorama.DelMarDriverSequenceData
// Kind: Class; super: DataAsset
class UDelMarDriverSequenceData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Sequence; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    std::int32_t PriorityLevel; // 0x0030 (Size: 0x4, Type: IntProperty)
    std::uint8_t bLoop; // 0x0034 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTriggerReactiveWidget; // 0x0035 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCameraCut; // 0x0036 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UDelMarDriverSequenceData, Sequence) == 40, "Offset mismatch for UDelMarDriverSequenceData::Sequence");
static_assert(offsetof(UDelMarDriverSequenceData, PriorityLevel) == 48, "Offset mismatch for UDelMarDriverSequenceData::PriorityLevel");
static_assert(offsetof(UDelMarDriverSequenceData, bLoop) == 52, "Offset mismatch for UDelMarDriverSequenceData::bLoop");
static_assert(offsetof(UDelMarDriverSequenceData, bTriggerReactiveWidget) == 53, "Offset mismatch for UDelMarDriverSequenceData::bTriggerReactiveWidget");
static_assert(offsetof(UDelMarDriverSequenceData, bCameraCut) == 54, "Offset mismatch for UDelMarDriverSequenceData::bCameraCut");

// /Script/DelMarDiorama.DelMarDriverSequenceDataTable
// Kind: Class; super: DataAsset
class UDelMarDriverSequenceDataTable
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TMap<void*, void*> SequenceListTable; // 0x0028 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UDelMarDriverSequenceDataTable, SequenceListTable) == 40, "Offset mismatch for UDelMarDriverSequenceDataTable::SequenceListTable");

// /Script/DelMarDiorama.DelMarIntercomComponent
// Kind: Class; super: ControllerComponent
class UDelMarIntercomComponent
{
public:
    std::uint8_t Pad_0000[0xD8]; // 0x0000
    void* GuestChannelClass; // 0x00D8 (Size: 0x8, Type: ClassProperty)
    void* GuestChannel; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> ViewPlayerPawn; // 0x00E8 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> MainChannelDiorama; // 0x00F0 (Size: 0x8, Type: WeakObjectProperty)
    void* ViewPlayerState; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
    void* DioramaControllerComponent; // 0x0100 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ServerEventClasses; // 0x0108 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ServerEvents; // 0x0118 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> InteractionTagTable; // 0x0128 (Size: 0x10, Type: MapProperty)
    float EmoteBroadcastMaxDistanceSq; // 0x0138 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UDelMarIntercomComponent, GuestChannelClass) == 216, "Offset mismatch for UDelMarIntercomComponent::GuestChannelClass");
static_assert(offsetof(UDelMarIntercomComponent, GuestChannel) == 224, "Offset mismatch for UDelMarIntercomComponent::GuestChannel");
static_assert(offsetof(UDelMarIntercomComponent, ViewPlayerPawn) == 232, "Offset mismatch for UDelMarIntercomComponent::ViewPlayerPawn");
static_assert(offsetof(UDelMarIntercomComponent, MainChannelDiorama) == 240, "Offset mismatch for UDelMarIntercomComponent::MainChannelDiorama");
static_assert(offsetof(UDelMarIntercomComponent, ViewPlayerState) == 248, "Offset mismatch for UDelMarIntercomComponent::ViewPlayerState");
static_assert(offsetof(UDelMarIntercomComponent, DioramaControllerComponent) == 256, "Offset mismatch for UDelMarIntercomComponent::DioramaControllerComponent");
static_assert(offsetof(UDelMarIntercomComponent, ServerEventClasses) == 264, "Offset mismatch for UDelMarIntercomComponent::ServerEventClasses");
static_assert(offsetof(UDelMarIntercomComponent, ServerEvents) == 280, "Offset mismatch for UDelMarIntercomComponent::ServerEvents");
static_assert(offsetof(UDelMarIntercomComponent, InteractionTagTable) == 296, "Offset mismatch for UDelMarIntercomComponent::InteractionTagTable");
static_assert(offsetof(UDelMarIntercomComponent, EmoteBroadcastMaxDistanceSq) == 312, "Offset mismatch for UDelMarIntercomComponent::EmoteBroadcastMaxDistanceSq");

// /Script/DelMarDiorama.DelMarIntercomEvent
// Kind: Class; super: Object
class UDelMarIntercomEvent
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* OwningPlayerState; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    void* OwningVehicle; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    void* IntercomComponent; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDelMarIntercomEvent, OwningPlayerState) == 40, "Offset mismatch for UDelMarIntercomEvent::OwningPlayerState");
static_assert(offsetof(UDelMarIntercomEvent, OwningVehicle) == 48, "Offset mismatch for UDelMarIntercomEvent::OwningVehicle");
static_assert(offsetof(UDelMarIntercomEvent, IntercomComponent) == 56, "Offset mismatch for UDelMarIntercomEvent::IntercomComponent");

// /Script/DelMarDiorama.DelMarIntercomEvent_TurboPassing
// Kind: Class; super: DelMarIntercomEvent
class UDelMarIntercomEvent_TurboPassing
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    TWeakObjectPtr<void> PlayerAhead; // 0x0040 (Size: 0x8, Type: WeakObjectProperty)
    void* RaceData; // 0x0048 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDelMarIntercomEvent_TurboPassing, PlayerAhead) == 64, "Offset mismatch for UDelMarIntercomEvent_TurboPassing::PlayerAhead");
static_assert(offsetof(UDelMarIntercomEvent_TurboPassing, RaceData) == 72, "Offset mismatch for UDelMarIntercomEvent_TurboPassing::RaceData");

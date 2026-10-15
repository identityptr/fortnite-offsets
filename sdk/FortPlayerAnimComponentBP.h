/**
 * decamp dumper generated SDK
 * Package: /Game/Characters/Player/Blueprints/FortPlayerAnimComponentBP
 */
#pragma once
#include "Basic.h"

// /Game/Characters/Player/Blueprints/FortPlayerAnimComponentBP.FortPlayerAnimComponentBP_C
// Kind: BlueprintGeneratedClass; super: FortPlayerAnimationComponent
class UFortPlayerAnimComponentBP_C
{
public:
    std::uint8_t Pad_0000[0x158]; // 0x0000
    void* AnimationInterface; // 0x0158 (Size: 0x8, Type: ObjectProperty)
    void* AnimExtensionClass; // 0x0160 (Size: 0x8, Type: ClassProperty)
    void* AnimExtension; // 0x0168 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t DefaultAnimAssets[0x10]; // 0x0170 (Size: 0x10, Type: StructProperty)
    void* DefaultWeaponAnimSet; // 0x0180 (Size: 0x8, Type: ObjectProperty)
    void* WeaponAnimSetForEmptyHands; // 0x0188 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t AnimInputDefaults[0x538]; // 0x0190 (Size: 0x538, Type: StructProperty)
    std::uint8_t CommonVehicleInput[0x8]; // 0x06C8 (Size: 0x8, Type: StructProperty)
    std::uint8_t QuadBikeInput[0x80]; // 0x06D0 (Size: 0x80, Type: StructProperty)
    std::uint8_t GolfCartInput[0x68]; // 0x0750 (Size: 0x68, Type: StructProperty)
    std::uint8_t FerretVehicleInput[0xB8]; // 0x07B8 (Size: 0xB8, Type: StructProperty)
    std::uint8_t JackalVehicleInput[0x240]; // 0x0870 (Size: 0x240, Type: StructProperty)
    std::uint8_t MotorcycleInput[0x58]; // 0x0AB0 (Size: 0x58, Type: StructProperty)
    std::uint8_t ZiplineInput[0x38]; // 0x0B08 (Size: 0x38, Type: StructProperty)
    std::uint8_t SkydivingInput[0x90]; // 0x0B40 (Size: 0x90, Type: StructProperty)
    std::uint8_t SpringGliderInput[0xC0]; // 0x0BD0 (Size: 0xC0, Type: StructProperty)
    std::uint8_t TurnInPlaceInput[0x100]; // 0x0C90 (Size: 0x100, Type: StructProperty)
    std::uint8_t bDisableTacticalState; // 0x0D90 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionPropertiesInput[0x7]; // 0x0D91 (Size: 0x7, Type: StructProperty)
    std::uint8_t LeftHandSpacingPreservationParams[0x50]; // 0x0D98 (Size: 0x50, Type: StructProperty)
    std::uint8_t RightHandSpacingPreservationParams[0x50]; // 0x0DE8 (Size: 0x50, Type: StructProperty)
    std::uint8_t AdditiveLeanData[0x60]; // 0x0E38 (Size: 0x60, Type: StructProperty)
    void* DBNOCarryProxyTable; // 0x0E98 (Size: 0x8, Type: ObjectProperty)
    void* NoWeaponHitReactionProxyTable; // 0x0EA0 (Size: 0x8, Type: ObjectProperty)
    void* ProxyTableNoWeaponBasePose; // 0x0EA8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bUseNativeNoWepBasePoseEvaluation; // 0x0EB0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0EB1
    void* StandingBasePose; // 0x0EB8 (Size: 0x8, Type: ObjectProperty)
    void* CrouchingBasePose; // 0x0EC0 (Size: 0x8, Type: ObjectProperty)
    void* CrouchMovingADSBasePose; // 0x0EC8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bUseFullLayeringPoseForSliding; // 0x0ED0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0ED1
    std::uint32_t LastPreUpdateFrame; // 0x0ED4 (Size: 0x4, Type: UInt32Property)
    std::uint32_t LastPostUpdateFrame; // 0x0ED8 (Size: 0x4, Type: UInt32Property)
    std::uint8_t Pad_0003[0x4]; // 0x0EDC
    float PostEquipRelaxedTimer; // 0x0EE0 (Size: 0x4, Type: FloatProperty)
    float PostEquipSlidingRelaxedTimer; // 0x0EE4 (Size: 0x4, Type: FloatProperty)
    float IdleRelaxedTimer; // 0x0EE8 (Size: 0x4, Type: FloatProperty)
    float MovingRelaxedTimer; // 0x0EEC (Size: 0x4, Type: FloatProperty)
    float FirstPersonThresholdWeight; // 0x0EF0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0004[0x4]; // 0x0EF4
    TArray<void*> PreUpdateAnimInstanceList; // 0x0EF8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PreThreadSafeUpdateAnimInstanceList; // 0x0F08 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0005[0x5C]; // 0x0F18
    float DefaultFullBodyToUpperBodyInMotionBlendTime; // 0x0F74 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0006[0x28]; // 0x0F78
    void* SlidingLayerOverride; // 0x0FA0 (Size: 0x8, Type: ClassProperty)
    std::uint8_t ItemAnimDataOverride[0x78]; // 0x0FA8 (Size: 0x78, Type: StructProperty)
    std::uint8_t LowerBodyBLendMaskOverride[0x18]; // 0x1020 (Size: 0x18, Type: StructProperty)
    float HeadLookAtPitchRange; // 0x1038 (Size: 0x4, Type: FloatProperty)
    float HeadLookAtYawRange; // 0x103C (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0007[0x2A8]; // 0x1040
    void* FocusComponent; // 0x12E8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0008[0x18]; // 0x12F0
    std::uint8_t LeftArmBonesets[0x20]; // 0x1308 (Size: 0x20, Type: StructProperty)
    std::uint8_t RightArmBonesets[0x20]; // 0x1328 (Size: 0x20, Type: StructProperty)
    std::uint8_t LeftLegBonesets[0x20]; // 0x1348 (Size: 0x20, Type: StructProperty)
    std::uint8_t RightLegBonesets[0x20]; // 0x1368 (Size: 0x20, Type: StructProperty)
    std::uint8_t HeadBonesets[0x20]; // 0x1388 (Size: 0x20, Type: StructProperty)
    TWeakObjectPtr<void> UnhideWeaponBoneSetsNofityWeaponRef; // 0x13A8 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> ItemAnimationOverrideWeaponRef; // 0x13B0 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t ServerAbilityNotifyPredictiveTime[0x28]; // 0x13B8 (Size: 0x28, Type: StructProperty)
    std::uint8_t AbilityNotifyStatesToPredictOnServer[0x10]; // 0x13E0 (Size: 0x10, Type: SetProperty)
    TMap<void*, void*> ServerPredictedNotifyStatesPerMontage; // 0x13F0 (Size: 0x10, Type: MapProperty)
    std::uint8_t Pad_0009[0x10]; // 0x1400
    void* DebugManager; // 0x1410 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortPlayerAnimComponentBP_C, AnimationInterface) == 344, "Offset mismatch for UFortPlayerAnimComponentBP_C::AnimationInterface");
static_assert(offsetof(UFortPlayerAnimComponentBP_C, AnimExtensionClass) == 352, "Offset mismatch for UFortPlayerAnimComponentBP_C::AnimExtensionClass");
static_assert(offsetof(UFortPlayerAnimComponentBP_C, AnimExtension) == 360, "Offset mismatch for UFortPlayerAnimComponentBP_C::AnimExtension");
static_assert(offsetof(UFortPlayerAnimComponentBP_C, DefaultAnimAssets) == 368, "Offset mismatch for UFortPlayerAnimComponentBP_C::DefaultAnimAssets");
static_assert(offsetof(UFortPlayerAnimComponentBP_C, DefaultWeaponAnimSet) == 384, "Offset mismatch for UFortPlayerAnimComponentBP_C::DefaultWeaponAnimSet");
static_assert(offsetof(UFortPlayerAnimComponentBP_C, WeaponAnimSetForEmptyHands) == 392, "Offset mismatch for UFortPlayerAnimComponentBP_C::WeaponAnimSetForEmptyHands");
static_assert(offsetof(UFortPlayerAnimComponentBP_C, AnimInputDefaults) == 400, "Offset mismatch for UFortPlayerAnimComponentBP_C::AnimInputDefaults");
static_assert(offsetof(UFortPlayerAnimComponentBP_C, CommonVehicleInput) == 1736, "Offset mismatch for UFortPlayerAnimComponentBP_C::CommonVehicleInput");
static_assert(offsetof(UFortPlayerAnimComponentBP_C, QuadBikeInput) == 1744, "Offset mismatch for UFortPlayerAnimComponentBP_C::QuadBikeInput");
static_assert(offsetof(UFortPlayerAnimComponentBP_C, GolfCartInput) == 1872, "Offset mismatch for UFortPlayerAnimComponentBP_C::GolfCartInput");
static_assert(offsetof(UFortPlayerAnimComponentBP_C, FerretVehicleInput) == 1976, "Offset mismatch for UFortPlayerAnimComponentBP_C::FerretVehicleInput");
static_assert(offsetof(UFortPlayerAnimComponentBP_C, JackalVehicleInput) == 2160, "Offset mismatch for UFortPlayerAnimComponentBP_C::JackalVehicleInput");
static_assert(offsetof(UFortPlayerAnimComponentBP_C, MotorcycleInput) == 2736, "Offset mismatch for UFortPlayerAnimComponentBP_C::MotorcycleInput");
static_assert(offsetof(UFortPlayerAnimComponentBP_C, ZiplineInput) == 2824, "Offset mismatch for UFortPlayerAnimComponentBP_C::ZiplineInput");
static_assert(offsetof(UFortPlayerAnimComponentBP_C, SkydivingInput) == 2880, "Offset mismatch for UFortPlayerAnimComponentBP_C::SkydivingInput");
static_assert(offsetof(UFortPlayerAnimComponentBP_C, SpringGliderInput) == 3024, "Offset mismatch for UFortPlayerAnimComponentBP_C::SpringGliderInput");
static_assert(offsetof(UFortPlayerAnimComponentBP_C, TurnInPlaceInput) == 3216, "Offset mismatch for UFortPlayerAnimComponentBP_C::TurnInPlaceInput");
static_assert(offsetof(UFortPlayerAnimComponentBP_C, bDisableTacticalState) == 3472, "Offset mismatch for UFortPlayerAnimComponentBP_C::bDisableTacticalState");
static_assert(offsetof(UFortPlayerAnimComponentBP_C, TransitionPropertiesInput) == 3473, "Offset mismatch for UFortPlayerAnimComponentBP_C::TransitionPropertiesInput");
static_assert(offsetof(UFortPlayerAnimComponentBP_C, LeftHandSpacingPreservationParams) == 3480, "Offset mismatch for UFortPlayerAnimComponentBP_C::LeftHandSpacingPreservationParams");
static_assert(offsetof(UFortPlayerAnimComponentBP_C, RightHandSpacingPreservationParams) == 3560, "Offset mismatch for UFortPlayerAnimComponentBP_C::RightHandSpacingPreservationParams");
static_assert(offsetof(UFortPlayerAnimComponentBP_C, AdditiveLeanData) == 3640, "Offset mismatch for UFortPlayerAnimComponentBP_C::AdditiveLeanData");
static_assert(offsetof(UFortPlayerAnimComponentBP_C, DBNOCarryProxyTable) == 3736, "Offset mismatch for UFortPlayerAnimComponentBP_C::DBNOCarryProxyTable");
static_assert(offsetof(UFortPlayerAnimComponentBP_C, NoWeaponHitReactionProxyTable) == 3744, "Offset mismatch for UFortPlayerAnimComponentBP_C::NoWeaponHitReactionProxyTable");
static_assert(offsetof(UFortPlayerAnimComponentBP_C, ProxyTableNoWeaponBasePose) == 3752, "Offset mismatch for UFortPlayerAnimComponentBP_C::ProxyTableNoWeaponBasePose");
static_assert(offsetof(UFortPlayerAnimComponentBP_C, bUseNativeNoWepBasePoseEvaluation) == 3760, "Offset mismatch for UFortPlayerAnimComponentBP_C::bUseNativeNoWepBasePoseEvaluation");
static_assert(offsetof(UFortPlayerAnimComponentBP_C, StandingBasePose) == 3768, "Offset mismatch for UFortPlayerAnimComponentBP_C::StandingBasePose");
static_assert(offsetof(UFortPlayerAnimComponentBP_C, CrouchingBasePose) == 3776, "Offset mismatch for UFortPlayerAnimComponentBP_C::CrouchingBasePose");
static_assert(offsetof(UFortPlayerAnimComponentBP_C, CrouchMovingADSBasePose) == 3784, "Offset mismatch for UFortPlayerAnimComponentBP_C::CrouchMovingADSBasePose");
static_assert(offsetof(UFortPlayerAnimComponentBP_C, bUseFullLayeringPoseForSliding) == 3792, "Offset mismatch for UFortPlayerAnimComponentBP_C::bUseFullLayeringPoseForSliding");
static_assert(offsetof(UFortPlayerAnimComponentBP_C, LastPreUpdateFrame) == 3796, "Offset mismatch for UFortPlayerAnimComponentBP_C::LastPreUpdateFrame");
static_assert(offsetof(UFortPlayerAnimComponentBP_C, LastPostUpdateFrame) == 3800, "Offset mismatch for UFortPlayerAnimComponentBP_C::LastPostUpdateFrame");
static_assert(offsetof(UFortPlayerAnimComponentBP_C, PostEquipRelaxedTimer) == 3808, "Offset mismatch for UFortPlayerAnimComponentBP_C::PostEquipRelaxedTimer");
static_assert(offsetof(UFortPlayerAnimComponentBP_C, PostEquipSlidingRelaxedTimer) == 3812, "Offset mismatch for UFortPlayerAnimComponentBP_C::PostEquipSlidingRelaxedTimer");
static_assert(offsetof(UFortPlayerAnimComponentBP_C, IdleRelaxedTimer) == 3816, "Offset mismatch for UFortPlayerAnimComponentBP_C::IdleRelaxedTimer");
static_assert(offsetof(UFortPlayerAnimComponentBP_C, MovingRelaxedTimer) == 3820, "Offset mismatch for UFortPlayerAnimComponentBP_C::MovingRelaxedTimer");
static_assert(offsetof(UFortPlayerAnimComponentBP_C, FirstPersonThresholdWeight) == 3824, "Offset mismatch for UFortPlayerAnimComponentBP_C::FirstPersonThresholdWeight");
static_assert(offsetof(UFortPlayerAnimComponentBP_C, PreUpdateAnimInstanceList) == 3832, "Offset mismatch for UFortPlayerAnimComponentBP_C::PreUpdateAnimInstanceList");
static_assert(offsetof(UFortPlayerAnimComponentBP_C, PreThreadSafeUpdateAnimInstanceList) == 3848, "Offset mismatch for UFortPlayerAnimComponentBP_C::PreThreadSafeUpdateAnimInstanceList");
static_assert(offsetof(UFortPlayerAnimComponentBP_C, DefaultFullBodyToUpperBodyInMotionBlendTime) == 3956, "Offset mismatch for UFortPlayerAnimComponentBP_C::DefaultFullBodyToUpperBodyInMotionBlendTime");
static_assert(offsetof(UFortPlayerAnimComponentBP_C, SlidingLayerOverride) == 4000, "Offset mismatch for UFortPlayerAnimComponentBP_C::SlidingLayerOverride");
static_assert(offsetof(UFortPlayerAnimComponentBP_C, ItemAnimDataOverride) == 4008, "Offset mismatch for UFortPlayerAnimComponentBP_C::ItemAnimDataOverride");
static_assert(offsetof(UFortPlayerAnimComponentBP_C, LowerBodyBLendMaskOverride) == 4128, "Offset mismatch for UFortPlayerAnimComponentBP_C::LowerBodyBLendMaskOverride");
static_assert(offsetof(UFortPlayerAnimComponentBP_C, HeadLookAtPitchRange) == 4152, "Offset mismatch for UFortPlayerAnimComponentBP_C::HeadLookAtPitchRange");
static_assert(offsetof(UFortPlayerAnimComponentBP_C, HeadLookAtYawRange) == 4156, "Offset mismatch for UFortPlayerAnimComponentBP_C::HeadLookAtYawRange");
static_assert(offsetof(UFortPlayerAnimComponentBP_C, FocusComponent) == 4840, "Offset mismatch for UFortPlayerAnimComponentBP_C::FocusComponent");
static_assert(offsetof(UFortPlayerAnimComponentBP_C, LeftArmBonesets) == 4872, "Offset mismatch for UFortPlayerAnimComponentBP_C::LeftArmBonesets");
static_assert(offsetof(UFortPlayerAnimComponentBP_C, RightArmBonesets) == 4904, "Offset mismatch for UFortPlayerAnimComponentBP_C::RightArmBonesets");
static_assert(offsetof(UFortPlayerAnimComponentBP_C, LeftLegBonesets) == 4936, "Offset mismatch for UFortPlayerAnimComponentBP_C::LeftLegBonesets");
static_assert(offsetof(UFortPlayerAnimComponentBP_C, RightLegBonesets) == 4968, "Offset mismatch for UFortPlayerAnimComponentBP_C::RightLegBonesets");
static_assert(offsetof(UFortPlayerAnimComponentBP_C, HeadBonesets) == 5000, "Offset mismatch for UFortPlayerAnimComponentBP_C::HeadBonesets");
static_assert(offsetof(UFortPlayerAnimComponentBP_C, UnhideWeaponBoneSetsNofityWeaponRef) == 5032, "Offset mismatch for UFortPlayerAnimComponentBP_C::UnhideWeaponBoneSetsNofityWeaponRef");
static_assert(offsetof(UFortPlayerAnimComponentBP_C, ItemAnimationOverrideWeaponRef) == 5040, "Offset mismatch for UFortPlayerAnimComponentBP_C::ItemAnimationOverrideWeaponRef");
static_assert(offsetof(UFortPlayerAnimComponentBP_C, ServerAbilityNotifyPredictiveTime) == 5048, "Offset mismatch for UFortPlayerAnimComponentBP_C::ServerAbilityNotifyPredictiveTime");
static_assert(offsetof(UFortPlayerAnimComponentBP_C, AbilityNotifyStatesToPredictOnServer) == 5088, "Offset mismatch for UFortPlayerAnimComponentBP_C::AbilityNotifyStatesToPredictOnServer");
static_assert(offsetof(UFortPlayerAnimComponentBP_C, ServerPredictedNotifyStatesPerMontage) == 5104, "Offset mismatch for UFortPlayerAnimComponentBP_C::ServerPredictedNotifyStatesPerMontage");
static_assert(offsetof(UFortPlayerAnimComponentBP_C, DebugManager) == 5136, "Offset mismatch for UFortPlayerAnimComponentBP_C::DebugManager");

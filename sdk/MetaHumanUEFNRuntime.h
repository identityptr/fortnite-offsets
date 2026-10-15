/**
 * decamp dumper generated SDK
 * Package: /Script/MetaHumanUEFNRuntime
 */
#pragma once
#include "Basic.h"

// /Script/MetaHumanUEFNRuntime.GameFeatureAction_MetaHuman
// Kind: Class; super: GameFeatureAction
class UGameFeatureAction_MetaHuman
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TMap<void*, void*> BodyPostAnimBPs; // 0x0028 (Size: 0x10, Type: MapProperty)
    std::uint8_t Face_AnimBP[0x20]; // 0x0038 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t Face_PostAnimBP[0x20]; // 0x0058 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t BlendableBody_Face_PostAnimBP[0x20]; // 0x0078 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t RigidBodyAnimBP[0x20]; // 0x0098 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t ControlRigRigidBodyAnimBP[0x20]; // 0x00B8 (Size: 0x20, Type: SoftClassProperty)
    TSoftClassPtr<void> ControlRigAnimBP; // 0x00D8 (Size: 0x28, Type: SoftClassProperty)
};

static_assert(offsetof(UGameFeatureAction_MetaHuman, BodyPostAnimBPs) == 40, "Offset mismatch for UGameFeatureAction_MetaHuman::BodyPostAnimBPs");
static_assert(offsetof(UGameFeatureAction_MetaHuman, Face_AnimBP) == 56, "Offset mismatch for UGameFeatureAction_MetaHuman::Face_AnimBP");
static_assert(offsetof(UGameFeatureAction_MetaHuman, Face_PostAnimBP) == 88, "Offset mismatch for UGameFeatureAction_MetaHuman::Face_PostAnimBP");
static_assert(offsetof(UGameFeatureAction_MetaHuman, BlendableBody_Face_PostAnimBP) == 120, "Offset mismatch for UGameFeatureAction_MetaHuman::BlendableBody_Face_PostAnimBP");
static_assert(offsetof(UGameFeatureAction_MetaHuman, RigidBodyAnimBP) == 152, "Offset mismatch for UGameFeatureAction_MetaHuman::RigidBodyAnimBP");
static_assert(offsetof(UGameFeatureAction_MetaHuman, ControlRigRigidBodyAnimBP) == 184, "Offset mismatch for UGameFeatureAction_MetaHuman::ControlRigRigidBodyAnimBP");
static_assert(offsetof(UGameFeatureAction_MetaHuman, ControlRigAnimBP) == 216, "Offset mismatch for UGameFeatureAction_MetaHuman::ControlRigAnimBP");

// /Script/MetaHumanUEFNRuntime.MetaHumanComponent
// Kind: Class; super: MetaHumanComponentBase
class UMetaHumanComponent
{
public:
    std::uint8_t Pad_0000[0x190]; // 0x0000
    std::int32_t BodyLODThreshold; // 0x0190 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UMetaHumanComponent, BodyLODThreshold) == 400, "Offset mismatch for UMetaHumanComponent::BodyLODThreshold");

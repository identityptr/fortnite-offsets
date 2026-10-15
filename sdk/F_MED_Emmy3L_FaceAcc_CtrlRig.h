/**
 * decamp dumper generated SDK
 * Package: /DefaultCosmeticsAthena/Characters/Meshes/F_MED_Emmy3L_FaceAcc_CtrlRig
 */
#pragma once
#include "Basic.h"

// /DefaultCosmeticsAthena/Characters/Meshes/F_MED_Emmy3L_FaceAcc_CtrlRig.F_MED_Emmy3L_FaceAcc_CtrlRig_C
// Kind: ControlRigBlueprintGeneratedClass; super: ControlRig
class UF_MED_Emmy3L_FaceAcc_CtrlRig_C
{
public:
    std::uint8_t Pad_0000[0x260]; // 0x0000
    TArray<void*> OverrideAssets; // 0x0260 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x1]; // 0x0270
    std::uint8_t ExecutionType; // 0x0271 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x2]; // 0x0272
    std::uint8_t HierarchySettings[0xC]; // 0x0274 (Size: 0xC, Type: StructProperty)
    TMap<void*, void*> ControlCustomizations; // 0x0280 (Size: 0x10, Type: MapProperty)
    void* DynamicHierarchy; // 0x0290 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ShapeLibraries; // 0x0298 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> ShapeLibraryNameMap; // 0x02A8 (Size: 0x10, Type: MapProperty)
    std::uint8_t Pad_0003[0x18]; // 0x02B8
    std::uint8_t RigVMExtendedExecuteContext[0x258]; // 0x02D0 (Size: 0x258, Type: StructProperty)
    void* DataSourceRegistry; // 0x0528 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0004[0xB0]; // 0x0530
    std::uint8_t Influences[0x68]; // 0x05E0 (Size: 0x68, Type: StructProperty)
    TMap<void*, void*> ExternalVariableDataAssetLinks; // 0x0648 (Size: 0x10, Type: MapProperty)
    std::uint8_t Pad_0005[0xD8]; // 0x0658
    FMulticastSparseDelegate OnControlSelected_BP; // 0x0730 (Size: 0x10, Type: MulticastSparseDelegateProperty)
    std::uint8_t Pad_0006[0x20]; // 0x0740
    std::uint8_t bIsAdditive; // 0x0760 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0007[0x97]; // 0x0761
    std::uint8_t RigModuleSettings[0x1]; // 0x07F8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UF_MED_Emmy3L_FaceAcc_CtrlRig_C, OverrideAssets) == 608, "Offset mismatch for UF_MED_Emmy3L_FaceAcc_CtrlRig_C::OverrideAssets");
static_assert(offsetof(UF_MED_Emmy3L_FaceAcc_CtrlRig_C, ExecutionType) == 625, "Offset mismatch for UF_MED_Emmy3L_FaceAcc_CtrlRig_C::ExecutionType");
static_assert(offsetof(UF_MED_Emmy3L_FaceAcc_CtrlRig_C, HierarchySettings) == 628, "Offset mismatch for UF_MED_Emmy3L_FaceAcc_CtrlRig_C::HierarchySettings");
static_assert(offsetof(UF_MED_Emmy3L_FaceAcc_CtrlRig_C, ControlCustomizations) == 640, "Offset mismatch for UF_MED_Emmy3L_FaceAcc_CtrlRig_C::ControlCustomizations");
static_assert(offsetof(UF_MED_Emmy3L_FaceAcc_CtrlRig_C, DynamicHierarchy) == 656, "Offset mismatch for UF_MED_Emmy3L_FaceAcc_CtrlRig_C::DynamicHierarchy");
static_assert(offsetof(UF_MED_Emmy3L_FaceAcc_CtrlRig_C, ShapeLibraries) == 664, "Offset mismatch for UF_MED_Emmy3L_FaceAcc_CtrlRig_C::ShapeLibraries");
static_assert(offsetof(UF_MED_Emmy3L_FaceAcc_CtrlRig_C, ShapeLibraryNameMap) == 680, "Offset mismatch for UF_MED_Emmy3L_FaceAcc_CtrlRig_C::ShapeLibraryNameMap");
static_assert(offsetof(UF_MED_Emmy3L_FaceAcc_CtrlRig_C, RigVMExtendedExecuteContext) == 720, "Offset mismatch for UF_MED_Emmy3L_FaceAcc_CtrlRig_C::RigVMExtendedExecuteContext");
static_assert(offsetof(UF_MED_Emmy3L_FaceAcc_CtrlRig_C, DataSourceRegistry) == 1320, "Offset mismatch for UF_MED_Emmy3L_FaceAcc_CtrlRig_C::DataSourceRegistry");
static_assert(offsetof(UF_MED_Emmy3L_FaceAcc_CtrlRig_C, Influences) == 1504, "Offset mismatch for UF_MED_Emmy3L_FaceAcc_CtrlRig_C::Influences");
static_assert(offsetof(UF_MED_Emmy3L_FaceAcc_CtrlRig_C, ExternalVariableDataAssetLinks) == 1608, "Offset mismatch for UF_MED_Emmy3L_FaceAcc_CtrlRig_C::ExternalVariableDataAssetLinks");
static_assert(offsetof(UF_MED_Emmy3L_FaceAcc_CtrlRig_C, OnControlSelected_BP) == 1840, "Offset mismatch for UF_MED_Emmy3L_FaceAcc_CtrlRig_C::OnControlSelected_BP");
static_assert(offsetof(UF_MED_Emmy3L_FaceAcc_CtrlRig_C, bIsAdditive) == 1888, "Offset mismatch for UF_MED_Emmy3L_FaceAcc_CtrlRig_C::bIsAdditive");
static_assert(offsetof(UF_MED_Emmy3L_FaceAcc_CtrlRig_C, RigModuleSettings) == 2040, "Offset mismatch for UF_MED_Emmy3L_FaceAcc_CtrlRig_C::RigModuleSettings");

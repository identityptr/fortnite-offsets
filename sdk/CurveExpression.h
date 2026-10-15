/**
 * decamp dumper generated SDK
 * Package: /Script/CurveExpression
 */
#pragma once
#include "Basic.h"

// /Script/CurveExpression.AnimNode_RemapCurves
// Kind: ScriptStruct; super: AnimNode_RemapCurvesBase
struct FAnimNode_RemapCurves
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t SourcePose[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t ExpressionSource; // 0x0020 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0021
    std::uint8_t ExpressionList[0x10]; // 0x0028 (Size: 0x10, Type: StructProperty)
    void* CurveExpressionsDataAsset; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    TMap<void*, void*> CurveExpressions; // 0x0040 (Size: 0x10, Type: MapProperty)
    std::uint8_t bExpressionsImmutable; // 0x0050 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0051
    TArray<void*> CachedConstantNames; // 0x0058 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FAnimNode_RemapCurves, SourcePose) == 16, "Offset mismatch for FAnimNode_RemapCurves::SourcePose");
static_assert(offsetof(FAnimNode_RemapCurves, ExpressionSource) == 32, "Offset mismatch for FAnimNode_RemapCurves::ExpressionSource");
static_assert(offsetof(FAnimNode_RemapCurves, ExpressionList) == 40, "Offset mismatch for FAnimNode_RemapCurves::ExpressionList");
static_assert(offsetof(FAnimNode_RemapCurves, CurveExpressionsDataAsset) == 56, "Offset mismatch for FAnimNode_RemapCurves::CurveExpressionsDataAsset");
static_assert(offsetof(FAnimNode_RemapCurves, CurveExpressions) == 64, "Offset mismatch for FAnimNode_RemapCurves::CurveExpressions");
static_assert(offsetof(FAnimNode_RemapCurves, bExpressionsImmutable) == 80, "Offset mismatch for FAnimNode_RemapCurves::bExpressionsImmutable");
static_assert(offsetof(FAnimNode_RemapCurves, CachedConstantNames) == 88, "Offset mismatch for FAnimNode_RemapCurves::CachedConstantNames");

// /Script/CurveExpression.AnimNode_RemapCurvesBase
// Kind: ScriptStruct; super: AnimNode_Base
struct FAnimNode_RemapCurvesBase
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t SourcePose[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t ExpressionSource; // 0x0020 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0021
    std::uint8_t ExpressionList[0x10]; // 0x0028 (Size: 0x10, Type: StructProperty)
    void* CurveExpressionsDataAsset; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    TMap<void*, void*> CurveExpressions; // 0x0040 (Size: 0x10, Type: MapProperty)
    std::uint8_t bExpressionsImmutable; // 0x0050 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0051
    TArray<void*> CachedConstantNames; // 0x0058 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FAnimNode_RemapCurvesBase, SourcePose) == 16, "Offset mismatch for FAnimNode_RemapCurvesBase::SourcePose");
static_assert(offsetof(FAnimNode_RemapCurvesBase, ExpressionSource) == 32, "Offset mismatch for FAnimNode_RemapCurvesBase::ExpressionSource");
static_assert(offsetof(FAnimNode_RemapCurvesBase, ExpressionList) == 40, "Offset mismatch for FAnimNode_RemapCurvesBase::ExpressionList");
static_assert(offsetof(FAnimNode_RemapCurvesBase, CurveExpressionsDataAsset) == 56, "Offset mismatch for FAnimNode_RemapCurvesBase::CurveExpressionsDataAsset");
static_assert(offsetof(FAnimNode_RemapCurvesBase, CurveExpressions) == 64, "Offset mismatch for FAnimNode_RemapCurvesBase::CurveExpressions");
static_assert(offsetof(FAnimNode_RemapCurvesBase, bExpressionsImmutable) == 80, "Offset mismatch for FAnimNode_RemapCurvesBase::bExpressionsImmutable");
static_assert(offsetof(FAnimNode_RemapCurvesBase, CachedConstantNames) == 88, "Offset mismatch for FAnimNode_RemapCurvesBase::CachedConstantNames");

// /Script/CurveExpression.AnimNode_RemapCurvesFromMesh
// Kind: ScriptStruct; super: AnimNode_RemapCurvesBase
struct FAnimNode_RemapCurvesFromMesh
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    TWeakObjectPtr<void> SourceMeshComponent; // 0x0090 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t bUseAttachedParent; // 0x0098 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FAnimNode_RemapCurvesFromMesh, SourceMeshComponent) == 144, "Offset mismatch for FAnimNode_RemapCurvesFromMesh::SourceMeshComponent");
static_assert(offsetof(FAnimNode_RemapCurvesFromMesh, bUseAttachedParent) == 152, "Offset mismatch for FAnimNode_RemapCurvesFromMesh::bUseAttachedParent");

// /Script/CurveExpression.CurveExpressionList
// Kind: ScriptStruct; super: none
struct FCurveExpressionList
{
public:
    FString AssignmentExpressions; // 0x0000 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FCurveExpressionList, AssignmentExpressions) == 0, "Offset mismatch for FCurveExpressionList::AssignmentExpressions");

// /Script/CurveExpression.CurveExpressionsDataAsset
// Kind: Class; super: DataAsset
class UCurveExpressionsDataAsset
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> NamedConstants; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UCurveExpressionsDataAsset, NamedConstants) == 40, "Offset mismatch for UCurveExpressionsDataAsset::NamedConstants");

/**
 * decamp dumper generated SDK
 * Package: /Game/Athena/HUD/Actors/B_AthenaMapMarkerBase
 */
#pragma once
#include "Basic.h"

// /Game/Athena/HUD/Actors/B_AthenaMapMarkerBase.B_AthenaMapMarkerBase_C
// Kind: BlueprintGeneratedClass; super: FortPlayerMarkerBase
class UB_AthenaMapMarkerBase_C
{
public:
    std::uint8_t None[0x440]; // 0x0000 (Size: 0x440, Type: UnknownProperty)
    std::uint8_t UberGraphFrame[0x8]; // 0x0440 (Size: 0x8, Type: StructProperty)
    void* PingMarkerProto; // 0x0448 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0000[0x8]; // 0x0450
    float OnProtoMarkerPlaced_RampPow_83EEC58A4783B077FB03728C433B4B7E; // 0x0458 (Size: 0x4, Type: FloatProperty)
    float OnProtoMarkerPlaced_Pinch_83EEC58A4783B077FB03728C433B4B7E; // 0x045C (Size: 0x4, Type: FloatProperty)
    float OnProtoMarkerPlaced_Glow_83EEC58A4783B077FB03728C433B4B7E; // 0x0460 (Size: 0x4, Type: FloatProperty)
    std::uint8_t OnProtoMarkerPlaced_Direction_83EEC58A4783B077FB03728C433B4B7E; // 0x0464 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0465
    void* OnProtoMarkerPlaced; // 0x0468 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UB_AthenaMapMarkerBase_C, None) == 0, "Offset mismatch for UB_AthenaMapMarkerBase_C::None");
static_assert(offsetof(UB_AthenaMapMarkerBase_C, UberGraphFrame) == 1088, "Offset mismatch for UB_AthenaMapMarkerBase_C::UberGraphFrame");
static_assert(offsetof(UB_AthenaMapMarkerBase_C, PingMarkerProto) == 1096, "Offset mismatch for UB_AthenaMapMarkerBase_C::PingMarkerProto");
static_assert(offsetof(UB_AthenaMapMarkerBase_C, OnProtoMarkerPlaced_RampPow_83EEC58A4783B077FB03728C433B4B7E) == 1112, "Offset mismatch for UB_AthenaMapMarkerBase_C::OnProtoMarkerPlaced_RampPow_83EEC58A4783B077FB03728C433B4B7E");
static_assert(offsetof(UB_AthenaMapMarkerBase_C, OnProtoMarkerPlaced_Pinch_83EEC58A4783B077FB03728C433B4B7E) == 1116, "Offset mismatch for UB_AthenaMapMarkerBase_C::OnProtoMarkerPlaced_Pinch_83EEC58A4783B077FB03728C433B4B7E");
static_assert(offsetof(UB_AthenaMapMarkerBase_C, OnProtoMarkerPlaced_Glow_83EEC58A4783B077FB03728C433B4B7E) == 1120, "Offset mismatch for UB_AthenaMapMarkerBase_C::OnProtoMarkerPlaced_Glow_83EEC58A4783B077FB03728C433B4B7E");
static_assert(offsetof(UB_AthenaMapMarkerBase_C, OnProtoMarkerPlaced_Direction_83EEC58A4783B077FB03728C433B4B7E) == 1124, "Offset mismatch for UB_AthenaMapMarkerBase_C::OnProtoMarkerPlaced_Direction_83EEC58A4783B077FB03728C433B4B7E");
static_assert(offsetof(UB_AthenaMapMarkerBase_C, OnProtoMarkerPlaced) == 1128, "Offset mismatch for UB_AthenaMapMarkerBase_C::OnProtoMarkerPlaced");

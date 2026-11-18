#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SonicSpearGameplayRuntime
{
    struct EnvQueryTest_SonicSpearOverlapGameplayTags
    {
        static constexpr std::string_view Name = "EnvQueryTest_SonicSpearOverlapGameplayTags";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryTest";
        struct Offsets
        {
            static constexpr std::uintptr_t OverlapData = 0x1F8;
            static constexpr std::uintptr_t MatchAnyTags = 0x228;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OverlapData", 0x1F8, "StructProperty"},
            {"MatchAnyTags", 0x228, "StructProperty"},
        }};
    };

    struct FortAthenaMutator_SonicSpear
    {
        static constexpr std::string_view Name = "FortAthenaMutator_SonicSpear";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaMutator";
        struct Offsets
        {
            static constexpr std::uintptr_t OnZoneBegin = 0x2E8;
            static constexpr std::uintptr_t OnZoneEnd = 0x2F8;
            static constexpr std::uintptr_t bDestroyInBeginPlay = 0x308;
            static constexpr std::uintptr_t SonicSpearZoneClass = 0x310;
            static constexpr std::uintptr_t MinZonesPerMatch = 0x318;
            static constexpr std::uintptr_t MaxZonesPerMatch = 0x31C;
            static constexpr std::uintptr_t ZoneRandomizationMap = 0x320;
            static constexpr std::uintptr_t ZoneCutoffPercent = 0x330;
            static constexpr std::uintptr_t ZoneDataTable = 0x338;
            static constexpr std::uintptr_t ActorTypeDataTable = 0x340;
            static constexpr std::uintptr_t MapUIPastZoneColor = 0x348;
            static constexpr std::uintptr_t MapUIPresentZoneColor = 0x358;
            static constexpr std::uintptr_t MapUIFutureZoneColor = 0x368;
            static constexpr std::uintptr_t DebugUIOuterZoneColor = 0x378;
            static constexpr std::uintptr_t MapUIZoneShapeThickness = 0x388;
            static constexpr std::uintptr_t MapUIZoneCircleNumSides = 0x38C;
            static constexpr std::uintptr_t DebugMapUITextScale = 0x390;
            static constexpr std::uintptr_t DebugMapUITextColor = 0x3A0;
            static constexpr std::uintptr_t DebugCapsuleColor = 0x3B0;
            static constexpr std::uintptr_t DebugCapsuleSegments = 0x3B4;
            static constexpr std::uintptr_t DebugCapsuleThickness = 0x3B8;
            static constexpr std::uintptr_t Zones = 0x3C8;
            static constexpr std::uintptr_t ReplicatedActiveZones = 0x3D8;
        };

        inline static constexpr std::array<PropertyInfo, 23> Properties{{
            {"OnZoneBegin", 0x2E8, "MulticastInlineDelegateProperty"},
            {"OnZoneEnd", 0x2F8, "MulticastInlineDelegateProperty"},
            {"bDestroyInBeginPlay", 0x308, "BoolProperty"},
            {"SonicSpearZoneClass", 0x310, "ClassProperty"},
            {"MinZonesPerMatch", 0x318, "IntProperty"},
            {"MaxZonesPerMatch", 0x31C, "IntProperty"},
            {"ZoneRandomizationMap", 0x320, "MapProperty"},
            {"ZoneCutoffPercent", 0x330, "FloatProperty"},
            {"ZoneDataTable", 0x338, "ObjectProperty"},
            {"ActorTypeDataTable", 0x340, "ObjectProperty"},
            {"MapUIPastZoneColor", 0x348, "StructProperty"},
            {"MapUIPresentZoneColor", 0x358, "StructProperty"},
            {"MapUIFutureZoneColor", 0x368, "StructProperty"},
            {"DebugUIOuterZoneColor", 0x378, "StructProperty"},
            {"MapUIZoneShapeThickness", 0x388, "FloatProperty"},
            {"MapUIZoneCircleNumSides", 0x38C, "IntProperty"},
            {"DebugMapUITextScale", 0x390, "StructProperty"},
            {"DebugMapUITextColor", 0x3A0, "StructProperty"},
            {"DebugCapsuleColor", 0x3B0, "StructProperty"},
            {"DebugCapsuleSegments", 0x3B4, "IntProperty"},
            {"DebugCapsuleThickness", 0x3B8, "FloatProperty"},
            {"Zones", 0x3C8, "ArrayProperty"},
            {"ReplicatedActiveZones", 0x3D8, "StructProperty"},
        }};
    };

    struct SonicSpearZone
    {
        static constexpr std::string_view Name = "SonicSpearZone";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t OverlapComponent = 0x278;
            static constexpr std::uintptr_t PhaseDataTable = 0x280;
            static constexpr std::uintptr_t PossiblePhaseOrders = 0x288;
            static constexpr std::uintptr_t SafeZoneDurationPercent = 0x298;
            static constexpr std::uintptr_t SafeZonePhaseEndTime = 0x2C0;
            static constexpr std::uintptr_t SpawnActorCollisionHandlingMethod = 0x310;
            static constexpr std::uintptr_t RadiusBufferForNetCullDistance = 0x318;
            static constexpr std::uintptr_t CapsuleTopZ = 0x340;
            static constexpr std::uintptr_t CapsuleBottomZ = 0x368;
            static constexpr std::uintptr_t TerrainTraceStartZ = 0x390;
            static constexpr std::uintptr_t TerrainTraceEndZ = 0x3B8;
            static constexpr std::uintptr_t MaxNonEQSSpawnAttempts = 0x3E0;
            static constexpr std::uintptr_t MaxEQSSpawnAttempts = 0x408;
            static constexpr std::uintptr_t FinalEQSFailsafeTime = 0x430;
            static constexpr std::uintptr_t MinSpawnOffsetZ = 0x458;
            static constexpr std::uintptr_t MaxSpawnOffsetZ = 0x480;
            static constexpr std::uintptr_t bRandomizeSpawnPitch = 0x4A8;
            static constexpr std::uintptr_t bRandomizeSpawnYaw = 0x4D0;
            static constexpr std::uintptr_t bUseEQS = 0x4F8;
            static constexpr std::uintptr_t DebugUIActorSpawnCircleThickness = 0x4FC;
            static constexpr std::uintptr_t DebugUIActorSpawnCircleNumSides = 0x500;
            static constexpr std::uintptr_t Radius = 0x504;
        };

        inline static constexpr std::array<PropertyInfo, 22> Properties{{
            {"OverlapComponent", 0x278, "ObjectProperty"},
            {"PhaseDataTable", 0x280, "ObjectProperty"},
            {"PossiblePhaseOrders", 0x288, "ArrayProperty"},
            {"SafeZoneDurationPercent", 0x298, "StructProperty"},
            {"SafeZonePhaseEndTime", 0x2C0, "StructProperty"},
            {"SpawnActorCollisionHandlingMethod", 0x310, "EnumProperty"},
            {"RadiusBufferForNetCullDistance", 0x318, "StructProperty"},
            {"CapsuleTopZ", 0x340, "StructProperty"},
            {"CapsuleBottomZ", 0x368, "StructProperty"},
            {"TerrainTraceStartZ", 0x390, "StructProperty"},
            {"TerrainTraceEndZ", 0x3B8, "StructProperty"},
            {"MaxNonEQSSpawnAttempts", 0x3E0, "StructProperty"},
            {"MaxEQSSpawnAttempts", 0x408, "StructProperty"},
            {"FinalEQSFailsafeTime", 0x430, "StructProperty"},
            {"MinSpawnOffsetZ", 0x458, "StructProperty"},
            {"MaxSpawnOffsetZ", 0x480, "StructProperty"},
            {"bRandomizeSpawnPitch", 0x4A8, "StructProperty"},
            {"bRandomizeSpawnYaw", 0x4D0, "StructProperty"},
            {"bUseEQS", 0x4F8, "BoolProperty"},
            {"DebugUIActorSpawnCircleThickness", 0x4FC, "FloatProperty"},
            {"DebugUIActorSpawnCircleNumSides", 0x500, "IntProperty"},
            {"Radius", 0x504, "FloatProperty"},
        }};
    };

}

#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::CombatZonesRuntime
{
    struct CombatZoneBTService_SelectCombatZone
    {
        static constexpr std::string_view Name = "CombatZoneBTService_SelectCombatZone";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTService";
        struct Offsets
        {
            static constexpr std::uintptr_t EQSRequest = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"EQSRequest", 0x70, "StructProperty"},
        }};
    };

    struct CombatZoneRuntimeStaticPointProviderComponent
    {
        static constexpr std::string_view Name = "CombatZoneRuntimeStaticPointProviderComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaLivingWorldRuntimeStaticPointProviderComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CombatZoneRequiredTags = 0x1E0;
            static constexpr std::uintptr_t NavAgentProperties = 0x228;
            static constexpr std::uintptr_t FilterClass = 0x258;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"CombatZoneRequiredTags", 0x1E0, "StructProperty"},
            {"NavAgentProperties", 0x228, "StructProperty"},
            {"FilterClass", 0x258, "ClassProperty"},
        }};
    };

    struct FortCombatZone
    {
        static constexpr std::string_view Name = "FortCombatZone";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAILeashVolume";
        struct Offsets
        {
            static constexpr std::uintptr_t CombatZoneTags = 0x2D8;
            static constexpr std::uintptr_t CombatZoneRuntimeTags = 0x2F8;
            static constexpr std::uintptr_t MaxOccupantsCount = 0x318;
            static constexpr std::uintptr_t MaxSquadsCount = 0x31C;
            static constexpr std::uintptr_t MaxKillCount = 0x320;
            static constexpr std::uintptr_t KillCountResetTimer = 0x324;
            static constexpr std::uintptr_t CurrentOccupantsCount = 0x328;
            static constexpr std::uintptr_t CurrentSquadsCount = 0x32C;
            static constexpr std::uintptr_t CurrentKillCount = 0x330;
            static constexpr std::uintptr_t LastDeathTimestamp = 0x334;
            static constexpr std::uintptr_t OnKillCountExpiredHandle = 0x338;
            static constexpr std::uintptr_t DepthCaptureHorizontalSpacing = 0x368;
            static constexpr std::uintptr_t DepthCaptureParameters = 0x36C;
            static constexpr std::uintptr_t DepthCaptureResults = 0x390;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"CombatZoneTags", 0x2D8, "StructProperty"},
            {"CombatZoneRuntimeTags", 0x2F8, "StructProperty"},
            {"MaxOccupantsCount", 0x318, "IntProperty"},
            {"MaxSquadsCount", 0x31C, "IntProperty"},
            {"MaxKillCount", 0x320, "IntProperty"},
            {"KillCountResetTimer", 0x324, "FloatProperty"},
            {"CurrentOccupantsCount", 0x328, "IntProperty"},
            {"CurrentSquadsCount", 0x32C, "IntProperty"},
            {"CurrentKillCount", 0x330, "IntProperty"},
            {"LastDeathTimestamp", 0x334, "FloatProperty"},
            {"OnKillCountExpiredHandle", 0x338, "StructProperty"},
            {"DepthCaptureHorizontalSpacing", 0x368, "FloatProperty"},
            {"DepthCaptureParameters", 0x36C, "StructProperty"},
            {"DepthCaptureResults", 0x390, "StructProperty"},
        }};
    };

    struct FortQueryGenerator_CachedGridInCombatZone
    {
        static constexpr std::string_view Name = "FortQueryGenerator_CachedGridInCombatZone";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortQueryGenerator_GridInVolume";
        struct Offsets
        {
            static constexpr std::uintptr_t MinimumPointsOnWidth = 0xD0;
            static constexpr std::uintptr_t MinimumPointsOnLength = 0x108;
            static constexpr std::uintptr_t FallbackBoxCenterAndExtentsContext = 0x140;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"MinimumPointsOnWidth", 0xD0, "StructProperty"},
            {"MinimumPointsOnLength", 0x108, "StructProperty"},
            {"FallbackBoxCenterAndExtentsContext", 0x140, "ClassProperty"},
        }};
    };

    struct FortQueryItemType_CombatZone
    {
        static constexpr std::string_view Name = "FortQueryItemType_CombatZone";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryItemType_ActorBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortQueryTest_CombatZoneCanBeOccupied
    {
        static constexpr std::string_view Name = "FortQueryTest_CombatZoneCanBeOccupied";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryTest";
        struct Offsets
        {
            static constexpr std::uintptr_t GroupActorContext = 0x1F8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"GroupActorContext", 0x1F8, "ClassProperty"},
        }};
    };

    struct FortQueryTest_CombatZoneCanSeePosition
    {
        static constexpr std::string_view Name = "FortQueryTest_CombatZoneCanSeePosition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryTest";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetActorContext = 0x1F8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TargetActorContext", 0x1F8, "ClassProperty"},
        }};
    };

    struct FortQueryTest_CombatZoneCoverDensity
    {
        static constexpr std::string_view Name = "FortQueryTest_CombatZoneCoverDensity";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryTest";
        struct Offsets
        {
            static constexpr std::uintptr_t GroupActorContext = 0x1F8;
            static constexpr std::uintptr_t TargetActorContext = 0x200;
            static constexpr std::uintptr_t RequiredAngleProtection = 0x208;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"GroupActorContext", 0x1F8, "ClassProperty"},
            {"TargetActorContext", 0x200, "ClassProperty"},
            {"RequiredAngleProtection", 0x208, "StructProperty"},
        }};
    };

    struct FortQueryTest_CombatZoneIsSelected
    {
        static constexpr std::string_view Name = "FortQueryTest_CombatZoneIsSelected";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryTest";
        struct Offsets
        {
            static constexpr std::uintptr_t ZoneSelectorContext = 0x1F8;
            static constexpr std::uintptr_t TestMode = 0x200;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ZoneSelectorContext", 0x1F8, "ClassProperty"},
            {"TestMode", 0x200, "EnumProperty"},
        }};
    };

    struct FortQueryTest_CombatZoneKillCount
    {
        static constexpr std::string_view Name = "FortQueryTest_CombatZoneKillCount";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryTest";
        struct Offsets
        {
            static constexpr std::uintptr_t TestOrder = 0x30;
            static constexpr std::uintptr_t TestPurpose = 0x34;
            static constexpr std::uintptr_t TestComment = 0x38;
            static constexpr std::uintptr_t MultipleContextFilterOp = 0x48;
            static constexpr std::uintptr_t MultipleContextScoreOp = 0x49;
            static constexpr std::uintptr_t FilterType = 0x4A;
            static constexpr std::uintptr_t BoolValue = 0x50;
            static constexpr std::uintptr_t FloatValueMin = 0x88;
            static constexpr std::uintptr_t FloatValueMax = 0xC0;
            static constexpr std::uintptr_t ScoringEquation = 0xF9;
            static constexpr std::uintptr_t ClampMinType = 0xFA;
            static constexpr std::uintptr_t ClampMaxType = 0xFB;
            static constexpr std::uintptr_t NormalizationType = 0xFC;
            static constexpr std::uintptr_t ScoreClampMin = 0x100;
            static constexpr std::uintptr_t ScoreClampMax = 0x138;
            static constexpr std::uintptr_t ScoringFactor = 0x170;
            static constexpr std::uintptr_t ReferenceValue = 0x1A8;
            static constexpr std::uintptr_t bDefineReferenceValue = 0x1E0;
            static constexpr std::uintptr_t bWorkOnFloatValues = 0x1F0;
        };

        inline static constexpr std::array<PropertyInfo, 19> Properties{{
            {"TestOrder", 0x30, "IntProperty"},
            {"TestPurpose", 0x34, "ByteProperty"},
            {"TestComment", 0x38, "StrProperty"},
            {"MultipleContextFilterOp", 0x48, "ByteProperty"},
            {"MultipleContextScoreOp", 0x49, "ByteProperty"},
            {"FilterType", 0x4A, "ByteProperty"},
            {"BoolValue", 0x50, "StructProperty"},
            {"FloatValueMin", 0x88, "StructProperty"},
            {"FloatValueMax", 0xC0, "StructProperty"},
            {"ScoringEquation", 0xF9, "ByteProperty"},
            {"ClampMinType", 0xFA, "ByteProperty"},
            {"ClampMaxType", 0xFB, "ByteProperty"},
            {"NormalizationType", 0xFC, "EnumProperty"},
            {"ScoreClampMin", 0x100, "StructProperty"},
            {"ScoreClampMax", 0x138, "StructProperty"},
            {"ScoringFactor", 0x170, "StructProperty"},
            {"ReferenceValue", 0x1A8, "StructProperty"},
            {"bDefineReferenceValue", 0x1E0, "BoolProperty"},
            {"bWorkOnFloatValues", 0x1F0, "BoolProperty"},
        }};
    };

    struct FortQueryTest_InsideCombatZoneLeash
    {
        static constexpr std::string_view Name = "FortQueryTest_InsideCombatZoneLeash";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortQueryTest_InsideAthenaLeash";
        struct Offsets
        {
            static constexpr std::uintptr_t FallbackResultWhenLeashIsNotACombatZone = 0x278;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"FallbackResultWhenLeashIsNotACombatZone", 0x278, "EnumProperty"},
        }};
    };

}

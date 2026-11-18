#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::UnstableLiquidGunRuntime
{
    struct FortLiquidGunProjectile
    {
        static constexpr std::string_view Name = "FortLiquidGunProjectile";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortProjectileBase";
        struct Offsets
        {
            static constexpr std::uintptr_t AttachComponent = 0xAF8;
            static constexpr std::uintptr_t AttachOffset = 0xB00;
            static constexpr std::uintptr_t ProjectileIndex = 0xB18;
            static constexpr std::uintptr_t StopNormal = 0xB20;
            static constexpr std::uintptr_t RibbonManager = 0xB38;
            static constexpr std::uintptr_t MinDistBetweenProjectilesForSplineCollisionTest = 0xB40;
            static constexpr std::uintptr_t MinDistBetweenInLineProjectilesForSplineCollisionTest = 0xB68;
            static constexpr std::uintptr_t MinProjectileVelocityAngleToBeInLine = 0xB90;
            static constexpr std::uintptr_t BroadSphereOverlapTraceChannel = 0xBB8;
            static constexpr std::uintptr_t CapsuleTraceProfileName = 0xBBC;
            static constexpr std::uintptr_t bCapsuleTraceComplex = 0xBC0;
            static constexpr std::uintptr_t RandomDetachmentAngleFirstHalf = 0xBC8;
            static constexpr std::uintptr_t RandomDetachmentAngleSecondHalf = 0xBE0;
            static constexpr std::uintptr_t bDrawDebugCollision = 0xBF8;
            static constexpr std::uintptr_t bDrawDebugCollisionOnlyCapsuleTraceHits = 0xBF9;
            static constexpr std::uintptr_t DetachmentReason = 0xBFA;
        };

        inline static constexpr std::array<PropertyInfo, 16> Properties{{
            {"AttachComponent", 0xAF8, "ObjectProperty"},
            {"AttachOffset", 0xB00, "StructProperty"},
            {"ProjectileIndex", 0xB18, "IntProperty"},
            {"StopNormal", 0xB20, "StructProperty"},
            {"RibbonManager", 0xB38, "ObjectProperty"},
            {"MinDistBetweenProjectilesForSplineCollisionTest", 0xB40, "StructProperty"},
            {"MinDistBetweenInLineProjectilesForSplineCollisionTest", 0xB68, "StructProperty"},
            {"MinProjectileVelocityAngleToBeInLine", 0xB90, "StructProperty"},
            {"BroadSphereOverlapTraceChannel", 0xBB8, "ByteProperty"},
            {"CapsuleTraceProfileName", 0xBBC, "NameProperty"},
            {"bCapsuleTraceComplex", 0xBC0, "BoolProperty"},
            {"RandomDetachmentAngleFirstHalf", 0xBC8, "StructProperty"},
            {"RandomDetachmentAngleSecondHalf", 0xBE0, "StructProperty"},
            {"bDrawDebugCollision", 0xBF8, "BoolProperty"},
            {"bDrawDebugCollisionOnlyCapsuleTraceHits", 0xBF9, "BoolProperty"},
            {"DetachmentReason", 0xBFA, "EnumProperty"},
        }};
    };

    struct LiquidRibbonManager
    {
        static constexpr std::string_view Name = "LiquidRibbonManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t PointsPerSegment = 0x278;
            static constexpr std::uintptr_t MaxSegmentLengthBeforeBreak = 0x280;
            static constexpr std::uintptr_t SplineCurveTension = 0x2A8;
            static constexpr std::uintptr_t MinPointSize = 0x2AC;
            static constexpr std::uintptr_t MaxPointSize = 0x2B0;
            static constexpr std::uintptr_t NumPointsAtMinPointSize = 0x2B4;
            static constexpr std::uintptr_t NumPointsAtMaxPointSize = 0x2B8;
            static constexpr std::uintptr_t SplineLengthForSizeCalculation = 0x2BC;
            static constexpr std::uintptr_t NumPointsToTaperDownSplineEndSize = 0x2C0;
            static constexpr std::uintptr_t MinSplineEndTaperSize = 0x2C4;
            static constexpr std::uintptr_t TaperSizeAtDetachment_RemapClosenessToBreakageOldMin = 0x2C8;
            static constexpr std::uintptr_t TaperSizeAtDetachment_RemapClosenessToBreakageOldMax = 0x2CC;
            static constexpr std::uintptr_t MinPointSizePercentForFlashIntensity = 0x2D0;
            static constexpr std::uintptr_t MaxPointSizePercentForFlashIntensity = 0x2D4;
            static constexpr std::uintptr_t PositionsNiagaraParamName = 0x2D8;
            static constexpr std::uintptr_t RibbonIDsNiagaraParamName = 0x2DC;
            static constexpr std::uintptr_t RibbonVisibilitiesNiagaraParamName = 0x2E0;
            static constexpr std::uintptr_t FlashIntensitiesNiagaraParamName = 0x2E4;
            static constexpr std::uintptr_t RibbonSizesNiagaraParamName = 0x2E8;
            static constexpr std::uintptr_t CalculateBaseCurlOffset_MaxSegmentLength = 0x2F0;
            static constexpr std::uintptr_t CalculateBaseCurlOffset_MaxTimeSinceDetachment = 0x318;
            static constexpr std::uintptr_t CalculateBaseCurlOffset_TowardPerpendicularMult = 0x340;
            static constexpr std::uintptr_t CalculateBaseCurlOffset_TowardEndMult = 0x368;
            static constexpr std::uintptr_t CalculateBaseCurlOffset_TowardRandomMult = 0x390;
            static constexpr std::uintptr_t TimeSinceDetachmentCurlCurve = 0x3B8;
            static constexpr std::uintptr_t TimeSinceDetachmentCurlCurve_MaxTime = 0x3C0;
            static constexpr std::uintptr_t CurlingMaxClosenessToBreakage = 0x3E8;
            static constexpr std::uintptr_t SegmentLengths = 0x3F0;
            static constexpr std::uintptr_t Detachments = 0x400;
            static constexpr std::uintptr_t SplineSegments = 0x410;
            static constexpr std::uintptr_t Projectiles_Native = 0x420;
        };

        inline static constexpr std::array<PropertyInfo, 31> Properties{{
            {"PointsPerSegment", 0x278, "IntProperty"},
            {"MaxSegmentLengthBeforeBreak", 0x280, "StructProperty"},
            {"SplineCurveTension", 0x2A8, "FloatProperty"},
            {"MinPointSize", 0x2AC, "FloatProperty"},
            {"MaxPointSize", 0x2B0, "FloatProperty"},
            {"NumPointsAtMinPointSize", 0x2B4, "IntProperty"},
            {"NumPointsAtMaxPointSize", 0x2B8, "IntProperty"},
            {"SplineLengthForSizeCalculation", 0x2BC, "FloatProperty"},
            {"NumPointsToTaperDownSplineEndSize", 0x2C0, "IntProperty"},
            {"MinSplineEndTaperSize", 0x2C4, "FloatProperty"},
            {"TaperSizeAtDetachment_RemapClosenessToBreakageOldMin", 0x2C8, "FloatProperty"},
            {"TaperSizeAtDetachment_RemapClosenessToBreakageOldMax", 0x2CC, "FloatProperty"},
            {"MinPointSizePercentForFlashIntensity", 0x2D0, "FloatProperty"},
            {"MaxPointSizePercentForFlashIntensity", 0x2D4, "FloatProperty"},
            {"PositionsNiagaraParamName", 0x2D8, "NameProperty"},
            {"RibbonIDsNiagaraParamName", 0x2DC, "NameProperty"},
            {"RibbonVisibilitiesNiagaraParamName", 0x2E0, "NameProperty"},
            {"FlashIntensitiesNiagaraParamName", 0x2E4, "NameProperty"},
            {"RibbonSizesNiagaraParamName", 0x2E8, "NameProperty"},
            {"CalculateBaseCurlOffset_MaxSegmentLength", 0x2F0, "StructProperty"},
            {"CalculateBaseCurlOffset_MaxTimeSinceDetachment", 0x318, "StructProperty"},
            {"CalculateBaseCurlOffset_TowardPerpendicularMult", 0x340, "StructProperty"},
            {"CalculateBaseCurlOffset_TowardEndMult", 0x368, "StructProperty"},
            {"CalculateBaseCurlOffset_TowardRandomMult", 0x390, "StructProperty"},
            {"TimeSinceDetachmentCurlCurve", 0x3B8, "ObjectProperty"},
            {"TimeSinceDetachmentCurlCurve_MaxTime", 0x3C0, "StructProperty"},
            {"CurlingMaxClosenessToBreakage", 0x3E8, "FloatProperty"},
            {"SegmentLengths", 0x3F0, "ArrayProperty"},
            {"Detachments", 0x400, "ArrayProperty"},
            {"SplineSegments", 0x410, "ArrayProperty"},
            {"Projectiles_Native", 0x420, "ArrayProperty"},
        }};
    };

}

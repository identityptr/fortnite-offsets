#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::LightPawnRuntime
{
    struct FortAthenaMutator_LightPawn
    {
        static constexpr std::string_view Name = "FortAthenaMutator_LightPawn";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaMutator";
        struct Offsets
        {
            static constexpr std::uintptr_t OverridePawnClass = 0x2E8;
            static constexpr std::uintptr_t HUDElementsToHideForLightPawn = 0x308;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OverridePawnClass", 0x2E8, "SoftClassProperty"},
            {"HUDElementsToHideForLightPawn", 0x308, "StructProperty"},
        }};
    };

    struct FortLightPawnCameraMode
    {
        static constexpr std::string_view Name = "FortLightPawnCameraMode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Fort3PCameraMode";
        struct Offsets
        {
            static constexpr std::uintptr_t ViewOffsets = 0x78;
            static constexpr std::uintptr_t FOV = 0xC0;
            static constexpr std::uintptr_t SafeLocationOffset = 0xC8;
            static constexpr std::uintptr_t bDoPredictiveAvoidance = 0xE0;
            static constexpr std::uintptr_t bPreventPenetration = 0xE0;
            static constexpr std::uintptr_t bValidateSafeLoc = 0xE0;
            static constexpr std::uintptr_t PenetrationAvoidanceFeelers = 0xE8;
            static constexpr std::uintptr_t PenetrationBlendInTime = 0xF8;
            static constexpr std::uintptr_t PenetrationBlendOutTime = 0xFC;
            static constexpr std::uintptr_t PivotLocInterpSpeed = 0x100;
            static constexpr std::uintptr_t PivotRotInterpSpeed = 0x118;
            static constexpr std::uintptr_t FOVInterpSpeed = 0x11C;
            static constexpr std::uintptr_t ViewOffsetInterpSpeed = 0x120;
            static constexpr std::uintptr_t SafeLocationInterpSpeed = 0x124;
            static constexpr std::uintptr_t LastActualViewOffset = 0x128;
            static constexpr std::uintptr_t LastIdealViewOffset = 0x140;
            static constexpr std::uintptr_t LastSafeLocationLocal = 0x158;
            static constexpr std::uintptr_t LastSafeLocation = 0x170;
            static constexpr std::uintptr_t LastSafeLocBlockedPct = 0x188;
            static constexpr std::uintptr_t LastPenetrationBlockedPct = 0x18C;
            static constexpr std::uintptr_t LastActualPivotLoc = 0x190;
            static constexpr std::uintptr_t LastActualPivotRot = 0x1A8;
            static constexpr std::uintptr_t LastIdealPivotLoc = 0x1C0;
            static constexpr std::uintptr_t LastIdealPivotRot = 0x1D8;
        };

        inline static constexpr std::array<PropertyInfo, 24> Properties{{
            {"ViewOffsets", 0x78, "StructProperty"},
            {"FOV", 0xC0, "FloatProperty"},
            {"SafeLocationOffset", 0xC8, "StructProperty"},
            {"bDoPredictiveAvoidance", 0xE0, "BoolProperty"},
            {"bPreventPenetration", 0xE0, "BoolProperty"},
            {"bValidateSafeLoc", 0xE0, "BoolProperty"},
            {"PenetrationAvoidanceFeelers", 0xE8, "ArrayProperty"},
            {"PenetrationBlendInTime", 0xF8, "FloatProperty"},
            {"PenetrationBlendOutTime", 0xFC, "FloatProperty"},
            {"PivotLocInterpSpeed", 0x100, "StructProperty"},
            {"PivotRotInterpSpeed", 0x118, "FloatProperty"},
            {"FOVInterpSpeed", 0x11C, "FloatProperty"},
            {"ViewOffsetInterpSpeed", 0x120, "FloatProperty"},
            {"SafeLocationInterpSpeed", 0x124, "FloatProperty"},
            {"LastActualViewOffset", 0x128, "StructProperty"},
            {"LastIdealViewOffset", 0x140, "StructProperty"},
            {"LastSafeLocationLocal", 0x158, "StructProperty"},
            {"LastSafeLocation", 0x170, "StructProperty"},
            {"LastSafeLocBlockedPct", 0x188, "FloatProperty"},
            {"LastPenetrationBlockedPct", 0x18C, "FloatProperty"},
            {"LastActualPivotLoc", 0x190, "StructProperty"},
            {"LastActualPivotRot", 0x1A8, "StructProperty"},
            {"LastIdealPivotLoc", 0x1C0, "StructProperty"},
            {"LastIdealPivotRot", 0x1D8, "StructProperty"},
        }};
    };

    struct FortLightPawnProxy
    {
        static constexpr std::string_view Name = "FortLightPawnProxy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DefaultPawn";
        struct Offsets
        {
            static constexpr std::uintptr_t bEnableInput = 0x320;
            static constexpr std::uintptr_t CameraModeOverrideComponent = 0x328;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bEnableInput", 0x320, "BoolProperty"},
            {"CameraModeOverrideComponent", 0x328, "ObjectProperty"},
        }};
    };

}

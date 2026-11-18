#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SlipperyMovementCode
{
    struct FortMovementMode_ExtLogicSlipperyMovement
    {
        static constexpr std::string_view Name = "FortMovementMode_ExtLogicSlipperyMovement";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_BaseExtLogic";
        struct Offsets
        {
            static constexpr std::uintptr_t SlipperyItemsTags = 0x1B8;
            static constexpr std::uintptr_t DBNOAllowedInSlipperyMovement = 0x4A8;
            static constexpr std::uintptr_t AllowDBNOTag = 0x4D4;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SlipperyItemsTags", 0x1B8, "StructProperty"},
            {"DBNOAllowedInSlipperyMovement", 0x4A8, "StructProperty"},
            {"AllowDBNOTag", 0x4D4, "StructProperty"},
        }};
    };

    struct FortMovementMode_SlipperyMovementRuntimeData
    {
        static constexpr std::string_view Name = "FortMovementMode_SlipperyMovementRuntimeData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_BaseExtRuntimeData";
        struct Offsets
        {
            static constexpr std::uintptr_t LogicID = 0x28;
            static constexpr std::uintptr_t RuntimeID = 0x2C;
            static constexpr std::uintptr_t bForceManualActivation = 0x2D;
            static constexpr std::uintptr_t bForceManualEnd = 0x2E;
            static constexpr std::uintptr_t bForceManualActivationNetworked = 0x2F;
            static constexpr std::uintptr_t bForceManualEndNetworked = 0x30;
            static constexpr std::uintptr_t EndReasonFlags = 0x31;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"LogicID", 0x28, "StructProperty"},
            {"RuntimeID", 0x2C, "ByteProperty"},
            {"bForceManualActivation", 0x2D, "BoolProperty"},
            {"bForceManualEnd", 0x2E, "BoolProperty"},
            {"bForceManualActivationNetworked", 0x2F, "BoolProperty"},
            {"bForceManualEndNetworked", 0x30, "BoolProperty"},
            {"EndReasonFlags", 0x31, "ByteProperty"},
        }};
    };

    struct FortPawnComponent_SlipperyMovement
    {
        static constexpr std::string_view Name = "FortPawnComponent_SlipperyMovement";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PawnComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t SlipperySlopeParams = 0xC8;
            static constexpr std::uintptr_t SlipperyItemsTags = 0x348;
            static constexpr std::uintptr_t MovementModeExtension = 0x368;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SlipperySlopeParams", 0xC8, "StructProperty"},
            {"SlipperyItemsTags", 0x348, "StructProperty"},
            {"MovementModeExtension", 0x368, "ClassProperty"},
        }};
    };

}

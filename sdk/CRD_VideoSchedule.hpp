#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::CRD_VideoSchedule
{
    struct VideoScheduleDeviceBase
    {
        static constexpr std::string_view Name = "VideoScheduleDeviceBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BuildingProp";
        struct Offsets
        {
            static constexpr std::uintptr_t RepeatSchedule = 0xB90;
            static constexpr std::uintptr_t AbsoluteSchedule = 0xB98;
            static constexpr std::uintptr_t DailySchedule = 0xBA8;
            static constexpr std::uintptr_t HourlySchedule = 0xBB8;
            static constexpr std::uintptr_t bFillSchedule = 0xBC8;
            static constexpr std::uintptr_t FillScheduleGap = 0xBCC;
            static constexpr std::uintptr_t FillScheduleAlign = 0xBD0;
            static constexpr std::uintptr_t SimpleSchedule = 0xBD8;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"RepeatSchedule", 0xB90, "EnumProperty"},
            {"AbsoluteSchedule", 0xB98, "ArrayProperty"},
            {"DailySchedule", 0xBA8, "ArrayProperty"},
            {"HourlySchedule", 0xBB8, "ArrayProperty"},
            {"bFillSchedule", 0xBC8, "BoolProperty"},
            {"FillScheduleGap", 0xBCC, "IntProperty"},
            {"FillScheduleAlign", 0xBD0, "IntProperty"},
            {"SimpleSchedule", 0xBD8, "StrProperty"},
        }};
    };

}

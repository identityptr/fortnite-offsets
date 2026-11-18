#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::ComputeDataInterface
{
    struct BufferDataProvider
    {
        static constexpr std::string_view Name = "BufferDataProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ComputeDataProvider";
        struct Offsets
        {
            static constexpr std::uintptr_t ValueType = 0x28;
            static constexpr std::uintptr_t ElementCount = 0x2C;
            static constexpr std::uintptr_t bClearBeforeUse = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ValueType", 0x28, "EnumProperty"},
            {"ElementCount", 0x2C, "IntProperty"},
            {"bClearBeforeUse", 0x30, "BoolProperty"},
        }};
    };

    struct ComputeDataInterfaceBuffer
    {
        static constexpr std::string_view Name = "ComputeDataInterfaceBuffer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ComputeDataInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t ValueType = 0x28;
            static constexpr std::uintptr_t bAllowReadWrite = 0x29;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ValueType", 0x28, "EnumProperty"},
            {"bAllowReadWrite", 0x29, "BoolProperty"},
        }};
    };

    struct ComputeDataInterfaceDispatch
    {
        static constexpr std::string_view Name = "ComputeDataInterfaceDispatch";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ComputeDataInterface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DispatchDataProvider
    {
        static constexpr std::string_view Name = "DispatchDataProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ComputeDataProvider";
        struct Offsets
        {
            static constexpr std::uintptr_t ThreadCount = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ThreadCount", 0x28, "StructProperty"},
        }};
    };

}

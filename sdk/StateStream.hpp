#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::StateStream
{
    struct StateStreamHandle
    {
        static constexpr std::string_view Name = "StateStreamHandle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct TransformDynamicState
    {
        static constexpr std::string_view Name = "TransformDynamicState";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t LocalTransform = 0x10;
            static constexpr std::uintptr_t BoneTransforms = 0x70;
            static constexpr std::uintptr_t Parent = 0x80;
            static constexpr std::uintptr_t bVisible = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"LocalTransform", 0x10, "StructProperty"},
            {"BoneTransforms", 0x70, "ArrayProperty"},
            {"Parent", 0x80, "StructProperty"},
            {"bVisible", 0x90, "BoolProperty"},
        }};
    };

    struct TransformHandle
    {
        static constexpr std::string_view Name = "TransformHandle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "StateStreamHandle";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct TransformStaticState
    {
        static constexpr std::string_view Name = "TransformStaticState";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}

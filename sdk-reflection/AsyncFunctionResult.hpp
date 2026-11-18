#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::AsyncFunctionResult
{
    struct AsyncFunctionResult
    {
        static constexpr std::string_view Name = "AsyncFunctionResult";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsComplete = 0x28;
            static constexpr std::uintptr_t OnCompleted = 0x30;
            static constexpr std::uintptr_t Error = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bIsComplete", 0x28, "BoolProperty"},
            {"OnCompleted", 0x30, "MulticastInlineDelegateProperty"},
            {"Error", 0x40, "StrProperty"},
        }};
    };

    struct AsyncFunctionResultBool
    {
        static constexpr std::string_view Name = "AsyncFunctionResultBool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AsyncFunctionResult";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x88, "BoolProperty"},
        }};
    };

    struct AsyncFunctionResultFloat
    {
        static constexpr std::string_view Name = "AsyncFunctionResultFloat";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AsyncFunctionResult";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x88, "DoubleProperty"},
        }};
    };

    struct AsyncFunctionResultFutureHandler
    {
        static constexpr std::string_view Name = "AsyncFunctionResultFutureHandler";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AsyncFunctionResultInt
    {
        static constexpr std::string_view Name = "AsyncFunctionResultInt";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AsyncFunctionResult";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x88, "IntProperty"},
        }};
    };

    struct AsyncFunctionResultJson
    {
        static constexpr std::string_view Name = "AsyncFunctionResultJson";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AsyncFunctionResult";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsComplete = 0x28;
            static constexpr std::uintptr_t OnCompleted = 0x30;
            static constexpr std::uintptr_t Error = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bIsComplete", 0x28, "BoolProperty"},
            {"OnCompleted", 0x30, "MulticastInlineDelegateProperty"},
            {"Error", 0x40, "StrProperty"},
        }};
    };

    struct AsyncFunctionResultJsonTestStub
    {
        static constexpr std::string_view Name = "AsyncFunctionResultJsonTestStub";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AsyncFunctionResultJson";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsComplete = 0x28;
            static constexpr std::uintptr_t OnCompleted = 0x30;
            static constexpr std::uintptr_t Error = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bIsComplete", 0x28, "BoolProperty"},
            {"OnCompleted", 0x30, "MulticastInlineDelegateProperty"},
            {"Error", 0x40, "StrProperty"},
        }};
    };

    struct AsyncFunctionResultString
    {
        static constexpr std::string_view Name = "AsyncFunctionResultString";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AsyncFunctionResult";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x88, "StrProperty"},
        }};
    };

    struct AsyncFunctionResultVoid
    {
        static constexpr std::string_view Name = "AsyncFunctionResultVoid";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AsyncFunctionResult";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsComplete = 0x28;
            static constexpr std::uintptr_t OnCompleted = 0x30;
            static constexpr std::uintptr_t Error = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bIsComplete", 0x28, "BoolProperty"},
            {"OnCompleted", 0x30, "MulticastInlineDelegateProperty"},
            {"Error", 0x40, "StrProperty"},
        }};
    };

}

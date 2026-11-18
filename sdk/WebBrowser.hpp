#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::WebBrowser
{
    struct CEFCapturedFrame
    {
        static constexpr std::string_view Name = "CEFCapturedFrame";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct WebJSCallbackBase
    {
        static constexpr std::string_view Name = "WebJSCallbackBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct WebJSFunction
    {
        static constexpr std::string_view Name = "WebJSFunction";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "WebJSCallbackBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct WebJSResponse
    {
        static constexpr std::string_view Name = "WebJSResponse";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "WebJSCallbackBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}

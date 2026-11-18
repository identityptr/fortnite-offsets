#pragma once
#include <cstdint>
#include <string_view>

namespace FN::SDK
{
    struct PropertyInfo
    {
        std::string_view name;
        std::uintptr_t offset;
        std::string_view kind;
    };
}

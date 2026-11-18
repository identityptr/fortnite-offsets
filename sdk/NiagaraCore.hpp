#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::NiagaraCore
{
    struct NiagaraCompileHash
    {
        static constexpr std::string_view Name = "NiagaraCompileHash";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t DataHash = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DataHash", 0x0, "ArrayProperty"},
        }};
    };

    struct NiagaraDataInterfaceBase
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraNotifyOnChanged";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct NiagaraMergeable
    {
        static constexpr std::string_view Name = "NiagaraMergeable";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraNotifyOnChanged";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct NiagaraNotifyOnChanged
    {
        static constexpr std::string_view Name = "NiagaraNotifyOnChanged";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct NiagaraVariableCommonReference
    {
        static constexpr std::string_view Name = "NiagaraVariableCommonReference";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
            static constexpr std::uintptr_t UnderlyingType = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Name", 0x0, "NameProperty"},
            {"UnderlyingType", 0x8, "ObjectProperty"},
        }};
    };

}

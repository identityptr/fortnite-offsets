#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::MassEntity
{
    struct MassEntitySettings
    {
        static constexpr std::string_view Name = "MassEntitySettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassModuleSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t ChunkMemorySize = 0x28;
            static constexpr std::uintptr_t DumpDependencyGraphFileName = 0x30;
            static constexpr std::uintptr_t ProcessingPhasesConfig = 0x40;
            static constexpr std::uintptr_t ProcessorCDOs = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ChunkMemorySize", 0x28, "UInt32Property"},
            {"DumpDependencyGraphFileName", 0x30, "StrProperty"},
            {"ProcessingPhasesConfig", 0x40, "StructProperty"},
            {"ProcessorCDOs", 0x100, "ArrayProperty"},
        }};
    };

    struct MassEntitySubsystem
    {
        static constexpr std::string_view Name = "MassEntitySubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassSubsystemBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MassModuleSettings
    {
        static constexpr std::string_view Name = "MassModuleSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MassProcessingPhaseConfig
    {
        static constexpr std::string_view Name = "MassProcessingPhaseConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t PhaseName = 0x0;
            static constexpr std::uintptr_t PhaseGroupClass = 0x8;
            static constexpr std::uintptr_t ProcessorCDOs = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"PhaseName", 0x0, "NameProperty"},
            {"PhaseGroupClass", 0x8, "ClassProperty"},
            {"ProcessorCDOs", 0x10, "ArrayProperty"},
        }};
    };

    struct MassSettings
    {
        static constexpr std::string_view Name = "MassSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeveloperSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t ModuleSettings = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ModuleSettings", 0x30, "MapProperty"},
        }};
    };

    struct MassSubsystemBase
    {
        static constexpr std::string_view Name = "MassSubsystemBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MassTickableSubsystemBase
    {
        static constexpr std::string_view Name = "MassTickableSubsystemBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TickableWorldSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}

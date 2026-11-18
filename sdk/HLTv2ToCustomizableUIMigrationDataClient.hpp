#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::HLTv2ToCustomizableUIMigrationDataClient
{
    struct HLTv2MigrationDatabase
    {
        static constexpr std::string_view Name = "HLTv2MigrationDatabase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t HLTPresetWidgetToCustomizableWidget = 0x28;
            static constexpr std::uintptr_t HLTAvailableWidgetToCustomizableWidget = 0x38;
            static constexpr std::uintptr_t CustomizableWidgetToHLTAvailableWidget = 0x48;
            static constexpr std::uintptr_t AvailableAdditionalInstancesForPresetWidget = 0x58;
            static constexpr std::uintptr_t AvailableAdditionalInstancesForAvailableWidget = 0x68;
            static constexpr std::uintptr_t HLTWidgetClassToCustomizableWidgetClasses = 0x78;
            static constexpr std::uintptr_t MigratedCustomLayoutConsumers = 0x88;
            static constexpr std::uintptr_t MigratedDynamicUIScenes = 0x98;
            static constexpr std::uintptr_t MigratedSharedScenes = 0xA8;
            static constexpr std::uintptr_t CustomizableWidgetToHLTPresetWidget = 0xB8;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"HLTPresetWidgetToCustomizableWidget", 0x28, "MapProperty"},
            {"HLTAvailableWidgetToCustomizableWidget", 0x38, "MapProperty"},
            {"CustomizableWidgetToHLTAvailableWidget", 0x48, "MapProperty"},
            {"AvailableAdditionalInstancesForPresetWidget", 0x58, "MapProperty"},
            {"AvailableAdditionalInstancesForAvailableWidget", 0x68, "MapProperty"},
            {"HLTWidgetClassToCustomizableWidgetClasses", 0x78, "MapProperty"},
            {"MigratedCustomLayoutConsumers", 0x88, "MapProperty"},
            {"MigratedDynamicUIScenes", 0x98, "MapProperty"},
            {"MigratedSharedScenes", 0xA8, "ArrayProperty"},
            {"CustomizableWidgetToHLTPresetWidget", 0xB8, "MapProperty"},
        }};
    };

    struct HLTv2ToCustomizableUIMigrationDatabaseBuilder
    {
        static constexpr std::string_view Name = "HLTv2ToCustomizableUIMigrationDatabaseBuilder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}

#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::JunoPowerSystemRuntime
{
    struct JunoPowerBank
    {
        static constexpr std::string_view Name = "JunoPowerBank";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoBuildingActor";
        struct Offsets
        {
            static constexpr std::uintptr_t InventoryComponent = 0xC48;
            static constexpr std::uintptr_t PowerManager = 0xC50;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"InventoryComponent", 0xC48, "ObjectProperty"},
            {"PowerManager", 0xC50, "ObjectProperty"},
        }};
    };

    struct JunoPowerCenter
    {
        static constexpr std::string_view Name = "JunoPowerCenter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoBuildingParentBase";
        struct Offsets
        {
            static constexpr std::uintptr_t OnMaxPowerCapacityChanged = 0xC68;
            static constexpr std::uintptr_t PowerConsumed = 0xC78;
            static constexpr std::uintptr_t InventoryComponent = 0xC80;
            static constexpr std::uintptr_t PowerItemDef = 0xC88;
            static constexpr std::uintptr_t PowerManager = 0xC90;
            static constexpr std::uintptr_t CurrentPowerItemGUID = 0xC98;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"OnMaxPowerCapacityChanged", 0xC68, "MulticastInlineDelegateProperty"},
            {"PowerConsumed", 0xC78, "FloatProperty"},
            {"InventoryComponent", 0xC80, "ObjectProperty"},
            {"PowerItemDef", 0xC88, "ObjectProperty"},
            {"PowerManager", 0xC90, "ObjectProperty"},
            {"CurrentPowerItemGUID", 0xC98, "StructProperty"},
        }};
    };

    struct JunoPowerConsumerComponent
    {
        static constexpr std::string_view Name = "JunoPowerConsumerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFrameworkComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PowerRequired_Curve = 0xC0;
            static constexpr std::uintptr_t PowerRequired = 0xD0;
            static constexpr std::uintptr_t ConsumptionInterval = 0xD8;
            static constexpr std::uintptr_t ConsumerChannelTags = 0x100;
            static constexpr std::uintptr_t PowerManager = 0x120;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"PowerRequired_Curve", 0xC0, "StructProperty"},
            {"PowerRequired", 0xD0, "FloatProperty"},
            {"ConsumptionInterval", 0xD8, "StructProperty"},
            {"ConsumerChannelTags", 0x100, "StructProperty"},
            {"PowerManager", 0x120, "WeakObjectProperty"},
        }};
    };

    struct JunoPowerManagerComponent
    {
        static constexpr std::string_view Name = "JunoPowerManagerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFrameworkComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnStartConsumingPowerEvent = 0xD8;
            static constexpr std::uintptr_t OnStartConsumingPowerFailedEvent = 0xE8;
            static constexpr std::uintptr_t OnStopConsumingPowerEvent = 0xF8;
            static constexpr std::uintptr_t AttachedPowerCenters = 0x108;
            static constexpr std::uintptr_t AttachedPowerBanks = 0x118;
            static constexpr std::uintptr_t ConsumerChannelPowers = 0x128;
            static constexpr std::uintptr_t CurrentPowerCenter = 0x138;
            static constexpr std::uintptr_t InfinitePowerSourceSet = 0x140;
            static constexpr std::uintptr_t bHasInfinitePower = 0x150;
            static constexpr std::uintptr_t bIsConsumingPower = 0x150;
            static constexpr std::uintptr_t bIsNoPowerAudioQueued = 0x15C;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"OnStartConsumingPowerEvent", 0xD8, "MulticastInlineDelegateProperty"},
            {"OnStartConsumingPowerFailedEvent", 0xE8, "MulticastInlineDelegateProperty"},
            {"OnStopConsumingPowerEvent", 0xF8, "MulticastInlineDelegateProperty"},
            {"AttachedPowerCenters", 0x108, "ArrayProperty"},
            {"AttachedPowerBanks", 0x118, "ArrayProperty"},
            {"ConsumerChannelPowers", 0x128, "ArrayProperty"},
            {"CurrentPowerCenter", 0x138, "WeakObjectProperty"},
            {"InfinitePowerSourceSet", 0x140, "SetProperty"},
            {"bHasInfinitePower", 0x150, "BoolProperty"},
            {"bIsConsumingPower", 0x150, "BoolProperty"},
            {"bIsNoPowerAudioQueued", 0x15C, "BoolProperty"},
        }};
    };

    struct JunoPowerSystemLibrary
    {
        static constexpr std::string_view Name = "JunoPowerSystemLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}

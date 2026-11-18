#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FortAthenaVehicleAudioRuntime
{
    struct FortAthenaVehicleAudioController
    {
        static constexpr std::string_view Name = "FortAthenaVehicleAudioController";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "VehicleAudioController";
        struct Offsets
        {
            static constexpr std::uintptr_t CurrentSignificance = 0x314;
            static constexpr std::uintptr_t bListenerInRange = 0x318;
            static constexpr std::uintptr_t bForceUpdatePastListenerRange = 0x319;
            static constexpr std::uintptr_t bRedlineAllowed = 0x31A;
            static constexpr std::uintptr_t JitterTime = 0x31C;
            static constexpr std::uintptr_t VehicleBase = 0x320;
            static constexpr std::uintptr_t PhysicsVehicleConfigs = 0x328;
            static constexpr std::uintptr_t VehicleCollisionAudioConfig = 0x330;
            static constexpr std::uintptr_t LayeredAudioComponent = 0x388;
            static constexpr std::uintptr_t AudioParameterComponent = 0x390;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"CurrentSignificance", 0x314, "IntProperty"},
            {"bListenerInRange", 0x318, "BoolProperty"},
            {"bForceUpdatePastListenerRange", 0x319, "BoolProperty"},
            {"bRedlineAllowed", 0x31A, "BoolProperty"},
            {"JitterTime", 0x31C, "FloatProperty"},
            {"VehicleBase", 0x320, "ObjectProperty"},
            {"PhysicsVehicleConfigs", 0x328, "ObjectProperty"},
            {"VehicleCollisionAudioConfig", 0x330, "OptionalProperty"},
            {"LayeredAudioComponent", 0x388, "ObjectProperty"},
            {"AudioParameterComponent", 0x390, "ObjectProperty"},
        }};
    };

    struct FortAthenaVehicleSoundComponent
    {
        static constexpr std::string_view Name = "FortAthenaVehicleSoundComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortVehicleSoundComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t AudioController = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AudioController", 0xE0, "WeakObjectProperty"},
        }};
    };

    struct FortAthenaVehicleSoundComponent_Boost
    {
        static constexpr std::string_view Name = "FortAthenaVehicleSoundComponent_Boost";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaVehicleSoundComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t Context = 0xE8;
            static constexpr std::uintptr_t VehicleAudioComponentGroup = 0x118;
            static constexpr std::uintptr_t PlayingComponent = 0x120;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Context", 0xE8, "StructProperty"},
            {"VehicleAudioComponentGroup", 0x118, "ObjectProperty"},
            {"PlayingComponent", 0x120, "ObjectProperty"},
        }};
    };

    struct FortAthenaVehicleSoundComponent_DamageState
    {
        static constexpr std::string_view Name = "FortAthenaVehicleSoundComponent_DamageState";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaVehicleSoundComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t Context = 0xE8;
            static constexpr std::uintptr_t VehicleAudioComponentGroup = 0x108;
            static constexpr std::uintptr_t ScrapingAudioComponent = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Context", 0xE8, "StructProperty"},
            {"VehicleAudioComponentGroup", 0x108, "ObjectProperty"},
            {"ScrapingAudioComponent", 0x110, "ObjectProperty"},
        }};
    };

    struct FortAthenaVehicleSoundComponent_Speed
    {
        static constexpr std::string_view Name = "FortAthenaVehicleSoundComponent_Speed";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaVehicleSoundComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t Speed = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Speed", 0xE8, "StructProperty"},
        }};
    };

    struct FortAthenaVehicleSoundComponent_Surface
    {
        static constexpr std::string_view Name = "FortAthenaVehicleSoundComponent_Surface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaVehicleSoundComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t Context = 0xE8;
            static constexpr std::uintptr_t NativeSurfaceAudio1 = 0x220;
            static constexpr std::uintptr_t NativeSurfaceAudio2 = 0x228;
            static constexpr std::uintptr_t BrakeAudioComponent = 0x230;
            static constexpr std::uintptr_t VehicleAudioComponentGroup = 0x238;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Context", 0xE8, "StructProperty"},
            {"NativeSurfaceAudio1", 0x220, "ObjectProperty"},
            {"NativeSurfaceAudio2", 0x228, "ObjectProperty"},
            {"BrakeAudioComponent", 0x230, "ObjectProperty"},
            {"VehicleAudioComponentGroup", 0x238, "ObjectProperty"},
        }};
    };

    struct FortVehicleAudioControllerUpdater_Significance
    {
        static constexpr std::string_view Name = "FortVehicleAudioControllerUpdater_Significance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortVehicleAudioControllerUpdater";
        struct Offsets
        {
            static constexpr std::uintptr_t LODBucketCap = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"LODBucketCap", 0x28, "IntProperty"},
        }};
    };

}

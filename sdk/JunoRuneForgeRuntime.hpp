#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::JunoRuneForgeRuntime
{
    struct JunoControllerComponent_RuneRoll
    {
        static constexpr std::string_view Name = "JunoControllerComponent_RuneRoll";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnRuneRollChanged = 0xD0;
            static constexpr std::uintptr_t OnRuneRollDenied = 0xE0;
            static constexpr std::uintptr_t CurrentRoll = 0xF0;
            static constexpr std::uintptr_t RuneRollSettings = 0x110;
            static constexpr std::uintptr_t WaitForRootPlayspace = 0x130;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"OnRuneRollChanged", 0xD0, "MulticastInlineDelegateProperty"},
            {"OnRuneRollDenied", 0xE0, "MulticastInlineDelegateProperty"},
            {"CurrentRoll", 0xF0, "StructProperty"},
            {"RuneRollSettings", 0x110, "StructProperty"},
            {"WaitForRootPlayspace", 0x130, "ObjectProperty"},
        }};
    };

    struct JunoPlayerRuneRollPersistenceComponent
    {
        static constexpr std::string_view Name = "JunoPlayerRuneRollPersistenceComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayspaceComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnMeshNetworkReady_BP = 0xC0;
            static constexpr std::uintptr_t OnMeshNetworkEventBurst_BP = 0xD0;
            static constexpr std::uintptr_t OnMeshNetworkEventStart_BP = 0xE0;
            static constexpr std::uintptr_t OnMeshNetworkEventChange_BP = 0xF0;
            static constexpr std::uintptr_t OnMeshNetworkEventEnd_BP = 0x100;
            static constexpr std::uintptr_t bSubscribeToMeshNetwork = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"OnMeshNetworkReady_BP", 0xC0, "MulticastInlineDelegateProperty"},
            {"OnMeshNetworkEventBurst_BP", 0xD0, "MulticastInlineDelegateProperty"},
            {"OnMeshNetworkEventStart_BP", 0xE0, "MulticastInlineDelegateProperty"},
            {"OnMeshNetworkEventChange_BP", 0xF0, "MulticastInlineDelegateProperty"},
            {"OnMeshNetworkEventEnd_BP", 0x100, "MulticastInlineDelegateProperty"},
            {"bSubscribeToMeshNetwork", 0x110, "BoolProperty"},
        }};
    };

    struct JunoPlayerRuneRollPersistenceFeatureModule
    {
        static constexpr std::string_view Name = "JunoPlayerRuneRollPersistenceFeatureModule";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PersistenceFrameworkModule";
        struct Offsets
        {
            static constexpr std::uintptr_t GameplayTagContainer = 0x28;
            static constexpr std::uintptr_t Containers = 0x48;
            static constexpr std::uintptr_t ServiceData = 0x58;
            static constexpr std::uintptr_t PersistentName = 0x60;
            static constexpr std::uintptr_t MakeReadyForPersistenceProcess = 0x70;
            static constexpr std::uintptr_t bMakeReadyForPersistenceProcessFailedOnLastAttempt = 0x78;
            static constexpr std::uintptr_t DeinitProcess = 0x80;
            static constexpr std::uintptr_t Description = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"GameplayTagContainer", 0x28, "StructProperty"},
            {"Containers", 0x48, "MapProperty"},
            {"ServiceData", 0x58, "ObjectProperty"},
            {"PersistentName", 0x60, "StrProperty"},
            {"MakeReadyForPersistenceProcess", 0x70, "ObjectProperty"},
            {"bMakeReadyForPersistenceProcessFailedOnLastAttempt", 0x78, "BoolProperty"},
            {"DeinitProcess", 0x80, "ObjectProperty"},
            {"Description", 0x88, "StrProperty"},
        }};
    };

}

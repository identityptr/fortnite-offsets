#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::CharacterCore
{
    struct CharacterNativeCameraGlueComponent
    {
        static constexpr std::string_view Name = "CharacterNativeCameraGlueComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PrimaryComponentTick = 0x38;
            static constexpr std::uintptr_t ComponentTags = 0x68;
            static constexpr std::uintptr_t AssetUserData = 0x78;
            static constexpr std::uintptr_t UCSSerializationIndex = 0x90;
            static constexpr std::uintptr_t bNetAddressable = 0x98;
            static constexpr std::uintptr_t bReplicateUsingRegisteredSubObjectList = 0x98;
            static constexpr std::uintptr_t bReplicates = 0x98;
            static constexpr std::uintptr_t bAutoActivate = 0x9A;
            static constexpr std::uintptr_t bCanEverAffectNavigation = 0x9A;
            static constexpr std::uintptr_t bEditableWhenInherited = 0x9A;
            static constexpr std::uintptr_t bIsActive = 0x9A;
            static constexpr std::uintptr_t bIsEditorOnly = 0x9B;
            static constexpr std::uintptr_t CreationMethod = 0xB9;
            static constexpr std::uintptr_t OnComponentActivated = 0xBA;
            static constexpr std::uintptr_t OnComponentDeactivated = 0xBB;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"PrimaryComponentTick", 0x38, "StructProperty"},
            {"ComponentTags", 0x68, "ArrayProperty"},
            {"AssetUserData", 0x78, "ArrayProperty"},
            {"UCSSerializationIndex", 0x90, "IntProperty"},
            {"bNetAddressable", 0x98, "BoolProperty"},
            {"bReplicateUsingRegisteredSubObjectList", 0x98, "BoolProperty"},
            {"bReplicates", 0x98, "BoolProperty"},
            {"bAutoActivate", 0x9A, "BoolProperty"},
            {"bCanEverAffectNavigation", 0x9A, "BoolProperty"},
            {"bEditableWhenInherited", 0x9A, "BoolProperty"},
            {"bIsActive", 0x9A, "BoolProperty"},
            {"bIsEditorOnly", 0x9B, "BoolProperty"},
            {"CreationMethod", 0xB9, "EnumProperty"},
            {"OnComponentActivated", 0xBA, "MulticastSparseDelegateProperty"},
            {"OnComponentDeactivated", 0xBB, "MulticastSparseDelegateProperty"},
        }};
    };

    struct NetworkPhysicsEntityOwner
    {
        static constexpr std::string_view Name = "NetworkPhysicsEntityOwner";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct VerseCharacterChaosMoverDummyActor
    {
        static constexpr std::string_view Name = "VerseCharacterChaosMoverDummyActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t InputsToNetworkOwner = 0x2B8;
            static constexpr std::uintptr_t MoverComp = 0x2C0;
            static constexpr std::uintptr_t VerseEntity = 0x2C8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"InputsToNetworkOwner", 0x2B8, "UInt16Property"},
            {"MoverComp", 0x2C0, "ObjectProperty"},
            {"VerseEntity", 0x2C8, "ObjectProperty"},
        }};
    };

    struct VerseCharacterMoverBackend
    {
        static constexpr std::string_view Name = "VerseCharacterMoverBackend";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChaosMoverBackend";
        struct Offsets
        {
            static constexpr std::uintptr_t NetworkPhysicsComponent = 0x40;
            static constexpr std::uintptr_t NullMovementMode = 0x68;
            static constexpr std::uintptr_t ImmediateModeTransition = 0x70;
            static constexpr std::uintptr_t Simulation = 0x78;
            static constexpr std::uintptr_t UpdatedObjectOverride = 0x6C8;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"NetworkPhysicsComponent", 0x40, "ObjectProperty"},
            {"NullMovementMode", 0x68, "ObjectProperty"},
            {"ImmediateModeTransition", 0x70, "ObjectProperty"},
            {"Simulation", 0x78, "ObjectProperty"},
            {"UpdatedObjectOverride", 0x6C8, "InterfaceProperty"},
        }};
    };

    struct VerseCharacterMoverComponent
    {
        static constexpr std::string_view Name = "VerseCharacterMoverComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChaosCharacterMoverComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t Backend = 0xB18;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Backend", 0xB18, "ObjectProperty"},
        }};
    };

}

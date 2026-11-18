#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::DeltaFileSystem
{
    struct AddAction
    {
        static constexpr std::string_view Name = "AddAction";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DeltaAction";
        struct Offsets
        {
            static constexpr std::uintptr_t ActorClass = 0x20;
            static constexpr std::uintptr_t JsonStringObjectForPropertyData = 0x40;
            static constexpr std::uintptr_t Transform = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ActorClass", 0x20, "SoftClassProperty"},
            {"JsonStringObjectForPropertyData", 0x40, "StrProperty"},
            {"Transform", 0x50, "StructProperty"},
        }};
    };

    struct DeleteAction
    {
        static constexpr std::string_view Name = "DeleteAction";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DeltaAction";
        struct Offsets
        {
            static constexpr std::uintptr_t ActorName = 0x20;
            static constexpr std::uintptr_t Transform = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ActorName", 0x20, "StrProperty"},
            {"Transform", 0x30, "StructProperty"},
        }};
    };

    struct DeltaAction
    {
        static constexpr std::string_view Name = "DeltaAction";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ActorGuid = 0x0;
            static constexpr std::uintptr_t CommitTime = 0x10;
            static constexpr std::uintptr_t DataHash = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ActorGuid", 0x0, "StructProperty"},
            {"CommitTime", 0x10, "StructProperty"},
            {"DataHash", 0x18, "UInt32Property"},
        }};
    };

    struct DeltaComponent
    {
        static constexpr std::string_view Name = "DeltaComponent";
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

    struct DeltaFile
    {
        static constexpr std::string_view Name = "DeltaFile";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DeltaFileApplier
    {
        static constexpr std::string_view Name = "DeltaFileApplier";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DeltaFileSaveHandler
    {
        static constexpr std::string_view Name = "DeltaFileSaveHandler";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DeltaFileSaveHandlerTestContext
    {
        static constexpr std::string_view Name = "DeltaFileSaveHandlerTestContext";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t SaveHandler = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SaveHandler", 0x28, "ObjectProperty"},
        }};
    };

    struct DeltaFileSubsystem
    {
        static constexpr std::string_view Name = "DeltaFileSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EngineSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t WorldToTrackingHandles = 0x30;
            static constexpr std::uintptr_t DeltaFiles = 0x40;
            static constexpr std::uintptr_t ActiveAsyncDeltaFileAppliers = 0x50;
            static constexpr std::uintptr_t DefaultDeltaFileClass = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"WorldToTrackingHandles", 0x30, "MapProperty"},
            {"DeltaFiles", 0x40, "MapProperty"},
            {"ActiveAsyncDeltaFileAppliers", 0x50, "ArrayProperty"},
            {"DefaultDeltaFileClass", 0x60, "StructProperty"},
        }};
    };

    struct DeltaTrackingHandles
    {
        static constexpr std::string_view Name = "DeltaTrackingHandles";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MapDelta
    {
        static constexpr std::string_view Name = "MapDelta";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t PackageToApplyTo = 0x30;
            static constexpr std::uintptr_t AddActions = 0x40;
            static constexpr std::uintptr_t UpdateActions = 0x50;
            static constexpr std::uintptr_t DeleteActions = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"PackageToApplyTo", 0x30, "StrProperty"},
            {"AddActions", 0x40, "MapProperty"},
            {"UpdateActions", 0x50, "ArrayProperty"},
            {"DeleteActions", 0x60, "MapProperty"},
        }};
    };

    struct MapDeltaApplier
    {
        static constexpr std::string_view Name = "MapDeltaApplier";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct UpdateAction
    {
        static constexpr std::string_view Name = "UpdateAction";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DeltaAction";
        struct Offsets
        {
            static constexpr std::uintptr_t JsonStringObjectForPropertyData = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"JsonStringObjectForPropertyData", 0x20, "StrProperty"},
        }};
    };

}

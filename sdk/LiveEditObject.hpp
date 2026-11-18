#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::LiveEditObject
{
    struct LiveEditActorUtils
    {
        static constexpr std::string_view Name = "LiveEditActorUtils";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 6> FunctionNames{{
            "ActorAttachmentChanged",
            "ActorComponentCreated",
            "ActorComponentDestroyed",
            "ActorCreated",
            "ActorDestroyed",
            "ActorTransformChanged",
        }};
    };

    struct LiveEditEntityUtils
    {
        static constexpr std::string_view Name = "LiveEditEntityUtils";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct LiveEditLargeNetworkMessageChannel
    {
        static constexpr std::string_view Name = "LiveEditLargeNetworkMessageChannel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LiveEditNetworkStreamChannel";
        struct Offsets
        {
            static constexpr std::uintptr_t Connection = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Connection", 0x28, "ObjectProperty"},
        }};
    };

    struct LiveEditNetworkStreamChannel
    {
        static constexpr std::string_view Name = "LiveEditNetworkStreamChannel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Channel";
        struct Offsets
        {
            static constexpr std::uintptr_t Connection = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Connection", 0x28, "ObjectProperty"},
        }};
    };

    struct LiveEditObjectChannel
    {
        static constexpr std::string_view Name = "LiveEditObjectChannel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LiveEditLargeNetworkMessageChannel";
        struct Offsets
        {
            static constexpr std::uintptr_t Connection = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Connection", 0x28, "ObjectProperty"},
        }};
    };

    struct LiveEditObjectConnection
    {
        static constexpr std::string_view Name = "LiveEditObjectConnection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct LiveEditObjectDataStream
    {
        static constexpr std::string_view Name = "LiveEditObjectDataStream";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChunkedDataStream";
        struct Offsets
        {
            static constexpr std::uintptr_t PackageMap = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PackageMap", 0x58, "ObjectProperty"},
        }};
    };

    struct LiveEditObjectInterface
    {
        static constexpr std::string_view Name = "LiveEditObjectInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 3> FunctionNames{{
            "OnPostPropertiesLiveEdited",
            "OnPrePropertiesLiveEdited",
            "PushInitialStateToLiveEdit",
        }};
    };

    struct LiveEditObjectSubsystem
    {
        static constexpr std::string_view Name = "LiveEditObjectSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EngineSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxBytesQueuedForReplication = 0x38;
            static constexpr std::uintptr_t NumPackageMapBunchesToDelayTickFor = 0x3C;
            static constexpr std::uintptr_t NetDriverStates = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"MaxBytesQueuedForReplication", 0x38, "IntProperty"},
            {"NumPackageMapBunchesToDelayTickFor", 0x3C, "IntProperty"},
            {"NetDriverStates", 0x40, "ArrayProperty"},
        }};
    };

    struct LiveEditObjectSubsystemState
    {
        static constexpr std::string_view Name = "LiveEditObjectSubsystemState";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Connections = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Connections", 0x38, "ArrayProperty"},
        }};
    };

    struct LiveEditObjectTestObject
    {
        static constexpr std::string_view Name = "LiveEditObjectTestObject";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t int32 = 0x28;
            static constexpr std::uintptr_t StructProperty = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"int32", 0x28, "IntProperty"},
            {"StructProperty", 0x38, "StructProperty"},
        }};
    };

    struct LiveEditObjectTestStruct
    {
        static constexpr std::string_view Name = "LiveEditObjectTestStruct";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bool_ = 0x0;
            static constexpr std::uintptr_t int8 = 0x1;
            static constexpr std::uintptr_t int16 = 0x2;
            static constexpr std::uintptr_t int32 = 0x4;
            static constexpr std::uintptr_t int64 = 0x8;
            static constexpr std::uintptr_t float_ = 0x10;
            static constexpr std::uintptr_t Double = 0x18;
            static constexpr std::uintptr_t String = 0x20;
            static constexpr std::uintptr_t Text = 0x30;
            static constexpr std::uintptr_t Name = 0x40;
            static constexpr std::uintptr_t RawObjectPtr = 0x48;
            static constexpr std::uintptr_t ObjectPtr = 0x50;
            static constexpr std::uintptr_t SoftObjectPath = 0x58;
            static constexpr std::uintptr_t Struct = 0x70;
            static constexpr std::uintptr_t FixedArray = 0x80;
            static constexpr std::uintptr_t DynamicArray = 0x90;
            static constexpr std::uintptr_t Set = 0xA0;
            static constexpr std::uintptr_t Map = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 18> Properties{{
            {"bool", 0x0, "BoolProperty"},
            {"int8", 0x1, "Int8Property"},
            {"int16", 0x2, "Int16Property"},
            {"int32", 0x4, "IntProperty"},
            {"int64", 0x8, "Int64Property"},
            {"float", 0x10, "FloatProperty"},
            {"Double", 0x18, "DoubleProperty"},
            {"String", 0x20, "StrProperty"},
            {"Text", 0x30, "TextProperty"},
            {"Name", 0x40, "NameProperty"},
            {"RawObjectPtr", 0x48, "ObjectProperty"},
            {"ObjectPtr", 0x50, "ObjectProperty"},
            {"SoftObjectPath", 0x58, "StructProperty"},
            {"Struct", 0x70, "StructProperty"},
            {"FixedArray", 0x80, "IntProperty"},
            {"DynamicArray", 0x90, "ArrayProperty"},
            {"Set", 0xA0, "SetProperty"},
            {"Map", 0xB0, "MapProperty"},
        }};
    };

    struct LiveEditObjectUtils
    {
        static constexpr std::string_view Name = "LiveEditObjectUtils";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 4> FunctionNames{{
            "ObjectCreated",
            "ObjectDestroyed",
            "ObjectPropertiesChanged",
            "ObjectPropertyChanged",
        }};
    };

}

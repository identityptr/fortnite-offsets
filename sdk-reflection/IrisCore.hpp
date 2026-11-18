#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::IrisCore
{
    struct AlwaysRelevantNetObjectFilter
    {
        static constexpr std::string_view Name = "AlwaysRelevantNetObjectFilter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NetObjectFilter";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AlwaysRelevantNetObjectFilterConfig
    {
        static constexpr std::string_view Name = "AlwaysRelevantNetObjectFilterConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NetObjectFilterConfig";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ArrayPropertyNetSerializerConfig
    {
        static constexpr std::string_view Name = "ArrayPropertyNetSerializerConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NetSerializerConfig";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxElementCount = 0x10;
            static constexpr std::uintptr_t ElementCountBitCount = 0x12;
            static constexpr std::uintptr_t Property = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"MaxElementCount", 0x10, "UInt16Property"},
            {"ElementCountBitCount", 0x12, "UInt16Property"},
            {"Property", 0x18, "FieldPathProperty"},
        }};
    };

    struct BitfieldNetSerializerConfig
    {
        static constexpr std::string_view Name = "BitfieldNetSerializerConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NetSerializerConfig";
        struct Offsets
        {
            static constexpr std::uintptr_t Bitmask = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Bitmask", 0x10, "ByteProperty"},
        }};
    };

    struct BoolNetSerializerConfig
    {
        static constexpr std::string_view Name = "BoolNetSerializerConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NetSerializerConfig";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ChunkedDataStream
    {
        static constexpr std::string_view Name = "ChunkedDataStream";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataStream";
        struct Offsets
        {
            static constexpr std::uintptr_t PackageMap = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PackageMap", 0x58, "ObjectProperty"},
        }};
    };

    struct ClassAsyncLoadingPriorities
    {
        static constexpr std::string_view Name = "ClassAsyncLoadingPriorities";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t IrisAsyncLoadingPriority = 0x0;
            static constexpr std::uintptr_t bOwnerUsesVeryHighAsyncLoadingPriority = 0x1;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"IrisAsyncLoadingPriority", 0x0, "EnumProperty"},
            {"bOwnerUsesVeryHighAsyncLoadingPriority", 0x1, "BoolProperty"},
        }};
    };

    struct ClassNetSerializerConfig
    {
        static constexpr std::string_view Name = "ClassNetSerializerConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ObjectNetSerializerConfig";
        struct Offsets
        {
            static constexpr std::uintptr_t PropertyClass = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PropertyClass", 0x10, "ClassProperty"},
        }};
    };

    struct CreationFlowLogClassConfig
    {
        static constexpr std::string_view Name = "CreationFlowLogClassConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ClassPath = 0x0;
            static constexpr std::uintptr_t bIncludeSubclasses = 0x8;
            static constexpr std::uintptr_t bTraceOwningConnectionOnly = 0x9;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ClassPath", 0x0, "StructProperty"},
            {"bIncludeSubclasses", 0x8, "BoolProperty"},
            {"bTraceOwningConnectionOnly", 0x9, "BoolProperty"},
        }};
    };

    struct DataStream
    {
        static constexpr std::string_view Name = "DataStream";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DataStreamDefinition
    {
        static constexpr std::string_view Name = "DataStreamDefinition";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t DataStreamName = 0x0;
            static constexpr std::uintptr_t ClassName = 0x4;
            static constexpr std::uintptr_t Class = 0x8;
            static constexpr std::uintptr_t DefaultSendStatus = 0x10;
            static constexpr std::uintptr_t bAutoCreate = 0x11;
            static constexpr std::uintptr_t bDynamicCreate = 0x12;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"DataStreamName", 0x0, "NameProperty"},
            {"ClassName", 0x4, "NameProperty"},
            {"Class", 0x8, "ClassProperty"},
            {"DefaultSendStatus", 0x10, "EnumProperty"},
            {"bAutoCreate", 0x11, "BoolProperty"},
            {"bDynamicCreate", 0x12, "BoolProperty"},
        }};
    };

    struct DataStreamDefinitions
    {
        static constexpr std::string_view Name = "DataStreamDefinitions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t DataStreamDefinitions = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DataStreamDefinitions", 0x28, "ArrayProperty"},
        }};
    };

    struct DataStreamManager
    {
        static constexpr std::string_view Name = "DataStreamManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataStream";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DateTimeNetSerializerConfig
    {
        static constexpr std::string_view Name = "DateTimeNetSerializerConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NetSerializerConfig";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DoubleNetSerializerConfig
    {
        static constexpr std::string_view Name = "DoubleNetSerializerConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NetSerializerConfig";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct EnumInt16NetSerializerConfig
    {
        static constexpr std::string_view Name = "EnumInt16NetSerializerConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NetSerializerConfig";
        struct Offsets
        {
            static constexpr std::uintptr_t LowerBound = 0x10;
            static constexpr std::uintptr_t UpperBound = 0x12;
            static constexpr std::uintptr_t BitCount = 0x14;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"LowerBound", 0x10, "Int16Property"},
            {"UpperBound", 0x12, "Int16Property"},
            {"BitCount", 0x14, "ByteProperty"},
        }};
    };

    struct EnumInt32NetSerializerConfig
    {
        static constexpr std::string_view Name = "EnumInt32NetSerializerConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NetSerializerConfig";
        struct Offsets
        {
            static constexpr std::uintptr_t LowerBound = 0x10;
            static constexpr std::uintptr_t UpperBound = 0x14;
            static constexpr std::uintptr_t BitCount = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"LowerBound", 0x10, "IntProperty"},
            {"UpperBound", 0x14, "IntProperty"},
            {"BitCount", 0x18, "ByteProperty"},
        }};
    };

    struct EnumInt64NetSerializerConfig
    {
        static constexpr std::string_view Name = "EnumInt64NetSerializerConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NetSerializerConfig";
        struct Offsets
        {
            static constexpr std::uintptr_t LowerBound = 0x10;
            static constexpr std::uintptr_t UpperBound = 0x18;
            static constexpr std::uintptr_t BitCount = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"LowerBound", 0x10, "Int64Property"},
            {"UpperBound", 0x18, "Int64Property"},
            {"BitCount", 0x20, "ByteProperty"},
        }};
    };

    struct EnumInt8NetSerializerConfig
    {
        static constexpr std::string_view Name = "EnumInt8NetSerializerConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NetSerializerConfig";
        struct Offsets
        {
            static constexpr std::uintptr_t LowerBound = 0x10;
            static constexpr std::uintptr_t UpperBound = 0x11;
            static constexpr std::uintptr_t BitCount = 0x12;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"LowerBound", 0x10, "Int8Property"},
            {"UpperBound", 0x11, "Int8Property"},
            {"BitCount", 0x12, "ByteProperty"},
        }};
    };

    struct EnumUint16NetSerializerConfig
    {
        static constexpr std::string_view Name = "EnumUint16NetSerializerConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NetSerializerConfig";
        struct Offsets
        {
            static constexpr std::uintptr_t LowerBound = 0x10;
            static constexpr std::uintptr_t UpperBound = 0x12;
            static constexpr std::uintptr_t BitCount = 0x14;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"LowerBound", 0x10, "UInt16Property"},
            {"UpperBound", 0x12, "UInt16Property"},
            {"BitCount", 0x14, "ByteProperty"},
        }};
    };

    struct EnumUint32NetSerializerConfig
    {
        static constexpr std::string_view Name = "EnumUint32NetSerializerConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NetSerializerConfig";
        struct Offsets
        {
            static constexpr std::uintptr_t LowerBound = 0x10;
            static constexpr std::uintptr_t UpperBound = 0x14;
            static constexpr std::uintptr_t BitCount = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"LowerBound", 0x10, "UInt32Property"},
            {"UpperBound", 0x14, "UInt32Property"},
            {"BitCount", 0x18, "ByteProperty"},
        }};
    };

    struct EnumUint64NetSerializerConfig
    {
        static constexpr std::string_view Name = "EnumUint64NetSerializerConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NetSerializerConfig";
        struct Offsets
        {
            static constexpr std::uintptr_t LowerBound = 0x10;
            static constexpr std::uintptr_t UpperBound = 0x18;
            static constexpr std::uintptr_t BitCount = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"LowerBound", 0x10, "UInt64Property"},
            {"UpperBound", 0x18, "UInt64Property"},
            {"BitCount", 0x20, "ByteProperty"},
        }};
    };

    struct EnumUint8NetSerializerConfig
    {
        static constexpr std::string_view Name = "EnumUint8NetSerializerConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NetSerializerConfig";
        struct Offsets
        {
            static constexpr std::uintptr_t LowerBound = 0x10;
            static constexpr std::uintptr_t UpperBound = 0x11;
            static constexpr std::uintptr_t BitCount = 0x12;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"LowerBound", 0x10, "ByteProperty"},
            {"UpperBound", 0x11, "ByteProperty"},
            {"BitCount", 0x12, "ByteProperty"},
        }};
    };

    struct FieldOfViewNetObjectPrioritizer
    {
        static constexpr std::string_view Name = "FieldOfViewNetObjectPrioritizer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LocationBasedNetObjectPrioritizer";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FieldOfViewNetObjectPrioritizerConfig
    {
        static constexpr std::string_view Name = "FieldOfViewNetObjectPrioritizerConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NetObjectPrioritizerConfig";
        struct Offsets
        {
            static constexpr std::uintptr_t InnerSphereRadius = 0x28;
            static constexpr std::uintptr_t InnerSpherePriority = 0x2C;
            static constexpr std::uintptr_t OuterSphereRadius = 0x30;
            static constexpr std::uintptr_t OuterSpherePriority = 0x34;
            static constexpr std::uintptr_t ConeFieldOfViewDegrees = 0x38;
            static constexpr std::uintptr_t InnerConeLength = 0x3C;
            static constexpr std::uintptr_t ConeLength = 0x40;
            static constexpr std::uintptr_t MinConePriority = 0x44;
            static constexpr std::uintptr_t MaxConePriority = 0x48;
            static constexpr std::uintptr_t LineOfSightWidth = 0x4C;
            static constexpr std::uintptr_t LineOfSightPriority = 0x50;
            static constexpr std::uintptr_t OutsidePriority = 0x54;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"InnerSphereRadius", 0x28, "FloatProperty"},
            {"InnerSpherePriority", 0x2C, "FloatProperty"},
            {"OuterSphereRadius", 0x30, "FloatProperty"},
            {"OuterSpherePriority", 0x34, "FloatProperty"},
            {"ConeFieldOfViewDegrees", 0x38, "FloatProperty"},
            {"InnerConeLength", 0x3C, "FloatProperty"},
            {"ConeLength", 0x40, "FloatProperty"},
            {"MinConePriority", 0x44, "FloatProperty"},
            {"MaxConePriority", 0x48, "FloatProperty"},
            {"LineOfSightWidth", 0x4C, "FloatProperty"},
            {"LineOfSightPriority", 0x50, "FloatProperty"},
            {"OutsidePriority", 0x54, "FloatProperty"},
        }};
    };

    struct FieldPathNetSerializerConfig
    {
        static constexpr std::string_view Name = "FieldPathNetSerializerConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NetSerializerConfig";
        struct Offsets
        {
            static constexpr std::uintptr_t Property = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Property", 0x10, "FieldPathProperty"},
        }};
    };

    struct FieldPathNetSerializerSerializationHelper
    {
        static constexpr std::string_view Name = "FieldPathNetSerializerSerializationHelper";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Owner = 0x0;
            static constexpr std::uintptr_t PropertyPath = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Owner", 0x0, "WeakObjectProperty"},
            {"PropertyPath", 0x8, "ArrayProperty"},
        }};
    };

    struct FilterOutNetObjectFilter
    {
        static constexpr std::string_view Name = "FilterOutNetObjectFilter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NetObjectFilter";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FilterOutNetObjectFilterConfig
    {
        static constexpr std::string_view Name = "FilterOutNetObjectFilterConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NetObjectFilterConfig";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FloatNetSerializerConfig
    {
        static constexpr std::string_view Name = "FloatNetSerializerConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NetSerializerConfig";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GuidNetSerializerConfig
    {
        static constexpr std::string_view Name = "GuidNetSerializerConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NetSerializerConfig";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InstancedStructNetSerializerConfig
    {
        static constexpr std::string_view Name = "InstancedStructNetSerializerConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NetSerializerConfig";
        struct Offsets
        {
            static constexpr std::uintptr_t SupportedTypes = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SupportedTypes", 0x10, "ArrayProperty"},
        }};
    };

    struct Int16RangeNetSerializerConfig
    {
        static constexpr std::string_view Name = "Int16RangeNetSerializerConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NetSerializerConfig";
        struct Offsets
        {
            static constexpr std::uintptr_t LowerBound = 0x10;
            static constexpr std::uintptr_t UpperBound = 0x12;
            static constexpr std::uintptr_t BitCount = 0x14;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"LowerBound", 0x10, "Int16Property"},
            {"UpperBound", 0x12, "Int16Property"},
            {"BitCount", 0x14, "ByteProperty"},
        }};
    };

    struct Int32RangeNetSerializerConfig
    {
        static constexpr std::string_view Name = "Int32RangeNetSerializerConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NetSerializerConfig";
        struct Offsets
        {
            static constexpr std::uintptr_t LowerBound = 0x10;
            static constexpr std::uintptr_t UpperBound = 0x14;
            static constexpr std::uintptr_t BitCount = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"LowerBound", 0x10, "IntProperty"},
            {"UpperBound", 0x14, "IntProperty"},
            {"BitCount", 0x18, "ByteProperty"},
        }};
    };

    struct Int64RangeNetSerializerConfig
    {
        static constexpr std::string_view Name = "Int64RangeNetSerializerConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NetSerializerConfig";
        struct Offsets
        {
            static constexpr std::uintptr_t LowerBound = 0x10;
            static constexpr std::uintptr_t UpperBound = 0x18;
            static constexpr std::uintptr_t BitCount = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"LowerBound", 0x10, "Int64Property"},
            {"UpperBound", 0x18, "Int64Property"},
            {"BitCount", 0x20, "ByteProperty"},
        }};
    };

    struct Int8RangeNetSerializerConfig
    {
        static constexpr std::string_view Name = "Int8RangeNetSerializerConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NetSerializerConfig";
        struct Offsets
        {
            static constexpr std::uintptr_t LowerBound = 0x10;
            static constexpr std::uintptr_t UpperBound = 0x11;
            static constexpr std::uintptr_t BitCount = 0x12;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"LowerBound", 0x10, "Int8Property"},
            {"UpperBound", 0x11, "Int8Property"},
            {"BitCount", 0x12, "ByteProperty"},
        }};
    };

    struct IntNetSerializerConfig
    {
        static constexpr std::string_view Name = "IntNetSerializerConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NetSerializerConfig";
        struct Offsets
        {
            static constexpr std::uintptr_t BitCount = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"BitCount", 0x10, "ByteProperty"},
        }};
    };

    struct IrisCreationFlowLogConfig
    {
        static constexpr std::string_view Name = "IrisCreationFlowLogConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t ClassFilters = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ClassFilters", 0x28, "ArrayProperty"},
        }};
    };

    struct IrisFastArraySerializer
    {
        static constexpr std::string_view Name = "IrisFastArraySerializer";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "FastArraySerializer";
        struct Offsets
        {
            static constexpr std::uintptr_t ChangeMaskStorage = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ChangeMaskStorage", 0x50, "UInt32Property"},
        }};
    };

    struct IrisObjectReferencePackageMap
    {
        static constexpr std::string_view Name = "IrisObjectReferencePackageMap";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PackageMap";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct LastResortPropertyNetSerializerConfig
    {
        static constexpr std::string_view Name = "LastResortPropertyNetSerializerConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NetSerializerConfig";
        struct Offsets
        {
            static constexpr std::uintptr_t Property = 0x10;
            static constexpr std::uintptr_t bExcludeFromDefaultStateHash = 0x30;
            static constexpr std::uintptr_t MaxQuantizedSizeBits = 0x34;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Property", 0x10, "FieldPathProperty"},
            {"bExcludeFromDefaultStateHash", 0x30, "BoolProperty"},
            {"MaxQuantizedSizeBits", 0x34, "UInt32Property"},
        }};
    };

    struct LocationBasedNetObjectPrioritizer
    {
        static constexpr std::string_view Name = "LocationBasedNetObjectPrioritizer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NetObjectPrioritizer";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MultiServerNetRefHandleGenerator
    {
        static constexpr std::string_view Name = "MultiServerNetRefHandleGenerator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NetRefHandleGenerator";
        struct Offsets
        {
            static constexpr std::uintptr_t NumServerIdBits = 0x30;
            static constexpr std::uintptr_t ServerID = 0x38;
            static constexpr std::uintptr_t InitialSerial = 0x3C;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"NumServerIdBits", 0x30, "UInt64Property"},
            {"ServerID", 0x38, "UInt32Property"},
            {"InitialSerial", 0x3C, "UInt32Property"},
        }};
    };

    struct NameAsNetTokenNetSerializerConfig
    {
        static constexpr std::string_view Name = "NameAsNetTokenNetSerializerConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NetSerializerConfig";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct NameNetSerializerConfig
    {
        static constexpr std::string_view Name = "NameNetSerializerConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NetSerializerConfig";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct NetBlobHandler
    {
        static constexpr std::string_view Name = "NetBlobHandler";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct NetBlobHandlerDefinition
    {
        static constexpr std::string_view Name = "NetBlobHandlerDefinition";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ClassName = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ClassName", 0x0, "NameProperty"},
        }};
    };

    struct NetBlobHandlerDefinitions
    {
        static constexpr std::string_view Name = "NetBlobHandlerDefinitions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t NetBlobHandlerDefinitions = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"NetBlobHandlerDefinitions", 0x28, "ArrayProperty"},
        }};
    };

    struct NetObjectBlobHandler
    {
        static constexpr std::string_view Name = "NetObjectBlobHandler";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NetBlobHandler";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct NetObjectConnectionFilter
    {
        static constexpr std::string_view Name = "NetObjectConnectionFilter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NetObjectFilter";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct NetObjectConnectionFilterConfig
    {
        static constexpr std::string_view Name = "NetObjectConnectionFilterConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NetObjectFilterConfig";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxObjectCount = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MaxObjectCount", 0x28, "UInt16Property"},
        }};
    };

    struct NetObjectCountLimiter
    {
        static constexpr std::string_view Name = "NetObjectCountLimiter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NetObjectPrioritizer";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct NetObjectCountLimiterConfig
    {
        static constexpr std::string_view Name = "NetObjectCountLimiterConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NetObjectPrioritizerConfig";
        struct Offsets
        {
            static constexpr std::uintptr_t Mode = 0x28;
            static constexpr std::uintptr_t MaxObjectCount = 0x2C;
            static constexpr std::uintptr_t Priority = 0x30;
            static constexpr std::uintptr_t OwningConnectionPriority = 0x34;
            static constexpr std::uintptr_t bEnableOwnedObjectsFastLane = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Mode", 0x28, "EnumProperty"},
            {"MaxObjectCount", 0x2C, "UInt32Property"},
            {"Priority", 0x30, "FloatProperty"},
            {"OwningConnectionPriority", 0x34, "FloatProperty"},
            {"bEnableOwnedObjectsFastLane", 0x38, "BoolProperty"},
        }};
    };

    struct NetObjectFactory
    {
        static constexpr std::string_view Name = "NetObjectFactory";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct NetObjectFilter
    {
        static constexpr std::string_view Name = "NetObjectFilter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct NetObjectFilterConfig
    {
        static constexpr std::string_view Name = "NetObjectFilterConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct NetObjectFilterDefinition
    {
        static constexpr std::string_view Name = "NetObjectFilterDefinition";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t FilterName = 0x0;
            static constexpr std::uintptr_t ClassName = 0x4;
            static constexpr std::uintptr_t ConfigClassName = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"FilterName", 0x0, "NameProperty"},
            {"ClassName", 0x4, "NameProperty"},
            {"ConfigClassName", 0x8, "NameProperty"},
        }};
    };

    struct NetObjectFilterDefinitions
    {
        static constexpr std::string_view Name = "NetObjectFilterDefinitions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t NetObjectFilterDefinitions = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"NetObjectFilterDefinitions", 0x28, "ArrayProperty"},
        }};
    };

    struct NetObjectGridFilter
    {
        static constexpr std::string_view Name = "NetObjectGridFilter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NetObjectFilter";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct NetObjectGridFilterConfig
    {
        static constexpr std::string_view Name = "NetObjectGridFilterConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NetObjectFilterConfig";
        struct Offsets
        {
            static constexpr std::uintptr_t ViewPosRelevancyFrameCount = 0x28;
            static constexpr std::uintptr_t DefaultFrameCountBeforeCulling = 0x2C;
            static constexpr std::uintptr_t CellSizeX = 0x30;
            static constexpr std::uintptr_t CellSizeY = 0x34;
            static constexpr std::uintptr_t DefaultCullDistance = 0x38;
            static constexpr std::uintptr_t bUseExactCullDistance = 0x3C;
            static constexpr std::uintptr_t bDefaultUse2DCullDistance = 0x3D;
            static constexpr std::uintptr_t FilterProfiles = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"ViewPosRelevancyFrameCount", 0x28, "UInt32Property"},
            {"DefaultFrameCountBeforeCulling", 0x2C, "UInt16Property"},
            {"CellSizeX", 0x30, "FloatProperty"},
            {"CellSizeY", 0x34, "FloatProperty"},
            {"DefaultCullDistance", 0x38, "FloatProperty"},
            {"bUseExactCullDistance", 0x3C, "BoolProperty"},
            {"bDefaultUse2DCullDistance", 0x3D, "BoolProperty"},
            {"FilterProfiles", 0x40, "ArrayProperty"},
        }};
    };

    struct NetObjectGridFilterProfile
    {
        static constexpr std::string_view Name = "NetObjectGridFilterProfile";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t FilterProfileName = 0x0;
            static constexpr std::uintptr_t FrameCountBeforeCulling = 0x4;
            static constexpr std::uintptr_t bUse2DCullDistance = 0x6;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"FilterProfileName", 0x0, "NameProperty"},
            {"FrameCountBeforeCulling", 0x4, "UInt16Property"},
            {"bUse2DCullDistance", 0x6, "BoolProperty"},
        }};
    };

    struct NetObjectGridWorldLocFilter
    {
        static constexpr std::string_view Name = "NetObjectGridWorldLocFilter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NetObjectGridFilter";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct NetObjectParentRelevancyGridFilter
    {
        static constexpr std::string_view Name = "NetObjectParentRelevancyGridFilter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NetObjectGridWorldLocFilter";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct NetObjectParentRelevancyGridFilterConfig
    {
        static constexpr std::string_view Name = "NetObjectParentRelevancyGridFilterConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NetObjectGridFilterConfig";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxParentChainDepth = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MaxParentChainDepth", 0x50, "UInt32Property"},
        }};
    };

    struct NetObjectPrioritizer
    {
        static constexpr std::string_view Name = "NetObjectPrioritizer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct NetObjectPrioritizerConfig
    {
        static constexpr std::string_view Name = "NetObjectPrioritizerConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct NetObjectPrioritizerDefinition
    {
        static constexpr std::string_view Name = "NetObjectPrioritizerDefinition";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t PrioritizerName = 0x0;
            static constexpr std::uintptr_t ClassName = 0x4;
            static constexpr std::uintptr_t Class = 0x8;
            static constexpr std::uintptr_t ConfigClassName = 0x10;
            static constexpr std::uintptr_t ConfigClass = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"PrioritizerName", 0x0, "NameProperty"},
            {"ClassName", 0x4, "NameProperty"},
            {"Class", 0x8, "ClassProperty"},
            {"ConfigClassName", 0x10, "NameProperty"},
            {"ConfigClass", 0x18, "ClassProperty"},
        }};
    };

    struct NetObjectPrioritizerDefinitions
    {
        static constexpr std::string_view Name = "NetObjectPrioritizerDefinitions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t NetObjectPrioritizerDefinitions = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"NetObjectPrioritizerDefinitions", 0x28, "ArrayProperty"},
        }};
    };

    struct NetRPCHandler
    {
        static constexpr std::string_view Name = "NetRPCHandler";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NetBlobHandler";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct NetRefHandleGenerator
    {
        static constexpr std::string_view Name = "NetRefHandleGenerator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct NetRoleNetSerializerConfig
    {
        static constexpr std::string_view Name = "NetRoleNetSerializerConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NetSerializerConfig";
        struct Offsets
        {
            static constexpr std::uintptr_t RelativeInternalOffsetToOtherRole = 0x10;
            static constexpr std::uintptr_t RelativeExternalOffsetToOtherRole = 0x14;
            static constexpr std::uintptr_t LowerBound = 0x18;
            static constexpr std::uintptr_t UpperBound = 0x19;
            static constexpr std::uintptr_t BitCount = 0x1A;
            static constexpr std::uintptr_t AutonomousProxyValue = 0x1B;
            static constexpr std::uintptr_t SimulatedProxyValue = 0x1C;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"RelativeInternalOffsetToOtherRole", 0x10, "IntProperty"},
            {"RelativeExternalOffsetToOtherRole", 0x14, "IntProperty"},
            {"LowerBound", 0x18, "ByteProperty"},
            {"UpperBound", 0x19, "ByteProperty"},
            {"BitCount", 0x1A, "ByteProperty"},
            {"AutonomousProxyValue", 0x1B, "ByteProperty"},
            {"SimulatedProxyValue", 0x1C, "ByteProperty"},
        }};
    };

    struct NetSerializerConfig
    {
        static constexpr std::string_view Name = "NetSerializerConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct NetTokenDataStream
    {
        static constexpr std::string_view Name = "NetTokenDataStream";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataStream";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct NetTokenStoreTypeIdPair
    {
        static constexpr std::string_view Name = "NetTokenStoreTypeIdPair";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t StoreTypeName = 0x0;
            static constexpr std::uintptr_t TypeId = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"StoreTypeName", 0x0, "StrProperty"},
            {"TypeId", 0x10, "UInt32Property"},
        }};
    };

    struct NetTokenTypeIdConfig
    {
        static constexpr std::string_view Name = "NetTokenTypeIdConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t ReservedTypeIds = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ReservedTypeIds", 0x28, "ArrayProperty"},
        }};
    };

    struct NopNetSerializerConfig
    {
        static constexpr std::string_view Name = "NopNetSerializerConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NetSerializerConfig";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ObjectNetSerializerConfig
    {
        static constexpr std::string_view Name = "ObjectNetSerializerConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NetSerializerConfig";
        struct Offsets
        {
            static constexpr std::uintptr_t PropertyClass = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PropertyClass", 0x10, "ClassProperty"},
        }};
    };

    struct ObjectPtrNetSerializerConfig
    {
        static constexpr std::string_view Name = "ObjectPtrNetSerializerConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ObjectNetSerializerConfig";
        struct Offsets
        {
            static constexpr std::uintptr_t PropertyClass = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PropertyClass", 0x10, "ClassProperty"},
        }};
    };

    struct ObjectReplicatedBridgeCriticalClassConfig
    {
        static constexpr std::string_view Name = "ObjectReplicatedBridgeCriticalClassConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ClassName = 0x0;
            static constexpr std::uintptr_t bDisconnectOnProtocolMismatch = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ClassName", 0x0, "NameProperty"},
            {"bDisconnectOnProtocolMismatch", 0x4, "BoolProperty"},
        }};
    };

    struct ObjectReplicationBridge
    {
        static constexpr std::string_view Name = "ObjectReplicationBridge";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ReplicationBridge";
        struct Offsets
        {
            static constexpr std::uintptr_t NetObjectFactories = 0x260;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"NetObjectFactories", 0x260, "ArrayProperty"},
        }};
    };

    struct ObjectReplicationBridgeAsyncLoadingClassConfig
    {
        static constexpr std::string_view Name = "ObjectReplicationBridgeAsyncLoadingClassConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ClassName = 0x0;
            static constexpr std::uintptr_t Priorities = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ClassName", 0x0, "NameProperty"},
            {"Priorities", 0x4, "StructProperty"},
        }};
    };

    struct ObjectReplicationBridgeConfig
    {
        static constexpr std::string_view Name = "ObjectReplicationBridgeConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t PollConfigs = 0x28;
            static constexpr std::uintptr_t FilterConfigs = 0x38;
            static constexpr std::uintptr_t PrioritizerConfigs = 0x48;
            static constexpr std::uintptr_t DeltaCompressionConfigs = 0x58;
            static constexpr std::uintptr_t CriticalClassConfigs = 0x68;
            static constexpr std::uintptr_t bAllClassesCritical = 0x78;
            static constexpr std::uintptr_t TypeStatsConfigs = 0x80;
            static constexpr std::uintptr_t DefaultSpatialFilterName = 0x90;
            static constexpr std::uintptr_t AsyncLoadingClassConfigs = 0x98;
            static constexpr std::uintptr_t RequiredNetDriverChannelClassName = 0xA8;
            static constexpr std::uintptr_t CriticalActorClasses = 0xB0;
            static constexpr std::uintptr_t NetRefHandleGeneratorClass = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"PollConfigs", 0x28, "ArrayProperty"},
            {"FilterConfigs", 0x38, "ArrayProperty"},
            {"PrioritizerConfigs", 0x48, "ArrayProperty"},
            {"DeltaCompressionConfigs", 0x58, "ArrayProperty"},
            {"CriticalClassConfigs", 0x68, "ArrayProperty"},
            {"bAllClassesCritical", 0x78, "BoolProperty"},
            {"TypeStatsConfigs", 0x80, "ArrayProperty"},
            {"DefaultSpatialFilterName", 0x90, "NameProperty"},
            {"AsyncLoadingClassConfigs", 0x98, "ArrayProperty"},
            {"RequiredNetDriverChannelClassName", 0xA8, "NameProperty"},
            {"CriticalActorClasses", 0xB0, "ArrayProperty"},
            {"NetRefHandleGeneratorClass", 0xC0, "ClassProperty"},
        }};
    };

    struct ObjectReplicationBridgeDeltaCompressionConfig
    {
        static constexpr std::string_view Name = "ObjectReplicationBridgeDeltaCompressionConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ClassName = 0x0;
            static constexpr std::uintptr_t bEnableDeltaCompression = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ClassName", 0x0, "NameProperty"},
            {"bEnableDeltaCompression", 0x4, "BoolProperty"},
        }};
    };

    struct ObjectReplicationBridgeFilterConfig
    {
        static constexpr std::string_view Name = "ObjectReplicationBridgeFilterConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ClassName = 0x0;
            static constexpr std::uintptr_t DynamicFilterName = 0x4;
            static constexpr std::uintptr_t FilterProfile = 0x8;
            static constexpr std::uintptr_t bForceEnableOnAllInstances = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ClassName", 0x0, "NameProperty"},
            {"DynamicFilterName", 0x4, "NameProperty"},
            {"FilterProfile", 0x8, "NameProperty"},
            {"bForceEnableOnAllInstances", 0xC, "BoolProperty"},
        }};
    };

    struct ObjectReplicationBridgePollConfig
    {
        static constexpr std::string_view Name = "ObjectReplicationBridgePollConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ClassName = 0x0;
            static constexpr std::uintptr_t PollFrequency = 0x4;
            static constexpr std::uintptr_t bIncludeSubclasses = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ClassName", 0x0, "NameProperty"},
            {"PollFrequency", 0x4, "FloatProperty"},
            {"bIncludeSubclasses", 0x8, "BoolProperty"},
        }};
    };

    struct ObjectReplicationBridgePrioritizerConfig
    {
        static constexpr std::string_view Name = "ObjectReplicationBridgePrioritizerConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ClassName = 0x0;
            static constexpr std::uintptr_t PrioritizerName = 0x4;
            static constexpr std::uintptr_t bForceEnableOnAllInstances = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ClassName", 0x0, "NameProperty"},
            {"PrioritizerName", 0x4, "NameProperty"},
            {"bForceEnableOnAllInstances", 0x8, "BoolProperty"},
        }};
    };

    struct ObjectReplicationBridgeTypeStatsConfig
    {
        static constexpr std::string_view Name = "ObjectReplicationBridgeTypeStatsConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ClassName = 0x0;
            static constexpr std::uintptr_t TypeStatsName = 0x4;
            static constexpr std::uintptr_t bIncludeInMinimalCSVStats = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ClassName", 0x0, "NameProperty"},
            {"TypeStatsName", 0x4, "NameProperty"},
            {"bIncludeInMinimalCSVStats", 0x8, "BoolProperty"},
        }};
    };

    struct ObjectScopeHysteresisProfile
    {
        static constexpr std::string_view Name = "ObjectScopeHysteresisProfile";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t FilterProfileName = 0x0;
            static constexpr std::uintptr_t HysteresisFrameCount = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"FilterProfileName", 0x0, "NameProperty"},
            {"HysteresisFrameCount", 0x4, "ByteProperty"},
        }};
    };

    struct OptionalPropertyNetSerializerConfig
    {
        static constexpr std::string_view Name = "OptionalPropertyNetSerializerConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NetSerializerConfig";
        struct Offsets
        {
            static constexpr std::uintptr_t Property = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Property", 0x10, "FieldPathProperty"},
        }};
    };

    struct PackedInt32NetSerializerConfig
    {
        static constexpr std::string_view Name = "PackedInt32NetSerializerConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NetSerializerConfig";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PackedInt64NetSerializerConfig
    {
        static constexpr std::string_view Name = "PackedInt64NetSerializerConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NetSerializerConfig";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PackedUint32NetSerializerConfig
    {
        static constexpr std::string_view Name = "PackedUint32NetSerializerConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NetSerializerConfig";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PackedUint64NetSerializerConfig
    {
        static constexpr std::string_view Name = "PackedUint64NetSerializerConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NetSerializerConfig";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PartialNetObjectAttachmentHandler
    {
        static constexpr std::string_view Name = "PartialNetObjectAttachmentHandler";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SequentialPartialNetBlobHandler";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PartialNetObjectAttachmentHandlerConfig
    {
        static constexpr std::string_view Name = "PartialNetObjectAttachmentHandlerConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SequentialPartialNetBlobHandlerConfig";
        struct Offsets
        {
            static constexpr std::uintptr_t BitCountSplitThreshold = 0x30;
            static constexpr std::uintptr_t ClientUnreliableBitCountSplitThreshold = 0x34;
            static constexpr std::uintptr_t ServerUnreliableBitCountSplitThreshold = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"BitCountSplitThreshold", 0x30, "UInt32Property"},
            {"ClientUnreliableBitCountSplitThreshold", 0x34, "UInt32Property"},
            {"ServerUnreliableBitCountSplitThreshold", 0x38, "UInt32Property"},
        }};
    };

    struct PolymorphicArrayStructNetSerializerConfig
    {
        static constexpr std::string_view Name = "PolymorphicArrayStructNetSerializerConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "PolymorphicStructNetSerializerConfig";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PolymorphicStructNetSerializerConfig
    {
        static constexpr std::string_view Name = "PolymorphicStructNetSerializerConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NetSerializerConfig";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RemoteObjectIdNetSerializerConfig
    {
        static constexpr std::string_view Name = "RemoteObjectIdNetSerializerConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NetSerializerConfig";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RemoteObjectNetRefHandleGenerator
    {
        static constexpr std::string_view Name = "RemoteObjectNetRefHandleGenerator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NetRefHandleGenerator";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RemoteObjectReferenceNetSerializerConfig
    {
        static constexpr std::string_view Name = "RemoteObjectReferenceNetSerializerConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NetSerializerConfig";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RemoteServerIdNetSerializerConfig
    {
        static constexpr std::string_view Name = "RemoteServerIdNetSerializerConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NetSerializerConfig";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ReplicationBridge
    {
        static constexpr std::string_view Name = "ReplicationBridge";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ReplicationDataStream
    {
        static constexpr std::string_view Name = "ReplicationDataStream";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataStream";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ReplicationFilteringConfig
    {
        static constexpr std::string_view Name = "ReplicationFilteringConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t bEnableObjectScopeHysteresis = 0x28;
            static constexpr std::uintptr_t DefaultHysteresisFrameCount = 0x29;
            static constexpr std::uintptr_t HysteresisUpdateConnectionThrottling = 0x2A;
            static constexpr std::uintptr_t HysteresisProfiles = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bEnableObjectScopeHysteresis", 0x28, "BoolProperty"},
            {"DefaultHysteresisFrameCount", 0x29, "ByteProperty"},
            {"HysteresisUpdateConnectionThrottling", 0x2A, "ByteProperty"},
            {"HysteresisProfiles", 0x30, "ArrayProperty"},
        }};
    };

    struct ReplicationStateDescriptorClassPushModelConfig
    {
        static constexpr std::string_view Name = "ReplicationStateDescriptorClassPushModelConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ClassName = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ClassName", 0x0, "NameProperty"},
        }};
    };

    struct ReplicationStateDescriptorConfig
    {
        static constexpr std::string_view Name = "ReplicationStateDescriptorConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t SupportsStructNetSerializerList = 0x28;
            static constexpr std::uintptr_t EnsureFullyPushModelClassNames = 0x38;
            static constexpr std::uintptr_t bEnsureAllClassesAreFullyPushModel = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SupportsStructNetSerializerList", 0x28, "ArrayProperty"},
            {"EnsureFullyPushModelClassNames", 0x38, "ArrayProperty"},
            {"bEnsureAllClassesAreFullyPushModel", 0x48, "BoolProperty"},
        }};
    };

    struct ReplicationSystem
    {
        static constexpr std::string_view Name = "ReplicationSystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t ReplicationBridge = 0x38;
            static constexpr std::uintptr_t NetRefHandleGenerator = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ReplicationBridge", 0x38, "ObjectProperty"},
            {"NetRefHandleGenerator", 0x58, "ObjectProperty"},
        }};
    };

    struct Rotator3dNetSerializerConfig
    {
        static constexpr std::string_view Name = "Rotator3dNetSerializerConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NetSerializerConfig";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct Rotator3fNetSerializerConfig
    {
        static constexpr std::string_view Name = "Rotator3fNetSerializerConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NetSerializerConfig";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RotatorAsByteNetSerializerConfig
    {
        static constexpr std::string_view Name = "RotatorAsByteNetSerializerConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NetSerializerConfig";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RotatorAsShortNetSerializerConfig
    {
        static constexpr std::string_view Name = "RotatorAsShortNetSerializerConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NetSerializerConfig";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RotatorNetSerializerConfig
    {
        static constexpr std::string_view Name = "RotatorNetSerializerConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NetSerializerConfig";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ScriptInterfaceNetSerializerConfig
    {
        static constexpr std::string_view Name = "ScriptInterfaceNetSerializerConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ObjectNetSerializerConfig";
        struct Offsets
        {
            static constexpr std::uintptr_t PropertyClass = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PropertyClass", 0x10, "ClassProperty"},
        }};
    };

    struct SequentialPartialNetBlobHandler
    {
        static constexpr std::string_view Name = "SequentialPartialNetBlobHandler";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NetBlobHandler";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SequentialPartialNetBlobHandlerConfig
    {
        static constexpr std::string_view Name = "SequentialPartialNetBlobHandlerConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxPartBitCount = 0x28;
            static constexpr std::uintptr_t MaxPartCount = 0x2C;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"MaxPartBitCount", 0x28, "UInt32Property"},
            {"MaxPartCount", 0x2C, "UInt32Property"},
        }};
    };

    struct SoftClassPathNetSerializerConfig
    {
        static constexpr std::string_view Name = "SoftClassPathNetSerializerConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NetSerializerConfig";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SoftObjectNetSerializerConfig
    {
        static constexpr std::string_view Name = "SoftObjectNetSerializerConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NetSerializerConfig";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SoftObjectPathNetSerializerConfig
    {
        static constexpr std::string_view Name = "SoftObjectPathNetSerializerConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NetSerializerConfig";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SphereNetObjectPrioritizer
    {
        static constexpr std::string_view Name = "SphereNetObjectPrioritizer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LocationBasedNetObjectPrioritizer";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SphereNetObjectPrioritizerConfig
    {
        static constexpr std::string_view Name = "SphereNetObjectPrioritizerConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NetObjectPrioritizerConfig";
        struct Offsets
        {
            static constexpr std::uintptr_t InnerRadius = 0x28;
            static constexpr std::uintptr_t OuterRadius = 0x2C;
            static constexpr std::uintptr_t InnerPriority = 0x30;
            static constexpr std::uintptr_t OuterPriority = 0x34;
            static constexpr std::uintptr_t OutsidePriority = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"InnerRadius", 0x28, "FloatProperty"},
            {"OuterRadius", 0x2C, "FloatProperty"},
            {"InnerPriority", 0x30, "FloatProperty"},
            {"OuterPriority", 0x34, "FloatProperty"},
            {"OutsidePriority", 0x38, "FloatProperty"},
        }};
    };

    struct SphereWithOwnerBoostNetObjectPrioritizer
    {
        static constexpr std::string_view Name = "SphereWithOwnerBoostNetObjectPrioritizer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SphereNetObjectPrioritizer";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SphereWithOwnerBoostNetObjectPrioritizerConfig
    {
        static constexpr std::string_view Name = "SphereWithOwnerBoostNetObjectPrioritizerConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SphereNetObjectPrioritizerConfig";
        struct Offsets
        {
            static constexpr std::uintptr_t OwnerPriorityBoost = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OwnerPriorityBoost", 0x40, "FloatProperty"},
        }};
    };

    struct StringNetSerializerConfig
    {
        static constexpr std::string_view Name = "StringNetSerializerConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NetSerializerConfig";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct StructNetSerializerConfig
    {
        static constexpr std::string_view Name = "StructNetSerializerConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NetSerializerConfig";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SupportsStructNetSerializerConfig
    {
        static constexpr std::string_view Name = "SupportsStructNetSerializerConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t StructName = 0x0;
            static constexpr std::uintptr_t bCanUseStructNetSerializer = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"StructName", 0x0, "NameProperty"},
            {"bCanUseStructNetSerializer", 0x4, "BoolProperty"},
        }};
    };

    struct Uint16RangeNetSerializerConfig
    {
        static constexpr std::string_view Name = "Uint16RangeNetSerializerConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NetSerializerConfig";
        struct Offsets
        {
            static constexpr std::uintptr_t LowerBound = 0x10;
            static constexpr std::uintptr_t UpperBound = 0x12;
            static constexpr std::uintptr_t BitCount = 0x14;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"LowerBound", 0x10, "UInt16Property"},
            {"UpperBound", 0x12, "UInt16Property"},
            {"BitCount", 0x14, "ByteProperty"},
        }};
    };

    struct Uint32RangeNetSerializerConfig
    {
        static constexpr std::string_view Name = "Uint32RangeNetSerializerConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NetSerializerConfig";
        struct Offsets
        {
            static constexpr std::uintptr_t LowerBound = 0x10;
            static constexpr std::uintptr_t UpperBound = 0x14;
            static constexpr std::uintptr_t BitCount = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"LowerBound", 0x10, "UInt32Property"},
            {"UpperBound", 0x14, "UInt32Property"},
            {"BitCount", 0x18, "ByteProperty"},
        }};
    };

    struct Uint64RangeNetSerializerConfig
    {
        static constexpr std::string_view Name = "Uint64RangeNetSerializerConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NetSerializerConfig";
        struct Offsets
        {
            static constexpr std::uintptr_t LowerBound = 0x10;
            static constexpr std::uintptr_t UpperBound = 0x18;
            static constexpr std::uintptr_t BitCount = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"LowerBound", 0x10, "UInt64Property"},
            {"UpperBound", 0x18, "UInt64Property"},
            {"BitCount", 0x20, "ByteProperty"},
        }};
    };

    struct Uint8RangeNetSerializerConfig
    {
        static constexpr std::string_view Name = "Uint8RangeNetSerializerConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NetSerializerConfig";
        struct Offsets
        {
            static constexpr std::uintptr_t LowerBound = 0x10;
            static constexpr std::uintptr_t UpperBound = 0x11;
            static constexpr std::uintptr_t BitCount = 0x12;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"LowerBound", 0x10, "ByteProperty"},
            {"UpperBound", 0x11, "ByteProperty"},
            {"BitCount", 0x12, "ByteProperty"},
        }};
    };

    struct UintNetSerializerConfig
    {
        static constexpr std::string_view Name = "UintNetSerializerConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NetSerializerConfig";
        struct Offsets
        {
            static constexpr std::uintptr_t BitCount = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"BitCount", 0x10, "ByteProperty"},
        }};
    };

    struct UnitQuat4dNetSerializerConfig
    {
        static constexpr std::string_view Name = "UnitQuat4dNetSerializerConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NetSerializerConfig";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct UnitQuat4fNetSerializerConfig
    {
        static constexpr std::string_view Name = "UnitQuat4fNetSerializerConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NetSerializerConfig";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct UnitQuatNetSerializerConfig
    {
        static constexpr std::string_view Name = "UnitQuatNetSerializerConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NetSerializerConfig";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct Vector3dNetSerializerConfig
    {
        static constexpr std::string_view Name = "Vector3dNetSerializerConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NetSerializerConfig";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct Vector3fNetSerializerConfig
    {
        static constexpr std::string_view Name = "Vector3fNetSerializerConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NetSerializerConfig";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct VectorNetQuantize100NetSerializerConfig
    {
        static constexpr std::string_view Name = "VectorNetQuantize100NetSerializerConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NetSerializerConfig";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct VectorNetQuantize10NetSerializerConfig
    {
        static constexpr std::string_view Name = "VectorNetQuantize10NetSerializerConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NetSerializerConfig";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct VectorNetQuantizeNetSerializerConfig
    {
        static constexpr std::string_view Name = "VectorNetQuantizeNetSerializerConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NetSerializerConfig";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct VectorNetQuantizeNormalNetSerializerConfig
    {
        static constexpr std::string_view Name = "VectorNetQuantizeNormalNetSerializerConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NetSerializerConfig";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct VectorNetSerializerConfig
    {
        static constexpr std::string_view Name = "VectorNetSerializerConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NetSerializerConfig";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct WeakObjectNetSerializerConfig
    {
        static constexpr std::string_view Name = "WeakObjectNetSerializerConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ObjectNetSerializerConfig";
        struct Offsets
        {
            static constexpr std::uintptr_t PropertyClass = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PropertyClass", 0x10, "ClassProperty"},
        }};
    };

    struct WorldLocationsConfig
    {
        static constexpr std::string_view Name = "WorldLocationsConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t MinPos = 0x28;
            static constexpr std::uintptr_t MaxPos = 0x40;
            static constexpr std::uintptr_t MaxNetCullDistance = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"MinPos", 0x28, "StructProperty"},
            {"MaxPos", 0x40, "StructProperty"},
            {"MaxNetCullDistance", 0x58, "FloatProperty"},
        }};
    };

}

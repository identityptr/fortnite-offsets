#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::VariantManagerContent
{
    struct LevelVariantSets
    {
        static constexpr std::string_view Name = "LevelVariantSets";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t DirectorClass = 0x28;
            static constexpr std::uintptr_t VariantSets = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DirectorClass", 0x28, "ClassProperty"},
            {"VariantSets", 0x30, "ArrayProperty"},
        }};
    };

    struct LevelVariantSetsActor
    {
        static constexpr std::string_view Name = "LevelVariantSetsActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t LevelVariantSets = 0x278;
            static constexpr std::uintptr_t DirectorInstances = 0x290;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"LevelVariantSets", 0x278, "StructProperty"},
            {"DirectorInstances", 0x290, "MapProperty"},
        }};
    };

    struct LevelVariantSetsFunctionDirector
    {
        static constexpr std::string_view Name = "LevelVariantSetsFunctionDirector";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PropertyValue
    {
        static constexpr std::string_view Name = "PropertyValue";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Properties = 0x88;
            static constexpr std::uintptr_t PropertyIndices = 0x98;
            static constexpr std::uintptr_t CapturedPropSegments = 0xA8;
            static constexpr std::uintptr_t FullDisplayString = 0xB8;
            static constexpr std::uintptr_t PropertySetterName = 0xC8;
            static constexpr std::uintptr_t PropertySetterParameterDefaults = 0xD0;
            static constexpr std::uintptr_t bHasRecordedData = 0xE0;
            static constexpr std::uintptr_t LeafPropertyClass = 0xE8;
            static constexpr std::uintptr_t ValueBytes = 0xF8;
            static constexpr std::uintptr_t PropCategory = 0x108;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"Properties", 0x88, "ArrayProperty"},
            {"PropertyIndices", 0x98, "ArrayProperty"},
            {"CapturedPropSegments", 0xA8, "ArrayProperty"},
            {"FullDisplayString", 0xB8, "StrProperty"},
            {"PropertySetterName", 0xC8, "NameProperty"},
            {"PropertySetterParameterDefaults", 0xD0, "MapProperty"},
            {"bHasRecordedData", 0xE0, "BoolProperty"},
            {"LeafPropertyClass", 0xE8, "ClassProperty"},
            {"ValueBytes", 0xF8, "ArrayProperty"},
            {"PropCategory", 0x108, "EnumProperty"},
        }};
    };

    struct PropertyValueColor
    {
        static constexpr std::string_view Name = "PropertyValueColor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PropertyValue";
        struct Offsets
        {
            static constexpr std::uintptr_t Properties = 0x88;
            static constexpr std::uintptr_t PropertyIndices = 0x98;
            static constexpr std::uintptr_t CapturedPropSegments = 0xA8;
            static constexpr std::uintptr_t FullDisplayString = 0xB8;
            static constexpr std::uintptr_t PropertySetterName = 0xC8;
            static constexpr std::uintptr_t PropertySetterParameterDefaults = 0xD0;
            static constexpr std::uintptr_t bHasRecordedData = 0xE0;
            static constexpr std::uintptr_t LeafPropertyClass = 0xE8;
            static constexpr std::uintptr_t ValueBytes = 0xF8;
            static constexpr std::uintptr_t PropCategory = 0x108;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"Properties", 0x88, "ArrayProperty"},
            {"PropertyIndices", 0x98, "ArrayProperty"},
            {"CapturedPropSegments", 0xA8, "ArrayProperty"},
            {"FullDisplayString", 0xB8, "StrProperty"},
            {"PropertySetterName", 0xC8, "NameProperty"},
            {"PropertySetterParameterDefaults", 0xD0, "MapProperty"},
            {"bHasRecordedData", 0xE0, "BoolProperty"},
            {"LeafPropertyClass", 0xE8, "ClassProperty"},
            {"ValueBytes", 0xF8, "ArrayProperty"},
            {"PropCategory", 0x108, "EnumProperty"},
        }};
    };

    struct PropertyValueMaterial
    {
        static constexpr std::string_view Name = "PropertyValueMaterial";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PropertyValue";
        struct Offsets
        {
            static constexpr std::uintptr_t Properties = 0x88;
            static constexpr std::uintptr_t PropertyIndices = 0x98;
            static constexpr std::uintptr_t CapturedPropSegments = 0xA8;
            static constexpr std::uintptr_t FullDisplayString = 0xB8;
            static constexpr std::uintptr_t PropertySetterName = 0xC8;
            static constexpr std::uintptr_t PropertySetterParameterDefaults = 0xD0;
            static constexpr std::uintptr_t bHasRecordedData = 0xE0;
            static constexpr std::uintptr_t LeafPropertyClass = 0xE8;
            static constexpr std::uintptr_t ValueBytes = 0xF8;
            static constexpr std::uintptr_t PropCategory = 0x108;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"Properties", 0x88, "ArrayProperty"},
            {"PropertyIndices", 0x98, "ArrayProperty"},
            {"CapturedPropSegments", 0xA8, "ArrayProperty"},
            {"FullDisplayString", 0xB8, "StrProperty"},
            {"PropertySetterName", 0xC8, "NameProperty"},
            {"PropertySetterParameterDefaults", 0xD0, "MapProperty"},
            {"bHasRecordedData", 0xE0, "BoolProperty"},
            {"LeafPropertyClass", 0xE8, "ClassProperty"},
            {"ValueBytes", 0xF8, "ArrayProperty"},
            {"PropCategory", 0x108, "EnumProperty"},
        }};
    };

    struct PropertyValueOption
    {
        static constexpr std::string_view Name = "PropertyValueOption";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PropertyValue";
        struct Offsets
        {
            static constexpr std::uintptr_t Properties = 0x88;
            static constexpr std::uintptr_t PropertyIndices = 0x98;
            static constexpr std::uintptr_t CapturedPropSegments = 0xA8;
            static constexpr std::uintptr_t FullDisplayString = 0xB8;
            static constexpr std::uintptr_t PropertySetterName = 0xC8;
            static constexpr std::uintptr_t PropertySetterParameterDefaults = 0xD0;
            static constexpr std::uintptr_t bHasRecordedData = 0xE0;
            static constexpr std::uintptr_t LeafPropertyClass = 0xE8;
            static constexpr std::uintptr_t ValueBytes = 0xF8;
            static constexpr std::uintptr_t PropCategory = 0x108;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"Properties", 0x88, "ArrayProperty"},
            {"PropertyIndices", 0x98, "ArrayProperty"},
            {"CapturedPropSegments", 0xA8, "ArrayProperty"},
            {"FullDisplayString", 0xB8, "StrProperty"},
            {"PropertySetterName", 0xC8, "NameProperty"},
            {"PropertySetterParameterDefaults", 0xD0, "MapProperty"},
            {"bHasRecordedData", 0xE0, "BoolProperty"},
            {"LeafPropertyClass", 0xE8, "ClassProperty"},
            {"ValueBytes", 0xF8, "ArrayProperty"},
            {"PropCategory", 0x108, "EnumProperty"},
        }};
    };

    struct PropertyValueSoftObject
    {
        static constexpr std::string_view Name = "PropertyValueSoftObject";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PropertyValue";
        struct Offsets
        {
            static constexpr std::uintptr_t Properties = 0x88;
            static constexpr std::uintptr_t PropertyIndices = 0x98;
            static constexpr std::uintptr_t CapturedPropSegments = 0xA8;
            static constexpr std::uintptr_t FullDisplayString = 0xB8;
            static constexpr std::uintptr_t PropertySetterName = 0xC8;
            static constexpr std::uintptr_t PropertySetterParameterDefaults = 0xD0;
            static constexpr std::uintptr_t bHasRecordedData = 0xE0;
            static constexpr std::uintptr_t LeafPropertyClass = 0xE8;
            static constexpr std::uintptr_t ValueBytes = 0xF8;
            static constexpr std::uintptr_t PropCategory = 0x108;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"Properties", 0x88, "ArrayProperty"},
            {"PropertyIndices", 0x98, "ArrayProperty"},
            {"CapturedPropSegments", 0xA8, "ArrayProperty"},
            {"FullDisplayString", 0xB8, "StrProperty"},
            {"PropertySetterName", 0xC8, "NameProperty"},
            {"PropertySetterParameterDefaults", 0xD0, "MapProperty"},
            {"bHasRecordedData", 0xE0, "BoolProperty"},
            {"LeafPropertyClass", 0xE8, "ClassProperty"},
            {"ValueBytes", 0xF8, "ArrayProperty"},
            {"PropCategory", 0x108, "EnumProperty"},
        }};
    };

    struct PropertyValueTransform
    {
        static constexpr std::string_view Name = "PropertyValueTransform";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PropertyValue";
        struct Offsets
        {
            static constexpr std::uintptr_t Properties = 0x88;
            static constexpr std::uintptr_t PropertyIndices = 0x98;
            static constexpr std::uintptr_t CapturedPropSegments = 0xA8;
            static constexpr std::uintptr_t FullDisplayString = 0xB8;
            static constexpr std::uintptr_t PropertySetterName = 0xC8;
            static constexpr std::uintptr_t PropertySetterParameterDefaults = 0xD0;
            static constexpr std::uintptr_t bHasRecordedData = 0xE0;
            static constexpr std::uintptr_t LeafPropertyClass = 0xE8;
            static constexpr std::uintptr_t ValueBytes = 0xF8;
            static constexpr std::uintptr_t PropCategory = 0x108;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"Properties", 0x88, "ArrayProperty"},
            {"PropertyIndices", 0x98, "ArrayProperty"},
            {"CapturedPropSegments", 0xA8, "ArrayProperty"},
            {"FullDisplayString", 0xB8, "StrProperty"},
            {"PropertySetterName", 0xC8, "NameProperty"},
            {"PropertySetterParameterDefaults", 0xD0, "MapProperty"},
            {"bHasRecordedData", 0xE0, "BoolProperty"},
            {"LeafPropertyClass", 0xE8, "ClassProperty"},
            {"ValueBytes", 0xF8, "ArrayProperty"},
            {"PropCategory", 0x108, "EnumProperty"},
        }};
    };

    struct PropertyValueVisibility
    {
        static constexpr std::string_view Name = "PropertyValueVisibility";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PropertyValue";
        struct Offsets
        {
            static constexpr std::uintptr_t Properties = 0x88;
            static constexpr std::uintptr_t PropertyIndices = 0x98;
            static constexpr std::uintptr_t CapturedPropSegments = 0xA8;
            static constexpr std::uintptr_t FullDisplayString = 0xB8;
            static constexpr std::uintptr_t PropertySetterName = 0xC8;
            static constexpr std::uintptr_t PropertySetterParameterDefaults = 0xD0;
            static constexpr std::uintptr_t bHasRecordedData = 0xE0;
            static constexpr std::uintptr_t LeafPropertyClass = 0xE8;
            static constexpr std::uintptr_t ValueBytes = 0xF8;
            static constexpr std::uintptr_t PropCategory = 0x108;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"Properties", 0x88, "ArrayProperty"},
            {"PropertyIndices", 0x98, "ArrayProperty"},
            {"CapturedPropSegments", 0xA8, "ArrayProperty"},
            {"FullDisplayString", 0xB8, "StrProperty"},
            {"PropertySetterName", 0xC8, "NameProperty"},
            {"PropertySetterParameterDefaults", 0xD0, "MapProperty"},
            {"bHasRecordedData", 0xE0, "BoolProperty"},
            {"LeafPropertyClass", 0xE8, "ClassProperty"},
            {"ValueBytes", 0xF8, "ArrayProperty"},
            {"PropCategory", 0x108, "EnumProperty"},
        }};
    };

    struct SwitchActor
    {
        static constexpr std::string_view Name = "SwitchActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t SceneComponent = 0x290;
            static constexpr std::uintptr_t LastSelectedOption = 0x298;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SceneComponent", 0x290, "ObjectProperty"},
            {"LastSelectedOption", 0x298, "IntProperty"},
        }};
    };

    struct Variant
    {
        static constexpr std::string_view Name = "Variant";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Dependencies = 0x28;
            static constexpr std::uintptr_t DisplayText = 0x38;
            static constexpr std::uintptr_t ObjectBindings = 0x58;
            static constexpr std::uintptr_t Thumbnail = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Dependencies", 0x28, "ArrayProperty"},
            {"DisplayText", 0x38, "TextProperty"},
            {"ObjectBindings", 0x58, "ArrayProperty"},
            {"Thumbnail", 0x68, "ObjectProperty"},
        }};
    };

    struct VariantObjectBinding
    {
        static constexpr std::string_view Name = "VariantObjectBinding";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedActorLabel = 0x28;
            static constexpr std::uintptr_t ObjectPtr = 0x38;
            static constexpr std::uintptr_t LazyObjectPtr = 0x50;
            static constexpr std::uintptr_t CapturedProperties = 0x68;
            static constexpr std::uintptr_t FunctionCallers = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"CachedActorLabel", 0x28, "StrProperty"},
            {"ObjectPtr", 0x38, "StructProperty"},
            {"LazyObjectPtr", 0x50, "LazyObjectProperty"},
            {"CapturedProperties", 0x68, "ArrayProperty"},
            {"FunctionCallers", 0x78, "ArrayProperty"},
        }};
    };

    struct VariantSet
    {
        static constexpr std::string_view Name = "VariantSet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t DisplayText = 0x28;
            static constexpr std::uintptr_t bExpanded = 0x48;
            static constexpr std::uintptr_t Variants = 0x50;
            static constexpr std::uintptr_t Thumbnail = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"DisplayText", 0x28, "TextProperty"},
            {"bExpanded", 0x48, "BoolProperty"},
            {"Variants", 0x50, "ArrayProperty"},
            {"Thumbnail", 0x60, "ObjectProperty"},
        }};
    };

}

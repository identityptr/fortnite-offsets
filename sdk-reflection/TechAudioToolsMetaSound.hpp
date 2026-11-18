#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::TechAudioToolsMetaSound
{
    struct MetaSoundInputViewModel
    {
        static constexpr std::string_view Name = "MetaSoundInputViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsInitialized = 0x68;
            static constexpr std::uintptr_t InputName = 0x6C;
            static constexpr std::uintptr_t DataType = 0x70;
            static constexpr std::uintptr_t bIsArray = 0x74;
            static constexpr std::uintptr_t bIsConstructorPin = 0x75;
            static constexpr std::uintptr_t Literal = 0x78;
            static constexpr std::uintptr_t LiteralType = 0xD0;
            static constexpr std::uintptr_t bOverridesDefault = 0xD1;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"bIsInitialized", 0x68, "BoolProperty"},
            {"InputName", 0x6C, "NameProperty"},
            {"DataType", 0x70, "NameProperty"},
            {"bIsArray", 0x74, "BoolProperty"},
            {"bIsConstructorPin", 0x75, "BoolProperty"},
            {"Literal", 0x78, "StructProperty"},
            {"LiteralType", 0xD0, "EnumProperty"},
            {"bOverridesDefault", 0xD1, "BoolProperty"},
        }};
    };

    struct MetaSoundLiteralViewModel_Boolean
    {
        static constexpr std::string_view Name = "MetaSoundLiteralViewModel_Boolean";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Literal = 0x68;
            static constexpr std::uintptr_t SourceValue = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Literal", 0x68, "StructProperty"},
            {"SourceValue", 0xC0, "BoolProperty"},
        }};
    };

    struct MetaSoundLiteralViewModel_BooleanArray
    {
        static constexpr std::string_view Name = "MetaSoundLiteralViewModel_BooleanArray";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Literal = 0x68;
            static constexpr std::uintptr_t SourceValue = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Literal", 0x68, "StructProperty"},
            {"SourceValue", 0xC0, "ArrayProperty"},
        }};
    };

    struct MetaSoundLiteralViewModel_Float
    {
        static constexpr std::string_view Name = "MetaSoundLiteralViewModel_Float";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bShowDisplayValues = 0x68;
            static constexpr std::uintptr_t Literal = 0x70;
            static constexpr std::uintptr_t SourceValue = 0xC8;
            static constexpr std::uintptr_t NormalizedValue = 0xCC;
            static constexpr std::uintptr_t DisplayValue = 0xD0;
            static constexpr std::uintptr_t RangeValues = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"bShowDisplayValues", 0x68, "BoolProperty"},
            {"Literal", 0x70, "StructProperty"},
            {"SourceValue", 0xC8, "FloatProperty"},
            {"NormalizedValue", 0xCC, "FloatProperty"},
            {"DisplayValue", 0xD0, "FloatProperty"},
            {"RangeValues", 0xD8, "ObjectProperty"},
        }};
    };

    struct MetaSoundLiteralViewModel_FloatArray
    {
        static constexpr std::string_view Name = "MetaSoundLiteralViewModel_FloatArray";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Literal = 0x68;
            static constexpr std::uintptr_t SourceValue = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Literal", 0x68, "StructProperty"},
            {"SourceValue", 0xC0, "ArrayProperty"},
        }};
    };

    struct MetaSoundLiteralViewModel_Integer
    {
        static constexpr std::string_view Name = "MetaSoundLiteralViewModel_Integer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Literal = 0x68;
            static constexpr std::uintptr_t SourceValue = 0xC0;
            static constexpr std::uintptr_t NormalizedValue = 0xC4;
            static constexpr std::uintptr_t Range = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Literal", 0x68, "StructProperty"},
            {"SourceValue", 0xC0, "IntProperty"},
            {"NormalizedValue", 0xC4, "FloatProperty"},
            {"Range", 0xC8, "StructProperty"},
        }};
    };

    struct MetaSoundLiteralViewModel_IntegerArray
    {
        static constexpr std::string_view Name = "MetaSoundLiteralViewModel_IntegerArray";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Literal = 0x68;
            static constexpr std::uintptr_t SourceValue = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Literal", 0x68, "StructProperty"},
            {"SourceValue", 0xC0, "ArrayProperty"},
        }};
    };

    struct MetaSoundLiteralViewModel_Object
    {
        static constexpr std::string_view Name = "MetaSoundLiteralViewModel_Object";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Literal = 0x68;
            static constexpr std::uintptr_t SourceValue = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Literal", 0x68, "StructProperty"},
            {"SourceValue", 0xC0, "ObjectProperty"},
        }};
    };

    struct MetaSoundLiteralViewModel_ObjectArray
    {
        static constexpr std::string_view Name = "MetaSoundLiteralViewModel_ObjectArray";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Literal = 0x68;
            static constexpr std::uintptr_t SourceValue = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Literal", 0x68, "StructProperty"},
            {"SourceValue", 0xC0, "ArrayProperty"},
        }};
    };

    struct MetaSoundLiteralViewModel_String
    {
        static constexpr std::string_view Name = "MetaSoundLiteralViewModel_String";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Literal = 0x68;
            static constexpr std::uintptr_t SourceValue = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Literal", 0x68, "StructProperty"},
            {"SourceValue", 0xC0, "StrProperty"},
        }};
    };

    struct MetaSoundLiteralViewModel_StringArray
    {
        static constexpr std::string_view Name = "MetaSoundLiteralViewModel_StringArray";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Literal = 0x68;
            static constexpr std::uintptr_t SourceValue = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Literal", 0x68, "StructProperty"},
            {"SourceValue", 0xC0, "ArrayProperty"},
        }};
    };

    struct MetaSoundLiteralWidgetInterface
    {
        static constexpr std::string_view Name = "MetaSoundLiteralWidgetInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MetaSoundOutputViewModel
    {
        static constexpr std::string_view Name = "MetaSoundOutputViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsInitialized = 0x68;
            static constexpr std::uintptr_t OutputName = 0x6C;
            static constexpr std::uintptr_t DataType = 0x70;
            static constexpr std::uintptr_t bIsArray = 0x74;
            static constexpr std::uintptr_t bIsConstructorPin = 0x75;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"bIsInitialized", 0x68, "BoolProperty"},
            {"OutputName", 0x6C, "NameProperty"},
            {"DataType", 0x70, "NameProperty"},
            {"bIsArray", 0x74, "BoolProperty"},
            {"bIsConstructorPin", 0x75, "BoolProperty"},
        }};
    };

    struct MetaSoundViewModel
    {
        static constexpr std::string_view Name = "MetaSoundViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsInitialized = 0x68;
            static constexpr std::uintptr_t bIsPreset = 0x69;
            static constexpr std::uintptr_t Builder = 0x70;
            static constexpr std::uintptr_t InputViewModels = 0x78;
            static constexpr std::uintptr_t OutputViewModels = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"bIsInitialized", 0x68, "BoolProperty"},
            {"bIsPreset", 0x69, "BoolProperty"},
            {"Builder", 0x70, "ObjectProperty"},
            {"InputViewModels", 0x78, "MapProperty"},
            {"OutputViewModels", 0x88, "MapProperty"},
        }};
    };

    struct MetaSoundViewModelConversionFunctions
    {
        static constexpr std::string_view Name = "MetaSoundViewModelConversionFunctions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}

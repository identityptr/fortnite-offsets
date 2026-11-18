#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::ACLPlugin
{
    struct AnimBoneCompressionCodec_ACL
    {
        static constexpr std::string_view Name = "AnimBoneCompressionCodec_ACL";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimBoneCompressionCodec_ACLBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Description = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Description", 0x28, "StrProperty"},
        }};
    };

    struct AnimBoneCompressionCodec_ACLBase
    {
        static constexpr std::string_view Name = "AnimBoneCompressionCodec_ACLBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimBoneCompressionCodec";
        struct Offsets
        {
            static constexpr std::uintptr_t Description = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Description", 0x28, "StrProperty"},
        }};
    };

    struct AnimBoneCompressionCodec_ACLCustom
    {
        static constexpr std::string_view Name = "AnimBoneCompressionCodec_ACLCustom";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimBoneCompressionCodec_ACLBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Description = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Description", 0x28, "StrProperty"},
        }};
    };

    struct AnimBoneCompressionCodec_ACLDatabase
    {
        static constexpr std::string_view Name = "AnimBoneCompressionCodec_ACLDatabase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimBoneCompressionCodec_ACLBase";
        struct Offsets
        {
            static constexpr std::uintptr_t DatabaseAsset = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DatabaseAsset", 0x38, "ObjectProperty"},
        }};
    };

    struct AnimBoneCompressionCodec_ACLSafe
    {
        static constexpr std::string_view Name = "AnimBoneCompressionCodec_ACLSafe";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimBoneCompressionCodec_ACLBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Description = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Description", 0x28, "StrProperty"},
        }};
    };

    struct AnimCurveCompressionCodec_ACL
    {
        static constexpr std::string_view Name = "AnimCurveCompressionCodec_ACL";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimCurveCompressionCodec";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AnimationCompressionLibraryDatabase
    {
        static constexpr std::string_view Name = "AnimationCompressionLibraryDatabase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t CookedCompressedBytes = 0x28;
            static constexpr std::uintptr_t CookedAnimSequenceMappings = 0x38;
            static constexpr std::uintptr_t MaxStreamRequestSizeKB = 0x120;
            static constexpr std::uintptr_t DefaultVisualFidelity = 0x124;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"CookedCompressedBytes", 0x28, "ArrayProperty"},
            {"CookedAnimSequenceMappings", 0x38, "ArrayProperty"},
            {"MaxStreamRequestSizeKB", 0x120, "UInt32Property"},
            {"DefaultVisualFidelity", 0x124, "EnumProperty"},
        }};
    };

}

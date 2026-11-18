#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::CRDLevelInstanceRuntime
{
    struct FortAthenaMutator_LevelInstanceDevice
    {
        static constexpr std::string_view Name = "FortAthenaMutator_LevelInstanceDevice";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaMutator";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedGameplayVolume = 0x2F0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CachedGameplayVolume", 0x2F0, "WeakObjectProperty"},
        }};
    };

    struct LevelInstanceGameplayVolume
    {
        static constexpr std::string_view Name = "LevelInstanceGameplayVolume";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameplayVolume";
        struct Offsets
        {
            static constexpr std::uintptr_t OnLevelInstanceResolved = 0x348;
            static constexpr std::uintptr_t OnDisabledStateChanged = 0x388;
            static constexpr std::uintptr_t OnLevelInstanceGuidChanged = 0x398;
            static constexpr std::uintptr_t OnLevelInstanceNameChanged = 0x3A8;
            static constexpr std::uintptr_t OnLevelInstanceSizeChanged = 0x3B8;
            static constexpr std::uintptr_t OnLevelInstanceContentCollectionChanged = 0x3C8;
            static constexpr std::uintptr_t bEditMode = 0x3D9;
            static constexpr std::uintptr_t bDisabled = 0x3DA;
            static constexpr std::uintptr_t LoadingState = 0x3DB;
            static constexpr std::uintptr_t LevelInstanceName = 0x3E0;
            static constexpr std::uintptr_t bInstanceLoaded = 0x3F0;
            static constexpr std::uintptr_t bWantsLevelLoaded = 0x3F1;
            static constexpr std::uintptr_t bConvertStructuresToProps = 0x3F3;
            static constexpr std::uintptr_t CachedMinigame = 0x3F8;
            static constexpr std::uintptr_t MutatorListComponent = 0x400;
            static constexpr std::uintptr_t ClassFilterComponent = 0x408;
            static constexpr std::uintptr_t BlacklistedClasses = 0x410;
            static constexpr std::uintptr_t LevelInstanceSaveActorGuid = 0x430;
            static constexpr std::uintptr_t LevelInstanceSaveActor = 0x440;
        };

        inline static constexpr std::array<PropertyInfo, 19> Properties{{
            {"OnLevelInstanceResolved", 0x348, "MulticastInlineDelegateProperty"},
            {"OnDisabledStateChanged", 0x388, "MulticastInlineDelegateProperty"},
            {"OnLevelInstanceGuidChanged", 0x398, "MulticastInlineDelegateProperty"},
            {"OnLevelInstanceNameChanged", 0x3A8, "MulticastInlineDelegateProperty"},
            {"OnLevelInstanceSizeChanged", 0x3B8, "MulticastInlineDelegateProperty"},
            {"OnLevelInstanceContentCollectionChanged", 0x3C8, "MulticastInlineDelegateProperty"},
            {"bEditMode", 0x3D9, "BoolProperty"},
            {"bDisabled", 0x3DA, "BoolProperty"},
            {"LoadingState", 0x3DB, "EnumProperty"},
            {"LevelInstanceName", 0x3E0, "StrProperty"},
            {"bInstanceLoaded", 0x3F0, "BoolProperty"},
            {"bWantsLevelLoaded", 0x3F1, "BoolProperty"},
            {"bConvertStructuresToProps", 0x3F3, "BoolProperty"},
            {"CachedMinigame", 0x3F8, "ObjectProperty"},
            {"MutatorListComponent", 0x400, "ObjectProperty"},
            {"ClassFilterComponent", 0x408, "ObjectProperty"},
            {"BlacklistedClasses", 0x410, "ArrayProperty"},
            {"LevelInstanceSaveActorGuid", 0x430, "StructProperty"},
            {"LevelInstanceSaveActor", 0x440, "ObjectProperty"},
        }};
    };

    struct LevelInstanceItemListComponent
    {
        static constexpr std::string_view Name = "LevelInstanceItemListComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMinigameItemContainerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bHideInActorDetails = 0xE8;
            static constexpr std::uintptr_t EmptyFilterTags = 0xF0;
            static constexpr std::uintptr_t NonEmptyFilterTags = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bHideInActorDetails", 0xE8, "BoolProperty"},
            {"EmptyFilterTags", 0xF0, "StructProperty"},
            {"NonEmptyFilterTags", 0x110, "StructProperty"},
        }};
    };

}

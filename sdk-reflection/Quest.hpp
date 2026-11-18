#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::Quest
{
    struct CachedQuestView
    {
        static constexpr std::string_view Name = "CachedQuestView";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t InstancedQuestView = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InstancedQuestView", 0x8, "StructProperty"},
        }};
    };

    struct CachedQuestViewHandle
    {
        static constexpr std::string_view Name = "CachedQuestViewHandle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct CachedQuestViewTest_DerivedView
    {
        static constexpr std::string_view Name = "CachedQuestViewTest_DerivedView";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "QuestView";
        struct Offsets
        {
            static constexpr std::uintptr_t QuestID = 0x8;
            static constexpr std::uintptr_t QuestState = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"QuestID", 0x8, "StructProperty"},
            {"QuestState", 0x18, "EnumProperty"},
        }};
    };

    struct FailedQuestCompletionContext
    {
        static constexpr std::string_view Name = "FailedQuestCompletionContext";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "QuestCompletionContext";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MutableCachedQuestViewHandle
    {
        static constexpr std::string_view Name = "MutableCachedQuestViewHandle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "CachedQuestViewHandle";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct NativeQuestMembership
    {
        static constexpr std::string_view Name = "NativeQuestMembership";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "QuestMembershipEntry";
        struct Offsets
        {
            static constexpr std::uintptr_t Quest = 0x8;
            static constexpr std::uintptr_t Participant = 0x18;
            static constexpr std::uintptr_t Info = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Quest", 0x8, "InterfaceProperty"},
            {"Participant", 0x18, "InterfaceProperty"},
            {"Info", 0x28, "StructProperty"},
        }};
    };

    struct NativeQuestParticipationInfo
    {
        static constexpr std::string_view Name = "NativeQuestParticipationInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "QuestParticipationInfo";
        struct Offsets
        {
            static constexpr std::uintptr_t bContributes = 0x8;
            static constexpr std::uintptr_t bObserves = 0x9;
            static constexpr std::uintptr_t bReceives = 0xA;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bContributes", 0x8, "BoolProperty"},
            {"bObserves", 0x9, "BoolProperty"},
            {"bReceives", 0xA, "BoolProperty"},
        }};
    };

    struct ObjectiveDefinition
    {
        static constexpr std::string_view Name = "ObjectiveDefinition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PlayerControllerComponent_QuestManager
    {
        static constexpr std::string_view Name = "PlayerControllerComponent_QuestManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t QuestManagerClass = 0xC0;
            static constexpr std::uintptr_t QuestManager = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"QuestManagerClass", 0xC0, "ClassProperty"},
            {"QuestManager", 0xC8, "InterfaceProperty"},
        }};
    };

    struct PlayerControllerComponent_QuestParticipant
    {
        static constexpr std::string_view Name = "PlayerControllerComponent_QuestParticipant";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t QuestParticipantClass = 0xC0;
            static constexpr std::uintptr_t Participant = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"QuestParticipantClass", 0xC0, "ClassProperty"},
            {"Participant", 0xC8, "InterfaceProperty"},
        }};
    };

    struct PlayerQuestParticipant
    {
        static constexpr std::string_view Name = "PlayerQuestParticipant";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t ParticipatingQuestObjects = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ParticipatingQuestObjects", 0x38, "ArrayProperty"},
        }};
    };

    struct Quest
    {
        static constexpr std::string_view Name = "Quest";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct QuestBase
    {
        static constexpr std::string_view Name = "QuestBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ObjectiveBase";
        struct Offsets
        {
            static constexpr std::uintptr_t OwningManager = 0x100;
            static constexpr std::uintptr_t OwningCollection = 0x110;
            static constexpr std::uintptr_t OwningDefinition = 0x120;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"OwningManager", 0x100, "InterfaceProperty"},
            {"OwningCollection", 0x110, "InterfaceProperty"},
            {"OwningDefinition", 0x120, "InterfaceProperty"},
        }};
    };

    struct QuestBundle
    {
        static constexpr std::string_view Name = "QuestBundle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct QuestBundleUID
    {
        static constexpr std::string_view Name = "QuestBundleUID";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t InternalUID = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InternalUID", 0x0, "StructProperty"},
        }};
    };

    struct QuestBundleView
    {
        static constexpr std::string_view Name = "QuestBundleView";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t BundleUID = 0x0;
            static constexpr std::uintptr_t BundledQuestUIDs = 0x10;
            static constexpr std::uintptr_t CompletedQuestCount = 0x20;
            static constexpr std::uintptr_t bIsComplete = 0x24;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"BundleUID", 0x0, "StructProperty"},
            {"BundledQuestUIDs", 0x10, "ArrayProperty"},
            {"CompletedQuestCount", 0x20, "IntProperty"},
            {"bIsComplete", 0x24, "BoolProperty"},
        }};
    };

    struct QuestCollection
    {
        static constexpr std::string_view Name = "QuestCollection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct QuestCollectionBase
    {
        static constexpr std::string_view Name = "QuestCollectionBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Memberships = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Memberships", 0xA8, "ArrayProperty"},
        }};
    };

    struct QuestCompletionContext
    {
        static constexpr std::string_view Name = "QuestCompletionContext";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct QuestDefinition
    {
        static constexpr std::string_view Name = "QuestDefinition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct QuestFilterEntry
    {
        static constexpr std::string_view Name = "QuestFilterEntry";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t FilterObject = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"FilterObject", 0x10, "ObjectProperty"},
        }};
    };

    struct QuestGrantParameters
    {
        static constexpr std::string_view Name = "QuestGrantParameters";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t QuestType = 0x0;
            static constexpr std::uintptr_t QuestDefinition = 0x8;
            static constexpr std::uintptr_t QuestUID = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"QuestType", 0x0, "ClassProperty"},
            {"QuestDefinition", 0x8, "InterfaceProperty"},
            {"QuestUID", 0x18, "StructProperty"},
        }};
    };

    struct QuestGranter
    {
        static constexpr std::string_view Name = "QuestGranter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct QuestManager
    {
        static constexpr std::string_view Name = "QuestManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct QuestManagerBase
    {
        static constexpr std::string_view Name = "QuestManagerBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t ManagedQuestObjects = 0x60;
            static constexpr std::uintptr_t Collection = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ManagedQuestObjects", 0x60, "ArrayProperty"},
            {"Collection", 0x70, "ObjectProperty"},
        }};
    };

    struct QuestMembershipEntry
    {
        static constexpr std::string_view Name = "QuestMembershipEntry";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct QuestParticipant
    {
        static constexpr std::string_view Name = "QuestParticipant";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct QuestParticipationInfo
    {
        static constexpr std::string_view Name = "QuestParticipationInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct QuestReplicationFilterObject
    {
        static constexpr std::string_view Name = "QuestReplicationFilterObject";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t QuestUID = 0x278;
            static constexpr std::uintptr_t View = 0x288;
            static constexpr std::uintptr_t TrackedObservers = 0x2A0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"QuestUID", 0x278, "StructProperty"},
            {"View", 0x288, "StructProperty"},
            {"TrackedObservers", 0x2A0, "SetProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "OnRep_View",
        }};
    };

    struct QuestReward
    {
        static constexpr std::string_view Name = "QuestReward";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct QuestRewardDefinition
    {
        static constexpr std::string_view Name = "QuestRewardDefinition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct QuestRewardUID
    {
        static constexpr std::string_view Name = "QuestRewardUID";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t InternalUID = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InternalUID", 0x0, "StructProperty"},
        }};
    };

    struct QuestRewardView
    {
        static constexpr std::string_view Name = "QuestRewardView";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t RewardUID = 0x8;
            static constexpr std::uintptr_t Name = 0x18;
            static constexpr std::uintptr_t Description = 0x28;
            static constexpr std::uintptr_t ShortDescription = 0x38;
            static constexpr std::uintptr_t Icon = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"RewardUID", 0x8, "StructProperty"},
            {"Name", 0x18, "TextProperty"},
            {"Description", 0x28, "TextProperty"},
            {"ShortDescription", 0x38, "TextProperty"},
            {"Icon", 0x48, "SoftObjectProperty"},
        }};
    };

    struct QuestSubsystem
    {
        static constexpr std::string_view Name = "QuestSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t QuestFilters = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"QuestFilters", 0x50, "MapProperty"},
        }};
    };

    struct QuestUID
    {
        static constexpr std::string_view Name = "QuestUID";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t InternalUID = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InternalUID", 0x0, "StructProperty"},
        }};
    };

    struct QuestView
    {
        static constexpr std::string_view Name = "QuestView";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t QuestID = 0x8;
            static constexpr std::uintptr_t QuestState = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"QuestID", 0x8, "StructProperty"},
            {"QuestState", 0x18, "EnumProperty"},
        }};
    };

    struct QuestViewSubsystem
    {
        static constexpr std::string_view Name = "QuestViewSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SnapshotExtensionViewFactory
    {
        static constexpr std::string_view Name = "SnapshotExtensionViewFactory";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SnapshotObjectiveViewFactory
    {
        static constexpr std::string_view Name = "SnapshotObjectiveViewFactory";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SnapshotQuestViewFactory
    {
        static constexpr std::string_view Name = "SnapshotQuestViewFactory";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SnapshotRewardViewFactory
    {
        static constexpr std::string_view Name = "SnapshotRewardViewFactory";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct VerseQuestBundle
    {
        static constexpr std::string_view Name = "VerseQuestBundle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct VerseQuestCollection
    {
        static constexpr std::string_view Name = "VerseQuestCollection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct VerseQuestMembership
    {
        static constexpr std::string_view Name = "VerseQuestMembership";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "QuestMembershipEntry";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct VerseQuestParticipant
    {
        static constexpr std::string_view Name = "VerseQuestParticipant";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct VerseQuestParticipationInfo
    {
        static constexpr std::string_view Name = "VerseQuestParticipationInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "QuestParticipationInfo";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}

#pragma once

// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_ActionStateMachine_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ActionStateMachine.ActionStateId
// 0x0000 (0x0028 - 0x0028)
class UActionStateId : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ActionStateMachine.ActionStateId");
		return ptr;
	}

};


// Class ActionStateMachine.ActionStateCreatorDefinition
// 0x0000 (0x0490 - 0x0490)
class AActionStateCreatorDefinition : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ActionStateMachine.ActionStateCreatorDefinition");
		return ptr;
	}

};


// Class ActionStateMachine.TestActionStateCreatorDefinition
// 0x0018 (0x04A8 - 0x0490)
class ATestActionStateCreatorDefinition : public AActionStateCreatorDefinition
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0490(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ActionStateMachine.TestActionStateCreatorDefinition");
		return ptr;
	}

};


// Class ActionStateMachine.CustomClientValidityActionState2Id
// 0x0000 (0x0028 - 0x0028)
class UCustomClientValidityActionState2Id : public UActionStateId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ActionStateMachine.CustomClientValidityActionState2Id");
		return ptr;
	}

};


// Class ActionStateMachine.CustomClientValidityActionStateId
// 0x0000 (0x0028 - 0x0028)
class UCustomClientValidityActionStateId : public UActionStateId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ActionStateMachine.CustomClientValidityActionStateId");
		return ptr;
	}

};


// Class ActionStateMachine.NullActionStateId
// 0x0000 (0x0028 - 0x0028)
class UNullActionStateId : public UActionStateId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ActionStateMachine.NullActionStateId");
		return ptr;
	}

};


// Class ActionStateMachine.TestActionStateId
// 0x0000 (0x0028 - 0x0028)
class UTestActionStateId : public UActionStateId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ActionStateMachine.TestActionStateId");
		return ptr;
	}

};


// Class ActionStateMachine.TestActionStateId2
// 0x0000 (0x0028 - 0x0028)
class UTestActionStateId2 : public UActionStateId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ActionStateMachine.TestActionStateId2");
		return ptr;
	}

};


// Class ActionStateMachine.ActionStateMachineComponent
// 0x07B8 (0x0890 - 0x00D8)
class UActionStateMachineComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x00D8(0x0048) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnActionChangedOnTrack;                                   // 0x0120(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x760];                                     // 0x0130(0x0760) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ActionStateMachine.ActionStateMachineComponent");
		return ptr;
	}


	void Server_RequestAction(const struct FActionStateChangeRequestId& InEpochId, const struct FActionStateChangeRequestId& InRequestId, const struct FSerialisedActionStateInfo& InSerialisedActionStateConstructionInfo, TEnumAsByte<EActionPredictionType> ClientPredicted);
	void PostNetInit();
	void OnNetOwnershipChanged();
	void Multicast_PushSerialisableData(const struct FActionStateChangeRequestId& InEpochId, const struct FSerialisedActionStateInfo& InSerialisedActionStateSerialisationStateInfo);
	void Multicast_PushActionFromRequest(const struct FActionStateChangeRequestId& InEpochId, const struct FSerialisedActionStateInfo& InSerialisedActionStateConstructionInfo);
	void Multicast_PushAction(const struct FActionStateChangeRequestId& InEpochId, const struct FSerialisedActionStateInfo& InSerialisedActionStateConstructionInfo);
	void End();
	void Client_ResetStateMachine(const struct FResetStateMachineRpc& Rpc);
	void Client_CorrectAction(const struct FActionStateChangeRequestId& InEpochId, const struct FActionStateChangeRequestId& InRequestId, const struct FSerialisedActionStateInfo& InSerialisedActionStateConstructionInfo);
};


// Class ActionStateMachine.TestActionStateMachineComponent
// 0x0018 (0x08A8 - 0x0890)
class UTestActionStateMachineComponent : public UActionStateMachineComponent
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0890(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ActionStateMachine.TestActionStateMachineComponent");
		return ptr;
	}

};


// Class ActionStateMachine.CustomClientValidityCheckCallback
// 0x0008 (0x0030 - 0x0028)
class UCustomClientValidityCheckCallback : public UObject
{
public:
	bool                                               ShouldPassClientValidation;                               // 0x0028(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ActionStateMachine.CustomClientValidityCheckCallback");
		return ptr;
	}

};


// Class ActionStateMachine.ActionStateMachineComponentTestFunctions
// 0x0000 (0x0028 - 0x0028)
class UActionStateMachineComponentTestFunctions : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ActionStateMachine.ActionStateMachineComponentTestFunctions");
		return ptr;
	}


	bool STATIC_SetTestStateValidatorThatAlwaysPassesExceptForId(class UActionStateMachineComponent* InComponent, class UClass* StateId);
	bool STATIC_SetTestStateValidatorThatAlwaysPasses(class UActionStateMachineComponent* InComponent);
	bool STATIC_SetTestStateValidatorThatAlwaysFails(class UActionStateMachineComponent* InComponent);
	bool STATIC_SetTestStateFactoryChangeToNullOnUpdate(class UActionStateMachineComponent* InComponent);
	bool STATIC_SetTestStateFactory(class UActionStateMachineComponent* InComponent);
	bool STATIC_SetCustomClientValidationTestStateFactory(class UActionStateMachineComponent* InComponent, class UCustomClientValidityCheckCallback* InCallback);
	bool STATIC_RequestUnpredictedTestActionStateWithIdOnTrack(class UActionStateMachineComponent* InComponent, TEnumAsByte<EActionStateMachineTrackId> TrackId, class UClass* ClientStateId, class UClass* ServerStateId);
	bool STATIC_RequestTestActionStateWithIdOnTrack(class UActionStateMachineComponent* InComponent, TEnumAsByte<EActionStateMachineTrackId> TrackId, class UClass* StateId);
	bool STATIC_RequestNullActionStateOnTrack(class UActionStateMachineComponent* InComponent, TEnumAsByte<EActionStateMachineTrackId> TrackId);
	void STATIC_PushTestActionStateSerialisableDataOnTrack(class UActionStateMachineComponent* InComponent, TEnumAsByte<EActionStateMachineTrackId> TrackId, class UClass* StateId, int DataValue);
	bool STATIC_IsActionStateTypeActiveOnTrack(class UActionStateMachineComponent* InComponent, TEnumAsByte<EActionStateMachineTrackId> TrackId, class UClass* StateId);
	class UClass* STATIC_GetTypeOfActionStateActiveOnTrack(class UActionStateMachineComponent* InComponent, TEnumAsByte<EActionStateMachineTrackId> TrackId);
	bool STATIC_GetTestActionStateSerialisableDataOnTrack(class UActionStateMachineComponent* InComponent, TEnumAsByte<EActionStateMachineTrackId> TrackId, struct FTestActionStateSerialisableData* Data);
	class UCustomClientValidityCheckCallback* STATIC_CreateCustomClientValidityCheckCallback();
};


// Class ActionStateMachine.ActionStateMachineInterface
// 0x0000 (0x0028 - 0x0028)
class UActionStateMachineInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ActionStateMachine.ActionStateMachineInterface");
		return ptr;
	}

};


// Class ActionStateMachine.ActionStatePriorityTableData
// 0x0020 (0x0048 - 0x0028)
class UActionStatePriorityTableData : public UDataAsset
{
public:
	TArray<struct FActionStatePriorityRelationship>    StateDefaultValue;                                        // 0x0028(0x0010) (Edit, ZeroConstructor)
	TArray<struct FActionStatePriorityList>            PriorityTableEntry;                                       // 0x0038(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ActionStateMachine.ActionStatePriorityTableData");
		return ptr;
	}

};


// Class ActionStateMachine.ActionStatePriorityTableUtility
// 0x0000 (0x0028 - 0x0028)
class UActionStatePriorityTableUtility : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ActionStateMachine.ActionStatePriorityTableUtility");
		return ptr;
	}


	TEnumAsByte<EActionStatePriority> STATIC_GetPriority(class UClass* InStateA, class UClass* InStateB, struct FActionStatePriorityTable* PriorityTable);
	struct FActionStatePriorityTable STATIC_CreatePriorityTable(class UActionStatePriorityTableData* Data);
};


// Class ActionStateMachine.RemoteValidationFailActionStateActor
// 0x0008 (0x0498 - 0x0490)
class ARemoteValidationFailActionStateActor : public AActor
{
public:
	class UActionStateMachineComponent*                ActionStateMachineComponent;                              // 0x0490(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ActionStateMachine.RemoteValidationFailActionStateActor");
		return ptr;
	}

};


// Class ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions
// 0x0000 (0x0028 - 0x0028)
class USerialisedActionStateConstructionInfoTestFunctions : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions");
		return ptr;
	}


	bool STATIC_IsValid(const struct FSerialisedActionStateInfo& TestStruct);
	bool STATIC_HasTestConstructionInfoWithInner(const struct FSerialisedActionStateInfo& TestStruct);
	bool STATIC_HasTestConstructionInfo(const struct FSerialisedActionStateInfo& TestStruct);
	struct FTestActionStateConstructionInfoWithInner STATIC_GetTestConstructionInfoWithInner(const struct FSerialisedActionStateInfo& TestStruct);
	struct FTestActionStateConstructionInfo STATIC_GetTestConstructionInfo(const struct FSerialisedActionStateInfo& TestStruct);
	struct FSerialisedActionStateInfo STATIC_CreateTestSerialisableData(class UClass* Id, int IntProp);
	struct FSerialisedActionStateInfo STATIC_CreateTestConstructionInfoWithInner(class UClass* Id, float FloatProp, bool BoolProp, const class FString& StringProp);
	struct FSerialisedActionStateInfo STATIC_CreateTestConstructionInfo(class UClass* Id, int IntProp);
};


// Class ActionStateMachine.TestObjectWithActionStateMachine
// 0x0018 (0x04A8 - 0x0490)
class ATestObjectWithActionStateMachine : public AActor
{
public:
	class UTestActionStateMachineComponent*            ActionStateMachineComponent;                              // 0x0490(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0498(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ActionStateMachine.TestObjectWithActionStateMachine");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

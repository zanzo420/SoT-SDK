// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_TheArtOfTheTrickster_VaultTable_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_TheArtOfTheTrickster_VaultTable.BP_TheArtOfTheTrickster_VaultTable_C.Initialise
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_TheArtOfTheTrickster_VaultTable_C::Initialise()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TheArtOfTheTrickster_VaultTable.BP_TheArtOfTheTrickster_VaultTable_C.Initialise"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_TheArtOfTheTrickster_VaultTable.BP_TheArtOfTheTrickster_VaultTable_C.GetObjectDisplayName
// (HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText ABP_TheArtOfTheTrickster_VaultTable_C::GetObjectDisplayName()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TheArtOfTheTrickster_VaultTable.BP_TheArtOfTheTrickster_VaultTable_C.GetObjectDisplayName"));

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_TheArtOfTheTrickster_VaultTable.BP_TheArtOfTheTrickster_VaultTable_C.GetClosestInteractionPoint
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 ReferencePosition              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          OutInteractionPointRadius      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ABP_TheArtOfTheTrickster_VaultTable_C::GetClosestInteractionPoint(const struct FVector& ReferencePosition, float* OutInteractionPointRadius)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TheArtOfTheTrickster_VaultTable.BP_TheArtOfTheTrickster_VaultTable_C.GetClosestInteractionPoint"));

	struct
	{
		struct FVector                 ReferencePosition;
		float                          OutInteractionPointRadius;
		struct FVector                 ReturnValue;
	} params;

	params.ReferencePosition = ReferencePosition;

	UObject::ProcessEvent(fn, &params);

	if (OutInteractionPointRadius != nullptr)
		*OutInteractionPointRadius = params.OutInteractionPointRadius;

	return params.ReturnValue;
}


// Function BP_TheArtOfTheTrickster_VaultTable.BP_TheArtOfTheTrickster_VaultTable_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_TheArtOfTheTrickster_VaultTable_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TheArtOfTheTrickster_VaultTable.BP_TheArtOfTheTrickster_VaultTable_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_TheArtOfTheTrickster_VaultTable.BP_TheArtOfTheTrickster_VaultTable_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_TheArtOfTheTrickster_VaultTable_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TheArtOfTheTrickster_VaultTable.BP_TheArtOfTheTrickster_VaultTable_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_TheArtOfTheTrickster_VaultTable.BP_TheArtOfTheTrickster_VaultTable_C.BndEvt__Lock_K2Node_ComponentBoundEvent_96_OnIndividualLockOpenedDelegate__DelegateSignature
// (BlueprintEvent)

void ABP_TheArtOfTheTrickster_VaultTable_C::BndEvt__Lock_K2Node_ComponentBoundEvent_96_OnIndividualLockOpenedDelegate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TheArtOfTheTrickster_VaultTable.BP_TheArtOfTheTrickster_VaultTable_C.BndEvt__Lock_K2Node_ComponentBoundEvent_96_OnIndividualLockOpenedDelegate__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_TheArtOfTheTrickster_VaultTable.BP_TheArtOfTheTrickster_VaultTable_C.BndEvt__Lock_K2Node_ComponentBoundEvent_109_OnLockOpenedDelegate__DelegateSignature
// (BlueprintEvent)

void ABP_TheArtOfTheTrickster_VaultTable_C::BndEvt__Lock_K2Node_ComponentBoundEvent_109_OnLockOpenedDelegate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TheArtOfTheTrickster_VaultTable.BP_TheArtOfTheTrickster_VaultTable_C.BndEvt__Lock_K2Node_ComponentBoundEvent_109_OnLockOpenedDelegate__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_TheArtOfTheTrickster_VaultTable.BP_TheArtOfTheTrickster_VaultTable_C.Multicast Play Sequential VFX
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_TheArtOfTheTrickster_VaultTable_C::Multicast_Play_Sequential_VFX()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TheArtOfTheTrickster_VaultTable.BP_TheArtOfTheTrickster_VaultTable_C.Multicast Play Sequential VFX"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_TheArtOfTheTrickster_VaultTable.BP_TheArtOfTheTrickster_VaultTable_C.Multicast Play All VFX
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_TheArtOfTheTrickster_VaultTable_C::Multicast_Play_All_VFX()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TheArtOfTheTrickster_VaultTable.BP_TheArtOfTheTrickster_VaultTable_C.Multicast Play All VFX"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_TheArtOfTheTrickster_VaultTable.BP_TheArtOfTheTrickster_VaultTable_C.ExecuteUbergraph_BP_TheArtOfTheTrickster_VaultTable
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_TheArtOfTheTrickster_VaultTable_C::ExecuteUbergraph_BP_TheArtOfTheTrickster_VaultTable(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TheArtOfTheTrickster_VaultTable.BP_TheArtOfTheTrickster_VaultTable_C.ExecuteUbergraph_BP_TheArtOfTheTrickster_VaultTable"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

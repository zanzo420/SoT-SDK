// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Linstock_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Linstock.BP_Linstock_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Linstock_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Linstock.BP_Linstock_C.UserConstructionScript");

	ABP_Linstock_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Linstock.BP_Linstock_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_Linstock_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Linstock.BP_Linstock_C.ReceiveBeginPlay");

	ABP_Linstock_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Linstock.BP_Linstock_C.ExecuteUbergraph_BP_Linstock
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Linstock_C::ExecuteUbergraph_BP_Linstock(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Linstock.BP_Linstock_C.ExecuteUbergraph_BP_Linstock");

	ABP_Linstock_C_ExecuteUbergraph_BP_Linstock_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

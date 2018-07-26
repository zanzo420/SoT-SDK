// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_SailAnim_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SailAnim.BP_SailAnim_C.Set Billow Animation Rate
// (BlueprintCallable, BlueprintEvent)

void UBP_SailAnim_C::Set_Billow_Animation_Rate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SailAnim.BP_SailAnim_C.Set Billow Animation Rate");

	UBP_SailAnim_C_Set_Billow_Animation_Rate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SailAnim.BP_SailAnim_C.InitialiseSail
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         PlayRateMultiplier             (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          MainSail                       (Parm, ZeroConstructor, IsPlainOldData)

void UBP_SailAnim_C::InitialiseSail(float* PlayRateMultiplier, bool* MainSail)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SailAnim.BP_SailAnim_C.InitialiseSail");

	UBP_SailAnim_C_InitialiseSail_Params params;
	params.PlayRateMultiplier = PlayRateMultiplier;
	params.MainSail = MainSail;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SailAnim.BP_SailAnim_C.ExecuteUbergraph_BP_SailAnim
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_SailAnim_C::ExecuteUbergraph_BP_SailAnim(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SailAnim.BP_SailAnim_C.ExecuteUbergraph_BP_SailAnim");

	UBP_SailAnim_C_ExecuteUbergraph_BP_SailAnim_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

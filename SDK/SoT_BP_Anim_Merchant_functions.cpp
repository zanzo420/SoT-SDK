// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Anim_Merchant_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Anim_Merchant.BP_Anim_Merchant_C.AnimNotify_NPCItemAnimation
// (BlueprintCallable, BlueprintEvent)

void UBP_Anim_Merchant_C::AnimNotify_NPCItemAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Anim_Merchant.BP_Anim_Merchant_C.AnimNotify_NPCItemAnimation");

	UBP_Anim_Merchant_C_AnimNotify_NPCItemAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Anim_Merchant.BP_Anim_Merchant_C.ExecuteUbergraph_BP_Anim_Merchant
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Anim_Merchant_C::ExecuteUbergraph_BP_Anim_Merchant(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Anim_Merchant.BP_Anim_Merchant_C.ExecuteUbergraph_BP_Anim_Merchant");

	UBP_Anim_Merchant_C_ExecuteUbergraph_BP_Anim_Merchant_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

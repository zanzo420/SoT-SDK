// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Anim_HurdyGurdy_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Anim_HurdyGurdy.BP_Anim_HurdyGurdy_C.ExecuteUbergraph_BP_Anim_HurdyGurdy
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Anim_HurdyGurdy_C::ExecuteUbergraph_BP_Anim_HurdyGurdy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Anim_HurdyGurdy.BP_Anim_HurdyGurdy_C.ExecuteUbergraph_BP_Anim_HurdyGurdy");

	UBP_Anim_HurdyGurdy_C_ExecuteUbergraph_BP_Anim_HurdyGurdy_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

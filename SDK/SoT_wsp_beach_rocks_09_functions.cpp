// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_wsp_beach_rocks_09_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function wsp_beach_rocks_09.wsp_beach_rocks_09_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Awsp_beach_rocks_09_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function wsp_beach_rocks_09.wsp_beach_rocks_09_C.UserConstructionScript");

	Awsp_beach_rocks_09_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

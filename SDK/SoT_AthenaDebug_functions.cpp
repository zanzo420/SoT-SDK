// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AthenaDebug_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AthenaDebug.DrawDebugService.OnRep_ReplicatedItems
// (Final, Native, Private)

void ADrawDebugService::OnRep_ReplicatedItems()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaDebug.DrawDebugService.OnRep_ReplicatedItems"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

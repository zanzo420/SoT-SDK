// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_IslandStorageBarrel_Double_02_a_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_IslandStorageBarrel_Double_02_a.BP_IslandStorageBarrel_Double_02_a_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_IslandStorageBarrel_Double_02_a_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IslandStorageBarrel_Double_02_a.BP_IslandStorageBarrel_Double_02_a_C.UserConstructionScript");

	ABP_IslandStorageBarrel_Double_02_a_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

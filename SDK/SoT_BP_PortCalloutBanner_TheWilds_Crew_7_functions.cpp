// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_PortCalloutBanner_TheWilds_Crew_7_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PortCalloutBanner_TheWilds_Crew_7.BP_PortCalloutBanner_TheWilds_Crew_6_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PortCalloutBanner_TheWilds_Crew_6_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PortCalloutBanner_TheWilds_Crew_7.BP_PortCalloutBanner_TheWilds_Crew_6_C.UserConstructionScript");

	ABP_PortCalloutBanner_TheWilds_Crew_6_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

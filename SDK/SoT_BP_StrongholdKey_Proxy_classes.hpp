#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_StrongholdKey_Proxy_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_StrongholdKey_Proxy.BP_StrongholdKey_Proxy_C
// 0x0008 (0x0840 - 0x0838)
class ABP_StrongholdKey_Proxy_C : public AStrongholdKeyProxy
{
public:
	class UInteractableComponent*                      Interactable;                                             // 0x0838(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_StrongholdKey_Proxy.BP_StrongholdKey_Proxy_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

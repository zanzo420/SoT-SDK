#pragma once

// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_AncientChest_Proxy_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_AncientChest_Proxy.BP_AncientChest_Proxy_C
// 0x0000 (0x09F0 - 0x09F0)
class ABP_AncientChest_Proxy_C : public ABP_TreasureChestProxy_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AncientChest_Proxy.BP_AncientChest_Proxy_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

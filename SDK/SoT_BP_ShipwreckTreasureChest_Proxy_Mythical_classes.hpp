#pragma once

// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_ShipwreckTreasureChest_Proxy_Mythical_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ShipwreckTreasureChest_Proxy_Mythical.BP_ShipwreckTreasureChest_Proxy_Mythical_C
// 0x0000 (0x0A08 - 0x0A08)
class ABP_ShipwreckTreasureChest_Proxy_Mythical_C : public ABP_TreasureChestProxy_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ShipwreckTreasureChest_Proxy_Mythical.BP_ShipwreckTreasureChest_Proxy_Mythical_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

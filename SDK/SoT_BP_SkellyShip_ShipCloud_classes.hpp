#pragma once

// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_SkellyShip_ShipCloud_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SkellyShip_ShipCloud.BP_SkellyShip_ShipCloud_C
// 0x0000 (0x0538 - 0x0538)
class ABP_SkellyShip_ShipCloud_C : public ABP_SkellyFort_SkullCloud_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_SkellyShip_ShipCloud.BP_SkellyShip_ShipCloud_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

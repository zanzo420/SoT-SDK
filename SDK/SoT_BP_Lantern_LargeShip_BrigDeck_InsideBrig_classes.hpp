#pragma once

// Sea of Thieves (1.1.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Lantern_LargeShip_BrigDeck_InsideBrig_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Lantern_LargeShip_BrigDeck_InsideBrig.BP_Lantern_LargeShip_BrigDeck_InsideBrig_C
// 0x0000 (0x06B1 - 0x06B1)
class ABP_Lantern_LargeShip_BrigDeck_InsideBrig_C : public ABP_InteractableShipLantern_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Lantern_LargeShip_BrigDeck_InsideBrig.BP_Lantern_LargeShip_BrigDeck_InsideBrig_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

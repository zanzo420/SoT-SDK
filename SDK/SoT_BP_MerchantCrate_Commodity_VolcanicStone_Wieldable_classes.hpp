#pragma once

// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_MerchantCrate_Commodity_VolcanicStone_Wieldable_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MerchantCrate_Commodity_VolcanicStone_Wieldable.BP_MerchantCrate_Commodity_VolcanicStone_Wieldable_C
// 0x0020 (0x0828 - 0x0808)
class ABP_MerchantCrate_Commodity_VolcanicStone_Wieldable_C : public AMerchantCrate
{
public:
	class UWieldableInteractableComponent*             WieldableInteractable;                                    // 0x0808(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPickupableComponent*                        Pickupable;                                               // 0x0810(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UUsableWieldableComponent*                   UsableWieldable;                                          // 0x0818(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UNamedNotificationInputComponent*            NamedNotificationInput;                                   // 0x0820(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MerchantCrate_Commodity_VolcanicStone_Wieldable.BP_MerchantCrate_Commodity_VolcanicStone_Wieldable_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

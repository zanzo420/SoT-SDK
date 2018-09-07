#pragma once

// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_TreasureChest_Wieldable_Mythical_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TreasureChest_Wieldable_Mythical.BP_TreasureChest_Wieldable_Mythical_C
// 0x0020 (0x0808 - 0x07E8)
class ABP_TreasureChest_Wieldable_Mythical_C : public ABP_TreasureChest_C
{
public:
	class UPickupableComponent*                        Pickupable;                                               // 0x07E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UUsableWieldableComponent*                   UsableWieldable;                                          // 0x07F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UNamedNotificationInputComponent*            NamedNotificationInput;                                   // 0x07F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWieldableInteractableComponent*             WieldableInteractable;                                    // 0x0800(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TreasureChest_Wieldable_Mythical.BP_TreasureChest_Wieldable_Mythical_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

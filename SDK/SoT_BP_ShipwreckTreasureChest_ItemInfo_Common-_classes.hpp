#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_ShipwreckTreasureChest_ItemInfo_Common-_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ShipwreckTreasureChest_ItemInfo_Common-.BP_ShipwreckTreasureChest_ItemInfo_Common-_C
// 0x0008 (0x06F8 - 0x06F0)
class ABP_ShipwreckTreasureChest_ItemInfo_Common__C : public ATreasureChestItemInfo
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x06F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_ShipwreckTreasureChest_ItemInfo_Common-.BP_ShipwreckTreasureChest_ItemInfo_Common-_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

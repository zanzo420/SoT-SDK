#pragma once

// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_MerchantCrate_ChickenCrate_ItemInfo_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MerchantCrate_ChickenCrate_ItemInfo.BP_MerchantCrate_ChickenCrate_ItemInfo_C
// 0x0008 (0x05C0 - 0x05B8)
class ABP_MerchantCrate_ChickenCrate_ItemInfo_C : public AMerchantCrateItemInfo
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x05B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MerchantCrate_ChickenCrate_ItemInfo.BP_MerchantCrate_ChickenCrate_ItemInfo_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

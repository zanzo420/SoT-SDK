#pragma once

// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_MerchantCrate_SnakeBasket_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MerchantCrate_SnakeBasket.BP_MerchantCrate_SnakeBasket_C
// 0x0008 (0x0808 - 0x0800)
class ABP_MerchantCrate_SnakeBasket_C : public AMerchantCrate
{
public:
	class UMountpointComponent*                        Mountpoint;                                               // 0x0800(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MerchantCrate_SnakeBasket.BP_MerchantCrate_SnakeBasket_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

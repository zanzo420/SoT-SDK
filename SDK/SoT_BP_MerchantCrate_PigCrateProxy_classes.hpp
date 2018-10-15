#pragma once

// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_MerchantCrate_PigCrateProxy_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MerchantCrate_PigCrateProxy.BP_MerchantCrate_PigCrateProxy_C
// 0x0018 (0x0928 - 0x0910)
class ABP_MerchantCrate_PigCrateProxy_C : public AStaticMerchantCrateItemProxy
{
public:
	class UFeedingComponent*                           Feeding;                                                  // 0x0910(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMountpointComponent*                        Mountpoint;                                               // 0x0918(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UInteractableComponent*                      Interactable;                                             // 0x0920(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_MerchantCrate_PigCrateProxy.BP_MerchantCrate_PigCrateProxy_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

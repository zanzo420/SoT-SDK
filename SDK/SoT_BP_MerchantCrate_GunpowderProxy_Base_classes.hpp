#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_MerchantCrate_GunpowderProxy_Base_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MerchantCrate_GunpowderProxy_Base.BP_MerchantCrate_GunpowderProxy_Base_C
// 0x0018 (0x0870 - 0x0858)
class ABP_MerchantCrate_GunpowderProxy_Base_C : public AStaticMerchantCrateItemProxy
{
public:
	class UItemHealthComponent*                        ItemHealth;                                               // 0x0858(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ULightWeightStatusEffectManagerComponent*    LightweightStatusEffectManager;                           // 0x0860(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UFlammableWieldableComponent*                FlammableWieldable;                                       // 0x0868(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_MerchantCrate_GunpowderProxy_Base.BP_MerchantCrate_GunpowderProxy_Base_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

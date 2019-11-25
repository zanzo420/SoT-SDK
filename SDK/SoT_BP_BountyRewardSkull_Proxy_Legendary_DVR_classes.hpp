#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_BountyRewardSkull_Proxy_Legendary_DVR_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_BountyRewardSkull_Proxy_Legendary_DVR.BP_BountyRewardSkull_Proxy_Legendary_DVR_C
// 0x0008 (0x0888 - 0x0880)
class ABP_BountyRewardSkull_Proxy_Legendary_DVR_C : public ABP_BountyRewardSkull_Proxy_C
{
public:
	class UParticleSystemComponent*                    ParticleSystem1;                                          // 0x0880(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_BountyRewardSkull_Proxy_Legendary_DVR.BP_BountyRewardSkull_Proxy_Legendary_DVR_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

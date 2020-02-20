#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Crystal_Skull_Proxy_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Crystal_Skull_Proxy.BP_Crystal_Skull_Proxy_C
// 0x0008 (0x07F8 - 0x07F0)
class ABP_Crystal_Skull_Proxy_C : public ABP_BountyRewardSkull_Proxy_C
{
public:
	class UParticleSystemComponent*                    ParticleSystem1;                                          // 0x07F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Crystal_Skull_Proxy.BP_Crystal_Skull_Proxy_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

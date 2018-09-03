#pragma once

// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_BountyRewardSkull_Legendary_DVR_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_BountyRewardSkull_Legendary_DVR.BP_BountyRewardSkull_Legendary_DVR_C
// 0x0010 (0x07F8 - 0x07E8)
class ABP_BountyRewardSkull_Legendary_DVR_C : public ABP_BountyRewardSkull_C
{
public:
	class UParticleSystemComponent*                    VFX_Skull_Glow_1st;                                       // 0x07E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    VFX_Skull_Glow_3rd;                                       // 0x07F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BountyRewardSkull_Legendary_DVR.BP_BountyRewardSkull_Legendary_DVR_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

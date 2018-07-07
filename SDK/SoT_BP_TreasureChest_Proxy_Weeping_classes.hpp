#pragma once

// Sea of Thieves (1.1.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_TreasureChest_Proxy_Weeping_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TreasureChest_Proxy_Weeping.BP_TreasureChest_Proxy_Weeping_C
// 0x0048 (0x0A28 - 0x09E0)
class ABP_TreasureChest_Proxy_Weeping_C : public ABP_TreasureChestProxy_C
{
public:
	class UDecalComponent*                             puddle_decal;                                             // 0x09E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    vfx_mouth_3;                                              // 0x09E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    vfx_mouth_2;                                              // 0x09F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    vfx_weepingchest_long_sides2;                             // 0x09F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    vfx_weepingchest_long_sides;                              // 0x0A00(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    vfx_weepingchest_short_sides2;                            // 0x0A08(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    vfx_weepingchest_short_sides;                             // 0x0A10(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipTrackerComponent*                       ShipTracker;                                              // 0x0A18(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWeepingComponent*                           Weeping;                                                  // 0x0A20(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TreasureChest_Proxy_Weeping.BP_TreasureChest_Proxy_Weeping_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

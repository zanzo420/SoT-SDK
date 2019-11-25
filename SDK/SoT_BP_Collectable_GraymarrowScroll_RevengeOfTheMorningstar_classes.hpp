#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Collectable_GraymarrowScroll_RevengeOfTheMorningstar_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Collectable_GraymarrowScroll_RevengeOfTheMorningstar.BP_Collectable_GraymarrowScroll_RevengeOfTheMorningstar_C
// 0x0018 (0x0650 - 0x0638)
class ABP_Collectable_GraymarrowScroll_RevengeOfTheMorningstar_C : public ACollectableQuestObject
{
public:
	class UGlintComponent*                             Glint;                                                    // 0x0638(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0640(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UInteractableComponent*                      Interactable1;                                            // 0x0648(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Collectable_GraymarrowScroll_RevengeOfTheMorningstar.BP_Collectable_GraymarrowScroll_RevengeOfTheMorningstar_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

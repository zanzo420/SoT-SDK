#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_CollectorsChest_RevengeOfTheMorningstar_Proxy_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CollectorsChest_RevengeOfTheMorningstar_Proxy.BP_CollectorsChest_RevengeOfTheMorningstar_Proxy_C
// 0x0048 (0x08A8 - 0x0860)
class ABP_CollectorsChest_RevengeOfTheMorningstar_Proxy_C : public ACollectorsChestItemProxy
{
public:
	class UQuestBookPagesInContainerComponent*         QuestBookPagesInContainer;                                // 0x0860(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UGoldInContainerComponent*                   GoldInContainer;                                          // 0x0868(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Scene;                                                    // 0x0870(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UGlintComponent*                             Glint;                                                    // 0x0878(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimNotifyWwiseEmitterComponent*            AnimNotifyWwiseEmitter;                                   // 0x0880(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCollectorsChestItemSlotInteractable*        ItemSlotInteractbale_3;                                   // 0x0888(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCollectorsChestItemSlotInteractable*        ItemSlotInteractable_2;                                   // 0x0890(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCollectorsChestItemSlotInteractable*        ItemSlotInteractable_1;                                   // 0x0898(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UInteractableComponent*                      Interactable;                                             // 0x08A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_CollectorsChest_RevengeOfTheMorningstar_Proxy.BP_CollectorsChest_RevengeOfTheMorningstar_Proxy_C"));
		return ptr;
	}


	struct FVector GetClosestInteractionPoint(const struct FVector& ReferencePosition, float* OutInteractionPointRadius);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Campaign008_ForsakenShores_BilgeRats_NPC_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Campaign008_ForsakenShores_BilgeRats_NPC.BP_Campaign008_ForsakenShores_BilgeRats_NPC_C
// 0x0018 (0x0590 - 0x0578)
class ABP_Campaign008_ForsakenShores_BilgeRats_NPC_C : public AShopkeeper
{
public:
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0578(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UNPCDialogComponent*                         NPCDialog;                                                // 0x0580(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimNotifyWwiseEmitterComponent*            AnimNotifyWwiseEmitter;                                   // 0x0588(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_Campaign008_ForsakenShores_BilgeRats_NPC.BP_Campaign008_ForsakenShores_BilgeRats_NPC_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

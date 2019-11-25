#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_FaiteOfTheMorningstar_CreatePlayerTriggerProxy_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_FaiteOfTheMorningstar_CreatePlayerTriggerProxy.BP_FaiteOfTheMorningstar_CreatePlayerTriggerProxy_C
// 0x0020 (0x00B8 - 0x0098)
class UBP_FaiteOfTheMorningstar_CreatePlayerTriggerProxy_C : public UBlueprintStepBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0098(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                      ProxyClass;                                               // 0x00A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class AAthenaPlayerCharacter*>              QuestParticipants;                                        // 0x00A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_FaiteOfTheMorningstar_CreatePlayerTriggerProxy.BP_FaiteOfTheMorningstar_CreatePlayerTriggerProxy_C"));
		return ptr;
	}


	void OnBegin(TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode);
	void ExecuteUbergraph_BP_FaiteOfTheMorningstar_CreatePlayerTriggerProxy(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

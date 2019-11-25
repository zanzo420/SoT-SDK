#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Anim_TT_RitualSkullMain_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BP_Anim_TT_RitualSkullMain.BP_Anim_TT_RitualSkullMain_C
// 0x0110 (0x05C0 - 0x04B0)
class UBP_Anim_TT_RitualSkullMain_C : public UAnimatedCosmeticItemAnimationInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_C783CF8D495989E6C97CB683F25E6711;      // 0x04B8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_F520DDE04840F6B25588FAB5CCA7E600;      // 0x0500(0x0060)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_C1D37D3C47B009DA343CEB8B68E618F5;// 0x0560(0x0050)
	struct FScriptMulticastDelegate                    SkullEmissiveEventDispatcher;                             // 0x05B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass BP_Anim_TT_RitualSkullMain.BP_Anim_TT_RitualSkullMain_C"));
		return ptr;
	}


	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_BP_Anim_TT_RitualSkullMain(int EntryPoint);
	void SkullEmissiveEventDispatcher__DelegateSignature(float EmissiveScale);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

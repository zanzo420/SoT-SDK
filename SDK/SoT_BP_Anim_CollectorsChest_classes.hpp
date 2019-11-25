#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Anim_CollectorsChest_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BP_Anim_CollectorsChest.BP_Anim_CollectorsChest_C
// 0x00B0 (0x0550 - 0x04A0)
class UBP_Anim_CollectorsChest_C : public UOpenableItemAnimationInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_5B7B542E4A0793C98D016C83F1430C53;      // 0x04A8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_767421AB4F6200CA9E852184B581C577;      // 0x04F0(0x0060)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass BP_Anim_CollectorsChest.BP_Anim_CollectorsChest_C"));
		return ptr;
	}


	void ExecuteUbergraph_BP_Anim_CollectorsChest(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

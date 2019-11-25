#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Shroudbreaker_SetShipsLogParams_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Shroudbreaker_SetShipsLogParams.BP_Shroudbreaker_SetShipsLogParams_C
// 0x0010 (0x00A8 - 0x0098)
class UBP_Shroudbreaker_SetShipsLogParams_C : public UBlueprintStepBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0098(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UQuestBookPageBundle*                        SelectedShipsLog;                                         // 0x00A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Shroudbreaker_SetShipsLogParams.BP_Shroudbreaker_SetShipsLogParams_C"));
		return ptr;
	}


	void OnBegin(TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode);
	void ExecuteUbergraph_BP_Shroudbreaker_SetShipsLogParams(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

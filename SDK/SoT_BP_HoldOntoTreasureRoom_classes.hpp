#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_HoldOntoTreasureRoom_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_HoldOntoTreasureRoom.BP_HoldOntoTreasureRoom_C
// 0x000C (0x00A4 - 0x0098)
class UBP_HoldOntoTreasureRoom_C : public UBlueprintStepBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0098(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FTimerHandle                                TimeoutHandle;                                            // 0x00A0(0x0004) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_HoldOntoTreasureRoom.BP_HoldOntoTreasureRoom_C"));
		return ptr;
	}


	void FailTaleOnTimeout();
	void GetTreasureRoom(class ATreasureRoom** Object);
	void OnBegin(TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode);
	void OnEnd();
	void FailTreasureRoomEvent();
	void ExecuteUbergraph_BP_HoldOntoTreasureRoom(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

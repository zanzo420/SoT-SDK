#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_PromptCoordinator_Base_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C
// 0x0020 (0x0100 - 0x00E0)
class UBP_PromptCoordinator_Base_C : public UBasePromptCoordinator
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               IsCompleted;                                              // 0x00E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00E9(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnComplete;                                               // 0x00F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C"));
		return ptr;
	}


	void UninitializeImplementable();
	void GetHUDObjectMessageDispatcher(struct FObjectMessagingDispatcherHandle* HUD_Dispatcher);
	void Complete();
	void UnregisterHandles();
	void PostInitialize();
	void InitializeAndStart(class AAthenaPlayerController* PlayerController);
	void GetCharacterObjectMessageDispatcher(struct FObjectMessagingDispatcherHandle* Player_Dispatcher);
	void Evaluate();
	void GetControllerObjectMessageDispatcher(struct FObjectMessagingDispatcherHandle* Player_Dispatcher);
	void Start();
	void ExecuteUbergraph_BP_PromptCoordinator_Base(int EntryPoint);
	void OnComplete__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
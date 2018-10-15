#pragma once

// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_AnimatedStepsComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_AnimatedStepsComponent.BP_AnimatedStepsComponent_C
// 0x003C (0x013C - 0x0100)
class UBP_AnimatedStepsComponent_C : public UAnimatedStepsComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0100(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<float>                                      BoxDelays;                                                // 0x0108(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      BoxTargetZs;                                              // 0x0118(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UCurveFloat*                                 AnimCurve;                                                // 0x0128(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MovementTimer;                                            // 0x0130(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              AnimationDuration;                                        // 0x0134(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AnimationStartDelay;                                      // 0x0138(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_AnimatedStepsComponent.BP_AnimatedStepsComponent_C");
		return ptr;
	}


	void StartOpeningSteps();
	void SetAllStepsZs(bool OpeningOrClosing, TArray<float>* TargetZOffsets);
	void UpdateStep(int BoneIndex, float TargetZ, float MovementDelay, class UBoxComponent* AttachedBox, const struct FVector& BoxOrigin);
	void ReceiveTick(float DeltaSeconds);
	void StartOpening();
	void OpenImmediate();
	void Close();
	void ExecuteUbergraph_BP_AnimatedStepsComponent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

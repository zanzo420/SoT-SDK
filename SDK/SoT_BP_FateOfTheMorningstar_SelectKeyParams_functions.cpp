// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_FateOfTheMorningstar_SelectKeyParams_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_FateOfTheMorningstar_SelectKeyParams.BP_FateOfTheMorningstar_SelectKeyParams_C.OnBegin
// (Event, Protected, BlueprintEvent)
// Parameters:
// TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UBP_FateOfTheMorningstar_SelectKeyParams_C::OnBegin(TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_FateOfTheMorningstar_SelectKeyParams.BP_FateOfTheMorningstar_SelectKeyParams_C.OnBegin"));

	struct
	{
		TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode;
	} params;

	params.InBeginMode = InBeginMode;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_FateOfTheMorningstar_SelectKeyParams.BP_FateOfTheMorningstar_SelectKeyParams_C.ExecuteUbergraph_BP_FateOfTheMorningstar_SelectKeyParams
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_FateOfTheMorningstar_SelectKeyParams_C::ExecuteUbergraph_BP_FateOfTheMorningstar_SelectKeyParams(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_FateOfTheMorningstar_SelectKeyParams.BP_FateOfTheMorningstar_SelectKeyParams_C.ExecuteUbergraph_BP_FateOfTheMorningstar_SelectKeyParams"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

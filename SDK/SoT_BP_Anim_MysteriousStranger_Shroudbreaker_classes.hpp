#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Anim_MysteriousStranger_Shroudbreaker_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BP_Anim_MysteriousStranger_Shroudbreaker.BP_Anim_MysteriousStranger_Shroudbreaker_C
// 0x0000 (0x18B5 - 0x18B5)
class UBP_Anim_MysteriousStranger_Shroudbreaker_C : public UBP_Anim_NPC_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass BP_Anim_MysteriousStranger_Shroudbreaker.BP_Anim_MysteriousStranger_Shroudbreaker_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

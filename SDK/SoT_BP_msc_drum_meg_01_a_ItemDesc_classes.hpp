#pragma once

// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_msc_drum_meg_01_a_ItemDesc_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_msc_drum_meg_01_a_ItemDesc.BP_msc_drum_meg_01_a_ItemDesc_C
// 0x0000 (0x0120 - 0x0120)
class UBP_msc_drum_meg_01_a_ItemDesc_C : public UItemDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_msc_drum_meg_01_a_ItemDesc.BP_msc_drum_meg_01_a_ItemDesc_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_cmp_telescope_mrh_01_b_Wieldable_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_cmp_telescope_mrh_01_b_Wieldable.BP_cmp_telescope_mrh_01_b_Wieldable_C
// 0x0000 (0x08A8 - 0x08A8)
class ABP_cmp_telescope_mrh_01_b_Wieldable_C : public ABP_Spyglass_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_cmp_telescope_mrh_01_b_Wieldable.BP_cmp_telescope_mrh_01_b_Wieldable_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_cmn_cannonball_cur_anchor_01_a_Wieldable_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_cmn_cannonball_cur_anchor_01_a_Wieldable.BP_cmn_cannonball_cur_anchor_01_a_Wieldable_C
// 0x0000 (0x08D0 - 0x08D0)
class ABP_cmn_cannonball_cur_anchor_01_a_Wieldable_C : public ABP_CannonBall_Cursed_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_cmn_cannonball_cur_anchor_01_a_Wieldable.BP_cmn_cannonball_cur_anchor_01_a_Wieldable_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

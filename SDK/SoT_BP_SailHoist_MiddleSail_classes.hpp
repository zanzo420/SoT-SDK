#pragma once

// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_SailHoist_MiddleSail_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SailHoist_MiddleSail.BP_SailHoist_MiddleSail_C
// 0x0000 (0x07E0 - 0x07E0)
class ABP_SailHoist_MiddleSail_C : public ABP_SailHoist_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_SailHoist_MiddleSail.BP_SailHoist_MiddleSail_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Campaign005_CursedSails_ClothingCarl_CursedSails_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Campaign005_CursedSails_ClothingCarl_CursedSails.BP_Campaign005_CursedSails_ClothingCarl_CursedSails_C
// 0x0000 (0x0568 - 0x0568)
class ABP_Campaign005_CursedSails_ClothingCarl_CursedSails_C : public ABP_Clothing_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Campaign005_CursedSails_ClothingCarl_CursedSails.BP_Campaign005_CursedSails_ClothingCarl_CursedSails_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

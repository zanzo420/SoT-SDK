#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_PirateLordMusic_Ending_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PirateLordMusic_Ending.BP_PirateLordMusic_Ending_C
// 0x0000 (0x0390 - 0x0390)
class UBP_PirateLordMusic_Ending_C : public USynchedMusicZoneComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_PirateLordMusic_Ending.BP_PirateLordMusic_Ending_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

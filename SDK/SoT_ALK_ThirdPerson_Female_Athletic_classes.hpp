#pragma once

// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_ALK_ThirdPerson_Female_Athletic_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ALK_ThirdPerson_Female_Athletic.ALK_ThirdPerson_Female_Athletic_C
// 0x0000 (0x0028 - 0x0028)
class UALK_ThirdPerson_Female_Athletic_C : public UAnimationDataStoreId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ALK_ThirdPerson_Female_Athletic.ALK_ThirdPerson_Female_Athletic_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

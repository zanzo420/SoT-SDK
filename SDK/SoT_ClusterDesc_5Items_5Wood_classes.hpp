#pragma once

// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_ClusterDesc_5Items_5Wood_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ClusterDesc_5Items_5Wood.ClusterDesc_5Items_5Wood_C
// 0x0000 (0x0130 - 0x0130)
class UClusterDesc_5Items_5Wood_C : public UClusterDescription
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ClusterDesc_5Items_5Wood.ClusterDesc_5Items_5Wood_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

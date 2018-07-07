#pragma once

// Sea of Thieves (1.1.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_SunkenCurseArtefact_Sapphire_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SunkenCurseArtefact_Sapphire.BP_SunkenCurseArtefact_Sapphire_C
// 0x0008 (0x0688 - 0x0680)
class ABP_SunkenCurseArtefact_Sapphire_C : public ASunkenCurseArtefact
{
public:
	class UStaticMeshComponent*                        Glint;                                                    // 0x0680(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SunkenCurseArtefact_Sapphire.BP_SunkenCurseArtefact_Sapphire_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

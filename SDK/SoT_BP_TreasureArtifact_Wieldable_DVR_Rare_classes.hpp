#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_TreasureArtifact_Wieldable_DVR_Rare_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TreasureArtifact_Wieldable_DVR_Rare.BP_TreasureArtifact_Wieldable_DVR_Rare_C
// 0x0000 (0x07D0 - 0x07D0)
class ABP_TreasureArtifact_Wieldable_DVR_Rare_C : public ABP_TreasureArtifact_Wieldable_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_TreasureArtifact_Wieldable_DVR_Rare.BP_TreasureArtifact_Wieldable_DVR_Rare_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

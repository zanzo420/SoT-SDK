#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Proposal_DevilsRoar_PirateLegend_03_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Proposal_DevilsRoar_PirateLegend_03.Proposal_DevilsRoar_PirateLegend_03_C
// 0x0000 (0x0140 - 0x0140)
class UProposal_DevilsRoar_PirateLegend_03_C : public UVoyageProposalDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Proposal_DevilsRoar_PirateLegend_03.Proposal_DevilsRoar_PirateLegend_03_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

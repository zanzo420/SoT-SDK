#pragma once

// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Proposal_Merchant_Rank01Reward_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Proposal_Merchant_Rank01Reward.Proposal_Merchant_Rank01Reward_C
// 0x0000 (0x0110 - 0x0110)
class UProposal_Merchant_Rank01Reward_C : public UVoyageProposalDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Proposal_Merchant_Rank01Reward.Proposal_Merchant_Rank01Reward_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

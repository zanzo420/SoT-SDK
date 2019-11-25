#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_FateOfTheMorningstar_FontaineChestVO_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_FateOfTheMorningstar_FontaineChestVO.BP_FateOfTheMorningstar_FontaineChestVO_C
// 0x0008 (0x04B0 - 0x04A8)
class ABP_FateOfTheMorningstar_FontaineChestVO_C : public AActor
{
public:
	class UMusicZoneComponent*                         MusicZone;                                                // 0x04A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_FateOfTheMorningstar_FontaineChestVO.BP_FateOfTheMorningstar_FontaineChestVO_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

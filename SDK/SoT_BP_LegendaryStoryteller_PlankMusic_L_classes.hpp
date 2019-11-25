#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_LegendaryStoryteller_PlankMusic_L_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_LegendaryStoryteller_PlankMusic_L.BP_LegendaryStoryteller_PlankMusic_L_C
// 0x0010 (0x04B8 - 0x04A8)
class ABP_LegendaryStoryteller_PlankMusic_L_C : public AActor
{
public:
	class UMusicZoneComponent*                         MusicZone;                                                // 0x04A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x04B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_LegendaryStoryteller_PlankMusic_L.BP_LegendaryStoryteller_PlankMusic_L_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

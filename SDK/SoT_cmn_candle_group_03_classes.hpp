#pragma once

// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_cmn_candle_group_03_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass cmn_candle_group_03.cmn_candle_group_03_C
// 0x0018 (0x0498 - 0x0480)
class Acmn_candle_group_03_C : public AActor
{
public:
	class UParticleSystemComponent*                    ParticleSystemComponent0;                                 // 0x0480(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMeshComponent0;                                     // 0x0488(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             SharedRoot;                                               // 0x0490(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass cmn_candle_group_03.cmn_candle_group_03_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_wsp_light_plate_a_a_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass wsp_light_plate_a_a.wsp_light_plate_a_a_C
// 0x0008 (0x04C8 - 0x04C0)
class Awsp_light_plate_a_a_C : public AStaticMeshActor
{
public:
	class UParticleSystemComponent*                    ParticleSystem;                                           // 0x04C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass wsp_light_plate_a_a.wsp_light_plate_a_a_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

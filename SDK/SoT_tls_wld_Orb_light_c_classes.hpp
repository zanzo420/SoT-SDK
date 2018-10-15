#pragma once

// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_tls_wld_Orb_light_c_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass tls_wld_Orb_light_c.tls_wld_Orb_light_c_C
// 0x0008 (0x04A8 - 0x04A0)
class Atls_wld_Orb_light_c_C : public AStaticMeshActor
{
public:
	class UPointLightComponent*                        PointLight;                                               // 0x04A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass tls_wld_Orb_light_c.tls_wld_Orb_light_c_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

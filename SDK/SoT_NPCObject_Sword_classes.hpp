#pragma once

// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_NPCObject_Sword_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass NPCObject_Sword.NPCObject_Sword_C
// 0x0010 (0x04A0 - 0x0490)
class ANPCObject_Sword_C : public AActor
{
public:
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0490(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0498(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass NPCObject_Sword.NPCObject_Sword_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

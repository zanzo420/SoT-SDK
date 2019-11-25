#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_StarsOfAThiefDefinitionDev_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass StarsOfAThiefDefinitionDev.StarsOfAThiefDefinitionDev_C
// 0x0180 (0x01A8 - 0x0028)
class UStarsOfAThiefDefinitionDev_C : public UObject
{
public:
	struct FDS_StarsOfAThiefDefinition                 Definition;                                               // 0x0028(0x0150) (Edit, BlueprintVisible)
	class UQuestBookPageBundle*                        InitialBundle;                                            // 0x0178(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<TAssetPtr<class AActor>>                    Actors;                                                   // 0x0180(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               Islands;                                                  // 0x0190(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UQuestBookPageBundle*                        LocateReefBundle;                                         // 0x01A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass StarsOfAThiefDefinitionDev.StarsOfAThiefDefinitionDev_C"));
		return ptr;
	}


	void GetIslandForActor(TAssetPtr<class AActor> Actor, struct FName* Name);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

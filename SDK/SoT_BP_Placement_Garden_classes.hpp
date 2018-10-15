#pragma once

// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Placement_Garden_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Placement_Garden.BP_Placement_Garden_C
// 0x00A5 (0x0535 - 0x0490)
class ABP_Placement_Garden_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0490(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBillboardComponent*                         Billboard;                                                // 0x0498(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            Spherical_Volume;                                         // 0x04A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Scene;                                                    // 0x04A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FPlacementGardenSeed>                Meshes;                                                   // 0x04B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              Radius;                                                   // 0x04C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Radius_Visible;                                           // 0x04C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x04C5(0x0003) MISSED OFFSET
	float                                              Spawn_Density;                                            // 0x04C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Spawn_Clustering;                                         // 0x04CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Seed;                                                     // 0x04D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x04D4(0x0004) MISSED OFFSET
	TArray<class UObject*>                             Physical_Materials;                                       // 0x04D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               Update_On_Drag;                                           // 0x04E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x04E9(0x0007) MISSED OFFSET
	TArray<float>                                      Mesh_Probabilities;                                       // 0x04F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UInstancedStaticMeshComponent*>       Instanced_Meshes;                                         // 0x0500(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FRandomStream                               Random;                                                   // 0x0510(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                Instance_Count;                                           // 0x0518(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x051C(0x0004) MISSED OFFSET
	TArray<struct FLinearColor>                        Mesh_Radii;                                               // 0x0520(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              Max_Draw_Distance;                                        // 0x0530(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Cast_Shadows;                                             // 0x0534(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_Placement_Garden.BP_Placement_Garden_C");
		return ptr;
	}


	void Set_Garden_Parameters(float Radius, int Int, bool* Instances_Created);
	void Create_Garden();
	void Initialise_Instances();
	void UserConstructionScript();
	void Force_Create_Garden();
	void ExecuteUbergraph_BP_Placement_Garden(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

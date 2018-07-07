#pragma once

// Sea of Thieves (1.1.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_LargeShipTemplate_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_LargeShipTemplate.BP_LargeShipTemplate_C
// 0x0328 (0x1408 - 0x10E0)
class ABP_LargeShipTemplate_C : public AShip
{
public:
	class UInstancedNavMeshComponent*                  InstancedNavMesh;                                         // 0x10E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BP_ShipVanityChest;                                       // 0x10E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BP_Bell;                                                  // 0x10F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_LowestDeck17;                           // 0x10F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_LowestDeck16;                           // 0x1100(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        gmp_bar_stor_two_stack_01_a3;                             // 0x1108(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_LowestDeck15;                           // 0x1110(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        gmp_bar_stor_two_stack_01_a2;                             // 0x1118(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        gmp_bar_stor_two_stack_01_a1;                             // 0x1120(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        gmp_bar_stor_three_stack_01_a1;                           // 0x1128(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BP_WallClock;                                             // 0x1130(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BP_WeaponsChest;                                          // 0x1138(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BP_EquipmentChest;                                        // 0x1140(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BP_ClothingChest;                                         // 0x1148(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        gmp_bar_stor_three_stack_01_a;                            // 0x1150(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipPointParticleComponent*                 VFX_Drips;                                                // 0x1158(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               RammingSpurZone;                                          // 0x1160(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        shp_shark_hits_01_a;                                      // 0x1168(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_Cannonball3;                            // 0x1170(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BP_AmmoChest;                                             // 0x1178(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_Grog;                                   // 0x1180(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_Food;                                   // 0x1188(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Lanterns;                                                 // 0x1190(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTeleportLocationComponent*                  TeleportLocation11_TopDeck_NearWheel;                     // 0x1198(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTeleportLocationComponent*                  TeleportLocation_09_BottomDeck_OutsideBrig;               // 0x11A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTeleportLocationComponent*                  TeleportLocation_08_BottomDeck_FacingStairs;              // 0x11A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTeleportLocationComponent*                  TeleportLocation_07_MiddleDeck_BackOfShip;                // 0x11B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTeleportLocationComponent*                  TeleportLocation_06_MiddleDeck_FrontOfShip;               // 0x11B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTeleportLocationComponent*                  TeleportLocation_05_TopDeck_NearCannons;                  // 0x11C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTeleportLocationComponent*                  TeleportLocation_04_TopDeck_FrontOfShip;                  // 0x11C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTeleportLocationComponent*                  TeleportLocation_03_TopDeck_BackOfShip;                   // 0x11D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTeleportLocationComponent*                  TeleportLocation_02_TopDeck_NearLadder;                   // 0x11D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTeleportLocationComponent*                  TeleportLocation_01_CaptainsCabin;                        // 0x11E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class URiggingSystemComponent*                     MainRigging;                                              // 0x11E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class URiggingSystemComponent*                     ControlsRigging;                                          // 0x11F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        MapTable;                                                 // 0x11F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipsCompass;                                             // 0x1200(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Figurehead;                                               // 0x1208(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_LowestDeck13;                           // 0x1210(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_LowestDeck12;                           // 0x1218(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_LowestDeck11;                           // 0x1220(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_LowestDeck10;                           // 0x1228(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_LowestDeck9;                            // 0x1230(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_LowestDeck8;                            // 0x1238(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_LowestDeck7;                            // 0x1240(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_LowestDeck6;                            // 0x1248(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_LowestDeck5;                            // 0x1250(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_LowestDeck4;                            // 0x1258(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_LowestDeck3;                            // 0x1260(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_BottomOfLowestStairs2;                  // 0x1268(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_BottomOfLowestStairs1;                  // 0x1270(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             LowerDeckBarrels;                                         // 0x1278(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_NearLowerStairs5;                       // 0x1280(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_Cannonball2;                            // 0x1288(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_Cannonball1;                            // 0x1290(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_NearLowerStairs6;                       // 0x1298(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_NearLowerStairs4;                       // 0x12A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_NearLowerStairs3;                       // 0x12A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_NearLowerStairs2;                       // 0x12B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_NearLowerStairs1;                       // 0x12B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_BehindStairs7;                          // 0x12C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_BehindStairs5;                          // 0x12C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_BehindStairs3;                          // 0x12D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_BehindStairs2;                          // 0x12D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_BehindStairs1;                          // 0x12E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_SideofStairs3;                          // 0x12E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_SideofStairs2;                          // 0x12F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_SideofStairs1;                          // 0x12F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        CannonRight4;                                             // 0x1300(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        CannonRight3;                                             // 0x1308(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        CannonRight2;                                             // 0x1310(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        CannonRight1;                                             // 0x1318(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        CannonLeft4;                                              // 0x1320(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        CannonLeft3;                                              // 0x1328(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        CannonLeft2;                                              // 0x1330(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        CannonLeft1;                                              // 0x1338(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        LadderCrowsNest;                                          // 0x1340(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        LadderStbd;                                               // 0x1348(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        LadderPort;                                               // 0x1350(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Hull;                                                     // 0x1358(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        MastForeSailAngleRight;                                   // 0x1360(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        MastForeSailAngleLeft;                                    // 0x1368(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             MiddleDeckBarrels;                                        // 0x1370(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        MastMainSailAngleRight;                                   // 0x1378(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        MastMizzenSailAngleRight;                                 // 0x1380(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        MastMizzenSailAngleLeft;                                  // 0x1388(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        MastForeSailHoistRight;                                   // 0x1390(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        MastForeSailHoistLeft;                                    // 0x1398(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        MastMizzenSailHoistRight;                                 // 0x13A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        MastMizzenSailHoistLeft;                                  // 0x13A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        MastMainSailHoistRight;                                   // 0x13B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        MastMainSailHoistLeft;                                    // 0x13B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Capstan;                                                  // 0x13C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        MastFore;                                                 // 0x13C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        MastMain;                                                 // 0x13D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        MastMizzen;                                               // 0x13D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Anchor;                                                   // 0x13E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Rudder;                                                   // 0x13E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Wheel;                                                    // 0x13F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        AudioBoat;                                                // 0x13F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        MastMainSailAngleLeft;                                    // 0x1400(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_LargeShipTemplate.BP_LargeShipTemplate_C");
		return ptr;
	}


	void SetupMastControls(class UChildActorComponent* LeftHoist, class UChildActorComponent* RightHoist, class UChildActorComponent* LeftAngle, class UChildActorComponent* RightAngle, const struct FName& RiggingGroupName);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

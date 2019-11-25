#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AD_ThirdPerson_PlayerPirate_Female_Default_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AD_ThirdPerson_PlayerPirate_Female_Default.AD_ThirdPerson_PlayerPirate_Female_Default_C
// 0x0780 (0x07A8 - 0x0028)
class UAD_ThirdPerson_PlayerPirate_Female_Default_C : public UAnimationData
{
public:
	struct FADS_IdlesNative                            Idles;                                                    // 0x0028(0x0010) (Edit, BlueprintVisible)
	struct FADS_LocomotionNative                       Locomotion;                                               // 0x0038(0x0048) (Edit, BlueprintVisible)
	struct FADS_LocomotionAlternateNative              LocomotionAlternate;                                      // 0x0080(0x0140) (Edit, BlueprintVisible)
	struct FADS_JumpingNative                          Jumping;                                                  // 0x01C0(0x0078) (Edit, BlueprintVisible)
	struct FADS_SwimmingNative                         Swimming;                                                 // 0x0238(0x0068) (Edit, BlueprintVisible)
	struct FADS_WheelNative                            Wheel;                                                    // 0x02A0(0x0088) (Edit, BlueprintVisible)
	struct FADS_CapstanNative                          Capstan;                                                  // 0x0328(0x0068) (Edit, BlueprintVisible)
	struct FADS_SailControlNative                      SailControlRaise;                                         // 0x0390(0x0048) (Edit, BlueprintVisible)
	struct FADS_LadderNative                           Ladder;                                                   // 0x03D8(0x0068) (Edit, BlueprintVisible)
	struct FADS_ObjectsNative                          Items;                                                    // 0x0440(0x0010) (Edit, BlueprintVisible)
	struct FADS_CannonNative                           Cannon;                                                   // 0x0450(0x0038) (Edit, BlueprintVisible)
	struct FADS_HarpoonLauncherNative                  HarpoonLauncher;                                          // 0x0488(0x0028) (Edit, BlueprintVisible)
	struct FADS_Sockets                                Sockets;                                                  // 0x04B0(0x0002) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x6];                                       // 0x04B2(0x0006) MISSED OFFSET
	struct FADS_FacialNative                           Facial;                                                   // 0x04B8(0x0088) (Edit, BlueprintVisible)
	struct FADS_IKFootPlantingNative                   IkFootPlanting;                                           // 0x0540(0x0028) (Edit, BlueprintVisible)
	struct FADS_HitReactsNative                        HitReacts;                                                // 0x0568(0x0040) (Edit, BlueprintVisible)
	struct FADS_DeathNative                            Death;                                                    // 0x05A8(0x0020) (Edit, BlueprintVisible)
	struct FADS_MapTableNative                         MapTable;                                                 // 0x05C8(0x0030) (Edit, BlueprintVisible)
	struct FADS_SpawnNative2                           Spawning;                                                 // 0x05F8(0x0010) (Edit, BlueprintVisible)
	struct FADS_CharacterSelectNative                  CharacterSelect;                                          // 0x0608(0x0010) (Edit, BlueprintVisible)
	struct FADS_SkeletonFleeNative                     SkeletonFlee;                                             // 0x0618(0x0010) (Edit, BlueprintVisible)
	struct FADS_InteractionNative                      ShopInteraction;                                          // 0x0628(0x0010) (Edit, BlueprintVisible)
	struct FADS_SkeletonSensing                        SkeletonSensing;                                          // 0x0638(0x0010) (Edit, BlueprintVisible)
	struct FADS_DiverseEmoteNative                     EmoteDiverse;                                             // 0x0648(0x0010) (Edit, BlueprintVisible)
	struct FADS_PersonaNative                          EmotePersonas;                                            // 0x0658(0x0010) (Edit, BlueprintVisible)
	struct FADS_SkeletonEmoteActions                   SkeletonActionEmotes;                                     // 0x0668(0x0010) (Edit, BlueprintVisible)
	struct FADS_RowingBoatNative                       Rowboat;                                                  // 0x0678(0x0098) (Edit, BlueprintVisible)
	struct FADS_SkeletonCaptainNative                  SkeletonShipCaptain;                                      // 0x0710(0x0048) (Edit, BlueprintVisible)
	struct FADS_SkeletonCurseNative                    SkeletonCurse;                                            // 0x0758(0x0028) (Edit, BlueprintVisible)
	struct FADS_WaterPumpNative                        WaterPump;                                                // 0x0780(0x0028) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass AD_ThirdPerson_PlayerPirate_Female_Default.AD_ThirdPerson_PlayerPirate_Female_Default_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_DS_TheArtOfTheTrickster_VaultParams_classes.hpp"
#include "SoT_DS_TheArtOfTheTrickster_NoteGroup_Definition_classes.hpp"
#include "SoT_DS_Lorebooks_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct DS_TheArtOfTheTrickster_Definition.DS_TheArtOfTheTrickster_Definition
// 0x01B8
struct FDS_TheArtOfTheTrickster_Definition
{
	TAssetPtr<class AActor>                            CagedSkeletonLocation_38_2F203211491577E63EC160925C2413C8;// 0x0000(0x0020) (Edit, BlueprintVisible)
	TArray<struct FDS_TheArtOfTheTrickster_NoteGroup_Definition> Islands_57_ACE71D5F43D868BEABA0D5AB503060BC;              // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UClass*                                      GunpowderItem_17_FFFD5927448A34C13D0CDF9490C16310;        // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class AActor>                            PlinthLocation_20_09C521CC463C5F0E6EF6E18449DBF7AD;       // 0x0038(0x0020) (Edit, BlueprintVisible)
	TAssetPtr<class AActor>                            TrapmakersLabSkeletonSpawnLocation_23_7B30E71849B3DB96D3B315BA696BA572;// 0x0058(0x0020) (Edit, BlueprintVisible)
	TAssetPtr<class AActor>                            ShroudbreakerGemLocation_26_00B0F4C742EADA40E3B5F4909F489F35;// 0x0078(0x0020) (Edit, BlueprintVisible)
	TAssetPtr<class AActor>                            VaultTableLocation_29_0BC4D5904D806C87AA0DA2BFC663A3D5;   // 0x0098(0x0020) (Edit, BlueprintVisible)
	TAssetPtr<class AActor>                            VaultSkeletonSpawnLocation_32_1BD82E804FFD26186DEB428366126BFB;// 0x00B8(0x0020) (Edit, BlueprintVisible)
	TAssetPtr<class AActor>                            NPCLocation_47_99D2C2FA4D1D8C5A3E1EEF91585F38A6;          // 0x00D8(0x0020) (Edit, BlueprintVisible)
	TAssetPtr<class AActor>                            SaltyHandInLocation_54_9A83C89B47953F7939C6FFA3977F49C5;  // 0x00F8(0x0020) (Edit, BlueprintVisible)
	TArray<struct FDS_Lorebooks>                       LoreBooks_61_1F2C0A7B41C13381634D9581B5016791;            // 0x0118(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FDS_TheArtOfTheTrickster_VaultParams> VaultParams_65_37AD18E24D3A109ADA8CD98AF4DE6817;          // 0x0128(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UVaultPuzzleDataAsset*                       FakeOutVaultDataAsset_75_49994D0F4F050F8580A9DDBC784AFE41;// 0x0138(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVaultPuzzleDataAsset*                       CombatVaultDataAsset_76_FDDA1F4642EB7EB622CAA9A007826DBA; // 0x0140(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class AActor>                            TrapmakersCaveMusicZoneLocation_79_E919C80D4449618EAC8241931883FC8F;// 0x0148(0x0020) (Edit, BlueprintVisible)
	TArray<class UAISpawner*>                          VaultSpawners_83_66C49EE5427A4502E846ABB34E7D4389;        // 0x0168(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TAssetPtr<class AActor>                            TrapmakersLabMusicZoneLocation_89_FC4C20344E6CE84A1F7C3E89ADFD42EB;// 0x0178(0x0020) (Edit, BlueprintVisible)
	TAssetPtr<class AActor>                            CaveOfBonesMusicZoneLocation_92_032CEA7146CFDA09B4DFF48C21006AA4;// 0x0198(0x0020) (Edit, BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

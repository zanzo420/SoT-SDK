// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Tutorial_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Tutorial.CompanyTutorialVoyageProgress.IsSameVoyage
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   VoyageName                     (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCompanyTutorialVoyageProgress::IsSameVoyage(const struct FText& VoyageName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tutorial.CompanyTutorialVoyageProgress.IsSameVoyage"));

	struct
	{
		struct FText                   VoyageName;
		bool                           ReturnValue;
	} params;

	params.VoyageName = VoyageName;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Tutorial.CompanyTutorialVoyageProgress.AssignVoyage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  VoyageProposalDescClass        (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  TaleRankDescClass              (Parm, ZeroConstructor, IsPlainOldData)

void UCompanyTutorialVoyageProgress::AssignVoyage(class UClass* VoyageProposalDescClass, class UClass* TaleRankDescClass)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tutorial.CompanyTutorialVoyageProgress.AssignVoyage"));

	struct
	{
		class UClass*                  VoyageProposalDescClass;
		class UClass*                  TaleRankDescClass;
	} params;

	params.VoyageProposalDescClass = VoyageProposalDescClass;
	params.TaleRankDescClass = TaleRankDescClass;

	UObject::ProcessEvent(fn, &params);
}


// Function Tutorial.Tutorial2019Component.ReceiveTutorial2019BeginPlayOnServer
// (Event, Public, BlueprintEvent)

void UTutorial2019Component::ReceiveTutorial2019BeginPlayOnServer()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tutorial.Tutorial2019Component.ReceiveTutorial2019BeginPlayOnServer"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Tutorial.Tutorial2019Component.ReceiveTutorial2019BeginPlayOnClient
// (Event, Public, BlueprintEvent)

void UTutorial2019Component::ReceiveTutorial2019BeginPlayOnClient()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tutorial.Tutorial2019Component.ReceiveTutorial2019BeginPlayOnClient"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Tutorial.Tutorial2019Component.OnRep_IsEnabledByServer
// (Final, Native, Private)
// Parameters:
// bool                           OldIsEnabled                   (Parm, ZeroConstructor, IsPlainOldData)

void UTutorial2019Component::OnRep_IsEnabledByServer(bool OldIsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tutorial.Tutorial2019Component.OnRep_IsEnabledByServer"));

	struct
	{
		bool                           OldIsEnabled;
	} params;

	params.OldIsEnabled = OldIsEnabled;

	UObject::ProcessEvent(fn, &params);
}


// Function Tutorial.Tutorial2019Component.ForceDisableComponent_Blueprint
// (Event, Public, BlueprintEvent)

void UTutorial2019Component::ForceDisableComponent_Blueprint()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tutorial.Tutorial2019Component.ForceDisableComponent_Blueprint"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Tutorial.Tutorial2019FunctionLibrary.GetNearestOnboardingSpawnPoint
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  CharacterToTeleport            (Parm, ZeroConstructor, IsPlainOldData)
// struct FTeleportLocation       ReturnValue                    (Parm, OutParm, ReturnParm)

struct FTeleportLocation UTutorial2019FunctionLibrary::GetNearestOnboardingSpawnPoint(class AActor* CharacterToTeleport)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tutorial.Tutorial2019FunctionLibrary.GetNearestOnboardingSpawnPoint"));

	struct
	{
		class AActor*                  CharacterToTeleport;
		struct FTeleportLocation       ReturnValue;
	} params;

	params.CharacterToTeleport = CharacterToTeleport;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Time_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Time.TimeInterface.GetTime
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameTime               ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameTime UTimeInterface::GetTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function Time.TimeInterface.GetTime");

	UTimeInterface_GetTime_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Time.TimeInterface.GetSmoothRealWorldTime
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FDateTime               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FDateTime UTimeInterface::GetSmoothRealWorldTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function Time.TimeInterface.GetSmoothRealWorldTime");

	UTimeInterface_GetSmoothRealWorldTime_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Time.TimeInterface.GetPreciseRealWorldTime
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FDateTime               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FDateTime UTimeInterface::GetPreciseRealWorldTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function Time.TimeInterface.GetPreciseRealWorldTime");

	UTimeInterface_GetPreciseRealWorldTime_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Time.TimeInterface.ConvertRealWorldTimeToGameWorldTime
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FDateTime               RealWorldTime                  (ConstParm, Parm, ZeroConstructor)
// struct FGameTime               ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameTime UTimeInterface::ConvertRealWorldTimeToGameWorldTime(const struct FDateTime& RealWorldTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Time.TimeInterface.ConvertRealWorldTimeToGameWorldTime");

	UTimeInterface_ConvertRealWorldTimeToGameWorldTime_Params params;
	params.RealWorldTime = RealWorldTime;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Time.TimeInterface.ConvertGameWorldTimeToRealWorldTime
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameTime               GameWorldTime                  (ConstParm, Parm)
// struct FDateTime               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FDateTime UTimeInterface::ConvertGameWorldTimeToRealWorldTime(const struct FGameTime& GameWorldTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Time.TimeInterface.ConvertGameWorldTimeToRealWorldTime");

	UTimeInterface_ConvertGameWorldTimeToRealWorldTime_Params params;
	params.GameWorldTime = GameWorldTime;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Time.DebugTimeInterface.SetTimeSlowdownScalar
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// float                          RequestedSlowdownScalar        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UDebugTimeInterface::SetTimeSlowdownScalar(float RequestedSlowdownScalar)
{
	static auto fn = UObject::FindObject<UFunction>("Function Time.DebugTimeInterface.SetTimeSlowdownScalar");

	UDebugTimeInterface_SetTimeSlowdownScalar_Params params;
	params.RequestedSlowdownScalar = RequestedSlowdownScalar;

	UObject::ProcessEvent(fn, &params);
}


// Function Time.DebugTimeInterface.SetTimeScalar
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            RequestedTimeScalar            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDebugTimeInterface::SetTimeScalar(int RequestedTimeScalar)
{
	static auto fn = UObject::FindObject<UFunction>("Function Time.DebugTimeInterface.SetTimeScalar");

	UDebugTimeInterface_SetTimeScalar_Params params;
	params.RequestedTimeScalar = RequestedTimeScalar;

	UObject::ProcessEvent(fn, &params);
}


// Function Time.DebugTimeInterface.SetTimeCatchupScalar
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// float                          RequestedCatchupScalar         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UDebugTimeInterface::SetTimeCatchupScalar(float RequestedCatchupScalar)
{
	static auto fn = UObject::FindObject<UFunction>("Function Time.DebugTimeInterface.SetTimeCatchupScalar");

	UDebugTimeInterface_SetTimeCatchupScalar_Params params;
	params.RequestedCatchupScalar = RequestedCatchupScalar;

	UObject::ProcessEvent(fn, &params);
}


// Function Time.DebugTimeInterface.SetSunset
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          SunsetHours                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDebugTimeInterface::SetSunset(float SunsetHours)
{
	static auto fn = UObject::FindObject<UFunction>("Function Time.DebugTimeInterface.SetSunset");

	UDebugTimeInterface_SetSunset_Params params;
	params.SunsetHours = SunsetHours;

	UObject::ProcessEvent(fn, &params);
}


// Function Time.DebugTimeInterface.SetSunrise
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          SunriseHours                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDebugTimeInterface::SetSunrise(float SunriseHours)
{
	static auto fn = UObject::FindObject<UFunction>("Function Time.DebugTimeInterface.SetSunrise");

	UDebugTimeInterface_SetSunrise_Params params;
	params.SunriseHours = SunriseHours;

	UObject::ProcessEvent(fn, &params);
}


// Function Time.DebugTimeInterface.SetGameWorldTime
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameTime               RequestedTime                  (ConstParm, Parm, OutParm, ReferenceParm)

void UDebugTimeInterface::SetGameWorldTime(const struct FGameTime& RequestedTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Time.DebugTimeInterface.SetGameWorldTime");

	UDebugTimeInterface_SetGameWorldTime_Params params;
	params.RequestedTime = RequestedTime;

	UObject::ProcessEvent(fn, &params);
}


// Function Time.DebugTimeInterface.GetTimeSlowdownScalar
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDebugTimeInterface::GetTimeSlowdownScalar()
{
	static auto fn = UObject::FindObject<UFunction>("Function Time.DebugTimeInterface.GetTimeSlowdownScalar");

	UDebugTimeInterface_GetTimeSlowdownScalar_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Time.DebugTimeInterface.GetTimeScalar
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UDebugTimeInterface::GetTimeScalar()
{
	static auto fn = UObject::FindObject<UFunction>("Function Time.DebugTimeInterface.GetTimeScalar");

	UDebugTimeInterface_GetTimeScalar_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Time.DebugTimeInterface.GetTimeCatchupScalar
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDebugTimeInterface::GetTimeCatchupScalar()
{
	static auto fn = UObject::FindObject<UFunction>("Function Time.DebugTimeInterface.GetTimeCatchupScalar");

	UDebugTimeInterface_GetTimeCatchupScalar_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Time.DebugTimeInterface.EnableQueryServiceTime
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           Enable                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDebugTimeInterface::EnableQueryServiceTime(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function Time.DebugTimeInterface.EnableQueryServiceTime");

	UDebugTimeInterface_EnableQueryServiceTime_Params params;
	params.Enable = Enable;

	UObject::ProcessEvent(fn, &params);
}


// Function Time.TimeBlueprintLibrary.MakeReplicatedDateTimeFromDateTime
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDateTime               InDateTime                     (Parm, ZeroConstructor)
// struct FReplicatedDateTime     ReturnValue                    (Parm, OutParm, ReturnParm)

struct FReplicatedDateTime UTimeBlueprintLibrary::STATIC_MakeReplicatedDateTimeFromDateTime(const struct FDateTime& InDateTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Time.TimeBlueprintLibrary.MakeReplicatedDateTimeFromDateTime");

	UTimeBlueprintLibrary_MakeReplicatedDateTimeFromDateTime_Params params;
	params.InDateTime = InDateTime;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Time.TimeBlueprintLibrary.MakeDateTimeFromReplicatedDateTime
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FReplicatedDateTime     InDateTime                     (Parm)
// struct FDateTime               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FDateTime UTimeBlueprintLibrary::STATIC_MakeDateTimeFromReplicatedDateTime(const struct FReplicatedDateTime& InDateTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Time.TimeBlueprintLibrary.MakeDateTimeFromReplicatedDateTime");

	UTimeBlueprintLibrary_MakeDateTimeFromReplicatedDateTime_Params params;
	params.InDateTime = InDateTime;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Time.TimeBlueprintLibrary.MakeDateTimeFromRaw
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            Year                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            Month                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Day                            (Parm, ZeroConstructor, IsPlainOldData)
// int                            Hour                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            Minute                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Second                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Millisecond                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FDateTime               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FDateTime UTimeBlueprintLibrary::STATIC_MakeDateTimeFromRaw(int Year, int Month, int Day, int Hour, int Minute, int Second, int Millisecond)
{
	static auto fn = UObject::FindObject<UFunction>("Function Time.TimeBlueprintLibrary.MakeDateTimeFromRaw");

	UTimeBlueprintLibrary_MakeDateTimeFromRaw_Params params;
	params.Year = Year;
	params.Month = Month;
	params.Day = Day;
	params.Hour = Hour;
	params.Minute = Minute;
	params.Second = Second;
	params.Millisecond = Millisecond;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Time.TimeBlueprintLibrary.DateTimesWithinTolerance
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDateTime               FirstDateTime                  (Parm, ZeroConstructor)
// struct FDateTime               SecondDateTime                 (Parm, ZeroConstructor)
// struct FTimespan               Tolerance                      (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTimeBlueprintLibrary::STATIC_DateTimesWithinTolerance(const struct FDateTime& FirstDateTime, const struct FDateTime& SecondDateTime, const struct FTimespan& Tolerance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Time.TimeBlueprintLibrary.DateTimesWithinTolerance");

	UTimeBlueprintLibrary_DateTimesWithinTolerance_Params params;
	params.FirstDateTime = FirstDateTime;
	params.SecondDateTime = SecondDateTime;
	params.Tolerance = Tolerance;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Time.TimeService.OnRep_ReplicatedServerTime
// (Final, Native, Protected)

void ATimeService::OnRep_ReplicatedServerTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function Time.TimeService.OnRep_ReplicatedServerTime");

	ATimeService_OnRep_ReplicatedServerTime_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function Time.TimeService.MulticastOnServiceTimeChangedRPC
// (Net, NetReliable, Native, Event, NetMulticast, Protected)
// Parameters:
// int64_t                        ServiceTimeInTicks             (Parm, ZeroConstructor, IsPlainOldData)

void ATimeService::MulticastOnServiceTimeChangedRPC(int64_t ServiceTimeInTicks)
{
	static auto fn = UObject::FindObject<UFunction>("Function Time.TimeService.MulticastOnServiceTimeChangedRPC");

	ATimeService_MulticastOnServiceTimeChangedRPC_Params params;
	params.ServiceTimeInTicks = ServiceTimeInTicks;

	UObject::ProcessEvent(fn, &params);
}


// Function Time.DebugTimeService.MulticastOnTimeScalarOffsetRPC
// (Net, NetReliable, Native, Event, NetMulticast, Protected)
// Parameters:
// int                            Scalar                         (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Offset                         (Parm, ZeroConstructor, IsPlainOldData)

void ADebugTimeService::MulticastOnTimeScalarOffsetRPC(int Scalar, int64_t Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function Time.DebugTimeService.MulticastOnTimeScalarOffsetRPC");

	ADebugTimeService_MulticastOnTimeScalarOffsetRPC_Params params;
	params.Scalar = Scalar;
	params.Offset = Offset;

	UObject::ProcessEvent(fn, &params);
}


// Function Time.DebugTimeService.MulticastOnSynchronizeTimeSpeedupRateRPC
// (Net, NetReliable, Native, Event, NetMulticast, Protected)
// Parameters:
// float                          Rate                           (Parm, ZeroConstructor, IsPlainOldData)

void ADebugTimeService::MulticastOnSynchronizeTimeSpeedupRateRPC(float Rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Time.DebugTimeService.MulticastOnSynchronizeTimeSpeedupRateRPC");

	ADebugTimeService_MulticastOnSynchronizeTimeSpeedupRateRPC_Params params;
	params.Rate = Rate;

	UObject::ProcessEvent(fn, &params);
}


// Function Time.DebugTimeService.MulticastOnSynchronizeTimeSlowdownRateRPC
// (Net, NetReliable, Native, Event, NetMulticast, Protected)
// Parameters:
// float                          Rate                           (Parm, ZeroConstructor, IsPlainOldData)

void ADebugTimeService::MulticastOnSynchronizeTimeSlowdownRateRPC(float Rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Time.DebugTimeService.MulticastOnSynchronizeTimeSlowdownRateRPC");

	ADebugTimeService_MulticastOnSynchronizeTimeSlowdownRateRPC_Params params;
	params.Rate = Rate;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

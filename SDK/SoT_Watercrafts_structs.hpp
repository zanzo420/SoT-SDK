#pragma once

// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_Water_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum Watercrafts.EOarState
enum class EOarState : uint8_t
{
	EOarState__Idle                = 0,
	None                           = 1,
	EOarState__Braking             = 2,
	None01                         = 3,
	EKrakenDespawnReason__Invalid  = 4
};


// Enum Watercrafts.EOarIdentifier
enum class EOarIdentifier : uint8_t
{
	EOarIdentifier__Left           = 0,
	None                           = 1,
	IntProperty                    = 2
};


// Enum Watercrafts.EWatercraftDespawnReason
enum class EWatercraftDespawnReason : uint8_t
{
	EWatercraftDespawnReason__Unknown = 0,
	None                           = 1,
	EOarInputState__Inactive       = 2
};


// Enum Watercrafts.EOarInputState
enum class EOarInputState : uint8_t
{
	EOarInputState__Inactive       = 0,
	None                           = 1,
	EGeyserState__Dormant          = 2
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Watercrafts.ScrapeableDamageSpeedEntry
// 0x0018
struct FScrapeableDamageSpeedEntry
{
	class UClass*                                      SpeedBand;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UForceFeedbackEffect*                        ForceFeedbackEffect;                                      // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DamageAmount;                                             // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Watercrafts.WatercraftRolloverCorrector
// 0x000C
struct FWatercraftRolloverCorrector
{
	float                                              RollThresholdToConsiderRolledOver;                        // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TorqueScalar;                                             // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0008(0x0004) MISSED OFFSET
};

// ScriptStruct Watercrafts.RowboatDamageEffectData
// 0x0018
struct FRowboatDamageEffectData
{
	class UMaterialInstanceDynamic*                    DynamicMaterialInstance;                                  // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              FadeInDuration;                                           // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x000C(0x000C) MISSED OFFSET
};

// ScriptStruct Watercrafts.RowboatStrainDamageData
// 0x001C
struct FRowboatStrainDamageData
{
	float                                              StormDamageScalar;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StormIntensityThreshold;                                  // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinStormDamageFrequencyInSeconds;                         // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxStormDamageFrequencyInSeconds;                         // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WorldEdgeDamageScalar;                                    // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinWorldEdgeDamageFrequencyInSeconds;                     // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxWorldEdgeDamageFrequencyInSeconds;                     // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Watercrafts.BaseWatercraftTelemetryEvent
// 0x0010
struct FBaseWatercraftTelemetryEvent
{
	struct FGuid                                       WatercraftId;                                             // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Watercrafts.WatercraftDespawnTelemetryEvent
// 0x0010 (0x0020 - 0x0010)
struct FWatercraftDespawnTelemetryEvent : public FBaseWatercraftTelemetryEvent
{
	struct FVector                                     Location;                                                 // 0x0010(0x000C) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EWatercraftDespawnReason>              DespawnReason;                                            // 0x001C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct Watercrafts.WatercraftSpawnTelemetryEvent
// 0x0028 (0x0038 - 0x0010)
struct FWatercraftSpawnTelemetryEvent : public FBaseWatercraftTelemetryEvent
{
	class FString                                      WatercraftType;                                           // 0x0010(0x0010) (ZeroConstructor)
	struct FVector                                     Location;                                                 // 0x0020(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Forward;                                                  // 0x002C(0x000C) (ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xca0
// Has VTable
// Is Abstract
// 
// MNetworkIncludeByName "m_flTimeScale"
// MNetworkExcludeByName "m_angRotation"
// MNetworkExcludeByName "m_blinktoggle"
// MNetworkExcludeByName "m_cellX"
// MNetworkExcludeByName "m_cellY"
// MNetworkExcludeByName "m_cellZ"
// MNetworkExcludeByName "m_flAnimTime"
// MNetworkExcludeByUserGroup "m_flCycle"
// MNetworkExcludeByName "m_flEncodedController"
// MNetworkExcludeByName "m_flPoseParameter"
// MNetworkExcludeByName "m_flSimulationTime"
// MNetworkExcludeByName "m_flexWeight"
// MNetworkExcludeByName "m_nForceBone"
// MNetworkExcludeByName "m_nHitboxSet"
// MNetworkExcludeByName "m_baseLayer.m_hSequence"
// MNetworkExcludeByName "m_vecForce"
// MNetworkExcludeByName "m_vecMaxs"
// MNetworkExcludeByName "m_vecMins"
// MNetworkExcludeByName "m_vecOrigin"
// MNetworkExcludeByName "m_vecSpecifiedSurroundingMaxs"
// MNetworkExcludeByName "m_vecSpecifiedSurroundingMins"
// MNetworkExcludeByName "m_vLookTargetPosition"
// MNetworkExcludeByName "m_MoveCollide"
// MNetworkExcludeByName "m_MoveType"
// MNetworkExcludeByName "m_Gender"
// MNetworkExcludeByName "m_flElasticity"
// MNetworkExcludeByName "m_nMinCPULevel"
// MNetworkExcludeByName "m_nMinGPULevel"
// MNetworkExcludeByName "m_nMaxCPULevel"
// MNetworkExcludeByName "m_nMaxGPULevel"
// MNetworkExcludeByName "m_flNavIgnoreUntilTime"
// MNetworkExcludeByName "m_ubInterpolationFrame"
// MNetworkExcludeByName "m_flScale"
// MNetworkExcludeByUserGroup "overlay_vars"
// MNetworkOverride "m_flTimeScale"
// MNetworkVarNames "bool m_bChanneling"
// MNetworkVarNames "bool m_bInCastDelay"
// MNetworkVarNames "EntitySubclassID_t m_vecImbuedByAbilitiyIDs"
// MNetworkVarNames "int m_nUpgradeBits"
// MNetworkVarNames "int m_iBucketID"
// MNetworkVarNames "bool m_bToggleState"
// MNetworkVarNames "GameTime_t m_flCooldownStart"
// MNetworkVarNames "GameTime_t m_flCooldownEnd"
// MNetworkVarNames "GameTime_t m_flCastCompletedTime"
// MNetworkVarNames "GameTime_t m_flChannelStartTime"
// MNetworkVarNames "GameTime_t m_flCastDelayStartTime"
// MNetworkVarNames "EAbilitySlots_t m_eAbilitySlot"
// MNetworkVarNames "GameTime_t m_flPostCastDelayEndTime"
// MNetworkVarNames "int m_iRemainingCharges"
// MNetworkVarNames "GameTime_t m_flChargeRechargeStart"
// MNetworkVarNames "GameTime_t m_flChargeRechargeEnd"
// MNetworkVarNames "GameTime_t m_flMovementControlActiveTime"
// MNetworkVarNames "GameTime_t m_flSelectedChangedTime"
// MNetworkVarNames "GameTime_t m_flAltCastHoldStartTime"
// MNetworkVarNames "GameTime_t m_flAltCastDoubleTapStartTime"
// MNetworkVarNames "AbilityID_t m_nImbuedAbilityID"
// MNetworkVarNames "bool m_bSelectionModeIsAltMode"
class C_CitadelBaseAbility : public C_BaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad0568[0xd0]; // 0x568
public:
	CUtlVector< CModifierHandleTyped< CCitadelModifier > > m_vecIntrinsicModifiers; // 0x638	
	CModifierHandleTyped< CCitadelModifier > m_pCastDelayAutoModifier; // 0x650	
	CModifierHandleTyped< CCitadelModifier > m_pChannelAutoModifier; // 0x668	
	CGlobalSymbol m_strUsedCastGraphParam; // 0x680	
	int32_t m_nCastParamNeedsResetTick; // 0x688	
	bool m_bIsCoolingDownInternal; // 0x68c	
private:
	[[maybe_unused]] uint8_t __pad068d[0x3]; // 0x68d
public:
	GameTime_t m_flCancelLockoutTime; // 0x690	
private:
	[[maybe_unused]] uint8_t __pad0694[0x1c]; // 0x694
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnChannelingChanged"
	bool m_bChanneling; // 0x6b0	
	// MNetworkEnable
	// MNetworkChangeCallback "OnInCastDelayChanged"
	bool m_bInCastDelay; // 0x6b1	
private:
	[[maybe_unused]] uint8_t __pad06b2[0x6]; // 0x6b2
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnAbilityImbuedChanged"
	C_NetworkUtlVectorBase< CUtlStringToken > m_vecImbuedByAbilitiyIDs; // 0x6b8	
	// MNetworkEnable
	// MNetworkChangeCallback "OnUpgradeBitsChanged"
	// MNetworkPriority "32"
	int32_t m_nUpgradeBits; // 0x6d0	
	// MNetworkEnable
	int32_t m_iBucketID; // 0x6d4	
	// MNetworkEnable
	bool m_bToggleState; // 0x6d8	
private:
	[[maybe_unused]] uint8_t __pad06d9[0x3]; // 0x6d9
public:
	// MNetworkEnable
	// MNetworkPriority "32"
	GameTime_t m_flCooldownStart; // 0x6dc	
	// MNetworkEnable
	// MNetworkPriority "32"
	GameTime_t m_flCooldownEnd; // 0x6e0	
	// MNetworkEnable
	GameTime_t m_flCastCompletedTime; // 0x6e4	
	// MNetworkEnable
	GameTime_t m_flChannelStartTime; // 0x6e8	
	// MNetworkEnable
	GameTime_t m_flCastDelayStartTime; // 0x6ec	
	// MNetworkEnable
	// MNetworkChangeCallback "OnAbilitySlotChanged"
	EAbilitySlots_t m_eAbilitySlot; // 0x6f0	
private:
	[[maybe_unused]] uint8_t __pad06f2[0x2]; // 0x6f2
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flPostCastDelayEndTime; // 0x6f4	
	// MNetworkEnable
	// MNetworkPriority "32"
	int32_t m_iRemainingCharges; // 0x6f8	
	// MNetworkEnable
	// MNetworkPriority "32"
	GameTime_t m_flChargeRechargeStart; // 0x6fc	
	// MNetworkEnable
	// MNetworkPriority "32"
	GameTime_t m_flChargeRechargeEnd; // 0x700	
	// MNetworkEnable
	GameTime_t m_flMovementControlActiveTime; // 0x704	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flSelectedChangedTime; // 0x708	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flAltCastHoldStartTime; // 0x70c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flAltCastDoubleTapStartTime; // 0x710	
	// MNetworkEnable
	CUtlStringToken m_nImbuedAbilityID; // 0x714	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bSelectionModeIsAltMode; // 0x718	
};


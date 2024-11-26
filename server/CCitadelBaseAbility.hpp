#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb00
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
// MNetworkUserGroupProxy "CCitadelBaseAbility"
// MNetworkUserGroupProxy "CCitadelBaseAbility"
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
class CCitadelBaseAbility : public CBaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad04e8[0xd8]; // 0x4e8
public:
	CUtlVector< CModifierHandleTyped< CCitadelModifier > > m_vecIntrinsicModifiers; // 0x5c0	
	CModifierHandleTyped< CCitadelModifier > m_pCastDelayAutoModifier; // 0x5d8	
	CModifierHandleTyped< CCitadelModifier > m_pChannelAutoModifier; // 0x5f0	
	CGlobalSymbol m_strUsedCastGraphParam; // 0x608	
	int32_t m_nCastParamNeedsResetTick; // 0x610	
	bool m_bIsCoolingDownInternal; // 0x614	
private:
	[[maybe_unused]] uint8_t __pad0615[0x3]; // 0x615
public:
	GameTime_t m_flCancelLockoutTime; // 0x618	
private:
	[[maybe_unused]] uint8_t __pad061c[0x1c]; // 0x61c
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnChannelingChanged"
	bool m_bChanneling; // 0x638	
	// MNetworkEnable
	// MNetworkChangeCallback "OnInCastDelayChanged"
	bool m_bInCastDelay; // 0x639	
private:
	[[maybe_unused]] uint8_t __pad063a[0x6]; // 0x63a
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnAbilityImbuedChanged"
	CNetworkUtlVectorBase< CUtlStringToken > m_vecImbuedByAbilitiyIDs; // 0x640	
	// MNetworkEnable
	// MNetworkChangeCallback "OnUpgradeBitsChanged"
	// MNetworkPriority "32"
	int32_t m_nUpgradeBits; // 0x658	
	// MNetworkEnable
	int32_t m_iBucketID; // 0x65c	
	// MNetworkEnable
	bool m_bToggleState; // 0x660	
private:
	[[maybe_unused]] uint8_t __pad0661[0x3]; // 0x661
public:
	// MNetworkEnable
	// MNetworkPriority "32"
	GameTime_t m_flCooldownStart; // 0x664	
	// MNetworkEnable
	// MNetworkPriority "32"
	GameTime_t m_flCooldownEnd; // 0x668	
	// MNetworkEnable
	GameTime_t m_flCastCompletedTime; // 0x66c	
	// MNetworkEnable
	GameTime_t m_flChannelStartTime; // 0x670	
	// MNetworkEnable
	GameTime_t m_flCastDelayStartTime; // 0x674	
	// MNetworkEnable
	// MNetworkChangeCallback "OnAbilitySlotChanged"
	EAbilitySlots_t m_eAbilitySlot; // 0x678	
private:
	[[maybe_unused]] uint8_t __pad067a[0x2]; // 0x67a
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flPostCastDelayEndTime; // 0x67c	
	// MNetworkEnable
	// MNetworkPriority "32"
	int32_t m_iRemainingCharges; // 0x680	
	// MNetworkEnable
	// MNetworkPriority "32"
	GameTime_t m_flChargeRechargeStart; // 0x684	
	// MNetworkEnable
	// MNetworkPriority "32"
	GameTime_t m_flChargeRechargeEnd; // 0x688	
	// MNetworkEnable
	GameTime_t m_flMovementControlActiveTime; // 0x68c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flSelectedChangedTime; // 0x690	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flAltCastHoldStartTime; // 0x694	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flAltCastDoubleTapStartTime; // 0x698	
	// MNetworkEnable
	CUtlStringToken m_nImbuedAbilityID; // 0x69c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bSelectionModeIsAltMode; // 0x6a0	
private:
	[[maybe_unused]] uint8_t __pad06a1[0x7]; // 0x6a1
public:
	CUtlVector< CHandle< CBaseEntity > > m_vecEnemyHeroesDamaged; // 0x6a8	
	float m_flPreviousEffectiveCooldown; // 0x6c0	
	
	// Datamap fields:
	// int32_t slot; // 0x7fffffff
	// int32_t bucket_id; // 0x7fffffff
	// float time_scale; // 0x7fffffff
};


#pragma once

#include <cstdint>

struct CEntityIOOutput;
struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd90
// Has VTable
// 
// MNetworkExcludeByName "m_flAnimTime"
// MNetworkExcludeByName "m_flexWeight"
// MNetworkExcludeByName "m_blinktoggle"
// MNetworkExcludeByUserGroup "m_flPoseParameter"
// MNetworkExcludeByName "m_animationController.m_flPlaybackRate"
// MNetworkExcludeByUserGroup "overlay_vars"
// MNetworkIncludeByName "m_spawnflags"
// MNetworkVarNames "bool m_bAwake"
class CPhysicsProp : public CBreakableProp
{
private:
	[[maybe_unused]] uint8_t __pad0be8[0x8]; // 0xbe8
public:
	CEntityIOOutput m_MotionEnabled; // 0xbf0	
	CEntityIOOutput m_OnAwakened; // 0xc18	
	CEntityIOOutput m_OnAwake; // 0xc40	
	CEntityIOOutput m_OnAsleep; // 0xc68	
	CEntityIOOutput m_OnPlayerUse; // 0xc90	
	CEntityIOOutput m_OnOutOfWorld; // 0xcb8	
	CEntityIOOutput m_OnPlayerPickup; // 0xce0	
	bool m_bForceNavIgnore; // 0xd08	
	bool m_bNoNavmeshBlocker; // 0xd09	
	bool m_bForceNpcExclude; // 0xd0a	
private:
	[[maybe_unused]] uint8_t __pad0d0b[0x1]; // 0xd0b
public:
	float m_massScale; // 0xd0c	
	float m_inertiaScale; // 0xd10	
	float m_buoyancyScale; // 0xd14	
	int32_t m_damageType; // 0xd18	
	int32_t m_damageToEnableMotion; // 0xd1c	
	float m_flForceToEnableMotion; // 0xd20	
	bool m_bThrownByPlayer; // 0xd24	
	bool m_bDroppedByPlayer; // 0xd25	
	bool m_bTouchedByPlayer; // 0xd26	
	bool m_bFirstCollisionAfterLaunch; // 0xd27	
	int32_t m_iExploitableByPlayer; // 0xd28	
	bool m_bHasBeenAwakened; // 0xd2c	
	bool m_bIsOverrideProp; // 0xd2d	
private:
	[[maybe_unused]] uint8_t __pad0d2e[0x2]; // 0xd2e
public:
	GameTime_t m_fNextCheckDisableMotionContactsTime; // 0xd30	
	int32_t m_iInitialGlowState; // 0xd34	
	int32_t m_nGlowRange; // 0xd38	
	int32_t m_nGlowRangeMin; // 0xd3c	
	Color m_glowColor; // 0xd40	
	bool m_bShouldAutoConvertBackFromDebris; // 0xd44	
	bool m_bMuteImpactEffects; // 0xd45	
private:
	[[maybe_unused]] uint8_t __pad0d46[0x9]; // 0xd46
public:
	bool m_bAcceptDamageFromHeldObjects; // 0xd4f	
	bool m_bEnableUseOutput; // 0xd50	
private:
	[[maybe_unused]] uint8_t __pad0d51[0x3]; // 0xd51
public:
	CPhysicsProp::CrateType_t m_CrateType; // 0xd54	
	CUtlSymbolLarge m_strItemClass[4]; // 0xd58	
	int32_t m_nItemCount[4]; // 0xd78	
	bool m_bRemovableForAmmoBalancing; // 0xd88	
	// MNetworkEnable
	bool m_bAwake; // 0xd89	
	
	// Datamap fields:
	// void InputEnableMotion; // 0x0
	// void InputDisableMotion; // 0x0
	// void InputWake; // 0x0
	// bool InputSetAutoConvertBackFromDebris; // 0x0
	// void InputSleep; // 0x0
	// void InputDisableFloating; // 0x0
	// void InputStartGlowing; // 0x0
	// void InputStopGlowing; // 0x0
	// Vector InputSetGlowOverride; // 0x0
	// int32_t InputSetGlowRange; // 0x0
	// float InputSetMass; // 0x0
	// void InputEnableGravity; // 0x0
	// void InputDisableGravity; // 0x0
	// void InputEnableDrag; // 0x0
	// void InputDisableDrag; // 0x0
	// void InputEnableCollisions; // 0x0
	// void InputDisableCollisions; // 0x0
	// bool forcemotiondisabled; // 0x7fffffff
	// bool phys_start_asleep; // 0x7fffffff
	// void CPhysicsPropClearFlagsThink; // 0x0
	// int32_t m_nNavObstacleType; // 0xd48
	// bool m_bUpdateNavWhenMoving; // 0xd4c
	// bool m_bForceNavObstacleCut; // 0xd4d
	// bool m_bAllowObstacleConvexHullMerging; // 0xd4e
	// int32_t health; // 0x7fffffff
};


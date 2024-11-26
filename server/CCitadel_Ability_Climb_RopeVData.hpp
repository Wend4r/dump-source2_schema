#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x15d0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Climb_RopeVData : public CitadelAbilityVData
{
public:
	float m_flMinButtonHoldTimeToActivate; // 0x1560	
	float m_flClimbSpeedUp; // 0x1564	
	float m_flClimbSpeedDown; // 0x1568	
	float m_flClimbSpeedDownMax; // 0x156c	
	float m_flClimbDownAccelTime; // 0x1570	
	float m_flLatchSpeed; // 0x1574	
	float m_flAttachOffset; // 0x1578	
	float m_flMinReconnectTime; // 0x157c	
	float m_flSideMoveReduction; // 0x1580	
	float m_flTopOffset; // 0x1584	
	float m_flBottomOffset; // 0x1588	
	float m_flTraceRadiusSize; // 0x158c	
	float m_flStopTimeToShoot; // 0x1590	
	float m_flJumpOffVertical; // 0x1594	
	float m_flJumpOffHorizontal; // 0x1598	
	float m_flDuckOffVertical; // 0x159c	
	float m_flDuckOffHorizontal; // 0x15a0	
	float m_flActivateRange; // 0x15a4	
	float m_flJumpToRoofRayCheckDist; // 0x15a8	
	float m_flMinTimeToRoofCheck; // 0x15ac	
	float m_flTimeToHintRefresh; // 0x15b0	
	float m_iMaxHintCount; // 0x15b4	
	float m_flClimbRopeSlowDurationOnHit; // 0x15b8	
private:
	[[maybe_unused]] uint8_t __pad15bc[0x4]; // 0x15bc
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_ClimbRopeSlowOnHitModifier; // 0x15c0	
};


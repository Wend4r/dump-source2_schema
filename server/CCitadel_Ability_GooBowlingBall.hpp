#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xfe0
// Has VTable
// 
// MNetworkVarNames "bool m_bIsRolling"
// MNetworkVarNames "CHandle< CCitadelViscousBall > m_hBall"
// MNetworkVarNames "EViscousBowlingBallState_t m_eRollingState"
// MNetworkVarNames "GameTime_t m_flNextStateTime"
// MNetworkVarNames "GameTime_t m_flNextWallCheck"
// MNetworkVarNames "GameTime_t m_flRollStartTime"
// MNetworkVarNames "GameTime_t m_flWallExitTime"
// MNetworkVarNames "Vector m_vecWallExitVelocity"
class CCitadel_Ability_GooBowlingBall : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0af8[0x348]; // 0xaf8
public:
	int32_t m_nAirJumpsLeft; // 0xe40	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	// MNetworkChangeCallback "OnIsRollingChanged"
	bool m_bIsRolling; // 0xe44	
private:
	[[maybe_unused]] uint8_t __pad0e45[0x3]; // 0xe45
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	CHandle< CCitadelViscousBall > m_hBall; // 0xe48	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	EViscousBowlingBallState_t m_eRollingState; // 0xe4c	
private:
	[[maybe_unused]] uint8_t __pad0e4d[0x3]; // 0xe4d
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flNextStateTime; // 0xe50	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flNextWallCheck; // 0xe54	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flRollStartTime; // 0xe58	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flWallExitTime; // 0xe5c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	Vector m_vecWallExitVelocity; // 0xe60	
};


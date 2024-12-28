#pragma once

#include <cstdint>

struct GameTime_t;
struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1180
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
class CCitadel_Ability_GooBowlingBall : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c98[0x348]; // 0xc98
public:
	int32_t m_nAirJumpsLeft; // 0xfe0	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	// MNetworkChangeCallback "OnIsRollingChanged"
	bool m_bIsRolling; // 0xfe4	
private:
	[[maybe_unused]] uint8_t __pad0fe5[0x3]; // 0xfe5
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	CHandle< C_CitadelViscousBall > m_hBall; // 0xfe8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	EViscousBowlingBallState_t m_eRollingState; // 0xfec	
private:
	[[maybe_unused]] uint8_t __pad0fed[0x3]; // 0xfed
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flNextStateTime; // 0xff0	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flNextWallCheck; // 0xff4	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flRollStartTime; // 0xff8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flWallExitTime; // 0xffc	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	Vector m_vecWallExitVelocity; // 0x1000	
private:
	[[maybe_unused]] uint8_t __pad100c[0x8]; // 0x100c
public:
	ParticleIndex_t m_nDirectionParticleIndex; // 0x1014	
};


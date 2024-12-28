#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf90
// Has VTable
// 
// MNetworkVarNames "ELashGrappleState m_EGrappleState"
// MNetworkVarNames "GameTime_t m_flStateEnterTime"
// MNetworkVarNames "GameTime_t m_flNextStateTime"
// MNetworkVarNames "GameTime_t m_flBoostEndTime"
class CCitadel_Ability_Lash_Ultimate : public CCitadelBaseLockonAbility
{
private:
	[[maybe_unused]] uint8_t __pad0e28[0x2]; // 0xe28
public:
	// MNetworkEnable
	ELashGrappleState m_EGrappleState; // 0xe2a	
private:
	[[maybe_unused]] uint8_t __pad0e2b[0x1]; // 0xe2b
public:
	// MNetworkEnable
	GameTime_t m_flStateEnterTime; // 0xe2c	
	// MNetworkEnable
	GameTime_t m_flNextStateTime; // 0xe30	
	// MNetworkEnable
	GameTime_t m_flBoostEndTime; // 0xe34	
};


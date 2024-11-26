#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xec8
// Has VTable
// 
// MNetworkVarNames "Vector m_vecTeleportPosition"
// MNetworkVarNames "Vector m_vecTeleportPositionNormal"
// MNetworkVarNames "ETelepunchState_t m_eTelepunchState"
// MNetworkVarNames "GameTime_t m_flNextStateTime"
class CCitadel_Ability_Viscous_Telepunch : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0ca0[0x1f8]; // 0xca0
public:
	// MNetworkEnable
	Vector m_vecTeleportPosition; // 0xe98	
	// MNetworkEnable
	Vector m_vecTeleportPositionNormal; // 0xea4	
	// MNetworkEnable
	ETelepunchState_t m_eTelepunchState; // 0xeb0	
private:
	[[maybe_unused]] uint8_t __pad0eb1[0x3]; // 0xeb1
public:
	// MNetworkEnable
	GameTime_t m_flNextStateTime; // 0xeb4	
};


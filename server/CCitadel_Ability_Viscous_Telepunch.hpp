#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd90
// Has VTable
// 
// MNetworkVarNames "Vector m_vecTeleportPosition"
// MNetworkVarNames "Vector m_vecTeleportPositionNormal"
// MNetworkVarNames "ETelepunchState_t m_eTelepunchState"
// MNetworkVarNames "GameTime_t m_flNextStateTime"
class CCitadel_Ability_Viscous_Telepunch : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0af8[0x268]; // 0xaf8
public:
	// MNetworkEnable
	Vector m_vecTeleportPosition; // 0xd60	
	// MNetworkEnable
	Vector m_vecTeleportPositionNormal; // 0xd6c	
	// MNetworkEnable
	ETelepunchState_t m_eTelepunchState; // 0xd78	
private:
	[[maybe_unused]] uint8_t __pad0d79[0x3]; // 0xd79
public:
	// MNetworkEnable
	GameTime_t m_flNextStateTime; // 0xd7c	
};


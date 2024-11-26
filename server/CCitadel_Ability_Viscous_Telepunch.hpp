#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd28
// Has VTable
// 
// MNetworkVarNames "Vector m_vecTeleportPosition"
// MNetworkVarNames "Vector m_vecTeleportPositionNormal"
// MNetworkVarNames "ETelepunchState_t m_eTelepunchState"
// MNetworkVarNames "GameTime_t m_flNextStateTime"
class CCitadel_Ability_Viscous_Telepunch : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0b00[0x1f8]; // 0xb00
public:
	// MNetworkEnable
	Vector m_vecTeleportPosition; // 0xcf8	
	// MNetworkEnable
	Vector m_vecTeleportPositionNormal; // 0xd04	
	// MNetworkEnable
	ETelepunchState_t m_eTelepunchState; // 0xd10	
private:
	[[maybe_unused]] uint8_t __pad0d11[0x3]; // 0xd11
public:
	// MNetworkEnable
	GameTime_t m_flNextStateTime; // 0xd14	
};


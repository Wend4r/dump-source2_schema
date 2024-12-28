#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf30
// Has VTable
// 
// MNetworkVarNames "Vector m_vecTeleportPosition"
// MNetworkVarNames "Vector m_vecTeleportPositionNormal"
// MNetworkVarNames "ETelepunchState_t m_eTelepunchState"
// MNetworkVarNames "GameTime_t m_flNextStateTime"
class CCitadel_Ability_Viscous_Telepunch : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c98[0x268]; // 0xc98
public:
	// MNetworkEnable
	Vector m_vecTeleportPosition; // 0xf00	
	// MNetworkEnable
	Vector m_vecTeleportPositionNormal; // 0xf0c	
	// MNetworkEnable
	ETelepunchState_t m_eTelepunchState; // 0xf18	
private:
	[[maybe_unused]] uint8_t __pad0f19[0x3]; // 0xf19
public:
	// MNetworkEnable
	GameTime_t m_flNextStateTime; // 0xf1c	
};


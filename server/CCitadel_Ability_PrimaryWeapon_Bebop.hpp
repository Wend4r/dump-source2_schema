#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xfe0
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_flStartWindUpTime"
// MNetworkVarNames "GameTime_t m_flStartFiringTime"
// MNetworkVarNames "bool m_bFiring"
class CCitadel_Ability_PrimaryWeapon_Bebop : public CCitadel_Ability_PrimaryWeapon_BeamWeapon
{
private:
	[[maybe_unused]] uint8_t __pad0ba8[0x2b8]; // 0xba8
public:
	// MNetworkEnable
	GameTime_t m_flStartWindUpTime; // 0xe60	
	// MNetworkEnable
	GameTime_t m_flStartFiringTime; // 0xe64	
	// MNetworkEnable
	bool m_bFiring; // 0xe68	
};


#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x11a8
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_flStartWindUpTime"
// MNetworkVarNames "GameTime_t m_flStartFiringTime"
// MNetworkVarNames "bool m_bFiring"
class CCitadel_Ability_PrimaryWeapon_Bebop : public CCitadel_Ability_PrimaryWeapon_BeamWeapon
{
private:
	[[maybe_unused]] uint8_t __pad0d70[0x2b8]; // 0xd70
public:
	// MNetworkEnable
	GameTime_t m_flStartWindUpTime; // 0x1028	
	// MNetworkEnable
	GameTime_t m_flStartFiringTime; // 0x102c	
	// MNetworkEnable
	bool m_bFiring; // 0x1030	
};


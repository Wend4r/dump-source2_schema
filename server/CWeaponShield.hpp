#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xfa0
// Has VTable
// 
// MNetworkVarNames "float m_flDisplayHealth"
class CWeaponShield : public CCSWeaponBaseGun
{
public:
	float m_flBulletDamageAbsorbed; // 0xf90	
	GameTime_t m_flLastBulletHitSoundTime; // 0xf94	
	// MNetworkEnable
	float m_flDisplayHealth; // 0xf98	
};


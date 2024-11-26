#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xa08
// Has VTable
// 
// MNetworkVarNames "float m_flWidth"
// MNetworkVarNames "GameTime_t m_tDieTime"
class C_Projectile_Stomp_Projectile : public C_CitadelProjectile
{
public:
	// MNetworkEnable
	float m_flWidth; // 0x8e8	
	// MNetworkEnable
	GameTime_t m_tDieTime; // 0x8ec	
};


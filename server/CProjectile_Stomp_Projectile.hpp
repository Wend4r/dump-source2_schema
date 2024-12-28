#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x998
// Has VTable
// 
// MNetworkVarNames "float m_flWidth"
// MNetworkVarNames "GameTime_t m_tDieTime"
class CProjectile_Stomp_Projectile : public CCitadelProjectile
{
public:
	Vector m_vLastStompPos; // 0x868	
	bool m_bFinished; // 0x874	
private:
	[[maybe_unused]] uint8_t __pad0875[0x3]; // 0x875
public:
	// MNetworkEnable
	float m_flWidth; // 0x878	
	// MNetworkEnable
	GameTime_t m_tDieTime; // 0x87c	
};


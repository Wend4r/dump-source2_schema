#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x9a0
// Has VTable
// 
// MNetworkVarNames "float m_flWidth"
// MNetworkVarNames "GameTime_t m_tDieTime"
class CProjectile_Stomp_Projectile : public CCitadelProjectile
{
public:
	Vector m_vLastStompPos; // 0x870	
	bool m_bFinished; // 0x87c	
private:
	[[maybe_unused]] uint8_t __pad087d[0x3]; // 0x87d
public:
	// MNetworkEnable
	float m_flWidth; // 0x880	
	// MNetworkEnable
	GameTime_t m_tDieTime; // 0x884	
};


#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb78
// Has VTable
class CCitadelProjectile_ImmobilizeTrap : public CCitadelProjectile
{
public:
	GameTime_t m_flStartTime; // 0x870	
	Vector m_vecStartPos; // 0x874	
	Vector m_vecEndPos; // 0x880	
	GameTime_t m_flProjectileLandTime; // 0x88c	
};


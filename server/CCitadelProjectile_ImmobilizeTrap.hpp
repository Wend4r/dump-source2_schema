#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xbb0
// Has VTable
class CCitadelProjectile_ImmobilizeTrap : public CCitadelProjectile
{
public:
	GameTime_t m_flStartTime; // 0x868	
	Vector m_vecStartPos; // 0x86c	
	Vector m_vecEndPos; // 0x878	
	GameTime_t m_flProjectileLandTime; // 0x884	
};


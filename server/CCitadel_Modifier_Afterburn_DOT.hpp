#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1a8
// Has VTable
class CCitadel_Modifier_Afterburn_DOT : public CCitadel_Modifier_Burning
{
public:
	bool m_bCheckForExplosion; // 0xc0	
private:
	[[maybe_unused]] uint8_t __pad00c1[0x3]; // 0xc1
public:
	GameTime_t m_flLastBurnTime; // 0xc4	
};


#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x218
// Has VTable
class CCitadel_Modifier_RapidFire : public CCitadelModifier
{
private:
	[[maybe_unused]] uint8_t __pad00c0[0x150]; // 0xc0
public:
	GameTime_t m_flNextAttackTime; // 0x210	
};


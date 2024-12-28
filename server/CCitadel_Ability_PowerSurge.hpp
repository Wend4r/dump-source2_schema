#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xba8
// Has VTable
class CCitadel_Ability_PowerSurge : public CCitadelBaseAbility
{
public:
	GameTime_t m_flNextProcTime; // 0xaf8	
	float m_flBaseCooldown; // 0xafc	
};


#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x218
// Has VTable
class CCitadel_Modifier_Burrow : public CCitadelModifier
{
public:
	CHandle< CTriggerBurrowUnderground > m_pUndergroundTrigger; // 0xc0	
	GameTime_t m_flLastDamageTime; // 0xc4	
};


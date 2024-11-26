#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1a8
// Has VTable
class CCitadel_Modifier_GarbageAura : public CCitadelModifierAura
{
private:
	[[maybe_unused]] uint8_t __pad00e0[0xa8]; // 0xe0
public:
	CUtlVector< CHandle< CBaseEntity > > m_hEnemyHeroInVacuum; // 0x188	
	int32_t m_nNumPlayersKilled; // 0x1a0	
	GameTime_t m_tLastDamageTime; // 0x1a4	
};


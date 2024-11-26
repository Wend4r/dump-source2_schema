#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x288
// Has VTable
class CCitadel_Modifier_VacuumAura : public CCitadelModifierAura
{
private:
	[[maybe_unused]] uint8_t __pad00e0[0x188]; // 0xe0
public:
	CUtlVector< CHandle< CBaseEntity > > m_hEnemyHeroInVacuum; // 0x268	
	int32_t m_nNumPlayersKilled; // 0x280	
	GameTime_t m_tLastDamageTime; // 0x284	
};


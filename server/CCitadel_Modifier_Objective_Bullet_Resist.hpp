#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc8
// Has VTable
class CCitadel_Modifier_Objective_Bullet_Resist : public CCitadelModifier
{
public:
	CHandle< CTriggerTrooperDetector > m_hTrigger; // 0xc0	
	int32_t m_iEnemyHeroCount; // 0xc4	
};


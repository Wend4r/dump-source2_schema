#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x28
// Has VTable
class CNavSmartGoal_PrimaryTest : public INavSmartGoal
{
public:
	CHandle< CBaseEntity > m_hTarget; // 0x10	
	GameTime_t m_flTimeEnd; // 0x14	
	Vector m_vLastGoal; // 0x18	
};


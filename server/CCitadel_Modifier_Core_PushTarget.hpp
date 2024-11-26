#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd0
// Has VTable
class CCitadel_Modifier_Core_PushTarget : public CCitadelModifier
{
public:
	float m_flImpulseAmount; // 0xc0	
	GameTime_t m_flTossTime; // 0xc4	
	bool m_bShouldToss; // 0xc8	
};


#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xa68
// Has VTable
class CCitadel_GrandFinaleStage : public CBaseAnimGraph
{
public:
	Vector m_vStartPos; // 0xa40	
	Vector m_vEndPos; // 0xa4c	
	GameTime_t m_flStartEmitTime; // 0xa58	
	GameTime_t m_flEndEmitTime; // 0xa5c	
	int32_t m_nTouchCount; // 0xa60	
};


#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xa60
// Has VTable
class CCitadel_GrandFinaleStage : public CBaseAnimGraph
{
public:
	Vector m_vStartPos; // 0xa38	
	Vector m_vEndPos; // 0xa44	
	GameTime_t m_flStartEmitTime; // 0xa50	
	GameTime_t m_flEndEmitTime; // 0xa54	
	int32_t m_nTouchCount; // 0xa58	
};


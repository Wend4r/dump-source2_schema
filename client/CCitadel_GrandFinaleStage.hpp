#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xb20
// Has VTable
class CCitadel_GrandFinaleStage : public CBaseAnimGraph
{
public:
	Vector m_vStartPos; // 0xaf8	
	Vector m_vEndPos; // 0xb04	
	GameTime_t m_flStartEmitTime; // 0xb10	
	GameTime_t m_flEndEmitTime; // 0xb14	
	int32_t m_nTouchCount; // 0xb18	
};


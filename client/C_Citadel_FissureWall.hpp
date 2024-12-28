#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xb20
// Has VTable
class C_Citadel_FissureWall : public CBaseAnimGraph
{
public:
	Vector m_vStartPos; // 0xaf8	
	Vector m_vEndPos; // 0xb04	
	GameTime_t m_flStartEmitTime; // 0xb10	
	GameTime_t m_flEndEmitTime; // 0xb14	
	bool m_bSolid; // 0xb18	
private:
	[[maybe_unused]] uint8_t __pad0b19[0x3]; // 0xb19
public:
	int32_t m_nTouchCount; // 0xb1c	
};


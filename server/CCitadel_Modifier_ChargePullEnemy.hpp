#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1b8
// Has VTable
class CCitadel_Modifier_ChargePullEnemy : public CCitadelModifier
{
private:
	[[maybe_unused]] uint8_t __pad00c0[0xe0]; // 0xc0
public:
	Vector m_vecOffsetDir; // 0x1a0	
	float m_flTackleRadius; // 0x1ac	
	float m_flPullTargetSpeed; // 0x1b0	
};


#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x168
// Has VTable
class CCitadel_Modifier_ChargeDragEnemy : public CCitadelModifier
{
private:
	[[maybe_unused]] uint8_t __pad00c8[0x70]; // 0xc8
public:
	QAngle m_qRelativeOffset; // 0x138	
	float m_flRelativeDist; // 0x144	
	float m_flMaxDist; // 0x148	
	Vector m_vecOffsetDir; // 0x14c	
	Vector m_vecStartPosition; // 0x158	
};

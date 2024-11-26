#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf0
// Has VTable
class CCitadel_Modifier_ChargeDragEnemy : public CCitadelModifier
{
public:
	QAngle m_qRelativeOffset; // 0xc0	
	float m_flRelativeDist; // 0xcc	
	float m_flMaxDist; // 0xd0	
	Vector m_vecOffsetDir; // 0xd4	
	Vector m_vecStartPosition; // 0xe0	
};


#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xe8
// Has VTable
class CCitadel_Modifier_Teleport : public CCitadelModifier
{
public:
	Vector m_vDest; // 0xc0	
	QAngle m_angDestAngles; // 0xcc	
	Vector m_vDestVelocity; // 0xd8	
};


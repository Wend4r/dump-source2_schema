#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xdc8
// Has VTable
class CPhysicsPropRespawnable : public CPhysicsProp
{
public:
	Vector m_vOriginalSpawnOrigin; // 0xd90	
	QAngle m_vOriginalSpawnAngles; // 0xd9c	
	Vector m_vOriginalMins; // 0xda8	
	Vector m_vOriginalMaxs; // 0xdb4	
	float m_flRespawnDuration; // 0xdc0	
	
	// Datamap fields:
	// void CPhysicsPropRespawnableMaterialize; // 0x0
};


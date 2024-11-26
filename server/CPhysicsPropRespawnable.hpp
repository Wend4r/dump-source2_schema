#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xdd0
// Has VTable
class CPhysicsPropRespawnable : public CPhysicsProp
{
public:
	Vector m_vOriginalSpawnOrigin; // 0xd98	
	QAngle m_vOriginalSpawnAngles; // 0xda4	
	Vector m_vOriginalMins; // 0xdb0	
	Vector m_vOriginalMaxs; // 0xdbc	
	float m_flRespawnDuration; // 0xdc8	
	
	// Datamap fields:
	// void CPhysicsPropRespawnableMaterialize; // 0x0
};


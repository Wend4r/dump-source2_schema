#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x8a0
// Has VTable
class CCitadelTrackedProjectile : public CCitadelProjectile
{
public:
	CHandle< CBaseEntity > m_hTarget; // 0x870	
	GameTime_t m_flTrackingStartTime; // 0x874	
	float m_flTrackingDampingCoefficient; // 0x878	
	float m_flTrackingSpeed; // 0x87c	
	float m_flTrackingDuration; // 0x880	
	GameTime_t m_flTrackingWindowStart; // 0x884	
	GameTime_t m_flTrackingWindowEnd; // 0x888	
	float m_flTrackingStopDuration; // 0x88c	
	Vector m_vLastValidPosition; // 0x890	
};


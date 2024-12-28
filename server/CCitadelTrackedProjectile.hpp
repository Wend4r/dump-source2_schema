#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x898
// Has VTable
class CCitadelTrackedProjectile : public CCitadelProjectile
{
public:
	CHandle< CBaseEntity > m_hTarget; // 0x868	
	GameTime_t m_flTrackingStartTime; // 0x86c	
	float m_flTrackingDampingCoefficient; // 0x870	
	float m_flTrackingSpeed; // 0x874	
	float m_flTrackingDuration; // 0x878	
	GameTime_t m_flTrackingWindowStart; // 0x87c	
	GameTime_t m_flTrackingWindowEnd; // 0x880	
	float m_flTrackingStopDuration; // 0x884	
	Vector m_vLastValidPosition; // 0x888	
};


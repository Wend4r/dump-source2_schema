#pragma once

#include <cstdint>

struct CountdownTimer;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x9d0
// Has VTable
class CTriggerFan : public CBaseTrigger
{
public:
	Vector m_vFanOrigin; // 0x980	
	Vector m_vFanEnd; // 0x98c	
	Vector m_vNoise; // 0x998	
	float m_flForce; // 0x9a4	
	float m_flRopeForceScale; // 0x9a8	
	float m_flPlayerForce; // 0x9ac	
	float m_flRampTime; // 0x9b0	
	bool m_bFalloff; // 0x9b4	
	bool m_bPushPlayer; // 0x9b5	
	bool m_bRampDown; // 0x9b6	
	bool m_bAddNoise; // 0x9b7	
	CountdownTimer m_RampTimer; // 0x9b8	
	
	// Datamap fields:
	// void CTriggerFanPushThink; // 0x0
};


#pragma once

#include <cstdint>

struct CountdownTimer;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x9c8
// Has VTable
class CTriggerFan : public CBaseTrigger
{
public:
	Vector m_vFanOrigin; // 0x978	
	Vector m_vFanEnd; // 0x984	
	Vector m_vNoise; // 0x990	
	float m_flForce; // 0x99c	
	float m_flRopeForceScale; // 0x9a0	
	float m_flPlayerForce; // 0x9a4	
	float m_flRampTime; // 0x9a8	
	bool m_bFalloff; // 0x9ac	
	bool m_bPushPlayer; // 0x9ad	
	bool m_bRampDown; // 0x9ae	
	bool m_bAddNoise; // 0x9af	
	CountdownTimer m_RampTimer; // 0x9b0	
	
	// Datamap fields:
	// void CTriggerFanPushThink; // 0x0
};


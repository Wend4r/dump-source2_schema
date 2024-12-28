#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1010
// Has VTable
class CPropDoorRotating : public CBasePropDoor
{
public:
	Vector m_vecAxis; // 0xf78	
	float m_flDistance; // 0xf84	
	PropDoorRotatingSpawnPos_t m_eSpawnPosition; // 0xf88	
	PropDoorRotatingOpenDirection_e m_eOpenDirection; // 0xf8c	
	PropDoorRotatingOpenDirection_e m_eCurrentOpenDirection; // 0xf90	
	float m_flAjarAngle; // 0xf94	
	QAngle m_angRotationAjarDeprecated; // 0xf98	
	QAngle m_angRotationClosed; // 0xfa4	
	QAngle m_angRotationOpenForward; // 0xfb0	
	QAngle m_angRotationOpenBack; // 0xfbc	
	QAngle m_angGoal; // 0xfc8	
	Vector m_vecForwardBoundsMin; // 0xfd4	
	Vector m_vecForwardBoundsMax; // 0xfe0	
	Vector m_vecBackBoundsMin; // 0xfec	
	Vector m_vecBackBoundsMax; // 0xff8	
	bool m_bAjarDoorShouldntAlwaysOpen; // 0x1004	
private:
	[[maybe_unused]] uint8_t __pad1005[0x3]; // 0x1005
public:
	CHandle< CEntityBlocker > m_hEntityBlocker; // 0x1008	
	
	// Datamap fields:
	// float InputSetRotationDistance; // 0x0
	// float InputSetSpeed; // 0x0
};


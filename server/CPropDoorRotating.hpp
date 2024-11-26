#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1018
// Has VTable
class CPropDoorRotating : public CBasePropDoor
{
public:
	Vector m_vecAxis; // 0xf80	
	float m_flDistance; // 0xf8c	
	PropDoorRotatingSpawnPos_t m_eSpawnPosition; // 0xf90	
	PropDoorRotatingOpenDirection_e m_eOpenDirection; // 0xf94	
	PropDoorRotatingOpenDirection_e m_eCurrentOpenDirection; // 0xf98	
	float m_flAjarAngle; // 0xf9c	
	QAngle m_angRotationAjarDeprecated; // 0xfa0	
	QAngle m_angRotationClosed; // 0xfac	
	QAngle m_angRotationOpenForward; // 0xfb8	
	QAngle m_angRotationOpenBack; // 0xfc4	
	QAngle m_angGoal; // 0xfd0	
	Vector m_vecForwardBoundsMin; // 0xfdc	
	Vector m_vecForwardBoundsMax; // 0xfe8	
	Vector m_vecBackBoundsMin; // 0xff4	
	Vector m_vecBackBoundsMax; // 0x1000	
	bool m_bAjarDoorShouldntAlwaysOpen; // 0x100c	
private:
	[[maybe_unused]] uint8_t __pad100d[0x3]; // 0x100d
public:
	CHandle< CEntityBlocker > m_hEntityBlocker; // 0x1010	
	
	// Datamap fields:
	// float InputSetRotationDistance; // 0x0
	// float InputSetSpeed; // 0x0
};


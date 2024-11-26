#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x530
// Has VTable
class CPointVelocitySensor : public CPointEntity
{
public:
	CHandle< CBaseEntity > m_hTargetEntity; // 0x4e8	
	Vector m_vecAxis; // 0x4ec	
	bool m_bEnabled; // 0x4f8	
private:
	[[maybe_unused]] uint8_t __pad04f9[0x3]; // 0x4f9
public:
	float m_fPrevVelocity; // 0x4fc	
	float m_flAvgInterval; // 0x500	
private:
	[[maybe_unused]] uint8_t __pad0504[0x4]; // 0x504
public:
	CEntityOutputTemplate< float32 > m_Velocity; // 0x508	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
};


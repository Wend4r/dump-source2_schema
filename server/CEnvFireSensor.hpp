#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x550
// Has VTable
class CEnvFireSensor : public CBaseEntity
{
public:
	bool m_bEnabled; // 0x4e8	
	bool m_bHeatAtLevel; // 0x4e9	
private:
	[[maybe_unused]] uint8_t __pad04ea[0x2]; // 0x4ea
public:
	float m_radius; // 0x4ec	
	float m_targetLevel; // 0x4f0	
	float m_targetTime; // 0x4f4	
	float m_levelTime; // 0x4f8	
private:
	[[maybe_unused]] uint8_t __pad04fc[0x4]; // 0x4fc
public:
	CEntityIOOutput m_OnHeatLevelStart; // 0x500	
	CEntityIOOutput m_OnHeatLevelEnd; // 0x528	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
};


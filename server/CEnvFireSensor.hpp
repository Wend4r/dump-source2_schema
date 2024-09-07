#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x540
// Has VTable
class CEnvFireSensor : public CBaseEntity
{
public:
	bool m_bEnabled; // 0x4d8	
	bool m_bHeatAtLevel; // 0x4d9	
private:
	[[maybe_unused]] uint8_t __pad04da[0x2]; // 0x4da
public:
	float m_radius; // 0x4dc	
	float m_targetLevel; // 0x4e0	
	float m_targetTime; // 0x4e4	
	float m_levelTime; // 0x4e8	
private:
	[[maybe_unused]] uint8_t __pad04ec[0x4]; // 0x4ec
public:
	CEntityIOOutput m_OnHeatLevelStart; // 0x4f0	
	CEntityIOOutput m_OnHeatLevelEnd; // 0x518	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
};


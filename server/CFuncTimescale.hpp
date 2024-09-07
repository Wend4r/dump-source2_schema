#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4f0
// Has VTable
class CFuncTimescale : public CBaseEntity
{
public:
	float m_flDesiredTimescale; // 0x4d8	
	float m_flAcceleration; // 0x4dc	
	float m_flMinBlendRate; // 0x4e0	
	float m_flBlendDeltaMultiplier; // 0x4e4	
	bool m_isStarted; // 0x4e8	
	
	// Datamap fields:
	// void InputStart; // 0x0
	// void InputStop; // 0x0
	// void InputReset; // 0x0
};


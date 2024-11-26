#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x500
// Has VTable
class CFuncTimescale : public CBaseEntity
{
public:
	float m_flDesiredTimescale; // 0x4e8	
	float m_flAcceleration; // 0x4ec	
	float m_flMinBlendRate; // 0x4f0	
	float m_flBlendDeltaMultiplier; // 0x4f4	
	bool m_isStarted; // 0x4f8	
	
	// Datamap fields:
	// void InputStart; // 0x0
	// void InputStop; // 0x0
	// void InputReset; // 0x0
};


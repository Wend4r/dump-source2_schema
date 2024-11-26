#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x520
// Has VTable
class CEnvSpark : public CPointEntity
{
public:
	float m_flDelay; // 0x4e8	
	int32_t m_nMagnitude; // 0x4ec	
	int32_t m_nTrailLength; // 0x4f0	
	int32_t m_nType; // 0x4f4	
	CEntityIOOutput m_OnSpark; // 0x4f8	
	
	// Datamap fields:
	// void CEnvSparkSparkThink; // 0x0
	// void InputStartSpark; // 0x0
	// void InputStopSpark; // 0x0
	// void InputToggleSpark; // 0x0
	// void InputSparkOnce; // 0x0
};


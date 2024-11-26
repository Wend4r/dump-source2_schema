#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x9a0
// Has VTable
class CNpcFootSweep : public CBaseTrigger
{
public:
	CUtlVector< FootSweepPusher_t > m_vecPushers; // 0x980	
	bool m_bUseCenterPusher; // 0x998	
	bool m_bUseForwardPusher; // 0x999	
};


#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x998
// Has VTable
class CNpcFootSweep : public CBaseTrigger
{
public:
	CUtlVector< FootSweepPusher_t > m_vecPushers; // 0x978	
	bool m_bUseCenterPusher; // 0x990	
	bool m_bUseForwardPusher; // 0x991	
};


#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x9c8
// Has VTable
class CDynamicNavConnectionsVolume : public CTriggerMultiple
{
public:
	CUtlSymbolLarge m_iszConnectionTarget; // 0x9a0	
	CUtlVector< DynamicVolumeDef_t > m_vecConnections; // 0x9a8	
	bool m_bConnectionsEnabled; // 0x9c0	
};


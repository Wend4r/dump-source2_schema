#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x7d0
// Has VTable
class CTriggerVolume : public CBaseModelEntity
{
public:
	CUtlSymbolLarge m_iFilterName; // 0x7c0	
	CHandle< CBaseFilter > m_hFilter; // 0x7c8	
};


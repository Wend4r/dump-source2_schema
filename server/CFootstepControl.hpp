#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x970
// Has VTable
// 
// MNetworkVarNames "string_t m_source"
// MNetworkVarNames "string_t m_destination"
class CFootstepControl : public CBaseTrigger
{
public:
	// MNetworkEnable
	CUtlSymbolLarge m_source; // 0x960	
	// MNetworkEnable
	CUtlSymbolLarge m_destination; // 0x968	
};


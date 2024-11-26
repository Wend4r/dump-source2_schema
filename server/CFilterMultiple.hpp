#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x5c8
// Has VTable
class CFilterMultiple : public CBaseFilter
{
public:
	filter_t m_nFilterType; // 0x540	
private:
	[[maybe_unused]] uint8_t __pad0544[0x4]; // 0x544
public:
	CUtlSymbolLarge m_iFilterName[10]; // 0x548	
	CHandle< CBaseEntity > m_hFilter[10]; // 0x598	
	int32_t m_nFilterCount; // 0x5c0	
};


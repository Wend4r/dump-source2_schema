#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x640
// Has VTable
class CFilterMultiple : public CBaseFilter
{
public:
	filter_t m_nFilterType; // 0x5b8	
private:
	[[maybe_unused]] uint8_t __pad05bc[0x4]; // 0x5bc
public:
	CUtlSymbolLarge m_iFilterName[10]; // 0x5c0	
	CHandle< C_BaseEntity > m_hFilter[10]; // 0x610	
	int32_t m_nFilterCount; // 0x638	
};


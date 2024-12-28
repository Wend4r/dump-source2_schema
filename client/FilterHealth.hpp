#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5c8
// Has VTable
class FilterHealth : public CBaseFilter
{
public:
	bool m_bAdrenalineActive; // 0x5b8	
private:
	[[maybe_unused]] uint8_t __pad05b9[0x3]; // 0x5b9
public:
	int32_t m_iHealthMin; // 0x5bc	
	int32_t m_iHealthMax; // 0x5c0	
};


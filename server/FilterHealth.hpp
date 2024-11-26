#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x550
// Has VTable
class FilterHealth : public CBaseFilter
{
public:
	bool m_bAdrenalineActive; // 0x540	
private:
	[[maybe_unused]] uint8_t __pad0541[0x3]; // 0x541
public:
	int32_t m_iHealthMin; // 0x544	
	int32_t m_iHealthMax; // 0x548	
};


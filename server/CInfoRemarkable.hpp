#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4e8
// Has VTable
class CInfoRemarkable : public CPointEntity
{
public:
	int32_t m_iTimesRemarkedUpon; // 0x4d8	
private:
	[[maybe_unused]] uint8_t __pad04dc[0x4]; // 0x4dc
public:
	CUtlSymbolLarge m_szRemarkContext; // 0x4e0	
};


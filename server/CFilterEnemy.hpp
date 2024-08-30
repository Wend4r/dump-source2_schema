#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x550
// Has VTable
class CFilterEnemy : public CBaseFilter
{
public:
	CUtlSymbolLarge m_iszEnemyName; // 0x530	
	float m_flRadius; // 0x538	
	float m_flOuterRadius; // 0x53c	
	int32_t m_nMaxSquadmatesPerEnemy; // 0x540	
private:
	[[maybe_unused]] uint8_t __pad0544[0x4]; // 0x544
public:
	CUtlSymbolLarge m_iszPlayerName; // 0x548	
};


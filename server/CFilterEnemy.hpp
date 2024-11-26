#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x560
// Has VTable
class CFilterEnemy : public CBaseFilter
{
public:
	CUtlSymbolLarge m_iszEnemyName; // 0x540	
	float m_flRadius; // 0x548	
	float m_flOuterRadius; // 0x54c	
	int32_t m_nMaxSquadmatesPerEnemy; // 0x550	
private:
	[[maybe_unused]] uint8_t __pad0554[0x4]; // 0x554
public:
	CUtlSymbolLarge m_iszPlayerName; // 0x558	
};


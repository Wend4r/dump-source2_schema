#pragma once

#include <cstdint>

struct GameTime_t;
struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x520
// Has VTable
class CNPCSpawnDestination : public CPointEntity
{
public:
	float m_ReuseDelay; // 0x4e0	
private:
	[[maybe_unused]] uint8_t __pad04e4[0x4]; // 0x4e4
public:
	CUtlSymbolLarge m_RenameNPC; // 0x4e8	
	GameTime_t m_TimeNextAvailable; // 0x4f0	
private:
	[[maybe_unused]] uint8_t __pad04f4[0x4]; // 0x4f4
public:
	CEntityIOOutput m_OnSpawnNPC; // 0x4f8	
};


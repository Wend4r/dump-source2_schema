#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x5a0
// Has VTable
class CInfoTrooperBossSpawn : public CServerOnlyPointEntity
{
private:
	[[maybe_unused]] uint8_t __pad04e8[0x10]; // 0x4e8
public:
	CUtlSymbolLarge m_strBossEntityName; // 0x4f8	
	int32_t m_iLane; // 0x500	
	int32_t m_iCoverGroupID; // 0x504	
private:
	[[maybe_unused]] uint8_t __pad0508[0x8]; // 0x508
public:
	bool m_bReinforcementsOnly; // 0x510	
private:
	[[maybe_unused]] uint8_t __pad0511[0x17]; // 0x511
public:
	CEntityIOOutput m_eventOnTrooperKilled; // 0x528	
};


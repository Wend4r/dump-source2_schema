#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x590
// Has VTable
class CInfoTrooperBossSpawn : public CServerOnlyPointEntity
{
private:
	[[maybe_unused]] uint8_t __pad04d8[0x10]; // 0x4d8
public:
	CUtlSymbolLarge m_strBossEntityName; // 0x4e8	
	int32_t m_iLane; // 0x4f0	
	int32_t m_iCoverGroupID; // 0x4f4	
private:
	[[maybe_unused]] uint8_t __pad04f8[0x8]; // 0x4f8
public:
	bool m_bReinforcementsOnly; // 0x500	
private:
	[[maybe_unused]] uint8_t __pad0501[0x17]; // 0x501
public:
	CEntityIOOutput m_eventOnTrooperKilled; // 0x518	
};


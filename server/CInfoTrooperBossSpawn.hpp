#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x598
// Has VTable
class CInfoTrooperBossSpawn : public CServerOnlyPointEntity
{
private:
	[[maybe_unused]] uint8_t __pad04e0[0x10]; // 0x4e0
public:
	CUtlSymbolLarge m_strBossEntityName; // 0x4f0	
	int32_t m_iLane; // 0x4f8	
	int32_t m_iCoverGroupID; // 0x4fc	
private:
	[[maybe_unused]] uint8_t __pad0500[0x8]; // 0x500
public:
	bool m_bReinforcementsOnly; // 0x508	
private:
	[[maybe_unused]] uint8_t __pad0509[0x17]; // 0x509
public:
	CEntityIOOutput m_eventOnTrooperKilled; // 0x520	
};


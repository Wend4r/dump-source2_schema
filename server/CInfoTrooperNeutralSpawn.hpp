#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x508
// Has VTable
class CInfoTrooperNeutralSpawn : public CServerOnlyPointEntity
{
public:
	int32_t m_iCoverGroupID; // 0x4e0	
private:
	[[maybe_unused]] uint8_t __pad04e4[0x4]; // 0x4e4
public:
	CUtlSymbolLarge m_iszSquadName; // 0x4e8	
private:
	[[maybe_unused]] uint8_t __pad04f0[0xc]; // 0x4f0
public:
	ENeutralTrooperType m_eTrooperType; // 0x4fc	
};


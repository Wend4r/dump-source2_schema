#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x510
// Has VTable
class CInfoTrooperNeutralSpawn : public CServerOnlyPointEntity
{
public:
	int32_t m_iCoverGroupID; // 0x4e8	
private:
	[[maybe_unused]] uint8_t __pad04ec[0x4]; // 0x4ec
public:
	CUtlSymbolLarge m_iszSquadName; // 0x4f0	
private:
	[[maybe_unused]] uint8_t __pad04f8[0xc]; // 0x4f8
public:
	ENeutralTrooperType m_eTrooperType; // 0x504	
};


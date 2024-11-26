#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x590
// Has VTable
class CLogicPlayerProxy : public CLogicalEntity
{
public:
	CHandle< CBaseEntity > m_hPlayer; // 0x4e8	
private:
	[[maybe_unused]] uint8_t __pad04ec[0x4]; // 0x4ec
public:
	CEntityIOOutput m_PlayerHasAmmo; // 0x4f0	
	CEntityIOOutput m_PlayerHasNoAmmo; // 0x518	
	CEntityIOOutput m_PlayerDied; // 0x540	
	CEntityOutputTemplate< int32 > m_RequestedPlayerHealth; // 0x568	
};


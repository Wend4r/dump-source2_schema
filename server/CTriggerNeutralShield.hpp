#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x9a8
// Has VTable
class CTriggerNeutralShield : public CBaseTrigger
{
public:
	CUtlVector< CHandle< CBaseEntity > > m_vecPlayers; // 0x978	
	CUtlVector< CHandle< CBaseEntity > > m_vecNeutrals; // 0x990	
};


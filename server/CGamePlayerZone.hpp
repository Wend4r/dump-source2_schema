#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x860
// Has VTable
class CGamePlayerZone : public CRuleBrushEntity
{
public:
	CEntityIOOutput m_OnPlayerInZone; // 0x7c0	
	CEntityIOOutput m_OnPlayerOutZone; // 0x7e8	
	CEntityOutputTemplate< int32 > m_PlayersInCount; // 0x810	
	CEntityOutputTemplate< int32 > m_PlayersOutCount; // 0x838	
	
	// Datamap fields:
	// void InputCountPlayersInZone; // 0x0
};


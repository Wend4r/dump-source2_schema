#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x868
// Has VTable
class CGamePlayerZone : public CRuleBrushEntity
{
public:
	CEntityIOOutput m_OnPlayerInZone; // 0x7c8	
	CEntityIOOutput m_OnPlayerOutZone; // 0x7f0	
	CEntityOutputTemplate< int32 > m_PlayersInCount; // 0x818	
	CEntityOutputTemplate< int32 > m_PlayersOutCount; // 0x840	
	
	// Datamap fields:
	// void InputCountPlayersInZone; // 0x0
};


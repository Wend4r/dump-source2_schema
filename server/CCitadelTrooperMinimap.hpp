#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x558
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_timeLastUpdate"
// MNetworkVarNames "STrooperFOWEntity m_vecFOWEntities"
class CCitadelTrooperMinimap : public CBaseEntity
{
public:
	// MNetworkEnable
	// MNetworkPriority "32"
	GameTime_t m_timeLastUpdate; // 0x4e8	
private:
	[[maybe_unused]] uint8_t __pad04ec[0x4]; // 0x4ec
public:
	// MNetworkEnable
	// MNetworkPriority "32"
	CUtlVectorEmbeddedNetworkVar< STrooperFOWEntity > m_vecFOWEntities; // 0x4f0	
};


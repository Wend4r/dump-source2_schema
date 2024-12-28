#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5d0
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_timeLastUpdate"
// MNetworkVarNames "STrooperFOWEntity m_vecFOWEntities"
class CCitadelTrooperMinimap : public C_BaseEntity
{
public:
	// MNetworkEnable
	// MNetworkPriority "32"
	GameTime_t m_timeLastUpdate; // 0x560	
private:
	[[maybe_unused]] uint8_t __pad0564[0x4]; // 0x564
public:
	// MNetworkEnable
	// MNetworkPriority "32"
	C_UtlVectorEmbeddedNetworkVar< STrooperFOWEntity > m_vecFOWEntities; // 0x568	
};


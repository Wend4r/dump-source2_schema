#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x7c0
// Has VTable
// 
// MNetworkIncludeByName "m_iTeamNum"
// MNetworkVarNames "int m_iLane"
class CAssignedLaneParticle : public CBaseModelEntity
{
public:
	// MNetworkEnable
	int32_t m_iLane; // 0x7b8	
};


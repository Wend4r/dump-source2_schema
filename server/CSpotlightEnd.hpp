#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x7e0
// Has VTable
// 
// MNetworkVarNames "float32 m_flLightScale"
// MNetworkVarNames "float32 m_Radius"
class CSpotlightEnd : public CBaseModelEntity
{
public:
	// MNetworkEnable
	float m_flLightScale; // 0x7c0	
	// MNetworkEnable
	float m_Radius; // 0x7c4	
	Vector m_vSpotlightDir; // 0x7c8	
	Vector m_vSpotlightOrg; // 0x7d4	
};


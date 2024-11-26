#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xbd8
// Has VTable
// 
// MNetworkVarNames "float m_flUpFactor"
// MNetworkVarNames "float m_flBounceVelocity"
class CCitadel_Bounce_Pad : public CCitadelAnimatingModelEntity
{
public:
	CHandle< CCitadelBaseAbility > m_hAbility; // 0xbc0	
	// MNetworkEnable
	float m_flUpFactor; // 0xbc4	
	// MNetworkEnable
	float m_flBounceVelocity; // 0xbc8	
	float m_flBarrelBounceVelocity; // 0xbcc	
	float m_flBarrelUpFactor; // 0xbd0	
	bool m_bSpeedOnLand; // 0xbd4	
	bool m_bHasBouncedPlayerBefore; // 0xbd5	
};


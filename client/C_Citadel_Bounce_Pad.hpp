#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xb18
// Has VTable
// 
// MNetworkVarNames "float m_flUpFactor"
// MNetworkVarNames "float m_flBounceVelocity"
class C_Citadel_Bounce_Pad : public CCitadelAnimatingModelEntity
{
public:
	// MNetworkEnable
	float m_flUpFactor; // 0xb00	
	// MNetworkEnable
	float m_flBounceVelocity; // 0xb04	
	float m_flBarrelBounceVelocity; // 0xb08	
	float m_flBarrelUpFactor; // 0xb0c	
	bool m_bSpeedOnLand; // 0xb10	
	bool m_bHasBouncedPlayerBefore; // 0xb11	
};


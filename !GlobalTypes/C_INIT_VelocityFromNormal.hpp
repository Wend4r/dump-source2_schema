#pragma once

#include <cstdint>

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1d0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_VelocityFromNormal : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "random speed min"
	float m_fSpeedMin; // 0x1c0	
	// MPropertyFriendlyName "random speed max"
	float m_fSpeedMax; // 0x1c4	
	// MPropertyFriendlyName "ignore delta time"
	bool m_bIgnoreDt; // 0x1c8	
};

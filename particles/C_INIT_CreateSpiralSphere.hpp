#pragma once

#include <cstdint>

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1e0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_CreateSpiralSphere : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1c0	
	// MPropertyFriendlyName "override CP (X/Y/Z *= radius/density/speed)"
	int32_t m_nOverrideCP; // 0x1c4	
	// MPropertyFriendlyName "density"
	int32_t m_nDensity; // 0x1c8	
	// MPropertyFriendlyName "initial radius"
	float m_flInitialRadius; // 0x1cc	
	// MPropertyFriendlyName "min initial speed"
	float m_flInitialSpeedMin; // 0x1d0	
	// MPropertyFriendlyName "max initial speed"
	float m_flInitialSpeedMax; // 0x1d4	
	// MPropertyFriendlyName "use particle count as density scale"
	bool m_bUseParticleCount; // 0x1d8	
};

#pragma once

#include <cstdint>

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x218
// Has VTable
// 
// MObsoleteParticleFunction
// MGetKV3ClassDefaults
class C_OP_RenderScreenVelocityRotate : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "rotate rate(dps)"
	float m_flRotateRateDegrees; // 0x210	
	// MPropertyFriendlyName "forward angle"
	float m_flForwardDegrees; // 0x214	
};


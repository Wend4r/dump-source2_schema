#pragma once

#include <cstdint>

struct CPerParticleFloatInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x480
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_CollideWithParentParticles : public CParticleFunctionConstraint
{
public:
	// MPropertyFriendlyName "parent particle radius scale"
	CPerParticleFloatInput m_flParentRadiusScale; // 0x1c0	
	// MPropertyFriendlyName "particle radius scale"
	CPerParticleFloatInput m_flRadiusScale; // 0x320	
};


#pragma once

#include <cstdint>

struct ParticleAttributeIndex_t;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1d0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_LerpEndCapVector : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1b8	
	// MPropertyFriendlyName "value to lerp to"
	// MVectorIsSometimesCoordinate "m_nFieldOutput"
	Vector m_vecOutput; // 0x1bc	
	// MPropertyFriendlyName "lerp time"
	float m_flLerpTime; // 0x1c8	
};

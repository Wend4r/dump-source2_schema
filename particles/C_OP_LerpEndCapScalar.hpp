#pragma once

#include <cstdint>

struct ParticleAttributeIndex_t;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1c8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_LerpEndCapScalar : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1b8	
	// MPropertyFriendlyName "value to lerp to"
	float m_flOutput; // 0x1bc	
	// MPropertyFriendlyName "lerp time"
	float m_flLerpTime; // 0x1c0	
};

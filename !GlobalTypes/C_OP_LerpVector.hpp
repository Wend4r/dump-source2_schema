#pragma once

#include <cstdint>

struct ParticleAttributeIndex_t;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1d8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_LerpVector : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1b8	
	// MPropertyFriendlyName "value to lerp to"
	// MVectorIsSometimesCoordinate "m_nFieldOutput"
	Vector m_vecOutput; // 0x1bc	
	// MPropertyFriendlyName "start time"
	float m_flStartTime; // 0x1c8	
	// MPropertyFriendlyName "end time"
	float m_flEndTime; // 0x1cc	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x1d0	
};

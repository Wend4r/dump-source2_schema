#pragma once

#include <cstdint>

struct ParticleAttributeIndex_t;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1d8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RemapSpeed : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1b8	
	// MPropertyFriendlyName "input minimum"
	float m_flInputMin; // 0x1bc	
	// MPropertyFriendlyName "input maximum"
	float m_flInputMax; // 0x1c0	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x1c4	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x1c8	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x1cc	
	// MPropertyFriendlyName "ignore delta time"
	bool m_bIgnoreDelta; // 0x1d0	
};

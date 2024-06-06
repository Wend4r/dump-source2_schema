#pragma once

#include <cstdint>

struct CParticleCollectionFloatInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x478
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_QuantizeCPComponent : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "input"
	CParticleCollectionFloatInput m_flInputValue; // 0x1c0	
	// MPropertyFriendlyName "output control point"
	int32_t m_nCPOutput; // 0x318	
	// MPropertyFriendlyName "output component"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nOutVectorField; // 0x31c	
	// MPropertyFriendlyName "interval to snap to"
	CParticleCollectionFloatInput m_flQuantizeValue; // 0x320	
};

#pragma once

#include <cstdint>

struct CPerParticleVecInput;
struct CParticleRemapFloatInput;
struct ParticleAttributeIndex_t;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1028
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_SetFloatAttributeToVectorExpression : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "expression"
	VectorFloatExpressionType_t m_nExpression; // 0x1c8	
private:
	[[maybe_unused]] uint8_t __pad01cc[0x4]; // 0x1cc
public:
	// MPropertyFriendlyName "input 1"
	CPerParticleVecInput m_vInput1; // 0x1d0	
	// MPropertyFriendlyName "input 2"
	CPerParticleVecInput m_vInput2; // 0x848	
	// MPropertyFriendlyName "output"
	CParticleRemapFloatInput m_flOutputRemap; // 0xec0	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nOutputField; // 0x1020	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x1024	
};


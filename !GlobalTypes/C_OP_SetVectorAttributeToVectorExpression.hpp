#pragma once

#include <cstdint>

struct CPerParticleVecInput;
struct CPerParticleFloatInput;
struct ParticleAttributeIndex_t;
// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x1090
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_SetVectorAttributeToVectorExpression : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "expression"
	VectorExpressionType_t m_nExpression; // 0x1c0	
private:
	[[maybe_unused]] uint8_t __pad01c4[0x4]; // 0x1c4
public:
	// MPropertyFriendlyName "input 1"
	CPerParticleVecInput m_vInput1; // 0x1c8	
	// MPropertyFriendlyName "input 2"
	CPerParticleVecInput m_vInput2; // 0x840	
	// MPropertyFriendlyName "lerp value"
	// MPropertySuppressExpr "m_nExpression != VECTOR_EXPRESSION_LERP"
	CPerParticleFloatInput m_flLerp; // 0xeb8	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nOutputField; // 0x1018	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x101c	
	// MPropertyFriendlyName "normalize result"
	bool m_bNormalizedOutput; // 0x1020	
};


#pragma once

#include <cstdint>

struct CParticleCollectionFloatInput;
struct CParticleRemapFloatInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x5d8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_SetControlPointFieldToScalarExpression : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "expression"
	ScalarExpressionType_t m_nExpression; // 0x1c0	
private:
	[[maybe_unused]] uint8_t __pad01c4[0x4]; // 0x1c4
public:
	// MPropertyFriendlyName "input 1"
	CParticleCollectionFloatInput m_flInput1; // 0x1c8	
	// MPropertyFriendlyName "input 2"
	CParticleCollectionFloatInput m_flInput2; // 0x320	
	// MPropertyFriendlyName "output"
	CParticleRemapFloatInput m_flOutputRemap; // 0x478	
	// MPropertyFriendlyName "output control point"
	int32_t m_nOutputCP; // 0x5d0	
	// MPropertyFriendlyName "output component"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nOutVectorField; // 0x5d4	
};

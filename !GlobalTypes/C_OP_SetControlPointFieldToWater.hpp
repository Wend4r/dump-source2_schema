#pragma once

#include <cstdint>

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1d8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_SetControlPointFieldToWater : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "source CP"
	int32_t m_nSourceCP; // 0x1c8	
	// MPropertyFriendlyName "dest CP"
	int32_t m_nDestCP; // 0x1cc	
	// MPropertyFriendlyName "dest control point component"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nCPField; // 0x1d0	
};


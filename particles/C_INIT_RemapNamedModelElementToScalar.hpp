#pragma once

#include <cstdint>

struct ParticleAttributeIndex_t;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x208
// Has VTable
// Is Abstract
// 
// MGetKV3ClassDefaults
class C_INIT_RemapNamedModelElementToScalar : public CParticleFunctionInitializer
{
public:
	CStrongHandle< InfoForResourceTypeCModel > m_hModel; // 0x1c0	
	// MPropertyFriendlyName "names"
	CUtlVector< CUtlString > m_names; // 0x1c8	
	// MPropertyFriendlyName "remap values for names"
	CUtlVector< float32 > m_values; // 0x1e0	
	// MPropertyFriendlyName "input field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldInput; // 0x1f8	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1fc	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x200	
	// MPropertyFriendlyName "model from renderer"
	bool m_bModelFromRenderer; // 0x204	
};

#pragma once

#include <cstdint>

struct ParticleAttributeIndex_t;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x218
// Has VTable
// Is Abstract
// 
// MGetKV3ClassDefaults
class C_OP_RemapNamedModelElementEndCap : public CParticleFunctionOperator
{
public:
	CStrongHandle< InfoForResourceTypeCModel > m_hModel; // 0x1b8	
	// MPropertyFriendlyName "input names"
	CUtlVector< CUtlString > m_inNames; // 0x1c0	
	// MPropertyFriendlyName "output names"
	CUtlVector< CUtlString > m_outNames; // 0x1d8	
	// MPropertyFriendlyName "fallback names when the input doesn't match"
	CUtlVector< CUtlString > m_fallbackNames; // 0x1f0	
	// MPropertyFriendlyName "model from renderer"
	bool m_bModelFromRenderer; // 0x208	
private:
	[[maybe_unused]] uint8_t __pad0209[0x3]; // 0x209
public:
	// MPropertyFriendlyName "input field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldInput; // 0x20c	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x210	
};

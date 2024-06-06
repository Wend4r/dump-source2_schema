#pragma once

#include <cstdint>

struct CParticleCollectionFloatInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x338
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_SetControlPointToWaterSurface : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "source CP"
	int32_t m_nSourceCP; // 0x1c0	
	// MPropertyFriendlyName "CP to set to surface"
	int32_t m_nDestCP; // 0x1c4	
	// MPropertyFriendlyName "CP to set to surface current flow velocity"
	// MPropertySuppressExpr "mod != hlx"
	int32_t m_nFlowCP; // 0x1c8	
	// MPropertyFriendlyName "CP to set component of if water"
	int32_t m_nActiveCP; // 0x1cc	
	// MPropertyFriendlyName "CP component"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nActiveCPField; // 0x1d0	
private:
	[[maybe_unused]] uint8_t __pad01d4[0x4]; // 0x1d4
public:
	// MPropertyFriendlyName "retest rate"
	CParticleCollectionFloatInput m_flRetestRate; // 0x1d8	
	// MPropertyFriendlyName "adaptive retest on moving surface"
	bool m_bAdaptiveThreshold; // 0x330	
};

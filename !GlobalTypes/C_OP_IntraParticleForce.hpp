#pragma once

#include <cstdint>

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1f0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_IntraParticleForce : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "min attraction distance"
	float m_flAttractionMinDistance; // 0x1d0	
	// MPropertyFriendlyName "max attraction distance"
	float m_flAttractionMaxDistance; // 0x1d4	
	// MPropertyFriendlyName "max attraction force"
	float m_flAttractionMaxStrength; // 0x1d8	
	// MPropertyFriendlyName "min repulsion distance"
	float m_flRepulsionMinDistance; // 0x1dc	
	// MPropertyFriendlyName "max repulsion distance"
	float m_flRepulsionMaxDistance; // 0x1e0	
	// MPropertyFriendlyName "max repulsion force"
	float m_flRepulsionMaxStrength; // 0x1e4	
	// MPropertyFriendlyName "use aabbtree"
	bool m_bUseAABB; // 0x1e8	
	// MPropertyFriendlyName "thread pairwise collision"
	bool m_bThreadIt; // 0x1e9	
};


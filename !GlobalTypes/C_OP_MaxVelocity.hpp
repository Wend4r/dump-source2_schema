#pragma once

#include <cstdint>

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1d0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_MaxVelocity : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "maximum velocity"
	float m_flMaxVelocity; // 0x1c0	
	// MPropertyFriendlyName "minimum velocity"
	float m_flMinVelocity; // 0x1c4	
	// MPropertyFriendlyName "override max velocity from this CP"
	int32_t m_nOverrideCP; // 0x1c8	
	// MPropertyFriendlyName "override CP field"
	int32_t m_nOverrideCPField; // 0x1cc	
};


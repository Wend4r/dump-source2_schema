#pragma once

#include <cstdint>

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1d0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_RandomTrailLength : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "length min"
	float m_flMinLength; // 0x1c0	
	// MPropertyFriendlyName "length max"
	float m_flMaxLength; // 0x1c4	
	// MPropertyFriendlyName "length random exponent"
	float m_flLengthRandExponent; // 0x1c8	
};

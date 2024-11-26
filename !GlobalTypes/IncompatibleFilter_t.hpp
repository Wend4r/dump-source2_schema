#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x14
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct IncompatibleFilter_t
{
public:
	CBitVecEnum< EAbilityBehavior_t > m_AbilityBehaviorsBits; // 0x0	
	EAbilityActivation_t m_eAbilityActivation; // 0xc	
	EAbilityType_t m_eIncompatibleAbilityType; // 0x10	
};


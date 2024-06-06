#pragma once

#include <cstdint>

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1c8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_DampenToCP : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1b8	
	// MPropertyFriendlyName "falloff range"
	float m_flRange; // 0x1bc	
	// MPropertyFriendlyName "dampen scale"
	float m_flScale; // 0x1c0	
};


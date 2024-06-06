#pragma once

#include <cstdint>

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1d8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_CreateFromParentParticles : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "inherited velocity scale"
	float m_flVelocityScale; // 0x1c0	
	// MPropertyFriendlyName "particle increment amount"
	float m_flIncrement; // 0x1c4	
	// MPropertyFriendlyName "random parent particle distribution"
	bool m_bRandomDistribution; // 0x1c8	
private:
	[[maybe_unused]] uint8_t __pad01c9[0x3]; // 0x1c9
public:
	// MPropertyFriendlyName "random seed"
	int32_t m_nRandomSeed; // 0x1cc	
	// MPropertyFriendlyName "sub frame interpolation"
	bool m_bSubFrame; // 0x1d0	
};

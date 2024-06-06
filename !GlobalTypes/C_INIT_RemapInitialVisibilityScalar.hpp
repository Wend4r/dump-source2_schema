#pragma once

#include <cstdint>

struct ParticleAttributeIndex_t;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1d8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_RemapInitialVisibilityScalar : public CParticleFunctionInitializer
{
private:
	[[maybe_unused]] uint8_t __pad01c0[0x4]; // 0x1c0
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c4	
	// MPropertyFriendlyName "visibility minimum"
	float m_flInputMin; // 0x1c8	
	// MPropertyFriendlyName "visibility maximum"
	float m_flInputMax; // 0x1cc	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x1d0	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x1d4	
};

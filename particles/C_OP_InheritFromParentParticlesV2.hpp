#pragma once

#include <cstdint>

struct CPerParticleFloatInput;
struct ParticleAttributeIndex_t;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x5f0
// Has VTable
// 
// MParticleMinVersion
// MGetKV3ClassDefaults
class C_OP_InheritFromParentParticlesV2 : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "scale"
	CPerParticleFloatInput m_flScale; // 0x1c0	
	// MPropertyFriendlyName "inherited field"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x320	
private:
	[[maybe_unused]] uint8_t __pad0324[0x4]; // 0x324
public:
	// MPropertyFriendlyName "particle increment amount"
	CPerParticleFloatInput m_nIncrement; // 0x328	
	// MPropertyFriendlyName "random parent particle distribution"
	bool m_bRandomDistribution; // 0x488	
private:
	[[maybe_unused]] uint8_t __pad0489[0x3]; // 0x489
public:
	// MPropertyFriendlyName "behavior if parent particle dies"
	MissingParentInheritBehavior_t m_nMissingParentBehavior; // 0x48c	
	// MPropertyFriendlyName "Interpolation"
	CPerParticleFloatInput m_flInterpolation; // 0x490	
};


#pragma once

#include <cstdint>

struct ParticleAttributeIndex_t;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1f0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RemapDensityToVector : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "Radius scale for particle influence"
	float m_flRadiusScale; // 0x1c0	
	// MPropertyFriendlyName "Output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c4	
	// MPropertyFriendlyName "Density value to map to min value"
	float m_flDensityMin; // 0x1c8	
	// MPropertyFriendlyName "Density value to map to max value"
	float m_flDensityMax; // 0x1cc	
	// MPropertyFriendlyName "Output minimum"
	Vector m_vecOutputMin; // 0x1d0	
	// MPropertyFriendlyName "Output maximum"
	Vector m_vecOutputMax; // 0x1dc	
	// MPropertyFriendlyName "Use parent density instead of ours"
	bool m_bUseParentDensity; // 0x1e8	
private:
	[[maybe_unused]] uint8_t __pad01e9[0x3]; // 0x1e9
public:
	// MPropertyFriendlyName "Resolution to use for creating a voxel grid"
	int32_t m_nVoxelGridResolution; // 0x1ec	
};


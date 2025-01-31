#pragma once

#include <cstdint>

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1e0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_SetControlPointsToParticle : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "group ID to affect"
	int32_t m_nChildGroupID; // 0x1c0	
	// MPropertyFriendlyName "first control point to set"
	int32_t m_nFirstControlPoint; // 0x1c4	
	// MPropertyFriendlyName "# of control points to set"
	int32_t m_nNumControlPoints; // 0x1c8	
	// MPropertyFriendlyName "first particle to copy"
	int32_t m_nFirstSourcePoint; // 0x1cc	
	// MPropertyFriendlyName "set orientation"
	bool m_bSetOrientation; // 0x1d0	
private:
	[[maybe_unused]] uint8_t __pad01d1[0x3]; // 0x1d1
public:
	// MPropertyFriendlyName "orientation style"
	ParticleOrientationSetMode_t m_nOrientationMode; // 0x1d4	
	// MPropertyFriendlyName "set parent"
	ParticleParentSetMode_t m_nSetParent; // 0x1d8	
};


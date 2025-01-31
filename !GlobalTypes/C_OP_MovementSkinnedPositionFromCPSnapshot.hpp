#pragma once

#include <cstdint>

struct CPerParticleFloatInput;
struct CParticleCollectionFloatInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x8b8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_MovementSkinnedPositionFromCPSnapshot : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "snapshot control point number"
	int32_t m_nSnapshotControlPointNumber; // 0x1c0	
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1c4	
	// MPropertyFriendlyName "random order"
	bool m_bRandom; // 0x1c8	
private:
	[[maybe_unused]] uint8_t __pad01c9[0x3]; // 0x1c9
public:
	// MPropertyFriendlyName "random seed"
	int32_t m_nRandomSeed; // 0x1cc	
	// MPropertyFriendlyName "set normal"
	bool m_bSetNormal; // 0x1d0	
	// MPropertyFriendlyName "set radius"
	bool m_bSetRadius; // 0x1d1	
private:
	[[maybe_unused]] uint8_t __pad01d2[0x2]; // 0x1d2
public:
	// MPropertyFriendlyName "Snapshot Read Type"
	SnapshotIndexType_t m_nIndexType; // 0x1d4	
	// MPropertyFriendlyName "Snapshot Index"
	// MPropertySuppressExpr "m_nIndexType != SNAPSHOT_INDEX_DIRECT"
	CPerParticleFloatInput m_flReadIndex; // 0x1d8	
	// MPropertyFriendlyName "particle increment amount"
	// MPropertySuppressExpr "m_nIndexType != SNAPSHOT_INDEX_INCREMENT"
	CParticleCollectionFloatInput m_flIncrement; // 0x338	
	// MPropertyFriendlyName "Full Loop Increment Amount"
	// MPropertySuppressExpr "m_nIndexType != SNAPSHOT_INDEX_INCREMENT"
	CParticleCollectionFloatInput m_nFullLoopIncrement; // 0x498	
	// MPropertyFriendlyName "Snapshot start point"
	// MPropertySuppressExpr "m_nIndexType != SNAPSHOT_INDEX_INCREMENT"
	CParticleCollectionFloatInput m_nSnapShotStartPoint; // 0x5f8	
	// MPropertyFriendlyName "Interpolation"
	CPerParticleFloatInput m_flInterpolation; // 0x758	
};


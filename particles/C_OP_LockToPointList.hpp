#pragma once

#include <cstdint>

struct ParticleAttributeIndex_t;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1e8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_LockToPointList : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0	
private:
	[[maybe_unused]] uint8_t __pad01c4[0x4]; // 0x1c4
public:
	// MPropertyFriendlyName "point list"
	CUtlVector< PointDefinition_t > m_pointList; // 0x1c8	
	// MPropertyFriendlyName "space points along path"
	bool m_bPlaceAlongPath; // 0x1e0	
	// MPropertyFriendlyName "Treat path as a loop"
	bool m_bClosedLoop; // 0x1e1	
private:
	[[maybe_unused]] uint8_t __pad01e2[0x2]; // 0x1e2
public:
	// MPropertyFriendlyName "Numer of points along path"
	int32_t m_nNumPointsAlongPath; // 0x1e4	
};


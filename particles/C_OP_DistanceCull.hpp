#pragma once

#include <cstdint>

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1d8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_DistanceCull : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point"
	int32_t m_nControlPoint; // 0x1c0	
	// MPropertyFriendlyName "control point offset"
	// MVectorIsCoordinate
	Vector m_vecPointOffset; // 0x1c4	
	// MPropertyFriendlyName "cull distance"
	float m_flDistance; // 0x1d0	
	// MPropertyFriendlyName "cull inside instead of outside"
	bool m_bCullInside; // 0x1d4	
};


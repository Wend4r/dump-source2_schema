#pragma once

#include <cstdint>

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1d8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_SetControlPointToHMD : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nCP1; // 0x1c0	
	// MPropertyFriendlyName "control point offset"
	// MVectorIsCoordinate
	Vector m_vecCP1Pos; // 0x1c4	
	// MPropertyFriendlyName "use hmd orientation"
	bool m_bOrientToHMD; // 0x1d0	
};

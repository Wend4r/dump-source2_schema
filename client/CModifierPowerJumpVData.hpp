#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6f8
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierPowerJumpVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FloatParticle; // 0x608	
	// MPropertyStartGroup "Gameplay"
	float m_flAirDrag; // 0x6e8	
	float m_flVerticalCameraOffset; // 0x6ec	
	float m_flVerticalCameraOffsetLerpTime; // 0x6f0	
	float m_flVerticalCameraOffsetBias; // 0x6f4	
};


#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x720
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierPowerJumpVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FloatParticle; // 0x630	
	// MPropertyStartGroup "Gameplay"
	float m_flAirDrag; // 0x710	
	float m_flVerticalCameraOffset; // 0x714	
	float m_flVerticalCameraOffsetLerpTime; // 0x718	
	float m_flVerticalCameraOffsetBias; // 0x71c	
};


#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x780
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierRestorativeGooVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_RestorativeGooEndParticle; // 0x630	
	float m_flDistanceCameraOffsetLerpTime; // 0x710	
	float m_flDistanceCameraOffsetBias; // 0x714	
	float m_flDistanceCameraOffset; // 0x718	
private:
	[[maybe_unused]] uint8_t __pad071c[0x4]; // 0x71c
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BreakoutProgressBarModifier; // 0x720	
	CEmbeddedSubclass< CCitadelModifier > m_PostCubeBuffModifier; // 0x730	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_NonTargetLoopingSound; // 0x740	
	CSoundEventName m_TargetLoopingSound; // 0x750	
	CSoundEventName m_LightMeleeImpact; // 0x760	
	CSoundEventName m_HeavyMeleeImpact; // 0x770	
};


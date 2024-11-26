#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x7e0
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierPsychicLiftVData : public CCitadel_Modifier_StunnedVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LiftParticle; // 0x6e8	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strStartSound; // 0x7c8	
	// MPropertyStartGroup "Gameplay"
	float m_flOscillateFrequency; // 0x7d8	
	float m_flOscillateHeight; // 0x7dc	
};


#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x15f0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityPsychicPulseVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_DebuffModifier; // 0x14f0	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PulseParticle; // 0x1500	
	// MPropertyStartGroup "+Psychic Pulse Properties"
	float m_flCastEffectLifetime; // 0x15e0	
	float m_flConeAngle; // 0x15e4	
	float m_flConeHalfWidth; // 0x15e8	
};

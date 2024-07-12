#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x15f0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbility_Synth_Blitz_VData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BlitzModifier; // 0x14e0	
	CEmbeddedSubclass< CCitadelModifier > m_TechAmpModifier; // 0x14f0	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SlowParticle; // 0x1500	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strProcSound; // 0x15e0	
};

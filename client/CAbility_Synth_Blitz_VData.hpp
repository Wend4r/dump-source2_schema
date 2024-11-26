#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1670
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbility_Synth_Blitz_VData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BlitzModifier; // 0x1560	
	CEmbeddedSubclass< CCitadelModifier > m_TechAmpModifier; // 0x1570	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SlowParticle; // 0x1580	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strProcSound; // 0x1660	
};


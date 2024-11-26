#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1680
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_FireBombVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x1560	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_ExplodeSound; // 0x1640	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_ProgressBarModifier; // 0x1650	
	CEmbeddedSubclass< CCitadelModifier > m_FireBombModifier; // 0x1660	
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x1670	
};


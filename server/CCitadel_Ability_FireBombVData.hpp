#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1688
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_FireBombVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x1568	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_ExplodeSound; // 0x1648	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_ProgressBarModifier; // 0x1658	
	CEmbeddedSubclass< CCitadelModifier > m_FireBombModifier; // 0x1668	
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x1678	
};


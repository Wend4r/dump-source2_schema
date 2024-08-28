#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1630
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_UtilityUpgrade_AOESmokeBombVData : public CitadelItemVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastCompleteParticle; // 0x1530	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strBuffGainedSound; // 0x1610	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_InvisModifier; // 0x1620	
};


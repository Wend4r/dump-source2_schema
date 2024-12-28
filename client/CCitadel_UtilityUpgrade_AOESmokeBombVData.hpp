#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x16b0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_UtilityUpgrade_AOESmokeBombVData : public CitadelItemVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastCompleteParticle; // 0x15b0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strBuffGainedSound; // 0x1690	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_InvisModifier; // 0x16a0	
};


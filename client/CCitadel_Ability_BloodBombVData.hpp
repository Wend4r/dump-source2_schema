#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x15d8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_BloodBombVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x14e0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SpilledBloodModifier; // 0x15c0	
	// MPropertyStartGroup "Misc"
	CUtlString m_strBloodSpillStatName; // 0x15d0	
};


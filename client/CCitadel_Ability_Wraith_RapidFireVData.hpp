#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1660
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Wraith_RapidFireVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // 0x1560	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_TargetBuffSound; // 0x1640	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_RapidFireModifier; // 0x1650	
};


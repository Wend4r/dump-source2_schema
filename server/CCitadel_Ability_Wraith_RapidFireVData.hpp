#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1668
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Wraith_RapidFireVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // 0x1568	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_TargetBuffSound; // 0x1648	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_RapidFireModifier; // 0x1658	
};


#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x15e0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilitySprintVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SprintParticle; // 0x14e8	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strSprintSound; // 0x15c8	
	// MPropertyStartGroup "+Sprint Properties"
	// MPropertyDescription "How longer after taking or dealing damage are we considered to be in combat?"
	float m_flInCombatDuration; // 0x15d8	
	float m_flSprintAccMS; // 0x15dc	
};


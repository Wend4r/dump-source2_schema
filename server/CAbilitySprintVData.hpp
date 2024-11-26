#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1658
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilitySprintVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SprintParticle; // 0x1560	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strSprintSound; // 0x1640	
	// MPropertyStartGroup "+Sprint Properties"
	// MPropertyDescription "How longer after taking or dealing damage are we considered to be in combat?"
	float m_flInCombatDuration; // 0x1650	
	float m_flSprintAccMS; // 0x1654	
};


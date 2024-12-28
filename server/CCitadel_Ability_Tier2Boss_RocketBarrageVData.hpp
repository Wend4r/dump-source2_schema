#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1678
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Tier2Boss_RocketBarrageVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplosionParticle; // 0x1568	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_ExplosionSound; // 0x1648	
	CSoundEventName m_RocketFireSound; // 0x1658	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_AuraModifier; // 0x1668	
};


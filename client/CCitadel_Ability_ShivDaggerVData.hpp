#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1848
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_ShivDaggerVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DamageDebuffModifier; // 0x1568	
	CEmbeddedSubclass< CCitadelModifier > m_SlowDebuffModifier; // 0x1578	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DaggerStuckParticle; // 0x1588	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DaggerImpactParticle; // 0x1668	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DaggerExplodeParticle; // 0x1748	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strDaggerHitSound; // 0x1828	
	CSoundEventName m_strDaggerExplodeSound; // 0x1838	
};


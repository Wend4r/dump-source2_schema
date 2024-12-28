#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1838
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_ViperHookBladeVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SlowDebuffModifier; // 0x1568	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DaggerStuckParticle; // 0x1578	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DaggerImpactParticle; // 0x1658	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DaggerExplodeParticle; // 0x1738	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strDaggerHitSound; // 0x1818	
	CSoundEventName m_strDaggerExplodeSound; // 0x1828	
};


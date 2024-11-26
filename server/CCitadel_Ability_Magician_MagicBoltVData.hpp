#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1740
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Magician_MagicBoltVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_TargetDebuffModifier; // 0x1560	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x1570	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_RetargetParticle; // 0x1650	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strRedirect; // 0x1730	
};


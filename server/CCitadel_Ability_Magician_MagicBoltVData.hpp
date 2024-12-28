#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1748
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Magician_MagicBoltVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_TargetDebuffModifier; // 0x1568	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x1578	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_RetargetParticle; // 0x1658	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strRedirect; // 0x1738	
};


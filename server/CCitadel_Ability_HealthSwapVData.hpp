#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1768
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_HealthSwapVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SwapParticle; // 0x1568	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SilenceExplodeParticle; // 0x1648	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SwapModifier; // 0x1728	
	CEmbeddedSubclass< CCitadelModifier > m_PreCastModifier; // 0x1738	
	CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // 0x1748	
	CEmbeddedSubclass< CCitadelModifier > m_SilenceModifier; // 0x1758	
};

